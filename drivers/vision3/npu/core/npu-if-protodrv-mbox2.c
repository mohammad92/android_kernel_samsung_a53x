/*
 * Samsung Exynos SoC series NPU driver
 *
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
 *              http://www.samsung.com/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#include <linux/atomic.h>
#include <linux/mutex.h>

#define NPU_LOG_TAG	"if-protodrv-mbox2"

#include "npu-if-protodrv-mbox2.h"
#include "npu-log.h"
#include "interface/hardware/npu-interface.h"

const struct npu_if_protodrv_mbox protodrv_mbox = {
	.dev = NULL,
	.npu_if_protodrv_mbox_ops = &protodrv_mbox_ops,
};

int npu_mbox_op_register_notifier(protodrv_notifier sig_func)
{
	if (likely(protodrv_mbox.npu_if_protodrv_mbox_ops->register_notifier))
		return protodrv_mbox.npu_if_protodrv_mbox_ops->register_notifier(sig_func);

	npu_warn("not defined: register_notifier()\n");
	return 0;
}

/* nw_mbox_ops -> Use npu-if-protodrv-mbox object stored in npu_proto_drv */
int npu_nw_mbox_op_is_available(void)
{
	if (likely(protodrv_mbox.npu_if_protodrv_mbox_ops->nw_result_available))
		return protodrv_mbox.npu_if_protodrv_mbox_ops->nw_result_available();

	npu_warn("not defined: nw_result_available()\n");
	return 0;
}
int npu_nw_mbox_ops_get(struct msgid_pool *pool, struct proto_req_nw **target)
{
	int msgid = 0;
	struct npu_nw nw;
	int ret = 0;

	if (likely(protodrv_mbox.npu_if_protodrv_mbox_ops->nw_get_result))
		ret = protodrv_mbox.npu_if_protodrv_mbox_ops->nw_get_result(&msgid, &nw);
	else {
		npu_warn("not defined: nw_get_result()\n");
		*target = NULL;
		return 0;
	}

	if (unlikely(ret <= 0)) {
		/* No message */
		*target = NULL;
		return ret;
	} else {
		/* Message available */
		*target = msgid_claim_get_ref(pool, msgid, PROTO_DRV_REQ_TYPE_NW);

		if (likely(*target != NULL)) {
			npu_uinfo("mbox->protodrv : NW msgid(%d)\n", &(*target)->nw, msgid);
			(*target)->nw.msgid = -1;
			(*target)->nw.result_code = nw.result_code;
			(*target)->nw.result_value = nw.result_value;
			return 1;
		} else {
			npu_err("failed to find request mapped with msgid[%d]\n", msgid);
			return 0;
		}
	}
}

int npu_nw_mbox_ops_put(struct msgid_pool *pool, struct proto_req_nw *src)
{
	int msgid = 0;
	int ret;

	msgid = msgid_issue_save_ref(pool, PROTO_DRV_REQ_TYPE_NW, src);
	src->nw.msgid = msgid;
	npu_uinfo("protodrv-> : NW msgid(%d)\n", &src->nw, msgid);
	if (unlikely(msgid < 0)) {
		npu_uwarn("no message ID available. Posting message is not temporally available.\n", &src->nw);
		return 0;
	}

	/* Generate mailbox message with given msgid and post it */
	if (likely(protodrv_mbox.npu_if_protodrv_mbox_ops->nw_post_request))
		ret = protodrv_mbox.npu_if_protodrv_mbox_ops->nw_post_request(msgid, &src->nw);
	else {
		npu_warn("not defined: nw_post_request()\n");
		return 0;
	}

	if (unlikely(ret <= 0)) {
		/* Push failed -> return msgid */
		npu_utrace("nw_post_request failed. Reclaiming msgid(%d)\n", &src->nw, msgid);
		msgid_claim(pool, msgid);
	}
	return ret;
}

/* frame_mbox_ops -> Use npu-if-protodrv-mbox object stored in npu_proto_drv */
int npu_frame_mbox_op_is_available(void)
{
	if (likely(protodrv_mbox.npu_if_protodrv_mbox_ops->frame_result_available))
		return protodrv_mbox.npu_if_protodrv_mbox_ops->frame_result_available();

	npu_warn("not defined: frame_result_available()\n");
	return 0;
}
int npu_frame_mbox_ops_get(struct msgid_pool *pool, struct proto_req_frame **target)
{
	int msgid = 0;
	struct npu_frame frame;
	int ret = 0;

	if (likely(protodrv_mbox.npu_if_protodrv_mbox_ops->frame_get_result))
		ret = protodrv_mbox.npu_if_protodrv_mbox_ops->frame_get_result(&msgid, &frame);
	else {
		npu_warn("not defined: frame_get_result()\n");
		*target = NULL;
		return 0;
	}

	if (unlikely(ret <= 0)) {
		/* No message */
		*target = NULL;
		return ret;
	} else {
		*target = msgid_claim_get_ref(pool, msgid, PROTO_DRV_REQ_TYPE_FRAME);

		if (likely(*target != NULL)) {
			npu_ufnotice("mbox->protodrv : frame msgid(%d)\n", &(*target)->frame, msgid);
			(*target)->frame.msgid = -1;
			(*target)->frame.result_code = frame.result_code;
			(*target)->frame.output->timestamp[5].tv_usec = frame.duration;
			return 1;
		} else {
			npu_err("failed to find request mapped with msgid[%d]\n", msgid);
			return 0;
		}
	}
}

int npu_frame_mbox_ops_put(struct msgid_pool *pool, struct proto_req_frame *src)
{
	int msgid = 0;
	int ret;

	msgid = msgid_issue_save_ref(pool, PROTO_DRV_REQ_TYPE_FRAME, src);
	src->frame.msgid = msgid;
	npu_ufnotice("protodrv-> : FRAME msgid(%d)\n", &src->frame, msgid);
	if (unlikely(msgid < 0)) {
		npu_ufwarn("no message ID available. Posting message is not temporally available.\n", &src->frame);
		return 0;
	}

	/* Generate mailbox message with given msgid and post it */
	if (likely(protodrv_mbox.npu_if_protodrv_mbox_ops->frame_post_request))
		ret = protodrv_mbox.npu_if_protodrv_mbox_ops->frame_post_request(msgid, &src->frame);
	else {
		npu_warn("not defined: frame_post_request()\n");
		return 0;
	}

	if (unlikely(ret <= 0)) {
		/* Push failed -> return msgid */
		npu_uftrace("frame_post_request failed. Reclaiming msgid(%d)\n", &src->frame, msgid);
		msgid_claim(pool, msgid);
	}
	return ret;
}

int npu_mbox_op_register_msgid_type_getter(int (*msgid_get_type_func)(int))
{
	if (likely(protodrv_mbox.npu_if_protodrv_mbox_ops->register_msgid_type_getter))
		return protodrv_mbox.npu_if_protodrv_mbox_ops->register_msgid_type_getter(msgid_get_type_func);

	npu_warn("not defined: register_msgid_type_getter()\n");
	return 0;
}
