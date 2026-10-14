/*
 * Reverse-Engineered Source for: libstagefright_soft_ddpdec.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libstagefright_soft_ddpdec"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "libstagefright_soft_ddpdec.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ddp_udc_int_dbpbtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_dbpbtab = NULL;

/* Exported Object: dlb_unused_debug */
extern "C" __attribute__((visibility("default"))) void* dlb_unused_debug = NULL;

/* Demangled: DLB_r4_fft_24_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_24_s(void) {
    ALOGD("DLB_r4_fft_24_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_2 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_2(void) {
    ALOGD("dlb_fft_fwd_scl_2() called");
    return 0;
}

/* Exported Object: dlb_cos_32_ast_mini_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_32_ast_mini_twiddle = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P4_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4_vec_ana = NULL;

/* Demangled: DAP_CPDP_PVT_newton_raphson_div */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_newton_raphson_div(void) {
    ALOGD("DAP_CPDP_PVT_newton_raphson_div() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_audio_optimizer_supported */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_audio_optimizer_supported(void) {
    ALOGD("dap_cpdp_pvt_audio_optimizer_supported() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hearing_protection_set_enable */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_set_enable(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_set_enable() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hfra_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hfra_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_hfra_query_scratch() called");
    return 0;
}

/* Demangled: DLB_blk_delay_clear_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_delay_clear_strict(void) {
    ALOGD("DLB_blk_delay_clear_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L120_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L120_1 = NULL;

/* Demangled: ddp_udc_int_dvlim_get_smoothed_gain */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_get_smoothed_gain(void) {
    ALOGD("ddp_udc_int_dvlim_get_smoothed_gain() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_dap_mapping_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_dap_mapping_init(void) {
    ALOGD("DAP_CPDP_PVT_mi_dap_mapping_init() called");
    return 0;
}

/* Demangled: DLB_blk_LclipL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LclipL_strict(void) {
    ALOGD("DLB_blk_LclipL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L120_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L120_2 = NULL;

/* Demangled: dlb_fft_fwd_scl_4 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_4(void) {
    ALOGD("dlb_fft_fwd_scl_4() called");
    return 0;
}

/* Demangled: ddp_udc_int_oarq_query_memory */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oarq_query_memory(void) {
    ALOGD("ddp_udc_int_oarq_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hp_height_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hp_height_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_hp_height_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfcc_flux_frame_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_flux_frame_process(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_flux_frame_process() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpack_pgm_bnd_ofst_value */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpack_pgm_bnd_ofst_value(void) {
    ALOGD("ddp_udc_int_unpack_pgm_bnd_ofst_value() called");
    return 0;
}

/* Exported Object: A_NGCS_UPMIX_PLAN_5CH1_TO_5CH1 */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_5CH1_TO_5CH1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L240 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L240 = NULL;

/* Demangled: dlb_fft_fwd_scl_6 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_6(void) {
    ALOGD("dlb_fft_fwd_scl_6() called");
    return 0;
}

/* Exported Object: ddp_udc_int_gbl_rshftab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_rshftab = NULL;

/* Demangled: ddp_udc_int_mapmixdata */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mapmixdata(void) {
    ALOGD("ddp_udc_int_mapmixdata() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hdr_P2powLP */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hdr_P2powLP(void) {
    ALOGD("DAP_CPDP_PVT_hdr_P2powLP() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_dap_mapping_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_dap_mapping_reset(void) {
    ALOGD("DAP_CPDP_PVT_mi_dap_mapping_reset() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_internal_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_internal_close(void) {
    ALOGD("DAP_CPDP_PVT_mi_internal_close() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_ap_dvlim_coefs_128 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_ap_dvlim_coefs_128 = NULL;

/* Demangled: DLB_r4_inv_fft_320_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_320_s(void) {
    ALOGD("DLB_r4_inv_fft_320_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_getsyncstatus */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_getsyncstatus(void) {
    ALOGD("ddp_udc_int_getsyncstatus() called");
    return 0;
}

/* Demangled: ddp_udc_int_assocprogram_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_assocprogram_process(void) {
    ALOGD("ddp_udc_int_assocprogram_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_agc_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_agc_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_agc_query_memory() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_192 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_192(void) {
    ALOGD("DLB_r4_inv_fft_192() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_8 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_8(void) {
    ALOGD("dlb_fft_fwd_scl_8() called");
    return 0;
}

/* Exported Object: ddp_udc_int_gbl_chanary */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_chanary = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_vec_log10 */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_log10(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_log10() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_spec_calc_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_spec_calc_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_spec_calc_query_scratch() called");
    return 0;
}

/* Demangled: reset_Phase90Hilbert */
extern "C" __attribute__((visibility("default"))) int reset_Phase90Hilbert(void) {
    ALOGD("reset_Phase90Hilbert() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_buffer_data_type_convert */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_buffer_data_type_convert(void) {
    ALOGD("ddp_udc_int_dlb_buffer_data_type_convert() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_bass_mbdrc_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_bass_mbdrc_process(void) {
    ALOGD("DAP_CPDP_PVT_bass_mbdrc_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_frame_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_frame_process(void) {
    ALOGD("DAP_CPDP_PVT_sben_frame_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_resample_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_resample_close(void) {
    ALOGD("DAP_CPDP_PVT_resample_close() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P4_32_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4_32_vec_ana = NULL;

/* Exported Object: ddp_udc_int_A_ROOM_CONFIG_SPKS_SURROUNDS_FULL */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_A_ROOM_CONFIG_SPKS_SURROUNDS_FULL = NULL;

/* Demangled: dap_cpdp_volmax_boost_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_volmax_boost_set(void) {
    ALOGD("dap_cpdp_volmax_boost_set() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_512 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_512 = NULL;

/* Exported Object: DAP_CPDP_PVT_DE_POW_RATE_48K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DE_POW_RATE_48K = NULL;

/* Demangled: DLB_CLCLmix4CL8SU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLCLmix4CL8SU_strict(void) {
    ALOGD("DLB_CLCLmix4CL8SU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_960 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_960(void) {
    ALOGD("dlb_fft_fwd_scl_960() called");
    return 0;
}

/* Exported Object: ddp_udc_int_tabtscontentmask */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_tabtscontentmask = NULL;

/* Demangled: dap_cpdp_regulator_timbre_preservation_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_regulator_timbre_preservation_set(void) {
    ALOGD("dap_cpdp_regulator_timbre_preservation_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_lvl_smooth_scale_time */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lvl_smooth_scale_time(void) {
    ALOGD("DAP_CPDP_PVT_lvl_smooth_scale_time() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv3aLU_inplace */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv3aLU_inplace(void) {
    ALOGD("DLB_blk_Liir2ssv3aLU_inplace() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_514 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_514 = NULL;

/* Exported Object: DAP_CPDP_PVT_DVLIM_ONE_OVER_256_L */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DVLIM_ONE_OVER_256_L = NULL;

/* Exported Object: ddp_udc_int_qntz3lev */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_qntz3lev = NULL;

/* Demangled: ddp_udc_int_hdr_vec_P2powPLPU */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_hdr_vec_P2powPLPU(void) {
    ALOGD("ddp_udc_int_hdr_vec_P2powPLPU() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_reset(void) {
    ALOGD("DAP_CPDP_PVT_sben_reset() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_obj_info_blk */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_obj_info_blk(void) {
    ALOGD("ddp_udc_int_oamdi_get_obj_info_blk() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_calc_diffuse_gains */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_calc_diffuse_gains(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_calc_diffuse_gains() called");
    return 0;
}

/* Demangled: DLB_r4_fft_720_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_720_s(void) {
    ALOGD("DLB_r4_fft_720_s() called");
    return 0;
}

/* Exported Object: ddp_udc_int_window_fwd_neon */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_window_fwd_neon = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_mask_ICLD_subbandIdx */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_mask_ICLD_subbandIdx = NULL;

/* Exported Object: dlb_clclmix5cl10csu_c */
extern "C" __attribute__((visibility("default"))) void* dlb_clclmix5cl10csu_c = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L640 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L640 = NULL;

/* Demangled: DLB_r4_inv_fft_2 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_2(void) {
    ALOGD("DLB_r4_inv_fft_2() called");
    return 0;
}

/* Demangled: dlb_dct4_postmodulation_shl0 */
extern "C" __attribute__((visibility("default"))) int dlb_dct4_postmodulation_shl0(void) {
    ALOGD("dlb_dct4_postmodulation_shl0() called");
    return 0;
}

/* Demangled: ddp_udc_int_afmd_frminit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_afmd_frminit(void) {
    ALOGD("ddp_udc_int_afmd_frminit() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_set_obj_info_blk */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_set_obj_info_blk(void) {
    ALOGD("ddp_udc_int_oamdi_set_obj_info_blk() called");
    return 0;
}

/* Demangled: dlb_dct4_postmodulation_shl1 */
extern "C" __attribute__((visibility("default"))) int dlb_dct4_postmodulation_shl1(void) {
    ALOGD("dlb_dct4_postmodulation_shl1() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_zcr_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_zcr_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_zcr_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_get_ge_speech_confidence */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_get_ge_speech_confidence(void) {
    ALOGD("DAP_CPDP_PVT_get_ge_speech_confidence() called");
    return 0;
}

/* Exported Object: DLB_MFB_P10KM_P4_319SC_128M */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_P10KM_P4_319SC_128M = NULL;

/* Demangled: ddp_udc_int_crc_calcrev */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_crc_calcrev(void) {
    ALOGD("ddp_udc_int_crc_calcrev() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_pb_insert */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_pb_insert(void) {
    ALOGD("ddp_udc_int_evo_pb_insert() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_ex_delay_clear */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_ex_delay_clear(void) {
    ALOGD("DAP_CPDP_PVT_dlb_ex_delay_clear() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L480 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L480 = NULL;

/* Demangled: DLB_r4_inv_fft_4 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_4(void) {
    ALOGD("DLB_r4_inv_fft_4() called");
    return 0;
}

/* Demangled: dlb_dct4_postmodulation_shl2 */
extern "C" __attribute__((visibility("default"))) int dlb_dct4_postmodulation_shl2(void) {
    ALOGD("dlb_dct4_postmodulation_shl2() called");
    return 0;
}

/* Demangled: ddp_udc_int_tsid_release */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsid_release(void) {
    ALOGD("ddp_udc_int_tsid_release() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L144 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L144 = NULL;

/* Demangled: ddp_udc_int_btad_chinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_btad_chinit(void) {
    ALOGD("ddp_udc_int_btad_chinit() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_init(void) {
    ALOGD("ddp_udc_int_evo_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_FED_closedebug */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_FED_closedebug(void) {
    ALOGD("ddp_udc_int_FED_closedebug() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_parse_payload */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_parse_payload(void) {
    ALOGD("ddp_udc_int_evo_parse_payload() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DVLIM_ONE_OVER_256_S */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DVLIM_ONE_OVER_256_S = NULL;

/* Demangled: DLB_r4_inv_fft_6 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_6(void) {
    ALOGD("DLB_r4_inv_fft_6() called");
    return 0;
}

/* Exported Object: ddp_udc_int_fastdec */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_fastdec = NULL;

/* Demangled: DLB_blk_refLdelayU */
extern "C" __attribute__((visibility("default"))) int DLB_blk_refLdelayU(void) {
    ALOGD("DLB_blk_refLdelayU() called");
    return 0;
}

/* Exported Object: dlb_odd_fft_cplx_fwd_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_odd_fft_cplx_fwd_scl = NULL;

/* Demangled: dlb_fft_fwd_scl_256 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_256(void) {
    ALOGD("dlb_fft_fwd_scl_256() called");
    return 0;
}

/* Demangled: DLB_mfb_p10km_synthesisCL_query_scratch */
extern "C" __attribute__((visibility("default"))) int DLB_mfb_p10km_synthesisCL_query_scratch(void) {
    ALOGD("DLB_mfb_p10km_synthesisCL_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_get_latency */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_get_latency(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_get_latency() called");
    return 0;
}

/* Demangled: DLB_BLmpy_scaleBLSU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmpy_scaleBLSU_inplace_strict(void) {
    ALOGD("DLB_BLmpy_scaleBLSU_inplace_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_8 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_8(void) {
    ALOGD("DLB_r4_inv_fft_8() called");
    return 0;
}

/* Exported Object: ddp_udc_int_qntzadd */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_qntzadd = NULL;

/* Demangled: dlb_vec_Lsum_sqrLUU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_Lsum_sqrLUU_flex(void) {
    ALOGD("dlb_vec_Lsum_sqrLUU_flex() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_acmodtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_acmodtab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L720 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L720 = NULL;

/* Demangled: ddp_udc_int_BED_closedebug */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_BED_closedebug(void) {
    ALOGD("ddp_udc_int_BED_closedebug() called");
    return 0;
}

/* Demangled: ddp_udc_int_diffexps */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_diffexps(void) {
    ALOGD("ddp_udc_int_diffexps() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ldn_set_min_ex_c */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ldn_set_min_ex_c(void) {
    ALOGD("DAP_CPDP_PVT_ldn_set_min_ex_c() called");
    return 0;
}

/* Exported Object: ddp_udc_int_scale_variance_per_band */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_scale_variance_per_band = NULL;

/* Demangled: ddp_udc_int_init_pt_outparams */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_init_pt_outparams(void) {
    ALOGD("ddp_udc_int_init_pt_outparams() called");
    return 0;
}

/* Exported Object: ddp_udc_int_oamd_xy_extp_pos_unsigned_to_q15 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_oamd_xy_extp_pos_unsigned_to_q15 = NULL;

/* Demangled: DLB_vec_LdotLLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LdotLLU_strict(void) {
    ALOGD("DLB_vec_LdotLLU_strict() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process4initEv(void) {
    ALOGD("_ZN5dolby11Dap2Process4initEv() called");
    return 0;
}

/* Demangled: ddp_udc_int_evod_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evod_init(void) {
    ALOGD("ddp_udc_int_evod_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_handleddpfrmset */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_handleddpfrmset(void) {
    ALOGD("ddp_udc_int_handleddpfrmset() called");
    return 0;
}

/* Demangled: dlb_blk_Liir1_shlLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir1_shlLU_flex(void) {
    ALOGD("dlb_blk_Liir1_shlLU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L240_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L240_1 = NULL;

/* Demangled: ddp_udc_int_oamdi_is_std_chan_assign */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_is_std_chan_assign(void) {
    ALOGD("ddp_udc_int_oamdi_is_std_chan_assign() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_interp_configure */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_interp_configure(void) {
    ALOGD("DAP_CPDP_PVT_dap_interp_configure() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L240_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L240_2 = NULL;

/* Demangled: ddp_udc_int_oamdi_round_from_Q15_away_from_zero */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_round_from_Q15_away_from_zero(void) {
    ALOGD("ddp_udc_int_oamdi_round_from_Q15_away_from_zero() called");
    return 0;
}

/* Exported Object: ddp_udc_int_f4_den */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_f4_den = NULL;

/* Demangled: ddp_udc_int_tsid_updatestatus */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsid_updatestatus(void) {
    ALOGD("ddp_udc_int_tsid_updatestatus() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_reset(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_reset() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_feature_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_feature_init(void) {
    ALOGD("DAP_CPDP_PVT_feature_init() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_pes_pan_RIGHT_MSUR */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_pes_pan_RIGHT_MSUR = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEEE = NULL;

/* Demangled: DAP_CPDP_PVT_bass_extraction_coefs_gen */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_bass_extraction_coefs_gen(void) {
    ALOGD("DAP_CPDP_PVT_bass_extraction_coefs_gen() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_hearing_protection_param_init */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_hearing_protection_param_init(void) {
    ALOGD("dap_cpdp_pvt_hearing_protection_param_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_leveler_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_leveler_process(void) {
    ALOGD("DAP_CPDP_PVT_leveler_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L384 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L384 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L32_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L32_cos = NULL;

/* Demangled: android::Vector<unsigned int>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIjE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_classifier_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_classifier_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_classifier_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_resi_clip_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_resi_clip_process(void) {
    ALOGD("DAP_CPDP_PVT_resi_clip_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L24 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L24 = NULL;

/* Demangled: DLB_r4_inv_rfft_nn_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_rfft_nn_s(void) {
    ALOGD("DLB_r4_inv_rfft_nn_s() called");
    return 0;
}

/* Demangled: DLB_load_mfb_p10km_analysisL_filter_state */
extern "C" __attribute__((visibility("default"))) int DLB_load_mfb_p10km_analysisL_filter_state(void) {
    ALOGD("DLB_load_mfb_p10km_analysisL_filter_state() called");
    return 0;
}

/* Demangled: DLB_CLmpy_shlCLSIU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpy_shlCLSIU_strict(void) {
    ALOGD("DLB_CLmpy_shlCLSIU_strict() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_sibilance_calculation */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_sibilance_calculation(void) {
    ALOGD("DAP_CPDP_PVT_arle_sibilance_calculation() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_ana_process(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_ana_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L90_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L90_1 = NULL;

/* Demangled: ddp_udc_int_bed_silence */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bed_silence(void) {
    ALOGD("ddp_udc_int_bed_silence() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L90_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L90_2 = NULL;

/* Demangled: ddp_udc_int_size_panner_get_gains */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_size_panner_get_gains(void) {
    ALOGD("ddp_udc_int_size_panner_get_gains() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L960 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L960 = NULL;

/* Demangled: ddp_udc_int_axdd_unp */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_axdd_unp(void) {
    ALOGD("ddp_udc_int_axdd_unp() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_query_memory */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_query_memory(void) {
    ALOGD("ddp_udc_int_dvlim_query_memory() called");
    return 0;
}

/* Demangled: dap_cpdp_surround_boost_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_surround_boost_set(void) {
    ALOGD("dap_cpdp_surround_boost_set() called");
    return 0;
}

/* Demangled: DLB_blk_LcmpLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LcmpLL_strict(void) {
    ALOGD("DLB_blk_LcmpLL_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_80_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_80_s(void) {
    ALOGD("DLB_r4_inv_fft_80_s() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L512_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L512_cos = NULL;

/* Demangled: ddp_udc_int_tsid_getframe */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsid_getframe(void) {
    ALOGD("ddp_udc_int_tsid_getframe() called");
    return 0;
}

/* Demangled: ddp_udc_int_identify_bitstream_content */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_identify_bitstream_content(void) {
    ALOGD("ddp_udc_int_identify_bitstream_content() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_180 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_180(void) {
    ALOGD("dlb_fft_inv_scl_180() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpdeltbai */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpdeltbai(void) {
    ALOGD("ddp_udc_int_unpdeltbai() called");
    return 0;
}

/* Demangled: dap_cpdp_init */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_init(void) {
    ALOGD("dap_cpdp_init() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5CH1_CC */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5CH1_CC = NULL;

/* Demangled: DAP_CPDP_PVT_feature_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_feature_reset(void) {
    ALOGD("DAP_CPDP_PVT_feature_reset() called");
    return 0;
}

/* Exported Object: ddp_udc_int_crcrevtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_crcrevtab = NULL;

/* Demangled: ddp_udc_int_evo_mem_size */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_mem_size(void) {
    ALOGD("ddp_udc_int_evo_mem_size() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7D1D2_CC */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7D1D2_CC = NULL;

/* Demangled: DLB_r4_fft_768_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_768_s(void) {
    ALOGD("DLB_r4_fft_768_s() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hearing_protection_clear */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_clear(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_clear() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_complex_equalizer_param_query_memory */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_complex_equalizer_param_query_memory(void) {
    ALOGD("dap_cpdp_pvt_complex_equalizer_param_query_memory() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_TAB_32K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_TAB_32K = NULL;

/* Exported Object: ddp_udc_int_jocdec_absoffset */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_jocdec_absoffset = NULL;

/* Demangled: DAP_CPDP_PVT_resi_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_resi_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_resi_query_scratch() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LTRT3D_BH9550_512_CONV */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LTRT3D_BH9550_512_CONV = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L72_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L72_1 = NULL;

/* Demangled: ddp_udc_int_evobh_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evobh_init(void) {
    ALOGD("ddp_udc_int_evobh_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_brw_peek */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_brw_peek(void) {
    ALOGD("ddp_udc_int_dil_brw_peek() called");
    return 0;
}

/* Demangled: dlb_blk_LcmpLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LcmpLL_flex(void) {
    ALOGD("dlb_blk_LcmpLL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L72_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L72_2 = NULL;

/* Demangled: ddp_udc_int_isf_decoder_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_isf_decoder_init(void) {
    ALOGD("ddp_udc_int_isf_decoder_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_speaker_config_positions_get */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_speaker_config_positions_get(void) {
    ALOGD("ddp_udc_int_speaker_config_positions_get() called");
    return 0;
}

/* Demangled: DLB_Lpow05I16 */
extern "C" __attribute__((visibility("default"))) int DLB_Lpow05I16(void) {
    ALOGD("DLB_Lpow05I16() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_AA_COMPR_COEFS_OFFSETS_32K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_AA_COMPR_COEFS_OFFSETS_32K = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L256 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L256 = NULL;

/* Exported Object: ddp_udc_int_cpl_bndtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_cpl_bndtab = NULL;

/* Demangled: ddp_udc_int_parser_reset */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_parser_reset(void) {
    ALOGD("ddp_udc_int_parser_reset() called");
    return 0;
}

/* Demangled: DLB_BLmaxBLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmaxBLL_strict(void) {
    ALOGD("DLB_BLmaxBLL_strict() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_b_duplicate_col */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_b_duplicate_col = NULL;

/* Demangled: DLB_Lmfb_p10km_synthesisCL_close */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_close(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_close() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_process(void) {
    ALOGD("ddp_udc_int_dvlim_process() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_parse_bitstream */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_parse_bitstream(void) {
    ALOGD("ddp_udc_int_evo_parse_bitstream() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIjE12do_constructEPvj() called");
    return 0;
}

/* Demangled: dap_cpdp_regulator_speaker_distortion_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_regulator_speaker_distortion_enable_set(void) {
    ALOGD("dap_cpdp_regulator_speaker_distortion_enable_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_get_latency */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_get_latency(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_get_latency() called");
    return 0;
}

/* Demangled: dap_cpdp_get_version */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_get_version(void) {
    ALOGD("dap_cpdp_get_version() called");
    return 0;
}

/* Demangled: dap_cpdp_virtual_bass_mix_freqs_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtual_bass_mix_freqs_set(void) {
    ALOGD("dap_cpdp_virtual_bass_mix_freqs_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfcc_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_stats_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_stats_init(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_stats_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L360_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L360_1 = NULL;

/* Exported Object: ddp_udc_int_msmix_pes_pan_RSUR_RAUX */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_pes_pan_RSUR_RAUX = NULL;

/* Demangled: DAP_CPDP_PVT_delay_line_clvec_copy */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_delay_line_clvec_copy(void) {
    ALOGD("DAP_CPDP_PVT_delay_line_clvec_copy() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_internal_set_binaural_enable */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_internal_set_binaural_enable(void) {
    ALOGD("DAP_CPDP_PVT_mi_internal_set_binaural_enable() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_diffuse_run */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_diffuse_run(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_diffuse_run() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L360_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L360_2 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L4_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L4_cos = NULL;

/* Demangled: ddp_udc_int_obj_render_program_set */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_obj_render_program_set(void) {
    ALOGD("ddp_udc_int_obj_render_program_set() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_get_codec_specific_id */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_get_codec_specific_id(void) {
    ALOGD("ddp_udc_int_dil_get_codec_specific_id() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_cmtx_destroy */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_cmtx_destroy(void) {
    ALOGD("DAP_CPDP_PVT_cmtx_destroy() called");
    return 0;
}

/* Demangled: ddp_udc_int_blndsmpls */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_blndsmpls(void) {
    ALOGD("ddp_udc_int_blndsmpls() called");
    return 0;
}

/* Demangled: ddp_udc_int_pack_int_loudness_value */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_pack_int_loudness_value(void) {
    ALOGD("ddp_udc_int_pack_int_loudness_value() called");
    return 0;
}

/* Demangled: dap_cpdp_virtual_bass_rolloff_gain_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtual_bass_rolloff_gain_set(void) {
    ALOGD("dap_cpdp_virtual_bass_rolloff_gain_set() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L288_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L288_1 = NULL;

/* Demangled: ddp_udc_int_evo_calculate_pcm_protection */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_calculate_pcm_protection(void) {
    ALOGD("ddp_udc_int_evo_calculate_pcm_protection() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlUL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlUL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlUL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L288_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L288_2 = NULL;

/* Exported Object: dlb_hyb_p4_13 */
extern "C" __attribute__((visibility("default"))) void* dlb_hyb_p4_13 = NULL;

/* Demangled: ddp_udc_int_translatesmpls */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_translatesmpls(void) {
    ALOGD("ddp_udc_int_translatesmpls() called");
    return 0;
}

/* Demangled: ddp_udc_int_max_trim_compute */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_max_trim_compute(void) {
    ALOGD("ddp_udc_int_max_trim_compute() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MAX_TAB_48K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MAX_TAB_48K = NULL;

/* Demangled: dlb_BLmaxBLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmaxBLL_flex(void) {
    ALOGD("dlb_BLmaxBLL_flex() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv2L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv2L_strict(void) {
    ALOGD("DLB_blk_Liir2ssv2L_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_192_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_192_s(void) {
    ALOGD("DLB_r4_fft_192_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_2_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_2_s(void) {
    ALOGD("DLB_r4_fft_2_s() called");
    return 0;
}

/* Exported Object: ddp_udc_int_zcos1 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_zcos1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L144_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L144_cos = NULL;

/* Exported Object: ddp_udc_int_zcos2 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_zcos2 = NULL;

/* Demangled: ddp_udc_int_hdr_P2powLP */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_hdr_P2powLP(void) {
    ALOGD("ddp_udc_int_hdr_P2powLP() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_chital_validate */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_chital_validate(void) {
    ALOGD("DAP_CPDP_PVT_chital_validate() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfcc_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_reset(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_reset() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sbsc_frame_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbsc_frame_process(void) {
    ALOGD("DAP_CPDP_PVT_sbsc_frame_process() called");
    return 0;
}

/* Demangled: dlb_vec_NdotLLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_NdotLLU_flex(void) {
    ALOGD("dlb_vec_NdotLLU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_fft_32_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_32_s(void) {
    ALOGD("DLB_r4_fft_32_s() called");
    return 0;
}

/* Exported Object: ddp_udc_int_oamd_6bit_unsigned_to_oari_Q15 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_oamd_6bit_unsigned_to_oari_Q15 = NULL;

/* Demangled: DAP_CPDP_PVT_visualizer_excitations_update */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_visualizer_excitations_update(void) {
    ALOGD("DAP_CPDP_PVT_visualizer_excitations_update() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_acorr_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_acorr_close(void) {
    ALOGD("DAP_CPDP_PVT_acorr_close() called");
    return 0;
}

/* Demangled: DLB_BLsaddBLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLsaddBLL_strict(void) {
    ALOGD("DLB_BLsaddBLL_strict() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_evaluation_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_evaluation_init(void) {
    ALOGD("DAP_CPDP_PVT_evaluation_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hp_height_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hp_height_init(void) {
    ALOGD("DAP_CPDP_PVT_hp_height_init() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_MFB_RCP10KM_P64ATM301_LEGACY */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_MFB_RCP10KM_P64ATM301_LEGACY = NULL;

/* Demangled: dlb_CLCLmix4CL8SU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLCLmix4CL8SU_flex(void) {
    ALOGD("dlb_CLCLmix4CL8SU_flex() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_data_bass_delayline_buf_attenuate */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_data_bass_delayline_buf_attenuate(void) {
    ALOGD("DAP_CPDP_PVT_data_bass_delayline_buf_attenuate() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hp_height_reverb_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hp_height_reverb_init(void) {
    ALOGD("DAP_CPDP_PVT_hp_height_reverb_init() called");
    return 0;
}

/* Exported Object: ddp_udc_int_crcfwdtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_crcfwdtab = NULL;

/* Exported Object: DAP_CPDP_PVT_P_VISUALIZER_COEF_44K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_P_VISUALIZER_COEF_44K = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L30 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L30 = NULL;

/* Demangled: DLB_r4_fft_960_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_960_s(void) {
    ALOGD("DLB_r4_fft_960_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_240 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_240(void) {
    ALOGD("dlb_fft_inv_usc_240() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_trim_config_read_only */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_trim_config_read_only(void) {
    ALOGD("ddp_udc_int_oamdi_get_trim_config_read_only() called");
    return 0;
}

/* Exported Object: A_NGCS_UPMIX_PLAN_5CH1_TO_7D1D2_CC */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_5CH1_TO_7D1D2_CC = NULL;

/* Demangled: createSoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_safe_read */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_safe_read(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_safe_read() called");
    return 0;
}

/* Demangled: dap_cpdp_ieq_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_ieq_enable_set(void) {
    ALOGD("dap_cpdp_ieq_enable_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_volume_and_ieq_preset_init_generate */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_volume_and_ieq_preset_init_generate(void) {
    ALOGD("DAP_CPDP_PVT_volume_and_ieq_preset_init_generate() called");
    return 0;
}

/* Demangled: dlb_CLzeroCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLzeroCLU_flex(void) {
    ALOGD("dlb_CLzeroCLU_flex() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlULL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlULL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlULL_strict() called");
    return 0;
}

/* Demangled: dlb_vec_IeqLLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_IeqLLU_flex(void) {
    ALOGD("dlb_vec_IeqLLU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L32 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L32 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L36_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L36_1 = NULL;

/* Demangled: DAP_CPDP_PVT_arle_smooth_gains_across_time */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_smooth_gains_across_time(void) {
    ALOGD("DAP_CPDP_PVT_arle_smooth_gains_across_time() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_query_clip_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_query_clip_mem(void) {
    ALOGD("DAP_CPDP_PVT_sben_query_clip_mem() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L36_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L36_2 = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P4_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4_vec_syn = NULL;

/* Demangled: ddp_udc_int_decorr_transient_detection */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_decorr_transient_detection(void) {
    ALOGD("ddp_udc_int_decorr_transient_detection() called");
    return 0;
}

/* Demangled: dap_cpdp_woofer_regulator_enable */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_woofer_regulator_enable(void) {
    ALOGD("dap_cpdp_woofer_regulator_enable() called");
    return 0;
}

/* Exported Object: A_NGCS_UPMIX_PLAN_STEREO_TO_5CH1 */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_STEREO_TO_5CH1 = NULL;

/* Demangled: DAP_CPDP_PVT_mi_pre_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_pre_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_mi_pre_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_compr_process_legacy */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_compr_process_legacy(void) {
    ALOGD("DAP_CPDP_PVT_de_compr_process_legacy() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L180 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L180 = NULL;

/* Demangled: DLB_r4_inv_fft_256_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_256_s(void) {
    ALOGD("DLB_r4_inv_fft_256_s() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hfra_clip_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hfra_clip_process(void) {
    ALOGD("DAP_CPDP_PVT_hfra_clip_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hist_value_to_bin */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hist_value_to_bin(void) {
    ALOGD("DAP_CPDP_PVT_hist_value_to_bin() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_safe_peek_long */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_safe_peek_long(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_safe_peek_long() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_cb_clear */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_cb_clear(void) {
    ALOGD("ddp_udc_int_evo_cb_clear() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_vec_dot_production */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_dot_production(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_dot_production() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L36 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L36 = NULL;

/* Exported Object: ddp_udc_int_par_band_conv_table */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_par_band_conv_table = NULL;

/* Demangled: ddp_udc_int_oamdi_set_has_oa_element_object_description */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_set_has_oa_element_object_description(void) {
    ALOGD("ddp_udc_int_oamdi_set_has_oa_element_object_description() called");
    return 0;
}

/* Demangled: dap_cpdp_pregain_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pregain_set(void) {
    ALOGD("dap_cpdp_pregain_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_release_time */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_release_time(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_release_time() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_vec_mean */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_mean(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_mean() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L120 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L120 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L120_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L120_cos = NULL;

/* Demangled: ddp_udc_int_cpld_sysinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_cpld_sysinit(void) {
    ALOGD("ddp_udc_int_cpld_sysinit() called");
    return 0;
}

/* Demangled: ddp_udc_int_speaker_config_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_speaker_config_init(void) {
    ALOGD("ddp_udc_int_speaker_config_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sbsc_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbsc_init(void) {
    ALOGD("DAP_CPDP_PVT_sbsc_init() called");
    return 0;
}

/* Demangled: DLB_mfb_p10km_analysisL_reset_channel */
extern "C" __attribute__((visibility("default"))) int DLB_mfb_p10km_analysisL_reset_channel(void) {
    ALOGD("DLB_mfb_p10km_analysisL_reset_channel() called");
    return 0;
}

/* Exported Object: ddp_udc_int_aht_qntztab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_aht_qntztab = NULL;

/* Demangled: _dlb_ldct3_scaled_iplu */
extern "C" __attribute__((visibility("default"))) int _dlb_ldct3_scaled_iplu(void) {
    ALOGD("_dlb_ldct3_scaled_iplu() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_12 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_12(void) {
    ALOGD("dlb_fft_fwd_scl_12() called");
    return 0;
}

/* Demangled: DLB_fft_Linv_unscaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_Linv_unscaledCL(void) {
    ALOGD("DLB_fft_Linv_unscaledCL() called");
    return 0;
}

/* Demangled: ddp_udc_int_ramp_gain_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ramp_gain_init(void) {
    ALOGD("ddp_udc_int_ramp_gain_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_calculate_intermediate_feed_angles */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_calculate_intermediate_feed_angles(void) {
    ALOGD("DAP_CPDP_PVT_calculate_intermediate_feed_angles() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_PROTO_COEF */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_PROTO_COEF = NULL;

/* Demangled: DAP_CPDP_PVT_ltrt3d_calc_steering_gains */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_calc_steering_gains(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_calc_steering_gains() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L2 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L480_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L480_1 = NULL;

/* Demangled: dlb_fft_fwd_usc_320 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_320(void) {
    ALOGD("dlb_fft_fwd_usc_320() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_192 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_192(void) {
    ALOGD("dlb_fft_inv_scl_192() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P4_32_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4_32_vec_syn = NULL;

/* Exported Object: ddp_udc_int_altmixtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_altmixtab = NULL;

/* Demangled: ddp_udc_int_omg_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_omg_init(void) {
    ALOGD("ddp_udc_int_omg_init() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::close() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process5closeEv(void) {
    ALOGD("_ZN5dolby11Dap2Process5closeEv() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_device_processing_supported */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_device_processing_supported(void) {
    ALOGD("dap_cpdp_pvt_device_processing_supported() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L12 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L12 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L480_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L480_2 = NULL;

/* Demangled: dlb_fft_inv_usc_480 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_480(void) {
    ALOGD("dlb_fft_inv_usc_480() called");
    return 0;
}

/* Demangled: ddpi_udc_setprocessparam */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_setprocessparam(void) {
    ALOGD("ddpi_udc_setprocessparam() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L4 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L4 = NULL;

/* Demangled: dlb_fft_fwd_scl_15 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_15(void) {
    ALOGD("dlb_fft_fwd_scl_15() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_dimensional_trim_get_trim_bypass */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_dimensional_trim_get_trim_bypass(void) {
    ALOGD("ddp_udc_int_oamdi_dimensional_trim_get_trim_bypass() called");
    return 0;
}

/* Demangled: ddp_udc_int_obj_render_query_scratch */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_obj_render_query_scratch(void) {
    ALOGD("ddp_udc_int_obj_render_query_scratch() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1xL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1xL_strict(void) {
    ALOGD("DLB_blk_Liir1xL_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_16 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_16(void) {
    ALOGD("dlb_fft_fwd_scl_16() called");
    return 0;
}

/* Exported Object: ddp_udc_int_defbndstrc */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_defbndstrc = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L15 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L15 = NULL;

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L128 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L128 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L16 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L16 = NULL;

/* Demangled: DLB_r4_inv_fft_180_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_180_s(void) {
    ALOGD("DLB_r4_inv_fft_180_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_1024_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_1024_s(void) {
    ALOGD("DLB_r4_fft_1024_s() called");
    return 0;
}

/* Exported Object: dlb_hyb_p2_6 */
extern "C" __attribute__((visibility("default"))) void* dlb_hyb_p2_6 = NULL;

/* Demangled: android::DDPDecoder::getConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoder9getConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android10DDPDecoder9getConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_isf_bh_15_9_5_1_decode */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_isf_bh_15_9_5_1_decode = NULL;

/* Demangled: dap_cpdp_prepare */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_prepare(void) {
    ALOGD("dap_cpdp_prepare() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_data_bass_dynamic_compressor */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_data_bass_dynamic_compressor(void) {
    ALOGD("DAP_CPDP_PVT_data_bass_dynamic_compressor() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_spec_subband_max_inv_hcqmf */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_spec_subband_max_inv_hcqmf = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L8 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L8 = NULL;

/* Demangled: dlb_fft_inv_usc_720 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_720(void) {
    ALOGD("dlb_fft_inv_usc_720() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_process(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_process() called");
    return 0;
}

/* Exported Object: dlb_fft_cplx_inv_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_fft_cplx_inv_scl = NULL;

/* Demangled: ddp_udc_int_evo_pack_md_set */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_pack_md_set(void) {
    ALOGD("ddp_udc_int_evo_pack_md_set() called");
    return 0;
}

/* Demangled: ddp_udc_int_resolvecompr */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_resolvecompr(void) {
    ALOGD("ddp_udc_int_resolvecompr() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_ll_empty */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_ll_empty(void) {
    ALOGD("ddp_udc_int_evo_ll_empty() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::~Dap2Process() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2ProcessD0Ev(void) {
    ALOGD("_ZN5dolby11Dap2ProcessD0Ev() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_sysgains_init */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_sysgains_init(void) {
    ALOGD("dap_cpdp_pvt_sysgains_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_init(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_get_limiter_gain */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_get_limiter_gain(void) {
    ALOGD("ddp_udc_int_dvlim_get_limiter_gain() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv1_usmpL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv1_usmpL_strict(void) {
    ALOGD("DLB_blk_Liir2ssv1_usmpL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L360 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L360 = NULL;

/* Demangled: dolby::AProcessor::AProcessor(dolby::IDecConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10AProcessorC2EPNS_10IDecConfigE(void) {
    ALOGD("_ZN5dolby10AProcessorC2EPNS_10IDecConfigE() called");
    return 0;
}

/* Demangled: ddp_udc_int_bsod_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bsod_init(void) {
    ALOGD("ddp_udc_int_bsod_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_FED_run */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_FED_run(void) {
    ALOGD("ddp_udc_int_FED_run() called");
    return 0;
}

/* Demangled: dap_cpdp_hearing_protection_rms_attenuation_target_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_hearing_protection_rms_attenuation_target_set(void) {
    ALOGD("dap_cpdp_hearing_protection_rms_attenuation_target_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_spec_flux_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_spec_flux_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_spec_flux_query_memory() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_brw_peek */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_brw_peek(void) {
    ALOGD("ddp_udc_int_evo_brw_peek() called");
    return 0;
}

/* Demangled: dap_cpdp_virtual_bass_slope_gain_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtual_bass_slope_gain_set(void) {
    ALOGD("dap_cpdp_virtual_bass_slope_gain_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ldn_smoothing_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ldn_smoothing_process(void) {
    ALOGD("DAP_CPDP_PVT_ldn_smoothing_process() called");
    return 0;
}

/* Exported Object: wav2bc_altchidmap */
extern "C" __attribute__((visibility("default"))) void* wav2bc_altchidmap = NULL;

/* Exported Object: ddp_udc_int_sec_duration_per_blk_table */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_sec_duration_per_blk_table = NULL;

/* Demangled: DAP_CPDP_PVT_q2le_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_q2le_process(void) {
    ALOGD("DAP_CPDP_PVT_q2le_process() called");
    return 0;
}

/* Demangled: ddp_udc_int_pacwaste */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_pacwaste(void) {
    ALOGD("ddp_udc_int_pacwaste() called");
    return 0;
}

/* Demangled: ddp_udc_int_drcd_setup */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_drcd_setup(void) {
    ALOGD("ddp_udc_int_drcd_setup() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIjE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: DLB_CLCLmix7CL14SU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLCLmix7CL14SU_strict(void) {
    ALOGD("DLB_CLCLmix7CL14SU_strict() called");
    return 0;
}

/* Demangled: ddp_udc_int_BED_initpcmptrs */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_BED_initpcmptrs(void) {
    ALOGD("ddp_udc_int_BED_initpcmptrs() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_set_object_dialog_indication */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_set_object_dialog_indication(void) {
    ALOGD("ddp_udc_int_oamdi_set_object_dialog_indication() called");
    return 0;
}

/* Demangled: dap_cpdp_rs_amount_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_rs_amount_set(void) {
    ALOGD("dap_cpdp_rs_amount_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_simple_downmixer_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_simple_downmixer_process(void) {
    ALOGD("DAP_CPDP_PVT_simple_downmixer_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_clear_vb_processing_buf */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_clear_vb_processing_buf(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_clear_vb_processing_buf() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_512 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_512(void) {
    ALOGD("dlb_fft_fwd_scl_512() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_set_sample_rate */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_set_sample_rate(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_set_sample_rate() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hearing_protection_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_init(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_init() called");
    return 0;
}

/* Exported Object: DLB_MFB_P10KM_P4_319SC_256M */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_P10KM_P4_319SC_256M = NULL;

/* Exported Object: ddp_udc_int_ecpd_startsbndtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_ecpd_startsbndtab = NULL;

/* Demangled: ddp_udc_int_initmeta */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_initmeta(void) {
    ALOGD("ddp_udc_int_initmeta() called");
    return 0;
}

/* Demangled: ddp_udc_int_speaker_config_mask_spkrs */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_speaker_config_mask_spkrs(void) {
    ALOGD("ddp_udc_int_speaker_config_mask_spkrs() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_ddp_pan_RAUX_LAUX */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_ddp_pan_RAUX_LAUX = NULL;

/* Demangled: dlb_CLmacCLLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmacCLLU_flex(void) {
    ALOGD("dlb_CLmacCLLU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_960 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_960(void) {
    ALOGD("dlb_fft_inv_usc_960() called");
    return 0;
}

/* Demangled: ddp_udc_int_extract_evolution_mdat */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_extract_evolution_mdat(void) {
    ALOGD("ddp_udc_int_extract_evolution_mdat() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_dap_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_dap_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_mi_dap_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_gain_calc_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_gain_calc_process(void) {
    ALOGD("DAP_CPDP_PVT_gain_calc_process() called");
    return 0;
}

/* Demangled: DLB_CLmfb_p10km_analysisL_legacy_twiddle */
extern "C" __attribute__((visibility("default"))) int DLB_CLmfb_p10km_analysisL_legacy_twiddle(void) {
    ALOGD("DLB_CLmfb_p10km_analysisL_legacy_twiddle() called");
    return 0;
}

/* Demangled: ddp_udc_int_channel_remap_split_cs */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_channel_remap_split_cs(void) {
    ALOGD("ddp_udc_int_channel_remap_split_cs() called");
    return 0;
}

/* Demangled: ddp_udc_int_ramp_gain_query_mem */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ramp_gain_query_mem(void) {
    ALOGD("ddp_udc_int_ramp_gain_query_mem() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_dap_set_pregain */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_dap_set_pregain(void) {
    ALOGD("DAP_CPDP_PVT_mi_dap_set_pregain() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DE_MCRA_WIN_DEPTH02 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DE_MCRA_WIN_DEPTH02 = NULL;

/* Demangled: dolby::DdpDynamicConfig::updateSourceType(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DdpDynamicConfig16updateSourceTypeEbb(void) {
    ALOGD("_ZN5dolby16DdpDynamicConfig16updateSourceTypeEbb() called");
    return 0;
}

/* Demangled: dolby::AProcessor::process(int, int, int, void*, void*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10AProcessor7processEiiiPvS1_iii(void) {
    ALOGD("_ZN5dolby10AProcessor7processEiiiPvS1_iii() called");
    return 0;
}

/* Demangled: setsubparams */
extern "C" __attribute__((visibility("default"))) int setsubparams(void) {
    ALOGD("setsubparams() called");
    return 0;
}

/* Demangled: ddp_udc_int_evod_generate_output */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evod_generate_output(void) {
    ALOGD("ddp_udc_int_evod_generate_output() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_resample_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_resample_process(void) {
    ALOGD("DAP_CPDP_PVT_resample_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_transpose */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_transpose(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_transpose() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L320_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L320_cos = NULL;

/* Demangled: ddp_udc_int_oamd_framer_add */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamd_framer_add(void) {
    ALOGD("ddp_udc_int_oamd_framer_add() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_brw_write */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_brw_write(void) {
    ALOGD("ddp_udc_int_dil_brw_write() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_get_lin_hf_gains */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_get_lin_hf_gains(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_get_lin_hf_gains() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_zcr_query_clip_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_zcr_query_clip_mem(void) {
    ALOGD("DAP_CPDP_PVT_zcr_query_clip_mem() called");
    return 0;
}

/* Demangled: DLB_r4_fft_4096_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_4096_s(void) {
    ALOGD("DLB_r4_fft_4096_s() called");
    return 0;
}

/* Exported Object: ddp_udc_int_deltatab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_deltatab = NULL;

/* Demangled: DAP_CPDP_PVT_mfcc_flux_clip_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_flux_clip_process(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_flux_clip_process() called");
    return 0;
}

/* Demangled: DLB_CLmacCLLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmacCLLU_strict(void) {
    ALOGD("DLB_CLmacCLLU_strict() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: ddp_udc_int_btad_copychbai */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_btad_copychbai(void) {
    ALOGD("ddp_udc_int_btad_copychbai() called");
    return 0;
}

/* Demangled: ddp_udc_int_FED_open */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_FED_open(void) {
    ALOGD("ddp_udc_int_FED_open() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_isf_bh_5_3_0_0_decode */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_isf_bh_5_3_0_0_decode = NULL;

/* Demangled: DLB_r4_inv_fft_144_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_144_s(void) {
    ALOGD("DLB_r4_inv_fft_144_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_set_boost */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_set_boost(void) {
    ALOGD("ddp_udc_int_dvlim_set_boost() called");
    return 0;
}

/* Demangled: dap_cpdp_mi2dv_leveler_steering_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_mi2dv_leveler_steering_enable_set(void) {
    ALOGD("dap_cpdp_mi2dv_leveler_steering_enable_set() called");
    return 0;
}

/* Exported Object: A_NGCS_UPMIX_PLAN_7CH1_TO_7CH1 */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_7CH1_TO_7CH1 = NULL;

/* Demangled: DAP_CPDP_PVT_mi_vec_check_valley */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_check_valley(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_check_valley() called");
    return 0;
}

/* Demangled: ddp_udc_int_extract_audblk_mdat */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_extract_audblk_mdat(void) {
    ALOGD("ddp_udc_int_extract_audblk_mdat() called");
    return 0;
}

/* Demangled: ddp_udc_int_room_config_size_panner_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_room_config_size_panner_init(void) {
    ALOGD("ddp_udc_int_room_config_size_panner_init() called");
    return 0;
}

/* Demangled: dap_cpdp_mi2dialog_enhancer_steering_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_mi2dialog_enhancer_steering_enable_set(void) {
    ALOGD("dap_cpdp_mi2dialog_enhancer_steering_enable_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_evaluation_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_evaluation_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_evaluation_query_memory() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5D1D2_CC */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5D1D2_CC = NULL;

/* Demangled: DAP_CPDP_PVT_icsc_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_icsc_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_icsc_query_memory() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L45 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L45 = NULL;

/* Demangled: dlb_CLsubCLCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLsubCLCLU_flex(void) {
    ALOGD("dlb_CLsubCLCLU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L192 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L192 = NULL;

/* Demangled: DLB_r4_fft_240 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_240(void) {
    ALOGD("DLB_r4_fft_240() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_256 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_256(void) {
    ALOGD("dlb_fft_inv_usc_256() called");
    return 0;
}

/* Demangled: ddp_udc_int_convertsnroffst */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_convertsnroffst(void) {
    ALOGD("ddp_udc_int_convertsnroffst() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::validateLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process15validateLicenseEv(void) {
    ALOGD("_ZN5dolby11Dap2Process15validateLicenseEv() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ldn_calc_specific_loudness */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ldn_calc_specific_loudness(void) {
    ALOGD("DAP_CPDP_PVT_ldn_calc_specific_loudness() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisL_set_slot_increment */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_set_slot_increment(void) {
    ALOGD("DLB_qmf_analysisL_set_slot_increment() called");
    return 0;
}

/* Demangled: ddp_udc_int_dmxd_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dmxd_process(void) {
    ALOGD("ddp_udc_int_dmxd_process() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::logTag() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process6logTagEv(void) {
    ALOGD("_ZN5dolby11Dap2Process6logTagEv() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssefL_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssefL_set_coef(void) {
    ALOGD("DLB_blk_Liir2ssefL_set_coef() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L48 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L48 = NULL;

/* Demangled: dlb_fft_fwd_scl_20 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_20(void) {
    ALOGD("dlb_fft_fwd_scl_20() called");
    return 0;
}

/* Demangled: ddp_udc_int_room_config_get_speaker_plane */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_room_config_get_speaker_plane(void) {
    ALOGD("ddp_udc_int_room_config_get_speaker_plane() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_milib_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_milib_close(void) {
    ALOGD("DAP_CPDP_PVT_dlb_milib_close() called");
    return 0;
}

/* Demangled: ddp_udc_int_dec51_process_substream */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dec51_process_substream(void) {
    ALOGD("ddp_udc_int_dec51_process_substream() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_isf_decoder_metadata */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_isf_decoder_metadata = NULL;

/* Demangled: DAP_CPDP_PVT_data_bass_subqmf_synthesis */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_data_bass_subqmf_synthesis(void) {
    ALOGD("DAP_CPDP_PVT_data_bass_subqmf_synthesis() called");
    return 0;
}

/* Demangled: ddp_udc_int_bee_encddfrm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bee_encddfrm(void) {
    ALOGD("ddp_udc_int_bee_encddfrm() called");
    return 0;
}

/* Exported Object: ddp_udc_int_oamd_5bit_to_oari_Q15 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_oamd_5bit_to_oari_Q15 = NULL;

/* Demangled: DAP_CPDP_PVT_dap_pvt_graphic_equalizer_configure */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_pvt_graphic_equalizer_configure(void) {
    ALOGD("DAP_CPDP_PVT_dap_pvt_graphic_equalizer_configure() called");
    return 0;
}

/* Demangled: DLB_CLrecipCLUU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLrecipCLUU_strict(void) {
    ALOGD("DLB_CLrecipCLUU_strict() called");
    return 0;
}

/* Exported Object: dlb_num_of_non_power_two_lengths */
extern "C" __attribute__((visibility("default"))) void* dlb_num_of_non_power_two_lengths = NULL;

/* Demangled: ddp_udc_int_jocdec_fetch_converted_input */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocdec_fetch_converted_input(void) {
    ALOGD("ddp_udc_int_jocdec_fetch_converted_input() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int const*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIjE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: dap_cpdp_bass_extraction_cutoff_frequency_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_bass_extraction_cutoff_frequency_set(void) {
    ALOGD("dap_cpdp_bass_extraction_cutoff_frequency_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_cmtx_lock */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_cmtx_lock(void) {
    ALOGD("DAP_CPDP_PVT_cmtx_lock() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L4_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L4_1 = NULL;

/* Demangled: dlb_fft_fwd_scl_24 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_24(void) {
    ALOGD("dlb_fft_fwd_scl_24() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L4_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L4_2 = NULL;

/* Demangled: DLB_qmf_synthesisL_set_slot_increment */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_set_slot_increment(void) {
    ALOGD("DLB_qmf_synthesisL_set_slot_increment() called");
    return 0;
}

/* Demangled: ddp_udc_int_fboar_rendering */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_fboar_rendering(void) {
    ALOGD("ddp_udc_int_fboar_rendering() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L24 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L24 = NULL;

/* Demangled: DAP_CPDP_PVT_asa_event_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_asa_event_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_asa_event_query_memory() called");
    return 0;
}

/* Demangled: DLB_blk_Lfir2L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir2L_strict(void) {
    ALOGD("DLB_blk_Lfir2L_strict() called");
    return 0;
}

/* Demangled: ddp_udc_int_expe_tentch_frm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_expe_tentch_frm(void) {
    ALOGD("ddp_udc_int_expe_tentch_frm() called");
    return 0;
}

/* Demangled: ddp_udc_int_evod_close */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evod_close(void) {
    ALOGD("ddp_udc_int_evod_close() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisL_close */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_close(void) {
    ALOGD("DLB_qmf_analysisL_close() called");
    return 0;
}

/* Exported Object: ddp_udc_int_oamd_z_extp_pos_unsigned_to_q15 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_oamd_z_extp_pos_unsigned_to_q15 = NULL;

/* Exported Object: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_TF_DB_TAB_44K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_TF_DB_TAB_44K = NULL;

/* Exported Object: ddp_udc_int_a_t_indices */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_t_indices = NULL;

/* Exported Object: ddp_udc_int_DELTA_Y_SAMPLES */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_DELTA_Y_SAMPLES = NULL;

/* Demangled: DAP_CPDP_PVT_nyquist_filters_844_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_nyquist_filters_844_close(void) {
    ALOGD("DAP_CPDP_PVT_nyquist_filters_844_close() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_rs_set_amount */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_rs_set_amount(void) {
    ALOGD("DAP_CPDP_PVT_rs_set_amount() called");
    return 0;
}

/* Demangled: DLB_blk_LLdeshuffleLL_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LLdeshuffleLL_inplace_strict(void) {
    ALOGD("DLB_blk_LLdeshuffleLL_inplace_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_12 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_12(void) {
    ALOGD("DLB_r4_fft_12() called");
    return 0;
}

/* Demangled: ddp_udc_int_ecpd_blkcopy */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ecpd_blkcopy(void) {
    ALOGD("ddp_udc_int_ecpd_blkcopy() called");
    return 0;
}

/* Demangled: ddp_udc_int_mcv_convertfrm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mcv_convertfrm(void) {
    ALOGD("ddp_udc_int_mcv_convertfrm() called");
    return 0;
}

/* Demangled: ddp_udc_int_jocdec_get_param */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocdec_get_param(void) {
    ALOGD("ddp_udc_int_jocdec_get_param() called");
    return 0;
}

/* Demangled: ddp_udc_int_tsid_registerframe */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsid_registerframe(void) {
    ALOGD("ddp_udc_int_tsid_registerframe() called");
    return 0;
}

/* Demangled: dap_cpdp_regulator_tuning_info_get */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_regulator_tuning_info_get(void) {
    ALOGD("dap_cpdp_regulator_tuning_info_get() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_dap_set_de_amount */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_dap_set_de_amount(void) {
    ALOGD("DAP_CPDP_PVT_mi_dap_set_de_amount() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sbpp_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbpp_init(void) {
    ALOGD("DAP_CPDP_PVT_sbpp_init() called");
    return 0;
}

/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_peak_iir1L_set_coef(void) {
    ALOGD("DLB_blk_Lattack_decay_peak_iir1L_set_coef() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L512 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L512 = NULL;

/* Demangled: DLB_r4_fft_40_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_40_s(void) {
    ALOGD("DLB_r4_fft_40_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_480 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_480(void) {
    ALOGD("DLB_r4_fft_480() called");
    return 0;
}

/* Demangled: ddp_udc_int_speaker_config_identity_get */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_speaker_config_identity_get(void) {
    ALOGD("ddp_udc_int_speaker_config_identity_get() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_set_obj_not_active */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_set_obj_not_active(void) {
    ALOGD("ddp_udc_int_oamdi_set_obj_not_active() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_pow_smooth_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_pow_smooth_process(void) {
    ALOGD("DAP_CPDP_PVT_de_pow_smooth_process() called");
    return 0;
}

/* Demangled: ddp_udc_int_bed_distrib_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bed_distrib_process(void) {
    ALOGD("ddp_udc_int_bed_distrib_process() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_AA_COMPR_COEFS_SLOPES_44K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_AA_COMPR_COEFS_SLOPES_44K = NULL;

/* Exported Object: DAP_CPDP_PVT_A_DE_MCRA_ALPHA0 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DE_MCRA_ALPHA0 = NULL;

/* Demangled: DLB_r4_fft_15 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_15(void) {
    ALOGD("DLB_r4_fft_15() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_cmtx_unlock */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_cmtx_unlock(void) {
    ALOGD("DAP_CPDP_PVT_cmtx_unlock() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hybrid_filter_synthesis_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hybrid_filter_synthesis_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_hybrid_filter_synthesis_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_stats_run */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_stats_run(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_stats_run() called");
    return 0;
}

/* Demangled: DLB_r4_fft_16 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_16(void) {
    ALOGD("DLB_r4_fft_16() called");
    return 0;
}

/* Demangled: ddp_udc_int_bsid_getbsid */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bsid_getbsid(void) {
    ALOGD("ddp_udc_int_bsid_getbsid() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_get_alignment_bits */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_get_alignment_bits(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_get_alignment_bits() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_7D1_TO_5D1D2 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_7D1_TO_5D1D2 = NULL;

/* Demangled: DAP_CPDP_PVT_calc_hcqmf_3ch_decorr */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_calc_hcqmf_3ch_decorr(void) {
    ALOGD("DAP_CPDP_PVT_calc_hcqmf_3ch_decorr() called");
    return 0;
}

/* Exported Object: wav2dlb_altchidmap */
extern "C" __attribute__((visibility("default"))) void* wav2dlb_altchidmap = NULL;

/* Exported Object: ddp_udc_int_decorr_subbnd_offset_tab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_decorr_subbnd_offset_tab = NULL;

/* Demangled: ddp_udc_int_dlb_bitbuf_fast_read_long */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_fast_read_long(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_fast_read_long() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_duplicate */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_duplicate(void) {
    ALOGD("ddp_udc_int_oamdi_duplicate() called");
    return 0;
}

/* Demangled: ddp_udc_int_dyn_objs_prog_only */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dyn_objs_prog_only(void) {
    ALOGD("ddp_udc_int_dyn_objs_prog_only() called");
    return 0;
}

/* Demangled: DLB_r4_fft_720 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_720(void) {
    ALOGD("DLB_r4_fft_720() called");
    return 0;
}

/* Demangled: android::DDPDecoder::~DDPDecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoderD0Ev(void) {
    ALOGD("_ZN7android10DDPDecoderD0Ev() called");
    return 0;
}

/* Demangled: initexecparams */
extern "C" __attribute__((visibility("default"))) int initexecparams(void) {
    ALOGD("initexecparams() called");
    return 0;
}

/* Demangled: ddp_udc_int_remapmant */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_remapmant(void) {
    ALOGD("ddp_udc_int_remapmant() called");
    return 0;
}

/* Demangled: DLB_BLmpy_scale_xBLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmpy_scale_xBLSU_strict(void) {
    ALOGD("DLB_BLmpy_scale_xBLSU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_2_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_2_s(void) {
    ALOGD("DLB_r4_inv_fft_2_s() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_calc_noise_weight_gain */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_calc_noise_weight_gain(void) {
    ALOGD("DAP_CPDP_PVT_calc_noise_weight_gain() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_pes_pan_RSUR_LSUR */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_pes_pan_RSUR_LSUR = NULL;

/* Exported Object: DAP_CPDP_PVT_mfcc_filter_hcqmf_tab */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_mfcc_filter_hcqmf_tab = NULL;

/* Demangled: DAP_CPDP_PVT_lvl_calc_drc_scale_min */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lvl_calc_drc_scale_min(void) {
    ALOGD("DAP_CPDP_PVT_lvl_calc_drc_scale_min() called");
    return 0;
}

/* Demangled: dlb_blk_LfirUL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LfirUL_flex(void) {
    ALOGD("dlb_blk_LfirUL_flex() called");
    return 0;
}

/* Demangled: ddp_udc_int_BEE_run */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_BEE_run(void) {
    ALOGD("ddp_udc_int_BEE_run() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_delay_line_peek_indirect_offset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_delay_line_peek_indirect_offset(void) {
    ALOGD("DAP_CPDP_PVT_delay_line_peek_indirect_offset() called");
    return 0;
}

/* Demangled: DLB_r4_cplx_fwd_scaled */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_fwd_scaled(void) {
    ALOGD("DLB_r4_cplx_fwd_scaled() called");
    return 0;
}

/* Demangled: ddp_udc_int_converter_convert_input */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_converter_convert_input(void) {
    ALOGD("ddp_udc_int_converter_convert_input() called");
    return 0;
}

/* Demangled: dap_cpdp_clear */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_clear(void) {
    ALOGD("dap_cpdp_clear() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_288 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_288(void) {
    ALOGD("dlb_fft_fwd_scl_288() called");
    return 0;
}

/* Demangled: ddp_udc_int_crc_chkddfrm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_crc_chkddfrm(void) {
    ALOGD("ddp_udc_int_crc_chkddfrm() called");
    return 0;
}

/* Exported Object: ddp_udc_int_A_ROOM_CONFIG_SPKS_FRONT */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_A_ROOM_CONFIG_SPKS_FRONT = NULL;

/* Demangled: ddp_udc_int_oamdi_get_oa_element_object_description */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_oa_element_object_description(void) {
    ALOGD("ddp_udc_int_oamdi_get_oa_element_object_description() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sbsc_query_clip_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbsc_query_clip_mem(void) {
    ALOGD("DAP_CPDP_PVT_sbsc_query_clip_mem() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_576 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_576(void) {
    ALOGD("dlb_fft_fwd_usc_576() called");
    return 0;
}

/* Demangled: ddp_udc_int_parser_parse */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_parser_parse(void) {
    ALOGD("ddp_udc_int_parser_parse() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_flux_state_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_flux_state_init(void) {
    ALOGD("DAP_CPDP_PVT_de_flux_state_init() called");
    return 0;
}

/* Demangled: dlb_vec_UnormSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_UnormSU_flex(void) {
    ALOGD("dlb_vec_UnormSU_flex() called");
    return 0;
}

/* Exported Object: ddp_udc_int_gbl_ungrp3 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_ungrp3 = NULL;

/* Exported Object: ddp_udc_int_msmix_pes_pan_LEFT_RGHT */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_pes_pan_LEFT_RGHT = NULL;

/* Demangled: DLB_mfb_p10km_synthesisCL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_mfb_p10km_synthesisCL_query_mem(void) {
    ALOGD("DLB_mfb_p10km_synthesisCL_query_mem() called");
    return 0;
}

/* Demangled: ddp_udc_int_speaker_config_spkr_set */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_speaker_config_spkr_set(void) {
    ALOGD("ddp_udc_int_speaker_config_spkr_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_compressor_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_compressor_init(void) {
    ALOGD("DAP_CPDP_PVT_arle_compressor_init() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_5D1D2 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_5D1D2 = NULL;

/* Exported Object: ddp_udc_int_gbl_ungrp5 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_ungrp5 = NULL;

/* Demangled: ddp_udc_int_mixer_run */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mixer_run(void) {
    ALOGD("ddp_udc_int_mixer_run() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_classifier_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_classifier_reset(void) {
    ALOGD("DAP_CPDP_PVT_classifier_reset() called");
    return 0;
}

/* Demangled: dlb_blk_Liir1xL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir1xL_flex(void) {
    ALOGD("dlb_blk_Liir1xL_flex() called");
    return 0;
}

/* Demangled: DLB_r4_fft_960 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_960(void) {
    ALOGD("DLB_r4_fft_960() called");
    return 0;
}

/* Exported Object: ddp_udc_int_recipr */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_recipr = NULL;

/* Demangled: ddp_udc_int_omg_query_scratch */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_omg_query_scratch(void) {
    ALOGD("ddp_udc_int_omg_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_simple_downmixer_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_simple_downmixer_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_simple_downmixer_query_scratch() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7CH1_CC */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7CH1_CC = NULL;

/* Demangled: DAP_CPDP_PVT_shuffle_process_inplace */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_shuffle_process_inplace(void) {
    ALOGD("DAP_CPDP_PVT_shuffle_process_inplace() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisL_copy_states */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_copy_states(void) {
    ALOGD("DLB_qmf_synthesisL_copy_states() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_feature_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_feature_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_feature_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_onset_to_rhythm */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_onset_to_rhythm(void) {
    ALOGD("DAP_CPDP_PVT_sben_onset_to_rhythm() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_16_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_16_s(void) {
    ALOGD("DLB_r4_inv_fft_16_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_expe_pac */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_expe_pac(void) {
    ALOGD("ddp_udc_int_expe_pac() called");
    return 0;
}

/* Demangled: dlb_blk_LminLLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LminLLL_flex(void) {
    ALOGD("dlb_blk_LminLLL_flex() called");
    return 0;
}

/* Exported Object: dlb_cos_64_full */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_64_full = NULL;

/* Demangled: DAP_CPDP_PVT_down_mix_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_down_mix_process(void) {
    ALOGD("DAP_CPDP_PVT_down_mix_process() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency() called");
    return 0;
}

/* Demangled: ddp_udc_int_evod_query_mem */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evod_query_mem(void) {
    ALOGD("ddp_udc_int_evod_query_mem() called");
    return 0;
}

/* Demangled: ddp_udc_int_udc_loadparams */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_udc_loadparams(void) {
    ALOGD("ddp_udc_int_udc_loadparams() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_diffuse_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_diffuse_reset(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_diffuse_reset() called");
    return 0;
}

/* Demangled: DLB_CLmix4CL4SU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmix4CL4SU_strict(void) {
    ALOGD("DLB_CLmix4CL4SU_strict() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlUnL */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlUnL(void) {
    ALOGD("DLB_blk_Lmix_shlUnL() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_30 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_30(void) {
    ALOGD("dlb_fft_fwd_scl_30() called");
    return 0;
}

/* Exported Object: ddp_udc_int_nfront */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_nfront = NULL;

/* Demangled: ddp_udc_int_tsh_clearhistory */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsh_clearhistory(void) {
    ALOGD("ddp_udc_int_tsh_clearhistory() called");
    return 0;
}

/* Demangled: dolby::DlbBufferProvider::~DlbBufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17DlbBufferProviderD1Ev(void) {
    ALOGD("_ZN5dolby17DlbBufferProviderD1Ev() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_ana_init(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_ana_init() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LTRT3D_PASSIVE_GAIN_714 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LTRT3D_PASSIVE_GAIN_714 = NULL;

/* Demangled: DLB_vec_Lmean_sqrLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_Lmean_sqrLU_strict(void) {
    ALOGD("DLB_vec_Lmean_sqrLU_strict() called");
    return 0;
}

/* Exported Object: ddp_udc_int_gaq_codetogaintab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gaq_codetogaintab = NULL;

/* Demangled: ddp_udc_int_renderer_normalize_by_energy */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_renderer_normalize_by_energy(void) {
    ALOGD("ddp_udc_int_renderer_normalize_by_energy() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L30 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L30 = NULL;

/* Demangled: dlb_fft_fwd_scl_32 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_32(void) {
    ALOGD("dlb_fft_fwd_scl_32() called");
    return 0;
}

/* Demangled: dap_cpdp_bass_mbdrc_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_bass_mbdrc_enable_set(void) {
    ALOGD("dap_cpdp_bass_mbdrc_enable_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_coefs_get_post_qmf1_phase_adjust */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_coefs_get_post_qmf1_phase_adjust(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_coefs_get_post_qmf1_phase_adjust() called");
    return 0;
}

/* Exported Object: DLB_MFB_P10KM_P64ATM301_LEGACY */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_P10KM_P64ATM301_LEGACY = NULL;

/* Demangled: ddp_udc_int_dlb_bitbuf_read */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_read(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_read() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hdr_P2powP */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hdr_P2powP(void) {
    ALOGD("DAP_CPDP_PVT_hdr_P2powP() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L144 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L144 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L32 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L32 = NULL;

/* Demangled: DLB_r4_fft_256 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_256(void) {
    ALOGD("DLB_r4_fft_256() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_768 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_768(void) {
    ALOGD("dlb_fft_fwd_scl_768() called");
    return 0;
}

/* Demangled: ddp_udc_int_fed_evoquickaccess */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_fed_evoquickaccess(void) {
    ALOGD("ddp_udc_int_fed_evoquickaccess() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_init(void) {
    ALOGD("ddp_udc_int_oamdi_init() called");
    return 0;
}

/* Demangled: dap_cpdp_prepare_cqmf */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_prepare_cqmf(void) {
    ALOGD("dap_cpdp_prepare_cqmf() called");
    return 0;
}

/* Demangled: android::DDPDecoder::onReset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoder7onResetEv(void) {
    ALOGD("_ZN7android10DDPDecoder7onResetEv() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::setParam(int, int const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process8setParamEiPKii(void) {
    ALOGD("_ZN5dolby11Dap2Process8setParamEiPKii() called");
    return 0;
}

/* Demangled: dap_cpdp_output_mode_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_output_mode_set(void) {
    ALOGD("dap_cpdp_output_mode_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_clvec_buffer_mixer_coefs_gen_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_clvec_buffer_mixer_coefs_gen_init(void) {
    ALOGD("DAP_CPDP_PVT_clvec_buffer_mixer_coefs_gen_init() called");
    return 0;
}

/* Demangled: DLB_BLmaxBLL_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmaxBLL_inplace_strict(void) {
    ALOGD("DLB_BLmaxBLL_inplace_strict() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1L_setup(void) {
    ALOGD("DLB_blk_Liir1L_setup() called");
    return 0;
}

/* Demangled: dlb_CLdivCLCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLdivCLCLU_flex(void) {
    ALOGD("dlb_CLdivCLCLU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_36 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_36(void) {
    ALOGD("dlb_fft_fwd_scl_36() called");
    return 0;
}

/* Demangled: android::DDPDecoder::setMultiChannelPCMOutDownmix() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoder28setMultiChannelPCMOutDownmixEv(void) {
    ALOGD("_ZN7android10DDPDecoder28setMultiChannelPCMOutDownmixEv() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sbsc_clip_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbsc_clip_process(void) {
    ALOGD("DAP_CPDP_PVT_sbsc_clip_process() called");
    return 0;
}

/* Demangled: DLB_blk_LdelayU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LdelayU_strict(void) {
    ALOGD("DLB_blk_LdelayU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_20 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_20(void) {
    ALOGD("DLB_r4_fft_20() called");
    return 0;
}

/* Demangled: ddp_udc_int_savepkexps */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_savepkexps(void) {
    ALOGD("ddp_udc_int_savepkexps() called");
    return 0;
}

/* Exported Object: ddp_udc_int_gbl_lxrx2surmix_tab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_lxrx2surmix_tab = NULL;

/* Demangled: ddp_udc_int_jocdec_feed_data */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocdec_feed_data(void) {
    ALOGD("ddp_udc_int_jocdec_feed_data() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_set_hard_clip */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_set_hard_clip(void) {
    ALOGD("ddp_udc_int_dvlim_set_hard_clip() called");
    return 0;
}

/* Demangled: dap_cpdp_virtual_bass_hybgains_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtual_bass_hybgains_set(void) {
    ALOGD("dap_cpdp_virtual_bass_hybgains_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_delay_line_clvec_size_query */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_delay_line_clvec_size_query(void) {
    ALOGD("DAP_CPDP_PVT_delay_line_clvec_size_query() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_spec_calc_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_spec_calc_reset(void) {
    ALOGD("DAP_CPDP_PVT_spec_calc_reset() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L36 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L36 = NULL;

/* Demangled: DLB_r4_inv_fft_384_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_384_s(void) {
    ALOGD("DLB_r4_inv_fft_384_s() called");
    return 0;
}

/* Exported Object: ddp_udc_int_oamd_4bit_unsigned_to_oari_Q15 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_oamd_4bit_unsigned_to_oari_Q15 = NULL;

/* Demangled: android::DDPDecoder::start() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoder5startEv(void) {
    ALOGD("_ZN7android10DDPDecoder5startEv() called");
    return 0;
}

/* Demangled: ddp_udc_int_frmd_checkcoherence */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_frmd_checkcoherence(void) {
    ALOGD("ddp_udc_int_frmd_checkcoherence() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::Dap2Process(bool, bool, bool, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2ProcessC2EbbbPKc(void) {
    ALOGD("_ZN5dolby11Dap2ProcessC2EbbbPKc() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_icsc_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_icsc_init(void) {
    ALOGD("DAP_CPDP_PVT_icsc_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_diffuse_gains_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_diffuse_gains_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_diffuse_gains_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_centre_spread_run */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_centre_spread_run(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_centre_spread_run() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L90_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L90_cos = NULL;

/* Exported Object: ddp_udc_int_a_isf_bh_5_3_0_0_reorder */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_isf_bh_5_3_0_0_reorder = NULL;

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_7CH1 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_7CH1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L288 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L288 = NULL;

/* Demangled: DLB_r4_fft_24 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_24(void) {
    ALOGD("DLB_r4_fft_24() called");
    return 0;
}

/* Demangled: dolby::DlbBufferProvider::configure(int, audio_format_t, audio_channel_mask_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17DlbBufferProvider9configureEi14audio_format_t20audio_channel_mask_t(void) {
    ALOGD("_ZN5dolby17DlbBufferProvider9configureEi14audio_format_t20audio_channel_mask_t() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_scalar_avg_filter_clear */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_scalar_avg_filter_clear(void) {
    ALOGD("DAP_CPDP_PVT_dlb_scalar_avg_filter_clear() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_rap_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_rap_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_sben_rap_query_memory() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L180 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L180 = NULL;

/* Demangled: DLB_qmf_analysisS_init */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisS_init(void) {
    ALOGD("DLB_qmf_analysisS_init() called");
    return 0;
}

/* Exported Object: ddp_udc_int_bap1_vqtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_bap1_vqtab = NULL;

/* Demangled: DAP_CPDP_PVT_asa_reset_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_asa_reset_init(void) {
    ALOGD("DAP_CPDP_PVT_asa_reset_init() called");
    return 0;
}

/* Demangled: dolby::AProcessor::updateDapConfig(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10AProcessor15updateDapConfigEi(void) {
    ALOGD("_ZN5dolby10AProcessor15updateDapConfigEi() called");
    return 0;
}

/* Demangled: DLB_r4_fft_128_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_128_s(void) {
    ALOGD("DLB_r4_fft_128_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_hp_render_mode */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_hp_render_mode(void) {
    ALOGD("ddp_udc_int_oamdi_get_hp_render_mode() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: ddp_udc_int_sync_noise */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_sync_noise(void) {
    ALOGD("ddp_udc_int_sync_noise() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_asa_noise_calc_attenuation_factor */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_asa_noise_calc_attenuation_factor(void) {
    ALOGD("DAP_CPDP_PVT_asa_noise_calc_attenuation_factor() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_chroma_clip_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_chroma_clip_process(void) {
    ALOGD("DAP_CPDP_PVT_chroma_clip_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hfra_frame_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hfra_frame_process(void) {
    ALOGD("DAP_CPDP_PVT_hfra_frame_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L384 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L384 = NULL;

/* Exported Object: dlb_fft_cplx_fwd_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_fft_cplx_fwd_scl = NULL;

/* Exported Object: ddp_udc_int_spxd_endftoendsbndtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_spxd_endftoendsbndtab = NULL;

/* Demangled: ddp_udc_int_derive_mdat_aggregates */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_derive_mdat_aggregates(void) {
    ALOGD("ddp_udc_int_derive_mdat_aggregates() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_pb_get_newest */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_pb_get_newest(void) {
    ALOGD("ddp_udc_int_evo_pb_get_newest() called");
    return 0;
}

/* Demangled: hp_height_hrtf_and_fdn_downmix_process */
extern "C" __attribute__((visibility("default"))) int hp_height_hrtf_and_fdn_downmix_process(void) {
    ALOGD("hp_height_hrtf_and_fdn_downmix_process() called");
    return 0;
}

/* Demangled: DLB_blk_LminLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LminLL_strict(void) {
    ALOGD("DLB_blk_LminLL_strict() called");
    return 0;
}

/* Demangled: ddp_udc_int_isf_decoder_format_set */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_isf_decoder_format_set(void) {
    ALOGD("ddp_udc_int_isf_decoder_format_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hearing_protection_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_query_memory() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_oa_element_bed_object_read_only */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_oa_element_bed_object_read_only(void) {
    ALOGD("ddp_udc_int_oamdi_get_oa_element_bed_object_read_only() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_buffer_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_buffer_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_mi_buffer_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_vec_check_peak */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_check_peak(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_check_peak() called");
    return 0;
}

/* Demangled: ddp_udc_int_intloud_open */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_intloud_open(void) {
    ALOGD("ddp_udc_int_intloud_open() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamd_trans_last_update_sample */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamd_trans_last_update_sample(void) {
    ALOGD("ddp_udc_int_oamd_trans_last_update_sample() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L720_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L720_1 = NULL;

/* Demangled: ddpi_udc_gettimeslice_mdat */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_gettimeslice_mdat(void) {
    ALOGD("ddpi_udc_gettimeslice_mdat() called");
    return 0;
}

/* Demangled: ddp_udc_int_BEE_open */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_BEE_open(void) {
    ALOGD("ddp_udc_int_BEE_open() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_verify_pgm_bnd */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_verify_pgm_bnd(void) {
    ALOGD("ddp_udc_int_dil_verify_pgm_bnd() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_all_obj_md */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_all_obj_md(void) {
    ALOGD("ddp_udc_int_oamdi_get_all_obj_md() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_md_ver */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_md_ver(void) {
    ALOGD("ddp_udc_int_oamdi_get_md_ver() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_DUCK_THRESHOLDS_44K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DUCK_THRESHOLDS_44K = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L720_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L720_2 = NULL;

/* Exported Object: ddp_udc_int_A_SPEAKER_CONFIG_SPK_POS */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_A_SPEAKER_CONFIG_SPK_POS = NULL;

/* Demangled: dlb_qmf_analysisS_open */
extern "C" __attribute__((visibility("default"))) int dlb_qmf_analysisS_open(void) {
    ALOGD("dlb_qmf_analysisS_open() called");
    return 0;
}

/* Demangled: DLB_CLCLmix6CL12SU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLCLmix6CL12SU_strict(void) {
    ALOGD("DLB_CLCLmix6CL12SU_strict() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_upmixer_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_upmixer_init(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_upmixer_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpddbai */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpddbai(void) {
    ALOGD("ddp_udc_int_unpddbai() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC_128M */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC_128M = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L60 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L60 = NULL;

/* Demangled: DLB_r4_fft_2048_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_2048_s(void) {
    ALOGD("DLB_r4_fft_2048_s() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_visualizer_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_visualizer_init(void) {
    ALOGD("DAP_CPDP_PVT_visualizer_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_convertddpfrmset_abk */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_convertddpfrmset_abk(void) {
    ALOGD("ddp_udc_int_convertddpfrmset_abk() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_clear_buffer */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_clear_buffer(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_clear_buffer() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_lvl_smooth_scale_band */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lvl_smooth_scale_band(void) {
    ALOGD("DAP_CPDP_PVT_lvl_smooth_scale_band() called");
    return 0;
}

/* Exported Object: ddp_udc_int_gaq_levelstab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gaq_levelstab = NULL;

/* Exported Object: ddp_udc_int_slowgain */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_slowgain = NULL;

/* Demangled: ddp_udc_int_converter_process_lfe */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_converter_process_lfe(void) {
    ALOGD("ddp_udc_int_converter_process_lfe() called");
    return 0;
}

/* Demangled: ddp_udc_int_fboar_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_fboar_process(void) {
    ALOGD("ddp_udc_int_fboar_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_coefs_get_pre_phase_adjust */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_coefs_get_pre_phase_adjust(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_coefs_get_pre_phase_adjust() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L768 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L768 = NULL;

/* Demangled: ddp_udc_int_cpld_unpblkaht */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_cpld_unpblkaht(void) {
    ALOGD("ddp_udc_int_cpld_unpblkaht() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L64_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L64_cos = NULL;

/* Demangled: DAP_CPDP_PVT_hearing_protection_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_process(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L64 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L64 = NULL;

/* Demangled: DLB_r4_inv_fft_240 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_240(void) {
    ALOGD("DLB_r4_inv_fft_240() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamd_framer_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamd_framer_init(void) {
    ALOGD("ddp_udc_int_oamd_framer_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sbsc_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbsc_reset(void) {
    ALOGD("DAP_CPDP_PVT_sbsc_reset() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_zcr_frame_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_zcr_frame_process(void) {
    ALOGD("DAP_CPDP_PVT_zcr_frame_process() called");
    return 0;
}

/* Demangled: dlb_blk_Liir1_shl_addLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir1_shl_addLL_flex(void) {
    ALOGD("dlb_blk_Liir1_shl_addLL_flex() called");
    return 0;
}

/* Demangled: DLB_vec_Lmask_rev_coefLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_Lmask_rev_coefLSU_strict(void) {
    ALOGD("DLB_vec_Lmask_rev_coefLSU_strict() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_ddp_pan_CNTR_RGHT */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_ddp_pan_CNTR_RGHT = NULL;

/* Exported Object: DAP_CPDP_PVT_A_DV_SONE_TO_NORM_LOG_SONE */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DV_SONE_TO_NORM_LOG_SONE = NULL;

/* Demangled: DAP_CPDP_PVT_mi_internal_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_internal_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_mi_internal_query_scratch() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_60_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_60_s(void) {
    ALOGD("DLB_r4_inv_fft_60_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_bsid_unp */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bsid_unp(void) {
    ALOGD("ddp_udc_int_bsid_unp() called");
    return 0;
}

/* Exported Object: ddp_udc_int_oneoverspxendbintab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_oneoverspxendbintab = NULL;

/* Demangled: DAP_CPDP_PVT_hdr_vec_P2powPLPU */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hdr_vec_P2powPLPU(void) {
    ALOGD("DAP_CPDP_PVT_hdr_vec_P2powPLPU() called");
    return 0;
}

/* Demangled: DLB_CLmacCLCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmacCLCLU_strict(void) {
    ALOGD("DLB_CLmacCLCLU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_512 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_512(void) {
    ALOGD("dlb_fft_inv_usc_512() called");
    return 0;
}

/* Demangled: android::DDPDecoder::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoder4initEPKc(void) {
    ALOGD("_ZN7android10DDPDecoder4initEPKc() called");
    return 0;
}

/* Demangled: ddp_udc_int_BED_opendebug */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_BED_opendebug(void) {
    ALOGD("ddp_udc_int_BED_opendebug() called");
    return 0;
}

/* Demangled: ddp_udc_int_fed_sysinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_fed_sysinit(void) {
    ALOGD("ddp_udc_int_fed_sysinit() called");
    return 0;
}

/* Demangled: ddp_udc_int_handle_programchange */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_handle_programchange(void) {
    ALOGD("ddp_udc_int_handle_programchange() called");
    return 0;
}

/* Demangled: ddp_udc_int_room_config_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_room_config_init(void) {
    ALOGD("ddp_udc_int_room_config_init() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_data_bass_params_init */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_data_bass_params_init(void) {
    ALOGD("dap_cpdp_pvt_data_bass_params_init() called");
    return 0;
}

/* Demangled: dlb_blk_LmaxLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmaxLL_flex(void) {
    ALOGD("dlb_blk_LmaxLL_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_40 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_40(void) {
    ALOGD("dlb_fft_fwd_scl_40() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_has_oa_element_object_description */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_has_oa_element_object_description(void) {
    ALOGD("ddp_udc_int_oamdi_has_oa_element_object_description() called");
    return 0;
}

/* Demangled: dap_cpdp_de_ducking_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_de_ducking_set(void) {
    ALOGD("dap_cpdp_de_ducking_set() called");
    return 0;
}

/* Demangled: dap_cpdp_virtual_bass_blend_linear_gain_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtual_bass_blend_linear_gain_set(void) {
    ALOGD("dap_cpdp_virtual_bass_blend_linear_gain_set() called");
    return 0;
}

/* Demangled: DLB_r4_fft_320_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_320_s(void) {
    ALOGD("DLB_r4_fft_320_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_jocdec_open */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocdec_open(void) {
    ALOGD("ddp_udc_int_jocdec_open() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_isf_bh_3_1_0_0_reorder */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_isf_bh_3_1_0_0_reorder = NULL;

/* Demangled: ddp_udc_int_hdr_Plog2P */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_hdr_Plog2P(void) {
    ALOGD("ddp_udc_int_hdr_Plog2P() called");
    return 0;
}

/* Demangled: dap_cpdp_process_optimizer_bands_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_process_optimizer_bands_set(void) {
    ALOGD("dap_cpdp_process_optimizer_bands_set() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_reset_state */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_reset_state(void) {
    ALOGD("ddp_udc_int_dvlim_reset_state() called");
    return 0;
}

/* Demangled: ddp_udc_int_omg_trim_manual_gain_get */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_omg_trim_manual_gain_get(void) {
    ALOGD("ddp_udc_int_omg_trim_manual_gain_get() called");
    return 0;
}

/* Demangled: ddp_udc_int_renderer_pow */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_renderer_pow(void) {
    ALOGD("ddp_udc_int_renderer_pow() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_vec_exp */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_exp(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_exp() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv1L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv1L_flex(void) {
    ALOGD("dlb_blk_Liir2ssv1L_flex() called");
    return 0;
}

/* Demangled: ddp_udc_int_processor_open */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_processor_open(void) {
    ALOGD("ddp_udc_int_processor_open() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_5D1_TO_7D1DX */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_5D1_TO_7D1DX = NULL;

/* Demangled: ddp_udc_int_bsid_unpdd */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bsid_unpdd(void) {
    ALOGD("ddp_udc_int_bsid_unpdd() called");
    return 0;
}

/* Demangled: ddp_udc_int_isf_decoder_query_memory */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_isf_decoder_query_memory(void) {
    ALOGD("ddp_udc_int_isf_decoder_query_memory() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_b_indices */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_b_indices = NULL;

/* Demangled: DAP_CPDP_PVT_resi_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_resi_reset(void) {
    ALOGD("DAP_CPDP_PVT_resi_reset() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_milib_open */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_milib_open(void) {
    ALOGD("DAP_CPDP_PVT_dlb_milib_open() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_hybrid_ana */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_hybrid_ana(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_hybrid_ana() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_45 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_45(void) {
    ALOGD("dlb_fft_fwd_scl_45() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_write_frame_config */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_write_frame_config(void) {
    ALOGD("ddp_udc_int_evo_write_frame_config() called");
    return 0;
}

/* Exported Object: DAP_UPMIX_MODE_STEREO_TO_7D1D2_GAMING */
extern "C" __attribute__((visibility("default"))) void* DAP_UPMIX_MODE_STEREO_TO_7D1D2_GAMING = NULL;

/* Exported Object: ddp_udc_int_qntz15lev */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_qntz15lev = NULL;

/* Demangled: dlb_BLmpy_scaleBLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmpy_scaleBLSU_flex(void) {
    ALOGD("dlb_BLmpy_scaleBLSU_flex() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_get_payload_size */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_get_payload_size(void) {
    ALOGD("ddp_udc_int_evo_get_payload_size() called");
    return 0;
}

/* Demangled: ddp_udc_int_ramp_gain_starting_gain_set */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ramp_gain_starting_gain_set(void) {
    ALOGD("ddp_udc_int_ramp_gain_starting_gain_set() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L45 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L45 = NULL;

/* Demangled: DLB_r4_fft_30 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_30(void) {
    ALOGD("DLB_r4_fft_30() called");
    return 0;
}

/* Demangled: ddp_udc_int_chnd_decblk */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_chnd_decblk(void) {
    ALOGD("ddp_udc_int_chnd_decblk() called");
    return 0;
}

/* Demangled: dlb_valid_pair_ptr */
extern "C" __attribute__((visibility("default"))) int dlb_valid_pair_ptr(void) {
    ALOGD("dlb_valid_pair_ptr() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_mi_update_control */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_mi_update_control(void) {
    ALOGD("dap_cpdp_pvt_mi_update_control() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_STEREO_TO_5D1DX */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_STEREO_TO_5D1DX = NULL;

/* Demangled: DLB_r4_inv_fft_480 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_480(void) {
    ALOGD("DLB_r4_inv_fft_480() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_48 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_48(void) {
    ALOGD("dlb_fft_fwd_scl_48() called");
    return 0;
}

/* Demangled: ddp_udc_int_sha256_do_hash_stride */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_sha256_do_hash_stride(void) {
    ALOGD("ddp_udc_int_sha256_do_hash_stride() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmixchscltab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmixchscltab = NULL;

/* Demangled: dap_cpdp_virtual_bass_mode_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtual_bass_mode_set(void) {
    ALOGD("dap_cpdp_virtual_bass_mode_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_get_num_channels */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_get_num_channels(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_get_num_channels() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_set_boost */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_set_boost(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_set_boost() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_clear_delayline_buf */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_clear_delayline_buf(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_clear_delayline_buf() called");
    return 0;
}

/* Demangled: DLB_r4_fft_30_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_30_s(void) {
    ALOGD("DLB_r4_fft_30_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_32 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_32(void) {
    ALOGD("DLB_r4_fft_32() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L45_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L45_cos = NULL;

/* Demangled: ddp_udc_int_frmd_savemdat */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_frmd_savemdat(void) {
    ALOGD("ddp_udc_int_frmd_savemdat() called");
    return 0;
}

/* Demangled: DLB_Lqmf_synthesisCL */
extern "C" __attribute__((visibility("default"))) int DLB_Lqmf_synthesisCL(void) {
    ALOGD("DLB_Lqmf_synthesisCL() called");
    return 0;
}

/* Demangled: ddp_udc_int_processor_query_mem */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_processor_query_mem(void) {
    ALOGD("ddp_udc_int_processor_query_mem() called");
    return 0;
}

/* Demangled: dap_cpdp_volume_leveler_compressor_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_volume_leveler_compressor_enable_set(void) {
    ALOGD("dap_cpdp_volume_leveler_compressor_enable_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_pre_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_pre_reset(void) {
    ALOGD("DAP_CPDP_PVT_mi_pre_reset() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L48 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L48 = NULL;

/* Demangled: ddp_udc_int_evobh_start_excluded_segment */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evobh_start_excluded_segment(void) {
    ALOGD("ddp_udc_int_evobh_start_excluded_segment() called");
    return 0;
}

/* Demangled: dlb_vec_SshlSIU_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_SshlSIU_inplace_flex(void) {
    ALOGD("dlb_vec_SshlSIU_inplace_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L768_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L768_cos = NULL;

/* Demangled: ddp_udc_int_dvlim_set_block_size */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_set_block_size(void) {
    ALOGD("ddp_udc_int_dvlim_set_block_size() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_set_target_gain */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_set_target_gain(void) {
    ALOGD("ddp_udc_int_dvlim_set_target_gain() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_12 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_12(void) {
    ALOGD("dlb_fft_fwd_usc_12() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_get_sample_rate */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_get_sample_rate(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_get_sample_rate() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L768_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L768_1 = NULL;

/* Demangled: DLB_r4_fft_36 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_36(void) {
    ALOGD("DLB_r4_fft_36() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_720 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_720(void) {
    ALOGD("DLB_r4_inv_fft_720() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_time_subtract */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_time_subtract(void) {
    ALOGD("ddp_udc_int_evo_time_subtract() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_data_bass_harmonic_generate */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_data_bass_harmonic_generate(void) {
    ALOGD("DAP_CPDP_PVT_data_bass_harmonic_generate() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sbpp_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbpp_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_sbpp_query_memory() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L192 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L192 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L768_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L768_2 = NULL;

/* Exported Object: DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF0_COMPENSATION */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF0_COMPENSATION = NULL;

/* Demangled: DAP_CPDP_PVT_sben_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_close(void) {
    ALOGD("DAP_CPDP_PVT_sben_close() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_a_dvlim_win_32 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_a_dvlim_win_32 = NULL;

/* Demangled: DAP_CPDP_PVT_ldn_wb_loudness_transform */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ldn_wb_loudness_transform(void) {
    ALOGD("DAP_CPDP_PVT_ldn_wb_loudness_transform() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_15 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_15(void) {
    ALOGD("dlb_fft_fwd_usc_15() called");
    return 0;
}

/* Demangled: dolby::BufferProvider::~BufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProviderD2Ev(void) {
    ALOGD("_ZN5dolby14BufferProviderD2Ev() called");
    return 0;
}

/* Exported Object: ddp_udc_int_n_par_band_table */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_n_par_band_table = NULL;

/* Exported Object: ddp_udc_int_ap_dvlim_coefs_32 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_ap_dvlim_coefs_32 = NULL;

/* Demangled: ddp_udc_int_speaker_config_enable_warping */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_speaker_config_enable_warping(void) {
    ALOGD("ddp_udc_int_speaker_config_enable_warping() called");
    return 0;
}

/* Demangled: DLB_blk_Lmpy_shlLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmpy_shlLSU_strict(void) {
    ALOGD("DLB_blk_Lmpy_shlLSU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_16 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_16(void) {
    ALOGD("dlb_fft_fwd_usc_16() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_set_hp_head_track_disable */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_set_hp_head_track_disable(void) {
    ALOGD("ddp_udc_int_oamdi_set_hp_head_track_disable() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_cmtx_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_cmtx_init(void) {
    ALOGD("DAP_CPDP_PVT_cmtx_init() called");
    return 0;
}

/* Demangled: dap_cpdp_virtualizer_rear_surround_speaker_angle_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtualizer_rear_surround_speaker_angle_set(void) {
    ALOGD("dap_cpdp_virtualizer_rear_surround_speaker_angle_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_upmixer_configure */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_upmixer_configure(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_upmixer_configure() called");
    return 0;
}

/* Demangled: DLB_blk_Lconst_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lconst_strict(void) {
    ALOGD("DLB_blk_Lconst_strict() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ldn_specific_loudness_transform */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ldn_specific_loudness_transform(void) {
    ALOGD("DAP_CPDP_PVT_ldn_specific_loudness_transform() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_NYQUIST_FILTERS_844_STANDARD */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_NYQUIST_FILTERS_844_STANDARD = NULL;

/* Exported Object: DAP_CPDP_PVT_A_LTRT3D_STATS_ALPHA_SR32KHZ_BR256 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LTRT3D_STATS_ALPHA_SR32KHZ_BR256 = NULL;

/* Demangled: DLB_r4_inv_fft_24_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_24_s(void) {
    ALOGD("DLB_r4_inv_fft_24_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_exmd_denorm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_exmd_denorm(void) {
    ALOGD("ddp_udc_int_exmd_denorm() called");
    return 0;
}

/* Demangled: ddp_udc_int_bsid_frminit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bsid_frminit(void) {
    ALOGD("ddp_udc_int_bsid_frminit() called");
    return 0;
}

/* Demangled: ddp_udc_int_evod_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evod_process(void) {
    ALOGD("ddp_udc_int_evod_process() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_set_prog_assign */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_set_prog_assign(void) {
    ALOGD("ddp_udc_int_oamdi_set_prog_assign() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sv_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sv_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_sv_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_stats_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_stats_reset(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_stats_reset() called");
    return 0;
}

/* Demangled: DLB_r4_fft_12_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_12_s(void) {
    ALOGD("DLB_r4_fft_12_s() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_32_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_32_vec_ana = NULL;

/* Demangled: ddp_udc_int_bed_concealpcm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bed_concealpcm(void) {
    ALOGD("ddp_udc_int_bed_concealpcm() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_mono2stereo_inplace */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_mono2stereo_inplace(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_mono2stereo_inplace() called");
    return 0;
}

/* Demangled: DLB_blk_LfirUL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LfirUL_strict(void) {
    ALOGD("DLB_blk_LfirUL_strict() called");
    return 0;
}

/* Demangled: dlb_CLmpy_shlCLSIU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpy_shlCLSIU_flex(void) {
    ALOGD("dlb_CLmpy_shlCLSIU_flex() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_volume_and_ieq_preset_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_volume_and_ieq_preset_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_volume_and_ieq_preset_query_memory() called");
    return 0;
}

/* Demangled: dlb_blk_Lfir2L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lfir2L_flex(void) {
    ALOGD("dlb_blk_Lfir2L_flex() called");
    return 0;
}

/* Demangled: DLB_vec_LmpyLSU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LmpyLSU_inplace_strict(void) {
    ALOGD("DLB_vec_LmpyLSU_inplace_strict() called");
    return 0;
}

/* Exported Object: A_NGCS_UPMIX_PLAN_7CH1_TO_7D1D2_CC */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_7CH1_TO_7D1D2_CC = NULL;

/* Exported Object: ddp_udc_int_dcrd_exp_table */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_dcrd_exp_table = NULL;

/* Demangled: ddp_udc_int_room_config_size_panner_query_memory */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_room_config_size_panner_query_memory(void) {
    ALOGD("ddp_udc_int_room_config_size_panner_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_resi_frame_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_resi_frame_process(void) {
    ALOGD("DAP_CPDP_PVT_resi_frame_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_spec_flux_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_spec_flux_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_spec_flux_query_scratch() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv1L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv1L_strict(void) {
    ALOGD("DLB_blk_Liir2ssv1L_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_2 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_2(void) {
    ALOGD("dlb_fft_fwd_usc_2() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_get_block_size */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_get_block_size(void) {
    ALOGD("ddp_udc_int_dvlim_get_block_size() called");
    return 0;
}

/* Demangled: ddp_udc_int_speaker_config_spkr_unset */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_speaker_config_spkr_unset(void) {
    ALOGD("ddp_udc_int_speaker_config_spkr_unset() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int const*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_120 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_120(void) {
    ALOGD("dlb_fft_fwd_usc_120() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_f_indices */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_f_indices = NULL;

/* Exported Object: DAP_CPDP_PVT_P_VISUALIZER_COEF_48K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_P_VISUALIZER_COEF_48K = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L12 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L12 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L16_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L16_1 = NULL;

/* Demangled: DLB_r4_fft_96_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_96_s(void) {
    ALOGD("DLB_r4_fft_96_s() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_960 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_960(void) {
    ALOGD("DLB_r4_inv_fft_960() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_4 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_4(void) {
    ALOGD("dlb_fft_fwd_usc_4() called");
    return 0;
}

/* Demangled: ddp_udc_int_bct_calcskipalloc */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bct_calcskipalloc(void) {
    ALOGD("ddp_udc_int_bct_calcskipalloc() called");
    return 0;
}

/* Demangled: dlb_qmf_synthesisL_open */
extern "C" __attribute__((visibility("default"))) int dlb_qmf_synthesisL_open(void) {
    ALOGD("dlb_qmf_synthesisL_open() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_dvlim_win_128 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_dvlim_win_128 = NULL;

/* Demangled: ddp_udc_int_isf_decoder_gains_get */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_isf_decoder_gains_get(void) {
    ALOGD("ddp_udc_int_isf_decoder_gains_get() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L16_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L16_2 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L192_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L192_1 = NULL;

/* Demangled: DLB_r4_rfft_nn_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_rfft_nn_s(void) {
    ALOGD("DLB_r4_rfft_nn_s() called");
    return 0;
}

/* Demangled: DLB_time_init */
extern "C" __attribute__((visibility("default"))) int DLB_time_init(void) {
    ALOGD("DLB_time_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_bct_cntddfrmauxbits */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bct_cntddfrmauxbits(void) {
    ALOGD("ddp_udc_int_bct_cntddfrmauxbits() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_get_hard_clip */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_get_hard_clip(void) {
    ALOGD("ddp_udc_int_dvlim_get_hard_clip() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_threshold_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_threshold_init(void) {
    ALOGD("DAP_CPDP_PVT_arle_threshold_init() called");
    return 0;
}

/* Exported Object: A_NGCS_UPMIX_PLAN_5CH1_TO_5CH1_CC */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_5CH1_TO_5CH1_CC = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L72 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L72 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L192_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L192_2 = NULL;

/* Demangled: DLB_r4_fft_45_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_45_s(void) {
    ALOGD("DLB_r4_fft_45_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_6 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_6(void) {
    ALOGD("dlb_fft_fwd_usc_6() called");
    return 0;
}

/* Demangled: configStereoMode */
extern "C" __attribute__((visibility("default"))) int configStereoMode(void) {
    ALOGD("configStereoMode() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfcc_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_init(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L15 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L15 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L16 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L16 = NULL;

/* Demangled: dlb_fft_fwd_usc_8 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_8(void) {
    ALOGD("dlb_fft_fwd_usc_8() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_virt_chain_query_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_virt_chain_query_mem(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_virt_chain_query_mem() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7D1D2 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7D1D2 = NULL;

/* Demangled: DAP_CPDP_PVT_ngcs_upmixer_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_upmixer_process(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_upmixer_process() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_hp_head_track_disable */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_hp_head_track_disable(void) {
    ALOGD("ddp_udc_int_oamdi_get_hp_head_track_disable() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_sample_offset */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_sample_offset(void) {
    ALOGD("ddp_udc_int_oamdi_get_sample_offset() called");
    return 0;
}

/* Demangled: dap_cpdp_end_chain_get_woofer_limiter_gain */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_end_chain_get_woofer_limiter_gain(void) {
    ALOGD("dap_cpdp_end_chain_get_woofer_limiter_gain() called");
    return 0;
}

/* Demangled: DLB_fft_CLinv_scaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLinv_scaledCL(void) {
    ALOGD("DLB_fft_CLinv_scaledCL() called");
    return 0;
}

/* Exported Object: dlb_cos_48_full_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_48_full_scl = NULL;

/* Exported Object: dlb_cos_64_full_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_64_full_scl = NULL;

/* Demangled: configOutChannel */
extern "C" __attribute__((visibility("default"))) int configOutChannel(void) {
    ALOGD("configOutChannel() called");
    return 0;
}

/* Exported Object: ddp_udc_int_gbl_chantab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_chantab = NULL;

/* Demangled: ddp_udc_int_oamdi_md_trim_to_linear_gain */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_md_trim_to_linear_gain(void) {
    ALOGD("ddp_udc_int_oamdi_md_trim_to_linear_gain() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_ana_close(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_ana_close() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hist_update_value */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hist_update_value(void) {
    ALOGD("DAP_CPDP_PVT_hist_update_value() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_128 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_128(void) {
    ALOGD("dlb_fft_fwd_usc_128() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_get_md_validity */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_get_md_validity(void) {
    ALOGD("ddp_udc_int_evo_get_md_validity() called");
    return 0;
}

/* Demangled: dolby::DlbBufferProvider::DlbBufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17DlbBufferProviderC1Ev(void) {
    ALOGD("_ZN5dolby17DlbBufferProviderC1Ev() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_SURROUND_COMPRESSOR_INV_130_ON_SURROUND_COMPRESSOR_APIDB_STEPS */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_SURROUND_COMPRESSOR_INV_130_ON_SURROUND_COMPRESSOR_APIDB_STEPS = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L960_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L960_1 = NULL;

/* Demangled: dlb_fft_inv_usc_288 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_288(void) {
    ALOGD("dlb_fft_inv_usc_288() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::SimpleSoftOMXComponent::BufferInfo*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE = NULL;

/* Demangled: DAP_CPDP_PVT_hp_height_fdn_allpass_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hp_height_fdn_allpass_reset(void) {
    ALOGD("DAP_CPDP_PVT_hp_height_fdn_allpass_reset() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfcc_get_current_mfcc */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_get_current_mfcc(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_get_current_mfcc() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L960_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L960_2 = NULL;

/* Demangled: DAP_CPDP_PVT_data_bass_clear_buffer */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_data_bass_clear_buffer(void) {
    ALOGD("DAP_CPDP_PVT_data_bass_clear_buffer() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_data_bass_clear_db_processing_buf */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_data_bass_clear_db_processing_buf(void) {
    ALOGD("DAP_CPDP_PVT_data_bass_clear_db_processing_buf() called");
    return 0;
}

/* Demangled: dlb_CLrecipCLUU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLrecipCLUU_flex(void) {
    ALOGD("dlb_CLrecipCLUU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_256 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_256(void) {
    ALOGD("DLB_r4_inv_fft_256() called");
    return 0;
}

/* Demangled: ddp_udc_int_udc_switchparams */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_udc_switchparams(void) {
    ALOGD("ddp_udc_int_udc_switchparams() called");
    return 0;
}

/* Demangled: ddp_udc_int_isf_decoder_compute_matrix */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_isf_decoder_compute_matrix(void) {
    ALOGD("ddp_udc_int_isf_decoder_compute_matrix() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_360 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_360(void) {
    ALOGD("dlb_fft_fwd_usc_360() called");
    return 0;
}

/* Exported Object: vtable for dolby::UdcAudioBufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby22UdcAudioBufferProviderE = NULL;

/* Demangled: DAP_CPDP_PVT_gain_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_gain_process(void) {
    ALOGD("DAP_CPDP_PVT_gain_process() called");
    return 0;
}

/* Exported Object: dlb_cos_32_full_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_32_full_twiddle = NULL;

/* Demangled: ddp_udc_int_room_config_query_memory */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_room_config_query_memory(void) {
    ALOGD("ddp_udc_int_room_config_query_memory() called");
    return 0;
}

/* Demangled: DLB_r4_fft_512 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_512(void) {
    ALOGD("DLB_r4_fft_512() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_160_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_160_s(void) {
    ALOGD("DLB_r4_inv_fft_160_s() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L720_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L720_cos = NULL;

/* Demangled: DLB_r4_fft_40 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_40(void) {
    ALOGD("DLB_r4_fft_40() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_2 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_2(void) {
    ALOGD("dlb_fft_inv_scl_2() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L480_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L480_cos = NULL;

/* Demangled: ddp_udc_int_hmac_obf_sha256_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_hmac_obf_sha256_init(void) {
    ALOGD("ddp_udc_int_hmac_obf_sha256_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_feature_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_feature_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_feature_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_lvl_drc_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lvl_drc_process(void) {
    ALOGD("DAP_CPDP_PVT_lvl_drc_process() called");
    return 0;
}

/* Demangled: dlb_BLmpy_scaleBLSU_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmpy_scaleBLSU_inplace_flex(void) {
    ALOGD("dlb_BLmpy_scaleBLSU_inplace_flex() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_4 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_4(void) {
    ALOGD("dlb_fft_inv_scl_4() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_MFB_TWID64E */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_MFB_TWID64E = NULL;

/* Demangled: DAP_CPDP_PVT_de_duck_set_amount */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_duck_set_amount(void) {
    ALOGD("DAP_CPDP_PVT_de_duck_set_amount() called");
    return 0;
}

/* Demangled: dlb_VLsquaredmagCLIU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_VLsquaredmagCLIU_flex(void) {
    ALOGD("dlb_VLsquaredmagCLIU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_20 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_20(void) {
    ALOGD("dlb_fft_fwd_usc_20() called");
    return 0;
}

/* Demangled: DLB_Lqmf_analysisL */
extern "C" __attribute__((visibility("default"))) int DLB_Lqmf_analysisL(void) {
    ALOGD("DLB_Lqmf_analysisL() called");
    return 0;
}

/* Demangled: ddp_udc_int_bta_calcpsdmsk */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bta_calcpsdmsk(void) {
    ALOGD("ddp_udc_int_bta_calcpsdmsk() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_6 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_6(void) {
    ALOGD("dlb_fft_inv_scl_6() called");
    return 0;
}

/* Demangled: ddp_udc_int_abkd_unpddfixed */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_abkd_unpddfixed(void) {
    ALOGD("ddp_udc_int_abkd_unpddfixed() called");
    return 0;
}

/* Demangled: ddp_udc_int_lfe_only_bed */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_lfe_only_bed(void) {
    ALOGD("ddp_udc_int_lfe_only_bed() called");
    return 0;
}

/* Demangled: dap_cpdp_surround_decoder_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_surround_decoder_enable_set(void) {
    ALOGD("dap_cpdp_surround_decoder_enable_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_distortion_masking_calculation */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_distortion_masking_calculation(void) {
    ALOGD("DAP_CPDP_PVT_arle_distortion_masking_calculation() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sv_coefs_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sv_coefs_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_sv_coefs_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_clip_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_clip_process(void) {
    ALOGD("DAP_CPDP_PVT_sben_clip_process() called");
    return 0;
}

/* Demangled: DLB_r4_fft_45 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_45(void) {
    ALOGD("DLB_r4_fft_45() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_vec_ana = NULL;

/* Exported Object: ddp_udc_int_ap_dvlim_coefs_128 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_ap_dvlim_coefs_128 = NULL;

/* Demangled: DAP_CPDP_PVT_ltrt3d_cqmf_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_cqmf_init(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_cqmf_init() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_a_dvlim_win_40 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_a_dvlim_win_40 = NULL;

/* Demangled: dlb_fft_inv_scl_8 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_8(void) {
    ALOGD("dlb_fft_inv_scl_8() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_fast_peek */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_fast_peek(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_fast_peek() called");
    return 0;
}

/* Exported Object: ddp_udc_int_ap_dvlim_coefs_40 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_ap_dvlim_coefs_40 = NULL;

/* Demangled: ddp_udc_int_omg_query_memory */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_omg_query_memory(void) {
    ALOGD("ddp_udc_int_omg_query_memory() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_max_bitstream_size */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_max_bitstream_size(void) {
    ALOGD("ddp_udc_int_oamdi_get_max_bitstream_size() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hist_get_probability */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hist_get_probability(void) {
    ALOGD("DAP_CPDP_PVT_hist_get_probability() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_virtual_bass_update_control */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_virtual_bass_update_control(void) {
    ALOGD("dap_cpdp_pvt_virtual_bass_update_control() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L12 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L12 = NULL;

/* Demangled: dlb_fft_fwd_usc_24 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_24(void) {
    ALOGD("dlb_fft_fwd_usc_24() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_zcr_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_zcr_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_zcr_query_memory() called");
    return 0;
}

/* Demangled: DLB_CLmpy_shlCLSIU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpy_shlCLSIU_inplace_strict(void) {
    ALOGD("DLB_CLmpy_shlCLSIU_inplace_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_48 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_48(void) {
    ALOGD("DLB_r4_fft_48() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_32 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_32 = NULL;

/* Demangled: dolby::Dap2Process::setMave() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process7setMaveEv(void) {
    ALOGD("_ZN5dolby11Dap2Process7setMaveEv() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_query_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_syn_query_mem(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_syn_query_mem() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L640 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L640 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L15 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L15 = NULL;

/* Demangled: dlb_fft_inv_usc_768 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_768(void) {
    ALOGD("dlb_fft_inv_usc_768() called");
    return 0;
}

/* Demangled: DLB_Lqmf_analysisS */
extern "C" __attribute__((visibility("default"))) int DLB_Lqmf_analysisS(void) {
    ALOGD("DLB_Lqmf_analysisS() called");
    return 0;
}

/* Demangled: ddp_udc_int_bed_mixer_cbi_gains_get */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bed_mixer_cbi_gains_get(void) {
    ALOGD("ddp_udc_int_bed_mixer_cbi_gains_get() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_oa_element_headphone_read_only */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_oa_element_headphone_read_only(void) {
    ALOGD("ddp_udc_int_oamdi_get_oa_element_headphone_read_only() called");
    return 0;
}

/* Demangled: dap_cpdp_query_memory */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_query_memory(void) {
    ALOGD("dap_cpdp_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_flux_state_clear */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_flux_state_clear(void) {
    ALOGD("DAP_CPDP_PVT_de_flux_state_clear() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfcc_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_query_scratch() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L16 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L16 = NULL;

/* Demangled: dlb_qmf_analysisL_reconfig */
extern "C" __attribute__((visibility("default"))) int dlb_qmf_analysisL_reconfig(void) {
    ALOGD("dlb_qmf_analysisL_reconfig() called");
    return 0;
}

/* Demangled: dap_cpdp_headphone_virtualizer_steerer_source_distance_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_headphone_virtualizer_steerer_source_distance_set(void) {
    ALOGD("dap_cpdp_headphone_virtualizer_steerer_source_distance_set() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_MFB_TWID64O */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_MFB_TWID64O = NULL;

/* Demangled: dap_cpdp_virtual_bass_overall_gain_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtual_bass_overall_gain_set(void) {
    ALOGD("dap_cpdp_virtual_bass_overall_gain_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_sibilance_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_sibilance_init(void) {
    ALOGD("DAP_CPDP_PVT_arle_sibilance_init() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_ERBBandStop */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_ERBBandStop = NULL;

/* Demangled: DAP_CPDP_PVT_mi_dap_smooth_confidence */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_dap_smooth_confidence(void) {
    ALOGD("DAP_CPDP_PVT_mi_dap_smooth_confidence() called");
    return 0;
}

/* Demangled: DLB_blk_Lattack_decay_iir1L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_iir1L_set_coef(void) {
    ALOGD("DLB_blk_Lattack_decay_iir1L_set_coef() called");
    return 0;
}

/* Exported Object: dlb_non_power_two_lengths */
extern "C" __attribute__((visibility("default"))) void* dlb_non_power_two_lengths = NULL;

/* Demangled: ddp_udc_int_count_program_boundary_bits */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_count_program_boundary_bits(void) {
    ALOGD("ddp_udc_int_count_program_boundary_bits() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF1_COMPENSATION_LL */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF1_COMPENSATION_LL = NULL;

/* Demangled: ddp_udc_int_oamdi_set_has_oa_element_headphone */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_set_has_oa_element_headphone(void) {
    ALOGD("ddp_udc_int_oamdi_set_has_oa_element_headphone() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_rs_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_rs_init(void) {
    ALOGD("DAP_CPDP_PVT_rs_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_chroma_query_clip_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_chroma_query_clip_mem(void) {
    ALOGD("DAP_CPDP_PVT_chroma_query_clip_mem() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L2_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L2_1 = NULL;

/* Demangled: dolby::DdpDynamicConfig::getOutChannelCount() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DdpDynamicConfig18getOutChannelCountEv(void) {
    ALOGD("_ZN5dolby16DdpDynamicConfig18getOutChannelCountEv() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_isf_bh_3_1_0_0_decode */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_isf_bh_3_1_0_0_decode = NULL;

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_5D1D2_CC */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_5D1D2_CC = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L2_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L2_2 = NULL;

/* Demangled: DLB_r4_fft_256_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_256_s(void) {
    ALOGD("DLB_r4_fft_256_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_mem_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_mem_init(void) {
    ALOGD("ddp_udc_int_evo_mem_init() called");
    return 0;
}

/* Demangled: dap_cpdp_de_amount_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_de_amount_set(void) {
    ALOGD("dap_cpdp_de_amount_set() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_VIRTUAL_BASS_SUBGAIN_COMPENSATION_FACTOR */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_VIRTUAL_BASS_SUBGAIN_COMPENSATION_FACTOR = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L24 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L24 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L60_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L60_1 = NULL;

/* Demangled: dlb_fft_inv_scl_240 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_240(void) {
    ALOGD("dlb_fft_inv_scl_240() called");
    return 0;
}

/* Demangled: ddp_udc_int_mtxd_decexm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mtxd_decexm(void) {
    ALOGD("ddp_udc_int_mtxd_decexm() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_hysteresis_detect */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_hysteresis_detect(void) {
    ALOGD("DAP_CPDP_PVT_de_hysteresis_detect() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L60_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L60_2 = NULL;

/* Demangled: DLB_qmf_synthesisS_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_get_delay(void) {
    ALOGD("DLB_qmf_synthesisS_get_delay() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_down_mix_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_down_mix_init(void) {
    ALOGD("DAP_CPDP_PVT_down_mix_init() called");
    return 0;
}

/* Demangled: dolby::DdpDynamicConfig::setSpecialParams(dolby::DapParamCache*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DdpDynamicConfig16setSpecialParamsEPNS_13DapParamCacheE(void) {
    ALOGD("_ZN5dolby16DdpDynamicConfig16setSpecialParamsEPNS_13DapParamCacheE() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpcplco */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpcplco(void) {
    ALOGD("ddp_udc_int_unpcplco() called");
    return 0;
}

/* Demangled: ddp_udc_int_secd_cripple_pcm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_secd_cripple_pcm(void) {
    ALOGD("ddp_udc_int_secd_cripple_pcm() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpack_st_loudness_value */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpack_st_loudness_value(void) {
    ALOGD("ddp_udc_int_unpack_st_loudness_value() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_data_bass_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_data_bass_close(void) {
    ALOGD("DAP_CPDP_PVT_data_bass_close() called");
    return 0;
}

/* Demangled: ddpi_udc_getprocessparam */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_getprocessparam(void) {
    ALOGD("ddpi_udc_getprocessparam() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC_256M */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC_256M = NULL;

/* Exported Object: DAP_CPDP_PVT_mask_ICPD_subbandIdx */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_mask_ICPD_subbandIdx = NULL;

/* Demangled: ddp_udc_int_oamdi_parser */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_parser(void) {
    ALOGD("ddp_udc_int_oamdi_parser() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_unpack_md_set */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_unpack_md_set(void) {
    ALOGD("ddp_udc_int_evo_unpack_md_set() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv2_shlLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv2_shlLU_flex(void) {
    ALOGD("dlb_blk_Liir2ssv2_shlLU_flex() called");
    return 0;
}

/* Demangled: ddp_udc_int_btad_sysinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_btad_sysinit(void) {
    ALOGD("ddp_udc_int_btad_sysinit() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_visualizer_gains_get */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_visualizer_gains_get(void) {
    ALOGD("DAP_CPDP_PVT_visualizer_gains_get() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hfra_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hfra_init(void) {
    ALOGD("DAP_CPDP_PVT_hfra_init() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_60 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_60(void) {
    ALOGD("dlb_fft_fwd_scl_60() called");
    return 0;
}

/* Demangled: configDRCMode */
extern "C" __attribute__((visibility("default"))) int configDRCMode(void) {
    ALOGD("configDRCMode() called");
    return 0;
}

/* Demangled: dap_pvt_bass_mbdrc_configure */
extern "C" __attribute__((visibility("default"))) int dap_pvt_bass_mbdrc_configure(void) {
    ALOGD("dap_pvt_bass_mbdrc_configure() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_hybrid_syn */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_hybrid_syn(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_hybrid_syn() called");
    return 0;
}

/* Demangled: dlb_blk_Lmix_shlULLLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmix_shlULLLL_flex(void) {
    ALOGD("dlb_blk_Lmix_shlULLLL_flex() called");
    return 0;
}

/* Demangled: ddp_udc_int_xfmd_imdct */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_xfmd_imdct(void) {
    ALOGD("ddp_udc_int_xfmd_imdct() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_get_process_format */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_get_process_format(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_get_process_format() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_pow_smooth_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_pow_smooth_init(void) {
    ALOGD("DAP_CPDP_PVT_de_pow_smooth_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L60 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L60 = NULL;

/* Demangled: dap_cpdp_hearing_protection_rms_averaging_time_win_len_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_hearing_protection_rms_averaging_time_win_len_set(void) {
    ALOGD("dap_cpdp_hearing_protection_rms_averaging_time_win_len_set() called");
    return 0;
}

/* Exported Object: A_NGCS_UPMIX_PLAN_5CH1_TO_5D1D2 */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_5CH1_TO_5D1D2 = NULL;

/* Demangled: DAP_CPDP_PVT_ngcs_upmixer_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_upmixer_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_upmixer_query_memory() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::Dap2Process(bool, bool, bool, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2ProcessC1EbbbPKc(void) {
    ALOGD("_ZN5dolby11Dap2ProcessC1EbbbPKc() called");
    return 0;
}

/* Exported Object: ddp_udc_int_bap3_vqtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_bap3_vqtab = NULL;

/* Demangled: ddp_udc_int_handleddpfrm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_handleddpfrm(void) {
    ALOGD("ddp_udc_int_handleddpfrm() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_bass_extraction_param_init */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_bass_extraction_param_init(void) {
    ALOGD("dap_cpdp_pvt_bass_extraction_param_init() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_64 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_64(void) {
    ALOGD("dlb_fft_fwd_scl_64() called");
    return 0;
}

/* Demangled: ddp_udc_int_bed_mixer_query_memory */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bed_mixer_query_memory(void) {
    ALOGD("ddp_udc_int_bed_mixer_query_memory() called");
    return 0;
}

/* Demangled: DLB_blk_LintegrateL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LintegrateL_strict(void) {
    ALOGD("DLB_blk_LintegrateL_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_180_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_180_s(void) {
    ALOGD("DLB_r4_fft_180_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_320 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_320(void) {
    ALOGD("dlb_fft_fwd_scl_320() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L64 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L64 = NULL;

/* Demangled: DLB_r4_fft_288 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_288(void) {
    ALOGD("DLB_r4_fft_288() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_480 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_480(void) {
    ALOGD("dlb_fft_inv_scl_480() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamd_trans_output_compare */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamd_trans_output_compare(void) {
    ALOGD("ddp_udc_int_oamd_trans_output_compare() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_down_mix_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_down_mix_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_down_mix_query_scratch() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_32_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_32_s(void) {
    ALOGD("DLB_r4_inv_fft_32_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpddexpstr */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpddexpstr(void) {
    ALOGD("ddp_udc_int_unpddexpstr() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_downmix_excitations */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_downmix_excitations(void) {
    ALOGD("DAP_CPDP_PVT_downmix_excitations() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_TF_DB_TAB_48K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_TF_DB_TAB_48K = NULL;

/* Demangled: DLB_blk_LfirUL_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LfirUL_setup(void) {
    ALOGD("DLB_blk_LfirUL_setup() called");
    return 0;
}

/* Demangled: DLB_r4_fft_20_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_20_s(void) {
    ALOGD("DLB_r4_fft_20_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_idctsc2_lfe */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_idctsc2_lfe(void) {
    ALOGD("ddp_udc_int_idctsc2_lfe() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::getMixMatrix(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process12getMixMatrixEi(void) {
    ALOGD("_ZN5dolby11Dap2Process12getMixMatrixEi() called");
    return 0;
}

/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_peak_iir1L_setup(void) {
    ALOGD("DLB_blk_Lattack_decay_peak_iir1L_setup() called");
    return 0;
}

/* Demangled: DLB_blk_Lcrossfade_gainLS_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lcrossfade_gainLS_strict(void) {
    ALOGD("DLB_blk_Lcrossfade_gainLS_strict() called");
    return 0;
}

/* Demangled: DLB_CLshrCLUU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLshrCLUU_strict(void) {
    ALOGD("DLB_CLshrCLUU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_12 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_12(void) {
    ALOGD("DLB_r4_inv_fft_12() called");
    return 0;
}

/* Demangled: DLB_Sqmf_synthesisCL */
extern "C" __attribute__((visibility("default"))) int DLB_Sqmf_synthesisCL(void) {
    ALOGD("DLB_Sqmf_synthesisCL() called");
    return 0;
}

/* Demangled: ddp_udc_int_spxd_sysinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_spxd_sysinit(void) {
    ALOGD("ddp_udc_int_spxd_sysinit() called");
    return 0;
}

/* Demangled: dap_cpdp_bass_mbdrc_convert_params */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_bass_mbdrc_convert_params(void) {
    ALOGD("dap_cpdp_bass_mbdrc_convert_params() called");
    return 0;
}

/* Demangled: dlb_vec_Lmean_sqrLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_Lmean_sqrLU_flex(void) {
    ALOGD("dlb_vec_Lmean_sqrLU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_30 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_30(void) {
    ALOGD("dlb_fft_fwd_usc_30() called");
    return 0;
}

/* Demangled: configDecorrMode */
extern "C" __attribute__((visibility("default"))) int configDecorrMode(void) {
    ALOGD("configDecorrMode() called");
    return 0;
}

/* Demangled: ddp_udc_int_handleinvalidtimeslice */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_handleinvalidtimeslice(void) {
    ALOGD("ddp_udc_int_handleinvalidtimeslice() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_set_num_channels */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_set_num_channels(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_set_num_channels() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_720 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_720(void) {
    ALOGD("dlb_fft_inv_scl_720() called");
    return 0;
}

/* Demangled: ddpdec_open */
extern "C" __attribute__((visibility("default"))) int ddpdec_open(void) {
    ALOGD("ddpdec_open() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_AA_COMPR_COEFS_SLOPES_48K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_AA_COMPR_COEFS_SLOPES_48K = NULL;

/* Demangled: DLB_r4_inv_fft_15 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_15(void) {
    ALOGD("DLB_r4_inv_fft_15() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_32 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_32(void) {
    ALOGD("dlb_fft_fwd_usc_32() called");
    return 0;
}

/* Exported Object: ddp_udc_int_jocdec_codebook_select_tab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_jocdec_codebook_select_tab = NULL;

/* Demangled: DAP_CPDP_PVT_dap_pvt_optimizer_configure */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_pvt_optimizer_configure(void) {
    ALOGD("DAP_CPDP_PVT_dap_pvt_optimizer_configure() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_data_bass_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_data_bass_init(void) {
    ALOGD("DAP_CPDP_PVT_data_bass_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_nyquist_filters_844_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_nyquist_filters_844_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_nyquist_filters_844_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hearing_protection_rms_gain_calculation */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_rms_gain_calculation(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_rms_gain_calculation() called");
    return 0;
}

/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_peak_iir1L_strict(void) {
    ALOGD("DLB_blk_Lattack_decay_peak_iir1L_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_16 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_16(void) {
    ALOGD("DLB_r4_inv_fft_16() called");
    return 0;
}

/* Demangled: ddp_udc_int_bsid_getfrmsize */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bsid_getfrmsize(void) {
    ALOGD("ddp_udc_int_bsid_getfrmsize() called");
    return 0;
}

/* Exported Object: ddp_udc_int_gbl_ungrp5_opt */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_ungrp5_opt = NULL;

/* Exported Object: ddp_udc_int_a_s_indices */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_s_indices = NULL;

/* Exported Object: A_NGCS_UPMIX_PLAN_5CH1_TO_5D1D2_CC */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_5CH1_TO_5D1D2_CC = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L24_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L24_1 = NULL;

/* Demangled: dolby::BufferProvider::BufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProviderC2Ev(void) {
    ALOGD("_ZN5dolby14BufferProviderC2Ev() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_stats_run */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_stats_run(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_stats_run() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1xL_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1xL_setup(void) {
    ALOGD("DLB_blk_Liir1xL_setup() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L24_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L24_2 = NULL;

/* Demangled: DLB_qmf_synthesisS_close */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_close(void) {
    ALOGD("DLB_qmf_synthesisS_close() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_32_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_32_vec_syn = NULL;

/* Exported Object: ddp_udc_int_ddp_window */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_ddp_window = NULL;

/* Demangled: ddp_udc_int_obj_render_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_obj_render_init(void) {
    ALOGD("ddp_udc_int_obj_render_init() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_hamming_win_1024_tab */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_hamming_win_1024_tab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L24 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L24 = NULL;

/* Demangled: dlb_fft_fwd_usc_36 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_36(void) {
    ALOGD("dlb_fft_fwd_usc_36() called");
    return 0;
}

/* Demangled: getRequiredBufferSize_Phase90Hilbert */
extern "C" __attribute__((visibility("default"))) int getRequiredBufferSize_Phase90Hilbert(void) {
    ALOGD("getRequiredBufferSize_Phase90Hilbert() called");
    return 0;
}

/* Demangled: ddp_udc_int_secd_cripple_dd */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_secd_cripple_dd(void) {
    ALOGD("ddp_udc_int_secd_cripple_dd() called");
    return 0;
}

/* Demangled: ddp_udc_int_skip_bits_forward */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_skip_bits_forward(void) {
    ALOGD("ddp_udc_int_skip_bits_forward() called");
    return 0;
}

/* Demangled: DLB_hybrid_synthesisCL_close */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_synthesisCL_close(void) {
    ALOGD("DLB_hybrid_synthesisCL_close() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_transposer_4th_order */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_transposer_4th_order(void) {
    ALOGD("DAP_CPDP_PVT_transposer_4th_order() called");
    return 0;
}

/* Demangled: android::DDPDecoder::fadeInBuffer(void*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoder12fadeInBufferEPvii(void) {
    ALOGD("_ZN7android10DDPDecoder12fadeInBufferEPvii() called");
    return 0;
}

/* Demangled: dolby::AProcessor::checkAndUpdateConfig(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10AProcessor20checkAndUpdateConfigEiiii(void) {
    ALOGD("_ZN5dolby10AProcessor20checkAndUpdateConfigEiiii() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisS_set_slot_increment */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisS_set_slot_increment(void) {
    ALOGD("DLB_qmf_analysisS_set_slot_increment() called");
    return 0;
}

/* Exported Object: ddp_udc_int_mantcodemasktab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_mantcodemasktab = NULL;

/* Demangled: ddp_udc_int_sha256_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_sha256_init(void) {
    ALOGD("ddp_udc_int_sha256_init() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::reset(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process5resetEi(void) {
    ALOGD("_ZN5dolby11Dap2Process5resetEi() called");
    return 0;
}

/* Demangled: dlb_cvec_Lmpy_conjLLIU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_cvec_Lmpy_conjLLIU_flex(void) {
    ALOGD("dlb_cvec_Lmpy_conjLLIU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L1024 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L1024 = NULL;

/* Demangled: ddp_udc_int_speaker_config_index_find */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_speaker_config_index_find(void) {
    ALOGD("ddp_udc_int_speaker_config_index_find() called");
    return 0;
}

/* Exported Object: vtable for dolby::Dap2Process */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby11Dap2ProcessE = NULL;

/* Demangled: DAP_CPDP_PVT_ngcs_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_init(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_init() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LTRT3D_PASSIVE_GAIN_512 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LTRT3D_PASSIVE_GAIN_512 = NULL;

/* Exported Object: DLB_MFB_P10KM_P64ATM301 */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_P10KM_P64ATM301 = NULL;

/* Demangled: ddp_udc_int_oamd_framer_query_memory */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamd_framer_query_memory(void) {
    ALOGD("ddp_udc_int_oamd_framer_query_memory() called");
    return 0;
}

/* Demangled: ddp_udc_int_fboar_get_next_endpoint */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_fboar_get_next_endpoint(void) {
    ALOGD("ddp_udc_int_fboar_get_next_endpoint() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_ASA_EVENT_MAXSL */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_ASA_EVENT_MAXSL = NULL;

/* Exported Object: DAP_CPDP_PVT_DE_POW_RATE_32K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DE_POW_RATE_32K = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L240 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L240 = NULL;

/* Exported Object: ddp_udc_int_gaq_bitspermanttab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gaq_bitspermanttab = NULL;

/* Demangled: ddp_udc_int_mnte_frminit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mnte_frminit(void) {
    ALOGD("ddp_udc_int_mnte_frminit() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpack_int_loudness_value */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpack_int_loudness_value(void) {
    ALOGD("ddp_udc_int_unpack_int_loudness_value() called");
    return 0;
}

/* Demangled: DLB_cvec_Lmpy_conjLLIU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_cvec_Lmpy_conjLLIU_strict(void) {
    ALOGD("DLB_cvec_Lmpy_conjLLIU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L30 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L30 = NULL;

/* Demangled: DLB_r4_fft_768 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_768(void) {
    ALOGD("DLB_r4_fft_768() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_960 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_960(void) {
    ALOGD("dlb_fft_inv_scl_960() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_get_payload_info */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_get_payload_info(void) {
    ALOGD("ddp_udc_int_evo_get_payload_info() called");
    return 0;
}

/* Demangled: dap_pvt_bass_mbdrc_update_control */
extern "C" __attribute__((visibility("default"))) int dap_pvt_bass_mbdrc_update_control(void) {
    ALOGD("dap_pvt_bass_mbdrc_update_control() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_512_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_512_s(void) {
    ALOGD("DLB_r4_inv_fft_512_s() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_get_scale */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_get_scale(void) {
    ALOGD("DLB_hybrid_analysisCL_get_scale() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisS_set_slot_increment */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_set_slot_increment(void) {
    ALOGD("DLB_qmf_synthesisS_set_slot_increment() called");
    return 0;
}

/* Demangled: configJocForceDownmixMode */
extern "C" __attribute__((visibility("default"))) int configJocForceDownmixMode(void) {
    ALOGD("configJocForceDownmixMode() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_ddp_pan_RIGHT_MSUR */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_ddp_pan_RIGHT_MSUR = NULL;

/* Demangled: DAP_CPDP_PVT_mi_internal_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_internal_init(void) {
    ALOGD("DAP_CPDP_PVT_mi_internal_init() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_dnn_layer_type_tab */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_dnn_layer_type_tab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L32 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L32 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L90 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L90 = NULL;

/* Demangled: DLB_r4_fft_144_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_144_s(void) {
    ALOGD("DLB_r4_fft_144_s() called");
    return 0;
}

/* Demangled: DLB_fft_state_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_fft_state_query_mem(void) {
    ALOGD("DLB_fft_state_query_mem() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_pes_pan_RIGHT_RSUR_7_1 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_pes_pan_RIGHT_RSUR_7_1 = NULL;

/* Exported Object: DAP_CPDP_PVT_step_weight_frm32_inv_sum */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_step_weight_frm32_inv_sum = NULL;

/* Demangled: dolby::Dap2Process::configure(int, int, audio_format_t, audio_channel_mask_t, audio_channel_mask_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process9configureEii14audio_format_t20audio_channel_mask_tS2_(void) {
    ALOGD("_ZN5dolby11Dap2Process9configureEii14audio_format_t20audio_channel_mask_tS2_() called");
    return 0;
}

/* Demangled: ddp_udc_int_point_panner_compute_gains_along_rows */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_point_panner_compute_gains_along_rows(void) {
    ALOGD("ddp_udc_int_point_panner_compute_gains_along_rows() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_DLBcand_CLCLmixCLCLSSSSU_inplace */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_DLBcand_CLCLmixCLCLSSSSU_inplace(void) {
    ALOGD("DAP_CPDP_PVT_DLBcand_CLCLmixCLCLSSSSU_inplace() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_surround_compressor_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_surround_compressor_init(void) {
    ALOGD("DAP_CPDP_PVT_surround_compressor_init() called");
    return 0;
}

/* Demangled: DLB_r4_cplx_inv_pair */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_inv_pair(void) {
    ALOGD("DLB_r4_cplx_inv_pair() called");
    return 0;
}

/* Demangled: dlb_CLmpyCLCSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpyCLCSU_flex(void) {
    ALOGD("dlb_CLmpyCLCSU_flex() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_cqmf_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_cqmf_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_cqmf_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_upmixer_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_upmixer_reset(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_upmixer_reset() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_144 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_144(void) {
    ALOGD("dlb_fft_fwd_usc_144() called");
    return 0;
}

/* Exported Object: ddp_udc_int_f1_num */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_f1_num = NULL;

/* Demangled: ddp_udc_int_omg_speaker_position_get */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_omg_speaker_position_get(void) {
    ALOGD("ddp_udc_int_omg_speaker_position_get() called");
    return 0;
}

/* Demangled: dap_cpdp_volume_leveler_out_target_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_volume_leveler_out_target_set(void) {
    ALOGD("dap_cpdp_volume_leveler_out_target_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfcc_query_clip_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_query_clip_mem(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_query_clip_mem() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L320 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L320 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L36 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L36 = NULL;

/* Demangled: DAP_CPDP_PVT_down_mix_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_down_mix_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_down_mix_query_memory() called");
    return 0;
}

/* Exported Object: ddp_udc_int_lfe_tdtab_1c */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_lfe_tdtab_1c = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L96 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L96 = NULL;

/* Exported Object: ddp_udc_int_lfe_tdtab_1d */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_lfe_tdtab_1d = NULL;

/* Demangled: ddp_udc_int_omg_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_omg_process(void) {
    ALOGD("ddp_udc_int_omg_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_classifier_set_legacy_enable */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_classifier_set_legacy_enable(void) {
    ALOGD("DAP_CPDP_PVT_classifier_set_legacy_enable() called");
    return 0;
}

/* Demangled: DLB_r4_cplx_inv_unscaled */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_inv_unscaled(void) {
    ALOGD("DLB_r4_cplx_inv_unscaled() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_bed_channels_count */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_bed_channels_count(void) {
    ALOGD("ddp_udc_int_oamdi_get_bed_channels_count() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_separate_run */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_separate_run(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_separate_run() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssL_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssL_set_coef(void) {
    ALOGD("DLB_blk_Liir2ssL_set_coef() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlULLLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlULLLL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlULLLL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L180 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L180 = NULL;

/* Demangled: dlb_fft_inv_scl_256 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_256(void) {
    ALOGD("dlb_fft_inv_scl_256() called");
    return 0;
}

/* Demangled: dolby::AProcessor::~AProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10AProcessorD2Ev(void) {
    ALOGD("_ZN5dolby10AProcessorD2Ev() called");
    return 0;
}

/* Demangled: ddp_udc_int_abkd_skipmants */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_abkd_skipmants(void) {
    ALOGD("ddp_udc_int_abkd_skipmants() called");
    return 0;
}

/* Demangled: ddp_udc_int_tsid_validate */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsid_validate(void) {
    ALOGD("ddp_udc_int_tsid_validate() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_loudness_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_loudness_init(void) {
    ALOGD("DAP_CPDP_PVT_loudness_init() called");
    return 0;
}

/* Demangled: DLB_vec_UnormSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_UnormSU_strict(void) {
    ALOGD("DLB_vec_UnormSU_strict() called");
    return 0;
}

/* Demangled: dlb_CLmixCLCLSSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmixCLCLSSU_flex(void) {
    ALOGD("dlb_CLmixCLCLSSU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L480 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L480 = NULL;

/* Demangled: ddp_udc_int_expd_saveptrs */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_expd_saveptrs(void) {
    ALOGD("ddp_udc_int_expd_saveptrs() called");
    return 0;
}

/* Demangled: ddp_udc_int_BED_close */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_BED_close(void) {
    ALOGD("ddp_udc_int_BED_close() called");
    return 0;
}

/* Exported Object: ddp_udc_int_gbl_msktab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_msktab = NULL;

/* Demangled: DLB_hybrid_analysisCL_init */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_init(void) {
    ALOGD("DLB_hybrid_analysisCL_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_lfra_query_clip_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lfra_query_clip_mem(void) {
    ALOGD("DAP_CPDP_PVT_lfra_query_clip_mem() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_buffer_update_samples */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_buffer_update_samples(void) {
    ALOGD("DAP_CPDP_PVT_mi_buffer_update_samples() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_transposer_2nd_order */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_transposer_2nd_order(void) {
    ALOGD("DAP_CPDP_PVT_transposer_2nd_order() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_72 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_72(void) {
    ALOGD("dlb_fft_fwd_scl_72() called");
    return 0;
}

/* Demangled: android::DDPDecoder::internalSetConfig(OMX_INDEXTYPE, void*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoder17internalSetConfigE13OMX_INDEXTYPEPvPb(void) {
    ALOGD("_ZN7android10DDPDecoder17internalSetConfigE13OMX_INDEXTYPEPvPb() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_resi_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_resi_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_resi_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_resample_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_resample_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_resample_query_memory() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_512 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_512(void) {
    ALOGD("DLB_r4_inv_fft_512() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_newton_raphson_recip */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_newton_raphson_recip(void) {
    ALOGD("DAP_CPDP_PVT_newton_raphson_recip() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_target */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_target(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_target() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L72 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L72 = NULL;

/* Demangled: ddp_udc_int_dlb_bitbuf_safe_read_long */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_safe_read_long(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_safe_read_long() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_query_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_ana_query_mem(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_ana_query_mem() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_set_mode */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_set_mode(void) {
    ALOGD("DAP_CPDP_PVT_arle_set_mode() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_a_dvlim_win_128 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_a_dvlim_win_128 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L720 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L720 = NULL;

/* Exported Object: ddp_udc_int_gbl_lxrx2cmix_tab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_lxrx2cmix_tab = NULL;

/* Demangled: ddp_udc_int_speaker_config_speaker_is_present */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_speaker_config_speaker_is_present(void) {
    ALOGD("ddp_udc_int_speaker_config_speaker_is_present() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_reset */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_reset(void) {
    ALOGD("ddp_udc_int_dil_reset() called");
    return 0;
}

/* Demangled: ddp_udc_int_pack_st_loudness_value */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_pack_st_loudness_value(void) {
    ALOGD("ddp_udc_int_pack_st_loudness_value() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_agc_update_alpha */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_agc_update_alpha(void) {
    ALOGD("DAP_CPDP_PVT_agc_update_alpha() called");
    return 0;
}

/* Demangled: dlb_blk_LmixLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmixLL_flex(void) {
    ALOGD("dlb_blk_LmixLL_flex() called");
    return 0;
}

/* Demangled: DLB_r4_fft_60 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_60(void) {
    ALOGD("DLB_r4_fft_60() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_20 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_20(void) {
    ALOGD("DLB_r4_inv_fft_20() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_384 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_384(void) {
    ALOGD("dlb_fft_fwd_usc_384() called");
    return 0;
}

/* Exported Object: ddp_udc_int_bitrevary */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_bitrevary = NULL;

/* Demangled: ddp_udc_int_oamd_trans_get_ramp_length_remaining */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamd_trans_get_ramp_length_remaining(void) {
    ALOGD("ddp_udc_int_oamd_trans_get_ramp_length_remaining() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_process_legacy_extra_latency */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_syn_process_legacy_extra_latency(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_syn_process_legacy_extra_latency() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_feature_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_feature_close(void) {
    ALOGD("DAP_CPDP_PVT_feature_close() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LDN_NUM_SL_TABLE_VALS */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LDN_NUM_SL_TABLE_VALS = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_vec_syn = NULL;

/* Exported Object: vtable for dolby::IDlbProcess */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby11IDlbProcessE = NULL;

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_5CH1 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_5CH1 = NULL;

/* Demangled: dap_cpdp_rear_height_filter_mode_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_rear_height_filter_mode_set(void) {
    ALOGD("dap_cpdp_rear_height_filter_mode_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_visualizer_bands_store */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_visualizer_bands_store(void) {
    ALOGD("DAP_CPDP_PVT_visualizer_bands_store() called");
    return 0;
}

/* Demangled: DLB_CLshlCLUU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLshlCLUU_strict(void) {
    ALOGD("DLB_CLshlCLUU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_40 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_40(void) {
    ALOGD("dlb_fft_fwd_usc_40() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_get_delay(void) {
    ALOGD("DLB_hybrid_analysisCL_get_delay() called");
    return 0;
}

/* Demangled: ddp_udc_int_convertddpfrmset_bsi */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_convertddpfrmset_bsi(void) {
    ALOGD("ddp_udc_int_convertddpfrmset_bsi() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_steering_gains_init_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_steering_gains_init_scratch(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_steering_gains_init_scratch() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_24 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_24(void) {
    ALOGD("DLB_r4_inv_fft_24() called");
    return 0;
}

/* Demangled: DLB_r4_fft_64 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_64(void) {
    ALOGD("DLB_r4_fft_64() called");
    return 0;
}

/* Demangled: ddp_udc_int_bsie_pacdd */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bsie_pacdd(void) {
    ALOGD("ddp_udc_int_bsie_pacdd() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_prog_assign */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_prog_assign(void) {
    ALOGD("ddp_udc_int_oamdi_get_prog_assign() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_duck_state_clear */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_duck_state_clear(void) {
    ALOGD("DAP_CPDP_PVT_de_duck_state_clear() called");
    return 0;
}

/* Demangled: DLB_vec_IeqLLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_IeqLLU_strict(void) {
    ALOGD("DLB_vec_IeqLLU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L30 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L30 = NULL;

/* Demangled: DLB_Lqmf_synthesisL */
extern "C" __attribute__((visibility("default"))) int DLB_Lqmf_synthesisL(void) {
    ALOGD("DLB_Lqmf_synthesisL() called");
    return 0;
}

/* Demangled: DLB_time_add */
extern "C" __attribute__((visibility("default"))) int DLB_time_add(void) {
    ALOGD("DLB_time_add() called");
    return 0;
}

/* Exported Object: vtable for android::DDPDecoder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10DDPDecoderE = NULL;

/* Demangled: ddpdec_close */
extern "C" __attribute__((visibility("default"))) int ddpdec_close(void) {
    ALOGD("ddpdec_close() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_process_indirect */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_process_indirect(void) {
    ALOGD("ddp_udc_int_dvlim_process_indirect() called");
    return 0;
}

/* Demangled: ddp_udc_int_hmac_sha256_get_digest */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_hmac_sha256_get_digest(void) {
    ALOGD("ddp_udc_int_hmac_sha256_get_digest() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_asa_reset_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_asa_reset_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_asa_reset_query_memory() called");
    return 0;
}

/* Demangled: dolby::DdpDynamicConfig::~DdpDynamicConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DdpDynamicConfigD1Ev(void) {
    ALOGD("_ZN5dolby16DdpDynamicConfigD1Ev() called");
    return 0;
}

/* Demangled: ddp_udc_int_parser_close */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_parser_close(void) {
    ALOGD("ddp_udc_int_parser_close() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_pvt_audio_optimizer_update_control */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_pvt_audio_optimizer_update_control(void) {
    ALOGD("DAP_CPDP_PVT_dap_pvt_audio_optimizer_update_control() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_delay_line_clvec_initialize */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_delay_line_clvec_initialize(void) {
    ALOGD("DAP_CPDP_PVT_delay_line_clvec_initialize() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L32 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L32 = NULL;

/* Demangled: ddp_udc_int_bed_decfrm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bed_decfrm(void) {
    ALOGD("ddp_udc_int_bed_decfrm() called");
    return 0;
}

/* Exported Object: ddp_udc_int_flt_delays */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_flt_delays = NULL;

/* Demangled: dap_cpdp_peak_limiter_peak_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_peak_limiter_peak_set(void) {
    ALOGD("dap_cpdp_peak_limiter_peak_set() called");
    return 0;
}

/* Demangled: dolby::BufferProvider::setConfig(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProvider9setConfigEij(void) {
    ALOGD("_ZN5dolby14BufferProvider9setConfigEij() called");
    return 0;
}

/* Exported Object: A_NGCS_UPMIX_PLAN_STEREO_TO_5D1D2 */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_STEREO_TO_5D1D2 = NULL;

/* Demangled: dlb_fft_fwd_usc_45 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_45(void) {
    ALOGD("dlb_fft_fwd_usc_45() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P4_32 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4_32 = NULL;

/* Exported Object: ddp_udc_int_jocdec_num_dmx_channels_tab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_jocdec_num_dmx_channels_tab = NULL;

/* Demangled: dap_cpdp_volume_leveler_amount_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_volume_leveler_amount_set(void) {
    ALOGD("dap_cpdp_volume_leveler_amount_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_asa_normlogsone_2sone */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_asa_normlogsone_2sone(void) {
    ALOGD("DAP_CPDP_PVT_asa_normlogsone_2sone() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_dap_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_dap_close(void) {
    ALOGD("DAP_CPDP_PVT_mi_dap_close() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_gain_calc_masking_correction */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_gain_calc_masking_correction(void) {
    ALOGD("DAP_CPDP_PVT_gain_calc_masking_correction() called");
    return 0;
}

/* Demangled: DLB_blk_Lattack_decay_iir1L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_iir1L_setup(void) {
    ALOGD("DLB_blk_Lattack_decay_iir1L_setup() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv2L_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv2L_inplace_flex(void) {
    ALOGD("dlb_blk_Liir2ssv2L_inplace_flex() called");
    return 0;
}

/* Demangled: ddp_udc_int_ph90_qmf_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ph90_qmf_init(void) {
    ALOGD("ddp_udc_int_ph90_qmf_init() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_a_dvlim_win_64 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_a_dvlim_win_64 = NULL;

/* Exported Object: dlb_cos_16_ast_mini_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_16_ast_mini_twiddle = NULL;

/* Exported Object: ddp_udc_int_ap_dvlim_coefs_64 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_ap_dvlim_coefs_64 = NULL;

/* Exported Object: A_NGCS_UPMIX_PLAN_5CH1_TO_7CH1_CC */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_5CH1_TO_7CH1_CC = NULL;

/* Demangled: DAP_CPDP_PVT_ltrt3d_apply_deq_gain */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_apply_deq_gain(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_apply_deq_gain() called");
    return 0;
}

/* Demangled: dlb_blk_Liir1L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir1L_flex(void) {
    ALOGD("dlb_blk_Liir1L_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L36 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L36 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L960 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L960 = NULL;

/* Demangled: dlb_fft_fwd_usc_48 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_48(void) {
    ALOGD("dlb_fft_fwd_usc_48() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_convert_drc_params */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_convert_drc_params(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_convert_drc_params() called");
    return 0;
}

/* Demangled: ddp_udc_int_tpnd_decode */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tpnd_decode(void) {
    ALOGD("ddp_udc_int_tpnd_decode() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_DUCK_THRESHOLDS_48K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DUCK_THRESHOLDS_48K = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L128_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L128_1 = NULL;

/* Exported Object: DAP_CPDP_PVT_A_LTRT3D_DELAYATTEN_SR44KHZ1 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LTRT3D_DELAYATTEN_SR44KHZ1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L128_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L128_2 = NULL;

/* Demangled: dap_cpdp_mi2virtualizer_binaural_steering_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_mi2virtualizer_binaural_steering_enable_set(void) {
    ALOGD("dap_cpdp_mi2virtualizer_binaural_steering_enable_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_dap_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_dap_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_mi_dap_query_scratch() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_dv_params_init */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_dv_params_init(void) {
    ALOGD("dap_cpdp_pvt_dv_params_init() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_576 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_576(void) {
    ALOGD("dlb_fft_fwd_scl_576() called");
    return 0;
}

/* Demangled: ddp_udc_int_mnte_pacstart_chblk */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mnte_pacstart_chblk(void) {
    ALOGD("ddp_udc_int_mnte_pacstart_chblk() called");
    return 0;
}

/* Demangled: ddp_udc_int_ddpi_fmi_openframe */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ddpi_fmi_openframe(void) {
    ALOGD("ddp_udc_int_ddpi_fmi_openframe() called");
    return 0;
}

/* Exported Object: ddp_udc_int_lfe_tdtab_singledim */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_lfe_tdtab_singledim = NULL;

/* Demangled: dlb_dct4_premodulation */
extern "C" __attribute__((visibility("default"))) int dlb_dct4_premodulation(void) {
    ALOGD("dlb_dct4_premodulation() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::process(dolby::BufferProvider*, dolby::BufferProvider*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process7processEPNS_14BufferProviderES2_(void) {
    ALOGD("_ZN5dolby11Dap2Process7processEPNS_14BufferProviderES2_() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_cqmf_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_cqmf_process(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_cqmf_process() called");
    return 0;
}

/* Demangled: dlb_vec_UnormLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_UnormLU_flex(void) {
    ALOGD("dlb_vec_UnormLU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_fft_1024 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_1024(void) {
    ALOGD("DLB_r4_fft_1024() called");
    return 0;
}

/* Demangled: ddp_udc_int_groupexps */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_groupexps(void) {
    ALOGD("ddp_udc_int_groupexps() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfcc_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_close(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_close() called");
    return 0;
}

/* Demangled: ddp_udc_int_pack_downmix_offset_value */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_pack_downmix_offset_value(void) {
    ALOGD("ddp_udc_int_pack_downmix_offset_value() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_oamd_ver_from_bitstream */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_oamd_ver_from_bitstream(void) {
    ALOGD("ddp_udc_int_oamdi_get_oamd_ver_from_bitstream() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_separate_apply_gains */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_separate_apply_gains(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_separate_apply_gains() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpgaqmants */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpgaqmants(void) {
    ALOGD("ddp_udc_int_unpgaqmants() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_internal_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_internal_process(void) {
    ALOGD("DAP_CPDP_PVT_mi_internal_process() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv1_dsmpL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv1_dsmpL_strict(void) {
    ALOGD("DLB_blk_Liir2ssv1_dsmpL_strict() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_dap_get_binaural_virtualizer_amount */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_dap_get_binaural_virtualizer_amount(void) {
    ALOGD("DAP_CPDP_PVT_mi_dap_get_binaural_virtualizer_amount() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L45 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L45 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L256 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L256 = NULL;

/* Exported Object: ddp_udc_int_lfe_tdtab_2a */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_lfe_tdtab_2a = NULL;

/* Demangled: dap_cpdp_hearing_protection_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_hearing_protection_enable_set(void) {
    ALOGD("dap_cpdp_hearing_protection_enable_set() called");
    return 0;
}

/* Demangled: DLB_vec_LsetLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LsetLU_strict(void) {
    ALOGD("DLB_vec_LsetLU_strict() called");
    return 0;
}

/* Demangled: dap_cpdp_woofer_regulator_tuning_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_woofer_regulator_tuning_set(void) {
    ALOGD("dap_cpdp_woofer_regulator_tuning_set() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_40_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_40_s(void) {
    ALOGD("DLB_r4_inv_fft_40_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_2048 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_2048(void) {
    ALOGD("DLB_r4_fft_2048() called");
    return 0;
}

/* Exported Object: ddp_udc_int_lfe_tdtab_2b */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_lfe_tdtab_2b = NULL;

/* Demangled: DAP_CPDP_PVT_mi_dap_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_dap_init(void) {
    ALOGD("DAP_CPDP_PVT_mi_dap_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_upmixer_query_configure_results_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_upmixer_query_configure_results_memory(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_upmixer_query_configure_results_memory() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_SURROUND_COMPRESSOR_T_MIN_DB */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_SURROUND_COMPRESSOR_T_MIN_DB = NULL;

/* Demangled: dlb_blk_Lmix_shlULLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmix_shlULLL_flex(void) {
    ALOGD("dlb_blk_Lmix_shlULLL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L96_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L96_cos = NULL;

/* Demangled: DAP_CPDP_PVT_asa_calculate_skewness */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_asa_calculate_skewness(void) {
    ALOGD("DAP_CPDP_PVT_asa_calculate_skewness() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L48 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L48 = NULL;

/* Exported Object: DAP_CPDP_PVT_P_MIX_FREQ_HIGH_BOUNDARY_TAB_32KHZ */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_P_MIX_FREQ_HIGH_BOUNDARY_TAB_32KHZ = NULL;

/* Exported Object: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MAX_TAB_32K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MAX_TAB_32K = NULL;

/* Demangled: dlb_fft_fwd_scl_80 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_80(void) {
    ALOGD("dlb_fft_fwd_scl_80() called");
    return 0;
}

/* Demangled: ddp_udc_int_converter_reset */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_converter_reset(void) {
    ALOGD("ddp_udc_int_converter_reset() called");
    return 0;
}

/* Demangled: ddp_udc_int_sha256_do_hash */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_sha256_do_hash(void) {
    ALOGD("ddp_udc_int_sha256_do_hash() called");
    return 0;
}

/* Exported Object: A_NGCS_UPMIX_PLAN_7CH1_TO_7D1D2 */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_7CH1_TO_7D1D2 = NULL;

/* Demangled: ddp_udc_int_dlb_bitbuf_get_bits_left */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_get_bits_left(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_get_bits_left() called");
    return 0;
}

/* Demangled: ddp_udc_int_pack_peak_value */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_pack_peak_value(void) {
    ALOGD("ddp_udc_int_pack_peak_value() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_pes_pan_RAUX_LAUX */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_pes_pan_RAUX_LAUX = NULL;

/* Exported Object: DAP_CPDP_PVT_NYQUIST_FILTERS_844_LOW_LATENCY */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_NYQUIST_FILTERS_844_LOW_LATENCY = NULL;

/* Demangled: DAP_CPDP_PVT_ltrt3d_stats_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_stats_init(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_stats_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L192 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L192 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L576_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L576_cos = NULL;

/* Demangled: ddp_udc_int_set_dlb_buffer_from_bfd */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_set_dlb_buffer_from_bfd(void) {
    ALOGD("ddp_udc_int_set_dlb_buffer_from_bfd() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_get_pgm_bnd */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_get_pgm_bnd(void) {
    ALOGD("ddp_udc_int_dil_get_pgm_bnd() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_transcode_open */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_transcode_open(void) {
    ALOGD("ddp_udc_int_dil_transcode_open() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_spec_flux_query_clip_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_spec_flux_query_clip_mem(void) {
    ALOGD("DAP_CPDP_PVT_spec_flux_query_clip_mem() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L32_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L32_1 = NULL;

/* Demangled: ddp_udc_int_expe_calcnpkgrps */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_expe_calcnpkgrps(void) {
    ALOGD("ddp_udc_int_expe_calcnpkgrps() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_set_dimensional_trim_defaults */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_set_dimensional_trim_defaults(void) {
    ALOGD("ddp_udc_int_oamdi_set_dimensional_trim_defaults() called");
    return 0;
}

/* Demangled: dolby::BufferProvider::~BufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProviderD0Ev(void) {
    ALOGD("_ZN5dolby14BufferProviderD0Ev() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hfra_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hfra_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_hfra_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_down_mix_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_down_mix_close(void) {
    ALOGD("DAP_CPDP_PVT_down_mix_close() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L32_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L32_2 = NULL;

/* Demangled: DLB_r4_inv_fft_288 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_288(void) {
    ALOGD("DLB_r4_inv_fft_288() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_isf_bh_7_5_3_0_reorder */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_isf_bh_7_5_3_0_reorder = NULL;

/* Demangled: DLB_r4_fft_384_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_384_s(void) {
    ALOGD("DLB_r4_fft_384_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_xfmd_lfe_imdct */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_xfmd_lfe_imdct(void) {
    ALOGD("ddp_udc_int_xfmd_lfe_imdct() called");
    return 0;
}

/* Demangled: ddp_udc_int_ddpi_fmi_query */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ddpi_fmi_query(void) {
    ALOGD("ddp_udc_int_ddpi_fmi_query() called");
    return 0;
}

/* Demangled: ddp_udc_int_jocd_process_one_frame */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocd_process_one_frame(void) {
    ALOGD("ddp_udc_int_jocd_process_one_frame() called");
    return 0;
}

/* Demangled: ddpi_udc_getframe_mdat */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_getframe_mdat(void) {
    ALOGD("ddpi_udc_getframe_mdat() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_ddp_pan_RIGHT_RSUR_7_1 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_ddp_pan_RIGHT_RSUR_7_1 = NULL;

/* Demangled: ddp_udc_int_dil_read */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_read(void) {
    ALOGD("ddp_udc_int_dil_read() called");
    return 0;
}

/* Demangled: ddp_udc_int_overwriteprenoise */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_overwriteprenoise(void) {
    ALOGD("ddp_udc_int_overwriteprenoise() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int const*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_cqmf_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_cqmf_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_cqmf_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_nyquist_filters_844_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_nyquist_filters_844_init(void) {
    ALOGD("DAP_CPDP_PVT_nyquist_filters_844_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_cqmf_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_cqmf_reset(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_cqmf_reset() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_30 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_30(void) {
    ALOGD("DLB_r4_inv_fft_30() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_get_smoothed_gain_alpha */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_get_smoothed_gain_alpha(void) {
    ALOGD("ddp_udc_int_dvlim_get_smoothed_gain_alpha() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_0 */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_0(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_0() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_lvl_calc_single_ts_loudness */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lvl_calc_single_ts_loudness(void) {
    ALOGD("DAP_CPDP_PVT_lvl_calc_single_ts_loudness() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L320_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L320_1 = NULL;

/* Demangled: DLB_r4_fft_72 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_72(void) {
    ALOGD("DLB_r4_fft_72() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_32 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_32(void) {
    ALOGD("DLB_r4_inv_fft_32() called");
    return 0;
}

/* Demangled: DLB_r4_rsplit_fft_nn_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_rsplit_fft_nn_s(void) {
    ALOGD("DLB_r4_rsplit_fft_nn_s() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisS_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_query_mem(void) {
    ALOGD("DLB_qmf_synthesisS_query_mem() called");
    return 0;
}

/* Demangled: ddp_udc_int_mainprogram_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mainprogram_process(void) {
    ALOGD("ddp_udc_int_mainprogram_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_1 */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_1(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_1() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2df1L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2df1L_set_coef(void) {
    ALOGD("DLB_blk_Liir2df1L_set_coef() called");
    return 0;
}

/* Demangled: DLB_blk_LmaxLLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmaxLLL_strict(void) {
    ALOGD("DLB_blk_LmaxLLL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L320_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L320_2 = NULL;

/* Demangled: ddp_udc_int_spxd_synthesizetcs */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_spxd_synthesizetcs(void) {
    ALOGD("ddp_udc_int_spxd_synthesizetcs() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_md_update_info */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_md_update_info(void) {
    ALOGD("ddp_udc_int_oamdi_get_md_update_info() called");
    return 0;
}

/* Demangled: dap_cpdp_bass_enhancer_cutoff_frequency_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_bass_enhancer_cutoff_frequency_set(void) {
    ALOGD("dap_cpdp_bass_enhancer_cutoff_frequency_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_2 */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_2(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_2() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlaL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlaL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlaL_strict() called");
    return 0;
}

/* Demangled: DLB_unload_mfb_p10km_analysisL_filter_state */
extern "C" __attribute__((visibility("default"))) int DLB_unload_mfb_p10km_analysisL_filter_state(void) {
    ALOGD("DLB_unload_mfb_p10km_analysisL_filter_state() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L72_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L72_cos = NULL;

/* Exported Object: ddp_udc_int_estalph_exp_tab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_estalph_exp_tab = NULL;

/* Demangled: ddp_udc_int_mem_release */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mem_release(void) {
    ALOGD("ddp_udc_int_mem_release() called");
    return 0;
}

/* Demangled: ddpi_udc_set_license */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_set_license(void) {
    ALOGD("ddpi_udc_set_license() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::dumpMIMetadata(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process14dumpMIMetadataEPKc(void) {
    ALOGD("_ZN5dolby11Dap2Process14dumpMIMetadataEPKc() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_attack_time */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_attack_time(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_attack_time() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_3 */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_3(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_3() called");
    return 0;
}

/* Demangled: android::DDPDecoder::onPortEnableCompleted(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoder21onPortEnableCompletedEjb(void) {
    ALOGD("_ZN7android10DDPDecoder21onPortEnableCompletedEjb() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_agc_calc_alpha_mid */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_agc_calc_alpha_mid(void) {
    ALOGD("DAP_CPDP_PVT_agc_calc_alpha_mid() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_36 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_36(void) {
    ALOGD("DLB_r4_inv_fft_36() called");
    return 0;
}

/* Exported Object: ddp_udc_int_window_rev_neon */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_window_rev_neon = NULL;

/* Demangled: ddp_udc_int_derive_outputmap */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_derive_outputmap(void) {
    ALOGD("ddp_udc_int_derive_outputmap() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_parse_frame_config */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_parse_frame_config(void) {
    ALOGD("ddp_udc_int_evo_parse_frame_config() called");
    return 0;
}

/* Exported Object: ddp_udc_int_DELTA_X_SAMPLES */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_DELTA_X_SAMPLES = NULL;

/* Demangled: DLB_BLmpyBLS_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmpyBLS_inplace_strict(void) {
    ALOGD("DLB_BLmpyBLS_inplace_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L576 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L576 = NULL;

/* Demangled: DLB_fft_shutdown */
extern "C" __attribute__((visibility("default"))) int DLB_fft_shutdown(void) {
    ALOGD("DLB_fft_shutdown() called");
    return 0;
}

/* Demangled: ddp_udc_int_mult_UM */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mult_UM(void) {
    ALOGD("ddp_udc_int_mult_UM() called");
    return 0;
}

/* Demangled: ddp_udc_int_mnte_countbits */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mnte_countbits(void) {
    ALOGD("ddp_udc_int_mnte_countbits() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_virtual_bass_params_init */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_virtual_bass_params_init(void) {
    ALOGD("dap_cpdp_pvt_virtual_bass_params_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hp_height_reverb_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hp_height_reverb_process(void) {
    ALOGD("DAP_CPDP_PVT_hp_height_reverb_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L45 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L45 = NULL;

/* Demangled: DLB_fft_init */
extern "C" __attribute__((visibility("default"))) int DLB_fft_init(void) {
    ALOGD("DLB_fft_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_fboar_query_memory */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_fboar_query_memory(void) {
    ALOGD("ddp_udc_int_fboar_query_memory() called");
    return 0;
}

/* Demangled: dap_cpdp_mi2surround_compressor_steering_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_mi2surround_compressor_steering_enable_set(void) {
    ALOGD("dap_cpdp_mi2surround_compressor_steering_enable_set() called");
    return 0;
}

/* Demangled: dlb_CLmix4CL4SU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmix4CL4SU_flex(void) {
    ALOGD("dlb_CLmix4CL4SU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_320 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_320(void) {
    ALOGD("dlb_fft_inv_usc_320() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L60_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L60_cos = NULL;

/* Demangled: ddp_udc_int_dvlim_get_version */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_get_version(void) {
    ALOGD("ddp_udc_int_dvlim_get_version() called");
    return 0;
}

/* Demangled: ddp_udc_int_hmac_sha256_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_hmac_sha256_init(void) {
    ALOGD("ddp_udc_int_hmac_sha256_init() called");
    return 0;
}

/* Exported Object: ddp_udc_int_DELTA_SIZE_SAMPLES */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_DELTA_SIZE_SAMPLES = NULL;

/* Demangled: dap_cpdp_rs_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_rs_enable_set(void) {
    ALOGD("dap_cpdp_rs_enable_set() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_VIRTUAL_BASS_SYN_WINDOW */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_VIRTUAL_BASS_SYN_WINDOW = NULL;

/* Demangled: DLB_vec_LmaskLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LmaskLSU_strict(void) {
    ALOGD("DLB_vec_LmaskLSU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_12 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_12(void) {
    ALOGD("dlb_fft_inv_scl_12() called");
    return 0;
}

/* Demangled: ddp_udc_int_mntd_blkinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mntd_blkinit(void) {
    ALOGD("ddp_udc_int_mntd_blkinit() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_parse_payload_id */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_parse_payload_id(void) {
    ALOGD("ddp_udc_int_evo_parse_payload_id() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_lfra_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lfra_init(void) {
    ALOGD("DAP_CPDP_PVT_lfra_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_get_ge_music_confidence */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_get_ge_music_confidence(void) {
    ALOGD("DAP_CPDP_PVT_get_ge_music_confidence() called");
    return 0;
}

/* Demangled: dlb_BLsaddBLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLsaddBLL_flex(void) {
    ALOGD("dlb_BLsaddBLL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L48 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L48 = NULL;

/* Demangled: DAP_CPDP_PVT_mi_internal_set_legacy_enable */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_internal_set_legacy_enable(void) {
    ALOGD("DAP_CPDP_PVT_mi_internal_set_legacy_enable() called");
    return 0;
}

/* Demangled: dlb_BLmaxBLL_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmaxBLL_inplace_flex(void) {
    ALOGD("dlb_BLmaxBLL_inplace_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_768 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_768(void) {
    ALOGD("DLB_r4_inv_fft_768() called");
    return 0;
}

/* Demangled: DLB_time_reset */
extern "C" __attribute__((visibility("default"))) int DLB_time_reset(void) {
    ALOGD("DLB_time_reset() called");
    return 0;
}

/* Exported Object: wav2dlb_chidmap */
extern "C" __attribute__((visibility("default"))) void* wav2dlb_chidmap = NULL;

/* Demangled: ddp_udc_int_dvlim_set_peak */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_set_peak(void) {
    ALOGD("ddp_udc_int_dvlim_set_peak() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_P_MIX_FREQ_HIGH_BOUNDARY_TAB_44KHZ */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_P_MIX_FREQ_HIGH_BOUNDARY_TAB_44KHZ = NULL;

/* Demangled: dlb_fft_inv_scl_15 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_15(void) {
    ALOGD("dlb_fft_inv_scl_15() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIjE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: dap_cpdp_virtual_bass_compressor_tuning_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtual_bass_compressor_tuning_set(void) {
    ALOGD("dap_cpdp_virtual_bass_compressor_tuning_set() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_16 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_16(void) {
    ALOGD("dlb_fft_inv_scl_16() called");
    return 0;
}

/* Demangled: ddp_udc_int_udc_uitoa */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_udc_uitoa(void) {
    ALOGD("ddp_udc_int_udc_uitoa() called");
    return 0;
}

/* Demangled: ddp_udc_int_udc_initparams */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_udc_initparams(void) {
    ALOGD("ddp_udc_int_udc_initparams() called");
    return 0;
}

/* Demangled: dap_cpdp_bass_enhancer_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_bass_enhancer_enable_set(void) {
    ALOGD("dap_cpdp_bass_enhancer_enable_set() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_DAP_CPDP_LVL_DRC_COMP */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DAP_CPDP_LVL_DRC_COMP = NULL;

/* Demangled: DAP_CPDP_PVT_dvlim_reset_state */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_reset_state(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_reset_state() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_AAA_DAP_CPDP_SLOPE_GAIN_TAB_INFO */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_AAA_DAP_CPDP_SLOPE_GAIN_TAB_INFO = NULL;

/* Demangled: dlb_fft_fwd_usc_160 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_160(void) {
    ALOGD("dlb_fft_fwd_usc_160() called");
    return 0;
}

/* Demangled: dap_cpdp_virtualizer_height_speaker_angle_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtualizer_height_speaker_angle_set(void) {
    ALOGD("dap_cpdp_virtualizer_height_speaker_angle_set() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_write */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_write(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_write() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ldn_excitation_transform */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ldn_excitation_transform(void) {
    ALOGD("DAP_CPDP_PVT_ldn_excitation_transform() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv3L_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv3L_inplace_strict(void) {
    ALOGD("DLB_blk_Liir2ssv3L_inplace_strict() called");
    return 0;
}

/* Exported Object: ddp_udc_int_g_aiBandsMDCT_FromDC */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_g_aiBandsMDCT_FromDC = NULL;

/* Demangled: ddpi_udc_getoutparam */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_getoutparam(void) {
    ALOGD("ddpi_udc_getoutparam() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_pb_remove */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_pb_remove(void) {
    ALOGD("ddp_udc_int_evo_pb_remove() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_time_convert */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_time_convert(void) {
    ALOGD("ddp_udc_int_evo_time_convert() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_acorr_query_clip_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_acorr_query_clip_mem(void) {
    ALOGD("DAP_CPDP_PVT_acorr_query_clip_mem() called");
    return 0;
}

/* Exported Object: ddp_udc_int_bap5_vqtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_bap5_vqtab = NULL;

/* Demangled: DAP_CPDP_PVT_data_bass_get_latency */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_data_bass_get_latency(void) {
    ALOGD("DAP_CPDP_PVT_data_bass_get_latency() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_spec_subband_bins_hcqmf_tab */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_spec_subband_bins_hcqmf_tab = NULL;

/* Exported Object: ddp_udc_int_A_ROOM_CONFIG_SPKS_SIDE_COM */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_A_ROOM_CONFIG_SPKS_SIDE_COM = NULL;

/* Demangled: DAP_CPDP_PVT_hybrid_filter_synthesis_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hybrid_filter_synthesis_close(void) {
    ALOGD("DAP_CPDP_PVT_hybrid_filter_synthesis_close() called");
    return 0;
}

/* Demangled: DLB_r4_fft_4096 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_4096(void) {
    ALOGD("DLB_r4_fft_4096() called");
    return 0;
}

/* Demangled: ddp_udc_int_evod_md_detected */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evod_md_detected(void) {
    ALOGD("ddp_udc_int_evod_md_detected() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_intelligent_eq_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_intelligent_eq_process(void) {
    ALOGD("DAP_CPDP_PVT_intelligent_eq_process() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpphsflgs */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpphsflgs(void) {
    ALOGD("ddp_udc_int_unpphsflgs() called");
    return 0;
}

/* Exported Object: ddp_udc_int_brxsin */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_brxsin = NULL;

/* Demangled: ddp_udc_int_omg_panner_program_metadata_set */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_omg_panner_program_metadata_set(void) {
    ALOGD("ddp_udc_int_omg_panner_program_metadata_set() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_virtualizer_update_control */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_virtualizer_update_control(void) {
    ALOGD("dap_cpdp_pvt_virtualizer_update_control() called");
    return 0;
}

/* Demangled: dap_cpdp_vis_custom_bands_get */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_vis_custom_bands_get(void) {
    ALOGD("dap_cpdp_vis_custom_bands_get() called");
    return 0;
}

/* Demangled: dlb_CLCLmix7CL14SU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLCLmix7CL14SU_flex(void) {
    ALOGD("dlb_CLCLmix7CL14SU_flex() called");
    return 0;
}

/* Demangled: ddp_udc_int_chnd_sysinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_chnd_sysinit(void) {
    ALOGD("ddp_udc_int_chnd_sysinit() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpddpcplstr */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpddpcplstr(void) {
    ALOGD("ddp_udc_int_unpddpcplstr() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_safe_peek */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_safe_peek(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_safe_peek() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_agc_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_agc_init(void) {
    ALOGD("DAP_CPDP_PVT_agc_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_vec_atan */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_atan(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_atan() called");
    return 0;
}

/* Demangled: ddp_udc_int_omg_width_gains_get */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_omg_width_gains_get(void) {
    ALOGD("ddp_udc_int_omg_width_gains_get() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hfra_query_clip_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hfra_query_clip_mem(void) {
    ALOGD("DAP_CPDP_PVT_hfra_query_clip_mem() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_90 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_90(void) {
    ALOGD("dlb_fft_fwd_scl_90() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfcc_flux_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_flux_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_flux_query_memory() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_512 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_512(void) {
    ALOGD("dlb_fft_inv_scl_512() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L90 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L90 = NULL;

/* Exported Object: ddp_udc_int_f1_den */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_f1_den = NULL;

/* Demangled: ddp_udc_int_jocd_open */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocd_open(void) {
    ALOGD("ddp_udc_int_jocd_open() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_powmin_get_current_rms_err */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_powmin_get_current_rms_err(void) {
    ALOGD("DAP_CPDP_PVT_de_powmin_get_current_rms_err() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_640_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_640_s(void) {
    ALOGD("DLB_r4_inv_fft_640_s() called");
    return 0;
}

/* Exported Object: dlb_cos_8_full */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_8_full = NULL;

/* Demangled: DAP_CPDP_PVT_dvlim_set_enable */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_set_enable(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_set_enable() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hearing_protection_get_enable */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_get_enable(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_get_enable() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_ap_dvlim_coefs_32 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_ap_dvlim_coefs_32 = NULL;

/* Demangled: ddp_udc_int_oamdi_from_bitstream */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_from_bitstream(void) {
    ALOGD("ddp_udc_int_oamdi_from_bitstream() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_get_target_gain */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_get_target_gain(void) {
    ALOGD("ddp_udc_int_dvlim_get_target_gain() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L240 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L240 = NULL;

/* Demangled: dolby::AProcessor::AProcessor(dolby::IDecConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10AProcessorC1EPNS_10IDecConfigE(void) {
    ALOGD("_ZN5dolby10AProcessorC1EPNS_10IDecConfigE() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_ll_head */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_ll_head(void) {
    ALOGD("ddp_udc_int_evo_ll_head() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpack_peak_value */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpack_peak_value(void) {
    ALOGD("ddp_udc_int_unpack_peak_value() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_spec_flux_frame_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_spec_flux_frame_process(void) {
    ALOGD("DAP_CPDP_PVT_spec_flux_frame_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_loudness_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_loudness_process(void) {
    ALOGD("DAP_CPDP_PVT_loudness_process() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_96 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_96(void) {
    ALOGD("dlb_fft_fwd_scl_96() called");
    return 0;
}

/* Exported Object: dlb_cos_32_full */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_32_full = NULL;

/* Demangled: ddp_udc_int_convertexpstr */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_convertexpstr(void) {
    ALOGD("ddp_udc_int_convertexpstr() called");
    return 0;
}

/* Exported Object: ddp_udc_int_jocdec_num_freq_bands_tab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_jocdec_num_freq_bands_tab = NULL;

/* Exported Object: ddp_udc_int_a_isf_bh_9_5_0_0_reorder */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_isf_bh_9_5_0_0_reorder = NULL;

/* Demangled: DLB_r4_fft_80 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_80(void) {
    ALOGD("DLB_r4_fft_80() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_40 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_40(void) {
    ALOGD("DLB_r4_inv_fft_40() called");
    return 0;
}

/* Demangled: ddp_udc_int_intloud_query_mem */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_intloud_query_mem(void) {
    ALOGD("ddp_udc_int_intloud_query_mem() called");
    return 0;
}

/* Exported Object: ddp_udc_int_huff_tree_7ch_pos_index_sparse */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_huff_tree_7ch_pos_index_sparse = NULL;

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7CH1 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7CH1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L96 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L96 = NULL;

/* Demangled: dlb_fft_fwd_usc_640 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_640(void) {
    ALOGD("dlb_fft_fwd_usc_640() called");
    return 0;
}

/* Exported Object: ddp_udc_int_ecpd_begfbabndtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_ecpd_begfbabndtab = NULL;

/* Demangled: DAP_CPDP_PVT_data_bass_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_data_bass_process(void) {
    ALOGD("DAP_CPDP_PVT_data_bass_process() called");
    return 0;
}

/* Demangled: DLB_CLmpyCLVSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpyCLVSU_strict(void) {
    ALOGD("DLB_CLmpyCLVSU_strict() called");
    return 0;
}

/* Demangled: dap_cpdp_virtualizer_rear_height_speaker_angle_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtualizer_rear_height_speaker_angle_set(void) {
    ALOGD("dap_cpdp_virtualizer_rear_height_speaker_angle_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_data_bass_hybrid_ana */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_data_bass_hybrid_ana(void) {
    ALOGD("DAP_CPDP_PVT_data_bass_hybrid_ana() called");
    return 0;
}

/* Demangled: dlb_CLmpy_recipCLLIU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpy_recipCLLIU_flex(void) {
    ALOGD("dlb_CLmpy_recipCLLIU_flex() called");
    return 0;
}

/* Demangled: processudcoutput */
extern "C" __attribute__((visibility("default"))) int processudcoutput(void) {
    ALOGD("processudcoutput() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_smag_Q15 */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_smag_Q15(void) {
    ALOGD("ddp_udc_int_oamdi_get_smag_Q15() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_asa_reset_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_asa_reset_process(void) {
    ALOGD("DAP_CPDP_PVT_asa_reset_process() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_60 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_60(void) {
    ALOGD("dlb_fft_fwd_usc_60() called");
    return 0;
}

/* Exported Object: ddp_udc_int_crossfade_win_32 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_crossfade_win_32 = NULL;

/* Exported Object: ddp_udc_int_defaultmixdata */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_defaultmixdata = NULL;

/* Demangled: DAP_CPDP_PVT_dvlim_reset_smoothed_gain */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_reset_smoothed_gain(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_reset_smoothed_gain() called");
    return 0;
}

/* Demangled: dlb_BLmpyBLS_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmpyBLS_inplace_flex(void) {
    ALOGD("dlb_BLmpyBLS_inplace_flex() called");
    return 0;
}

/* Demangled: ddp_udc_int_isf_decoder_compute_trim */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_isf_decoder_compute_trim(void) {
    ALOGD("ddp_udc_int_isf_decoder_compute_trim() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_smooth_gains_across_frequency */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_smooth_gains_across_frequency(void) {
    ALOGD("DAP_CPDP_PVT_arle_smooth_gains_across_frequency() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlUnL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlUnL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlUnL_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_45 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_45(void) {
    ALOGD("DLB_r4_inv_fft_45() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_1024 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_1024(void) {
    ALOGD("dlb_fft_fwd_scl_1024() called");
    return 0;
}

/* Demangled: dolby::DdpDynamicConfig::DdpDynamicConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DdpDynamicConfigC1Ev(void) {
    ALOGD("_ZN5dolby16DdpDynamicConfigC1Ev() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_regulator_configure */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_regulator_configure(void) {
    ALOGD("DAP_CPDP_PVT_regulator_configure() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_init(void) {
    ALOGD("DAP_CPDP_PVT_de_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_delay_line_clvec_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_delay_line_clvec_reset(void) {
    ALOGD("DAP_CPDP_PVT_delay_line_clvec_reset() called");
    return 0;
}

/* Demangled: DLB_CLmfb_p10km_analysisL_init */
extern "C" __attribute__((visibility("default"))) int DLB_CLmfb_p10km_analysisL_init(void) {
    ALOGD("DLB_CLmfb_p10km_analysisL_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_FED_initbufptrs */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_FED_initbufptrs(void) {
    ALOGD("ddp_udc_int_FED_initbufptrs() called");
    return 0;
}

/* Demangled: ddp_udc_int_ddpi_fmi_closeframe */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ddpi_fmi_closeframe(void) {
    ALOGD("ddp_udc_int_ddpi_fmi_closeframe() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_surround_compressor_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_surround_compressor_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_surround_compressor_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_coefs_get_post_qmf0_phase_adjust */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_coefs_get_post_qmf0_phase_adjust(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_coefs_get_post_qmf0_phase_adjust() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_64 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_64(void) {
    ALOGD("dlb_fft_fwd_usc_64() called");
    return 0;
}

/* Exported Object: ddp_udc_int_mapped_variance */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_mapped_variance = NULL;

/* Demangled: ddp_udc_int_evo_close */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_close(void) {
    ALOGD("ddp_udc_int_evo_close() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_query_memory() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7CH1_CC */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7CH1_CC = NULL;

/* Demangled: DAP_CPDP_PVT_mi_pre_set_binaural_enable */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_pre_set_binaural_enable(void) {
    ALOGD("DAP_CPDP_PVT_mi_pre_set_binaural_enable() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_resi_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_resi_init(void) {
    ALOGD("DAP_CPDP_PVT_resi_init() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv1efL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv1efL_strict(void) {
    ALOGD("DLB_blk_Liir2ssv1efL_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_48 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_48(void) {
    ALOGD("DLB_r4_inv_fft_48() called");
    return 0;
}

/* Exported Object: dlb_odd_fft_cplx_inv_usc */
extern "C" __attribute__((visibility("default"))) void* dlb_odd_fft_cplx_inv_usc = NULL;

/* Demangled: ddp_udc_int_abkd_blkinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_abkd_blkinit(void) {
    ALOGD("ddp_udc_int_abkd_blkinit() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_process(void) {
    ALOGD("DAP_CPDP_PVT_de_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_agc_filter_loudness */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_agc_filter_loudness(void) {
    ALOGD("DAP_CPDP_PVT_agc_filter_loudness() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_compr_gain_post_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_compr_gain_post_process(void) {
    ALOGD("DAP_CPDP_PVT_de_compr_gain_post_process() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv1efL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv1efL_flex(void) {
    ALOGD("dlb_blk_Liir2ssv1efL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L480 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L480 = NULL;

/* Demangled: dlb_fft_inv_scl_20 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_20(void) {
    ALOGD("dlb_fft_inv_scl_20() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_2048 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_2048(void) {
    ALOGD("dlb_fft_fwd_scl_2048() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L15_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L15_cos = NULL;

/* Demangled: ddpdec_process */
extern "C" __attribute__((visibility("default"))) int ddpdec_process(void) {
    ALOGD("ddpdec_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_init(void) {
    ALOGD("DAP_CPDP_PVT_arle_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_get_process_channels */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_get_process_channels(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_get_process_channels() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_classifier_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_classifier_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_classifier_query_scratch() called");
    return 0;
}

/* Exported Object: ddp_udc_int_bap7_vqtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_bap7_vqtab = NULL;

/* Demangled: DAP_CPDP_PVT_sv_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sv_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_sv_query_memory() called");
    return 0;
}

/* Demangled: android::DDPDecoder::onPortFlushCompleted(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoder20onPortFlushCompletedEj(void) {
    ALOGD("_ZN7android10DDPDecoder20onPortFlushCompletedEj() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_MFB_TWID8O */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_MFB_TWID8O = NULL;

/* Demangled: DLB_VLsquaredmagCLIU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_VLsquaredmagCLIU_strict(void) {
    ALOGD("DLB_VLsquaredmagCLIU_strict() called");
    return 0;
}

/* Demangled: DLB_CLqmf_analysisL */
extern "C" __attribute__((visibility("default"))) int DLB_CLqmf_analysisL(void) {
    ALOGD("DLB_CLqmf_analysisL() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hybrid_filter_synthesis_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hybrid_filter_synthesis_process(void) {
    ALOGD("DAP_CPDP_PVT_hybrid_filter_synthesis_process() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_24 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_24(void) {
    ALOGD("dlb_fft_inv_scl_24() called");
    return 0;
}

/* Demangled: ddp_udc_int_exmd_unpblkaht */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_exmd_unpblkaht(void) {
    ALOGD("ddp_udc_int_exmd_unpblkaht() called");
    return 0;
}

/* Demangled: ddp_udc_int_size_panner_fade_out_sources_inside */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_size_panner_fade_out_sources_inside(void) {
    ALOGD("ddp_udc_int_size_panner_fade_out_sources_inside() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L720 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L720 = NULL;

/* Demangled: dap_cpdp_height_filter_mode_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_height_filter_mode_set(void) {
    ALOGD("dap_cpdp_height_filter_mode_set() called");
    return 0;
}

/* Demangled: dap_cpdp_ltrt3d_decoder_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_ltrt3d_decoder_enable_set(void) {
    ALOGD("dap_cpdp_ltrt3d_decoder_enable_set() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L60 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L60 = NULL;

/* Demangled: init_Phase90Hilbert */
extern "C" __attribute__((visibility("default"))) int init_Phase90Hilbert(void) {
    ALOGD("init_Phase90Hilbert() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_query_mem(void) {
    ALOGD("DLB_hybrid_analysisCL_query_mem() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_chroma_spec_index_tab */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_chroma_spec_index_tab = NULL;

/* Demangled: DLB_r4_fft_320 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_320(void) {
    ALOGD("DLB_r4_fft_320() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_smoothed_excitations_calculation */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_smoothed_excitations_calculation(void) {
    ALOGD("DAP_CPDP_PVT_arle_smoothed_excitations_calculation() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_120 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_120(void) {
    ALOGD("dlb_fft_fwd_scl_120() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L384_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L384_cos = NULL;

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_calculate_hrtf_and_fdn_downmix_gains */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_calculate_hrtf_and_fdn_downmix_gains(void) {
    ALOGD("DAP_CPDP_PVT_calculate_hrtf_and_fdn_downmix_gains() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L64 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L64 = NULL;

/* Demangled: configDecoder */
extern "C" __attribute__((visibility("default"))) int configDecoder(void) {
    ALOGD("configDecoder() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_variable_bits_size */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_variable_bits_size(void) {
    ALOGD("ddp_udc_int_evo_variable_bits_size() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamd_trans_read_oamdi */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamd_trans_read_oamdi(void) {
    ALOGD("ddp_udc_int_oamd_trans_read_oamdi() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_reset */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_reset(void) {
    ALOGD("ddp_udc_int_oamdi_reset() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_process_legacy */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_ana_process_legacy(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_ana_process_legacy() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_spec_bassband_bins_hcqmf_tab */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_spec_bassband_bins_hcqmf_tab = NULL;

/* Demangled: DLB_r4_inv_fft_30_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_30_s(void) {
    ALOGD("DLB_r4_inv_fft_30_s() called");
    return 0;
}

/* Exported Object: dlb_cos_48_ast_mini_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_48_ast_mini_twiddle = NULL;

/* Demangled: DLB_CLqmf_analysisS */
extern "C" __attribute__((visibility("default"))) int DLB_CLqmf_analysisS(void) {
    ALOGD("DLB_CLqmf_analysisS() called");
    return 0;
}

/* Demangled: dlb_CLmpyCLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpyCLSU_flex(void) {
    ALOGD("dlb_CLmpyCLSU_flex() called");
    return 0;
}

/* Demangled: dlb_blk_Lmpy_shlLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmpy_shlLSU_flex(void) {
    ALOGD("dlb_blk_Lmpy_shlLSU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L512 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L512 = NULL;

/* Demangled: ddp_udc_int_oamdi_get_signed_pos_codes */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_signed_pos_codes(void) {
    ALOGD("ddp_udc_int_oamdi_get_signed_pos_codes() called");
    return 0;
}

/* Demangled: dap_cpdp_process_optimizer_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_process_optimizer_enable_set(void) {
    ALOGD("dap_cpdp_process_optimizer_enable_set() called");
    return 0;
}

/* Demangled: dap_cpdp_regulator_distortion_slope_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_regulator_distortion_slope_set(void) {
    ALOGD("dap_cpdp_regulator_distortion_slope_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hp_height_fdn_allpass_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hp_height_fdn_allpass_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_hp_height_fdn_allpass_query_memory() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2df1L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2df1L_setup(void) {
    ALOGD("DLB_blk_Liir2df1L_setup() called");
    return 0;
}

/* Demangled: dolby::AProcessor::configChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10AProcessor13configChangedEv(void) {
    ALOGD("_ZN5dolby10AProcessor13configChangedEv() called");
    return 0;
}

/* Demangled: ddp_udc_int_cpld_decouple */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_cpld_decouple(void) {
    ALOGD("ddp_udc_int_cpld_decouple() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_ll_get_capacity */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_ll_get_capacity(void) {
    ALOGD("ddp_udc_int_evo_ll_get_capacity() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_isf_bh_7_3_0_0_reorder */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_isf_bh_7_3_0_0_reorder = NULL;

/* Demangled: DAP_CPDP_PVT_classifier_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_classifier_close(void) {
    ALOGD("DAP_CPDP_PVT_classifier_close() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_acorr_clip_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_acorr_clip_process(void) {
    ALOGD("DAP_CPDP_PVT_acorr_clip_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_transpose_synthesis */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_transpose_synthesis(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_transpose_synthesis() called");
    return 0;
}

/* Demangled: ddpi_udc_closedebug */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_closedebug(void) {
    ALOGD("ddpi_udc_closedebug() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_8 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_8 = NULL;

/* Demangled: DAP_CPDP_PVT_gain_clvec_process_inplace */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_gain_clvec_process_inplace(void) {
    ALOGD("DAP_CPDP_PVT_gain_clvec_process_inplace() called");
    return 0;
}

/* Demangled: ddp_udc_int_udc_strncpy */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_udc_strncpy(void) {
    ALOGD("ddp_udc_int_udc_strncpy() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_open */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_open(void) {
    ALOGD("ddp_udc_int_dil_open() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_acorr_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_acorr_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_acorr_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfcc_frame_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_frame_process(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_frame_process() called");
    return 0;
}

/* Demangled: DLB_vec_SshlSIU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_SshlSIU_inplace_strict(void) {
    ALOGD("DLB_vec_SshlSIU_inplace_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L256_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L256_1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L960 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L960 = NULL;

/* Demangled: dlb_fft_fwd_scl_128 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_128(void) {
    ALOGD("dlb_fft_fwd_scl_128() called");
    return 0;
}

/* Demangled: DLB_fft_CLfwd_unscaledL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLfwd_unscaledL(void) {
    ALOGD("DLB_fft_CLfwd_unscaledL() called");
    return 0;
}

/* Demangled: dlb_qmf_synthesisS_open */
extern "C" __attribute__((visibility("default"))) int dlb_qmf_synthesisS_open(void) {
    ALOGD("dlb_qmf_synthesisS_open() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_get_bitstream */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_get_bitstream(void) {
    ALOGD("ddp_udc_int_evo_get_bitstream() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_clear_state */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_clear_state(void) {
    ALOGD("DAP_CPDP_PVT_arle_clear_state() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_icsc_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_icsc_reset(void) {
    ALOGD("DAP_CPDP_PVT_icsc_reset() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_ap_dvlim_coefs_40 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_ap_dvlim_coefs_40 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L256_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L256_2 = NULL;

/* Demangled: dlb_fft_inv_scl_288 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_288(void) {
    ALOGD("dlb_fft_inv_scl_288() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_1024 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_1024(void) {
    ALOGD("dlb_fft_fwd_usc_1024() called");
    return 0;
}

/* Demangled: ddp_udc_int_mnte_pacfinish_blk */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mnte_pacfinish_blk(void) {
    ALOGD("ddp_udc_int_mnte_pacfinish_blk() called");
    return 0;
}

/* Demangled: ddp_udc_int_decorr_chn_set_statoinarity_detection */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_decorr_chn_set_statoinarity_detection(void) {
    ALOGD("ddp_udc_int_decorr_chn_set_statoinarity_detection() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_pvt_graphic_equalizer_param_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_pvt_graphic_equalizer_param_init(void) {
    ALOGD("DAP_CPDP_PVT_dap_pvt_graphic_equalizer_param_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_vec_weighted_mean_std */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_weighted_mean_std(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_weighted_mean_std() called");
    return 0;
}

/* Demangled: DLB_r4_fft_160_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_160_s(void) {
    ALOGD("DLB_r4_fft_160_s() called");
    return 0;
}

/* Demangled: DLB_r4_cplx_inv_scaled */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_inv_scaled(void) {
    ALOGD("DLB_r4_cplx_inv_scaled() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_576 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_576(void) {
    ALOGD("dlb_fft_inv_usc_576() called");
    return 0;
}

/* Demangled: DLB_time_end */
extern "C" __attribute__((visibility("default"))) int DLB_time_end(void) {
    ALOGD("DLB_time_end() called");
    return 0;
}

/* Demangled: ddp_udc_int_jocdec_set_param */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocdec_set_param(void) {
    ALOGD("ddp_udc_int_jocdec_set_param() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int const*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: dap_cpdp_volume_leveler_in_target_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_volume_leveler_in_target_set(void) {
    ALOGD("dap_cpdp_volume_leveler_in_target_set() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_DAP_CPDP_HCQMF_NORMALIZED_FREQUENCIES */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DAP_CPDP_HCQMF_NORMALIZED_FREQUENCIES = NULL;

/* Demangled: DAP_CPDP_PVT_nyquist_filters_844_reset_channel */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_nyquist_filters_844_reset_channel(void) {
    ALOGD("DAP_CPDP_PVT_nyquist_filters_844_reset_channel() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_vec_pow */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_pow(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_pow() called");
    return 0;
}

/* Demangled: ddp_udc_int_BED_flush */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_BED_flush(void) {
    ALOGD("ddp_udc_int_BED_flush() called");
    return 0;
}

/* Demangled: ddp_udc_int_jocdec_get_default_config */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocdec_get_default_config(void) {
    ALOGD("ddp_udc_int_jocdec_get_default_config() called");
    return 0;
}

/* Demangled: dap_cpdp_virtualizer_front_speaker_angle_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtualizer_front_speaker_angle_set(void) {
    ALOGD("dap_cpdp_virtualizer_front_speaker_angle_set() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_12_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_12_s(void) {
    ALOGD("DLB_r4_inv_fft_12_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_360 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_360(void) {
    ALOGD("dlb_fft_fwd_scl_360() called");
    return 0;
}

/* Demangled: ddp_udc_int_exmd_unpahtcpl */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_exmd_unpahtcpl(void) {
    ALOGD("ddp_udc_int_exmd_unpahtcpl() called");
    return 0;
}

/* Demangled: ddp_udc_int_drcd_applygainrng */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_drcd_applygainrng(void) {
    ALOGD("ddp_udc_int_drcd_applygainrng() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_get_version */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_get_version(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_get_version() called");
    return 0;
}

/* Demangled: DLB_vec_NdotLLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_NdotLLU_strict(void) {
    ALOGD("DLB_vec_NdotLLU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_90 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_90(void) {
    ALOGD("DLB_r4_fft_90() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_2048 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_2048(void) {
    ALOGD("dlb_fft_fwd_usc_2048() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L360_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L360_cos = NULL;

/* Demangled: dap_cpdp_virtual_bass_src_freqs_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtual_bass_src_freqs_set(void) {
    ALOGD("dap_cpdp_virtual_bass_src_freqs_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_feature_get_clip_fea_vec */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_feature_get_clip_fea_vec(void) {
    ALOGD("DAP_CPDP_PVT_feature_get_clip_fea_vec() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_distortion_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_distortion_init(void) {
    ALOGD("DAP_CPDP_PVT_arle_distortion_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_drcd_copy */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_drcd_copy(void) {
    ALOGD("ddp_udc_int_drcd_copy() called");
    return 0;
}

/* Demangled: dap_cpdp_bass_enhancer_boost_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_bass_enhancer_boost_set(void) {
    ALOGD("dap_cpdp_bass_enhancer_boost_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_end_chain_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_end_chain_close(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_end_chain_close() called");
    return 0;
}

/* Exported Object: A_NGCS_UPMIX_PLAN_7CH1_TO_5D1D2_CC */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_7CH1_TO_5D1D2_CC = NULL;

/* Demangled: dlb_blk_LmaxLLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmaxLLL_flex(void) {
    ALOGD("dlb_blk_LmaxLLL_flex() called");
    return 0;
}

/* Demangled: DLB_fft_is_supported */
extern "C" __attribute__((visibility("default"))) int DLB_fft_is_supported(void) {
    ALOGD("DLB_fft_is_supported() called");
    return 0;
}

/* Demangled: ddp_udc_int_applydelta */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_applydelta(void) {
    ALOGD("ddp_udc_int_applydelta() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L256 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L256 = NULL;

/* Demangled: DLB_r4_inv_fft_96_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_96_s(void) {
    ALOGD("DLB_r4_inv_fft_96_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_frmd_retain */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_frmd_retain(void) {
    ALOGD("ddp_udc_int_frmd_retain() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_pes_pan_CNTR_RGHT */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_pes_pan_CNTR_RGHT = NULL;

/* Demangled: DAP_CPDP_PVT_spec_calc_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_spec_calc_close(void) {
    ALOGD("DAP_CPDP_PVT_spec_calc_close() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_vec_root */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_root(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_root() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_TAB_44K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_TAB_44K = NULL;

/* Demangled: dlb_blk_LsaddLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LsaddLL_flex(void) {
    ALOGD("dlb_blk_LsaddLL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L60 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L60 = NULL;

/* Demangled: dlb_fft_fwd_usc_72 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_72(void) {
    ALOGD("dlb_fft_fwd_usc_72() called");
    return 0;
}

/* Exported Object: ddp_udc_int_nrear */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_nrear = NULL;

/* Demangled: DAP_CPDP_PVT_resi_calc_saliency_contrast */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_resi_calc_saliency_contrast(void) {
    ALOGD("DAP_CPDP_PVT_resi_calc_saliency_contrast() called");
    return 0;
}

/* Demangled: DLB_vec_LshlLIU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LshlLIU_inplace_strict(void) {
    ALOGD("DLB_vec_LshlLIU_inplace_strict() called");
    return 0;
}

/* Demangled: DLB_CLdivCLCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLdivCLCLU_strict(void) {
    ALOGD("DLB_CLdivCLCLU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L180_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L180_1 = NULL;

/* Demangled: DLB_r4_fft_96 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_96(void) {
    ALOGD("DLB_r4_fft_96() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_45_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_45_s(void) {
    ALOGD("DLB_r4_inv_fft_45_s() called");
    return 0;
}

/* Demangled: process_Phase90Hilbert */
extern "C" __attribute__((visibility("default"))) int process_Phase90Hilbert(void) {
    ALOGD("process_Phase90Hilbert() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisS_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisS_get_delay(void) {
    ALOGD("DLB_qmf_analysisS_get_delay() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_pes_pan_RIGHT_RSUR_5_1 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_pes_pan_RIGHT_RSUR_5_1 = NULL;

/* Demangled: DAP_CPDP_PVT_sbsc_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbsc_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_sbsc_query_memory() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L180_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L180_2 = NULL;

/* Demangled: ddp_udc_int_tsid_invalidate */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsid_invalidate(void) {
    ALOGD("ddp_udc_int_tsid_invalidate() called");
    return 0;
}

/* Demangled: ddp_udc_int_tsid_sysinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsid_sysinit(void) {
    ALOGD("ddp_udc_int_tsid_sysinit() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_isf_bh_9_5_0_0_decode */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_isf_bh_9_5_0_0_decode = NULL;

/* Demangled: DAP_CPDP_PVT_de_duck_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_duck_process(void) {
    ALOGD("DAP_CPDP_PVT_de_duck_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_leveler_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_leveler_reset(void) {
    ALOGD("DAP_CPDP_PVT_leveler_reset() called");
    return 0;
}

/* Demangled: android::DDPDecoder::onQueueFilled(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoder13onQueueFilledEj(void) {
    ALOGD("_ZN7android10DDPDecoder13onQueueFilledEj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L64 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L64 = NULL;

/* Exported Object: ddp_udc_int_logtable */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_logtable = NULL;

/* Demangled: ddp_udc_int_dil_query_mem_size */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_query_mem_size(void) {
    ALOGD("ddp_udc_int_dil_query_mem_size() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_hamming_weight_frm32_tab */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_hamming_weight_frm32_tab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L120 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L120 = NULL;

/* Demangled: dlb_fft_inv_scl_30 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_30(void) {
    ALOGD("dlb_fft_inv_scl_30() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_set_codec_specific_id */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_set_codec_specific_id(void) {
    ALOGD("ddp_udc_int_dil_set_codec_specific_id() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_num_obj_info_blks */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_num_obj_info_blks(void) {
    ALOGD("ddp_udc_int_oamdi_get_num_obj_info_blks() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_agc_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_agc_reset(void) {
    ALOGD("DAP_CPDP_PVT_agc_reset() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_768 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_768(void) {
    ALOGD("dlb_fft_inv_scl_768() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_32 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_32(void) {
    ALOGD("dlb_fft_inv_scl_32() called");
    return 0;
}

/* Demangled: ddp_udc_int_pacddfrm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_pacddfrm(void) {
    ALOGD("ddp_udc_int_pacddfrm() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpack_downmix_offset_value */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpack_downmix_offset_value(void) {
    ALOGD("ddp_udc_int_unpack_downmix_offset_value() called");
    return 0;
}

/* Demangled: dap_cpdp_volume_modeler_calibration_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_volume_modeler_calibration_set(void) {
    ALOGD("dap_cpdp_volume_modeler_calibration_set() called");
    return 0;
}

/* Demangled: dolby::BufferSource::fillWithSilence() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12BufferSource15fillWithSilenceEv(void) {
    ALOGD("_ZN5dolby12BufferSource15fillWithSilenceEv() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_nyquist_filters_844_analyse_channel */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_nyquist_filters_844_analyse_channel(void) {
    ALOGD("DAP_CPDP_PVT_nyquist_filters_844_analyse_channel() called");
    return 0;
}

/* Exported Object: ddp_udc_int_qntz11lev_opt */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_qntz11lev_opt = NULL;

/* Demangled: DAP_CPDP_PVT_hdr_Plog2P */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hdr_Plog2P(void) {
    ALOGD("DAP_CPDP_PVT_hdr_Plog2P() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_open */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_open(void) {
    ALOGD("DLB_hybrid_analysisCL_open() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hp_height_reverb_peek */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hp_height_reverb_peek(void) {
    ALOGD("DAP_CPDP_PVT_hp_height_reverb_peek() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_rs_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_rs_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_rs_query_memory() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_a_ds_idx_44k1 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_a_ds_idx_44k1 = NULL;

/* Demangled: DLB_fft_Linv_scaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_Linv_scaledCL(void) {
    ALOGD("DLB_fft_Linv_scaledCL() called");
    return 0;
}

/* Exported Object: dlb_cos_48_full */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_48_full = NULL;

/* Exported Object: ddp_udc_int_globalgain */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_globalgain = NULL;

/* Demangled: ddp_udc_int_jocdec_reset */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocdec_reset(void) {
    ALOGD("ddp_udc_int_jocdec_reset() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_unpack */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_unpack(void) {
    ALOGD("ddp_udc_int_dil_unpack() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_chroma_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_chroma_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_chroma_query_memory() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_36 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_36(void) {
    ALOGD("dlb_fft_inv_scl_36() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: DLB_blk_Lfir2L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir2L_set_coef(void) {
    ALOGD("DLB_blk_Lfir2L_set_coef() called");
    return 0;
}

/* Demangled: DLB_r4_fft_15_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_15_s(void) {
    ALOGD("DLB_r4_fft_15_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_180 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_180(void) {
    ALOGD("dlb_fft_fwd_usc_180() called");
    return 0;
}

/* Demangled: dlb_vec_Labs_maxLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_Labs_maxLU_flex(void) {
    ALOGD("dlb_vec_Labs_maxLU_flex() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_internal_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_internal_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_mi_internal_query_memory() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L128 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L128 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L72 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L72 = NULL;

/* Demangled: ddp_udc_int_extract_auxdata_mdat */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_extract_auxdata_mdat(void) {
    ALOGD("ddp_udc_int_extract_auxdata_mdat() called");
    return 0;
}

/* Demangled: ddp_udc_int_extract_bsi_mdat */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_extract_bsi_mdat(void) {
    ALOGD("ddp_udc_int_extract_bsi_mdat() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamd_trans_output_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamd_trans_output_init(void) {
    ALOGD("ddp_udc_int_oamd_trans_output_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_clvec_buffer_mixer_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_clvec_buffer_mixer_process(void) {
    ALOGD("DAP_CPDP_PVT_clvec_buffer_mixer_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_cmtx_trylock */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_cmtx_trylock(void) {
    ALOGD("DAP_CPDP_PVT_cmtx_trylock() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hp_height_fdn_ane_mixing_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hp_height_fdn_ane_mixing_process(void) {
    ALOGD("DAP_CPDP_PVT_hp_height_fdn_ane_mixing_process() called");
    return 0;
}

/* Demangled: ddp_udc_int_decorr_chn_set_stationarity_flag */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_decorr_chn_set_stationarity_flag(void) {
    ALOGD("ddp_udc_int_decorr_chn_set_stationarity_flag() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_data_bass_clear_delayline_buf */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_data_bass_clear_delayline_buf(void) {
    ALOGD("DAP_CPDP_PVT_data_bass_clear_delayline_buf() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_cqmf_set_upmix_plan */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_cqmf_set_upmix_plan(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_cqmf_set_upmix_plan() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_576_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_576_s(void) {
    ALOGD("DLB_r4_inv_fft_576_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_ahtd_getdither */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ahtd_getdither(void) {
    ALOGD("ddp_udc_int_ahtd_getdither() called");
    return 0;
}

/* Demangled: ddp_udc_int_bsid_unpddp */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bsid_unpddp(void) {
    ALOGD("ddp_udc_int_bsid_unpddp() called");
    return 0;
}

/* Exported Object: ddp_udc_int_oamd_priority_Q15 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_oamd_priority_Q15 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L360 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L360 = NULL;

/* Exported Object: ddp_udc_int_gbl_full_chantab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_full_chantab = NULL;

/* Exported Object: ddp_udc_int_qntz5lev_opt */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_qntz5lev_opt = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L288 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L288 = NULL;

/* Demangled: ddp_udc_int_evo_ll_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_ll_init(void) {
    ALOGD("ddp_udc_int_evo_ll_init() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_2 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_2(void) {
    ALOGD("dlb_fft_inv_usc_2() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_0 */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_even_0(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_even_0() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_set_enable */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_set_enable(void) {
    ALOGD("ddp_udc_int_dvlim_set_enable() called");
    return 0;
}

/* Demangled: ddp_udc_int_oarq_query_scratch */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oarq_query_scratch(void) {
    ALOGD("ddp_udc_int_oarq_query_scratch() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_complex_equalizer_param_init */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_complex_equalizer_param_init(void) {
    ALOGD("dap_cpdp_pvt_complex_equalizer_param_init() called");
    return 0;
}

/* Demangled: DLB_r4_fft_48_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_48_s(void) {
    ALOGD("DLB_r4_fft_48_s() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_1 */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_even_1(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_even_1() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_agc_calc_loudness */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_agc_calc_loudness(void) {
    ALOGD("DAP_CPDP_PVT_agc_calc_loudness() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L144_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L144_1 = NULL;

/* Demangled: dlb_fft_inv_usc_4 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_4(void) {
    ALOGD("dlb_fft_inv_usc_4() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_2 */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_even_2(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_even_2() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisS_copy_states */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_copy_states(void) {
    ALOGD("DLB_qmf_synthesisS_copy_states() called");
    return 0;
}

/* Demangled: dolby::UdcAudioBufferProvider::configure(audio_format_t, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby22UdcAudioBufferProvider9configureE14audio_format_tjj(void) {
    ALOGD("_ZN5dolby22UdcAudioBufferProvider9configureE14audio_format_tjj() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_data_bass_subqmf_analysis */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_data_bass_subqmf_analysis(void) {
    ALOGD("DAP_CPDP_PVT_data_bass_subqmf_analysis() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sbsc_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbsc_close(void) {
    ALOGD("DAP_CPDP_PVT_sbsc_close() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_step_weight_frm32_tab */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_step_weight_frm32_tab = NULL;

/* Demangled: DAP_CPDP_PVT_hp_height_fdn_allpass_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hp_height_fdn_allpass_process(void) {
    ALOGD("DAP_CPDP_PVT_hp_height_fdn_allpass_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L144_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L144_2 = NULL;

/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_3 */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_even_3(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_even_3() called");
    return 0;
}

/* Demangled: ddpi_udc_query_init_mem */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_query_init_mem(void) {
    ALOGD("ddpi_udc_query_init_mem() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_asa_noise_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_asa_noise_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_asa_noise_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_feature_set_legacy_enable */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_feature_set_legacy_enable(void) {
    ALOGD("DAP_CPDP_PVT_feature_set_legacy_enable() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfcc_flux_query_clip_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_flux_query_clip_mem(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_flux_query_clip_mem() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_6 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_6(void) {
    ALOGD("dlb_fft_inv_usc_6() called");
    return 0;
}

/* Exported Object: ddp_udc_int_spxd_bndtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_spxd_bndtab = NULL;

/* Demangled: dolby::AudioBufferProvider::set(audio_buffer_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19AudioBufferProvider3setEP14audio_buffer_s(void) {
    ALOGD("_ZN5dolby19AudioBufferProvider3setEP14audio_buffer_s() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_syn_init(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_syn_init() called");
    return 0;
}

/* Demangled: DLB_fft_CLfwd_unscaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLfwd_unscaledCL(void) {
    ALOGD("DLB_fft_CLfwd_unscaledCL() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::~Dap2Process() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2ProcessD1Ev(void) {
    ALOGD("_ZN5dolby11Dap2ProcessD1Ev() called");
    return 0;
}

/* Demangled: ddp_udc_int_abkd_copy */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_abkd_copy(void) {
    ALOGD("ddp_udc_int_abkd_copy() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sv_coefs_gen */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sv_coefs_gen(void) {
    ALOGD("DAP_CPDP_PVT_sv_coefs_gen() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_lfra_mfcc_filter_start_bins_table */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_lfra_mfcc_filter_start_bins_table = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L1024 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L1024 = NULL;

/* Demangled: dlb_fft_inv_usc_8 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_8(void) {
    ALOGD("dlb_fft_inv_usc_8() called");
    return 0;
}

/* Exported Object: ddp_udc_int_slowdec */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_slowdec = NULL;

/* Demangled: ddp_udc_int_fboar_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_fboar_init(void) {
    ALOGD("ddp_udc_int_fboar_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_coefs_find */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_coefs_find(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_coefs_find() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_volume_and_ieq_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_volume_and_ieq_process(void) {
    ALOGD("DAP_CPDP_PVT_volume_and_ieq_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfcc_flux_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_flux_reset(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_flux_reset() called");
    return 0;
}

/* Exported Object: ddp_udc_int_iPBTDPowerBandMapping */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_iPBTDPowerBandMapping = NULL;

/* Demangled: dlb_CLCLmix6CL12SU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLCLmix6CL12SU_flex(void) {
    ALOGD("dlb_CLCLmix6CL12SU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_60 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_60(void) {
    ALOGD("DLB_r4_inv_fft_60() called");
    return 0;
}

/* Demangled: ddp_udc_int_decorr_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_decorr_init(void) {
    ALOGD("ddp_udc_int_decorr_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_dimensional_trim_config_is_disabled */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_dimensional_trim_config_is_disabled(void) {
    ALOGD("ddp_udc_int_oamdi_dimensional_trim_config_is_disabled() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L1024 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L1024 = NULL;

/* Demangled: ddp_udc_int_dlb_bitbuf_peek */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_peek(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_peek() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_resi_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_resi_close(void) {
    ALOGD("DAP_CPDP_PVT_resi_close() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_calc_ring_pan */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_calc_ring_pan(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_calc_ring_pan() called");
    return 0;
}

/* Demangled: DLB_r4_fft_576 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_576(void) {
    ALOGD("DLB_r4_fft_576() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_to_bitstream */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_to_bitstream(void) {
    ALOGD("ddp_udc_int_oamdi_to_bitstream() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_rhythm_calc */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_rhythm_calc(void) {
    ALOGD("DAP_CPDP_PVT_sben_rhythm_calc() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ieq_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ieq_reset(void) {
    ALOGD("DAP_CPDP_PVT_ieq_reset() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_80 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_80(void) {
    ALOGD("dlb_fft_fwd_usc_80() called");
    return 0;
}

/* Exported Object: ddp_udc_int_A_ROOM_CONFIG_SPKS_HEIGHTS */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_A_ROOM_CONFIG_SPKS_HEIGHTS = NULL;

/* Demangled: DLB_r4_inv_fft_64 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_64(void) {
    ALOGD("DLB_r4_inv_fft_64() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_pre_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_pre_init(void) {
    ALOGD("DAP_CPDP_PVT_mi_pre_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_tsh_getcurrentiframemask */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsh_getcurrentiframemask(void) {
    ALOGD("ddp_udc_int_tsh_getcurrentiframemask() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::updateInputFormat() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process17updateInputFormatEv(void) {
    ALOGD("_ZN5dolby11Dap2Process17updateInputFormatEv() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv1_dsmpL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv1_dsmpL_flex(void) {
    ALOGD("dlb_blk_Liir2ssv1_dsmpL_flex() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_internal_chain_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_internal_chain_process(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_internal_chain_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_pre_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_pre_close(void) {
    ALOGD("DAP_CPDP_PVT_mi_pre_close() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_milib_set_legacy_enable */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_milib_set_legacy_enable(void) {
    ALOGD("DAP_CPDP_PVT_dlb_milib_set_legacy_enable() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L72 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L72 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L768 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L768 = NULL;

/* Demangled: DLB_blk_LnrrecipLU_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LnrrecipLU_setup(void) {
    ALOGD("DLB_blk_LnrrecipLU_setup() called");
    return 0;
}

/* Demangled: ddp_udc_int_bsod_rewind */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bsod_rewind(void) {
    ALOGD("ddp_udc_int_bsod_rewind() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_peek_long */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_peek_long(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_peek_long() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_apply_gains */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_apply_gains(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_apply_gains() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpspxstr */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpspxstr(void) {
    ALOGD("ddp_udc_int_unpspxstr() called");
    return 0;
}

/* Demangled: ddp_udc_int_dmxd_setup */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dmxd_setup(void) {
    ALOGD("ddp_udc_int_dmxd_setup() called");
    return 0;
}

/* Exported Object: ddp_udc_int_f2_num */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_f2_num = NULL;

/* Demangled: ddp_udc_int_convert_evod_status */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_convert_evod_status(void) {
    ALOGD("ddp_udc_int_convert_evod_status() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisL_close */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_close(void) {
    ALOGD("DLB_qmf_synthesisL_close() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_5D1D2 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_5D1D2 = NULL;

/* Exported Object: DAP_CPDP_PVT_A_LTRT3D_STATS_ALPHA_SR44KHZ1_BR256 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LTRT3D_STATS_ALPHA_SR44KHZ1_BR256 = NULL;

/* Exported Object: DAP_CPDP_PVT_SURROUND_COMPRESSOR_RECIP_DIFF_T_MIN_MAX_DB */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_SURROUND_COMPRESSOR_RECIP_DIFF_T_MIN_MAX_DB = NULL;

/* Demangled: DAP_CPDP_PVT_hdr_PinvcubrtP */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hdr_PinvcubrtP(void) {
    ALOGD("DAP_CPDP_PVT_hdr_PinvcubrtP() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_40 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_40(void) {
    ALOGD("dlb_fft_inv_scl_40() called");
    return 0;
}

/* Demangled: dlb_dct4_postmodulation_shl */
extern "C" __attribute__((visibility("default"))) int dlb_dct4_postmodulation_shl(void) {
    ALOGD("dlb_dct4_postmodulation_shl() called");
    return 0;
}

/* Demangled: ddp_udc_int_secd_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_secd_init(void) {
    ALOGD("ddp_udc_int_secd_init() called");
    return 0;
}

/* Demangled: dap_cpdp_mi2ieq_steering_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_mi2ieq_steering_enable_set(void) {
    ALOGD("dap_cpdp_mi2ieq_steering_enable_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sbpp_query_clip_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbpp_query_clip_mem(void) {
    ALOGD("DAP_CPDP_PVT_sbpp_query_clip_mem() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_get_peak */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_get_peak(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_get_peak() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_asa_event_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_asa_event_process(void) {
    ALOGD("DAP_CPDP_PVT_asa_event_process() called");
    return 0;
}

/* Exported Object: ddp_udc_int_gbl_ungrp11_opt */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_ungrp11_opt = NULL;

/* Demangled: ddp_udc_int_jocdec_pcm2qmf_input */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocdec_pcm2qmf_input(void) {
    ALOGD("ddp_udc_int_jocdec_pcm2qmf_input() called");
    return 0;
}

/* Demangled: DLB_vec_Labs_maxLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_Labs_maxLU_strict(void) {
    ALOGD("DLB_vec_Labs_maxLU_strict() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sone_buffer_channel_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sone_buffer_channel_init(void) {
    ALOGD("DAP_CPDP_PVT_sone_buffer_channel_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_delay_line_peek_indirect */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_delay_line_peek_indirect(void) {
    ALOGD("DAP_CPDP_PVT_delay_line_peek_indirect() called");
    return 0;
}

/* Demangled: ddpi_udc_init */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_init(void) {
    ALOGD("ddpi_udc_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamd_framer_last_update_sample */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamd_framer_last_update_sample(void) {
    ALOGD("ddp_udc_int_oamd_framer_last_update_sample() called");
    return 0;
}

/* Demangled: ddp_udc_int_point_panner_get_gains */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_point_panner_get_gains(void) {
    ALOGD("ddp_udc_int_point_panner_get_gains() called");
    return 0;
}

/* Demangled: dap_cpdp_query_scratch */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_query_scratch(void) {
    ALOGD("dap_cpdp_query_scratch() called");
    return 0;
}

/* Demangled: dlb_dctII_scaled */
extern "C" __attribute__((visibility("default"))) int dlb_dctII_scaled(void) {
    ALOGD("dlb_dctII_scaled() called");
    return 0;
}

/* Demangled: DLB_r4_fft_512_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_512_s(void) {
    ALOGD("DLB_r4_fft_512_s() called");
    return 0;
}

/* Exported Object: dlb_odd_fft_cplx_fwd_usc */
extern "C" __attribute__((visibility("default"))) void* dlb_odd_fft_cplx_fwd_usc = NULL;

/* Demangled: DAP_CPDP_PVT_visualizer_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_visualizer_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_visualizer_query_memory() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_320 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_320(void) {
    ALOGD("DLB_r4_inv_fft_320() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_45 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_45(void) {
    ALOGD("dlb_fft_inv_scl_45() called");
    return 0;
}

/* Demangled: ddp_udc_int_channel_remap_split_ms */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_channel_remap_split_ms(void) {
    ALOGD("ddp_udc_int_channel_remap_split_ms() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_7D1_TO_7D1D2 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_7D1_TO_7D1D2 = NULL;

/* Demangled: dlb_blk_LdelayU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LdelayU_flex(void) {
    ALOGD("dlb_blk_LdelayU_flex() called");
    return 0;
}

/* Demangled: dlb_vec_LshlLIU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LshlLIU_flex(void) {
    ALOGD("dlb_vec_LshlLIU_flex() called");
    return 0;
}

/* Demangled: ddp_udc_int_ahtd_unpmants */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ahtd_unpmants(void) {
    ALOGD("ddp_udc_int_ahtd_unpmants() called");
    return 0;
}

/* Demangled: ddp_udc_int_tsh_advancehistory */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsh_advancehistory(void) {
    ALOGD("ddp_udc_int_tsh_advancehistory() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_set_pgm_bnd_frm_cnt */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_set_pgm_bnd_frm_cnt(void) {
    ALOGD("ddp_udc_int_dil_set_pgm_bnd_frm_cnt() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_rs_clear_state */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_rs_clear_state(void) {
    ALOGD("DAP_CPDP_PVT_rs_clear_state() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L30_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L30_1 = NULL;

/* Demangled: ddpi_udc_query */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_query(void) {
    ALOGD("ddpi_udc_query() called");
    return 0;
}

/* Demangled: ddp_udc_int_mtxd_copy */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mtxd_copy(void) {
    ALOGD("ddp_udc_int_mtxd_copy() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_get_limiter_gain */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_get_limiter_gain(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_get_limiter_gain() called");
    return 0;
}

/* Demangled: DLB_r4_rfft_nn */
extern "C" __attribute__((visibility("default"))) int DLB_r4_rfft_nn(void) {
    ALOGD("DLB_r4_rfft_nn() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L30_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L30_2 = NULL;

/* Demangled: dlb_fft_inv_scl_48 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_48(void) {
    ALOGD("dlb_fft_inv_scl_48() called");
    return 0;
}

/* Demangled: ddp_udc_int_fboar_query_scratch */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_fboar_query_scratch(void) {
    ALOGD("ddp_udc_int_fboar_query_scratch() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_192 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_192(void) {
    ALOGD("dlb_fft_fwd_usc_192() called");
    return 0;
}

/* Demangled: ddp_udc_int_calcsbndsumsq */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_calcsbndsumsq(void) {
    ALOGD("ddp_udc_int_calcsbndsumsq() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_ddp_pan_RIGHT_RSUR_5_1 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_ddp_pan_RIGHT_RSUR_5_1 = NULL;

/* Demangled: ddp_udc_int_oamdi_set_has_oa_element_dimensional_trim */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_set_has_oa_element_dimensional_trim(void) {
    ALOGD("ddp_udc_int_oamdi_set_has_oa_element_dimensional_trim() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_stats_post_run4 */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_stats_post_run4(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_stats_post_run4() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_20_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_20_s(void) {
    ALOGD("DLB_r4_inv_fft_20_s() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_ap_dvlim_coefs_256 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_ap_dvlim_coefs_256 = NULL;

/* Demangled: ddpi_udc_addbytes */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_addbytes(void) {
    ALOGD("ddpi_udc_addbytes() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_lib_ver */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_lib_ver(void) {
    ALOGD("ddp_udc_int_oamdi_get_lib_ver() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_12 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_12(void) {
    ALOGD("dlb_fft_inv_usc_12() called");
    return 0;
}

/* Demangled: ddp_udc_int_ifft_td */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ifft_td(void) {
    ALOGD("ddp_udc_int_ifft_td() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hp_height_reverb_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hp_height_reverb_reset(void) {
    ALOGD("DAP_CPDP_PVT_hp_height_reverb_reset() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_init_smoothed_gain */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_init_smoothed_gain(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_init_smoothed_gain() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_144 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_144(void) {
    ALOGD("dlb_fft_fwd_scl_144() called");
    return 0;
}

/* Demangled: ddp_udc_int_dmxd_sysinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dmxd_sysinit(void) {
    ALOGD("ddp_udc_int_dmxd_sysinit() called");
    return 0;
}

/* Demangled: ddp_udc_int_oarq_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oarq_process(void) {
    ALOGD("ddp_udc_int_oarq_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_resample_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_resample_init(void) {
    ALOGD("DAP_CPDP_PVT_resample_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_exmd_denorm_no_applygain */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_exmd_denorm_no_applygain(void) {
    ALOGD("ddp_udc_int_exmd_denorm_no_applygain() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_brw_skip */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_brw_skip(void) {
    ALOGD("ddp_udc_int_evo_brw_skip() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_sub_band_idx_tbl */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_sub_band_idx_tbl = NULL;

/* Exported Object: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_TAB_44K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_TAB_44K = NULL;

/* Demangled: DLB_blk_Lattack_decay_iir1L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_iir1L_strict(void) {
    ALOGD("DLB_blk_Lattack_decay_iir1L_strict() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_15 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_15(void) {
    ALOGD("dlb_fft_inv_usc_15() called");
    return 0;
}

/* Demangled: ddp_udc_int_joc_dec_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_joc_dec_process(void) {
    ALOGD("ddp_udc_int_joc_dec_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_steering_get_segment */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_steering_get_segment(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_steering_get_segment() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_16 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_16(void) {
    ALOGD("dlb_fft_inv_usc_16() called");
    return 0;
}

/* Demangled: ddp_udc_int_processbnds */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_processbnds(void) {
    ALOGD("ddp_udc_int_processbnds() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_7D1D2 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_7D1D2 = NULL;

/* Demangled: DAP_CPDP_PVT_trans_downmix_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_trans_downmix_process(void) {
    ALOGD("DAP_CPDP_PVT_trans_downmix_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L12_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L12_1 = NULL;

/* Demangled: ddp_udc_int_evo_query_mem */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_query_mem(void) {
    ALOGD("ddp_udc_int_evo_query_mem() called");
    return 0;
}

/* Exported Object: ddp_udc_int_huff_tree_coarse_coeff_sparse */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_huff_tree_coarse_coeff_sparse = NULL;

/* Demangled: ddp_udc_int_evo_ll_remove_tail */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_ll_remove_tail(void) {
    ALOGD("ddp_udc_int_evo_ll_remove_tail() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_AA_COMPR_COEFS_OFFSETS_44K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_AA_COMPR_COEFS_OFFSETS_44K = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L12_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L12_2 = NULL;

/* Demangled: dlb_inverseModulationComplex */
extern "C" __attribute__((visibility("default"))) int dlb_inverseModulationComplex(void) {
    ALOGD("dlb_inverseModulationComplex() called");
    return 0;
}

/* Exported Object: ddp_udc_int_qntz11lev */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_qntz11lev = NULL;

/* Demangled: DAP_CPDP_PVT_dlb_milib_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_milib_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_dlb_milib_query_memory() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_AP_LDN_SL_INV_DIFFS */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_AP_LDN_SL_INV_DIFFS = NULL;

/* Demangled: ddp_udc_int_dmxd_clear */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dmxd_clear(void) {
    ALOGD("ddp_udc_int_dmxd_clear() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::SimpleSoftOMXComponent::BufferInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE = NULL;

/* Demangled: ddp_udc_int_oamdi_get_oa_element_bed_object */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_oa_element_bed_object(void) {
    ALOGD("ddp_udc_int_oamdi_get_oa_element_bed_object() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_ERBBandStart */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_ERBBandStart = NULL;

/* Demangled: DAP_CPDP_PVT_mi_vec_log2 */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_log2(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_log2() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_ap_dvlim_coefs_64 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_ap_dvlim_coefs_64 = NULL;

/* Exported Object: DAP_CPDP_PVT_P_VISUALIZER_COEF_32K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_P_VISUALIZER_COEF_32K = NULL;

/* Demangled: dlb_fft_inv_usc_120 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_120(void) {
    ALOGD("dlb_fft_inv_usc_120() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::processQmf(clvec_buffer*, dolby::BufferProvider*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process10processQmfEP12clvec_bufferPNS_14BufferProviderEi(void) {
    ALOGD("_ZN5dolby11Dap2Process10processQmfEP12clvec_bufferPNS_14BufferProviderEi() called");
    return 0;
}

/* Demangled: ddp_udc_int_mapdecbufs */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mapdecbufs(void) {
    ALOGD("ddp_udc_int_mapdecbufs() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_agc_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_agc_process(void) {
    ALOGD("DAP_CPDP_PVT_agc_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L96_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L96_1 = NULL;

/* Demangled: ddp_udc_int_gainranging */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_gainranging(void) {
    ALOGD("ddp_udc_int_gainranging() called");
    return 0;
}

/* Demangled: dap_cpdp_bass_mbdrc_tuning_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_bass_mbdrc_tuning_set(void) {
    ALOGD("dap_cpdp_bass_mbdrc_tuning_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_interp_boolean_test */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_interp_boolean_test(void) {
    ALOGD("DAP_CPDP_PVT_dap_interp_boolean_test() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L96_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L96_2 = NULL;

/* Demangled: android::DDPDecoder::~DDPDecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoderD1Ev(void) {
    ALOGD("_ZN7android10DDPDecoderD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::DDPDecoder::DolbyMediaBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10DDPDecoder16DolbyMediaBufferE = NULL;

/* Demangled: ddp_udc_int_evo_filter_payload_id */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_filter_payload_id(void) {
    ALOGD("ddp_udc_int_evo_filter_payload_id() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_volume_and_ieq_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_volume_and_ieq_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_volume_and_ieq_query_memory() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L45_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L45_1 = NULL;

/* Demangled: DLB_r4_inv_fft_72 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_72(void) {
    ALOGD("DLB_r4_inv_fft_72() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_384 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_384(void) {
    ALOGD("dlb_fft_fwd_scl_384() called");
    return 0;
}

/* Demangled: ddp_udc_int_inversedct */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_inversedct(void) {
    ALOGD("ddp_udc_int_inversedct() called");
    return 0;
}

/* Demangled: dap_cpdp_virtual_bass_subgains_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtual_bass_subgains_set(void) {
    ALOGD("dap_cpdp_virtual_bass_subgains_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_steering_table_get_segment_from_idx */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_steering_table_get_segment_from_idx(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_steering_table_get_segment_from_idx() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L45_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L45_2 = NULL;

/* Demangled: dlb_fft_fwd_usc_90 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_90(void) {
    ALOGD("dlb_fft_fwd_usc_90() called");
    return 0;
}

/* Demangled: DLB_load_CLqmf_analysisL_filter_stateL */
extern "C" __attribute__((visibility("default"))) int DLB_load_CLqmf_analysisL_filter_stateL(void) {
    ALOGD("DLB_load_CLqmf_analysisL_filter_stateL() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_visualizer_custom_bands_update */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_visualizer_custom_bands_update(void) {
    ALOGD("DAP_CPDP_PVT_visualizer_custom_bands_update() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L256_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L256_cos = NULL;

/* Exported Object: ddp_udc_int_pliisurmixtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_pliisurmixtab = NULL;

/* Demangled: DAP_CPDP_PVT_feature_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_feature_process(void) {
    ALOGD("DAP_CPDP_PVT_feature_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_gain_calc_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_gain_calc_init(void) {
    ALOGD("DAP_CPDP_PVT_gain_calc_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L512 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L512 = NULL;

/* Exported Object: ddp_udc_int_afm_expstrtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_afm_expstrtab = NULL;

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_ana_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_ana_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_delay_line_write_indirect */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_delay_line_write_indirect(void) {
    ALOGD("DAP_CPDP_PVT_delay_line_write_indirect() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_milib_get_version_info */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_milib_get_version_info(void) {
    ALOGD("DAP_CPDP_PVT_dlb_milib_get_version_info() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L384_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L384_1 = NULL;

/* Exported Object: ddp_udc_int_vq_tables */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_vq_tables = NULL;

/* Demangled: ddp_udc_int_decorr_query_static_mem */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_decorr_query_static_mem(void) {
    ALOGD("ddp_udc_int_decorr_query_static_mem() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1_shlLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1_shlLU_strict(void) {
    ALOGD("DLB_blk_Liir1_shlLU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L384_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L384_2 = NULL;

/* Demangled: dlb_fft_inv_usc_128 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_128(void) {
    ALOGD("dlb_fft_inv_usc_128() called");
    return 0;
}

/* Demangled: ddp_udc_int_bct_cntddfrmaudblkbits_nocpl */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bct_cntddfrmaudblkbits_nocpl(void) {
    ALOGD("ddp_udc_int_bct_cntddfrmaudblkbits_nocpl() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_process(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_process() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_96 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_96(void) {
    ALOGD("dlb_fft_fwd_usc_96() called");
    return 0;
}

/* Demangled: ddp_udc_int_chnd_decspx */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_chnd_decspx(void) {
    ALOGD("ddp_udc_int_chnd_decspx() called");
    return 0;
}

/* Demangled: ddp_udc_int_FED_opendebug */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_FED_opendebug(void) {
    ALOGD("ddp_udc_int_FED_opendebug() called");
    return 0;
}

/* Exported Object: ddp_udc_int_DVLIM_ONE_OVER_256_L */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_DVLIM_ONE_OVER_256_L = NULL;

/* Demangled: DAP_CPDP_PVT_dap_cpdp_end_chain_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_end_chain_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_end_chain_query_memory() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_360 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_360(void) {
    ALOGD("dlb_fft_inv_usc_360() called");
    return 0;
}

/* Demangled: DLB_mfb_p10km_analysisL_query_scratch */
extern "C" __attribute__((visibility("default"))) int DLB_mfb_p10km_analysisL_query_scratch(void) {
    ALOGD("DLB_mfb_p10km_analysisL_query_scratch() called");
    return 0;
}

/* Demangled: DLB_time_lt */
extern "C" __attribute__((visibility("default"))) int DLB_time_lt(void) {
    ALOGD("DLB_time_lt() called");
    return 0;
}

/* Demangled: ddp_udc_int_mem_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mem_init(void) {
    ALOGD("ddp_udc_int_mem_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_write_bitstream */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_write_bitstream(void) {
    ALOGD("ddp_udc_int_evo_write_bitstream() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_sben_query_memory() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_modified_cos_tab */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_modified_cos_tab = NULL;

/* Exported Object: ddp_udc_int_gbl_frmsizetab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_frmsizetab = NULL;

/* Demangled: dap_cpdp_virtual_bass_harmgains_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtual_bass_harmgains_set(void) {
    ALOGD("dap_cpdp_virtual_bass_harmgains_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_chroma_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_chroma_reset(void) {
    ALOGD("DAP_CPDP_PVT_chroma_reset() called");
    return 0;
}

/* Demangled: ddp_udc_int_bct_cntddfrmbsibits */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bct_cntddfrmbsibits(void) {
    ALOGD("ddp_udc_int_bct_cntddfrmbsibits() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_powmin_get_new_pow_min_mi_mcra */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_powmin_get_new_pow_min_mi_mcra(void) {
    ALOGD("DAP_CPDP_PVT_de_powmin_get_new_pow_min_mi_mcra() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L144 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L144 = NULL;

/* Demangled: ddp_udc_int_ph90_qmf_query_mem */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ph90_qmf_query_mem(void) {
    ALOGD("ddp_udc_int_ph90_qmf_query_mem() called");
    return 0;
}

/* Demangled: ddp_udc_int_sha256_get_digest */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_sha256_get_digest(void) {
    ALOGD("ddp_udc_int_sha256_get_digest() called");
    return 0;
}

/* Demangled: ddp_udc_int_bed_mixer_program_set */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bed_mixer_program_set(void) {
    ALOGD("ddp_udc_int_bed_mixer_program_set() called");
    return 0;
}

/* Demangled: DLB_CLcopyCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLcopyCLU_strict(void) {
    ALOGD("DLB_CLcopyCLU_strict() called");
    return 0;
}

/* Demangled: android::DDPDecoder::internalSetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoder20internalSetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android10DDPDecoder20internalSetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: ddp_udc_int_ddpi_fmi_checkframe */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ddpi_fmi_checkframe(void) {
    ALOGD("ddp_udc_int_ddpi_fmi_checkframe() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L90 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L90 = NULL;

/* Demangled: ddp_udc_int_tsid_sysreset */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsid_sysreset(void) {
    ALOGD("ddp_udc_int_tsid_sysreset() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LTRT3D_DELAYATTEN_SR48KHZ */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LTRT3D_DELAYATTEN_SR48KHZ = NULL;

/* Exported Object: ddp_udc_int_DVLIM_ONE_OVER_256_S */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_DVLIM_ONE_OVER_256_S = NULL;

/* Demangled: DAP_CPDP_PVT_spec_flux_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_spec_flux_reset(void) {
    ALOGD("DAP_CPDP_PVT_spec_flux_reset() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlaL */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlaL(void) {
    ALOGD("DLB_blk_Lmix_shlaL() called");
    return 0;
}

/* Demangled: dlb_CLshlCLUU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLshlCLUU_flex(void) {
    ALOGD("dlb_CLshlCLUU_flex() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_set_sample_rate */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_set_sample_rate(void) {
    ALOGD("ddp_udc_int_dvlim_set_sample_rate() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_isf_bh_7_5_3_0_decode */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_isf_bh_7_5_3_0_decode = NULL;

/* Demangled: DAP_CPDP_PVT_virtual_bass_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_close(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_close() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_surround_compressor_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_surround_compressor_process(void) {
    ALOGD("DAP_CPDP_PVT_surround_compressor_process() called");
    return 0;
}

/* Demangled: dlb_blk_LclipL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LclipL_flex(void) {
    ALOGD("dlb_blk_LclipL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L240 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L240 = NULL;

/* Demangled: DLB_qmf_synthesisL_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_get_delay(void) {
    ALOGD("DLB_qmf_synthesisL_get_delay() called");
    return 0;
}

/* Exported Object: wav2bc_chidmap */
extern "C" __attribute__((visibility("default"))) void* wav2bc_chidmap = NULL;

/* Demangled: dap_cpdp_de_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_de_enable_set(void) {
    ALOGD("dap_cpdp_de_enable_set() called");
    return 0;
}

/* Demangled: dap_cpdp_graphic_equalizer_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_graphic_equalizer_enable_set(void) {
    ALOGD("dap_cpdp_graphic_equalizer_enable_set() called");
    return 0;
}

/* Demangled: dolby::DlbBufferProvider::~DlbBufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17DlbBufferProviderD2Ev(void) {
    ALOGD("_ZN5dolby17DlbBufferProviderD2Ev() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_powmin_state_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_powmin_state_init(void) {
    ALOGD("DAP_CPDP_PVT_de_powmin_state_init() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_20 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_20(void) {
    ALOGD("dlb_fft_inv_usc_20() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisS_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisS_query_mem(void) {
    ALOGD("DLB_qmf_analysisS_query_mem() called");
    return 0;
}

/* Demangled: ddp_udc_int_hmac_sha256_calculate_digest_stride */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_hmac_sha256_calculate_digest_stride(void) {
    ALOGD("ddp_udc_int_hmac_sha256_calculate_digest_stride() called");
    return 0;
}

/* Demangled: DLB_r4_fft_8_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_8_s(void) {
    ALOGD("DLB_r4_fft_8_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_cb_get_wr_ptr */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_cb_get_wr_ptr(void) {
    ALOGD("ddp_udc_int_evo_cb_get_wr_ptr() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_bass_extraction_update_control */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_bass_extraction_update_control(void) {
    ALOGD("dap_cpdp_pvt_bass_extraction_update_control() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_legq_clip_gains */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_legq_clip_gains(void) {
    ALOGD("DAP_CPDP_PVT_legq_clip_gains() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_process_legacy_twiddle */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_ana_process_legacy_twiddle(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_ana_process_legacy_twiddle() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L96 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L96 = NULL;

/* Demangled: ddp_udc_int_apply_prog_assign */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_apply_prog_assign(void) {
    ALOGD("ddp_udc_int_apply_prog_assign() called");
    return 0;
}

/* Demangled: DLB_blk_LnrrecipLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LnrrecipLU_strict(void) {
    ALOGD("DLB_blk_LnrrecipLU_strict() called");
    return 0;
}

/* Demangled: ddp_udc_int_size_config_exp_virtual_source_addition_law */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_size_config_exp_virtual_source_addition_law(void) {
    ALOGD("ddp_udc_int_size_config_exp_virtual_source_addition_law() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_1024_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_1024_s(void) {
    ALOGD("DLB_r4_inv_fft_1024_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_24 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_24(void) {
    ALOGD("dlb_fft_inv_usc_24() called");
    return 0;
}

/* Demangled: ddp_udc_int_secd_reprocess_input */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_secd_reprocess_input(void) {
    ALOGD("ddp_udc_int_secd_reprocess_input() called");
    return 0;
}

/* Demangled: ddp_udc_int_decorr_exm_stationarity_control */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_decorr_exm_stationarity_control(void) {
    ALOGD("ddp_udc_int_decorr_exm_stationarity_control() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_round_from_Q15_away_from_half */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_round_from_Q15_away_from_half(void) {
    ALOGD("ddp_udc_int_oamdi_round_from_Q15_away_from_half() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_syn_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_syn_query_scratch() called");
    return 0;
}

/* Demangled: DLB_blk_Lcrossfade_gainLS_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lcrossfade_gainLS_setup(void) {
    ALOGD("DLB_blk_Lcrossfade_gainLS_setup() called");
    return 0;
}

/* Demangled: _dlb_ldct2_unscaled_iplu */
extern "C" __attribute__((visibility("default"))) int _dlb_ldct2_unscaled_iplu(void) {
    ALOGD("_dlb_ldct2_unscaled_iplu() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L384 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L384 = NULL;

/* Demangled: ddp_udc_int_cpld_blkinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_cpld_blkinit(void) {
    ALOGD("ddp_udc_int_cpld_blkinit() called");
    return 0;
}

/* Demangled: ddp_udc_int_ecpd_calchelpvars */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ecpd_calchelpvars(void) {
    ALOGD("ddp_udc_int_ecpd_calchelpvars() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_calc_variable_bits_max */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_calc_variable_bits_max(void) {
    ALOGD("ddp_udc_int_oamdi_calc_variable_bits_max() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::updateOutputMode() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process16updateOutputModeEv(void) {
    ALOGD("_ZN5dolby11Dap2Process16updateOutputModeEv() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIjE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: DLB_blk_LmixL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixL_strict(void) {
    ALOGD("DLB_blk_LmixL_strict() called");
    return 0;
}

/* Demangled: initsubparams */
extern "C" __attribute__((visibility("default"))) int initsubparams(void) {
    ALOGD("initsubparams() called");
    return 0;
}

/* Demangled: dolby::BufferSink::consume(dolby::BufferSource&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10BufferSink7consumeERNS_12BufferSourceEi(void) {
    ALOGD("_ZN5dolby10BufferSink7consumeERNS_12BufferSourceEi() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sbpp_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbpp_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_sbpp_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_compressor_calcscale */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_compressor_calcscale(void) {
    ALOGD("DAP_CPDP_PVT_compressor_calcscale() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_legq_apply_hcqmf_scale_gain_inplace_4 */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_legq_apply_hcqmf_scale_gain_inplace_4(void) {
    ALOGD("DAP_CPDP_PVT_legq_apply_hcqmf_scale_gain_inplace_4() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_120_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_120_s(void) {
    ALOGD("DLB_r4_inv_fft_120_s() called");
    return 0;
}

/* Exported Object: dlb_cos_8_ast_mini_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_8_ast_mini_twiddle = NULL;

/* Demangled: ddp_udc_int_notchbndend */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_notchbndend(void) {
    ALOGD("ddp_udc_int_notchbndend() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_get_md_validity_md_set */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_get_md_validity_md_set(void) {
    ALOGD("ddp_udc_int_evo_get_md_validity_md_set() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_ll_insert */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_ll_insert(void) {
    ALOGD("ddp_udc_int_evo_ll_insert() called");
    return 0;
}

/* Demangled: ddp_udc_int_BED_open */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_BED_open(void) {
    ALOGD("ddp_udc_int_BED_open() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_object_divergence_from_lr_c_db */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_object_divergence_from_lr_c_db(void) {
    ALOGD("ddp_udc_int_oamdi_object_divergence_from_lr_c_db() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::loadLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process11loadLicenseEv(void) {
    ALOGD("_ZN5dolby11Dap2Process11loadLicenseEv() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_init(void) {
    ALOGD("ddp_udc_int_dvlim_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_init(void) {
    ALOGD("DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_pvt_regulator_params_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_pvt_regulator_params_init(void) {
    ALOGD("DAP_CPDP_PVT_dap_pvt_regulator_params_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_chroma_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_chroma_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_chroma_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_surround_compressor_compute_gain */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_surround_compressor_compute_gain(void) {
    ALOGD("DAP_CPDP_PVT_surround_compressor_compute_gain() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1xL_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1xL_set_coef(void) {
    ALOGD("DLB_blk_Liir1xL_set_coef() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L480 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L480 = NULL;

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5CH1 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5CH1 = NULL;

/* Demangled: DAP_CPDP_PVT_dvlim_get_version */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_get_version(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_get_version() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_576 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_576(void) {
    ALOGD("DLB_r4_inv_fft_576() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_80 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_80(void) {
    ALOGD("DLB_r4_inv_fft_80() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_get_abs_pos */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_get_abs_pos(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_get_abs_pos() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC = NULL;

/* Demangled: DAP_CPDP_PVT_mi_buffer_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_buffer_reset(void) {
    ALOGD("DAP_CPDP_PVT_mi_buffer_reset() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_compr_set_amount */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_compr_set_amount(void) {
    ALOGD("DAP_CPDP_PVT_de_compr_set_amount() called");
    return 0;
}

/* Demangled: ddp_udc_int_chnd_lfeinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_chnd_lfeinit(void) {
    ALOGD("ddp_udc_int_chnd_lfeinit() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_spec_subband_reciprocal_hcqmf_tab */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_spec_subband_reciprocal_hcqmf_tab = NULL;

/* Demangled: DAP_CPDP_PVT_ldn_norm_log_sone_add */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ldn_norm_log_sone_add(void) {
    ALOGD("DAP_CPDP_PVT_ldn_norm_log_sone_add() called");
    return 0;
}

/* Demangled: DLB_blk_LsaddLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LsaddLL_strict(void) {
    ALOGD("DLB_blk_LsaddLL_strict() called");
    return 0;
}

/* Demangled: ddp_udc_int_processstereofrm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_processstereofrm(void) {
    ALOGD("ddp_udc_int_processstereofrm() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L720 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L720 = NULL;

/* Demangled: DLB_r4_inv_fft_1024 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_1024(void) {
    ALOGD("DLB_r4_inv_fft_1024() called");
    return 0;
}

/* Exported Object: ddp_udc_int_dnmixtabshift */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_dnmixtabshift = NULL;

/* Demangled: ddp_udc_int_oamdi_get_object_dialog_indication */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_object_dialog_indication(void) {
    ALOGD("ddp_udc_int_oamdi_get_object_dialog_indication() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hearing_protection_get_rms_avg_time_win_len */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_get_rms_avg_time_win_len(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_get_rms_avg_time_win_len() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hfra_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hfra_close(void) {
    ALOGD("DAP_CPDP_PVT_hfra_close() called");
    return 0;
}

/* Demangled: dap_cpdp_hearing_protection_attenuation_release_time_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_hearing_protection_attenuation_release_time_set(void) {
    ALOGD("dap_cpdp_hearing_protection_attenuation_release_time_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_volume_and_ieq_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_volume_and_ieq_init(void) {
    ALOGD("DAP_CPDP_PVT_volume_and_ieq_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L90 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L90 = NULL;

/* Demangled: DLB_r4_fft_120 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_120(void) {
    ALOGD("DLB_r4_fft_120() called");
    return 0;
}

/* Demangled: ddp_udc_int_get_huff_tree */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_get_huff_tree(void) {
    ALOGD("ddp_udc_int_get_huff_tree() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_scalar_avg_filter_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_scalar_avg_filter_init(void) {
    ALOGD("DAP_CPDP_PVT_dlb_scalar_avg_filter_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L288 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L288 = NULL;

/* Exported Object: dlb_fft_cplx_inv_usc */
extern "C" __attribute__((visibility("default"))) void* dlb_fft_cplx_inv_usc = NULL;

/* Exported Object: ddp_udc_int_huff_tree_5ch_pos_index_sparse */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_huff_tree_5ch_pos_index_sparse = NULL;

/* Demangled: ddp_udc_int_oamdi_get_obj_not_active */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_obj_not_active(void) {
    ALOGD("ddp_udc_int_oamdi_get_obj_not_active() called");
    return 0;
}

/* Demangled: dap_cpdp_audio_optimizer_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_audio_optimizer_enable_set(void) {
    ALOGD("dap_cpdp_audio_optimizer_enable_set() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_AGC_MIN */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_AGC_MIN = NULL;

/* Demangled: DLB_r4_inv_fft_2048 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_2048(void) {
    ALOGD("DLB_r4_inv_fft_2048() called");
    return 0;
}

/* Exported Object: DLB_MFB_P10KM_P4_319SC */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_P10KM_P4_319SC = NULL;

/* Demangled: DAP_CPDP_PVT_visualizer_custom_bands_compute */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_visualizer_custom_bands_compute(void) {
    ALOGD("DAP_CPDP_PVT_visualizer_custom_bands_compute() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sbpp_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbpp_reset(void) {
    ALOGD("DAP_CPDP_PVT_sbpp_reset() called");
    return 0;
}

/* Demangled: dlb_blk_Lmix_shlULL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmix_shlULL_flex(void) {
    ALOGD("dlb_blk_Lmix_shlULL_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_4096_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_4096_s(void) {
    ALOGD("DLB_r4_inv_fft_4096_s() called");
    return 0;
}

/* Demangled: dap_cpdp_calibration_boost_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_calibration_boost_set(void) {
    ALOGD("dap_cpdp_calibration_boost_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_query_memory() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_STEREO_TO_7D1DX */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_STEREO_TO_7D1DX = NULL;

/* Exported Object: DAP_CPDP_PVT_p_adaboost_hcqmf_model_tab */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_p_adaboost_hcqmf_model_tab = NULL;

/* Demangled: dlb_fft_inv_scl_60 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_60(void) {
    ALOGD("dlb_fft_inv_scl_60() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L192_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L192_cos = NULL;

/* Demangled: ddp_udc_int_dil_brw_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_brw_init(void) {
    ALOGD("ddp_udc_int_dil_brw_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_get_dv_noise_weight */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_get_dv_noise_weight(void) {
    ALOGD("DAP_CPDP_PVT_get_dv_noise_weight() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L96 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L96 = NULL;

/* Exported Object: DAP_CPDP_PVT_chroma_powspec_coef_tab */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_chroma_powspec_coef_tab = NULL;

/* Demangled: DAP_CPDP_PVT_lfra_clip_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lfra_clip_process(void) {
    ALOGD("DAP_CPDP_PVT_lfra_clip_process() called");
    return 0;
}

/* Demangled: DLB_vec_LshlLIU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LshlLIU_strict(void) {
    ALOGD("DLB_vec_LshlLIU_strict() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_init_hcqmf_3ch_decorr */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_init_hcqmf_3ch_decorr(void) {
    ALOGD("DAP_CPDP_PVT_init_hcqmf_3ch_decorr() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssefL_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssefL_setup(void) {
    ALOGD("DLB_blk_Liir2ssefL_setup() called");
    return 0;
}

/* Demangled: DLB_r4_fft_128 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_128(void) {
    ALOGD("DLB_r4_fft_128() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_320 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_320(void) {
    ALOGD("dlb_fft_inv_scl_320() called");
    return 0;
}

/* Demangled: DLB_mfb_p10km_analysisL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_mfb_p10km_analysisL_query_mem(void) {
    ALOGD("DLB_mfb_p10km_analysisL_query_mem() called");
    return 0;
}

/* Demangled: ddp_udc_int_mem_retain */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mem_retain(void) {
    ALOGD("ddp_udc_int_mem_retain() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_process(void) {
    ALOGD("DAP_CPDP_PVT_arle_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_feature_set_binaural_enable */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_feature_set_binaural_enable(void) {
    ALOGD("DAP_CPDP_PVT_feature_set_binaural_enable() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_64 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_64(void) {
    ALOGD("dlb_fft_inv_scl_64() called");
    return 0;
}

/* Demangled: dolby::BufferProvider::configure(audio_format_t, audio_channel_mask_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProvider9configureE14audio_format_t20audio_channel_mask_t(void) {
    ALOGD("_ZN5dolby14BufferProvider9configureE14audio_format_t20audio_channel_mask_t() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_TF_DB_TAB_32K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_TF_DB_TAB_32K = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L960 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L960 = NULL;

/* Demangled: ddp_udc_int_mntd_unp */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mntd_unp(void) {
    ALOGD("ddp_udc_int_mntd_unp() called");
    return 0;
}

/* Demangled: ddp_udc_int_room_config_disable_elevation */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_room_config_disable_elevation(void) {
    ALOGD("ddp_udc_int_room_config_disable_elevation() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::getParam(int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process8getParamEiPiS1_(void) {
    ALOGD("_ZN5dolby11Dap2Process8getParamEiPiS1_() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_icsc_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_icsc_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_icsc_query_scratch() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L2 = NULL;

/* Demangled: DLB_r4_inv_rfft_nn */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_rfft_nn(void) {
    ALOGD("DLB_r4_inv_rfft_nn() called");
    return 0;
}

/* Exported Object: ddp_udc_int_f2_den */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_f2_den = NULL;

/* Demangled: ddp_udc_int_omg_speaker_count_get */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_omg_speaker_count_get(void) {
    ALOGD("ddp_udc_int_omg_speaker_count_get() called");
    return 0;
}

/* Demangled: DLB_r4_fft_360 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_360(void) {
    ALOGD("DLB_r4_fft_360() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L180_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L180_cos = NULL;

/* Demangled: ddp_udc_int_notchbndstrt */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_notchbndstrt(void) {
    ALOGD("ddp_udc_int_notchbndstrt() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_VIRTUAL_BASS_MOD_SHIFT_NEG */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_VIRTUAL_BASS_MOD_SHIFT_NEG = NULL;

/* Demangled: DAP_CPDP_PVT_de_duck_state_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_duck_state_init(void) {
    ALOGD("DAP_CPDP_PVT_de_duck_state_init() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1L_set_coef(void) {
    ALOGD("DLB_blk_Liir1L_set_coef() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L4 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L4 = NULL;

/* Demangled: DLB_r4_inv_fft_240_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_240_s(void) {
    ALOGD("DLB_r4_inv_fft_240_s() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_32_vec_ana = NULL;

/* Demangled: ddpi_udc_setoutparam */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_setoutparam(void) {
    ALOGD("ddpi_udc_setoutparam() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_bass_mbdrc_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_bass_mbdrc_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_bass_mbdrc_query_memory() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_AA_COMPR_COEFS_SLOPES_32K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_AA_COMPR_COEFS_SLOPES_32K = NULL;

/* Demangled: dlb_fft_fwd_scl_160 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_160(void) {
    ALOGD("dlb_fft_fwd_scl_160() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L30_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L30_cos = NULL;

/* Demangled: DAP_CPDP_PVT_delay_line_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_delay_line_reset(void) {
    ALOGD("DAP_CPDP_PVT_delay_line_reset() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_ex_delay_run */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_ex_delay_run(void) {
    ALOGD("DAP_CPDP_PVT_dlb_ex_delay_run() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_30 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_30(void) {
    ALOGD("dlb_fft_inv_usc_30() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: ddp_udc_int_checkexpstr */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_checkexpstr(void) {
    ALOGD("ddp_udc_int_checkexpstr() called");
    return 0;
}

/* Demangled: dlb_blk_Lcrossfade_gainLS_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lcrossfade_gainLS_flex(void) {
    ALOGD("dlb_blk_Lcrossfade_gainLS_flex() called");
    return 0;
}

/* Exported Object: ddp_udc_int_bndnotchmanttab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_bndnotchmanttab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L8 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L8 = NULL;

/* Demangled: dlb_fft_inv_usc_32 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_32(void) {
    ALOGD("dlb_fft_inv_usc_32() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LDN_PF_AVG_EX_DB */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LDN_PF_AVG_EX_DB = NULL;

/* Demangled: DLB_blk_Lfir3L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir3L_set_coef(void) {
    ALOGD("DLB_blk_Lfir3L_set_coef() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L768 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L768 = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_8_vec_ana = NULL;

/* Exported Object: ddp_udc_int_gbl_ungrp11 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_ungrp11 = NULL;

/* Exported Object: ddp_udc_int_a_isf_bh_15_9_5_1_reorder */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_isf_bh_15_9_5_1_reorder = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L256 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L256 = NULL;

/* Demangled: dlb_CLmpy_shlCLSIU_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpy_shlCLSIU_inplace_flex(void) {
    ALOGD("dlb_CLmpy_shlCLSIU_inplace_flex() called");
    return 0;
}

/* Demangled: DLB_r4_fft_640_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_640_s(void) {
    ALOGD("DLB_r4_fft_640_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_36 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_36(void) {
    ALOGD("dlb_fft_inv_usc_36() called");
    return 0;
}

/* Demangled: dolby::DdpDynamicConfig::setProfileIndex(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DdpDynamicConfig15setProfileIndexEjb(void) {
    ALOGD("_ZN5dolby16DdpDynamicConfig15setProfileIndexEjb() called");
    return 0;
}

/* Demangled: ddp_udc_int_jocdec_get_version */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocdec_get_version(void) {
    ALOGD("ddp_udc_int_jocdec_get_version() called");
    return 0;
}

/* Demangled: dap_pvt_bass_mbdrc_param_init */
extern "C" __attribute__((visibility("default"))) int dap_pvt_bass_mbdrc_param_init(void) {
    ALOGD("dap_pvt_bass_mbdrc_param_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_processor_apply */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_processor_apply(void) {
    ALOGD("ddp_udc_int_processor_apply() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_verify */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_verify(void) {
    ALOGD("ddp_udc_int_dil_verify() called");
    return 0;
}

/* Exported Object: vtable for dolby::BufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby14BufferProviderE = NULL;

/* Demangled: DAP_CPDP_PVT_de_speech_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_speech_process(void) {
    ALOGD("DAP_CPDP_PVT_de_speech_process() called");
    return 0;
}

/* Exported Object: ddp_udc_int_bsid_acmod2chanmap_tbl */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_bsid_acmod2chanmap_tbl = NULL;

/* Demangled: ddp_udc_int_ecpd_decpamponly */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ecpd_decpamponly(void) {
    ALOGD("ddp_udc_int_ecpd_decpamponly() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_hiss_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_hiss_init(void) {
    ALOGD("DAP_CPDP_PVT_de_hiss_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_powmin_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_powmin_process(void) {
    ALOGD("DAP_CPDP_PVT_de_powmin_process() called");
    return 0;
}

/* Exported Object: ddp_udc_int_positive_remaptab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_positive_remaptab = NULL;

/* Demangled: ddp_udc_int_afmd_unp */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_afmd_unp(void) {
    ALOGD("ddp_udc_int_afmd_unp() called");
    return 0;
}

/* Exported Object: A_NGCS_UPMIX_PLAN_7CH1_TO_7CH1_CC */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_7CH1_TO_7CH1_CC = NULL;

/* Demangled: dlb_blk_Lconst_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lconst_flex(void) {
    ALOGD("dlb_blk_Lconst_flex() called");
    return 0;
}

/* Demangled: dlb_blk_delay_clear_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_delay_clear_flex(void) {
    ALOGD("dlb_blk_delay_clear_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L16_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L16_cos = NULL;

/* Demangled: ddp_udc_int_expd_unp */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_expd_unp(void) {
    ALOGD("ddp_udc_int_expd_unp() called");
    return 0;
}

/* Demangled: dlb_blk_LminLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LminLL_flex(void) {
    ALOGD("dlb_blk_LminLL_flex() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_16_vec_ana = NULL;

/* Exported Object: ddp_udc_int_dsp_latab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_dsp_latab = NULL;

/* Demangled: DAP_CPDP_PVT_sben_rap_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_rap_init(void) {
    ALOGD("DAP_CPDP_PVT_sben_rap_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_lvl_calc_drc_scale */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lvl_calc_drc_scale(void) {
    ALOGD("DAP_CPDP_PVT_lvl_calc_drc_scale() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_90 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_90(void) {
    ALOGD("DLB_r4_inv_fft_90() called");
    return 0;
}

/* Demangled: DLB_r4_rsplit_fft_nn */
extern "C" __attribute__((visibility("default"))) int DLB_r4_rsplit_fft_nn(void) {
    ALOGD("DLB_r4_rsplit_fft_nn() called");
    return 0;
}

/* Exported Object: ddp_udc_int_idct_kerneltab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_idct_kerneltab = NULL;

/* Demangled: ddp_udc_int_tentexps_seg */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tentexps_seg(void) {
    ALOGD("ddp_udc_int_tentexps_seg() called");
    return 0;
}

/* Demangled: ddp_udc_int_fed_decfrmblks */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_fed_decfrmblks(void) {
    ALOGD("ddp_udc_int_fed_decfrmblks() called");
    return 0;
}

/* Demangled: ddp_udc_int_tsh_estimatestreamtypeid */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsh_estimatestreamtypeid(void) {
    ALOGD("ddp_udc_int_tsh_estimatestreamtypeid() called");
    return 0;
}

/* Demangled: ddp_udc_int_bed_mixer_gains_get */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bed_mixer_gains_get(void) {
    ALOGD("ddp_udc_int_bed_mixer_gains_get() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_pvt_regulator_tuning_info_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_pvt_regulator_tuning_info_init(void) {
    ALOGD("DAP_CPDP_PVT_dap_pvt_regulator_tuning_info_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_axdd_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_axdd_init(void) {
    ALOGD("ddp_udc_int_axdd_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hist_add_element */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hist_add_element(void) {
    ALOGD("DAP_CPDP_PVT_hist_add_element() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LTRT3D_STATS_ALPHA_SR48KHZ_BR256 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LTRT3D_STATS_ALPHA_SR48KHZ_BR256 = NULL;

/* Exported Object: ddp_udc_int_jocdec_num_quant_steps_tab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_jocdec_num_quant_steps_tab = NULL;

/* Demangled: ddp_udc_int_speaker_config_add_speakers */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_speaker_config_add_speakers(void) {
    ALOGD("ddp_udc_int_speaker_config_add_speakers() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_write */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_write(void) {
    ALOGD("ddp_udc_int_dil_write() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_init(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_milib_set_binaural_enable */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_milib_set_binaural_enable(void) {
    ALOGD("DAP_CPDP_PVT_dlb_milib_set_binaural_enable() called");
    return 0;
}

/* Demangled: DLB_r4_fft_64_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_64_s(void) {
    ALOGD("DLB_r4_fft_64_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_640 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_640(void) {
    ALOGD("dlb_fft_fwd_scl_640() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_144 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_144(void) {
    ALOGD("dlb_fft_inv_usc_144() called");
    return 0;
}

/* Demangled: ddp_udc_int_bee_sysinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bee_sysinit(void) {
    ALOGD("ddp_udc_int_bee_sysinit() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_close */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_close(void) {
    ALOGD("ddp_udc_int_dil_close() called");
    return 0;
}

/* Exported Object: ddp_udc_int_window2 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_window2 = NULL;

/* Demangled: DAP_CPDP_PVT_log_smoothing_approximation2 */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_log_smoothing_approximation2(void) {
    ALOGD("DAP_CPDP_PVT_log_smoothing_approximation2() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_set_block_size */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_set_block_size(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_set_block_size() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_delay_line_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_delay_line_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_delay_line_query_memory() called");
    return 0;
}

/* Exported Object: ddp_udc_int_ecplampmanttab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_ecplampmanttab = NULL;

/* Demangled: ddp_udc_int_dil_set_pgm_bnd_frm_ofst */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_set_pgm_bnd_frm_ofst(void) {
    ALOGD("ddp_udc_int_dil_set_pgm_bnd_frm_ofst() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_log_smoothing_approximation3 */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_log_smoothing_approximation3(void) {
    ALOGD("DAP_CPDP_PVT_log_smoothing_approximation3() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfcc_clip_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_clip_process(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_clip_process() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_TAB_48K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_TAB_48K = NULL;

/* Exported Object: ddp_udc_int_a_isf_bh_7_3_0_0_decode */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_isf_bh_7_3_0_0_decode = NULL;

/* Demangled: DLB_r4_inv_fft_96 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_96(void) {
    ALOGD("DLB_r4_inv_fft_96() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_MFB_TWID128E */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_MFB_TWID128E = NULL;

/* Demangled: DLB_blk_LmixLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixLL_strict(void) {
    ALOGD("DLB_blk_LmixLL_strict() called");
    return 0;
}

/* Demangled: dlb_blk_LmixLLLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmixLLLL_flex(void) {
    ALOGD("dlb_blk_LmixLLLL_flex() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_16 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_16 = NULL;

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L320 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L320 = NULL;

/* Demangled: DLB_r4_inv_fft_360_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_360_s(void) {
    ALOGD("DLB_r4_inv_fft_360_s() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_4096 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_4096(void) {
    ALOGD("DLB_r4_inv_fft_4096() called");
    return 0;
}

/* Demangled: ddp_udc_int_jocdec_decode */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocdec_decode(void) {
    ALOGD("ddp_udc_int_jocdec_decode() called");
    return 0;
}

/* Exported Object: ddp_udc_int_huff_tree_fine_generic */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_huff_tree_fine_generic = NULL;

/* Demangled: ddp_udc_int_dvlim_init_smoothed_gain */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_init_smoothed_gain(void) {
    ALOGD("ddp_udc_int_dvlim_init_smoothed_gain() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_write_payload */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_write_payload(void) {
    ALOGD("ddp_udc_int_evo_write_payload() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, int const*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPKiEEEE = NULL;

/* Demangled: dap_cpdp_volume_leveler_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_volume_leveler_enable_set(void) {
    ALOGD("dap_cpdp_volume_leveler_enable_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sv_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sv_init(void) {
    ALOGD("DAP_CPDP_PVT_sv_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_leveler_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_leveler_init(void) {
    ALOGD("DAP_CPDP_PVT_leveler_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_write_long */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_write_long(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_write_long() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_generate_hash_md_set */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_generate_hash_md_set(void) {
    ALOGD("ddp_udc_int_evo_generate_hash_md_set() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_prog_assign_check_num_objs */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_prog_assign_check_num_objs(void) {
    ALOGD("ddp_udc_int_oamdi_prog_assign_check_num_objs() called");
    return 0;
}

/* Demangled: dap_cpdp_complex_equalizer_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_complex_equalizer_enable_set(void) {
    ALOGD("dap_cpdp_complex_equalizer_enable_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_acorr_frame_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_acorr_frame_process(void) {
    ALOGD("DAP_CPDP_PVT_acorr_frame_process() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_288_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_288_s(void) {
    ALOGD("DLB_r4_inv_fft_288_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_72 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_72(void) {
    ALOGD("dlb_fft_inv_scl_72() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hp_height_fdn_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hp_height_fdn_process(void) {
    ALOGD("DAP_CPDP_PVT_hp_height_fdn_process() called");
    return 0;
}

/* Exported Object: ddp_udc_int_qntz7lev */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_qntz7lev = NULL;

/* Demangled: DAP_CPDP_PVT_sben_rap_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_rap_reset(void) {
    ALOGD("DAP_CPDP_PVT_sben_rap_reset() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_384 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_384(void) {
    ALOGD("dlb_fft_inv_usc_384() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_reset_smoothed_gain */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_reset_smoothed_gain(void) {
    ALOGD("ddp_udc_int_dvlim_reset_smoothed_gain() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_brw_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_brw_init(void) {
    ALOGD("ddp_udc_int_evo_brw_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_data_bass_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_data_bass_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_data_bass_query_memory() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L1024_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L1024_1 = NULL;

/* Demangled: dolby::DlbBufferProvider::DlbBufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17DlbBufferProviderC2Ev(void) {
    ALOGD("_ZN5dolby17DlbBufferProviderC2Ev() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L1024_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L1024_2 = NULL;

/* Demangled: DLB_r4_inv_fft_8_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_8_s(void) {
    ALOGD("DLB_r4_inv_fft_8_s() called");
    return 0;
}

/* Demangled: DLB_time_sub */
extern "C" __attribute__((visibility("default"))) int DLB_time_sub(void) {
    ALOGD("DLB_time_sub() called");
    return 0;
}

/* Demangled: ddp_udc_int_decorr_open */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_decorr_open(void) {
    ALOGD("ddp_udc_int_decorr_open() called");
    return 0;
}

/* Exported Object: ddp_udc_int_ecpd_defecplbndstrc */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_ecpd_defecplbndstrc = NULL;

/* Demangled: DLB_blk_Lmix_shlULLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlULLL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlULLL_strict() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_40 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_40(void) {
    ALOGD("dlb_fft_inv_usc_40() called");
    return 0;
}

/* Exported Object: ddp_udc_int_valid_chan_configs */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_valid_chan_configs = NULL;

/* Demangled: DAP_CPDP_PVT_transposer_3rd_order */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_transposer_3rd_order(void) {
    ALOGD("DAP_CPDP_PVT_transposer_3rd_order() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L128_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L128_cos = NULL;

/* Demangled: ddp_udc_int_oamdi_truncate_from_Q15 */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_truncate_from_Q15(void) {
    ALOGD("ddp_udc_int_oamdi_truncate_from_Q15() called");
    return 0;
}

/* Exported Object: vtable for dolby::DlbBufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby17DlbBufferProviderE = NULL;

/* Demangled: DAP_CPDP_PVT_arle_smoothed_excitations_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_smoothed_excitations_init(void) {
    ALOGD("DAP_CPDP_PVT_arle_smoothed_excitations_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_pvt_bass_enhancer_update_control */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_pvt_bass_enhancer_update_control(void) {
    ALOGD("DAP_CPDP_PVT_dap_pvt_bass_enhancer_update_control() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hp_height_reverb_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hp_height_reverb_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_hp_height_reverb_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sv_clear_center_state */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sv_clear_center_state(void) {
    ALOGD("DAP_CPDP_PVT_sv_clear_center_state() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_vec_bubble_sort */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_bubble_sort(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_bubble_sort() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_spec_calc_set_binaural_enable */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_spec_calc_set_binaural_enable(void) {
    ALOGD("DAP_CPDP_PVT_spec_calc_set_binaural_enable() called");
    return 0;
}

/* Demangled: dlb_blk_Lmpy_shlLLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmpy_shlLLU_flex(void) {
    ALOGD("dlb_blk_Lmpy_shlLLU_flex() called");
    return 0;
}

/* Exported Object: dlb_cos_16_full */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_16_full = NULL;

/* Demangled: dlb_fft_inv_usc_45 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_45(void) {
    ALOGD("dlb_fft_inv_usc_45() called");
    return 0;
}

/* Exported Object: dlb_cos_64_full_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_64_full_twiddle = NULL;

/* Demangled: dap_cpdp_regulator_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_regulator_enable_set(void) {
    ALOGD("dap_cpdp_regulator_enable_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hist_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hist_init(void) {
    ALOGD("DAP_CPDP_PVT_hist_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_asa_noise_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_asa_noise_init(void) {
    ALOGD("DAP_CPDP_PVT_asa_noise_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_stereo_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_stereo_init(void) {
    ALOGD("DAP_CPDP_PVT_de_stereo_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_vec_fabs_max */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_fabs_max(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_fabs_max() called");
    return 0;
}

/* Exported Object: DAP_UPMIX_MODE_STEREO_TO_5D1D4_GAMING */
extern "C" __attribute__((visibility("default"))) void* DAP_UPMIX_MODE_STEREO_TO_5D1D4_GAMING = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L640 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L640 = NULL;

/* Demangled: ddp_udc_int_dvlim_update_smoothed_gain */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_update_smoothed_gain(void) {
    ALOGD("ddp_udc_int_dvlim_update_smoothed_gain() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_DUCK_THRESHOLDS_32K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DUCK_THRESHOLDS_32K = NULL;

/* Demangled: DAP_CPDP_PVT_ieq_calc_loudness */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ieq_calc_loudness(void) {
    ALOGD("DAP_CPDP_PVT_ieq_calc_loudness() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_DE_MCRA_WIN_DEPTH01 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DE_MCRA_WIN_DEPTH01 = NULL;

/* Demangled: dlb_fft_inv_usc_48 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_48(void) {
    ALOGD("dlb_fft_inv_usc_48() called");
    return 0;
}

/* Demangled: ddp_udc_int_frmd_ispresent */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_frmd_ispresent(void) {
    ALOGD("ddp_udc_int_frmd_ispresent() called");
    return 0;
}

/* Demangled: ddp_udc_int_converter_query_mem */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_converter_query_mem(void) {
    ALOGD("ddp_udc_int_converter_query_mem() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_virt_chain_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_virt_chain_close(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_virt_chain_close() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_stereo_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_stereo_process(void) {
    ALOGD("DAP_CPDP_PVT_de_stereo_process() called");
    return 0;
}

/* Demangled: dlb_blk_LLshuffleLL_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LLshuffleLL_inplace_flex(void) {
    ALOGD("dlb_blk_LLshuffleLL_inplace_flex() called");
    return 0;
}

/* Demangled: android::DDPDecoder::initPorts() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoder9initPortsEv(void) {
    ALOGD("_ZN7android10DDPDecoder9initPortsEv() called");
    return 0;
}

/* Demangled: ddp_udc_int_bsoe_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bsoe_init(void) {
    ALOGD("ddp_udc_int_bsoe_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_target */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_target(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_target() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_lvl_calc_release_accel */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lvl_calc_release_accel(void) {
    ALOGD("DAP_CPDP_PVT_lvl_calc_release_accel() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_stats_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_stats_reset(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_stats_reset() called");
    return 0;
}

/* Demangled: DLB_vec_Sabs_maxSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_Sabs_maxSU_strict(void) {
    ALOGD("DLB_vec_Sabs_maxSU_strict() called");
    return 0;
}

/* Demangled: dlb_CLaddCLCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLaddCLCLU_flex(void) {
    ALOGD("dlb_CLaddCLCLU_flex() called");
    return 0;
}

/* Demangled: ddpi_udc_processtimeslice */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_processtimeslice(void) {
    ALOGD("ddpi_udc_processtimeslice() called");
    return 0;
}

/* Demangled: ddp_udc_int_converter_close */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_converter_close(void) {
    ALOGD("ddp_udc_int_converter_close() called");
    return 0;
}

/* Demangled: dlb_vec_LsetLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LsetLU_flex(void) {
    ALOGD("dlb_vec_LsetLU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_480_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_480_s(void) {
    ALOGD("DLB_r4_inv_fft_480_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_576 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_576(void) {
    ALOGD("dlb_fft_inv_scl_576() called");
    return 0;
}

/* Demangled: ddp_udc_int_jocdec_prepare_pcm2qmf_input */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocdec_prepare_pcm2qmf_input(void) {
    ALOGD("ddp_udc_int_jocdec_prepare_pcm2qmf_input() called");
    return 0;
}

/* Demangled: dap_cpdp_system_gain_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_system_gain_set(void) {
    ALOGD("dap_cpdp_system_gain_set() called");
    return 0;
}

/* Demangled: dlb_dctII_unscaled */
extern "C" __attribute__((visibility("default"))) int dlb_dctII_unscaled(void) {
    ALOGD("dlb_dctII_unscaled() called");
    return 0;
}

/* Demangled: ddp_udc_int_bta_calcbaps */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bta_calcbaps(void) {
    ALOGD("ddp_udc_int_bta_calcbaps() called");
    return 0;
}

/* Demangled: ddpi_udc_open */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_open(void) {
    ALOGD("ddpi_udc_open() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_query_mem(void) {
    ALOGD("DLB_qmf_synthesisL_query_mem() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_asa_calculate_sldn_sone */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_asa_calculate_sldn_sone(void) {
    ALOGD("DAP_CPDP_PVT_asa_calculate_sldn_sone() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_internal_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_internal_reset(void) {
    ALOGD("DAP_CPDP_PVT_mi_internal_reset() called");
    return 0;
}

/* Demangled: DLB_blk_Lfir3L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir3L_setup(void) {
    ALOGD("DLB_blk_Lfir3L_setup() called");
    return 0;
}

/* Demangled: DLB_CLhybrid_analysisCL */
extern "C" __attribute__((visibility("default"))) int DLB_CLhybrid_analysisCL(void) {
    ALOGD("DLB_CLhybrid_analysisCL() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_compr_state_clear */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_compr_state_clear(void) {
    ALOGD("DAP_CPDP_PVT_de_compr_state_clear() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_cb_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_cb_init(void) {
    ALOGD("ddp_udc_int_evo_cb_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_obj_count */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_obj_count(void) {
    ALOGD("ddp_udc_int_oamdi_get_obj_count() called");
    return 0;
}

/* Demangled: DLB_CLmfb_p10km_analysisL_close */
extern "C" __attribute__((visibility("default"))) int DLB_CLmfb_p10km_analysisL_close(void) {
    ALOGD("DLB_CLmfb_p10km_analysisL_close() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_brw_read */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_brw_read(void) {
    ALOGD("ddp_udc_int_dil_brw_read() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_arle_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_diffuse_gains_init_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_diffuse_gains_init_scratch(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_diffuse_gains_init_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_get_deq_event_weight */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_get_deq_event_weight(void) {
    ALOGD("DAP_CPDP_PVT_get_deq_event_weight() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_120 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_120(void) {
    ALOGD("DLB_r4_inv_fft_120() called");
    return 0;
}

/* Demangled: ddp_udc_int_spxd_copy */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_spxd_copy(void) {
    ALOGD("ddp_udc_int_spxd_copy() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamd_framer_progress_time */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamd_framer_progress_time(void) {
    ALOGD("ddp_udc_int_oamd_framer_progress_time() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hearing_protection_set_rms_avg_time_win_len */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_set_rms_avg_time_win_len(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_set_rms_avg_time_win_len() called");
    return 0;
}

/* Exported Object: A_NGCS_UPMIX_PLAN_5CH1_TO_7D1D2 */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_5CH1_TO_7D1D2 = NULL;

/* Demangled: DAP_CPDP_PVT_sone_buffer_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sone_buffer_init(void) {
    ALOGD("DAP_CPDP_PVT_sone_buffer_init() called");
    return 0;
}

/* Demangled: dlb_forwardModulationComplex */
extern "C" __attribute__((visibility("default"))) int dlb_forwardModulationComplex(void) {
    ALOGD("dlb_forwardModulationComplex() called");
    return 0;
}

/* Demangled: DLB_fft_CLinv_unscaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLinv_unscaledCL(void) {
    ALOGD("DLB_fft_CLinv_unscaledCL() called");
    return 0;
}

/* Demangled: ddp_udc_int_evobh_pack */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evobh_pack(void) {
    ALOGD("ddp_udc_int_evobh_pack() called");
    return 0;
}

/* Demangled: ddp_udc_int_jocd_reset */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocd_reset(void) {
    ALOGD("ddp_udc_int_jocd_reset() called");
    return 0;
}

/* Demangled: ddp_udc_int_converter_simple_convert_input */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_converter_simple_convert_input(void) {
    ALOGD("ddp_udc_int_converter_simple_convert_input() called");
    return 0;
}

/* Exported Object: ddp_udc_int_fastgain */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_fastgain = NULL;

/* Demangled: DLB_r4_inv_fft_2048_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_2048_s(void) {
    ALOGD("DLB_r4_inv_fft_2048_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_getparamval */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_getparamval(void) {
    ALOGD("ddp_udc_int_getparamval() called");
    return 0;
}

/* Demangled: ddp_udc_int_updateblockinfo */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_updateblockinfo(void) {
    ALOGD("ddp_udc_int_updateblockinfo() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_get_md_validity_internal */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_get_md_validity_internal(void) {
    ALOGD("ddp_udc_int_evo_get_md_validity_internal() called");
    return 0;
}

/* Demangled: DLB_r4_fft_144 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_144(void) {
    ALOGD("DLB_r4_fft_144() called");
    return 0;
}

/* Demangled: ddp_udc_int_crc_calcfwd */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_crc_calcfwd(void) {
    ALOGD("ddp_udc_int_crc_calcfwd() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_query_mem */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_query_mem(void) {
    ALOGD("ddp_udc_int_oamdi_query_mem() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_attack_time */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_attack_time(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_attack_time() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_80 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_80(void) {
    ALOGD("dlb_fft_inv_scl_80() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_bass_mbdrc_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_bass_mbdrc_init(void) {
    ALOGD("DAP_CPDP_PVT_bass_mbdrc_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_interp_int_test */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_interp_int_test(void) {
    ALOGD("DAP_CPDP_PVT_dap_interp_int_test() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_release_time */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_release_time(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_release_time() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_128 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_128(void) {
    ALOGD("DLB_r4_inv_fft_128() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_get_sample_rate */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_get_sample_rate(void) {
    ALOGD("ddp_udc_int_dvlim_get_sample_rate() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_set_hp_render_mode */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_set_hp_render_mode(void) {
    ALOGD("ddp_udc_int_oamdi_set_hp_render_mode() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_div_table */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_div_table = NULL;

/* Demangled: DLB_blk_LabsL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LabsL_strict(void) {
    ALOGD("DLB_blk_LabsL_strict() called");
    return 0;
}

/* Demangled: DLB_blk_LsubLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LsubLL_strict(void) {
    ALOGD("DLB_blk_LsubLL_strict() called");
    return 0;
}

/* Exported Object: dlb_fft_cplx_fwd_usc */
extern "C" __attribute__((visibility("default"))) void* dlb_fft_cplx_fwd_usc = NULL;

/* Demangled: ddp_udc_int_parser_open */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_parser_open(void) {
    ALOGD("ddp_udc_int_parser_open() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_dimensional_trim_is_auto */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_dimensional_trim_is_auto(void) {
    ALOGD("ddp_udc_int_oamdi_dimensional_trim_is_auto() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_VIRTUAL_BASS_ANA_WINDOW */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_VIRTUAL_BASS_ANA_WINDOW = NULL;

/* Demangled: dlb_dctIII_scaled */
extern "C" __attribute__((visibility("default"))) int dlb_dctIII_scaled(void) {
    ALOGD("dlb_dctIII_scaled() called");
    return 0;
}

/* Demangled: ddp_udc_int_jocd_query_mem */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocd_query_mem(void) {
    ALOGD("ddp_udc_int_jocd_query_mem() called");
    return 0;
}

/* Demangled: ddp_udc_int_size_config_weight_along_axis */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_size_config_weight_along_axis(void) {
    ALOGD("ddp_udc_int_size_config_weight_along_axis() called");
    return 0;
}

/* Demangled: dap_cpdp_regulator_sibilance_suppress_amounts_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_regulator_sibilance_suppress_amounts_set(void) {
    ALOGD("dap_cpdp_regulator_sibilance_suppress_amounts_set() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_32_vec_syn = NULL;

/* Demangled: DAP_CPDP_PVT_volume_and_ieq_preset_init_copy */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_volume_and_ieq_preset_init_copy(void) {
    ALOGD("DAP_CPDP_PVT_volume_and_ieq_preset_init_copy() called");
    return 0;
}

/* Demangled: DLB_r4_fft_90_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_90_s(void) {
    ALOGD("DLB_r4_fft_90_s() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_360 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_360(void) {
    ALOGD("DLB_r4_inv_fft_360() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_modified_sin_tab */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_modified_sin_tab = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301 = NULL;

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: ddp_udc_int_frmd_encfrmid */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_frmd_encfrmid(void) {
    ALOGD("ddp_udc_int_frmd_encfrmid() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_bass_extraction_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_bass_extraction_process(void) {
    ALOGD("DAP_CPDP_PVT_bass_extraction_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_vec_mean_std */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_mean_std(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_mean_std() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1_shl_addLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1_shl_addLL_strict(void) {
    ALOGD("DLB_blk_Liir1_shl_addLL_strict() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hp_height_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hp_height_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_hp_height_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_shift_ex_avg_filter_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_shift_ex_avg_filter_init(void) {
    ALOGD("DAP_CPDP_PVT_dlb_shift_ex_avg_filter_init() called");
    return 0;
}

/* Demangled: DLB_r4_fft_576_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_576_s(void) {
    ALOGD("DLB_r4_fft_576_s() called");
    return 0;
}

/* Exported Object: ddp_udc_int_cmixtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_cmixtab = NULL;

/* Demangled: dolby::BufferProvider::setBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProvider9setBufferEPv(void) {
    ALOGD("_ZN5dolby14BufferProvider9setBufferEPv() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_180 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_180(void) {
    ALOGD("dlb_fft_fwd_scl_180() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_8_vec_syn = NULL;

/* Exported Object: ddp_udc_int_msmix_chanary */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_chanary = NULL;

/* Demangled: DAP_CPDP_PVT_arle_compressor_gains_update */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_compressor_gains_update(void) {
    ALOGD("DAP_CPDP_PVT_arle_compressor_gains_update() called");
    return 0;
}

/* Demangled: DLB_r4_fft_384 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_384(void) {
    ALOGD("DLB_r4_fft_384() called");
    return 0;
}

/* Exported Object: dlb_hyb_p8_13 */
extern "C" __attribute__((visibility("default"))) void* dlb_hyb_p8_13 = NULL;

/* Demangled: ddp_udc_int_tsid_selectprogram */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsid_selectprogram(void) {
    ALOGD("ddp_udc_int_tsid_selectprogram() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DAP_CPDP_NGCS_MEMORY_INFO */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_CPDP_NGCS_MEMORY_INFO = NULL;

/* Demangled: DAP_CPDP_PVT_dlb_milib_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_milib_process(void) {
    ALOGD("DAP_CPDP_PVT_dlb_milib_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L512_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L512_1 = NULL;

/* Demangled: ddp_udc_int_tsid_tsinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsid_tsinit(void) {
    ALOGD("ddp_udc_int_tsid_tsinit() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_close */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_close(void) {
    ALOGD("DLB_hybrid_analysisCL_close() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L512_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L512_2 = NULL;

/* Demangled: dlb_blk_LsubLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LsubLL_flex(void) {
    ALOGD("dlb_blk_LsubLL_flex() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::SimpleSoftOMXComponent::PortInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE = NULL;

/* Demangled: dolby::UdcAudioBufferProvider::set(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby22UdcAudioBufferProvider3setEPvi(void) {
    ALOGD("_ZN5dolby22UdcAudioBufferProvider3setEPvi() called");
    return 0;
}

/* Exported Object: ddp_udc_int_hth */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_hth = NULL;

/* Demangled: ddp_udc_int_ms_mixer_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ms_mixer_process(void) {
    ALOGD("ddp_udc_int_ms_mixer_process() called");
    return 0;
}

/* Demangled: ddp_udc_int_calccoefsclfctrs */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_calccoefsclfctrs(void) {
    ALOGD("ddp_udc_int_calccoefsclfctrs() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7CH1 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7CH1 = NULL;

/* Exported Object: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_TAB_48K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_TAB_48K = NULL;

/* Demangled: DLB_r4_fft_72_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_72_s(void) {
    ALOGD("DLB_r4_fft_72_s() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_non_reorder */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_non_reorder = NULL;

/* Demangled: DAP_CPDP_PVT_de_powmin_state_clear */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_powmin_state_clear(void) {
    ALOGD("DAP_CPDP_PVT_de_powmin_state_clear() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_buffer_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_buffer_init(void) {
    ALOGD("DAP_CPDP_PVT_mi_buffer_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_spec_calc_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_spec_calc_init(void) {
    ALOGD("DAP_CPDP_PVT_spec_calc_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_get_adaptive_virtualizer_amount_event_weight */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_get_adaptive_virtualizer_amount_event_weight(void) {
    ALOGD("DAP_CPDP_PVT_get_adaptive_virtualizer_amount_event_weight() called");
    return 0;
}

/* Demangled: DLB_blk_LmixLLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixLLL_strict(void) {
    ALOGD("DLB_blk_LmixLLL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L512 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L512 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L576 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L576 = NULL;

/* Exported Object: ddp_udc_int_dithscaletab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_dithscaletab = NULL;

/* Demangled: ddp_udc_int_oamd_framer_get_metadata */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamd_framer_get_metadata(void) {
    ALOGD("ddp_udc_int_oamd_framer_get_metadata() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_legq_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_legq_process(void) {
    ALOGD("DAP_CPDP_PVT_legq_process() called");
    return 0;
}

/* Demangled: DLB_Lqmf_synthesisCL_Head1Bit */
extern "C" __attribute__((visibility("default"))) int DLB_Lqmf_synthesisCL_Head1Bit(void) {
    ALOGD("DLB_Lqmf_synthesisCL_Head1Bit() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_vec_ana = NULL;

/* Demangled: ddp_udc_int_ddpi_fmi_getframeparam */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ddpi_fmi_getframeparam(void) {
    ALOGD("ddp_udc_int_ddpi_fmi_getframeparam() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hp_height_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hp_height_process(void) {
    ALOGD("DAP_CPDP_PVT_hp_height_process() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_AA_COMPR_COEFS_OFFSETS_48K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_AA_COMPR_COEFS_OFFSETS_48K = NULL;

/* Demangled: DAP_CPDP_PVT_dlb_milib_get_default_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_milib_get_default_init(void) {
    ALOGD("DAP_CPDP_PVT_dlb_milib_get_default_init() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv2L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv2L_flex(void) {
    ALOGD("dlb_blk_Liir2ssv2L_flex() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisL_get_filter_state_length */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_get_filter_state_length(void) {
    ALOGD("DLB_qmf_analysisL_get_filter_state_length() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_16_vec_syn = NULL;

/* Demangled: displaybanner */
extern "C" __attribute__((visibility("default"))) int displaybanner(void) {
    ALOGD("displaybanner() called");
    return 0;
}

/* Exported Object: ddp_udc_int_window2interleaved_f */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_window2interleaved_f = NULL;

/* Demangled: ddp_udc_int_tsh_recordframe */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsh_recordframe(void) {
    ALOGD("ddp_udc_int_tsh_recordframe() called");
    return 0;
}

/* Exported Object: ddp_udc_int_A_ROOM_CONFIG_SPKS_BACK_FULL */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_A_ROOM_CONFIG_SPKS_BACK_FULL = NULL;

/* Demangled: DAP_CPDP_PVT_lvl_configure_smoothing_params */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lvl_configure_smoothing_params(void) {
    ALOGD("DAP_CPDP_PVT_lvl_configure_smoothing_params() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hdr_Latan2PP */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hdr_Latan2PP(void) {
    ALOGD("DAP_CPDP_PVT_hdr_Latan2PP() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_leveler_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_leveler_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_leveler_query_memory() called");
    return 0;
}

/* Demangled: android::DDPDecoder::internalGetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoder20internalGetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android10DDPDecoder20internalGetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Exported Object: ddp_udc_int_f3_num */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_f3_num = NULL;

/* Exported Object: ddp_udc_int_gbl_lshftab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_lshftab = NULL;

/* Exported Object: ddp_udc_int_huff_tree_coarse_generic */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_huff_tree_coarse_generic = NULL;

/* Demangled: DAP_CPDP_PVT_reset_filters */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_reset_filters(void) {
    ALOGD("DAP_CPDP_PVT_reset_filters() called");
    return 0;
}

/* Demangled: dlb_blk_Lmix_shlUL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmix_shlUL_flex(void) {
    ALOGD("dlb_blk_Lmix_shlUL_flex() called");
    return 0;
}

/* Demangled: DLB_blk_delayL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_delayL_strict(void) {
    ALOGD("DLB_blk_delayL_strict() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_dvlim_win_32 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_dvlim_win_32 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L2 = NULL;

/* Demangled: dlb_fft_inv_usc_160 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_160(void) {
    ALOGD("dlb_fft_inv_usc_160() called");
    return 0;
}

/* Demangled: ddp_udc_int_mcv_sysinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mcv_sysinit(void) {
    ALOGD("ddp_udc_int_mcv_sysinit() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_set_abs_pos */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_set_abs_pos(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_set_abs_pos() called");
    return 0;
}

/* Demangled: dlb_blk_delay_setup_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_delay_setup_flex(void) {
    ALOGD("dlb_blk_delay_setup_flex() called");
    return 0;
}

/* Demangled: DLB_hybrid_synthesisCL_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_synthesisCL_get_delay(void) {
    ALOGD("DLB_hybrid_synthesisCL_get_delay() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_time_ge */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_time_ge(void) {
    ALOGD("ddp_udc_int_evo_time_ge() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_has_oa_element_bed_object */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_has_oa_element_bed_object(void) {
    ALOGD("ddp_udc_int_oamdi_has_oa_element_bed_object() called");
    return 0;
}

/* Demangled: DLB_blk_LLshuffleLL_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LLshuffleLL_inplace_strict(void) {
    ALOGD("DLB_blk_LLshuffleLL_inplace_strict() called");
    return 0;
}

/* Demangled: DLB_CLsubCLCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLsubCLCLU_strict(void) {
    ALOGD("DLB_CLsubCLCLU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L4 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L4 = NULL;

/* Demangled: dap_cpdp_bass_extraction_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_bass_extraction_enable_set(void) {
    ALOGD("dap_cpdp_bass_extraction_enable_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_lvl_constrain_drc_scale */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lvl_constrain_drc_scale(void) {
    ALOGD("DAP_CPDP_PVT_lvl_constrain_drc_scale() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_15_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_15_s(void) {
    ALOGD("DLB_r4_inv_fft_15_s() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_32 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_32 = NULL;

/* Demangled: DAP_CPDP_PVT_feature_query_clip_fea_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_feature_query_clip_fea_mem(void) {
    ALOGD("DAP_CPDP_PVT_feature_query_clip_fea_mem() called");
    return 0;
}

/* Demangled: dolby::AProcessor::getJocForceDownmixMode() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10AProcessor22getJocForceDownmixModeEv(void) {
    ALOGD("_ZN5dolby10AProcessor22getJocForceDownmixModeEv() called");
    return 0;
}

/* Demangled: ddp_udc_int_abkd_bapflginit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_abkd_bapflginit(void) {
    ALOGD("ddp_udc_int_abkd_bapflginit() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_upmixer_query_process_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_upmixer_query_process_scratch(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_upmixer_query_process_scratch() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L8 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L8 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L288_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L288_cos = NULL;

/* Demangled: ddp_udc_int_udc_strcat */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_udc_strcat(void) {
    ALOGD("ddp_udc_int_udc_strcat() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_pb_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_pb_init(void) {
    ALOGD("ddp_udc_int_evo_pb_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_process_symmetric */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_syn_process_symmetric(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_syn_process_symmetric() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L960_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L960_cos = NULL;

/* Demangled: ddpi_udc_close */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_close(void) {
    ALOGD("ddpi_udc_close() called");
    return 0;
}

/* Demangled: DLB_r4_inv_rfft_half_n */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_rfft_half_n(void) {
    ALOGD("DLB_r4_inv_rfft_half_n() called");
    return 0;
}

/* Demangled: ddpi_udc_get_evolution_mdat */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_get_evolution_mdat(void) {
    ALOGD("ddpi_udc_get_evolution_mdat() called");
    return 0;
}

/* Demangled: ddp_udc_int_speaker_config_count */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_speaker_config_count(void) {
    ALOGD("ddp_udc_int_speaker_config_count() called");
    return 0;
}

/* Demangled: dolby::DlbBufferProvider::~DlbBufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17DlbBufferProviderD0Ev(void) {
    ALOGD("_ZN5dolby17DlbBufferProviderD0Ev() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_brw_read */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_brw_read(void) {
    ALOGD("ddp_udc_int_evo_brw_read() called");
    return 0;
}

/* Demangled: DLB_r4_fft_6_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_6_s(void) {
    ALOGD("DLB_r4_fft_6_s() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L180 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L180 = NULL;

/* Demangled: dlb_fft_fwd_usc_240 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_240(void) {
    ALOGD("dlb_fft_fwd_usc_240() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_90 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_90(void) {
    ALOGD("dlb_fft_inv_scl_90() called");
    return 0;
}

/* Exported Object: ddp_udc_int_qntz3lev_opt */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_qntz3lev_opt = NULL;

/* Exported Object: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_COMP_ATTACK_ALPHA_TAB */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_COMP_ATTACK_ALPHA_TAB = NULL;

/* Demangled: DLB_r4_inv_fft_48_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_48_s(void) {
    ALOGD("DLB_r4_inv_fft_48_s() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_mask_ICC_subbandIdx */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_mask_ICC_subbandIdx = NULL;

/* Demangled: DLB_r4_fft_36_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_36_s(void) {
    ALOGD("DLB_r4_fft_36_s() called");
    return 0;
}

/* Demangled: ddpi_udc_get_licensetype */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_get_licensetype(void) {
    ALOGD("ddpi_udc_get_licensetype() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_MFB_TWID256E */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_MFB_TWID256E = NULL;

/* Demangled: dlb_blk_Lfir3L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lfir3L_flex(void) {
    ALOGD("dlb_blk_Lfir3L_flex() called");
    return 0;
}

/* Exported Object: ddp_udc_int_A_ROOM_CONFIG_SPKS_FULL */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_A_ROOM_CONFIG_SPKS_FULL = NULL;

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_process_legacy */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_syn_process_legacy(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_syn_process_legacy() called");
    return 0;
}

/* Demangled: ddp_udc_int_exmd_sysinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_exmd_sysinit(void) {
    ALOGD("ddp_udc_int_exmd_sysinit() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_time_gt */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_time_gt(void) {
    ALOGD("ddp_udc_int_evo_time_gt() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_scalar_avg_filter_run */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_scalar_avg_filter_run(void) {
    ALOGD("DAP_CPDP_PVT_dlb_scalar_avg_filter_run() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_get_block_size */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_get_block_size(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_get_block_size() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sv_get_cutoff_bins */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sv_get_cutoff_bins(void) {
    ALOGD("DAP_CPDP_PVT_sv_get_cutoff_bins() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_96 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_96(void) {
    ALOGD("dlb_fft_inv_scl_96() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_640 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_640(void) {
    ALOGD("dlb_fft_inv_usc_640() called");
    return 0;
}

/* Demangled: DLB_Lunload_CLqmf_analysisL_filter_state */
extern "C" __attribute__((visibility("default"))) int DLB_Lunload_CLqmf_analysisL_filter_state(void) {
    ALOGD("DLB_Lunload_CLqmf_analysisL_filter_state() called");
    return 0;
}

/* Demangled: ddp_udc_int_convertchbwcod */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_convertchbwcod(void) {
    ALOGD("ddp_udc_int_convertchbwcod() called");
    return 0;
}

/* Exported Object: ddp_udc_int_hannwin */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_hannwin = NULL;

/* Demangled: ddp_udc_int_converter_clear_lfe_history */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_converter_clear_lfe_history(void) {
    ALOGD("ddp_udc_int_converter_clear_lfe_history() called");
    return 0;
}

/* Exported Object: A_NGCS_UPMIX_PLAN_STEREO_TO_7D1D2 */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_STEREO_TO_7D1D2 = NULL;

/* Demangled: DAP_CPDP_PVT_mi_buffer_samples_available */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_buffer_samples_available(void) {
    ALOGD("DAP_CPDP_PVT_mi_buffer_samples_available() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_spec_calc_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_spec_calc_process(void) {
    ALOGD("DAP_CPDP_PVT_spec_calc_process() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_AP_LDN_SL_TABLE_PTRS */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_AP_LDN_SL_TABLE_PTRS = NULL;

/* Demangled: DAP_CPDP_PVT_surround_compressor_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_surround_compressor_reset(void) {
    ALOGD("DAP_CPDP_PVT_surround_compressor_reset() called");
    return 0;
}

/* Demangled: ddp_udc_int_oarq_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oarq_init(void) {
    ALOGD("ddp_udc_int_oarq_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_delay_line_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_delay_line_init(void) {
    ALOGD("DAP_CPDP_PVT_delay_line_init() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_60 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_60(void) {
    ALOGD("dlb_fft_inv_usc_60() called");
    return 0;
}

/* Demangled: ddpi_udc_do_mixing */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_do_mixing(void) {
    ALOGD("ddpi_udc_do_mixing() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_192 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_192(void) {
    ALOGD("dlb_fft_fwd_scl_192() called");
    return 0;
}

/* Demangled: dap_cpdp_regulator_stress_amount_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_regulator_stress_amount_set(void) {
    ALOGD("dap_cpdp_regulator_stress_amount_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_virt_chain_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_virt_chain_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_virt_chain_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hp_height_fdn_allpass_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hp_height_fdn_allpass_init(void) {
    ALOGD("DAP_CPDP_PVT_hp_height_fdn_allpass_init() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_480 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_480(void) {
    ALOGD("dlb_fft_fwd_usc_480() called");
    return 0;
}

/* Demangled: ddp_udc_int_mntd_skip */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mntd_skip(void) {
    ALOGD("ddp_udc_int_mntd_skip() called");
    return 0;
}

/* Exported Object: ddp_udc_int_dlb_ch2bc_chmap */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_dlb_ch2bc_chmap = NULL;

/* Exported Object: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_5D1_TO_5D1D2 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_5D1_TO_5D1D2 = NULL;

/* Demangled: DAP_CPDP_PVT_mi_vec_log */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_log(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_log() called");
    return 0;
}

/* Demangled: ddp_udc_int_pacaudblk_nocpl */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_pacaudblk_nocpl(void) {
    ALOGD("ddp_udc_int_pacaudblk_nocpl() called");
    return 0;
}

/* Exported Object: ddp_udc_int_ecplampexptab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_ecplampexptab = NULL;

/* Demangled: ddp_udc_int_oamdi_has_oa_element_headphone */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_has_oa_element_headphone(void) {
    ALOGD("ddp_udc_int_oamdi_has_oa_element_headphone() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_shift_ex_avg_filter_clear */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_shift_ex_avg_filter_clear(void) {
    ALOGD("DAP_CPDP_PVT_dlb_shift_ex_avg_filter_clear() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L320 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L320 = NULL;

/* Demangled: dlb_fft_inv_usc_64 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_64(void) {
    ALOGD("dlb_fft_inv_usc_64() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_mdct_cos_tab */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_mdct_cos_tab = NULL;

/* Demangled: dap_cpdp_bass_enhancer_width_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_bass_enhancer_width_set(void) {
    ALOGD("dap_cpdp_bass_enhancer_width_set() called");
    return 0;
}

/* Demangled: dap_cpdp_ieq_amount_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_ieq_amount_set(void) {
    ALOGD("dap_cpdp_ieq_amount_set() called");
    return 0;
}

/* Demangled: dap_cpdp_virtualizer_surround_speaker_angle_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtualizer_surround_speaker_angle_set(void) {
    ALOGD("dap_cpdp_virtualizer_surround_speaker_angle_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_evaluation_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_evaluation_process(void) {
    ALOGD("DAP_CPDP_PVT_evaluation_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_classifier_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_classifier_init(void) {
    ALOGD("DAP_CPDP_PVT_classifier_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_vec_auto_correlation */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_auto_correlation(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_auto_correlation() called");
    return 0;
}

/* Demangled: dlb_blk_LabsL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LabsL_flex(void) {
    ALOGD("dlb_blk_LabsL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L288 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L288 = NULL;

/* Demangled: dlb_fft_fwd_usc_720 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_720(void) {
    ALOGD("dlb_fft_fwd_usc_720() called");
    return 0;
}

/* Demangled: dlb_vec_LmaskLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LmaskLSU_flex(void) {
    ALOGD("dlb_vec_LmaskLSU_flex() called");
    return 0;
}

/* Demangled: DLB_fft_CLfwd_scaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLfwd_scaledCL(void) {
    ALOGD("DLB_fft_CLfwd_scaledCL() called");
    return 0;
}

/* Exported Object: ddp_udc_int_lfemixlevtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_lfemixlevtab = NULL;

/* Demangled: ddp_udc_int_dvlim_get_num_channels */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_get_num_channels(void) {
    ALOGD("ddp_udc_int_dvlim_get_num_channels() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_zcr_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_zcr_close(void) {
    ALOGD("DAP_CPDP_PVT_zcr_close() called");
    return 0;
}

/* Demangled: ddp_udc_int_channel_remap_clear_r */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_channel_remap_clear_r(void) {
    ALOGD("ddp_udc_int_channel_remap_clear_r() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_dvlim_win_40 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_dvlim_win_40 = NULL;

/* Demangled: ddp_udc_int_evo_combine_md_sets */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_combine_md_sets(void) {
    ALOGD("ddp_udc_int_evo_combine_md_sets() called");
    return 0;
}

/* Demangled: ddp_udc_int_size_panner_query_scratch */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_size_panner_query_scratch(void) {
    ALOGD("ddp_udc_int_size_panner_query_scratch() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int const*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: dlb_vec_LdotLLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LdotLLU_flex(void) {
    ALOGD("dlb_vec_LdotLLU_flex() called");
    return 0;
}

/* Demangled: dolby::DlbBufferProvider::updateCapacity(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17DlbBufferProvider14updateCapacityEi(void) {
    ALOGD("_ZN5dolby17DlbBufferProvider14updateCapacityEi() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_stereo_clear */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_stereo_clear(void) {
    ALOGD("DAP_CPDP_PVT_de_stereo_clear() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_acorr_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_acorr_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_acorr_query_memory() called");
    return 0;
}

/* Demangled: ddp_udc_int_btad_copyblkbai */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_btad_copyblkbai(void) {
    ALOGD("ddp_udc_int_btad_copyblkbai() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sv_coefs_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sv_coefs_init(void) {
    ALOGD("DAP_CPDP_PVT_sv_coefs_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_icsc_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_icsc_close(void) {
    ALOGD("DAP_CPDP_PVT_icsc_close() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L1024 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L1024 = NULL;

/* Demangled: dolby::DdpDynamicConfig::~DdpDynamicConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DdpDynamicConfigD2Ev(void) {
    ALOGD("_ZN5dolby16DdpDynamicConfigD2Ev() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_ddp_pan_RSUR_RAUX */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_ddp_pan_RSUR_RAUX = NULL;

/* Demangled: DAP_CPDP_PVT_power_log_add */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_power_log_add(void) {
    ALOGD("DAP_CPDP_PVT_power_log_add() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L240_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L240_cos = NULL;

/* Exported Object: ddp_udc_int_msmix_chan_idtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_chan_idtab = NULL;

/* Demangled: dolby::Ac4DecAudioBufferProvider::configure(audio_format_t, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25Ac4DecAudioBufferProvider9configureE14audio_format_tjj(void) {
    ALOGD("_ZN5dolby25Ac4DecAudioBufferProvider9configureE14audio_format_tjj() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_visualizer_excitations_get */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_visualizer_excitations_get(void) {
    ALOGD("DAP_CPDP_PVT_visualizer_excitations_get() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_get_enable */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_get_enable(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_get_enable() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_120 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_120(void) {
    ALOGD("dlb_fft_inv_scl_120() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_clear_unpacked_md */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_clear_unpacked_md(void) {
    ALOGD("ddp_udc_int_dil_clear_unpacked_md() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_get_boost */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_get_boost(void) {
    ALOGD("ddp_udc_int_dvlim_get_boost() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::open() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process4openEv(void) {
    ALOGD("_ZN5dolby11Dap2Process4openEv() called");
    return 0;
}

/* Demangled: ddp_udc_int_ahtd_skipmants */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ahtd_skipmants(void) {
    ALOGD("ddp_udc_int_ahtd_skipmants() called");
    return 0;
}

/* Exported Object: ddp_udc_int_OAMDI_DIV_TABLE_TO_CODE */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_OAMDI_DIV_TABLE_TO_CODE = NULL;

/* Demangled: dap_cpdp_pvt_data_bass_update_control */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_data_bass_update_control(void) {
    ALOGD("dap_cpdp_pvt_data_bass_update_control() called");
    return 0;
}

/* Demangled: _dlb_ldct2_scaled_iplu */
extern "C" __attribute__((visibility("default"))) int _dlb_ldct2_scaled_iplu(void) {
    ALOGD("_dlb_ldct2_scaled_iplu() called");
    return 0;
}

/* Exported Object: ddp_udc_int_bap2_vqtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_bap2_vqtab = NULL;

/* Demangled: ddp_udc_int_tsid_deselectallprograms */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsid_deselectallprograms(void) {
    ALOGD("ddp_udc_int_tsid_deselectallprograms() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_chroma_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_chroma_init(void) {
    ALOGD("DAP_CPDP_PVT_chroma_init() called");
    return 0;
}

/* Demangled: DLB_r4_fft_160 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_160(void) {
    ALOGD("DLB_r4_fft_160() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L1024_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L1024_cos = NULL;

/* Exported Object: DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC_8 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC_8 = NULL;

/* Demangled: DAP_CPDP_PVT_spec_flux_clip_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_spec_flux_clip_process(void) {
    ALOGD("DAP_CPDP_PVT_spec_flux_clip_process() called");
    return 0;
}

/* Demangled: DLB_blk_LminLLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LminLLL_strict(void) {
    ALOGD("DLB_blk_LminLLL_strict() called");
    return 0;
}

/* Demangled: DLB_blk_LmixnL */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixnL(void) {
    ALOGD("DLB_blk_LmixnL() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_960 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_960(void) {
    ALOGD("dlb_fft_fwd_usc_960() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_has_oa_element_dimensional_trim */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_has_oa_element_dimensional_trim(void) {
    ALOGD("ddp_udc_int_oamdi_has_oa_element_dimensional_trim() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_144 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_144(void) {
    ALOGD("DLB_r4_inv_fft_144() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hist_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hist_reset(void) {
    ALOGD("DAP_CPDP_PVT_hist_reset() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_speech_clear */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_speech_clear(void) {
    ALOGD("DAP_CPDP_PVT_de_speech_clear() called");
    return 0;
}

/* Demangled: android::DDPDecoder::DDPDecoder(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoderC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android10DDPDecoderC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_oa_element_dimensional_trim */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_oa_element_dimensional_trim(void) {
    ALOGD("ddp_udc_int_oamdi_get_oa_element_dimensional_trim() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_delayline_buf_attenuate */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_delayline_buf_attenuate(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_delayline_buf_attenuate() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_128 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_128(void) {
    ALOGD("dlb_fft_inv_scl_128() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_48 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_48 = NULL;

/* Exported Object: ddp_udc_int_a_dvlim_win_256 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_dvlim_win_256 = NULL;

/* Demangled: DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_get_interp_gains */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_get_interp_gains(void) {
    ALOGD("DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_get_interp_gains() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hybrid_filter_get_setup */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hybrid_filter_get_setup(void) {
    ALOGD("DAP_CPDP_PVT_hybrid_filter_get_setup() called");
    return 0;
}

/* Demangled: DLB_fft_scratch_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_fft_scratch_query_mem(void) {
    ALOGD("DLB_fft_scratch_query_mem() called");
    return 0;
}

/* Demangled: ddp_udc_int_tsh_getcurrentdframemask */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsh_getcurrentdframemask(void) {
    ALOGD("ddp_udc_int_tsh_getcurrentdframemask() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_brw_write */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_brw_write(void) {
    ALOGD("ddp_udc_int_evo_brw_write() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_input_target_level_smoother */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_input_target_level_smoother(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_input_target_level_smoother() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sbpp_frame_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbpp_frame_process(void) {
    ALOGD("DAP_CPDP_PVT_sbpp_frame_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L768 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L768 = NULL;

/* Exported Object: ddp_udc_int_surmixtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_surmixtab = NULL;

/* Demangled: ddp_udc_int_oamdi_get_init_info */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_init_info(void) {
    ALOGD("ddp_udc_int_oamdi_get_init_info() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_set_hard_clip */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_set_hard_clip(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_set_hard_clip() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L192 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L192 = NULL;

/* Demangled: ddp_udc_int_bsod_getunpbits */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bsod_getunpbits(void) {
    ALOGD("ddp_udc_int_bsod_getunpbits() called");
    return 0;
}

/* Demangled: ddp_udc_int_decorr_get_tcbuffer_pointer */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_decorr_get_tcbuffer_pointer(void) {
    ALOGD("ddp_udc_int_decorr_get_tcbuffer_pointer() called");
    return 0;
}

/* Demangled: ddp_udc_int_huff_read */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_huff_read(void) {
    ALOGD("ddp_udc_int_huff_read() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_360 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_360(void) {
    ALOGD("dlb_fft_inv_scl_360() called");
    return 0;
}

/* Exported Object: ddp_udc_int_cpl_defbndstrc */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_cpl_defbndstrc = NULL;

/* Demangled: DAP_CPDP_PVT_dap_utilities_update_clip_signed */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_utilities_update_clip_signed(void) {
    ALOGD("DAP_CPDP_PVT_dap_utilities_update_clip_signed() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_chroma_frame_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_chroma_frame_process(void) {
    ALOGD("DAP_CPDP_PVT_chroma_frame_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_steering_gains_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_steering_gains_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_steering_gains_query_scratch() called");
    return 0;
}

/* Demangled: DLB_r4_fft_80_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_80_s(void) {
    ALOGD("DLB_r4_fft_80_s() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hdr_Plog2P_poly3 */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hdr_Plog2P_poly3(void) {
    ALOGD("DAP_CPDP_PVT_hdr_Plog2P_poly3() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_720_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_720_s(void) {
    ALOGD("DLB_r4_inv_fft_720_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_read_long */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_read_long(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_read_long() called");
    return 0;
}

/* Demangled: dap_cpdp_mi2adaptive_virtualizer_steering_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_mi2adaptive_virtualizer_steering_enable_set(void) {
    ALOGD("dap_cpdp_mi2adaptive_virtualizer_steering_enable_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_lfra_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lfra_close(void) {
    ALOGD("DAP_CPDP_PVT_lfra_close() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv3aLU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv3aLU_inplace_strict(void) {
    ALOGD("DLB_blk_Liir2ssv3aLU_inplace_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_256 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_256(void) {
    ALOGD("dlb_fft_fwd_usc_256() called");
    return 0;
}

/* Exported Object: ddp_udc_int_dialmant */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_dialmant = NULL;

/* Demangled: DAP_CPDP_PVT_dvlim_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_init(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_cpld_copy */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_cpld_copy(void) {
    ALOGD("ddp_udc_int_cpld_copy() called");
    return 0;
}

/* Exported Object: ddp_udc_int_ecpd_subbndtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_ecpd_subbndtab = NULL;

/* Demangled: DLB_dsplib_init */
extern "C" __attribute__((visibility("default"))) int DLB_dsplib_init(void) {
    ALOGD("DLB_dsplib_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_converter_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_converter_process(void) {
    ALOGD("ddp_udc_int_converter_process() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_set_group_id */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_set_group_id(void) {
    ALOGD("ddp_udc_int_dil_set_group_id() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_virt_chain_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_virt_chain_process(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_virt_chain_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfcc_flux_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_flux_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_flux_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_resi_query_clip_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_resi_query_clip_mem(void) {
    ALOGD("DAP_CPDP_PVT_resi_query_clip_mem() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_process_indirect */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_process_indirect(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_process_indirect() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_384 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_384(void) {
    ALOGD("DLB_r4_inv_fft_384() called");
    return 0;
}

/* Demangled: ddp_udc_int_jocdec_close */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocdec_close(void) {
    ALOGD("ddp_udc_int_jocdec_close() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_constrain_compressor_threshold */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_constrain_compressor_threshold(void) {
    ALOGD("DAP_CPDP_PVT_arle_constrain_compressor_threshold() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_get_group_id */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_get_group_id(void) {
    ALOGD("ddp_udc_int_dil_get_group_id() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_band_smoother_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_band_smoother_process(void) {
    ALOGD("DAP_CPDP_PVT_band_smoother_process() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_data_bass_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_data_bass_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_data_bass_query_scratch() called");
    return 0;
}

/* Demangled: DLB_r4_fft_640 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_640(void) {
    ALOGD("DLB_r4_fft_640() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_72 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_72(void) {
    ALOGD("dlb_fft_inv_usc_72() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpgaqgains */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpgaqgains(void) {
    ALOGD("ddp_udc_int_unpgaqgains() called");
    return 0;
}

/* Demangled: ddp_udc_int_tsh_clearframehistory */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsh_clearframehistory(void) {
    ALOGD("ddp_udc_int_tsh_clearframehistory() called");
    return 0;
}

/* Demangled: DLB_BLmpy_scaleBLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmpy_scaleBLSU_strict(void) {
    ALOGD("DLB_BLmpy_scaleBLSU_strict() called");
    return 0;
}

/* Demangled: dolby::BufferProvider::~BufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProviderD1Ev(void) {
    ALOGD("_ZN5dolby14BufferProviderD1Ev() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_icsc_clip_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_icsc_clip_process(void) {
    ALOGD("DAP_CPDP_PVT_icsc_clip_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_modulation_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_modulation_process(void) {
    ALOGD("DAP_CPDP_PVT_sben_modulation_process() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_vec_syn = NULL;

/* Demangled: DAP_CPDP_PVT_volume_and_ieq_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_volume_and_ieq_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_volume_and_ieq_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_sben_query_scratch() called");
    return 0;
}

/* Demangled: DLB_r4_fft_120_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_120_s(void) {
    ALOGD("DLB_r4_fft_120_s() called");
    return 0;
}

/* Exported Object: ddp_udc_int_compmode2boost_tab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_compmode2boost_tab = NULL;

/* Demangled: DAP_CPDP_PVT_legq_get_linear_gain */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_legq_get_linear_gain(void) {
    ALOGD("DAP_CPDP_PVT_legq_get_linear_gain() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_buffer_write_samples */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_buffer_write_samples(void) {
    ALOGD("DAP_CPDP_PVT_mi_buffer_write_samples() called");
    return 0;
}

/* Demangled: DLB_blk_Lfir2L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir2L_setup(void) {
    ALOGD("DLB_blk_Lfir2L_setup() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L8_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L8_1 = NULL;

/* Exported Object: ddp_udc_int_bap4_vqtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_bap4_vqtab = NULL;

/* Demangled: ddp_udc_int_evod_do_posts */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evod_do_posts(void) {
    ALOGD("ddp_udc_int_evod_do_posts() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_make_5_1_2 */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_make_5_1_2(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_make_5_1_2() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_get_dv_event_weight */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_get_dv_event_weight(void) {
    ALOGD("DAP_CPDP_PVT_get_dv_event_weight() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L120 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L120 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L8_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L8_2 = NULL;

/* Exported Object: ddp_udc_int_ap_dvlim_coefs_256 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_ap_dvlim_coefs_256 = NULL;

/* Demangled: DAP_CPDP_PVT_dlb_milib_reset */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_milib_reset(void) {
    ALOGD("DAP_CPDP_PVT_dlb_milib_reset() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_get_smoothed_gain_alpha */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_get_smoothed_gain_alpha(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_get_smoothed_gain_alpha() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_get_latency */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_get_latency(void) {
    ALOGD("ddp_udc_int_dvlim_get_latency() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_mi_param_init */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_mi_param_init(void) {
    ALOGD("dap_cpdp_pvt_mi_param_init() called");
    return 0;
}

/* Demangled: ddpi_udc_timeslicecomplete */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_timeslicecomplete(void) {
    ALOGD("ddpi_udc_timeslicecomplete() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_icsc_frame_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_icsc_frame_process(void) {
    ALOGD("DAP_CPDP_PVT_icsc_frame_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_modulation_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_modulation_init(void) {
    ALOGD("DAP_CPDP_PVT_sben_modulation_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_virtual_bass_transpose_analysis */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_virtual_bass_transpose_analysis(void) {
    ALOGD("DAP_CPDP_PVT_virtual_bass_transpose_analysis() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L15_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L15_1 = NULL;

/* Demangled: dlb_fft_inv_usc_180 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_180(void) {
    ALOGD("dlb_fft_inv_usc_180() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L48_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L48_cos = NULL;

/* Demangled: ddp_udc_int_cpld_unpexms */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_cpld_unpexms(void) {
    ALOGD("ddp_udc_int_cpld_unpexms() called");
    return 0;
}

/* Demangled: ddp_udc_int_bed_mixer_init */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bed_mixer_init(void) {
    ALOGD("ddp_udc_int_bed_mixer_init() called");
    return 0;
}

/* Exported Object: ddp_udc_int_DELTA_SOURCE_POS_Z */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_DELTA_SOURCE_POS_Z = NULL;

/* Demangled: dlb_vec_Sabs_maxSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_Sabs_maxSU_flex(void) {
    ALOGD("dlb_vec_Sabs_maxSU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L15_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L15_2 = NULL;

/* Exported Object: ddp_udc_int_bta_pvtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_bta_pvtab = NULL;

/* Demangled: ddp_udc_int_axdd_seek */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_axdd_seek(void) {
    ALOGD("ddp_udc_int_axdd_seek() called");
    return 0;
}

/* Exported Object: ddp_udc_int_A_ROOM_CONFIG_SPKS_SIDE_FULL */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_A_ROOM_CONFIG_SPKS_SIDE_FULL = NULL;

/* Demangled: DAP_CPDP_PVT_dap_interp_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_interp_init(void) {
    ALOGD("DAP_CPDP_PVT_dap_interp_init() called");
    return 0;
}

/* Demangled: dap_cpdp_virtualizer_start_band_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtualizer_start_band_set(void) {
    ALOGD("dap_cpdp_virtualizer_start_band_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfcc_flux_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_flux_close(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_flux_close() called");
    return 0;
}

/* Exported Object: ddp_udc_int_chanetab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_chanetab = NULL;

/* Demangled: dap_cpdp_pvt_surround_compressor_supported */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_surround_compressor_supported(void) {
    ALOGD("dap_cpdp_pvt_surround_compressor_supported() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_end_chain_get_limiter_gain */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_end_chain_get_limiter_gain(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_end_chain_get_limiter_gain() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_ex_avg_filter_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_ex_avg_filter_init(void) {
    ALOGD("DAP_CPDP_PVT_dlb_ex_avg_filter_init() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv1_usmpL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv1_usmpL_flex(void) {
    ALOGD("dlb_blk_Liir2ssv1_usmpL_flex() called");
    return 0;
}

/* Demangled: DLB_blk_Lmpy_shlLLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmpy_shlLLU_strict(void) {
    ALOGD("DLB_blk_Lmpy_shlLLU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L128 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L128 = NULL;

/* Exported Object: dlb_cos_8_full_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_8_full_scl = NULL;

/* Exported Object: ddp_udc_int_f3_den */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_f3_den = NULL;

/* Exported Object: A_NGCS_UPMIX_PLAN_5CH1_TO_7CH1 */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_5CH1_TO_7CH1 = NULL;

/* Demangled: DLB_qmf_synthesisL_init */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_init(void) {
    ALOGD("DLB_qmf_synthesisL_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_set_target_gain */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_set_target_gain(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_set_target_gain() called");
    return 0;
}

/* Demangled: dlb_blk_LintegrateL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LintegrateL_flex(void) {
    ALOGD("dlb_blk_LintegrateL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L36_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L36_cos = NULL;

/* Exported Object: ddp_udc_int_spxd_begftobegsbndtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_spxd_begftobegsbndtab = NULL;

/* Demangled: DAP_CPDP_PVT_dvlim_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_process(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_volume_and_ieq_update_drc_cut_params */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_volume_and_ieq_update_drc_cut_params(void) {
    ALOGD("DAP_CPDP_PVT_volume_and_ieq_update_drc_cut_params() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L48_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L48_1 = NULL;

/* Demangled: DLB_r4_inv_fft_6_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_6_s(void) {
    ALOGD("DLB_r4_inv_fft_6_s() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DE_POW_RATE_44K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DE_POW_RATE_44K = NULL;

/* Demangled: DLB_blk_LfirUL_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LfirUL_set_coef(void) {
    ALOGD("DLB_blk_LfirUL_set_coef() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1L_strict(void) {
    ALOGD("DLB_blk_Liir1L_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L360 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L360 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L48_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L48_2 = NULL;

/* Demangled: DLB_r4_inv_fft_768_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_768_s(void) {
    ALOGD("DLB_r4_inv_fft_768_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_unprematstr */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unprematstr(void) {
    ALOGD("ddp_udc_int_unprematstr() called");
    return 0;
}

/* Demangled: ddp_udc_int_bed_sysinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bed_sysinit(void) {
    ALOGD("ddp_udc_int_bed_sysinit() called");
    return 0;
}

/* Demangled: ddp_udc_int_evod_remove_md_from_evo_frame_by_id */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evod_remove_md_from_evo_frame_by_id(void) {
    ALOGD("ddp_udc_int_evod_remove_md_from_evo_frame_by_id() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_set_trim_config */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_set_trim_config(void) {
    ALOGD("ddp_udc_int_oamdi_set_trim_config() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_end_chain_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_end_chain_init(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_end_chain_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L576 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L576 = NULL;

/* Demangled: ddp_udc_int_ramp_gain_targets_set */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ramp_gain_targets_set(void) {
    ALOGD("ddp_udc_int_ramp_gain_targets_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sv_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sv_process(void) {
    ALOGD("DAP_CPDP_PVT_sv_process() called");
    return 0;
}

/* Exported Object: dlb_clclmix5cl10csu_order_coef_c */
extern "C" __attribute__((visibility("default"))) void* dlb_clclmix5cl10csu_order_coef_c = NULL;

/* Demangled: DLB_hybrid_synthesisCL_init */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_synthesisCL_init(void) {
    ALOGD("DLB_hybrid_synthesisCL_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_gain_calc_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_gain_calc_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_gain_calc_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_update_smoothed_gain */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_update_smoothed_gain(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_update_smoothed_gain() called");
    return 0;
}

/* Demangled: ddp_udc_int_decorr_setup */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_decorr_setup(void) {
    ALOGD("ddp_udc_int_decorr_setup() called");
    return 0;
}

/* Exported Object: ddp_udc_int_qntz5lev */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_qntz5lev = NULL;

/* Demangled: ddp_udc_int_evo_cb_get_rd_ptr */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_cb_get_rd_ptr(void) {
    ALOGD("ddp_udc_int_evo_cb_get_rd_ptr() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_virtualizer_param_init */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_virtualizer_param_init(void) {
    ALOGD("dap_cpdp_pvt_virtualizer_param_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_nyquist_filters_844_synthesise_channel */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_nyquist_filters_844_synthesise_channel(void) {
    ALOGD("DAP_CPDP_PVT_nyquist_filters_844_synthesise_channel() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L24_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L24_cos = NULL;

/* Demangled: DLB_CLzeroCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLzeroCLU_strict(void) {
    ALOGD("DLB_CLzeroCLU_strict() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_complex_equalizer_update_control */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_complex_equalizer_update_control(void) {
    ALOGD("dap_cpdp_pvt_complex_equalizer_update_control() called");
    return 0;
}

/* Demangled: dlb_vec_LmpyLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LmpyLSU_flex(void) {
    ALOGD("dlb_vec_LmpyLSU_flex() called");
    return 0;
}

/* Demangled: DLB_hybrid_synthesisCL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_synthesisCL_query_mem(void) {
    ALOGD("DLB_hybrid_synthesisCL_query_mem() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_lvl_calc_ng_scale */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lvl_calc_ng_scale(void) {
    ALOGD("DAP_CPDP_PVT_lvl_calc_ng_scale() called");
    return 0;
}

/* Exported Object: ddp_udc_int_OAMDI_DIV_CODE_TO_AMOUNT */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_OAMDI_DIV_CODE_TO_AMOUNT = NULL;

/* Demangled: DAP_CPDP_PVT_mfcc_flux_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfcc_flux_init(void) {
    ALOGD("DAP_CPDP_PVT_mfcc_flux_init() called");
    return 0;
}

/* Demangled: hdr_vec4_P2powPLPU */
extern "C" __attribute__((visibility("default"))) int hdr_vec4_P2powPLPU(void) {
    ALOGD("hdr_vec4_P2powPLPU() called");
    return 0;
}

/* Demangled: DLB_r4_fft_240_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_240_s(void) {
    ALOGD("DLB_r4_fft_240_s() called");
    return 0;
}

/* Exported Object: ddp_udc_int_babndtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_babndtab = NULL;

/* Demangled: ddp_udc_int_oamdi_read_variable_bits_max */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_read_variable_bits_max(void) {
    ALOGD("ddp_udc_int_oamdi_read_variable_bits_max() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_DAP_CPDP_AGC_COMP */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DAP_CPDP_AGC_COMP = NULL;

/* Demangled: DAP_CPDP_PVT_de_pow_smooth_clear */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_pow_smooth_clear(void) {
    ALOGD("DAP_CPDP_PVT_de_pow_smooth_clear() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_log_smoothing_approximation */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_log_smoothing_approximation(void) {
    ALOGD("DAP_CPDP_PVT_log_smoothing_approximation() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_48_vec_ana = NULL;

/* Demangled: ddp_udc_int_intloud_close */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_intloud_close(void) {
    ALOGD("ddp_udc_int_intloud_close() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_712 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_712 = NULL;

/* Demangled: DAP_CPDP_PVT_ngcs_phase_shifter_run */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_phase_shifter_run(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_phase_shifter_run() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_80 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_80(void) {
    ALOGD("dlb_fft_inv_usc_80() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L12_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L12_cos = NULL;

/* Demangled: ddp_udc_int_oamdi_dimensional_trim_config_disable */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_dimensional_trim_config_disable(void) {
    ALOGD("ddp_udc_int_oamdi_dimensional_trim_config_disable() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5D1D2 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5D1D2 = NULL;

/* Demangled: DLB_r4_inv_fft_192_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_192_s(void) {
    ALOGD("DLB_r4_inv_fft_192_s() called");
    return 0;
}

/* Exported Object: ddp_udc_int_gbl_dolby_copyright */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_dolby_copyright = NULL;

/* Demangled: DAP_CPDP_PVT_dap_utilities_update_clip_unsigned */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_utilities_update_clip_unsigned(void) {
    ALOGD("DAP_CPDP_PVT_dap_utilities_update_clip_unsigned() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_714 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_714 = NULL;

/* Demangled: DLB_vec_UnormLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_UnormLU_strict(void) {
    ALOGD("DLB_vec_UnormLU_strict() called");
    return 0;
}

/* Demangled: dlb_CLmpyCLVSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpyCLVSU_flex(void) {
    ALOGD("dlb_CLmpyCLVSU_flex() called");
    return 0;
}

/* Demangled: ddp_udc_int_ramp_gain_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ramp_gain_process(void) {
    ALOGD("ddp_udc_int_ramp_gain_process() called");
    return 0;
}

/* Demangled: dap_cpdp_surround_decoder_center_spreading_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_surround_decoder_center_spreading_enable_set(void) {
    ALOGD("dap_cpdp_surround_decoder_center_spreading_enable_set() called");
    return 0;
}

/* Exported Object: vtable for dolby::DdpDynamicConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16DdpDynamicConfigE = NULL;

/* Demangled: DAP_CPDP_PVT_asa_noise_detect_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_asa_noise_detect_process(void) {
    ALOGD("DAP_CPDP_PVT_asa_noise_detect_process() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF0_COMPENSATION_LL */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF0_COMPENSATION_LL = NULL;

/* Demangled: DAP_CPDP_PVT_evaluation_is_unrestricted */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_evaluation_is_unrestricted(void) {
    ALOGD("DAP_CPDP_PVT_evaluation_is_unrestricted() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L8_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L8_cos = NULL;

/* Exported Object: ddp_udc_int_grpsz_tab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_grpsz_tab = NULL;

/* Demangled: DAP_CPDP_PVT_asa_event_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_asa_event_init(void) {
    ALOGD("DAP_CPDP_PVT_asa_event_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ieq_clear */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ieq_clear(void) {
    ALOGD("DAP_CPDP_PVT_ieq_clear() called");
    return 0;
}

/* Demangled: dlb_vec_LshlLIU_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LshlLIU_inplace_flex(void) {
    ALOGD("dlb_vec_LshlLIU_inplace_flex() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_loudness_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_loudness_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_loudness_query_memory() called");
    return 0;
}

/* Demangled: dlb_blk_LmixLLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmixLLL_flex(void) {
    ALOGD("dlb_blk_LmixLLL_flex() called");
    return 0;
}

/* Exported Object: ddp_udc_int_cplStartBand2bandFromDC */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_cplStartBand2bandFromDC = NULL;

/* Demangled: ddp_udc_int_fmtmixmeta */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_fmtmixmeta(void) {
    ALOGD("ddp_udc_int_fmtmixmeta() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_dap_set_enable */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_dap_set_enable(void) {
    ALOGD("DAP_CPDP_PVT_mi_dap_set_enable() called");
    return 0;
}

/* Demangled: dlb_blk_LLdeshuffleLL_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LLdeshuffleLL_inplace_flex(void) {
    ALOGD("dlb_blk_LLdeshuffleLL_inplace_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_960_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_960_s(void) {
    ALOGD("DLB_r4_inv_fft_960_s() called");
    return 0;
}

/* Demangled: DLB_time_div */
extern "C" __attribute__((visibility("default"))) int DLB_time_div(void) {
    ALOGD("DLB_time_div() called");
    return 0;
}

/* Exported Object: ddp_udc_int_aht_pvtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_aht_pvtab = NULL;

/* Demangled: ddp_udc_int_dec71_process_substream */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dec71_process_substream(void) {
    ALOGD("ddp_udc_int_dec71_process_substream() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_get_enable */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_get_enable(void) {
    ALOGD("ddp_udc_int_dvlim_get_enable() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_clear_pgm_bnd */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_clear_pgm_bnd(void) {
    ALOGD("ddp_udc_int_dil_clear_pgm_bnd() called");
    return 0;
}

/* Demangled: DLB_r4_cplx_fwd_unscaled */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_fwd_unscaled(void) {
    ALOGD("DLB_r4_cplx_fwd_unscaled() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_ex_avg_filter_clear */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_ex_avg_filter_clear(void) {
    ALOGD("DAP_CPDP_PVT_dlb_ex_avg_filter_clear() called");
    return 0;
}

/* Demangled: ddp_udc_int_obj_render_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_obj_render_process(void) {
    ALOGD("ddp_udc_int_obj_render_process() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: dap_cpdp_custom_woofer_channel_index_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_custom_woofer_channel_index_set(void) {
    ALOGD("dap_cpdp_custom_woofer_channel_index_set() called");
    return 0;
}

/* Demangled: dap_cpdp_woofer_regulator_tuning_info_get */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_woofer_regulator_tuning_info_get(void) {
    ALOGD("dap_cpdp_woofer_regulator_tuning_info_get() called");
    return 0;
}

/* Demangled: DLB_CLhybrid_synthesisCL */
extern "C" __attribute__((visibility("default"))) int DLB_CLhybrid_synthesisCL(void) {
    ALOGD("DLB_CLhybrid_synthesisCL() called");
    return 0;
}

/* Demangled: ddp_udc_int_mem_alloc */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mem_alloc(void) {
    ALOGD("ddp_udc_int_mem_alloc() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_set_num_channels */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_set_num_channels(void) {
    ALOGD("ddp_udc_int_dvlim_set_num_channels() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_check_bitstream_protection */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_check_bitstream_protection(void) {
    ALOGD("ddp_udc_int_evo_check_bitstream_protection() called");
    return 0;
}

/* Demangled: ddp_udc_int_omg_trim_auto_gain_get */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_omg_trim_auto_gain_get(void) {
    ALOGD("ddp_udc_int_omg_trim_auto_gain_get() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_dimensional_trim_less_than_equal_to_zero */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_dimensional_trim_less_than_equal_to_zero(void) {
    ALOGD("ddp_udc_int_oamdi_dimensional_trim_less_than_equal_to_zero() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_get_hard_clip */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_get_hard_clip(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_get_hard_clip() called");
    return 0;
}

/* Demangled: dolby::DdpDynamicConfig::DdpDynamicConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DdpDynamicConfigC2Ev(void) {
    ALOGD("_ZN5dolby16DdpDynamicConfigC2Ev() called");
    return 0;
}

/* Demangled: ddp_udc_int_bed_mixer_height_bed_is_left */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bed_mixer_height_bed_is_left(void) {
    ALOGD("ddp_udc_int_bed_mixer_height_bed_is_left() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_lfra_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lfra_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_lfra_query_scratch() called");
    return 0;
}

/* Demangled: android::DDPDecoder::setPcmOutChannels() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoder17setPcmOutChannelsEv(void) {
    ALOGD("_ZN7android10DDPDecoder17setPcmOutChannelsEv() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpddcplstr */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpddcplstr(void) {
    ALOGD("ddp_udc_int_unpddcplstr() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpddpexpstr */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpddpexpstr(void) {
    ALOGD("ddp_udc_int_unpddpexpstr() called");
    return 0;
}

/* Demangled: ddp_udc_int_frmd_release */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_frmd_release(void) {
    ALOGD("ddp_udc_int_frmd_release() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_is_enabled */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_is_enabled(void) {
    ALOGD("DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_is_enabled() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_init */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_init(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_extract_frm_mdat */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_extract_frm_mdat(void) {
    ALOGD("ddp_udc_int_extract_frm_mdat() called");
    return 0;
}

/* Exported Object: ddp_udc_int_a_dvlim_win_64 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_a_dvlim_win_64 = NULL;

/* Demangled: dlb_fft_inv_usc_192 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_192(void) {
    ALOGD("dlb_fft_inv_usc_192() called");
    return 0;
}

/* Demangled: ddp_udc_int_btad_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_btad_process(void) {
    ALOGD("ddp_udc_int_btad_process() called");
    return 0;
}

/* Demangled: ddpi_udc_query_mem */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_query_mem(void) {
    ALOGD("ddpi_udc_query_mem() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_rap_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_rap_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_sben_rap_query_scratch() called");
    return 0;
}

/* Demangled: DLB_blk_Lfir3L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir3L_strict(void) {
    ALOGD("DLB_blk_Lfir3L_strict() called");
    return 0;
}

/* Demangled: ddp_udc_int_pacauxdata */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_pacauxdata(void) {
    ALOGD("ddp_udc_int_pacauxdata() called");
    return 0;
}

/* Exported Object: ddp_udc_int_gbl_surmix2lxrx_tab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_surmix2lxrx_tab = NULL;

/* Demangled: ddp_udc_int_process_evolution_data */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_process_evolution_data(void) {
    ALOGD("ddp_udc_int_process_evolution_data() called");
    return 0;
}

/* Demangled: dlb_CLshrCLUU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLshrCLUU_flex(void) {
    ALOGD("dlb_CLshrCLUU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_160 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_160(void) {
    ALOGD("DLB_r4_inv_fft_160() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_legacy */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_legacy(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_legacy() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_symmetric */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_symmetric(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_symmetric() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_ddp_pan_RSUR_LSUR */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_ddp_pan_RSUR_LSUR = NULL;

/* Demangled: DAP_CPDP_PVT_icsc_query_clip_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_icsc_query_clip_mem(void) {
    ALOGD("DAP_CPDP_PVT_icsc_query_clip_mem() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisL_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_get_delay(void) {
    ALOGD("DLB_qmf_analysisL_get_delay() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sbsc_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbsc_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_sbsc_query_scratch() called");
    return 0;
}

/* Demangled: DLB_r4_fft_180 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_180(void) {
    ALOGD("DLB_r4_fft_180() called");
    return 0;
}

/* Demangled: DLB_r4_fft_360_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_360_s(void) {
    ALOGD("DLB_r4_fft_360_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_144 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_144(void) {
    ALOGD("dlb_fft_inv_scl_144() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_get_version */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_get_version(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_get_version() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_bed_object_presence */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_bed_object_presence(void) {
    ALOGD("ddp_udc_int_oamdi_get_bed_object_presence() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_pre_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_pre_process(void) {
    ALOGD("DAP_CPDP_PVT_mi_pre_process() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_SURROUND_COMPRESSOR_GAIN_MAX_DB */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_SURROUND_COMPRESSOR_GAIN_MAX_DB = NULL;

/* Exported Object: DLB_MFB_TWID128E */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_TWID128E = NULL;

/* Demangled: ddp_udc_int_bed_fadeout */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bed_fadeout(void) {
    ALOGD("ddp_udc_int_bed_fadeout() called");
    return 0;
}

/* Demangled: ddp_udc_int_exmd_unp */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_exmd_unp(void) {
    ALOGD("ddp_udc_int_exmd_unp() called");
    return 0;
}

/* Demangled: ddp_udc_int_mixer_open */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mixer_open(void) {
    ALOGD("ddp_udc_int_mixer_open() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_set_has_oa_element_bed_object */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_set_has_oa_element_bed_object(void) {
    ALOGD("ddp_udc_int_oamdi_set_has_oa_element_bed_object() called");
    return 0;
}

/* Demangled: DLB_CLmfb_p10km_analysisL */
extern "C" __attribute__((visibility("default"))) int DLB_CLmfb_p10km_analysisL(void) {
    ALOGD("DLB_CLmfb_p10km_analysisL() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_fast_peek_long */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_fast_peek_long(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_fast_peek_long() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_dap_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_dap_process(void) {
    ALOGD("DAP_CPDP_PVT_mi_dap_process() called");
    return 0;
}

/* Demangled: DLB_r4_fft_288_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_288_s(void) {
    ALOGD("DLB_r4_fft_288_s() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7D1D2_CC */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7D1D2_CC = NULL;

/* Demangled: DAP_CPDP_PVT_ltrt3d_apply_gains_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_apply_gains_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_apply_gains_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_compr_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_compr_process(void) {
    ALOGD("DAP_CPDP_PVT_de_compr_process() called");
    return 0;
}

/* Demangled: ddp_udc_int_hdr_Plog2P_poly3 */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_hdr_Plog2P_poly3(void) {
    ALOGD("ddp_udc_int_hdr_Plog2P_poly3() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_lvl_noisegate_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lvl_noisegate_process(void) {
    ALOGD("DAP_CPDP_PVT_lvl_noisegate_process() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2df1L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2df1L_flex(void) {
    ALOGD("dlb_blk_Liir2df1L_flex() called");
    return 0;
}

/* Demangled: DLB_blk_delay_setup_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_delay_setup_strict(void) {
    ALOGD("DLB_blk_delay_setup_strict() called");
    return 0;
}

/* Exported Object: DLB_MFB_TWID64E */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_TWID64E = NULL;

/* Demangled: DLB_qmf_analysisL_get_max_filter_state_length */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_get_max_filter_state_length(void) {
    ALOGD("DLB_qmf_analysisL_get_max_filter_state_length() called");
    return 0;
}

/* Demangled: ddp_udc_int_hmac_sha256_calculate_digest */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_hmac_sha256_calculate_digest(void) {
    ALOGD("ddp_udc_int_hmac_sha256_calculate_digest() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L2 = NULL;

/* Demangled: ddp_udc_int_tsid_evoquick_updatestatus */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tsid_evoquick_updatestatus(void) {
    ALOGD("ddp_udc_int_tsid_evoquick_updatestatus() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_dimensional_trim_set_trim_bypass */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_dimensional_trim_set_trim_bypass(void) {
    ALOGD("ddp_udc_int_oamdi_dimensional_trim_set_trim_bypass() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sone_buffer_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sone_buffer_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_sone_buffer_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_syn_close(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_syn_close() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L4 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L4 = NULL;

/* Demangled: DAP_CPDP_PVT_dvlim_get_boost */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_get_boost(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_get_boost() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_SURROUND_COMPRESSOR_INV_130_ON_SURROUND_COMPRESSOR_AK_PARAM_STEPS */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_SURROUND_COMPRESSOR_INV_130_ON_SURROUND_COMPRESSOR_AK_PARAM_STEPS = NULL;

/* Demangled: DAP_CPDP_PVT_hearing_protection_reset_state */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_reset_state(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_reset_state() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_set_sample_offset */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_set_sample_offset(void) {
    ALOGD("ddp_udc_int_oamdi_set_sample_offset() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_end_chain_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_end_chain_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_end_chain_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_chroma_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_chroma_close(void) {
    ALOGD("DAP_CPDP_PVT_chroma_close() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_384 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_384(void) {
    ALOGD("dlb_fft_inv_scl_384() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_512 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_512(void) {
    ALOGD("dlb_fft_fwd_usc_512() called");
    return 0;
}

/* Demangled: ddp_udc_int_hdr_P2powP */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_hdr_P2powP(void) {
    ALOGD("ddp_udc_int_hdr_P2powP() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MAX_TAB_44K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MAX_TAB_44K = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L8 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L8 = NULL;

/* Demangled: ddp_udc_int_abkd_unpddpfixed */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_abkd_unpddpfixed(void) {
    ALOGD("ddp_udc_int_abkd_unpddpfixed() called");
    return 0;
}

/* Demangled: ddp_udc_int_ph90_qmf_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ph90_qmf_process(void) {
    ALOGD("ddp_udc_int_ph90_qmf_process() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_classifier_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_classifier_process(void) {
    ALOGD("DAP_CPDP_PVT_classifier_process() called");
    return 0;
}

/* Demangled: ddp_udc_int_exmd_skipmants */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_exmd_skipmants(void) {
    ALOGD("ddp_udc_int_exmd_skipmants() called");
    return 0;
}

/* Exported Object: ddp_udc_int_A_ROOM_CONFIG_SPKS_HEIGHTS_FRONT */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_A_ROOM_CONFIG_SPKS_HEIGHTS_FRONT = NULL;

/* Demangled: DAP_CPDP_PVT_sben_onset_calc */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_onset_calc(void) {
    ALOGD("DAP_CPDP_PVT_sben_onset_calc() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_640 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_640(void) {
    ALOGD("DLB_r4_inv_fft_640() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_90 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_90(void) {
    ALOGD("dlb_fft_inv_usc_90() called");
    return 0;
}

/* Demangled: ddpi_udc_opendebug */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_opendebug(void) {
    ALOGD("ddpi_udc_opendebug() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_flux_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_flux_process(void) {
    ALOGD("DAP_CPDP_PVT_de_flux_process() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv2_shlLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv2_shlLU_strict(void) {
    ALOGD("DLB_blk_Liir2ssv2_shlLU_strict() called");
    return 0;
}

/* Exported Object: DLB_MFB_TWID64O */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_TWID64O = NULL;

/* Demangled: ddp_udc_int_decorr_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_decorr_process(void) {
    ALOGD("ddp_udc_int_decorr_process() called");
    return 0;
}

/* Demangled: dolby::BufferProvider::BufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProviderC1Ev(void) {
    ALOGD("_ZN5dolby14BufferProviderC1Ev() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_de_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_spec_flux_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_spec_flux_close(void) {
    ALOGD("DAP_CPDP_PVT_spec_flux_close() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_64_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_64_s(void) {
    ALOGD("DLB_r4_inv_fft_64_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_bta_psds2exps */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bta_psds2exps(void) {
    ALOGD("ddp_udc_int_bta_psds2exps() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_rhythm_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_rhythm_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_sben_rhythm_query_scratch() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_a_dvlim_win_256 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_a_dvlim_win_256 = NULL;

/* Exported Object: DAP_CPDP_PVT_A_LTRT3D_DELAYATTEN_SR32KHZ */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LTRT3D_DELAYATTEN_SR32KHZ = NULL;

/* Demangled: DAP_CPDP_PVT_ngcs_diffuse_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_diffuse_init(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_diffuse_init() called");
    return 0;
}

/* Demangled: dlb_blk_delayL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_delayL_flex(void) {
    ALOGD("dlb_blk_delayL_flex() called");
    return 0;
}

/* Demangled: DLB_CLaddCLCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLaddCLCLU_strict(void) {
    ALOGD("DLB_CLaddCLCLU_strict() called");
    return 0;
}

/* Demangled: dolby::AProcessor::setSystemGain(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10AProcessor13setSystemGainEi(void) {
    ALOGD("_ZN5dolby10AProcessor13setSystemGainEi() called");
    return 0;
}

/* Demangled: ddp_udc_int_ecpd_blkinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ecpd_blkinit(void) {
    ALOGD("ddp_udc_int_ecpd_blkinit() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: ddp_udc_int_resolvemeta */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_resolvemeta(void) {
    ALOGD("ddp_udc_int_resolvemeta() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L576_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L576_1 = NULL;

/* Demangled: dlb_fft_inv_usc_96 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_96(void) {
    ALOGD("dlb_fft_inv_usc_96() called");
    return 0;
}

/* Exported Object: ddp_udc_int_qntztab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_qntztab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L576_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L576_2 = NULL;

/* Exported Object: ddp_udc_int_decorr_f1 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_decorr_f1 = NULL;

/* Demangled: DLB_r4_fft_480_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_480_s(void) {
    ALOGD("DLB_r4_fft_480_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_exmd_copy */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_exmd_copy(void) {
    ALOGD("ddp_udc_int_exmd_copy() called");
    return 0;
}

/* Exported Object: ddp_udc_int_decorr_f2 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_decorr_f2 = NULL;

/* Demangled: dap_cpdp_audio_optimizer_bands_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_audio_optimizer_bands_set(void) {
    ALOGD("dap_cpdp_audio_optimizer_bands_set() called");
    return 0;
}

/* Demangled: dap_cpdp_volume_modeler_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_volume_modeler_enable_set(void) {
    ALOGD("dap_cpdp_volume_modeler_enable_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_speech_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_speech_init(void) {
    ALOGD("DAP_CPDP_PVT_de_speech_init() called");
    return 0;
}

/* Exported Object: ddp_udc_int_decorr_f3 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_decorr_f3 = NULL;

/* Exported Object: ddp_udc_int_gbl_cmix2lxrx_tab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_cmix2lxrx_tab = NULL;

/* Demangled: DAP_CPDP_PVT_dap_cpdp_virt_chain_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_virt_chain_init(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_virt_chain_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_pre_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_pre_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_mi_pre_query_scratch() called");
    return 0;
}

/* Demangled: DLB_r4_fft_4_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_4_s(void) {
    ALOGD("DLB_r4_fft_4_s() called");
    return 0;
}

/* Exported Object: ddp_udc_int_decorr_f4 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_decorr_f4 = NULL;

/* Demangled: dap_cpdp_shutdown */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_shutdown(void) {
    ALOGD("dap_cpdp_shutdown() called");
    return 0;
}

/* Exported Object: A_NGCS_UPMIX_PLAN_STEREO_TO_7CH1 */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_STEREO_TO_7CH1 = NULL;

/* Demangled: DAP_CPDP_PVT_hearing_protection_rms_calculation */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hearing_protection_rms_calculation(void) {
    ALOGD("DAP_CPDP_PVT_hearing_protection_rms_calculation() called");
    return 0;
}

/* Demangled: ddp_udc_int_BED_initdefaultctrls */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_BED_initdefaultctrls(void) {
    ALOGD("ddp_udc_int_BED_initdefaultctrls() called");
    return 0;
}

/* Demangled: ddp_udc_int_evobh_end_excluded_segment */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evobh_end_excluded_segment(void) {
    ALOGD("ddp_udc_int_evobh_end_excluded_segment() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_ll_remove_head */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_ll_remove_head(void) {
    ALOGD("ddp_udc_int_evo_ll_remove_head() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_delta_mfcc_query_clip_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_delta_mfcc_query_clip_mem(void) {
    ALOGD("DAP_CPDP_PVT_delta_mfcc_query_clip_mem() called");
    return 0;
}

/* Demangled: DLB_blk_LmaxLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmaxLL_strict(void) {
    ALOGD("DLB_blk_LmaxLL_strict() called");
    return 0;
}

/* Demangled: ddp_udc_int_derive_process_mdat */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_derive_process_mdat(void) {
    ALOGD("ddp_udc_int_derive_process_mdat() called");
    return 0;
}

/* Exported Object: ddp_udc_int_bps_mltplr_tbl */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_bps_mltplr_tbl = NULL;

/* Demangled: DAP_CPDP_PVT_hybrid_filter_synthesis_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hybrid_filter_synthesis_init(void) {
    ALOGD("DAP_CPDP_PVT_hybrid_filter_synthesis_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L144 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L144 = NULL;

/* Demangled: ddp_udc_int_evo_malloc */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_malloc(void) {
    ALOGD("ddp_udc_int_evo_malloc() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_bitstream_size */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_bitstream_size(void) {
    ALOGD("ddp_udc_int_oamdi_get_bitstream_size() called");
    return 0;
}

/* Demangled: dap_cpdp_postgain_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_postgain_set(void) {
    ALOGD("dap_cpdp_postgain_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sone_buffer_channel_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sone_buffer_channel_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_sone_buffer_channel_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_rs_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_rs_process(void) {
    ALOGD("DAP_CPDP_PVT_rs_process() called");
    return 0;
}

/* Demangled: dap_cpdp_volume_and_ieq_process */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_volume_and_ieq_process(void) {
    ALOGD("dap_cpdp_volume_and_ieq_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ltrt3d_stats_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ltrt3d_stats_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_ltrt3d_stats_query_scratch() called");
    return 0;
}

/* Demangled: ddp_udc_int_ms_mixer_query_mem */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ms_mixer_query_mem(void) {
    ALOGD("ddp_udc_int_ms_mixer_query_mem() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_calculate_bitstream_protection */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_calculate_bitstream_protection(void) {
    ALOGD("ddp_udc_int_evo_calculate_bitstream_protection() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::parseMixMatrix(int, int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2Process14parseMixMatrixEiPKi(void) {
    ALOGD("_ZN5dolby11Dap2Process14parseMixMatrixEiPKi() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_acorr_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_acorr_init(void) {
    ALOGD("DAP_CPDP_PVT_acorr_init() called");
    return 0;
}

/* Demangled: hp_height_fdn_and_hrtfsum_process */
extern "C" __attribute__((visibility("default"))) int hp_height_fdn_and_hrtfsum_process(void) {
    ALOGD("hp_height_fdn_and_hrtfsum_process() called");
    return 0;
}

/* Demangled: DLB_CLmixCLCLSSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmixCLCLSSU_strict(void) {
    ALOGD("DLB_CLmixCLCLSSU_strict() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND00 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND00 = NULL;

/* Demangled: ddp_udc_int_evo_get_md */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_get_md(void) {
    ALOGD("ddp_udc_int_evo_get_md() called");
    return 0;
}

/* Exported Object: ddp_udc_int_gbl_ungrp3_opt */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_ungrp3_opt = NULL;

/* Demangled: DAP_CPDP_PVT_clvec_buffer_mixer_coefs_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_clvec_buffer_mixer_coefs_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_clvec_buffer_mixer_coefs_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_spec_flux_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_spec_flux_init(void) {
    ALOGD("DAP_CPDP_PVT_spec_flux_init() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND01 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND01 = NULL;

/* Demangled: DAP_CPDP_PVT_dlb_ex_avg_filter_run */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_ex_avg_filter_run(void) {
    ALOGD("DAP_CPDP_PVT_dlb_ex_avg_filter_run() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_time_add */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_time_add(void) {
    ALOGD("ddp_udc_int_evo_time_add() called");
    return 0;
}

/* Exported Object: ddp_udc_int_A_ROOM_CONFIG_SPKS_BACK_ALT */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_A_ROOM_CONFIG_SPKS_BACK_ALT = NULL;

/* Exported Object: ddp_udc_int_msmix_db_table */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_db_table = NULL;

/* Demangled: DAP_CPDP_PVT_de_hiss_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_hiss_process(void) {
    ALOGD("DAP_CPDP_PVT_de_hiss_process() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND02 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND02 = NULL;

/* Demangled: DLB_blk_LintegrateL_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LintegrateL_setup(void) {
    ALOGD("DLB_blk_LintegrateL_setup() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisS_close */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisS_close(void) {
    ALOGD("DLB_qmf_analysisS_close() called");
    return 0;
}

/* Demangled: ddp_udc_int_resolveddpfrm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_resolveddpfrm(void) {
    ALOGD("ddp_udc_int_resolveddpfrm() called");
    return 0;
}

/* Demangled: dap_cpdp_ltrt3d_decoder_mode_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_ltrt3d_decoder_mode_set(void) {
    ALOGD("dap_cpdp_ltrt3d_decoder_mode_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_rap_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_rap_process(void) {
    ALOGD("DAP_CPDP_PVT_sben_rap_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sbpp_clip_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbpp_clip_process(void) {
    ALOGD("DAP_CPDP_PVT_sbpp_clip_process() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND03 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND03 = NULL;

/* Demangled: DLB_r4_fft_192 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_192(void) {
    ALOGD("DLB_r4_fft_192() called");
    return 0;
}

/* Exported Object: dlb_cos_16_full_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_16_full_scl = NULL;

/* Exported Object: dlb_cos_32_full_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_32_full_scl = NULL;

/* Demangled: dolby::AProcessor::~AProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10AProcessorD1Ev(void) {
    ALOGD("_ZN5dolby10AProcessorD1Ev() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_set_md_update_info */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_set_md_update_info(void) {
    ALOGD("ddp_udc_int_oamdi_set_md_update_info() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_oa_element_object_description_read_only */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_oa_element_object_description_read_only(void) {
    ALOGD("ddp_udc_int_oamdi_get_oa_element_object_description_read_only() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND04 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND04 = NULL;

/* Demangled: dlb_fft_inv_scl_1024 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_1024(void) {
    ALOGD("dlb_fft_inv_scl_1024() called");
    return 0;
}

/* Exported Object: ddp_udc_int_decorr_subbndsize_tab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_decorr_subbndsize_tab = NULL;

/* Demangled: ddp_udc_int_dlb_bitbuf_fast_read */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_fast_read(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_fast_read() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int const*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_VIRTUAL_BASS_MOD_SHIFT_POS */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_VIRTUAL_BASS_MOD_SHIFT_POS = NULL;

/* Demangled: DAP_CPDP_PVT_modeler_vlm_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_modeler_vlm_process(void) {
    ALOGD("DAP_CPDP_PVT_modeler_vlm_process() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND05 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND05 = NULL;

/* Exported Object: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND06 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND06 = NULL;

/* Demangled: DLB_r4_fft_16_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_16_s(void) {
    ALOGD("DLB_r4_fft_16_s() called");
    return 0;
}

/* Demangled: ddp_udc_int_spxd_frminit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_spxd_frminit(void) {
    ALOGD("ddp_udc_int_spxd_frminit() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND07 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND07 = NULL;

/* Demangled: dlb_blk_LmixL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmixL_flex(void) {
    ALOGD("dlb_blk_LmixL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L320 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L320 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L384 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L384 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L120 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L120 = NULL;

/* Exported Object: dlb_odd_fft_cplx_inv_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_odd_fft_cplx_inv_scl = NULL;

/* Demangled: dlb_vec_LmpyLSU_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LmpyLSU_inplace_flex(void) {
    ALOGD("dlb_vec_LmpyLSU_inplace_flex() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sbpp_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sbpp_close(void) {
    ALOGD("DAP_CPDP_PVT_sbpp_close() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_2048 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_2048(void) {
    ALOGD("dlb_fft_inv_scl_2048() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_cpdp_end_chain_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_cpdp_end_chain_process(void) {
    ALOGD("DAP_CPDP_PVT_dap_cpdp_end_chain_process() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_48_vec_syn = NULL;

/* Demangled: dap_cpdp_ieq_bands_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_ieq_bands_set(void) {
    ALOGD("dap_cpdp_ieq_bands_set() called");
    return 0;
}

/* Exported Object: DAP_UPMIX_MODE_STEREO_TO_5D1D2_GAMING */
extern "C" __attribute__((visibility("default"))) void* DAP_UPMIX_MODE_STEREO_TO_5D1D2_GAMING = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L640_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L640_cos = NULL;

/* Demangled: ddp_udc_int_abkd_sysinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_abkd_sysinit(void) {
    ALOGD("ddp_udc_int_abkd_sysinit() called");
    return 0;
}

/* Demangled: ddp_udc_int_jocdec_get_info */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocdec_get_info(void) {
    ALOGD("ddp_udc_int_jocdec_get_info() called");
    return 0;
}

/* Demangled: ddp_udc_int_processor_reset */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_processor_reset(void) {
    ALOGD("ddp_udc_int_processor_reset() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmixgaininterptab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmixgaininterptab = NULL;

/* Demangled: DAP_CPDP_PVT_dlb_shift_ex_avg_filter_run */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_shift_ex_avg_filter_run(void) {
    ALOGD("DAP_CPDP_PVT_dlb_shift_ex_avg_filter_run() called");
    return 0;
}

/* Demangled: ddp_udc_int_point_panner_compute_gains_between_rows */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_point_panner_compute_gains_between_rows(void) {
    ALOGD("ddp_udc_int_point_panner_compute_gains_between_rows() called");
    return 0;
}

/* Demangled: DLB_CLmpy_recipCLLIU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpy_recipCLLIU_strict(void) {
    ALOGD("DLB_CLmpy_recipCLLIU_strict() called");
    return 0;
}

/* Demangled: ddp_udc_int_processfrm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_processfrm(void) {
    ALOGD("ddp_udc_int_processfrm() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_hamming_weight_frm32_inv_sum */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_hamming_weight_frm32_inv_sum = NULL;

/* Exported Object: DAP_CPDP_PVT_SURROUND_COMPRESSOR_T_MAX_DB */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_SURROUND_COMPRESSOR_T_MAX_DB = NULL;

/* Demangled: DLB_blk_Liir2df1L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2df1L_strict(void) {
    ALOGD("DLB_blk_Liir2df1L_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_288 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_288(void) {
    ALOGD("dlb_fft_fwd_usc_288() called");
    return 0;
}

/* Exported Object: ddp_udc_int_f4_num */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_f4_num = NULL;

/* Demangled: ddp_udc_int_converter_open */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_converter_open(void) {
    ALOGD("ddp_udc_int_converter_open() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_distortion_get_band_masking_factor */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_distortion_get_band_masking_factor(void) {
    ALOGD("DAP_CPDP_PVT_arle_distortion_get_band_masking_factor() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7D1D2 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7D1D2 = NULL;

/* Demangled: DAP_CPDP_PVT_lfra_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lfra_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_lfra_query_memory() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_SURROUND_COMPRESSOR_NOISE_GATE_RECIPROCAL_DIFF */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_SURROUND_COMPRESSOR_NOISE_GATE_RECIPROCAL_DIFF = NULL;

/* Exported Object: ddp_udc_int_bap6_vqtab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_bap6_vqtab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L128 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L128 = NULL;

/* Demangled: ddp_udc_int_oamdi_get_oa_element_headphone */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_oa_element_headphone(void) {
    ALOGD("ddp_udc_int_oamdi_get_oa_element_headphone() called");
    return 0;
}

/* Demangled: dolby::DdpDynamicConfig::~DdpDynamicConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DdpDynamicConfigD0Ev(void) {
    ALOGD("_ZN5dolby16DdpDynamicConfigD0Ev() called");
    return 0;
}

/* Demangled: dap_cpdp_regulator_overdrive_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_regulator_overdrive_set(void) {
    ALOGD("dap_cpdp_regulator_overdrive_set() called");
    return 0;
}

/* Demangled: dlb_CLcopyCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLcopyCLU_flex(void) {
    ALOGD("dlb_CLcopyCLU_flex() called");
    return 0;
}

/* Demangled: ddp_udc_int_frmd_decfrmid */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_frmd_decfrmid(void) {
    ALOGD("ddp_udc_int_frmd_decfrmid() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_ex_delay_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_ex_delay_init(void) {
    ALOGD("DAP_CPDP_PVT_dlb_ex_delay_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_init(void) {
    ALOGD("DAP_CPDP_PVT_sben_init() called");
    return 0;
}

/* Demangled: dolby::Dap2Process::~Dap2Process() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11Dap2ProcessD2Ev(void) {
    ALOGD("_ZN5dolby11Dap2ProcessD2Ev() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_pvt_graphic_equalizer_update_control */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_pvt_graphic_equalizer_update_control(void) {
    ALOGD("DAP_CPDP_PVT_dap_pvt_graphic_equalizer_update_control() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_delay_line_write */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_delay_line_write(void) {
    ALOGD("DAP_CPDP_PVT_delay_line_write() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_zcr_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_zcr_init(void) {
    ALOGD("DAP_CPDP_PVT_zcr_init() called");
    return 0;
}

/* Demangled: dlb_blk_LnrrecipLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LnrrecipLU_flex(void) {
    ALOGD("dlb_blk_LnrrecipLU_flex() called");
    return 0;
}

/* Demangled: ddp_udc_int_abk_calcminsnrflg */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_abk_calcminsnrflg(void) {
    ALOGD("ddp_udc_int_abk_calcminsnrflg() called");
    return 0;
}

/* Exported Object: ddp_udc_int_huff_tree_fine_coeff_sparse */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_huff_tree_fine_coeff_sparse = NULL;

/* Demangled: ddp_udc_int_oamd_framer_get_next_gradient_change */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamd_framer_get_next_gradient_change(void) {
    ALOGD("ddp_udc_int_oamd_framer_get_next_gradient_change() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L360 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L360 = NULL;

/* Demangled: ddp_udc_int_chnd_blkinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_chnd_blkinit(void) {
    ALOGD("ddp_udc_int_chnd_blkinit() called");
    return 0;
}

/* Exported Object: ddp_udc_int_brxcos */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_brxcos = NULL;

/* Demangled: ddp_udc_int_interpol_mult_UM */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_interpol_mult_UM(void) {
    ALOGD("ddp_udc_int_interpol_mult_UM() called");
    return 0;
}

/* Demangled: ddp_udc_int_obj_render_query_memory */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_obj_render_query_memory(void) {
    ALOGD("ddp_udc_int_obj_render_query_memory() called");
    return 0;
}

/* Demangled: dap_cpdp_process */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_process(void) {
    ALOGD("dap_cpdp_process() called");
    return 0;
}

/* Demangled: DLB_blk_LmixnL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixnL_strict(void) {
    ALOGD("DLB_blk_LmixnL_strict() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_vec_max_index */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_max_index(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_max_index() called");
    return 0;
}

/* Demangled: dolby::AProcessor::setPregain(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10AProcessor10setPregainEi(void) {
    ALOGD("_ZN5dolby10AProcessor10setPregainEi() called");
    return 0;
}

/* Demangled: ddp_udc_int_get_intloud_mdat */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_get_intloud_mdat(void) {
    ALOGD("ddp_udc_int_get_intloud_mdat() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mi_vec_norm */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_norm(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_norm() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_intelligent_eq_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_intelligent_eq_init(void) {
    ALOGD("DAP_CPDP_PVT_intelligent_eq_init() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_get_smoothed_gain */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_get_smoothed_gain(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_get_smoothed_gain() called");
    return 0;
}

/* Demangled: DLB_CLmfb_p10km_analysisL_legacy */
extern "C" __attribute__((visibility("default"))) int DLB_CLmfb_p10km_analysisL_legacy(void) {
    ALOGD("DLB_CLmfb_p10km_analysisL_legacy() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpddpbai */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpddpbai(void) {
    ALOGD("ddp_udc_int_unpddpbai() called");
    return 0;
}

/* Demangled: ddp_udc_int_setsnroffst */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_setsnroffst(void) {
    ALOGD("ddp_udc_int_setsnroffst() called");
    return 0;
}

/* Demangled: ddp_udc_int_ph90_qmf_get_delay_slots */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ph90_qmf_get_delay_slots(void) {
    ALOGD("ddp_udc_int_ph90_qmf_get_delay_slots() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_clear */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_clear(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_clear() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_get_norm_en */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_get_norm_en(void) {
    ALOGD("DAP_CPDP_PVT_sben_get_norm_en() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_feature_query_clip_mem */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_feature_query_clip_mem(void) {
    ALOGD("DAP_CPDP_PVT_feature_query_clip_mem() called");
    return 0;
}

/* Demangled: DLB_r4_fft_2 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_2(void) {
    ALOGD("DLB_r4_fft_2() called");
    return 0;
}

/* Demangled: evo_parser_get_pi_pd */
extern "C" __attribute__((visibility("default"))) int evo_parser_get_pi_pd(void) {
    ALOGD("evo_parser_get_pi_pd() called");
    return 0;
}

/* Exported Object: ddp_udc_int_mtx_rematbnds */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_mtx_rematbnds = NULL;

/* Demangled: ddp_udc_int_parser_query_mem */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_parser_query_mem(void) {
    ALOGD("ddp_udc_int_parser_query_mem() called");
    return 0;
}

/* Demangled: DLB_vec_LmpyLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LmpyLSU_strict(void) {
    ALOGD("DLB_vec_LmpyLSU_strict() called");
    return 0;
}

/* Demangled: ddp_udc_int_BED_run */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_BED_run(void) {
    ALOGD("ddp_udc_int_BED_run() called");
    return 0;
}

/* Demangled: dap_cpdp_regulator_sibilance_suppress_enable_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_regulator_sibilance_suppress_enable_set(void) {
    ALOGD("dap_cpdp_regulator_sibilance_suppress_enable_set() called");
    return 0;
}

/* Demangled: DLB_r4_fft_4 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_4(void) {
    ALOGD("DLB_r4_fft_4() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_1024 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_1024(void) {
    ALOGD("dlb_fft_inv_usc_1024() called");
    return 0;
}

/* Demangled: DLB_r4_cplx_fwd_pair */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_fwd_pair(void) {
    ALOGD("DLB_r4_cplx_fwd_pair() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_clvec_buffer_mixer_coefs_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_clvec_buffer_mixer_coefs_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_clvec_buffer_mixer_coefs_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_pvt_regulator_params_update_control */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_pvt_regulator_params_update_control(void) {
    ALOGD("DAP_CPDP_PVT_dap_pvt_regulator_params_update_control() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_modulation_query_scratch */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_modulation_query_scratch(void) {
    ALOGD("DAP_CPDP_PVT_sben_modulation_query_scratch() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_get_target_gain */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_get_target_gain(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_get_target_gain() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_evaluation_is_demo */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_evaluation_is_demo(void) {
    ALOGD("DAP_CPDP_PVT_evaluation_is_demo() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_ngcs_steering_run */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_steering_run(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_steering_run() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_spec_calc_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_spec_calc_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_spec_calc_query_memory() called");
    return 0;
}

/* Demangled: DLB_r4_fft_6 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_6(void) {
    ALOGD("DLB_r4_fft_6() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_time_le */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_time_le(void) {
    ALOGD("ddp_udc_int_evo_time_le() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int const*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE10do_compareEPKvS7_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE10do_compareEPKvS7_() called");
    return 0;
}

/* Demangled: dap_cpdp_vis_bands_get */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_vis_bands_get(void) {
    ALOGD("dap_cpdp_vis_bands_get() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_get_scle_music_confidence */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_get_scle_music_confidence(void) {
    ALOGD("DAP_CPDP_PVT_get_scle_music_confidence() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_90_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_90_s(void) {
    ALOGD("DLB_r4_inv_fft_90_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_160 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_160(void) {
    ALOGD("dlb_fft_inv_scl_160() called");
    return 0;
}

/* Demangled: ddp_udc_int_BED_query_static_mem */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_BED_query_static_mem(void) {
    ALOGD("ddp_udc_int_BED_query_static_mem() called");
    return 0;
}

/* Demangled: ddp_udc_int_converter_convert_output_pcm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_converter_convert_output_pcm(void) {
    ALOGD("ddp_udc_int_converter_convert_output_pcm() called");
    return 0;
}

/* Demangled: ddp_udc_int_dvlim_get_peak */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dvlim_get_peak(void) {
    ALOGD("ddp_udc_int_dvlim_get_peak() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_trim_config */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_trim_config(void) {
    ALOGD("ddp_udc_int_oamdi_get_trim_config() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_hearing_protection_update_control */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_hearing_protection_update_control(void) {
    ALOGD("dap_cpdp_pvt_hearing_protection_update_control() called");
    return 0;
}

/* Demangled: DLB_r4_fft_8 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_8(void) {
    ALOGD("DLB_r4_fft_8() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_768 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_768(void) {
    ALOGD("dlb_fft_fwd_usc_768() called");
    return 0;
}

/* Demangled: ddp_udc_int_processor_mix_slot */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_processor_mix_slot(void) {
    ALOGD("ddp_udc_int_processor_mix_slot() called");
    return 0;
}

/* Exported Object: ddp_udc_int_DELTA_SOURCE_POS_X_Y */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_DELTA_SOURCE_POS_X_Y = NULL;

/* Demangled: DAP_CPDP_PVT_classifier_set_binaural_enable */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_classifier_set_binaural_enable(void) {
    ALOGD("DAP_CPDP_PVT_classifier_set_binaural_enable() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dlb_milib_get_delay_samples */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dlb_milib_get_delay_samples(void) {
    ALOGD("DAP_CPDP_PVT_dlb_milib_get_delay_samples() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_SMOOTH_COEF_TAB */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_SMOOTH_COEF_TAB = NULL;

/* Demangled: DAP_CPDP_PVT_surround_compressor_smooth_power_approximation */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_surround_compressor_smooth_power_approximation(void) {
    ALOGD("DAP_CPDP_PVT_surround_compressor_smooth_power_approximation() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_180 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_180(void) {
    ALOGD("DLB_r4_inv_fft_180() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_2048 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_2048(void) {
    ALOGD("dlb_fft_inv_usc_2048() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisL_init */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_init(void) {
    ALOGD("DLB_qmf_analysisL_init() called");
    return 0;
}

/* Exported Object: ddp_udc_int_DELTA_Z_SAMPLES */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_DELTA_Z_SAMPLES = NULL;

/* Demangled: ddp_udc_int_oamdi_dimensional_trim_config_set_auto */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_dimensional_trim_config_set_auto(void) {
    ALOGD("ddp_udc_int_oamdi_dimensional_trim_config_set_auto() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF1_COMPENSATION */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF1_COMPENSATION = NULL;

/* Demangled: DAP_CPDP_PVT_sben_modulation_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_modulation_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_sben_modulation_query_memory() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_get_adaptive_profile_weight */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_get_adaptive_profile_weight(void) {
    ALOGD("DAP_CPDP_PVT_get_adaptive_profile_weight() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_NYQUIST_FILTERS_844_LOW_LATENCY_FILT4 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_NYQUIST_FILTERS_844_LOW_LATENCY_FILT4 = NULL;

/* Exported Object: DAP_CPDP_PVT_NYQUIST_FILTERS_844_STANDARD_FILT4 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_NYQUIST_FILTERS_844_STANDARD_FILT4 = NULL;

/* Demangled: dlb_blk_Lattack_decay_peak_iir1L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lattack_decay_peak_iir1L_flex(void) {
    ALOGD("dlb_blk_Lattack_decay_peak_iir1L_flex() called");
    return 0;
}

/* Demangled: DLB_CLmpyCLCSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpyCLCSU_strict(void) {
    ALOGD("DLB_CLmpyCLCSU_strict() called");
    return 0;
}

/* Exported Object: ddp_udc_int_zsin1 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_zsin1 = NULL;

/* Exported Object: vtable for android::Vector<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIjEE = NULL;

/* Demangled: DAP_CPDP_PVT_ngcs_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_ngcs_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_ngcs_query_memory() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv3L_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv3L_inplace_flex(void) {
    ALOGD("dlb_blk_Liir2ssv3L_inplace_flex() called");
    return 0;
}

/* Exported Object: ddp_udc_int_zsin2 */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_zsin2 = NULL;

/* Demangled: dap_cpdp_virtual_bass_mix_frequency_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_virtual_bass_mix_frequency_set(void) {
    ALOGD("dap_cpdp_virtual_bass_mix_frequency_set() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_sysgains_update_control */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_sysgains_update_control(void) {
    ALOGD("dap_cpdp_pvt_sysgains_update_control() called");
    return 0;
}

/* Demangled: dlb_forwardModulationReal */
extern "C" __attribute__((visibility("default"))) int dlb_forwardModulationReal(void) {
    ALOGD("dlb_forwardModulationReal() called");
    return 0;
}

/* Demangled: dap_cpdp_graphic_equalizer_bands_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_graphic_equalizer_bands_set(void) {
    ALOGD("dap_cpdp_graphic_equalizer_bands_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_compressor_threshold_calculation */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_compressor_threshold_calculation(void) {
    ALOGD("DAP_CPDP_PVT_arle_compressor_threshold_calculation() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_zcr_clip_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_zcr_clip_process(void) {
    ALOGD("DAP_CPDP_PVT_zcr_clip_process() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_NYQUIST_FILTERS_844_LOW_LATENCY_FILT8 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_NYQUIST_FILTERS_844_LOW_LATENCY_FILT8 = NULL;

/* Exported Object: DAP_CPDP_PVT_NYQUIST_FILTERS_844_STANDARD_FILT8 */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_NYQUIST_FILTERS_844_STANDARD_FILT8 = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P4 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4 = NULL;

/* Demangled: dlb_CLmacCLCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmacCLCLU_flex(void) {
    ALOGD("dlb_CLmacCLCLU_flex() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5 = NULL;

/* Demangled: ddpi_udc_evolutionquickaccess */
extern "C" __attribute__((visibility("default"))) int ddpi_udc_evolutionquickaccess(void) {
    ALOGD("ddpi_udc_evolutionquickaccess() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_ddp_pan_LEFT_RGHT */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_ddp_pan_LEFT_RGHT = NULL;

/* Demangled: DLB_blk_Liir2ssL_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssL_setup(void) {
    ALOGD("DLB_blk_Liir2ssL_setup() called");
    return 0;
}

/* Exported Object: ddp_udc_int_gbl_sampratetab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_gbl_sampratetab = NULL;

/* Exported Object: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_COMP_RELEASE_ALPHA_TAB */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_COMP_RELEASE_ALPHA_TAB = NULL;

/* Demangled: DLB_r4_inv_fft_72_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_72_s(void) {
    ALOGD("DLB_r4_inv_fft_72_s() called");
    return 0;
}

/* Demangled: evo_parser_get_dyn_rng_prof */
extern "C" __attribute__((visibility("default"))) int evo_parser_get_dyn_rng_prof(void) {
    ALOGD("evo_parser_get_dyn_rng_prof() called");
    return 0;
}

/* Demangled: ddp_udc_int_ms_mixer_open */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_ms_mixer_open(void) {
    ALOGD("ddp_udc_int_ms_mixer_open() called");
    return 0;
}

/* Demangled: dap_cpdp_hearing_protection_attenuation_attack_time_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_hearing_protection_attenuation_attack_time_set(void) {
    ALOGD("dap_cpdp_hearing_protection_attenuation_attack_time_set() called");
    return 0;
}

/* Demangled: DLB_CLmpyCLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpyCLSU_strict(void) {
    ALOGD("DLB_CLmpyCLSU_strict() called");
    return 0;
}

/* Demangled: DLB_blk_LmixLLLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixLLLL_strict(void) {
    ALOGD("DLB_blk_LmixLLLL_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_60_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_60_s(void) {
    ALOGD("DLB_r4_fft_60_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_240 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_240(void) {
    ALOGD("dlb_fft_fwd_scl_240() called");
    return 0;
}

/* Exported Object: DLB_MFB_TWID256E */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_TWID256E = NULL;

/* Demangled: dlb_inverseModulationReal */
extern "C" __attribute__((visibility("default"))) int dlb_inverseModulationReal(void) {
    ALOGD("dlb_inverseModulationReal() called");
    return 0;
}

/* Demangled: ddp_udc_int_exmd_skipahtmants */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_exmd_skipahtmants(void) {
    ALOGD("ddp_udc_int_exmd_skipahtmants() called");
    return 0;
}

/* Demangled: ddp_udc_int_chnd_unpblk */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_chnd_unpblk(void) {
    ALOGD("ddp_udc_int_chnd_unpblk() called");
    return 0;
}

/* Demangled: DLB_vec_Lsum_sqrLUU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_Lsum_sqrLUU_strict(void) {
    ALOGD("DLB_vec_Lsum_sqrLUU_strict() called");
    return 0;
}

/* Exported Object: ddp_udc_int_msmix_chantab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_msmix_chantab = NULL;

/* Demangled: ddp_udc_int_oamdi_set_bed_object_defaults */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_set_bed_object_defaults(void) {
    ALOGD("ddp_udc_int_oamdi_set_bed_object_defaults() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisS_init */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_init(void) {
    ALOGD("DLB_qmf_synthesisS_init() called");
    return 0;
}

/* Demangled: dlb_qmf_analysisL_open */
extern "C" __attribute__((visibility("default"))) int dlb_qmf_analysisL_open(void) {
    ALOGD("dlb_qmf_analysisL_open() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_get_transcoded_md */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_get_transcoded_md(void) {
    ALOGD("ddp_udc_int_evo_get_transcoded_md() called");
    return 0;
}

/* Demangled: ddp_udc_int_dil_pack */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dil_pack(void) {
    ALOGD("ddp_udc_int_dil_pack() called");
    return 0;
}

/* Demangled: dolby::Ac4DecAudioBufferProvider::set(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25Ac4DecAudioBufferProvider3setEPvi(void) {
    ALOGD("_ZN5dolby25Ac4DecAudioBufferProvider3setEPvi() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_hist_get_num_vals_in_hist */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_hist_get_num_vals_in_hist(void) {
    ALOGD("DAP_CPDP_PVT_hist_get_num_vals_in_hist() called");
    return 0;
}

/* Demangled: dlb_BLmpy_scale_xBLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmpy_scale_xBLSU_flex(void) {
    ALOGD("dlb_BLmpy_scale_xBLSU_flex() called");
    return 0;
}

/* Demangled: dolby::AProcessor::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10AProcessor5flushEv(void) {
    ALOGD("_ZN5dolby10AProcessor5flushEv() called");
    return 0;
}

/* Demangled: dap_cpdp_complex_equalizer_tuning_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_complex_equalizer_tuning_set(void) {
    ALOGD("dap_cpdp_complex_equalizer_tuning_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_lfra_frame_process */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_lfra_frame_process(void) {
    ALOGD("DAP_CPDP_PVT_lfra_frame_process() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_get_binaural_event_weight */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_get_binaural_event_weight(void) {
    ALOGD("DAP_CPDP_PVT_get_binaural_event_weight() called");
    return 0;
}

/* Demangled: android::DDPDecoder::DDPDecoder(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoderC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android10DDPDecoderC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Exported Object: ddp_udc_int_dialexp */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_dialexp = NULL;

/* Demangled: ddp_udc_int_evo_time_lt */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_time_lt(void) {
    ALOGD("ddp_udc_int_evo_time_lt() called");
    return 0;
}

/* Demangled: ddp_udc_int_speaker_config_position_get */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_speaker_config_position_get(void) {
    ALOGD("ddp_udc_int_speaker_config_position_get() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_compr_state_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_compr_state_init(void) {
    ALOGD("DAP_CPDP_PVT_de_compr_state_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_crc_pacddfrm */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_crc_pacddfrm(void) {
    ALOGD("ddp_udc_int_crc_pacddfrm() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_128_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_128_s(void) {
    ALOGD("DLB_r4_inv_fft_128_s() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L64_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L64_1 = NULL;

/* Demangled: DLB_qmf_analysisL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_query_mem(void) {
    ALOGD("DLB_qmf_analysisL_query_mem() called");
    return 0;
}

/* Demangled: ddp_udc_int_parser_get_object_present_flag */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_parser_get_object_present_flag(void) {
    ALOGD("ddp_udc_int_parser_get_object_present_flag() called");
    return 0;
}

/* Exported Object: DAP_UPMIX_MODE_STEREO_TO_7D1D4_GAMING */
extern "C" __attribute__((visibility("default"))) void* DAP_UPMIX_MODE_STEREO_TO_7D1D4_GAMING = NULL;

/* Demangled: dlb_fft_inv_scl_640 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_640(void) {
    ALOGD("dlb_fft_inv_scl_640() called");
    return 0;
}

/* Demangled: ddp_udc_int_intloud_dec_process */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_intloud_dec_process(void) {
    ALOGD("ddp_udc_int_intloud_dec_process() called");
    return 0;
}

/* Exported Object: ddp_udc_int_bndnotchexptab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_bndnotchexptab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L64_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L64_2 = NULL;

/* Exported Object: ddp_udc_int_A_ROOM_CONFIG_SPKS_BACK_CENTRE */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_A_ROOM_CONFIG_SPKS_BACK_CENTRE = NULL;

/* Demangled: DAP_CPDP_PVT_sben_rap_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_rap_close(void) {
    ALOGD("DAP_CPDP_PVT_sben_rap_close() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_TAB_32K */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_TAB_32K = NULL;

/* Demangled: dlb_blk_Lattack_decay_iir1L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lattack_decay_iir1L_flex(void) {
    ALOGD("dlb_blk_Lattack_decay_iir1L_flex() called");
    return 0;
}

/* Demangled: ddp_udc_int_chnd_copy */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_chnd_copy(void) {
    ALOGD("ddp_udc_int_chnd_copy() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_skip */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_skip(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_skip() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_shl */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_shl(void) {
    ALOGD("DLB_hybrid_analysisCL_shl() called");
    return 0;
}

/* Demangled: ddp_udc_int_bsod_skip */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bsod_skip(void) {
    ALOGD("ddp_udc_int_bsod_skip() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_de_clear */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_de_clear(void) {
    ALOGD("DAP_CPDP_PVT_de_clear() called");
    return 0;
}

/* Demangled: ddp_udc_int_evo_generate_hash */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_evo_generate_hash(void) {
    ALOGD("ddp_udc_int_evo_generate_hash() called");
    return 0;
}

/* Demangled: ddp_udc_int_room_config_warping_enable */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_room_config_warping_enable(void) {
    ALOGD("ddp_udc_int_room_config_warping_enable() called");
    return 0;
}

/* Demangled: DLB_Sqmf_synthesisL */
extern "C" __attribute__((visibility("default"))) int DLB_Sqmf_synthesisL(void) {
    ALOGD("DLB_Sqmf_synthesisL() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamdi_get_oa_element_dimensional_trim_read_only */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamdi_get_oa_element_dimensional_trim_read_only(void) {
    ALOGD("ddp_udc_int_oamdi_get_oa_element_dimensional_trim_read_only() called");
    return 0;
}

/* Exported Object: ddp_udc_int_A_ROOM_CONFIG_SPKS_CENTRE_ALT */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_A_ROOM_CONFIG_SPKS_CENTRE_ALT = NULL;

/* Demangled: DAP_CPDP_PVT_intelligent_eq_query_memory */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_intelligent_eq_query_memory(void) {
    ALOGD("DAP_CPDP_PVT_intelligent_eq_query_memory() called");
    return 0;
}

/* Demangled: ddp_udc_int_dlb_bitbuf_align */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_dlb_bitbuf_align(void) {
    ALOGD("ddp_udc_int_dlb_bitbuf_align() called");
    return 0;
}

/* Demangled: ddp_udc_int_oamd_trans_program_output_compare */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_oamd_trans_program_output_compare(void) {
    ALOGD("ddp_udc_int_oamd_trans_program_output_compare() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_arle_gain_smooth_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_arle_gain_smooth_init(void) {
    ALOGD("DAP_CPDP_PVT_arle_gain_smooth_init() called");
    return 0;
}

/* Demangled: dap_cpdp_pvt_virtualization_supported */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_pvt_virtualization_supported(void) {
    ALOGD("dap_cpdp_pvt_virtualization_supported() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_sben_modulation_close */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_sben_modulation_close(void) {
    ALOGD("DAP_CPDP_PVT_sben_modulation_close() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_DE_COMPR_DIV_COEFS */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_DE_COMPR_DIV_COEFS = NULL;

/* Demangled: dlb_fft_fwd_scl_480 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_480(void) {
    ALOGD("dlb_fft_fwd_scl_480() called");
    return 0;
}

/* Demangled: ddp_udc_int_tpnd_sysinit */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_tpnd_sysinit(void) {
    ALOGD("ddp_udc_int_tpnd_sysinit() called");
    return 0;
}

/* Exported Object: A_NGCS_UPMIX_PLAN_7CH1_TO_5D1D2 */
extern "C" __attribute__((visibility("default"))) void* A_NGCS_UPMIX_PLAN_7CH1_TO_5D1D2 = NULL;

/* Demangled: DAP_CPDP_PVT_mi_vec_sum */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mi_vec_sum(void) {
    ALOGD("DAP_CPDP_PVT_mi_vec_sum() called");
    return 0;
}

/* Demangled: dlb_vec_Lmask_rev_coefLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_Lmask_rev_coefLSU_flex(void) {
    ALOGD("dlb_vec_Lmask_rev_coefLSU_flex() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dap_pvt_bass_enhancer_param_init */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dap_pvt_bass_enhancer_param_init(void) {
    ALOGD("DAP_CPDP_PVT_dap_pvt_bass_enhancer_param_init() called");
    return 0;
}

/* Demangled: ddp_udc_int_woad_decode */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_woad_decode(void) {
    ALOGD("ddp_udc_int_woad_decode() called");
    return 0;
}

/* Demangled: ddp_udc_int_BED_initbufs */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_BED_initbufs(void) {
    ALOGD("ddp_udc_int_BED_initbufs() called");
    return 0;
}

/* Demangled: ddp_udc_int_bso_copy */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_bso_copy(void) {
    ALOGD("ddp_udc_int_bso_copy() called");
    return 0;
}

/* Demangled: ddp_udc_int_unpack_pgm_bnd_cnt_value */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_unpack_pgm_bnd_cnt_value(void) {
    ALOGD("ddp_udc_int_unpack_pgm_bnd_cnt_value() called");
    return 0;
}

/* Exported Object: DAP_CPDP_PVT_A_LTRT3D_BH9550_714_CONV */
extern "C" __attribute__((visibility("default"))) void* DAP_CPDP_PVT_A_LTRT3D_BH9550_714_CONV = NULL;

/* Demangled: DLB_blk_Liir2ssv2L_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv2L_inplace_strict(void) {
    ALOGD("DLB_blk_Liir2ssv2L_inplace_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L12 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L12 = NULL;

/* Demangled: android::DDPDecoder::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoder4stopEv(void) {
    ALOGD("_ZN7android10DDPDecoder4stopEv() called");
    return 0;
}

/* Demangled: android::DDPDecoder::~DDPDecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10DDPDecoderD2Ev(void) {
    ALOGD("_ZN7android10DDPDecoderD2Ev() called");
    return 0;
}

/* Exported Object: ddp_udc_int_floortab */
extern "C" __attribute__((visibility("default"))) void* ddp_udc_int_floortab = NULL;

/* Demangled: DLB_r4_inv_fft_4_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_4_s(void) {
    ALOGD("DLB_r4_inv_fft_4_s() called");
    return 0;
}

/* Demangled: DLB_fft_CLfwd_scaledL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLfwd_scaledL(void) {
    ALOGD("DLB_fft_CLfwd_scaledL() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_reset_channel */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_mfb_rcp10km_ana_reset_channel(void) {
    ALOGD("DAP_CPDP_PVT_mfb_rcp10km_ana_reset_channel() called");
    return 0;
}

/* Demangled: DLB_hybrid_synthesisCL_open */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_synthesisCL_open(void) {
    ALOGD("DLB_hybrid_synthesisCL_open() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_720 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_720(void) {
    ALOGD("dlb_fft_fwd_scl_720() called");
    return 0;
}

/* Demangled: ddp_udc_int_jocdec_query_mem */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_jocdec_query_mem(void) {
    ALOGD("ddp_udc_int_jocdec_query_mem() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L15 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L15 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L576 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L576 = NULL;

/* Demangled: ddp_udc_int_mixer_query_mem */
extern "C" __attribute__((visibility("default"))) int ddp_udc_int_mixer_query_mem(void) {
    ALOGD("ddp_udc_int_mixer_query_mem() called");
    return 0;
}

/* Demangled: dap_cpdp_regulator_tuning_set */
extern "C" __attribute__((visibility("default"))) int dap_cpdp_regulator_tuning_set(void) {
    ALOGD("dap_cpdp_regulator_tuning_set() called");
    return 0;
}

/* Demangled: DAP_CPDP_PVT_dvlim_set_peak */
extern "C" __attribute__((visibility("default"))) int DAP_CPDP_PVT_dvlim_set_peak(void) {
    ALOGD("DAP_CPDP_PVT_dvlim_set_peak() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L16 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L16 = NULL;

/* Demangled: DLB_r4_inv_fft_36_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_36_s(void) {
    ALOGD("DLB_r4_inv_fft_36_s() called");
    return 0;
}
