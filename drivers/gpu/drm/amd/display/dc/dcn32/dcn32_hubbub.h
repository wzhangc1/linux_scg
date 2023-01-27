/*
 * Copyright 2016 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Authors: AMD
 *
 */

#ifndef __DC_HUBBUB_DCN32_H__
#define __DC_HUBBUB_DCN32_H__

#include "dcn21/dcn21_hubbub.h"

#define HUBBUB_REG_LIST_DCN32(id)\
	SR(DCHUBBUB_ARB_DATA_URGENCY_WATERMARK_A),\
	SR(DCHUBBUB_ARB_DATA_URGENCY_WATERMARK_B),\
	SR(DCHUBBUB_ARB_DATA_URGENCY_WATERMARK_C),\
	SR(DCHUBBUB_ARB_DATA_URGENCY_WATERMARK_D),\
	SR(DCHUBBUB_ARB_WATERMARK_CHANGE_CNTL),\
	SR(DCHUBBUB_ARB_DRAM_STATE_CNTL),\
	SR(DCHUBBUB_ARB_SAT_LEVEL),\
	SR(DCHUBBUB_ARB_DF_REQ_OUTSTAND),\
	SR(DCHUBBUB_GLOBAL_TIMER_CNTL), \
	SR(DCHUBBUB_SOFT_RESET),\
	SR(DCHUBBUB_CRC_CTRL), \
	SR(DCN_VM_FB_LOCATION_BASE),\
	SR(DCN_VM_FB_LOCATION_TOP),\
	SR(DCN_VM_FB_OFFSET),\
	SR(DCN_VM_AGP_BOT),\
	SR(DCN_VM_AGP_TOP),\
	SR(DCN_VM_AGP_BASE),\
	HUBBUB_SR_WATERMARK_REG_LIST(), \
	SR(DCHUBBUB_ARB_FRAC_URG_BW_NOM_A),\
	SR(DCHUBBUB_ARB_FRAC_URG_BW_NOM_B),\
	SR(DCHUBBUB_ARB_FRAC_URG_BW_NOM_C),\
	SR(DCHUBBUB_ARB_FRAC_URG_BW_NOM_D),\
	SR(DCHUBBUB_ARB_FRAC_URG_BW_FLIP_A),\
	SR(DCHUBBUB_ARB_FRAC_URG_BW_FLIP_B),\
	SR(DCHUBBUB_ARB_FRAC_URG_BW_FLIP_C),\
	SR(DCHUBBUB_ARB_FRAC_URG_BW_FLIP_D),\
	SR(DCHUBBUB_ARB_REFCYC_PER_TRIP_TO_MEMORY_A),\
	SR(DCHUBBUB_ARB_REFCYC_PER_TRIP_TO_MEMORY_B),\
	SR(DCHUBBUB_ARB_REFCYC_PER_TRIP_TO_MEMORY_C),\
	SR(DCHUBBUB_ARB_REFCYC_PER_TRIP_TO_MEMORY_D),\
	SR(DCHUBBUB_DET0_CTRL),\
	SR(DCHUBBUB_DET1_CTRL),\
	SR(DCHUBBUB_DET2_CTRL),\
	SR(DCHUBBUB_DET3_CTRL),\
	SR(DCHUBBUB_COMPBUF_CTRL),\
	SR(COMPBUF_RESERVED_SPACE),\
	SR(DCHUBBUB_DEBUG_CTRL_0),\
	SR(DCHUBBUB_ARB_USR_RETRAINING_CNTL),\
	SR(DCHUBBUB_ARB_USR_RETRAINING_WATERMARK_A),\
	SR(DCHUBBUB_ARB_USR_RETRAINING_WATERMARK_B),\
	SR(DCHUBBUB_ARB_USR_RETRAINING_WATERMARK_C),\
	SR(DCHUBBUB_ARB_USR_RETRAINING_WATERMARK_D),\
	SR(DCHUBBUB_ARB_UCLK_PSTATE_CHANGE_WATERMARK_A),\
	SR(DCHUBBUB_ARB_UCLK_PSTATE_CHANGE_WATERMARK_B),\
	SR(DCHUBBUB_ARB_UCLK_PSTATE_CHANGE_WATERMARK_C),\
	SR(DCHUBBUB_ARB_UCLK_PSTATE_CHANGE_WATERMARK_D),\
	SR(DCHUBBUB_ARB_FCLK_PSTATE_CHANGE_WATERMARK_A),\
	SR(DCHUBBUB_ARB_FCLK_PSTATE_CHANGE_WATERMARK_B),\
	SR(DCHUBBUB_ARB_FCLK_PSTATE_CHANGE_WATERMARK_C),\
	SR(DCHUBBUB_ARB_FCLK_PSTATE_CHANGE_WATERMARK_D),\
	SR(DCN_VM_FAULT_ADDR_MSB),\
	SR(DCN_VM_FAULT_ADDR_LSB),\
	SR(DCN_VM_FAULT_CNTL),\
	SR(DCN_VM_FAULT_STATUS),\
	SR(SDPIF_REQUEST_RATE_LIMIT)

