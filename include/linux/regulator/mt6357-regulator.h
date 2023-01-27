/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2022 MediaTek Inc.
 */

#ifndef __LINUX_REGULATOR_MT6357_H
#define __LINUX_REGULATOR_MT6357_H

enum {
	/* Bucks */
	MT6357_ID_VCORE,
	MT6357_ID_VMODEM,
	MT6357_ID_VPA,
	MT6357_ID_VPROC,
	MT6357_ID_VS1,

	/* LDOs */
	MT6357_ID_VAUX18,
	MT6357_ID_VAUD28,
	MT6357_ID_VCAMA,
	MT6357_ID_VCAMD,
	MT6357_ID_VCAMIO,
	MT6357_ID_VCN18,
	MT6357_ID_VCN28,
	MT6357_ID_VCN33_BT,
	MT6357_ID_VCN33_WIFI,
	MT6357_ID_VDRAM,
	MT6357_ID_VEFUSE,
	MT6357_ID_VEMC,
	MT6357_ID_VFE28,
	MT6357_ID_VIBR,
	MT6357_ID_VIO18,
	MT6357_ID_VIO28,
	MT6357_ID_VLDO28,
	MT6357_ID_VMC,
	MT6357_ID_VMCH,
	MT6357_ID_VRF12,
	MT6357_ID_VRF18,
	MT6357_ID_VSIM1,
	MT6357_ID_VSIM2,
	MT6357_ID_VSRAM_OTHERS,
	MT6357_ID_VSRAM_PROC,
	MT6357_ID_VUSB33,
	MT6357_ID_VXO22,

	MT6357_ID_RG_MAX,
};

#define MT6357_MAX_REGULATOR	MT6357_ID_RG_MAX

#endif /* __LINUX_REGULATOR_MT6357_H */
