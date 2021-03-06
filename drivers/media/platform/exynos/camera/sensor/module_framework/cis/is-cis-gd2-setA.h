/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2018 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_GD2_SET_A_H
#define IS_CIS_GD2_SET_A_H

#include "is-cis.h"
#include "is-cis-gd2.h"

/*
 * [Mode Information]
 *
 * Reference File : S5KGD2SP_EVT0_Setfile_Ver1.4_190729.xlsx
 * Update Data    : 2019-07-30
 * Author         : kmin.kim
 *
 * - Remosaic Full For Single Still Remosaic Capture -
 *    [  0 ] FULL : Remosaic Full 8000x6000 10fps       : Single Still Remosaic Capture (4:3)
 *
 * - 2x2 BIN For Still Preview / Capture -
 *    [  1 ] 2SUM2BIN : 2 Binning Full 4000x3000 30fps    : Single Still Preview/Capture (4:3)
 *    [  2 ] 2SUM2BIN : 2 Binning Crop 4000X2256 30fps    : Single Still Preview/Capture (16:9)
 *    [  3 ] 2SUM2BIN : 2 Binning Crop 4000X1844 30fps    : Single Still Preview/Capture (19.5:9)
 *    [  4 ] 2SUM2BIN : 2 Binning Crop 3680X3000 30fps    : MMS (11:9)
 *    [  5 ] 2SUM2BIN : 2 Binning Crop 3000X3000 30fps    : Single Still Preview/Capture (1:1)
 *    [  6 ] 4SUM4BIN : 4 Binning Full 2000X1500 94fps    : Fast-AE (2000x1500@94fps)
 *    [  7 ] 4SUM4BIN : 4 Binning Crop 2000X1128 120fps   : SlowMotion (1280x720@120fps)
 *    [  8 ] 4SUM4BIN : 4 Binning Crop 1920X1080 240fps   : SlowMotion (1280x720@240fps)
 *
 */

const u32 sensor_gd2_setfile_A_REMOSAIC_FULL_8000x6000_10FPS[] = {
	0x6214, 0xF9F3, 0x02,
	0x0340, 0x17E3, 0x02,
	0x0342, 0x2800, 0x02,
	0x0344, 0x0000, 0x02,
	0x0346, 0x0000, 0x02,
	0x0348, 0x1F3F, 0x02,
	0x034A, 0x176F, 0x02,
	0x034C, 0x1F40, 0x02,
	0x034E, 0x1770, 0x02,
	0x0350, 0x0000, 0x02,
	0x0352, 0x0000, 0x02,
	0x0900, 0x0111, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x1010, 0x02,
	0x0402, 0x1010, 0x02,
	0x0404, 0x1000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0005, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x00B9, 0x02,
	0x0308, 0x0008, 0x02,
	0x030A, 0x0001, 0x02,
	0x030C, 0x0000, 0x02,
	0x030E, 0x0004, 0x02,
	0x0310, 0x009E, 0x02,
	0x0312, 0x0000, 0x02,
	0x0702, 0x0000, 0x02,
	0x0202, 0x0020, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0E36, 0x02,
	0x6F12, 0x000A, 0x02,
	0x602A, 0x1250, 0x02,
	0x6F12, 0x0004, 0x02,
	0xF44A, 0x0005, 0x02,
	0xF454, 0x0011, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x10C0, 0x02,
	0x6F12, 0xBFC0, 0x02,
	0x6F12, 0xBFC0, 0x02,
	0x602A, 0x3B24, 0x02,
	0x6F12, 0x0006, 0x02,
	0x9C02, 0x1FC0, 0x02,
	0x9C04, 0x1FC7, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x3630, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x3632, 0x02,
	0x6F12, 0x0020, 0x02,
	0x602A, 0x11B4, 0x02,
	0x6F12, 0x0020, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0DD6, 0x02,
	0x6F12, 0x000A, 0x02,
	0x602A, 0x0DDC, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x1EAC, 0x02,
	0x6F12, 0x0096, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x33B0, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x33B6, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x33FC, 0x02,
	0x6F12, 0x0604, 0x02,
	0x602A, 0x33FE, 0x02,
	0x6F12, 0x0704, 0x02,
	0x602A, 0x3462, 0x02,
	0x6F12, 0x1401, 0x02,
	0x602A, 0x347C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34A6, 0x02,
	0x6F12, 0x5555, 0x02,
	0x602A, 0x34F2, 0x02,
	0x6F12, 0x0000, 0x02,
	0x0D00, 0x0101, 0x02,
	0x0D02, 0x0001, 0x02,
	0x0114, 0x0300, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x116E, 0x02,
	0x6F12, 0x0003, 0x02,
	0x602A, 0x1172, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x6C0E, 0x02,
	0x6F12, 0x0200, 0x02,
	0x602A, 0x2A10, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x2A80, 0x02,
	0x6F12, 0x0200, 0x02,
	0x602A, 0x0E6E, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x6C0A, 0x02,
	0x6F12, 0x00CF, 0x02,
	0x6F12, 0x00A8, 0x02,
	0xB134, 0x0100, 0x02,
	0x0BC8, 0x0002, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39AA, 0x02,
	0x6F12, 0x0003, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x39BA, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x39C4, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x2266, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x227A, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x0E26, 0x02,
	0x6F12, 0x0FD2, 0x02,
	0x6F12, 0x0C4E, 0x02,
	0x602A, 0x1E7E, 0x02,
	0x6F12, 0x0401, 0x02,
	0x602A, 0x2450, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x25F8, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34D8, 0x02,
	0x6F12, 0x0040, 0x02,
	0x6F12, 0x0040, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39B0, 0x02,
	0x6F12, 0x001E, 0x02,
	0x6F12, 0x001E, 0x02,
	0x6F12, 0x001E, 0x02,
	0x6F12, 0x001E, 0x02,
};