#define HUBBUB_MASK_SH_LIST_DCN32(mask_sh)\
	HUBBUB_SF(DCHUBBUB_GLOBAL_TIMER_CNTL, DCHUBBUB_GLOBAL_TIMER_ENABLE, mask_sh), \
	HUBBUB_SF(DCHUBBUB_SOFT_RESET, DCHUBBUB_GLOBAL_SOFT_RESET, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_WATERMARK_CHANGE_CNTL, DCHUBBUB_ARB_WATERMARK_CHANGE_REQUEST, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_WATERMARK_CHANGE_CNTL, DCHUBBUB_ARB_WATERMARK_CHANGE_DONE_INTERRUPT_DISABLE, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_DRAM_STATE_CNTL, DCHUBBUB_ARB_ALLOW_SELF_REFRESH_FORCE_VALUE, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_DRAM_STATE_CNTL, DCHUBBUB_ARB_ALLOW_SELF_REFRESH_FORCE_ENABLE, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_DRAM_STATE_CNTL, DCHUBBUB_ARB_ALLOW_PSTATE_CHANGE_FORCE_VALUE, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_DRAM_STATE_CNTL, DCHUBBUB_ARB_ALLOW_PSTATE_CHANGE_FORCE_ENABLE, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_SAT_LEVEL, DCHUBBUB_ARB_SAT_LEVEL, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_DF_REQ_OUTSTAND, DCHUBBUB_ARB_MIN_REQ_OUTSTAND, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_DATA_URGENCY_WATERMARK_A, DCHUBBUB_ARB_DATA_URGENCY_WATERMARK_A, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_DATA_URGENCY_WATERMARK_B, DCHUBBUB_ARB_DATA_URGENCY_WATERMARK_B, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_DATA_URGENCY_WATERMARK_C, DCHUBBUB_ARB_DATA_URGENCY_WATERMARK_C, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_DATA_URGENCY_WATERMARK_D, DCHUBBUB_ARB_DATA_URGENCY_WATERMARK_D, mask_sh), \
	HUBBUB_MASK_SH_LIST_STUTTER(mask_sh), \
	HUBBUB_SF(DCHUBBUB_GLOBAL_TIMER_CNTL, DCHUBBUB_GLOBAL_TIMER_REFDIV, mask_sh), \
	HUBBUB_SF(DCN_VM_FB_LOCATION_BASE, FB_BASE, mask_sh), \
	HUBBUB_SF(DCN_VM_FB_LOCATION_TOP, FB_TOP, mask_sh), \
	HUBBUB_SF(DCN_VM_FB_OFFSET, FB_OFFSET, mask_sh), \
	HUBBUB_SF(DCN_VM_AGP_BOT, AGP_BOT, mask_sh), \
	HUBBUB_SF(DCN_VM_AGP_TOP, AGP_TOP, mask_sh), \
	HUBBUB_SF(DCN_VM_AGP_BASE, AGP_BASE, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_FRAC_URG_BW_FLIP_A, DCHUBBUB_ARB_FRAC_URG_BW_FLIP_A, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_FRAC_URG_BW_FLIP_B, DCHUBBUB_ARB_FRAC_URG_BW_FLIP_B, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_FRAC_URG_BW_FLIP_C, DCHUBBUB_ARB_FRAC_URG_BW_FLIP_C, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_FRAC_URG_BW_FLIP_D, DCHUBBUB_ARB_FRAC_URG_BW_FLIP_D, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_FRAC_URG_BW_NOM_A, DCHUBBUB_ARB_FRAC_URG_BW_NOM_A, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_FRAC_URG_BW_NOM_B, DCHUBBUB_ARB_FRAC_URG_BW_NOM_B, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_FRAC_URG_BW_NOM_C, DCHUBBUB_ARB_FRAC_URG_BW_NOM_C, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_FRAC_URG_BW_NOM_D, DCHUBBUB_ARB_FRAC_URG_BW_NOM_D, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_REFCYC_PER_TRIP_TO_MEMORY_A, DCHUBBUB_ARB_REFCYC_PER_TRIP_TO_MEMORY_A, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_REFCYC_PER_TRIP_TO_MEMORY_B, DCHUBBUB_ARB_REFCYC_PER_TRIP_TO_MEMORY_B, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_REFCYC_PER_TRIP_TO_MEMORY_C, DCHUBBUB_ARB_REFCYC_PER_TRIP_TO_MEMORY_C, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_REFCYC_PER_TRIP_TO_MEMORY_D, DCHUBBUB_ARB_REFCYC_PER_TRIP_TO_MEMORY_D, mask_sh),\
	HUBBUB_SF(DCHUBBUB_DEBUG_CTRL_0, DET_DEPTH, mask_sh),\
	HUBBUB_SF(DCHUBBUB_DET0_CTRL, DET0_SIZE, mask_sh),\
	HUBBUB_SF(DCHUBBUB_DET0_CTRL, DET0_SIZE_CURRENT, mask_sh),\
	HUBBUB_SF(DCHUBBUB_DET1_CTRL, DET1_SIZE, mask_sh),\
	HUBBUB_SF(DCHUBBUB_DET1_CTRL, DET1_SIZE_CURRENT, mask_sh),\
	HUBBUB_SF(DCHUBBUB_DET2_CTRL, DET2_SIZE, mask_sh),\
	HUBBUB_SF(DCHUBBUB_DET2_CTRL, DET2_SIZE_CURRENT, mask_sh),\
	HUBBUB_SF(DCHUBBUB_DET3_CTRL, DET3_SIZE, mask_sh),\
	HUBBUB_SF(DCHUBBUB_DET3_CTRL, DET3_SIZE_CURRENT, mask_sh),\
	HUBBUB_SF(DCHUBBUB_COMPBUF_CTRL, COMPBUF_SIZE, mask_sh),\
	HUBBUB_SF(DCHUBBUB_COMPBUF_CTRL, COMPBUF_SIZE_CURRENT, mask_sh),\
	HUBBUB_SF(COMPBUF_RESERVED_SPACE, COMPBUF_RESERVED_SPACE_64B, mask_sh),\
	HUBBUB_SF(COMPBUF_RESERVED_SPACE, COMPBUF_RESERVED_SPACE_ZS, mask_sh),\
	HUBBUB_SF(DCHUBBUB_ARB_USR_RETRAINING_CNTL, DCHUBBUB_ARB_ALLOW_USR_RETRAINING_FORCE_VALUE, mask_sh),\
	HUBBUB_SF(DCHUBBUB_ARB_USR_RETRAINING_CNTL, DCHUBBUB_ARB_ALLOW_USR_RETRAINING_FORCE_ENABLE, mask_sh),\
	HUBBUB_SF(DCHUBBUB_ARB_USR_RETRAINING_CNTL, DCHUBBUB_ARB_DO_NOT_FORCE_ALLOW_USR_RETRAINING_DURING_PSTATE_CHANGE_REQUEST, mask_sh),\
	HUBBUB_SF(DCHUBBUB_ARB_USR_RETRAINING_CNTL, DCHUBBUB_ARB_DO_NOT_FORCE_ALLOW_USR_RETRAINING_DURING_PRE_CSTATE, mask_sh),\
	HUBBUB_SF(DCHUBBUB_ARB_USR_RETRAINING_WATERMARK_A, DCHUBBUB_ARB_USR_RETRAINING_WATERMARK_A, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_USR_RETRAINING_WATERMARK_B, DCHUBBUB_ARB_USR_RETRAINING_WATERMARK_B, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_USR_RETRAINING_WATERMARK_C, DCHUBBUB_ARB_USR_RETRAINING_WATERMARK_C, mask_sh), \
	HUBBUB_SF(DCHUBBUB_ARB_USR_RETRAINING_WATERMARK_D, DCHUBBUB_ARB_USR_RETRAINING_WATERMARK_D, mask_sh),\
	HUBBUB_SF(DCHUBBUB_ARB_UCLK_PSTATE_CHANGE_WATERMARK_A, DCHUBBUB_ARB_UCLK_PSTATE_CHANGE_WATERMARK_A, mask_sh),\
	HUBBUB_SF(DCHUBBUB_ARB_UCLK_PSTATE_CHANGE_WATERMARK_B, DCHUBBUB_ARB_UCLK_PSTATE_CHANGE_WATERMARK_B, mask_sh),\
	HUBBUB_SF(DCHUBBUB_ARB_UCLK_PSTATE_CHANGE_WATERMARK_C, DCHUBBUB_ARB_UCLK_PSTATE_CHANGE_WATERMARK_C, mask_sh),\
	HUBBUB_SF(DCHUBBUB_ARB_UCLK_PSTATE_CHANGE_WATERMARK_D, DCHUBBUB_ARB_UCLK_PSTATE_CHANGE_WATERMARK_D, mask_sh),\
	HUBBUB_SF(DCHUBBUB_ARB_FCLK_PSTATE_CHANGE_WATERMARK_A, DCHUBBUB_ARB_FCLK_PSTATE_CHANGE_WATERMARK_A, mask_sh),\
	HUBBUB_SF(DCHUBBUB_ARB_FCLK_PSTATE_CHANGE_WATERMARK_B, DCHUBBUB_ARB_FCLK_PSTATE_CHANGE_WATERMARK_B, mask_sh),\
	HUBBUB_SF(DCHUBBUB_ARB_FCLK_PSTATE_CHANGE_WATERMARK_C, DCHUBBUB_ARB_FCLK_PSTATE_CHANGE_WATERMARK_C, mask_sh),\
	HUBBUB_SF(DCHUBBUB_ARB_FCLK_PSTATE_CHANGE_WATERMARK_D, DCHUBBUB_ARB_FCLK_PSTATE_CHANGE_WATERMARK_D, mask_sh), \
	HUBBUB_SF(DCN_VM_FAULT_ADDR_MSB, DCN_VM_FAULT_ADDR_MSB, mask_sh), \
	HUBBUB_SF(DCN_VM_FAULT_ADDR_LSB, DCN_VM_FAULT_ADDR_LSB, mask_sh), \
	HUBBUB_SF(DCN_VM_FAULT_CNTL, DCN_VM_ERROR_STATUS_CLEAR, mask_sh), \
	HUBBUB_SF(DCN_VM_FAULT_CNTL, DCN_VM_ERROR_STATUS_MODE, mask_sh), \
	HUBBUB_SF(DCN_VM_FAULT_CNTL, DCN_VM_ERROR_INTERRUPT_ENABLE, mask_sh), \
	HUBBUB_SF(DCN_VM_FAULT_CNTL, DCN_VM_RANGE_FAULT_DISABLE, mask_sh), \
	HUBBUB_SF(DCN_VM_FAULT_CNTL, DCN_VM_PRQ_FAULT_DISABLE, mask_sh), \
	HUBBUB_SF(DCN_VM_FAULT_STATUS, DCN_VM_ERROR_STATUS, mask_sh), \
	HUBBUB_SF(DCN_VM_FAULT_STATUS, DCN_VM_ERROR_VMID, mask_sh), \
	HUBBUB_SF(DCN_VM_FAULT_STATUS, DCN_VM_ERROR_TABLE_LEVEL, mask_sh), \
	HUBBUB_SF(DCN_VM_FAULT_STATUS, DCN_VM_ERROR_PIPE, mask_sh), \
	HUBBUB_SF(DCN_VM_FAULT_STATUS, DCN_VM_ERROR_INTERRUPT_STATUS, mask_sh),\
	HUBBUB_SF(SDPIF_REQUEST_RATE_LIMIT, SDPIF_REQUEST_RATE_LIMIT, mask_sh)

