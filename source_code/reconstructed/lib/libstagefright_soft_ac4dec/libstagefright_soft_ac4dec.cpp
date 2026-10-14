/*
 * Reverse-Engineered Source for: libstagefright_soft_ac4dec.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libstagefright_soft_ac4dec"

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
#include "libstagefright_soft_ac4dec.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: dlb_ac4dec_reconstruct_table */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_reconstruct_table(void) {
    ALOGD("dlb_ac4dec_reconstruct_table() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_steering_get_segment */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_steering_get_segment(void) {
    ALOGD("AC4DEC_ngcs_steering_get_segment() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_get_frame_duration */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_get_frame_duration(void) {
    ALOGD("AC4DEC_decoder_get_frame_duration() called");
    return 0;
}

/* Demangled: AC4DEC_sf_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sf_query_mem(void) {
    ALOGD("AC4DEC_sf_query_mem() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_set_loud_pres_de_enable */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_set_loud_pres_de_enable(void) {
    ALOGD("dlb_ac4dec_v2_dec_set_loud_pres_de_enable() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_aspx */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx = NULL;

/* Demangled: AC4DEC_speaker_config_add_speakers */
extern "C" __attribute__((visibility("default"))) int AC4DEC_speaker_config_add_speakers(void) {
    ALOGD("AC4DEC_speaker_config_add_speakers() called");
    return 0;
}

/* Exported Object: dlb_num_of_non_power_two_lengths */
extern "C" __attribute__((visibility("default"))) void* dlb_num_of_non_power_two_lengths = NULL;

/* Exported Object: AC4DEC_PA_DIFFUSE_DECORR_2TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_DIFFUSE_DECORR_2TO7CH = NULL;

/* Demangled: AC4DEC_dap_mathlib_clvecdl_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_clvecdl_query_memory(void) {
    ALOGD("AC4DEC_dap_mathlib_clvecdl_query_memory() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD768_alpha4_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD768_alpha4_0 = NULL;

/* Demangled: AC4DEC_oamdi_dimensional_trim_is_auto */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_dimensional_trim_is_auto(void) {
    ALOGD("AC4DEC_oamdi_dimensional_trim_is_auto() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1_shlLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1_shlLU_strict(void) {
    ALOGD("DLB_blk_Liir1_shlLU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_48 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_48(void) {
    ALOGD("DLB_r4_fft_48() called");
    return 0;
}

/* Exported Object: dlb_fft_cplx_inv_usc */
extern "C" __attribute__((visibility("default"))) void* dlb_fft_cplx_inv_usc = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P4_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4_vec_syn = NULL;

/* Demangled: AC4DEC_ajoc_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajoc_process(void) {
    ALOGD("AC4DEC_ajoc_process() called");
    return 0;
}

/* Exported Object: AC4DEC_offsets_lin_to_db */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_offsets_lin_to_db = NULL;

/* Exported Object: AC4DEC_WindowKBD360_alpha4_5 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD360_alpha4_5 = NULL;

/* Demangled: AC4DEC_oarq_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oarq_query_scratch(void) {
    ALOGD("AC4DEC_oarq_query_scratch() called");
    return 0;
}

/* Demangled: AC4DEC_evo_get_bitstream */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_get_bitstream(void) {
    ALOGD("AC4DEC_evo_get_bitstream() called");
    return 0;
}

/* Demangled: DLB_BLmaxBLL_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmaxBLL_inplace_strict(void) {
    ALOGD("DLB_BLmaxBLL_inplace_strict() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_set_set_dap_param */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_set_set_dap_param(void) {
    ALOGD("AC4DEC_decoder_set_set_dap_param() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_diffuse_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_diffuse_reset(void) {
    ALOGD("AC4DEC_ngcs_diffuse_reset() called");
    return 0;
}

/* Demangled: AC4DEC_mdct_to_qmf_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_mdct_to_qmf_open(void) {
    ALOGD("AC4DEC_mdct_to_qmf_open() called");
    return 0;
}

/* Demangled: dlb_blk_LfirUL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LfirUL_flex(void) {
    ALOGD("dlb_blk_LfirUL_flex() called");
    return 0;
}

/* Demangled: DLB_blk_LnrrecipLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LnrrecipLU_strict(void) {
    ALOGD("DLB_blk_LnrrecipLU_strict() called");
    return 0;
}

/* Demangled: AC4DEC_qextract_ane_fdn_process_inplace */
extern "C" __attribute__((visibility("default"))) int AC4DEC_qextract_ane_fdn_process_inplace(void) {
    ALOGD("AC4DEC_qextract_ane_fdn_process_inplace() called");
    return 0;
}

/* Demangled: AC4DEC_bed_mixer_gains_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_bed_mixer_gains_get(void) {
    ALOGD("AC4DEC_bed_mixer_gains_get() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_process_indirect */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_process_indirect(void) {
    ALOGD("AC4DEC_dvlim_process_indirect() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_960_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_960_s(void) {
    ALOGD("DLB_r4_inv_fft_960_s() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_bitbuf_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_init(void) {
    ALOGD("AC4DEC_dlb_bitbuf_init() called");
    return 0;
}

/* Demangled: AC4DEC_rsrc_process_core */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rsrc_process_core(void) {
    ALOGD("AC4DEC_rsrc_process_core() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_oa_element_headphone_read_only */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_oa_element_headphone_read_only(void) {
    ALOGD("AC4DEC_oamdi_get_oa_element_headphone_read_only() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_60 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_60(void) {
    ALOGD("DLB_r4_inv_fft_60() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_parse_num_presentations */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_parse_num_presentations(void) {
    ALOGD("AC4DEC_ac4toc_parse_num_presentations() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_hcqmf_real_xcorr */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_hcqmf_real_xcorr(void) {
    ALOGD("AC4DEC_ngcs_hcqmf_real_xcorr() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_trim_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_trim_config(void) {
    ALOGD("AC4DEC_oamdi_get_trim_config() called");
    return 0;
}

/* Exported Object: AC4DEC_ps_iso639_1tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ps_iso639_1tab = NULL;

/* Demangled: AC4DEC_dap_mathlib_Llog4LP */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_Llog4LP(void) {
    ALOGD("AC4DEC_dap_mathlib_Llog4LP() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_480 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_480(void) {
    ALOGD("DLB_r4_inv_fft_480() called");
    return 0;
}

/* Demangled: AC4DEC_ajoc_mdd_generate_dummy_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajoc_mdd_generate_dummy_config(void) {
    ALOGD("AC4DEC_ajoc_mdd_generate_dummy_config() called");
    return 0;
}

/* Demangled: dlb_dct4_premodulation */
extern "C" __attribute__((visibility("default"))) int dlb_dct4_premodulation(void) {
    ALOGD("dlb_dct4_premodulation() called");
    return 0;
}

/* Demangled: AC4DEC_omg_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_omg_query_scratch(void) {
    ALOGD("AC4DEC_omg_query_scratch() called");
    return 0;
}

/* Demangled: AC4DEC_ims_il_virtualization_mode_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ims_il_virtualization_mode_get(void) {
    ALOGD("AC4DEC_ims_il_virtualization_mode_get() called");
    return 0;
}

/* Demangled: AC4DEC_evo_time_convert */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_time_convert(void) {
    ALOGD("AC4DEC_evo_time_convert() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_reset(void) {
    ALOGD("AC4DEC_oamdi_reset() called");
    return 0;
}

/* Exported Object: AC4DEC_oamd_priority_Q15 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_oamd_priority_Q15 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L60 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L60 = NULL;

/* Demangled: DLB_r4_fft_80_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_80_s(void) {
    ALOGD("DLB_r4_fft_80_s() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_64 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_64(void) {
    ALOGD("DLB_r4_inv_fft_64() called");
    return 0;
}

/* Demangled: ac4dec_wrapper_query_info */
extern "C" __attribute__((visibility("default"))) int ac4dec_wrapper_query_info(void) {
    ALOGD("ac4dec_wrapper_query_info() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_steering_table_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_steering_table_init(void) {
    ALOGD("AC4DEC_ngcs_steering_table_init() called");
    return 0;
}

/* Demangled: AC4DEC_get_num_octaves_div8 */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_num_octaves_div8(void) {
    ALOGD("AC4DEC_get_num_octaves_div8() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L384 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L384 = NULL;

/* Demangled: AC4DEC_metadata_delay_output_get_num_elements */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_output_get_num_elements(void) {
    ALOGD("AC4DEC_metadata_delay_output_get_num_elements() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_set_boost */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_set_boost(void) {
    ALOGD("AC4DEC_dvlim_set_boost() called");
    return 0;
}

/* Demangled: AC4DEC_point_panner_compute_gains_between_rows */
extern "C" __attribute__((visibility("default"))) int AC4DEC_point_panner_compute_gains_between_rows(void) {
    ALOGD("AC4DEC_point_panner_compute_gains_between_rows() called");
    return 0;
}

/* Exported Object: AC4DEC_DAP_MATHLIB_LOGTYPE_20_LOG_10_ON_130 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DAP_MATHLIB_LOGTYPE_20_LOG_10_ON_130 = NULL;

/* Demangled: AC4DEC_ajccdec_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_open(void) {
    ALOGD("AC4DEC_ajccdec_open() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_smag_Q15 */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_smag_Q15(void) {
    ALOGD("AC4DEC_oamdi_get_smag_Q15() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_diffuse_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_diffuse_init(void) {
    ALOGD("AC4DEC_ngcs_diffuse_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L720_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L720_cos = NULL;

/* Demangled: AC4DEC_oamdi_dimensional_trim_config_set_auto */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_dimensional_trim_config_set_auto(void) {
    ALOGD("AC4DEC_oamdi_dimensional_trim_config_set_auto() called");
    return 0;
}

/* Demangled: AC4DEC_isf_decoder_compute_matrix */
extern "C" __attribute__((visibility("default"))) int AC4DEC_isf_decoder_compute_matrix(void) {
    ALOGD("AC4DEC_isf_decoder_compute_matrix() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_get_block_size */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_get_block_size(void) {
    ALOGD("AC4DEC_dvlim_get_block_size() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L256 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L256 = NULL;

/* Demangled: dlb_fft_fwd_usc_40 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_40(void) {
    ALOGD("dlb_fft_fwd_usc_40() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_fdn_allpass_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_fdn_allpass_reset(void) {
    ALOGD("AC4DEC_hp_height_fdn_allpass_reset() called");
    return 0;
}

/* Demangled: DLB_blk_LabsL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LabsL_strict(void) {
    ALOGD("DLB_blk_LabsL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L64 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L64 = NULL;

/* Demangled: DLB_r4_fft_576 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_576(void) {
    ALOGD("DLB_r4_fft_576() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_180 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_180(void) {
    ALOGD("dlb_fft_inv_usc_180() called");
    return 0;
}

/* Demangled: AC4DEC_memlib_subsection_start */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_subsection_start(void) {
    ALOGD("AC4DEC_memlib_subsection_start() called");
    return 0;
}

/* Demangled: dlb_BLmpy_scaleBLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmpy_scaleBLSU_flex(void) {
    ALOGD("dlb_BLmpy_scaleBLSU_flex() called");
    return 0;
}

/* Demangled: DLB_CLzeroCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLzeroCLU_strict(void) {
    ALOGD("DLB_CLzeroCLU_strict() called");
    return 0;
}

/* Demangled: AC4DEC_ac4framer_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4framer_close(void) {
    ALOGD("AC4DEC_ac4framer_close() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_process(void) {
    ALOGD("AC4DEC_dvlim_process() called");
    return 0;
}

/* Demangled: dlb_blk_LmaxLLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmaxLLL_flex(void) {
    ALOGD("dlb_blk_LmaxLLL_flex() called");
    return 0;
}

/* Demangled: dlb_vec_LshlLIU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LshlLIU_flex(void) {
    ALOGD("dlb_vec_LshlLIU_flex() called");
    return 0;
}

/* Demangled: AC4DEC_memlib_pool_subsection_end */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_pool_subsection_end(void) {
    ALOGD("AC4DEC_memlib_pool_subsection_end() called");
    return 0;
}

/* Exported Object: AC4DEC_input_to_index_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_input_to_index_tab = NULL;

/* Demangled: AC4DEC_oamd_trans_output_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_trans_output_init(void) {
    ALOGD("AC4DEC_oamd_trans_output_init() called");
    return 0;
}

/* Demangled: AC4DEC_hdr_vec_P2powPLPU */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hdr_vec_P2powPLPU(void) {
    ALOGD("AC4DEC_hdr_vec_P2powPLPU() called");
    return 0;
}

/* Demangled: DLB_Lqmf_synthesisCL_Head1Bit */
extern "C" __attribute__((visibility("default"))) int DLB_Lqmf_synthesisCL_Head1Bit(void) {
    ALOGD("DLB_Lqmf_synthesisCL_Head1Bit() called");
    return 0;
}

/* Demangled: dolby::Ac4DecClient::ac4dec_open(tAc4DecoderExternal*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12Ac4DecClient11ac4dec_openEP19tAc4DecoderExternal(void) {
    ALOGD("_ZN5dolby12Ac4DecClient11ac4dec_openEP19tAc4DecoderExternal() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_log_content_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_log_content_query_scratch(void) {
    ALOGD("AC4DEC_ac4dap_log_content_query_scratch() called");
    return 0;
}

/* Demangled: AC4DEC_delay_line_write */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_line_write(void) {
    ALOGD("AC4DEC_delay_line_write() called");
    return 0;
}

/* Demangled: DLB_blk_LmaxLLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmaxLLL_strict(void) {
    ALOGD("DLB_blk_LmaxLLL_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_288 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_288(void) {
    ALOGD("dlb_fft_fwd_scl_288() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_45 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_45(void) {
    ALOGD("dlb_fft_fwd_usc_45() called");
    return 0;
}

/* Demangled: displaybanner */
extern "C" __attribute__((visibility("default"))) int displaybanner(void) {
    ALOGD("displaybanner() called");
    return 0;
}

/* Demangled: ac4dec_wrapper_getparam */
extern "C" __attribute__((visibility("default"))) int ac4dec_wrapper_getparam(void) {
    ALOGD("ac4dec_wrapper_getparam() called");
    return 0;
}

/* Demangled: AC4DEC_apply_prog_assign */
extern "C" __attribute__((visibility("default"))) int AC4DEC_apply_prog_assign(void) {
    ALOGD("AC4DEC_apply_prog_assign() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L120 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L120 = NULL;

/* Demangled: DLB_r4_cplx_inv_scaled */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_inv_scaled(void) {
    ALOGD("DLB_r4_cplx_inv_scaled() called");
    return 0;
}

/* Demangled: AC4DEC_decorr_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decorr_query_mem(void) {
    ALOGD("AC4DEC_decorr_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_iwc_preserve */
extern "C" __attribute__((visibility("default"))) int AC4DEC_iwc_preserve(void) {
    ALOGD("AC4DEC_iwc_preserve() called");
    return 0;
}

/* Demangled: AC4DEC_isf_decoder_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_isf_decoder_init(void) {
    ALOGD("AC4DEC_isf_decoder_init() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_hrtf_sum_diff */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_hrtf_sum_diff(void) {
    ALOGD("AC4DEC_hp_height_hrtf_sum_diff() called");
    return 0;
}

/* Demangled: AC4DEC_metadata_delay_output_get_buffer */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_output_get_buffer(void) {
    ALOGD("AC4DEC_metadata_delay_output_get_buffer() called");
    return 0;
}

/* Demangled: AC4DEC_metadata_delay_output_step_type */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_output_step_type(void) {
    ALOGD("AC4DEC_metadata_delay_output_step_type() called");
    return 0;
}

/* Exported Object: AC4DEC_a_rec_vals */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_rec_vals = NULL;

/* Demangled: DLB_r4_fft_1024_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_1024_s(void) {
    ALOGD("DLB_r4_fft_1024_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_48 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_48(void) {
    ALOGD("dlb_fft_fwd_usc_48() called");
    return 0;
}

/* Demangled: AC4DEC_modeler_vlm_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_modeler_vlm_process(void) {
    ALOGD("AC4DEC_modeler_vlm_process() called");
    return 0;
}

/* Demangled: AC4DEC_ade_mdd_generate_dummy_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_mdd_generate_dummy_data(void) {
    ALOGD("AC4DEC_ade_mdd_generate_dummy_data() called");
    return 0;
}

/* Demangled: AC4DEC_sap_sub_ms */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sap_sub_ms(void) {
    ALOGD("AC4DEC_sap_sub_ms() called");
    return 0;
}

/* Exported Object: DLB_MFB_P10KM_P4_319SC */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_P10KM_P4_319SC = NULL;

/* Demangled: AC4DEC_asa_normlogsone_2sone */
extern "C" __attribute__((visibility("default"))) int AC4DEC_asa_normlogsone_2sone(void) {
    ALOGD("AC4DEC_asa_normlogsone_2sone() called");
    return 0;
}

/* Exported Object: AC4DEC_ims_sv_deq_lev_smooth_coef */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ims_sv_deq_lev_smooth_coef = NULL;

/* Exported Object: AC4DEC_CHANNELS_ONLY */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNELS_ONLY = NULL;

/* Demangled: AC4DEC_ac4dsp_CLmpy_shlCLLUU_inplace */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dsp_CLmpy_shlCLLUU_inplace(void) {
    ALOGD("AC4DEC_ac4dsp_CLmpy_shlCLLUU_inplace() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_de_coefficients_decode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_de_coefficients_decode(void) {
    ALOGD("AC4DEC_imsdec_de_coefficients_decode() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_channel_mode_contains_lfe */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_channel_mode_contains_lfe(void) {
    ALOGD("AC4DEC_ac4toc_channel_mode_contains_lfe() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_NGCS_SEG_STEERING_2TO6CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_NGCS_SEG_STEERING_2TO6CH = NULL;

/* Demangled: AC4DEC_oamd_reader_parse_oamd_substream */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_reader_parse_oamd_substream(void) {
    ALOGD("AC4DEC_oamd_reader_parse_oamd_substream() called");
    return 0;
}

/* Exported Object: AC4DEC_oamd_5bit_to_oari_Q15 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_oamd_5bit_to_oari_Q15 = NULL;

/* Demangled: dlb_fft_fwd_scl_72 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_72(void) {
    ALOGD("dlb_fft_fwd_scl_72() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_set_output_channel_config */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_set_output_channel_config(void) {
    ALOGD("dlb_ac4dec_v2_dec_set_output_channel_config() called");
    return 0;
}

/* Demangled: AC4DEC_ajocdec_dlgobj_interpolate */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_dlgobj_interpolate(void) {
    ALOGD("AC4DEC_ajocdec_dlgobj_interpolate() called");
    return 0;
}

/* Exported Object: scramble_table_pt */
extern "C" __attribute__((visibility("default"))) void* scramble_table_pt = NULL;

/* Demangled: DLB_blk_Lfir2L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir2L_set_coef(void) {
    ALOGD("DLB_blk_Lfir2L_set_coef() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_360 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_360(void) {
    ALOGD("dlb_fft_inv_usc_360() called");
    return 0;
}

/* Exported Object: AC4DEC_rfs_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_rfs_tab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L128 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L128 = NULL;

/* Demangled: AC4DEC_framer_get_time */
extern "C" __attribute__((visibility("default"))) int AC4DEC_framer_get_time(void) {
    ALOGD("AC4DEC_framer_get_time() called");
    return 0;
}

/* Demangled: AC4DEC_drc_frame_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_drc_frame_read(void) {
    ALOGD("AC4DEC_drc_frame_read() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_dimensional_trim_config_is_disabled */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_dimensional_trim_config_is_disabled(void) {
    ALOGD("AC4DEC_oamdi_dimensional_trim_config_is_disabled() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_80 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_80(void) {
    ALOGD("dlb_fft_inv_scl_80() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: AC4DEC_compressor_calcscale */
extern "C" __attribute__((visibility("default"))) int AC4DEC_compressor_calcscale(void) {
    ALOGD("AC4DEC_compressor_calcscale() called");
    return 0;
}

/* Demangled: AC4DEC_cch_get_config_change */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_get_config_change(void) {
    ALOGD("AC4DEC_cch_get_config_change() called");
    return 0;
}

/* Exported Object: AC4DEC_ast_bw_scale */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ast_bw_scale = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L144 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L144 = NULL;

/* Demangled: AC4DEC_ac4parser_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4parser_query_mem(void) {
    ALOGD("AC4DEC_ac4parser_query_mem() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L24_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L24_1 = NULL;

/* Demangled: AC4DEC_omg_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_omg_query_memory(void) {
    ALOGD("AC4DEC_omg_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_room_config_size_panner_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_room_config_size_panner_query_memory(void) {
    ALOGD("AC4DEC_room_config_size_panner_query_memory() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_set_drc_enable */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_set_drc_enable(void) {
    ALOGD("dlb_ac4dec_v2_dec_set_drc_enable() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L24_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L24_2 = NULL;

/* Demangled: DLB_blk_delayL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_delayL_strict(void) {
    ALOGD("DLB_blk_delayL_strict() called");
    return 0;
}

/* Demangled: DLB_time_add */
extern "C" __attribute__((visibility("default"))) int DLB_time_add(void) {
    ALOGD("DLB_time_add() called");
    return 0;
}

/* Demangled: android::AC4Decoder::setPcmOutChannels() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4Decoder17setPcmOutChannelsEv(void) {
    ALOGD("_ZN7android10AC4Decoder17setPcmOutChannelsEv() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_virtualizer_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_virtualizer_query_memory(void) {
    ALOGD("AC4DEC_ac4dap_virtualizer_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_q2le_apply_excitation_offset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_q2le_apply_excitation_offset(void) {
    ALOGD("AC4DEC_q2le_apply_excitation_offset() called");
    return 0;
}

/* Demangled: AC4DEC_cdmx_generate_dummy_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cdmx_generate_dummy_data(void) {
    ALOGD("AC4DEC_cdmx_generate_dummy_data() called");
    return 0;
}

/* Exported Object: dlb_non_power_two_lengths */
extern "C" __attribute__((visibility("default"))) void* dlb_non_power_two_lengths = NULL;

/* Demangled: AC4DEC_update_drc_curve */
extern "C" __attribute__((visibility("default"))) int AC4DEC_update_drc_curve(void) {
    ALOGD("AC4DEC_update_drc_curve() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_divide_mant_exp */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_divide_mant_exp(void) {
    ALOGD("AC4DEC_aspx_divide_mant_exp() called");
    return 0;
}

/* Demangled: dolby::Ac4DynamicConfig::Ac4DynamicConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16Ac4DynamicConfigC1Ev(void) {
    ALOGD("_ZN5dolby16Ac4DynamicConfigC1Ev() called");
    return 0;
}

/* Demangled: ac4dec_wrapper_xfer_table */
extern "C" __attribute__((visibility("default"))) int ac4dec_wrapper_xfer_table(void) {
    ALOGD("ac4dec_wrapper_xfer_table() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_get_emdf_buffer_size */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_get_emdf_buffer_size(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_get_emdf_buffer_size() called");
    return 0;
}

/* Demangled: AC4DEC_evo_brw_peek */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_brw_peek(void) {
    ALOGD("AC4DEC_evo_brw_peek() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_2048 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_2048(void) {
    ALOGD("DLB_r4_inv_fft_2048() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_640 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_640(void) {
    ALOGD("dlb_fft_fwd_scl_640() called");
    return 0;
}

/* Exported Object: dlb_cos_16_full_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_16_full_scl = NULL;

/* Demangled: AC4DEC_ngcs_stats_run */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_stats_run(void) {
    ALOGD("AC4DEC_ngcs_stats_run() called");
    return 0;
}

/* Demangled: AC4DEC_ac4parser_oamd_common_data_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4parser_oamd_common_data_read(void) {
    ALOGD("AC4DEC_ac4parser_oamd_common_data_read() called");
    return 0;
}

/* Demangled: AC4DEC_emdf_increment_frame_counter */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_increment_frame_counter(void) {
    ALOGD("AC4DEC_emdf_increment_frame_counter() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD1440_alpha3_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD1440_alpha3_0 = NULL;

/* Demangled: AC4DEC_dlb_ac4dec_v1_input_stage_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_input_stage_config(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_input_stage_config() called");
    return 0;
}

/* Demangled: DLB_blk_Lfir3L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir3L_strict(void) {
    ALOGD("DLB_blk_Lfir3L_strict() called");
    return 0;
}

/* Demangled: AC4DEC_ajccdec_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_reset(void) {
    ALOGD("AC4DEC_ajccdec_reset() called");
    return 0;
}

/* Demangled: AC4DEC_emdf_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_read(void) {
    ALOGD("AC4DEC_emdf_read() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_md_trim_to_linear_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_md_trim_to_linear_gain(void) {
    ALOGD("AC4DEC_oamdi_md_trim_to_linear_gain() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlULLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlULLL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlULLL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L320 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L320 = NULL;

/* Demangled: AC4DEC_qextract_ane_process_inplace */
extern "C" __attribute__((visibility("default"))) int AC4DEC_qextract_ane_process_inplace(void) {
    ALOGD("AC4DEC_qextract_ane_process_inplace() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD1536 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD1536 = NULL;

/* Demangled: AC4DEC_delay_line_peek_indirect_offset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_line_peek_indirect_offset(void) {
    ALOGD("AC4DEC_delay_line_peek_indirect_offset() called");
    return 0;
}

/* Demangled: AC4DEC_ldn_calc_specific_loudness */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ldn_calc_specific_loudness(void) {
    ALOGD("AC4DEC_ldn_calc_specific_loudness() called");
    return 0;
}

/* Exported Object: AC4DEC_AC4TOC_CHANNELS_ONLY */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNELS_ONLY = NULL;

/* Demangled: AC4DEC_hp_height_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_process(void) {
    ALOGD("AC4DEC_hp_height_process() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_close(void) {
    ALOGD("AC4DEC_imsdec_close() called");
    return 0;
}

/* Exported Object: AC4DEC_rsrcdec_coeff_pointer_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_rsrcdec_coeff_pointer_tab = NULL;

/* Demangled: DLB_CLsubCLCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLsubCLCLU_strict(void) {
    ALOGD("DLB_CLsubCLCLU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_6_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_6_s(void) {
    ALOGD("DLB_r4_inv_fft_6_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_480 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_480(void) {
    ALOGD("dlb_fft_inv_scl_480() called");
    return 0;
}

/* Demangled: AC4DEC_hist_get_probability */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hist_get_probability(void) {
    ALOGD("AC4DEC_hist_get_probability() called");
    return 0;
}

/* Demangled: dlb_blk_Lconst_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lconst_flex(void) {
    ALOGD("dlb_blk_Lconst_flex() called");
    return 0;
}

/* Demangled: dlb_CLCLmix7CL14SU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLCLmix7CL14SU_flex(void) {
    ALOGD("dlb_CLCLmix7CL14SU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_72 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_72(void) {
    ALOGD("DLB_r4_inv_fft_72() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_get_latency */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_get_latency(void) {
    ALOGD("AC4DEC_decoder_get_latency() called");
    return 0;
}

/* Demangled: AC4DEC_evo_mod_get_md_begin */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_mod_get_md_begin(void) {
    ALOGD("AC4DEC_evo_mod_get_md_begin() called");
    return 0;
}

/* Exported Object: dlb_odd_fft_cplx_inv_usc */
extern "C" __attribute__((visibility("default"))) void* dlb_odd_fft_cplx_inv_usc = NULL;

/* Exported Object: AC4DEC_CHANNEL_MAP_5_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_5_0 = NULL;

/* Exported Object: AC4DEC_tree_joc_huff_code_coarse_generic */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_joc_huff_code_coarse_generic = NULL;

/* Demangled: DLB_r4_inv_fft_120 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_120(void) {
    ALOGD("DLB_r4_inv_fft_120() called");
    return 0;
}

/* Exported Object: AC4DEC_CHANNEL_MAP_5_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_5_1 = NULL;

/* Demangled: AC4DEC_ngcs_mixer_run */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_mixer_run(void) {
    ALOGD("AC4DEC_ngcs_mixer_run() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_get_num_out_channels */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_get_num_out_channels(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_get_num_out_channels() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD576_alpha4_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD576_alpha4_0 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L72 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L72 = NULL;

/* Exported Object: AC4DEC_AC4DAP_AGC_COMPRESSION_CURVE */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4DAP_AGC_COMPRESSION_CURVE = NULL;

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_reader_get_presentation_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_get_presentation_info(void) {
    ALOGD("AC4DEC_ac4toc_reader_get_presentation_info() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_centre_spread_setup */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_centre_spread_setup(void) {
    ALOGD("AC4DEC_ngcs_centre_spread_setup() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L12_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L12_cos = NULL;

/* Demangled: dlb_qmf_analysisL_reconfig */
extern "C" __attribute__((visibility("default"))) int dlb_qmf_analysisL_reconfig(void) {
    ALOGD("dlb_qmf_analysisL_reconfig() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_beta3_fine_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_beta3_fine_df = NULL;

/* Demangled: DLB_r4_cplx_fwd_scaled */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_fwd_scaled(void) {
    ALOGD("DLB_r4_cplx_fwd_scaled() called");
    return 0;
}

/* Exported Object: AC4DEC_a_dvlim_win_64 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_dvlim_win_64 = NULL;

/* Exported Object: dlb_fft_cplx_fwd_usc */
extern "C" __attribute__((visibility("default"))) void* dlb_fft_cplx_fwd_usc = NULL;

/* Demangled: AC4DEC_ac4dap_regulator_rebuild */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_regulator_rebuild(void) {
    ALOGD("AC4DEC_ac4dap_regulator_rebuild() called");
    return 0;
}

/* Demangled: AC4DEC_delay_line_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_line_query_memory(void) {
    ALOGD("AC4DEC_delay_line_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_process(void) {
    ALOGD("AC4DEC_imsdec_process() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_192 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_192(void) {
    ALOGD("dlb_fft_inv_usc_192() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_NGCS_SEG_CHANNELS_2TO4CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_NGCS_SEG_CHANNELS_2TO4CH = NULL;

/* Demangled: AC4DEC_memlib_pool_get_size */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_pool_get_size(void) {
    ALOGD("AC4DEC_memlib_pool_get_size() called");
    return 0;
}

/* Demangled: AC4DEC_ajccdec_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_init(void) {
    ALOGD("AC4DEC_ajccdec_init() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_round_from_Q15_away_from_half */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_round_from_Q15_away_from_half(void) {
    ALOGD("AC4DEC_oamdi_round_from_Q15_away_from_half() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_720 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_720(void) {
    ALOGD("dlb_fft_inv_usc_720() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: AC4DEC_arle_distortion_masking_calculation */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_distortion_masking_calculation(void) {
    ALOGD("AC4DEC_arle_distortion_masking_calculation() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_stats_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_stats_query_scratch(void) {
    ALOGD("AC4DEC_ngcs_stats_query_scratch() called");
    return 0;
}

/* Demangled: AC4DEC_ajocdec_full_alloc_dynamic */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_full_alloc_dynamic(void) {
    ALOGD("AC4DEC_ajocdec_full_alloc_dynamic() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_128 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_128(void) {
    ALOGD("DLB_r4_inv_fft_128() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_60 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_60(void) {
    ALOGD("dlb_fft_inv_usc_60() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajoc_wet_coarse_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajoc_wet_coarse_df = NULL;

/* Exported Object: AC4DEC_dither_table */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_dither_table = NULL;

/* Demangled: DLB_load_CLqmf_analysisL_filter_stateL */
extern "C" __attribute__((visibility("default"))) int DLB_load_CLqmf_analysisL_filter_stateL(void) {
    ALOGD("DLB_load_CLqmf_analysisL_filter_stateL() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD960 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD960 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L60 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L60 = NULL;

/* Demangled: AC4DEC_ajocdec_calculate_mtxpre */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_calculate_mtxpre(void) {
    ALOGD("AC4DEC_ajocdec_calculate_mtxpre() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_joc_huff_code_fine_coeff_sparse */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_joc_huff_code_fine_coeff_sparse = NULL;

/* Demangled: dlb_fft_inv_usc_64 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_64(void) {
    ALOGD("dlb_fft_inv_usc_64() called");
    return 0;
}

/* Demangled: dlb_vec_LsetLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LsetLU_flex(void) {
    ALOGD("dlb_vec_LsetLU_flex() called");
    return 0;
}

/* Demangled: AC4DEC_evo_ll_head */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_ll_head(void) {
    ALOGD("AC4DEC_evo_ll_head() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_80 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_80(void) {
    ALOGD("dlb_fft_fwd_scl_80() called");
    return 0;
}

/* Exported Object: AC4DEC_framing_tab_border */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_framing_tab_border = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L90 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L90 = NULL;

/* Demangled: dlb_blk_Liir2ssv1_usmpL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv1_usmpL_flex(void) {
    ALOGD("dlb_blk_Liir2ssv1_usmpL_flex() called");
    return 0;
}

/* Exported Object: dlb_clclmix5cl10csu_order_coef_c */
extern "C" __attribute__((visibility("default"))) void* dlb_clclmix5cl10csu_order_coef_c = NULL;

/* Demangled: DLB_r4_fft_120_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_120_s(void) {
    ALOGD("DLB_r4_fft_120_s() called");
    return 0;
}

/* Demangled: dlb_qmf_synthesisS_open */
extern "C" __attribute__((visibility("default"))) int dlb_qmf_synthesisS_open(void) {
    ALOGD("dlb_qmf_synthesisS_open() called");
    return 0;
}

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR48KHZ_BS384S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR48KHZ_BS384S = NULL;

/* Demangled: AC4DEC_cch_get_num_subframes_dropped */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_get_num_subframes_dropped(void) {
    ALOGD("AC4DEC_cch_get_num_subframes_dropped() called");
    return 0;
}

/* Demangled: AC4DEC_cdmx_gains_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cdmx_gains_init(void) {
    ALOGD("AC4DEC_cdmx_gains_init() called");
    return 0;
}

/* Demangled: AC4DEC_dapil_reference_level_calculate */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dapil_reference_level_calculate(void) {
    ALOGD("AC4DEC_dapil_reference_level_calculate() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L576 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L576 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L64 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L64 = NULL;

/* Demangled: DLB_r4_fft_60 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_60(void) {
    ALOGD("DLB_r4_fft_60() called");
    return 0;
}

/* Demangled: AC4DEC_ajocdec_mtxpre_apply */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_mtxpre_apply(void) {
    ALOGD("AC4DEC_ajocdec_mtxpre_apply() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_beta3_fine_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_beta3_fine_f0 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L1024 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L1024 = NULL;

/* Exported Object: AC4DEC_ajcc_dry_quant_table */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajcc_dry_quant_table = NULL;

/* Exported Object: AC4DEC_WindowKBD48_alpha5_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD48_alpha5_0 = NULL;

/* Demangled: _dlb_ldct2_scaled_iplu */
extern "C" __attribute__((visibility("default"))) int _dlb_ldct2_scaled_iplu(void) {
    ALOGD("_dlb_ldct2_scaled_iplu() called");
    return 0;
}

/* Demangled: AC4DEC_loudness_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_loudness_process(void) {
    ALOGD("AC4DEC_loudness_process() called");
    return 0;
}

/* Demangled: AC4DEC_ajoc_mdd_generate_dummy_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajoc_mdd_generate_dummy_data(void) {
    ALOGD("AC4DEC_ajoc_mdd_generate_dummy_data() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_beta3_fine_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_beta3_fine_dt = NULL;

/* Demangled: DLB_r4_fft_768 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_768(void) {
    ALOGD("DLB_r4_fft_768() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_90 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_90(void) {
    ALOGD("dlb_fft_inv_scl_90() called");
    return 0;
}

/* Exported Object: AC4DEC_oamd_channel_order */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_oamd_channel_order = NULL;

/* Demangled: DLB_r4_fft_64 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_64(void) {
    ALOGD("DLB_r4_fft_64() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_180 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_180(void) {
    ALOGD("dlb_fft_fwd_usc_180() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P4 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4 = NULL;

/* Demangled: AC4DEC_sv_dual_end_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sv_dual_end_query_memory(void) {
    ALOGD("AC4DEC_sv_dual_end_query_memory() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L96 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L96 = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P5 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5 = NULL;

/* Demangled: AC4DEC_decoder_set_output_channel_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_set_output_channel_config(void) {
    ALOGD("AC4DEC_decoder_set_output_channel_config() called");
    return 0;
}

/* Demangled: AC4DEC_oaril_get_output_format */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oaril_get_output_format(void) {
    ALOGD("AC4DEC_oaril_get_output_format() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajoc_wet_coarse_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajoc_wet_coarse_f0 = NULL;

/* Demangled: DLB_blk_Liir2ssL_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssL_setup(void) {
    ALOGD("DLB_blk_Liir2ssL_setup() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD240 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD240 = NULL;

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_520_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_520_0 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L576_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L576_cos = NULL;

/* Exported Object: AC4DEC_tree_huff_code_ajoc_wet_coarse_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajoc_wet_coarse_dt = NULL;

/* Demangled: dlb_blk_LLshuffleLL_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LLshuffleLL_inplace_flex(void) {
    ALOGD("dlb_blk_LLshuffleLL_inplace_flex() called");
    return 0;
}

/* Demangled: dolby::Ac4DynamicConfig::setSpecialParams(dolby::DapParamCache*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16Ac4DynamicConfig16setSpecialParamsEPNS_13DapParamCacheE(void) {
    ALOGD("_ZN5dolby16Ac4DynamicConfig16setSpecialParamsEPNS_13DapParamCacheE() called");
    return 0;
}

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_520_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_520_1 = NULL;

/* Exported Object: AC4DEC_spectrum_cdf_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_spectrum_cdf_tab = NULL;

/* Demangled: dlb_fft_inv_scl_96 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_96(void) {
    ALOGD("dlb_fft_inv_scl_96() called");
    return 0;
}

/* Demangled: AC4DEC_de_old_index */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_old_index(void) {
    ALOGD("AC4DEC_de_old_index() called");
    return 0;
}

/* Demangled: AC4DEC_ph90_qmf_clear */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ph90_qmf_clear(void) {
    ALOGD("AC4DEC_ph90_qmf_clear() called");
    return 0;
}

/* Exported Object: AC4DEC_NO_CHANNEL_MAP */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_NO_CHANNEL_MAP = NULL;

/* Exported Object: AC4DEC_IMS_BANDING_SCHEME_DEN_CW */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_IMS_BANDING_SCHEME_DEN_CW = NULL;

/* Demangled: AC4DEC_oamdi_has_oa_element_dimensional_trim */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_has_oa_element_dimensional_trim(void) {
    ALOGD("AC4DEC_oamdi_has_oa_element_dimensional_trim() called");
    return 0;
}

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_2_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_2_0 = NULL;

/* Demangled: AC4DEC_dvlim_set_peak */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_set_peak(void) {
    ALOGD("AC4DEC_dvlim_set_peak() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_alpha_coarse_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_alpha_coarse_df = NULL;

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_2_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_2_1 = NULL;

/* Demangled: AC4DEC_ngcs_mode_calculate */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_mode_calculate(void) {
    ALOGD("AC4DEC_ngcs_mode_calculate() called");
    return 0;
}

/* Demangled: AC4DEC_acpldec_data_2ch_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_data_2ch_read(void) {
    ALOGD("AC4DEC_acpldec_data_2ch_read() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisL_close */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_close(void) {
    ALOGD("DLB_qmf_synthesisL_close() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ims_help_fine_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ims_help_fine_df = NULL;

/* Demangled: dolby::DlbGenClass2::DlbGenClass2() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DlbGenClass2C1Ev(void) {
    ALOGD("_ZN5dolby12DlbGenClass2C1Ev() called");
    return 0;
}

/* Demangled: DLB_blk_Lfir3L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir3L_set_coef(void) {
    ALOGD("DLB_blk_Lfir3L_set_coef() called");
    return 0;
}

/* Demangled: AC4DEC_lvl_drc_scale_gains */
extern "C" __attribute__((visibility("default"))) int AC4DEC_lvl_drc_scale_gains(void) {
    ALOGD("AC4DEC_lvl_drc_scale_gains() called");
    return 0;
}

/* Demangled: AC4DEC_acpldec_mdd_generate_dummy_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_mdd_generate_dummy_config(void) {
    ALOGD("AC4DEC_acpldec_mdd_generate_dummy_config() called");
    return 0;
}

/* Demangled: AC4DEC_oamd_init_oamdi_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_init_oamdi_config(void) {
    ALOGD("AC4DEC_oamd_init_oamdi_config() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_80 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_80(void) {
    ALOGD("DLB_r4_inv_fft_80() called");
    return 0;
}

/* Exported Object: AC4DEC_beta_quant_table_coarse */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_beta_quant_table_coarse = NULL;

/* Demangled: AC4DEC_get_num_msfb_bits */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_num_msfb_bits(void) {
    ALOGD("AC4DEC_get_num_msfb_bits() called");
    return 0;
}

/* Demangled: dlb_vec_SshlSIU_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_SshlSIU_inplace_flex(void) {
    ALOGD("dlb_vec_SshlSIU_inplace_flex() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_hrtf_downmix */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_hrtf_downmix(void) {
    ALOGD("AC4DEC_hp_height_hrtf_downmix() called");
    return 0;
}

/* Demangled: AC4DEC_legq_get_linear_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_legq_get_linear_gain(void) {
    ALOGD("AC4DEC_legq_get_linear_gain() called");
    return 0;
}

/* Demangled: DLB_CLmixCLCLSSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmixCLCLSSU_strict(void) {
    ALOGD("DLB_CLmixCLCLSSU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_48_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_48_s(void) {
    ALOGD("DLB_r4_fft_48_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_360 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_360(void) {
    ALOGD("dlb_fft_fwd_usc_360() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_virtualizer_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_virtualizer_query_scratch(void) {
    ALOGD("AC4DEC_ac4dap_virtualizer_query_scratch() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_fdn_allpass_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_fdn_allpass_init(void) {
    ALOGD("AC4DEC_hp_height_fdn_allpass_init() called");
    return 0;
}

/* Demangled: AC4DEC_qextract_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_qextract_query_memory(void) {
    ALOGD("AC4DEC_qextract_query_memory() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_768_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_768_s(void) {
    ALOGD("DLB_r4_inv_fft_768_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_120 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_120(void) {
    ALOGD("dlb_fft_inv_scl_120() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_prog_assign_check_num_objs */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_prog_assign_check_num_objs(void) {
    ALOGD("AC4DEC_oamdi_prog_assign_check_num_objs() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_fdn_ane_mixing_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_fdn_ane_mixing_process(void) {
    ALOGD("AC4DEC_hp_height_fdn_ane_mixing_process() called");
    return 0;
}

/* Exported Object: AC4DEC_P_NGCS_SEG_RANGE_2TO4CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_P_NGCS_SEG_RANGE_2TO4CH = NULL;

/* Demangled: AC4DEC_oamdi_dimensional_trim_config_disable */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_dimensional_trim_config_disable(void) {
    ALOGD("AC4DEC_oamdi_dimensional_trim_config_disable() called");
    return 0;
}

/* Demangled: dolby::DlbGenClass2::propIsMatched(char const*, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DlbGenClass213propIsMatchedEPKcjS2_j(void) {
    ALOGD("_ZN5dolby12DlbGenClass213propIsMatchedEPKcjS2_j() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_pvt_channel_format_to_count */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_pvt_channel_format_to_count(void) {
    ALOGD("AC4DEC_ac4dap_pvt_channel_format_to_count() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_hf_gen_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_hf_gen_reset(void) {
    ALOGD("AC4DEC_aspx_hf_gen_reset() called");
    return 0;
}

/* Demangled: AC4DEC_arle_smooth_gains_across_frequency */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_smooth_gains_across_frequency(void) {
    ALOGD("AC4DEC_arle_smooth_gains_across_frequency() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_DIFFUSE_DECORR_5TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_DIFFUSE_DECORR_5TO7CH = NULL;

/* Exported Object: AC4DEC_predictiontab_dimension */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_predictiontab_dimension = NULL;

/* Demangled: DLB_r4_fft_180_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_180_s(void) {
    ALOGD("DLB_r4_fft_180_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_60 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_60(void) {
    ALOGD("dlb_fft_fwd_usc_60() called");
    return 0;
}

/* Demangled: AC4DEC_calc_sine_start_envelopes */
extern "C" __attribute__((visibility("default"))) int AC4DEC_calc_sine_start_envelopes(void) {
    ALOGD("AC4DEC_calc_sine_start_envelopes() called");
    return 0;
}

/* Demangled: AC4DEC_cch_get_control_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_get_control_data(void) {
    ALOGD("AC4DEC_cch_get_control_data() called");
    return 0;
}

/* Demangled: AC4DEC_bed_mixer_height_bed_is_left */
extern "C" __attribute__((visibility("default"))) int AC4DEC_bed_mixer_height_bed_is_left(void) {
    ALOGD("AC4DEC_bed_mixer_height_bed_is_left() called");
    return 0;
}

/* Demangled: AC4DEC_lfe_only_bed */
extern "C" __attribute__((visibility("default"))) int AC4DEC_lfe_only_bed(void) {
    ALOGD("AC4DEC_lfe_only_bed() called");
    return 0;
}

/* Demangled: AC4DEC_ade_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_open(void) {
    ALOGD("AC4DEC_ade_open() called");
    return 0;
}

/* Exported Object: AC4DEC_ajoc_num_param_bands */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajoc_num_param_bands = NULL;

/* Exported Object: AC4DEC_tree_huff_code_acpl_alpha_coarse_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_alpha_coarse_f0 = NULL;

/* Demangled: AC4DEC_oamdi_calc_variable_bits_max */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_calc_variable_bits_max(void) {
    ALOGD("AC4DEC_oamdi_calc_variable_bits_max() called");
    return 0;
}

/* Demangled: process_Phase90Hilbert */
extern "C" __attribute__((visibility("default"))) int process_Phase90Hilbert(void) {
    ALOGD("process_Phase90Hilbert() called");
    return 0;
}

/* Demangled: AC4DEC_dapil_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dapil_process(void) {
    ALOGD("AC4DEC_dapil_process() called");
    return 0;
}

/* Demangled: AC4DEC_emdf_convert */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_convert(void) {
    ALOGD("AC4DEC_emdf_convert() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L24_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L24_cos = NULL;

/* Exported Object: AC4DEC_tree_huff_code_ims_help_fine_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ims_help_fine_f0 = NULL;

/* Demangled: AC4DEC_ac4toc_presentation_config_ext_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_presentation_config_ext_info(void) {
    ALOGD("AC4DEC_ac4toc_presentation_config_ext_info() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_DIFFUSE_NO_DECORR_2TO5CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_DIFFUSE_NO_DECORR_2TO5CH = NULL;

/* Exported Object: AC4DEC_A_NGCS_SEG_RANGE_2TO5CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_NGCS_SEG_RANGE_2TO5CH = NULL;

/* Demangled: dlb_vec_LshlLIU_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LshlLIU_inplace_flex(void) {
    ALOGD("dlb_vec_LshlLIU_inplace_flex() called");
    return 0;
}

/* Demangled: AC4DEC_reset_randgen_state */
extern "C" __attribute__((visibility("default"))) int AC4DEC_reset_randgen_state(void) {
    ALOGD("AC4DEC_reset_randgen_state() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_alpha_coarse_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_alpha_coarse_dt = NULL;

/* Demangled: DLB_r4_fft_720_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_720_s(void) {
    ALOGD("DLB_r4_fft_720_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_64 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_64(void) {
    ALOGD("dlb_fft_fwd_usc_64() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_128 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_128(void) {
    ALOGD("dlb_fft_inv_scl_128() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ims_help_fine_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ims_help_fine_dt = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L512 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L512 = NULL;

/* Demangled: DLB_r4_inv_fft_240_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_240_s(void) {
    ALOGD("DLB_r4_inv_fft_240_s() called");
    return 0;
}

/* Exported Object: dlb_cos_64_full_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_64_full_twiddle = NULL;

/* Demangled: AC4DEC_dlb_bitbuf_get_bits_left */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_get_bits_left(void) {
    ALOGD("AC4DEC_dlb_bitbuf_get_bits_left() called");
    return 0;
}

/* Demangled: AC4DEC_trans_downmix_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_trans_downmix_process(void) {
    ALOGD("AC4DEC_trans_downmix_process() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_fdn_allpass_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_fdn_allpass_query_memory(void) {
    ALOGD("AC4DEC_hp_height_fdn_allpass_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_trim_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_trim_read(void) {
    ALOGD("AC4DEC_trim_read() called");
    return 0;
}

/* Demangled: AC4DEC_evo_time_ge */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_time_ge(void) {
    ALOGD("AC4DEC_evo_time_ge() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_centre_spread_is_on */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_centre_spread_is_on(void) {
    ALOGD("AC4DEC_ngcs_centre_spread_is_on() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_aspx_noise_balance_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_noise_balance_df = NULL;

/* Demangled: AC4DEC_hmac_sha256_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hmac_sha256_init(void) {
    ALOGD("AC4DEC_hmac_sha256_init() called");
    return 0;
}

/* Demangled: dlb_CLmpy_recipCLLIU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpy_recipCLLIU_flex(void) {
    ALOGD("dlb_CLmpy_recipCLLIU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_72 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_72(void) {
    ALOGD("dlb_fft_inv_usc_72() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_get_version */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_get_version(void) {
    ALOGD("dlb_ac4dec_v2_get_version() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_reader_get_presentation_info_ext */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_get_presentation_info_ext(void) {
    ALOGD("AC4DEC_ac4toc_reader_get_presentation_info_ext() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_get_substreams_in_group */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_get_substreams_in_group(void) {
    ALOGD("AC4DEC_ac4dec_get_substreams_in_group() called");
    return 0;
}

/* Demangled: DLB_blk_Lfir2L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir2L_strict(void) {
    ALOGD("DLB_blk_Lfir2L_strict() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisL_set_slot_increment */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_set_slot_increment(void) {
    ALOGD("DLB_qmf_analysisL_set_slot_increment() called");
    return 0;
}

/* Demangled: AC4DEC_dap_mathlib_expavg_real */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_expavg_real(void) {
    ALOGD("AC4DEC_dap_mathlib_expavg_real() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_bitbuf_safe_peek_long */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_safe_peek_long(void) {
    ALOGD("AC4DEC_dlb_bitbuf_safe_peek_long() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1L_set_coef(void) {
    ALOGD("DLB_blk_Liir1L_set_coef() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_480 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_480(void) {
    ALOGD("dlb_fft_fwd_scl_480() called");
    return 0;
}

/* Demangled: AC4DEC_sv_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sv_reset(void) {
    ALOGD("AC4DEC_sv_reset() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_hfgen_iwc_1ch_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_hfgen_iwc_1ch_read(void) {
    ALOGD("AC4DEC_aspx_hfgen_iwc_1ch_read() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD240_alpha4_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD240_alpha4_0 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L144 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L144 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L72 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L72 = NULL;

/* Demangled: dlb_fft_fwd_scl_90 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_90(void) {
    ALOGD("dlb_fft_fwd_scl_90() called");
    return 0;
}

/* Demangled: AC4DEC_get_pred_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_pred_gain(void) {
    ALOGD("AC4DEC_get_pred_gain() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD384_alpha4_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD384_alpha4_0 = NULL;

/* Exported Object: dlb_odd_fft_cplx_fwd_usc */
extern "C" __attribute__((visibility("default"))) void* dlb_odd_fft_cplx_fwd_usc = NULL;

/* Demangled: DLB_r4_cplx_fwd_pair */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_fwd_pair(void) {
    ALOGD("DLB_r4_cplx_fwd_pair() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L30_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L30_cos = NULL;

/* Demangled: AC4DEC_shuffle_process_inplace */
extern "C" __attribute__((visibility("default"))) int AC4DEC_shuffle_process_inplace(void) {
    ALOGD("AC4DEC_shuffle_process_inplace() called");
    return 0;
}

/* Exported Object: AC4DEC_ibeta_map */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ibeta_map = NULL;

/* Demangled: AC4DEC_decoder_set_drc_enable */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_set_drc_enable(void) {
    ALOGD("AC4DEC_decoder_set_drc_enable() called");
    return 0;
}

/* Demangled: DLB_r4_fft_72 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_72(void) {
    ALOGD("DLB_r4_fft_72() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_symmetric */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_symmetric(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_symmetric() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisS_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisS_query_mem(void) {
    ALOGD("DLB_qmf_analysisS_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_ec_data_noise_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_ec_data_noise_read(void) {
    ALOGD("AC4DEC_aspx_ec_data_noise_read() called");
    return 0;
}

/* Demangled: AC4DEC_cch_detect_config_change */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_detect_config_change(void) {
    ALOGD("AC4DEC_cch_detect_config_change() called");
    return 0;
}

/* Demangled: AC4DEC_detect_flushing */
extern "C" __attribute__((visibility("default"))) int AC4DEC_detect_flushing(void) {
    ALOGD("AC4DEC_detect_flushing() called");
    return 0;
}

/* Exported Object: mdd_max_frames */
extern "C" __attribute__((visibility("default"))) void* mdd_max_frames = NULL;

/* Exported Object: AC4DEC_WindowKBD240_alpha4_5 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD240_alpha4_5 = NULL;

/* Demangled: android::AC4Decoder::start() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4Decoder5startEv(void) {
    ALOGD("_ZN7android10AC4Decoder5startEv() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L120_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L120_cos = NULL;

/* Demangled: AC4DEC_rand_gen_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rand_gen_query_mem(void) {
    ALOGD("AC4DEC_rand_gen_query_mem() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD384_alpha4_5 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD384_alpha4_5 = NULL;

/* Demangled: dlb_fft_fwd_scl_96 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_96(void) {
    ALOGD("dlb_fft_fwd_scl_96() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_get_stream_info */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_get_stream_info(void) {
    ALOGD("dlb_ac4dec_v2_get_stream_info() called");
    return 0;
}

/* Demangled: DLB_CLmpyCLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpyCLSU_strict(void) {
    ALOGD("DLB_CLmpyCLSU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_384 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_384(void) {
    ALOGD("dlb_fft_inv_usc_384() called");
    return 0;
}

/* Demangled: AC4DEC_ajocdec_interpolate */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_interpolate(void) {
    ALOGD("AC4DEC_ajocdec_interpolate() called");
    return 0;
}

/* Demangled: AC4DEC_emdf_pl_mapping_ac4_to_0x01 */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_pl_mapping_ac4_to_0x01(void) {
    ALOGD("AC4DEC_emdf_pl_mapping_ac4_to_0x01() called");
    return 0;
}

/* Demangled: AC4DEC_ims_il_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ims_il_process(void) {
    ALOGD("AC4DEC_ims_il_process() called");
    return 0;
}

/* Demangled: AC4DEC_ssf_get_mdct_len_rec_x15_q10 */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssf_get_mdct_len_rec_x15_q10(void) {
    ALOGD("AC4DEC_ssf_get_mdct_len_rec_x15_q10() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L320 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L320 = NULL;

/* Demangled: dlb_fft_fwd_usc_192 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_192(void) {
    ALOGD("dlb_fft_fwd_usc_192() called");
    return 0;
}

/* Demangled: AC4DEC_bf1_fdn_process_block */
extern "C" __attribute__((visibility("default"))) int AC4DEC_bf1_fdn_process_block(void) {
    ALOGD("AC4DEC_bf1_fdn_process_block() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_aspx_noise_balance_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_noise_balance_f0 = NULL;

/* Exported Object: AC4DEC_WindowKBD128_alpha4_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD128_alpha4_0 = NULL;

/* Demangled: AC4DEC_evo_get_payload_size */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_get_payload_size(void) {
    ALOGD("AC4DEC_evo_get_payload_size() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_720 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_720(void) {
    ALOGD("dlb_fft_fwd_usc_720() called");
    return 0;
}

/* Demangled: AC4DEC_evo_parse_payload_id */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_parse_payload_id(void) {
    ALOGD("AC4DEC_evo_parse_payload_id() called");
    return 0;
}

/* Demangled: AC4DEC_ac4framer_get_frame */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4framer_get_frame(void) {
    ALOGD("AC4DEC_ac4framer_get_frame() called");
    return 0;
}

/* Demangled: AC4DEC_mult_UM_1ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_mult_UM_1ch(void) {
    ALOGD("AC4DEC_mult_UM_1ch() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_aspx_noise_balance_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_noise_balance_dt = NULL;

/* Demangled: AC4DEC_evo_time_gt */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_time_gt(void) {
    ALOGD("AC4DEC_evo_time_gt() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_set_timestamp */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_set_timestamp(void) {
    ALOGD("dlb_ac4dec_v2_set_timestamp() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_get_substream_index_from_type */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_get_substream_index_from_type(void) {
    ALOGD("AC4DEC_ac4dec_get_substream_index_from_type() called");
    return 0;
}

/* Exported Object: AC4DEC_a_decorr_par_band_to_qmf_border_band */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_decorr_par_band_to_qmf_border_band = NULL;

/* Demangled: reset_Phase90Hilbert */
extern "C" __attribute__((visibility("default"))) int reset_Phase90Hilbert(void) {
    ALOGD("reset_Phase90Hilbert() called");
    return 0;
}

/* Exported Object: AC4DEC_P_PHASE_SHIFT_2TO4CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_P_PHASE_SHIFT_2TO4CH = NULL;

/* Demangled: AC4DEC_dlb_ac4dec_v1_input_stage_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_input_stage_query_mem(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_input_stage_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_evo_cb_clear */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_cb_clear(void) {
    ALOGD("AC4DEC_evo_cb_clear() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_separate_apply_gains */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_separate_apply_gains(void) {
    ALOGD("AC4DEC_ngcs_separate_apply_gains() called");
    return 0;
}

/* Demangled: AC4DEC_fboar_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_fboar_init(void) {
    ALOGD("AC4DEC_fboar_init() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD128_alpha4_5 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD128_alpha4_5 = NULL;

/* Exported Object: dlb_fft_cplx_inv_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_fft_cplx_inv_scl = NULL;

/* Exported Object: AC4DEC_ims_sv_xtc_spk_angle */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ims_sv_xtc_spk_angle = NULL;

/* Demangled: AC4DEC_cch_restore_pres_info_from_previous_frame */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_restore_pres_info_from_previous_frame(void) {
    ALOGD("AC4DEC_cch_restore_pres_info_from_previous_frame() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisL_close */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_close(void) {
    ALOGD("DLB_qmf_analysisL_close() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD256 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD256 = NULL;

/* Demangled: DLB_hybrid_analysisCL_open */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_open(void) {
    ALOGD("DLB_hybrid_analysisCL_open() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L768 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L768 = NULL;

/* Exported Object: AC4DEC_tree_huff_code_ims_help_coarse_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ims_help_coarse_df = NULL;

/* Demangled: AC4DEC_evo_generate_hash */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_generate_hash(void) {
    ALOGD("AC4DEC_evo_generate_hash() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2df1L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2df1L_setup(void) {
    ALOGD("DLB_blk_Liir2df1L_setup() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_90 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_90(void) {
    ALOGD("DLB_r4_inv_fft_90() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_set_sample_offset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_set_sample_offset(void) {
    ALOGD("AC4DEC_oamdi_set_sample_offset() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_get_active_channel_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_get_active_channel_config(void) {
    ALOGD("AC4DEC_decoder_get_active_channel_config() called");
    return 0;
}

/* Demangled: AC4DEC_sap_sub_ms_enc */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sap_sub_ms_enc(void) {
    ALOGD("AC4DEC_sap_sub_ms_enc() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_bitbuf_get_version */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_get_version(void) {
    ALOGD("AC4DEC_dlb_bitbuf_get_version() called");
    return 0;
}

/* Demangled: AC4DEC_q2le_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_q2le_process(void) {
    ALOGD("AC4DEC_q2le_process() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_process_dmx */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_process_dmx(void) {
    ALOGD("AC4DEC_aspx_process_dmx() called");
    return 0;
}

/* Demangled: AC4DEC_cch_get_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_get_data(void) {
    ALOGD("AC4DEC_cch_get_data() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_aspx_env_level_15_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_env_level_15_df = NULL;

/* Demangled: AC4DEC_ssf_buffer_update */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssf_buffer_update(void) {
    ALOGD("AC4DEC_ssf_buffer_update() called");
    return 0;
}

/* Demangled: AC4DEC_oamd_framer_last_update_sample */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_framer_last_update_sample(void) {
    ALOGD("AC4DEC_oamd_framer_last_update_sample() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L90 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L90 = NULL;

/* Demangled: DLB_r4_inv_fft_16_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_16_s(void) {
    ALOGD("DLB_r4_inv_fft_16_s() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisL_set_slot_increment */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_set_slot_increment(void) {
    ALOGD("DLB_qmf_synthesisL_set_slot_increment() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_convert_drc_params */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_convert_drc_params(void) {
    ALOGD("AC4DEC_ac4dap_convert_drc_params() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_2 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_2(void) {
    ALOGD("DLB_r4_inv_fft_2() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L30_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L30_1 = NULL;

/* Demangled: AC4DEC_oamdi_get_oa_element_bed_object */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_oa_element_bed_object(void) {
    ALOGD("AC4DEC_oamdi_get_oa_element_bed_object() called");
    return 0;
}

/* Demangled: AC4DEC_pcm_data_convert */
extern "C" __attribute__((visibility("default"))) int AC4DEC_pcm_data_convert(void) {
    ALOGD("AC4DEC_pcm_data_convert() called");
    return 0;
}

/* Exported Object: AC4DEC_DELTA_X_SAMPLES */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DELTA_X_SAMPLES = NULL;

/* Demangled: DLB_r4_inv_fft_96 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_96(void) {
    ALOGD("DLB_r4_inv_fft_96() called");
    return 0;
}

/* Exported Object: AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR46KHZ034 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR46KHZ034 = NULL;

/* Demangled: AC4DEC_imdct_ast_bw_index_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imdct_ast_bw_index_get(void) {
    ALOGD("AC4DEC_imdct_ast_bw_index_get() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L30_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L30_2 = NULL;

/* Demangled: dlb_blk_LmixLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmixLL_flex(void) {
    ALOGD("dlb_blk_LmixLL_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_20_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_20_s(void) {
    ALOGD("DLB_r4_inv_fft_20_s() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_4 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_4(void) {
    ALOGD("DLB_r4_inv_fft_4() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_init(void) {
    ALOGD("AC4DEC_dvlim_init() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_144 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_144(void) {
    ALOGD("DLB_r4_inv_fft_144() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L288 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L288 = NULL;

/* Demangled: DLB_r4_inv_fft_6 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_6(void) {
    ALOGD("DLB_r4_inv_fft_6() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_72 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_72(void) {
    ALOGD("dlb_fft_fwd_usc_72() called");
    return 0;
}

/* Demangled: DLB_time_lt */
extern "C" __attribute__((visibility("default"))) int DLB_time_lt(void) {
    ALOGD("DLB_time_lt() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L96 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L96 = NULL;

/* Demangled: dlb_fft_fwd_usc_2048 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_2048(void) {
    ALOGD("dlb_fft_fwd_usc_2048() called");
    return 0;
}

/* Demangled: AC4DEC_memlib_pool_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_pool_init(void) {
    ALOGD("AC4DEC_memlib_pool_init() called");
    return 0;
}

/* Demangled: dlb_blk_LsubLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LsubLL_flex(void) {
    ALOGD("dlb_blk_LsubLL_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_8 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_8(void) {
    ALOGD("DLB_r4_inv_fft_8() called");
    return 0;
}

/* Exported Object: frame_rate_settings */
extern "C" __attribute__((visibility("default"))) void* frame_rate_settings = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L36_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L36_cos = NULL;

/* Exported Object: AC4DEC_tree_huff_code_ims_help_coarse_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ims_help_coarse_f0 = NULL;

/* Demangled: dlb_fft_inv_usc_80 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_80(void) {
    ALOGD("dlb_fft_inv_usc_80() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_0 */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_even_0(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_even_0() called");
    return 0;
}

/* Demangled: AC4DEC_lvl_smooth_scale_time */
extern "C" __attribute__((visibility("default"))) int AC4DEC_lvl_smooth_scale_time(void) {
    ALOGD("AC4DEC_lvl_smooth_scale_time() called");
    return 0;
}

/* Demangled: AC4DEC_decorr_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decorr_open(void) {
    ALOGD("AC4DEC_decorr_open() called");
    return 0;
}

/* Exported Object: AC4DEC_A_ROOM_CONFIG_SPKS_SURROUNDS_FULL */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_ROOM_CONFIG_SPKS_SURROUNDS_FULL = NULL;

/* Demangled: DLB_r4_inv_fft_8_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_8_s(void) {
    ALOGD("DLB_r4_inv_fft_8_s() called");
    return 0;
}

/* Demangled: init_Phase90Hilbert */
extern "C" __attribute__((visibility("default"))) int init_Phase90Hilbert(void) {
    ALOGD("init_Phase90Hilbert() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_1 */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_even_1(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_even_1() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_query_mem(void) {
    ALOGD("DLB_hybrid_analysisCL_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_hcqmf_umix_g */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_hcqmf_umix_g(void) {
    ALOGD("AC4DEC_ngcs_hcqmf_umix_g() called");
    return 0;
}

/* Exported Object: AC4DEC_ajoc_de_dlg_dmx_coeff_idx_huf_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajoc_de_dlg_dmx_coeff_idx_huf_tab = NULL;

/* Exported Object: AC4DEC_tree_huff_code_ims_help_coarse_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ims_help_coarse_dt = NULL;

/* Demangled: AC4DEC_oamdi_get_trim_config_read_only */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_trim_config_read_only(void) {
    ALOGD("AC4DEC_oamdi_get_trim_config_read_only() called");
    return 0;
}

/* Demangled: dlb_dctII_unscaled */
extern "C" __attribute__((visibility("default"))) int dlb_dctII_unscaled(void) {
    ALOGD("dlb_dctII_unscaled() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_144_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_144_s(void) {
    ALOGD("DLB_r4_inv_fft_144_s() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_2 */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_even_2(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_even_2() called");
    return 0;
}

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR48KHZ_BS256S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR48KHZ_BS256S = NULL;

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR44KHZ1_BS384S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR44KHZ1_BS384S = NULL;

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR48KHZ_BS384S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR48KHZ_BS384S = NULL;

/* Exported Object: AC4DEC_tree_huff_code_aspx_env_level_15_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_env_level_15_f0 = NULL;

/* Demangled: AC4DEC_ramp_gain_starting_gain_set */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ramp_gain_starting_gain_set(void) {
    ALOGD("AC4DEC_ramp_gain_starting_gain_set() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_3 */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_even_3(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_even_3() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_320 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_320(void) {
    ALOGD("DLB_r4_inv_fft_320() called");
    return 0;
}

/* Demangled: android::AC4Decoder::AC4Decoder(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4DecoderC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android10AC4DecoderC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: AC4DEC_downmix_excitations */
extern "C" __attribute__((visibility("default"))) int AC4DEC_downmix_excitations(void) {
    ALOGD("AC4DEC_downmix_excitations() called");
    return 0;
}

/* Demangled: AC4DEC_ajccdec_upmix_mtrx_mult_module4_312 */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_upmix_mtrx_mult_module4_312(void) {
    ALOGD("AC4DEC_ajccdec_upmix_mtrx_mult_module4_312() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L60_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L60_1 = NULL;

/* Exported Object: AC4DEC_tree_huff_code_aspx_env_level_15_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_env_level_15_dt = NULL;

/* Demangled: dlb_blk_Liir2ssv3L_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv3L_inplace_flex(void) {
    ALOGD("dlb_blk_Liir2ssv3L_inplace_flex() called");
    return 0;
}

/* Demangled: AC4DEC_lvl_configure_smoothing_params */
extern "C" __attribute__((visibility("default"))) int AC4DEC_lvl_configure_smoothing_params(void) {
    ALOGD("AC4DEC_lvl_configure_smoothing_params() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L60_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L60_2 = NULL;

/* Demangled: AC4DEC_dlb_bitbuf_peek */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_peek(void) {
    ALOGD("AC4DEC_dlb_bitbuf_peek() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_120 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_120(void) {
    ALOGD("dlb_fft_fwd_scl_120() called");
    return 0;
}

/* Demangled: DLB_fft_init */
extern "C" __attribute__((visibility("default"))) int DLB_fft_init(void) {
    ALOGD("DLB_fft_init() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_get_ma_mix_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_get_ma_mix_info(void) {
    ALOGD("AC4DEC_decoder_get_ma_mix_info() called");
    return 0;
}

/* Demangled: DLB_vec_Lmean_sqrLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_Lmean_sqrLU_strict(void) {
    ALOGD("DLB_vec_Lmean_sqrLU_strict() called");
    return 0;
}

/* Exported Object: func_a_ptr */
extern "C" __attribute__((visibility("default"))) void* func_a_ptr = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L512_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L512_cos = NULL;

/* Demangled: AC4DEC_evo_pb_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_pb_init(void) {
    ALOGD("AC4DEC_evo_pb_init() called");
    return 0;
}

/* Demangled: DLB_r4_fft_80 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_80(void) {
    ALOGD("DLB_r4_fft_80() called");
    return 0;
}

/* Demangled: AC4DEC_lvl_calc_drc_scale */
extern "C" __attribute__((visibility("default"))) int AC4DEC_lvl_calc_drc_scale(void) {
    ALOGD("AC4DEC_lvl_calc_drc_scale() called");
    return 0;
}

/* Demangled: dlb_CLmpy_shlCLSIU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpy_shlCLSIU_flex(void) {
    ALOGD("dlb_CLmpy_shlCLSIU_flex() called");
    return 0;
}

/* Demangled: DLB_dsplib_init */
extern "C" __attribute__((visibility("default"))) int DLB_dsplib_init(void) {
    ALOGD("DLB_dsplib_init() called");
    return 0;
}

/* Demangled: DLB_mfb_p10km_synthesisCL_query_scratch */
extern "C" __attribute__((visibility("default"))) int DLB_mfb_p10km_synthesisCL_query_scratch(void) {
    ALOGD("DLB_mfb_p10km_synthesisCL_query_scratch() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv2L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv2L_flex(void) {
    ALOGD("dlb_blk_Liir2ssv2L_flex() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_get_substream_group_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_get_substream_group_info(void) {
    ALOGD("AC4DEC_ac4toc_get_substream_group_info() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_get_number_of_channels_from_channel_mode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_get_number_of_channels_from_channel_mode(void) {
    ALOGD("AC4DEC_ac4dec_get_number_of_channels_from_channel_mode() called");
    return 0;
}

/* Demangled: dlb_vec_LdotLLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LdotLLU_flex(void) {
    ALOGD("dlb_vec_LdotLLU_flex() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_NGCS_SEG_CHANNELS_2TO6CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_NGCS_SEG_CHANNELS_2TO6CH = NULL;

/* Demangled: AC4DEC_ssfdec_update_spectrum_delay_buf */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssfdec_update_spectrum_delay_buf(void) {
    ALOGD("AC4DEC_ssfdec_update_spectrum_delay_buf() called");
    return 0;
}

/* Demangled: AC4DEC_room_config_size_panner_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_room_config_size_panner_init(void) {
    ALOGD("AC4DEC_room_config_size_panner_init() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_output_stage_get_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_output_stage_get_config(void) {
    ALOGD("AC4DEC_ac4dec_output_stage_get_config() called");
    return 0;
}

/* Demangled: AC4DEC_ac4parser_cdmx_parameters */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4parser_cdmx_parameters(void) {
    ALOGD("AC4DEC_ac4parser_cdmx_parameters() called");
    return 0;
}

/* Exported Object: AC4DEC_slop_db_to_lin_inv */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_slop_db_to_lin_inv = NULL;

/* Demangled: AC4DEC_expd_channels_sync */
extern "C" __attribute__((visibility("default"))) int AC4DEC_expd_channels_sync(void) {
    ALOGD("AC4DEC_expd_channels_sync() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_prog_assign */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_prog_assign(void) {
    ALOGD("AC4DEC_oamdi_get_prog_assign() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_asf_book1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_asf_book1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L640 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L640 = NULL;

/* Demangled: DLB_fft_scratch_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_fft_scratch_query_mem(void) {
    ALOGD("DLB_fft_scratch_query_mem() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L640_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L640_cos = NULL;

/* Demangled: AC4DEC_ldn_wb_loudness_transform */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ldn_wb_loudness_transform(void) {
    ALOGD("AC4DEC_ldn_wb_loudness_transform() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_vec_sqrt_mant_exp */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_vec_sqrt_mant_exp(void) {
    ALOGD("AC4DEC_aspx_vec_sqrt_mant_exp() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_asf_book2 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_asf_book2 = NULL;

/* Demangled: DLB_r4_fft_960 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_960(void) {
    ALOGD("DLB_r4_fft_960() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_128 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_128(void) {
    ALOGD("dlb_fft_fwd_scl_128() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_convert_to_nonstd_bed_channel_assignment_mask */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_convert_to_nonstd_bed_channel_assignment_mask(void) {
    ALOGD("AC4DEC_ac4toc_convert_to_nonstd_bed_channel_assignment_mask() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_asf_book3 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_asf_book3 = NULL;

/* Demangled: AC4DEC_get_max_sfb */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_max_sfb(void) {
    ALOGD("AC4DEC_get_max_sfb() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_get_channel_mode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_get_channel_mode(void) {
    ALOGD("AC4DEC_ac4dec_get_channel_mode() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L90_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L90_1 = NULL;

/* Exported Object: AC4DEC_tree_asf_book4 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_asf_book4 = NULL;

/* Demangled: AC4DEC_hmac_sha256_get_digest */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hmac_sha256_get_digest(void) {
    ALOGD("AC4DEC_hmac_sha256_get_digest() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_update_oamdi_prog_assign */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_update_oamdi_prog_assign(void) {
    ALOGD("AC4DEC_ac4toc_update_oamdi_prog_assign() called");
    return 0;
}

/* Demangled: AC4DEC_ajcc_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajcc_read(void) {
    ALOGD("AC4DEC_ajcc_read() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L90_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L90_2 = NULL;

/* Exported Object: AC4DEC_tree_asf_book5 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_asf_book5 = NULL;

/* Demangled: DLB_r4_inv_fft_80_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_80_s(void) {
    ALOGD("DLB_r4_inv_fft_80_s() called");
    return 0;
}

/* Demangled: AC4DEC_de_new_index */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_new_index(void) {
    ALOGD("AC4DEC_de_new_index() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_query_mem_dynamic */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_query_mem_dynamic(void) {
    ALOGD("AC4DEC_decoder_query_mem_dynamic() called");
    return 0;
}

/* Demangled: AC4DEC_acpldec_decorr_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_decorr_init(void) {
    ALOGD("AC4DEC_acpldec_decorr_init() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_asf_book6 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_asf_book6 = NULL;

/* Exported Object: AC4DEC_WindowKBD192_alpha4_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD192_alpha4_0 = NULL;

/* Demangled: AC4DEC_ade_frame_dec_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_frame_dec_init(void) {
    ALOGD("AC4DEC_ade_frame_dec_init() called");
    return 0;
}

/* Demangled: AC4DEC_metadata_delay_input_get_buffer */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_input_get_buffer(void) {
    ALOGD("AC4DEC_metadata_delay_input_get_buffer() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_asf_book7 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_asf_book7 = NULL;

/* Demangled: AC4DEC_evo_get_md_validity */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_get_md_validity(void) {
    ALOGD("AC4DEC_evo_get_md_validity() called");
    return 0;
}

/* Demangled: DLB_fft_is_supported */
extern "C" __attribute__((visibility("default"))) int DLB_fft_is_supported(void) {
    ALOGD("DLB_fft_is_supported() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_asf_book8 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_asf_book8 = NULL;

/* Demangled: dlb_blk_Liir1_shl_addLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir1_shl_addLL_flex(void) {
    ALOGD("dlb_blk_Liir1_shl_addLL_flex() called");
    return 0;
}

/* Demangled: dlb_vec_LmpyLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LmpyLSU_flex(void) {
    ALOGD("dlb_vec_LmpyLSU_flex() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_get_metadata_sample_offset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_get_metadata_sample_offset(void) {
    ALOGD("AC4DEC_decoder_get_metadata_sample_offset() called");
    return 0;
}

/* Demangled: AC4DEC_update_subband_groups */
extern "C" __attribute__((visibility("default"))) int AC4DEC_update_subband_groups(void) {
    ALOGD("AC4DEC_update_subband_groups() called");
    return 0;
}

/* Demangled: AC4DEC_get_compressed_channel_position */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_compressed_channel_position(void) {
    ALOGD("AC4DEC_get_compressed_channel_position() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_asf_book9 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_asf_book9 = NULL;

/* Exported Object: AC4DEC_a_f_indices */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_f_indices = NULL;

/* Demangled: AC4DEC_evo_pb_remove */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_pb_remove(void) {
    ALOGD("AC4DEC_evo_pb_remove() called");
    return 0;
}

/* Demangled: dlb_CLmix4CL4SU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmix4CL4SU_flex(void) {
    ALOGD("dlb_CLmix4CL4SU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L1024 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L1024 = NULL;

/* Demangled: AC4DEC_framer_buffer_rewind */
extern "C" __attribute__((visibility("default"))) int AC4DEC_framer_buffer_rewind(void) {
    ALOGD("AC4DEC_framer_buffer_rewind() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD192_alpha4_5 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD192_alpha4_5 = NULL;

/* Demangled: AC4DEC_evo_parse_bitstream */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_parse_bitstream(void) {
    ALOGD("AC4DEC_evo_parse_bitstream() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L320_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L320_1 = NULL;

/* Demangled: AC4DEC_dlb_bitbuf_safe_peek */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_safe_peek(void) {
    ALOGD("AC4DEC_dlb_bitbuf_safe_peek() called");
    return 0;
}

/* Demangled: DLB_CLcopyCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLcopyCLU_strict(void) {
    ALOGD("DLB_CLcopyCLU_strict() called");
    return 0;
}

/* Demangled: AC4DEC_expd_set_qmf_limits */
extern "C" __attribute__((visibility("default"))) int AC4DEC_expd_set_qmf_limits(void) {
    ALOGD("AC4DEC_expd_set_qmf_limits() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L320_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L320_2 = NULL;

/* Demangled: DLB_r4_fft_240 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_240(void) {
    ALOGD("DLB_r4_fft_240() called");
    return 0;
}

/* Demangled: AC4DEC_sone_buffer_channel_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sone_buffer_channel_init(void) {
    ALOGD("AC4DEC_sone_buffer_channel_init() called");
    return 0;
}

/* Demangled: DLB_blk_Lconst_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lconst_strict(void) {
    ALOGD("DLB_blk_Lconst_strict() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_576 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_576(void) {
    ALOGD("dlb_fft_inv_usc_576() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_init */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_init(void) {
    ALOGD("DLB_hybrid_analysisCL_init() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_obj_not_active */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_obj_not_active(void) {
    ALOGD("AC4DEC_oamdi_get_obj_not_active() called");
    return 0;
}

/* Demangled: AC4DEC_oamd_framer_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_framer_query_memory(void) {
    ALOGD("AC4DEC_oamd_framer_query_memory() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L512 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L512 = NULL;

/* Demangled: DLB_r4_fft_24_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_24_s(void) {
    ALOGD("DLB_r4_fft_24_s() called");
    return 0;
}

/* Demangled: DLB_r4_rfft_nn_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_rfft_nn_s(void) {
    ALOGD("DLB_r4_rfft_nn_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_384 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_384(void) {
    ALOGD("dlb_fft_fwd_usc_384() called");
    return 0;
}

/* Demangled: AC4DEC_ajocdec_alloc */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_alloc(void) {
    ALOGD("AC4DEC_ajocdec_alloc() called");
    return 0;
}

/* Demangled: AC4DEC_metadata_delay_input_repeat_previous_buffer */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_input_repeat_previous_buffer(void) {
    ALOGD("AC4DEC_metadata_delay_input_repeat_previous_buffer() called");
    return 0;
}

/* Demangled: AC4DEC_coeffs_unpack */
extern "C" __attribute__((visibility("default"))) int AC4DEC_coeffs_unpack(void) {
    ALOGD("AC4DEC_coeffs_unpack() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_80 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_80(void) {
    ALOGD("dlb_fft_fwd_usc_80() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_144 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_144(void) {
    ALOGD("dlb_fft_inv_scl_144() called");
    return 0;
}

/* Exported Object: dlb_odd_fft_cplx_inv_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_odd_fft_cplx_inv_scl = NULL;

/* Demangled: AC4DEC_ac4toc_get_emdf_info_element */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_get_emdf_info_element(void) {
    ALOGD("AC4DEC_ac4toc_get_emdf_info_element() called");
    return 0;
}

/* Demangled: AC4DEC_de_calculate_mix_gains */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_calculate_mix_gains(void) {
    ALOGD("AC4DEC_de_calculate_mix_gains() called");
    return 0;
}

/* Exported Object: AC4DEC_env_dequant_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_env_dequant_tab = NULL;

/* Demangled: AC4DEC_mult_UM_2ch_no_decorr */
extern "C" __attribute__((visibility("default"))) int AC4DEC_mult_UM_2ch_no_decorr(void) {
    ALOGD("AC4DEC_mult_UM_2ch_no_decorr() called");
    return 0;
}

/* Demangled: AC4DEC_memlib_block_end */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_block_end(void) {
    ALOGD("AC4DEC_memlib_block_end() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv1_dsmpL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv1_dsmpL_flex(void) {
    ALOGD("dlb_blk_Liir2ssv1_dsmpL_flex() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_NGCS_SEG_CHANNELS_2TO4CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_NGCS_SEG_CHANNELS_2TO4CH = NULL;

/* Demangled: AC4DEC_emdf_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_query_mem(void) {
    ALOGD("AC4DEC_emdf_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_metadata_delay_input_insert_buffer */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_input_insert_buffer(void) {
    ALOGD("AC4DEC_metadata_delay_input_insert_buffer() called");
    return 0;
}

/* Demangled: DLB_vec_Lsum_sqrLUU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_Lsum_sqrLUU_strict(void) {
    ALOGD("DLB_vec_Lsum_sqrLUU_strict() called");
    return 0;
}

/* Demangled: dlb_blk_Lfir2L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lfir2L_flex(void) {
    ALOGD("dlb_blk_Lfir2L_flex() called");
    return 0;
}

/* Demangled: AC4DEC_framer_parse_size_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_framer_parse_size_info(void) {
    ALOGD("AC4DEC_framer_parse_size_info() called");
    return 0;
}

/* Demangled: AC4DEC_de_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_init(void) {
    ALOGD("AC4DEC_de_init() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_output_stage_copy_shared_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_output_stage_copy_shared_mem(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_output_stage_copy_shared_mem() called");
    return 0;
}

/* Demangled: AC4DEC_sha256_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sha256_init(void) {
    ALOGD("AC4DEC_sha256_init() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_90 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_90(void) {
    ALOGD("dlb_fft_inv_usc_90() called");
    return 0;
}

/* Demangled: AC4DEC_memlib_pool_subsection_begin */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_pool_subsection_begin(void) {
    ALOGD("AC4DEC_memlib_pool_subsection_begin() called");
    return 0;
}

/* Demangled: AC4DEC_ajoc_bed_info_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajoc_bed_info_read(void) {
    ALOGD("AC4DEC_ajoc_bed_info_read() called");
    return 0;
}

/* Exported Object: dlb_fft_cplx_fwd_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_fft_cplx_fwd_scl = NULL;

/* Demangled: dlb_fft_inv_usc_2 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_2(void) {
    ALOGD("dlb_fft_inv_usc_2() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_bed_channels_count */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_bed_channels_count(void) {
    ALOGD("AC4DEC_oamdi_get_bed_channels_count() called");
    return 0;
}

/* Demangled: AC4DEC_ade_il_ade_enable_decide */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_il_ade_enable_decide(void) {
    ALOGD("AC4DEC_ade_il_ade_enable_decide() called");
    return 0;
}

/* Demangled: AC4DEC_huffdec_get_read_status */
extern "C" __attribute__((visibility("default"))) int AC4DEC_huffdec_get_read_status(void) {
    ALOGD("AC4DEC_huffdec_get_read_status() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L48_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L48_cos = NULL;

/* Exported Object: AC4DEC_a_t_indices */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_t_indices = NULL;

/* Demangled: AC4DEC_decoder_get_emdf_status */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_get_emdf_status(void) {
    ALOGD("AC4DEC_decoder_get_emdf_status() called");
    return 0;
}

/* Demangled: AC4DEC_huffdec_set_bitbuf */
extern "C" __attribute__((visibility("default"))) int AC4DEC_huffdec_set_bitbuf(void) {
    ALOGD("AC4DEC_huffdec_set_bitbuf() called");
    return 0;
}

/* Demangled: AC4DEC_ajocdec_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_reset(void) {
    ALOGD("AC4DEC_ajocdec_reset() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_dequantize_sig_2ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_dequantize_sig_2ch(void) {
    ALOGD("AC4DEC_aspx_dequantize_sig_2ch() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L768_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L768_cos = NULL;

/* Demangled: AC4DEC_oamdi_get_hp_render_mode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_hp_render_mode(void) {
    ALOGD("AC4DEC_oamdi_get_hp_render_mode() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlaL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlaL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlaL_strict() called");
    return 0;
}

/* Demangled: dlb_CLzeroCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLzeroCLU_flex(void) {
    ALOGD("dlb_CLzeroCLU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L90 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L90 = NULL;

/* Demangled: dlb_fft_inv_scl_320 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_320(void) {
    ALOGD("dlb_fft_inv_scl_320() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_4 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_4(void) {
    ALOGD("dlb_fft_inv_usc_4() called");
    return 0;
}

/* Exported Object: AC4DEC_ajoc_num_param_bands_conv */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajoc_num_param_bands_conv = NULL;

/* Exported Object: AC4DEC_P_NGCS_SEG_RANGE_2TO6CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_P_NGCS_SEG_RANGE_2TO6CH = NULL;

/* Exported Object: AC4DEC_WindowKBD1920 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD1920 = NULL;

/* Demangled: dlb_fft_inv_usc_6 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_6(void) {
    ALOGD("dlb_fft_inv_usc_6() called");
    return 0;
}

/* Demangled: AC4DEC_delay_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_read(void) {
    ALOGD("AC4DEC_delay_read() called");
    return 0;
}

/* Demangled: AC4DEC_decorr_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decorr_init(void) {
    ALOGD("AC4DEC_decorr_init() called");
    return 0;
}

/* Demangled: DLB_BLmpy_scaleBLSU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmpy_scaleBLSU_inplace_strict(void) {
    ALOGD("DLB_BLmpy_scaleBLSU_inplace_strict() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_96 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_96(void) {
    ALOGD("dlb_fft_inv_usc_96() called");
    return 0;
}

/* Demangled: AC4DEC_get_qextract_external_banding_scheme */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_qextract_external_banding_scheme(void) {
    ALOGD("AC4DEC_get_qextract_external_banding_scheme() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv2_shlLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv2_shlLU_flex(void) {
    ALOGD("dlb_blk_Liir2ssv2_shlLU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L180 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L180 = NULL;

/* Demangled: DLB_r4_fft_90 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_90(void) {
    ALOGD("DLB_r4_fft_90() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_8 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_8(void) {
    ALOGD("dlb_fft_inv_usc_8() called");
    return 0;
}

/* Demangled: AC4DEC_ajccdec_upmix_mtrx_mult_module4_switch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_upmix_mtrx_mult_module4_switch(void) {
    ALOGD("AC4DEC_ajccdec_upmix_mtrx_mult_module4_switch() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_toc_reader_get_presentation_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_toc_reader_get_presentation_info(void) {
    ALOGD("AC4DEC_ac4dec_toc_reader_get_presentation_info() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_init_ane_fdn_panning */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_init_ane_fdn_panning(void) {
    ALOGD("AC4DEC_imsdec_init_ane_fdn_panning() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_beta3_coarse_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_beta3_coarse_df = NULL;

/* Exported Object: AC4DEC_WindowKBD1024 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD1024 = NULL;

/* Demangled: dlb_blk_LsaddLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LsaddLL_flex(void) {
    ALOGD("dlb_blk_LsaddLL_flex() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_get_substream_content_type */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_get_substream_content_type(void) {
    ALOGD("AC4DEC_ac4toc_get_substream_content_type() called");
    return 0;
}

/* Demangled: DLB_blk_Lfir2L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir2L_setup(void) {
    ALOGD("DLB_blk_Lfir2L_setup() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L96 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L96 = NULL;

/* Demangled: AC4DEC_agc_update_alpha */
extern "C" __attribute__((visibility("default"))) int AC4DEC_agc_update_alpha(void) {
    ALOGD("AC4DEC_agc_update_alpha() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_input_stage_count_shared_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_input_stage_count_shared_mem(void) {
    ALOGD("AC4DEC_ac4dec_input_stage_count_shared_mem() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_get_ch_bitmap */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_get_ch_bitmap(void) {
    ALOGD("AC4DEC_ac4toc_get_ch_bitmap() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_DIFFUSE_NO_DECORR_2TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_DIFFUSE_NO_DECORR_2TO7CH = NULL;

/* Exported Object: AC4DEC_A_NGCS_SEG_RANGE_2TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_NGCS_SEG_RANGE_2TO7CH = NULL;

/* Demangled: dlb_blk_Liir2ssv2L_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv2L_inplace_flex(void) {
    ALOGD("dlb_blk_Liir2ssv2L_inplace_flex() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_virtualizer_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_virtualizer_init(void) {
    ALOGD("AC4DEC_ac4dap_virtualizer_init() called");
    return 0;
}

/* Demangled: dlb_vec_Lmean_sqrLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_Lmean_sqrLU_flex(void) {
    ALOGD("dlb_vec_Lmean_sqrLU_flex() called");
    return 0;
}

/* Demangled: AC4DEC_sv_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sv_query_scratch(void) {
    ALOGD("AC4DEC_sv_query_scratch() called");
    return 0;
}

/* Demangled: DLB_r4_fft_96 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_96(void) {
    ALOGD("DLB_r4_fft_96() called");
    return 0;
}

/* Demangled: AC4DEC_intelligent_eq_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_intelligent_eq_process(void) {
    ALOGD("AC4DEC_intelligent_eq_process() called");
    return 0;
}

/* Demangled: AC4DEC_get_frame_rate_setting */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_frame_rate_setting(void) {
    ALOGD("AC4DEC_get_frame_rate_setting() called");
    return 0;
}

/* Demangled: AC4DEC_de_il_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_il_close(void) {
    ALOGD("AC4DEC_de_il_close() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_helper_blind_drc_get_curve */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_helper_blind_drc_get_curve(void) {
    ALOGD("AC4DEC_ac4dap_helper_blind_drc_get_curve() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_separate_run */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_separate_run(void) {
    ALOGD("AC4DEC_ngcs_separate_run() called");
    return 0;
}

/* Demangled: AC4DEC_asfdec_ungroup_spectrum */
extern "C" __attribute__((visibility("default"))) int AC4DEC_asfdec_ungroup_spectrum(void) {
    ALOGD("AC4DEC_asfdec_ungroup_spectrum() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L144_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L144_cos = NULL;

/* Demangled: AC4DEC_isf_decoder_gains_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_isf_decoder_gains_get(void) {
    ALOGD("AC4DEC_isf_decoder_gains_get() called");
    return 0;
}

/* Demangled: AC4DEC_ims_il_ims_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ims_il_ims_init(void) {
    ALOGD("AC4DEC_ims_il_ims_init() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_seek_to_presentation_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_seek_to_presentation_info(void) {
    ALOGD("AC4DEC_ac4toc_seek_to_presentation_info() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_steering_table_get_segment_from_idx */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_steering_table_get_segment_from_idx(void) {
    ALOGD("AC4DEC_ngcs_steering_table_get_segment_from_idx() called");
    return 0;
}

/* Exported Object: AC4DEC_ajcc_ps_type_id_7x4 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajcc_ps_type_id_7x4 = NULL;

/* Demangled: AC4DEC_imdct_freq_to_time */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imdct_freq_to_time(void) {
    ALOGD("AC4DEC_imdct_freq_to_time() called");
    return 0;
}

/* Demangled: dlb_blk_LmixL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmixL_flex(void) {
    ALOGD("dlb_blk_LmixL_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_512 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_512(void) {
    ALOGD("DLB_r4_inv_fft_512() called");
    return 0;
}

/* Demangled: AC4DEC_stereo_dmx_coeff_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_stereo_dmx_coeff_read(void) {
    ALOGD("AC4DEC_stereo_dmx_coeff_read() called");
    return 0;
}

/* Demangled: AC4DEC_drc_gains_apply */
extern "C" __attribute__((visibility("default"))) int AC4DEC_drc_gains_apply(void) {
    ALOGD("AC4DEC_drc_gains_apply() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ims_para_fine_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ims_para_fine_df = NULL;

/* Demangled: DLB_blk_Liir1L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1L_setup(void) {
    ALOGD("DLB_blk_Liir1L_setup() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L360 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L360 = NULL;

/* Demangled: DLB_r4_inv_fft_4096_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_4096_s(void) {
    ALOGD("DLB_r4_inv_fft_4096_s() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_num_obj_info_blks */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_num_obj_info_blks(void) {
    ALOGD("AC4DEC_oamdi_get_num_obj_info_blks() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L60_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L60_cos = NULL;

/* Exported Object: AC4DEC_tree_huff_code_acpl_beta3_coarse_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_beta3_coarse_f0 = NULL;

/* Exported Object: AC4DEC_tree_huff_code_drc_book */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_drc_book = NULL;

/* Demangled: AC4DEC_evo_time_add */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_time_add(void) {
    ALOGD("AC4DEC_evo_time_add() called");
    return 0;
}

/* Demangled: DLB_CLmpy_shlCLSIU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpy_shlCLSIU_inplace_strict(void) {
    ALOGD("DLB_CLmpy_shlCLSIU_inplace_strict() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_set_ajoc_core_decode */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_set_ajoc_core_decode(void) {
    ALOGD("dlb_ac4dec_v2_dec_set_ajoc_core_decode() called");
    return 0;
}

/* Demangled: AC4DEC_ajccdec_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_close(void) {
    ALOGD("AC4DEC_ajccdec_close() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_beta3_coarse_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_beta3_coarse_dt = NULL;

/* Demangled: dolby::Ac4DecClient::Ac4DecClient(dolby::IDecConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12Ac4DecClientC1EPNS_10IDecConfigE(void) {
    ALOGD("_ZN5dolby12Ac4DecClientC1EPNS_10IDecConfigE() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_parse */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_parse(void) {
    ALOGD("AC4DEC_imsdec_parse() called");
    return 0;
}

/* Exported Object: AC4DEC_a_isf_bh_7_3_0_0_reorder */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_isf_bh_7_3_0_0_reorder = NULL;

/* Demangled: AC4DEC_oamd_trans_get_ramp_length_remaining */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_trans_get_ramp_length_remaining(void) {
    ALOGD("AC4DEC_oamd_trans_get_ramp_length_remaining() called");
    return 0;
}

/* Demangled: AC4DEC_point_panner_compute_gains_along_rows */
extern "C" __attribute__((visibility("default"))) int AC4DEC_point_panner_compute_gains_along_rows(void) {
    ALOGD("AC4DEC_point_panner_compute_gains_along_rows() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_is_std_chan_assign */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_is_std_chan_assign(void) {
    ALOGD("AC4DEC_oamdi_is_std_chan_assign() called");
    return 0;
}

/* Demangled: dlb_blk_LdelayU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LdelayU_flex(void) {
    ALOGD("dlb_blk_LdelayU_flex() called");
    return 0;
}

/* Demangled: AC4DEC_bf1_fdn_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_bf1_fdn_query_memory(void) {
    ALOGD("AC4DEC_bf1_fdn_query_memory() called");
    return 0;
}

/* Demangled: dlb_CLshrCLUU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLshrCLUU_flex(void) {
    ALOGD("dlb_CLshrCLUU_flex() called");
    return 0;
}

/* Demangled: AC4DEC_acpldec_mdd_generate_dummy_data_1ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_mdd_generate_dummy_data_1ch(void) {
    ALOGD("AC4DEC_acpldec_mdd_generate_dummy_data_1ch() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L960 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L960 = NULL;

/* Demangled: DLB_r4_inv_fft_160 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_160(void) {
    ALOGD("DLB_r4_inv_fft_160() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisS_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisS_get_delay(void) {
    ALOGD("DLB_qmf_analysisS_get_delay() called");
    return 0;
}

/* Demangled: AC4DEC_hist_update_value */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hist_update_value(void) {
    ALOGD("AC4DEC_hist_update_value() called");
    return 0;
}

/* Demangled: AC4DEC_evo_cb_get_wr_ptr */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_cb_get_wr_ptr(void) {
    ALOGD("AC4DEC_evo_cb_get_wr_ptr() called");
    return 0;
}

/* Demangled: DLB_CLmpy_recipCLLIU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpy_recipCLLIU_strict(void) {
    ALOGD("DLB_CLmpy_recipCLLIU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_2048_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_2048_s(void) {
    ALOGD("DLB_r4_inv_fft_2048_s() called");
    return 0;
}

/* Demangled: DLB_CLmfb_p10km_analysisL_close */
extern "C" __attribute__((visibility("default"))) int DLB_CLmfb_p10km_analysisL_close(void) {
    ALOGD("DLB_CLmfb_p10km_analysisL_close() called");
    return 0;
}

/* Exported Object: AC4DEC_AC4TOC_NO_CHANNEL_MAP */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_NO_CHANNEL_MAP = NULL;

/* Demangled: AC4DEC_ac4dap_fhcqmf_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_fhcqmf_process(void) {
    ALOGD("AC4DEC_ac4dap_fhcqmf_process() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD1536_alpha3_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD1536_alpha3_0 = NULL;

/* Demangled: DLB_vec_LsetLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LsetLU_strict(void) {
    ALOGD("DLB_vec_LsetLU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_90 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_90(void) {
    ALOGD("dlb_fft_fwd_usc_90() called");
    return 0;
}

/* Exported Object: AC4DEC_ims_sv_deq_band_num */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ims_sv_deq_band_num = NULL;

/* Demangled: dlb_fft_inv_usc_2048 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_2048(void) {
    ALOGD("dlb_fft_inv_usc_2048() called");
    return 0;
}

/* Exported Object: AC4DEC_P_PHASE_SHIFT_2TO6CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_P_PHASE_SHIFT_2TO6CH = NULL;

/* Demangled: dlb_valid_pair_ptr */
extern "C" __attribute__((visibility("default"))) int dlb_valid_pair_ptr(void) {
    ALOGD("dlb_valid_pair_ptr() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ims_para_fine_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ims_para_fine_f0 = NULL;

/* Demangled: AC4DEC_omg_trim_auto_gain_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_omg_trim_auto_gain_get(void) {
    ALOGD("AC4DEC_omg_trim_auto_gain_get() called");
    return 0;
}

/* Demangled: DLB_r4_fft_256 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_256(void) {
    ALOGD("DLB_r4_fft_256() called");
    return 0;
}

/* Demangled: AC4DEC_memlib_alloc */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_alloc(void) {
    ALOGD("AC4DEC_memlib_alloc() called");
    return 0;
}

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR44KHZ1_BS256S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR44KHZ1_BS256S = NULL;

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR48KHZ_BS256S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR48KHZ_BS256S = NULL;

/* Exported Object: AC4DEC_PA_DIFFUSE_NO_DECORR_2TO5CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_DIFFUSE_NO_DECORR_2TO5CH = NULL;

/* Demangled: AC4DEC_decoder_get_timestamp */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_get_timestamp(void) {
    ALOGD("AC4DEC_decoder_get_timestamp() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L15_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L15_1 = NULL;

/* Exported Object: AC4DEC_WindowKBD120_alpha4_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD120_alpha4_0 = NULL;

/* Exported Object: AC4DEC_A_ROOM_CONFIG_SPKS_SIDE_COM */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_ROOM_CONFIG_SPKS_SIDE_COM = NULL;

/* Demangled: DLB_mfb_p10km_analysisL_reset_channel */
extern "C" __attribute__((visibility("default"))) int DLB_mfb_p10km_analysisL_reset_channel(void) {
    ALOGD("DLB_mfb_p10km_analysisL_reset_channel() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_hcqmf_apply_scale */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_hcqmf_apply_scale(void) {
    ALOGD("AC4DEC_ngcs_hcqmf_apply_scale() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L15_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L15_2 = NULL;

/* Exported Object: AC4DEC_tree_huff_code_ims_para_fine_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ims_para_fine_dt = NULL;

/* Demangled: DLB_r4_cplx_inv_pair */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_inv_pair(void) {
    ALOGD("DLB_r4_cplx_inv_pair() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_get_latency */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_get_latency(void) {
    ALOGD("dlb_ac4dec_v2_dec_get_latency() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_get_limiter_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_get_limiter_gain(void) {
    ALOGD("AC4DEC_dvlim_get_limiter_gain() called");
    return 0;
}

/* Demangled: dlb_CLmpy_shlCLSIU_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpy_shlCLSIU_inplace_flex(void) {
    ALOGD("dlb_CLmpy_shlCLSIU_inplace_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L480 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L480 = NULL;

/* Demangled: dlb_fft_fwd_usc_96 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_96(void) {
    ALOGD("dlb_fft_fwd_usc_96() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_alloc_static */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_alloc_static(void) {
    ALOGD("AC4DEC_decoder_alloc_static() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_get_dialog_enhancement_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_get_dialog_enhancement_gain(void) {
    ALOGD("AC4DEC_decoder_get_dialog_enhancement_gain() called");
    return 0;
}

/* Exported Object: AC4DEC_CHANNEL_MAP_LO */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_LO = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L240 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L240 = NULL;

/* Demangled: AC4DEC_oamt_generate_oamd_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamt_generate_oamd_data(void) {
    ALOGD("AC4DEC_oamt_generate_oamd_data() called");
    return 0;
}

/* Demangled: AC4DEC_metadata_delay_iterator_get_buffer */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_iterator_get_buffer(void) {
    ALOGD("AC4DEC_metadata_delay_iterator_get_buffer() called");
    return 0;
}

/* Demangled: AC4DEC_fboar_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_fboar_process(void) {
    ALOGD("AC4DEC_fboar_process() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_gamma_coarse_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_gamma_coarse_df = NULL;

/* Demangled: dlb_CLCLmix6CL12SU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLCLmix6CL12SU_flex(void) {
    ALOGD("dlb_CLCLmix6CL12SU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L2 = NULL;

/* Demangled: AC4DEC_autocorrelation_2nd_order */
extern "C" __attribute__((visibility("default"))) int AC4DEC_autocorrelation_2nd_order(void) {
    ALOGD("AC4DEC_autocorrelation_2nd_order() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD120_alpha4_5 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD120_alpha4_5 = NULL;

/* Demangled: AC4DEC_oamd_trans_program_output_compare */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_trans_program_output_compare(void) {
    ALOGD("AC4DEC_oamd_trans_program_output_compare() called");
    return 0;
}

/* Demangled: AC4DEC_hmac_sha256_calculate_digest */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hmac_sha256_calculate_digest(void) {
    ALOGD("AC4DEC_hmac_sha256_calculate_digest() called");
    return 0;
}

/* Demangled: dolby::Ac4DecClient::~Ac4DecClient() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12Ac4DecClientD2Ev(void) {
    ALOGD("_ZN5dolby12Ac4DecClientD2Ev() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_query_mem(void) {
    ALOGD("DLB_qmf_synthesisL_query_mem() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L4 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L4 = NULL;

/* Demangled: AC4DEC_lvl_calc_single_ts_loudness */
extern "C" __attribute__((visibility("default"))) int AC4DEC_lvl_calc_single_ts_loudness(void) {
    ALOGD("AC4DEC_lvl_calc_single_ts_loudness() called");
    return 0;
}

/* Demangled: AC4DEC_de_il_generate_dummy_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_il_generate_dummy_data(void) {
    ALOGD("AC4DEC_de_il_generate_dummy_data() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L32_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L32_1 = NULL;

/* Demangled: DLB_r4_inv_fft_120_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_120_s(void) {
    ALOGD("DLB_r4_inv_fft_120_s() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_hrtf_filter */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_hrtf_filter(void) {
    ALOGD("AC4DEC_hp_height_hrtf_filter() called");
    return 0;
}

/* Demangled: AC4DEC_de_il_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_il_read(void) {
    ALOGD("AC4DEC_de_il_read() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L32_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L32_2 = NULL;

/* Demangled: dlb_fft_inv_usc_768 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_768(void) {
    ALOGD("dlb_fft_inv_usc_768() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_576 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_576(void) {
    ALOGD("dlb_fft_fwd_usc_576() called");
    return 0;
}

/* Demangled: DLB_Lqmf_analysisL */
extern "C" __attribute__((visibility("default"))) int DLB_Lqmf_analysisL(void) {
    ALOGD("DLB_Lqmf_analysisL() called");
    return 0;
}

/* Exported Object: dlb_cos_32_full_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_32_full_twiddle = NULL;

/* Demangled: dlb_vec_UnormSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_UnormSU_flex(void) {
    ALOGD("dlb_vec_UnormSU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L8 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L8 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L192 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L192 = NULL;

/* Demangled: dlb_ac4dec_v2_dec_set_dap_param */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_set_dap_param(void) {
    ALOGD("dlb_ac4dec_v2_dec_set_dap_param() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L45_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L45_1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L720 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L720 = NULL;

/* Demangled: dlb_fft_fwd_scl_144 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_144(void) {
    ALOGD("dlb_fft_fwd_scl_144() called");
    return 0;
}

/* Exported Object: dlb_odd_fft_cplx_fwd_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_odd_fft_cplx_fwd_scl = NULL;

/* Demangled: AC4DEC_cch_get_num_subframes_repeated */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_get_num_subframes_repeated(void) {
    ALOGD("AC4DEC_cch_get_num_subframes_repeated() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L45_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L45_2 = NULL;

/* Demangled: AC4DEC_imsdec_calc_loudness_gains */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_calc_loudness_gains(void) {
    ALOGD("AC4DEC_imsdec_calc_loudness_gains() called");
    return 0;
}

/* Demangled: DLB_r4_cplx_fwd_unscaled */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_fwd_unscaled(void) {
    ALOGD("DLB_r4_cplx_fwd_unscaled() called");
    return 0;
}

/* Demangled: DLB_blk_LmixLLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixLLL_strict(void) {
    ALOGD("DLB_blk_LmixLLL_strict() called");
    return 0;
}

/* Demangled: AC4DEC_phase90_filter_query_delay */
extern "C" __attribute__((visibility("default"))) int AC4DEC_phase90_filter_query_delay(void) {
    ALOGD("AC4DEC_phase90_filter_query_delay() called");
    return 0;
}

/* Demangled: AC4DEC_qextract_reset_state */
extern "C" __attribute__((visibility("default"))) int AC4DEC_qextract_reset_state(void) {
    ALOGD("AC4DEC_qextract_reset_state() called");
    return 0;
}

/* Demangled: AC4DEC_cch_get_seq_counter_decrement */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_get_seq_counter_decrement(void) {
    ALOGD("AC4DEC_cch_get_seq_counter_decrement() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_de_abs_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_de_abs_0 = NULL;

/* Exported Object: AC4DEC_tree_huff_code_de_abs_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_de_abs_1 = NULL;

/* Demangled: dolby::Ac4DecClient::updateAc4DecConfig(AC4EXEC*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12Ac4DecClient18updateAc4DecConfigEP7AC4EXEC(void) {
    ALOGD("_ZN5dolby12Ac4DecClient18updateAc4DecConfigEP7AC4EXEC() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_set_timestamp */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_set_timestamp(void) {
    ALOGD("AC4DEC_decoder_set_timestamp() called");
    return 0;
}

/* Demangled: AC4DEC_ajccdec_upmix_mtrx_mult_module4_510 */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_upmix_mtrx_mult_module4_510(void) {
    ALOGD("AC4DEC_ajccdec_upmix_mtrx_mult_module4_510() called");
    return 0;
}

/* Demangled: AC4DEC_ajocdec_mode_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_mode_get(void) {
    ALOGD("AC4DEC_ajocdec_mode_get() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_vec_ana = NULL;

/* Demangled: AC4DEC_oamd_common_data_update */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_common_data_update(void) {
    ALOGD("AC4DEC_oamd_common_data_update() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_gamma_coarse_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_gamma_coarse_f0 = NULL;

/* Demangled: dlb_CLsubCLCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLsubCLCLU_flex(void) {
    ALOGD("dlb_CLsubCLCLU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_48_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_48_s(void) {
    ALOGD("DLB_r4_inv_fft_48_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_2048 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_2048(void) {
    ALOGD("dlb_fft_fwd_scl_2048() called");
    return 0;
}

/* Demangled: DLB_Lqmf_analysisS */
extern "C" __attribute__((visibility("default"))) int DLB_Lqmf_analysisS(void) {
    ALOGD("DLB_Lqmf_analysisS() called");
    return 0;
}

/* Demangled: AC4DEC_ajccdec_upmix_dry_wet_update */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_upmix_dry_wet_update(void) {
    ALOGD("AC4DEC_ajccdec_upmix_dry_wet_update() called");
    return 0;
}

/* Demangled: AC4DEC_sf_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sf_close(void) {
    ALOGD("AC4DEC_sf_close() called");
    return 0;
}

/* Demangled: AC4DEC_ssfdec_inverse_flattening */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssfdec_inverse_flattening(void) {
    ALOGD("AC4DEC_ssfdec_inverse_flattening() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_gamma_coarse_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_gamma_coarse_dt = NULL;

/* Demangled: AC4DEC_evo_generate_hash_md_set */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_generate_hash_md_set(void) {
    ALOGD("AC4DEC_evo_generate_hash_md_set() called");
    return 0;
}

/* Demangled: dlb_CLmixCLCLSSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmixCLCLSSU_flex(void) {
    ALOGD("dlb_CLmixCLCLSSU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_512 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_512(void) {
    ALOGD("dlb_fft_inv_scl_512() called");
    return 0;
}

/* Demangled: DLB_CLhybrid_synthesisCL */
extern "C" __attribute__((visibility("default"))) int DLB_CLhybrid_synthesisCL(void) {
    ALOGD("DLB_CLhybrid_synthesisCL() called");
    return 0;
}

/* Demangled: AC4DEC_delay_line_lfract_copy */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_line_lfract_copy(void) {
    ALOGD("AC4DEC_delay_line_lfract_copy() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_get_smoothed_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_get_smoothed_gain(void) {
    ALOGD("AC4DEC_dvlim_get_smoothed_gain() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_320 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_320(void) {
    ALOGD("dlb_fft_fwd_scl_320() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_get_delay(void) {
    ALOGD("DLB_hybrid_analysisCL_get_delay() called");
    return 0;
}

/* Demangled: AC4DEC_isf_decoder_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_isf_decoder_query_memory(void) {
    ALOGD("AC4DEC_isf_decoder_query_memory() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv3aLU_inplace */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv3aLU_inplace(void) {
    ALOGD("DLB_blk_Liir2ssv3aLU_inplace() called");
    return 0;
}

/* Demangled: AC4DEC_surround_compressor_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_surround_compressor_init(void) {
    ALOGD("AC4DEC_surround_compressor_init() called");
    return 0;
}

/* Demangled: AC4DEC_ramp_gain_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ramp_gain_init(void) {
    ALOGD("AC4DEC_ramp_gain_init() called");
    return 0;
}

/* Exported Object: DLB_MFB_TWID64E */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_TWID64E = NULL;

/* Demangled: AC4DEC_ast_bw_thresholds_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ast_bw_thresholds_get(void) {
    ALOGD("AC4DEC_ast_bw_thresholds_get() called");
    return 0;
}

/* Exported Object: AC4DEC_p_db_factors */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_p_db_factors = NULL;

/* Exported Object: AC4DEC_dither_norm_rnd */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_dither_norm_rnd = NULL;

/* Demangled: AC4DEC_lvl_calc_release_accel */
extern "C" __attribute__((visibility("default"))) int AC4DEC_lvl_calc_release_accel(void) {
    ALOGD("AC4DEC_lvl_calc_release_accel() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L72_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L72_cos = NULL;

/* Demangled: DLB_Lunload_CLqmf_analysisL_filter_state */
extern "C" __attribute__((visibility("default"))) int DLB_Lunload_CLqmf_analysisL_filter_state(void) {
    ALOGD("DLB_Lunload_CLqmf_analysisL_filter_state() called");
    return 0;
}

/* Demangled: AC4DEC_de_data_clear */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_data_clear(void) {
    ALOGD("AC4DEC_de_data_clear() called");
    return 0;
}

/* Demangled: AC4DEC_preso_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_preso_init(void) {
    ALOGD("AC4DEC_preso_init() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_get_version */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_get_version(void) {
    ALOGD("AC4DEC_dvlim_get_version() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L2_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L2_1 = NULL;

/* Demangled: dlb_blk_Lattack_decay_iir1L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lattack_decay_iir1L_flex(void) {
    ALOGD("dlb_blk_Lattack_decay_iir1L_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L2_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L2_2 = NULL;

/* Demangled: dlb_fft_inv_scl_160 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_160(void) {
    ALOGD("dlb_fft_inv_scl_160() called");
    return 0;
}

/* Demangled: dolby::DlbGenClass2::unmangle(char const*, char*, unsigned int, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DlbGenClass28unmangleEPKcPcjS2_i(void) {
    ALOGD("_ZN5dolby12DlbGenClass28unmangleEPKcPcjS2_i() called");
    return 0;
}

/* Demangled: AC4DEC_arle_smooth_gains_across_time */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_smooth_gains_across_time(void) {
    ALOGD("AC4DEC_arle_smooth_gains_across_time() called");
    return 0;
}

/* Demangled: AC4DEC_hist_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hist_reset(void) {
    ALOGD("AC4DEC_hist_reset() called");
    return 0;
}

/* Demangled: AC4DEC_ph90_qmf_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ph90_qmf_process(void) {
    ALOGD("AC4DEC_ph90_qmf_process() called");
    return 0;
}

/* Demangled: AC4DEC_ac4parser_read_variable_bits */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4parser_read_variable_bits(void) {
    ALOGD("AC4DEC_ac4parser_read_variable_bits() called");
    return 0;
}

/* Demangled: DLB_blk_LLshuffleLL_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LLshuffleLL_inplace_strict(void) {
    ALOGD("DLB_blk_LLshuffleLL_inplace_strict() called");
    return 0;
}

/* Demangled: AC4DEC_dap_mathlib_LrecipL */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_LrecipL(void) {
    ALOGD("AC4DEC_dap_mathlib_LrecipL() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_get_internal_frame_rate_index */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_get_internal_frame_rate_index(void) {
    ALOGD("AC4DEC_ac4dec_get_internal_frame_rate_index() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L128_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L128_1 = NULL;

/* Demangled: AC4DEC_oamd_reader_parse_timing_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_reader_parse_timing_data(void) {
    ALOGD("AC4DEC_oamd_reader_parse_timing_data() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_gamma_fine_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_gamma_fine_df = NULL;

/* Demangled: AC4DEC_evo_cb_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_cb_init(void) {
    ALOGD("AC4DEC_evo_cb_init() called");
    return 0;
}

/* Demangled: dlb_blk_Liir1L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir1L_flex(void) {
    ALOGD("dlb_blk_Liir1L_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_180_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_180_s(void) {
    ALOGD("DLB_r4_inv_fft_180_s() called");
    return 0;
}

/* Demangled: DLB_CLmfb_p10km_analysisL_legacy_twiddle */
extern "C" __attribute__((visibility("default"))) int DLB_CLmfb_p10km_analysisL_legacy_twiddle(void) {
    ALOGD("DLB_CLmfb_p10km_analysisL_legacy_twiddle() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_32 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_32 = NULL;

/* Exported Object: AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR44KHZ1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR44KHZ1 = NULL;

/* Demangled: AC4DEC_decoder_get_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_get_config(void) {
    ALOGD("AC4DEC_decoder_get_config() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L128_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L128_2 = NULL;

/* Exported Object: dlb_cos_32_full_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_32_full_scl = NULL;

/* Exported Object: AC4DEC_AP_LDN_SL_INV_DIFFS */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AP_LDN_SL_INV_DIFFS = NULL;

/* Demangled: AC4DEC_rand_gen_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rand_gen_open(void) {
    ALOGD("AC4DEC_rand_gen_open() called");
    return 0;
}

/* Demangled: AC4DEC_reset_prediction_buf */
extern "C" __attribute__((visibility("default"))) int AC4DEC_reset_prediction_buf(void) {
    ALOGD("AC4DEC_reset_prediction_buf() called");
    return 0;
}

/* Demangled: DLB_CLshrCLUU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLshrCLUU_strict(void) {
    ALOGD("DLB_CLshrCLUU_strict() called");
    return 0;
}

/* Exported Object: DLB_MFB_TWID64O */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_TWID64O = NULL;

/* Demangled: AC4DEC_ac4_brcalc_state_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4_brcalc_state_reset(void) {
    ALOGD("AC4DEC_ac4_brcalc_state_reset() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_query_scratch(void) {
    ALOGD("AC4DEC_hp_height_query_scratch() called");
    return 0;
}

/* Demangled: AC4DEC_ade_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_reset(void) {
    ALOGD("AC4DEC_ade_reset() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD480_alpha3_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD480_alpha3_0 = NULL;

/* Exported Object: AC4DEC_WindowKBD72_alpha6_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD72_alpha6_0 = NULL;

/* Exported Object: AC4DEC_AA_DIFFUSE_DECORR_2TO5CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_DIFFUSE_DECORR_2TO5CH = NULL;

/* Exported Object: AC4DEC_ab_oamdi_trim_config_supported */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ab_oamdi_trim_config_supported = NULL;

/* Demangled: AC4DEC_parse_ext_prec_pos */
extern "C" __attribute__((visibility("default"))) int AC4DEC_parse_ext_prec_pos(void) {
    ALOGD("AC4DEC_parse_ext_prec_pos() called");
    return 0;
}

/* Demangled: AC4DEC_ssfdec_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssfdec_close(void) {
    ALOGD("AC4DEC_ssfdec_close() called");
    return 0;
}

/* Demangled: AC4DEC_evo_write_payload */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_write_payload(void) {
    ALOGD("AC4DEC_evo_write_payload() called");
    return 0;
}

/* Demangled: dlb_vec_Lmask_rev_coefLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_Lmask_rev_coefLSU_flex(void) {
    ALOGD("dlb_vec_Lmask_rev_coefLSU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_720_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_720_s(void) {
    ALOGD("DLB_r4_inv_fft_720_s() called");
    return 0;
}

/* Exported Object: dlb_cos_48_ast_mini_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_48_ast_mini_twiddle = NULL;

/* Demangled: AC4DEC_oamd_trans_last_update_sample */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_trans_last_update_sample(void) {
    ALOGD("AC4DEC_oamd_trans_last_update_sample() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_reset_smoothed_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_reset_smoothed_gain(void) {
    ALOGD("AC4DEC_dvlim_reset_smoothed_gain() called");
    return 0;
}

/* Demangled: dlb_BLmaxBLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmaxBLL_flex(void) {
    ALOGD("dlb_BLmaxBLL_flex() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_bed_to_internal_channel_map */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_bed_to_internal_channel_map(void) {
    ALOGD("AC4DEC_ac4toc_bed_to_internal_channel_map() called");
    return 0;
}

/* Demangled: AC4DEC_evo_cb_get_rd_ptr */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_cb_get_rd_ptr(void) {
    ALOGD("AC4DEC_evo_cb_get_rd_ptr() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L180 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L180 = NULL;

/* Demangled: DLB_qmf_analysisL_get_max_filter_state_length */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_get_max_filter_state_length(void) {
    ALOGD("DLB_qmf_analysisL_get_max_filter_state_length() called");
    return 0;
}

/* Demangled: AC4DEC_gain_clvec_process_inplace */
extern "C" __attribute__((visibility("default"))) int AC4DEC_gain_clvec_process_inplace(void) {
    ALOGD("AC4DEC_gain_clvec_process_inplace() called");
    return 0;
}

/* Demangled: AC4DEC_ast_resample */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ast_resample(void) {
    ALOGD("AC4DEC_ast_resample() called");
    return 0;
}

/* Demangled: DLB_fft_CLfwd_scaledL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLfwd_scaledL(void) {
    ALOGD("DLB_fft_CLfwd_scaledL() called");
    return 0;
}

/* Demangled: ac4dec_wrapper_setparam */
extern "C" __attribute__((visibility("default"))) int ac4dec_wrapper_setparam(void) {
    ALOGD("ac4dec_wrapper_setparam() called");
    return 0;
}

/* Demangled: dlb_blk_Lattack_decay_peak_iir1L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lattack_decay_peak_iir1L_flex(void) {
    ALOGD("dlb_blk_Lattack_decay_peak_iir1L_flex() called");
    return 0;
}

/* Demangled: DLB_blk_delay_setup_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_delay_setup_strict(void) {
    ALOGD("DLB_blk_delay_setup_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L120 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L120 = NULL;

/* Exported Object: dlb_cos_8_full_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_8_full_scl = NULL;

/* Demangled: dlb_ac4dec_v2_dec_get_timestamp */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_get_timestamp(void) {
    ALOGD("dlb_ac4dec_v2_dec_get_timestamp() called");
    return 0;
}

/* Demangled: android::AC4Decoder::internalSetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4Decoder20internalSetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android10AC4Decoder20internalSetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2df1L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2df1L_strict(void) {
    ALOGD("DLB_blk_Liir2df1L_strict() called");
    return 0;
}

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_524_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_524_0 = NULL;

/* Demangled: AC4DEC_rsrc_get_resampling_factor */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rsrc_get_resampling_factor(void) {
    ALOGD("AC4DEC_rsrc_get_resampling_factor() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_16_vec_syn = NULL;

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_524_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_524_1 = NULL;

/* Demangled: AC4DEC_aspx_process_1ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_process_1ch(void) {
    ALOGD("AC4DEC_aspx_process_1ch() called");
    return 0;
}

/* Demangled: AC4DEC_calc_envelope_allocation */
extern "C" __attribute__((visibility("default"))) int AC4DEC_calc_envelope_allocation(void) {
    ALOGD("AC4DEC_calc_envelope_allocation() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_gamma_fine_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_gamma_fine_f0 = NULL;

/* Exported Object: AC4DEC_WindowKBD96_alpha5_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD96_alpha5_0 = NULL;

/* Demangled: dlb_vec_LmaskLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LmaskLSU_flex(void) {
    ALOGD("dlb_vec_LmaskLSU_flex() called");
    return 0;
}

/* Demangled: DLB_CLmpyCLCSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpyCLCSU_strict(void) {
    ALOGD("DLB_CLmpyCLCSU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L512_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L512_1 = NULL;

/* Demangled: AC4DEC_ssfdec_predictor_dec */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssfdec_predictor_dec(void) {
    ALOGD("AC4DEC_ssfdec_predictor_dec() called");
    return 0;
}

/* Demangled: AC4DEC_rsrc_get_scale_factor */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rsrc_get_scale_factor(void) {
    ALOGD("AC4DEC_rsrc_get_scale_factor() called");
    return 0;
}

/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_peak_iir1L_set_coef(void) {
    ALOGD("DLB_blk_Lattack_decay_peak_iir1L_set_coef() called");
    return 0;
}

/* Exported Object: AC4DEC_A_AC4DAP_CHANNEL_FORMAT_DELAY */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_AC4DAP_CHANNEL_FORMAT_DELAY = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L256 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L256 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L512_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L512_2 = NULL;

/* Exported Object: AC4DEC_tree_huff_code_acpl_gamma_fine_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_gamma_fine_dt = NULL;

/* Demangled: DLB_vec_LdotLLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LdotLLU_strict(void) {
    ALOGD("DLB_vec_LdotLLU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_30_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_30_s(void) {
    ALOGD("DLB_r4_fft_30_s() called");
    return 0;
}

/* Demangled: AC4DEC_renderer_pow */
extern "C" __attribute__((visibility("default"))) int AC4DEC_renderer_pow(void) {
    ALOGD("AC4DEC_renderer_pow() called");
    return 0;
}

/* Demangled: AC4DEC_asa_reset_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_asa_reset_process(void) {
    ALOGD("AC4DEC_asa_reset_process() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_NGCS_SEG_CHANNELS_2TO6CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_NGCS_SEG_CHANNELS_2TO6CH = NULL;

/* Demangled: AC4DEC_pan_dialog_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_pan_dialog_init(void) {
    ALOGD("AC4DEC_pan_dialog_init() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_get_enable */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_get_enable(void) {
    ALOGD("AC4DEC_dvlim_get_enable() called");
    return 0;
}

/* Demangled: AC4DEC_evo_parse_payload */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_parse_payload(void) {
    ALOGD("AC4DEC_evo_parse_payload() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L128 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L128 = NULL;

/* Exported Object: AC4DEC_A_PHASE_SHIFT_2TO5CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_PHASE_SHIFT_2TO5CH = NULL;

/* Demangled: AC4DEC_memlib_get_version */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_get_version(void) {
    ALOGD("AC4DEC_memlib_get_version() called");
    return 0;
}

/* Demangled: AC4DEC_evo_mem_size */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_mem_size(void) {
    ALOGD("AC4DEC_evo_mem_size() called");
    return 0;
}

/* Demangled: DLB_r4_fft_2_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_2_s(void) {
    ALOGD("DLB_r4_fft_2_s() called");
    return 0;
}

/* Demangled: getRequiredBufferSize_Phase90Hilbert */
extern "C" __attribute__((visibility("default"))) int getRequiredBufferSize_Phase90Hilbert(void) {
    ALOGD("getRequiredBufferSize_Phase90Hilbert() called");
    return 0;
}

/* Exported Object: dlb_cos_32_ast_mini_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_32_ast_mini_twiddle = NULL;

/* Demangled: android::AC4Decoder::~AC4Decoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4DecoderD1Ev(void) {
    ALOGD("_ZN7android10AC4DecoderD1Ev() called");
    return 0;
}

/* Demangled: AC4DEC_memlib_pool_block_end */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_pool_block_end(void) {
    ALOGD("AC4DEC_memlib_pool_block_end() called");
    return 0;
}

/* Exported Object: AC4DEC_CHANNEL_MAP_322_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_322_0 = NULL;

/* Demangled: AC4DEC_rand_gen_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rand_gen_close(void) {
    ALOGD("AC4DEC_rand_gen_close() called");
    return 0;
}

/* Demangled: DLB_blk_Lattack_decay_iir1L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_iir1L_strict(void) {
    ALOGD("DLB_blk_Lattack_decay_iir1L_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L360 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L360 = NULL;

/* Exported Object: AC4DEC_CHANNEL_MAP_322_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_322_1 = NULL;

/* Demangled: DLB_blk_Liir2ssefL_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssefL_set_coef(void) {
    ALOGD("DLB_blk_Liir2ssefL_set_coef() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_hrtf_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_hrtf_process(void) {
    ALOGD("AC4DEC_hp_height_hrtf_process() called");
    return 0;
}

/* Exported Object: AC4DEC_qval_max */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_qval_max = NULL;

/* Exported Object: AC4DEC_tree_huff_code_drc */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_drc = NULL;

/* Demangled: AC4DEC_ssf_extract */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssf_extract(void) {
    ALOGD("AC4DEC_ssf_extract() called");
    return 0;
}

/* Demangled: DLB_blk_Lmpy_shlLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmpy_shlLSU_strict(void) {
    ALOGD("DLB_blk_Lmpy_shlLSU_strict() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_process(void) {
    ALOGD("AC4DEC_ac4dap_process() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_DIFFUSE_DECORR_2TO4CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_DIFFUSE_DECORR_2TO4CH = NULL;

/* Demangled: dlb_ac4dec_v2_presentation_selection_set_mode */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_presentation_selection_set_mode(void) {
    ALOGD("dlb_ac4dec_v2_presentation_selection_set_mode() called");
    return 0;
}

/* Demangled: AC4DEC_shared_mem_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_shared_mem_init(void) {
    ALOGD("AC4DEC_shared_mem_init() called");
    return 0;
}

/* Exported Object: AC4DEC_A_ROOM_CONFIG_SPKS_SIDE_FULL */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_ROOM_CONFIG_SPKS_SIDE_FULL = NULL;

/* Demangled: DLB_hybrid_synthesisCL_open */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_synthesisCL_open(void) {
    ALOGD("DLB_hybrid_synthesisCL_open() called");
    return 0;
}

/* Demangled: AC4DEC_arithmetic_decode_pred_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arithmetic_decode_pred_gain(void) {
    ALOGD("AC4DEC_arithmetic_decode_pred_gain() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv1L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv1L_strict(void) {
    ALOGD("DLB_blk_Liir2ssv1L_strict() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_NGCS_SEG_STEERING_2TO5CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_NGCS_SEG_STEERING_2TO5CH = NULL;

/* Demangled: AC4DEC_ngcs_hcqmf_calc_scale */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_hcqmf_calc_scale(void) {
    ALOGD("AC4DEC_ngcs_hcqmf_calc_scale() called");
    return 0;
}

/* Demangled: AC4DEC_ajocdec_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_open(void) {
    ALOGD("AC4DEC_ajocdec_open() called");
    return 0;
}

/* Demangled: AC4DEC_get_num_channels */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_num_channels(void) {
    ALOGD("AC4DEC_get_num_channels() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L192_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L192_1 = NULL;

/* Demangled: DLB_r4_fft_60_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_60_s(void) {
    ALOGD("DLB_r4_fft_60_s() called");
    return 0;
}

/* Demangled: AC4DEC_arle_compressor_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_compressor_init(void) {
    ALOGD("AC4DEC_arle_compressor_init() called");
    return 0;
}

/* Exported Object: AC4DEC_ajoc_qmf_to_par_band_table */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajoc_qmf_to_par_band_table = NULL;

/* Demangled: AC4DEC_dapil_get_sample_rate_code */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dapil_get_sample_rate_code(void) {
    ALOGD("AC4DEC_dapil_get_sample_rate_code() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L192_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L192_2 = NULL;

/* Demangled: DLB_fft_CLfwd_unscaledL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLfwd_unscaledL(void) {
    ALOGD("DLB_fft_CLfwd_unscaledL() called");
    return 0;
}

/* Demangled: AC4DEC_dap_mathlib_clvecdl_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_clvecdl_init(void) {
    ALOGD("AC4DEC_dap_mathlib_clvecdl_init() called");
    return 0;
}

/* Exported Object: AC4DEC_decorr_coeffs */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_decorr_coeffs = NULL;

/* Exported Object: AC4DEC_WindowKBD64_alpha5_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD64_alpha5_0 = NULL;

/* Demangled: dlb_fft_fwd_usc_768 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_768(void) {
    ALOGD("dlb_fft_fwd_usc_768() called");
    return 0;
}

/* Demangled: AC4DEC_q2le_compute_log_banded_powers */
extern "C" __attribute__((visibility("default"))) int AC4DEC_q2le_compute_log_banded_powers(void) {
    ALOGD("AC4DEC_q2le_compute_log_banded_powers() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_virtualizer_upmix_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_virtualizer_upmix_process(void) {
    ALOGD("AC4DEC_ac4dap_virtualizer_upmix_process() called");
    return 0;
}

/* Demangled: dlb_VLsquaredmagCLIU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_VLsquaredmagCLIU_flex(void) {
    ALOGD("dlb_VLsquaredmagCLIU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L384 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L384 = NULL;

/* Exported Object: AC4DEC_AA_DIFFUSE_NO_DECORR_5TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_DIFFUSE_NO_DECORR_5TO7CH = NULL;

/* Exported Object: AC4DEC_A_NGCS_SEG_RANGE_5TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_NGCS_SEG_RANGE_5TO7CH = NULL;

/* Demangled: AC4DEC_sone_buffer_channel_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sone_buffer_channel_query_memory(void) {
    ALOGD("AC4DEC_sone_buffer_channel_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_stats_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_stats_reset(void) {
    ALOGD("AC4DEC_ngcs_stats_reset() called");
    return 0;
}

/* Demangled: AC4DEC_memlib_pool_alloc_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_pool_alloc_mem(void) {
    ALOGD("AC4DEC_memlib_pool_alloc_mem() called");
    return 0;
}

/* Demangled: AC4DEC_ssfdec_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssfdec_query_mem(void) {
    ALOGD("AC4DEC_ssfdec_query_mem() called");
    return 0;
}

/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_peak_iir1L_strict(void) {
    ALOGD("DLB_blk_Lattack_decay_peak_iir1L_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_180 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_180(void) {
    ALOGD("DLB_r4_inv_fft_180() called");
    return 0;
}

/* Demangled: DLB_fft_CLfwd_scaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLfwd_scaledCL(void) {
    ALOGD("DLB_fft_CLfwd_scaledCL() called");
    return 0;
}

/* Demangled: AC4DEC_oamd_trans_read_oamdi */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_trans_read_oamdi(void) {
    ALOGD("AC4DEC_oamd_trans_read_oamdi() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_process(void) {
    ALOGD("AC4DEC_ngcs_process() called");
    return 0;
}

/* Demangled: AC4DEC_init_hcqmf_3ch_decorr */
extern "C" __attribute__((visibility("default"))) int AC4DEC_init_hcqmf_3ch_decorr(void) {
    ALOGD("AC4DEC_init_hcqmf_3ch_decorr() called");
    return 0;
}

/* Demangled: AC4DEC_evo_mod_get_md_update */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_mod_get_md_update(void) {
    ALOGD("AC4DEC_evo_mod_get_md_update() called");
    return 0;
}

/* Demangled: AC4DEC_dap_mathlib_clvec_copy */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_clvec_copy(void) {
    ALOGD("AC4DEC_dap_mathlib_clvec_copy() called");
    return 0;
}

/* Exported Object: func_b_ptr */
extern "C" __attribute__((visibility("default"))) void* func_b_ptr = NULL;

/* Exported Object: AC4DEC_ps_iso639_2tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ps_iso639_2tab = NULL;

/* Exported Object: AC4DEC_slopes_db_to_lin */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_slopes_db_to_lin = NULL;

/* Demangled: AC4DEC_imsdec_init_de */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_init_de(void) {
    ALOGD("AC4DEC_imsdec_init_de() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_get_max_num_out_channels */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_get_max_num_out_channels(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_get_max_num_out_channels() called");
    return 0;
}

/* Demangled: AC4DEC_predictor_scratch_mem_req */
extern "C" __attribute__((visibility("default"))) int AC4DEC_predictor_scratch_mem_req(void) {
    ALOGD("AC4DEC_predictor_scratch_mem_req() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD60_alpha4_5 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD60_alpha4_5 = NULL;

/* Demangled: AC4DEC_bed_mixer_cbi_gains_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_bed_mixer_cbi_gains_get(void) {
    ALOGD("AC4DEC_bed_mixer_cbi_gains_get() called");
    return 0;
}

/* Demangled: dlb_dct4_postmodulation_shl */
extern "C" __attribute__((visibility("default"))) int dlb_dct4_postmodulation_shl(void) {
    ALOGD("dlb_dct4_postmodulation_shl() called");
    return 0;
}

/* Demangled: AC4DEC_gain_calc_masking_correction */
extern "C" __attribute__((visibility("default"))) int AC4DEC_gain_calc_masking_correction(void) {
    ALOGD("AC4DEC_gain_calc_masking_correction() called");
    return 0;
}

/* Demangled: AC4DEC_decorr_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decorr_reset(void) {
    ALOGD("AC4DEC_decorr_reset() called");
    return 0;
}

/* Demangled: AC4DEC_emdf_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_open(void) {
    ALOGD("AC4DEC_emdf_open() called");
    return 0;
}

/* Exported Object: AC4DEC_A_ROOM_CONFIG_SPKS_HEIGHTS_FRONT */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_ROOM_CONFIG_SPKS_HEIGHTS_FRONT = NULL;

/* Demangled: DLB_r4_fft_90_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_90_s(void) {
    ALOGD("DLB_r4_fft_90_s() called");
    return 0;
}

/* Exported Object: AC4DEC_ASA_EVENT_MAXSL */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ASA_EVENT_MAXSL = NULL;

/* Demangled: AC4DEC_ldn_set_min_ex_c */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ldn_set_min_ex_c(void) {
    ALOGD("AC4DEC_ldn_set_min_ex_c() called");
    return 0;
}

/* Demangled: AC4DEC_acpldec_mix_slot */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_mix_slot(void) {
    ALOGD("AC4DEC_acpldec_mix_slot() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajcc */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajcc = NULL;

/* Exported Object: AC4DEC_ajoc_dry_quant_table */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajoc_dry_quant_table = NULL;

/* Demangled: dlb_fft_fwd_scl_512 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_512(void) {
    ALOGD("dlb_fft_fwd_scl_512() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_bitbuf_read_long */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_read_long(void) {
    ALOGD("AC4DEC_dlb_bitbuf_read_long() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L90_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L90_cos = NULL;

/* Demangled: AC4DEC_evo_ll_empty */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_ll_empty(void) {
    ALOGD("AC4DEC_evo_ll_empty() called");
    return 0;
}

/* Demangled: AC4DEC_sv_dual_end_coefs_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sv_dual_end_coefs_query_memory(void) {
    ALOGD("AC4DEC_sv_dual_end_coefs_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_evo_time_le */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_time_le(void) {
    ALOGD("AC4DEC_evo_time_le() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_get_frame_rate_fractions_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_get_frame_rate_fractions_info(void) {
    ALOGD("AC4DEC_ac4toc_get_frame_rate_fractions_info() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_channel_map_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_channel_map_get(void) {
    ALOGD("AC4DEC_ac4dap_channel_map_get() called");
    return 0;
}

/* Demangled: AC4DEC_rand_gen_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rand_gen_init(void) {
    ALOGD("AC4DEC_rand_gen_init() called");
    return 0;
}

/* Demangled: AC4DEC_speaker_config_spkr_unset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_speaker_config_spkr_unset(void) {
    ALOGD("AC4DEC_speaker_config_spkr_unset() called");
    return 0;
}

/* Demangled: DLB_CLmfb_p10km_analysisL_legacy */
extern "C" __attribute__((visibility("default"))) int DLB_CLmfb_p10km_analysisL_legacy(void) {
    ALOGD("DLB_CLmfb_p10km_analysisL_legacy() called");
    return 0;
}

/* Demangled: AC4DEC_dap_mathlib_LpoweraddLL */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_LpoweraddLL(void) {
    ALOGD("AC4DEC_dap_mathlib_LpoweraddLL() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L192 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L192 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L180_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L180_cos = NULL;

/* Demangled: AC4DEC_oamdi_from_bitstream */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_from_bitstream(void) {
    ALOGD("AC4DEC_oamdi_from_bitstream() called");
    return 0;
}

/* Demangled: dlb_CLrecipCLUU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLrecipCLUU_flex(void) {
    ALOGD("dlb_CLrecipCLUU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L720 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L720 = NULL;

/* Demangled: DLB_r4_inv_fft_360 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_360(void) {
    ALOGD("DLB_r4_inv_fft_360() called");
    return 0;
}

/* Demangled: DLB_CLqmf_analysisL */
extern "C" __attribute__((visibility("default"))) int DLB_CLqmf_analysisL(void) {
    ALOGD("DLB_CLqmf_analysisL() called");
    return 0;
}

/* Demangled: android::AC4Decoder::onPortFlushCompleted(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4Decoder20onPortFlushCompletedEj(void) {
    ALOGD("_ZN7android10AC4Decoder20onPortFlushCompletedEj() called");
    return 0;
}

/* Demangled: AC4DEC_polylog_Plog2P */
extern "C" __attribute__((visibility("default"))) int AC4DEC_polylog_Plog2P(void) {
    ALOGD("AC4DEC_polylog_Plog2P() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L1024 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L1024 = NULL;

/* Demangled: AC4DEC_matrix_mult_and_lpf */
extern "C" __attribute__((visibility("default"))) int AC4DEC_matrix_mult_and_lpf(void) {
    ALOGD("AC4DEC_matrix_mult_and_lpf() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlUnL */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlUnL(void) {
    ALOGD("DLB_blk_Lmix_shlUnL() called");
    return 0;
}

/* Demangled: dlb_blk_delay_clear_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_delay_clear_flex(void) {
    ALOGD("dlb_blk_delay_clear_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_160 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_160(void) {
    ALOGD("dlb_fft_fwd_scl_160() called");
    return 0;
}

/* Demangled: AC4DEC_metadata_delay_input_set_buffer_used */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_input_set_buffer_used(void) {
    ALOGD("AC4DEC_metadata_delay_input_set_buffer_used() called");
    return 0;
}

/* Demangled: AC4DEC_isf_decoder_format_set */
extern "C" __attribute__((visibility("default"))) int AC4DEC_isf_decoder_format_set(void) {
    ALOGD("AC4DEC_isf_decoder_format_set() called");
    return 0;
}

/* Demangled: AC4DEC_ajcc_mdd_generate_dummy_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajcc_mdd_generate_dummy_data(void) {
    ALOGD("AC4DEC_ajcc_mdd_generate_dummy_data() called");
    return 0;
}

/* Demangled: AC4DEC_expd_mdd_generate_dummy_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_expd_mdd_generate_dummy_config(void) {
    ALOGD("AC4DEC_expd_mdd_generate_dummy_config() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisS_copy_states */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_copy_states(void) {
    ALOGD("DLB_qmf_synthesisS_copy_states() called");
    return 0;
}

/* Demangled: AC4DEC_gen_norm_rand_num */
extern "C" __attribute__((visibility("default"))) int AC4DEC_gen_norm_rand_num(void) {
    ALOGD("AC4DEC_gen_norm_rand_num() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_set_hp_head_track_disable */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_set_hp_head_track_disable(void) {
    ALOGD("AC4DEC_oamdi_set_hp_head_track_disable() called");
    return 0;
}

/* Demangled: DLB_r4_cplx_inv_unscaled */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_inv_unscaled(void) {
    ALOGD("DLB_r4_cplx_inv_unscaled() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_reader_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_close(void) {
    ALOGD("AC4DEC_ac4toc_reader_close() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_set_main_associate_mixing_preference */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_set_main_associate_mixing_preference(void) {
    ALOGD("AC4DEC_decoder_set_main_associate_mixing_preference() called");
    return 0;
}

/* Demangled: AC4DEC_pcm_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_pcm_close(void) {
    ALOGD("AC4DEC_pcm_close() called");
    return 0;
}

/* Demangled: AC4DEC_qextract_fdn_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_qextract_fdn_process(void) {
    ALOGD("AC4DEC_qextract_fdn_process() called");
    return 0;
}

/* Demangled: DLB_vec_SshlSIU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_SshlSIU_inplace_strict(void) {
    ALOGD("DLB_vec_SshlSIU_inplace_strict() called");
    return 0;
}

/* Demangled: DLB_CLCLmix4CL8SU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLCLmix4CL8SU_strict(void) {
    ALOGD("DLB_CLCLmix4CL8SU_strict() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_DIFFUSE_NO_DECORR_2TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_DIFFUSE_NO_DECORR_2TO7CH = NULL;

/* Demangled: AC4DEC_pcm_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_pcm_process(void) {
    ALOGD("AC4DEC_pcm_process() called");
    return 0;
}

/* Demangled: DLB_blk_LnrrecipLU_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LnrrecipLU_setup(void) {
    ALOGD("DLB_blk_LnrrecipLU_setup() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_960 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_960(void) {
    ALOGD("dlb_fft_inv_usc_960() called");
    return 0;
}

/* Demangled: AC4DEC_imdct_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imdct_process(void) {
    ALOGD("AC4DEC_imdct_process() called");
    return 0;
}

/* Demangled: DLB_CLqmf_analysisS */
extern "C" __attribute__((visibility("default"))) int DLB_CLqmf_analysisS(void) {
    ALOGD("DLB_CLqmf_analysisS() called");
    return 0;
}

/* Demangled: DLB_vec_LmpyLSU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LmpyLSU_inplace_strict(void) {
    ALOGD("DLB_vec_LmpyLSU_inplace_strict() called");
    return 0;
}

/* Demangled: AC4DEC_drc_profile_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_drc_profile_get(void) {
    ALOGD("AC4DEC_drc_profile_get() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_bitbuf_fast_read_long */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_fast_read_long(void) {
    ALOGD("AC4DEC_dlb_bitbuf_fast_read_long() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_2048 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_2048(void) {
    ALOGD("dlb_fft_inv_scl_2048() called");
    return 0;
}

/* Exported Object: AC4DEC_ims_sv_spk_mtx_coeff_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ims_sv_spk_mtx_coeff_tab = NULL;

/* Demangled: AC4DEC_ngcs_mode_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_mode_get(void) {
    ALOGD("AC4DEC_ngcs_mode_get() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_mode_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_mode_init(void) {
    ALOGD("AC4DEC_ngcs_mode_init() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_setup */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_setup(void) {
    ALOGD("AC4DEC_ngcs_setup() called");
    return 0;
}

/* Demangled: AC4DEC_dap_mathlib_Llogsmooth3LL */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_Llogsmooth3LL(void) {
    ALOGD("AC4DEC_dap_mathlib_Llogsmooth3LL() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_phase_shifter_run */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_phase_shifter_run(void) {
    ALOGD("AC4DEC_ngcs_phase_shifter_run() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L256_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L256_1 = NULL;

/* Demangled: AC4DEC_evo_time_lt */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_time_lt(void) {
    ALOGD("AC4DEC_evo_time_lt() called");
    return 0;
}

/* Exported Object: dlb_cos_16_full */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_16_full = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L256_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L256_2 = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P4_32_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4_32_vec_ana = NULL;

/* Demangled: DLB_time_init */
extern "C" __attribute__((visibility("default"))) int DLB_time_init(void) {
    ALOGD("DLB_time_init() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD1152_alpha3_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD1152_alpha3_0 = NULL;

/* Demangled: DLB_r4_inv_fft_24_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_24_s(void) {
    ALOGD("DLB_r4_inv_fft_24_s() called");
    return 0;
}

/* Demangled: DLB_fft_CLfwd_unscaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLfwd_unscaledCL(void) {
    ALOGD("DLB_fft_CLfwd_unscaledCL() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_16 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_16 = NULL;

/* Demangled: AC4DEC_obj_render_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_obj_render_query_memory(void) {
    ALOGD("AC4DEC_obj_render_query_memory() called");
    return 0;
}

/* Exported Object: AC4DEC_A_ROOM_CONFIG_SPKS_FULL */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_ROOM_CONFIG_SPKS_FULL = NULL;

/* Exported Object: AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_256_X_ON_10 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_256_X_ON_10 = NULL;

/* Demangled: DLB_qmf_synthesisL_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_get_delay(void) {
    ALOGD("DLB_qmf_synthesisL_get_delay() called");
    return 0;
}

/* Demangled: dolby::Ac4DynamicConfig::~Ac4DynamicConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16Ac4DynamicConfigD1Ev(void) {
    ALOGD("_ZN5dolby16Ac4DynamicConfigD1Ev() called");
    return 0;
}

/* Demangled: AC4DEC_acpldec_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_close(void) {
    ALOGD("AC4DEC_acpldec_close() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_240 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_240(void) {
    ALOGD("dlb_fft_inv_usc_240() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_vec_ana = NULL;

/* Demangled: AC4DEC_ac4toc_add_oamd_substream_offset_size */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_add_oamd_substream_offset_size(void) {
    ALOGD("AC4DEC_ac4toc_add_oamd_substream_offset_size() called");
    return 0;
}

/* Exported Object: AC4DEC_acpl_num_param_bands_conv */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_acpl_num_param_bands_conv = NULL;

/* Demangled: DLB_blk_Lmix_shlULL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlULL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlULL_strict() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_180 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_180(void) {
    ALOGD("dlb_fft_inv_scl_180() called");
    return 0;
}

/* Demangled: DLB_hybrid_synthesisCL_init */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_synthesisCL_init(void) {
    ALOGD("DLB_hybrid_synthesisCL_init() called");
    return 0;
}

/* Exported Object: AC4DEC_A_AC4DAP_LEVELING_DRC_DMX_META */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_AC4DAP_LEVELING_DRC_DMX_META = NULL;

/* Demangled: AC4DEC_agc_filter_loudness */
extern "C" __attribute__((visibility("default"))) int AC4DEC_agc_filter_loudness(void) {
    ALOGD("AC4DEC_agc_filter_loudness() called");
    return 0;
}

/* Demangled: AC4DEC_ade_il_ims_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_il_ims_process(void) {
    ALOGD("AC4DEC_ade_il_ims_process() called");
    return 0;
}

/* Demangled: AC4DEC_ajocdec_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_init(void) {
    ALOGD("AC4DEC_ajocdec_init() called");
    return 0;
}

/* Demangled: AC4DEC_leveler_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_leveler_process(void) {
    ALOGD("AC4DEC_leveler_process() called");
    return 0;
}

/* Demangled: AC4DEC_get_channel_map */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_channel_map(void) {
    ALOGD("AC4DEC_get_channel_map() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L96_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L96_cos = NULL;

/* Exported Object: AC4DEC_WindowKBD480 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD480 = NULL;

/* Demangled: AC4DEC_ajocdec_ndlgobj_update */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_ndlgobj_update(void) {
    ALOGD("AC4DEC_ajocdec_ndlgobj_update() called");
    return 0;
}

/* Exported Object: AC4DEC_CHANNEL_MAP_2_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_2_0 = NULL;

/* Demangled: DLB_r4_inv_fft_192 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_192(void) {
    ALOGD("DLB_r4_inv_fft_192() called");
    return 0;
}

/* Demangled: DLB_r4_inv_rfft_nn_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_rfft_nn_s(void) {
    ALOGD("DLB_r4_inv_rfft_nn_s() called");
    return 0;
}

/* Demangled: dolby::Ac4DecClient::processac4output(AC4EXEC*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12Ac4DecClient16processac4outputEP7AC4EXECPv(void) {
    ALOGD("_ZN5dolby12Ac4DecClient16processac4outputEP7AC4EXECPv() called");
    return 0;
}

/* Exported Object: AC4DEC_CHANNEL_MAP_2_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_2_1 = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_48_vec_ana = NULL;

/* Demangled: _dlb_ldct3_scaled_iplu */
extern "C" __attribute__((visibility("default"))) int _dlb_ldct3_scaled_iplu(void) {
    ALOGD("_dlb_ldct3_scaled_iplu() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_720 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_720(void) {
    ALOGD("DLB_r4_inv_fft_720() called");
    return 0;
}

/* Demangled: AC4DEC_leveler_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_leveler_query_memory(void) {
    ALOGD("AC4DEC_leveler_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_calc_patch_and_limiter_bands */
extern "C" __attribute__((visibility("default"))) int AC4DEC_calc_patch_and_limiter_bands(void) {
    ALOGD("AC4DEC_calc_patch_and_limiter_bands() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L64_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L64_1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L64_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L64_2 = NULL;

/* Demangled: DLB_vec_LmpyLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LmpyLSU_strict(void) {
    ALOGD("DLB_vec_LmpyLSU_strict() called");
    return 0;
}

/* Demangled: AC4DEC_sv_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sv_query_memory(void) {
    ALOGD("AC4DEC_sv_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_ade_de_crossfade_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_ade_de_crossfade_init(void) {
    ALOGD("AC4DEC_imsdec_ade_de_crossfade_init() called");
    return 0;
}

/* Demangled: DLB_blk_LdelayU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LdelayU_strict(void) {
    ALOGD("DLB_blk_LdelayU_strict() called");
    return 0;
}

/* Demangled: AC4DEC_framer_buffer_advance */
extern "C" __attribute__((visibility("default"))) int AC4DEC_framer_buffer_advance(void) {
    ALOGD("AC4DEC_framer_buffer_advance() called");
    return 0;
}

/* Demangled: AC4DEC_dap_mathlib_LdivLL */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_LdivLL(void) {
    ALOGD("AC4DEC_dap_mathlib_LdivLL() called");
    return 0;
}

/* Demangled: AC4DEC_ajccdec_upmix_dry_wet_update_module4 */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_upmix_dry_wet_update_module4(void) {
    ALOGD("AC4DEC_ajccdec_upmix_dry_wet_update_module4() called");
    return 0;
}

/* Demangled: AC4DEC_evo_pb_get_newest */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_pb_get_newest(void) {
    ALOGD("AC4DEC_evo_pb_get_newest() called");
    return 0;
}

/* Demangled: AC4DEC_dap_mathlib_Lfastatan2LL */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_Lfastatan2LL(void) {
    ALOGD("AC4DEC_dap_mathlib_Lfastatan2LL() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD288_alpha4_5 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD288_alpha4_5 = NULL;

/* Demangled: DLB_r4_fft_288 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_288(void) {
    ALOGD("DLB_r4_fft_288() called");
    return 0;
}

/* Demangled: dlb_dct4_postmodulation_shl0 */
extern "C" __attribute__((visibility("default"))) int dlb_dct4_postmodulation_shl0(void) {
    ALOGD("dlb_dct4_postmodulation_shl0() called");
    return 0;
}

/* Demangled: AC4DEC_emdf_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_close(void) {
    ALOGD("AC4DEC_emdf_close() called");
    return 0;
}

/* Demangled: dlb_dct4_postmodulation_shl1 */
extern "C" __attribute__((visibility("default"))) int dlb_dct4_postmodulation_shl1(void) {
    ALOGD("dlb_dct4_postmodulation_shl1() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_2 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_2(void) {
    ALOGD("dlb_fft_fwd_usc_2() called");
    return 0;
}

/* Demangled: AC4DEC_ade_data_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_data_read(void) {
    ALOGD("AC4DEC_ade_data_read() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L480_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L480_1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L4_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L4_1 = NULL;

/* Demangled: AC4DEC_ac4dec_input_stage_toc_parsing */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_input_stage_toc_parsing(void) {
    ALOGD("AC4DEC_ac4dec_input_stage_toc_parsing() called");
    return 0;
}

/* Demangled: dlb_dct4_postmodulation_shl2 */
extern "C" __attribute__((visibility("default"))) int dlb_dct4_postmodulation_shl2(void) {
    ALOGD("dlb_dct4_postmodulation_shl2() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_set_dialog_enhancement_preference */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_set_dialog_enhancement_preference(void) {
    ALOGD("AC4DEC_decoder_set_dialog_enhancement_preference() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L480_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L480_2 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L4_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L4_2 = NULL;

/* Demangled: AC4DEC_imsdec_panning_coefficients_decode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_panning_coefficients_decode(void) {
    ALOGD("AC4DEC_imsdec_panning_coefficients_decode() called");
    return 0;
}

/* Demangled: AC4DEC_size_config_weight_along_axis */
extern "C" __attribute__((visibility("default"))) int AC4DEC_size_config_weight_along_axis(void) {
    ALOGD("AC4DEC_size_config_weight_along_axis() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_360 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_360(void) {
    ALOGD("dlb_fft_inv_scl_360() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_4 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_4(void) {
    ALOGD("dlb_fft_fwd_usc_4() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_fhcqmf_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_fhcqmf_init(void) {
    ALOGD("AC4DEC_ac4dap_fhcqmf_init() called");
    return 0;
}

/* Exported Object: AC4DEC_ajoc_de_gain_db2lin_table */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajoc_de_gain_db2lin_table = NULL;

/* Exported Object: AC4DEC_DELTA_SOURCE_POS_Z */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DELTA_SOURCE_POS_Z = NULL;

/* Demangled: AC4DEC_dvlim_get_smoothed_gain_alpha */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_get_smoothed_gain_alpha(void) {
    ALOGD("AC4DEC_dvlim_get_smoothed_gain_alpha() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L576 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L576 = NULL;

/* Demangled: AC4DEC_oamdi_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_init(void) {
    ALOGD("AC4DEC_oamdi_init() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_aspx_env_balance_30_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_env_balance_30_df = NULL;

/* Demangled: dlb_fft_fwd_usc_6 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_6(void) {
    ALOGD("dlb_fft_fwd_usc_6() called");
    return 0;
}

/* Demangled: AC4DEC_ajocdec_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_close(void) {
    ALOGD("AC4DEC_ajocdec_close() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L192_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L192_cos = NULL;

/* Demangled: AC4DEC_obj_render_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_obj_render_query_scratch(void) {
    ALOGD("AC4DEC_obj_render_query_scratch() called");
    return 0;
}

/* Demangled: DLB_BLmpyBLS_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmpyBLS_inplace_strict(void) {
    ALOGD("DLB_BLmpyBLS_inplace_strict() called");
    return 0;
}

/* Demangled: AC4DEC_acpldec_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_query_mem(void) {
    ALOGD("AC4DEC_acpldec_query_mem() called");
    return 0;
}

/* Exported Object: AC4DEC_ap_dvlim_coefs_256 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ap_dvlim_coefs_256 = NULL;

/* Demangled: AC4DEC_evo_get_transcoded_md */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_get_transcoded_md(void) {
    ALOGD("AC4DEC_evo_get_transcoded_md() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L144 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L144 = NULL;

/* Demangled: dlb_fft_fwd_usc_8 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_8(void) {
    ALOGD("dlb_fft_fwd_usc_8() called");
    return 0;
}

/* Demangled: AC4DEC_ajocdec_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_query_mem(void) {
    ALOGD("AC4DEC_ajocdec_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_rsrc_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rsrc_process(void) {
    ALOGD("AC4DEC_rsrc_process() called");
    return 0;
}

/* Demangled: AC4DEC_ac_decoder_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac_decoder_init(void) {
    ALOGD("AC4DEC_ac_decoder_init() called");
    return 0;
}

/* Demangled: AC4DEC_hdr_P2powLP */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hdr_P2powLP(void) {
    ALOGD("AC4DEC_hdr_P2powLP() called");
    return 0;
}

/* Demangled: AC4DEC_evo_get_md */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_get_md(void) {
    ALOGD("AC4DEC_evo_get_md() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisS_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_query_mem(void) {
    ALOGD("DLB_qmf_synthesisS_query_mem() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD256_alpha4_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD256_alpha4_0 = NULL;

/* Exported Object: AC4DEC_a_spec_exp_table_comb */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_spec_exp_table_comb = NULL;

/* Demangled: AC4DEC_dlb_bitbuf_fast_peek */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_fast_peek(void) {
    ALOGD("AC4DEC_dlb_bitbuf_fast_peek() called");
    return 0;
}

/* Demangled: dlb_blk_LmixLLLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmixLLLL_flex(void) {
    ALOGD("dlb_blk_LmixLLLL_flex() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_DIFFUSE_DECORR_2TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_DIFFUSE_DECORR_2TO7CH = NULL;

/* Demangled: AC4DEC_ssfdec_set_parameter */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssfdec_set_parameter(void) {
    ALOGD("AC4DEC_ssfdec_set_parameter() called");
    return 0;
}

/* Demangled: AC4DEC_ac_decode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac_decode(void) {
    ALOGD("AC4DEC_ac_decode() called");
    return 0;
}

/* Demangled: AC4DEC_oamd_reader_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_reader_close(void) {
    ALOGD("AC4DEC_oamd_reader_close() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_32_vec_ana = NULL;

/* Demangled: DLB_qmf_analysisL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_query_mem(void) {
    ALOGD("DLB_qmf_analysisL_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_oaril_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oaril_close(void) {
    ALOGD("AC4DEC_oaril_close() called");
    return 0;
}

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_LO */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_LO = NULL;

/* Exported Object: AC4DEC_QEXT_BANDING_SCHEME_FDN_IN */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_QEXT_BANDING_SCHEME_FDN_IN = NULL;

/* Demangled: AC4DEC_evo_ll_get_capacity */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_ll_get_capacity(void) {
    ALOGD("AC4DEC_evo_ll_get_capacity() called");
    return 0;
}

/* Demangled: DLB_r4_fft_15_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_15_s(void) {
    ALOGD("DLB_r4_fft_15_s() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_get_bitrate_indicator */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_get_bitrate_indicator(void) {
    ALOGD("AC4DEC_ac4toc_get_bitrate_indicator() called");
    return 0;
}

/* Demangled: AC4DEC_dap_mathlib_clvec_CLCLmixCLCLSSSSU */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_clvec_CLCLmixCLCLSSSSU(void) {
    ALOGD("AC4DEC_dap_mathlib_clvec_CLCLmixCLCLSSSSU() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD256_alpha4_5 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD256_alpha4_5 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L320 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L320 = NULL;

/* Exported Object: dlb_hyb_p4_13 */
extern "C" __attribute__((visibility("default"))) void* dlb_hyb_p4_13 = NULL;

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_340_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_340_0 = NULL;

/* Demangled: AC4DEC_bed_render_info_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_bed_render_info_read(void) {
    ALOGD("AC4DEC_bed_render_info_read() called");
    return 0;
}

/* Demangled: AC4DEC_ims_il_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ims_il_query_mem(void) {
    ALOGD("AC4DEC_ims_il_query_mem() called");
    return 0;
}

/* Demangled: DLB_r4_fft_640 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_640(void) {
    ALOGD("DLB_r4_fft_640() called");
    return 0;
}

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_340_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_340_1 = NULL;

/* Demangled: AC4DEC_ngcs_centre_spread_run */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_centre_spread_run(void) {
    ALOGD("AC4DEC_ngcs_centre_spread_run() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_aspx_env_balance_30_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_env_balance_30_f0 = NULL;

/* Exported Object: AC4DEC_a_dvlim_win_256 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_dvlim_win_256 = NULL;

/* Demangled: dlb_blk_LLdeshuffleLL_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LLdeshuffleLL_inplace_flex(void) {
    ALOGD("dlb_blk_LLdeshuffleLL_inplace_flex() called");
    return 0;
}

/* Demangled: DLB_CLaddCLCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLaddCLCLU_strict(void) {
    ALOGD("DLB_CLaddCLCLU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L384 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L384 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L1024 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L1024 = NULL;

/* Demangled: DLB_r4_fft_320_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_320_s(void) {
    ALOGD("DLB_r4_fft_320_s() called");
    return 0;
}

/* Demangled: AC4DEC_oarq_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oarq_init(void) {
    ALOGD("AC4DEC_oarq_init() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_bitbuf_get_alignment_bits */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_get_alignment_bits(void) {
    ALOGD("AC4DEC_dlb_bitbuf_get_alignment_bits() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_aspx_env_balance_30_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_env_balance_30_dt = NULL;

/* Demangled: AC4DEC_speaker_config_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_speaker_config_init(void) {
    ALOGD("AC4DEC_speaker_config_init() called");
    return 0;
}

/* Demangled: AC4DEC_volume_and_ieq_update_drc_cut_params */
extern "C" __attribute__((visibility("default"))) int AC4DEC_volume_and_ieq_update_drc_cut_params(void) {
    ALOGD("AC4DEC_volume_and_ieq_update_drc_cut_params() called");
    return 0;
}

/* Exported Object: AC4DEC_DAP_MATHLIB_LOGTYPE_10_LOG_10_ON_260 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DAP_MATHLIB_LOGTYPE_10_LOG_10_ON_260 = NULL;

/* Demangled: DLB_r4_inv_rfft_half_n */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_rfft_half_n(void) {
    ALOGD("DLB_r4_inv_rfft_half_n() called");
    return 0;
}

/* Demangled: DLB_r4_inv_rfft_nn */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_rfft_nn(void) {
    ALOGD("DLB_r4_inv_rfft_nn() called");
    return 0;
}

/* Exported Object: dlb_cos_16_ast_mini_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_16_ast_mini_twiddle = NULL;

/* Demangled: AC4DEC_agc_calc_loudness */
extern "C" __attribute__((visibility("default"))) int AC4DEC_agc_calc_loudness(void) {
    ALOGD("AC4DEC_agc_calc_loudness() called");
    return 0;
}

/* Exported Object: AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_256_X_ON_20 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_256_X_ON_20 = NULL;

/* Exported Object: AC4DEC_tree_asf_bookscl */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_asf_bookscl = NULL;

/* Demangled: AC4DEC_ssfdec_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssfdec_open(void) {
    ALOGD("AC4DEC_ssfdec_open() called");
    return 0;
}

/* Demangled: DLB_r4_fft_1024 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_1024(void) {
    ALOGD("DLB_r4_fft_1024() called");
    return 0;
}

/* Demangled: DLB_r4_fft_32_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_32_s(void) {
    ALOGD("DLB_r4_fft_32_s() called");
    return 0;
}

/* Demangled: AC4DEC_ade_il_data_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_il_data_read(void) {
    ALOGD("AC4DEC_ade_il_data_read() called");
    return 0;
}

/* Exported Object: AC4DEC_decorr_index_full_mode_7x4 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_decorr_index_full_mode_7x4 = NULL;

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L360_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L360_cos = NULL;

/* Demangled: DLB_r4_fft_160_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_160_s(void) {
    ALOGD("DLB_r4_fft_160_s() called");
    return 0;
}

/* Demangled: DLB_fft_CLinv_scaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLinv_scaledCL(void) {
    ALOGD("DLB_fft_CLinv_scaledCL() called");
    return 0;
}

/* Exported Object: AC4DEC_A_PHASE_SHIFT_2TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_PHASE_SHIFT_2TO7CH = NULL;

/* Demangled: AC4DEC_aspx_hfgen_iwc_2ch_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_hfgen_iwc_2ch_read(void) {
    ALOGD("AC4DEC_aspx_hfgen_iwc_2ch_read() called");
    return 0;
}

/* Demangled: AC4DEC_ims_il_mdd_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ims_il_mdd_init(void) {
    ALOGD("AC4DEC_ims_il_mdd_init() called");
    return 0;
}

/* Demangled: DLB_r4_fft_4_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_4_s(void) {
    ALOGD("DLB_r4_fft_4_s() called");
    return 0;
}

/* Demangled: AC4DEC_emdf_mem_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_mem_init(void) {
    ALOGD("AC4DEC_emdf_mem_init() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_md_ver */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_md_ver(void) {
    ALOGD("AC4DEC_oamdi_get_md_ver() called");
    return 0;
}

/* Demangled: DLB_blk_Lcrossfade_gainLS_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lcrossfade_gainLS_setup(void) {
    ALOGD("DLB_blk_Lcrossfade_gainLS_setup() called");
    return 0;
}

/* Demangled: DLB_CLrecipCLUU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLrecipCLUU_strict(void) {
    ALOGD("DLB_CLrecipCLUU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_45_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_45_s(void) {
    ALOGD("DLB_r4_fft_45_s() called");
    return 0;
}

/* Demangled: dolby::DlbGenClass2::~DlbGenClass2() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DlbGenClass2D1Ev(void) {
    ALOGD("_ZN5dolby12DlbGenClass2D1Ev() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_reader_get_param_presentation */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_get_param_presentation(void) {
    ALOGD("AC4DEC_ac4toc_reader_get_param_presentation() called");
    return 0;
}

/* Demangled: AC4DEC_emdf_pl_0x01_serialize */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_pl_0x01_serialize(void) {
    ALOGD("AC4DEC_emdf_pl_0x01_serialize() called");
    return 0;
}

/* Demangled: AC4DEC_ramp_gain_targets_set */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ramp_gain_targets_set(void) {
    ALOGD("AC4DEC_ramp_gain_targets_set() called");
    return 0;
}

/* Demangled: dlb_blk_LmaxLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmaxLL_flex(void) {
    ALOGD("dlb_blk_LmaxLL_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_960 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_960(void) {
    ALOGD("dlb_fft_fwd_usc_960() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_192 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_192(void) {
    ALOGD("dlb_fft_inv_scl_192() called");
    return 0;
}

/* Demangled: AC4DEC_arle_compressor_gains_update */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_compressor_gains_update(void) {
    ALOGD("AC4DEC_arle_compressor_gains_update() called");
    return 0;
}

/* Demangled: AC4DEC_de_clear */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_clear(void) {
    ALOGD("AC4DEC_de_clear() called");
    return 0;
}

/* Demangled: AC4DEC_ajccdec_interpolate */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_interpolate(void) {
    ALOGD("AC4DEC_ajccdec_interpolate() called");
    return 0;
}

/* Demangled: AC4DEC_oamd_reader_parse_dyndata_multi */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_reader_parse_dyndata_multi(void) {
    ALOGD("AC4DEC_oamd_reader_parse_dyndata_multi() called");
    return 0;
}

/* Demangled: AC4DEC_room_config_disable_elevation */
extern "C" __attribute__((visibility("default"))) int AC4DEC_room_config_disable_elevation(void) {
    ALOGD("AC4DEC_room_config_disable_elevation() called");
    return 0;
}

/* Demangled: AC4DEC_evo_time_subtract */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_time_subtract(void) {
    ALOGD("AC4DEC_evo_time_subtract() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_720 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_720(void) {
    ALOGD("dlb_fft_inv_scl_720() called");
    return 0;
}

/* Demangled: AC4DEC_delay_line_clvec_copy */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_line_clvec_copy(void) {
    ALOGD("AC4DEC_delay_line_clvec_copy() called");
    return 0;
}

/* Demangled: AC4DEC_huffdec_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_huffdec_read(void) {
    ALOGD("AC4DEC_huffdec_read() called");
    return 0;
}

/* Demangled: AC4DEC_ade_il_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_il_reset(void) {
    ALOGD("AC4DEC_ade_il_reset() called");
    return 0;
}

/* Demangled: AC4DEC_asf_read_sf_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_asf_read_sf_info(void) {
    ALOGD("AC4DEC_asf_read_sf_info() called");
    return 0;
}

/* Demangled: AC4DEC_cch_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_reset(void) {
    ALOGD("AC4DEC_cch_reset() called");
    return 0;
}

/* Demangled: AC4DEC_drc_get_standard_profile */
extern "C" __attribute__((visibility("default"))) int AC4DEC_drc_get_standard_profile(void) {
    ALOGD("AC4DEC_drc_get_standard_profile() called");
    return 0;
}

/* Demangled: AC4DEC_loudness_info_init_rtll */
extern "C" __attribute__((visibility("default"))) int AC4DEC_loudness_info_init_rtll(void) {
    ALOGD("AC4DEC_loudness_info_init_rtll() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD120 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD120 = NULL;

/* Demangled: dlb_fft_inv_usc_256 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_256(void) {
    ALOGD("dlb_fft_inv_usc_256() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_process_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_process_query_scratch(void) {
    ALOGD("AC4DEC_ngcs_process_query_scratch() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_DIFFUSE_DECORR_2TO6CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_DIFFUSE_DECORR_2TO6CH = NULL;

/* Exported Object: AC4DEC_WindowKBD768_alpha3_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD768_alpha3_0 = NULL;

/* Demangled: AC4DEC_imdct_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imdct_close(void) {
    ALOGD("AC4DEC_imdct_close() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_de */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_de = NULL;

/* Demangled: AC4DEC_ngcs_steering_run */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_steering_run(void) {
    ALOGD("AC4DEC_ngcs_steering_run() called");
    return 0;
}

/* Exported Object: AC4DEC_IMS_FDN_PARAMS_DEFAULT */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_IMS_FDN_PARAMS_DEFAULT = NULL;

/* Demangled: AC4DEC_rsrc_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rsrc_close(void) {
    ALOGD("AC4DEC_rsrc_close() called");
    return 0;
}

/* Demangled: AC4DEC_oamd_framer_progress_time */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_framer_progress_time(void) {
    ALOGD("AC4DEC_oamd_framer_progress_time() called");
    return 0;
}

/* Exported Object: AC4DEC_DELTA_Z_SAMPLES */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DELTA_Z_SAMPLES = NULL;

/* Exported Object: AC4DEC_AA_NGCS_SEG_STEERING_2TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_NGCS_SEG_STEERING_2TO7CH = NULL;

/* Demangled: AC4DEC_decoder_get_drc_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_get_drc_info(void) {
    ALOGD("AC4DEC_decoder_get_drc_info() called");
    return 0;
}

/* Demangled: AC4DEC_drc_mode_select */
extern "C" __attribute__((visibility("default"))) int AC4DEC_drc_mode_select(void) {
    ALOGD("AC4DEC_drc_mode_select() called");
    return 0;
}

/* Demangled: AC4DEC_sv_dual_end_state_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sv_dual_end_state_query_memory(void) {
    ALOGD("AC4DEC_sv_dual_end_state_query_memory() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L1024_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L1024_cos = NULL;

/* Demangled: AC4DEC_dvlim_get_num_channels */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_get_num_channels(void) {
    ALOGD("AC4DEC_dvlim_get_num_channels() called");
    return 0;
}

/* Demangled: dlb_blk_Lmix_shlULLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmix_shlULLL_flex(void) {
    ALOGD("dlb_blk_Lmix_shlULLL_flex() called");
    return 0;
}

/* Demangled: DLB_r4_rsplit_fft_nn_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_rsplit_fft_nn_s(void) {
    ALOGD("DLB_r4_rsplit_fft_nn_s() called");
    return 0;
}

/* Demangled: ac4dec_wrapper_close */
extern "C" __attribute__((visibility("default"))) int ac4dec_wrapper_close(void) {
    ALOGD("ac4dec_wrapper_close() called");
    return 0;
}

/* Demangled: DLB_blk_LsaddLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LsaddLL_strict(void) {
    ALOGD("DLB_blk_LsaddLL_strict() called");
    return 0;
}

/* Demangled: AC4DEC_q2le_compute_log_excitation */
extern "C" __attribute__((visibility("default"))) int AC4DEC_q2le_compute_log_excitation(void) {
    ALOGD("AC4DEC_q2le_compute_log_excitation() called");
    return 0;
}

/* Demangled: AC4DEC_ldn_excitation_transform */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ldn_excitation_transform(void) {
    ALOGD("AC4DEC_ldn_excitation_transform() called");
    return 0;
}

/* Demangled: AC4DEC_iwc_apply */
extern "C" __attribute__((visibility("default"))) int AC4DEC_iwc_apply(void) {
    ALOGD("AC4DEC_iwc_apply() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD128 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD128 = NULL;

/* Demangled: AC4DEC_oamdi_get_sample_offset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_sample_offset(void) {
    ALOGD("AC4DEC_oamdi_get_sample_offset() called");
    return 0;
}

/* Demangled: dlb_blk_Lfir3L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lfir3L_flex(void) {
    ALOGD("dlb_blk_Lfir3L_flex() called");
    return 0;
}

/* Demangled: dlb_blk_LnrrecipLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LnrrecipLU_flex(void) {
    ALOGD("dlb_blk_LnrrecipLU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_2 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_2(void) {
    ALOGD("dlb_fft_inv_scl_2() called");
    return 0;
}

/* Demangled: DLB_hybrid_synthesisCL_close */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_synthesisCL_close(void) {
    ALOGD("DLB_hybrid_synthesisCL_close() called");
    return 0;
}

/* Demangled: AC4DEC_delay_get_write_ptr */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_get_write_ptr(void) {
    ALOGD("AC4DEC_delay_get_write_ptr() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L384_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L384_1 = NULL;

/* Demangled: AC4DEC_calc_signal_envelope */
extern "C" __attribute__((visibility("default"))) int AC4DEC_calc_signal_envelope(void) {
    ALOGD("AC4DEC_calc_signal_envelope() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD60_alpha6_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD60_alpha6_0 = NULL;

/* Demangled: DLB_vec_Sabs_maxSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_Sabs_maxSU_strict(void) {
    ALOGD("DLB_vec_Sabs_maxSU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_240 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_240(void) {
    ALOGD("dlb_fft_fwd_usc_240() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L384_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L384_2 = NULL;

/* Exported Object: AC4DEC_post_gain_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_post_gain_tab = NULL;

/* Demangled: AC4DEC_oamdi_get_oamd_ver_from_bitstream */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_oamd_ver_from_bitstream(void) {
    ALOGD("AC4DEC_oamdi_get_oamd_ver_from_bitstream() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_4 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_4(void) {
    ALOGD("dlb_fft_inv_scl_4() called");
    return 0;
}

/* Demangled: AC4DEC_legq_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_legq_process(void) {
    ALOGD("AC4DEC_legq_process() called");
    return 0;
}

/* Demangled: AC4DEC_metadata_delay_iterator_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_iterator_init(void) {
    ALOGD("AC4DEC_metadata_delay_iterator_init() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_180 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_180(void) {
    ALOGD("dlb_fft_fwd_scl_180() called");
    return 0;
}

/* Demangled: AC4DEC_ade_il_get_enable_flag */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_il_get_enable_flag(void) {
    ALOGD("AC4DEC_ade_il_get_enable_flag() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_get_hard_clip */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_get_hard_clip(void) {
    ALOGD("AC4DEC_dvlim_get_hard_clip() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_6 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_6(void) {
    ALOGD("dlb_fft_inv_scl_6() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P4_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4_vec_ana = NULL;

/* Exported Object: AC4DEC_CHANNEL_MAP_544_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_544_0 = NULL;

/* Demangled: AC4DEC_dapil_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dapil_query_mem(void) {
    ALOGD("AC4DEC_dapil_query_mem() called");
    return 0;
}

/* Demangled: dlb_CLdivCLCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLdivCLCLU_flex(void) {
    ALOGD("dlb_CLdivCLCLU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_384 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_384(void) {
    ALOGD("DLB_r4_inv_fft_384() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_fhcqmf_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_fhcqmf_query_memory(void) {
    ALOGD("AC4DEC_ac4dap_fhcqmf_query_memory() called");
    return 0;
}

/* Exported Object: AC4DEC_CHANNEL_MAP_544_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_544_1 = NULL;

/* Demangled: AC4DEC_hmac_obf_sha256_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hmac_obf_sha256_init(void) {
    ALOGD("AC4DEC_hmac_obf_sha256_init() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_8 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_8(void) {
    ALOGD("dlb_fft_inv_scl_8() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_hf_adjust */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_hf_adjust(void) {
    ALOGD("AC4DEC_aspx_hf_adjust() called");
    return 0;
}

/* Demangled: AC4DEC_volume_and_ieq_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_volume_and_ieq_query_scratch(void) {
    ALOGD("AC4DEC_volume_and_ieq_query_scratch() called");
    return 0;
}

/* Demangled: AC4DEC_loudness_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_loudness_init(void) {
    ALOGD("AC4DEC_loudness_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L288 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L288 = NULL;

/* Demangled: AC4DEC_ast_bw_index_smooth */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ast_bw_index_smooth(void) {
    ALOGD("AC4DEC_ast_bw_index_smooth() called");
    return 0;
}

/* Exported Object: AC4DEC_a_inv_quant_table */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_inv_quant_table = NULL;

/* Demangled: AC4DEC_hist_add_element */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hist_add_element(void) {
    ALOGD("AC4DEC_hist_add_element() called");
    return 0;
}

/* Demangled: AC4DEC_hdr_Plog2P */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hdr_Plog2P(void) {
    ALOGD("AC4DEC_hdr_Plog2P() called");
    return 0;
}

/* Demangled: dlb_BLmaxBLL_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmaxBLL_inplace_flex(void) {
    ALOGD("dlb_BLmaxBLL_inplace_flex() called");
    return 0;
}

/* Demangled: DLB_vec_NdotLLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_NdotLLU_strict(void) {
    ALOGD("DLB_vec_NdotLLU_strict() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_steering_table_setup */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_steering_table_setup(void) {
    ALOGD("AC4DEC_ngcs_steering_table_setup() called");
    return 0;
}

/* Demangled: AC4DEC_asf_read_sf_info_lfe */
extern "C" __attribute__((visibility("default"))) int AC4DEC_asf_read_sf_info_lfe(void) {
    ALOGD("AC4DEC_asf_read_sf_info_lfe() called");
    return 0;
}

/* Demangled: AC4DEC_speaker_config_positions_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_speaker_config_positions_get(void) {
    ALOGD("AC4DEC_speaker_config_positions_get() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_has_oa_element_object_description */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_has_oa_element_object_description(void) {
    ALOGD("AC4DEC_oamdi_has_oa_element_object_description() called");
    return 0;
}

/* Demangled: AC4DEC_bf1_fdn_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_bf1_fdn_init(void) {
    ALOGD("AC4DEC_bf1_fdn_init() called");
    return 0;
}

/* Demangled: AC4DEC_hist_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hist_init(void) {
    ALOGD("AC4DEC_hist_init() called");
    return 0;
}

/* Demangled: DLB_blk_refLdelayU */
extern "C" __attribute__((visibility("default"))) int DLB_blk_refLdelayU(void) {
    ALOGD("DLB_blk_refLdelayU() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_32 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_32 = NULL;

/* Demangled: AC4DEC_phase90_filter_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_phase90_filter_process(void) {
    ALOGD("AC4DEC_phase90_filter_process() called");
    return 0;
}

/* Demangled: AC4DEC_get_compressed_channel_map */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_compressed_channel_map(void) {
    ALOGD("AC4DEC_get_compressed_channel_map() called");
    return 0;
}

/* Exported Object: AC4DEC_base_frame_len_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_base_frame_len_tab = NULL;

/* Demangled: AC4DEC_oamdi_set_obj_not_active */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_set_obj_not_active(void) {
    ALOGD("AC4DEC_oamdi_set_obj_not_active() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ims_para_coarse_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ims_para_coarse_df = NULL;

/* Demangled: AC4DEC_dvlim_reset_state */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_reset_state(void) {
    ALOGD("AC4DEC_dvlim_reset_state() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::SimpleSoftOMXComponent::BufferInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L32_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L32_cos = NULL;

/* Demangled: AC4DEC_room_config_warping_enable */
extern "C" __attribute__((visibility("default"))) int AC4DEC_room_config_warping_enable(void) {
    ALOGD("AC4DEC_room_config_warping_enable() called");
    return 0;
}

/* Demangled: DLB_blk_delay_clear_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_delay_clear_strict(void) {
    ALOGD("DLB_blk_delay_clear_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L768 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L768 = NULL;

/* Demangled: dlb_fft_fwd_scl_360 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_360(void) {
    ALOGD("dlb_fft_fwd_scl_360() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_downmix_and_fdn_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_downmix_and_fdn_process(void) {
    ALOGD("AC4DEC_hp_height_downmix_and_fdn_process() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_fdn_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_fdn_process(void) {
    ALOGD("AC4DEC_hp_height_fdn_process() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_NGCS_SEG_STEERING_2TO5CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_NGCS_SEG_STEERING_2TO5CH = NULL;

/* Demangled: AC4DEC_hdr_P2powP */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hdr_P2powP(void) {
    ALOGD("AC4DEC_hdr_P2powP() called");
    return 0;
}

/* Exported Object: dlb_cos_32_full */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_32_full = NULL;

/* Demangled: AC4DEC_phase90_filter_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_phase90_filter_init(void) {
    ALOGD("AC4DEC_phase90_filter_init() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_mdd_generate_dummy_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_mdd_generate_dummy_data(void) {
    ALOGD("AC4DEC_aspx_mdd_generate_dummy_data() called");
    return 0;
}

/* Exported Object: AC4DEC_A_ROOM_CONFIG_SPKS_CENTRE_ALT */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_ROOM_CONFIG_SPKS_CENTRE_ALT = NULL;

/* Demangled: AC4DEC_delay_line_lfract_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_line_lfract_reset(void) {
    ALOGD("AC4DEC_delay_line_lfract_reset() called");
    return 0;
}

/* Demangled: AC4DEC_sone_buffer_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sone_buffer_query_memory(void) {
    ALOGD("AC4DEC_sone_buffer_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_sap_sub_full */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sap_sub_full(void) {
    ALOGD("AC4DEC_sap_sub_full() called");
    return 0;
}

/* Exported Object: AC4DEC_a_isf_bh_15_9_5_1_decode */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_isf_bh_15_9_5_1_decode = NULL;

/* Demangled: AC4DEC_ngcs_centre_spread_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_centre_spread_init(void) {
    ALOGD("AC4DEC_ngcs_centre_spread_init() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_set_target_reference_level */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_set_target_reference_level(void) {
    ALOGD("AC4DEC_decoder_set_target_reference_level() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_config_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_config_read(void) {
    ALOGD("AC4DEC_aspx_config_read() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_DIFFUSE_NO_DECORR_5TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_DIFFUSE_NO_DECORR_5TO7CH = NULL;

/* Exported Object: AC4DEC_alpha_quant_table */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_alpha_quant_table = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_8_vec_syn = NULL;

/* Demangled: dlb_ac4dec_v2_dec_set_drc_target_reference_level */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_set_drc_target_reference_level(void) {
    ALOGD("dlb_ac4dec_v2_dec_set_drc_target_reference_level() called");
    return 0;
}

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR44KHZ1_BS192S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR44KHZ1_BS192S = NULL;

/* Demangled: AC4DEC_dap_mathlib_LlogLP */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_LlogLP(void) {
    ALOGD("AC4DEC_dap_mathlib_LlogLP() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_get_drc_info */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_get_drc_info(void) {
    ALOGD("dlb_ac4dec_v2_dec_get_drc_info() called");
    return 0;
}

/* Exported Object: AC4DEC_sbg_template_lowres */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_sbg_template_lowres = NULL;

/* Exported Object: AC4DEC_IMS_DEN_PARAMS_DEFAULT */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_IMS_DEN_PARAMS_DEFAULT = NULL;

/* Demangled: dlb_qmf_analysisL_open */
extern "C" __attribute__((visibility("default"))) int dlb_qmf_analysisL_open(void) {
    ALOGD("dlb_qmf_analysisL_open() called");
    return 0;
}

/* Demangled: DLB_blk_LmixnL */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixnL(void) {
    ALOGD("DLB_blk_LmixnL() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_reader_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_query_mem(void) {
    ALOGD("AC4DEC_ac4toc_reader_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_init_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_init_info(void) {
    ALOGD("AC4DEC_oamdi_get_init_info() called");
    return 0;
}

/* Exported Object: AC4DEC_a_isf_decoder_metadata */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_isf_decoder_metadata = NULL;

/* Demangled: AC4DEC_oamdi_set_hp_render_mode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_set_hp_render_mode(void) {
    ALOGD("AC4DEC_oamdi_set_hp_render_mode() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlUL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlUL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlUL_strict() called");
    return 0;
}

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR44KHZ1_BS192S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR44KHZ1_BS192S = NULL;

/* Exported Object: AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR51KHZ2 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR51KHZ2 = NULL;

/* Demangled: AC4DEC_delay_write */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_write(void) {
    ALOGD("AC4DEC_delay_write() called");
    return 0;
}

/* Demangled: android::AC4Decoder::setPCMOutConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4Decoder15setPCMOutConfigEv(void) {
    ALOGD("_ZN7android10AC4Decoder15setPCMOutConfigEv() called");
    return 0;
}

/* Demangled: AC4DEC_acpldec_process_2ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_process_2ch(void) {
    ALOGD("AC4DEC_acpldec_process_2ch() called");
    return 0;
}

/* Demangled: AC4DEC_cdmx_apply_downmix */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cdmx_apply_downmix(void) {
    ALOGD("AC4DEC_cdmx_apply_downmix() called");
    return 0;
}

/* Demangled: AC4DEC_get_recip_num_chan */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_recip_num_chan(void) {
    ALOGD("AC4DEC_get_recip_num_chan() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L8_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L8_cos = NULL;

/* Demangled: AC4DEC_oamdi_get_md_update_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_md_update_info(void) {
    ALOGD("AC4DEC_oamdi_get_md_update_info() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ims_para_coarse_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ims_para_coarse_f0 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L512 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L512 = NULL;

/* Demangled: AC4DEC_ac4framer_set_timestamp */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4framer_set_timestamp(void) {
    ALOGD("AC4DEC_ac4framer_set_timestamp() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_get_flushing_status */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_get_flushing_status(void) {
    ALOGD("AC4DEC_decoder_get_flushing_status() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L36_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L36_1 = NULL;

/* Demangled: AC4DEC_oamt_map_objects_from_bs_to_oamd_order */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamt_map_objects_from_bs_to_oamd_order(void) {
    ALOGD("AC4DEC_oamt_map_objects_from_bs_to_oamd_order() called");
    return 0;
}

/* Demangled: AC4DEC_fboar_get_next_endpoint */
extern "C" __attribute__((visibility("default"))) int AC4DEC_fboar_get_next_endpoint(void) {
    ALOGD("AC4DEC_fboar_get_next_endpoint() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_parse_presentation_v1_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_parse_presentation_v1_info(void) {
    ALOGD("AC4DEC_ac4toc_parse_presentation_v1_info() called");
    return 0;
}

/* Demangled: AC4DEC_delay_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_query_memory(void) {
    ALOGD("AC4DEC_delay_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_shared_mem_finalize */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_shared_mem_finalize(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_shared_mem_finalize() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L36_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L36_2 = NULL;

/* Exported Object: AC4DEC_tree_huff_code_ims_para_coarse_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ims_para_coarse_dt = NULL;

/* Demangled: AC4DEC_oamd_framer_get_next_gradient_change */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_framer_get_next_gradient_change(void) {
    ALOGD("AC4DEC_oamd_framer_get_next_gradient_change() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_hp_head_track_disable */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_hp_head_track_disable(void) {
    ALOGD("AC4DEC_oamdi_get_hp_head_track_disable() called");
    return 0;
}

/* Demangled: AC4DEC_evo_filter_payload_id */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_filter_payload_id(void) {
    ALOGD("AC4DEC_evo_filter_payload_id() called");
    return 0;
}

/* Demangled: AC4DEC_evo_calculate_unalignedbytes_hmac */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_calculate_unalignedbytes_hmac(void) {
    ALOGD("AC4DEC_evo_calculate_unalignedbytes_hmac() called");
    return 0;
}

/* Demangled: dlb_blk_LminLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LminLL_flex(void) {
    ALOGD("dlb_blk_LminLL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L576 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L576 = NULL;

/* Demangled: DLB_fft_Linv_scaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_Linv_scaledCL(void) {
    ALOGD("DLB_fft_Linv_scaledCL() called");
    return 0;
}

/* Demangled: dolby::Ac4DecClient::checkAndUpdateConfig(AC4EXEC*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12Ac4DecClient20checkAndUpdateConfigEP7AC4EXEC(void) {
    ALOGD("_ZN5dolby12Ac4DecClient20checkAndUpdateConfigEP7AC4EXEC() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_rhcqmf_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_rhcqmf_query_memory(void) {
    ALOGD("AC4DEC_ac4dap_rhcqmf_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_virtualizer_surround_boost_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_virtualizer_surround_boost_process(void) {
    ALOGD("AC4DEC_ac4dap_virtualizer_surround_boost_process() called");
    return 0;
}

/* Demangled: AC4DEC_sv_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sv_process(void) {
    ALOGD("AC4DEC_sv_process() called");
    return 0;
}

/* Demangled: AC4DEC_ade_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_close(void) {
    ALOGD("AC4DEC_ade_close() called");
    return 0;
}

/* Demangled: AC4DEC_ac_decode_finish */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac_decode_finish(void) {
    ALOGD("AC4DEC_ac_decode_finish() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_30_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_30_s(void) {
    ALOGD("DLB_r4_inv_fft_30_s() called");
    return 0;
}

/* Demangled: DLB_time_reset */
extern "C" __attribute__((visibility("default"))) int DLB_time_reset(void) {
    ALOGD("DLB_time_reset() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_output_stage_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_output_stage_process(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_output_stage_process() called");
    return 0;
}

/* Demangled: AC4DEC_get_num_side_bits */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_num_side_bits(void) {
    ALOGD("AC4DEC_get_num_side_bits() called");
    return 0;
}

/* Demangled: AC4DEC_interpolate_envelope */
extern "C" __attribute__((visibility("default"))) int AC4DEC_interpolate_envelope(void) {
    ALOGD("AC4DEC_interpolate_envelope() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_asf_book10 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_asf_book10 = NULL;

/* Demangled: AC4DEC_rsrc_load_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rsrc_load_scratch(void) {
    ALOGD("AC4DEC_rsrc_load_scratch() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_asf_book11 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_asf_book11 = NULL;

/* Demangled: AC4DEC_oamd_framer_add */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_framer_add(void) {
    ALOGD("AC4DEC_oamd_framer_add() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv2_shlLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv2_shlLU_strict(void) {
    ALOGD("DLB_blk_Liir2ssv2_shlLU_strict() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisL_get_filter_state_length */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_get_filter_state_length(void) {
    ALOGD("DLB_qmf_analysisL_get_filter_state_length() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1xL_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1xL_set_coef(void) {
    ALOGD("DLB_blk_Liir1xL_set_coef() called");
    return 0;
}

/* Demangled: DLB_r4_fft_480 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_480(void) {
    ALOGD("DLB_r4_fft_480() called");
    return 0;
}

/* Exported Object: AC4DEC_ajcc_wet_quant_table */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajcc_wet_quant_table = NULL;

/* Demangled: AC4DEC_aspx_data_1ch_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_data_1ch_read(void) {
    ALOGD("AC4DEC_aspx_data_1ch_read() called");
    return 0;
}

/* Demangled: dlb_CLmacCLLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmacCLLU_flex(void) {
    ALOGD("dlb_CLmacCLLU_flex() called");
    return 0;
}

/* Demangled: AC4DEC_calc_hcqmf_3ch_decorr */
extern "C" __attribute__((visibility("default"))) int AC4DEC_calc_hcqmf_3ch_decorr(void) {
    ALOGD("AC4DEC_calc_hcqmf_3ch_decorr() called");
    return 0;
}

/* Demangled: AC4DEC_asfdec_inv_quant_spectrum */
extern "C" __attribute__((visibility("default"))) int AC4DEC_asfdec_inv_quant_spectrum(void) {
    ALOGD("AC4DEC_asfdec_inv_quant_spectrum() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L288_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L288_1 = NULL;

/* Demangled: AC4DEC_ac4dap_channel_map_infer_format */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_channel_map_infer_format(void) {
    ALOGD("AC4DEC_ac4dap_channel_map_infer_format() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L288_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L288_2 = NULL;

/* Exported Object: AC4DEC_oamd_4bit_unsigned_to_oari_Q15 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_oamd_4bit_unsigned_to_oari_Q15 = NULL;

/* Exported Object: AC4DEC_WindowKBD24_alpha6_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD24_alpha6_0 = NULL;

/* Demangled: DLB_blk_Liir1_shl_addLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1_shl_addLL_strict(void) {
    ALOGD("DLB_blk_Liir1_shl_addLL_strict() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_384 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_384(void) {
    ALOGD("dlb_fft_inv_scl_384() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_192 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_192(void) {
    ALOGD("dlb_fft_fwd_scl_192() called");
    return 0;
}

/* Exported Object: AC4DEC_OAMDI_DIV_TABLE_TO_CODE */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_OAMDI_DIV_TABLE_TO_CODE = NULL;

/* Demangled: AC4DEC_oamdi_set_has_oa_element_headphone */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_set_has_oa_element_headphone(void) {
    ALOGD("AC4DEC_oamdi_set_has_oa_element_headphone() called");
    return 0;
}

/* Demangled: dlb_blk_delayL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_delayL_flex(void) {
    ALOGD("dlb_blk_delayL_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_720 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_720(void) {
    ALOGD("dlb_fft_fwd_scl_720() called");
    return 0;
}

/* Exported Object: AC4DEC_ajcc_para_data_type_7x4 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajcc_para_data_type_7x4 = NULL;

/* Demangled: dlb_BLmpyBLS_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmpyBLS_inplace_flex(void) {
    ALOGD("dlb_BLmpyBLS_inplace_flex() called");
    return 0;
}

/* Demangled: dlb_blk_Lmpy_shlLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmpy_shlLSU_flex(void) {
    ALOGD("dlb_blk_Lmpy_shlLSU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_256 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_256(void) {
    ALOGD("dlb_fft_fwd_usc_256() called");
    return 0;
}

/* Demangled: AC4DEC_leveler_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_leveler_reset(void) {
    ALOGD("AC4DEC_leveler_reset() called");
    return 0;
}

/* Demangled: DLB_blk_LintegrateL_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LintegrateL_setup(void) {
    ALOGD("DLB_blk_LintegrateL_setup() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_get_frame_duration */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_get_frame_duration(void) {
    ALOGD("dlb_ac4dec_v2_dec_get_frame_duration() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_60_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_60_s(void) {
    ALOGD("DLB_r4_inv_fft_60_s() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_obj_count */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_obj_count(void) {
    ALOGD("AC4DEC_oamdi_get_obj_count() called");
    return 0;
}

/* Demangled: dlb_CLmpyCLCSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpyCLCSU_flex(void) {
    ALOGD("dlb_CLmpyCLCSU_flex() called");
    return 0;
}

/* Demangled: dlb_dctIII_scaled */
extern "C" __attribute__((visibility("default"))) int dlb_dctIII_scaled(void) {
    ALOGD("dlb_dctIII_scaled() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_get_ma_mix_info */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_get_ma_mix_info(void) {
    ALOGD("dlb_ac4dec_v2_dec_get_ma_mix_info() called");
    return 0;
}

/* Demangled: AC4DEC_dap_mathlib_clvec_CLmpyCLSIU_inplace */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_clvec_CLmpyCLSIU_inplace(void) {
    ALOGD("AC4DEC_dap_mathlib_clvec_CLmpyCLSIU_inplace() called");
    return 0;
}

/* Demangled: AC4DEC_sha256_do_hash_stride */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sha256_do_hash_stride(void) {
    ALOGD("AC4DEC_sha256_do_hash_stride() called");
    return 0;
}

/* Exported Object: dlb_clclmix5cl10csu_c */
extern "C" __attribute__((visibility("default"))) void* dlb_clclmix5cl10csu_c = NULL;

/* Exported Object: AC4DEC_ajcc_qm_type_id_7x4 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajcc_qm_type_id_7x4 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L1024_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L1024_1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L128_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L128_cos = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L1024_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L1024_2 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L480_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L480_cos = NULL;

/* Exported Object: AC4DEC_a_isf_bh_15_9_5_1_reorder */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_isf_bh_15_9_5_1_reorder = NULL;

/* Exported Object: AC4DEC_DELTA_Y_SAMPLES */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DELTA_Y_SAMPLES = NULL;

/* Demangled: AC4DEC_ac4toc_parse_substream_info_v2 */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_parse_substream_info_v2(void) {
    ALOGD("AC4DEC_ac4toc_parse_substream_info_v2() called");
    return 0;
}

/* Demangled: AC4DEC_de_apply_gains */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_apply_gains(void) {
    ALOGD("AC4DEC_de_apply_gains() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_mode_output_channel_locs */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_mode_output_channel_locs(void) {
    ALOGD("AC4DEC_ngcs_mode_output_channel_locs() called");
    return 0;
}

/* Demangled: AC4DEC_dap_mathlib_clvecdl_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_clvecdl_process(void) {
    ALOGD("AC4DEC_dap_mathlib_clvecdl_process() called");
    return 0;
}

/* Demangled: AC4DEC_metadata_delay_input_conceal_type */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_input_conceal_type(void) {
    ALOGD("AC4DEC_metadata_delay_input_conceal_type() called");
    return 0;
}

/* Demangled: AC4DEC_rsrc_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rsrc_config(void) {
    ALOGD("AC4DEC_rsrc_config() called");
    return 0;
}

/* Demangled: AC4DEC_ssfdec_st_data_parser */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssfdec_st_data_parser(void) {
    ALOGD("AC4DEC_ssfdec_st_data_parser() called");
    return 0;
}

/* Demangled: AC4DEC_evo_write_frame_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_write_frame_config(void) {
    ALOGD("AC4DEC_evo_write_frame_config() called");
    return 0;
}

/* Exported Object: func_c_ptr */
extern "C" __attribute__((visibility("default"))) void* func_c_ptr = NULL;

/* Demangled: DLB_blk_LfirUL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LfirUL_strict(void) {
    ALOGD("DLB_blk_LfirUL_strict() called");
    return 0;
}

/* Demangled: AC4DEC_oaril_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oaril_process(void) {
    ALOGD("AC4DEC_oaril_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L96_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L96_1 = NULL;

/* Exported Object: AC4DEC_tree_huff_code_joc */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_joc = NULL;

/* Demangled: AC4DEC_oamdi_get_oa_element_dimensional_trim_read_onl */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_oa_element_dimensional_trim_read_onl(void) {
    ALOGD("AC4DEC_oamdi_get_oa_element_dimensional_trim_read_onl() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_virtualizer_render_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_virtualizer_render_process(void) {
    ALOGD("AC4DEC_ac4dap_virtualizer_render_process() called");
    return 0;
}

/* Demangled: AC4DEC_hist_value_to_bin */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hist_value_to_bin(void) {
    ALOGD("AC4DEC_hist_value_to_bin() called");
    return 0;
}

/* Exported Object: AC4DEC_ade_attack_smooth_coeff_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ade_attack_smooth_coeff_tab = NULL;

/* Demangled: AC4DEC_ajccdec_upmix_slot_process_core */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_upmix_slot_process_core(void) {
    ALOGD("AC4DEC_ajccdec_upmix_slot_process_core() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L96_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L96_2 = NULL;

/* Demangled: AC4DEC_memlib_subsection_end */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_subsection_end(void) {
    ALOGD("AC4DEC_memlib_subsection_end() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_get_number_of_channels_from_channel_mode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_get_number_of_channels_from_channel_mode(void) {
    ALOGD("AC4DEC_ac4toc_get_number_of_channels_from_channel_mode() called");
    return 0;
}

/* Demangled: AC4DEC_aspxdec_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspxdec_query_mem(void) {
    ALOGD("AC4DEC_aspxdec_query_mem() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L256_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L256_cos = NULL;

/* Demangled: AC4DEC_evo_brw_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_brw_read(void) {
    ALOGD("AC4DEC_evo_brw_read() called");
    return 0;
}

/* Demangled: AC4DEC_evo_parse_frame_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_parse_frame_config(void) {
    ALOGD("AC4DEC_evo_parse_frame_config() called");
    return 0;
}

/* Demangled: dlb_vec_NdotLLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_NdotLLU_flex(void) {
    ALOGD("dlb_vec_NdotLLU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_fft_128_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_128_s(void) {
    ALOGD("DLB_r4_fft_128_s() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_48 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_48 = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P5_32_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_32_vec_syn = NULL;

/* Demangled: DLB_qmf_analysisL_init */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_init(void) {
    ALOGD("DLB_qmf_analysisL_init() called");
    return 0;
}

/* Demangled: dlb_blk_LclipL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LclipL_flex(void) {
    ALOGD("dlb_blk_LclipL_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_576 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_576(void) {
    ALOGD("DLB_r4_inv_fft_576() called");
    return 0;
}

/* Demangled: AC4DEC_cch_get_number_of_elements */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_get_number_of_elements(void) {
    ALOGD("AC4DEC_cch_get_number_of_elements() called");
    return 0;
}

/* Demangled: AC4DEC_sf_substream_decode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sf_substream_decode(void) {
    ALOGD("AC4DEC_sf_substream_decode() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_90_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_90_s(void) {
    ALOGD("DLB_r4_inv_fft_90_s() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_DIFFUSE_DECORR_5TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_DIFFUSE_DECORR_5TO7CH = NULL;

/* Exported Object: AC4DEC_tree_huff_code_acpl_beta_fine_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_beta_fine_df = NULL;

/* Demangled: AC4DEC_evo_brw_write */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_brw_write(void) {
    ALOGD("AC4DEC_evo_brw_write() called");
    return 0;
}

/* Demangled: AC4DEC_emdf_malloc */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_malloc(void) {
    ALOGD("AC4DEC_emdf_malloc() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisS_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_get_delay(void) {
    ALOGD("DLB_qmf_synthesisS_get_delay() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_md_mix_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_md_mix_init(void) {
    ALOGD("AC4DEC_ac4dec_md_mix_init() called");
    return 0;
}

/* Exported Object: AC4DEC_spectrum_step_size */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_spectrum_step_size = NULL;

/* Demangled: AC4DEC_memlib_pool_alloc */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_pool_alloc(void) {
    ALOGD("AC4DEC_memlib_pool_alloc() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L384_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L384_cos = NULL;

/* Demangled: DLB_fft_state_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_fft_state_query_mem(void) {
    ALOGD("DLB_fft_state_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_rhcqmf_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_rhcqmf_close(void) {
    ALOGD("AC4DEC_ac4dap_rhcqmf_close() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD48_alpha4_5 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD48_alpha4_5 = NULL;

/* Exported Object: AC4DEC_a_isf_bh_5_3_0_0_decode */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_isf_bh_5_3_0_0_decode = NULL;

/* Demangled: AC4DEC_dvlim_update_smoothed_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_update_smoothed_gain(void) {
    ALOGD("AC4DEC_dvlim_update_smoothed_gain() called");
    return 0;
}

/* Demangled: AC4DEC_evo_write_bitstream */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_write_bitstream(void) {
    ALOGD("AC4DEC_evo_write_bitstream() called");
    return 0;
}

/* Demangled: DLB_blk_Lfir3L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir3L_setup(void) {
    ALOGD("DLB_blk_Lfir3L_setup() called");
    return 0;
}

/* Demangled: dlb_CLmpyCLVSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpyCLVSU_flex(void) {
    ALOGD("dlb_CLmpyCLVSU_flex() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisL_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_get_delay(void) {
    ALOGD("DLB_qmf_analysisL_get_delay() called");
    return 0;
}

/* Demangled: AC4DEC_volume_and_ieq_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_volume_and_ieq_init(void) {
    ALOGD("AC4DEC_volume_and_ieq_init() called");
    return 0;
}

/* Demangled: DLB_blk_Lmpy_shlLLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmpy_shlLLU_strict(void) {
    ALOGD("DLB_blk_Lmpy_shlLLU_strict() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_speaker_virtualizer_dual_end_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_speaker_virtualizer_dual_end_process(void) {
    ALOGD("AC4DEC_ac4dap_speaker_virtualizer_dual_end_process() called");
    return 0;
}

/* Demangled: AC4DEC_size_config_exp_virtual_source_addition_law */
extern "C" __attribute__((visibility("default"))) int AC4DEC_size_config_exp_virtual_source_addition_law(void) {
    ALOGD("AC4DEC_size_config_exp_virtual_source_addition_law() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD512_alpha4_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD512_alpha4_0 = NULL;

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_1_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_1_0 = NULL;

/* Demangled: AC4DEC_arle_smoothed_excitations_calculation */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_smoothed_excitations_calculation(void) {
    ALOGD("AC4DEC_arle_smoothed_excitations_calculation() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_dequantize_noise_2ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_dequantize_noise_2ch(void) {
    ALOGD("AC4DEC_aspx_dequantize_noise_2ch() called");
    return 0;
}

/* Exported Object: DLB_MFB_P10KM_P64ATM301_LEGACY */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_P10KM_P64ATM301_LEGACY = NULL;

/* Demangled: AC4DEC_ac4toc_init_optional_emdf_info_cache */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_init_optional_emdf_info_cache(void) {
    ALOGD("AC4DEC_ac4toc_init_optional_emdf_info_cache() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_bitbuf_align */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_align(void) {
    ALOGD("AC4DEC_dlb_bitbuf_align() called");
    return 0;
}

/* Demangled: AC4DEC_ldn_smoothing_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ldn_smoothing_process(void) {
    ALOGD("AC4DEC_ldn_smoothing_process() called");
    return 0;
}

/* Demangled: AC4DEC_acpldec_config_1ch_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_config_1ch_read(void) {
    ALOGD("AC4DEC_acpldec_config_1ch_read() called");
    return 0;
}

/* Exported Object: dlb_hyb_p2_6 */
extern "C" __attribute__((visibility("default"))) void* dlb_hyb_p2_6 = NULL;

/* Demangled: AC4DEC_decorr_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decorr_close(void) {
    ALOGD("AC4DEC_decorr_close() called");
    return 0;
}

/* Demangled: AC4DEC_metadata_delay_iterator_set_pos */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_iterator_set_pos(void) {
    ALOGD("AC4DEC_metadata_delay_iterator_set_pos() called");
    return 0;
}

/* Demangled: AC4DEC_calc_heuristic_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_calc_heuristic_gain(void) {
    ALOGD("AC4DEC_calc_heuristic_gain() called");
    return 0;
}

/* Demangled: dlb_BLmpy_scaleBLSU_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmpy_scaleBLSU_inplace_flex(void) {
    ALOGD("dlb_BLmpy_scaleBLSU_inplace_flex() called");
    return 0;
}

/* Demangled: DLB_r4_fft_512_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_512_s(void) {
    ALOGD("DLB_r4_fft_512_s() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: AC4DEC_a_isf_bh_3_1_0_0_reorder */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_isf_bh_3_1_0_0_reorder = NULL;

/* Demangled: DLB_CLmfb_p10km_analysisL */
extern "C" __attribute__((visibility("default"))) int DLB_CLmfb_p10km_analysisL(void) {
    ALOGD("DLB_CLmfb_p10km_analysisL() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_beta_fine_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_beta_fine_f0 = NULL;

/* Demangled: DLB_r4_fft_6_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_6_s(void) {
    ALOGD("DLB_r4_fft_6_s() called");
    return 0;
}

/* Exported Object: AC4DEC_A_PHASE_SHIFT_5TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_PHASE_SHIFT_5TO7CH = NULL;

/* Demangled: AC4DEC_interpol_mult_UM_2ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_interpol_mult_UM_2ch(void) {
    ALOGD("AC4DEC_interpol_mult_UM_2ch() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_framing */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_framing(void) {
    ALOGD("AC4DEC_aspx_framing() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajcc_wet_fine_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajcc_wet_fine_df = NULL;

/* Demangled: dlb_CLaddCLCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLaddCLCLU_flex(void) {
    ALOGD("dlb_CLaddCLCLU_flex() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_alpha_fine_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_alpha_fine_df = NULL;

/* Exported Object: AC4DEC_tree_huff_code_acpl_beta_fine_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_beta_fine_dt = NULL;

/* Demangled: DLB_r4_fft_120 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_120(void) {
    ALOGD("DLB_r4_fft_120() called");
    return 0;
}

/* Demangled: AC4DEC_slot_mean_abs_level */
extern "C" __attribute__((visibility("default"))) int AC4DEC_slot_mean_abs_level(void) {
    ALOGD("AC4DEC_slot_mean_abs_level() called");
    return 0;
}

/* Demangled: AC4DEC_arle_smoothed_excitations_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_smoothed_excitations_init(void) {
    ALOGD("AC4DEC_arle_smoothed_excitations_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L360_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L360_1 = NULL;

/* Demangled: DLB_vec_LmaskLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LmaskLSU_strict(void) {
    ALOGD("DLB_vec_LmaskLSU_strict() called");
    return 0;
}

/* Exported Object: AC4DEC_PH90_COEFS */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PH90_COEFS = NULL;

/* Demangled: AC4DEC_dap_mathlib_LlogsmoothLL */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_LlogsmoothLL(void) {
    ALOGD("AC4DEC_dap_mathlib_LlogsmoothLL() called");
    return 0;
}

/* Demangled: AC4DEC_sv_pvt_clear_center_state */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sv_pvt_clear_center_state(void) {
    ALOGD("AC4DEC_sv_pvt_clear_center_state() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L360_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L360_2 = NULL;

/* Exported Object: AC4DEC_tree_joc_huff_code_coarse_coeff_sparse */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_joc_huff_code_coarse_coeff_sparse = NULL;

/* Demangled: AC4DEC_oamd_framer_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_framer_init(void) {
    ALOGD("AC4DEC_oamd_framer_init() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_get_emdf_status */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_get_emdf_status(void) {
    ALOGD("dlb_ac4dec_v2_dec_get_emdf_status() called");
    return 0;
}

/* Demangled: AC4DEC_evo_malloc */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_malloc(void) {
    ALOGD("AC4DEC_evo_malloc() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssL_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssL_set_coef(void) {
    ALOGD("DLB_blk_Liir2ssL_set_coef() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_joc_huff_code_fine_generic */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_joc_huff_code_fine_generic = NULL;

/* Demangled: DLB_r4_fft_64_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_64_s(void) {
    ALOGD("DLB_r4_fft_64_s() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_NGCS_SEG_STEERING_5TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_NGCS_SEG_STEERING_5TO7CH = NULL;

/* Exported Object: AC4DEC_CHANNEL_MAP_520_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_520_0 = NULL;

/* Exported Object: AC4DEC_IMS_BANDING_SCHEME_FDN_HR */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_IMS_BANDING_SCHEME_FDN_HR = NULL;

/* Demangled: DLB_BLmpy_scaleBLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmpy_scaleBLSU_strict(void) {
    ALOGD("DLB_BLmpy_scaleBLSU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L768 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L768 = NULL;

/* Exported Object: AC4DEC_AA_DIFFUSE_NO_DECORR_2TO4CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_DIFFUSE_NO_DECORR_2TO4CH = NULL;

/* Exported Object: AC4DEC_A_NGCS_SEG_RANGE_2TO4CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_NGCS_SEG_RANGE_2TO4CH = NULL;

/* Exported Object: AC4DEC_CHANNEL_MAP_520_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_520_1 = NULL;

/* Demangled: AC4DEC_mdct_to_qmf_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_mdct_to_qmf_query_mem(void) {
    ALOGD("AC4DEC_mdct_to_qmf_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_oamd_common_data_non_iframe_apply */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_common_data_non_iframe_apply(void) {
    ALOGD("AC4DEC_oamd_common_data_non_iframe_apply() called");
    return 0;
}

/* Demangled: DLB_r4_fft_192_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_192_s(void) {
    ALOGD("DLB_r4_fft_192_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_128 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_128(void) {
    ALOGD("DLB_r4_fft_128() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L480 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L480 = NULL;

/* Demangled: AC4DEC_evo_get_md_validity_internal */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_get_md_validity_internal(void) {
    ALOGD("AC4DEC_evo_get_md_validity_internal() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_get_dialog_enhancement_limit */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_get_dialog_enhancement_limit(void) {
    ALOGD("AC4DEC_decoder_get_dialog_enhancement_limit() called");
    return 0;
}

/* Demangled: AC4DEC_ajoc_partial_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajoc_partial_process(void) {
    ALOGD("AC4DEC_ajoc_partial_process() called");
    return 0;
}

/* Demangled: AC4DEC_inv_quant_sfb */
extern "C" __attribute__((visibility("default"))) int AC4DEC_inv_quant_sfb(void) {
    ALOGD("AC4DEC_inv_quant_sfb() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajcc_wet_fine_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajcc_wet_fine_f0 = NULL;

/* Demangled: AC4DEC_speaker_config_position_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_speaker_config_position_get(void) {
    ALOGD("AC4DEC_speaker_config_position_get() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_get_sgi_specifier */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_get_sgi_specifier(void) {
    ALOGD("AC4DEC_ac4toc_get_sgi_specifier() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_set_drc_target_reference_level */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_set_drc_target_reference_level(void) {
    ALOGD("AC4DEC_decoder_set_drc_target_reference_level() called");
    return 0;
}

/* Exported Object: AC4DEC_predictiontab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_predictiontab = NULL;

/* Exported Object: AC4DEC_tree_huff_code_acpl_alpha_fine_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_alpha_fine_f0 = NULL;

/* Demangled: DLB_Lmfb_p10km_synthesisCL_close */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_close(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_close() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dsp_Lpow2S */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dsp_Lpow2S(void) {
    ALOGD("AC4DEC_ac4dsp_Lpow2S() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajcc_wet_fine_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajcc_wet_fine_dt = NULL;

/* Demangled: AC4DEC_arle_clear_state */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_clear_state(void) {
    ALOGD("AC4DEC_arle_clear_state() called");
    return 0;
}

/* Demangled: AC4DEC_ajccdec_init_decorr */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_init_decorr(void) {
    ALOGD("AC4DEC_ajccdec_init_decorr() called");
    return 0;
}

/* Demangled: AC4DEC_de_il_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_il_open(void) {
    ALOGD("AC4DEC_de_il_open() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_alpha_fine_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_alpha_fine_dt = NULL;

/* Exported Object: AC4DEC_tree_joc_huff_code_5ch_pos_idx_sparse */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_joc_huff_code_5ch_pos_idx_sparse = NULL;

/* Exported Object: AC4DEC_WindowKBD240_alpha3_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD240_alpha3_0 = NULL;

/* Demangled: DLB_blk_Lattack_decay_iir1L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_iir1L_set_coef(void) {
    ALOGD("DLB_blk_Lattack_decay_iir1L_set_coef() called");
    return 0;
}

/* Exported Object: DLB_MFB_P10KM_P64ATM301 */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_P10KM_P64ATM301 = NULL;

/* Exported Object: AC4DEC_WindowKBD384_alpha3_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD384_alpha3_0 = NULL;

/* Demangled: dlb_blk_delay_setup_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_delay_setup_flex(void) {
    ALOGD("dlb_blk_delay_setup_flex() called");
    return 0;
}

/* Demangled: DLB_vec_Lmask_rev_coefLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_Lmask_rev_coefLSU_strict(void) {
    ALOGD("DLB_vec_Lmask_rev_coefLSU_strict() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_rhcqmf_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_rhcqmf_init(void) {
    ALOGD("AC4DEC_ac4dap_rhcqmf_init() called");
    return 0;
}

/* Demangled: AC4DEC_cch_get_seq_counter_increment */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_get_seq_counter_increment(void) {
    ALOGD("AC4DEC_cch_get_seq_counter_increment() called");
    return 0;
}

/* Demangled: AC4DEC_emdf_reset_num_pl_substreams */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_reset_num_pl_substreams(void) {
    ALOGD("AC4DEC_emdf_reset_num_pl_substreams() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L576_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L576_1 = NULL;

/* Demangled: AC4DEC_skip_bits_forward */
extern "C" __attribute__((visibility("default"))) int AC4DEC_skip_bits_forward(void) {
    ALOGD("AC4DEC_skip_bits_forward() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_576 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_576(void) {
    ALOGD("dlb_fft_inv_scl_576() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L576_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L576_2 = NULL;

/* Demangled: AC4DEC_ac_decode_target */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac_decode_target(void) {
    ALOGD("AC4DEC_ac_decode_target() called");
    return 0;
}

/* Exported Object: AC4DEC_ltp_quant32_cdf */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ltp_quant32_cdf = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L960 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L960 = NULL;

/* Demangled: dlb_fft_fwd_scl_384 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_384(void) {
    ALOGD("dlb_fft_fwd_scl_384() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_coefficients_find */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_coefficients_find(void) {
    ALOGD("AC4DEC_ac4dap_coefficients_find() called");
    return 0;
}

/* Demangled: AC4DEC_delay_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_init(void) {
    ALOGD("AC4DEC_delay_init() called");
    return 0;
}

/* Demangled: AC4DEC_interpol_mult_DM_2ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_interpol_mult_DM_2ch(void) {
    ALOGD("AC4DEC_interpol_mult_DM_2ch() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_get_mono_pan_associated */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_get_mono_pan_associated(void) {
    ALOGD("AC4DEC_ac4dec_get_mono_pan_associated() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_get_scale */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_get_scale(void) {
    ALOGD("DLB_hybrid_analysisCL_get_scale() called");
    return 0;
}

/* Exported Object: AC4DEC_QEXT_BANDING_SCHEME_ANE_IN */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_QEXT_BANDING_SCHEME_ANE_IN = NULL;

/* Demangled: AC4DEC_ssfdec_env_decoder */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssfdec_env_decoder(void) {
    ALOGD("AC4DEC_ssfdec_env_decoder() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajoc_dry_coarse_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajoc_dry_coarse_df = NULL;

/* Demangled: AC4DEC_aspxdec_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspxdec_reset(void) {
    ALOGD("AC4DEC_aspxdec_reset() called");
    return 0;
}

/* Demangled: AC4DEC_ims_il_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ims_il_open(void) {
    ALOGD("AC4DEC_ims_il_open() called");
    return 0;
}

/* Demangled: DLB_blk_LclipL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LclipL_strict(void) {
    ALOGD("DLB_blk_LclipL_strict() called");
    return 0;
}

/* Exported Object: AC4DEC_ade_release_smooth_coeff_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ade_release_smooth_coeff_tab = NULL;

/* Demangled: dolby::DlbGenClass2::icasecompare(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DlbGenClass212icasecompareERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void) {
    ALOGD("_ZN5dolby12DlbGenClass212icasecompareERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L15_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L15_cos = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301 = NULL;

/* Demangled: AC4DEC_ssfdec_spectrum_dec */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssfdec_spectrum_dec(void) {
    ALOGD("AC4DEC_ssfdec_spectrum_dec() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_288 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_288(void) {
    ALOGD("dlb_fft_inv_usc_288() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_get_metadata_sample_offset */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_get_metadata_sample_offset(void) {
    ALOGD("dlb_ac4dec_v2_dec_get_metadata_sample_offset() called");
    return 0;
}

/* Demangled: AC4DEC_get_further_loudness_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_further_loudness_info(void) {
    ALOGD("AC4DEC_get_further_loudness_info() called");
    return 0;
}

/* Exported Object: AC4DEC_AP_LDN_SL_TABLE_PTRS */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AP_LDN_SL_TABLE_PTRS = NULL;

/* Exported Object: AC4DEC_PA_NGCS_SEG_STEERING_2TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_NGCS_SEG_STEERING_2TO7CH = NULL;

/* Demangled: dlb_CLshlCLUU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLshlCLUU_flex(void) {
    ALOGD("dlb_CLshlCLUU_flex() called");
    return 0;
}

/* Demangled: AC4DEC_ajoc_de_mtx_calc */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajoc_de_mtx_calc(void) {
    ALOGD("AC4DEC_ajoc_de_mtx_calc() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_switch_fdn_opt */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_switch_fdn_opt(void) {
    ALOGD("AC4DEC_imsdec_switch_fdn_opt() called");
    return 0;
}

/* Demangled: AC4DEC_ssf_update_f0 */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssf_update_f0(void) {
    ALOGD("AC4DEC_ssf_update_f0() called");
    return 0;
}

/* Demangled: AC4DEC_framer_find_sync_word */
extern "C" __attribute__((visibility("default"))) int AC4DEC_framer_find_sync_word(void) {
    ALOGD("AC4DEC_framer_find_sync_word() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_duplicate */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_duplicate(void) {
    ALOGD("AC4DEC_oamdi_duplicate() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_set_bed_object_defaults */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_set_bed_object_defaults(void) {
    ALOGD("AC4DEC_oamdi_set_bed_object_defaults() called");
    return 0;
}

/* Demangled: dlb_blk_LcmpLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LcmpLL_flex(void) {
    ALOGD("dlb_blk_LcmpLL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L2 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L240 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L240 = NULL;

/* Exported Object: AC4DEC_sbg_template_lowres_subsampled */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_sbg_template_lowres_subsampled = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L12_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L12_1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L960_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L960_1 = NULL;

/* Demangled: AC4DEC_imsdec_ims_de_band_config_set */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_ims_de_band_config_set(void) {
    ALOGD("AC4DEC_imsdec_ims_de_band_config_set() called");
    return 0;
}

/* Exported Object: dlb_cos_48_full_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_48_full_scl = NULL;

/* Demangled: dolby::Ac4DecClient::ac4dec_process(tAc4DecoderExternal*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12Ac4DecClient14ac4dec_processEP19tAc4DecoderExternalPv(void) {
    ALOGD("_ZN5dolby12Ac4DecClient14ac4dec_processEP19tAc4DecoderExternalPv() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_fhcqmf_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_fhcqmf_close(void) {
    ALOGD("AC4DEC_ac4dap_fhcqmf_close() called");
    return 0;
}

/* Demangled: AC4DEC_arle_gain_smooth_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_gain_smooth_init(void) {
    ALOGD("AC4DEC_arle_gain_smooth_init() called");
    return 0;
}

/* Demangled: AC4DEC_metadata_delay_input_get_previous_buffer */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_input_get_previous_buffer(void) {
    ALOGD("AC4DEC_metadata_delay_input_get_previous_buffer() called");
    return 0;
}

/* Demangled: AC4DEC_ajocdec_parameter_set_update */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_parameter_set_update(void) {
    ALOGD("AC4DEC_ajocdec_parameter_set_update() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L12_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L12_2 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L960_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L960_2 = NULL;

/* Demangled: AC4DEC_dvlim_get_latency */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_get_latency(void) {
    ALOGD("AC4DEC_dvlim_get_latency() called");
    return 0;
}

/* Demangled: AC4DEC_evo_brw_skip */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_brw_skip(void) {
    ALOGD("AC4DEC_evo_brw_skip() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L4 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L4 = NULL;

/* Demangled: AC4DEC_hp_height_reverb_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_reverb_process(void) {
    ALOGD("AC4DEC_hp_height_reverb_process() called");
    return 0;
}

/* Demangled: AC4DEC_huffdec_set_tree */
extern "C" __attribute__((visibility("default"))) int AC4DEC_huffdec_set_tree(void) {
    ALOGD("AC4DEC_huffdec_set_tree() called");
    return 0;
}

/* Demangled: AC4DEC_dapil_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dapil_close(void) {
    ALOGD("AC4DEC_dapil_close() called");
    return 0;
}

/* Demangled: AC4DEC_get_loudness_data_substream_type */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_loudness_data_substream_type(void) {
    ALOGD("AC4DEC_get_loudness_data_substream_type() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1xL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1xL_strict(void) {
    ALOGD("DLB_blk_Liir1xL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L180 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L180 = NULL;

/* Demangled: DLB_r4_inv_fft_768 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_768(void) {
    ALOGD("DLB_r4_inv_fft_768() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_get_dmx_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_get_dmx_info(void) {
    ALOGD("AC4DEC_decoder_get_dmx_info() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajoc_dry_coarse_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajoc_dry_coarse_f0 = NULL;

/* Demangled: DLB_blk_Liir2ssefL_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssefL_setup(void) {
    ALOGD("DLB_blk_Liir2ssefL_setup() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L12 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L12 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L8 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L8 = NULL;

/* Demangled: DLB_r4_inv_fft_15_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_15_s(void) {
    ALOGD("DLB_r4_inv_fft_15_s() called");
    return 0;
}

/* Demangled: DLB_Sqmf_synthesisL */
extern "C" __attribute__((visibility("default"))) int DLB_Sqmf_synthesisL(void) {
    ALOGD("DLB_Sqmf_synthesisL() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_input_stage_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_input_stage_process(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_input_stage_process() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajoc_dry_coarse_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajoc_dry_coarse_dt = NULL;

/* Demangled: AC4DEC_obj_render_program_set */
extern "C" __attribute__((visibility("default"))) int AC4DEC_obj_render_program_set(void) {
    ALOGD("AC4DEC_obj_render_program_set() called");
    return 0;
}

/* Exported Object: AC4DEC_A_ROOM_CONFIG_SPKS_BACK_FULL */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_ROOM_CONFIG_SPKS_BACK_FULL = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L15 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L15 = NULL;

/* Demangled: dolby::Ac4DynamicConfig::Ac4DynamicConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16Ac4DynamicConfigC2Ev(void) {
    ALOGD("_ZN5dolby16Ac4DynamicConfigC2Ev() called");
    return 0;
}

/* Demangled: AC4DEC_ade_il_dialogue_extract */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_il_dialogue_extract(void) {
    ALOGD("AC4DEC_ade_il_dialogue_extract() called");
    return 0;
}

/* Demangled: AC4DEC_evo_get_payload_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_get_payload_info(void) {
    ALOGD("AC4DEC_evo_get_payload_info() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L16 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L16 = NULL;

/* Demangled: DLB_r4_fft_256_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_256_s(void) {
    ALOGD("DLB_r4_fft_256_s() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_close(void) {
    ALOGD("AC4DEC_ac4dap_close() called");
    return 0;
}

/* Demangled: AC4DEC_enable_predictor */
extern "C" __attribute__((visibility("default"))) int AC4DEC_enable_predictor(void) {
    ALOGD("AC4DEC_enable_predictor() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajcc_dry_fine_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajcc_dry_fine_df = NULL;

/* Demangled: AC4DEC_legq_generic_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_legq_generic_process(void) {
    ALOGD("AC4DEC_legq_generic_process() called");
    return 0;
}

/* Demangled: AC4DEC_ajocdec_core_alloc_dynamic */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_core_alloc_dynamic(void) {
    ALOGD("AC4DEC_ajocdec_core_alloc_dynamic() called");
    return 0;
}

/* Demangled: AC4DEC_cch_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_open(void) {
    ALOGD("AC4DEC_cch_open() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_set_ajoc_core_decode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_set_ajoc_core_decode(void) {
    ALOGD("AC4DEC_decoder_set_ajoc_core_decode() called");
    return 0;
}

/* Demangled: AC4DEC_ajccdec_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_query_mem(void) {
    ALOGD("AC4DEC_ajccdec_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_expd_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_expd_init(void) {
    ALOGD("AC4DEC_expd_init() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_user_de_gain_set */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_user_de_gain_set(void) {
    ALOGD("AC4DEC_imsdec_user_de_gain_set() called");
    return 0;
}

/* Exported Object: AC4DEC_a_isf_bh_9_5_0_0_decode */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_isf_bh_9_5_0_0_decode = NULL;

/* Demangled: DLB_r4_inv_fft_1024 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_1024(void) {
    ALOGD("DLB_r4_inv_fft_1024() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_32_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_32_s(void) {
    ALOGD("DLB_r4_inv_fft_32_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_640 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_640(void) {
    ALOGD("dlb_fft_inv_usc_640() called");
    return 0;
}

/* Demangled: AC4DEC_expd_gains_1ch_apply */
extern "C" __attribute__((visibility("default"))) int AC4DEC_expd_gains_1ch_apply(void) {
    ALOGD("AC4DEC_expd_gains_1ch_apply() called");
    return 0;
}

/* Exported Object: AC4DEC_a_isf_bh_3_1_0_0_decode */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_isf_bh_3_1_0_0_decode = NULL;

/* Exported Object: dlb_cos_64_full */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_64_full = NULL;

/* Demangled: AC4DEC_de_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_process(void) {
    ALOGD("AC4DEC_de_process() called");
    return 0;
}

/* Exported Object: AC4DEC_slopes_lin_to_db */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_slopes_lin_to_db = NULL;

/* Demangled: dlb_blk_LintegrateL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LintegrateL_flex(void) {
    ALOGD("dlb_blk_LintegrateL_flex() called");
    return 0;
}

/* Demangled: DLB_CLdivCLCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLdivCLCLU_strict(void) {
    ALOGD("DLB_CLdivCLCLU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L360 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L360 = NULL;

/* Demangled: AC4DEC_de_get_interp_scale */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_get_interp_scale(void) {
    ALOGD("AC4DEC_de_get_interp_scale() called");
    return 0;
}

/* Demangled: DLB_r4_fft_2 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_2(void) {
    ALOGD("DLB_r4_fft_2() called");
    return 0;
}

/* Demangled: AC4DEC_get_num_sfb */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_num_sfb(void) {
    ALOGD("AC4DEC_get_num_sfb() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L120 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L120 = NULL;

/* Demangled: DLB_r4_inv_fft_320_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_320_s(void) {
    ALOGD("DLB_r4_inv_fft_320_s() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_45_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_45_s(void) {
    ALOGD("DLB_r4_inv_fft_45_s() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_speaker_virtualizer_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_speaker_virtualizer_init(void) {
    ALOGD("AC4DEC_ac4dap_speaker_virtualizer_init() called");
    return 0;
}

/* Demangled: DLB_r4_fft_4 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_4(void) {
    ALOGD("DLB_r4_fft_4() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_set_main_associate_mixing_preference */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_set_main_associate_mixing_preference(void) {
    ALOGD("dlb_ac4dec_v2_dec_set_main_associate_mixing_preference() called");
    return 0;
}

/* Demangled: AC4DEC_delay_line_peek_indirect */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_line_peek_indirect(void) {
    ALOGD("AC4DEC_delay_line_peek_indirect() called");
    return 0;
}

/* Demangled: DLB_hybrid_synthesisCL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_synthesisCL_query_mem(void) {
    ALOGD("DLB_hybrid_synthesisCL_query_mem() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L320_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L320_cos = NULL;

/* Exported Object: AC4DEC_a_b_indices */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_b_indices = NULL;

/* Demangled: dlb_BLsaddBLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLsaddBLL_flex(void) {
    ALOGD("dlb_BLsaddBLL_flex() called");
    return 0;
}

/* Demangled: DLB_r4_fft_6 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_6(void) {
    ALOGD("DLB_r4_fft_6() called");
    return 0;
}

/* Demangled: android::AC4Decoder::onPortEnableCompleted(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4Decoder21onPortEnableCompletedEjb(void) {
    ALOGD("_ZN7android10AC4Decoder21onPortEnableCompletedEjb() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_fhcqmf_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_fhcqmf_query_scratch(void) {
    ALOGD("AC4DEC_ac4dap_fhcqmf_query_scratch() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD512 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD512 = NULL;

/* Demangled: AC4DEC_dap_mathlib_LfastrecipL */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_LfastrecipL(void) {
    ALOGD("AC4DEC_dap_mathlib_LfastrecipL() called");
    return 0;
}

/* Exported Object: DLB_MFB_P10KM_P4_319SC_256M */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_P10KM_P4_319SC_256M = NULL;

/* Exported Object: AC4DEC_tree_huff_code_ajcc_dry_fine_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajcc_dry_fine_f0 = NULL;

/* Demangled: DLB_r4_fft_640_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_640_s(void) {
    ALOGD("DLB_r4_fft_640_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_8 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_8(void) {
    ALOGD("DLB_r4_fft_8() called");
    return 0;
}

/* Demangled: AC4DEC_de_il_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_il_process(void) {
    ALOGD("AC4DEC_de_il_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L72_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L72_1 = NULL;

/* Exported Object: AC4DEC_rsrcdec_coeff_num_per_phase_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_rsrcdec_coeff_num_per_phase_tab = NULL;

/* Exported Object: AC4DEC_a_isf_bh_9_5_0_0_reorder */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_isf_bh_9_5_0_0_reorder = NULL;

/* Demangled: DLB_r4_inv_fft_160_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_160_s(void) {
    ALOGD("DLB_r4_inv_fft_160_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_4096_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_4096_s(void) {
    ALOGD("DLB_r4_fft_4096_s() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_get_presentation_info_pvt */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_get_presentation_info_pvt(void) {
    ALOGD("AC4DEC_ac4toc_get_presentation_info_pvt() called");
    return 0;
}

/* Demangled: AC4DEC_cx_allpass_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cx_allpass_process(void) {
    ALOGD("AC4DEC_cx_allpass_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L72_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L72_2 = NULL;

/* Exported Object: AC4DEC_tree_huff_code_ajcc_dry_fine_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajcc_dry_fine_dt = NULL;

/* Exported Object: AC4DEC_a_isf_bh_7_5_3_0_reorder */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_isf_bh_7_5_3_0_reorder = NULL;

/* Demangled: AC4DEC_evo_combine_md_sets */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_combine_md_sets(void) {
    ALOGD("AC4DEC_evo_combine_md_sets() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_NGCS_SEG_CHANNELS_2TO5CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_NGCS_SEG_CHANNELS_2TO5CH = NULL;

/* Demangled: AC4DEC_ac4dec_get_external_frame_rate_index */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_get_external_frame_rate_index(void) {
    ALOGD("AC4DEC_ac4dec_get_external_frame_rate_index() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L128 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L128 = NULL;

/* Demangled: AC4DEC_ssf_create_c */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssf_create_c(void) {
    ALOGD("AC4DEC_ssf_create_c() called");
    return 0;
}

/* Demangled: AC4DEC_evo_get_md_validity_md_set */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_get_md_validity_md_set(void) {
    ALOGD("AC4DEC_evo_get_md_validity_md_set() called");
    return 0;
}

/* Demangled: AC4DEC_bm_channel_assignment_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_bm_channel_assignment_init(void) {
    ALOGD("AC4DEC_bm_channel_assignment_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L8_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L8_1 = NULL;

/* Demangled: AC4DEC_dap_mathlib_clvecdl_clear */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_clvecdl_clear(void) {
    ALOGD("AC4DEC_dap_mathlib_clvecdl_clear() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L8_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L8_2 = NULL;

/* Exported Object: AC4DEC_post_gain_sqrt_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_post_gain_sqrt_tab = NULL;

/* Exported Object: AC4DEC_ap_dvlim_coefs_32 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ap_dvlim_coefs_32 = NULL;

/* Demangled: AC4DEC_delay_line_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_line_reset(void) {
    ALOGD("AC4DEC_delay_line_reset() called");
    return 0;
}

/* Demangled: DLB_r4_fft_480_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_480_s(void) {
    ALOGD("DLB_r4_fft_480_s() called");
    return 0;
}

/* Exported Object: vtable for dolby::DlbGenClass2 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby12DlbGenClass2E = NULL;

/* Demangled: AC4DEC_oamdi_has_oa_element_bed_object */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_has_oa_element_bed_object(void) {
    ALOGD("AC4DEC_oamdi_has_oa_element_bed_object() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_get_dmx_info */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_get_dmx_info(void) {
    ALOGD("dlb_ac4dec_v2_dec_get_dmx_info() called");
    return 0;
}

/* Demangled: AC4DEC_dapil_set_default_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dapil_set_default_config(void) {
    ALOGD("AC4DEC_dapil_set_default_config() called");
    return 0;
}

/* Demangled: AC4DEC_size_panner_fade_out_sources_inside */
extern "C" __attribute__((visibility("default"))) int AC4DEC_size_panner_fade_out_sources_inside(void) {
    ALOGD("AC4DEC_size_panner_fade_out_sources_inside() called");
    return 0;
}

/* Demangled: dlb_dctII_scaled */
extern "C" __attribute__((visibility("default"))) int dlb_dctII_scaled(void) {
    ALOGD("dlb_dctII_scaled() called");
    return 0;
}

/* Demangled: DLB_r4_fft_2048_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_2048_s(void) {
    ALOGD("DLB_r4_fft_2048_s() called");
    return 0;
}

/* Demangled: android::AC4Decoder::xFerAC4Tables(tAc4DecoderTblParam_t, unsigned char*, unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4Decoder13xFerAC4TablesE21tAc4DecoderTblParam_tPhS2_S2_(void) {
    ALOGD("_ZN7android10AC4Decoder13xFerAC4TablesE21tAc4DecoderTblParam_tPhS2_S2_() called");
    return 0;
}

/* Demangled: AC4DEC_ade_il_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_il_close(void) {
    ALOGD("AC4DEC_ade_il_close() called");
    return 0;
}

/* Demangled: AC4DEC_cch_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_close(void) {
    ALOGD("AC4DEC_cch_close() called");
    return 0;
}

/* Demangled: AC4DEC_expd_gains_1ch_calc */
extern "C" __attribute__((visibility("default"))) int AC4DEC_expd_gains_1ch_calc(void) {
    ALOGD("AC4DEC_expd_gains_1ch_calc() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlULLLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlULLLL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlULLLL_strict() called");
    return 0;
}

/* Demangled: AC4DEC_dap_mathlib_clvec_CLmpyCLSIU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_clvec_CLmpyCLSIU_inplace_strict(void) {
    ALOGD("AC4DEC_dap_mathlib_clvec_CLmpyCLSIU_inplace_strict() called");
    return 0;
}

/* Demangled: AC4DEC_interpol_mult_UM_1ch_no_decorr */
extern "C" __attribute__((visibility("default"))) int AC4DEC_interpol_mult_UM_1ch_no_decorr(void) {
    ALOGD("AC4DEC_interpol_mult_UM_1ch_no_decorr() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD192_alpha3_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD192_alpha3_0 = NULL;

/* Demangled: AC4DEC_oamdi_has_oa_element_headphone */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_has_oa_element_headphone(void) {
    ALOGD("AC4DEC_oamdi_has_oa_element_headphone() called");
    return 0;
}

/* Demangled: DLB_vec_LshlLIU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LshlLIU_strict(void) {
    ALOGD("DLB_vec_LshlLIU_strict() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::SimpleSoftOMXComponent::PortInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE = NULL;

/* Demangled: AC4DEC_ims_il_ims_substream_idx_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ims_il_ims_substream_idx_get(void) {
    ALOGD("AC4DEC_ims_il_ims_substream_idx_get() called");
    return 0;
}

/* Demangled: dlb_cvec_Lmpy_conjLLIU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_cvec_Lmpy_conjLLIU_flex(void) {
    ALOGD("dlb_cvec_Lmpy_conjLLIU_flex() called");
    return 0;
}

/* Demangled: AC4DEC_ac4framer_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4framer_open(void) {
    ALOGD("AC4DEC_ac4framer_open() called");
    return 0;
}

/* Demangled: AC4DEC_fboar_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_fboar_query_scratch(void) {
    ALOGD("AC4DEC_fboar_query_scratch() called");
    return 0;
}

/* Demangled: AC4DEC_ims_il_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ims_il_reset(void) {
    ALOGD("AC4DEC_ims_il_reset() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD48_alpha6_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD48_alpha6_0 = NULL;

/* Demangled: DLB_blk_LLdeshuffleLL_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LLdeshuffleLL_inplace_strict(void) {
    ALOGD("DLB_blk_LLdeshuffleLL_inplace_strict() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_768 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_768(void) {
    ALOGD("dlb_fft_inv_scl_768() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_stats_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_stats_init(void) {
    ALOGD("AC4DEC_ngcs_stats_init() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_576 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_576(void) {
    ALOGD("dlb_fft_fwd_scl_576() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_2 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_2(void) {
    ALOGD("dlb_fft_fwd_scl_2() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_set_enable */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_set_enable(void) {
    ALOGD("AC4DEC_dvlim_set_enable() called");
    return 0;
}

/* Demangled: AC4DEC_dap_mathlib_Ppow4LP */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_Ppow4LP(void) {
    ALOGD("AC4DEC_dap_mathlib_Ppow4LP() called");
    return 0;
}

/* Demangled: AC4DEC_size_panner_get_gains */
extern "C" __attribute__((visibility("default"))) int AC4DEC_size_panner_get_gains(void) {
    ALOGD("AC4DEC_size_panner_get_gains() called");
    return 0;
}

/* Demangled: DLB_blk_LminLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LminLL_strict(void) {
    ALOGD("DLB_blk_LminLL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L192 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L192 = NULL;

/* Demangled: dlb_fft_fwd_scl_4 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_4(void) {
    ALOGD("dlb_fft_fwd_scl_4() called");
    return 0;
}

/* Demangled: AC4DEC_evo_unpack_payloads */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_unpack_payloads(void) {
    ALOGD("AC4DEC_evo_unpack_payloads() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L720 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L720 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L256 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L256 = NULL;

/* Demangled: DLB_r4_inv_fft_1024_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_1024_s(void) {
    ALOGD("DLB_r4_inv_fft_1024_s() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv1_dsmpL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv1_dsmpL_strict(void) {
    ALOGD("DLB_blk_Liir2ssv1_dsmpL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L24 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L24 = NULL;

/* Demangled: dlb_fft_fwd_scl_6 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_6(void) {
    ALOGD("dlb_fft_fwd_scl_6() called");
    return 0;
}

/* Demangled: AC4DEC_lvl_constrain_drc_scale */
extern "C" __attribute__((visibility("default"))) int AC4DEC_lvl_constrain_drc_scale(void) {
    ALOGD("AC4DEC_lvl_constrain_drc_scale() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_input_stage_set_default_toc_values */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_input_stage_set_default_toc_values(void) {
    ALOGD("AC4DEC_ac4dec_input_stage_set_default_toc_values() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_query_memory(void) {
    ALOGD("AC4DEC_dvlim_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_bitbuf_safe_read_long */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_safe_read_long(void) {
    ALOGD("AC4DEC_dlb_bitbuf_safe_read_long() called");
    return 0;
}

/* Demangled: DLB_unload_mfb_p10km_analysisL_filter_state */
extern "C" __attribute__((visibility("default"))) int DLB_unload_mfb_p10km_analysisL_filter_state(void) {
    ALOGD("DLB_unload_mfb_p10km_analysisL_filter_state() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_to_bitstream */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_to_bitstream(void) {
    ALOGD("AC4DEC_oamdi_to_bitstream() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_8 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_8(void) {
    ALOGD("dlb_fft_fwd_scl_8() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_output_stage_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_output_stage_close(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_output_stage_close() called");
    return 0;
}

/* Demangled: DLB_VLsquaredmagCLIU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_VLsquaredmagCLIU_strict(void) {
    ALOGD("DLB_VLsquaredmagCLIU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_144 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_144(void) {
    ALOGD("DLB_r4_fft_144() called");
    return 0;
}

/* Demangled: android::AC4Decoder::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4Decoder4stopEv(void) {
    ALOGD("_ZN7android10AC4Decoder4stopEv() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_bitbuf_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_read(void) {
    ALOGD("AC4DEC_dlb_bitbuf_read() called");
    return 0;
}

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_3_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_3_0 = NULL;

/* Demangled: AC4DEC_ajocdec_ajoc_de_max_gain_db_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_ajoc_de_max_gain_db_get(void) {
    ALOGD("AC4DEC_ajocdec_ajoc_de_max_gain_db_get() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_oa_element_headphone */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_oa_element_headphone(void) {
    ALOGD("AC4DEC_oamdi_get_oa_element_headphone() called");
    return 0;
}

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_3_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_3_1 = NULL;

/* Demangled: dlb_ac4dec_v2_dec_get_dialog_enhancement_gain */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_get_dialog_enhancement_gain(void) {
    ALOGD("dlb_ac4dec_v2_dec_get_dialog_enhancement_gain() called");
    return 0;
}

/* Demangled: AC4DEC_compute_tna_filter_coefficients */
extern "C" __attribute__((visibility("default"))) int AC4DEC_compute_tna_filter_coefficients(void) {
    ALOGD("AC4DEC_compute_tna_filter_coefficients() called");
    return 0;
}

/* Demangled: AC4DEC_rsrc_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rsrc_query_mem(void) {
    ALOGD("AC4DEC_rsrc_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_bitstream_size */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_bitstream_size(void) {
    ALOGD("AC4DEC_oamdi_get_bitstream_size() called");
    return 0;
}

/* Demangled: dlb_blk_Lmix_shlULLLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmix_shlULLLL_flex(void) {
    ALOGD("dlb_blk_Lmix_shlULLLL_flex() called");
    return 0;
}

/* Demangled: _dlb_ldct2_unscaled_iplu */
extern "C" __attribute__((visibility("default"))) int _dlb_ldct2_unscaled_iplu(void) {
    ALOGD("_dlb_ldct2_unscaled_iplu() called");
    return 0;
}

/* Demangled: DLB_r4_fft_36_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_36_s(void) {
    ALOGD("DLB_r4_fft_36_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_288 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_288(void) {
    ALOGD("dlb_fft_fwd_usc_288() called");
    return 0;
}

/* Demangled: dolby::DlbGenClass2::DlbGenClass2() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DlbGenClass2C2Ev(void) {
    ALOGD("_ZN5dolby12DlbGenClass2C2Ev() called");
    return 0;
}

/* Demangled: AC4DEC_sf_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sf_open(void) {
    ALOGD("AC4DEC_sf_open() called");
    return 0;
}

/* Demangled: AC4DEC_metadata_delay_get_max_num_elements */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_get_max_num_elements(void) {
    ALOGD("AC4DEC_metadata_delay_get_max_num_elements() called");
    return 0;
}

/* Demangled: DLB_blk_LcmpLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LcmpLL_strict(void) {
    ALOGD("DLB_blk_LcmpLL_strict() called");
    return 0;
}

/* Demangled: AC4DEC_dap_mathlib_LpowinvLP */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_LpowinvLP(void) {
    ALOGD("AC4DEC_dap_mathlib_LpowinvLP() called");
    return 0;
}

/* Demangled: AC4DEC_acpldec_2ch_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_2ch_init(void) {
    ALOGD("AC4DEC_acpldec_2ch_init() called");
    return 0;
}

/* Demangled: AC4DEC_ajoc_mdd_generate_dummy_de_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajoc_mdd_generate_dummy_de_data(void) {
    ALOGD("AC4DEC_ajoc_mdd_generate_dummy_de_data() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisS_close */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_close(void) {
    ALOGD("DLB_qmf_synthesisS_close() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_input_stage_count_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_input_stage_count_mem(void) {
    ALOGD("AC4DEC_ac4dec_input_stage_count_mem() called");
    return 0;
}

/* Demangled: AC4DEC_oaril_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oaril_open(void) {
    ALOGD("AC4DEC_oaril_open() called");
    return 0;
}

/* Demangled: DLB_r4_fft_40_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_40_s(void) {
    ALOGD("DLB_r4_fft_40_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_8_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_8_s(void) {
    ALOGD("DLB_r4_fft_8_s() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_reader_get_emdf_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_get_emdf_info(void) {
    ALOGD("AC4DEC_ac4toc_reader_get_emdf_info() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L960 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L960 = NULL;

/* Demangled: AC4DEC_dlb_bitbuf_get_abs_pos */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_get_abs_pos(void) {
    ALOGD("AC4DEC_dlb_bitbuf_get_abs_pos() called");
    return 0;
}

/* Demangled: AC4DEC_ldn_specific_loudness_transform */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ldn_specific_loudness_transform(void) {
    ALOGD("AC4DEC_ldn_specific_loudness_transform() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_dequantize_sig_1ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_dequantize_sig_1ch(void) {
    ALOGD("AC4DEC_aspx_dequantize_sig_1ch() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_get_acpl_data_index */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_get_acpl_data_index(void) {
    ALOGD("AC4DEC_ac4dec_get_acpl_data_index() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_get_active_channel_config */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_get_active_channel_config(void) {
    ALOGD("dlb_ac4dec_v2_dec_get_active_channel_config() called");
    return 0;
}

/* Demangled: AC4DEC_shared_mem_alloc */
extern "C" __attribute__((visibility("default"))) int AC4DEC_shared_mem_alloc(void) {
    ALOGD("AC4DEC_shared_mem_alloc() called");
    return 0;
}

/* Demangled: AC4DEC_loudness_info_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_loudness_info_init(void) {
    ALOGD("AC4DEC_loudness_info_init() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD2048 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD2048 = NULL;

/* Demangled: AC4DEC_dvlim_set_target_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_set_target_gain(void) {
    ALOGD("AC4DEC_dvlim_set_target_gain() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_object_dialog_indication */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_object_dialog_indication(void) {
    ALOGD("AC4DEC_oamdi_get_object_dialog_indication() called");
    return 0;
}

/* Demangled: DLB_r4_fft_320 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_320(void) {
    ALOGD("DLB_r4_fft_320() called");
    return 0;
}

/* Demangled: dolby::DlbGenClass2::check() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DlbGenClass25checkEv(void) {
    ALOGD("_ZN5dolby12DlbGenClass25checkEv() called");
    return 0;
}

/* Exported Object: AC4DEC_P_NGCS_SEG_RANGE_2TO5CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_P_NGCS_SEG_RANGE_2TO5CH = NULL;

/* Demangled: AC4DEC_surround_compressor_compute_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_surround_compressor_compute_gain(void) {
    ALOGD("AC4DEC_surround_compressor_compute_gain() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_set_substream_signal_representation */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_set_substream_signal_representation(void) {
    ALOGD("AC4DEC_ac4toc_set_substream_signal_representation() called");
    return 0;
}

/* Demangled: AC4DEC_delay_line_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_line_init(void) {
    ALOGD("AC4DEC_delay_line_init() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_speaker_virtualizer_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_speaker_virtualizer_process(void) {
    ALOGD("AC4DEC_ac4dap_speaker_virtualizer_process() called");
    return 0;
}

/* Demangled: AC4DEC_aspxdec_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspxdec_open(void) {
    ALOGD("AC4DEC_aspxdec_open() called");
    return 0;
}

/* Demangled: AC4DEC_ssf_ext_find_nt */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssf_ext_find_nt(void) {
    ALOGD("AC4DEC_ssf_ext_find_nt() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_set_limiter_enable */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_set_limiter_enable(void) {
    ALOGD("dlb_ac4dec_v2_dec_set_limiter_enable() called");
    return 0;
}

/* Demangled: AC4DEC_sv_dual_end_update */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sv_dual_end_update(void) {
    ALOGD("AC4DEC_sv_dual_end_update() called");
    return 0;
}

/* Demangled: AC4DEC_sv_dual_end_xtc_deq_slot_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sv_dual_end_xtc_deq_slot_process(void) {
    ALOGD("AC4DEC_sv_dual_end_xtc_deq_slot_process() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_bitbuf_write_long */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_write_long(void) {
    ALOGD("AC4DEC_dlb_bitbuf_write_long() called");
    return 0;
}

/* Exported Object: AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_130_X_ON_10 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_130_X_ON_10 = NULL;

/* Demangled: AC4DEC_band_smoother_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_band_smoother_process(void) {
    ALOGD("AC4DEC_band_smoother_process() called");
    return 0;
}

/* Exported Object: AC4DEC_a_ac4_to_oamdi_trim_config */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_ac4_to_oamdi_trim_config = NULL;

/* Demangled: AC4DEC_oamdi_get_all_obj_md */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_all_obj_md(void) {
    ALOGD("AC4DEC_oamdi_get_all_obj_md() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD1024_alpha3_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD1024_alpha3_0 = NULL;

/* Demangled: ac4dec_wrapper_addbytes */
extern "C" __attribute__((visibility("default"))) int ac4dec_wrapper_addbytes(void) {
    ALOGD("ac4dec_wrapper_addbytes() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_feed */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_feed(void) {
    ALOGD("dlb_ac4dec_v2_feed() called");
    return 0;
}

/* Demangled: AC4DEC_ajocdec_oar_merge */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajocdec_oar_merge(void) {
    ALOGD("AC4DEC_ajocdec_oar_merge() called");
    return 0;
}

/* Demangled: DLB_blk_LintegrateL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LintegrateL_strict(void) {
    ALOGD("DLB_blk_LintegrateL_strict() called");
    return 0;
}

/* Demangled: AC4DEC_lvl_smooth_scale_band */
extern "C" __attribute__((visibility("default"))) int AC4DEC_lvl_smooth_scale_band(void) {
    ALOGD("AC4DEC_lvl_smooth_scale_band() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_DIFFUSE_NO_DECORR_2TO6CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_DIFFUSE_NO_DECORR_2TO6CH = NULL;

/* Exported Object: AC4DEC_A_NGCS_SEG_RANGE_2TO6CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_NGCS_SEG_RANGE_2TO6CH = NULL;

/* Demangled: AC4DEC_ajccdec_process_core_decode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_process_core_decode(void) {
    ALOGD("AC4DEC_ajccdec_process_core_decode() called");
    return 0;
}

/* Exported Object: AC4DEC_DAP_MATHLIB_LOGTYPE_20_LOG_10_ON_256 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DAP_MATHLIB_LOGTYPE_20_LOG_10_ON_256 = NULL;

/* Exported Object: AC4DEC_ap_dvlim_coefs_40 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ap_dvlim_coefs_40 = NULL;

/* Demangled: AC4DEC_ngcs_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_query_scratch(void) {
    ALOGD("AC4DEC_ngcs_query_scratch() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_set_sample_rate */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_set_sample_rate(void) {
    ALOGD("AC4DEC_dvlim_set_sample_rate() called");
    return 0;
}

/* Demangled: dlb_ac4dec_set_session_seed */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_set_session_seed(void) {
    ALOGD("dlb_ac4dec_set_session_seed() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L240 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L240 = NULL;

/* Demangled: AC4DEC_volume_and_ieq_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_volume_and_ieq_query_memory(void) {
    ALOGD("AC4DEC_volume_and_ieq_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_band_config_decode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_band_config_decode(void) {
    ALOGD("AC4DEC_imsdec_band_config_decode() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_640 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_640(void) {
    ALOGD("dlb_fft_fwd_usc_640() called");
    return 0;
}

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR48KHZ_BS192S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR48KHZ_BS192S = NULL;

/* Demangled: AC4DEC_ac4dap_log_content_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_log_content_process(void) {
    ALOGD("AC4DEC_ac4dap_log_content_process() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_bitbuf_safe_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_safe_read(void) {
    ALOGD("AC4DEC_dlb_bitbuf_safe_read() called");
    return 0;
}

/* Demangled: AC4DEC_volume_and_ieq_preset_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_volume_and_ieq_preset_query_memory(void) {
    ALOGD("AC4DEC_volume_and_ieq_preset_query_memory() called");
    return 0;
}

/* Demangled: DLB_r4_fft_384_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_384_s(void) {
    ALOGD("DLB_r4_fft_384_s() called");
    return 0;
}

/* Demangled: AC4DEC_delay_line_lfract_size_query */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_line_lfract_size_query(void) {
    ALOGD("AC4DEC_delay_line_lfract_size_query() called");
    return 0;
}

/* Demangled: AC4DEC_oamd_framer_get_metadata */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_framer_get_metadata(void) {
    ALOGD("AC4DEC_oamd_framer_get_metadata() called");
    return 0;
}

/* Exported Object: AC4DEC_a_isf_bh_7_3_0_0_decode */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_isf_bh_7_3_0_0_decode = NULL;

/* Demangled: AC4DEC_evo_parse_payloads */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_parse_payloads(void) {
    ALOGD("AC4DEC_evo_parse_payloads() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_query_output_configuration */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_query_output_configuration(void) {
    ALOGD("AC4DEC_ac4dap_query_output_configuration() called");
    return 0;
}

/* Demangled: AC4DEC_speaker_config_speaker_is_present */
extern "C" __attribute__((visibility("default"))) int AC4DEC_speaker_config_speaker_is_present(void) {
    ALOGD("AC4DEC_speaker_config_speaker_is_present() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_round_from_Q15_away_from_zero */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_round_from_Q15_away_from_zero(void) {
    ALOGD("AC4DEC_oamdi_round_from_Q15_away_from_zero() called");
    return 0;
}

/* Demangled: DLB_vec_UnormLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_UnormLU_strict(void) {
    ALOGD("DLB_vec_UnormLU_strict() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_input_stage_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_input_stage_close(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_input_stage_close() called");
    return 0;
}

/* Demangled: AC4DEC_metadata_delay_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_query_mem(void) {
    ALOGD("AC4DEC_metadata_delay_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_loudness_info_update */
extern "C" __attribute__((visibility("default"))) int AC4DEC_loudness_info_update(void) {
    ALOGD("AC4DEC_loudness_info_update() called");
    return 0;
}

/* Demangled: AC4DEC_room_config_get_speaker_plane */
extern "C" __attribute__((visibility("default"))) int AC4DEC_room_config_get_speaker_plane(void) {
    ALOGD("AC4DEC_room_config_get_speaker_plane() called");
    return 0;
}

/* Exported Object: AC4DEC_ims_sv_xtc_mtx_coeff_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ims_sv_xtc_mtx_coeff_tab = NULL;

/* Demangled: DLB_r4_fft_96_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_96_s(void) {
    ALOGD("DLB_r4_fft_96_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_480 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_480(void) {
    ALOGD("dlb_fft_inv_usc_480() called");
    return 0;
}

/* Exported Object: AC4DEC_ajoc_de_dlg_dmx_coeff_quant_table */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajoc_de_dlg_dmx_coeff_quant_table = NULL;

/* Exported Object: AC4DEC_tree_joc_huff_code_7ch_pos_idx_sparse */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_joc_huff_code_7ch_pos_idx_sparse = NULL;

/* Demangled: AC4DEC_ac4dap_log_content_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_log_content_query_memory(void) {
    ALOGD("AC4DEC_ac4dap_log_content_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_bf1_fdn_get_write_pointer */
extern "C" __attribute__((visibility("default"))) int AC4DEC_bf1_fdn_get_write_pointer(void) {
    ALOGD("AC4DEC_bf1_fdn_get_write_pointer() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_beta_coarse_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_beta_coarse_df = NULL;

/* Demangled: AC4DEC_room_config_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_room_config_init(void) {
    ALOGD("AC4DEC_room_config_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L30 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L30 = NULL;

/* Exported Object: AC4DEC_acpl_num_param_bands */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_acpl_num_param_bands = NULL;

/* Demangled: AC4DEC_oamd_trans_output_compare */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_trans_output_compare(void) {
    ALOGD("AC4DEC_oamd_trans_output_compare() called");
    return 0;
}

/* Demangled: AC4DEC_bm_channel_assignment */
extern "C" __attribute__((visibility("default"))) int AC4DEC_bm_channel_assignment(void) {
    ALOGD("AC4DEC_bm_channel_assignment() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L768_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L768_1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L32 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L32 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L768_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L768_2 = NULL;

/* Demangled: AC4DEC_oamd_common_data_copy */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_common_data_copy(void) {
    ALOGD("AC4DEC_oamd_common_data_copy() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dsp_CLmpy_shlCLSIU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dsp_CLmpy_shlCLSIU_inplace_strict(void) {
    ALOGD("AC4DEC_ac4dsp_CLmpy_shlCLSIU_inplace_strict() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_set_has_oa_element_dimensional_trim */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_set_has_oa_element_dimensional_trim(void) {
    ALOGD("AC4DEC_oamdi_set_has_oa_element_dimensional_trim() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD128_alpha5_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD128_alpha5_0 = NULL;

/* Demangled: AC4DEC_max_trim_compute */
extern "C" __attribute__((visibility("default"))) int AC4DEC_max_trim_compute(void) {
    ALOGD("AC4DEC_max_trim_compute() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_960 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_960(void) {
    ALOGD("DLB_r4_inv_fft_960() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: AC4DEC_emdf_mdd_generate_dummy_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_mdd_generate_dummy_data(void) {
    ALOGD("AC4DEC_emdf_mdd_generate_dummy_data() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajcc_wet_coarse_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajcc_wet_coarse_df = NULL;

/* Exported Object: AC4DEC_WindowKBD30_alpha6_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD30_alpha6_0 = NULL;

/* Demangled: AC4DEC_evo_variable_bits_size */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_variable_bits_size(void) {
    ALOGD("AC4DEC_evo_variable_bits_size() called");
    return 0;
}

/* Demangled: dlb_blk_LabsL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LabsL_flex(void) {
    ALOGD("dlb_blk_LabsL_flex() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv2L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv2L_strict(void) {
    ALOGD("DLB_blk_Liir2ssv2L_strict() called");
    return 0;
}

/* Demangled: AC4DEC_phase90_filter_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_phase90_filter_query_scratch(void) {
    ALOGD("AC4DEC_phase90_filter_query_scratch() called");
    return 0;
}

/* Demangled: AC4DEC_mult_UM_2ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_mult_UM_2ch(void) {
    ALOGD("AC4DEC_mult_UM_2ch() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L45_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L45_cos = NULL;

/* Demangled: AC4DEC_metadata_mdd_generate_dummy_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_mdd_generate_dummy_data(void) {
    ALOGD("AC4DEC_metadata_mdd_generate_dummy_data() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L36 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L36 = NULL;

/* Demangled: AC4DEC_ac4toc_set_decodable_flag */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_set_decodable_flag(void) {
    ALOGD("AC4DEC_ac4toc_set_decodable_flag() called");
    return 0;
}

/* Demangled: AC4DEC_gain_calc_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_gain_calc_init(void) {
    ALOGD("AC4DEC_gain_calc_init() called");
    return 0;
}

/* Demangled: AC4DEC_lvl_drc_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_lvl_drc_process(void) {
    ALOGD("AC4DEC_lvl_drc_process() called");
    return 0;
}

/* Demangled: AC4DEC_oarq_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oarq_query_memory(void) {
    ALOGD("AC4DEC_oarq_query_memory() called");
    return 0;
}

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR44KHZ1_BS384S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR44KHZ1_BS384S = NULL;

/* Exported Object: AC4DEC_P_PHASE_SHIFT_2TO5CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_P_PHASE_SHIFT_2TO5CH = NULL;

/* Demangled: AC4DEC_lvl_noisegate_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_lvl_noisegate_process(void) {
    ALOGD("AC4DEC_lvl_noisegate_process() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_NGCS_SEG_STEERING_5TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_NGCS_SEG_STEERING_5TO7CH = NULL;

/* Demangled: AC4DEC_ac4toc_oamd_reader_parse_common_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_oamd_reader_parse_common_data(void) {
    ALOGD("AC4DEC_ac4toc_oamd_reader_parse_common_data() called");
    return 0;
}

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR44KHZ1_BS384S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR44KHZ1_BS384S = NULL;

/* Exported Object: AC4DEC_PA_DIFFUSE_NO_DECORR_2TO4CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_DIFFUSE_NO_DECORR_2TO4CH = NULL;

/* Demangled: AC4DEC_mdct_to_qmf_alloc */
extern "C" __attribute__((visibility("default"))) int AC4DEC_mdct_to_qmf_alloc(void) {
    ALOGD("AC4DEC_mdct_to_qmf_alloc() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_8 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_8 = NULL;

/* Demangled: AC4DEC_asa_reset_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_asa_reset_query_memory(void) {
    ALOGD("AC4DEC_asa_reset_query_memory() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L240_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L240_1 = NULL;

/* Demangled: AC4DEC_omg_trim_manual_gain_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_omg_trim_manual_gain_get(void) {
    ALOGD("AC4DEC_omg_trim_manual_gain_get() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisS_set_slot_increment */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisS_set_slot_increment(void) {
    ALOGD("DLB_qmf_analysisS_set_slot_increment() called");
    return 0;
}

/* Demangled: createSoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L12 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L12 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L240_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L240_2 = NULL;

/* Demangled: AC4DEC_oamdi_get_oa_element_bed_object_read_only */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_oa_element_bed_object_read_only(void) {
    ALOGD("AC4DEC_oamdi_get_oa_element_bed_object_read_only() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_beta_coarse_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_beta_coarse_f0 = NULL;

/* Demangled: AC4DEC_bed_mixer_program_set */
extern "C" __attribute__((visibility("default"))) int AC4DEC_bed_mixer_program_set(void) {
    ALOGD("AC4DEC_bed_mixer_program_set() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisS_close */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisS_close(void) {
    ALOGD("DLB_qmf_analysisS_close() called");
    return 0;
}

/* Demangled: AC4DEC_imdct_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imdct_open(void) {
    ALOGD("AC4DEC_imdct_open() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_input_stage_process_part_1 */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_input_stage_process_part_1(void) {
    ALOGD("AC4DEC_ac4dec_input_stage_process_part_1() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_dimensional_trim_set_trim_bypass */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_dimensional_trim_set_trim_bypass(void) {
    ALOGD("AC4DEC_oamdi_dimensional_trim_set_trim_bypass() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_log_content_rebuild_dv */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_log_content_rebuild_dv(void) {
    ALOGD("AC4DEC_ac4dap_log_content_rebuild_dv() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_input_stage_process_part_2 */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_input_stage_process_part_2(void) {
    ALOGD("AC4DEC_ac4dec_input_stage_process_part_2() called");
    return 0;
}

/* Demangled: AC4DEC_get_toc_info_from_current_frame */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_toc_info_from_current_frame(void) {
    ALOGD("AC4DEC_get_toc_info_from_current_frame() called");
    return 0;
}

/* Demangled: AC4DEC_pcm_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_pcm_query_mem(void) {
    ALOGD("AC4DEC_pcm_query_mem() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_acpl_beta_coarse_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_acpl_beta_coarse_dt = NULL;

/* Demangled: DLB_r4_rsplit_fft_nn */
extern "C" __attribute__((visibility("default"))) int DLB_r4_rsplit_fft_nn(void) {
    ALOGD("DLB_r4_rsplit_fft_nn() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_768 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_768(void) {
    ALOGD("dlb_fft_fwd_scl_768() called");
    return 0;
}

/* Exported Object: DLB_MFB_P10KM_P4_319SC_128M */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_P10KM_P4_319SC_128M = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L15 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L15 = NULL;

/* Demangled: AC4DEC_ac4dec_input_stage_process_setup */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_input_stage_process_setup(void) {
    ALOGD("AC4DEC_ac4dec_input_stage_process_setup() called");
    return 0;
}

/* Exported Object: AC4DEC_DELTA_SIZE_SAMPLES */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DELTA_SIZE_SAMPLES = NULL;

/* Demangled: DLB_r4_inv_fft_240 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_240(void) {
    ALOGD("DLB_r4_inv_fft_240() called");
    return 0;
}

/* Demangled: dolby::Ac4DecClient::~Ac4DecClient() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12Ac4DecClientD1Ev(void) {
    ALOGD("_ZN5dolby12Ac4DecClientD1Ev() called");
    return 0;
}

/* Demangled: AC4DEC_ajccdec_interpolate_update */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_interpolate_update(void) {
    ALOGD("AC4DEC_ajccdec_interpolate_update() called");
    return 0;
}

/* Demangled: AC4DEC_evo_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_query_mem(void) {
    ALOGD("AC4DEC_evo_query_mem() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L16 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L16 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L384 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L384 = NULL;

/* Demangled: dlb_fft_inv_scl_12 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_12(void) {
    ALOGD("dlb_fft_inv_scl_12() called");
    return 0;
}

/* Demangled: ac4dec_wrapper_query_memory */
extern "C" __attribute__((visibility("default"))) int ac4dec_wrapper_query_memory(void) {
    ALOGD("ac4dec_wrapper_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_oaril_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oaril_init(void) {
    ALOGD("AC4DEC_oaril_init() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajcc_wet_coarse_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajcc_wet_coarse_f0 = NULL;

/* Exported Object: AC4DEC_A_ROOM_CONFIG_SPKS_BACK_ALT */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_ROOM_CONFIG_SPKS_BACK_ALT = NULL;

/* Demangled: AC4DEC_asa_event_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_asa_event_query_memory(void) {
    ALOGD("AC4DEC_asa_event_query_memory() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_asf */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_asf = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L144 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L144 = NULL;

/* Demangled: DLB_blk_Liir1L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1L_strict(void) {
    ALOGD("DLB_blk_Liir1L_strict() called");
    return 0;
}

/* Demangled: dlb_vec_UnormLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_UnormLU_flex(void) {
    ALOGD("dlb_vec_UnormLU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_128_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_128_s(void) {
    ALOGD("DLB_r4_inv_fft_128_s() called");
    return 0;
}

/* Demangled: dolby::Ac4DecClient::ac4dec_flush() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12Ac4DecClient12ac4dec_flushEv(void) {
    ALOGD("_ZN5dolby12Ac4DecClient12ac4dec_flushEv() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_query_mem */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_query_mem(void) {
    ALOGD("dlb_ac4dec_v2_query_mem() called");
    return 0;
}

/* Exported Object: AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_130_X_ON_20 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_130_X_ON_20 = NULL;

/* Demangled: AC4DEC_decoder_set_limiter_enable */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_set_limiter_enable(void) {
    ALOGD("AC4DEC_decoder_set_limiter_enable() called");
    return 0;
}

/* Demangled: dlb_qmf_synthesisL_open */
extern "C" __attribute__((visibility("default"))) int dlb_qmf_synthesisL_open(void) {
    ALOGD("dlb_qmf_synthesisL_open() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajcc_wet_coarse_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajcc_wet_coarse_dt = NULL;

/* Demangled: dlb_fft_inv_scl_15 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_15(void) {
    ALOGD("dlb_fft_inv_scl_15() called");
    return 0;
}

/* Demangled: AC4DEC_sv_coefs_gen */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sv_coefs_gen(void) {
    ALOGD("AC4DEC_sv_coefs_gen() called");
    return 0;
}

/* Demangled: AC4DEC_asa_event_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_asa_event_init(void) {
    ALOGD("AC4DEC_asa_event_init() called");
    return 0;
}

/* Demangled: AC4DEC_ade_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_query_mem(void) {
    ALOGD("AC4DEC_ade_query_mem() called");
    return 0;
}

/* Exported Object: AC4DEC_ap_dvlim_coefs_128 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ap_dvlim_coefs_128 = NULL;

/* Demangled: AC4DEC_dvlim_get_boost */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_get_boost(void) {
    ALOGD("AC4DEC_dvlim_get_boost() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_16 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_16(void) {
    ALOGD("dlb_fft_inv_scl_16() called");
    return 0;
}

/* Demangled: AC4DEC_emdf_get_buffer_size */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_get_buffer_size(void) {
    ALOGD("AC4DEC_emdf_get_buffer_size() called");
    return 0;
}

/* Demangled: dolby::Ac4DecClient::ac4dec_setup_table_param(unsigned char, unsigned char, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12Ac4DecClient24ac4dec_setup_table_paramEhhh(void) {
    ALOGD("_ZN5dolby12Ac4DecClient24ac4dec_setup_table_paramEhhh() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_bitbuf_skip */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_skip(void) {
    ALOGD("AC4DEC_dlb_bitbuf_skip() called");
    return 0;
}

/* Demangled: AC4DEC_arle_threshold_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_threshold_init(void) {
    ALOGD("AC4DEC_arle_threshold_init() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_get_active_presentation */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_get_active_presentation(void) {
    ALOGD("AC4DEC_decoder_get_active_presentation() called");
    return 0;
}

/* Exported Object: AC4DEC_ajcc_reciprocal_table */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajcc_reciprocal_table = NULL;

/* Exported Object: AC4DEC_IMS_BANDING_SCHEME_ANE_HR */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_IMS_BANDING_SCHEME_ANE_HR = NULL;

/* Demangled: AC4DEC_evo_pb_insert */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_pb_insert(void) {
    ALOGD("AC4DEC_evo_pb_insert() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1xL_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1xL_setup(void) {
    ALOGD("DLB_blk_Liir1xL_setup() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlaL */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlaL(void) {
    ALOGD("DLB_blk_Lmix_shlaL() called");
    return 0;
}

/* Demangled: AC4DEC_framer_round */
extern "C" __attribute__((visibility("default"))) int AC4DEC_framer_round(void) {
    ALOGD("AC4DEC_framer_round() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_diffuse_run */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_diffuse_run(void) {
    ALOGD("AC4DEC_ngcs_diffuse_run() called");
    return 0;
}

/* Demangled: AC4DEC_pcm_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_pcm_open(void) {
    ALOGD("AC4DEC_pcm_open() called");
    return 0;
}

/* Demangled: AC4DEC_ldn_norm_log_sone_add */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ldn_norm_log_sone_add(void) {
    ALOGD("AC4DEC_ldn_norm_log_sone_add() called");
    return 0;
}

/* Demangled: AC4DEC_mult_DM_2ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_mult_DM_2ch(void) {
    ALOGD("AC4DEC_mult_DM_2ch() called");
    return 0;
}

/* Demangled: DLB_CLmix4CL4SU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmix4CL4SU_strict(void) {
    ALOGD("DLB_CLmix4CL4SU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_1024 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_1024(void) {
    ALOGD("dlb_fft_fwd_usc_1024() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L320 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L320 = NULL;

/* Exported Object: AC4DEC_tree_huff_code_ajoc_wet_fine_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajoc_wet_fine_df = NULL;

/* Demangled: AC4DEC_surround_compressor_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_surround_compressor_process(void) {
    ALOGD("AC4DEC_surround_compressor_process() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_get_hsf_ext_substream_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_get_hsf_ext_substream_info(void) {
    ALOGD("AC4DEC_ac4toc_get_hsf_ext_substream_info() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_query_memory(void) {
    ALOGD("AC4DEC_hp_height_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_bf1_fdn_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_bf1_fdn_process(void) {
    ALOGD("AC4DEC_bf1_fdn_process() called");
    return 0;
}

/* Exported Object: AC4DEC_AGC_MIN */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AGC_MIN = NULL;

/* Demangled: AC4DEC_pcm_get_limiter_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_pcm_get_limiter_gain(void) {
    ALOGD("AC4DEC_pcm_get_limiter_gain() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD720_alpha4_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD720_alpha4_0 = NULL;

/* Demangled: DLB_r4_fft_288_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_288_s(void) {
    ALOGD("DLB_r4_fft_288_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_512 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_512(void) {
    ALOGD("DLB_r4_fft_512() called");
    return 0;
}

/* Demangled: AC4DEC_intelligent_eq_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_intelligent_eq_init(void) {
    ALOGD("AC4DEC_intelligent_eq_init() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_output_stage_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_output_stage_open(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_output_stage_open() called");
    return 0;
}

/* Exported Object: AC4DEC_a_dvlim_win_128 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_dvlim_win_128 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L256 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L256 = NULL;

/* Demangled: AC4DEC_arle_distortion_get_band_masking_factor */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_distortion_get_band_masking_factor(void) {
    ALOGD("AC4DEC_arle_distortion_get_band_masking_factor() called");
    return 0;
}

/* Exported Object: AC4DEC_DAP_MATHLIB_LOGTYPE_10_LOG_10_ON_130 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DAP_MATHLIB_LOGTYPE_10_LOG_10_ON_130 = NULL;

/* Demangled: AC4DEC_evo_calculate_pcm_protection */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_calculate_pcm_protection(void) {
    ALOGD("AC4DEC_evo_calculate_pcm_protection() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_512_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_512_s(void) {
    ALOGD("DLB_r4_inv_fft_512_s() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_get_version */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_get_version(void) {
    ALOGD("AC4DEC_ac4dap_get_version() called");
    return 0;
}

/* Demangled: AC4DEC_metadata_delay_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_reset(void) {
    ALOGD("AC4DEC_metadata_delay_reset() called");
    return 0;
}

/* Exported Object: AC4DEC_a_b_duplicate_col */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_b_duplicate_col = NULL;

/* Exported Object: AC4DEC_A_ROOM_CONFIG_SPKS_HEIGHTS */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_ROOM_CONFIG_SPKS_HEIGHTS = NULL;

/* Demangled: AC4DEC_speaker_config_mask_spkrs */
extern "C" __attribute__((visibility("default"))) int AC4DEC_speaker_config_mask_spkrs(void) {
    ALOGD("AC4DEC_speaker_config_mask_spkrs() called");
    return 0;
}

/* Demangled: DLB_hybrid_synthesisCL_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_synthesisCL_get_delay(void) {
    ALOGD("DLB_hybrid_synthesisCL_get_delay() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_reader_get_presentation_selection_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_get_presentation_selection_info(void) {
    ALOGD("AC4DEC_ac4toc_reader_get_presentation_selection_info() called");
    return 0;
}

/* Demangled: AC4DEC_arle_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_process(void) {
    ALOGD("AC4DEC_arle_process() called");
    return 0;
}

/* Demangled: AC4DEC_ac4parser_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4parser_close(void) {
    ALOGD("AC4DEC_ac4parser_close() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_64_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_64_s(void) {
    ALOGD("DLB_r4_inv_fft_64_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_120 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_120(void) {
    ALOGD("dlb_fft_inv_usc_120() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisS_set_slot_increment */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_set_slot_increment(void) {
    ALOGD("DLB_qmf_synthesisS_set_slot_increment() called");
    return 0;
}

/* Exported Object: AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR46KHZ08 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR46KHZ08 = NULL;

/* Demangled: AC4DEC_arle_set_mode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_set_mode(void) {
    ALOGD("AC4DEC_arle_set_mode() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_NGCS_SEG_CHANNELS_2TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_NGCS_SEG_CHANNELS_2TO7CH = NULL;

/* Exported Object: AC4DEC_offsets_db_to_lin */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_offsets_db_to_lin = NULL;

/* Demangled: DLB_time_end */
extern "C" __attribute__((visibility("default"))) int DLB_time_end(void) {
    ALOGD("DLB_time_end() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_query_memory(void) {
    ALOGD("AC4DEC_ngcs_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_point_panner_get_gains */
extern "C" __attribute__((visibility("default"))) int AC4DEC_point_panner_get_gains(void) {
    ALOGD("AC4DEC_point_panner_get_gains() called");
    return 0;
}

/* Demangled: DLB_r4_fft_160 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_160(void) {
    ALOGD("DLB_r4_fft_160() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_960 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_960(void) {
    ALOGD("dlb_fft_inv_scl_960() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency() called");
    return 0;
}

/* Demangled: AC4DEC_lvl_calc_drc_scale_min */
extern "C" __attribute__((visibility("default"))) int AC4DEC_lvl_calc_drc_scale_min(void) {
    ALOGD("AC4DEC_lvl_calc_drc_scale_min() called");
    return 0;
}

/* Demangled: AC4DEC_get_sfb_offset_tab */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_sfb_offset_tab(void) {
    ALOGD("AC4DEC_get_sfb_offset_tab() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_set_obj_info_blk */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_set_obj_info_blk(void) {
    ALOGD("AC4DEC_oamdi_set_obj_info_blk() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajoc_wet_fine_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajoc_wet_fine_f0 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L45 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L45 = NULL;

/* Demangled: AC4DEC_ac4dap_fhcqmf_query_delay */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_fhcqmf_query_delay(void) {
    ALOGD("AC4DEC_ac4dap_fhcqmf_query_delay() called");
    return 0;
}

/* Exported Object: AC4DEC_A_DV_SONE_TO_NORM_LOG_SONE */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_DV_SONE_TO_NORM_LOG_SONE = NULL;

/* Demangled: AC4DEC_de_il_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_il_query_mem(void) {
    ALOGD("AC4DEC_de_il_query_mem() called");
    return 0;
}

/* Demangled: DLB_blk_LmixLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixLL_strict(void) {
    ALOGD("DLB_blk_LmixLL_strict() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_get_next_presentation_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_get_next_presentation_info(void) {
    ALOGD("AC4DEC_ac4toc_get_next_presentation_info() called");
    return 0;
}

/* Demangled: AC4DEC_ade_il_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_il_query_mem(void) {
    ALOGD("AC4DEC_ade_il_query_mem() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajoc_wet_fine_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajoc_wet_fine_dt = NULL;

/* Demangled: dlb_vec_Lsum_sqrLUU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_Lsum_sqrLUU_flex(void) {
    ALOGD("dlb_vec_Lsum_sqrLUU_flex() called");
    return 0;
}

/* Demangled: AC4DEC_lb_bitbuf_fast_peek_long */
extern "C" __attribute__((visibility("default"))) int AC4DEC_lb_bitbuf_fast_peek_long(void) {
    ALOGD("AC4DEC_lb_bitbuf_fast_peek_long() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD192_alpha5_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD192_alpha5_0 = NULL;

/* Demangled: DLB_CLCLmix6CL12SU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLCLmix6CL12SU_strict(void) {
    ALOGD("DLB_CLCLmix6CL12SU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L48 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L48 = NULL;

/* Demangled: dlb_fft_inv_usc_128 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_128(void) {
    ALOGD("dlb_fft_inv_usc_128() called");
    return 0;
}

/* Exported Object: AC4DEC_IMS_BANDING_SCHEME_FDN_LR */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_IMS_BANDING_SCHEME_FDN_LR = NULL;

/* Demangled: AC4DEC_oamdi_dimensional_trim_less_than_equal_to_zero */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_dimensional_trim_less_than_equal_to_zero(void) {
    ALOGD("AC4DEC_oamdi_dimensional_trim_less_than_equal_to_zero() called");
    return 0;
}

/* Demangled: android::AC4Decoder::onQueueFilled(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4Decoder13onQueueFilledEj(void) {
    ALOGD("_ZN7android10AC4Decoder13onQueueFilledEj() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_get_frame_rate_multiply_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_get_frame_rate_multiply_info(void) {
    ALOGD("AC4DEC_ac4toc_get_frame_rate_multiply_info() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_DIFFUSE_DECORR_2TO4CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_DIFFUSE_DECORR_2TO4CH = NULL;

/* Demangled: DLB_r4_inv_fft_192_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_192_s(void) {
    ALOGD("DLB_r4_inv_fft_192_s() called");
    return 0;
}

/* Demangled: AC4DEC_agc_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_agc_reset(void) {
    ALOGD("AC4DEC_agc_reset() called");
    return 0;
}

/* Exported Object: AC4DEC_A_LDN_PF_AVG_EX_DB */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_LDN_PF_AVG_EX_DB = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L960_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L960_cos = NULL;

/* Demangled: dlb_fft_fwd_scl_12 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_12(void) {
    ALOGD("dlb_fft_fwd_scl_12() called");
    return 0;
}

/* Demangled: AC4DEC_calc_unquantized_position */
extern "C" __attribute__((visibility("default"))) int AC4DEC_calc_unquantized_position(void) {
    ALOGD("AC4DEC_calc_unquantized_position() called");
    return 0;
}

/* Exported Object: AC4DEC_A_LDN_SL_VALUES_BAND00 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_LDN_SL_VALUES_BAND00 = NULL;

/* Demangled: AC4DEC_aspx_tic_carry */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_tic_carry(void) {
    ALOGD("AC4DEC_aspx_tic_carry() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L144_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L144_1 = NULL;

/* Demangled: AC4DEC_oamt_count_number_of_object_types */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamt_count_number_of_object_types(void) {
    ALOGD("AC4DEC_oamt_count_number_of_object_types() called");
    return 0;
}

/* Demangled: dlb_vec_Sabs_maxSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_Sabs_maxSU_flex(void) {
    ALOGD("dlb_vec_Sabs_maxSU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_fft_12_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_12_s(void) {
    ALOGD("DLB_r4_fft_12_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_480 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_480(void) {
    ALOGD("dlb_fft_fwd_usc_480() called");
    return 0;
}

/* Demangled: AC4DEC_hist_get_num_vals_in_hist */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hist_get_num_vals_in_hist(void) {
    ALOGD("AC4DEC_hist_get_num_vals_in_hist() called");
    return 0;
}

/* Exported Object: AC4DEC_A_LDN_SL_VALUES_BAND01 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_LDN_SL_VALUES_BAND01 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L144_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L144_2 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L24 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L24 = NULL;

/* Exported Object: AC4DEC_tree_huff_code_aspx_env_balance_15_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_env_balance_15_df = NULL;

/* Demangled: dlb_BLmpy_scale_xBLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmpy_scale_xBLSU_flex(void) {
    ALOGD("dlb_BLmpy_scale_xBLSU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_15 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_15(void) {
    ALOGD("dlb_fft_fwd_scl_15() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_20 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_20(void) {
    ALOGD("dlb_fft_inv_scl_20() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_240 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_240(void) {
    ALOGD("dlb_fft_inv_scl_240() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_get_dialog_enhancement_limit */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_get_dialog_enhancement_limit(void) {
    ALOGD("dlb_ac4dec_v2_dec_get_dialog_enhancement_limit() called");
    return 0;
}

/* Exported Object: AC4DEC_A_LDN_SL_VALUES_BAND02 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_LDN_SL_VALUES_BAND02 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L16_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L16_cos = NULL;

/* Demangled: dlb_fft_fwd_scl_16 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_16(void) {
    ALOGD("dlb_fft_fwd_scl_16() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisS_init */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_init(void) {
    ALOGD("DLB_qmf_synthesisS_init() called");
    return 0;
}

/* Exported Object: AC4DEC_A_LDN_SL_VALUES_BAND03 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_LDN_SL_VALUES_BAND03 = NULL;

/* Demangled: AC4DEC_hp_height_reverb_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_reverb_query_memory(void) {
    ALOGD("AC4DEC_hp_height_reverb_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_anechoic_coefficients_decode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_anechoic_coefficients_decode(void) {
    ALOGD("AC4DEC_imsdec_anechoic_coefficients_decode() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_set_md_update_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_set_md_update_info(void) {
    ALOGD("AC4DEC_oamdi_set_md_update_info() called");
    return 0;
}

/* Demangled: AC4DEC_evo_unpack_md_set */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_unpack_md_set(void) {
    ALOGD("AC4DEC_evo_unpack_md_set() called");
    return 0;
}

/* Exported Object: stfrph_obj */
extern "C" __attribute__((visibility("default"))) void* stfrph_obj = NULL;

/* Demangled: dolby::Ac4DecClient::ac4dec_close(tAc4DecoderExternal*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12Ac4DecClient12ac4dec_closeEP19tAc4DecoderExternalPv(void) {
    ALOGD("_ZN5dolby12Ac4DecClient12ac4dec_closeEP19tAc4DecoderExternalPv() called");
    return 0;
}

/* Exported Object: AC4DEC_A_LDN_SL_VALUES_BAND04 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_LDN_SL_VALUES_BAND04 = NULL;

/* Demangled: AC4DEC_dvlim_set_block_size */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_set_block_size(void) {
    ALOGD("AC4DEC_dvlim_set_block_size() called");
    return 0;
}

/* Demangled: AC4DEC_evo_ll_remove_head */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_ll_remove_head(void) {
    ALOGD("AC4DEC_evo_ll_remove_head() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_set_object_dialog_indication */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_set_object_dialog_indication(void) {
    ALOGD("AC4DEC_oamdi_set_object_dialog_indication() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_oa_element_object_description_read_o */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_oa_element_object_description_read_o(void) {
    ALOGD("AC4DEC_oamdi_get_oa_element_object_description_read_o() called");
    return 0;
}

/* Exported Object: AC4DEC_A_LDN_SL_VALUES_BAND05 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_LDN_SL_VALUES_BAND05 = NULL;

/* Demangled: AC4DEC_imdct_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imdct_init(void) {
    ALOGD("AC4DEC_imdct_init() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD96_alpha4_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD96_alpha4_0 = NULL;

/* Demangled: dlb_fft_inv_scl_24 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_24(void) {
    ALOGD("dlb_fft_inv_scl_24() called");
    return 0;
}

/* Demangled: AC4DEC_arle_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_query_memory(void) {
    ALOGD("AC4DEC_arle_query_memory() called");
    return 0;
}

/* Exported Object: AC4DEC_A_LDN_SL_VALUES_BAND06 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_LDN_SL_VALUES_BAND06 = NULL;

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_5_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_5_0 = NULL;

/* Exported Object: AC4DEC_A_LDN_SL_VALUES_BAND07 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_LDN_SL_VALUES_BAND07 = NULL;

/* Demangled: dlb_CLcopyCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLcopyCLU_flex(void) {
    ALOGD("dlb_CLcopyCLU_flex() called");
    return 0;
}

/* Demangled: AC4DEC_inverse_quantization */
extern "C" __attribute__((visibility("default"))) int AC4DEC_inverse_quantization(void) {
    ALOGD("AC4DEC_inverse_quantization() called");
    return 0;
}

/* Demangled: android::AC4Decoder::internalGetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4Decoder20internalGetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android10AC4Decoder20internalGetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_5_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_5_1 = NULL;

/* Demangled: AC4DEC_expd_parse */
extern "C" __attribute__((visibility("default"))) int AC4DEC_expd_parse(void) {
    ALOGD("AC4DEC_expd_parse() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_256 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_256(void) {
    ALOGD("DLB_r4_inv_fft_256() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_NGCS_SEG_CHANNELS_2TO5CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_NGCS_SEG_CHANNELS_2TO5CH = NULL;

/* Demangled: AC4DEC_ade_il_get_enable_prev_flag */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_il_get_enable_prev_flag(void) {
    ALOGD("AC4DEC_ade_il_get_enable_prev_flag() called");
    return 0;
}

/* Demangled: AC4DEC_de_substream_index_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_substream_index_get(void) {
    ALOGD("AC4DEC_de_substream_index_get() called");
    return 0;
}

/* Demangled: AC4DEC_intelligent_eq_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_intelligent_eq_query_memory(void) {
    ALOGD("AC4DEC_intelligent_eq_query_memory() called");
    return 0;
}

/* Exported Object: AC4DEC_A_PHASE_SHIFT_2TO4CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_PHASE_SHIFT_2TO4CH = NULL;

/* Demangled: AC4DEC_aspx_ec_data_sig_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_ec_data_sig_read(void) {
    ALOGD("AC4DEC_aspx_ec_data_sig_read() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_input_stage_new_program */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_input_stage_new_program(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_input_stage_new_program() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajcc_dry_coarse_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajcc_dry_coarse_df = NULL;

/* Exported Object: AC4DEC_WindowKBD96_alpha4_5 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD96_alpha4_5 = NULL;

/* Demangled: DLB_CLmacCLCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmacCLCLU_strict(void) {
    ALOGD("DLB_CLmacCLCLU_strict() called");
    return 0;
}

/* Demangled: android::AC4Decoder::~AC4Decoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4DecoderD0Ev(void) {
    ALOGD("_ZN7android10AC4DecoderD0Ev() called");
    return 0;
}

/* Demangled: AC4DEC_evo_mod_get_md_end */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_mod_get_md_end(void) {
    ALOGD("AC4DEC_evo_mod_get_md_end() called");
    return 0;
}

/* Demangled: DLB_BLmpy_scale_xBLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmpy_scale_xBLSU_strict(void) {
    ALOGD("DLB_BLmpy_scale_xBLSU_strict() called");
    return 0;
}

/* Exported Object: AC4DEC_ajoc_wet_quant_table */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajoc_wet_quant_table = NULL;

/* Demangled: AC4DEC_ade_update_param */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_update_param(void) {
    ALOGD("AC4DEC_ade_update_param() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_aspx_env_balance_15_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_env_balance_15_f0 = NULL;

/* Demangled: AC4DEC_speaker_config_identity_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_speaker_config_identity_get(void) {
    ALOGD("AC4DEC_speaker_config_identity_get() called");
    return 0;
}

/* Demangled: AC4DEC_bed_mixer_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_bed_mixer_query_memory(void) {
    ALOGD("AC4DEC_bed_mixer_query_memory() called");
    return 0;
}

/* Exported Object: AC4DEC_ap_dvlim_coefs_64 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ap_dvlim_coefs_64 = NULL;

/* Demangled: DLB_blk_LfirUL_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LfirUL_setup(void) {
    ALOGD("DLB_blk_LfirUL_setup() called");
    return 0;
}

/* Demangled: AC4DEC_aspxdec_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspxdec_close(void) {
    ALOGD("AC4DEC_aspxdec_close() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD192 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD192 = NULL;

/* Demangled: AC4DEC_speaker_config_enable_warping */
extern "C" __attribute__((visibility("default"))) int AC4DEC_speaker_config_enable_warping(void) {
    ALOGD("AC4DEC_speaker_config_enable_warping() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_12 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_12(void) {
    ALOGD("DLB_r4_inv_fft_12() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_virtualizer_surround_boost_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_virtualizer_surround_boost_reset(void) {
    ALOGD("AC4DEC_ac4dap_virtualizer_surround_boost_reset() called");
    return 0;
}

/* Demangled: AC4DEC_de_has_cross_channel_gains */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_has_cross_channel_gains(void) {
    ALOGD("AC4DEC_de_has_cross_channel_gains() called");
    return 0;
}

/* Demangled: AC4DEC_asa_reset_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_asa_reset_init(void) {
    ALOGD("AC4DEC_asa_reset_init() called");
    return 0;
}

/* Exported Object: AC4DEC_P_NGCS_SEG_RANGE_2TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_P_NGCS_SEG_RANGE_2TO7CH = NULL;

/* Demangled: AC4DEC_ajccdec_dequantize */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajccdec_dequantize(void) {
    ALOGD("AC4DEC_ajccdec_dequantize() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_toc_reader_get_substream_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_toc_reader_get_substream_info(void) {
    ALOGD("AC4DEC_ac4dec_toc_reader_get_substream_info() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_16_vec_ana = NULL;

/* Exported Object: AC4DEC_tree_huff_code_aspx_env_balance_15_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_env_balance_15_dt = NULL;

/* Exported Object: dlb_hyb_p8_13 */
extern "C" __attribute__((visibility("default"))) void* dlb_hyb_p8_13 = NULL;

/* Demangled: AC4DEC_hp_height_reverb_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_reverb_init(void) {
    ALOGD("AC4DEC_hp_height_reverb_init() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD90_alpha6_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD90_alpha6_0 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L576 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L576 = NULL;

/* Demangled: DLB_r4_inv_fft_15 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_15(void) {
    ALOGD("DLB_r4_inv_fft_15() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_NGCS_SEG_STEERING_2TO4CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_NGCS_SEG_STEERING_2TO4CH = NULL;

/* Demangled: AC4DEC_ssfdec_subband_predictor */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssfdec_subband_predictor(void) {
    ALOGD("AC4DEC_ssfdec_subband_predictor() called");
    return 0;
}

/* Demangled: dlb_blk_Lmix_shlULL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmix_shlULL_flex(void) {
    ALOGD("dlb_blk_Lmix_shlULL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L12 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L12 = NULL;

/* Demangled: DLB_r4_fft_360_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_360_s(void) {
    ALOGD("DLB_r4_fft_360_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_4096 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_4096(void) {
    ALOGD("DLB_r4_fft_4096() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_16 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_16(void) {
    ALOGD("DLB_r4_inv_fft_16() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajoc_dry_fine_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajoc_dry_fine_df = NULL;

/* Demangled: DLB_blk_LmixnL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixnL_strict(void) {
    ALOGD("DLB_blk_LmixnL_strict() called");
    return 0;
}

/* Demangled: AC4DEC_cch_add_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_add_data(void) {
    ALOGD("AC4DEC_cch_add_data() called");
    return 0;
}

/* Exported Object: AC4DEC_CHANNEL_MAP_524_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_524_0 = NULL;

/* Demangled: AC4DEC_oamdi_get_lib_ver */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_lib_ver(void) {
    ALOGD("AC4DEC_oamdi_get_lib_ver() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_fdn_allpass_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_fdn_allpass_process(void) {
    ALOGD("AC4DEC_hp_height_fdn_allpass_process() called");
    return 0;
}

/* Exported Object: AC4DEC_CHANNEL_MAP_524_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_524_1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L240_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L240_cos = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L15 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L15 = NULL;

/* Demangled: DLB_CLmfb_p10km_analysisL_init */
extern "C" __attribute__((visibility("default"))) int DLB_CLmfb_p10km_analysisL_init(void) {
    ALOGD("DLB_CLmfb_p10km_analysisL_init() called");
    return 0;
}

/* Demangled: AC4DEC_calculate_crc */
extern "C" __attribute__((visibility("default"))) int AC4DEC_calculate_crc(void) {
    ALOGD("AC4DEC_calculate_crc() called");
    return 0;
}

/* Demangled: AC4DEC_surround_compressor_smooth_power_approximation */
extern "C" __attribute__((visibility("default"))) int AC4DEC_surround_compressor_smooth_power_approximation(void) {
    ALOGD("AC4DEC_surround_compressor_smooth_power_approximation() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajcc_dry_coarse_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajcc_dry_coarse_f0 = NULL;

/* Demangled: DLB_blk_Liir2ssv2L_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv2L_inplace_strict(void) {
    ALOGD("DLB_blk_Liir2ssv2L_inplace_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L16 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L16 = NULL;

/* Demangled: DLB_r4_fft_72_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_72_s(void) {
    ALOGD("DLB_r4_fft_72_s() called");
    return 0;
}

/* Demangled: DLB_Lpow05I16 */
extern "C" __attribute__((visibility("default"))) int DLB_Lpow05I16(void) {
    ALOGD("DLB_Lpow05I16() called");
    return 0;
}

/* Demangled: DLB_Sqmf_synthesisCL */
extern "C" __attribute__((visibility("default"))) int DLB_Sqmf_synthesisCL(void) {
    ALOGD("DLB_Sqmf_synthesisCL() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_mode_input_channel_locs */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_mode_input_channel_locs(void) {
    ALOGD("AC4DEC_ngcs_mode_input_channel_locs() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_reader_feed */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_feed(void) {
    ALOGD("AC4DEC_ac4toc_reader_feed() called");
    return 0;
}

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR44KHZ1_BS256S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR44KHZ1_BS256S = NULL;

/* Demangled: AC4DEC_ac4dap_speaker_virtualizer_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_speaker_virtualizer_query_scratch(void) {
    ALOGD("AC4DEC_ac4dap_speaker_virtualizer_query_scratch() called");
    return 0;
}

/* Demangled: AC4DEC_acpldec_data_1ch_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_data_1ch_read(void) {
    ALOGD("AC4DEC_acpldec_data_1ch_read() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajcc_dry_coarse_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajcc_dry_coarse_dt = NULL;

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: AC4DEC_ac4_brcalc_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4_brcalc_process(void) {
    ALOGD("AC4DEC_ac4_brcalc_process() called");
    return 0;
}

/* Demangled: AC4DEC_delay_line_clvec_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_line_clvec_reset(void) {
    ALOGD("AC4DEC_delay_line_clvec_reset() called");
    return 0;
}

/* Demangled: AC4DEC_emdf_pack_programme_loudness_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_pack_programme_loudness_data(void) {
    ALOGD("AC4DEC_emdf_pack_programme_loudness_data() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD64_alpha4_5 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD64_alpha4_5 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L288 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L288 = NULL;

/* Demangled: AC4DEC_ac4toc_get_selected_presentation_v1_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_get_selected_presentation_v1_info(void) {
    ALOGD("AC4DEC_ac4toc_get_selected_presentation_v1_info() called");
    return 0;
}

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR44KHZ1_BS256S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR44KHZ1_BS256S = NULL;

/* Exported Object: AC4DEC_a_isf_bh_7_5_3_0_decode */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_isf_bh_7_5_3_0_decode = NULL;

/* Demangled: DLB_r4_inv_fft_256_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_256_s(void) {
    ALOGD("DLB_r4_inv_fft_256_s() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L512 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L512 = NULL;

/* Demangled: AC4DEC_ade_il_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_il_open(void) {
    ALOGD("AC4DEC_ade_il_open() called");
    return 0;
}

/* Exported Object: AC4DEC_oamd_z_extp_pos_unsigned_to_q15 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_oamd_z_extp_pos_unsigned_to_q15 = NULL;

/* Demangled: AC4DEC_huffdec_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_huffdec_init(void) {
    ALOGD("AC4DEC_huffdec_init() called");
    return 0;
}

/* Exported Object: AC4DEC_IMS_BANDING_SCHEME_FDN_MR */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_IMS_BANDING_SCHEME_FDN_MR = NULL;

/* Demangled: dlb_fft_fwd_scl_20 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_20(void) {
    ALOGD("dlb_fft_fwd_scl_20() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_phase_shifter_get_rotation */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_phase_shifter_get_rotation(void) {
    ALOGD("AC4DEC_ngcs_phase_shifter_get_rotation() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L30 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L30 = NULL;

/* Demangled: AC4DEC_metadata_delay_input_step */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_input_step(void) {
    ALOGD("AC4DEC_metadata_delay_input_step() called");
    return 0;
}

/* Demangled: AC4DEC_oarq_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oarq_process(void) {
    ALOGD("AC4DEC_oarq_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L4_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L4_cos = NULL;

/* Exported Object: AC4DEC_tree_huff_code_ajoc_dry_fine_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajoc_dry_fine_f0 = NULL;

/* Exported Object: AC4DEC_DELTA_SOURCE_POS_X_Y */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DELTA_SOURCE_POS_X_Y = NULL;

/* Demangled: DLB_r4_fft_576_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_576_s(void) {
    ALOGD("DLB_r4_fft_576_s() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_close */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_close(void) {
    ALOGD("DLB_hybrid_analysisCL_close() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L32 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L32 = NULL;

/* Demangled: dolby::Ac4DecClient::configChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12Ac4DecClient13configChangedEv(void) {
    ALOGD("_ZN5dolby12Ac4DecClient13configChangedEv() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajoc_dry_fine_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajoc_dry_fine_dt = NULL;

/* Demangled: dlb_fft_fwd_scl_24 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_24(void) {
    ALOGD("dlb_fft_fwd_scl_24() called");
    return 0;
}

/* Demangled: AC4DEC_ph90_qmf_get_delay_slots */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ph90_qmf_get_delay_slots(void) {
    ALOGD("AC4DEC_ph90_qmf_get_delay_slots() called");
    return 0;
}

/* Demangled: AC4DEC_asfdec_fill_noise */
extern "C" __attribute__((visibility("default"))) int AC4DEC_asfdec_fill_noise(void) {
    ALOGD("AC4DEC_asfdec_fill_noise() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_30 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_30(void) {
    ALOGD("dlb_fft_inv_scl_30() called");
    return 0;
}

/* Exported Object: AC4DEC_ims_sv_deq_band_start_index */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ims_sv_deq_band_start_index = NULL;

/* Demangled: AC4DEC_acpldec_mdd_generate_dummy_data_2ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_mdd_generate_dummy_data_2ch(void) {
    ALOGD("AC4DEC_acpldec_mdd_generate_dummy_data_2ch() called");
    return 0;
}

/* Demangled: DLB_blk_LminLLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LminLLL_strict(void) {
    ALOGD("DLB_blk_LminLLL_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_120 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_120(void) {
    ALOGD("dlb_fft_fwd_usc_120() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_get_version */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_get_version(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_get_version() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L36 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L36 = NULL;

/* Exported Object: AC4DEC_tree_huff_code_aspx_env_level_30_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_env_level_30_df = NULL;

/* Demangled: dlb_fft_inv_scl_32 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_32(void) {
    ALOGD("dlb_fft_inv_scl_32() called");
    return 0;
}

/* Demangled: AC4DEC_decorr_apply */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decorr_apply(void) {
    ALOGD("AC4DEC_decorr_apply() called");
    return 0;
}

/* Exported Object: dlb_unused_debug */
extern "C" __attribute__((visibility("default"))) void* dlb_unused_debug = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L2 = NULL;

/* Demangled: AC4DEC_cx_allpass_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cx_allpass_init(void) {
    ALOGD("AC4DEC_cx_allpass_init() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_get_flushing_status */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_get_flushing_status(void) {
    ALOGD("dlb_ac4dec_v2_dec_get_flushing_status() called");
    return 0;
}

/* Demangled: AC4DEC_evo_ll_insert */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_ll_insert(void) {
    ALOGD("AC4DEC_evo_ll_insert() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_960 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_960(void) {
    ALOGD("dlb_fft_fwd_scl_960() called");
    return 0;
}

/* Demangled: AC4DEC_gain_calc_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_gain_calc_query_memory(void) {
    ALOGD("AC4DEC_gain_calc_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_leveler_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_leveler_init(void) {
    ALOGD("AC4DEC_leveler_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L4 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L4 = NULL;

/* Demangled: DLB_r4_inv_fft_640_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_640_s(void) {
    ALOGD("DLB_r4_inv_fft_640_s() called");
    return 0;
}

/* Exported Object: AC4DEC_crctab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_crctab = NULL;

/* Exported Object: AC4DEC_P_PHASE_SHIFT_2TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_P_PHASE_SHIFT_2TO7CH = NULL;

/* Demangled: AC4DEC_qextract_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_qextract_init(void) {
    ALOGD("AC4DEC_qextract_init() called");
    return 0;
}

/* Demangled: AC4DEC_loud_get_loud_corr */
extern "C" __attribute__((visibility("default"))) int AC4DEC_loud_get_loud_corr(void) {
    ALOGD("AC4DEC_loud_get_loud_corr() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_get_peak */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_get_peak(void) {
    ALOGD("AC4DEC_dvlim_get_peak() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_36 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_36(void) {
    ALOGD("dlb_fft_inv_scl_36() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_256 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_256(void) {
    ALOGD("dlb_fft_inv_scl_256() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_data_2ch_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_data_2ch_read(void) {
    ALOGD("AC4DEC_aspx_data_2ch_read() called");
    return 0;
}

/* Demangled: DLB_blk_LmixLLLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixLLLL_strict(void) {
    ALOGD("DLB_blk_LmixLLLL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L640 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L640 = NULL;

/* Demangled: AC4DEC_arle_distortion_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_distortion_init(void) {
    ALOGD("AC4DEC_arle_distortion_init() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_DIFFUSE_NO_DECORR_2TO6CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_DIFFUSE_NO_DECORR_2TO6CH = NULL;

/* Demangled: AC4DEC_acpldec_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_open(void) {
    ALOGD("AC4DEC_acpldec_open() called");
    return 0;
}

/* Demangled: AC4DEC_ajoc_dmx_de_data_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajoc_dmx_de_data_read(void) {
    ALOGD("AC4DEC_ajoc_dmx_de_data_read() called");
    return 0;
}

/* Demangled: AC4DEC_dapil_drc_params_convert */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dapil_drc_params_convert(void) {
    ALOGD("AC4DEC_dapil_drc_params_convert() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L16_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L16_1 = NULL;

/* Exported Object: AC4DEC_WindowKBD120_alpha5_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD120_alpha5_0 = NULL;

/* Demangled: AC4DEC_oamdi_set_trim_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_set_trim_config(void) {
    ALOGD("AC4DEC_oamdi_set_trim_config() called");
    return 0;
}

/* Demangled: DLB_mfb_p10km_analysisL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_mfb_p10km_analysisL_query_mem(void) {
    ALOGD("DLB_mfb_p10km_analysisL_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_input_stage_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_input_stage_open(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_input_stage_open() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L16_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L16_2 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L8 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L8 = NULL;

/* Demangled: DLB_Lqmf_synthesisCL */
extern "C" __attribute__((visibility("default"))) int DLB_Lqmf_synthesisCL(void) {
    ALOGD("DLB_Lqmf_synthesisCL() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_aspx_noise_level_df */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_noise_level_df = NULL;

/* Demangled: dlb_fft_fwd_usc_128 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_128(void) {
    ALOGD("dlb_fft_fwd_usc_128() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_1024 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_1024(void) {
    ALOGD("dlb_fft_inv_usc_1024() called");
    return 0;
}

/* Exported Object: AC4DEC_WRAPPER_DEFAULT_TIMESCALE */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WRAPPER_DEFAULT_TIMESCALE = NULL;

/* Demangled: DLB_r4_fft_960_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_960_s(void) {
    ALOGD("DLB_r4_fft_960_s() called");
    return 0;
}

/* Demangled: DLB_Lqmf_synthesisL */
extern "C" __attribute__((visibility("default"))) int DLB_Lqmf_synthesisL(void) {
    ALOGD("DLB_Lqmf_synthesisL() called");
    return 0;
}

/* Exported Object: AC4DEC_beta_quant_table_fine */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_beta_quant_table_fine = NULL;

/* Demangled: AC4DEC_evo_ll_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_ll_init(void) {
    ALOGD("AC4DEC_evo_ll_init() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_20 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_20(void) {
    ALOGD("DLB_r4_inv_fft_20() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_480_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_480_s(void) {
    ALOGD("DLB_r4_inv_fft_480_s() called");
    return 0;
}

/* Exported Object: vtable for android::AC4Decoder::DolbyMediaBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10AC4Decoder16DolbyMediaBufferE = NULL;

/* Exported Object: AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR48KHZ */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR48KHZ = NULL;

/* Demangled: AC4DEC_dap_mathlib_Llogsmooth2LL */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_Llogsmooth2LL(void) {
    ALOGD("AC4DEC_dap_mathlib_Llogsmooth2LL() called");
    return 0;
}

/* Exported Object: AC4DEC_ajcc_pb15_qmf_table */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajcc_pb15_qmf_table = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_vec_syn = NULL;

/* Exported Object: AC4DEC_qmf_to_par_band_table */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_qmf_to_par_band_table = NULL;

/* Demangled: AC4DEC_ade_il_get_ade_gain_hist */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_il_get_ade_gain_hist(void) {
    ALOGD("AC4DEC_ade_il_get_ade_gain_hist() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_aspx_env_level_30_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_env_level_30_f0 = NULL;

/* Demangled: AC4DEC_ac4toc_reader_new_program */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_new_program(void) {
    ALOGD("AC4DEC_ac4toc_reader_new_program() called");
    return 0;
}

/* Demangled: AC4DEC_ajoc_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajoc_read(void) {
    ALOGD("AC4DEC_ajoc_read() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_24 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_24(void) {
    ALOGD("DLB_r4_inv_fft_24() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_240 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_240(void) {
    ALOGD("dlb_fft_fwd_scl_240() called");
    return 0;
}

/* Exported Object: dlb_cos_8_full */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_8_full = NULL;

/* Demangled: AC4DEC_delay_line_clvec_size_query */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_line_clvec_size_query(void) {
    ALOGD("AC4DEC_delay_line_clvec_size_query() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_set_num_channels */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_set_num_channels(void) {
    ALOGD("AC4DEC_dvlim_set_num_channels() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_aspx_env_level_30_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_env_level_30_dt = NULL;

/* Demangled: DLB_blk_Lcrossfade_gainLS_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lcrossfade_gainLS_strict(void) {
    ALOGD("DLB_blk_Lcrossfade_gainLS_strict() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_bitbuf_set_abs_pos */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_set_abs_pos(void) {
    ALOGD("AC4DEC_dlb_bitbuf_set_abs_pos() called");
    return 0;
}

/* Exported Object: AC4DEC_decorr_index_core_mode */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_decorr_index_core_mode = NULL;

/* Demangled: AC4DEC_drc_mdd_generate_dummy */
extern "C" __attribute__((visibility("default"))) int AC4DEC_drc_mdd_generate_dummy(void) {
    ALOGD("AC4DEC_drc_mdd_generate_dummy() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisL_init */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_init(void) {
    ALOGD("DLB_qmf_synthesisL_init() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_reader_get_toc_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_get_toc_info(void) {
    ALOGD("AC4DEC_ac4toc_reader_get_toc_info() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_reverb_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_reverb_reset(void) {
    ALOGD("AC4DEC_hp_height_reverb_reset() called");
    return 0;
}

/* Demangled: AC4DEC_memlib_pool_get_type */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_pool_get_type(void) {
    ALOGD("AC4DEC_memlib_pool_get_type() called");
    return 0;
}

/* Demangled: AC4DEC_dapil_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dapil_open(void) {
    ALOGD("AC4DEC_dapil_open() called");
    return 0;
}

/* Demangled: AC4DEC_qextract_convert_coefs */
extern "C" __attribute__((visibility("default"))) int AC4DEC_qextract_convert_coefs(void) {
    ALOGD("AC4DEC_qextract_convert_coefs() called");
    return 0;
}

/* Demangled: dolby::Ac4DynamicConfig::~Ac4DynamicConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16Ac4DynamicConfigD0Ev(void) {
    ALOGD("_ZN5dolby16Ac4DynamicConfigD0Ev() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_bitbuf_peek_long */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_peek_long(void) {
    ALOGD("AC4DEC_dlb_bitbuf_peek_long() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L24 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L24 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L60 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L60 = NULL;

/* Demangled: AC4DEC_memlib_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_init(void) {
    ALOGD("AC4DEC_memlib_init() called");
    return 0;
}

/* Demangled: AC4DEC_oamd_common_data_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_common_data_init(void) {
    ALOGD("AC4DEC_oamd_common_data_init() called");
    return 0;
}

/* Demangled: DLB_CLshlCLUU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLshlCLUU_strict(void) {
    ALOGD("DLB_CLshlCLUU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_36_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_36_s(void) {
    ALOGD("DLB_r4_inv_fft_36_s() called");
    return 0;
}

/* Demangled: AC4DEC_emdf_add_emdf_pl_substream_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_add_emdf_pl_substream_info(void) {
    ALOGD("AC4DEC_emdf_add_emdf_pl_substream_info() called");
    return 0;
}

/* Demangled: AC4DEC_ims_il_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ims_il_close(void) {
    ALOGD("AC4DEC_ims_il_close() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_aspx_noise_level_f0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_noise_level_f0 = NULL;

/* Demangled: DLB_r4_inv_fft_2_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_2_s(void) {
    ALOGD("DLB_r4_inv_fft_2_s() called");
    return 0;
}

/* Demangled: dlb_inverseModulationComplex */
extern "C" __attribute__((visibility("default"))) int dlb_inverseModulationComplex(void) {
    ALOGD("dlb_inverseModulationComplex() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_get_phase90_status */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_get_phase90_status(void) {
    ALOGD("dlb_ac4dec_v2_dec_get_phase90_status() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_input_stage_process_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_input_stage_process_init(void) {
    ALOGD("AC4DEC_ac4dec_input_stage_process_init() called");
    return 0;
}

/* Demangled: DLB_r4_fft_180 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_180(void) {
    ALOGD("DLB_r4_fft_180() called");
    return 0;
}

/* Demangled: AC4DEC_ade_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_process(void) {
    ALOGD("AC4DEC_ade_process() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_aspx_noise_level_dt */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_aspx_noise_level_dt = NULL;

/* Exported Object: AC4DEC_WindowKBD96 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD96 = NULL;

/* Demangled: AC4DEC_oamdi_get_signed_pos_codes */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_signed_pos_codes(void) {
    ALOGD("AC4DEC_oamdi_get_signed_pos_codes() called");
    return 0;
}

/* Demangled: dlb_blk_Liir1_shlLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir1_shlLU_flex(void) {
    ALOGD("dlb_blk_Liir1_shlLU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L64 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L64 = NULL;

/* Demangled: DLB_r4_inv_fft_40_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_40_s(void) {
    ALOGD("DLB_r4_inv_fft_40_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_144 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_144(void) {
    ALOGD("dlb_fft_inv_usc_144() called");
    return 0;
}

/* Demangled: AC4DEC_sone_buffer_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sone_buffer_init(void) {
    ALOGD("AC4DEC_sone_buffer_init() called");
    return 0;
}

/* Exported Object: AC4DEC_CHANNEL_MAP_1_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_1_0 = NULL;

/* Demangled: AC4DEC_omg_width_gains_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_omg_width_gains_get(void) {
    ALOGD("AC4DEC_omg_width_gains_get() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_oa_element_object_description */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_oa_element_object_description(void) {
    ALOGD("AC4DEC_oamdi_get_oa_element_object_description() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_12 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_12(void) {
    ALOGD("dlb_fft_inv_usc_12() called");
    return 0;
}

/* Exported Object: AC4DEC_oamd_6bit_unsigned_to_oari_Q15 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_oamd_6bit_unsigned_to_oari_Q15 = NULL;

/* Demangled: dlb_CLCLmix4CL8SU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLCLmix4CL8SU_flex(void) {
    ALOGD("dlb_CLCLmix4CL8SU_flex() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_input_stage_alloc */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_input_stage_alloc(void) {
    ALOGD("AC4DEC_ac4dec_input_stage_alloc() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD384 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD384 = NULL;

/* Demangled: dlb_CLmpyCLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpyCLSU_flex(void) {
    ALOGD("dlb_CLmpyCLSU_flex() called");
    return 0;
}

/* Demangled: DLB_CLmpyCLVSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpyCLVSU_strict(void) {
    ALOGD("DLB_CLmpyCLVSU_strict() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_query_scratch(void) {
    ALOGD("AC4DEC_ac4dap_query_scratch() called");
    return 0;
}

/* Demangled: AC4DEC_legq_clip_gains */
extern "C" __attribute__((visibility("default"))) int AC4DEC_legq_clip_gains(void) {
    ALOGD("AC4DEC_legq_clip_gains() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L12 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L12 = NULL;

/* Demangled: dlb_fft_fwd_scl_30 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_30(void) {
    ALOGD("dlb_fft_fwd_scl_30() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_15 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_15(void) {
    ALOGD("dlb_fft_inv_usc_15() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_1024 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_1024(void) {
    ALOGD("dlb_fft_fwd_scl_1024() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_open */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_open(void) {
    ALOGD("dlb_ac4dec_v2_open() called");
    return 0;
}

/* Demangled: AC4DEC_memlib_alloc_mem_section */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_alloc_mem_section(void) {
    ALOGD("AC4DEC_memlib_alloc_mem_section() called");
    return 0;
}

/* Demangled: AC4DEC_delay_line_lfract_initialize */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_line_lfract_initialize(void) {
    ALOGD("AC4DEC_delay_line_lfract_initialize() called");
    return 0;
}

/* Demangled: AC4DEC_ssfdec_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssfdec_process(void) {
    ALOGD("AC4DEC_ssfdec_process() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_16 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_16(void) {
    ALOGD("dlb_fft_inv_usc_16() called");
    return 0;
}

/* Demangled: DLB_time_sub */
extern "C" __attribute__((visibility("default"))) int DLB_time_sub(void) {
    ALOGD("DLB_time_sub() called");
    return 0;
}

/* Exported Object: AC4DEC_ajcc_num_param_bands */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ajcc_num_param_bands = NULL;

/* Demangled: AC4DEC_expd_pow_7_13 */
extern "C" __attribute__((visibility("default"))) int AC4DEC_expd_pow_7_13(void) {
    ALOGD("AC4DEC_expd_pow_7_13() called");
    return 0;
}

/* Demangled: AC4DEC_loud_loud_corr_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_loud_loud_corr_init(void) {
    ALOGD("AC4DEC_loud_loud_corr_init() called");
    return 0;
}

/* Demangled: AC4DEC_pcm_check_pcm_buffer_data_type */
extern "C" __attribute__((visibility("default"))) int AC4DEC_pcm_check_pcm_buffer_data_type(void) {
    ALOGD("AC4DEC_pcm_check_pcm_buffer_data_type() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L768 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L768 = NULL;

/* Demangled: dlb_fft_fwd_scl_32 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_32(void) {
    ALOGD("dlb_fft_fwd_scl_32() called");
    return 0;
}

/* Exported Object: dlb_cos_64_full_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_64_full_scl = NULL;

/* Demangled: AC4DEC_omg_panner_program_metadata_set */
extern "C" __attribute__((visibility("default"))) int AC4DEC_omg_panner_program_metadata_set(void) {
    ALOGD("AC4DEC_omg_panner_program_metadata_set() called");
    return 0;
}

/* Demangled: AC4DEC_omg_speaker_count_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_omg_speaker_count_get(void) {
    ALOGD("AC4DEC_omg_speaker_count_get() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L15 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L15 = NULL;

/* Demangled: dlb_fft_inv_usc_320 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_320(void) {
    ALOGD("dlb_fft_inv_usc_320() called");
    return 0;
}

/* Demangled: AC4DEC_ade_il_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ade_il_init(void) {
    ALOGD("AC4DEC_ade_il_init() called");
    return 0;
}

/* Demangled: AC4DEC_drc_gains_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_drc_gains_init(void) {
    ALOGD("AC4DEC_drc_gains_init() called");
    return 0;
}

/* Demangled: AC4DEC_mdct_time_to_freq */
extern "C" __attribute__((visibility("default"))) int AC4DEC_mdct_time_to_freq(void) {
    ALOGD("AC4DEC_mdct_time_to_freq() called");
    return 0;
}

/* Exported Object: AC4DEC_a_non_reorder */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_non_reorder = NULL;

/* Demangled: dlb_vec_Labs_maxLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_Labs_maxLU_flex(void) {
    ALOGD("dlb_vec_Labs_maxLU_flex() called");
    return 0;
}

/* Demangled: dlb_blk_Liir1xL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir1xL_flex(void) {
    ALOGD("dlb_blk_Liir1xL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L16 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L16 = NULL;

/* Demangled: DLB_r4_fft_12 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_12(void) {
    ALOGD("DLB_r4_fft_12() called");
    return 0;
}

/* Demangled: dlb_qmf_analysisS_open */
extern "C" __attribute__((visibility("default"))) int dlb_qmf_analysisS_open(void) {
    ALOGD("dlb_qmf_analysisS_open() called");
    return 0;
}

/* Demangled: initexecparams */
extern "C" __attribute__((visibility("default"))) int initexecparams(void) {
    ALOGD("initexecparams() called");
    return 0;
}

/* Demangled: AC4DEC_de_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_query_memory(void) {
    ALOGD("AC4DEC_de_query_memory() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_NGCS_SEG_CHANNELS_5TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_NGCS_SEG_CHANNELS_5TO7CH = NULL;

/* Demangled: AC4DEC_size_panner_query_scratch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_size_panner_query_scratch(void) {
    ALOGD("AC4DEC_size_panner_query_scratch() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_40 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_40(void) {
    ALOGD("dlb_fft_inv_scl_40() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_split_drc_params */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_split_drc_params(void) {
    ALOGD("AC4DEC_ac4dap_split_drc_params() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_process_log_content_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_process_log_content_close(void) {
    ALOGD("AC4DEC_ac4dap_process_log_content_close() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_set_loud_pres_de_enable */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_set_loud_pres_de_enable(void) {
    ALOGD("AC4DEC_decoder_set_loud_pres_de_enable() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L45 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L45 = NULL;

/* Demangled: DLB_r4_fft_360 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_360(void) {
    ALOGD("DLB_r4_fft_360() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_36 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_36(void) {
    ALOGD("dlb_fft_fwd_scl_36() called");
    return 0;
}

/* Demangled: dlb_forwardModulationComplex */
extern "C" __attribute__((visibility("default"))) int dlb_forwardModulationComplex(void) {
    ALOGD("dlb_forwardModulationComplex() called");
    return 0;
}

/* Demangled: AC4DEC_ac4framer_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4framer_query_mem(void) {
    ALOGD("AC4DEC_ac4framer_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_acpldec_config_2ch_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_config_2ch_read(void) {
    ALOGD("AC4DEC_acpldec_config_2ch_read() called");
    return 0;
}

/* Exported Object: AC4DEC_pred_lag_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_pred_lag_tab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L2 = NULL;

/* Demangled: DLB_r4_fft_15 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_15(void) {
    ALOGD("DLB_r4_fft_15() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L120_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L120_1 = NULL;

/* Exported Object: AC4DEC_a_s_indices */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_s_indices = NULL;

/* Demangled: AC4DEC_oamdi_get_bed_object_presence */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_bed_object_presence(void) {
    ALOGD("AC4DEC_oamdi_get_bed_object_presence() called");
    return 0;
}

/* Demangled: DLB_r4_fft_16 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_16(void) {
    ALOGD("DLB_r4_fft_16() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L120_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L120_2 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L48 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L48 = NULL;

/* Demangled: AC4DEC_ac4dec_preso_get_ac4_presentation_substream */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_preso_get_ac4_presentation_substream(void) {
    ALOGD("AC4DEC_ac4dec_preso_get_ac4_presentation_substream() called");
    return 0;
}

/* Exported Object: AC4DEC_A_ROOM_CONFIG_SPKS_FRONT */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_ROOM_CONFIG_SPKS_FRONT = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L4 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L4 = NULL;

/* Demangled: DLB_fft_CLinv_unscaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLinv_unscaledCL(void) {
    ALOGD("DLB_fft_CLinv_unscaledCL() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_init */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_init(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_init() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_get_target_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_get_target_gain(void) {
    ALOGD("AC4DEC_dvlim_get_target_gain() called");
    return 0;
}

/* Demangled: DLB_cvec_Lmpy_conjLLIU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_cvec_Lmpy_conjLLIU_strict(void) {
    ALOGD("DLB_cvec_Lmpy_conjLLIU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_45 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_45(void) {
    ALOGD("dlb_fft_inv_scl_45() called");
    return 0;
}

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_322_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_322_0 = NULL;

/* Demangled: AC4DEC_de_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_read(void) {
    ALOGD("AC4DEC_de_read() called");
    return 0;
}

/* Exported Object: AC4DEC_offsets_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_offsets_tab = NULL;

/* Demangled: AC4DEC_dyn_objs_prog_only */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dyn_objs_prog_only(void) {
    ALOGD("AC4DEC_dyn_objs_prog_only() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_truncate_from_Q15 */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_truncate_from_Q15(void) {
    ALOGD("AC4DEC_oamdi_truncate_from_Q15() called");
    return 0;
}

/* Exported Object: DLB_MFB_TWID256E */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_TWID256E = NULL;

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_322_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_322_1 = NULL;

/* Exported Object: AC4DEC_WindowKBD256_alpha3_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD256_alpha3_0 = NULL;

/* Exported Object: AC4DEC_WindowKBD480_alpha4_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD480_alpha4_0 = NULL;

/* Demangled: DLB_blk_Lmix_shlUnL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlUnL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlUnL_strict() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_DIFFUSE_DECORR_2TO6CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_DIFFUSE_DECORR_2TO6CH = NULL;

/* Demangled: AC4DEC_sha256_do_hash */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sha256_do_hash(void) {
    ALOGD("AC4DEC_sha256_do_hash() called");
    return 0;
}

/* Demangled: AC4DEC_evo_verify_hmac */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_verify_hmac(void) {
    ALOGD("AC4DEC_evo_verify_hmac() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L8 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L8 = NULL;

/* Demangled: dlb_fft_inv_scl_48 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_48(void) {
    ALOGD("dlb_fft_inv_scl_48() called");
    return 0;
}

/* Demangled: dolby::Ac4DecClient::ac4dec_xfer_table(unsigned char*, unsigned int, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12Ac4DecClient17ac4dec_xfer_tableEPhjh(void) {
    ALOGD("_ZN5dolby12Ac4DecClient17ac4dec_xfer_tableEPhjh() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_reset(void) {
    ALOGD("AC4DEC_imsdec_reset() called");
    return 0;
}

/* Demangled: AC4DEC_speaker_config_index_find */
extern "C" __attribute__((visibility("default"))) int AC4DEC_speaker_config_index_find(void) {
    ALOGD("AC4DEC_speaker_config_index_find() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_96_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_96_s(void) {
    ALOGD("DLB_r4_inv_fft_96_s() called");
    return 0;
}

/* Demangled: dlb_forwardModulationReal */
extern "C" __attribute__((visibility("default"))) int dlb_forwardModulationReal(void) {
    ALOGD("dlb_forwardModulationReal() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_reader_get_version */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_get_version(void) {
    ALOGD("AC4DEC_ac4toc_reader_get_version() called");
    return 0;
}

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR48KHZ_BS192S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR48KHZ_BS192S = NULL;

/* Demangled: dlb_ac4dec_v2_dec_get_active_presentation */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_get_active_presentation(void) {
    ALOGD("dlb_ac4dec_v2_dec_get_active_presentation() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_30 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_30(void) {
    ALOGD("DLB_r4_inv_fft_30() called");
    return 0;
}

/* Demangled: AC4DEC_volume_and_ieq_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_volume_and_ieq_process(void) {
    ALOGD("AC4DEC_volume_and_ieq_process() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_oa_element_dimensional_trim */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_oa_element_dimensional_trim(void) {
    ALOGD("AC4DEC_oamdi_get_oa_element_dimensional_trim() called");
    return 0;
}

/* Demangled: AC4DEC_isf_decoder_compute_trim */
extern "C" __attribute__((visibility("default"))) int AC4DEC_isf_decoder_compute_trim(void) {
    ALOGD("AC4DEC_isf_decoder_compute_trim() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_presentation_selection_set_index */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_presentation_selection_set_index(void) {
    ALOGD("dlb_ac4dec_v2_presentation_selection_set_index() called");
    return 0;
}

/* Demangled: AC4DEC_acpldec_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_init(void) {
    ALOGD("AC4DEC_acpldec_init() called");
    return 0;
}

/* Demangled: AC4DEC_unpack_envelope */
extern "C" __attribute__((visibility("default"))) int AC4DEC_unpack_envelope(void) {
    ALOGD("AC4DEC_unpack_envelope() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_get_sample_rate */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_get_sample_rate(void) {
    ALOGD("AC4DEC_dvlim_get_sample_rate() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_384_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_384_s(void) {
    ALOGD("DLB_r4_inv_fft_384_s() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_32 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_32(void) {
    ALOGD("DLB_r4_inv_fft_32() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_set_has_oa_element_bed_object */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_set_has_oa_element_bed_object(void) {
    ALOGD("AC4DEC_oamdi_set_has_oa_element_bed_object() called");
    return 0;
}

/* Demangled: AC4DEC_omg_speaker_position_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_omg_speaker_position_get(void) {
    ALOGD("AC4DEC_omg_speaker_position_get() called");
    return 0;
}

/* Demangled: DLB_r4_fft_2048 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_2048(void) {
    ALOGD("DLB_r4_fft_2048() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_shl */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_shl(void) {
    ALOGD("DLB_hybrid_analysisCL_shl() called");
    return 0;
}

/* Demangled: AC4DEC_sv_coefs_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sv_coefs_query_memory(void) {
    ALOGD("AC4DEC_sv_coefs_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_dequantize_ajoc_mtxwet_values */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dequantize_ajoc_mtxwet_values(void) {
    ALOGD("AC4DEC_dequantize_ajoc_mtxwet_values() called");
    return 0;
}

/* Exported Object: AC4DEC_a_spec_exp_mant_table_comb */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_spec_exp_mant_table_comb = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L30 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L30 = NULL;

/* Demangled: android::AC4Decoder::getConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4Decoder9getConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android10AC4Decoder9getConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_set_target_reference_level */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_set_target_reference_level(void) {
    ALOGD("dlb_ac4dec_v2_dec_set_target_reference_level() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_process_2ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_process_2ch(void) {
    ALOGD("AC4DEC_aspx_process_2ch() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD96_alpha6_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD96_alpha6_0 = NULL;

/* Demangled: AC4DEC_metadata_delay_output_get_buffer_var */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_output_get_buffer_var(void) {
    ALOGD("AC4DEC_metadata_delay_output_get_buffer_var() called");
    return 0;
}

/* Demangled: AC4DEC_rsrc_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rsrc_open(void) {
    ALOGD("AC4DEC_rsrc_open() called");
    return 0;
}

/* Demangled: DLB_vec_Labs_maxLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_Labs_maxLU_strict(void) {
    ALOGD("DLB_vec_Labs_maxLU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L32 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L32 = NULL;

/* Demangled: DLB_r4_inv_fft_36 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_36(void) {
    ALOGD("DLB_r4_inv_fft_36() called");
    return 0;
}

/* Demangled: dolby::Ac4DecClient::Ac4DecClient(dolby::IDecConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12Ac4DecClientC2EPNS_10IDecConfigE(void) {
    ALOGD("_ZN5dolby12Ac4DecClientC2EPNS_10IDecConfigE() called");
    return 0;
}

/* Demangled: ac4dec_wrapper_setup_table_param */
extern "C" __attribute__((visibility("default"))) int ac4dec_wrapper_setup_table_param(void) {
    ALOGD("ac4dec_wrapper_setup_table_param() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_query_mem(void) {
    ALOGD("AC4DEC_imsdec_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_read_variable_bits_max */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_read_variable_bits_max(void) {
    ALOGD("AC4DEC_oamdi_read_variable_bits_max() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L288 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L288 = NULL;

/* Demangled: android::AC4Decoder::AC4Decoder(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4DecoderC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android10AC4DecoderC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: DLB_CLhybrid_analysisCL */
extern "C" __attribute__((visibility("default"))) int DLB_CLhybrid_analysisCL(void) {
    ALOGD("DLB_CLhybrid_analysisCL() called");
    return 0;
}

/* Demangled: AC4DEC_agc_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_agc_process(void) {
    ALOGD("AC4DEC_agc_process() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_num_band_coeff_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_num_band_coeff_get(void) {
    ALOGD("AC4DEC_imsdec_num_band_coeff_get() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2df1L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2df1L_flex(void) {
    ALOGD("dlb_blk_Liir2df1L_flex() called");
    return 0;
}

/* Exported Object: dlb_cos_8_ast_mini_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_8_ast_mini_twiddle = NULL;

/* Demangled: AC4DEC_loudness_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_loudness_query_memory(void) {
    ALOGD("AC4DEC_loudness_query_memory() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_NGCS_SEG_CHANNELS_2TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_NGCS_SEG_CHANNELS_2TO7CH = NULL;

/* Demangled: dlb_ac4dec_v2_presentation_selection_set_preference */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_presentation_selection_set_preference(void) {
    ALOGD("dlb_ac4dec_v2_presentation_selection_set_preference() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_12 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_12(void) {
    ALOGD("dlb_fft_fwd_usc_12() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_read_variable_bits */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_read_variable_bits(void) {
    ALOGD("AC4DEC_ac4toc_read_variable_bits() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_mixer_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_mixer_process(void) {
    ALOGD("AC4DEC_ac4dap_mixer_process() called");
    return 0;
}

/* Exported Object: AC4DEC_A_PHASE_SHIFT_2TO6CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_PHASE_SHIFT_2TO6CH = NULL;

/* Demangled: DLB_vec_LshlLIU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LshlLIU_inplace_strict(void) {
    ALOGD("DLB_vec_LshlLIU_inplace_strict() called");
    return 0;
}

/* Demangled: AC4DEC_ajoc_de_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajoc_de_process(void) {
    ALOGD("AC4DEC_ajoc_de_process() called");
    return 0;
}

/* Exported Object: AC4DEC_aspx_random_noise_interleaved */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_aspx_random_noise_interleaved = NULL;

/* Demangled: AC4DEC_evo_brw_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_brw_init(void) {
    ALOGD("AC4DEC_evo_brw_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L36 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L36 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L72 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L72 = NULL;

/* Demangled: dlb_fft_fwd_scl_256 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_256(void) {
    ALOGD("dlb_fft_fwd_scl_256() called");
    return 0;
}

/* Demangled: android::AC4Decoder::~AC4Decoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4DecoderD2Ev(void) {
    ALOGD("_ZN7android10AC4DecoderD2Ev() called");
    return 0;
}

/* Exported Object: AC4DEC_DE_UPPER_BAND */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DE_UPPER_BAND = NULL;

/* Demangled: AC4DEC_oamd_reader_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_reader_open(void) {
    ALOGD("AC4DEC_oamd_reader_open() called");
    return 0;
}

/* Demangled: dolby::DlbGenClass2::~DlbGenClass2() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DlbGenClass2D0Ev(void) {
    ALOGD("_ZN5dolby12DlbGenClass2D0Ev() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_set_oamdi_prog_assign */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_set_oamdi_prog_assign(void) {
    ALOGD("AC4DEC_ac4toc_set_oamdi_prog_assign() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_get_phase90_status */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_get_phase90_status(void) {
    ALOGD("AC4DEC_decoder_get_phase90_status() called");
    return 0;
}

/* Demangled: AC4DEC_dapil_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dapil_init(void) {
    ALOGD("AC4DEC_dapil_init() called");
    return 0;
}

/* Demangled: AC4DEC_get_max_emdf_md_set_size */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_max_emdf_md_set_size(void) {
    ALOGD("AC4DEC_get_max_emdf_md_set_size() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_15 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_15(void) {
    ALOGD("dlb_fft_fwd_usc_15() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_20 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_20(void) {
    ALOGD("dlb_fft_inv_usc_20() called");
    return 0;
}

/* Demangled: AC4DEC_dap_mathlib_PpowLP */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_PpowLP(void) {
    ALOGD("AC4DEC_dap_mathlib_PpowLP() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_mdd_generate_dummy_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_mdd_generate_dummy_config(void) {
    ALOGD("AC4DEC_aspx_mdd_generate_dummy_config() called");
    return 0;
}

/* Exported Object: AC4DEC_oamd_xy_extp_pos_unsigned_to_q15 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_oamd_xy_extp_pos_unsigned_to_q15 = NULL;

/* Demangled: DLB_r4_fft_192 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_192(void) {
    ALOGD("DLB_r4_fft_192() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_16 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_16(void) {
    ALOGD("dlb_fft_fwd_usc_16() called");
    return 0;
}

/* Demangled: AC4DEC_cch_get_num_frames_collected */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_get_num_frames_collected(void) {
    ALOGD("AC4DEC_cch_get_num_frames_collected() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L180_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L180_1 = NULL;

/* Demangled: DLB_r4_fft_720 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_720(void) {
    ALOGD("DLB_r4_fft_720() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_init(void) {
    ALOGD("AC4DEC_ac4dap_init() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_DIFFUSE_DECORR_2TO5CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_DIFFUSE_DECORR_2TO5CH = NULL;

/* Demangled: AC4DEC_decoder_query_mem_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_query_mem_info(void) {
    ALOGD("AC4DEC_decoder_query_mem_info() called");
    return 0;
}

/* Exported Object: AC4DEC_sbg_template_highres */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_sbg_template_highres = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L180_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L180_2 = NULL;

/* Demangled: AC4DEC_imsdec_fdn_coefficients_decode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_fdn_coefficients_decode(void) {
    ALOGD("AC4DEC_imsdec_fdn_coefficients_decode() called");
    return 0;
}

/* Demangled: AC4DEC_ramp_gain_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ramp_gain_process(void) {
    ALOGD("AC4DEC_ramp_gain_process() called");
    return 0;
}

/* Demangled: android::AC4Decoder::onReset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4Decoder7onResetEv(void) {
    ALOGD("_ZN7android10AC4Decoder7onResetEv() called");
    return 0;
}

/* Exported Object: AC4DEC_P_NGCS_SEG_RANGE_5TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_P_NGCS_SEG_RANGE_5TO7CH = NULL;

/* Demangled: AC4DEC_dap_mathlib_LfastdivL */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dap_mathlib_LfastdivL(void) {
    ALOGD("AC4DEC_dap_mathlib_LfastdivL() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv1_usmpL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv1_usmpL_strict(void) {
    ALOGD("DLB_blk_Liir2ssv1_usmpL_strict() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_24 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_24(void) {
    ALOGD("dlb_fft_inv_usc_24() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L480 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L480 = NULL;

/* Demangled: dlb_fft_fwd_scl_40 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_40(void) {
    ALOGD("dlb_fft_fwd_scl_40() called");
    return 0;
}

/* Demangled: android::AC4Decoder::initPorts() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4Decoder9initPortsEv(void) {
    ALOGD("_ZN7android10AC4Decoder9initPortsEv() called");
    return 0;
}

/* Exported Object: AC4DEC_AA_NGCS_SEG_STEERING_2TO6CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AA_NGCS_SEG_STEERING_2TO6CH = NULL;

/* Exported Object: AC4DEC_CHANNEL_MAP_340_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_340_0 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L720_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L720_1 = NULL;

/* Exported Object: AC4DEC_OAMDI_DIV_CODE_TO_AMOUNT */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_OAMDI_DIV_CODE_TO_AMOUNT = NULL;

/* Demangled: AC4DEC_hmac_sha256_calculate_digest_stride */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hmac_sha256_calculate_digest_stride(void) {
    ALOGD("AC4DEC_hmac_sha256_calculate_digest_stride() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisS_init */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisS_init(void) {
    ALOGD("DLB_qmf_analysisS_init() called");
    return 0;
}

/* Exported Object: AC4DEC_CHANNEL_MAP_340_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_340_1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L720_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L720_2 = NULL;

/* Demangled: AC4DEC_metadata_delay_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_open(void) {
    ALOGD("AC4DEC_metadata_delay_open() called");
    return 0;
}

/* Demangled: dlb_blk_LminLLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LminLLL_flex(void) {
    ALOGD("dlb_blk_LminLLL_flex() called");
    return 0;
}

/* Demangled: DLB_blk_LmixL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixL_strict(void) {
    ALOGD("DLB_blk_LmixL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L24 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L24 = NULL;

/* Demangled: DLB_r4_fft_20 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_20(void) {
    ALOGD("DLB_r4_fft_20() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisL_copy_states */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_copy_states(void) {
    ALOGD("DLB_qmf_synthesisL_copy_states() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_reader_get_presentation_info_cb */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_get_presentation_info_cb(void) {
    ALOGD("AC4DEC_ac4toc_reader_get_presentation_info_cb() called");
    return 0;
}

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR48KHZ_BS384S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR48KHZ_BS384S = NULL;

/* Demangled: AC4DEC_dlb_bitbuf_fast_read */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_fast_read(void) {
    ALOGD("AC4DEC_dlb_bitbuf_fast_read() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_get_max_samples_per_channel */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_get_max_samples_per_channel(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_get_max_samples_per_channel() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD64_alpha6_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD64_alpha6_0 = NULL;

/* Exported Object: AC4DEC_tree_huff_code_ims */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ims = NULL;

/* Demangled: DLB_BLsaddBLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLsaddBLL_strict(void) {
    ALOGD("DLB_BLsaddBLL_strict() called");
    return 0;
}

/* Demangled: AC4DEC_cx_allpass_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cx_allpass_query_memory(void) {
    ALOGD("AC4DEC_cx_allpass_query_memory() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L180 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L180 = NULL;

/* Demangled: AC4DEC_oamt_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamt_process(void) {
    ALOGD("AC4DEC_oamt_process() called");
    return 0;
}

/* Exported Object: AC4DEC_rts_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_rts_tab = NULL;

/* Exported Object: AC4DEC_WindowKBD180_alpha5_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD180_alpha5_0 = NULL;

/* Demangled: dlb_fft_fwd_scl_45 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_45(void) {
    ALOGD("dlb_fft_fwd_scl_45() called");
    return 0;
}

/* Demangled: AC4DEC_q2le_process_linear */
extern "C" __attribute__((visibility("default"))) int AC4DEC_q2le_process_linear(void) {
    ALOGD("AC4DEC_q2le_process_linear() called");
    return 0;
}

/* Demangled: AC4DEC_mult_UM_1ch_no_decorr */
extern "C" __attribute__((visibility("default"))) int AC4DEC_mult_UM_1ch_no_decorr(void) {
    ALOGD("AC4DEC_mult_UM_1ch_no_decorr() called");
    return 0;
}

/* Exported Object: AC4DEC_envelope_cdf_lut_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_envelope_cdf_lut_tab = NULL;

/* Exported Object: AC4DEC_WindowKBD60_alpha5_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD60_alpha5_0 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L640 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L640 = NULL;

/* Demangled: DLB_r4_fft_24 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_24(void) {
    ALOGD("DLB_r4_fft_24() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_reset(void) {
    ALOGD("AC4DEC_ngcs_reset() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_loudness_correction_factor_set */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_loudness_correction_factor_set(void) {
    ALOGD("AC4DEC_imsdec_loudness_correction_factor_set() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_query_mem(void) {
    ALOGD("AC4DEC_oamdi_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_ac4parser_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4parser_open(void) {
    ALOGD("AC4DEC_ac4parser_open() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_dimensional_trim_get_trim_bypass */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_dimensional_trim_get_trim_bypass(void) {
    ALOGD("AC4DEC_oamdi_dimensional_trim_get_trim_bypass() called");
    return 0;
}

/* Demangled: dlb_blk_LmixLLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmixLLL_flex(void) {
    ALOGD("dlb_blk_LmixLLL_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_48 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_48(void) {
    ALOGD("dlb_fft_fwd_scl_48() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_set_oamd_from_group_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_set_oamd_from_group_info(void) {
    ALOGD("AC4DEC_ac4toc_set_oamd_from_group_info() called");
    return 0;
}

/* Demangled: AC4DEC_agc_calc_alpha_mid */
extern "C" __attribute__((visibility("default"))) int AC4DEC_agc_calc_alpha_mid(void) {
    ALOGD("AC4DEC_agc_calc_alpha_mid() called");
    return 0;
}

/* Demangled: AC4DEC_asf_read_spectral_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_asf_read_spectral_data(void) {
    ALOGD("AC4DEC_asf_read_spectral_data() called");
    return 0;
}

/* Demangled: DLB_blk_LfirUL_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LfirUL_set_coef(void) {
    ALOGD("DLB_blk_LfirUL_set_coef() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_legacy */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_legacy(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_legacy() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_144 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_144(void) {
    ALOGD("dlb_fft_fwd_usc_144() called");
    return 0;
}

/* Demangled: AC4DEC_ims_il_is_max_in_ch_mode_mono */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ims_il_is_max_in_ch_mode_mono(void) {
    ALOGD("AC4DEC_ims_il_is_max_in_ch_mode_mono() called");
    return 0;
}

/* Demangled: AC4DEC_oamd_reader_parse_joc_oamd_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_reader_parse_joc_oamd_data(void) {
    ALOGD("AC4DEC_oamd_reader_parse_joc_oamd_data() called");
    return 0;
}

/* Demangled: AC4DEC_obj_render_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_obj_render_init(void) {
    ALOGD("AC4DEC_obj_render_init() called");
    return 0;
}

/* Demangled: dlb_blk_Lmix_shlUL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmix_shlUL_flex(void) {
    ALOGD("dlb_blk_Lmix_shlUL_flex() called");
    return 0;
}

/* Exported Object: vtable for android::AC4Decoder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10AC4DecoderE = NULL;

/* Exported Object: vtable for android::List<android::SimpleSoftOMXComponent::BufferInfo*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE = NULL;

/* Demangled: AC4DEC_sv_dual_end_reset */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sv_dual_end_reset(void) {
    ALOGD("AC4DEC_sv_dual_end_reset() called");
    return 0;
}

/* Demangled: AC4DEC_asf_read_section_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_asf_read_section_data(void) {
    ALOGD("AC4DEC_asf_read_section_data() called");
    return 0;
}

/* Demangled: AC4DEC_mdct_to_qmf_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_mdct_to_qmf_close(void) {
    ALOGD("AC4DEC_mdct_to_qmf_close() called");
    return 0;
}

/* Demangled: AC4DEC_arle_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_init(void) {
    ALOGD("AC4DEC_arle_init() called");
    return 0;
}

/* Demangled: AC4DEC_volume_and_ieq_preset_init_copy */
extern "C" __attribute__((visibility("default"))) int AC4DEC_volume_and_ieq_preset_init_copy(void) {
    ALOGD("AC4DEC_volume_and_ieq_preset_init_copy() called");
    return 0;
}

/* Exported Object: AC4DEC_IMS_BANDING_SCHEME_ANE_LR */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_IMS_BANDING_SCHEME_ANE_LR = NULL;

/* Exported Object: AC4DEC_WindowKBD960_alpha3_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD960_alpha3_0 = NULL;

/* Demangled: DLB_vec_UnormSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_UnormSU_strict(void) {
    ALOGD("DLB_vec_UnormSU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_288 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_288(void) {
    ALOGD("DLB_r4_inv_fft_288() called");
    return 0;
}

/* Demangled: AC4DEC_ssfdec_get_transform_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ssfdec_get_transform_info(void) {
    ALOGD("AC4DEC_ssfdec_get_transform_info() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_set_has_oa_element_object_description */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_set_has_oa_element_object_description(void) {
    ALOGD("AC4DEC_oamdi_set_has_oa_element_object_description() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dec_get_acpl_config_index */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dec_get_acpl_config_index(void) {
    ALOGD("AC4DEC_ac4dec_get_acpl_config_index() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_40 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_40(void) {
    ALOGD("DLB_r4_inv_fft_40() called");
    return 0;
}

/* Exported Object: AC4DEC_sbg_template_highres_subsampled */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_sbg_template_highres_subsampled = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L360 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L360 = NULL;

/* Demangled: AC4DEC_rsrc_get_output_delay */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rsrc_get_output_delay(void) {
    ALOGD("AC4DEC_rsrc_get_output_delay() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_init_smoothed_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_init_smoothed_gain(void) {
    ALOGD("AC4DEC_dvlim_init_smoothed_gain() called");
    return 0;
}

/* Demangled: AC4DEC_evo_check_bitstream_protection */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_check_bitstream_protection(void) {
    ALOGD("AC4DEC_evo_check_bitstream_protection() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_512 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_512(void) {
    ALOGD("dlb_fft_inv_usc_512() called");
    return 0;
}

/* Demangled: AC4DEC_dvlim_set_hard_clip */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dvlim_set_hard_clip(void) {
    ALOGD("AC4DEC_dvlim_set_hard_clip() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD32_alpha6_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD32_alpha6_0 = NULL;

/* Demangled: dlb_fft_fwd_usc_320 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_320(void) {
    ALOGD("dlb_fft_fwd_usc_320() called");
    return 0;
}

/* Demangled: AC4DEC_ph90_qmf_get_filter_length */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ph90_qmf_get_filter_length(void) {
    ALOGD("AC4DEC_ph90_qmf_get_filter_length() called");
    return 0;
}

/* Exported Object: AC4DEC_random_noise_table */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_random_noise_table = NULL;

/* Demangled: DLB_r4_fft_768_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_768_s(void) {
    ALOGD("DLB_r4_fft_768_s() called");
    return 0;
}

/* Demangled: AC4DEC_agc_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_agc_init(void) {
    ALOGD("AC4DEC_agc_init() called");
    return 0;
}

/* Demangled: AC4DEC_ps_select */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ps_select(void) {
    ALOGD("AC4DEC_ps_select() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_ajoc */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_ajoc = NULL;

/* Demangled: AC4DEC_oamd_reader_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_reader_query_mem(void) {
    ALOGD("AC4DEC_oamd_reader_query_mem() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2df1L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2df1L_set_coef(void) {
    ALOGD("DLB_blk_Liir2df1L_set_coef() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_288_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_288_s(void) {
    ALOGD("DLB_r4_inv_fft_288_s() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P4_32_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4_32_vec_syn = NULL;

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: AC4DEC_lvl_calc_ng_scale */
extern "C" __attribute__((visibility("default"))) int AC4DEC_lvl_calc_ng_scale(void) {
    ALOGD("AC4DEC_lvl_calc_ng_scale() called");
    return 0;
}

/* Demangled: AC4DEC_dequantize_coefficients */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dequantize_coefficients(void) {
    ALOGD("AC4DEC_dequantize_coefficients() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_45 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_45(void) {
    ALOGD("DLB_r4_inv_fft_45() called");
    return 0;
}

/* Demangled: AC4DEC_phase90_filter_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_phase90_filter_query_memory(void) {
    ALOGD("AC4DEC_phase90_filter_query_memory() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_NGCS_SEG_STEERING_2TO4CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_NGCS_SEG_STEERING_2TO4CH = NULL;

/* Demangled: AC4DEC_sap_parse_chparam_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sap_parse_chparam_info(void) {
    ALOGD("AC4DEC_sap_parse_chparam_info() called");
    return 0;
}

/* Demangled: DLB_BLmaxBLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmaxBLL_strict(void) {
    ALOGD("DLB_BLmaxBLL_strict() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv1efL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv1efL_strict(void) {
    ALOGD("DLB_blk_Liir2ssv1efL_strict() called");
    return 0;
}

/* Demangled: DLB_r4_rfft_nn */
extern "C" __attribute__((visibility("default"))) int DLB_r4_rfft_nn(void) {
    ALOGD("DLB_r4_rfft_nn() called");
    return 0;
}

/* Demangled: AC4DEC_ph90_qmf_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ph90_qmf_query_memory(void) {
    ALOGD("AC4DEC_ph90_qmf_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_output_stage_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_output_stage_query_mem(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_output_stage_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_rand_gen_get_value */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rand_gen_get_value(void) {
    ALOGD("AC4DEC_rand_gen_get_value() called");
    return 0;
}

/* Demangled: AC4DEC_cch_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_cch_query_mem(void) {
    ALOGD("AC4DEC_cch_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_ims_de_band_config_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_ims_de_band_config_get(void) {
    ALOGD("AC4DEC_imsdec_ims_de_band_config_get() called");
    return 0;
}

/* Exported Object: AC4DEC_a_isf_bh_5_3_0_0_reorder */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_isf_bh_5_3_0_0_reorder = NULL;

/* Demangled: AC4DEC_ramp_gain_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ramp_gain_query_mem(void) {
    ALOGD("AC4DEC_ramp_gain_query_mem() called");
    return 0;
}

/* Exported Object: AC4DEC_a_dvlim_win_32 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_dvlim_win_32 = NULL;

/* Demangled: dlb_fft_fwd_usc_20 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_20(void) {
    ALOGD("dlb_fft_fwd_usc_20() called");
    return 0;
}

/* Demangled: ac4dec_wrapper_open */
extern "C" __attribute__((visibility("default"))) int ac4dec_wrapper_open(void) {
    ALOGD("ac4dec_wrapper_open() called");
    return 0;
}

/* Exported Object: AC4DEC_P_PHASE_SHIFT_5TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_P_PHASE_SHIFT_5TO7CH = NULL;

/* Demangled: DLB_r4_inv_fft_48 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_48(void) {
    ALOGD("DLB_r4_inv_fft_48() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_160 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_160(void) {
    ALOGD("dlb_fft_inv_usc_160() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_ac4dec_v1_output_stage_config */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_output_stage_config(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_output_stage_config() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L45 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L45 = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P5_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_vec_syn = NULL;

/* Demangled: AC4DEC_asa_event_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_asa_event_process(void) {
    ALOGD("AC4DEC_asa_event_process() called");
    return 0;
}

/* Demangled: AC4DEC_metadata_delay_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_metadata_delay_close(void) {
    ALOGD("AC4DEC_metadata_delay_close() called");
    return 0;
}

/* Demangled: AC4DEC_obj_render_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_obj_render_process(void) {
    ALOGD("AC4DEC_obj_render_process() called");
    return 0;
}

/* Demangled: AC4DEC_rsrc_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_rsrc_init(void) {
    ALOGD("AC4DEC_rsrc_init() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_set_dimensional_trim_defaults */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_set_dimensional_trim_defaults(void) {
    ALOGD("AC4DEC_oamdi_set_dimensional_trim_defaults() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_24 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_24(void) {
    ALOGD("dlb_fft_fwd_usc_24() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_speaker_virtualizer_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_speaker_virtualizer_query_mem(void) {
    ALOGD("AC4DEC_ac4dap_speaker_virtualizer_query_mem() called");
    return 0;
}

/* Demangled: AC4DEC_emdf_get_max_num_pl_substreams */
extern "C" __attribute__((visibility("default"))) int AC4DEC_emdf_get_max_num_pl_substreams(void) {
    ALOGD("AC4DEC_emdf_get_max_num_pl_substreams() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_get_obj_info_blk */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_obj_info_blk(void) {
    ALOGD("AC4DEC_oamdi_get_obj_info_blk() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv1efL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv1efL_flex(void) {
    ALOGD("dlb_blk_Liir2ssv1efL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L48 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L48 = NULL;

/* Demangled: DLB_r4_fft_240_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_240_s(void) {
    ALOGD("DLB_r4_fft_240_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_30 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_30(void) {
    ALOGD("dlb_fft_inv_usc_30() called");
    return 0;
}

/* Demangled: AC4DEC_surround_compressor_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_surround_compressor_query_memory(void) {
    ALOGD("AC4DEC_surround_compressor_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_evo_pack_md_set */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_pack_md_set(void) {
    ALOGD("AC4DEC_evo_pack_md_set() called");
    return 0;
}

/* Demangled: AC4DEC_oaril_get_scale_factor */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oaril_get_scale_factor(void) {
    ALOGD("AC4DEC_oaril_get_scale_factor() called");
    return 0;
}

/* Demangled: AC4DEC_evo_calculate_bitstream_protection */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_calculate_bitstream_protection(void) {
    ALOGD("AC4DEC_evo_calculate_bitstream_protection() called");
    return 0;
}

/* Demangled: DLB_vec_IeqLLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_IeqLLU_strict(void) {
    ALOGD("DLB_vec_IeqLLU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_12_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_12_s(void) {
    ALOGD("DLB_r4_inv_fft_12_s() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_decode */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_decode(void) {
    ALOGD("dlb_ac4dec_v2_decode() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L64_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L64_cos = NULL;

/* Demangled: DLB_blk_Liir2ssv3aLU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv3aLU_inplace_strict(void) {
    ALOGD("DLB_blk_Liir2ssv3aLU_inplace_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_640 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_640(void) {
    ALOGD("DLB_r4_inv_fft_640() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_32 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_32(void) {
    ALOGD("dlb_fft_inv_usc_32() called");
    return 0;
}

/* Demangled: AC4DEC_acpldec_process_1ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_acpldec_process_1ch(void) {
    ALOGD("AC4DEC_acpldec_process_1ch() called");
    return 0;
}

/* Demangled: AC4DEC_sap_process_channels */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sap_process_channels(void) {
    ALOGD("AC4DEC_sap_process_channels() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L30 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L30 = NULL;

/* Demangled: dlb_fft_inv_scl_1024 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_1024(void) {
    ALOGD("dlb_fft_inv_scl_1024() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_48_vec_syn = NULL;

/* Demangled: AC4DEC_ngcs_hcqmf_banded_power */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_hcqmf_banded_power(void) {
    ALOGD("AC4DEC_ngcs_hcqmf_banded_power() called");
    return 0;
}

/* Exported Object: mdd_max_instances */
extern "C" __attribute__((visibility("default"))) void* mdd_max_instances = NULL;

/* Demangled: AC4DEC_renderer_normalize_by_energy */
extern "C" __attribute__((visibility("default"))) int AC4DEC_renderer_normalize_by_energy(void) {
    ALOGD("AC4DEC_renderer_normalize_by_energy() called");
    return 0;
}

/* Demangled: dolby::Ac4DecClient::updateparamsbyoutput(ac4dec_wrapper_io_params_s*, AC4EXEC*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12Ac4DecClient20updateparamsbyoutputEP26ac4dec_wrapper_io_params_sP7AC4EXEC(void) {
    ALOGD("_ZN5dolby12Ac4DecClient20updateparamsbyoutputEP26ac4dec_wrapper_io_params_sP7AC4EXEC() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_reader_get_substream_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_get_substream_info(void) {
    ALOGD("AC4DEC_ac4toc_reader_get_substream_info() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_init(void) {
    ALOGD("AC4DEC_hp_height_init() called");
    return 0;
}

/* Demangled: AC4DEC_evo_close */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_close(void) {
    ALOGD("AC4DEC_evo_close() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_mdd_generate_dummy_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_mdd_generate_dummy_data(void) {
    ALOGD("AC4DEC_imsdec_mdd_generate_dummy_data() called");
    return 0;
}

/* Demangled: AC4DEC_evo_mem_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_mem_init(void) {
    ALOGD("AC4DEC_evo_mem_init() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv1L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv1L_flex(void) {
    ALOGD("dlb_blk_Liir2ssv1L_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L32 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L32 = NULL;

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: ac4dec_wrapper_decode */
extern "C" __attribute__((visibility("default"))) int ac4dec_wrapper_decode(void) {
    ALOGD("ac4dec_wrapper_decode() called");
    return 0;
}

/* Demangled: AC4DEC_convert_downmix_to_internal_mode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_convert_downmix_to_internal_mode(void) {
    ALOGD("AC4DEC_convert_downmix_to_internal_mode() called");
    return 0;
}

/* Demangled: AC4DEC_arle_constrain_compressor_threshold */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_constrain_compressor_threshold(void) {
    ALOGD("AC4DEC_arle_constrain_compressor_threshold() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L60 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L60 = NULL;

/* Demangled: dlb_fft_inv_usc_36 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_36(void) {
    ALOGD("dlb_fft_inv_usc_36() called");
    return 0;
}

/* Demangled: AC4DEC_ieq_calc_loudness */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ieq_calc_loudness(void) {
    ALOGD("AC4DEC_ieq_calc_loudness() called");
    return 0;
}

/* Demangled: AC4DEC_memlib_pool_block_begin */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_pool_block_begin(void) {
    ALOGD("AC4DEC_memlib_pool_block_begin() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_huff_code_de_diff_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_de_diff_0 = NULL;

/* Demangled: AC4DEC_bed_distrib_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_bed_distrib_process(void) {
    ALOGD("AC4DEC_bed_distrib_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L120 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L120 = NULL;

/* Demangled: DLB_r4_fft_30 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_30(void) {
    ALOGD("DLB_r4_fft_30() called");
    return 0;
}

/* Demangled: dolby::Ac4DynamicConfig::~Ac4DynamicConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16Ac4DynamicConfigD2Ev(void) {
    ALOGD("_ZN5dolby16Ac4DynamicConfigD2Ev() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_close */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_close(void) {
    ALOGD("dlb_ac4dec_v2_close() called");
    return 0;
}

/* Exported Object: AC4DEC_tree_asf_booksnf */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_asf_booksnf = NULL;

/* Exported Object: AC4DEC_tree_huff_code_de_diff_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_tree_huff_code_de_diff_1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L48_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L48_1 = NULL;

/* Demangled: AC4DEC_oaril_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oaril_query_mem(void) {
    ALOGD("AC4DEC_oaril_query_mem() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv3L_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv3L_inplace_strict(void) {
    ALOGD("DLB_blk_Liir2ssv3L_inplace_strict() called");
    return 0;
}

/* Demangled: DLB_mfb_p10km_analysisL_query_scratch */
extern "C" __attribute__((visibility("default"))) int DLB_mfb_p10km_analysisL_query_scratch(void) {
    ALOGD("DLB_mfb_p10km_analysisL_query_scratch() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dap_log_content_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_log_content_init(void) {
    ALOGD("AC4DEC_ac4dap_log_content_init() called");
    return 0;
}

/* Demangled: AC4DEC_ph90_qmf_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ph90_qmf_init(void) {
    ALOGD("AC4DEC_ph90_qmf_init() called");
    return 0;
}

/* Exported Object: AC4DEC_ptr_bits */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ptr_bits = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L48_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L48_2 = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_8_vec_ana = NULL;

/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_peak_iir1L_setup(void) {
    ALOGD("DLB_blk_Lattack_decay_peak_iir1L_setup() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L36 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L36 = NULL;

/* Demangled: DLB_r4_fft_32 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_32(void) {
    ALOGD("DLB_r4_fft_32() called");
    return 0;
}

/* Demangled: AC4DEC_imdct_query_mem */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imdct_query_mem(void) {
    ALOGD("AC4DEC_imdct_query_mem() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L64 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L64 = NULL;

/* Demangled: DLB_r4_inv_fft_4_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_4_s(void) {
    ALOGD("DLB_r4_inv_fft_4_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_60 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_60(void) {
    ALOGD("dlb_fft_inv_scl_60() called");
    return 0;
}

/* Exported Object: dlb_cos_48_full */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_48_full = NULL;

/* Demangled: AC4DEC_delay_line_write_indirect */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_line_write_indirect(void) {
    ALOGD("AC4DEC_delay_line_write_indirect() called");
    return 0;
}

/* Demangled: AC4DEC_hp_height_reverb_peek */
extern "C" __attribute__((visibility("default"))) int AC4DEC_hp_height_reverb_peek(void) {
    ALOGD("AC4DEC_hp_height_reverb_peek() called");
    return 0;
}

/* Demangled: AC4DEC_interpol_mult_UM_2ch_no_decorr */
extern "C" __attribute__((visibility("default"))) int AC4DEC_interpol_mult_UM_2ch_no_decorr(void) {
    ALOGD("AC4DEC_interpol_mult_UM_2ch_no_decorr() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L960 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L960 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L192 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L192 = NULL;

/* Demangled: AC4DEC_dlb_ac4dec_v1_input_stage_get_num_channels */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_ac4dec_v1_input_stage_get_num_channels(void) {
    ALOGD("AC4DEC_dlb_ac4dec_v1_input_stage_get_num_channels() called");
    return 0;
}

/* Demangled: AC4DEC_loud_stereo_dmx_coeff_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_loud_stereo_dmx_coeff_init(void) {
    ALOGD("AC4DEC_loud_stereo_dmx_coeff_init() called");
    return 0;
}

/* Exported Object: DLB_MFB_TWID128E */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_TWID128E = NULL;

/* Demangled: dlb_inverseModulationReal */
extern "C" __attribute__((visibility("default"))) int dlb_inverseModulationReal(void) {
    ALOGD("dlb_inverseModulationReal() called");
    return 0;
}

/* Demangled: AC4DEC_get_new_chirp_factors */
extern "C" __attribute__((visibility("default"))) int AC4DEC_get_new_chirp_factors(void) {
    ALOGD("AC4DEC_get_new_chirp_factors() called");
    return 0;
}

/* Exported Object: AC4DEC_CHANNEL_MAP_3_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_3_0 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L720 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L720 = NULL;

/* Exported Object: AC4DEC_WindowKBD144_alpha5_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD144_alpha5_0 = NULL;

/* Demangled: DLB_r4_fft_36 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_36(void) {
    ALOGD("DLB_r4_fft_36() called");
    return 0;
}

/* Exported Object: AC4DEC_CHANNEL_MAP_3_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_CHANNEL_MAP_3_1 = NULL;

/* Demangled: dlb_fft_inv_scl_64 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_64(void) {
    ALOGD("dlb_fft_inv_scl_64() called");
    return 0;
}

/* Demangled: dlb_blk_Lmpy_shlLLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmpy_shlLLU_flex(void) {
    ALOGD("dlb_blk_Lmpy_shlLLU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L128 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L128 = NULL;

/* Demangled: DLB_r4_fft_384 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_384(void) {
    ALOGD("DLB_r4_fft_384() called");
    return 0;
}

/* Demangled: AC4DEC_arle_compressor_threshold_calculation */
extern "C" __attribute__((visibility("default"))) int AC4DEC_arle_compressor_threshold_calculation(void) {
    ALOGD("AC4DEC_arle_compressor_threshold_calculation() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_hf_gen */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_hf_gen(void) {
    ALOGD("AC4DEC_aspx_hf_gen() called");
    return 0;
}

/* Exported Object: AC4DEC_ltp_quant32_rec */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_ltp_quant32_rec = NULL;

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR44KHZ1_BS192S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR44KHZ1_BS192S = NULL;

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR48KHZ_BS192S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR48KHZ_BS192S = NULL;

/* Demangled: AC4DEC_de_get_enhancement_gain */
extern "C" __attribute__((visibility("default"))) int AC4DEC_de_get_enhancement_gain(void) {
    ALOGD("AC4DEC_de_get_enhancement_gain() called");
    return 0;
}

/* Demangled: AC4DEC_gain_calc_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_gain_calc_process(void) {
    ALOGD("AC4DEC_gain_calc_process() called");
    return 0;
}

/* Demangled: DLB_blk_Lattack_decay_iir1L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_iir1L_setup(void) {
    ALOGD("DLB_blk_Lattack_decay_iir1L_setup() called");
    return 0;
}

/* Exported Object: AC4DEC_IMS_BANDING_SCHEME_ANE_MR */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_IMS_BANDING_SCHEME_ANE_MR = NULL;

/* Exported Object: AC4DEC_offset_db_to_lin_inv */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_offset_db_to_lin_inv = NULL;

/* Demangled: dlb_fft_inv_scl_288 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_288(void) {
    ALOGD("dlb_fft_inv_scl_288() called");
    return 0;
}

/* Demangled: dlb_ac4dec_v2_dec_set_dialog_enhancement_preference */
extern "C" __attribute__((visibility("default"))) int dlb_ac4dec_v2_dec_set_dialog_enhancement_preference(void) {
    ALOGD("dlb_ac4dec_v2_dec_set_dialog_enhancement_preference() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_4096 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_4096(void) {
    ALOGD("DLB_r4_inv_fft_4096() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_open(void) {
    ALOGD("AC4DEC_imsdec_open() called");
    return 0;
}

/* Demangled: AC4DEC_bed_mixer_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_bed_mixer_init(void) {
    ALOGD("AC4DEC_bed_mixer_init() called");
    return 0;
}

/* Demangled: AC4DEC_omg_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_omg_init(void) {
    ALOGD("AC4DEC_omg_init() called");
    return 0;
}

/* Demangled: DLB_load_mfb_p10km_analysisL_filter_state */
extern "C" __attribute__((visibility("default"))) int DLB_load_mfb_p10km_analysisL_filter_state(void) {
    ALOGD("DLB_load_mfb_p10km_analysisL_filter_state() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_32_vec_syn = NULL;

/* Demangled: AC4DEC_ac4toc_reader_set_mode */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_set_mode(void) {
    ALOGD("AC4DEC_ac4toc_reader_set_mode() called");
    return 0;
}

/* Demangled: AC4DEC_scale_input_2ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_scale_input_2ch(void) {
    ALOGD("AC4DEC_scale_input_2ch() called");
    return 0;
}

/* Exported Object: AC4DEC_DVLIM_ONE_OVER_256_L */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DVLIM_ONE_OVER_256_L = NULL;

/* Demangled: AC4DEC_sha256_get_digest */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sha256_get_digest(void) {
    ALOGD("AC4DEC_sha256_get_digest() called");
    return 0;
}

/* Exported Object: vtable for dolby::Ac4DynamicConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16Ac4DynamicConfigE = NULL;

/* Demangled: android::AC4Decoder::internalSetConfig(OMX_INDEXTYPE, void*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4Decoder17internalSetConfigE13OMX_INDEXTYPEPvPb(void) {
    ALOGD("_ZN7android10AC4Decoder17internalSetConfigE13OMX_INDEXTYPEPvPb() called");
    return 0;
}

/* Demangled: DLB_blk_LsubLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LsubLL_strict(void) {
    ALOGD("DLB_blk_LsubLL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L240 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L240 = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P4_32 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4_32 = NULL;

/* Demangled: AC4DEC_ac4toc_reader_open */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_open(void) {
    ALOGD("AC4DEC_ac4toc_reader_open() called");
    return 0;
}

/* Demangled: DLB_CLmpy_shlCLSIU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpy_shlCLSIU_strict(void) {
    ALOGD("DLB_CLmpy_shlCLSIU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_72_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_72_s(void) {
    ALOGD("DLB_r4_inv_fft_72_s() called");
    return 0;
}

/* Demangled: AC4DEC_generate_dither */
extern "C" __attribute__((visibility("default"))) int AC4DEC_generate_dither(void) {
    ALOGD("AC4DEC_generate_dither() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_get_substream_segment_info */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_get_substream_segment_info(void) {
    ALOGD("AC4DEC_ac4toc_get_substream_segment_info() called");
    return 0;
}

/* Demangled: AC4DEC_asa_calculate_skewness */
extern "C" __attribute__((visibility("default"))) int AC4DEC_asa_calculate_skewness(void) {
    ALOGD("AC4DEC_asa_calculate_skewness() called");
    return 0;
}

/* Demangled: input_stage_init_2 */
extern "C" __attribute__((visibility("default"))) int input_stage_init_2(void) {
    ALOGD("input_stage_init_2() called");
    return 0;
}

/* Exported Object: AC4DEC_a_dvlim_win_40 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_a_dvlim_win_40 = NULL;

/* Demangled: DLB_blk_LmaxLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmaxLL_strict(void) {
    ALOGD("DLB_blk_LmaxLL_strict() called");
    return 0;
}

/* Demangled: AC4DEC_calc_nrg_per_subband */
extern "C" __attribute__((visibility("default"))) int AC4DEC_calc_nrg_per_subband(void) {
    ALOGD("AC4DEC_calc_nrg_per_subband() called");
    return 0;
}

/* Demangled: AC4DEC_evo_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_init(void) {
    ALOGD("AC4DEC_evo_init() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_360_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_360_s(void) {
    ALOGD("DLB_r4_inv_fft_360_s() called");
    return 0;
}

/* Demangled: dlb_vec_LmpyLSU_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LmpyLSU_inplace_flex(void) {
    ALOGD("dlb_vec_LmpyLSU_inplace_flex() called");
    return 0;
}

/* Demangled: AC4DEC_oamd_reader_parse_dyndata_single */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_reader_parse_dyndata_single(void) {
    ALOGD("AC4DEC_oamd_reader_parse_dyndata_single() called");
    return 0;
}

/* Exported Object: AC4DEC_A_SPEAKER_CONFIG_SPK_POS */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SPEAKER_CONFIG_SPK_POS = NULL;

/* Exported Object: AC4DEC_DVLIM_ONE_OVER_256_S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_DVLIM_ONE_OVER_256_S = NULL;

/* Demangled: AC4DEC_oamdi_object_divergence_from_lr_c_db */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_object_divergence_from_lr_c_db(void) {
    ALOGD("AC4DEC_oamdi_object_divergence_from_lr_c_db() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_30 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_30(void) {
    ALOGD("dlb_fft_fwd_usc_30() called");
    return 0;
}

/* Demangled: AC4DEC_ac4toc_reader_get_substream_info_ext */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4toc_reader_get_substream_info_ext(void) {
    ALOGD("AC4DEC_ac4toc_reader_get_substream_info_ext() called");
    return 0;
}

/* Exported Object: AC4DEC_A_LDN_NUM_SL_TABLE_VALS */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_LDN_NUM_SL_TABLE_VALS = NULL;

/* Demangled: AC4DEC_ajoc_ir */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ajoc_ir(void) {
    ALOGD("AC4DEC_ajoc_ir() called");
    return 0;
}

/* Demangled: AC4DEC_imsdec_loudness_target_correction_gain_get */
extern "C" __attribute__((visibility("default"))) int AC4DEC_imsdec_loudness_target_correction_gain_get(void) {
    ALOGD("AC4DEC_imsdec_loudness_target_correction_gain_get() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L90 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L90 = NULL;

/* Demangled: DLB_fft_Linv_unscaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_Linv_unscaledCL(void) {
    ALOGD("DLB_fft_Linv_unscaledCL() called");
    return 0;
}

/* Demangled: DLB_time_div */
extern "C" __attribute__((visibility("default"))) int DLB_time_div(void) {
    ALOGD("DLB_time_div() called");
    return 0;
}

/* Demangled: AC4DEC_agc_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_agc_query_memory(void) {
    ALOGD("AC4DEC_agc_query_memory() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_32 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_32(void) {
    ALOGD("dlb_fft_fwd_usc_32() called");
    return 0;
}

/* Demangled: AC4DEC_memlib_block_start */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_block_start(void) {
    ALOGD("AC4DEC_memlib_block_start() called");
    return 0;
}

/* Demangled: AC4DEC_omg_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_omg_process(void) {
    ALOGD("AC4DEC_omg_process() called");
    return 0;
}

/* Demangled: DLB_CLCLmix7CL14SU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLCLmix7CL14SU_strict(void) {
    ALOGD("DLB_CLCLmix7CL14SU_strict() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_init(void) {
    ALOGD("AC4DEC_ngcs_init() called");
    return 0;
}

/* Exported Object: AC4DEC_WindowKBD768 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD768 = NULL;

/* Demangled: AC4DEC_oamdi_get_max_bitstream_size */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_get_max_bitstream_size(void) {
    ALOGD("AC4DEC_oamdi_get_max_bitstream_size() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L480 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L480 = NULL;

/* Demangled: AC4DEC_sv_dual_end_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sv_dual_end_init(void) {
    ALOGD("AC4DEC_sv_dual_end_init() called");
    return 0;
}

/* Demangled: AC4DEC_dlb_bitbuf_write */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dlb_bitbuf_write(void) {
    ALOGD("AC4DEC_dlb_bitbuf_write() called");
    return 0;
}

/* Demangled: AC4DEC_fboar_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_fboar_query_memory(void) {
    ALOGD("AC4DEC_fboar_query_memory() called");
    return 0;
}

/* Demangled: DLB_r4_fft_16_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_16_s(void) {
    ALOGD("DLB_r4_fft_16_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_40 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_40(void) {
    ALOGD("dlb_fft_inv_usc_40() called");
    return 0;
}

/* Demangled: AC4DEC_sv_init */
extern "C" __attribute__((visibility("default"))) int AC4DEC_sv_init(void) {
    ALOGD("AC4DEC_sv_init() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_36 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_36(void) {
    ALOGD("dlb_fft_fwd_usc_36() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_640 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_640(void) {
    ALOGD("dlb_fft_inv_scl_640() called");
    return 0;
}

/* Demangled: AC4DEC_memlib_get_mem_section_size */
extern "C" __attribute__((visibility("default"))) int AC4DEC_memlib_get_mem_section_size(void) {
    ALOGD("AC4DEC_memlib_get_mem_section_size() called");
    return 0;
}

/* Demangled: AC4DEC_ac4dsp_CLmpy_shlCLLUU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dsp_CLmpy_shlCLLUU_inplace_strict(void) {
    ALOGD("AC4DEC_ac4dsp_CLmpy_shlCLLUU_inplace_strict() called");
    return 0;
}

/* Demangled: AC4DEC_evo_init_hmac */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_init_hmac(void) {
    ALOGD("AC4DEC_evo_init_hmac() called");
    return 0;
}

/* Demangled: dlb_vec_IeqLLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_IeqLLU_flex(void) {
    ALOGD("dlb_vec_IeqLLU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L96 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L96 = NULL;

/* Demangled: DLB_r4_fft_144_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_144_s(void) {
    ALOGD("DLB_r4_fft_144_s() called");
    return 0;
}

/* Demangled: DLB_fft_shutdown */
extern "C" __attribute__((visibility("default"))) int DLB_fft_shutdown(void) {
    ALOGD("DLB_fft_shutdown() called");
    return 0;
}

/* Demangled: android::AC4Decoder::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AC4Decoder4initEPKc(void) {
    ALOGD("_ZN7android10AC4Decoder4initEPKc() called");
    return 0;
}

/* Demangled: DLB_CLmacCLLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmacCLLU_strict(void) {
    ALOGD("DLB_CLmacCLLU_strict() called");
    return 0;
}

/* Demangled: AC4DEC_speaker_config_spkr_set */
extern "C" __attribute__((visibility("default"))) int AC4DEC_speaker_config_spkr_set(void) {
    ALOGD("AC4DEC_speaker_config_spkr_set() called");
    return 0;
}

/* Demangled: DLB_r4_fft_20_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_20_s(void) {
    ALOGD("DLB_r4_fft_20_s() called");
    return 0;
}

/* Demangled: DLB_mfb_p10km_synthesisCL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_mfb_p10km_synthesisCL_query_mem(void) {
    ALOGD("DLB_mfb_p10km_synthesisCL_query_mem() called");
    return 0;
}

/* Exported Object: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR48KHZ_BS256S */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR48KHZ_BS256S = NULL;

/* Demangled: AC4DEC_oamd_mdd_generate_dummy_data */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamd_mdd_generate_dummy_data(void) {
    ALOGD("AC4DEC_oamd_mdd_generate_dummy_data() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_512 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_512(void) {
    ALOGD("dlb_fft_fwd_usc_512() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L288_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L288_cos = NULL;

/* Exported Object: AC4DEC_WindowKBD512_alpha3_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_WindowKBD512_alpha3_0 = NULL;

/* Demangled: dlb_fft_fwd_scl_60 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_60(void) {
    ALOGD("dlb_fft_fwd_scl_60() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_45 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_45(void) {
    ALOGD("dlb_fft_inv_usc_45() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_dequantize_noise_1ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_dequantize_noise_1ch(void) {
    ALOGD("AC4DEC_aspx_dequantize_noise_1ch() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_32_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_32_vec_ana = NULL;

/* Demangled: AC4DEC_ac4framer_configure */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4framer_configure(void) {
    ALOGD("AC4DEC_ac4framer_configure() called");
    return 0;
}

/* Demangled: AC4DEC_ngcs_mode_get_num_upmix_out_chans */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ngcs_mode_get_num_upmix_out_chans(void) {
    ALOGD("AC4DEC_ngcs_mode_get_num_upmix_out_chans() called");
    return 0;
}

/* Exported Object: AC4DEC_A_ROOM_CONFIG_SPKS_BACK_CENTRE */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_A_ROOM_CONFIG_SPKS_BACK_CENTRE = NULL;

/* Demangled: DLB_r4_fft_40 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_40(void) {
    ALOGD("DLB_r4_fft_40() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_576_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_576_s(void) {
    ALOGD("DLB_r4_inv_fft_576_s() called");
    return 0;
}

/* Demangled: AC4DEC_delay_line_clvec_initialize */
extern "C" __attribute__((visibility("default"))) int AC4DEC_delay_line_clvec_initialize(void) {
    ALOGD("AC4DEC_delay_line_clvec_initialize() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L72 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L72 = NULL;

/* Exported Object: AC4DEC_adaptive_noise_gain_tab */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_adaptive_noise_gain_tab = NULL;

/* Demangled: AC4DEC_evo_ll_remove_tail */
extern "C" __attribute__((visibility("default"))) int AC4DEC_evo_ll_remove_tail(void) {
    ALOGD("AC4DEC_evo_ll_remove_tail() called");
    return 0;
}

/* Demangled: dlb_CLmacCLCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmacCLCLU_flex(void) {
    ALOGD("dlb_CLmacCLCLU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L45 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L45 = NULL;

/* Demangled: dlb_fft_inv_usc_48 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_48(void) {
    ALOGD("dlb_fft_inv_usc_48() called");
    return 0;
}

/* Demangled: AC4DEC_decoder_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_decoder_process(void) {
    ALOGD("AC4DEC_decoder_process() called");
    return 0;
}

/* Demangled: AC4DEC_dequantize_ajoc_mtxdry_values */
extern "C" __attribute__((visibility("default"))) int AC4DEC_dequantize_ajoc_mtxdry_values(void) {
    ALOGD("AC4DEC_dequantize_ajoc_mtxdry_values() called");
    return 0;
}

/* Demangled: AC4DEC_aspx_hf_adjust_tsg */
extern "C" __attribute__((visibility("default"))) int AC4DEC_aspx_hf_adjust_tsg(void) {
    ALOGD("AC4DEC_aspx_hf_adjust_tsg() called");
    return 0;
}

/* Demangled: AC4DEC_oamdi_set_prog_assign */
extern "C" __attribute__((visibility("default"))) int AC4DEC_oamdi_set_prog_assign(void) {
    ALOGD("AC4DEC_oamdi_set_prog_assign() called");
    return 0;
}

/* Demangled: AC4DEC_speaker_config_count */
extern "C" __attribute__((visibility("default"))) int AC4DEC_speaker_config_count(void) {
    ALOGD("AC4DEC_speaker_config_count() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_64 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_64(void) {
    ALOGD("dlb_fft_fwd_scl_64() called");
    return 0;
}

/* Exported Object: AC4DEC_PA_NGCS_SEG_CHANNELS_5TO7CH */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_PA_NGCS_SEG_CHANNELS_5TO7CH = NULL;

/* Exported Object: AC4DEC_IMS_BANDING_SCHEME_DEN_AP */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_IMS_BANDING_SCHEME_DEN_AP = NULL;

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_544_0 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_544_0 = NULL;

/* Demangled: AC4DEC_ac4dap_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_query_memory(void) {
    ALOGD("AC4DEC_ac4dap_query_memory() called");
    return 0;
}

/* Demangled: AC4DEC_interpol_mult_UM_1ch */
extern "C" __attribute__((visibility("default"))) int AC4DEC_interpol_mult_UM_1ch(void) {
    ALOGD("AC4DEC_interpol_mult_UM_1ch() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L48 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L48 = NULL;

/* Demangled: dlb_fft_fwd_usc_160 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_160(void) {
    ALOGD("dlb_fft_fwd_usc_160() called");
    return 0;
}

/* Demangled: dolby::DlbGenClass2::~DlbGenClass2() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DlbGenClass2D2Ev(void) {
    ALOGD("_ZN5dolby12DlbGenClass2D2Ev() called");
    return 0;
}

/* Exported Object: AC4DEC_AC4TOC_CHANNEL_MAP_544_1 */
extern "C" __attribute__((visibility("default"))) void* AC4DEC_AC4TOC_CHANNEL_MAP_544_1 = NULL;

/* Demangled: AC4DEC_ac4dap_rhcqmf_process */
extern "C" __attribute__((visibility("default"))) int AC4DEC_ac4dap_rhcqmf_process(void) {
    ALOGD("AC4DEC_ac4dap_rhcqmf_process() called");
    return 0;
}

/* Demangled: AC4DEC_room_config_query_memory */
extern "C" __attribute__((visibility("default"))) int AC4DEC_room_config_query_memory(void) {
    ALOGD("AC4DEC_room_config_query_memory() called");
    return 0;
}

/* Demangled: dlb_blk_Lcrossfade_gainLS_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lcrossfade_gainLS_flex(void) {
    ALOGD("dlb_blk_Lcrossfade_gainLS_flex() called");
    return 0;
}

/* Demangled: DLB_r4_fft_45 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_45(void) {
    ALOGD("DLB_r4_fft_45() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_72 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_72(void) {
    ALOGD("dlb_fft_inv_scl_72() called");
    return 0;
}