const u32 sensor_gd2_setfile_A_2X2BIN_FULL_4000x3000_30FPS[] = {
	0x6214, 0xF9F3, 0x02,
	0x0340, 0x0C8A, 0x02,
	0x0342, 0x2700, 0x02,
	0x0344, 0x0000, 0x02,
	0x0346, 0x0000, 0x02,
	0x0348, 0x1F3F, 0x02,
	0x034A, 0x176F, 0x02,
	0x034C, 0x0FA0, 0x02,
	0x034E, 0x0BB8, 0x02,
	0x0350, 0x0000, 0x02,
	0x0352, 0x0000, 0x02,
	0x0900, 0x0112, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0002, 0x02,
	0x0386, 0x0002, 0x02,
	0x0400, 0x2010, 0x02,
	0x0402, 0x1010, 0x02,
	0x0404, 0x1000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0008, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x00DE, 0x02,
	0x0308, 0x0008, 0x02,
	0x030A, 0x0001, 0x02,
	0x030C, 0x0000, 0x02,
	0x030E, 0x0004, 0x02,
	0x0310, 0x0068, 0x02,
	0x0312, 0x0000, 0x02,
	0x0702, 0x0000, 0x02,
	0x0202, 0x0020, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0E36, 0x02,
	0x6F12, 0x000A, 0x02,
	0x602A, 0x1250, 0x02,
	0x6F12, 0x0002, 0x02,
	0xF44A, 0x0007, 0x02,
	0xF454, 0x0011, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x10C0, 0x02,
	0x6F12, 0xBFC0, 0x02,
	0x6F12, 0xBFC1, 0x02,
	0x602A, 0x3B24, 0x02,
	0x6F12, 0x000A, 0x02,
	0x9C02, 0x1FC0, 0x02,
	0x9C04, 0x1FC7, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x3630, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x3632, 0x02,
	0x6F12, 0x00B0, 0x02,
	0x602A, 0x11B4, 0x02,
	0x6F12, 0x0190, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0DD6, 0x02,
	0x6F12, 0x0008, 0x02,
	0x602A, 0x0DDC, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x1EAC, 0x02,
	0x6F12, 0x0096, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x33B0, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x33B6, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x33FC, 0x02,
	0x6F12, 0x0604, 0x02,
	0x602A, 0x33FE, 0x02,
	0x6F12, 0x0704, 0x02,
	0x602A, 0x3462, 0x02,
	0x6F12, 0x0501, 0x02,
	0x602A, 0x347C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34A6, 0x02,
	0x6F12, 0x5555, 0x02,
	0x602A, 0x34F2, 0x02,
	0x6F12, 0x0000, 0x02,
	0x0D00, 0x0101, 0x02,
	0x0D02, 0x0101, 0x02,
	0x0114, 0x0301, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x116E, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x1172, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x6C0E, 0x02,
	0x6F12, 0x0200, 0x02,
	0x602A, 0x2A10, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x2A80, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x0E6E, 0x02,
	0x6F12, 0x0045, 0x02,
	0x602A, 0x6C0A, 0x02,
	0x6F12, 0x00CF, 0x02,
	0x6F12, 0x00A8, 0x02,
	0xB134, 0x0000, 0x02,
	0x0BC8, 0x0102, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39AA, 0x02,
	0x6F12, 0x0003, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39BA, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39C4, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x2266, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x227A, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x0E26, 0x02,
	0x6F12, 0x1250, 0x02,
	0x6F12, 0x0ECC, 0x02,
	0x602A, 0x1E7E, 0x02,
	0x6F12, 0x0400, 0x02,
	0x602A, 0x2450, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x25F8, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34D8, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39B0, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
};

