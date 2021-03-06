/*
 * Copyright (c) 2021 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include "exynos-bcm_dbg.h"

void __exynos_bcm_get_data(struct exynos_bcm_calc* bcm_calc, u64 *freq_stat0, u64 *freq_stat1, u64
		*freq_stat2, u64 *freq_stat3)
{
	int i;

	*freq_stat0 = 0;
	*freq_stat1 = 0;
	*freq_stat2 = 0;

	for (i = 0; i < bcm_calc->num_ip - 1; i++) {
		*freq_stat0 +=
			(bcm_calc->acc_data[i].pmcnt[0]	+ bcm_calc->acc_data[i].pmcnt[1])
			* 1000 * bcm_calc->bus_width[i]	* bcm_calc->ip_cnt[i];
	}

	*freq_stat1 =
		bcm_calc->acc_data[0].pmcnt[0];

	*freq_stat2 =
		bcm_calc->acc_data[0].pmcnt[3];

	*freq_stat3 =
		(bcm_calc->acc_data[3].pmcnt[0] + bcm_calc->acc_data[3].pmcnt[1])
		* 1000 * bcm_calc->bus_width[3] * bcm_calc->ip_cnt[3];

	*freq_stat0 = *freq_stat0 >> 20;
	*freq_stat3 = *freq_stat3 >> 20;

	return;
}

void __exynos_bcm_trace_mem_bw(unsigned int bandwidth, unsigned int time)
{
}