bool hubbub32_program_urgent_watermarks(
		struct hubbub *hubbub,
		struct dcn_watermark_set *watermarks,
		unsigned int refclk_mhz,
		bool safe_to_lower);

bool hubbub32_program_stutter_watermarks(
		struct hubbub *hubbub,
		struct dcn_watermark_set *watermarks,
		unsigned int refclk_mhz,
		bool safe_to_lower);

bool hubbub32_program_pstate_watermarks(
		struct hubbub *hubbub,
		struct dcn_watermark_set *watermarks,
		unsigned int refclk_mhz,
		bool safe_to_lower);

bool hubbub32_program_usr_watermarks(
		struct hubbub *hubbub,
		struct dcn_watermark_set *watermarks,
		unsigned int refclk_mhz,
		bool safe_to_lower);

void hubbub32_force_usr_retraining_allow(struct hubbub *hubbub, bool allow);

void hubbub32_force_wm_propagate_to_pipes(struct hubbub *hubbub);

void dcn32_program_det_size(struct hubbub *hubbub, int hubp_inst, unsigned int det_buffer_size_in_kbyte);

void hubbub32_construct(struct dcn20_hubbub *hubbub2,
	struct dc_context *ctx,
	const struct dcn_hubbub_registers *hubbub_regs,
	const struct dcn_hubbub_shift *hubbub_shift,
	const struct dcn_hubbub_mask *hubbub_mask,
	int det_size_kb,
	int pixel_chunk_size_kb,
	int config_return_buffer_size_kb);

void hubbub32_set_request_limit(struct hubbub *hubbub, int umc_count, int words_per_umc);

#endif