const u32 sensor_gd2_setfile_A_2X2BIN_CROP_4000x2256_30FPS[] = {
	0x6214, 0xF9F3, 0x02,
	0x0340, 0x0C8A, 0x02,
	0x0342, 0x2700, 0x02,
	0x0344, 0x0000, 0x02,
	0x0346, 0x02E8, 0x02,
	0x0348, 0x1F3F, 0x02,
	0x034A, 0x1487, 0x02,
	0x034C, 0x0FA0, 0x02,
	0x034E, 0x08D0, 0x02,
	0x0350, 0x0000, 0x02,
	0x0352, 0x0000, 0x02,
	0x0900, 0x0112, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0002, 0x02,
	0x0386, 0x0002, 0x02,
	0x0400, 0x2010, 0x02,
	0x0402, 0x1010, 0x02,
	0x0404, 0x1000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0008, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x00DE, 0x02,
	0x0308, 0x0008, 0x02,
	0x030A, 0x0001, 0x02,
	0x030C, 0x0000, 0x02,
	0x030E, 0x0004, 0x02,
	0x0310, 0x0068, 0x02,
	0x0312, 0x0000, 0x02,
	0x0702, 0x0000, 0x02,
	0x0202, 0x0020, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0E36, 0x02,
	0x6F12, 0x000A, 0x02,
	0x602A, 0x1250, 0x02,
	0x6F12, 0x0002, 0x02,
	0xF44A, 0x0007, 0x02,
	0xF454, 0x0011, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x10C0, 0x02,
	0x6F12, 0xBFC0, 0x02,
	0x6F12, 0xBFC1, 0x02,
	0x602A, 0x3B24, 0x02,
	0x6F12, 0x000A, 0x02,
	0x9C02, 0x1FC0, 0x02,
	0x9C04, 0x1FC7, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x3630, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x3632, 0x02,
	0x6F12, 0x00B0, 0x02,
	0x602A, 0x11B4, 0x02,
	0x6F12, 0x0190, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0DD6, 0x02,
	0x6F12, 0x0008, 0x02,
	0x602A, 0x0DDC, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x1EAC, 0x02,
	0x6F12, 0x0096, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x33B0, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x33B6, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x33FC, 0x02,
	0x6F12, 0x0604, 0x02,
	0x602A, 0x33FE, 0x02,
	0x6F12, 0x0704, 0x02,
	0x602A, 0x3462, 0x02,
	0x6F12, 0x0501, 0x02,
	0x602A, 0x347C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34A6, 0x02,
	0x6F12, 0x5555, 0x02,
	0x602A, 0x34F2, 0x02,
	0x6F12, 0x0000, 0x02,
	0x0D00, 0x0101, 0x02,
	0x0D02, 0x0101, 0x02,
	0x0114, 0x0301, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x116E, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x1172, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x6C0E, 0x02,
	0x6F12, 0x0200, 0x02,
	0x602A, 0x2A10, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x2A80, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x0E6E, 0x02,
	0x6F12, 0x0045, 0x02,
	0x602A, 0x6C0A, 0x02,
	0x6F12, 0x00CF, 0x02,
	0x6F12, 0x00A8, 0x02,
	0xB134, 0x0000, 0x02,
	0x0BC8, 0x0102, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39AA, 0x02,
	0x6F12, 0x0003, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39BA, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39C4, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x2266, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x227A, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x0E26, 0x02,
	0x6F12, 0x1250, 0x02,
	0x6F12, 0x0ECC, 0x02,
	0x602A, 0x1E7E, 0x02,
	0x6F12, 0x0400, 0x02,
	0x602A, 0x2450, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x25F8, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34D8, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39B0, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
};

const u32 sensor_gd2_setfile_A_2X2BIN_CROP_4000x1844_30FPS[] = {
	0x6214, 0xF9F3, 0x02,
	0x0340, 0x0C8A, 0x02,
	0x0342, 0x2700, 0x02,
	0x0344, 0x0000, 0x02,
	0x0346, 0x0484, 0x02,
	0x0348, 0x1F3F, 0x02,
	0x034A, 0x12EB, 0x02,
	0x034C, 0x0FA0, 0x02,
	0x034E, 0x0734, 0x02,
	0x0350, 0x0000, 0x02,
	0x0352, 0x0000, 0x02,
	0x0900, 0x0112, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0002, 0x02,
	0x0386, 0x0002, 0x02,
	0x0400, 0x2010, 0x02,
	0x0402, 0x1010, 0x02,
	0x0404, 0x1000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0008, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x00DE, 0x02,
	0x0308, 0x0008, 0x02,
	0x030A, 0x0001, 0x02,
	0x030C, 0x0000, 0x02,
	0x030E, 0x0004, 0x02,
	0x0310, 0x0068, 0x02,
	0x0312, 0x0000, 0x02,
	0x0702, 0x0000, 0x02,
	0x0202, 0x0020, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0E36, 0x02,
	0x6F12, 0x000A, 0x02,
	0x602A, 0x1250, 0x02,
	0x6F12, 0x0002, 0x02,
	0xF44A, 0x0007, 0x02,
	0xF454, 0x0011, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x10C0, 0x02,
	0x6F12, 0xBFC0, 0x02,
	0x6F12, 0xBFC1, 0x02,
	0x602A, 0x3B24, 0x02,
	0x6F12, 0x000A, 0x02,
	0x9C02, 0x1FC0, 0x02,
	0x9C04, 0x1FC7, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x3630, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x3632, 0x02,
	0x6F12, 0x00B0, 0x02,
	0x602A, 0x11B4, 0x02,
	0x6F12, 0x0190, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0DD6, 0x02,
	0x6F12, 0x0008, 0x02,
	0x602A, 0x0DDC, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x1EAC, 0x02,
	0x6F12, 0x0096, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x33B0, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x33B6, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x33FC, 0x02,
	0x6F12, 0x0604, 0x02,
	0x602A, 0x33FE, 0x02,
	0x6F12, 0x0704, 0x02,
	0x602A, 0x3462, 0x02,
	0x6F12, 0x0501, 0x02,
	0x602A, 0x347C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34A6, 0x02,
	0x6F12, 0x5555, 0x02,
	0x602A, 0x34F2, 0x02,
	0x6F12, 0x0000, 0x02,
	0x0D00, 0x0101, 0x02,
	0x0D02, 0x0101, 0x02,
	0x0114, 0x0301, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x116E, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x1172, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x6C0E, 0x02,
	0x6F12, 0x0200, 0x02,
	0x602A, 0x2A10, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x2A80, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x0E6E, 0x02,
	0x6F12, 0x0045, 0x02,
	0x602A, 0x6C0A, 0x02,
	0x6F12, 0x00CF, 0x02,
	0x6F12, 0x00A8, 0x02,
	0xB134, 0x0000, 0x02,
	0x0BC8, 0x0102, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39AA, 0x02,
	0x6F12, 0x0003, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39BA, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39C4, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x2266, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x227A, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x0E26, 0x02,
	0x6F12, 0x1250, 0x02,
	0x6F12, 0x0ECC, 0x02,
	0x602A, 0x1E7E, 0x02,
	0x6F12, 0x0400, 0x02,
	0x602A, 0x2450, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x25F8, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34D8, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39B0, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
};

const u32 sensor_gd2_setfile_A_2X2BIN_CROP_3680x3000_30FPS[] = {
	0x6214, 0xF9F3, 0x02,
	0x0340, 0x0C8A, 0x02,
	0x0342, 0x2700, 0x02,
	0x0344, 0x0080, 0x02,
	0x0346, 0x0000, 0x02,
	0x0348, 0x1D3F, 0x02,
	0x034A, 0x176F, 0x02,
	0x034C, 0x0E60, 0x02,
	0x034E, 0x0BB8, 0x02,
	0x0350, 0x0000, 0x02,
	0x0352, 0x0000, 0x02,
	0x0900, 0x0112, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0002, 0x02,
	0x0386, 0x0002, 0x02,
	0x0400, 0x2010, 0x02,
	0x0402, 0x1010, 0x02,
	0x0404, 0x1000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0008, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x00DE, 0x02,
	0x0308, 0x0008, 0x02,
	0x030A, 0x0001, 0x02,
	0x030C, 0x0000, 0x02,
	0x030E, 0x0004, 0x02,
	0x0310, 0x0068, 0x02,
	0x0312, 0x0000, 0x02,
	0x0702, 0x0000, 0x02,
	0x0202, 0x0020, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0E36, 0x02,
	0x6F12, 0x000A, 0x02,
	0x602A, 0x1250, 0x02,
	0x6F12, 0x0002, 0x02,
	0xF44A, 0x0007, 0x02,
	0xF454, 0x0011, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x10C0, 0x02,
	0x6F12, 0xBFC0, 0x02,
	0x6F12, 0xBFC1, 0x02,
	0x602A, 0x3B24, 0x02,
	0x6F12, 0x000A, 0x02,
	0x9C02, 0x1FC0, 0x02,
	0x9C04, 0x1FC7, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x3630, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x3632, 0x02,
	0x6F12, 0x00B0, 0x02,
	0x602A, 0x11B4, 0x02,
	0x6F12, 0x0190, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0DD6, 0x02,
	0x6F12, 0x0008, 0x02,
	0x602A, 0x0DDC, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x1EAC, 0x02,
	0x6F12, 0x0096, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x33B0, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x33B6, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x33FC, 0x02,
	0x6F12, 0x0604, 0x02,
	0x602A, 0x33FE, 0x02,
	0x6F12, 0x0704, 0x02,
	0x602A, 0x3462, 0x02,
	0x6F12, 0x0501, 0x02,
	0x602A, 0x347C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34A6, 0x02,
	0x6F12, 0x5555, 0x02,
	0x602A, 0x34F2, 0x02,
	0x6F12, 0x0000, 0x02,
	0x0D00, 0x0101, 0x02,
	0x0D02, 0x0101, 0x02,
	0x0114, 0x0301, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x116E, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x1172, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x6C0E, 0x02,
	0x6F12, 0x0200, 0x02,
	0x602A, 0x2A10, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x2A80, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x0E6E, 0x02,
	0x6F12, 0x0045, 0x02,
	0x602A, 0x6C0A, 0x02,
	0x6F12, 0x00CF, 0x02,
	0x6F12, 0x00A8, 0x02,
	0xB134, 0x0000, 0x02,
	0x0BC8, 0x0102, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39AA, 0x02,
	0x6F12, 0x0003, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39BA, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39C4, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x2266, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x227A, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x0E26, 0x02,
	0x6F12, 0x1250, 0x02,
	0x6F12, 0x0ECC, 0x02,
	0x602A, 0x1E7E, 0x02,
	0x6F12, 0x0400, 0x02,
	0x602A, 0x2450, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x25F8, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34D8, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39B0, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
};

const u32 sensor_gd2_setfile_A_2X2BIN_CROP_3000x3000_30FPS[] = {
	0x6214, 0xF9F3, 0x02,
	0x0340, 0x0C8A, 0x02,
	0x0342, 0x2700, 0x02,
	0x0344, 0x03C0, 0x02,
	0x0346, 0x0000, 0x02,
	0x0348, 0x1B3F, 0x02,
	0x034A, 0x176F, 0x02,
	0x034C, 0x0BB8, 0x02,
	0x034E, 0x0BB8, 0x02,
	0x0350, 0x0004, 0x02,
	0x0352, 0x0000, 0x02,
	0x0900, 0x0112, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0002, 0x02,
	0x0386, 0x0002, 0x02,
	0x0400, 0x2010, 0x02,
	0x0402, 0x1010, 0x02,
	0x0404, 0x1000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0008, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x00DE, 0x02,
	0x0308, 0x0008, 0x02,
	0x030A, 0x0001, 0x02,
	0x030C, 0x0000, 0x02,
	0x030E, 0x0004, 0x02,
	0x0310, 0x0068, 0x02,
	0x0312, 0x0000, 0x02,
	0x0702, 0x0000, 0x02,
	0x0202, 0x0020, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0E36, 0x02,
	0x6F12, 0x000A, 0x02,
	0x602A, 0x1250, 0x02,
	0x6F12, 0x0002, 0x02,
	0xF44A, 0x0007, 0x02,
	0xF454, 0x0011, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x10C0, 0x02,
	0x6F12, 0xBFC0, 0x02,
	0x6F12, 0xBFC1, 0x02,
	0x602A, 0x3B24, 0x02,
	0x6F12, 0x000A, 0x02,
	0x9C02, 0x1FC0, 0x02,
	0x9C04, 0x1FC7, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x3630, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x3632, 0x02,
	0x6F12, 0x00B0, 0x02,
	0x602A, 0x11B4, 0x02,
	0x6F12, 0x0190, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0DD6, 0x02,
	0x6F12, 0x0008, 0x02,
	0x602A, 0x0DDC, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x1EAC, 0x02,
	0x6F12, 0x0096, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x33B0, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x33B6, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x33FC, 0x02,
	0x6F12, 0x0604, 0x02,
	0x602A, 0x33FE, 0x02,
	0x6F12, 0x0704, 0x02,
	0x602A, 0x3462, 0x02,
	0x6F12, 0x0501, 0x02,
	0x602A, 0x347C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34A6, 0x02,
	0x6F12, 0x5555, 0x02,
	0x602A, 0x34F2, 0x02,
	0x6F12, 0x0000, 0x02,
	0x0D00, 0x0101, 0x02,
	0x0D02, 0x0101, 0x02,
	0x0114, 0x0301, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x116E, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x1172, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x6C0E, 0x02,
	0x6F12, 0x0200, 0x02,
	0x602A, 0x2A10, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x2A80, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x0E6E, 0x02,
	0x6F12, 0x0045, 0x02,
	0x602A, 0x6C0A, 0x02,
	0x6F12, 0x00CF, 0x02,
	0x6F12, 0x00A8, 0x02,
	0xB134, 0x0000, 0x02,
	0x0BC8, 0x0102, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39AA, 0x02,
	0x6F12, 0x0003, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39BA, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39C4, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x2266, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x227A, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x0E26, 0x02,
	0x6F12, 0x1250, 0x02,
	0x6F12, 0x0ECC, 0x02,
	0x602A, 0x1E7E, 0x02,
	0x6F12, 0x0400, 0x02,
	0x602A, 0x2450, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x25F8, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34D8, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39B0, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
};

const u32 sensor_gd2_setfile_A_4X4BIN_FULL_2000x1500_94FPS[] = {
	0x6214, 0xF9F3, 0x02,
	0x0340, 0x064C, 0x02,
	0x0342, 0x1080, 0x02,
	0x0344, 0x0000, 0x02,
	0x0346, 0x0000, 0x02,
	0x0348, 0x1F3F, 0x02,
	0x034A, 0x176F, 0x02,
	0x034C, 0x07D0, 0x02,
	0x034E, 0x05DC, 0x02,
	0x0350, 0x0000, 0x02,
	0x0352, 0x0000, 0x02,
	0x0900, 0x0124, 0x02,
	0x0380, 0x0002, 0x02,
	0x0382, 0x0002, 0x02,
	0x0384, 0x0002, 0x02,
	0x0386, 0x0006, 0x02,
	0x0400, 0x1010, 0x02,
	0x0402, 0x1010, 0x02,
	0x0404, 0x2000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0005, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x00B9, 0x02,
	0x0308, 0x0008, 0x02,
	0x030A, 0x0001, 0x02,
	0x030C, 0x0000, 0x02,
	0x030E, 0x0004, 0x02,
	0x0310, 0x0068, 0x02,
	0x0312, 0x0000, 0x02,
	0x0702, 0x0000, 0x02,
	0x0202, 0x0020, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0E36, 0x02,
	0x6F12, 0x000A, 0x02,
	0x602A, 0x1250, 0x02,
	0x6F12, 0x0002, 0x02,
	0xF44A, 0x0007, 0x02,
	0xF454, 0x0011, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x10C0, 0x02,
	0x6F12, 0xBFC2, 0x02,
	0x6F12, 0xBFC3, 0x02,
	0x602A, 0x3B24, 0x02,
	0x6F12, 0x0008, 0x02,
	0x9C02, 0x0FE0, 0x02,
	0x9C04, 0x0FE7, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x3630, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x3632, 0x02,
	0x6F12, 0x0240, 0x02,
	0x602A, 0x11B4, 0x02,
	0x6F12, 0x0040, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0DD6, 0x02,
	0x6F12, 0x000A, 0x02,
	0x602A, 0x0DDC, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x1EAC, 0x02,
	0x6F12, 0x0096, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x33B0, 0x02,
	0x6F12, 0x0008, 0x02,
	0x602A, 0x33B6, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x33FC, 0x02,
	0x6F12, 0x0604, 0x02,
	0x602A, 0x33FE, 0x02,
	0x6F12, 0x0704, 0x02,
	0x602A, 0x3462, 0x02,
	0x6F12, 0x7701, 0x02,
	0x602A, 0x347C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34A6, 0x02,
	0x6F12, 0x5555, 0x02,
	0x602A, 0x34F2, 0x02,
	0x6F12, 0x0001, 0x02,
	0x0D00, 0x0101, 0x02,
	0x0D02, 0x0001, 0x02,
	0x0114, 0x0300, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x116E, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x1172, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x6C0E, 0x02,
	0x6F12, 0x0200, 0x02,
	0x602A, 0x2A10, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x2A80, 0x02,
	0x6F12, 0x0200, 0x02,
	0x602A, 0x0E6E, 0x02,
	0x6F12, 0xFFFF, 0x02,
	0x602A, 0x6C0A, 0x02,
	0x6F12, 0x01CF, 0x02,
	0x6F12, 0x00A8, 0x02,
	0xB134, 0x0100, 0x02,
	0x0BC8, 0x0002, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39AA, 0x02,
	0x6F12, 0x0002, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39BA, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x39C4, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x2266, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x227A, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x0E26, 0x02,
	0x6F12, 0x0440, 0x02,
	0x6F12, 0x0440, 0x02,
	0x602A, 0x1E7E, 0x02,
	0x6F12, 0x0401, 0x02,
	0x602A, 0x2450, 0x02,
	0x6F12, 0x0005, 0x02,
	0x602A, 0x25F8, 0x02,
	0x6F12, 0xAAAA, 0x02,
	0x602A, 0x34D8, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39B0, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
};

const u32 sensor_gd2_setfile_A_4X4BIN_CROP_2000x1128_120FPS[] = {
	0x6214, 0xF9F3, 0x02,
	0x0340, 0x04F0, 0x02,
	0x0342, 0x1080, 0x02,
	0x0344, 0x0000, 0x02,
	0x0346, 0x02E8, 0x02,
	0x0348, 0x1F3F, 0x02,
	0x034A, 0x1487, 0x02,
	0x034C, 0x07D0, 0x02,
	0x034E, 0x0468, 0x02,
	0x0350, 0x0000, 0x02,
	0x0352, 0x0000, 0x02,
	0x0900, 0x0124, 0x02,
	0x0380, 0x0002, 0x02,
	0x0382, 0x0002, 0x02,
	0x0384, 0x0002, 0x02,
	0x0386, 0x0006, 0x02,
	0x0400, 0x1010, 0x02,
	0x0402, 0x1010, 0x02,
	0x0404, 0x2000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0005, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x00B9, 0x02,
	0x0308, 0x0008, 0x02,
	0x030A, 0x0001, 0x02,
	0x030C, 0x0000, 0x02,
	0x030E, 0x0004, 0x02,
	0x0310, 0x0068, 0x02,
	0x0312, 0x0000, 0x02,
	0x0702, 0x0000, 0x02,
	0x0202, 0x0020, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0E36, 0x02,
	0x6F12, 0x000A, 0x02,
	0x602A, 0x1250, 0x02,
	0x6F12, 0x0002, 0x02,
	0xF44A, 0x0007, 0x02,
	0xF454, 0x0011, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x10C0, 0x02,
	0x6F12, 0xBFC2, 0x02,
	0x6F12, 0xBFC3, 0x02,
	0x602A, 0x3B24, 0x02,
	0x6F12, 0x0008, 0x02,
	0x9C02, 0x0FE0, 0x02,
	0x9C04, 0x0FE7, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x3630, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x3632, 0x02,
	0x6F12, 0x0240, 0x02,
	0x602A, 0x11B4, 0x02,
	0x6F12, 0x0040, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0DD6, 0x02,
	0x6F12, 0x000A, 0x02,
	0x602A, 0x0DDC, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x1EAC, 0x02,
	0x6F12, 0x0096, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x33B0, 0x02,
	0x6F12, 0x0008, 0x02,
	0x602A, 0x33B6, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x33FC, 0x02,
	0x6F12, 0x0604, 0x02,
	0x602A, 0x33FE, 0x02,
	0x6F12, 0x0704, 0x02,
	0x602A, 0x3462, 0x02,
	0x6F12, 0x7701, 0x02,
	0x602A, 0x347C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34A6, 0x02,
	0x6F12, 0x5555, 0x02,
	0x602A, 0x34F2, 0x02,
	0x6F12, 0x0001, 0x02,
	0x0D00, 0x0101, 0x02,
	0x0D02, 0x0001, 0x02,
	0x0114, 0x0300, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x116E, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x1172, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x6C0E, 0x02,
	0x6F12, 0x0200, 0x02,
	0x602A, 0x2A10, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x2A80, 0x02,
	0x6F12, 0x0200, 0x02,
	0x602A, 0x0E6E, 0x02,
	0x6F12, 0xFFFF, 0x02,
	0x602A, 0x6C0A, 0x02,
	0x6F12, 0x01CF, 0x02,
	0x6F12, 0x00A8, 0x02,
	0xB134, 0x0100, 0x02,
	0x0BC8, 0x0002, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39AA, 0x02,
	0x6F12, 0x0002, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39BA, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x39C4, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x2266, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x227A, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x0E26, 0x02,
	0x6F12, 0x0440, 0x02,
	0x6F12, 0x0440, 0x02,
	0x602A, 0x1E7E, 0x02,
	0x6F12, 0x0401, 0x02,
	0x602A, 0x2450, 0x02,
	0x6F12, 0x0005, 0x02,
	0x602A, 0x25F8, 0x02,
	0x6F12, 0xAAAA, 0x02,
	0x602A, 0x34D8, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39B0, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
};

const u32 sensor_gd2_setfile_A_4X4BIN_CROP_1920x1080_240FPS[] = {
	0x6214, 0xF9F3, 0x02,
	0x0340, 0x04F8, 0x02,
	0x0342, 0x0840, 0x02,
	0x0344, 0x00A0, 0x02,
	0x0346, 0x0348, 0x02,
	0x0348, 0x1E9F, 0x02,
	0x034A, 0x1427, 0x02,
	0x034C, 0x0780, 0x02,
	0x034E, 0x0438, 0x02,
	0x0350, 0x0000, 0x02,
	0x0352, 0x0000, 0x02,
	0x0900, 0x0144, 0x02,
	0x0380, 0x0002, 0x02,
	0x0382, 0x0006, 0x02,
	0x0384, 0x0002, 0x02,
	0x0386, 0x0006, 0x02,
	0x0400, 0x1010, 0x02,
	0x0402, 0x1010, 0x02,
	0x0404, 0x1000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0005, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0007, 0x02,
	0x0306, 0x00DA, 0x02,
	0x0308, 0x0008, 0x02,
	0x030A, 0x0001, 0x02,
	0x030C, 0x0000, 0x02,
	0x030E, 0x0004, 0x02,
	0x0310, 0x009E, 0x02,
	0x0312, 0x0000, 0x02,
	0x0702, 0x0000, 0x02,
	0x0202, 0x0020, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0E36, 0x02,
	0x6F12, 0x000A, 0x02,
	0x602A, 0x1250, 0x02,
	0x6F12, 0x0002, 0x02,
	0xF44A, 0x0007, 0x02,
	0xF454, 0x0011, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x10C0, 0x02,
	0x6F12, 0xBFC2, 0x02,
	0x6F12, 0xBFC3, 0x02,
	0x602A, 0x3B24, 0x02,
	0x6F12, 0x0008, 0x02,
	0x9C02, 0x0FE0, 0x02,
	0x9C04, 0x0FE7, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x3630, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x3632, 0x02,
	0x6F12, 0x01A0, 0x02,
	0x602A, 0x11B4, 0x02,
	0x6F12, 0x00D0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0DD6, 0x02,
	0x6F12, 0x000A, 0x02,
	0x602A, 0x0DDC, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x1EAC, 0x02,
	0x6F12, 0x0096, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x33B0, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x33B6, 0x02,
	0x6F12, 0x0003, 0x02,
	0x602A, 0x33FC, 0x02,
	0x6F12, 0x0604, 0x02,
	0x602A, 0x33FE, 0x02,
	0x6F12, 0x0704, 0x02,
	0x602A, 0x3462, 0x02,
	0x6F12, 0x7701, 0x02,
	0x602A, 0x347C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34A6, 0x02,
	0x6F12, 0x5555, 0x02,
	0x602A, 0x34F2, 0x02,
	0x6F12, 0x0001, 0x02,
	0x0D00, 0x0101, 0x02,
	0x0D02, 0x0001, 0x02,
	0x0114, 0x0300, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x116E, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x1172, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x6C0E, 0x02,
	0x6F12, 0x0200, 0x02,
	0x602A, 0x2A10, 0x02,
	0x6F12, 0x0100, 0x02,
	0x602A, 0x2A80, 0x02,
	0x6F12, 0x0200, 0x02,
	0x602A, 0x0E6E, 0x02,
	0x6F12, 0xFFFF, 0x02,
	0x602A, 0x6C0A, 0x02,
	0x6F12, 0x03CF, 0x02,
	0x6F12, 0x00A8, 0x02,
	0xB134, 0x0100, 0x02,
	0x0BC8, 0x0002, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39AA, 0x02,
	0x6F12, 0x0002, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39BA, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x39C4, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x2266, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x227A, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x6F12, 0x0030, 0x02,
	0x602A, 0x0E26, 0x02,
	0x6F12, 0x0440, 0x02,
	0x6F12, 0x0440, 0x02,
	0x602A, 0x1E7E, 0x02,
	0x6F12, 0x0401, 0x02,
	0x602A, 0x2450, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x25F8, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x34D8, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6F12, 0x07C0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x39B0, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
	0x6F12, 0x0014, 0x02,
	0x6F12, 0x001E, 0x02,
};

/* Enable vsync out, select master */
const u32 sensor_gd2_dual_master_setfile_A[] = {
	0x6028, 0x2000, 0x02,
	0x602A, 0x1090, 0x02,
	0x6F12, 0x0003, 0x02,
	0x6F12, 0x0300, 0x02,
	0x6028, 0x4000, 0x02,
	0x0A70, 0x0001, 0x02,
	0x0A72, 0x0100, 0x02,
};

const u32 sensor_gd2_pdaf_off_setfile_A[] = {
	/* Tail Mode off : Nomal Mode Operation (AF implant) */ 
	0x6028, 0x4000, 0x02,
	0x0114, 0x0300, 0x02,
	0x0D02, 0x0001, 0x02,
};

const u32 sensor_gd2_pdaf_on_setfile_A[] = {
	/* Tail Mode on : Tail Mode Operation */ 
	0x6028, 0x4000, 0x02,
	0x0114, 0x0301, 0x02,
	0x0D02, 0x0101, 0x02,
};

const u32 sensor_gd2_pd_correction_setfile_A[] = {
	/* SPD Correction */
	0x6028, 0x2000, 0x02,
	0x602A, 0x39BA, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39BE, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39C0, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39C4, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6028, 0x4000, 0x02,
	0x0D00, 0x0101, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x2A02, 0x02,
	0x6F12, 0x0100, 0x02,
};

const struct sensor_pll_info_compact sensor_gd2_pllinfo_A_REMOSAIC_FULL_10FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	2054000000ULL,               /* mipi_datarate = OPSYCK */
	641330000ULL,                /* pclk = VTPXCK of Clock Information */
	6115,                        /* frame_length_lines : V-Size */
	10240,                       /* line_length_pck : H-Size */
};

const struct sensor_pll_info_compact sensor_gd2_pllinfo_A_2X2BIN_30FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1352000000ULL,               /* mipi_datarate = OPSYCK */
	962000000ULL,                /* pclk = VTPXCK of Clock Information */
	3210,                        /* frame_length_lines */
	9984,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_gd2_pllinfo_A_4X4BIN_94FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1352000000ULL,               /* mipi_datarate = OPSYCK */
	641330000ULL,                /* pclk = VTPXCK of Clock Information */
	1612,                        /* frame_length_lines */
	4224,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_gd2_pllinfo_A_4X4BIN_120FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1352000000ULL,               /* mipi_datarate = OPSYCK */
	641330000ULL,                /* pclk = VTPXCK of Clock Information */
	1264,                        /* frame_length_lines */
	4224,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_gd2_pllinfo_A_4X4BIN_240FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	2054000000ULL,               /* mipi_datarate = OPSYCK */
	647770000ULL,                /* pclk = VTPXCK of Clock Information */
	1272,                        /* frame_length_lines */
	2112,                        /* line_length_pck */
};

static const u32 *sensor_gd2_setfiles_A[] = {
	sensor_gd2_setfile_A_REMOSAIC_FULL_8000x6000_10FPS,
	sensor_gd2_setfile_A_2X2BIN_FULL_4000x3000_30FPS,
	sensor_gd2_setfile_A_2X2BIN_CROP_4000x2256_30FPS,
	sensor_gd2_setfile_A_2X2BIN_CROP_4000x1844_30FPS,
	sensor_gd2_setfile_A_2X2BIN_CROP_3680x3000_30FPS,
	sensor_gd2_setfile_A_2X2BIN_CROP_3000x3000_30FPS,
	sensor_gd2_setfile_A_4X4BIN_FULL_2000x1500_94FPS,
	sensor_gd2_setfile_A_4X4BIN_CROP_2000x1128_120FPS,
	sensor_gd2_setfile_A_4X4BIN_CROP_1920x1080_240FPS,
};

static const u32 sensor_gd2_setfile_A_sizes[] = {
	ARRAY_SIZE(sensor_gd2_setfile_A_REMOSAIC_FULL_8000x6000_10FPS),
	ARRAY_SIZE(sensor_gd2_setfile_A_2X2BIN_FULL_4000x3000_30FPS),
	ARRAY_SIZE(sensor_gd2_setfile_A_2X2BIN_CROP_4000x2256_30FPS),
	ARRAY_SIZE(sensor_gd2_setfile_A_2X2BIN_CROP_4000x1844_30FPS),
	ARRAY_SIZE(sensor_gd2_setfile_A_2X2BIN_CROP_3680x3000_30FPS),
	ARRAY_SIZE(sensor_gd2_setfile_A_2X2BIN_CROP_3000x3000_30FPS),
	ARRAY_SIZE(sensor_gd2_setfile_A_4X4BIN_FULL_2000x1500_94FPS),
	ARRAY_SIZE(sensor_gd2_setfile_A_4X4BIN_CROP_2000x1128_120FPS),
	ARRAY_SIZE(sensor_gd2_setfile_A_4X4BIN_CROP_1920x1080_240FPS),
};

static const struct sensor_pll_info_compact *sensor_gd2_pllinfos_A[] = {
	&sensor_gd2_pllinfo_A_REMOSAIC_FULL_10FPS,
	&sensor_gd2_pllinfo_A_2X2BIN_30FPS,
	&sensor_gd2_pllinfo_A_2X2BIN_30FPS,
	&sensor_gd2_pllinfo_A_2X2BIN_30FPS,
	&sensor_gd2_pllinfo_A_2X2BIN_30FPS,
	&sensor_gd2_pllinfo_A_2X2BIN_30FPS,
	&sensor_gd2_pllinfo_A_4X4BIN_94FPS,
	&sensor_gd2_pllinfo_A_4X4BIN_120FPS,
	&sensor_gd2_pllinfo_A_4X4BIN_240FPS,
};

#endif
