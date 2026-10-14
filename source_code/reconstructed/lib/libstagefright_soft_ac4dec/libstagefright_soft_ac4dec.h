/*
 * Reverse-Engineered ABI Specification for: libstagefright_soft_ac4dec.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libstagefright_soft_ac4dec.so
 */

#ifndef BEGONIA_RE_LIBSTAGEFRIGHT_SOFT_AC4DEC_H
#define BEGONIA_RE_LIBSTAGEFRIGHT_SOFT_AC4DEC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: dlb_ac4dec_reconstruct_table */
/* Demangled: dlb_ac4dec_reconstruct_table */
int dlb_ac4dec_reconstruct_table(void);

/* Symbol: AC4DEC_ngcs_steering_get_segment */
/* Demangled: AC4DEC_ngcs_steering_get_segment */
int AC4DEC_ngcs_steering_get_segment(void);

/* Symbol: AC4DEC_decoder_get_frame_duration */
/* Demangled: AC4DEC_decoder_get_frame_duration */
int AC4DEC_decoder_get_frame_duration(void);

/* Symbol: AC4DEC_sf_query_mem */
/* Demangled: AC4DEC_sf_query_mem */
int AC4DEC_sf_query_mem(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: dlb_ac4dec_v2_dec_set_loud_pres_de_enable */
/* Demangled: dlb_ac4dec_v2_dec_set_loud_pres_de_enable */
int dlb_ac4dec_v2_dec_set_loud_pres_de_enable(void);

/* Symbol: AC4DEC_tree_huff_code_aspx */
/* Demangled: AC4DEC_tree_huff_code_aspx */
extern void* AC4DEC_tree_huff_code_aspx;

/* Symbol: AC4DEC_speaker_config_add_speakers */
/* Demangled: AC4DEC_speaker_config_add_speakers */
int AC4DEC_speaker_config_add_speakers(void);

/* Symbol: dlb_num_of_non_power_two_lengths */
/* Demangled: dlb_num_of_non_power_two_lengths */
extern void* dlb_num_of_non_power_two_lengths;

/* Symbol: AC4DEC_PA_DIFFUSE_DECORR_2TO7CH */
/* Demangled: AC4DEC_PA_DIFFUSE_DECORR_2TO7CH */
extern void* AC4DEC_PA_DIFFUSE_DECORR_2TO7CH;

/* Symbol: AC4DEC_dap_mathlib_clvecdl_query_memory */
/* Demangled: AC4DEC_dap_mathlib_clvecdl_query_memory */
int AC4DEC_dap_mathlib_clvecdl_query_memory(void);

/* Symbol: AC4DEC_WindowKBD768_alpha4_0 */
/* Demangled: AC4DEC_WindowKBD768_alpha4_0 */
extern void* AC4DEC_WindowKBD768_alpha4_0;

/* Symbol: AC4DEC_oamdi_dimensional_trim_is_auto */
/* Demangled: AC4DEC_oamdi_dimensional_trim_is_auto */
int AC4DEC_oamdi_dimensional_trim_is_auto(void);

/* Symbol: DLB_blk_Liir1_shlLU_strict */
/* Demangled: DLB_blk_Liir1_shlLU_strict */
int DLB_blk_Liir1_shlLU_strict(void);

/* Symbol: DLB_r4_fft_48 */
/* Demangled: DLB_r4_fft_48 */
int DLB_r4_fft_48(void);

/* Symbol: dlb_fft_cplx_inv_usc */
/* Demangled: dlb_fft_cplx_inv_usc */
extern void* dlb_fft_cplx_inv_usc;

/* Symbol: dlb_qmf_filter_coeff_P4_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P4_vec_syn */
extern void* dlb_qmf_filter_coeff_P4_vec_syn;

/* Symbol: AC4DEC_ajoc_process */
/* Demangled: AC4DEC_ajoc_process */
int AC4DEC_ajoc_process(void);

/* Symbol: AC4DEC_offsets_lin_to_db */
/* Demangled: AC4DEC_offsets_lin_to_db */
extern void* AC4DEC_offsets_lin_to_db;

/* Symbol: AC4DEC_WindowKBD360_alpha4_5 */
/* Demangled: AC4DEC_WindowKBD360_alpha4_5 */
extern void* AC4DEC_WindowKBD360_alpha4_5;

/* Symbol: AC4DEC_oarq_query_scratch */
/* Demangled: AC4DEC_oarq_query_scratch */
int AC4DEC_oarq_query_scratch(void);

/* Symbol: AC4DEC_evo_get_bitstream */
/* Demangled: AC4DEC_evo_get_bitstream */
int AC4DEC_evo_get_bitstream(void);

/* Symbol: DLB_BLmaxBLL_inplace_strict */
/* Demangled: DLB_BLmaxBLL_inplace_strict */
int DLB_BLmaxBLL_inplace_strict(void);

/* Symbol: AC4DEC_decoder_set_set_dap_param */
/* Demangled: AC4DEC_decoder_set_set_dap_param */
int AC4DEC_decoder_set_set_dap_param(void);

/* Symbol: AC4DEC_ngcs_diffuse_reset */
/* Demangled: AC4DEC_ngcs_diffuse_reset */
int AC4DEC_ngcs_diffuse_reset(void);

/* Symbol: AC4DEC_mdct_to_qmf_open */
/* Demangled: AC4DEC_mdct_to_qmf_open */
int AC4DEC_mdct_to_qmf_open(void);

/* Symbol: dlb_blk_LfirUL_flex */
/* Demangled: dlb_blk_LfirUL_flex */
int dlb_blk_LfirUL_flex(void);

/* Symbol: DLB_blk_LnrrecipLU_strict */
/* Demangled: DLB_blk_LnrrecipLU_strict */
int DLB_blk_LnrrecipLU_strict(void);

/* Symbol: AC4DEC_qextract_ane_fdn_process_inplace */
/* Demangled: AC4DEC_qextract_ane_fdn_process_inplace */
int AC4DEC_qextract_ane_fdn_process_inplace(void);

/* Symbol: AC4DEC_bed_mixer_gains_get */
/* Demangled: AC4DEC_bed_mixer_gains_get */
int AC4DEC_bed_mixer_gains_get(void);

/* Symbol: AC4DEC_dvlim_process_indirect */
/* Demangled: AC4DEC_dvlim_process_indirect */
int AC4DEC_dvlim_process_indirect(void);

/* Symbol: DLB_r4_inv_fft_960_s */
/* Demangled: DLB_r4_inv_fft_960_s */
int DLB_r4_inv_fft_960_s(void);

/* Symbol: AC4DEC_dlb_bitbuf_init */
/* Demangled: AC4DEC_dlb_bitbuf_init */
int AC4DEC_dlb_bitbuf_init(void);

/* Symbol: AC4DEC_rsrc_process_core */
/* Demangled: AC4DEC_rsrc_process_core */
int AC4DEC_rsrc_process_core(void);

/* Symbol: AC4DEC_oamdi_get_oa_element_headphone_read_only */
/* Demangled: AC4DEC_oamdi_get_oa_element_headphone_read_only */
int AC4DEC_oamdi_get_oa_element_headphone_read_only(void);

/* Symbol: DLB_r4_inv_fft_60 */
/* Demangled: DLB_r4_inv_fft_60 */
int DLB_r4_inv_fft_60(void);

/* Symbol: AC4DEC_ac4toc_parse_num_presentations */
/* Demangled: AC4DEC_ac4toc_parse_num_presentations */
int AC4DEC_ac4toc_parse_num_presentations(void);

/* Symbol: AC4DEC_ngcs_hcqmf_real_xcorr */
/* Demangled: AC4DEC_ngcs_hcqmf_real_xcorr */
int AC4DEC_ngcs_hcqmf_real_xcorr(void);

/* Symbol: AC4DEC_oamdi_get_trim_config */
/* Demangled: AC4DEC_oamdi_get_trim_config */
int AC4DEC_oamdi_get_trim_config(void);

/* Symbol: AC4DEC_ps_iso639_1tab */
/* Demangled: AC4DEC_ps_iso639_1tab */
extern void* AC4DEC_ps_iso639_1tab;

/* Symbol: AC4DEC_dap_mathlib_Llog4LP */
/* Demangled: AC4DEC_dap_mathlib_Llog4LP */
int AC4DEC_dap_mathlib_Llog4LP(void);

/* Symbol: DLB_r4_inv_fft_480 */
/* Demangled: DLB_r4_inv_fft_480 */
int DLB_r4_inv_fft_480(void);

/* Symbol: AC4DEC_ajoc_mdd_generate_dummy_config */
/* Demangled: AC4DEC_ajoc_mdd_generate_dummy_config */
int AC4DEC_ajoc_mdd_generate_dummy_config(void);

/* Symbol: dlb_dct4_premodulation */
/* Demangled: dlb_dct4_premodulation */
int dlb_dct4_premodulation(void);

/* Symbol: AC4DEC_omg_query_scratch */
/* Demangled: AC4DEC_omg_query_scratch */
int AC4DEC_omg_query_scratch(void);

/* Symbol: AC4DEC_ims_il_virtualization_mode_get */
/* Demangled: AC4DEC_ims_il_virtualization_mode_get */
int AC4DEC_ims_il_virtualization_mode_get(void);

/* Symbol: AC4DEC_evo_time_convert */
/* Demangled: AC4DEC_evo_time_convert */
int AC4DEC_evo_time_convert(void);

/* Symbol: AC4DEC_oamdi_reset */
/* Demangled: AC4DEC_oamdi_reset */
int AC4DEC_oamdi_reset(void);

/* Symbol: AC4DEC_oamd_priority_Q15 */
/* Demangled: AC4DEC_oamd_priority_Q15 */
extern void* AC4DEC_oamd_priority_Q15;

/* Symbol: dlb_dct_twiddle_table16_1_L60 */
/* Demangled: dlb_dct_twiddle_table16_1_L60 */
extern void* dlb_dct_twiddle_table16_1_L60;

/* Symbol: DLB_r4_fft_80_s */
/* Demangled: DLB_r4_fft_80_s */
int DLB_r4_fft_80_s(void);

/* Symbol: DLB_r4_inv_fft_64 */
/* Demangled: DLB_r4_inv_fft_64 */
int DLB_r4_inv_fft_64(void);

/* Symbol: ac4dec_wrapper_query_info */
/* Demangled: ac4dec_wrapper_query_info */
int ac4dec_wrapper_query_info(void);

/* Symbol: AC4DEC_ngcs_steering_table_init */
/* Demangled: AC4DEC_ngcs_steering_table_init */
int AC4DEC_ngcs_steering_table_init(void);

/* Symbol: AC4DEC_get_num_octaves_div8 */
/* Demangled: AC4DEC_get_num_octaves_div8 */
int AC4DEC_get_num_octaves_div8(void);

/* Symbol: dlb_dct_twiddle_table16_L384 */
/* Demangled: dlb_dct_twiddle_table16_L384 */
extern void* dlb_dct_twiddle_table16_L384;

/* Symbol: AC4DEC_metadata_delay_output_get_num_elements */
/* Demangled: AC4DEC_metadata_delay_output_get_num_elements */
int AC4DEC_metadata_delay_output_get_num_elements(void);

/* Symbol: AC4DEC_dvlim_set_boost */
/* Demangled: AC4DEC_dvlim_set_boost */
int AC4DEC_dvlim_set_boost(void);

/* Symbol: AC4DEC_point_panner_compute_gains_between_rows */
/* Demangled: AC4DEC_point_panner_compute_gains_between_rows */
int AC4DEC_point_panner_compute_gains_between_rows(void);

/* Symbol: AC4DEC_DAP_MATHLIB_LOGTYPE_20_LOG_10_ON_130 */
/* Demangled: AC4DEC_DAP_MATHLIB_LOGTYPE_20_LOG_10_ON_130 */
extern void* AC4DEC_DAP_MATHLIB_LOGTYPE_20_LOG_10_ON_130;

/* Symbol: AC4DEC_ajccdec_open */
/* Demangled: AC4DEC_ajccdec_open */
int AC4DEC_ajccdec_open(void);

/* Symbol: AC4DEC_oamdi_get_smag_Q15 */
/* Demangled: AC4DEC_oamdi_get_smag_Q15 */
int AC4DEC_oamdi_get_smag_Q15(void);

/* Symbol: AC4DEC_ngcs_diffuse_init */
/* Demangled: AC4DEC_ngcs_diffuse_init */
int AC4DEC_ngcs_diffuse_init(void);

/* Symbol: dlb_dct_twiddle_table16_L720_cos */
/* Demangled: dlb_dct_twiddle_table16_L720_cos */
extern void* dlb_dct_twiddle_table16_L720_cos;

/* Symbol: AC4DEC_oamdi_dimensional_trim_config_set_auto */
/* Demangled: AC4DEC_oamdi_dimensional_trim_config_set_auto */
int AC4DEC_oamdi_dimensional_trim_config_set_auto(void);

/* Symbol: AC4DEC_isf_decoder_compute_matrix */
/* Demangled: AC4DEC_isf_decoder_compute_matrix */
int AC4DEC_isf_decoder_compute_matrix(void);

/* Symbol: AC4DEC_dvlim_get_block_size */
/* Demangled: AC4DEC_dvlim_get_block_size */
int AC4DEC_dvlim_get_block_size(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L256 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L256 */
extern void* dlb_dct_twiddle_table16_rev_1_L256;

/* Symbol: dlb_fft_fwd_usc_40 */
/* Demangled: dlb_fft_fwd_usc_40 */
int dlb_fft_fwd_usc_40(void);

/* Symbol: AC4DEC_hp_height_fdn_allpass_reset */
/* Demangled: AC4DEC_hp_height_fdn_allpass_reset */
int AC4DEC_hp_height_fdn_allpass_reset(void);

/* Symbol: DLB_blk_LabsL_strict */
/* Demangled: DLB_blk_LabsL_strict */
int DLB_blk_LabsL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L64 */
/* Demangled: dlb_dct_twiddle_table16_1_L64 */
extern void* dlb_dct_twiddle_table16_1_L64;

/* Symbol: DLB_r4_fft_576 */
/* Demangled: DLB_r4_fft_576 */
int DLB_r4_fft_576(void);

/* Symbol: dlb_fft_inv_usc_180 */
/* Demangled: dlb_fft_inv_usc_180 */
int dlb_fft_inv_usc_180(void);

/* Symbol: AC4DEC_memlib_subsection_start */
/* Demangled: AC4DEC_memlib_subsection_start */
int AC4DEC_memlib_subsection_start(void);

/* Symbol: dlb_BLmpy_scaleBLSU_flex */
/* Demangled: dlb_BLmpy_scaleBLSU_flex */
int dlb_BLmpy_scaleBLSU_flex(void);

/* Symbol: DLB_CLzeroCLU_strict */
/* Demangled: DLB_CLzeroCLU_strict */
int DLB_CLzeroCLU_strict(void);

/* Symbol: AC4DEC_ac4framer_close */
/* Demangled: AC4DEC_ac4framer_close */
int AC4DEC_ac4framer_close(void);

/* Symbol: AC4DEC_dvlim_process */
/* Demangled: AC4DEC_dvlim_process */
int AC4DEC_dvlim_process(void);

/* Symbol: dlb_blk_LmaxLLL_flex */
/* Demangled: dlb_blk_LmaxLLL_flex */
int dlb_blk_LmaxLLL_flex(void);

/* Symbol: dlb_vec_LshlLIU_flex */
/* Demangled: dlb_vec_LshlLIU_flex */
int dlb_vec_LshlLIU_flex(void);

/* Symbol: AC4DEC_memlib_pool_subsection_end */
/* Demangled: AC4DEC_memlib_pool_subsection_end */
int AC4DEC_memlib_pool_subsection_end(void);

/* Symbol: AC4DEC_input_to_index_tab */
/* Demangled: AC4DEC_input_to_index_tab */
extern void* AC4DEC_input_to_index_tab;

/* Symbol: AC4DEC_oamd_trans_output_init */
/* Demangled: AC4DEC_oamd_trans_output_init */
int AC4DEC_oamd_trans_output_init(void);

/* Symbol: AC4DEC_hdr_vec_P2powPLPU */
/* Demangled: AC4DEC_hdr_vec_P2powPLPU */
int AC4DEC_hdr_vec_P2powPLPU(void);

/* Symbol: DLB_Lqmf_synthesisCL_Head1Bit */
/* Demangled: DLB_Lqmf_synthesisCL_Head1Bit */
int DLB_Lqmf_synthesisCL_Head1Bit(void);

/* Symbol: _ZN5dolby12Ac4DecClient11ac4dec_openEP19tAc4DecoderExternal */
/* Demangled: dolby::Ac4DecClient::ac4dec_open(tAc4DecoderExternal*) */
int _ZN5dolby12Ac4DecClient11ac4dec_openEP19tAc4DecoderExternal(void);

/* Symbol: AC4DEC_ac4dap_log_content_query_scratch */
/* Demangled: AC4DEC_ac4dap_log_content_query_scratch */
int AC4DEC_ac4dap_log_content_query_scratch(void);

/* Symbol: AC4DEC_delay_line_write */
/* Demangled: AC4DEC_delay_line_write */
int AC4DEC_delay_line_write(void);

/* Symbol: DLB_blk_LmaxLLL_strict */
/* Demangled: DLB_blk_LmaxLLL_strict */
int DLB_blk_LmaxLLL_strict(void);

/* Symbol: dlb_fft_fwd_scl_288 */
/* Demangled: dlb_fft_fwd_scl_288 */
int dlb_fft_fwd_scl_288(void);

/* Symbol: dlb_fft_fwd_usc_45 */
/* Demangled: dlb_fft_fwd_usc_45 */
int dlb_fft_fwd_usc_45(void);

/* Symbol: displaybanner */
/* Demangled: displaybanner */
int displaybanner(void);

/* Symbol: ac4dec_wrapper_getparam */
/* Demangled: ac4dec_wrapper_getparam */
int ac4dec_wrapper_getparam(void);

/* Symbol: AC4DEC_apply_prog_assign */
/* Demangled: AC4DEC_apply_prog_assign */
int AC4DEC_apply_prog_assign(void);

/* Symbol: dlb_dct_twiddle_table16_1_L120 */
/* Demangled: dlb_dct_twiddle_table16_1_L120 */
extern void* dlb_dct_twiddle_table16_1_L120;

/* Symbol: DLB_r4_cplx_inv_scaled */
/* Demangled: DLB_r4_cplx_inv_scaled */
int DLB_r4_cplx_inv_scaled(void);

/* Symbol: AC4DEC_decorr_query_mem */
/* Demangled: AC4DEC_decorr_query_mem */
int AC4DEC_decorr_query_mem(void);

/* Symbol: AC4DEC_iwc_preserve */
/* Demangled: AC4DEC_iwc_preserve */
int AC4DEC_iwc_preserve(void);

/* Symbol: AC4DEC_isf_decoder_init */
/* Demangled: AC4DEC_isf_decoder_init */
int AC4DEC_isf_decoder_init(void);

/* Symbol: AC4DEC_hp_height_hrtf_sum_diff */
/* Demangled: AC4DEC_hp_height_hrtf_sum_diff */
int AC4DEC_hp_height_hrtf_sum_diff(void);

/* Symbol: AC4DEC_metadata_delay_output_get_buffer */
/* Demangled: AC4DEC_metadata_delay_output_get_buffer */
int AC4DEC_metadata_delay_output_get_buffer(void);

/* Symbol: AC4DEC_metadata_delay_output_step_type */
/* Demangled: AC4DEC_metadata_delay_output_step_type */
int AC4DEC_metadata_delay_output_step_type(void);

/* Symbol: AC4DEC_a_rec_vals */
/* Demangled: AC4DEC_a_rec_vals */
extern void* AC4DEC_a_rec_vals;

/* Symbol: DLB_r4_fft_1024_s */
/* Demangled: DLB_r4_fft_1024_s */
int DLB_r4_fft_1024_s(void);

/* Symbol: dlb_fft_fwd_usc_48 */
/* Demangled: dlb_fft_fwd_usc_48 */
int dlb_fft_fwd_usc_48(void);

/* Symbol: AC4DEC_modeler_vlm_process */
/* Demangled: AC4DEC_modeler_vlm_process */
int AC4DEC_modeler_vlm_process(void);

/* Symbol: AC4DEC_ade_mdd_generate_dummy_data */
/* Demangled: AC4DEC_ade_mdd_generate_dummy_data */
int AC4DEC_ade_mdd_generate_dummy_data(void);

/* Symbol: AC4DEC_sap_sub_ms */
/* Demangled: AC4DEC_sap_sub_ms */
int AC4DEC_sap_sub_ms(void);

/* Symbol: DLB_MFB_P10KM_P4_319SC */
/* Demangled: DLB_MFB_P10KM_P4_319SC */
extern void* DLB_MFB_P10KM_P4_319SC;

/* Symbol: AC4DEC_asa_normlogsone_2sone */
/* Demangled: AC4DEC_asa_normlogsone_2sone */
int AC4DEC_asa_normlogsone_2sone(void);

/* Symbol: AC4DEC_ims_sv_deq_lev_smooth_coef */
/* Demangled: AC4DEC_ims_sv_deq_lev_smooth_coef */
extern void* AC4DEC_ims_sv_deq_lev_smooth_coef;

/* Symbol: AC4DEC_CHANNELS_ONLY */
/* Demangled: AC4DEC_CHANNELS_ONLY */
extern void* AC4DEC_CHANNELS_ONLY;

/* Symbol: AC4DEC_ac4dsp_CLmpy_shlCLLUU_inplace */
/* Demangled: AC4DEC_ac4dsp_CLmpy_shlCLLUU_inplace */
int AC4DEC_ac4dsp_CLmpy_shlCLLUU_inplace(void);

/* Symbol: AC4DEC_imsdec_de_coefficients_decode */
/* Demangled: AC4DEC_imsdec_de_coefficients_decode */
int AC4DEC_imsdec_de_coefficients_decode(void);

/* Symbol: AC4DEC_ac4toc_channel_mode_contains_lfe */
/* Demangled: AC4DEC_ac4toc_channel_mode_contains_lfe */
int AC4DEC_ac4toc_channel_mode_contains_lfe(void);

/* Symbol: AC4DEC_PA_NGCS_SEG_STEERING_2TO6CH */
/* Demangled: AC4DEC_PA_NGCS_SEG_STEERING_2TO6CH */
extern void* AC4DEC_PA_NGCS_SEG_STEERING_2TO6CH;

/* Symbol: AC4DEC_oamd_reader_parse_oamd_substream */
/* Demangled: AC4DEC_oamd_reader_parse_oamd_substream */
int AC4DEC_oamd_reader_parse_oamd_substream(void);

/* Symbol: AC4DEC_oamd_5bit_to_oari_Q15 */
/* Demangled: AC4DEC_oamd_5bit_to_oari_Q15 */
extern void* AC4DEC_oamd_5bit_to_oari_Q15;

/* Symbol: dlb_fft_fwd_scl_72 */
/* Demangled: dlb_fft_fwd_scl_72 */
int dlb_fft_fwd_scl_72(void);

/* Symbol: dlb_ac4dec_v2_dec_set_output_channel_config */
/* Demangled: dlb_ac4dec_v2_dec_set_output_channel_config */
int dlb_ac4dec_v2_dec_set_output_channel_config(void);

/* Symbol: AC4DEC_ajocdec_dlgobj_interpolate */
/* Demangled: AC4DEC_ajocdec_dlgobj_interpolate */
int AC4DEC_ajocdec_dlgobj_interpolate(void);

/* Symbol: scramble_table_pt */
/* Demangled: scramble_table_pt */
extern void* scramble_table_pt;

/* Symbol: DLB_blk_Lfir2L_set_coef */
/* Demangled: DLB_blk_Lfir2L_set_coef */
int DLB_blk_Lfir2L_set_coef(void);

/* Symbol: dlb_fft_inv_usc_360 */
/* Demangled: dlb_fft_inv_usc_360 */
int dlb_fft_inv_usc_360(void);

/* Symbol: AC4DEC_rfs_tab */
/* Demangled: AC4DEC_rfs_tab */
extern void* AC4DEC_rfs_tab;

/* Symbol: dlb_dct_twiddle_table16_1_L128 */
/* Demangled: dlb_dct_twiddle_table16_1_L128 */
extern void* dlb_dct_twiddle_table16_1_L128;

/* Symbol: AC4DEC_framer_get_time */
/* Demangled: AC4DEC_framer_get_time */
int AC4DEC_framer_get_time(void);

/* Symbol: AC4DEC_drc_frame_read */
/* Demangled: AC4DEC_drc_frame_read */
int AC4DEC_drc_frame_read(void);

/* Symbol: AC4DEC_oamdi_dimensional_trim_config_is_disabled */
/* Demangled: AC4DEC_oamdi_dimensional_trim_config_is_disabled */
int AC4DEC_oamdi_dimensional_trim_config_is_disabled(void);

/* Symbol: dlb_fft_inv_scl_80 */
/* Demangled: dlb_fft_inv_scl_80 */
int dlb_fft_inv_scl_80(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj(void);

/* Symbol: AC4DEC_compressor_calcscale */
/* Demangled: AC4DEC_compressor_calcscale */
int AC4DEC_compressor_calcscale(void);

/* Symbol: AC4DEC_cch_get_config_change */
/* Demangled: AC4DEC_cch_get_config_change */
int AC4DEC_cch_get_config_change(void);

/* Symbol: AC4DEC_ast_bw_scale */
/* Demangled: AC4DEC_ast_bw_scale */
extern void* AC4DEC_ast_bw_scale;

/* Symbol: dlb_dct_twiddle_table16_rev_L144 */
/* Demangled: dlb_dct_twiddle_table16_rev_L144 */
extern void* dlb_dct_twiddle_table16_rev_L144;

/* Symbol: AC4DEC_ac4parser_query_mem */
/* Demangled: AC4DEC_ac4parser_query_mem */
int AC4DEC_ac4parser_query_mem(void);

/* Symbol: dlb_dct_twiddle_table16_L24_1 */
/* Demangled: dlb_dct_twiddle_table16_L24_1 */
extern void* dlb_dct_twiddle_table16_L24_1;

/* Symbol: AC4DEC_omg_query_memory */
/* Demangled: AC4DEC_omg_query_memory */
int AC4DEC_omg_query_memory(void);

/* Symbol: AC4DEC_room_config_size_panner_query_memory */
/* Demangled: AC4DEC_room_config_size_panner_query_memory */
int AC4DEC_room_config_size_panner_query_memory(void);

/* Symbol: dlb_ac4dec_v2_dec_set_drc_enable */
/* Demangled: dlb_ac4dec_v2_dec_set_drc_enable */
int dlb_ac4dec_v2_dec_set_drc_enable(void);

/* Symbol: dlb_dct_twiddle_table16_L24_2 */
/* Demangled: dlb_dct_twiddle_table16_L24_2 */
extern void* dlb_dct_twiddle_table16_L24_2;

/* Symbol: DLB_blk_delayL_strict */
/* Demangled: DLB_blk_delayL_strict */
int DLB_blk_delayL_strict(void);

/* Symbol: DLB_time_add */
/* Demangled: DLB_time_add */
int DLB_time_add(void);

/* Symbol: _ZN7android10AC4Decoder17setPcmOutChannelsEv */
/* Demangled: android::AC4Decoder::setPcmOutChannels() */
int _ZN7android10AC4Decoder17setPcmOutChannelsEv(void);

/* Symbol: AC4DEC_ac4dap_virtualizer_query_memory */
/* Demangled: AC4DEC_ac4dap_virtualizer_query_memory */
int AC4DEC_ac4dap_virtualizer_query_memory(void);

/* Symbol: AC4DEC_q2le_apply_excitation_offset */
/* Demangled: AC4DEC_q2le_apply_excitation_offset */
int AC4DEC_q2le_apply_excitation_offset(void);

/* Symbol: AC4DEC_cdmx_generate_dummy_data */
/* Demangled: AC4DEC_cdmx_generate_dummy_data */
int AC4DEC_cdmx_generate_dummy_data(void);

/* Symbol: dlb_non_power_two_lengths */
/* Demangled: dlb_non_power_two_lengths */
extern void* dlb_non_power_two_lengths;

/* Symbol: AC4DEC_update_drc_curve */
/* Demangled: AC4DEC_update_drc_curve */
int AC4DEC_update_drc_curve(void);

/* Symbol: AC4DEC_aspx_divide_mant_exp */
/* Demangled: AC4DEC_aspx_divide_mant_exp */
int AC4DEC_aspx_divide_mant_exp(void);

/* Symbol: _ZN5dolby16Ac4DynamicConfigC1Ev */
/* Demangled: dolby::Ac4DynamicConfig::Ac4DynamicConfig() */
int _ZN5dolby16Ac4DynamicConfigC1Ev(void);

/* Symbol: ac4dec_wrapper_xfer_table */
/* Demangled: ac4dec_wrapper_xfer_table */
int ac4dec_wrapper_xfer_table(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_get_emdf_buffer_size */
/* Demangled: AC4DEC_dlb_ac4dec_v1_get_emdf_buffer_size */
int AC4DEC_dlb_ac4dec_v1_get_emdf_buffer_size(void);

/* Symbol: AC4DEC_evo_brw_peek */
/* Demangled: AC4DEC_evo_brw_peek */
int AC4DEC_evo_brw_peek(void);

/* Symbol: DLB_r4_inv_fft_2048 */
/* Demangled: DLB_r4_inv_fft_2048 */
int DLB_r4_inv_fft_2048(void);

/* Symbol: dlb_fft_fwd_scl_640 */
/* Demangled: dlb_fft_fwd_scl_640 */
int dlb_fft_fwd_scl_640(void);

/* Symbol: dlb_cos_16_full_scl */
/* Demangled: dlb_cos_16_full_scl */
extern void* dlb_cos_16_full_scl;

/* Symbol: AC4DEC_ngcs_stats_run */
/* Demangled: AC4DEC_ngcs_stats_run */
int AC4DEC_ngcs_stats_run(void);

/* Symbol: AC4DEC_ac4parser_oamd_common_data_read */
/* Demangled: AC4DEC_ac4parser_oamd_common_data_read */
int AC4DEC_ac4parser_oamd_common_data_read(void);

/* Symbol: AC4DEC_emdf_increment_frame_counter */
/* Demangled: AC4DEC_emdf_increment_frame_counter */
int AC4DEC_emdf_increment_frame_counter(void);

/* Symbol: AC4DEC_WindowKBD1440_alpha3_0 */
/* Demangled: AC4DEC_WindowKBD1440_alpha3_0 */
extern void* AC4DEC_WindowKBD1440_alpha3_0;

/* Symbol: AC4DEC_dlb_ac4dec_v1_input_stage_config */
/* Demangled: AC4DEC_dlb_ac4dec_v1_input_stage_config */
int AC4DEC_dlb_ac4dec_v1_input_stage_config(void);

/* Symbol: DLB_blk_Lfir3L_strict */
/* Demangled: DLB_blk_Lfir3L_strict */
int DLB_blk_Lfir3L_strict(void);

/* Symbol: AC4DEC_ajccdec_reset */
/* Demangled: AC4DEC_ajccdec_reset */
int AC4DEC_ajccdec_reset(void);

/* Symbol: AC4DEC_emdf_read */
/* Demangled: AC4DEC_emdf_read */
int AC4DEC_emdf_read(void);

/* Symbol: AC4DEC_oamdi_md_trim_to_linear_gain */
/* Demangled: AC4DEC_oamdi_md_trim_to_linear_gain */
int AC4DEC_oamdi_md_trim_to_linear_gain(void);

/* Symbol: DLB_blk_Lmix_shlULLL_strict */
/* Demangled: DLB_blk_Lmix_shlULLL_strict */
int DLB_blk_Lmix_shlULLL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L320 */
/* Demangled: dlb_dct_twiddle_table16_rev_L320 */
extern void* dlb_dct_twiddle_table16_rev_L320;

/* Symbol: AC4DEC_qextract_ane_process_inplace */
/* Demangled: AC4DEC_qextract_ane_process_inplace */
int AC4DEC_qextract_ane_process_inplace(void);

/* Symbol: AC4DEC_WindowKBD1536 */
/* Demangled: AC4DEC_WindowKBD1536 */
extern void* AC4DEC_WindowKBD1536;

/* Symbol: AC4DEC_delay_line_peek_indirect_offset */
/* Demangled: AC4DEC_delay_line_peek_indirect_offset */
int AC4DEC_delay_line_peek_indirect_offset(void);

/* Symbol: AC4DEC_ldn_calc_specific_loudness */
/* Demangled: AC4DEC_ldn_calc_specific_loudness */
int AC4DEC_ldn_calc_specific_loudness(void);

/* Symbol: AC4DEC_AC4TOC_CHANNELS_ONLY */
/* Demangled: AC4DEC_AC4TOC_CHANNELS_ONLY */
extern void* AC4DEC_AC4TOC_CHANNELS_ONLY;

/* Symbol: AC4DEC_hp_height_process */
/* Demangled: AC4DEC_hp_height_process */
int AC4DEC_hp_height_process(void);

/* Symbol: AC4DEC_imsdec_close */
/* Demangled: AC4DEC_imsdec_close */
int AC4DEC_imsdec_close(void);

/* Symbol: AC4DEC_rsrcdec_coeff_pointer_tab */
/* Demangled: AC4DEC_rsrcdec_coeff_pointer_tab */
extern void* AC4DEC_rsrcdec_coeff_pointer_tab;

/* Symbol: DLB_CLsubCLCLU_strict */
/* Demangled: DLB_CLsubCLCLU_strict */
int DLB_CLsubCLCLU_strict(void);

/* Symbol: DLB_r4_inv_fft_6_s */
/* Demangled: DLB_r4_inv_fft_6_s */
int DLB_r4_inv_fft_6_s(void);

/* Symbol: dlb_fft_inv_scl_480 */
/* Demangled: dlb_fft_inv_scl_480 */
int dlb_fft_inv_scl_480(void);

/* Symbol: AC4DEC_hist_get_probability */
/* Demangled: AC4DEC_hist_get_probability */
int AC4DEC_hist_get_probability(void);

/* Symbol: dlb_blk_Lconst_flex */
/* Demangled: dlb_blk_Lconst_flex */
int dlb_blk_Lconst_flex(void);

/* Symbol: dlb_CLCLmix7CL14SU_flex */
/* Demangled: dlb_CLCLmix7CL14SU_flex */
int dlb_CLCLmix7CL14SU_flex(void);

/* Symbol: DLB_r4_inv_fft_72 */
/* Demangled: DLB_r4_inv_fft_72 */
int DLB_r4_inv_fft_72(void);

/* Symbol: AC4DEC_decoder_get_latency */
/* Demangled: AC4DEC_decoder_get_latency */
int AC4DEC_decoder_get_latency(void);

/* Symbol: AC4DEC_evo_mod_get_md_begin */
/* Demangled: AC4DEC_evo_mod_get_md_begin */
int AC4DEC_evo_mod_get_md_begin(void);

/* Symbol: dlb_odd_fft_cplx_inv_usc */
/* Demangled: dlb_odd_fft_cplx_inv_usc */
extern void* dlb_odd_fft_cplx_inv_usc;

/* Symbol: AC4DEC_CHANNEL_MAP_5_0 */
/* Demangled: AC4DEC_CHANNEL_MAP_5_0 */
extern void* AC4DEC_CHANNEL_MAP_5_0;

/* Symbol: AC4DEC_tree_joc_huff_code_coarse_generic */
/* Demangled: AC4DEC_tree_joc_huff_code_coarse_generic */
extern void* AC4DEC_tree_joc_huff_code_coarse_generic;

/* Symbol: DLB_r4_inv_fft_120 */
/* Demangled: DLB_r4_inv_fft_120 */
int DLB_r4_inv_fft_120(void);

/* Symbol: AC4DEC_CHANNEL_MAP_5_1 */
/* Demangled: AC4DEC_CHANNEL_MAP_5_1 */
extern void* AC4DEC_CHANNEL_MAP_5_1;

/* Symbol: AC4DEC_ngcs_mixer_run */
/* Demangled: AC4DEC_ngcs_mixer_run */
int AC4DEC_ngcs_mixer_run(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_get_num_out_channels */
/* Demangled: AC4DEC_dlb_ac4dec_v1_get_num_out_channels */
int AC4DEC_dlb_ac4dec_v1_get_num_out_channels(void);

/* Symbol: AC4DEC_WindowKBD576_alpha4_0 */
/* Demangled: AC4DEC_WindowKBD576_alpha4_0 */
extern void* AC4DEC_WindowKBD576_alpha4_0;

/* Symbol: dlb_dct_twiddle_table16_1_L72 */
/* Demangled: dlb_dct_twiddle_table16_1_L72 */
extern void* dlb_dct_twiddle_table16_1_L72;

/* Symbol: AC4DEC_AC4DAP_AGC_COMPRESSION_CURVE */
/* Demangled: AC4DEC_AC4DAP_AGC_COMPRESSION_CURVE */
extern void* AC4DEC_AC4DAP_AGC_COMPRESSION_CURVE;

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj(void);

/* Symbol: AC4DEC_ac4toc_reader_get_presentation_info */
/* Demangled: AC4DEC_ac4toc_reader_get_presentation_info */
int AC4DEC_ac4toc_reader_get_presentation_info(void);

/* Symbol: AC4DEC_ngcs_centre_spread_setup */
/* Demangled: AC4DEC_ngcs_centre_spread_setup */
int AC4DEC_ngcs_centre_spread_setup(void);

/* Symbol: dlb_dct_twiddle_table16_L12_cos */
/* Demangled: dlb_dct_twiddle_table16_L12_cos */
extern void* dlb_dct_twiddle_table16_L12_cos;

/* Symbol: dlb_qmf_analysisL_reconfig */
/* Demangled: dlb_qmf_analysisL_reconfig */
int dlb_qmf_analysisL_reconfig(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_beta3_fine_df */
/* Demangled: AC4DEC_tree_huff_code_acpl_beta3_fine_df */
extern void* AC4DEC_tree_huff_code_acpl_beta3_fine_df;

/* Symbol: DLB_r4_cplx_fwd_scaled */
/* Demangled: DLB_r4_cplx_fwd_scaled */
int DLB_r4_cplx_fwd_scaled(void);

/* Symbol: AC4DEC_a_dvlim_win_64 */
/* Demangled: AC4DEC_a_dvlim_win_64 */
extern void* AC4DEC_a_dvlim_win_64;

/* Symbol: dlb_fft_cplx_fwd_usc */
/* Demangled: dlb_fft_cplx_fwd_usc */
extern void* dlb_fft_cplx_fwd_usc;

/* Symbol: AC4DEC_ac4dap_regulator_rebuild */
/* Demangled: AC4DEC_ac4dap_regulator_rebuild */
int AC4DEC_ac4dap_regulator_rebuild(void);

/* Symbol: AC4DEC_delay_line_query_memory */
/* Demangled: AC4DEC_delay_line_query_memory */
int AC4DEC_delay_line_query_memory(void);

/* Symbol: AC4DEC_imsdec_process */
/* Demangled: AC4DEC_imsdec_process */
int AC4DEC_imsdec_process(void);

/* Symbol: dlb_fft_inv_usc_192 */
/* Demangled: dlb_fft_inv_usc_192 */
int dlb_fft_inv_usc_192(void);

/* Symbol: AC4DEC_AA_NGCS_SEG_CHANNELS_2TO4CH */
/* Demangled: AC4DEC_AA_NGCS_SEG_CHANNELS_2TO4CH */
extern void* AC4DEC_AA_NGCS_SEG_CHANNELS_2TO4CH;

/* Symbol: AC4DEC_memlib_pool_get_size */
/* Demangled: AC4DEC_memlib_pool_get_size */
int AC4DEC_memlib_pool_get_size(void);

/* Symbol: AC4DEC_ajccdec_init */
/* Demangled: AC4DEC_ajccdec_init */
int AC4DEC_ajccdec_init(void);

/* Symbol: AC4DEC_oamdi_round_from_Q15_away_from_half */
/* Demangled: AC4DEC_oamdi_round_from_Q15_away_from_half */
int AC4DEC_oamdi_round_from_Q15_away_from_half(void);

/* Symbol: dlb_fft_inv_usc_720 */
/* Demangled: dlb_fft_inv_usc_720 */
int dlb_fft_inv_usc_720(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj(void);

/* Symbol: AC4DEC_arle_distortion_masking_calculation */
/* Demangled: AC4DEC_arle_distortion_masking_calculation */
int AC4DEC_arle_distortion_masking_calculation(void);

/* Symbol: AC4DEC_ngcs_stats_query_scratch */
/* Demangled: AC4DEC_ngcs_stats_query_scratch */
int AC4DEC_ngcs_stats_query_scratch(void);

/* Symbol: AC4DEC_ajocdec_full_alloc_dynamic */
/* Demangled: AC4DEC_ajocdec_full_alloc_dynamic */
int AC4DEC_ajocdec_full_alloc_dynamic(void);

/* Symbol: DLB_r4_inv_fft_128 */
/* Demangled: DLB_r4_inv_fft_128 */
int DLB_r4_inv_fft_128(void);

/* Symbol: dlb_fft_inv_usc_60 */
/* Demangled: dlb_fft_inv_usc_60 */
int dlb_fft_inv_usc_60(void);

/* Symbol: AC4DEC_tree_huff_code_ajoc_wet_coarse_df */
/* Demangled: AC4DEC_tree_huff_code_ajoc_wet_coarse_df */
extern void* AC4DEC_tree_huff_code_ajoc_wet_coarse_df;

/* Symbol: AC4DEC_dither_table */
/* Demangled: AC4DEC_dither_table */
extern void* AC4DEC_dither_table;

/* Symbol: DLB_load_CLqmf_analysisL_filter_stateL */
/* Demangled: DLB_load_CLqmf_analysisL_filter_stateL */
int DLB_load_CLqmf_analysisL_filter_stateL(void);

/* Symbol: AC4DEC_WindowKBD960 */
/* Demangled: AC4DEC_WindowKBD960 */
extern void* AC4DEC_WindowKBD960;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L60 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L60 */
extern void* dlb_dct_twiddle_table16_rev_1_L60;

/* Symbol: AC4DEC_ajocdec_calculate_mtxpre */
/* Demangled: AC4DEC_ajocdec_calculate_mtxpre */
int AC4DEC_ajocdec_calculate_mtxpre(void);

/* Symbol: AC4DEC_tree_joc_huff_code_fine_coeff_sparse */
/* Demangled: AC4DEC_tree_joc_huff_code_fine_coeff_sparse */
extern void* AC4DEC_tree_joc_huff_code_fine_coeff_sparse;

/* Symbol: dlb_fft_inv_usc_64 */
/* Demangled: dlb_fft_inv_usc_64 */
int dlb_fft_inv_usc_64(void);

/* Symbol: dlb_vec_LsetLU_flex */
/* Demangled: dlb_vec_LsetLU_flex */
int dlb_vec_LsetLU_flex(void);

/* Symbol: AC4DEC_evo_ll_head */
/* Demangled: AC4DEC_evo_ll_head */
int AC4DEC_evo_ll_head(void);

/* Symbol: dlb_fft_fwd_scl_80 */
/* Demangled: dlb_fft_fwd_scl_80 */
int dlb_fft_fwd_scl_80(void);

/* Symbol: AC4DEC_framing_tab_border */
/* Demangled: AC4DEC_framing_tab_border */
extern void* AC4DEC_framing_tab_border;

/* Symbol: dlb_dct_twiddle_table16_L90 */
/* Demangled: dlb_dct_twiddle_table16_L90 */
extern void* dlb_dct_twiddle_table16_L90;

/* Symbol: dlb_blk_Liir2ssv1_usmpL_flex */
/* Demangled: dlb_blk_Liir2ssv1_usmpL_flex */
int dlb_blk_Liir2ssv1_usmpL_flex(void);

/* Symbol: dlb_clclmix5cl10csu_order_coef_c */
/* Demangled: dlb_clclmix5cl10csu_order_coef_c */
extern void* dlb_clclmix5cl10csu_order_coef_c;

/* Symbol: DLB_r4_fft_120_s */
/* Demangled: DLB_r4_fft_120_s */
int DLB_r4_fft_120_s(void);

/* Symbol: dlb_qmf_synthesisS_open */
/* Demangled: dlb_qmf_synthesisS_open */
int dlb_qmf_synthesisS_open(void);

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR48KHZ_BS384S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR48KHZ_BS384S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR48KHZ_BS384S;

/* Symbol: AC4DEC_cch_get_num_subframes_dropped */
/* Demangled: AC4DEC_cch_get_num_subframes_dropped */
int AC4DEC_cch_get_num_subframes_dropped(void);

/* Symbol: AC4DEC_cdmx_gains_init */
/* Demangled: AC4DEC_cdmx_gains_init */
int AC4DEC_cdmx_gains_init(void);

/* Symbol: AC4DEC_dapil_reference_level_calculate */
/* Demangled: AC4DEC_dapil_reference_level_calculate */
int AC4DEC_dapil_reference_level_calculate(void);

/* Symbol: dlb_dct_twiddle_table16_L576 */
/* Demangled: dlb_dct_twiddle_table16_L576 */
extern void* dlb_dct_twiddle_table16_L576;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L64 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L64 */
extern void* dlb_dct_twiddle_table16_rev_1_L64;

/* Symbol: DLB_r4_fft_60 */
/* Demangled: DLB_r4_fft_60 */
int DLB_r4_fft_60(void);

/* Symbol: AC4DEC_ajocdec_mtxpre_apply */
/* Demangled: AC4DEC_ajocdec_mtxpre_apply */
int AC4DEC_ajocdec_mtxpre_apply(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_beta3_fine_f0 */
/* Demangled: AC4DEC_tree_huff_code_acpl_beta3_fine_f0 */
extern void* AC4DEC_tree_huff_code_acpl_beta3_fine_f0;

/* Symbol: dlb_dct_twiddle_table16_1_L1024 */
/* Demangled: dlb_dct_twiddle_table16_1_L1024 */
extern void* dlb_dct_twiddle_table16_1_L1024;

/* Symbol: AC4DEC_ajcc_dry_quant_table */
/* Demangled: AC4DEC_ajcc_dry_quant_table */
extern void* AC4DEC_ajcc_dry_quant_table;

/* Symbol: AC4DEC_WindowKBD48_alpha5_0 */
/* Demangled: AC4DEC_WindowKBD48_alpha5_0 */
extern void* AC4DEC_WindowKBD48_alpha5_0;

/* Symbol: _dlb_ldct2_scaled_iplu */
/* Demangled: _dlb_ldct2_scaled_iplu */
int _dlb_ldct2_scaled_iplu(void);

/* Symbol: AC4DEC_loudness_process */
/* Demangled: AC4DEC_loudness_process */
int AC4DEC_loudness_process(void);

/* Symbol: AC4DEC_ajoc_mdd_generate_dummy_data */
/* Demangled: AC4DEC_ajoc_mdd_generate_dummy_data */
int AC4DEC_ajoc_mdd_generate_dummy_data(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_beta3_fine_dt */
/* Demangled: AC4DEC_tree_huff_code_acpl_beta3_fine_dt */
extern void* AC4DEC_tree_huff_code_acpl_beta3_fine_dt;

/* Symbol: DLB_r4_fft_768 */
/* Demangled: DLB_r4_fft_768 */
int DLB_r4_fft_768(void);

/* Symbol: dlb_fft_inv_scl_90 */
/* Demangled: dlb_fft_inv_scl_90 */
int dlb_fft_inv_scl_90(void);

/* Symbol: AC4DEC_oamd_channel_order */
/* Demangled: AC4DEC_oamd_channel_order */
extern void* AC4DEC_oamd_channel_order;

/* Symbol: DLB_r4_fft_64 */
/* Demangled: DLB_r4_fft_64 */
int DLB_r4_fft_64(void);

/* Symbol: dlb_fft_fwd_usc_180 */
/* Demangled: dlb_fft_fwd_usc_180 */
int dlb_fft_fwd_usc_180(void);

/* Symbol: dlb_qmf_filter_coeff_P4 */
/* Demangled: dlb_qmf_filter_coeff_P4 */
extern void* dlb_qmf_filter_coeff_P4;

/* Symbol: AC4DEC_sv_dual_end_query_memory */
/* Demangled: AC4DEC_sv_dual_end_query_memory */
int AC4DEC_sv_dual_end_query_memory(void);

/* Symbol: AC4DEC_tree_huff_code_acpl */
/* Demangled: AC4DEC_tree_huff_code_acpl */
extern void* AC4DEC_tree_huff_code_acpl;

/* Symbol: dlb_dct_twiddle_table16_L96 */
/* Demangled: dlb_dct_twiddle_table16_L96 */
extern void* dlb_dct_twiddle_table16_L96;

/* Symbol: dlb_qmf_filter_coeff_P5 */
/* Demangled: dlb_qmf_filter_coeff_P5 */
extern void* dlb_qmf_filter_coeff_P5;

/* Symbol: AC4DEC_decoder_set_output_channel_config */
/* Demangled: AC4DEC_decoder_set_output_channel_config */
int AC4DEC_decoder_set_output_channel_config(void);

/* Symbol: AC4DEC_oaril_get_output_format */
/* Demangled: AC4DEC_oaril_get_output_format */
int AC4DEC_oaril_get_output_format(void);

/* Symbol: AC4DEC_tree_huff_code_ajoc_wet_coarse_f0 */
/* Demangled: AC4DEC_tree_huff_code_ajoc_wet_coarse_f0 */
extern void* AC4DEC_tree_huff_code_ajoc_wet_coarse_f0;

/* Symbol: DLB_blk_Liir2ssL_setup */
/* Demangled: DLB_blk_Liir2ssL_setup */
int DLB_blk_Liir2ssL_setup(void);

/* Symbol: AC4DEC_WindowKBD240 */
/* Demangled: AC4DEC_WindowKBD240 */
extern void* AC4DEC_WindowKBD240;

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_520_0 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_520_0 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_520_0;

/* Symbol: dlb_dct_twiddle_table16_L576_cos */
/* Demangled: dlb_dct_twiddle_table16_L576_cos */
extern void* dlb_dct_twiddle_table16_L576_cos;

/* Symbol: AC4DEC_tree_huff_code_ajoc_wet_coarse_dt */
/* Demangled: AC4DEC_tree_huff_code_ajoc_wet_coarse_dt */
extern void* AC4DEC_tree_huff_code_ajoc_wet_coarse_dt;

/* Symbol: dlb_blk_LLshuffleLL_inplace_flex */
/* Demangled: dlb_blk_LLshuffleLL_inplace_flex */
int dlb_blk_LLshuffleLL_inplace_flex(void);

/* Symbol: _ZN5dolby16Ac4DynamicConfig16setSpecialParamsEPNS_13DapParamCacheE */
/* Demangled: dolby::Ac4DynamicConfig::setSpecialParams(dolby::DapParamCache*) */
int _ZN5dolby16Ac4DynamicConfig16setSpecialParamsEPNS_13DapParamCacheE(void);

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_520_1 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_520_1 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_520_1;

/* Symbol: AC4DEC_spectrum_cdf_tab */
/* Demangled: AC4DEC_spectrum_cdf_tab */
extern void* AC4DEC_spectrum_cdf_tab;

/* Symbol: dlb_fft_inv_scl_96 */
/* Demangled: dlb_fft_inv_scl_96 */
int dlb_fft_inv_scl_96(void);

/* Symbol: AC4DEC_de_old_index */
/* Demangled: AC4DEC_de_old_index */
int AC4DEC_de_old_index(void);

/* Symbol: AC4DEC_ph90_qmf_clear */
/* Demangled: AC4DEC_ph90_qmf_clear */
int AC4DEC_ph90_qmf_clear(void);

/* Symbol: AC4DEC_NO_CHANNEL_MAP */
/* Demangled: AC4DEC_NO_CHANNEL_MAP */
extern void* AC4DEC_NO_CHANNEL_MAP;

/* Symbol: AC4DEC_IMS_BANDING_SCHEME_DEN_CW */
/* Demangled: AC4DEC_IMS_BANDING_SCHEME_DEN_CW */
extern void* AC4DEC_IMS_BANDING_SCHEME_DEN_CW;

/* Symbol: AC4DEC_oamdi_has_oa_element_dimensional_trim */
/* Demangled: AC4DEC_oamdi_has_oa_element_dimensional_trim */
int AC4DEC_oamdi_has_oa_element_dimensional_trim(void);

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_2_0 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_2_0 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_2_0;

/* Symbol: AC4DEC_dvlim_set_peak */
/* Demangled: AC4DEC_dvlim_set_peak */
int AC4DEC_dvlim_set_peak(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_alpha_coarse_df */
/* Demangled: AC4DEC_tree_huff_code_acpl_alpha_coarse_df */
extern void* AC4DEC_tree_huff_code_acpl_alpha_coarse_df;

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_2_1 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_2_1 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_2_1;

/* Symbol: AC4DEC_ngcs_mode_calculate */
/* Demangled: AC4DEC_ngcs_mode_calculate */
int AC4DEC_ngcs_mode_calculate(void);

/* Symbol: AC4DEC_acpldec_data_2ch_read */
/* Demangled: AC4DEC_acpldec_data_2ch_read */
int AC4DEC_acpldec_data_2ch_read(void);

/* Symbol: DLB_qmf_synthesisL_close */
/* Demangled: DLB_qmf_synthesisL_close */
int DLB_qmf_synthesisL_close(void);

/* Symbol: AC4DEC_tree_huff_code_ims_help_fine_df */
/* Demangled: AC4DEC_tree_huff_code_ims_help_fine_df */
extern void* AC4DEC_tree_huff_code_ims_help_fine_df;

/* Symbol: _ZN5dolby12DlbGenClass2C1Ev */
/* Demangled: dolby::DlbGenClass2::DlbGenClass2() */
int _ZN5dolby12DlbGenClass2C1Ev(void);

/* Symbol: DLB_blk_Lfir3L_set_coef */
/* Demangled: DLB_blk_Lfir3L_set_coef */
int DLB_blk_Lfir3L_set_coef(void);

/* Symbol: AC4DEC_lvl_drc_scale_gains */
/* Demangled: AC4DEC_lvl_drc_scale_gains */
int AC4DEC_lvl_drc_scale_gains(void);

/* Symbol: AC4DEC_acpldec_mdd_generate_dummy_config */
/* Demangled: AC4DEC_acpldec_mdd_generate_dummy_config */
int AC4DEC_acpldec_mdd_generate_dummy_config(void);

/* Symbol: AC4DEC_oamd_init_oamdi_config */
/* Demangled: AC4DEC_oamd_init_oamdi_config */
int AC4DEC_oamd_init_oamdi_config(void);

/* Symbol: DLB_r4_inv_fft_80 */
/* Demangled: DLB_r4_inv_fft_80 */
int DLB_r4_inv_fft_80(void);

/* Symbol: AC4DEC_beta_quant_table_coarse */
/* Demangled: AC4DEC_beta_quant_table_coarse */
extern void* AC4DEC_beta_quant_table_coarse;

/* Symbol: AC4DEC_get_num_msfb_bits */
/* Demangled: AC4DEC_get_num_msfb_bits */
int AC4DEC_get_num_msfb_bits(void);

/* Symbol: dlb_vec_SshlSIU_inplace_flex */
/* Demangled: dlb_vec_SshlSIU_inplace_flex */
int dlb_vec_SshlSIU_inplace_flex(void);

/* Symbol: AC4DEC_hp_height_hrtf_downmix */
/* Demangled: AC4DEC_hp_height_hrtf_downmix */
int AC4DEC_hp_height_hrtf_downmix(void);

/* Symbol: AC4DEC_legq_get_linear_gain */
/* Demangled: AC4DEC_legq_get_linear_gain */
int AC4DEC_legq_get_linear_gain(void);

/* Symbol: DLB_CLmixCLCLSSU_strict */
/* Demangled: DLB_CLmixCLCLSSU_strict */
int DLB_CLmixCLCLSSU_strict(void);

/* Symbol: DLB_r4_fft_48_s */
/* Demangled: DLB_r4_fft_48_s */
int DLB_r4_fft_48_s(void);

/* Symbol: dlb_fft_fwd_usc_360 */
/* Demangled: dlb_fft_fwd_usc_360 */
int dlb_fft_fwd_usc_360(void);

/* Symbol: AC4DEC_ac4dap_virtualizer_query_scratch */
/* Demangled: AC4DEC_ac4dap_virtualizer_query_scratch */
int AC4DEC_ac4dap_virtualizer_query_scratch(void);

/* Symbol: AC4DEC_hp_height_fdn_allpass_init */
/* Demangled: AC4DEC_hp_height_fdn_allpass_init */
int AC4DEC_hp_height_fdn_allpass_init(void);

/* Symbol: AC4DEC_qextract_query_memory */
/* Demangled: AC4DEC_qextract_query_memory */
int AC4DEC_qextract_query_memory(void);

/* Symbol: DLB_r4_inv_fft_768_s */
/* Demangled: DLB_r4_inv_fft_768_s */
int DLB_r4_inv_fft_768_s(void);

/* Symbol: dlb_fft_inv_scl_120 */
/* Demangled: dlb_fft_inv_scl_120 */
int dlb_fft_inv_scl_120(void);

/* Symbol: AC4DEC_oamdi_prog_assign_check_num_objs */
/* Demangled: AC4DEC_oamdi_prog_assign_check_num_objs */
int AC4DEC_oamdi_prog_assign_check_num_objs(void);

/* Symbol: AC4DEC_hp_height_fdn_ane_mixing_process */
/* Demangled: AC4DEC_hp_height_fdn_ane_mixing_process */
int AC4DEC_hp_height_fdn_ane_mixing_process(void);

/* Symbol: AC4DEC_P_NGCS_SEG_RANGE_2TO4CH */
/* Demangled: AC4DEC_P_NGCS_SEG_RANGE_2TO4CH */
extern void* AC4DEC_P_NGCS_SEG_RANGE_2TO4CH;

/* Symbol: AC4DEC_oamdi_dimensional_trim_config_disable */
/* Demangled: AC4DEC_oamdi_dimensional_trim_config_disable */
int AC4DEC_oamdi_dimensional_trim_config_disable(void);

/* Symbol: _ZN5dolby12DlbGenClass213propIsMatchedEPKcjS2_j */
/* Demangled: dolby::DlbGenClass2::propIsMatched(char const*, unsigned int, char const*, unsigned int) */
int _ZN5dolby12DlbGenClass213propIsMatchedEPKcjS2_j(void);

/* Symbol: AC4DEC_ac4dap_pvt_channel_format_to_count */
/* Demangled: AC4DEC_ac4dap_pvt_channel_format_to_count */
int AC4DEC_ac4dap_pvt_channel_format_to_count(void);

/* Symbol: AC4DEC_aspx_hf_gen_reset */
/* Demangled: AC4DEC_aspx_hf_gen_reset */
int AC4DEC_aspx_hf_gen_reset(void);

/* Symbol: AC4DEC_arle_smooth_gains_across_frequency */
/* Demangled: AC4DEC_arle_smooth_gains_across_frequency */
int AC4DEC_arle_smooth_gains_across_frequency(void);

/* Symbol: AC4DEC_PA_DIFFUSE_DECORR_5TO7CH */
/* Demangled: AC4DEC_PA_DIFFUSE_DECORR_5TO7CH */
extern void* AC4DEC_PA_DIFFUSE_DECORR_5TO7CH;

/* Symbol: AC4DEC_predictiontab_dimension */
/* Demangled: AC4DEC_predictiontab_dimension */
extern void* AC4DEC_predictiontab_dimension;

/* Symbol: DLB_r4_fft_180_s */
/* Demangled: DLB_r4_fft_180_s */
int DLB_r4_fft_180_s(void);

/* Symbol: dlb_fft_fwd_usc_60 */
/* Demangled: dlb_fft_fwd_usc_60 */
int dlb_fft_fwd_usc_60(void);

/* Symbol: AC4DEC_calc_sine_start_envelopes */
/* Demangled: AC4DEC_calc_sine_start_envelopes */
int AC4DEC_calc_sine_start_envelopes(void);

/* Symbol: AC4DEC_cch_get_control_data */
/* Demangled: AC4DEC_cch_get_control_data */
int AC4DEC_cch_get_control_data(void);

/* Symbol: AC4DEC_bed_mixer_height_bed_is_left */
/* Demangled: AC4DEC_bed_mixer_height_bed_is_left */
int AC4DEC_bed_mixer_height_bed_is_left(void);

/* Symbol: AC4DEC_lfe_only_bed */
/* Demangled: AC4DEC_lfe_only_bed */
int AC4DEC_lfe_only_bed(void);

/* Symbol: AC4DEC_ade_open */
/* Demangled: AC4DEC_ade_open */
int AC4DEC_ade_open(void);

/* Symbol: AC4DEC_ajoc_num_param_bands */
/* Demangled: AC4DEC_ajoc_num_param_bands */
extern void* AC4DEC_ajoc_num_param_bands;

/* Symbol: AC4DEC_tree_huff_code_acpl_alpha_coarse_f0 */
/* Demangled: AC4DEC_tree_huff_code_acpl_alpha_coarse_f0 */
extern void* AC4DEC_tree_huff_code_acpl_alpha_coarse_f0;

/* Symbol: AC4DEC_oamdi_calc_variable_bits_max */
/* Demangled: AC4DEC_oamdi_calc_variable_bits_max */
int AC4DEC_oamdi_calc_variable_bits_max(void);

/* Symbol: process_Phase90Hilbert */
/* Demangled: process_Phase90Hilbert */
int process_Phase90Hilbert(void);

/* Symbol: AC4DEC_dapil_process */
/* Demangled: AC4DEC_dapil_process */
int AC4DEC_dapil_process(void);

/* Symbol: AC4DEC_emdf_convert */
/* Demangled: AC4DEC_emdf_convert */
int AC4DEC_emdf_convert(void);

/* Symbol: dlb_dct_twiddle_table16_L24_cos */
/* Demangled: dlb_dct_twiddle_table16_L24_cos */
extern void* dlb_dct_twiddle_table16_L24_cos;

/* Symbol: AC4DEC_tree_huff_code_ims_help_fine_f0 */
/* Demangled: AC4DEC_tree_huff_code_ims_help_fine_f0 */
extern void* AC4DEC_tree_huff_code_ims_help_fine_f0;

/* Symbol: AC4DEC_ac4toc_presentation_config_ext_info */
/* Demangled: AC4DEC_ac4toc_presentation_config_ext_info */
int AC4DEC_ac4toc_presentation_config_ext_info(void);

/* Symbol: AC4DEC_AA_DIFFUSE_NO_DECORR_2TO5CH */
/* Demangled: AC4DEC_AA_DIFFUSE_NO_DECORR_2TO5CH */
extern void* AC4DEC_AA_DIFFUSE_NO_DECORR_2TO5CH;

/* Symbol: AC4DEC_A_NGCS_SEG_RANGE_2TO5CH */
/* Demangled: AC4DEC_A_NGCS_SEG_RANGE_2TO5CH */
extern void* AC4DEC_A_NGCS_SEG_RANGE_2TO5CH;

/* Symbol: dlb_vec_LshlLIU_inplace_flex */
/* Demangled: dlb_vec_LshlLIU_inplace_flex */
int dlb_vec_LshlLIU_inplace_flex(void);

/* Symbol: AC4DEC_reset_randgen_state */
/* Demangled: AC4DEC_reset_randgen_state */
int AC4DEC_reset_randgen_state(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_alpha_coarse_dt */
/* Demangled: AC4DEC_tree_huff_code_acpl_alpha_coarse_dt */
extern void* AC4DEC_tree_huff_code_acpl_alpha_coarse_dt;

/* Symbol: DLB_r4_fft_720_s */
/* Demangled: DLB_r4_fft_720_s */
int DLB_r4_fft_720_s(void);

/* Symbol: dlb_fft_fwd_usc_64 */
/* Demangled: dlb_fft_fwd_usc_64 */
int dlb_fft_fwd_usc_64(void);

/* Symbol: dlb_fft_inv_scl_128 */
/* Demangled: dlb_fft_inv_scl_128 */
int dlb_fft_inv_scl_128(void);

/* Symbol: AC4DEC_tree_huff_code_ims_help_fine_dt */
/* Demangled: AC4DEC_tree_huff_code_ims_help_fine_dt */
extern void* AC4DEC_tree_huff_code_ims_help_fine_dt;

/* Symbol: dlb_dct_twiddle_table16_rev_L512 */
/* Demangled: dlb_dct_twiddle_table16_rev_L512 */
extern void* dlb_dct_twiddle_table16_rev_L512;

/* Symbol: DLB_r4_inv_fft_240_s */
/* Demangled: DLB_r4_inv_fft_240_s */
int DLB_r4_inv_fft_240_s(void);

/* Symbol: dlb_cos_64_full_twiddle */
/* Demangled: dlb_cos_64_full_twiddle */
extern void* dlb_cos_64_full_twiddle;

/* Symbol: AC4DEC_dlb_bitbuf_get_bits_left */
/* Demangled: AC4DEC_dlb_bitbuf_get_bits_left */
int AC4DEC_dlb_bitbuf_get_bits_left(void);

/* Symbol: AC4DEC_trans_downmix_process */
/* Demangled: AC4DEC_trans_downmix_process */
int AC4DEC_trans_downmix_process(void);

/* Symbol: AC4DEC_hp_height_fdn_allpass_query_memory */
/* Demangled: AC4DEC_hp_height_fdn_allpass_query_memory */
int AC4DEC_hp_height_fdn_allpass_query_memory(void);

/* Symbol: AC4DEC_trim_read */
/* Demangled: AC4DEC_trim_read */
int AC4DEC_trim_read(void);

/* Symbol: AC4DEC_evo_time_ge */
/* Demangled: AC4DEC_evo_time_ge */
int AC4DEC_evo_time_ge(void);

/* Symbol: AC4DEC_ngcs_centre_spread_is_on */
/* Demangled: AC4DEC_ngcs_centre_spread_is_on */
int AC4DEC_ngcs_centre_spread_is_on(void);

/* Symbol: AC4DEC_tree_huff_code_aspx_noise_balance_df */
/* Demangled: AC4DEC_tree_huff_code_aspx_noise_balance_df */
extern void* AC4DEC_tree_huff_code_aspx_noise_balance_df;

/* Symbol: AC4DEC_hmac_sha256_init */
/* Demangled: AC4DEC_hmac_sha256_init */
int AC4DEC_hmac_sha256_init(void);

/* Symbol: dlb_CLmpy_recipCLLIU_flex */
/* Demangled: dlb_CLmpy_recipCLLIU_flex */
int dlb_CLmpy_recipCLLIU_flex(void);

/* Symbol: dlb_fft_inv_usc_72 */
/* Demangled: dlb_fft_inv_usc_72 */
int dlb_fft_inv_usc_72(void);

/* Symbol: dlb_ac4dec_v2_get_version */
/* Demangled: dlb_ac4dec_v2_get_version */
int dlb_ac4dec_v2_get_version(void);

/* Symbol: AC4DEC_ac4toc_reader_get_presentation_info_ext */
/* Demangled: AC4DEC_ac4toc_reader_get_presentation_info_ext */
int AC4DEC_ac4toc_reader_get_presentation_info_ext(void);

/* Symbol: AC4DEC_ac4dec_get_substreams_in_group */
/* Demangled: AC4DEC_ac4dec_get_substreams_in_group */
int AC4DEC_ac4dec_get_substreams_in_group(void);

/* Symbol: DLB_blk_Lfir2L_strict */
/* Demangled: DLB_blk_Lfir2L_strict */
int DLB_blk_Lfir2L_strict(void);

/* Symbol: DLB_qmf_analysisL_set_slot_increment */
/* Demangled: DLB_qmf_analysisL_set_slot_increment */
int DLB_qmf_analysisL_set_slot_increment(void);

/* Symbol: AC4DEC_dap_mathlib_expavg_real */
/* Demangled: AC4DEC_dap_mathlib_expavg_real */
int AC4DEC_dap_mathlib_expavg_real(void);

/* Symbol: AC4DEC_dlb_bitbuf_safe_peek_long */
/* Demangled: AC4DEC_dlb_bitbuf_safe_peek_long */
int AC4DEC_dlb_bitbuf_safe_peek_long(void);

/* Symbol: DLB_blk_Liir1L_set_coef */
/* Demangled: DLB_blk_Liir1L_set_coef */
int DLB_blk_Liir1L_set_coef(void);

/* Symbol: dlb_fft_fwd_scl_480 */
/* Demangled: dlb_fft_fwd_scl_480 */
int dlb_fft_fwd_scl_480(void);

/* Symbol: AC4DEC_sv_reset */
/* Demangled: AC4DEC_sv_reset */
int AC4DEC_sv_reset(void);

/* Symbol: AC4DEC_aspx_hfgen_iwc_1ch_read */
/* Demangled: AC4DEC_aspx_hfgen_iwc_1ch_read */
int AC4DEC_aspx_hfgen_iwc_1ch_read(void);

/* Symbol: AC4DEC_WindowKBD240_alpha4_0 */
/* Demangled: AC4DEC_WindowKBD240_alpha4_0 */
extern void* AC4DEC_WindowKBD240_alpha4_0;

/* Symbol: dlb_dct_twiddle_table16_1_L144 */
/* Demangled: dlb_dct_twiddle_table16_1_L144 */
extern void* dlb_dct_twiddle_table16_1_L144;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L72 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L72 */
extern void* dlb_dct_twiddle_table16_rev_1_L72;

/* Symbol: dlb_fft_fwd_scl_90 */
/* Demangled: dlb_fft_fwd_scl_90 */
int dlb_fft_fwd_scl_90(void);

/* Symbol: AC4DEC_get_pred_gain */
/* Demangled: AC4DEC_get_pred_gain */
int AC4DEC_get_pred_gain(void);

/* Symbol: AC4DEC_WindowKBD384_alpha4_0 */
/* Demangled: AC4DEC_WindowKBD384_alpha4_0 */
extern void* AC4DEC_WindowKBD384_alpha4_0;

/* Symbol: dlb_odd_fft_cplx_fwd_usc */
/* Demangled: dlb_odd_fft_cplx_fwd_usc */
extern void* dlb_odd_fft_cplx_fwd_usc;

/* Symbol: DLB_r4_cplx_fwd_pair */
/* Demangled: DLB_r4_cplx_fwd_pair */
int DLB_r4_cplx_fwd_pair(void);

/* Symbol: dlb_dct_twiddle_table16_L30_cos */
/* Demangled: dlb_dct_twiddle_table16_L30_cos */
extern void* dlb_dct_twiddle_table16_L30_cos;

/* Symbol: AC4DEC_shuffle_process_inplace */
/* Demangled: AC4DEC_shuffle_process_inplace */
int AC4DEC_shuffle_process_inplace(void);

/* Symbol: AC4DEC_ibeta_map */
/* Demangled: AC4DEC_ibeta_map */
extern void* AC4DEC_ibeta_map;

/* Symbol: AC4DEC_decoder_set_drc_enable */
/* Demangled: AC4DEC_decoder_set_drc_enable */
int AC4DEC_decoder_set_drc_enable(void);

/* Symbol: DLB_r4_fft_72 */
/* Demangled: DLB_r4_fft_72 */
int DLB_r4_fft_72(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_symmetric */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_symmetric */
int DLB_Lmfb_p10km_synthesisCL_symmetric(void);

/* Symbol: DLB_qmf_analysisS_query_mem */
/* Demangled: DLB_qmf_analysisS_query_mem */
int DLB_qmf_analysisS_query_mem(void);

/* Symbol: AC4DEC_aspx_ec_data_noise_read */
/* Demangled: AC4DEC_aspx_ec_data_noise_read */
int AC4DEC_aspx_ec_data_noise_read(void);

/* Symbol: AC4DEC_cch_detect_config_change */
/* Demangled: AC4DEC_cch_detect_config_change */
int AC4DEC_cch_detect_config_change(void);

/* Symbol: AC4DEC_detect_flushing */
/* Demangled: AC4DEC_detect_flushing */
int AC4DEC_detect_flushing(void);

/* Symbol: mdd_max_frames */
/* Demangled: mdd_max_frames */
extern void* mdd_max_frames;

/* Symbol: AC4DEC_WindowKBD240_alpha4_5 */
/* Demangled: AC4DEC_WindowKBD240_alpha4_5 */
extern void* AC4DEC_WindowKBD240_alpha4_5;

/* Symbol: _ZN7android10AC4Decoder5startEv */
/* Demangled: android::AC4Decoder::start() */
int _ZN7android10AC4Decoder5startEv(void);

/* Symbol: dlb_dct_twiddle_table16_L120_cos */
/* Demangled: dlb_dct_twiddle_table16_L120_cos */
extern void* dlb_dct_twiddle_table16_L120_cos;

/* Symbol: AC4DEC_rand_gen_query_mem */
/* Demangled: AC4DEC_rand_gen_query_mem */
int AC4DEC_rand_gen_query_mem(void);

/* Symbol: AC4DEC_WindowKBD384_alpha4_5 */
/* Demangled: AC4DEC_WindowKBD384_alpha4_5 */
extern void* AC4DEC_WindowKBD384_alpha4_5;

/* Symbol: dlb_fft_fwd_scl_96 */
/* Demangled: dlb_fft_fwd_scl_96 */
int dlb_fft_fwd_scl_96(void);

/* Symbol: dlb_ac4dec_v2_get_stream_info */
/* Demangled: dlb_ac4dec_v2_get_stream_info */
int dlb_ac4dec_v2_get_stream_info(void);

/* Symbol: DLB_CLmpyCLSU_strict */
/* Demangled: DLB_CLmpyCLSU_strict */
int DLB_CLmpyCLSU_strict(void);

/* Symbol: dlb_fft_inv_usc_384 */
/* Demangled: dlb_fft_inv_usc_384 */
int dlb_fft_inv_usc_384(void);

/* Symbol: AC4DEC_ajocdec_interpolate */
/* Demangled: AC4DEC_ajocdec_interpolate */
int AC4DEC_ajocdec_interpolate(void);

/* Symbol: AC4DEC_emdf_pl_mapping_ac4_to_0x01 */
/* Demangled: AC4DEC_emdf_pl_mapping_ac4_to_0x01 */
int AC4DEC_emdf_pl_mapping_ac4_to_0x01(void);

/* Symbol: AC4DEC_ims_il_process */
/* Demangled: AC4DEC_ims_il_process */
int AC4DEC_ims_il_process(void);

/* Symbol: AC4DEC_ssf_get_mdct_len_rec_x15_q10 */
/* Demangled: AC4DEC_ssf_get_mdct_len_rec_x15_q10 */
int AC4DEC_ssf_get_mdct_len_rec_x15_q10(void);

/* Symbol: dlb_dct_twiddle_table16_1_L320 */
/* Demangled: dlb_dct_twiddle_table16_1_L320 */
extern void* dlb_dct_twiddle_table16_1_L320;

/* Symbol: dlb_fft_fwd_usc_192 */
/* Demangled: dlb_fft_fwd_usc_192 */
int dlb_fft_fwd_usc_192(void);

/* Symbol: AC4DEC_bf1_fdn_process_block */
/* Demangled: AC4DEC_bf1_fdn_process_block */
int AC4DEC_bf1_fdn_process_block(void);

/* Symbol: AC4DEC_tree_huff_code_aspx_noise_balance_f0 */
/* Demangled: AC4DEC_tree_huff_code_aspx_noise_balance_f0 */
extern void* AC4DEC_tree_huff_code_aspx_noise_balance_f0;

/* Symbol: AC4DEC_WindowKBD128_alpha4_0 */
/* Demangled: AC4DEC_WindowKBD128_alpha4_0 */
extern void* AC4DEC_WindowKBD128_alpha4_0;

/* Symbol: AC4DEC_evo_get_payload_size */
/* Demangled: AC4DEC_evo_get_payload_size */
int AC4DEC_evo_get_payload_size(void);

/* Symbol: dlb_fft_fwd_usc_720 */
/* Demangled: dlb_fft_fwd_usc_720 */
int dlb_fft_fwd_usc_720(void);

/* Symbol: AC4DEC_evo_parse_payload_id */
/* Demangled: AC4DEC_evo_parse_payload_id */
int AC4DEC_evo_parse_payload_id(void);

/* Symbol: AC4DEC_ac4framer_get_frame */
/* Demangled: AC4DEC_ac4framer_get_frame */
int AC4DEC_ac4framer_get_frame(void);

/* Symbol: AC4DEC_mult_UM_1ch */
/* Demangled: AC4DEC_mult_UM_1ch */
int AC4DEC_mult_UM_1ch(void);

/* Symbol: AC4DEC_tree_huff_code_aspx_noise_balance_dt */
/* Demangled: AC4DEC_tree_huff_code_aspx_noise_balance_dt */
extern void* AC4DEC_tree_huff_code_aspx_noise_balance_dt;

/* Symbol: AC4DEC_evo_time_gt */
/* Demangled: AC4DEC_evo_time_gt */
int AC4DEC_evo_time_gt(void);

/* Symbol: dlb_ac4dec_v2_set_timestamp */
/* Demangled: dlb_ac4dec_v2_set_timestamp */
int dlb_ac4dec_v2_set_timestamp(void);

/* Symbol: AC4DEC_ac4dec_get_substream_index_from_type */
/* Demangled: AC4DEC_ac4dec_get_substream_index_from_type */
int AC4DEC_ac4dec_get_substream_index_from_type(void);

/* Symbol: AC4DEC_a_decorr_par_band_to_qmf_border_band */
/* Demangled: AC4DEC_a_decorr_par_band_to_qmf_border_band */
extern void* AC4DEC_a_decorr_par_band_to_qmf_border_band;

/* Symbol: reset_Phase90Hilbert */
/* Demangled: reset_Phase90Hilbert */
int reset_Phase90Hilbert(void);

/* Symbol: AC4DEC_P_PHASE_SHIFT_2TO4CH */
/* Demangled: AC4DEC_P_PHASE_SHIFT_2TO4CH */
extern void* AC4DEC_P_PHASE_SHIFT_2TO4CH;

/* Symbol: AC4DEC_dlb_ac4dec_v1_input_stage_query_mem */
/* Demangled: AC4DEC_dlb_ac4dec_v1_input_stage_query_mem */
int AC4DEC_dlb_ac4dec_v1_input_stage_query_mem(void);

/* Symbol: AC4DEC_evo_cb_clear */
/* Demangled: AC4DEC_evo_cb_clear */
int AC4DEC_evo_cb_clear(void);

/* Symbol: AC4DEC_ngcs_separate_apply_gains */
/* Demangled: AC4DEC_ngcs_separate_apply_gains */
int AC4DEC_ngcs_separate_apply_gains(void);

/* Symbol: AC4DEC_fboar_init */
/* Demangled: AC4DEC_fboar_init */
int AC4DEC_fboar_init(void);

/* Symbol: AC4DEC_WindowKBD128_alpha4_5 */
/* Demangled: AC4DEC_WindowKBD128_alpha4_5 */
extern void* AC4DEC_WindowKBD128_alpha4_5;

/* Symbol: dlb_fft_cplx_inv_scl */
/* Demangled: dlb_fft_cplx_inv_scl */
extern void* dlb_fft_cplx_inv_scl;

/* Symbol: AC4DEC_ims_sv_xtc_spk_angle */
/* Demangled: AC4DEC_ims_sv_xtc_spk_angle */
extern void* AC4DEC_ims_sv_xtc_spk_angle;

/* Symbol: AC4DEC_cch_restore_pres_info_from_previous_frame */
/* Demangled: AC4DEC_cch_restore_pres_info_from_previous_frame */
int AC4DEC_cch_restore_pres_info_from_previous_frame(void);

/* Symbol: DLB_qmf_analysisL_close */
/* Demangled: DLB_qmf_analysisL_close */
int DLB_qmf_analysisL_close(void);

/* Symbol: AC4DEC_WindowKBD256 */
/* Demangled: AC4DEC_WindowKBD256 */
extern void* AC4DEC_WindowKBD256;

/* Symbol: DLB_hybrid_analysisCL_open */
/* Demangled: DLB_hybrid_analysisCL_open */
int DLB_hybrid_analysisCL_open(void);

/* Symbol: dlb_dct_twiddle_table16_L768 */
/* Demangled: dlb_dct_twiddle_table16_L768 */
extern void* dlb_dct_twiddle_table16_L768;

/* Symbol: AC4DEC_tree_huff_code_ims_help_coarse_df */
/* Demangled: AC4DEC_tree_huff_code_ims_help_coarse_df */
extern void* AC4DEC_tree_huff_code_ims_help_coarse_df;

/* Symbol: AC4DEC_evo_generate_hash */
/* Demangled: AC4DEC_evo_generate_hash */
int AC4DEC_evo_generate_hash(void);

/* Symbol: DLB_blk_Liir2df1L_setup */
/* Demangled: DLB_blk_Liir2df1L_setup */
int DLB_blk_Liir2df1L_setup(void);

/* Symbol: DLB_r4_inv_fft_90 */
/* Demangled: DLB_r4_inv_fft_90 */
int DLB_r4_inv_fft_90(void);

/* Symbol: AC4DEC_oamdi_set_sample_offset */
/* Demangled: AC4DEC_oamdi_set_sample_offset */
int AC4DEC_oamdi_set_sample_offset(void);

/* Symbol: AC4DEC_decoder_get_active_channel_config */
/* Demangled: AC4DEC_decoder_get_active_channel_config */
int AC4DEC_decoder_get_active_channel_config(void);

/* Symbol: AC4DEC_sap_sub_ms_enc */
/* Demangled: AC4DEC_sap_sub_ms_enc */
int AC4DEC_sap_sub_ms_enc(void);

/* Symbol: AC4DEC_dlb_bitbuf_get_version */
/* Demangled: AC4DEC_dlb_bitbuf_get_version */
int AC4DEC_dlb_bitbuf_get_version(void);

/* Symbol: AC4DEC_q2le_process */
/* Demangled: AC4DEC_q2le_process */
int AC4DEC_q2le_process(void);

/* Symbol: AC4DEC_aspx_process_dmx */
/* Demangled: AC4DEC_aspx_process_dmx */
int AC4DEC_aspx_process_dmx(void);

/* Symbol: AC4DEC_cch_get_data */
/* Demangled: AC4DEC_cch_get_data */
int AC4DEC_cch_get_data(void);

/* Symbol: AC4DEC_tree_huff_code_aspx_env_level_15_df */
/* Demangled: AC4DEC_tree_huff_code_aspx_env_level_15_df */
extern void* AC4DEC_tree_huff_code_aspx_env_level_15_df;

/* Symbol: AC4DEC_ssf_buffer_update */
/* Demangled: AC4DEC_ssf_buffer_update */
int AC4DEC_ssf_buffer_update(void);

/* Symbol: AC4DEC_oamd_framer_last_update_sample */
/* Demangled: AC4DEC_oamd_framer_last_update_sample */
int AC4DEC_oamd_framer_last_update_sample(void);

/* Symbol: dlb_dct_twiddle_table16_1_L90 */
/* Demangled: dlb_dct_twiddle_table16_1_L90 */
extern void* dlb_dct_twiddle_table16_1_L90;

/* Symbol: DLB_r4_inv_fft_16_s */
/* Demangled: DLB_r4_inv_fft_16_s */
int DLB_r4_inv_fft_16_s(void);

/* Symbol: DLB_qmf_synthesisL_set_slot_increment */
/* Demangled: DLB_qmf_synthesisL_set_slot_increment */
int DLB_qmf_synthesisL_set_slot_increment(void);

/* Symbol: AC4DEC_ac4dap_convert_drc_params */
/* Demangled: AC4DEC_ac4dap_convert_drc_params */
int AC4DEC_ac4dap_convert_drc_params(void);

/* Symbol: DLB_r4_inv_fft_2 */
/* Demangled: DLB_r4_inv_fft_2 */
int DLB_r4_inv_fft_2(void);

/* Symbol: dlb_dct_twiddle_table16_L30_1 */
/* Demangled: dlb_dct_twiddle_table16_L30_1 */
extern void* dlb_dct_twiddle_table16_L30_1;

/* Symbol: AC4DEC_oamdi_get_oa_element_bed_object */
/* Demangled: AC4DEC_oamdi_get_oa_element_bed_object */
int AC4DEC_oamdi_get_oa_element_bed_object(void);

/* Symbol: AC4DEC_pcm_data_convert */
/* Demangled: AC4DEC_pcm_data_convert */
int AC4DEC_pcm_data_convert(void);

/* Symbol: AC4DEC_DELTA_X_SAMPLES */
/* Demangled: AC4DEC_DELTA_X_SAMPLES */
extern void* AC4DEC_DELTA_X_SAMPLES;

/* Symbol: DLB_r4_inv_fft_96 */
/* Demangled: DLB_r4_inv_fft_96 */
int DLB_r4_inv_fft_96(void);

/* Symbol: AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR46KHZ034 */
/* Demangled: AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR46KHZ034 */
extern void* AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR46KHZ034;

/* Symbol: AC4DEC_imdct_ast_bw_index_get */
/* Demangled: AC4DEC_imdct_ast_bw_index_get */
int AC4DEC_imdct_ast_bw_index_get(void);

/* Symbol: dlb_dct_twiddle_table16_L30_2 */
/* Demangled: dlb_dct_twiddle_table16_L30_2 */
extern void* dlb_dct_twiddle_table16_L30_2;

/* Symbol: dlb_blk_LmixLL_flex */
/* Demangled: dlb_blk_LmixLL_flex */
int dlb_blk_LmixLL_flex(void);

/* Symbol: DLB_r4_inv_fft_20_s */
/* Demangled: DLB_r4_inv_fft_20_s */
int DLB_r4_inv_fft_20_s(void);

/* Symbol: DLB_r4_inv_fft_4 */
/* Demangled: DLB_r4_inv_fft_4 */
int DLB_r4_inv_fft_4(void);

/* Symbol: AC4DEC_dvlim_init */
/* Demangled: AC4DEC_dvlim_init */
int AC4DEC_dvlim_init(void);

/* Symbol: DLB_r4_inv_fft_144 */
/* Demangled: DLB_r4_inv_fft_144 */
int DLB_r4_inv_fft_144(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L288 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L288 */
extern void* dlb_dct_twiddle_table16_rev_1_L288;

/* Symbol: DLB_r4_inv_fft_6 */
/* Demangled: DLB_r4_inv_fft_6 */
int DLB_r4_inv_fft_6(void);

/* Symbol: dlb_fft_fwd_usc_72 */
/* Demangled: dlb_fft_fwd_usc_72 */
int dlb_fft_fwd_usc_72(void);

/* Symbol: DLB_time_lt */
/* Demangled: DLB_time_lt */
int DLB_time_lt(void);

/* Symbol: dlb_dct_twiddle_table16_1_L96 */
/* Demangled: dlb_dct_twiddle_table16_1_L96 */
extern void* dlb_dct_twiddle_table16_1_L96;

/* Symbol: dlb_fft_fwd_usc_2048 */
/* Demangled: dlb_fft_fwd_usc_2048 */
int dlb_fft_fwd_usc_2048(void);

/* Symbol: AC4DEC_memlib_pool_init */
/* Demangled: AC4DEC_memlib_pool_init */
int AC4DEC_memlib_pool_init(void);

/* Symbol: dlb_blk_LsubLL_flex */
/* Demangled: dlb_blk_LsubLL_flex */
int dlb_blk_LsubLL_flex(void);

/* Symbol: DLB_r4_inv_fft_8 */
/* Demangled: DLB_r4_inv_fft_8 */
int DLB_r4_inv_fft_8(void);

/* Symbol: frame_rate_settings */
/* Demangled: frame_rate_settings */
extern void* frame_rate_settings;

/* Symbol: dlb_dct_twiddle_table16_L36_cos */
/* Demangled: dlb_dct_twiddle_table16_L36_cos */
extern void* dlb_dct_twiddle_table16_L36_cos;

/* Symbol: AC4DEC_tree_huff_code_ims_help_coarse_f0 */
/* Demangled: AC4DEC_tree_huff_code_ims_help_coarse_f0 */
extern void* AC4DEC_tree_huff_code_ims_help_coarse_f0;

/* Symbol: dlb_fft_inv_usc_80 */
/* Demangled: dlb_fft_inv_usc_80 */
int dlb_fft_inv_usc_80(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_even_0 */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_0 */
int DLB_Lmfb_p10km_synthesisCL_even_0(void);

/* Symbol: AC4DEC_lvl_smooth_scale_time */
/* Demangled: AC4DEC_lvl_smooth_scale_time */
int AC4DEC_lvl_smooth_scale_time(void);

/* Symbol: AC4DEC_decorr_open */
/* Demangled: AC4DEC_decorr_open */
int AC4DEC_decorr_open(void);

/* Symbol: AC4DEC_A_ROOM_CONFIG_SPKS_SURROUNDS_FULL */
/* Demangled: AC4DEC_A_ROOM_CONFIG_SPKS_SURROUNDS_FULL */
extern void* AC4DEC_A_ROOM_CONFIG_SPKS_SURROUNDS_FULL;

/* Symbol: DLB_r4_inv_fft_8_s */
/* Demangled: DLB_r4_inv_fft_8_s */
int DLB_r4_inv_fft_8_s(void);

/* Symbol: init_Phase90Hilbert */
/* Demangled: init_Phase90Hilbert */
int init_Phase90Hilbert(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_even_1 */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_1 */
int DLB_Lmfb_p10km_synthesisCL_even_1(void);

/* Symbol: DLB_hybrid_analysisCL_query_mem */
/* Demangled: DLB_hybrid_analysisCL_query_mem */
int DLB_hybrid_analysisCL_query_mem(void);

/* Symbol: AC4DEC_ngcs_hcqmf_umix_g */
/* Demangled: AC4DEC_ngcs_hcqmf_umix_g */
int AC4DEC_ngcs_hcqmf_umix_g(void);

/* Symbol: AC4DEC_ajoc_de_dlg_dmx_coeff_idx_huf_tab */
/* Demangled: AC4DEC_ajoc_de_dlg_dmx_coeff_idx_huf_tab */
extern void* AC4DEC_ajoc_de_dlg_dmx_coeff_idx_huf_tab;

/* Symbol: AC4DEC_tree_huff_code_ims_help_coarse_dt */
/* Demangled: AC4DEC_tree_huff_code_ims_help_coarse_dt */
extern void* AC4DEC_tree_huff_code_ims_help_coarse_dt;

/* Symbol: AC4DEC_oamdi_get_trim_config_read_only */
/* Demangled: AC4DEC_oamdi_get_trim_config_read_only */
int AC4DEC_oamdi_get_trim_config_read_only(void);

/* Symbol: dlb_dctII_unscaled */
/* Demangled: dlb_dctII_unscaled */
int dlb_dctII_unscaled(void);

/* Symbol: DLB_r4_inv_fft_144_s */
/* Demangled: DLB_r4_inv_fft_144_s */
int DLB_r4_inv_fft_144_s(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_even_2 */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_2 */
int DLB_Lmfb_p10km_synthesisCL_even_2(void);

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR48KHZ_BS256S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR48KHZ_BS256S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR48KHZ_BS256S;

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR44KHZ1_BS384S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR44KHZ1_BS384S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR44KHZ1_BS384S;

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR48KHZ_BS384S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR48KHZ_BS384S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR48KHZ_BS384S;

/* Symbol: AC4DEC_tree_huff_code_aspx_env_level_15_f0 */
/* Demangled: AC4DEC_tree_huff_code_aspx_env_level_15_f0 */
extern void* AC4DEC_tree_huff_code_aspx_env_level_15_f0;

/* Symbol: AC4DEC_ramp_gain_starting_gain_set */
/* Demangled: AC4DEC_ramp_gain_starting_gain_set */
int AC4DEC_ramp_gain_starting_gain_set(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_even_3 */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_3 */
int DLB_Lmfb_p10km_synthesisCL_even_3(void);

/* Symbol: DLB_r4_inv_fft_320 */
/* Demangled: DLB_r4_inv_fft_320 */
int DLB_r4_inv_fft_320(void);

/* Symbol: _ZN7android10AC4DecoderC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::AC4Decoder::AC4Decoder(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android10AC4DecoderC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: AC4DEC_downmix_excitations */
/* Demangled: AC4DEC_downmix_excitations */
int AC4DEC_downmix_excitations(void);

/* Symbol: AC4DEC_ajccdec_upmix_mtrx_mult_module4_312 */
/* Demangled: AC4DEC_ajccdec_upmix_mtrx_mult_module4_312 */
int AC4DEC_ajccdec_upmix_mtrx_mult_module4_312(void);

/* Symbol: dlb_dct_twiddle_table16_L60_1 */
/* Demangled: dlb_dct_twiddle_table16_L60_1 */
extern void* dlb_dct_twiddle_table16_L60_1;

/* Symbol: AC4DEC_tree_huff_code_aspx_env_level_15_dt */
/* Demangled: AC4DEC_tree_huff_code_aspx_env_level_15_dt */
extern void* AC4DEC_tree_huff_code_aspx_env_level_15_dt;

/* Symbol: dlb_blk_Liir2ssv3L_inplace_flex */
/* Demangled: dlb_blk_Liir2ssv3L_inplace_flex */
int dlb_blk_Liir2ssv3L_inplace_flex(void);

/* Symbol: AC4DEC_lvl_configure_smoothing_params */
/* Demangled: AC4DEC_lvl_configure_smoothing_params */
int AC4DEC_lvl_configure_smoothing_params(void);

/* Symbol: dlb_dct_twiddle_table16_L60_2 */
/* Demangled: dlb_dct_twiddle_table16_L60_2 */
extern void* dlb_dct_twiddle_table16_L60_2;

/* Symbol: AC4DEC_dlb_bitbuf_peek */
/* Demangled: AC4DEC_dlb_bitbuf_peek */
int AC4DEC_dlb_bitbuf_peek(void);

/* Symbol: dlb_fft_fwd_scl_120 */
/* Demangled: dlb_fft_fwd_scl_120 */
int dlb_fft_fwd_scl_120(void);

/* Symbol: DLB_fft_init */
/* Demangled: DLB_fft_init */
int DLB_fft_init(void);

/* Symbol: AC4DEC_decoder_get_ma_mix_info */
/* Demangled: AC4DEC_decoder_get_ma_mix_info */
int AC4DEC_decoder_get_ma_mix_info(void);

/* Symbol: DLB_vec_Lmean_sqrLU_strict */
/* Demangled: DLB_vec_Lmean_sqrLU_strict */
int DLB_vec_Lmean_sqrLU_strict(void);

/* Symbol: func_a_ptr */
/* Demangled: func_a_ptr */
extern void* func_a_ptr;

/* Symbol: dlb_dct_twiddle_table16_L512_cos */
/* Demangled: dlb_dct_twiddle_table16_L512_cos */
extern void* dlb_dct_twiddle_table16_L512_cos;

/* Symbol: AC4DEC_evo_pb_init */
/* Demangled: AC4DEC_evo_pb_init */
int AC4DEC_evo_pb_init(void);

/* Symbol: DLB_r4_fft_80 */
/* Demangled: DLB_r4_fft_80 */
int DLB_r4_fft_80(void);

/* Symbol: AC4DEC_lvl_calc_drc_scale */
/* Demangled: AC4DEC_lvl_calc_drc_scale */
int AC4DEC_lvl_calc_drc_scale(void);

/* Symbol: dlb_CLmpy_shlCLSIU_flex */
/* Demangled: dlb_CLmpy_shlCLSIU_flex */
int dlb_CLmpy_shlCLSIU_flex(void);

/* Symbol: DLB_dsplib_init */
/* Demangled: DLB_dsplib_init */
int DLB_dsplib_init(void);

/* Symbol: DLB_mfb_p10km_synthesisCL_query_scratch */
/* Demangled: DLB_mfb_p10km_synthesisCL_query_scratch */
int DLB_mfb_p10km_synthesisCL_query_scratch(void);

/* Symbol: dlb_blk_Liir2ssv2L_flex */
/* Demangled: dlb_blk_Liir2ssv2L_flex */
int dlb_blk_Liir2ssv2L_flex(void);

/* Symbol: AC4DEC_ac4toc_get_substream_group_info */
/* Demangled: AC4DEC_ac4toc_get_substream_group_info */
int AC4DEC_ac4toc_get_substream_group_info(void);

/* Symbol: AC4DEC_ac4dec_get_number_of_channels_from_channel_mode */
/* Demangled: AC4DEC_ac4dec_get_number_of_channels_from_channel_mode */
int AC4DEC_ac4dec_get_number_of_channels_from_channel_mode(void);

/* Symbol: dlb_vec_LdotLLU_flex */
/* Demangled: dlb_vec_LdotLLU_flex */
int dlb_vec_LdotLLU_flex(void);

/* Symbol: AC4DEC_AA_NGCS_SEG_CHANNELS_2TO6CH */
/* Demangled: AC4DEC_AA_NGCS_SEG_CHANNELS_2TO6CH */
extern void* AC4DEC_AA_NGCS_SEG_CHANNELS_2TO6CH;

/* Symbol: AC4DEC_ssfdec_update_spectrum_delay_buf */
/* Demangled: AC4DEC_ssfdec_update_spectrum_delay_buf */
int AC4DEC_ssfdec_update_spectrum_delay_buf(void);

/* Symbol: AC4DEC_room_config_size_panner_init */
/* Demangled: AC4DEC_room_config_size_panner_init */
int AC4DEC_room_config_size_panner_init(void);

/* Symbol: AC4DEC_ac4dec_output_stage_get_config */
/* Demangled: AC4DEC_ac4dec_output_stage_get_config */
int AC4DEC_ac4dec_output_stage_get_config(void);

/* Symbol: AC4DEC_ac4parser_cdmx_parameters */
/* Demangled: AC4DEC_ac4parser_cdmx_parameters */
int AC4DEC_ac4parser_cdmx_parameters(void);

/* Symbol: AC4DEC_slop_db_to_lin_inv */
/* Demangled: AC4DEC_slop_db_to_lin_inv */
extern void* AC4DEC_slop_db_to_lin_inv;

/* Symbol: AC4DEC_expd_channels_sync */
/* Demangled: AC4DEC_expd_channels_sync */
int AC4DEC_expd_channels_sync(void);

/* Symbol: AC4DEC_oamdi_get_prog_assign */
/* Demangled: AC4DEC_oamdi_get_prog_assign */
int AC4DEC_oamdi_get_prog_assign(void);

/* Symbol: AC4DEC_tree_asf_book1 */
/* Demangled: AC4DEC_tree_asf_book1 */
extern void* AC4DEC_tree_asf_book1;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L640 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L640 */
extern void* dlb_dct_twiddle_table16_rev_1_L640;

/* Symbol: DLB_fft_scratch_query_mem */
/* Demangled: DLB_fft_scratch_query_mem */
int DLB_fft_scratch_query_mem(void);

/* Symbol: dlb_dct_twiddle_table16_L640_cos */
/* Demangled: dlb_dct_twiddle_table16_L640_cos */
extern void* dlb_dct_twiddle_table16_L640_cos;

/* Symbol: AC4DEC_ldn_wb_loudness_transform */
/* Demangled: AC4DEC_ldn_wb_loudness_transform */
int AC4DEC_ldn_wb_loudness_transform(void);

/* Symbol: AC4DEC_aspx_vec_sqrt_mant_exp */
/* Demangled: AC4DEC_aspx_vec_sqrt_mant_exp */
int AC4DEC_aspx_vec_sqrt_mant_exp(void);

/* Symbol: AC4DEC_tree_asf_book2 */
/* Demangled: AC4DEC_tree_asf_book2 */
extern void* AC4DEC_tree_asf_book2;

/* Symbol: DLB_r4_fft_960 */
/* Demangled: DLB_r4_fft_960 */
int DLB_r4_fft_960(void);

/* Symbol: dlb_fft_fwd_scl_128 */
/* Demangled: dlb_fft_fwd_scl_128 */
int dlb_fft_fwd_scl_128(void);

/* Symbol: AC4DEC_ac4toc_convert_to_nonstd_bed_channel_assignment_mask */
/* Demangled: AC4DEC_ac4toc_convert_to_nonstd_bed_channel_assignment_mask */
int AC4DEC_ac4toc_convert_to_nonstd_bed_channel_assignment_mask(void);

/* Symbol: AC4DEC_tree_asf_book3 */
/* Demangled: AC4DEC_tree_asf_book3 */
extern void* AC4DEC_tree_asf_book3;

/* Symbol: AC4DEC_get_max_sfb */
/* Demangled: AC4DEC_get_max_sfb */
int AC4DEC_get_max_sfb(void);

/* Symbol: AC4DEC_ac4dec_get_channel_mode */
/* Demangled: AC4DEC_ac4dec_get_channel_mode */
int AC4DEC_ac4dec_get_channel_mode(void);

/* Symbol: dlb_dct_twiddle_table16_L90_1 */
/* Demangled: dlb_dct_twiddle_table16_L90_1 */
extern void* dlb_dct_twiddle_table16_L90_1;

/* Symbol: AC4DEC_tree_asf_book4 */
/* Demangled: AC4DEC_tree_asf_book4 */
extern void* AC4DEC_tree_asf_book4;

/* Symbol: AC4DEC_hmac_sha256_get_digest */
/* Demangled: AC4DEC_hmac_sha256_get_digest */
int AC4DEC_hmac_sha256_get_digest(void);

/* Symbol: AC4DEC_ac4toc_update_oamdi_prog_assign */
/* Demangled: AC4DEC_ac4toc_update_oamdi_prog_assign */
int AC4DEC_ac4toc_update_oamdi_prog_assign(void);

/* Symbol: AC4DEC_ajcc_read */
/* Demangled: AC4DEC_ajcc_read */
int AC4DEC_ajcc_read(void);

/* Symbol: dlb_dct_twiddle_table16_L90_2 */
/* Demangled: dlb_dct_twiddle_table16_L90_2 */
extern void* dlb_dct_twiddle_table16_L90_2;

/* Symbol: AC4DEC_tree_asf_book5 */
/* Demangled: AC4DEC_tree_asf_book5 */
extern void* AC4DEC_tree_asf_book5;

/* Symbol: DLB_r4_inv_fft_80_s */
/* Demangled: DLB_r4_inv_fft_80_s */
int DLB_r4_inv_fft_80_s(void);

/* Symbol: AC4DEC_de_new_index */
/* Demangled: AC4DEC_de_new_index */
int AC4DEC_de_new_index(void);

/* Symbol: AC4DEC_decoder_query_mem_dynamic */
/* Demangled: AC4DEC_decoder_query_mem_dynamic */
int AC4DEC_decoder_query_mem_dynamic(void);

/* Symbol: AC4DEC_acpldec_decorr_init */
/* Demangled: AC4DEC_acpldec_decorr_init */
int AC4DEC_acpldec_decorr_init(void);

/* Symbol: AC4DEC_tree_asf_book6 */
/* Demangled: AC4DEC_tree_asf_book6 */
extern void* AC4DEC_tree_asf_book6;

/* Symbol: AC4DEC_WindowKBD192_alpha4_0 */
/* Demangled: AC4DEC_WindowKBD192_alpha4_0 */
extern void* AC4DEC_WindowKBD192_alpha4_0;

/* Symbol: AC4DEC_ade_frame_dec_init */
/* Demangled: AC4DEC_ade_frame_dec_init */
int AC4DEC_ade_frame_dec_init(void);

/* Symbol: AC4DEC_metadata_delay_input_get_buffer */
/* Demangled: AC4DEC_metadata_delay_input_get_buffer */
int AC4DEC_metadata_delay_input_get_buffer(void);

/* Symbol: AC4DEC_tree_asf_book7 */
/* Demangled: AC4DEC_tree_asf_book7 */
extern void* AC4DEC_tree_asf_book7;

/* Symbol: AC4DEC_evo_get_md_validity */
/* Demangled: AC4DEC_evo_get_md_validity */
int AC4DEC_evo_get_md_validity(void);

/* Symbol: DLB_fft_is_supported */
/* Demangled: DLB_fft_is_supported */
int DLB_fft_is_supported(void);

/* Symbol: AC4DEC_tree_asf_book8 */
/* Demangled: AC4DEC_tree_asf_book8 */
extern void* AC4DEC_tree_asf_book8;

/* Symbol: dlb_blk_Liir1_shl_addLL_flex */
/* Demangled: dlb_blk_Liir1_shl_addLL_flex */
int dlb_blk_Liir1_shl_addLL_flex(void);

/* Symbol: dlb_vec_LmpyLSU_flex */
/* Demangled: dlb_vec_LmpyLSU_flex */
int dlb_vec_LmpyLSU_flex(void);

/* Symbol: AC4DEC_decoder_get_metadata_sample_offset */
/* Demangled: AC4DEC_decoder_get_metadata_sample_offset */
int AC4DEC_decoder_get_metadata_sample_offset(void);

/* Symbol: AC4DEC_update_subband_groups */
/* Demangled: AC4DEC_update_subband_groups */
int AC4DEC_update_subband_groups(void);

/* Symbol: AC4DEC_get_compressed_channel_position */
/* Demangled: AC4DEC_get_compressed_channel_position */
int AC4DEC_get_compressed_channel_position(void);

/* Symbol: AC4DEC_tree_asf_book9 */
/* Demangled: AC4DEC_tree_asf_book9 */
extern void* AC4DEC_tree_asf_book9;

/* Symbol: AC4DEC_a_f_indices */
/* Demangled: AC4DEC_a_f_indices */
extern void* AC4DEC_a_f_indices;

/* Symbol: AC4DEC_evo_pb_remove */
/* Demangled: AC4DEC_evo_pb_remove */
int AC4DEC_evo_pb_remove(void);

/* Symbol: dlb_CLmix4CL4SU_flex */
/* Demangled: dlb_CLmix4CL4SU_flex */
int dlb_CLmix4CL4SU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L1024 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L1024 */
extern void* dlb_dct_twiddle_table16_rev_1_L1024;

/* Symbol: AC4DEC_framer_buffer_rewind */
/* Demangled: AC4DEC_framer_buffer_rewind */
int AC4DEC_framer_buffer_rewind(void);

/* Symbol: AC4DEC_WindowKBD192_alpha4_5 */
/* Demangled: AC4DEC_WindowKBD192_alpha4_5 */
extern void* AC4DEC_WindowKBD192_alpha4_5;

/* Symbol: AC4DEC_evo_parse_bitstream */
/* Demangled: AC4DEC_evo_parse_bitstream */
int AC4DEC_evo_parse_bitstream(void);

/* Symbol: dlb_dct_twiddle_table16_L320_1 */
/* Demangled: dlb_dct_twiddle_table16_L320_1 */
extern void* dlb_dct_twiddle_table16_L320_1;

/* Symbol: AC4DEC_dlb_bitbuf_safe_peek */
/* Demangled: AC4DEC_dlb_bitbuf_safe_peek */
int AC4DEC_dlb_bitbuf_safe_peek(void);

/* Symbol: DLB_CLcopyCLU_strict */
/* Demangled: DLB_CLcopyCLU_strict */
int DLB_CLcopyCLU_strict(void);

/* Symbol: AC4DEC_expd_set_qmf_limits */
/* Demangled: AC4DEC_expd_set_qmf_limits */
int AC4DEC_expd_set_qmf_limits(void);

/* Symbol: dlb_dct_twiddle_table16_L320_2 */
/* Demangled: dlb_dct_twiddle_table16_L320_2 */
extern void* dlb_dct_twiddle_table16_L320_2;

/* Symbol: DLB_r4_fft_240 */
/* Demangled: DLB_r4_fft_240 */
int DLB_r4_fft_240(void);

/* Symbol: AC4DEC_sone_buffer_channel_init */
/* Demangled: AC4DEC_sone_buffer_channel_init */
int AC4DEC_sone_buffer_channel_init(void);

/* Symbol: DLB_blk_Lconst_strict */
/* Demangled: DLB_blk_Lconst_strict */
int DLB_blk_Lconst_strict(void);

/* Symbol: dlb_fft_inv_usc_576 */
/* Demangled: dlb_fft_inv_usc_576 */
int dlb_fft_inv_usc_576(void);

/* Symbol: DLB_hybrid_analysisCL_init */
/* Demangled: DLB_hybrid_analysisCL_init */
int DLB_hybrid_analysisCL_init(void);

/* Symbol: AC4DEC_oamdi_get_obj_not_active */
/* Demangled: AC4DEC_oamdi_get_obj_not_active */
int AC4DEC_oamdi_get_obj_not_active(void);

/* Symbol: AC4DEC_oamd_framer_query_memory */
/* Demangled: AC4DEC_oamd_framer_query_memory */
int AC4DEC_oamd_framer_query_memory(void);

/* Symbol: dlb_dct_twiddle_table16_1_L512 */
/* Demangled: dlb_dct_twiddle_table16_1_L512 */
extern void* dlb_dct_twiddle_table16_1_L512;

/* Symbol: DLB_r4_fft_24_s */
/* Demangled: DLB_r4_fft_24_s */
int DLB_r4_fft_24_s(void);

/* Symbol: DLB_r4_rfft_nn_s */
/* Demangled: DLB_r4_rfft_nn_s */
int DLB_r4_rfft_nn_s(void);

/* Symbol: dlb_fft_fwd_usc_384 */
/* Demangled: dlb_fft_fwd_usc_384 */
int dlb_fft_fwd_usc_384(void);

/* Symbol: AC4DEC_ajocdec_alloc */
/* Demangled: AC4DEC_ajocdec_alloc */
int AC4DEC_ajocdec_alloc(void);

/* Symbol: AC4DEC_metadata_delay_input_repeat_previous_buffer */
/* Demangled: AC4DEC_metadata_delay_input_repeat_previous_buffer */
int AC4DEC_metadata_delay_input_repeat_previous_buffer(void);

/* Symbol: AC4DEC_coeffs_unpack */
/* Demangled: AC4DEC_coeffs_unpack */
int AC4DEC_coeffs_unpack(void);

/* Symbol: dlb_fft_fwd_usc_80 */
/* Demangled: dlb_fft_fwd_usc_80 */
int dlb_fft_fwd_usc_80(void);

/* Symbol: dlb_fft_inv_scl_144 */
/* Demangled: dlb_fft_inv_scl_144 */
int dlb_fft_inv_scl_144(void);

/* Symbol: dlb_odd_fft_cplx_inv_scl */
/* Demangled: dlb_odd_fft_cplx_inv_scl */
extern void* dlb_odd_fft_cplx_inv_scl;

/* Symbol: AC4DEC_ac4toc_get_emdf_info_element */
/* Demangled: AC4DEC_ac4toc_get_emdf_info_element */
int AC4DEC_ac4toc_get_emdf_info_element(void);

/* Symbol: AC4DEC_de_calculate_mix_gains */
/* Demangled: AC4DEC_de_calculate_mix_gains */
int AC4DEC_de_calculate_mix_gains(void);

/* Symbol: AC4DEC_env_dequant_tab */
/* Demangled: AC4DEC_env_dequant_tab */
extern void* AC4DEC_env_dequant_tab;

/* Symbol: AC4DEC_mult_UM_2ch_no_decorr */
/* Demangled: AC4DEC_mult_UM_2ch_no_decorr */
int AC4DEC_mult_UM_2ch_no_decorr(void);

/* Symbol: AC4DEC_memlib_block_end */
/* Demangled: AC4DEC_memlib_block_end */
int AC4DEC_memlib_block_end(void);

/* Symbol: dlb_blk_Liir2ssv1_dsmpL_flex */
/* Demangled: dlb_blk_Liir2ssv1_dsmpL_flex */
int dlb_blk_Liir2ssv1_dsmpL_flex(void);

/* Symbol: AC4DEC_PA_NGCS_SEG_CHANNELS_2TO4CH */
/* Demangled: AC4DEC_PA_NGCS_SEG_CHANNELS_2TO4CH */
extern void* AC4DEC_PA_NGCS_SEG_CHANNELS_2TO4CH;

/* Symbol: AC4DEC_emdf_query_mem */
/* Demangled: AC4DEC_emdf_query_mem */
int AC4DEC_emdf_query_mem(void);

/* Symbol: AC4DEC_metadata_delay_input_insert_buffer */
/* Demangled: AC4DEC_metadata_delay_input_insert_buffer */
int AC4DEC_metadata_delay_input_insert_buffer(void);

/* Symbol: DLB_vec_Lsum_sqrLUU_strict */
/* Demangled: DLB_vec_Lsum_sqrLUU_strict */
int DLB_vec_Lsum_sqrLUU_strict(void);

/* Symbol: dlb_blk_Lfir2L_flex */
/* Demangled: dlb_blk_Lfir2L_flex */
int dlb_blk_Lfir2L_flex(void);

/* Symbol: AC4DEC_framer_parse_size_info */
/* Demangled: AC4DEC_framer_parse_size_info */
int AC4DEC_framer_parse_size_info(void);

/* Symbol: AC4DEC_de_init */
/* Demangled: AC4DEC_de_init */
int AC4DEC_de_init(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_output_stage_copy_shared_mem */
/* Demangled: AC4DEC_dlb_ac4dec_v1_output_stage_copy_shared_mem */
int AC4DEC_dlb_ac4dec_v1_output_stage_copy_shared_mem(void);

/* Symbol: AC4DEC_sha256_init */
/* Demangled: AC4DEC_sha256_init */
int AC4DEC_sha256_init(void);

/* Symbol: dlb_fft_inv_usc_90 */
/* Demangled: dlb_fft_inv_usc_90 */
int dlb_fft_inv_usc_90(void);

/* Symbol: AC4DEC_memlib_pool_subsection_begin */
/* Demangled: AC4DEC_memlib_pool_subsection_begin */
int AC4DEC_memlib_pool_subsection_begin(void);

/* Symbol: AC4DEC_ajoc_bed_info_read */
/* Demangled: AC4DEC_ajoc_bed_info_read */
int AC4DEC_ajoc_bed_info_read(void);

/* Symbol: dlb_fft_cplx_fwd_scl */
/* Demangled: dlb_fft_cplx_fwd_scl */
extern void* dlb_fft_cplx_fwd_scl;

/* Symbol: dlb_fft_inv_usc_2 */
/* Demangled: dlb_fft_inv_usc_2 */
int dlb_fft_inv_usc_2(void);

/* Symbol: AC4DEC_oamdi_get_bed_channels_count */
/* Demangled: AC4DEC_oamdi_get_bed_channels_count */
int AC4DEC_oamdi_get_bed_channels_count(void);

/* Symbol: AC4DEC_ade_il_ade_enable_decide */
/* Demangled: AC4DEC_ade_il_ade_enable_decide */
int AC4DEC_ade_il_ade_enable_decide(void);

/* Symbol: AC4DEC_huffdec_get_read_status */
/* Demangled: AC4DEC_huffdec_get_read_status */
int AC4DEC_huffdec_get_read_status(void);

/* Symbol: dlb_dct_twiddle_table16_L48_cos */
/* Demangled: dlb_dct_twiddle_table16_L48_cos */
extern void* dlb_dct_twiddle_table16_L48_cos;

/* Symbol: AC4DEC_a_t_indices */
/* Demangled: AC4DEC_a_t_indices */
extern void* AC4DEC_a_t_indices;

/* Symbol: AC4DEC_decoder_get_emdf_status */
/* Demangled: AC4DEC_decoder_get_emdf_status */
int AC4DEC_decoder_get_emdf_status(void);

/* Symbol: AC4DEC_huffdec_set_bitbuf */
/* Demangled: AC4DEC_huffdec_set_bitbuf */
int AC4DEC_huffdec_set_bitbuf(void);

/* Symbol: AC4DEC_ajocdec_reset */
/* Demangled: AC4DEC_ajocdec_reset */
int AC4DEC_ajocdec_reset(void);

/* Symbol: AC4DEC_aspx_dequantize_sig_2ch */
/* Demangled: AC4DEC_aspx_dequantize_sig_2ch */
int AC4DEC_aspx_dequantize_sig_2ch(void);

/* Symbol: dlb_dct_twiddle_table16_L768_cos */
/* Demangled: dlb_dct_twiddle_table16_L768_cos */
extern void* dlb_dct_twiddle_table16_L768_cos;

/* Symbol: AC4DEC_oamdi_get_hp_render_mode */
/* Demangled: AC4DEC_oamdi_get_hp_render_mode */
int AC4DEC_oamdi_get_hp_render_mode(void);

/* Symbol: DLB_blk_Lmix_shlaL_strict */
/* Demangled: DLB_blk_Lmix_shlaL_strict */
int DLB_blk_Lmix_shlaL_strict(void);

/* Symbol: dlb_CLzeroCLU_flex */
/* Demangled: dlb_CLzeroCLU_flex */
int dlb_CLzeroCLU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L90 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L90 */
extern void* dlb_dct_twiddle_table16_rev_1_L90;

/* Symbol: dlb_fft_inv_scl_320 */
/* Demangled: dlb_fft_inv_scl_320 */
int dlb_fft_inv_scl_320(void);

/* Symbol: dlb_fft_inv_usc_4 */
/* Demangled: dlb_fft_inv_usc_4 */
int dlb_fft_inv_usc_4(void);

/* Symbol: AC4DEC_ajoc_num_param_bands_conv */
/* Demangled: AC4DEC_ajoc_num_param_bands_conv */
extern void* AC4DEC_ajoc_num_param_bands_conv;

/* Symbol: AC4DEC_P_NGCS_SEG_RANGE_2TO6CH */
/* Demangled: AC4DEC_P_NGCS_SEG_RANGE_2TO6CH */
extern void* AC4DEC_P_NGCS_SEG_RANGE_2TO6CH;

/* Symbol: AC4DEC_WindowKBD1920 */
/* Demangled: AC4DEC_WindowKBD1920 */
extern void* AC4DEC_WindowKBD1920;

/* Symbol: dlb_fft_inv_usc_6 */
/* Demangled: dlb_fft_inv_usc_6 */
int dlb_fft_inv_usc_6(void);

/* Symbol: AC4DEC_delay_read */
/* Demangled: AC4DEC_delay_read */
int AC4DEC_delay_read(void);

/* Symbol: AC4DEC_decorr_init */
/* Demangled: AC4DEC_decorr_init */
int AC4DEC_decorr_init(void);

/* Symbol: DLB_BLmpy_scaleBLSU_inplace_strict */
/* Demangled: DLB_BLmpy_scaleBLSU_inplace_strict */
int DLB_BLmpy_scaleBLSU_inplace_strict(void);

/* Symbol: dlb_fft_inv_usc_96 */
/* Demangled: dlb_fft_inv_usc_96 */
int dlb_fft_inv_usc_96(void);

/* Symbol: AC4DEC_get_qextract_external_banding_scheme */
/* Demangled: AC4DEC_get_qextract_external_banding_scheme */
int AC4DEC_get_qextract_external_banding_scheme(void);

/* Symbol: dlb_blk_Liir2ssv2_shlLU_flex */
/* Demangled: dlb_blk_Liir2ssv2_shlLU_flex */
int dlb_blk_Liir2ssv2_shlLU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L180 */
/* Demangled: dlb_dct_twiddle_table16_rev_L180 */
extern void* dlb_dct_twiddle_table16_rev_L180;

/* Symbol: DLB_r4_fft_90 */
/* Demangled: DLB_r4_fft_90 */
int DLB_r4_fft_90(void);

/* Symbol: dlb_fft_inv_usc_8 */
/* Demangled: dlb_fft_inv_usc_8 */
int dlb_fft_inv_usc_8(void);

/* Symbol: AC4DEC_ajccdec_upmix_mtrx_mult_module4_switch */
/* Demangled: AC4DEC_ajccdec_upmix_mtrx_mult_module4_switch */
int AC4DEC_ajccdec_upmix_mtrx_mult_module4_switch(void);

/* Symbol: AC4DEC_ac4dec_toc_reader_get_presentation_info */
/* Demangled: AC4DEC_ac4dec_toc_reader_get_presentation_info */
int AC4DEC_ac4dec_toc_reader_get_presentation_info(void);

/* Symbol: AC4DEC_imsdec_init_ane_fdn_panning */
/* Demangled: AC4DEC_imsdec_init_ane_fdn_panning */
int AC4DEC_imsdec_init_ane_fdn_panning(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_beta3_coarse_df */
/* Demangled: AC4DEC_tree_huff_code_acpl_beta3_coarse_df */
extern void* AC4DEC_tree_huff_code_acpl_beta3_coarse_df;

/* Symbol: AC4DEC_WindowKBD1024 */
/* Demangled: AC4DEC_WindowKBD1024 */
extern void* AC4DEC_WindowKBD1024;

/* Symbol: dlb_blk_LsaddLL_flex */
/* Demangled: dlb_blk_LsaddLL_flex */
int dlb_blk_LsaddLL_flex(void);

/* Symbol: AC4DEC_ac4toc_get_substream_content_type */
/* Demangled: AC4DEC_ac4toc_get_substream_content_type */
int AC4DEC_ac4toc_get_substream_content_type(void);

/* Symbol: DLB_blk_Lfir2L_setup */
/* Demangled: DLB_blk_Lfir2L_setup */
int DLB_blk_Lfir2L_setup(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L96 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L96 */
extern void* dlb_dct_twiddle_table16_rev_1_L96;

/* Symbol: AC4DEC_agc_update_alpha */
/* Demangled: AC4DEC_agc_update_alpha */
int AC4DEC_agc_update_alpha(void);

/* Symbol: AC4DEC_ac4dec_input_stage_count_shared_mem */
/* Demangled: AC4DEC_ac4dec_input_stage_count_shared_mem */
int AC4DEC_ac4dec_input_stage_count_shared_mem(void);

/* Symbol: AC4DEC_ac4toc_get_ch_bitmap */
/* Demangled: AC4DEC_ac4toc_get_ch_bitmap */
int AC4DEC_ac4toc_get_ch_bitmap(void);

/* Symbol: AC4DEC_AA_DIFFUSE_NO_DECORR_2TO7CH */
/* Demangled: AC4DEC_AA_DIFFUSE_NO_DECORR_2TO7CH */
extern void* AC4DEC_AA_DIFFUSE_NO_DECORR_2TO7CH;

/* Symbol: AC4DEC_A_NGCS_SEG_RANGE_2TO7CH */
/* Demangled: AC4DEC_A_NGCS_SEG_RANGE_2TO7CH */
extern void* AC4DEC_A_NGCS_SEG_RANGE_2TO7CH;

/* Symbol: dlb_blk_Liir2ssv2L_inplace_flex */
/* Demangled: dlb_blk_Liir2ssv2L_inplace_flex */
int dlb_blk_Liir2ssv2L_inplace_flex(void);

/* Symbol: AC4DEC_ac4dap_virtualizer_init */
/* Demangled: AC4DEC_ac4dap_virtualizer_init */
int AC4DEC_ac4dap_virtualizer_init(void);

/* Symbol: dlb_vec_Lmean_sqrLU_flex */
/* Demangled: dlb_vec_Lmean_sqrLU_flex */
int dlb_vec_Lmean_sqrLU_flex(void);

/* Symbol: AC4DEC_sv_query_scratch */
/* Demangled: AC4DEC_sv_query_scratch */
int AC4DEC_sv_query_scratch(void);

/* Symbol: DLB_r4_fft_96 */
/* Demangled: DLB_r4_fft_96 */
int DLB_r4_fft_96(void);

/* Symbol: AC4DEC_intelligent_eq_process */
/* Demangled: AC4DEC_intelligent_eq_process */
int AC4DEC_intelligent_eq_process(void);

/* Symbol: AC4DEC_get_frame_rate_setting */
/* Demangled: AC4DEC_get_frame_rate_setting */
int AC4DEC_get_frame_rate_setting(void);

/* Symbol: AC4DEC_de_il_close */
/* Demangled: AC4DEC_de_il_close */
int AC4DEC_de_il_close(void);

/* Symbol: AC4DEC_ac4dap_helper_blind_drc_get_curve */
/* Demangled: AC4DEC_ac4dap_helper_blind_drc_get_curve */
int AC4DEC_ac4dap_helper_blind_drc_get_curve(void);

/* Symbol: AC4DEC_ngcs_separate_run */
/* Demangled: AC4DEC_ngcs_separate_run */
int AC4DEC_ngcs_separate_run(void);

/* Symbol: AC4DEC_asfdec_ungroup_spectrum */
/* Demangled: AC4DEC_asfdec_ungroup_spectrum */
int AC4DEC_asfdec_ungroup_spectrum(void);

/* Symbol: dlb_dct_twiddle_table16_L144_cos */
/* Demangled: dlb_dct_twiddle_table16_L144_cos */
extern void* dlb_dct_twiddle_table16_L144_cos;

/* Symbol: AC4DEC_isf_decoder_gains_get */
/* Demangled: AC4DEC_isf_decoder_gains_get */
int AC4DEC_isf_decoder_gains_get(void);

/* Symbol: AC4DEC_ims_il_ims_init */
/* Demangled: AC4DEC_ims_il_ims_init */
int AC4DEC_ims_il_ims_init(void);

/* Symbol: AC4DEC_ac4toc_seek_to_presentation_info */
/* Demangled: AC4DEC_ac4toc_seek_to_presentation_info */
int AC4DEC_ac4toc_seek_to_presentation_info(void);

/* Symbol: AC4DEC_ngcs_steering_table_get_segment_from_idx */
/* Demangled: AC4DEC_ngcs_steering_table_get_segment_from_idx */
int AC4DEC_ngcs_steering_table_get_segment_from_idx(void);

/* Symbol: AC4DEC_ajcc_ps_type_id_7x4 */
/* Demangled: AC4DEC_ajcc_ps_type_id_7x4 */
extern void* AC4DEC_ajcc_ps_type_id_7x4;

/* Symbol: AC4DEC_imdct_freq_to_time */
/* Demangled: AC4DEC_imdct_freq_to_time */
int AC4DEC_imdct_freq_to_time(void);

/* Symbol: dlb_blk_LmixL_flex */
/* Demangled: dlb_blk_LmixL_flex */
int dlb_blk_LmixL_flex(void);

/* Symbol: DLB_r4_inv_fft_512 */
/* Demangled: DLB_r4_inv_fft_512 */
int DLB_r4_inv_fft_512(void);

/* Symbol: AC4DEC_stereo_dmx_coeff_read */
/* Demangled: AC4DEC_stereo_dmx_coeff_read */
int AC4DEC_stereo_dmx_coeff_read(void);

/* Symbol: AC4DEC_drc_gains_apply */
/* Demangled: AC4DEC_drc_gains_apply */
int AC4DEC_drc_gains_apply(void);

/* Symbol: AC4DEC_tree_huff_code_ims_para_fine_df */
/* Demangled: AC4DEC_tree_huff_code_ims_para_fine_df */
extern void* AC4DEC_tree_huff_code_ims_para_fine_df;

/* Symbol: DLB_blk_Liir1L_setup */
/* Demangled: DLB_blk_Liir1L_setup */
int DLB_blk_Liir1L_setup(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L360 */
/* Demangled: dlb_dct_twiddle_table16_rev_L360 */
extern void* dlb_dct_twiddle_table16_rev_L360;

/* Symbol: DLB_r4_inv_fft_4096_s */
/* Demangled: DLB_r4_inv_fft_4096_s */
int DLB_r4_inv_fft_4096_s(void);

/* Symbol: AC4DEC_oamdi_get_num_obj_info_blks */
/* Demangled: AC4DEC_oamdi_get_num_obj_info_blks */
int AC4DEC_oamdi_get_num_obj_info_blks(void);

/* Symbol: dlb_dct_twiddle_table16_L60_cos */
/* Demangled: dlb_dct_twiddle_table16_L60_cos */
extern void* dlb_dct_twiddle_table16_L60_cos;

/* Symbol: AC4DEC_tree_huff_code_acpl_beta3_coarse_f0 */
/* Demangled: AC4DEC_tree_huff_code_acpl_beta3_coarse_f0 */
extern void* AC4DEC_tree_huff_code_acpl_beta3_coarse_f0;

/* Symbol: AC4DEC_tree_huff_code_drc_book */
/* Demangled: AC4DEC_tree_huff_code_drc_book */
extern void* AC4DEC_tree_huff_code_drc_book;

/* Symbol: AC4DEC_evo_time_add */
/* Demangled: AC4DEC_evo_time_add */
int AC4DEC_evo_time_add(void);

/* Symbol: DLB_CLmpy_shlCLSIU_inplace_strict */
/* Demangled: DLB_CLmpy_shlCLSIU_inplace_strict */
int DLB_CLmpy_shlCLSIU_inplace_strict(void);

/* Symbol: dlb_ac4dec_v2_dec_set_ajoc_core_decode */
/* Demangled: dlb_ac4dec_v2_dec_set_ajoc_core_decode */
int dlb_ac4dec_v2_dec_set_ajoc_core_decode(void);

/* Symbol: AC4DEC_ajccdec_close */
/* Demangled: AC4DEC_ajccdec_close */
int AC4DEC_ajccdec_close(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_beta3_coarse_dt */
/* Demangled: AC4DEC_tree_huff_code_acpl_beta3_coarse_dt */
extern void* AC4DEC_tree_huff_code_acpl_beta3_coarse_dt;

/* Symbol: _ZN5dolby12Ac4DecClientC1EPNS_10IDecConfigE */
/* Demangled: dolby::Ac4DecClient::Ac4DecClient(dolby::IDecConfig*) */
int _ZN5dolby12Ac4DecClientC1EPNS_10IDecConfigE(void);

/* Symbol: AC4DEC_imsdec_parse */
/* Demangled: AC4DEC_imsdec_parse */
int AC4DEC_imsdec_parse(void);

/* Symbol: AC4DEC_a_isf_bh_7_3_0_0_reorder */
/* Demangled: AC4DEC_a_isf_bh_7_3_0_0_reorder */
extern void* AC4DEC_a_isf_bh_7_3_0_0_reorder;

/* Symbol: AC4DEC_oamd_trans_get_ramp_length_remaining */
/* Demangled: AC4DEC_oamd_trans_get_ramp_length_remaining */
int AC4DEC_oamd_trans_get_ramp_length_remaining(void);

/* Symbol: AC4DEC_point_panner_compute_gains_along_rows */
/* Demangled: AC4DEC_point_panner_compute_gains_along_rows */
int AC4DEC_point_panner_compute_gains_along_rows(void);

/* Symbol: AC4DEC_oamdi_is_std_chan_assign */
/* Demangled: AC4DEC_oamdi_is_std_chan_assign */
int AC4DEC_oamdi_is_std_chan_assign(void);

/* Symbol: dlb_blk_LdelayU_flex */
/* Demangled: dlb_blk_LdelayU_flex */
int dlb_blk_LdelayU_flex(void);

/* Symbol: AC4DEC_bf1_fdn_query_memory */
/* Demangled: AC4DEC_bf1_fdn_query_memory */
int AC4DEC_bf1_fdn_query_memory(void);

/* Symbol: dlb_CLshrCLUU_flex */
/* Demangled: dlb_CLshrCLUU_flex */
int dlb_CLshrCLUU_flex(void);

/* Symbol: AC4DEC_acpldec_mdd_generate_dummy_data_1ch */
/* Demangled: AC4DEC_acpldec_mdd_generate_dummy_data_1ch */
int AC4DEC_acpldec_mdd_generate_dummy_data_1ch(void);

/* Symbol: dlb_dct_twiddle_table16_L960 */
/* Demangled: dlb_dct_twiddle_table16_L960 */
extern void* dlb_dct_twiddle_table16_L960;

/* Symbol: DLB_r4_inv_fft_160 */
/* Demangled: DLB_r4_inv_fft_160 */
int DLB_r4_inv_fft_160(void);

/* Symbol: DLB_qmf_analysisS_get_delay */
/* Demangled: DLB_qmf_analysisS_get_delay */
int DLB_qmf_analysisS_get_delay(void);

/* Symbol: AC4DEC_hist_update_value */
/* Demangled: AC4DEC_hist_update_value */
int AC4DEC_hist_update_value(void);

/* Symbol: AC4DEC_evo_cb_get_wr_ptr */
/* Demangled: AC4DEC_evo_cb_get_wr_ptr */
int AC4DEC_evo_cb_get_wr_ptr(void);

/* Symbol: DLB_CLmpy_recipCLLIU_strict */
/* Demangled: DLB_CLmpy_recipCLLIU_strict */
int DLB_CLmpy_recipCLLIU_strict(void);

/* Symbol: DLB_r4_inv_fft_2048_s */
/* Demangled: DLB_r4_inv_fft_2048_s */
int DLB_r4_inv_fft_2048_s(void);

/* Symbol: DLB_CLmfb_p10km_analysisL_close */
/* Demangled: DLB_CLmfb_p10km_analysisL_close */
int DLB_CLmfb_p10km_analysisL_close(void);

/* Symbol: AC4DEC_AC4TOC_NO_CHANNEL_MAP */
/* Demangled: AC4DEC_AC4TOC_NO_CHANNEL_MAP */
extern void* AC4DEC_AC4TOC_NO_CHANNEL_MAP;

/* Symbol: AC4DEC_ac4dap_fhcqmf_process */
/* Demangled: AC4DEC_ac4dap_fhcqmf_process */
int AC4DEC_ac4dap_fhcqmf_process(void);

/* Symbol: AC4DEC_WindowKBD1536_alpha3_0 */
/* Demangled: AC4DEC_WindowKBD1536_alpha3_0 */
extern void* AC4DEC_WindowKBD1536_alpha3_0;

/* Symbol: DLB_vec_LsetLU_strict */
/* Demangled: DLB_vec_LsetLU_strict */
int DLB_vec_LsetLU_strict(void);

/* Symbol: dlb_fft_fwd_usc_90 */
/* Demangled: dlb_fft_fwd_usc_90 */
int dlb_fft_fwd_usc_90(void);

/* Symbol: AC4DEC_ims_sv_deq_band_num */
/* Demangled: AC4DEC_ims_sv_deq_band_num */
extern void* AC4DEC_ims_sv_deq_band_num;

/* Symbol: dlb_fft_inv_usc_2048 */
/* Demangled: dlb_fft_inv_usc_2048 */
int dlb_fft_inv_usc_2048(void);

/* Symbol: AC4DEC_P_PHASE_SHIFT_2TO6CH */
/* Demangled: AC4DEC_P_PHASE_SHIFT_2TO6CH */
extern void* AC4DEC_P_PHASE_SHIFT_2TO6CH;

/* Symbol: dlb_valid_pair_ptr */
/* Demangled: dlb_valid_pair_ptr */
int dlb_valid_pair_ptr(void);

/* Symbol: AC4DEC_tree_huff_code_ims_para_fine_f0 */
/* Demangled: AC4DEC_tree_huff_code_ims_para_fine_f0 */
extern void* AC4DEC_tree_huff_code_ims_para_fine_f0;

/* Symbol: AC4DEC_omg_trim_auto_gain_get */
/* Demangled: AC4DEC_omg_trim_auto_gain_get */
int AC4DEC_omg_trim_auto_gain_get(void);

/* Symbol: DLB_r4_fft_256 */
/* Demangled: DLB_r4_fft_256 */
int DLB_r4_fft_256(void);

/* Symbol: AC4DEC_memlib_alloc */
/* Demangled: AC4DEC_memlib_alloc */
int AC4DEC_memlib_alloc(void);

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR44KHZ1_BS256S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR44KHZ1_BS256S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR44KHZ1_BS256S;

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR48KHZ_BS256S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR48KHZ_BS256S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR48KHZ_BS256S;

/* Symbol: AC4DEC_PA_DIFFUSE_NO_DECORR_2TO5CH */
/* Demangled: AC4DEC_PA_DIFFUSE_NO_DECORR_2TO5CH */
extern void* AC4DEC_PA_DIFFUSE_NO_DECORR_2TO5CH;

/* Symbol: AC4DEC_decoder_get_timestamp */
/* Demangled: AC4DEC_decoder_get_timestamp */
int AC4DEC_decoder_get_timestamp(void);

/* Symbol: dlb_dct_twiddle_table16_L15_1 */
/* Demangled: dlb_dct_twiddle_table16_L15_1 */
extern void* dlb_dct_twiddle_table16_L15_1;

/* Symbol: AC4DEC_WindowKBD120_alpha4_0 */
/* Demangled: AC4DEC_WindowKBD120_alpha4_0 */
extern void* AC4DEC_WindowKBD120_alpha4_0;

/* Symbol: AC4DEC_A_ROOM_CONFIG_SPKS_SIDE_COM */
/* Demangled: AC4DEC_A_ROOM_CONFIG_SPKS_SIDE_COM */
extern void* AC4DEC_A_ROOM_CONFIG_SPKS_SIDE_COM;

/* Symbol: DLB_mfb_p10km_analysisL_reset_channel */
/* Demangled: DLB_mfb_p10km_analysisL_reset_channel */
int DLB_mfb_p10km_analysisL_reset_channel(void);

/* Symbol: AC4DEC_ngcs_hcqmf_apply_scale */
/* Demangled: AC4DEC_ngcs_hcqmf_apply_scale */
int AC4DEC_ngcs_hcqmf_apply_scale(void);

/* Symbol: dlb_dct_twiddle_table16_L15_2 */
/* Demangled: dlb_dct_twiddle_table16_L15_2 */
extern void* dlb_dct_twiddle_table16_L15_2;

/* Symbol: AC4DEC_tree_huff_code_ims_para_fine_dt */
/* Demangled: AC4DEC_tree_huff_code_ims_para_fine_dt */
extern void* AC4DEC_tree_huff_code_ims_para_fine_dt;

/* Symbol: DLB_r4_cplx_inv_pair */
/* Demangled: DLB_r4_cplx_inv_pair */
int DLB_r4_cplx_inv_pair(void);

/* Symbol: dlb_ac4dec_v2_dec_get_latency */
/* Demangled: dlb_ac4dec_v2_dec_get_latency */
int dlb_ac4dec_v2_dec_get_latency(void);

/* Symbol: AC4DEC_dvlim_get_limiter_gain */
/* Demangled: AC4DEC_dvlim_get_limiter_gain */
int AC4DEC_dvlim_get_limiter_gain(void);

/* Symbol: dlb_CLmpy_shlCLSIU_inplace_flex */
/* Demangled: dlb_CLmpy_shlCLSIU_inplace_flex */
int dlb_CLmpy_shlCLSIU_inplace_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L480 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L480 */
extern void* dlb_dct_twiddle_table16_rev_1_L480;

/* Symbol: dlb_fft_fwd_usc_96 */
/* Demangled: dlb_fft_fwd_usc_96 */
int dlb_fft_fwd_usc_96(void);

/* Symbol: AC4DEC_decoder_alloc_static */
/* Demangled: AC4DEC_decoder_alloc_static */
int AC4DEC_decoder_alloc_static(void);

/* Symbol: AC4DEC_decoder_get_dialog_enhancement_gain */
/* Demangled: AC4DEC_decoder_get_dialog_enhancement_gain */
int AC4DEC_decoder_get_dialog_enhancement_gain(void);

/* Symbol: AC4DEC_CHANNEL_MAP_LO */
/* Demangled: AC4DEC_CHANNEL_MAP_LO */
extern void* AC4DEC_CHANNEL_MAP_LO;

/* Symbol: dlb_dct_twiddle_table16_L240 */
/* Demangled: dlb_dct_twiddle_table16_L240 */
extern void* dlb_dct_twiddle_table16_L240;

/* Symbol: AC4DEC_oamt_generate_oamd_data */
/* Demangled: AC4DEC_oamt_generate_oamd_data */
int AC4DEC_oamt_generate_oamd_data(void);

/* Symbol: AC4DEC_metadata_delay_iterator_get_buffer */
/* Demangled: AC4DEC_metadata_delay_iterator_get_buffer */
int AC4DEC_metadata_delay_iterator_get_buffer(void);

/* Symbol: AC4DEC_fboar_process */
/* Demangled: AC4DEC_fboar_process */
int AC4DEC_fboar_process(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_gamma_coarse_df */
/* Demangled: AC4DEC_tree_huff_code_acpl_gamma_coarse_df */
extern void* AC4DEC_tree_huff_code_acpl_gamma_coarse_df;

/* Symbol: dlb_CLCLmix6CL12SU_flex */
/* Demangled: dlb_CLCLmix6CL12SU_flex */
int dlb_CLCLmix6CL12SU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L2 */
/* Demangled: dlb_dct_twiddle_table16_1_L2 */
extern void* dlb_dct_twiddle_table16_1_L2;

/* Symbol: AC4DEC_autocorrelation_2nd_order */
/* Demangled: AC4DEC_autocorrelation_2nd_order */
int AC4DEC_autocorrelation_2nd_order(void);

/* Symbol: AC4DEC_WindowKBD120_alpha4_5 */
/* Demangled: AC4DEC_WindowKBD120_alpha4_5 */
extern void* AC4DEC_WindowKBD120_alpha4_5;

/* Symbol: AC4DEC_oamd_trans_program_output_compare */
/* Demangled: AC4DEC_oamd_trans_program_output_compare */
int AC4DEC_oamd_trans_program_output_compare(void);

/* Symbol: AC4DEC_hmac_sha256_calculate_digest */
/* Demangled: AC4DEC_hmac_sha256_calculate_digest */
int AC4DEC_hmac_sha256_calculate_digest(void);

/* Symbol: _ZN5dolby12Ac4DecClientD2Ev */
/* Demangled: dolby::Ac4DecClient::~Ac4DecClient() */
int _ZN5dolby12Ac4DecClientD2Ev(void);

/* Symbol: DLB_qmf_synthesisL_query_mem */
/* Demangled: DLB_qmf_synthesisL_query_mem */
int DLB_qmf_synthesisL_query_mem(void);

/* Symbol: dlb_dct_twiddle_table16_1_L4 */
/* Demangled: dlb_dct_twiddle_table16_1_L4 */
extern void* dlb_dct_twiddle_table16_1_L4;

/* Symbol: AC4DEC_lvl_calc_single_ts_loudness */
/* Demangled: AC4DEC_lvl_calc_single_ts_loudness */
int AC4DEC_lvl_calc_single_ts_loudness(void);

/* Symbol: AC4DEC_de_il_generate_dummy_data */
/* Demangled: AC4DEC_de_il_generate_dummy_data */
int AC4DEC_de_il_generate_dummy_data(void);

/* Symbol: dlb_dct_twiddle_table16_L32_1 */
/* Demangled: dlb_dct_twiddle_table16_L32_1 */
extern void* dlb_dct_twiddle_table16_L32_1;

/* Symbol: DLB_r4_inv_fft_120_s */
/* Demangled: DLB_r4_inv_fft_120_s */
int DLB_r4_inv_fft_120_s(void);

/* Symbol: AC4DEC_hp_height_hrtf_filter */
/* Demangled: AC4DEC_hp_height_hrtf_filter */
int AC4DEC_hp_height_hrtf_filter(void);

/* Symbol: AC4DEC_de_il_read */
/* Demangled: AC4DEC_de_il_read */
int AC4DEC_de_il_read(void);

/* Symbol: dlb_dct_twiddle_table16_L32_2 */
/* Demangled: dlb_dct_twiddle_table16_L32_2 */
extern void* dlb_dct_twiddle_table16_L32_2;

/* Symbol: dlb_fft_inv_usc_768 */
/* Demangled: dlb_fft_inv_usc_768 */
int dlb_fft_inv_usc_768(void);

/* Symbol: dlb_fft_fwd_usc_576 */
/* Demangled: dlb_fft_fwd_usc_576 */
int dlb_fft_fwd_usc_576(void);

/* Symbol: DLB_Lqmf_analysisL */
/* Demangled: DLB_Lqmf_analysisL */
int DLB_Lqmf_analysisL(void);

/* Symbol: dlb_cos_32_full_twiddle */
/* Demangled: dlb_cos_32_full_twiddle */
extern void* dlb_cos_32_full_twiddle;

/* Symbol: dlb_vec_UnormSU_flex */
/* Demangled: dlb_vec_UnormSU_flex */
int dlb_vec_UnormSU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L8 */
/* Demangled: dlb_dct_twiddle_table16_1_L8 */
extern void* dlb_dct_twiddle_table16_1_L8;

/* Symbol: dlb_dct_twiddle_table16_rev_L192 */
/* Demangled: dlb_dct_twiddle_table16_rev_L192 */
extern void* dlb_dct_twiddle_table16_rev_L192;

/* Symbol: dlb_ac4dec_v2_dec_set_dap_param */
/* Demangled: dlb_ac4dec_v2_dec_set_dap_param */
int dlb_ac4dec_v2_dec_set_dap_param(void);

/* Symbol: dlb_dct_twiddle_table16_L45_1 */
/* Demangled: dlb_dct_twiddle_table16_L45_1 */
extern void* dlb_dct_twiddle_table16_L45_1;

/* Symbol: dlb_dct_twiddle_table16_rev_L720 */
/* Demangled: dlb_dct_twiddle_table16_rev_L720 */
extern void* dlb_dct_twiddle_table16_rev_L720;

/* Symbol: dlb_fft_fwd_scl_144 */
/* Demangled: dlb_fft_fwd_scl_144 */
int dlb_fft_fwd_scl_144(void);

/* Symbol: dlb_odd_fft_cplx_fwd_scl */
/* Demangled: dlb_odd_fft_cplx_fwd_scl */
extern void* dlb_odd_fft_cplx_fwd_scl;

/* Symbol: AC4DEC_cch_get_num_subframes_repeated */
/* Demangled: AC4DEC_cch_get_num_subframes_repeated */
int AC4DEC_cch_get_num_subframes_repeated(void);

/* Symbol: dlb_dct_twiddle_table16_L45_2 */
/* Demangled: dlb_dct_twiddle_table16_L45_2 */
extern void* dlb_dct_twiddle_table16_L45_2;

/* Symbol: AC4DEC_imsdec_calc_loudness_gains */
/* Demangled: AC4DEC_imsdec_calc_loudness_gains */
int AC4DEC_imsdec_calc_loudness_gains(void);

/* Symbol: DLB_r4_cplx_fwd_unscaled */
/* Demangled: DLB_r4_cplx_fwd_unscaled */
int DLB_r4_cplx_fwd_unscaled(void);

/* Symbol: DLB_blk_LmixLLL_strict */
/* Demangled: DLB_blk_LmixLLL_strict */
int DLB_blk_LmixLLL_strict(void);

/* Symbol: AC4DEC_phase90_filter_query_delay */
/* Demangled: AC4DEC_phase90_filter_query_delay */
int AC4DEC_phase90_filter_query_delay(void);

/* Symbol: AC4DEC_qextract_reset_state */
/* Demangled: AC4DEC_qextract_reset_state */
int AC4DEC_qextract_reset_state(void);

/* Symbol: AC4DEC_cch_get_seq_counter_decrement */
/* Demangled: AC4DEC_cch_get_seq_counter_decrement */
int AC4DEC_cch_get_seq_counter_decrement(void);

/* Symbol: AC4DEC_tree_huff_code_de_abs_0 */
/* Demangled: AC4DEC_tree_huff_code_de_abs_0 */
extern void* AC4DEC_tree_huff_code_de_abs_0;

/* Symbol: AC4DEC_tree_huff_code_de_abs_1 */
/* Demangled: AC4DEC_tree_huff_code_de_abs_1 */
extern void* AC4DEC_tree_huff_code_de_abs_1;

/* Symbol: _ZN5dolby12Ac4DecClient18updateAc4DecConfigEP7AC4EXEC */
/* Demangled: dolby::Ac4DecClient::updateAc4DecConfig(AC4EXEC*) */
int _ZN5dolby12Ac4DecClient18updateAc4DecConfigEP7AC4EXEC(void);

/* Symbol: AC4DEC_decoder_set_timestamp */
/* Demangled: AC4DEC_decoder_set_timestamp */
int AC4DEC_decoder_set_timestamp(void);

/* Symbol: AC4DEC_ajccdec_upmix_mtrx_mult_module4_510 */
/* Demangled: AC4DEC_ajccdec_upmix_mtrx_mult_module4_510 */
int AC4DEC_ajccdec_upmix_mtrx_mult_module4_510(void);

/* Symbol: AC4DEC_ajocdec_mode_get */
/* Demangled: AC4DEC_ajocdec_mode_get */
int AC4DEC_ajocdec_mode_get(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_vec_ana;

/* Symbol: AC4DEC_oamd_common_data_update */
/* Demangled: AC4DEC_oamd_common_data_update */
int AC4DEC_oamd_common_data_update(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_gamma_coarse_f0 */
/* Demangled: AC4DEC_tree_huff_code_acpl_gamma_coarse_f0 */
extern void* AC4DEC_tree_huff_code_acpl_gamma_coarse_f0;

/* Symbol: dlb_CLsubCLCLU_flex */
/* Demangled: dlb_CLsubCLCLU_flex */
int dlb_CLsubCLCLU_flex(void);

/* Symbol: DLB_r4_inv_fft_48_s */
/* Demangled: DLB_r4_inv_fft_48_s */
int DLB_r4_inv_fft_48_s(void);

/* Symbol: dlb_fft_fwd_scl_2048 */
/* Demangled: dlb_fft_fwd_scl_2048 */
int dlb_fft_fwd_scl_2048(void);

/* Symbol: DLB_Lqmf_analysisS */
/* Demangled: DLB_Lqmf_analysisS */
int DLB_Lqmf_analysisS(void);

/* Symbol: AC4DEC_ajccdec_upmix_dry_wet_update */
/* Demangled: AC4DEC_ajccdec_upmix_dry_wet_update */
int AC4DEC_ajccdec_upmix_dry_wet_update(void);

/* Symbol: AC4DEC_sf_close */
/* Demangled: AC4DEC_sf_close */
int AC4DEC_sf_close(void);

/* Symbol: AC4DEC_ssfdec_inverse_flattening */
/* Demangled: AC4DEC_ssfdec_inverse_flattening */
int AC4DEC_ssfdec_inverse_flattening(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_gamma_coarse_dt */
/* Demangled: AC4DEC_tree_huff_code_acpl_gamma_coarse_dt */
extern void* AC4DEC_tree_huff_code_acpl_gamma_coarse_dt;

/* Symbol: AC4DEC_evo_generate_hash_md_set */
/* Demangled: AC4DEC_evo_generate_hash_md_set */
int AC4DEC_evo_generate_hash_md_set(void);

/* Symbol: dlb_CLmixCLCLSSU_flex */
/* Demangled: dlb_CLmixCLCLSSU_flex */
int dlb_CLmixCLCLSSU_flex(void);

/* Symbol: dlb_fft_inv_scl_512 */
/* Demangled: dlb_fft_inv_scl_512 */
int dlb_fft_inv_scl_512(void);

/* Symbol: DLB_CLhybrid_synthesisCL */
/* Demangled: DLB_CLhybrid_synthesisCL */
int DLB_CLhybrid_synthesisCL(void);

/* Symbol: AC4DEC_delay_line_lfract_copy */
/* Demangled: AC4DEC_delay_line_lfract_copy */
int AC4DEC_delay_line_lfract_copy(void);

/* Symbol: AC4DEC_dvlim_get_smoothed_gain */
/* Demangled: AC4DEC_dvlim_get_smoothed_gain */
int AC4DEC_dvlim_get_smoothed_gain(void);

/* Symbol: dlb_fft_fwd_scl_320 */
/* Demangled: dlb_fft_fwd_scl_320 */
int dlb_fft_fwd_scl_320(void);

/* Symbol: DLB_hybrid_analysisCL_get_delay */
/* Demangled: DLB_hybrid_analysisCL_get_delay */
int DLB_hybrid_analysisCL_get_delay(void);

/* Symbol: AC4DEC_isf_decoder_query_memory */
/* Demangled: AC4DEC_isf_decoder_query_memory */
int AC4DEC_isf_decoder_query_memory(void);

/* Symbol: DLB_blk_Liir2ssv3aLU_inplace */
/* Demangled: DLB_blk_Liir2ssv3aLU_inplace */
int DLB_blk_Liir2ssv3aLU_inplace(void);

/* Symbol: AC4DEC_surround_compressor_init */
/* Demangled: AC4DEC_surround_compressor_init */
int AC4DEC_surround_compressor_init(void);

/* Symbol: AC4DEC_ramp_gain_init */
/* Demangled: AC4DEC_ramp_gain_init */
int AC4DEC_ramp_gain_init(void);

/* Symbol: DLB_MFB_TWID64E */
/* Demangled: DLB_MFB_TWID64E */
extern void* DLB_MFB_TWID64E;

/* Symbol: AC4DEC_ast_bw_thresholds_get */
/* Demangled: AC4DEC_ast_bw_thresholds_get */
int AC4DEC_ast_bw_thresholds_get(void);

/* Symbol: AC4DEC_p_db_factors */
/* Demangled: AC4DEC_p_db_factors */
extern void* AC4DEC_p_db_factors;

/* Symbol: AC4DEC_dither_norm_rnd */
/* Demangled: AC4DEC_dither_norm_rnd */
extern void* AC4DEC_dither_norm_rnd;

/* Symbol: AC4DEC_lvl_calc_release_accel */
/* Demangled: AC4DEC_lvl_calc_release_accel */
int AC4DEC_lvl_calc_release_accel(void);

/* Symbol: dlb_dct_twiddle_table16_L72_cos */
/* Demangled: dlb_dct_twiddle_table16_L72_cos */
extern void* dlb_dct_twiddle_table16_L72_cos;

/* Symbol: DLB_Lunload_CLqmf_analysisL_filter_state */
/* Demangled: DLB_Lunload_CLqmf_analysisL_filter_state */
int DLB_Lunload_CLqmf_analysisL_filter_state(void);

/* Symbol: AC4DEC_de_data_clear */
/* Demangled: AC4DEC_de_data_clear */
int AC4DEC_de_data_clear(void);

/* Symbol: AC4DEC_preso_init */
/* Demangled: AC4DEC_preso_init */
int AC4DEC_preso_init(void);

/* Symbol: AC4DEC_dvlim_get_version */
/* Demangled: AC4DEC_dvlim_get_version */
int AC4DEC_dvlim_get_version(void);

/* Symbol: dlb_dct_twiddle_table16_L2_1 */
/* Demangled: dlb_dct_twiddle_table16_L2_1 */
extern void* dlb_dct_twiddle_table16_L2_1;

/* Symbol: dlb_blk_Lattack_decay_iir1L_flex */
/* Demangled: dlb_blk_Lattack_decay_iir1L_flex */
int dlb_blk_Lattack_decay_iir1L_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L2_2 */
/* Demangled: dlb_dct_twiddle_table16_L2_2 */
extern void* dlb_dct_twiddle_table16_L2_2;

/* Symbol: dlb_fft_inv_scl_160 */
/* Demangled: dlb_fft_inv_scl_160 */
int dlb_fft_inv_scl_160(void);

/* Symbol: _ZN5dolby12DlbGenClass28unmangleEPKcPcjS2_i */
/* Demangled: dolby::DlbGenClass2::unmangle(char const*, char*, unsigned int, char const*, int) */
int _ZN5dolby12DlbGenClass28unmangleEPKcPcjS2_i(void);

/* Symbol: AC4DEC_arle_smooth_gains_across_time */
/* Demangled: AC4DEC_arle_smooth_gains_across_time */
int AC4DEC_arle_smooth_gains_across_time(void);

/* Symbol: AC4DEC_hist_reset */
/* Demangled: AC4DEC_hist_reset */
int AC4DEC_hist_reset(void);

/* Symbol: AC4DEC_ph90_qmf_process */
/* Demangled: AC4DEC_ph90_qmf_process */
int AC4DEC_ph90_qmf_process(void);

/* Symbol: AC4DEC_ac4parser_read_variable_bits */
/* Demangled: AC4DEC_ac4parser_read_variable_bits */
int AC4DEC_ac4parser_read_variable_bits(void);

/* Symbol: DLB_blk_LLshuffleLL_inplace_strict */
/* Demangled: DLB_blk_LLshuffleLL_inplace_strict */
int DLB_blk_LLshuffleLL_inplace_strict(void);

/* Symbol: AC4DEC_dap_mathlib_LrecipL */
/* Demangled: AC4DEC_dap_mathlib_LrecipL */
int AC4DEC_dap_mathlib_LrecipL(void);

/* Symbol: AC4DEC_ac4dec_get_internal_frame_rate_index */
/* Demangled: AC4DEC_ac4dec_get_internal_frame_rate_index */
int AC4DEC_ac4dec_get_internal_frame_rate_index(void);

/* Symbol: dlb_dct_twiddle_table16_L128_1 */
/* Demangled: dlb_dct_twiddle_table16_L128_1 */
extern void* dlb_dct_twiddle_table16_L128_1;

/* Symbol: AC4DEC_oamd_reader_parse_timing_data */
/* Demangled: AC4DEC_oamd_reader_parse_timing_data */
int AC4DEC_oamd_reader_parse_timing_data(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_gamma_fine_df */
/* Demangled: AC4DEC_tree_huff_code_acpl_gamma_fine_df */
extern void* AC4DEC_tree_huff_code_acpl_gamma_fine_df;

/* Symbol: AC4DEC_evo_cb_init */
/* Demangled: AC4DEC_evo_cb_init */
int AC4DEC_evo_cb_init(void);

/* Symbol: dlb_blk_Liir1L_flex */
/* Demangled: dlb_blk_Liir1L_flex */
int dlb_blk_Liir1L_flex(void);

/* Symbol: DLB_r4_inv_fft_180_s */
/* Demangled: DLB_r4_inv_fft_180_s */
int DLB_r4_inv_fft_180_s(void);

/* Symbol: DLB_CLmfb_p10km_analysisL_legacy_twiddle */
/* Demangled: DLB_CLmfb_p10km_analysisL_legacy_twiddle */
int DLB_CLmfb_p10km_analysisL_legacy_twiddle(void);

/* Symbol: dlb_qmf_filter_coeff_P5_32 */
/* Demangled: dlb_qmf_filter_coeff_P5_32 */
extern void* dlb_qmf_filter_coeff_P5_32;

/* Symbol: AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR44KHZ1 */
/* Demangled: AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR44KHZ1 */
extern void* AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR44KHZ1;

/* Symbol: AC4DEC_decoder_get_config */
/* Demangled: AC4DEC_decoder_get_config */
int AC4DEC_decoder_get_config(void);

/* Symbol: dlb_dct_twiddle_table16_L128_2 */
/* Demangled: dlb_dct_twiddle_table16_L128_2 */
extern void* dlb_dct_twiddle_table16_L128_2;

/* Symbol: dlb_cos_32_full_scl */
/* Demangled: dlb_cos_32_full_scl */
extern void* dlb_cos_32_full_scl;

/* Symbol: AC4DEC_AP_LDN_SL_INV_DIFFS */
/* Demangled: AC4DEC_AP_LDN_SL_INV_DIFFS */
extern void* AC4DEC_AP_LDN_SL_INV_DIFFS;

/* Symbol: AC4DEC_rand_gen_open */
/* Demangled: AC4DEC_rand_gen_open */
int AC4DEC_rand_gen_open(void);

/* Symbol: AC4DEC_reset_prediction_buf */
/* Demangled: AC4DEC_reset_prediction_buf */
int AC4DEC_reset_prediction_buf(void);

/* Symbol: DLB_CLshrCLUU_strict */
/* Demangled: DLB_CLshrCLUU_strict */
int DLB_CLshrCLUU_strict(void);

/* Symbol: DLB_MFB_TWID64O */
/* Demangled: DLB_MFB_TWID64O */
extern void* DLB_MFB_TWID64O;

/* Symbol: AC4DEC_ac4_brcalc_state_reset */
/* Demangled: AC4DEC_ac4_brcalc_state_reset */
int AC4DEC_ac4_brcalc_state_reset(void);

/* Symbol: AC4DEC_hp_height_query_scratch */
/* Demangled: AC4DEC_hp_height_query_scratch */
int AC4DEC_hp_height_query_scratch(void);

/* Symbol: AC4DEC_ade_reset */
/* Demangled: AC4DEC_ade_reset */
int AC4DEC_ade_reset(void);

/* Symbol: AC4DEC_WindowKBD480_alpha3_0 */
/* Demangled: AC4DEC_WindowKBD480_alpha3_0 */
extern void* AC4DEC_WindowKBD480_alpha3_0;

/* Symbol: AC4DEC_WindowKBD72_alpha6_0 */
/* Demangled: AC4DEC_WindowKBD72_alpha6_0 */
extern void* AC4DEC_WindowKBD72_alpha6_0;

/* Symbol: AC4DEC_AA_DIFFUSE_DECORR_2TO5CH */
/* Demangled: AC4DEC_AA_DIFFUSE_DECORR_2TO5CH */
extern void* AC4DEC_AA_DIFFUSE_DECORR_2TO5CH;

/* Symbol: AC4DEC_ab_oamdi_trim_config_supported */
/* Demangled: AC4DEC_ab_oamdi_trim_config_supported */
extern void* AC4DEC_ab_oamdi_trim_config_supported;

/* Symbol: AC4DEC_parse_ext_prec_pos */
/* Demangled: AC4DEC_parse_ext_prec_pos */
int AC4DEC_parse_ext_prec_pos(void);

/* Symbol: AC4DEC_ssfdec_close */
/* Demangled: AC4DEC_ssfdec_close */
int AC4DEC_ssfdec_close(void);

/* Symbol: AC4DEC_evo_write_payload */
/* Demangled: AC4DEC_evo_write_payload */
int AC4DEC_evo_write_payload(void);

/* Symbol: dlb_vec_Lmask_rev_coefLSU_flex */
/* Demangled: dlb_vec_Lmask_rev_coefLSU_flex */
int dlb_vec_Lmask_rev_coefLSU_flex(void);

/* Symbol: DLB_r4_inv_fft_720_s */
/* Demangled: DLB_r4_inv_fft_720_s */
int DLB_r4_inv_fft_720_s(void);

/* Symbol: dlb_cos_48_ast_mini_twiddle */
/* Demangled: dlb_cos_48_ast_mini_twiddle */
extern void* dlb_cos_48_ast_mini_twiddle;

/* Symbol: AC4DEC_oamd_trans_last_update_sample */
/* Demangled: AC4DEC_oamd_trans_last_update_sample */
int AC4DEC_oamd_trans_last_update_sample(void);

/* Symbol: AC4DEC_dvlim_reset_smoothed_gain */
/* Demangled: AC4DEC_dvlim_reset_smoothed_gain */
int AC4DEC_dvlim_reset_smoothed_gain(void);

/* Symbol: dlb_BLmaxBLL_flex */
/* Demangled: dlb_BLmaxBLL_flex */
int dlb_BLmaxBLL_flex(void);

/* Symbol: AC4DEC_ac4toc_bed_to_internal_channel_map */
/* Demangled: AC4DEC_ac4toc_bed_to_internal_channel_map */
int AC4DEC_ac4toc_bed_to_internal_channel_map(void);

/* Symbol: AC4DEC_evo_cb_get_rd_ptr */
/* Demangled: AC4DEC_evo_cb_get_rd_ptr */
int AC4DEC_evo_cb_get_rd_ptr(void);

/* Symbol: dlb_dct_twiddle_table16_1_L180 */
/* Demangled: dlb_dct_twiddle_table16_1_L180 */
extern void* dlb_dct_twiddle_table16_1_L180;

/* Symbol: DLB_qmf_analysisL_get_max_filter_state_length */
/* Demangled: DLB_qmf_analysisL_get_max_filter_state_length */
int DLB_qmf_analysisL_get_max_filter_state_length(void);

/* Symbol: AC4DEC_gain_clvec_process_inplace */
/* Demangled: AC4DEC_gain_clvec_process_inplace */
int AC4DEC_gain_clvec_process_inplace(void);

/* Symbol: AC4DEC_ast_resample */
/* Demangled: AC4DEC_ast_resample */
int AC4DEC_ast_resample(void);

/* Symbol: DLB_fft_CLfwd_scaledL */
/* Demangled: DLB_fft_CLfwd_scaledL */
int DLB_fft_CLfwd_scaledL(void);

/* Symbol: ac4dec_wrapper_setparam */
/* Demangled: ac4dec_wrapper_setparam */
int ac4dec_wrapper_setparam(void);

/* Symbol: dlb_blk_Lattack_decay_peak_iir1L_flex */
/* Demangled: dlb_blk_Lattack_decay_peak_iir1L_flex */
int dlb_blk_Lattack_decay_peak_iir1L_flex(void);

/* Symbol: DLB_blk_delay_setup_strict */
/* Demangled: DLB_blk_delay_setup_strict */
int DLB_blk_delay_setup_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L120 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L120 */
extern void* dlb_dct_twiddle_table16_rev_1_L120;

/* Symbol: dlb_cos_8_full_scl */
/* Demangled: dlb_cos_8_full_scl */
extern void* dlb_cos_8_full_scl;

/* Symbol: dlb_ac4dec_v2_dec_get_timestamp */
/* Demangled: dlb_ac4dec_v2_dec_get_timestamp */
int dlb_ac4dec_v2_dec_get_timestamp(void);

/* Symbol: _ZN7android10AC4Decoder20internalSetParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::AC4Decoder::internalSetParameter(OMX_INDEXTYPE, void*) */
int _ZN7android10AC4Decoder20internalSetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: DLB_blk_Liir2df1L_strict */
/* Demangled: DLB_blk_Liir2df1L_strict */
int DLB_blk_Liir2df1L_strict(void);

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_524_0 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_524_0 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_524_0;

/* Symbol: AC4DEC_rsrc_get_resampling_factor */
/* Demangled: AC4DEC_rsrc_get_resampling_factor */
int AC4DEC_rsrc_get_resampling_factor(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_16_vec_syn;

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_524_1 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_524_1 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_524_1;

/* Symbol: AC4DEC_aspx_process_1ch */
/* Demangled: AC4DEC_aspx_process_1ch */
int AC4DEC_aspx_process_1ch(void);

/* Symbol: AC4DEC_calc_envelope_allocation */
/* Demangled: AC4DEC_calc_envelope_allocation */
int AC4DEC_calc_envelope_allocation(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_gamma_fine_f0 */
/* Demangled: AC4DEC_tree_huff_code_acpl_gamma_fine_f0 */
extern void* AC4DEC_tree_huff_code_acpl_gamma_fine_f0;

/* Symbol: AC4DEC_WindowKBD96_alpha5_0 */
/* Demangled: AC4DEC_WindowKBD96_alpha5_0 */
extern void* AC4DEC_WindowKBD96_alpha5_0;

/* Symbol: dlb_vec_LmaskLSU_flex */
/* Demangled: dlb_vec_LmaskLSU_flex */
int dlb_vec_LmaskLSU_flex(void);

/* Symbol: DLB_CLmpyCLCSU_strict */
/* Demangled: DLB_CLmpyCLCSU_strict */
int DLB_CLmpyCLCSU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L512_1 */
/* Demangled: dlb_dct_twiddle_table16_L512_1 */
extern void* dlb_dct_twiddle_table16_L512_1;

/* Symbol: AC4DEC_ssfdec_predictor_dec */
/* Demangled: AC4DEC_ssfdec_predictor_dec */
int AC4DEC_ssfdec_predictor_dec(void);

/* Symbol: AC4DEC_rsrc_get_scale_factor */
/* Demangled: AC4DEC_rsrc_get_scale_factor */
int AC4DEC_rsrc_get_scale_factor(void);

/* Symbol: DLB_blk_Lattack_decay_peak_iir1L_set_coef */
/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_set_coef */
int DLB_blk_Lattack_decay_peak_iir1L_set_coef(void);

/* Symbol: AC4DEC_A_AC4DAP_CHANNEL_FORMAT_DELAY */
/* Demangled: AC4DEC_A_AC4DAP_CHANNEL_FORMAT_DELAY */
extern void* AC4DEC_A_AC4DAP_CHANNEL_FORMAT_DELAY;

/* Symbol: dlb_dct_twiddle_table16_L256 */
/* Demangled: dlb_dct_twiddle_table16_L256 */
extern void* dlb_dct_twiddle_table16_L256;

/* Symbol: dlb_dct_twiddle_table16_L512_2 */
/* Demangled: dlb_dct_twiddle_table16_L512_2 */
extern void* dlb_dct_twiddle_table16_L512_2;

/* Symbol: AC4DEC_tree_huff_code_acpl_gamma_fine_dt */
/* Demangled: AC4DEC_tree_huff_code_acpl_gamma_fine_dt */
extern void* AC4DEC_tree_huff_code_acpl_gamma_fine_dt;

/* Symbol: DLB_vec_LdotLLU_strict */
/* Demangled: DLB_vec_LdotLLU_strict */
int DLB_vec_LdotLLU_strict(void);

/* Symbol: DLB_r4_fft_30_s */
/* Demangled: DLB_r4_fft_30_s */
int DLB_r4_fft_30_s(void);

/* Symbol: AC4DEC_renderer_pow */
/* Demangled: AC4DEC_renderer_pow */
int AC4DEC_renderer_pow(void);

/* Symbol: AC4DEC_asa_reset_process */
/* Demangled: AC4DEC_asa_reset_process */
int AC4DEC_asa_reset_process(void);

/* Symbol: AC4DEC_PA_NGCS_SEG_CHANNELS_2TO6CH */
/* Demangled: AC4DEC_PA_NGCS_SEG_CHANNELS_2TO6CH */
extern void* AC4DEC_PA_NGCS_SEG_CHANNELS_2TO6CH;

/* Symbol: AC4DEC_pan_dialog_init */
/* Demangled: AC4DEC_pan_dialog_init */
int AC4DEC_pan_dialog_init(void);

/* Symbol: AC4DEC_dvlim_get_enable */
/* Demangled: AC4DEC_dvlim_get_enable */
int AC4DEC_dvlim_get_enable(void);

/* Symbol: AC4DEC_evo_parse_payload */
/* Demangled: AC4DEC_evo_parse_payload */
int AC4DEC_evo_parse_payload(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L128 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L128 */
extern void* dlb_dct_twiddle_table16_rev_1_L128;

/* Symbol: AC4DEC_A_PHASE_SHIFT_2TO5CH */
/* Demangled: AC4DEC_A_PHASE_SHIFT_2TO5CH */
extern void* AC4DEC_A_PHASE_SHIFT_2TO5CH;

/* Symbol: AC4DEC_memlib_get_version */
/* Demangled: AC4DEC_memlib_get_version */
int AC4DEC_memlib_get_version(void);

/* Symbol: AC4DEC_evo_mem_size */
/* Demangled: AC4DEC_evo_mem_size */
int AC4DEC_evo_mem_size(void);

/* Symbol: DLB_r4_fft_2_s */
/* Demangled: DLB_r4_fft_2_s */
int DLB_r4_fft_2_s(void);

/* Symbol: getRequiredBufferSize_Phase90Hilbert */
/* Demangled: getRequiredBufferSize_Phase90Hilbert */
int getRequiredBufferSize_Phase90Hilbert(void);

/* Symbol: dlb_cos_32_ast_mini_twiddle */
/* Demangled: dlb_cos_32_ast_mini_twiddle */
extern void* dlb_cos_32_ast_mini_twiddle;

/* Symbol: _ZN7android10AC4DecoderD1Ev */
/* Demangled: android::AC4Decoder::~AC4Decoder() */
int _ZN7android10AC4DecoderD1Ev(void);

/* Symbol: AC4DEC_memlib_pool_block_end */
/* Demangled: AC4DEC_memlib_pool_block_end */
int AC4DEC_memlib_pool_block_end(void);

/* Symbol: AC4DEC_CHANNEL_MAP_322_0 */
/* Demangled: AC4DEC_CHANNEL_MAP_322_0 */
extern void* AC4DEC_CHANNEL_MAP_322_0;

/* Symbol: AC4DEC_rand_gen_close */
/* Demangled: AC4DEC_rand_gen_close */
int AC4DEC_rand_gen_close(void);

/* Symbol: DLB_blk_Lattack_decay_iir1L_strict */
/* Demangled: DLB_blk_Lattack_decay_iir1L_strict */
int DLB_blk_Lattack_decay_iir1L_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L360 */
/* Demangled: dlb_dct_twiddle_table16_1_L360 */
extern void* dlb_dct_twiddle_table16_1_L360;

/* Symbol: AC4DEC_CHANNEL_MAP_322_1 */
/* Demangled: AC4DEC_CHANNEL_MAP_322_1 */
extern void* AC4DEC_CHANNEL_MAP_322_1;

/* Symbol: DLB_blk_Liir2ssefL_set_coef */
/* Demangled: DLB_blk_Liir2ssefL_set_coef */
int DLB_blk_Liir2ssefL_set_coef(void);

/* Symbol: AC4DEC_hp_height_hrtf_process */
/* Demangled: AC4DEC_hp_height_hrtf_process */
int AC4DEC_hp_height_hrtf_process(void);

/* Symbol: AC4DEC_qval_max */
/* Demangled: AC4DEC_qval_max */
extern void* AC4DEC_qval_max;

/* Symbol: AC4DEC_tree_huff_code_drc */
/* Demangled: AC4DEC_tree_huff_code_drc */
extern void* AC4DEC_tree_huff_code_drc;

/* Symbol: AC4DEC_ssf_extract */
/* Demangled: AC4DEC_ssf_extract */
int AC4DEC_ssf_extract(void);

/* Symbol: DLB_blk_Lmpy_shlLSU_strict */
/* Demangled: DLB_blk_Lmpy_shlLSU_strict */
int DLB_blk_Lmpy_shlLSU_strict(void);

/* Symbol: AC4DEC_ac4dap_process */
/* Demangled: AC4DEC_ac4dap_process */
int AC4DEC_ac4dap_process(void);

/* Symbol: AC4DEC_PA_DIFFUSE_DECORR_2TO4CH */
/* Demangled: AC4DEC_PA_DIFFUSE_DECORR_2TO4CH */
extern void* AC4DEC_PA_DIFFUSE_DECORR_2TO4CH;

/* Symbol: dlb_ac4dec_v2_presentation_selection_set_mode */
/* Demangled: dlb_ac4dec_v2_presentation_selection_set_mode */
int dlb_ac4dec_v2_presentation_selection_set_mode(void);

/* Symbol: AC4DEC_shared_mem_init */
/* Demangled: AC4DEC_shared_mem_init */
int AC4DEC_shared_mem_init(void);

/* Symbol: AC4DEC_A_ROOM_CONFIG_SPKS_SIDE_FULL */
/* Demangled: AC4DEC_A_ROOM_CONFIG_SPKS_SIDE_FULL */
extern void* AC4DEC_A_ROOM_CONFIG_SPKS_SIDE_FULL;

/* Symbol: DLB_hybrid_synthesisCL_open */
/* Demangled: DLB_hybrid_synthesisCL_open */
int DLB_hybrid_synthesisCL_open(void);

/* Symbol: AC4DEC_arithmetic_decode_pred_gain */
/* Demangled: AC4DEC_arithmetic_decode_pred_gain */
int AC4DEC_arithmetic_decode_pred_gain(void);

/* Symbol: DLB_blk_Liir2ssv1L_strict */
/* Demangled: DLB_blk_Liir2ssv1L_strict */
int DLB_blk_Liir2ssv1L_strict(void);

/* Symbol: AC4DEC_AA_NGCS_SEG_STEERING_2TO5CH */
/* Demangled: AC4DEC_AA_NGCS_SEG_STEERING_2TO5CH */
extern void* AC4DEC_AA_NGCS_SEG_STEERING_2TO5CH;

/* Symbol: AC4DEC_ngcs_hcqmf_calc_scale */
/* Demangled: AC4DEC_ngcs_hcqmf_calc_scale */
int AC4DEC_ngcs_hcqmf_calc_scale(void);

/* Symbol: AC4DEC_ajocdec_open */
/* Demangled: AC4DEC_ajocdec_open */
int AC4DEC_ajocdec_open(void);

/* Symbol: AC4DEC_get_num_channels */
/* Demangled: AC4DEC_get_num_channels */
int AC4DEC_get_num_channels(void);

/* Symbol: dlb_dct_twiddle_table16_L192_1 */
/* Demangled: dlb_dct_twiddle_table16_L192_1 */
extern void* dlb_dct_twiddle_table16_L192_1;

/* Symbol: DLB_r4_fft_60_s */
/* Demangled: DLB_r4_fft_60_s */
int DLB_r4_fft_60_s(void);

/* Symbol: AC4DEC_arle_compressor_init */
/* Demangled: AC4DEC_arle_compressor_init */
int AC4DEC_arle_compressor_init(void);

/* Symbol: AC4DEC_ajoc_qmf_to_par_band_table */
/* Demangled: AC4DEC_ajoc_qmf_to_par_band_table */
extern void* AC4DEC_ajoc_qmf_to_par_band_table;

/* Symbol: AC4DEC_dapil_get_sample_rate_code */
/* Demangled: AC4DEC_dapil_get_sample_rate_code */
int AC4DEC_dapil_get_sample_rate_code(void);

/* Symbol: dlb_dct_twiddle_table16_L192_2 */
/* Demangled: dlb_dct_twiddle_table16_L192_2 */
extern void* dlb_dct_twiddle_table16_L192_2;

/* Symbol: DLB_fft_CLfwd_unscaledL */
/* Demangled: DLB_fft_CLfwd_unscaledL */
int DLB_fft_CLfwd_unscaledL(void);

/* Symbol: AC4DEC_dap_mathlib_clvecdl_init */
/* Demangled: AC4DEC_dap_mathlib_clvecdl_init */
int AC4DEC_dap_mathlib_clvecdl_init(void);

/* Symbol: AC4DEC_decorr_coeffs */
/* Demangled: AC4DEC_decorr_coeffs */
extern void* AC4DEC_decorr_coeffs;

/* Symbol: AC4DEC_WindowKBD64_alpha5_0 */
/* Demangled: AC4DEC_WindowKBD64_alpha5_0 */
extern void* AC4DEC_WindowKBD64_alpha5_0;

/* Symbol: dlb_fft_fwd_usc_768 */
/* Demangled: dlb_fft_fwd_usc_768 */
int dlb_fft_fwd_usc_768(void);

/* Symbol: AC4DEC_q2le_compute_log_banded_powers */
/* Demangled: AC4DEC_q2le_compute_log_banded_powers */
int AC4DEC_q2le_compute_log_banded_powers(void);

/* Symbol: AC4DEC_ac4dap_virtualizer_upmix_process */
/* Demangled: AC4DEC_ac4dap_virtualizer_upmix_process */
int AC4DEC_ac4dap_virtualizer_upmix_process(void);

/* Symbol: dlb_VLsquaredmagCLIU_flex */
/* Demangled: dlb_VLsquaredmagCLIU_flex */
int dlb_VLsquaredmagCLIU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L384 */
/* Demangled: dlb_dct_twiddle_table16_rev_L384 */
extern void* dlb_dct_twiddle_table16_rev_L384;

/* Symbol: AC4DEC_AA_DIFFUSE_NO_DECORR_5TO7CH */
/* Demangled: AC4DEC_AA_DIFFUSE_NO_DECORR_5TO7CH */
extern void* AC4DEC_AA_DIFFUSE_NO_DECORR_5TO7CH;

/* Symbol: AC4DEC_A_NGCS_SEG_RANGE_5TO7CH */
/* Demangled: AC4DEC_A_NGCS_SEG_RANGE_5TO7CH */
extern void* AC4DEC_A_NGCS_SEG_RANGE_5TO7CH;

/* Symbol: AC4DEC_sone_buffer_channel_query_memory */
/* Demangled: AC4DEC_sone_buffer_channel_query_memory */
int AC4DEC_sone_buffer_channel_query_memory(void);

/* Symbol: AC4DEC_ngcs_stats_reset */
/* Demangled: AC4DEC_ngcs_stats_reset */
int AC4DEC_ngcs_stats_reset(void);

/* Symbol: AC4DEC_memlib_pool_alloc_mem */
/* Demangled: AC4DEC_memlib_pool_alloc_mem */
int AC4DEC_memlib_pool_alloc_mem(void);

/* Symbol: AC4DEC_ssfdec_query_mem */
/* Demangled: AC4DEC_ssfdec_query_mem */
int AC4DEC_ssfdec_query_mem(void);

/* Symbol: DLB_blk_Lattack_decay_peak_iir1L_strict */
/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_strict */
int DLB_blk_Lattack_decay_peak_iir1L_strict(void);

/* Symbol: DLB_r4_inv_fft_180 */
/* Demangled: DLB_r4_inv_fft_180 */
int DLB_r4_inv_fft_180(void);

/* Symbol: DLB_fft_CLfwd_scaledCL */
/* Demangled: DLB_fft_CLfwd_scaledCL */
int DLB_fft_CLfwd_scaledCL(void);

/* Symbol: AC4DEC_oamd_trans_read_oamdi */
/* Demangled: AC4DEC_oamd_trans_read_oamdi */
int AC4DEC_oamd_trans_read_oamdi(void);

/* Symbol: AC4DEC_ngcs_process */
/* Demangled: AC4DEC_ngcs_process */
int AC4DEC_ngcs_process(void);

/* Symbol: AC4DEC_init_hcqmf_3ch_decorr */
/* Demangled: AC4DEC_init_hcqmf_3ch_decorr */
int AC4DEC_init_hcqmf_3ch_decorr(void);

/* Symbol: AC4DEC_evo_mod_get_md_update */
/* Demangled: AC4DEC_evo_mod_get_md_update */
int AC4DEC_evo_mod_get_md_update(void);

/* Symbol: AC4DEC_dap_mathlib_clvec_copy */
/* Demangled: AC4DEC_dap_mathlib_clvec_copy */
int AC4DEC_dap_mathlib_clvec_copy(void);

/* Symbol: func_b_ptr */
/* Demangled: func_b_ptr */
extern void* func_b_ptr;

/* Symbol: AC4DEC_ps_iso639_2tab */
/* Demangled: AC4DEC_ps_iso639_2tab */
extern void* AC4DEC_ps_iso639_2tab;

/* Symbol: AC4DEC_slopes_db_to_lin */
/* Demangled: AC4DEC_slopes_db_to_lin */
extern void* AC4DEC_slopes_db_to_lin;

/* Symbol: AC4DEC_imsdec_init_de */
/* Demangled: AC4DEC_imsdec_init_de */
int AC4DEC_imsdec_init_de(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_get_max_num_out_channels */
/* Demangled: AC4DEC_dlb_ac4dec_v1_get_max_num_out_channels */
int AC4DEC_dlb_ac4dec_v1_get_max_num_out_channels(void);

/* Symbol: AC4DEC_predictor_scratch_mem_req */
/* Demangled: AC4DEC_predictor_scratch_mem_req */
int AC4DEC_predictor_scratch_mem_req(void);

/* Symbol: AC4DEC_WindowKBD60_alpha4_5 */
/* Demangled: AC4DEC_WindowKBD60_alpha4_5 */
extern void* AC4DEC_WindowKBD60_alpha4_5;

/* Symbol: AC4DEC_bed_mixer_cbi_gains_get */
/* Demangled: AC4DEC_bed_mixer_cbi_gains_get */
int AC4DEC_bed_mixer_cbi_gains_get(void);

/* Symbol: dlb_dct4_postmodulation_shl */
/* Demangled: dlb_dct4_postmodulation_shl */
int dlb_dct4_postmodulation_shl(void);

/* Symbol: AC4DEC_gain_calc_masking_correction */
/* Demangled: AC4DEC_gain_calc_masking_correction */
int AC4DEC_gain_calc_masking_correction(void);

/* Symbol: AC4DEC_decorr_reset */
/* Demangled: AC4DEC_decorr_reset */
int AC4DEC_decorr_reset(void);

/* Symbol: AC4DEC_emdf_open */
/* Demangled: AC4DEC_emdf_open */
int AC4DEC_emdf_open(void);

/* Symbol: AC4DEC_A_ROOM_CONFIG_SPKS_HEIGHTS_FRONT */
/* Demangled: AC4DEC_A_ROOM_CONFIG_SPKS_HEIGHTS_FRONT */
extern void* AC4DEC_A_ROOM_CONFIG_SPKS_HEIGHTS_FRONT;

/* Symbol: DLB_r4_fft_90_s */
/* Demangled: DLB_r4_fft_90_s */
int DLB_r4_fft_90_s(void);

/* Symbol: AC4DEC_ASA_EVENT_MAXSL */
/* Demangled: AC4DEC_ASA_EVENT_MAXSL */
extern void* AC4DEC_ASA_EVENT_MAXSL;

/* Symbol: AC4DEC_ldn_set_min_ex_c */
/* Demangled: AC4DEC_ldn_set_min_ex_c */
int AC4DEC_ldn_set_min_ex_c(void);

/* Symbol: AC4DEC_acpldec_mix_slot */
/* Demangled: AC4DEC_acpldec_mix_slot */
int AC4DEC_acpldec_mix_slot(void);

/* Symbol: AC4DEC_tree_huff_code_ajcc */
/* Demangled: AC4DEC_tree_huff_code_ajcc */
extern void* AC4DEC_tree_huff_code_ajcc;

/* Symbol: AC4DEC_ajoc_dry_quant_table */
/* Demangled: AC4DEC_ajoc_dry_quant_table */
extern void* AC4DEC_ajoc_dry_quant_table;

/* Symbol: dlb_fft_fwd_scl_512 */
/* Demangled: dlb_fft_fwd_scl_512 */
int dlb_fft_fwd_scl_512(void);

/* Symbol: AC4DEC_dlb_bitbuf_read_long */
/* Demangled: AC4DEC_dlb_bitbuf_read_long */
int AC4DEC_dlb_bitbuf_read_long(void);

/* Symbol: dlb_dct_twiddle_table16_L90_cos */
/* Demangled: dlb_dct_twiddle_table16_L90_cos */
extern void* dlb_dct_twiddle_table16_L90_cos;

/* Symbol: AC4DEC_evo_ll_empty */
/* Demangled: AC4DEC_evo_ll_empty */
int AC4DEC_evo_ll_empty(void);

/* Symbol: AC4DEC_sv_dual_end_coefs_query_memory */
/* Demangled: AC4DEC_sv_dual_end_coefs_query_memory */
int AC4DEC_sv_dual_end_coefs_query_memory(void);

/* Symbol: AC4DEC_evo_time_le */
/* Demangled: AC4DEC_evo_time_le */
int AC4DEC_evo_time_le(void);

/* Symbol: AC4DEC_ac4toc_get_frame_rate_fractions_info */
/* Demangled: AC4DEC_ac4toc_get_frame_rate_fractions_info */
int AC4DEC_ac4toc_get_frame_rate_fractions_info(void);

/* Symbol: AC4DEC_ac4dap_channel_map_get */
/* Demangled: AC4DEC_ac4dap_channel_map_get */
int AC4DEC_ac4dap_channel_map_get(void);

/* Symbol: AC4DEC_rand_gen_init */
/* Demangled: AC4DEC_rand_gen_init */
int AC4DEC_rand_gen_init(void);

/* Symbol: AC4DEC_speaker_config_spkr_unset */
/* Demangled: AC4DEC_speaker_config_spkr_unset */
int AC4DEC_speaker_config_spkr_unset(void);

/* Symbol: DLB_CLmfb_p10km_analysisL_legacy */
/* Demangled: DLB_CLmfb_p10km_analysisL_legacy */
int DLB_CLmfb_p10km_analysisL_legacy(void);

/* Symbol: AC4DEC_dap_mathlib_LpoweraddLL */
/* Demangled: AC4DEC_dap_mathlib_LpoweraddLL */
int AC4DEC_dap_mathlib_LpoweraddLL(void);

/* Symbol: dlb_dct_twiddle_table16_1_L192 */
/* Demangled: dlb_dct_twiddle_table16_1_L192 */
extern void* dlb_dct_twiddle_table16_1_L192;

/* Symbol: dlb_dct_twiddle_table16_L180_cos */
/* Demangled: dlb_dct_twiddle_table16_L180_cos */
extern void* dlb_dct_twiddle_table16_L180_cos;

/* Symbol: AC4DEC_oamdi_from_bitstream */
/* Demangled: AC4DEC_oamdi_from_bitstream */
int AC4DEC_oamdi_from_bitstream(void);

/* Symbol: dlb_CLrecipCLUU_flex */
/* Demangled: dlb_CLrecipCLUU_flex */
int dlb_CLrecipCLUU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L720 */
/* Demangled: dlb_dct_twiddle_table16_1_L720 */
extern void* dlb_dct_twiddle_table16_1_L720;

/* Symbol: DLB_r4_inv_fft_360 */
/* Demangled: DLB_r4_inv_fft_360 */
int DLB_r4_inv_fft_360(void);

/* Symbol: DLB_CLqmf_analysisL */
/* Demangled: DLB_CLqmf_analysisL */
int DLB_CLqmf_analysisL(void);

/* Symbol: _ZN7android10AC4Decoder20onPortFlushCompletedEj */
/* Demangled: android::AC4Decoder::onPortFlushCompleted(unsigned int) */
int _ZN7android10AC4Decoder20onPortFlushCompletedEj(void);

/* Symbol: AC4DEC_polylog_Plog2P */
/* Demangled: AC4DEC_polylog_Plog2P */
int AC4DEC_polylog_Plog2P(void);

/* Symbol: dlb_dct_twiddle_table16_L1024 */
/* Demangled: dlb_dct_twiddle_table16_L1024 */
extern void* dlb_dct_twiddle_table16_L1024;

/* Symbol: AC4DEC_matrix_mult_and_lpf */
/* Demangled: AC4DEC_matrix_mult_and_lpf */
int AC4DEC_matrix_mult_and_lpf(void);

/* Symbol: DLB_blk_Lmix_shlUnL */
/* Demangled: DLB_blk_Lmix_shlUnL */
int DLB_blk_Lmix_shlUnL(void);

/* Symbol: dlb_blk_delay_clear_flex */
/* Demangled: dlb_blk_delay_clear_flex */
int dlb_blk_delay_clear_flex(void);

/* Symbol: dlb_fft_fwd_scl_160 */
/* Demangled: dlb_fft_fwd_scl_160 */
int dlb_fft_fwd_scl_160(void);

/* Symbol: AC4DEC_metadata_delay_input_set_buffer_used */
/* Demangled: AC4DEC_metadata_delay_input_set_buffer_used */
int AC4DEC_metadata_delay_input_set_buffer_used(void);

/* Symbol: AC4DEC_isf_decoder_format_set */
/* Demangled: AC4DEC_isf_decoder_format_set */
int AC4DEC_isf_decoder_format_set(void);

/* Symbol: AC4DEC_ajcc_mdd_generate_dummy_data */
/* Demangled: AC4DEC_ajcc_mdd_generate_dummy_data */
int AC4DEC_ajcc_mdd_generate_dummy_data(void);

/* Symbol: AC4DEC_expd_mdd_generate_dummy_config */
/* Demangled: AC4DEC_expd_mdd_generate_dummy_config */
int AC4DEC_expd_mdd_generate_dummy_config(void);

/* Symbol: DLB_qmf_synthesisS_copy_states */
/* Demangled: DLB_qmf_synthesisS_copy_states */
int DLB_qmf_synthesisS_copy_states(void);

/* Symbol: AC4DEC_gen_norm_rand_num */
/* Demangled: AC4DEC_gen_norm_rand_num */
int AC4DEC_gen_norm_rand_num(void);

/* Symbol: AC4DEC_oamdi_set_hp_head_track_disable */
/* Demangled: AC4DEC_oamdi_set_hp_head_track_disable */
int AC4DEC_oamdi_set_hp_head_track_disable(void);

/* Symbol: DLB_r4_cplx_inv_unscaled */
/* Demangled: DLB_r4_cplx_inv_unscaled */
int DLB_r4_cplx_inv_unscaled(void);

/* Symbol: AC4DEC_ac4toc_reader_close */
/* Demangled: AC4DEC_ac4toc_reader_close */
int AC4DEC_ac4toc_reader_close(void);

/* Symbol: AC4DEC_decoder_set_main_associate_mixing_preference */
/* Demangled: AC4DEC_decoder_set_main_associate_mixing_preference */
int AC4DEC_decoder_set_main_associate_mixing_preference(void);

/* Symbol: AC4DEC_pcm_close */
/* Demangled: AC4DEC_pcm_close */
int AC4DEC_pcm_close(void);

/* Symbol: AC4DEC_qextract_fdn_process */
/* Demangled: AC4DEC_qextract_fdn_process */
int AC4DEC_qextract_fdn_process(void);

/* Symbol: DLB_vec_SshlSIU_inplace_strict */
/* Demangled: DLB_vec_SshlSIU_inplace_strict */
int DLB_vec_SshlSIU_inplace_strict(void);

/* Symbol: DLB_CLCLmix4CL8SU_strict */
/* Demangled: DLB_CLCLmix4CL8SU_strict */
int DLB_CLCLmix4CL8SU_strict(void);

/* Symbol: AC4DEC_PA_DIFFUSE_NO_DECORR_2TO7CH */
/* Demangled: AC4DEC_PA_DIFFUSE_NO_DECORR_2TO7CH */
extern void* AC4DEC_PA_DIFFUSE_NO_DECORR_2TO7CH;

/* Symbol: AC4DEC_pcm_process */
/* Demangled: AC4DEC_pcm_process */
int AC4DEC_pcm_process(void);

/* Symbol: DLB_blk_LnrrecipLU_setup */
/* Demangled: DLB_blk_LnrrecipLU_setup */
int DLB_blk_LnrrecipLU_setup(void);

/* Symbol: dlb_fft_inv_usc_960 */
/* Demangled: dlb_fft_inv_usc_960 */
int dlb_fft_inv_usc_960(void);

/* Symbol: AC4DEC_imdct_process */
/* Demangled: AC4DEC_imdct_process */
int AC4DEC_imdct_process(void);

/* Symbol: DLB_CLqmf_analysisS */
/* Demangled: DLB_CLqmf_analysisS */
int DLB_CLqmf_analysisS(void);

/* Symbol: DLB_vec_LmpyLSU_inplace_strict */
/* Demangled: DLB_vec_LmpyLSU_inplace_strict */
int DLB_vec_LmpyLSU_inplace_strict(void);

/* Symbol: AC4DEC_drc_profile_get */
/* Demangled: AC4DEC_drc_profile_get */
int AC4DEC_drc_profile_get(void);

/* Symbol: AC4DEC_dlb_bitbuf_fast_read_long */
/* Demangled: AC4DEC_dlb_bitbuf_fast_read_long */
int AC4DEC_dlb_bitbuf_fast_read_long(void);

/* Symbol: dlb_fft_inv_scl_2048 */
/* Demangled: dlb_fft_inv_scl_2048 */
int dlb_fft_inv_scl_2048(void);

/* Symbol: AC4DEC_ims_sv_spk_mtx_coeff_tab */
/* Demangled: AC4DEC_ims_sv_spk_mtx_coeff_tab */
extern void* AC4DEC_ims_sv_spk_mtx_coeff_tab;

/* Symbol: AC4DEC_ngcs_mode_get */
/* Demangled: AC4DEC_ngcs_mode_get */
int AC4DEC_ngcs_mode_get(void);

/* Symbol: AC4DEC_ngcs_mode_init */
/* Demangled: AC4DEC_ngcs_mode_init */
int AC4DEC_ngcs_mode_init(void);

/* Symbol: AC4DEC_ngcs_setup */
/* Demangled: AC4DEC_ngcs_setup */
int AC4DEC_ngcs_setup(void);

/* Symbol: AC4DEC_dap_mathlib_Llogsmooth3LL */
/* Demangled: AC4DEC_dap_mathlib_Llogsmooth3LL */
int AC4DEC_dap_mathlib_Llogsmooth3LL(void);

/* Symbol: AC4DEC_ngcs_phase_shifter_run */
/* Demangled: AC4DEC_ngcs_phase_shifter_run */
int AC4DEC_ngcs_phase_shifter_run(void);

/* Symbol: dlb_dct_twiddle_table16_L256_1 */
/* Demangled: dlb_dct_twiddle_table16_L256_1 */
extern void* dlb_dct_twiddle_table16_L256_1;

/* Symbol: AC4DEC_evo_time_lt */
/* Demangled: AC4DEC_evo_time_lt */
int AC4DEC_evo_time_lt(void);

/* Symbol: dlb_cos_16_full */
/* Demangled: dlb_cos_16_full */
extern void* dlb_cos_16_full;

/* Symbol: dlb_dct_twiddle_table16_L256_2 */
/* Demangled: dlb_dct_twiddle_table16_L256_2 */
extern void* dlb_dct_twiddle_table16_L256_2;

/* Symbol: dlb_qmf_filter_coeff_P4_32_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P4_32_vec_ana */
extern void* dlb_qmf_filter_coeff_P4_32_vec_ana;

/* Symbol: DLB_time_init */
/* Demangled: DLB_time_init */
int DLB_time_init(void);

/* Symbol: AC4DEC_WindowKBD1152_alpha3_0 */
/* Demangled: AC4DEC_WindowKBD1152_alpha3_0 */
extern void* AC4DEC_WindowKBD1152_alpha3_0;

/* Symbol: DLB_r4_inv_fft_24_s */
/* Demangled: DLB_r4_inv_fft_24_s */
int DLB_r4_inv_fft_24_s(void);

/* Symbol: DLB_fft_CLfwd_unscaledCL */
/* Demangled: DLB_fft_CLfwd_unscaledCL */
int DLB_fft_CLfwd_unscaledCL(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_16 */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_16 */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_16;

/* Symbol: AC4DEC_obj_render_query_memory */
/* Demangled: AC4DEC_obj_render_query_memory */
int AC4DEC_obj_render_query_memory(void);

/* Symbol: AC4DEC_A_ROOM_CONFIG_SPKS_FULL */
/* Demangled: AC4DEC_A_ROOM_CONFIG_SPKS_FULL */
extern void* AC4DEC_A_ROOM_CONFIG_SPKS_FULL;

/* Symbol: AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_256_X_ON_10 */
/* Demangled: AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_256_X_ON_10 */
extern void* AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_256_X_ON_10;

/* Symbol: DLB_qmf_synthesisL_get_delay */
/* Demangled: DLB_qmf_synthesisL_get_delay */
int DLB_qmf_synthesisL_get_delay(void);

/* Symbol: _ZN5dolby16Ac4DynamicConfigD1Ev */
/* Demangled: dolby::Ac4DynamicConfig::~Ac4DynamicConfig() */
int _ZN5dolby16Ac4DynamicConfigD1Ev(void);

/* Symbol: AC4DEC_acpldec_close */
/* Demangled: AC4DEC_acpldec_close */
int AC4DEC_acpldec_close(void);

/* Symbol: dlb_fft_inv_usc_240 */
/* Demangled: dlb_fft_inv_usc_240 */
int dlb_fft_inv_usc_240(void);

/* Symbol: dlb_qmf_filter_coeff_P5_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_vec_ana;

/* Symbol: AC4DEC_ac4toc_add_oamd_substream_offset_size */
/* Demangled: AC4DEC_ac4toc_add_oamd_substream_offset_size */
int AC4DEC_ac4toc_add_oamd_substream_offset_size(void);

/* Symbol: AC4DEC_acpl_num_param_bands_conv */
/* Demangled: AC4DEC_acpl_num_param_bands_conv */
extern void* AC4DEC_acpl_num_param_bands_conv;

/* Symbol: DLB_blk_Lmix_shlULL_strict */
/* Demangled: DLB_blk_Lmix_shlULL_strict */
int DLB_blk_Lmix_shlULL_strict(void);

/* Symbol: dlb_fft_inv_scl_180 */
/* Demangled: dlb_fft_inv_scl_180 */
int dlb_fft_inv_scl_180(void);

/* Symbol: DLB_hybrid_synthesisCL_init */
/* Demangled: DLB_hybrid_synthesisCL_init */
int DLB_hybrid_synthesisCL_init(void);

/* Symbol: AC4DEC_A_AC4DAP_LEVELING_DRC_DMX_META */
/* Demangled: AC4DEC_A_AC4DAP_LEVELING_DRC_DMX_META */
extern void* AC4DEC_A_AC4DAP_LEVELING_DRC_DMX_META;

/* Symbol: AC4DEC_agc_filter_loudness */
/* Demangled: AC4DEC_agc_filter_loudness */
int AC4DEC_agc_filter_loudness(void);

/* Symbol: AC4DEC_ade_il_ims_process */
/* Demangled: AC4DEC_ade_il_ims_process */
int AC4DEC_ade_il_ims_process(void);

/* Symbol: AC4DEC_ajocdec_init */
/* Demangled: AC4DEC_ajocdec_init */
int AC4DEC_ajocdec_init(void);

/* Symbol: AC4DEC_leveler_process */
/* Demangled: AC4DEC_leveler_process */
int AC4DEC_leveler_process(void);

/* Symbol: AC4DEC_get_channel_map */
/* Demangled: AC4DEC_get_channel_map */
int AC4DEC_get_channel_map(void);

/* Symbol: dlb_dct_twiddle_table16_L96_cos */
/* Demangled: dlb_dct_twiddle_table16_L96_cos */
extern void* dlb_dct_twiddle_table16_L96_cos;

/* Symbol: AC4DEC_WindowKBD480 */
/* Demangled: AC4DEC_WindowKBD480 */
extern void* AC4DEC_WindowKBD480;

/* Symbol: AC4DEC_ajocdec_ndlgobj_update */
/* Demangled: AC4DEC_ajocdec_ndlgobj_update */
int AC4DEC_ajocdec_ndlgobj_update(void);

/* Symbol: AC4DEC_CHANNEL_MAP_2_0 */
/* Demangled: AC4DEC_CHANNEL_MAP_2_0 */
extern void* AC4DEC_CHANNEL_MAP_2_0;

/* Symbol: DLB_r4_inv_fft_192 */
/* Demangled: DLB_r4_inv_fft_192 */
int DLB_r4_inv_fft_192(void);

/* Symbol: DLB_r4_inv_rfft_nn_s */
/* Demangled: DLB_r4_inv_rfft_nn_s */
int DLB_r4_inv_rfft_nn_s(void);

/* Symbol: _ZN5dolby12Ac4DecClient16processac4outputEP7AC4EXECPv */
/* Demangled: dolby::Ac4DecClient::processac4output(AC4EXEC*, void*) */
int _ZN5dolby12Ac4DecClient16processac4outputEP7AC4EXECPv(void);

/* Symbol: AC4DEC_CHANNEL_MAP_2_1 */
/* Demangled: AC4DEC_CHANNEL_MAP_2_1 */
extern void* AC4DEC_CHANNEL_MAP_2_1;

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_48_vec_ana;

/* Symbol: _dlb_ldct3_scaled_iplu */
/* Demangled: _dlb_ldct3_scaled_iplu */
int _dlb_ldct3_scaled_iplu(void);

/* Symbol: DLB_r4_inv_fft_720 */
/* Demangled: DLB_r4_inv_fft_720 */
int DLB_r4_inv_fft_720(void);

/* Symbol: AC4DEC_leveler_query_memory */
/* Demangled: AC4DEC_leveler_query_memory */
int AC4DEC_leveler_query_memory(void);

/* Symbol: AC4DEC_calc_patch_and_limiter_bands */
/* Demangled: AC4DEC_calc_patch_and_limiter_bands */
int AC4DEC_calc_patch_and_limiter_bands(void);

/* Symbol: dlb_dct_twiddle_table16_L64_1 */
/* Demangled: dlb_dct_twiddle_table16_L64_1 */
extern void* dlb_dct_twiddle_table16_L64_1;

/* Symbol: dlb_dct_twiddle_table16_L64_2 */
/* Demangled: dlb_dct_twiddle_table16_L64_2 */
extern void* dlb_dct_twiddle_table16_L64_2;

/* Symbol: DLB_vec_LmpyLSU_strict */
/* Demangled: DLB_vec_LmpyLSU_strict */
int DLB_vec_LmpyLSU_strict(void);

/* Symbol: AC4DEC_sv_query_memory */
/* Demangled: AC4DEC_sv_query_memory */
int AC4DEC_sv_query_memory(void);

/* Symbol: AC4DEC_imsdec_ade_de_crossfade_init */
/* Demangled: AC4DEC_imsdec_ade_de_crossfade_init */
int AC4DEC_imsdec_ade_de_crossfade_init(void);

/* Symbol: DLB_blk_LdelayU_strict */
/* Demangled: DLB_blk_LdelayU_strict */
int DLB_blk_LdelayU_strict(void);

/* Symbol: AC4DEC_framer_buffer_advance */
/* Demangled: AC4DEC_framer_buffer_advance */
int AC4DEC_framer_buffer_advance(void);

/* Symbol: AC4DEC_dap_mathlib_LdivLL */
/* Demangled: AC4DEC_dap_mathlib_LdivLL */
int AC4DEC_dap_mathlib_LdivLL(void);

/* Symbol: AC4DEC_ajccdec_upmix_dry_wet_update_module4 */
/* Demangled: AC4DEC_ajccdec_upmix_dry_wet_update_module4 */
int AC4DEC_ajccdec_upmix_dry_wet_update_module4(void);

/* Symbol: AC4DEC_evo_pb_get_newest */
/* Demangled: AC4DEC_evo_pb_get_newest */
int AC4DEC_evo_pb_get_newest(void);

/* Symbol: AC4DEC_dap_mathlib_Lfastatan2LL */
/* Demangled: AC4DEC_dap_mathlib_Lfastatan2LL */
int AC4DEC_dap_mathlib_Lfastatan2LL(void);

/* Symbol: AC4DEC_WindowKBD288_alpha4_5 */
/* Demangled: AC4DEC_WindowKBD288_alpha4_5 */
extern void* AC4DEC_WindowKBD288_alpha4_5;

/* Symbol: DLB_r4_fft_288 */
/* Demangled: DLB_r4_fft_288 */
int DLB_r4_fft_288(void);

/* Symbol: dlb_dct4_postmodulation_shl0 */
/* Demangled: dlb_dct4_postmodulation_shl0 */
int dlb_dct4_postmodulation_shl0(void);

/* Symbol: AC4DEC_emdf_close */
/* Demangled: AC4DEC_emdf_close */
int AC4DEC_emdf_close(void);

/* Symbol: dlb_dct4_postmodulation_shl1 */
/* Demangled: dlb_dct4_postmodulation_shl1 */
int dlb_dct4_postmodulation_shl1(void);

/* Symbol: dlb_fft_fwd_usc_2 */
/* Demangled: dlb_fft_fwd_usc_2 */
int dlb_fft_fwd_usc_2(void);

/* Symbol: AC4DEC_ade_data_read */
/* Demangled: AC4DEC_ade_data_read */
int AC4DEC_ade_data_read(void);

/* Symbol: dlb_dct_twiddle_table16_L480_1 */
/* Demangled: dlb_dct_twiddle_table16_L480_1 */
extern void* dlb_dct_twiddle_table16_L480_1;

/* Symbol: dlb_dct_twiddle_table16_L4_1 */
/* Demangled: dlb_dct_twiddle_table16_L4_1 */
extern void* dlb_dct_twiddle_table16_L4_1;

/* Symbol: AC4DEC_ac4dec_input_stage_toc_parsing */
/* Demangled: AC4DEC_ac4dec_input_stage_toc_parsing */
int AC4DEC_ac4dec_input_stage_toc_parsing(void);

/* Symbol: dlb_dct4_postmodulation_shl2 */
/* Demangled: dlb_dct4_postmodulation_shl2 */
int dlb_dct4_postmodulation_shl2(void);

/* Symbol: AC4DEC_decoder_set_dialog_enhancement_preference */
/* Demangled: AC4DEC_decoder_set_dialog_enhancement_preference */
int AC4DEC_decoder_set_dialog_enhancement_preference(void);

/* Symbol: dlb_dct_twiddle_table16_L480_2 */
/* Demangled: dlb_dct_twiddle_table16_L480_2 */
extern void* dlb_dct_twiddle_table16_L480_2;

/* Symbol: dlb_dct_twiddle_table16_L4_2 */
/* Demangled: dlb_dct_twiddle_table16_L4_2 */
extern void* dlb_dct_twiddle_table16_L4_2;

/* Symbol: AC4DEC_imsdec_panning_coefficients_decode */
/* Demangled: AC4DEC_imsdec_panning_coefficients_decode */
int AC4DEC_imsdec_panning_coefficients_decode(void);

/* Symbol: AC4DEC_size_config_weight_along_axis */
/* Demangled: AC4DEC_size_config_weight_along_axis */
int AC4DEC_size_config_weight_along_axis(void);

/* Symbol: dlb_fft_inv_scl_360 */
/* Demangled: dlb_fft_inv_scl_360 */
int dlb_fft_inv_scl_360(void);

/* Symbol: dlb_fft_fwd_usc_4 */
/* Demangled: dlb_fft_fwd_usc_4 */
int dlb_fft_fwd_usc_4(void);

/* Symbol: AC4DEC_ac4dap_fhcqmf_init */
/* Demangled: AC4DEC_ac4dap_fhcqmf_init */
int AC4DEC_ac4dap_fhcqmf_init(void);

/* Symbol: AC4DEC_ajoc_de_gain_db2lin_table */
/* Demangled: AC4DEC_ajoc_de_gain_db2lin_table */
extern void* AC4DEC_ajoc_de_gain_db2lin_table;

/* Symbol: AC4DEC_DELTA_SOURCE_POS_Z */
/* Demangled: AC4DEC_DELTA_SOURCE_POS_Z */
extern void* AC4DEC_DELTA_SOURCE_POS_Z;

/* Symbol: AC4DEC_dvlim_get_smoothed_gain_alpha */
/* Demangled: AC4DEC_dvlim_get_smoothed_gain_alpha */
int AC4DEC_dvlim_get_smoothed_gain_alpha(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L576 */
/* Demangled: dlb_dct_twiddle_table16_rev_L576 */
extern void* dlb_dct_twiddle_table16_rev_L576;

/* Symbol: AC4DEC_oamdi_init */
/* Demangled: AC4DEC_oamdi_init */
int AC4DEC_oamdi_init(void);

/* Symbol: AC4DEC_tree_huff_code_aspx_env_balance_30_df */
/* Demangled: AC4DEC_tree_huff_code_aspx_env_balance_30_df */
extern void* AC4DEC_tree_huff_code_aspx_env_balance_30_df;

/* Symbol: dlb_fft_fwd_usc_6 */
/* Demangled: dlb_fft_fwd_usc_6 */
int dlb_fft_fwd_usc_6(void);

/* Symbol: AC4DEC_ajocdec_close */
/* Demangled: AC4DEC_ajocdec_close */
int AC4DEC_ajocdec_close(void);

/* Symbol: dlb_dct_twiddle_table16_L192_cos */
/* Demangled: dlb_dct_twiddle_table16_L192_cos */
extern void* dlb_dct_twiddle_table16_L192_cos;

/* Symbol: AC4DEC_obj_render_query_scratch */
/* Demangled: AC4DEC_obj_render_query_scratch */
int AC4DEC_obj_render_query_scratch(void);

/* Symbol: DLB_BLmpyBLS_inplace_strict */
/* Demangled: DLB_BLmpyBLS_inplace_strict */
int DLB_BLmpyBLS_inplace_strict(void);

/* Symbol: AC4DEC_acpldec_query_mem */
/* Demangled: AC4DEC_acpldec_query_mem */
int AC4DEC_acpldec_query_mem(void);

/* Symbol: AC4DEC_ap_dvlim_coefs_256 */
/* Demangled: AC4DEC_ap_dvlim_coefs_256 */
extern void* AC4DEC_ap_dvlim_coefs_256;

/* Symbol: AC4DEC_evo_get_transcoded_md */
/* Demangled: AC4DEC_evo_get_transcoded_md */
int AC4DEC_evo_get_transcoded_md(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L144 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L144 */
extern void* dlb_dct_twiddle_table16_rev_1_L144;

/* Symbol: dlb_fft_fwd_usc_8 */
/* Demangled: dlb_fft_fwd_usc_8 */
int dlb_fft_fwd_usc_8(void);

/* Symbol: AC4DEC_ajocdec_query_mem */
/* Demangled: AC4DEC_ajocdec_query_mem */
int AC4DEC_ajocdec_query_mem(void);

/* Symbol: AC4DEC_rsrc_process */
/* Demangled: AC4DEC_rsrc_process */
int AC4DEC_rsrc_process(void);

/* Symbol: AC4DEC_ac_decoder_init */
/* Demangled: AC4DEC_ac_decoder_init */
int AC4DEC_ac_decoder_init(void);

/* Symbol: AC4DEC_hdr_P2powLP */
/* Demangled: AC4DEC_hdr_P2powLP */
int AC4DEC_hdr_P2powLP(void);

/* Symbol: AC4DEC_evo_get_md */
/* Demangled: AC4DEC_evo_get_md */
int AC4DEC_evo_get_md(void);

/* Symbol: DLB_qmf_synthesisS_query_mem */
/* Demangled: DLB_qmf_synthesisS_query_mem */
int DLB_qmf_synthesisS_query_mem(void);

/* Symbol: AC4DEC_WindowKBD256_alpha4_0 */
/* Demangled: AC4DEC_WindowKBD256_alpha4_0 */
extern void* AC4DEC_WindowKBD256_alpha4_0;

/* Symbol: AC4DEC_a_spec_exp_table_comb */
/* Demangled: AC4DEC_a_spec_exp_table_comb */
extern void* AC4DEC_a_spec_exp_table_comb;

/* Symbol: AC4DEC_dlb_bitbuf_fast_peek */
/* Demangled: AC4DEC_dlb_bitbuf_fast_peek */
int AC4DEC_dlb_bitbuf_fast_peek(void);

/* Symbol: dlb_blk_LmixLLLL_flex */
/* Demangled: dlb_blk_LmixLLLL_flex */
int dlb_blk_LmixLLLL_flex(void);

/* Symbol: AC4DEC_AA_DIFFUSE_DECORR_2TO7CH */
/* Demangled: AC4DEC_AA_DIFFUSE_DECORR_2TO7CH */
extern void* AC4DEC_AA_DIFFUSE_DECORR_2TO7CH;

/* Symbol: AC4DEC_ssfdec_set_parameter */
/* Demangled: AC4DEC_ssfdec_set_parameter */
int AC4DEC_ssfdec_set_parameter(void);

/* Symbol: AC4DEC_ac_decode */
/* Demangled: AC4DEC_ac_decode */
int AC4DEC_ac_decode(void);

/* Symbol: AC4DEC_oamd_reader_close */
/* Demangled: AC4DEC_oamd_reader_close */
int AC4DEC_oamd_reader_close(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_32_vec_ana;

/* Symbol: DLB_qmf_analysisL_query_mem */
/* Demangled: DLB_qmf_analysisL_query_mem */
int DLB_qmf_analysisL_query_mem(void);

/* Symbol: AC4DEC_oaril_close */
/* Demangled: AC4DEC_oaril_close */
int AC4DEC_oaril_close(void);

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_LO */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_LO */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_LO;

/* Symbol: AC4DEC_QEXT_BANDING_SCHEME_FDN_IN */
/* Demangled: AC4DEC_QEXT_BANDING_SCHEME_FDN_IN */
extern void* AC4DEC_QEXT_BANDING_SCHEME_FDN_IN;

/* Symbol: AC4DEC_evo_ll_get_capacity */
/* Demangled: AC4DEC_evo_ll_get_capacity */
int AC4DEC_evo_ll_get_capacity(void);

/* Symbol: DLB_r4_fft_15_s */
/* Demangled: DLB_r4_fft_15_s */
int DLB_r4_fft_15_s(void);

/* Symbol: AC4DEC_ac4toc_get_bitrate_indicator */
/* Demangled: AC4DEC_ac4toc_get_bitrate_indicator */
int AC4DEC_ac4toc_get_bitrate_indicator(void);

/* Symbol: AC4DEC_dap_mathlib_clvec_CLCLmixCLCLSSSSU */
/* Demangled: AC4DEC_dap_mathlib_clvec_CLCLmixCLCLSSSSU */
int AC4DEC_dap_mathlib_clvec_CLCLmixCLCLSSSSU(void);

/* Symbol: AC4DEC_WindowKBD256_alpha4_5 */
/* Demangled: AC4DEC_WindowKBD256_alpha4_5 */
extern void* AC4DEC_WindowKBD256_alpha4_5;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L320 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L320 */
extern void* dlb_dct_twiddle_table16_rev_1_L320;

/* Symbol: dlb_hyb_p4_13 */
/* Demangled: dlb_hyb_p4_13 */
extern void* dlb_hyb_p4_13;

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_340_0 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_340_0 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_340_0;

/* Symbol: AC4DEC_bed_render_info_read */
/* Demangled: AC4DEC_bed_render_info_read */
int AC4DEC_bed_render_info_read(void);

/* Symbol: AC4DEC_ims_il_query_mem */
/* Demangled: AC4DEC_ims_il_query_mem */
int AC4DEC_ims_il_query_mem(void);

/* Symbol: DLB_r4_fft_640 */
/* Demangled: DLB_r4_fft_640 */
int DLB_r4_fft_640(void);

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_340_1 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_340_1 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_340_1;

/* Symbol: AC4DEC_ngcs_centre_spread_run */
/* Demangled: AC4DEC_ngcs_centre_spread_run */
int AC4DEC_ngcs_centre_spread_run(void);

/* Symbol: AC4DEC_tree_huff_code_aspx_env_balance_30_f0 */
/* Demangled: AC4DEC_tree_huff_code_aspx_env_balance_30_f0 */
extern void* AC4DEC_tree_huff_code_aspx_env_balance_30_f0;

/* Symbol: AC4DEC_a_dvlim_win_256 */
/* Demangled: AC4DEC_a_dvlim_win_256 */
extern void* AC4DEC_a_dvlim_win_256;

/* Symbol: dlb_blk_LLdeshuffleLL_inplace_flex */
/* Demangled: dlb_blk_LLdeshuffleLL_inplace_flex */
int dlb_blk_LLdeshuffleLL_inplace_flex(void);

/* Symbol: DLB_CLaddCLCLU_strict */
/* Demangled: DLB_CLaddCLCLU_strict */
int DLB_CLaddCLCLU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L384 */
/* Demangled: dlb_dct_twiddle_table16_1_L384 */
extern void* dlb_dct_twiddle_table16_1_L384;

/* Symbol: dlb_dct_twiddle_table16_rev_L1024 */
/* Demangled: dlb_dct_twiddle_table16_rev_L1024 */
extern void* dlb_dct_twiddle_table16_rev_L1024;

/* Symbol: DLB_r4_fft_320_s */
/* Demangled: DLB_r4_fft_320_s */
int DLB_r4_fft_320_s(void);

/* Symbol: AC4DEC_oarq_init */
/* Demangled: AC4DEC_oarq_init */
int AC4DEC_oarq_init(void);

/* Symbol: AC4DEC_dlb_bitbuf_get_alignment_bits */
/* Demangled: AC4DEC_dlb_bitbuf_get_alignment_bits */
int AC4DEC_dlb_bitbuf_get_alignment_bits(void);

/* Symbol: AC4DEC_tree_huff_code_aspx_env_balance_30_dt */
/* Demangled: AC4DEC_tree_huff_code_aspx_env_balance_30_dt */
extern void* AC4DEC_tree_huff_code_aspx_env_balance_30_dt;

/* Symbol: AC4DEC_speaker_config_init */
/* Demangled: AC4DEC_speaker_config_init */
int AC4DEC_speaker_config_init(void);

/* Symbol: AC4DEC_volume_and_ieq_update_drc_cut_params */
/* Demangled: AC4DEC_volume_and_ieq_update_drc_cut_params */
int AC4DEC_volume_and_ieq_update_drc_cut_params(void);

/* Symbol: AC4DEC_DAP_MATHLIB_LOGTYPE_10_LOG_10_ON_260 */
/* Demangled: AC4DEC_DAP_MATHLIB_LOGTYPE_10_LOG_10_ON_260 */
extern void* AC4DEC_DAP_MATHLIB_LOGTYPE_10_LOG_10_ON_260;

/* Symbol: DLB_r4_inv_rfft_half_n */
/* Demangled: DLB_r4_inv_rfft_half_n */
int DLB_r4_inv_rfft_half_n(void);

/* Symbol: DLB_r4_inv_rfft_nn */
/* Demangled: DLB_r4_inv_rfft_nn */
int DLB_r4_inv_rfft_nn(void);

/* Symbol: dlb_cos_16_ast_mini_twiddle */
/* Demangled: dlb_cos_16_ast_mini_twiddle */
extern void* dlb_cos_16_ast_mini_twiddle;

/* Symbol: AC4DEC_agc_calc_loudness */
/* Demangled: AC4DEC_agc_calc_loudness */
int AC4DEC_agc_calc_loudness(void);

/* Symbol: AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_256_X_ON_20 */
/* Demangled: AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_256_X_ON_20 */
extern void* AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_256_X_ON_20;

/* Symbol: AC4DEC_tree_asf_bookscl */
/* Demangled: AC4DEC_tree_asf_bookscl */
extern void* AC4DEC_tree_asf_bookscl;

/* Symbol: AC4DEC_ssfdec_open */
/* Demangled: AC4DEC_ssfdec_open */
int AC4DEC_ssfdec_open(void);

/* Symbol: DLB_r4_fft_1024 */
/* Demangled: DLB_r4_fft_1024 */
int DLB_r4_fft_1024(void);

/* Symbol: DLB_r4_fft_32_s */
/* Demangled: DLB_r4_fft_32_s */
int DLB_r4_fft_32_s(void);

/* Symbol: AC4DEC_ade_il_data_read */
/* Demangled: AC4DEC_ade_il_data_read */
int AC4DEC_ade_il_data_read(void);

/* Symbol: AC4DEC_decorr_index_full_mode_7x4 */
/* Demangled: AC4DEC_decorr_index_full_mode_7x4 */
extern void* AC4DEC_decorr_index_full_mode_7x4;

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: dlb_dct_twiddle_table16_L360_cos */
/* Demangled: dlb_dct_twiddle_table16_L360_cos */
extern void* dlb_dct_twiddle_table16_L360_cos;

/* Symbol: DLB_r4_fft_160_s */
/* Demangled: DLB_r4_fft_160_s */
int DLB_r4_fft_160_s(void);

/* Symbol: DLB_fft_CLinv_scaledCL */
/* Demangled: DLB_fft_CLinv_scaledCL */
int DLB_fft_CLinv_scaledCL(void);

/* Symbol: AC4DEC_A_PHASE_SHIFT_2TO7CH */
/* Demangled: AC4DEC_A_PHASE_SHIFT_2TO7CH */
extern void* AC4DEC_A_PHASE_SHIFT_2TO7CH;

/* Symbol: AC4DEC_aspx_hfgen_iwc_2ch_read */
/* Demangled: AC4DEC_aspx_hfgen_iwc_2ch_read */
int AC4DEC_aspx_hfgen_iwc_2ch_read(void);

/* Symbol: AC4DEC_ims_il_mdd_init */
/* Demangled: AC4DEC_ims_il_mdd_init */
int AC4DEC_ims_il_mdd_init(void);

/* Symbol: DLB_r4_fft_4_s */
/* Demangled: DLB_r4_fft_4_s */
int DLB_r4_fft_4_s(void);

/* Symbol: AC4DEC_emdf_mem_init */
/* Demangled: AC4DEC_emdf_mem_init */
int AC4DEC_emdf_mem_init(void);

/* Symbol: AC4DEC_oamdi_get_md_ver */
/* Demangled: AC4DEC_oamdi_get_md_ver */
int AC4DEC_oamdi_get_md_ver(void);

/* Symbol: DLB_blk_Lcrossfade_gainLS_setup */
/* Demangled: DLB_blk_Lcrossfade_gainLS_setup */
int DLB_blk_Lcrossfade_gainLS_setup(void);

/* Symbol: DLB_CLrecipCLUU_strict */
/* Demangled: DLB_CLrecipCLUU_strict */
int DLB_CLrecipCLUU_strict(void);

/* Symbol: DLB_r4_fft_45_s */
/* Demangled: DLB_r4_fft_45_s */
int DLB_r4_fft_45_s(void);

/* Symbol: _ZN5dolby12DlbGenClass2D1Ev */
/* Demangled: dolby::DlbGenClass2::~DlbGenClass2() */
int _ZN5dolby12DlbGenClass2D1Ev(void);

/* Symbol: AC4DEC_ac4toc_reader_get_param_presentation */
/* Demangled: AC4DEC_ac4toc_reader_get_param_presentation */
int AC4DEC_ac4toc_reader_get_param_presentation(void);

/* Symbol: AC4DEC_emdf_pl_0x01_serialize */
/* Demangled: AC4DEC_emdf_pl_0x01_serialize */
int AC4DEC_emdf_pl_0x01_serialize(void);

/* Symbol: AC4DEC_ramp_gain_targets_set */
/* Demangled: AC4DEC_ramp_gain_targets_set */
int AC4DEC_ramp_gain_targets_set(void);

/* Symbol: dlb_blk_LmaxLL_flex */
/* Demangled: dlb_blk_LmaxLL_flex */
int dlb_blk_LmaxLL_flex(void);

/* Symbol: dlb_fft_fwd_usc_960 */
/* Demangled: dlb_fft_fwd_usc_960 */
int dlb_fft_fwd_usc_960(void);

/* Symbol: dlb_fft_inv_scl_192 */
/* Demangled: dlb_fft_inv_scl_192 */
int dlb_fft_inv_scl_192(void);

/* Symbol: AC4DEC_arle_compressor_gains_update */
/* Demangled: AC4DEC_arle_compressor_gains_update */
int AC4DEC_arle_compressor_gains_update(void);

/* Symbol: AC4DEC_de_clear */
/* Demangled: AC4DEC_de_clear */
int AC4DEC_de_clear(void);

/* Symbol: AC4DEC_ajccdec_interpolate */
/* Demangled: AC4DEC_ajccdec_interpolate */
int AC4DEC_ajccdec_interpolate(void);

/* Symbol: AC4DEC_oamd_reader_parse_dyndata_multi */
/* Demangled: AC4DEC_oamd_reader_parse_dyndata_multi */
int AC4DEC_oamd_reader_parse_dyndata_multi(void);

/* Symbol: AC4DEC_room_config_disable_elevation */
/* Demangled: AC4DEC_room_config_disable_elevation */
int AC4DEC_room_config_disable_elevation(void);

/* Symbol: AC4DEC_evo_time_subtract */
/* Demangled: AC4DEC_evo_time_subtract */
int AC4DEC_evo_time_subtract(void);

/* Symbol: dlb_fft_inv_scl_720 */
/* Demangled: dlb_fft_inv_scl_720 */
int dlb_fft_inv_scl_720(void);

/* Symbol: AC4DEC_delay_line_clvec_copy */
/* Demangled: AC4DEC_delay_line_clvec_copy */
int AC4DEC_delay_line_clvec_copy(void);

/* Symbol: AC4DEC_huffdec_read */
/* Demangled: AC4DEC_huffdec_read */
int AC4DEC_huffdec_read(void);

/* Symbol: AC4DEC_ade_il_reset */
/* Demangled: AC4DEC_ade_il_reset */
int AC4DEC_ade_il_reset(void);

/* Symbol: AC4DEC_asf_read_sf_info */
/* Demangled: AC4DEC_asf_read_sf_info */
int AC4DEC_asf_read_sf_info(void);

/* Symbol: AC4DEC_cch_reset */
/* Demangled: AC4DEC_cch_reset */
int AC4DEC_cch_reset(void);

/* Symbol: AC4DEC_drc_get_standard_profile */
/* Demangled: AC4DEC_drc_get_standard_profile */
int AC4DEC_drc_get_standard_profile(void);

/* Symbol: AC4DEC_loudness_info_init_rtll */
/* Demangled: AC4DEC_loudness_info_init_rtll */
int AC4DEC_loudness_info_init_rtll(void);

/* Symbol: AC4DEC_WindowKBD120 */
/* Demangled: AC4DEC_WindowKBD120 */
extern void* AC4DEC_WindowKBD120;

/* Symbol: dlb_fft_inv_usc_256 */
/* Demangled: dlb_fft_inv_usc_256 */
int dlb_fft_inv_usc_256(void);

/* Symbol: AC4DEC_ngcs_process_query_scratch */
/* Demangled: AC4DEC_ngcs_process_query_scratch */
int AC4DEC_ngcs_process_query_scratch(void);

/* Symbol: AC4DEC_PA_DIFFUSE_DECORR_2TO6CH */
/* Demangled: AC4DEC_PA_DIFFUSE_DECORR_2TO6CH */
extern void* AC4DEC_PA_DIFFUSE_DECORR_2TO6CH;

/* Symbol: AC4DEC_WindowKBD768_alpha3_0 */
/* Demangled: AC4DEC_WindowKBD768_alpha3_0 */
extern void* AC4DEC_WindowKBD768_alpha3_0;

/* Symbol: AC4DEC_imdct_close */
/* Demangled: AC4DEC_imdct_close */
int AC4DEC_imdct_close(void);

/* Symbol: AC4DEC_tree_huff_code_de */
/* Demangled: AC4DEC_tree_huff_code_de */
extern void* AC4DEC_tree_huff_code_de;

/* Symbol: AC4DEC_ngcs_steering_run */
/* Demangled: AC4DEC_ngcs_steering_run */
int AC4DEC_ngcs_steering_run(void);

/* Symbol: AC4DEC_IMS_FDN_PARAMS_DEFAULT */
/* Demangled: AC4DEC_IMS_FDN_PARAMS_DEFAULT */
extern void* AC4DEC_IMS_FDN_PARAMS_DEFAULT;

/* Symbol: AC4DEC_rsrc_close */
/* Demangled: AC4DEC_rsrc_close */
int AC4DEC_rsrc_close(void);

/* Symbol: AC4DEC_oamd_framer_progress_time */
/* Demangled: AC4DEC_oamd_framer_progress_time */
int AC4DEC_oamd_framer_progress_time(void);

/* Symbol: AC4DEC_DELTA_Z_SAMPLES */
/* Demangled: AC4DEC_DELTA_Z_SAMPLES */
extern void* AC4DEC_DELTA_Z_SAMPLES;

/* Symbol: AC4DEC_AA_NGCS_SEG_STEERING_2TO7CH */
/* Demangled: AC4DEC_AA_NGCS_SEG_STEERING_2TO7CH */
extern void* AC4DEC_AA_NGCS_SEG_STEERING_2TO7CH;

/* Symbol: AC4DEC_decoder_get_drc_info */
/* Demangled: AC4DEC_decoder_get_drc_info */
int AC4DEC_decoder_get_drc_info(void);

/* Symbol: AC4DEC_drc_mode_select */
/* Demangled: AC4DEC_drc_mode_select */
int AC4DEC_drc_mode_select(void);

/* Symbol: AC4DEC_sv_dual_end_state_query_memory */
/* Demangled: AC4DEC_sv_dual_end_state_query_memory */
int AC4DEC_sv_dual_end_state_query_memory(void);

/* Symbol: dlb_dct_twiddle_table16_L1024_cos */
/* Demangled: dlb_dct_twiddle_table16_L1024_cos */
extern void* dlb_dct_twiddle_table16_L1024_cos;

/* Symbol: AC4DEC_dvlim_get_num_channels */
/* Demangled: AC4DEC_dvlim_get_num_channels */
int AC4DEC_dvlim_get_num_channels(void);

/* Symbol: dlb_blk_Lmix_shlULLL_flex */
/* Demangled: dlb_blk_Lmix_shlULLL_flex */
int dlb_blk_Lmix_shlULLL_flex(void);

/* Symbol: DLB_r4_rsplit_fft_nn_s */
/* Demangled: DLB_r4_rsplit_fft_nn_s */
int DLB_r4_rsplit_fft_nn_s(void);

/* Symbol: ac4dec_wrapper_close */
/* Demangled: ac4dec_wrapper_close */
int ac4dec_wrapper_close(void);

/* Symbol: DLB_blk_LsaddLL_strict */
/* Demangled: DLB_blk_LsaddLL_strict */
int DLB_blk_LsaddLL_strict(void);

/* Symbol: AC4DEC_q2le_compute_log_excitation */
/* Demangled: AC4DEC_q2le_compute_log_excitation */
int AC4DEC_q2le_compute_log_excitation(void);

/* Symbol: AC4DEC_ldn_excitation_transform */
/* Demangled: AC4DEC_ldn_excitation_transform */
int AC4DEC_ldn_excitation_transform(void);

/* Symbol: AC4DEC_iwc_apply */
/* Demangled: AC4DEC_iwc_apply */
int AC4DEC_iwc_apply(void);

/* Symbol: AC4DEC_WindowKBD128 */
/* Demangled: AC4DEC_WindowKBD128 */
extern void* AC4DEC_WindowKBD128;

/* Symbol: AC4DEC_oamdi_get_sample_offset */
/* Demangled: AC4DEC_oamdi_get_sample_offset */
int AC4DEC_oamdi_get_sample_offset(void);

/* Symbol: dlb_blk_Lfir3L_flex */
/* Demangled: dlb_blk_Lfir3L_flex */
int dlb_blk_Lfir3L_flex(void);

/* Symbol: dlb_blk_LnrrecipLU_flex */
/* Demangled: dlb_blk_LnrrecipLU_flex */
int dlb_blk_LnrrecipLU_flex(void);

/* Symbol: dlb_fft_inv_scl_2 */
/* Demangled: dlb_fft_inv_scl_2 */
int dlb_fft_inv_scl_2(void);

/* Symbol: DLB_hybrid_synthesisCL_close */
/* Demangled: DLB_hybrid_synthesisCL_close */
int DLB_hybrid_synthesisCL_close(void);

/* Symbol: AC4DEC_delay_get_write_ptr */
/* Demangled: AC4DEC_delay_get_write_ptr */
int AC4DEC_delay_get_write_ptr(void);

/* Symbol: dlb_dct_twiddle_table16_L384_1 */
/* Demangled: dlb_dct_twiddle_table16_L384_1 */
extern void* dlb_dct_twiddle_table16_L384_1;

/* Symbol: AC4DEC_calc_signal_envelope */
/* Demangled: AC4DEC_calc_signal_envelope */
int AC4DEC_calc_signal_envelope(void);

/* Symbol: AC4DEC_WindowKBD60_alpha6_0 */
/* Demangled: AC4DEC_WindowKBD60_alpha6_0 */
extern void* AC4DEC_WindowKBD60_alpha6_0;

/* Symbol: DLB_vec_Sabs_maxSU_strict */
/* Demangled: DLB_vec_Sabs_maxSU_strict */
int DLB_vec_Sabs_maxSU_strict(void);

/* Symbol: dlb_fft_fwd_usc_240 */
/* Demangled: dlb_fft_fwd_usc_240 */
int dlb_fft_fwd_usc_240(void);

/* Symbol: dlb_dct_twiddle_table16_L384_2 */
/* Demangled: dlb_dct_twiddle_table16_L384_2 */
extern void* dlb_dct_twiddle_table16_L384_2;

/* Symbol: AC4DEC_post_gain_tab */
/* Demangled: AC4DEC_post_gain_tab */
extern void* AC4DEC_post_gain_tab;

/* Symbol: AC4DEC_oamdi_get_oamd_ver_from_bitstream */
/* Demangled: AC4DEC_oamdi_get_oamd_ver_from_bitstream */
int AC4DEC_oamdi_get_oamd_ver_from_bitstream(void);

/* Symbol: dlb_fft_inv_scl_4 */
/* Demangled: dlb_fft_inv_scl_4 */
int dlb_fft_inv_scl_4(void);

/* Symbol: AC4DEC_legq_process */
/* Demangled: AC4DEC_legq_process */
int AC4DEC_legq_process(void);

/* Symbol: AC4DEC_metadata_delay_iterator_init */
/* Demangled: AC4DEC_metadata_delay_iterator_init */
int AC4DEC_metadata_delay_iterator_init(void);

/* Symbol: dlb_fft_fwd_scl_180 */
/* Demangled: dlb_fft_fwd_scl_180 */
int dlb_fft_fwd_scl_180(void);

/* Symbol: AC4DEC_ade_il_get_enable_flag */
/* Demangled: AC4DEC_ade_il_get_enable_flag */
int AC4DEC_ade_il_get_enable_flag(void);

/* Symbol: AC4DEC_dvlim_get_hard_clip */
/* Demangled: AC4DEC_dvlim_get_hard_clip */
int AC4DEC_dvlim_get_hard_clip(void);

/* Symbol: dlb_fft_inv_scl_6 */
/* Demangled: dlb_fft_inv_scl_6 */
int dlb_fft_inv_scl_6(void);

/* Symbol: dlb_qmf_filter_coeff_P4_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P4_vec_ana */
extern void* dlb_qmf_filter_coeff_P4_vec_ana;

/* Symbol: AC4DEC_CHANNEL_MAP_544_0 */
/* Demangled: AC4DEC_CHANNEL_MAP_544_0 */
extern void* AC4DEC_CHANNEL_MAP_544_0;

/* Symbol: AC4DEC_dapil_query_mem */
/* Demangled: AC4DEC_dapil_query_mem */
int AC4DEC_dapil_query_mem(void);

/* Symbol: dlb_CLdivCLCLU_flex */
/* Demangled: dlb_CLdivCLCLU_flex */
int dlb_CLdivCLCLU_flex(void);

/* Symbol: DLB_r4_inv_fft_384 */
/* Demangled: DLB_r4_inv_fft_384 */
int DLB_r4_inv_fft_384(void);

/* Symbol: AC4DEC_ac4dap_fhcqmf_query_memory */
/* Demangled: AC4DEC_ac4dap_fhcqmf_query_memory */
int AC4DEC_ac4dap_fhcqmf_query_memory(void);

/* Symbol: AC4DEC_CHANNEL_MAP_544_1 */
/* Demangled: AC4DEC_CHANNEL_MAP_544_1 */
extern void* AC4DEC_CHANNEL_MAP_544_1;

/* Symbol: AC4DEC_hmac_obf_sha256_init */
/* Demangled: AC4DEC_hmac_obf_sha256_init */
int AC4DEC_hmac_obf_sha256_init(void);

/* Symbol: dlb_fft_inv_scl_8 */
/* Demangled: dlb_fft_inv_scl_8 */
int dlb_fft_inv_scl_8(void);

/* Symbol: AC4DEC_aspx_hf_adjust */
/* Demangled: AC4DEC_aspx_hf_adjust */
int AC4DEC_aspx_hf_adjust(void);

/* Symbol: AC4DEC_volume_and_ieq_query_scratch */
/* Demangled: AC4DEC_volume_and_ieq_query_scratch */
int AC4DEC_volume_and_ieq_query_scratch(void);

/* Symbol: AC4DEC_loudness_init */
/* Demangled: AC4DEC_loudness_init */
int AC4DEC_loudness_init(void);

/* Symbol: dlb_dct_twiddle_table16_L288 */
/* Demangled: dlb_dct_twiddle_table16_L288 */
extern void* dlb_dct_twiddle_table16_L288;

/* Symbol: AC4DEC_ast_bw_index_smooth */
/* Demangled: AC4DEC_ast_bw_index_smooth */
int AC4DEC_ast_bw_index_smooth(void);

/* Symbol: AC4DEC_a_inv_quant_table */
/* Demangled: AC4DEC_a_inv_quant_table */
extern void* AC4DEC_a_inv_quant_table;

/* Symbol: AC4DEC_hist_add_element */
/* Demangled: AC4DEC_hist_add_element */
int AC4DEC_hist_add_element(void);

/* Symbol: AC4DEC_hdr_Plog2P */
/* Demangled: AC4DEC_hdr_Plog2P */
int AC4DEC_hdr_Plog2P(void);

/* Symbol: dlb_BLmaxBLL_inplace_flex */
/* Demangled: dlb_BLmaxBLL_inplace_flex */
int dlb_BLmaxBLL_inplace_flex(void);

/* Symbol: DLB_vec_NdotLLU_strict */
/* Demangled: DLB_vec_NdotLLU_strict */
int DLB_vec_NdotLLU_strict(void);

/* Symbol: AC4DEC_ngcs_steering_table_setup */
/* Demangled: AC4DEC_ngcs_steering_table_setup */
int AC4DEC_ngcs_steering_table_setup(void);

/* Symbol: AC4DEC_asf_read_sf_info_lfe */
/* Demangled: AC4DEC_asf_read_sf_info_lfe */
int AC4DEC_asf_read_sf_info_lfe(void);

/* Symbol: AC4DEC_speaker_config_positions_get */
/* Demangled: AC4DEC_speaker_config_positions_get */
int AC4DEC_speaker_config_positions_get(void);

/* Symbol: AC4DEC_oamdi_has_oa_element_object_description */
/* Demangled: AC4DEC_oamdi_has_oa_element_object_description */
int AC4DEC_oamdi_has_oa_element_object_description(void);

/* Symbol: AC4DEC_bf1_fdn_init */
/* Demangled: AC4DEC_bf1_fdn_init */
int AC4DEC_bf1_fdn_init(void);

/* Symbol: AC4DEC_hist_init */
/* Demangled: AC4DEC_hist_init */
int AC4DEC_hist_init(void);

/* Symbol: DLB_blk_refLdelayU */
/* Demangled: DLB_blk_refLdelayU */
int DLB_blk_refLdelayU(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_32 */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_32 */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_32;

/* Symbol: AC4DEC_phase90_filter_process */
/* Demangled: AC4DEC_phase90_filter_process */
int AC4DEC_phase90_filter_process(void);

/* Symbol: AC4DEC_get_compressed_channel_map */
/* Demangled: AC4DEC_get_compressed_channel_map */
int AC4DEC_get_compressed_channel_map(void);

/* Symbol: AC4DEC_base_frame_len_tab */
/* Demangled: AC4DEC_base_frame_len_tab */
extern void* AC4DEC_base_frame_len_tab;

/* Symbol: AC4DEC_oamdi_set_obj_not_active */
/* Demangled: AC4DEC_oamdi_set_obj_not_active */
int AC4DEC_oamdi_set_obj_not_active(void);

/* Symbol: AC4DEC_tree_huff_code_ims_para_coarse_df */
/* Demangled: AC4DEC_tree_huff_code_ims_para_coarse_df */
extern void* AC4DEC_tree_huff_code_ims_para_coarse_df;

/* Symbol: AC4DEC_dvlim_reset_state */
/* Demangled: AC4DEC_dvlim_reset_state */
int AC4DEC_dvlim_reset_state(void);

/* Symbol: _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE */
/* Demangled: vtable for android::Vector<android::SimpleSoftOMXComponent::BufferInfo> */
extern void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE;

/* Symbol: dlb_dct_twiddle_table16_L32_cos */
/* Demangled: dlb_dct_twiddle_table16_L32_cos */
extern void* dlb_dct_twiddle_table16_L32_cos;

/* Symbol: AC4DEC_room_config_warping_enable */
/* Demangled: AC4DEC_room_config_warping_enable */
int AC4DEC_room_config_warping_enable(void);

/* Symbol: DLB_blk_delay_clear_strict */
/* Demangled: DLB_blk_delay_clear_strict */
int DLB_blk_delay_clear_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L768 */
/* Demangled: dlb_dct_twiddle_table16_rev_L768 */
extern void* dlb_dct_twiddle_table16_rev_L768;

/* Symbol: dlb_fft_fwd_scl_360 */
/* Demangled: dlb_fft_fwd_scl_360 */
int dlb_fft_fwd_scl_360(void);

/* Symbol: AC4DEC_hp_height_downmix_and_fdn_process */
/* Demangled: AC4DEC_hp_height_downmix_and_fdn_process */
int AC4DEC_hp_height_downmix_and_fdn_process(void);

/* Symbol: AC4DEC_hp_height_fdn_process */
/* Demangled: AC4DEC_hp_height_fdn_process */
int AC4DEC_hp_height_fdn_process(void);

/* Symbol: AC4DEC_PA_NGCS_SEG_STEERING_2TO5CH */
/* Demangled: AC4DEC_PA_NGCS_SEG_STEERING_2TO5CH */
extern void* AC4DEC_PA_NGCS_SEG_STEERING_2TO5CH;

/* Symbol: AC4DEC_hdr_P2powP */
/* Demangled: AC4DEC_hdr_P2powP */
int AC4DEC_hdr_P2powP(void);

/* Symbol: dlb_cos_32_full */
/* Demangled: dlb_cos_32_full */
extern void* dlb_cos_32_full;

/* Symbol: AC4DEC_phase90_filter_init */
/* Demangled: AC4DEC_phase90_filter_init */
int AC4DEC_phase90_filter_init(void);

/* Symbol: AC4DEC_aspx_mdd_generate_dummy_data */
/* Demangled: AC4DEC_aspx_mdd_generate_dummy_data */
int AC4DEC_aspx_mdd_generate_dummy_data(void);

/* Symbol: AC4DEC_A_ROOM_CONFIG_SPKS_CENTRE_ALT */
/* Demangled: AC4DEC_A_ROOM_CONFIG_SPKS_CENTRE_ALT */
extern void* AC4DEC_A_ROOM_CONFIG_SPKS_CENTRE_ALT;

/* Symbol: AC4DEC_delay_line_lfract_reset */
/* Demangled: AC4DEC_delay_line_lfract_reset */
int AC4DEC_delay_line_lfract_reset(void);

/* Symbol: AC4DEC_sone_buffer_query_memory */
/* Demangled: AC4DEC_sone_buffer_query_memory */
int AC4DEC_sone_buffer_query_memory(void);

/* Symbol: AC4DEC_sap_sub_full */
/* Demangled: AC4DEC_sap_sub_full */
int AC4DEC_sap_sub_full(void);

/* Symbol: AC4DEC_a_isf_bh_15_9_5_1_decode */
/* Demangled: AC4DEC_a_isf_bh_15_9_5_1_decode */
extern void* AC4DEC_a_isf_bh_15_9_5_1_decode;

/* Symbol: AC4DEC_ngcs_centre_spread_init */
/* Demangled: AC4DEC_ngcs_centre_spread_init */
int AC4DEC_ngcs_centre_spread_init(void);

/* Symbol: AC4DEC_decoder_set_target_reference_level */
/* Demangled: AC4DEC_decoder_set_target_reference_level */
int AC4DEC_decoder_set_target_reference_level(void);

/* Symbol: AC4DEC_aspx_config_read */
/* Demangled: AC4DEC_aspx_config_read */
int AC4DEC_aspx_config_read(void);

/* Symbol: AC4DEC_PA_DIFFUSE_NO_DECORR_5TO7CH */
/* Demangled: AC4DEC_PA_DIFFUSE_NO_DECORR_5TO7CH */
extern void* AC4DEC_PA_DIFFUSE_NO_DECORR_5TO7CH;

/* Symbol: AC4DEC_alpha_quant_table */
/* Demangled: AC4DEC_alpha_quant_table */
extern void* AC4DEC_alpha_quant_table;

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_8_vec_syn;

/* Symbol: dlb_ac4dec_v2_dec_set_drc_target_reference_level */
/* Demangled: dlb_ac4dec_v2_dec_set_drc_target_reference_level */
int dlb_ac4dec_v2_dec_set_drc_target_reference_level(void);

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR44KHZ1_BS192S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR44KHZ1_BS192S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR44KHZ1_BS192S;

/* Symbol: AC4DEC_dap_mathlib_LlogLP */
/* Demangled: AC4DEC_dap_mathlib_LlogLP */
int AC4DEC_dap_mathlib_LlogLP(void);

/* Symbol: dlb_ac4dec_v2_dec_get_drc_info */
/* Demangled: dlb_ac4dec_v2_dec_get_drc_info */
int dlb_ac4dec_v2_dec_get_drc_info(void);

/* Symbol: AC4DEC_sbg_template_lowres */
/* Demangled: AC4DEC_sbg_template_lowres */
extern void* AC4DEC_sbg_template_lowres;

/* Symbol: AC4DEC_IMS_DEN_PARAMS_DEFAULT */
/* Demangled: AC4DEC_IMS_DEN_PARAMS_DEFAULT */
extern void* AC4DEC_IMS_DEN_PARAMS_DEFAULT;

/* Symbol: dlb_qmf_analysisL_open */
/* Demangled: dlb_qmf_analysisL_open */
int dlb_qmf_analysisL_open(void);

/* Symbol: DLB_blk_LmixnL */
/* Demangled: DLB_blk_LmixnL */
int DLB_blk_LmixnL(void);

/* Symbol: AC4DEC_ac4toc_reader_query_mem */
/* Demangled: AC4DEC_ac4toc_reader_query_mem */
int AC4DEC_ac4toc_reader_query_mem(void);

/* Symbol: AC4DEC_oamdi_get_init_info */
/* Demangled: AC4DEC_oamdi_get_init_info */
int AC4DEC_oamdi_get_init_info(void);

/* Symbol: AC4DEC_a_isf_decoder_metadata */
/* Demangled: AC4DEC_a_isf_decoder_metadata */
extern void* AC4DEC_a_isf_decoder_metadata;

/* Symbol: AC4DEC_oamdi_set_hp_render_mode */
/* Demangled: AC4DEC_oamdi_set_hp_render_mode */
int AC4DEC_oamdi_set_hp_render_mode(void);

/* Symbol: DLB_blk_Lmix_shlUL_strict */
/* Demangled: DLB_blk_Lmix_shlUL_strict */
int DLB_blk_Lmix_shlUL_strict(void);

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR44KHZ1_BS192S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR44KHZ1_BS192S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR44KHZ1_BS192S;

/* Symbol: AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR51KHZ2 */
/* Demangled: AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR51KHZ2 */
extern void* AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR51KHZ2;

/* Symbol: AC4DEC_delay_write */
/* Demangled: AC4DEC_delay_write */
int AC4DEC_delay_write(void);

/* Symbol: _ZN7android10AC4Decoder15setPCMOutConfigEv */
/* Demangled: android::AC4Decoder::setPCMOutConfig() */
int _ZN7android10AC4Decoder15setPCMOutConfigEv(void);

/* Symbol: AC4DEC_acpldec_process_2ch */
/* Demangled: AC4DEC_acpldec_process_2ch */
int AC4DEC_acpldec_process_2ch(void);

/* Symbol: AC4DEC_cdmx_apply_downmix */
/* Demangled: AC4DEC_cdmx_apply_downmix */
int AC4DEC_cdmx_apply_downmix(void);

/* Symbol: AC4DEC_get_recip_num_chan */
/* Demangled: AC4DEC_get_recip_num_chan */
int AC4DEC_get_recip_num_chan(void);

/* Symbol: dlb_dct_twiddle_table16_L8_cos */
/* Demangled: dlb_dct_twiddle_table16_L8_cos */
extern void* dlb_dct_twiddle_table16_L8_cos;

/* Symbol: AC4DEC_oamdi_get_md_update_info */
/* Demangled: AC4DEC_oamdi_get_md_update_info */
int AC4DEC_oamdi_get_md_update_info(void);

/* Symbol: AC4DEC_tree_huff_code_ims_para_coarse_f0 */
/* Demangled: AC4DEC_tree_huff_code_ims_para_coarse_f0 */
extern void* AC4DEC_tree_huff_code_ims_para_coarse_f0;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L512 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L512 */
extern void* dlb_dct_twiddle_table16_rev_1_L512;

/* Symbol: AC4DEC_ac4framer_set_timestamp */
/* Demangled: AC4DEC_ac4framer_set_timestamp */
int AC4DEC_ac4framer_set_timestamp(void);

/* Symbol: AC4DEC_decoder_get_flushing_status */
/* Demangled: AC4DEC_decoder_get_flushing_status */
int AC4DEC_decoder_get_flushing_status(void);

/* Symbol: dlb_dct_twiddle_table16_L36_1 */
/* Demangled: dlb_dct_twiddle_table16_L36_1 */
extern void* dlb_dct_twiddle_table16_L36_1;

/* Symbol: AC4DEC_oamt_map_objects_from_bs_to_oamd_order */
/* Demangled: AC4DEC_oamt_map_objects_from_bs_to_oamd_order */
int AC4DEC_oamt_map_objects_from_bs_to_oamd_order(void);

/* Symbol: AC4DEC_fboar_get_next_endpoint */
/* Demangled: AC4DEC_fboar_get_next_endpoint */
int AC4DEC_fboar_get_next_endpoint(void);

/* Symbol: AC4DEC_ac4toc_parse_presentation_v1_info */
/* Demangled: AC4DEC_ac4toc_parse_presentation_v1_info */
int AC4DEC_ac4toc_parse_presentation_v1_info(void);

/* Symbol: AC4DEC_delay_query_memory */
/* Demangled: AC4DEC_delay_query_memory */
int AC4DEC_delay_query_memory(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_shared_mem_finalize */
/* Demangled: AC4DEC_dlb_ac4dec_v1_shared_mem_finalize */
int AC4DEC_dlb_ac4dec_v1_shared_mem_finalize(void);

/* Symbol: dlb_dct_twiddle_table16_L36_2 */
/* Demangled: dlb_dct_twiddle_table16_L36_2 */
extern void* dlb_dct_twiddle_table16_L36_2;

/* Symbol: AC4DEC_tree_huff_code_ims_para_coarse_dt */
/* Demangled: AC4DEC_tree_huff_code_ims_para_coarse_dt */
extern void* AC4DEC_tree_huff_code_ims_para_coarse_dt;

/* Symbol: AC4DEC_oamd_framer_get_next_gradient_change */
/* Demangled: AC4DEC_oamd_framer_get_next_gradient_change */
int AC4DEC_oamd_framer_get_next_gradient_change(void);

/* Symbol: AC4DEC_oamdi_get_hp_head_track_disable */
/* Demangled: AC4DEC_oamdi_get_hp_head_track_disable */
int AC4DEC_oamdi_get_hp_head_track_disable(void);

/* Symbol: AC4DEC_evo_filter_payload_id */
/* Demangled: AC4DEC_evo_filter_payload_id */
int AC4DEC_evo_filter_payload_id(void);

/* Symbol: AC4DEC_evo_calculate_unalignedbytes_hmac */
/* Demangled: AC4DEC_evo_calculate_unalignedbytes_hmac */
int AC4DEC_evo_calculate_unalignedbytes_hmac(void);

/* Symbol: dlb_blk_LminLL_flex */
/* Demangled: dlb_blk_LminLL_flex */
int dlb_blk_LminLL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L576 */
/* Demangled: dlb_dct_twiddle_table16_1_L576 */
extern void* dlb_dct_twiddle_table16_1_L576;

/* Symbol: DLB_fft_Linv_scaledCL */
/* Demangled: DLB_fft_Linv_scaledCL */
int DLB_fft_Linv_scaledCL(void);

/* Symbol: _ZN5dolby12Ac4DecClient20checkAndUpdateConfigEP7AC4EXEC */
/* Demangled: dolby::Ac4DecClient::checkAndUpdateConfig(AC4EXEC*) */
int _ZN5dolby12Ac4DecClient20checkAndUpdateConfigEP7AC4EXEC(void);

/* Symbol: AC4DEC_ac4dap_rhcqmf_query_memory */
/* Demangled: AC4DEC_ac4dap_rhcqmf_query_memory */
int AC4DEC_ac4dap_rhcqmf_query_memory(void);

/* Symbol: AC4DEC_ac4dap_virtualizer_surround_boost_process */
/* Demangled: AC4DEC_ac4dap_virtualizer_surround_boost_process */
int AC4DEC_ac4dap_virtualizer_surround_boost_process(void);

/* Symbol: AC4DEC_sv_process */
/* Demangled: AC4DEC_sv_process */
int AC4DEC_sv_process(void);

/* Symbol: AC4DEC_ade_close */
/* Demangled: AC4DEC_ade_close */
int AC4DEC_ade_close(void);

/* Symbol: AC4DEC_ac_decode_finish */
/* Demangled: AC4DEC_ac_decode_finish */
int AC4DEC_ac_decode_finish(void);

/* Symbol: DLB_r4_inv_fft_30_s */
/* Demangled: DLB_r4_inv_fft_30_s */
int DLB_r4_inv_fft_30_s(void);

/* Symbol: DLB_time_reset */
/* Demangled: DLB_time_reset */
int DLB_time_reset(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_output_stage_process */
/* Demangled: AC4DEC_dlb_ac4dec_v1_output_stage_process */
int AC4DEC_dlb_ac4dec_v1_output_stage_process(void);

/* Symbol: AC4DEC_get_num_side_bits */
/* Demangled: AC4DEC_get_num_side_bits */
int AC4DEC_get_num_side_bits(void);

/* Symbol: AC4DEC_interpolate_envelope */
/* Demangled: AC4DEC_interpolate_envelope */
int AC4DEC_interpolate_envelope(void);

/* Symbol: AC4DEC_tree_asf_book10 */
/* Demangled: AC4DEC_tree_asf_book10 */
extern void* AC4DEC_tree_asf_book10;

/* Symbol: AC4DEC_rsrc_load_scratch */
/* Demangled: AC4DEC_rsrc_load_scratch */
int AC4DEC_rsrc_load_scratch(void);

/* Symbol: AC4DEC_tree_asf_book11 */
/* Demangled: AC4DEC_tree_asf_book11 */
extern void* AC4DEC_tree_asf_book11;

/* Symbol: AC4DEC_oamd_framer_add */
/* Demangled: AC4DEC_oamd_framer_add */
int AC4DEC_oamd_framer_add(void);

/* Symbol: DLB_blk_Liir2ssv2_shlLU_strict */
/* Demangled: DLB_blk_Liir2ssv2_shlLU_strict */
int DLB_blk_Liir2ssv2_shlLU_strict(void);

/* Symbol: DLB_qmf_analysisL_get_filter_state_length */
/* Demangled: DLB_qmf_analysisL_get_filter_state_length */
int DLB_qmf_analysisL_get_filter_state_length(void);

/* Symbol: DLB_blk_Liir1xL_set_coef */
/* Demangled: DLB_blk_Liir1xL_set_coef */
int DLB_blk_Liir1xL_set_coef(void);

/* Symbol: DLB_r4_fft_480 */
/* Demangled: DLB_r4_fft_480 */
int DLB_r4_fft_480(void);

/* Symbol: AC4DEC_ajcc_wet_quant_table */
/* Demangled: AC4DEC_ajcc_wet_quant_table */
extern void* AC4DEC_ajcc_wet_quant_table;

/* Symbol: AC4DEC_aspx_data_1ch_read */
/* Demangled: AC4DEC_aspx_data_1ch_read */
int AC4DEC_aspx_data_1ch_read(void);

/* Symbol: dlb_CLmacCLLU_flex */
/* Demangled: dlb_CLmacCLLU_flex */
int dlb_CLmacCLLU_flex(void);

/* Symbol: AC4DEC_calc_hcqmf_3ch_decorr */
/* Demangled: AC4DEC_calc_hcqmf_3ch_decorr */
int AC4DEC_calc_hcqmf_3ch_decorr(void);

/* Symbol: AC4DEC_asfdec_inv_quant_spectrum */
/* Demangled: AC4DEC_asfdec_inv_quant_spectrum */
int AC4DEC_asfdec_inv_quant_spectrum(void);

/* Symbol: dlb_dct_twiddle_table16_L288_1 */
/* Demangled: dlb_dct_twiddle_table16_L288_1 */
extern void* dlb_dct_twiddle_table16_L288_1;

/* Symbol: AC4DEC_ac4dap_channel_map_infer_format */
/* Demangled: AC4DEC_ac4dap_channel_map_infer_format */
int AC4DEC_ac4dap_channel_map_infer_format(void);

/* Symbol: dlb_dct_twiddle_table16_L288_2 */
/* Demangled: dlb_dct_twiddle_table16_L288_2 */
extern void* dlb_dct_twiddle_table16_L288_2;

/* Symbol: AC4DEC_oamd_4bit_unsigned_to_oari_Q15 */
/* Demangled: AC4DEC_oamd_4bit_unsigned_to_oari_Q15 */
extern void* AC4DEC_oamd_4bit_unsigned_to_oari_Q15;

/* Symbol: AC4DEC_WindowKBD24_alpha6_0 */
/* Demangled: AC4DEC_WindowKBD24_alpha6_0 */
extern void* AC4DEC_WindowKBD24_alpha6_0;

/* Symbol: DLB_blk_Liir1_shl_addLL_strict */
/* Demangled: DLB_blk_Liir1_shl_addLL_strict */
int DLB_blk_Liir1_shl_addLL_strict(void);

/* Symbol: dlb_fft_inv_scl_384 */
/* Demangled: dlb_fft_inv_scl_384 */
int dlb_fft_inv_scl_384(void);

/* Symbol: dlb_fft_fwd_scl_192 */
/* Demangled: dlb_fft_fwd_scl_192 */
int dlb_fft_fwd_scl_192(void);

/* Symbol: AC4DEC_OAMDI_DIV_TABLE_TO_CODE */
/* Demangled: AC4DEC_OAMDI_DIV_TABLE_TO_CODE */
extern void* AC4DEC_OAMDI_DIV_TABLE_TO_CODE;

/* Symbol: AC4DEC_oamdi_set_has_oa_element_headphone */
/* Demangled: AC4DEC_oamdi_set_has_oa_element_headphone */
int AC4DEC_oamdi_set_has_oa_element_headphone(void);

/* Symbol: dlb_blk_delayL_flex */
/* Demangled: dlb_blk_delayL_flex */
int dlb_blk_delayL_flex(void);

/* Symbol: dlb_fft_fwd_scl_720 */
/* Demangled: dlb_fft_fwd_scl_720 */
int dlb_fft_fwd_scl_720(void);

/* Symbol: AC4DEC_ajcc_para_data_type_7x4 */
/* Demangled: AC4DEC_ajcc_para_data_type_7x4 */
extern void* AC4DEC_ajcc_para_data_type_7x4;

/* Symbol: dlb_BLmpyBLS_inplace_flex */
/* Demangled: dlb_BLmpyBLS_inplace_flex */
int dlb_BLmpyBLS_inplace_flex(void);

/* Symbol: dlb_blk_Lmpy_shlLSU_flex */
/* Demangled: dlb_blk_Lmpy_shlLSU_flex */
int dlb_blk_Lmpy_shlLSU_flex(void);

/* Symbol: dlb_fft_fwd_usc_256 */
/* Demangled: dlb_fft_fwd_usc_256 */
int dlb_fft_fwd_usc_256(void);

/* Symbol: AC4DEC_leveler_reset */
/* Demangled: AC4DEC_leveler_reset */
int AC4DEC_leveler_reset(void);

/* Symbol: DLB_blk_LintegrateL_setup */
/* Demangled: DLB_blk_LintegrateL_setup */
int DLB_blk_LintegrateL_setup(void);

/* Symbol: dlb_ac4dec_v2_dec_get_frame_duration */
/* Demangled: dlb_ac4dec_v2_dec_get_frame_duration */
int dlb_ac4dec_v2_dec_get_frame_duration(void);

/* Symbol: DLB_r4_inv_fft_60_s */
/* Demangled: DLB_r4_inv_fft_60_s */
int DLB_r4_inv_fft_60_s(void);

/* Symbol: AC4DEC_oamdi_get_obj_count */
/* Demangled: AC4DEC_oamdi_get_obj_count */
int AC4DEC_oamdi_get_obj_count(void);

/* Symbol: dlb_CLmpyCLCSU_flex */
/* Demangled: dlb_CLmpyCLCSU_flex */
int dlb_CLmpyCLCSU_flex(void);

/* Symbol: dlb_dctIII_scaled */
/* Demangled: dlb_dctIII_scaled */
int dlb_dctIII_scaled(void);

/* Symbol: dlb_ac4dec_v2_dec_get_ma_mix_info */
/* Demangled: dlb_ac4dec_v2_dec_get_ma_mix_info */
int dlb_ac4dec_v2_dec_get_ma_mix_info(void);

/* Symbol: AC4DEC_dap_mathlib_clvec_CLmpyCLSIU_inplace */
/* Demangled: AC4DEC_dap_mathlib_clvec_CLmpyCLSIU_inplace */
int AC4DEC_dap_mathlib_clvec_CLmpyCLSIU_inplace(void);

/* Symbol: AC4DEC_sha256_do_hash_stride */
/* Demangled: AC4DEC_sha256_do_hash_stride */
int AC4DEC_sha256_do_hash_stride(void);

/* Symbol: dlb_clclmix5cl10csu_c */
/* Demangled: dlb_clclmix5cl10csu_c */
extern void* dlb_clclmix5cl10csu_c;

/* Symbol: AC4DEC_ajcc_qm_type_id_7x4 */
/* Demangled: AC4DEC_ajcc_qm_type_id_7x4 */
extern void* AC4DEC_ajcc_qm_type_id_7x4;

/* Symbol: dlb_dct_twiddle_table16_L1024_1 */
/* Demangled: dlb_dct_twiddle_table16_L1024_1 */
extern void* dlb_dct_twiddle_table16_L1024_1;

/* Symbol: dlb_dct_twiddle_table16_L128_cos */
/* Demangled: dlb_dct_twiddle_table16_L128_cos */
extern void* dlb_dct_twiddle_table16_L128_cos;

/* Symbol: dlb_dct_twiddle_table16_L1024_2 */
/* Demangled: dlb_dct_twiddle_table16_L1024_2 */
extern void* dlb_dct_twiddle_table16_L1024_2;

/* Symbol: dlb_dct_twiddle_table16_L480_cos */
/* Demangled: dlb_dct_twiddle_table16_L480_cos */
extern void* dlb_dct_twiddle_table16_L480_cos;

/* Symbol: AC4DEC_a_isf_bh_15_9_5_1_reorder */
/* Demangled: AC4DEC_a_isf_bh_15_9_5_1_reorder */
extern void* AC4DEC_a_isf_bh_15_9_5_1_reorder;

/* Symbol: AC4DEC_DELTA_Y_SAMPLES */
/* Demangled: AC4DEC_DELTA_Y_SAMPLES */
extern void* AC4DEC_DELTA_Y_SAMPLES;

/* Symbol: AC4DEC_ac4toc_parse_substream_info_v2 */
/* Demangled: AC4DEC_ac4toc_parse_substream_info_v2 */
int AC4DEC_ac4toc_parse_substream_info_v2(void);

/* Symbol: AC4DEC_de_apply_gains */
/* Demangled: AC4DEC_de_apply_gains */
int AC4DEC_de_apply_gains(void);

/* Symbol: AC4DEC_ngcs_mode_output_channel_locs */
/* Demangled: AC4DEC_ngcs_mode_output_channel_locs */
int AC4DEC_ngcs_mode_output_channel_locs(void);

/* Symbol: AC4DEC_dap_mathlib_clvecdl_process */
/* Demangled: AC4DEC_dap_mathlib_clvecdl_process */
int AC4DEC_dap_mathlib_clvecdl_process(void);

/* Symbol: AC4DEC_metadata_delay_input_conceal_type */
/* Demangled: AC4DEC_metadata_delay_input_conceal_type */
int AC4DEC_metadata_delay_input_conceal_type(void);

/* Symbol: AC4DEC_rsrc_config */
/* Demangled: AC4DEC_rsrc_config */
int AC4DEC_rsrc_config(void);

/* Symbol: AC4DEC_ssfdec_st_data_parser */
/* Demangled: AC4DEC_ssfdec_st_data_parser */
int AC4DEC_ssfdec_st_data_parser(void);

/* Symbol: AC4DEC_evo_write_frame_config */
/* Demangled: AC4DEC_evo_write_frame_config */
int AC4DEC_evo_write_frame_config(void);

/* Symbol: func_c_ptr */
/* Demangled: func_c_ptr */
extern void* func_c_ptr;

/* Symbol: DLB_blk_LfirUL_strict */
/* Demangled: DLB_blk_LfirUL_strict */
int DLB_blk_LfirUL_strict(void);

/* Symbol: AC4DEC_oaril_process */
/* Demangled: AC4DEC_oaril_process */
int AC4DEC_oaril_process(void);

/* Symbol: dlb_dct_twiddle_table16_L96_1 */
/* Demangled: dlb_dct_twiddle_table16_L96_1 */
extern void* dlb_dct_twiddle_table16_L96_1;

/* Symbol: AC4DEC_tree_huff_code_joc */
/* Demangled: AC4DEC_tree_huff_code_joc */
extern void* AC4DEC_tree_huff_code_joc;

/* Symbol: AC4DEC_oamdi_get_oa_element_dimensional_trim_read_onl */
/* Demangled: AC4DEC_oamdi_get_oa_element_dimensional_trim_read_onl */
int AC4DEC_oamdi_get_oa_element_dimensional_trim_read_onl(void);

/* Symbol: AC4DEC_ac4dap_virtualizer_render_process */
/* Demangled: AC4DEC_ac4dap_virtualizer_render_process */
int AC4DEC_ac4dap_virtualizer_render_process(void);

/* Symbol: AC4DEC_hist_value_to_bin */
/* Demangled: AC4DEC_hist_value_to_bin */
int AC4DEC_hist_value_to_bin(void);

/* Symbol: AC4DEC_ade_attack_smooth_coeff_tab */
/* Demangled: AC4DEC_ade_attack_smooth_coeff_tab */
extern void* AC4DEC_ade_attack_smooth_coeff_tab;

/* Symbol: AC4DEC_ajccdec_upmix_slot_process_core */
/* Demangled: AC4DEC_ajccdec_upmix_slot_process_core */
int AC4DEC_ajccdec_upmix_slot_process_core(void);

/* Symbol: dlb_dct_twiddle_table16_L96_2 */
/* Demangled: dlb_dct_twiddle_table16_L96_2 */
extern void* dlb_dct_twiddle_table16_L96_2;

/* Symbol: AC4DEC_memlib_subsection_end */
/* Demangled: AC4DEC_memlib_subsection_end */
int AC4DEC_memlib_subsection_end(void);

/* Symbol: AC4DEC_ac4toc_get_number_of_channels_from_channel_mode */
/* Demangled: AC4DEC_ac4toc_get_number_of_channels_from_channel_mode */
int AC4DEC_ac4toc_get_number_of_channels_from_channel_mode(void);

/* Symbol: AC4DEC_aspxdec_query_mem */
/* Demangled: AC4DEC_aspxdec_query_mem */
int AC4DEC_aspxdec_query_mem(void);

/* Symbol: dlb_dct_twiddle_table16_L256_cos */
/* Demangled: dlb_dct_twiddle_table16_L256_cos */
extern void* dlb_dct_twiddle_table16_L256_cos;

/* Symbol: AC4DEC_evo_brw_read */
/* Demangled: AC4DEC_evo_brw_read */
int AC4DEC_evo_brw_read(void);

/* Symbol: AC4DEC_evo_parse_frame_config */
/* Demangled: AC4DEC_evo_parse_frame_config */
int AC4DEC_evo_parse_frame_config(void);

/* Symbol: dlb_vec_NdotLLU_flex */
/* Demangled: dlb_vec_NdotLLU_flex */
int dlb_vec_NdotLLU_flex(void);

/* Symbol: DLB_r4_fft_128_s */
/* Demangled: DLB_r4_fft_128_s */
int DLB_r4_fft_128_s(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_48 */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_48 */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_48;

/* Symbol: dlb_qmf_filter_coeff_P5_32_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_32_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_32_vec_syn;

/* Symbol: DLB_qmf_analysisL_init */
/* Demangled: DLB_qmf_analysisL_init */
int DLB_qmf_analysisL_init(void);

/* Symbol: dlb_blk_LclipL_flex */
/* Demangled: dlb_blk_LclipL_flex */
int dlb_blk_LclipL_flex(void);

/* Symbol: DLB_r4_inv_fft_576 */
/* Demangled: DLB_r4_inv_fft_576 */
int DLB_r4_inv_fft_576(void);

/* Symbol: AC4DEC_cch_get_number_of_elements */
/* Demangled: AC4DEC_cch_get_number_of_elements */
int AC4DEC_cch_get_number_of_elements(void);

/* Symbol: AC4DEC_sf_substream_decode */
/* Demangled: AC4DEC_sf_substream_decode */
int AC4DEC_sf_substream_decode(void);

/* Symbol: DLB_r4_inv_fft_90_s */
/* Demangled: DLB_r4_inv_fft_90_s */
int DLB_r4_inv_fft_90_s(void);

/* Symbol: AC4DEC_AA_DIFFUSE_DECORR_5TO7CH */
/* Demangled: AC4DEC_AA_DIFFUSE_DECORR_5TO7CH */
extern void* AC4DEC_AA_DIFFUSE_DECORR_5TO7CH;

/* Symbol: AC4DEC_tree_huff_code_acpl_beta_fine_df */
/* Demangled: AC4DEC_tree_huff_code_acpl_beta_fine_df */
extern void* AC4DEC_tree_huff_code_acpl_beta_fine_df;

/* Symbol: AC4DEC_evo_brw_write */
/* Demangled: AC4DEC_evo_brw_write */
int AC4DEC_evo_brw_write(void);

/* Symbol: AC4DEC_emdf_malloc */
/* Demangled: AC4DEC_emdf_malloc */
int AC4DEC_emdf_malloc(void);

/* Symbol: DLB_qmf_synthesisS_get_delay */
/* Demangled: DLB_qmf_synthesisS_get_delay */
int DLB_qmf_synthesisS_get_delay(void);

/* Symbol: AC4DEC_ac4dec_md_mix_init */
/* Demangled: AC4DEC_ac4dec_md_mix_init */
int AC4DEC_ac4dec_md_mix_init(void);

/* Symbol: AC4DEC_spectrum_step_size */
/* Demangled: AC4DEC_spectrum_step_size */
extern void* AC4DEC_spectrum_step_size;

/* Symbol: AC4DEC_memlib_pool_alloc */
/* Demangled: AC4DEC_memlib_pool_alloc */
int AC4DEC_memlib_pool_alloc(void);

/* Symbol: dlb_dct_twiddle_table16_L384_cos */
/* Demangled: dlb_dct_twiddle_table16_L384_cos */
extern void* dlb_dct_twiddle_table16_L384_cos;

/* Symbol: DLB_fft_state_query_mem */
/* Demangled: DLB_fft_state_query_mem */
int DLB_fft_state_query_mem(void);

/* Symbol: AC4DEC_ac4dap_rhcqmf_close */
/* Demangled: AC4DEC_ac4dap_rhcqmf_close */
int AC4DEC_ac4dap_rhcqmf_close(void);

/* Symbol: AC4DEC_WindowKBD48_alpha4_5 */
/* Demangled: AC4DEC_WindowKBD48_alpha4_5 */
extern void* AC4DEC_WindowKBD48_alpha4_5;

/* Symbol: AC4DEC_a_isf_bh_5_3_0_0_decode */
/* Demangled: AC4DEC_a_isf_bh_5_3_0_0_decode */
extern void* AC4DEC_a_isf_bh_5_3_0_0_decode;

/* Symbol: AC4DEC_dvlim_update_smoothed_gain */
/* Demangled: AC4DEC_dvlim_update_smoothed_gain */
int AC4DEC_dvlim_update_smoothed_gain(void);

/* Symbol: AC4DEC_evo_write_bitstream */
/* Demangled: AC4DEC_evo_write_bitstream */
int AC4DEC_evo_write_bitstream(void);

/* Symbol: DLB_blk_Lfir3L_setup */
/* Demangled: DLB_blk_Lfir3L_setup */
int DLB_blk_Lfir3L_setup(void);

/* Symbol: dlb_CLmpyCLVSU_flex */
/* Demangled: dlb_CLmpyCLVSU_flex */
int dlb_CLmpyCLVSU_flex(void);

/* Symbol: DLB_qmf_analysisL_get_delay */
/* Demangled: DLB_qmf_analysisL_get_delay */
int DLB_qmf_analysisL_get_delay(void);

/* Symbol: AC4DEC_volume_and_ieq_init */
/* Demangled: AC4DEC_volume_and_ieq_init */
int AC4DEC_volume_and_ieq_init(void);

/* Symbol: DLB_blk_Lmpy_shlLLU_strict */
/* Demangled: DLB_blk_Lmpy_shlLLU_strict */
int DLB_blk_Lmpy_shlLLU_strict(void);

/* Symbol: AC4DEC_ac4dap_speaker_virtualizer_dual_end_process */
/* Demangled: AC4DEC_ac4dap_speaker_virtualizer_dual_end_process */
int AC4DEC_ac4dap_speaker_virtualizer_dual_end_process(void);

/* Symbol: AC4DEC_size_config_exp_virtual_source_addition_law */
/* Demangled: AC4DEC_size_config_exp_virtual_source_addition_law */
int AC4DEC_size_config_exp_virtual_source_addition_law(void);

/* Symbol: AC4DEC_WindowKBD512_alpha4_0 */
/* Demangled: AC4DEC_WindowKBD512_alpha4_0 */
extern void* AC4DEC_WindowKBD512_alpha4_0;

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_1_0 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_1_0 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_1_0;

/* Symbol: AC4DEC_arle_smoothed_excitations_calculation */
/* Demangled: AC4DEC_arle_smoothed_excitations_calculation */
int AC4DEC_arle_smoothed_excitations_calculation(void);

/* Symbol: AC4DEC_aspx_dequantize_noise_2ch */
/* Demangled: AC4DEC_aspx_dequantize_noise_2ch */
int AC4DEC_aspx_dequantize_noise_2ch(void);

/* Symbol: DLB_MFB_P10KM_P64ATM301_LEGACY */
/* Demangled: DLB_MFB_P10KM_P64ATM301_LEGACY */
extern void* DLB_MFB_P10KM_P64ATM301_LEGACY;

/* Symbol: AC4DEC_ac4toc_init_optional_emdf_info_cache */
/* Demangled: AC4DEC_ac4toc_init_optional_emdf_info_cache */
int AC4DEC_ac4toc_init_optional_emdf_info_cache(void);

/* Symbol: AC4DEC_dlb_bitbuf_align */
/* Demangled: AC4DEC_dlb_bitbuf_align */
int AC4DEC_dlb_bitbuf_align(void);

/* Symbol: AC4DEC_ldn_smoothing_process */
/* Demangled: AC4DEC_ldn_smoothing_process */
int AC4DEC_ldn_smoothing_process(void);

/* Symbol: AC4DEC_acpldec_config_1ch_read */
/* Demangled: AC4DEC_acpldec_config_1ch_read */
int AC4DEC_acpldec_config_1ch_read(void);

/* Symbol: dlb_hyb_p2_6 */
/* Demangled: dlb_hyb_p2_6 */
extern void* dlb_hyb_p2_6;

/* Symbol: AC4DEC_decorr_close */
/* Demangled: AC4DEC_decorr_close */
int AC4DEC_decorr_close(void);

/* Symbol: AC4DEC_metadata_delay_iterator_set_pos */
/* Demangled: AC4DEC_metadata_delay_iterator_set_pos */
int AC4DEC_metadata_delay_iterator_set_pos(void);

/* Symbol: AC4DEC_calc_heuristic_gain */
/* Demangled: AC4DEC_calc_heuristic_gain */
int AC4DEC_calc_heuristic_gain(void);

/* Symbol: dlb_BLmpy_scaleBLSU_inplace_flex */
/* Demangled: dlb_BLmpy_scaleBLSU_inplace_flex */
int dlb_BLmpy_scaleBLSU_inplace_flex(void);

/* Symbol: DLB_r4_fft_512_s */
/* Demangled: DLB_r4_fft_512_s */
int DLB_r4_fft_512_s(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj(void);

/* Symbol: AC4DEC_a_isf_bh_3_1_0_0_reorder */
/* Demangled: AC4DEC_a_isf_bh_3_1_0_0_reorder */
extern void* AC4DEC_a_isf_bh_3_1_0_0_reorder;

/* Symbol: DLB_CLmfb_p10km_analysisL */
/* Demangled: DLB_CLmfb_p10km_analysisL */
int DLB_CLmfb_p10km_analysisL(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_beta_fine_f0 */
/* Demangled: AC4DEC_tree_huff_code_acpl_beta_fine_f0 */
extern void* AC4DEC_tree_huff_code_acpl_beta_fine_f0;

/* Symbol: DLB_r4_fft_6_s */
/* Demangled: DLB_r4_fft_6_s */
int DLB_r4_fft_6_s(void);

/* Symbol: AC4DEC_A_PHASE_SHIFT_5TO7CH */
/* Demangled: AC4DEC_A_PHASE_SHIFT_5TO7CH */
extern void* AC4DEC_A_PHASE_SHIFT_5TO7CH;

/* Symbol: AC4DEC_interpol_mult_UM_2ch */
/* Demangled: AC4DEC_interpol_mult_UM_2ch */
int AC4DEC_interpol_mult_UM_2ch(void);

/* Symbol: AC4DEC_aspx_framing */
/* Demangled: AC4DEC_aspx_framing */
int AC4DEC_aspx_framing(void);

/* Symbol: AC4DEC_tree_huff_code_ajcc_wet_fine_df */
/* Demangled: AC4DEC_tree_huff_code_ajcc_wet_fine_df */
extern void* AC4DEC_tree_huff_code_ajcc_wet_fine_df;

/* Symbol: dlb_CLaddCLCLU_flex */
/* Demangled: dlb_CLaddCLCLU_flex */
int dlb_CLaddCLCLU_flex(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_alpha_fine_df */
/* Demangled: AC4DEC_tree_huff_code_acpl_alpha_fine_df */
extern void* AC4DEC_tree_huff_code_acpl_alpha_fine_df;

/* Symbol: AC4DEC_tree_huff_code_acpl_beta_fine_dt */
/* Demangled: AC4DEC_tree_huff_code_acpl_beta_fine_dt */
extern void* AC4DEC_tree_huff_code_acpl_beta_fine_dt;

/* Symbol: DLB_r4_fft_120 */
/* Demangled: DLB_r4_fft_120 */
int DLB_r4_fft_120(void);

/* Symbol: AC4DEC_slot_mean_abs_level */
/* Demangled: AC4DEC_slot_mean_abs_level */
int AC4DEC_slot_mean_abs_level(void);

/* Symbol: AC4DEC_arle_smoothed_excitations_init */
/* Demangled: AC4DEC_arle_smoothed_excitations_init */
int AC4DEC_arle_smoothed_excitations_init(void);

/* Symbol: dlb_dct_twiddle_table16_L360_1 */
/* Demangled: dlb_dct_twiddle_table16_L360_1 */
extern void* dlb_dct_twiddle_table16_L360_1;

/* Symbol: DLB_vec_LmaskLSU_strict */
/* Demangled: DLB_vec_LmaskLSU_strict */
int DLB_vec_LmaskLSU_strict(void);

/* Symbol: AC4DEC_PH90_COEFS */
/* Demangled: AC4DEC_PH90_COEFS */
extern void* AC4DEC_PH90_COEFS;

/* Symbol: AC4DEC_dap_mathlib_LlogsmoothLL */
/* Demangled: AC4DEC_dap_mathlib_LlogsmoothLL */
int AC4DEC_dap_mathlib_LlogsmoothLL(void);

/* Symbol: AC4DEC_sv_pvt_clear_center_state */
/* Demangled: AC4DEC_sv_pvt_clear_center_state */
int AC4DEC_sv_pvt_clear_center_state(void);

/* Symbol: dlb_dct_twiddle_table16_L360_2 */
/* Demangled: dlb_dct_twiddle_table16_L360_2 */
extern void* dlb_dct_twiddle_table16_L360_2;

/* Symbol: AC4DEC_tree_joc_huff_code_coarse_coeff_sparse */
/* Demangled: AC4DEC_tree_joc_huff_code_coarse_coeff_sparse */
extern void* AC4DEC_tree_joc_huff_code_coarse_coeff_sparse;

/* Symbol: AC4DEC_oamd_framer_init */
/* Demangled: AC4DEC_oamd_framer_init */
int AC4DEC_oamd_framer_init(void);

/* Symbol: dlb_ac4dec_v2_dec_get_emdf_status */
/* Demangled: dlb_ac4dec_v2_dec_get_emdf_status */
int dlb_ac4dec_v2_dec_get_emdf_status(void);

/* Symbol: AC4DEC_evo_malloc */
/* Demangled: AC4DEC_evo_malloc */
int AC4DEC_evo_malloc(void);

/* Symbol: DLB_blk_Liir2ssL_set_coef */
/* Demangled: DLB_blk_Liir2ssL_set_coef */
int DLB_blk_Liir2ssL_set_coef(void);

/* Symbol: AC4DEC_tree_joc_huff_code_fine_generic */
/* Demangled: AC4DEC_tree_joc_huff_code_fine_generic */
extern void* AC4DEC_tree_joc_huff_code_fine_generic;

/* Symbol: DLB_r4_fft_64_s */
/* Demangled: DLB_r4_fft_64_s */
int DLB_r4_fft_64_s(void);

/* Symbol: AC4DEC_AA_NGCS_SEG_STEERING_5TO7CH */
/* Demangled: AC4DEC_AA_NGCS_SEG_STEERING_5TO7CH */
extern void* AC4DEC_AA_NGCS_SEG_STEERING_5TO7CH;

/* Symbol: AC4DEC_CHANNEL_MAP_520_0 */
/* Demangled: AC4DEC_CHANNEL_MAP_520_0 */
extern void* AC4DEC_CHANNEL_MAP_520_0;

/* Symbol: AC4DEC_IMS_BANDING_SCHEME_FDN_HR */
/* Demangled: AC4DEC_IMS_BANDING_SCHEME_FDN_HR */
extern void* AC4DEC_IMS_BANDING_SCHEME_FDN_HR;

/* Symbol: DLB_BLmpy_scaleBLSU_strict */
/* Demangled: DLB_BLmpy_scaleBLSU_strict */
int DLB_BLmpy_scaleBLSU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L768 */
/* Demangled: dlb_dct_twiddle_table16_1_L768 */
extern void* dlb_dct_twiddle_table16_1_L768;

/* Symbol: AC4DEC_AA_DIFFUSE_NO_DECORR_2TO4CH */
/* Demangled: AC4DEC_AA_DIFFUSE_NO_DECORR_2TO4CH */
extern void* AC4DEC_AA_DIFFUSE_NO_DECORR_2TO4CH;

/* Symbol: AC4DEC_A_NGCS_SEG_RANGE_2TO4CH */
/* Demangled: AC4DEC_A_NGCS_SEG_RANGE_2TO4CH */
extern void* AC4DEC_A_NGCS_SEG_RANGE_2TO4CH;

/* Symbol: AC4DEC_CHANNEL_MAP_520_1 */
/* Demangled: AC4DEC_CHANNEL_MAP_520_1 */
extern void* AC4DEC_CHANNEL_MAP_520_1;

/* Symbol: AC4DEC_mdct_to_qmf_query_mem */
/* Demangled: AC4DEC_mdct_to_qmf_query_mem */
int AC4DEC_mdct_to_qmf_query_mem(void);

/* Symbol: AC4DEC_oamd_common_data_non_iframe_apply */
/* Demangled: AC4DEC_oamd_common_data_non_iframe_apply */
int AC4DEC_oamd_common_data_non_iframe_apply(void);

/* Symbol: DLB_r4_fft_192_s */
/* Demangled: DLB_r4_fft_192_s */
int DLB_r4_fft_192_s(void);

/* Symbol: DLB_r4_fft_128 */
/* Demangled: DLB_r4_fft_128 */
int DLB_r4_fft_128(void);

/* Symbol: dlb_dct_twiddle_table16_L480 */
/* Demangled: dlb_dct_twiddle_table16_L480 */
extern void* dlb_dct_twiddle_table16_L480;

/* Symbol: AC4DEC_evo_get_md_validity_internal */
/* Demangled: AC4DEC_evo_get_md_validity_internal */
int AC4DEC_evo_get_md_validity_internal(void);

/* Symbol: AC4DEC_decoder_get_dialog_enhancement_limit */
/* Demangled: AC4DEC_decoder_get_dialog_enhancement_limit */
int AC4DEC_decoder_get_dialog_enhancement_limit(void);

/* Symbol: AC4DEC_ajoc_partial_process */
/* Demangled: AC4DEC_ajoc_partial_process */
int AC4DEC_ajoc_partial_process(void);

/* Symbol: AC4DEC_inv_quant_sfb */
/* Demangled: AC4DEC_inv_quant_sfb */
int AC4DEC_inv_quant_sfb(void);

/* Symbol: AC4DEC_tree_huff_code_ajcc_wet_fine_f0 */
/* Demangled: AC4DEC_tree_huff_code_ajcc_wet_fine_f0 */
extern void* AC4DEC_tree_huff_code_ajcc_wet_fine_f0;

/* Symbol: AC4DEC_speaker_config_position_get */
/* Demangled: AC4DEC_speaker_config_position_get */
int AC4DEC_speaker_config_position_get(void);

/* Symbol: AC4DEC_ac4toc_get_sgi_specifier */
/* Demangled: AC4DEC_ac4toc_get_sgi_specifier */
int AC4DEC_ac4toc_get_sgi_specifier(void);

/* Symbol: AC4DEC_decoder_set_drc_target_reference_level */
/* Demangled: AC4DEC_decoder_set_drc_target_reference_level */
int AC4DEC_decoder_set_drc_target_reference_level(void);

/* Symbol: AC4DEC_predictiontab */
/* Demangled: AC4DEC_predictiontab */
extern void* AC4DEC_predictiontab;

/* Symbol: AC4DEC_tree_huff_code_acpl_alpha_fine_f0 */
/* Demangled: AC4DEC_tree_huff_code_acpl_alpha_fine_f0 */
extern void* AC4DEC_tree_huff_code_acpl_alpha_fine_f0;

/* Symbol: DLB_Lmfb_p10km_synthesisCL_close */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_close */
int DLB_Lmfb_p10km_synthesisCL_close(void);

/* Symbol: AC4DEC_ac4dsp_Lpow2S */
/* Demangled: AC4DEC_ac4dsp_Lpow2S */
int AC4DEC_ac4dsp_Lpow2S(void);

/* Symbol: AC4DEC_tree_huff_code_ajcc_wet_fine_dt */
/* Demangled: AC4DEC_tree_huff_code_ajcc_wet_fine_dt */
extern void* AC4DEC_tree_huff_code_ajcc_wet_fine_dt;

/* Symbol: AC4DEC_arle_clear_state */
/* Demangled: AC4DEC_arle_clear_state */
int AC4DEC_arle_clear_state(void);

/* Symbol: AC4DEC_ajccdec_init_decorr */
/* Demangled: AC4DEC_ajccdec_init_decorr */
int AC4DEC_ajccdec_init_decorr(void);

/* Symbol: AC4DEC_de_il_open */
/* Demangled: AC4DEC_de_il_open */
int AC4DEC_de_il_open(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_alpha_fine_dt */
/* Demangled: AC4DEC_tree_huff_code_acpl_alpha_fine_dt */
extern void* AC4DEC_tree_huff_code_acpl_alpha_fine_dt;

/* Symbol: AC4DEC_tree_joc_huff_code_5ch_pos_idx_sparse */
/* Demangled: AC4DEC_tree_joc_huff_code_5ch_pos_idx_sparse */
extern void* AC4DEC_tree_joc_huff_code_5ch_pos_idx_sparse;

/* Symbol: AC4DEC_WindowKBD240_alpha3_0 */
/* Demangled: AC4DEC_WindowKBD240_alpha3_0 */
extern void* AC4DEC_WindowKBD240_alpha3_0;

/* Symbol: DLB_blk_Lattack_decay_iir1L_set_coef */
/* Demangled: DLB_blk_Lattack_decay_iir1L_set_coef */
int DLB_blk_Lattack_decay_iir1L_set_coef(void);

/* Symbol: DLB_MFB_P10KM_P64ATM301 */
/* Demangled: DLB_MFB_P10KM_P64ATM301 */
extern void* DLB_MFB_P10KM_P64ATM301;

/* Symbol: AC4DEC_WindowKBD384_alpha3_0 */
/* Demangled: AC4DEC_WindowKBD384_alpha3_0 */
extern void* AC4DEC_WindowKBD384_alpha3_0;

/* Symbol: dlb_blk_delay_setup_flex */
/* Demangled: dlb_blk_delay_setup_flex */
int dlb_blk_delay_setup_flex(void);

/* Symbol: DLB_vec_Lmask_rev_coefLSU_strict */
/* Demangled: DLB_vec_Lmask_rev_coefLSU_strict */
int DLB_vec_Lmask_rev_coefLSU_strict(void);

/* Symbol: AC4DEC_ac4dap_rhcqmf_init */
/* Demangled: AC4DEC_ac4dap_rhcqmf_init */
int AC4DEC_ac4dap_rhcqmf_init(void);

/* Symbol: AC4DEC_cch_get_seq_counter_increment */
/* Demangled: AC4DEC_cch_get_seq_counter_increment */
int AC4DEC_cch_get_seq_counter_increment(void);

/* Symbol: AC4DEC_emdf_reset_num_pl_substreams */
/* Demangled: AC4DEC_emdf_reset_num_pl_substreams */
int AC4DEC_emdf_reset_num_pl_substreams(void);

/* Symbol: dlb_dct_twiddle_table16_L576_1 */
/* Demangled: dlb_dct_twiddle_table16_L576_1 */
extern void* dlb_dct_twiddle_table16_L576_1;

/* Symbol: AC4DEC_skip_bits_forward */
/* Demangled: AC4DEC_skip_bits_forward */
int AC4DEC_skip_bits_forward(void);

/* Symbol: dlb_fft_inv_scl_576 */
/* Demangled: dlb_fft_inv_scl_576 */
int dlb_fft_inv_scl_576(void);

/* Symbol: dlb_dct_twiddle_table16_L576_2 */
/* Demangled: dlb_dct_twiddle_table16_L576_2 */
extern void* dlb_dct_twiddle_table16_L576_2;

/* Symbol: AC4DEC_ac_decode_target */
/* Demangled: AC4DEC_ac_decode_target */
int AC4DEC_ac_decode_target(void);

/* Symbol: AC4DEC_ltp_quant32_cdf */
/* Demangled: AC4DEC_ltp_quant32_cdf */
extern void* AC4DEC_ltp_quant32_cdf;

/* Symbol: dlb_dct_twiddle_table16_rev_L960 */
/* Demangled: dlb_dct_twiddle_table16_rev_L960 */
extern void* dlb_dct_twiddle_table16_rev_L960;

/* Symbol: dlb_fft_fwd_scl_384 */
/* Demangled: dlb_fft_fwd_scl_384 */
int dlb_fft_fwd_scl_384(void);

/* Symbol: AC4DEC_ac4dap_coefficients_find */
/* Demangled: AC4DEC_ac4dap_coefficients_find */
int AC4DEC_ac4dap_coefficients_find(void);

/* Symbol: AC4DEC_delay_init */
/* Demangled: AC4DEC_delay_init */
int AC4DEC_delay_init(void);

/* Symbol: AC4DEC_interpol_mult_DM_2ch */
/* Demangled: AC4DEC_interpol_mult_DM_2ch */
int AC4DEC_interpol_mult_DM_2ch(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj(void);

/* Symbol: AC4DEC_ac4dec_get_mono_pan_associated */
/* Demangled: AC4DEC_ac4dec_get_mono_pan_associated */
int AC4DEC_ac4dec_get_mono_pan_associated(void);

/* Symbol: DLB_hybrid_analysisCL_get_scale */
/* Demangled: DLB_hybrid_analysisCL_get_scale */
int DLB_hybrid_analysisCL_get_scale(void);

/* Symbol: AC4DEC_QEXT_BANDING_SCHEME_ANE_IN */
/* Demangled: AC4DEC_QEXT_BANDING_SCHEME_ANE_IN */
extern void* AC4DEC_QEXT_BANDING_SCHEME_ANE_IN;

/* Symbol: AC4DEC_ssfdec_env_decoder */
/* Demangled: AC4DEC_ssfdec_env_decoder */
int AC4DEC_ssfdec_env_decoder(void);

/* Symbol: AC4DEC_tree_huff_code_ajoc_dry_coarse_df */
/* Demangled: AC4DEC_tree_huff_code_ajoc_dry_coarse_df */
extern void* AC4DEC_tree_huff_code_ajoc_dry_coarse_df;

/* Symbol: AC4DEC_aspxdec_reset */
/* Demangled: AC4DEC_aspxdec_reset */
int AC4DEC_aspxdec_reset(void);

/* Symbol: AC4DEC_ims_il_open */
/* Demangled: AC4DEC_ims_il_open */
int AC4DEC_ims_il_open(void);

/* Symbol: DLB_blk_LclipL_strict */
/* Demangled: DLB_blk_LclipL_strict */
int DLB_blk_LclipL_strict(void);

/* Symbol: AC4DEC_ade_release_smooth_coeff_tab */
/* Demangled: AC4DEC_ade_release_smooth_coeff_tab */
extern void* AC4DEC_ade_release_smooth_coeff_tab;

/* Symbol: _ZN5dolby12DlbGenClass212icasecompareERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: dolby::DlbGenClass2::icasecompare(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5dolby12DlbGenClass212icasecompareERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: dlb_dct_twiddle_table16_L15_cos */
/* Demangled: dlb_dct_twiddle_table16_L15_cos */
extern void* dlb_dct_twiddle_table16_L15_cos;

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301 */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301 */
extern void* dlb_qmf_filter_coeff_P5_p64atm301;

/* Symbol: AC4DEC_ssfdec_spectrum_dec */
/* Demangled: AC4DEC_ssfdec_spectrum_dec */
int AC4DEC_ssfdec_spectrum_dec(void);

/* Symbol: dlb_fft_inv_usc_288 */
/* Demangled: dlb_fft_inv_usc_288 */
int dlb_fft_inv_usc_288(void);

/* Symbol: dlb_ac4dec_v2_dec_get_metadata_sample_offset */
/* Demangled: dlb_ac4dec_v2_dec_get_metadata_sample_offset */
int dlb_ac4dec_v2_dec_get_metadata_sample_offset(void);

/* Symbol: AC4DEC_get_further_loudness_info */
/* Demangled: AC4DEC_get_further_loudness_info */
int AC4DEC_get_further_loudness_info(void);

/* Symbol: AC4DEC_AP_LDN_SL_TABLE_PTRS */
/* Demangled: AC4DEC_AP_LDN_SL_TABLE_PTRS */
extern void* AC4DEC_AP_LDN_SL_TABLE_PTRS;

/* Symbol: AC4DEC_PA_NGCS_SEG_STEERING_2TO7CH */
/* Demangled: AC4DEC_PA_NGCS_SEG_STEERING_2TO7CH */
extern void* AC4DEC_PA_NGCS_SEG_STEERING_2TO7CH;

/* Symbol: dlb_CLshlCLUU_flex */
/* Demangled: dlb_CLshlCLUU_flex */
int dlb_CLshlCLUU_flex(void);

/* Symbol: AC4DEC_ajoc_de_mtx_calc */
/* Demangled: AC4DEC_ajoc_de_mtx_calc */
int AC4DEC_ajoc_de_mtx_calc(void);

/* Symbol: AC4DEC_imsdec_switch_fdn_opt */
/* Demangled: AC4DEC_imsdec_switch_fdn_opt */
int AC4DEC_imsdec_switch_fdn_opt(void);

/* Symbol: AC4DEC_ssf_update_f0 */
/* Demangled: AC4DEC_ssf_update_f0 */
int AC4DEC_ssf_update_f0(void);

/* Symbol: AC4DEC_framer_find_sync_word */
/* Demangled: AC4DEC_framer_find_sync_word */
int AC4DEC_framer_find_sync_word(void);

/* Symbol: AC4DEC_oamdi_duplicate */
/* Demangled: AC4DEC_oamdi_duplicate */
int AC4DEC_oamdi_duplicate(void);

/* Symbol: AC4DEC_oamdi_set_bed_object_defaults */
/* Demangled: AC4DEC_oamdi_set_bed_object_defaults */
int AC4DEC_oamdi_set_bed_object_defaults(void);

/* Symbol: dlb_blk_LcmpLL_flex */
/* Demangled: dlb_blk_LcmpLL_flex */
int dlb_blk_LcmpLL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L2 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L2 */
extern void* dlb_dct_twiddle_table16_rev_1_L2;

/* Symbol: dlb_dct_twiddle_table16_rev_L240 */
/* Demangled: dlb_dct_twiddle_table16_rev_L240 */
extern void* dlb_dct_twiddle_table16_rev_L240;

/* Symbol: AC4DEC_sbg_template_lowres_subsampled */
/* Demangled: AC4DEC_sbg_template_lowres_subsampled */
extern void* AC4DEC_sbg_template_lowres_subsampled;

/* Symbol: dlb_dct_twiddle_table16_L12_1 */
/* Demangled: dlb_dct_twiddle_table16_L12_1 */
extern void* dlb_dct_twiddle_table16_L12_1;

/* Symbol: dlb_dct_twiddle_table16_L960_1 */
/* Demangled: dlb_dct_twiddle_table16_L960_1 */
extern void* dlb_dct_twiddle_table16_L960_1;

/* Symbol: AC4DEC_imsdec_ims_de_band_config_set */
/* Demangled: AC4DEC_imsdec_ims_de_band_config_set */
int AC4DEC_imsdec_ims_de_band_config_set(void);

/* Symbol: dlb_cos_48_full_scl */
/* Demangled: dlb_cos_48_full_scl */
extern void* dlb_cos_48_full_scl;

/* Symbol: _ZN5dolby12Ac4DecClient14ac4dec_processEP19tAc4DecoderExternalPv */
/* Demangled: dolby::Ac4DecClient::ac4dec_process(tAc4DecoderExternal*, void*) */
int _ZN5dolby12Ac4DecClient14ac4dec_processEP19tAc4DecoderExternalPv(void);

/* Symbol: AC4DEC_ac4dap_fhcqmf_close */
/* Demangled: AC4DEC_ac4dap_fhcqmf_close */
int AC4DEC_ac4dap_fhcqmf_close(void);

/* Symbol: AC4DEC_arle_gain_smooth_init */
/* Demangled: AC4DEC_arle_gain_smooth_init */
int AC4DEC_arle_gain_smooth_init(void);

/* Symbol: AC4DEC_metadata_delay_input_get_previous_buffer */
/* Demangled: AC4DEC_metadata_delay_input_get_previous_buffer */
int AC4DEC_metadata_delay_input_get_previous_buffer(void);

/* Symbol: AC4DEC_ajocdec_parameter_set_update */
/* Demangled: AC4DEC_ajocdec_parameter_set_update */
int AC4DEC_ajocdec_parameter_set_update(void);

/* Symbol: dlb_dct_twiddle_table16_L12_2 */
/* Demangled: dlb_dct_twiddle_table16_L12_2 */
extern void* dlb_dct_twiddle_table16_L12_2;

/* Symbol: dlb_dct_twiddle_table16_L960_2 */
/* Demangled: dlb_dct_twiddle_table16_L960_2 */
extern void* dlb_dct_twiddle_table16_L960_2;

/* Symbol: AC4DEC_dvlim_get_latency */
/* Demangled: AC4DEC_dvlim_get_latency */
int AC4DEC_dvlim_get_latency(void);

/* Symbol: AC4DEC_evo_brw_skip */
/* Demangled: AC4DEC_evo_brw_skip */
int AC4DEC_evo_brw_skip(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L4 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L4 */
extern void* dlb_dct_twiddle_table16_rev_1_L4;

/* Symbol: AC4DEC_hp_height_reverb_process */
/* Demangled: AC4DEC_hp_height_reverb_process */
int AC4DEC_hp_height_reverb_process(void);

/* Symbol: AC4DEC_huffdec_set_tree */
/* Demangled: AC4DEC_huffdec_set_tree */
int AC4DEC_huffdec_set_tree(void);

/* Symbol: AC4DEC_dapil_close */
/* Demangled: AC4DEC_dapil_close */
int AC4DEC_dapil_close(void);

/* Symbol: AC4DEC_get_loudness_data_substream_type */
/* Demangled: AC4DEC_get_loudness_data_substream_type */
int AC4DEC_get_loudness_data_substream_type(void);

/* Symbol: DLB_blk_Liir1xL_strict */
/* Demangled: DLB_blk_Liir1xL_strict */
int DLB_blk_Liir1xL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L180 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L180 */
extern void* dlb_dct_twiddle_table16_rev_1_L180;

/* Symbol: DLB_r4_inv_fft_768 */
/* Demangled: DLB_r4_inv_fft_768 */
int DLB_r4_inv_fft_768(void);

/* Symbol: AC4DEC_decoder_get_dmx_info */
/* Demangled: AC4DEC_decoder_get_dmx_info */
int AC4DEC_decoder_get_dmx_info(void);

/* Symbol: AC4DEC_tree_huff_code_ajoc_dry_coarse_f0 */
/* Demangled: AC4DEC_tree_huff_code_ajoc_dry_coarse_f0 */
extern void* AC4DEC_tree_huff_code_ajoc_dry_coarse_f0;

/* Symbol: DLB_blk_Liir2ssefL_setup */
/* Demangled: DLB_blk_Liir2ssefL_setup */
int DLB_blk_Liir2ssefL_setup(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L12 */
/* Demangled: dlb_dct_twiddle_table16_rev_L12 */
extern void* dlb_dct_twiddle_table16_rev_L12;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L8 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L8 */
extern void* dlb_dct_twiddle_table16_rev_1_L8;

/* Symbol: DLB_r4_inv_fft_15_s */
/* Demangled: DLB_r4_inv_fft_15_s */
int DLB_r4_inv_fft_15_s(void);

/* Symbol: DLB_Sqmf_synthesisL */
/* Demangled: DLB_Sqmf_synthesisL */
int DLB_Sqmf_synthesisL(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_input_stage_process */
/* Demangled: AC4DEC_dlb_ac4dec_v1_input_stage_process */
int AC4DEC_dlb_ac4dec_v1_input_stage_process(void);

/* Symbol: AC4DEC_tree_huff_code_ajoc_dry_coarse_dt */
/* Demangled: AC4DEC_tree_huff_code_ajoc_dry_coarse_dt */
extern void* AC4DEC_tree_huff_code_ajoc_dry_coarse_dt;

/* Symbol: AC4DEC_obj_render_program_set */
/* Demangled: AC4DEC_obj_render_program_set */
int AC4DEC_obj_render_program_set(void);

/* Symbol: AC4DEC_A_ROOM_CONFIG_SPKS_BACK_FULL */
/* Demangled: AC4DEC_A_ROOM_CONFIG_SPKS_BACK_FULL */
extern void* AC4DEC_A_ROOM_CONFIG_SPKS_BACK_FULL;

/* Symbol: dlb_dct_twiddle_table16_rev_L15 */
/* Demangled: dlb_dct_twiddle_table16_rev_L15 */
extern void* dlb_dct_twiddle_table16_rev_L15;

/* Symbol: _ZN5dolby16Ac4DynamicConfigC2Ev */
/* Demangled: dolby::Ac4DynamicConfig::Ac4DynamicConfig() */
int _ZN5dolby16Ac4DynamicConfigC2Ev(void);

/* Symbol: AC4DEC_ade_il_dialogue_extract */
/* Demangled: AC4DEC_ade_il_dialogue_extract */
int AC4DEC_ade_il_dialogue_extract(void);

/* Symbol: AC4DEC_evo_get_payload_info */
/* Demangled: AC4DEC_evo_get_payload_info */
int AC4DEC_evo_get_payload_info(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L16 */
/* Demangled: dlb_dct_twiddle_table16_rev_L16 */
extern void* dlb_dct_twiddle_table16_rev_L16;

/* Symbol: DLB_r4_fft_256_s */
/* Demangled: DLB_r4_fft_256_s */
int DLB_r4_fft_256_s(void);

/* Symbol: AC4DEC_ac4dap_close */
/* Demangled: AC4DEC_ac4dap_close */
int AC4DEC_ac4dap_close(void);

/* Symbol: AC4DEC_enable_predictor */
/* Demangled: AC4DEC_enable_predictor */
int AC4DEC_enable_predictor(void);

/* Symbol: AC4DEC_tree_huff_code_ajcc_dry_fine_df */
/* Demangled: AC4DEC_tree_huff_code_ajcc_dry_fine_df */
extern void* AC4DEC_tree_huff_code_ajcc_dry_fine_df;

/* Symbol: AC4DEC_legq_generic_process */
/* Demangled: AC4DEC_legq_generic_process */
int AC4DEC_legq_generic_process(void);

/* Symbol: AC4DEC_ajocdec_core_alloc_dynamic */
/* Demangled: AC4DEC_ajocdec_core_alloc_dynamic */
int AC4DEC_ajocdec_core_alloc_dynamic(void);

/* Symbol: AC4DEC_cch_open */
/* Demangled: AC4DEC_cch_open */
int AC4DEC_cch_open(void);

/* Symbol: AC4DEC_decoder_set_ajoc_core_decode */
/* Demangled: AC4DEC_decoder_set_ajoc_core_decode */
int AC4DEC_decoder_set_ajoc_core_decode(void);

/* Symbol: AC4DEC_ajccdec_query_mem */
/* Demangled: AC4DEC_ajccdec_query_mem */
int AC4DEC_ajccdec_query_mem(void);

/* Symbol: AC4DEC_expd_init */
/* Demangled: AC4DEC_expd_init */
int AC4DEC_expd_init(void);

/* Symbol: AC4DEC_imsdec_user_de_gain_set */
/* Demangled: AC4DEC_imsdec_user_de_gain_set */
int AC4DEC_imsdec_user_de_gain_set(void);

/* Symbol: AC4DEC_a_isf_bh_9_5_0_0_decode */
/* Demangled: AC4DEC_a_isf_bh_9_5_0_0_decode */
extern void* AC4DEC_a_isf_bh_9_5_0_0_decode;

/* Symbol: DLB_r4_inv_fft_1024 */
/* Demangled: DLB_r4_inv_fft_1024 */
int DLB_r4_inv_fft_1024(void);

/* Symbol: DLB_r4_inv_fft_32_s */
/* Demangled: DLB_r4_inv_fft_32_s */
int DLB_r4_inv_fft_32_s(void);

/* Symbol: dlb_fft_inv_usc_640 */
/* Demangled: dlb_fft_inv_usc_640 */
int dlb_fft_inv_usc_640(void);

/* Symbol: AC4DEC_expd_gains_1ch_apply */
/* Demangled: AC4DEC_expd_gains_1ch_apply */
int AC4DEC_expd_gains_1ch_apply(void);

/* Symbol: AC4DEC_a_isf_bh_3_1_0_0_decode */
/* Demangled: AC4DEC_a_isf_bh_3_1_0_0_decode */
extern void* AC4DEC_a_isf_bh_3_1_0_0_decode;

/* Symbol: dlb_cos_64_full */
/* Demangled: dlb_cos_64_full */
extern void* dlb_cos_64_full;

/* Symbol: AC4DEC_de_process */
/* Demangled: AC4DEC_de_process */
int AC4DEC_de_process(void);

/* Symbol: AC4DEC_slopes_lin_to_db */
/* Demangled: AC4DEC_slopes_lin_to_db */
extern void* AC4DEC_slopes_lin_to_db;

/* Symbol: dlb_blk_LintegrateL_flex */
/* Demangled: dlb_blk_LintegrateL_flex */
int dlb_blk_LintegrateL_flex(void);

/* Symbol: DLB_CLdivCLCLU_strict */
/* Demangled: DLB_CLdivCLCLU_strict */
int DLB_CLdivCLCLU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L360 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L360 */
extern void* dlb_dct_twiddle_table16_rev_1_L360;

/* Symbol: AC4DEC_de_get_interp_scale */
/* Demangled: AC4DEC_de_get_interp_scale */
int AC4DEC_de_get_interp_scale(void);

/* Symbol: DLB_r4_fft_2 */
/* Demangled: DLB_r4_fft_2 */
int DLB_r4_fft_2(void);

/* Symbol: AC4DEC_get_num_sfb */
/* Demangled: AC4DEC_get_num_sfb */
int AC4DEC_get_num_sfb(void);

/* Symbol: dlb_dct_twiddle_table16_L120 */
/* Demangled: dlb_dct_twiddle_table16_L120 */
extern void* dlb_dct_twiddle_table16_L120;

/* Symbol: DLB_r4_inv_fft_320_s */
/* Demangled: DLB_r4_inv_fft_320_s */
int DLB_r4_inv_fft_320_s(void);

/* Symbol: DLB_r4_inv_fft_45_s */
/* Demangled: DLB_r4_inv_fft_45_s */
int DLB_r4_inv_fft_45_s(void);

/* Symbol: AC4DEC_ac4dap_speaker_virtualizer_init */
/* Demangled: AC4DEC_ac4dap_speaker_virtualizer_init */
int AC4DEC_ac4dap_speaker_virtualizer_init(void);

/* Symbol: DLB_r4_fft_4 */
/* Demangled: DLB_r4_fft_4 */
int DLB_r4_fft_4(void);

/* Symbol: dlb_ac4dec_v2_dec_set_main_associate_mixing_preference */
/* Demangled: dlb_ac4dec_v2_dec_set_main_associate_mixing_preference */
int dlb_ac4dec_v2_dec_set_main_associate_mixing_preference(void);

/* Symbol: AC4DEC_delay_line_peek_indirect */
/* Demangled: AC4DEC_delay_line_peek_indirect */
int AC4DEC_delay_line_peek_indirect(void);

/* Symbol: DLB_hybrid_synthesisCL_query_mem */
/* Demangled: DLB_hybrid_synthesisCL_query_mem */
int DLB_hybrid_synthesisCL_query_mem(void);

/* Symbol: dlb_dct_twiddle_table16_L320_cos */
/* Demangled: dlb_dct_twiddle_table16_L320_cos */
extern void* dlb_dct_twiddle_table16_L320_cos;

/* Symbol: AC4DEC_a_b_indices */
/* Demangled: AC4DEC_a_b_indices */
extern void* AC4DEC_a_b_indices;

/* Symbol: dlb_BLsaddBLL_flex */
/* Demangled: dlb_BLsaddBLL_flex */
int dlb_BLsaddBLL_flex(void);

/* Symbol: DLB_r4_fft_6 */
/* Demangled: DLB_r4_fft_6 */
int DLB_r4_fft_6(void);

/* Symbol: _ZN7android10AC4Decoder21onPortEnableCompletedEjb */
/* Demangled: android::AC4Decoder::onPortEnableCompleted(unsigned int, bool) */
int _ZN7android10AC4Decoder21onPortEnableCompletedEjb(void);

/* Symbol: AC4DEC_ac4dap_fhcqmf_query_scratch */
/* Demangled: AC4DEC_ac4dap_fhcqmf_query_scratch */
int AC4DEC_ac4dap_fhcqmf_query_scratch(void);

/* Symbol: AC4DEC_WindowKBD512 */
/* Demangled: AC4DEC_WindowKBD512 */
extern void* AC4DEC_WindowKBD512;

/* Symbol: AC4DEC_dap_mathlib_LfastrecipL */
/* Demangled: AC4DEC_dap_mathlib_LfastrecipL */
int AC4DEC_dap_mathlib_LfastrecipL(void);

/* Symbol: DLB_MFB_P10KM_P4_319SC_256M */
/* Demangled: DLB_MFB_P10KM_P4_319SC_256M */
extern void* DLB_MFB_P10KM_P4_319SC_256M;

/* Symbol: AC4DEC_tree_huff_code_ajcc_dry_fine_f0 */
/* Demangled: AC4DEC_tree_huff_code_ajcc_dry_fine_f0 */
extern void* AC4DEC_tree_huff_code_ajcc_dry_fine_f0;

/* Symbol: DLB_r4_fft_640_s */
/* Demangled: DLB_r4_fft_640_s */
int DLB_r4_fft_640_s(void);

/* Symbol: DLB_r4_fft_8 */
/* Demangled: DLB_r4_fft_8 */
int DLB_r4_fft_8(void);

/* Symbol: AC4DEC_de_il_process */
/* Demangled: AC4DEC_de_il_process */
int AC4DEC_de_il_process(void);

/* Symbol: dlb_dct_twiddle_table16_L72_1 */
/* Demangled: dlb_dct_twiddle_table16_L72_1 */
extern void* dlb_dct_twiddle_table16_L72_1;

/* Symbol: AC4DEC_rsrcdec_coeff_num_per_phase_tab */
/* Demangled: AC4DEC_rsrcdec_coeff_num_per_phase_tab */
extern void* AC4DEC_rsrcdec_coeff_num_per_phase_tab;

/* Symbol: AC4DEC_a_isf_bh_9_5_0_0_reorder */
/* Demangled: AC4DEC_a_isf_bh_9_5_0_0_reorder */
extern void* AC4DEC_a_isf_bh_9_5_0_0_reorder;

/* Symbol: DLB_r4_inv_fft_160_s */
/* Demangled: DLB_r4_inv_fft_160_s */
int DLB_r4_inv_fft_160_s(void);

/* Symbol: DLB_r4_fft_4096_s */
/* Demangled: DLB_r4_fft_4096_s */
int DLB_r4_fft_4096_s(void);

/* Symbol: AC4DEC_ac4toc_get_presentation_info_pvt */
/* Demangled: AC4DEC_ac4toc_get_presentation_info_pvt */
int AC4DEC_ac4toc_get_presentation_info_pvt(void);

/* Symbol: AC4DEC_cx_allpass_process */
/* Demangled: AC4DEC_cx_allpass_process */
int AC4DEC_cx_allpass_process(void);

/* Symbol: dlb_dct_twiddle_table16_L72_2 */
/* Demangled: dlb_dct_twiddle_table16_L72_2 */
extern void* dlb_dct_twiddle_table16_L72_2;

/* Symbol: AC4DEC_tree_huff_code_ajcc_dry_fine_dt */
/* Demangled: AC4DEC_tree_huff_code_ajcc_dry_fine_dt */
extern void* AC4DEC_tree_huff_code_ajcc_dry_fine_dt;

/* Symbol: AC4DEC_a_isf_bh_7_5_3_0_reorder */
/* Demangled: AC4DEC_a_isf_bh_7_5_3_0_reorder */
extern void* AC4DEC_a_isf_bh_7_5_3_0_reorder;

/* Symbol: AC4DEC_evo_combine_md_sets */
/* Demangled: AC4DEC_evo_combine_md_sets */
int AC4DEC_evo_combine_md_sets(void);

/* Symbol: AC4DEC_AA_NGCS_SEG_CHANNELS_2TO5CH */
/* Demangled: AC4DEC_AA_NGCS_SEG_CHANNELS_2TO5CH */
extern void* AC4DEC_AA_NGCS_SEG_CHANNELS_2TO5CH;

/* Symbol: AC4DEC_ac4dec_get_external_frame_rate_index */
/* Demangled: AC4DEC_ac4dec_get_external_frame_rate_index */
int AC4DEC_ac4dec_get_external_frame_rate_index(void);

/* Symbol: dlb_dct_twiddle_table16_L128 */
/* Demangled: dlb_dct_twiddle_table16_L128 */
extern void* dlb_dct_twiddle_table16_L128;

/* Symbol: AC4DEC_ssf_create_c */
/* Demangled: AC4DEC_ssf_create_c */
int AC4DEC_ssf_create_c(void);

/* Symbol: AC4DEC_evo_get_md_validity_md_set */
/* Demangled: AC4DEC_evo_get_md_validity_md_set */
int AC4DEC_evo_get_md_validity_md_set(void);

/* Symbol: AC4DEC_bm_channel_assignment_init */
/* Demangled: AC4DEC_bm_channel_assignment_init */
int AC4DEC_bm_channel_assignment_init(void);

/* Symbol: dlb_dct_twiddle_table16_L8_1 */
/* Demangled: dlb_dct_twiddle_table16_L8_1 */
extern void* dlb_dct_twiddle_table16_L8_1;

/* Symbol: AC4DEC_dap_mathlib_clvecdl_clear */
/* Demangled: AC4DEC_dap_mathlib_clvecdl_clear */
int AC4DEC_dap_mathlib_clvecdl_clear(void);

/* Symbol: dlb_dct_twiddle_table16_L8_2 */
/* Demangled: dlb_dct_twiddle_table16_L8_2 */
extern void* dlb_dct_twiddle_table16_L8_2;

/* Symbol: AC4DEC_post_gain_sqrt_tab */
/* Demangled: AC4DEC_post_gain_sqrt_tab */
extern void* AC4DEC_post_gain_sqrt_tab;

/* Symbol: AC4DEC_ap_dvlim_coefs_32 */
/* Demangled: AC4DEC_ap_dvlim_coefs_32 */
extern void* AC4DEC_ap_dvlim_coefs_32;

/* Symbol: AC4DEC_delay_line_reset */
/* Demangled: AC4DEC_delay_line_reset */
int AC4DEC_delay_line_reset(void);

/* Symbol: DLB_r4_fft_480_s */
/* Demangled: DLB_r4_fft_480_s */
int DLB_r4_fft_480_s(void);

/* Symbol: _ZTVN5dolby12DlbGenClass2E */
/* Demangled: vtable for dolby::DlbGenClass2 */
extern void* _ZTVN5dolby12DlbGenClass2E;

/* Symbol: AC4DEC_oamdi_has_oa_element_bed_object */
/* Demangled: AC4DEC_oamdi_has_oa_element_bed_object */
int AC4DEC_oamdi_has_oa_element_bed_object(void);

/* Symbol: dlb_ac4dec_v2_dec_get_dmx_info */
/* Demangled: dlb_ac4dec_v2_dec_get_dmx_info */
int dlb_ac4dec_v2_dec_get_dmx_info(void);

/* Symbol: AC4DEC_dapil_set_default_config */
/* Demangled: AC4DEC_dapil_set_default_config */
int AC4DEC_dapil_set_default_config(void);

/* Symbol: AC4DEC_size_panner_fade_out_sources_inside */
/* Demangled: AC4DEC_size_panner_fade_out_sources_inside */
int AC4DEC_size_panner_fade_out_sources_inside(void);

/* Symbol: dlb_dctII_scaled */
/* Demangled: dlb_dctII_scaled */
int dlb_dctII_scaled(void);

/* Symbol: DLB_r4_fft_2048_s */
/* Demangled: DLB_r4_fft_2048_s */
int DLB_r4_fft_2048_s(void);

/* Symbol: _ZN7android10AC4Decoder13xFerAC4TablesE21tAc4DecoderTblParam_tPhS2_S2_ */
/* Demangled: android::AC4Decoder::xFerAC4Tables(tAc4DecoderTblParam_t, unsigned char*, unsigned char*, unsigned char*) */
int _ZN7android10AC4Decoder13xFerAC4TablesE21tAc4DecoderTblParam_tPhS2_S2_(void);

/* Symbol: AC4DEC_ade_il_close */
/* Demangled: AC4DEC_ade_il_close */
int AC4DEC_ade_il_close(void);

/* Symbol: AC4DEC_cch_close */
/* Demangled: AC4DEC_cch_close */
int AC4DEC_cch_close(void);

/* Symbol: AC4DEC_expd_gains_1ch_calc */
/* Demangled: AC4DEC_expd_gains_1ch_calc */
int AC4DEC_expd_gains_1ch_calc(void);

/* Symbol: DLB_blk_Lmix_shlULLLL_strict */
/* Demangled: DLB_blk_Lmix_shlULLLL_strict */
int DLB_blk_Lmix_shlULLLL_strict(void);

/* Symbol: AC4DEC_dap_mathlib_clvec_CLmpyCLSIU_inplace_strict */
/* Demangled: AC4DEC_dap_mathlib_clvec_CLmpyCLSIU_inplace_strict */
int AC4DEC_dap_mathlib_clvec_CLmpyCLSIU_inplace_strict(void);

/* Symbol: AC4DEC_interpol_mult_UM_1ch_no_decorr */
/* Demangled: AC4DEC_interpol_mult_UM_1ch_no_decorr */
int AC4DEC_interpol_mult_UM_1ch_no_decorr(void);

/* Symbol: AC4DEC_WindowKBD192_alpha3_0 */
/* Demangled: AC4DEC_WindowKBD192_alpha3_0 */
extern void* AC4DEC_WindowKBD192_alpha3_0;

/* Symbol: AC4DEC_oamdi_has_oa_element_headphone */
/* Demangled: AC4DEC_oamdi_has_oa_element_headphone */
int AC4DEC_oamdi_has_oa_element_headphone(void);

/* Symbol: DLB_vec_LshlLIU_strict */
/* Demangled: DLB_vec_LshlLIU_strict */
int DLB_vec_LshlLIU_strict(void);

/* Symbol: _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE */
/* Demangled: vtable for android::Vector<android::SimpleSoftOMXComponent::PortInfo> */
extern void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE;

/* Symbol: AC4DEC_ims_il_ims_substream_idx_get */
/* Demangled: AC4DEC_ims_il_ims_substream_idx_get */
int AC4DEC_ims_il_ims_substream_idx_get(void);

/* Symbol: dlb_cvec_Lmpy_conjLLIU_flex */
/* Demangled: dlb_cvec_Lmpy_conjLLIU_flex */
int dlb_cvec_Lmpy_conjLLIU_flex(void);

/* Symbol: AC4DEC_ac4framer_open */
/* Demangled: AC4DEC_ac4framer_open */
int AC4DEC_ac4framer_open(void);

/* Symbol: AC4DEC_fboar_query_scratch */
/* Demangled: AC4DEC_fboar_query_scratch */
int AC4DEC_fboar_query_scratch(void);

/* Symbol: AC4DEC_ims_il_reset */
/* Demangled: AC4DEC_ims_il_reset */
int AC4DEC_ims_il_reset(void);

/* Symbol: AC4DEC_WindowKBD48_alpha6_0 */
/* Demangled: AC4DEC_WindowKBD48_alpha6_0 */
extern void* AC4DEC_WindowKBD48_alpha6_0;

/* Symbol: DLB_blk_LLdeshuffleLL_inplace_strict */
/* Demangled: DLB_blk_LLdeshuffleLL_inplace_strict */
int DLB_blk_LLdeshuffleLL_inplace_strict(void);

/* Symbol: dlb_fft_inv_scl_768 */
/* Demangled: dlb_fft_inv_scl_768 */
int dlb_fft_inv_scl_768(void);

/* Symbol: AC4DEC_ngcs_stats_init */
/* Demangled: AC4DEC_ngcs_stats_init */
int AC4DEC_ngcs_stats_init(void);

/* Symbol: dlb_fft_fwd_scl_576 */
/* Demangled: dlb_fft_fwd_scl_576 */
int dlb_fft_fwd_scl_576(void);

/* Symbol: dlb_fft_fwd_scl_2 */
/* Demangled: dlb_fft_fwd_scl_2 */
int dlb_fft_fwd_scl_2(void);

/* Symbol: AC4DEC_dvlim_set_enable */
/* Demangled: AC4DEC_dvlim_set_enable */
int AC4DEC_dvlim_set_enable(void);

/* Symbol: AC4DEC_dap_mathlib_Ppow4LP */
/* Demangled: AC4DEC_dap_mathlib_Ppow4LP */
int AC4DEC_dap_mathlib_Ppow4LP(void);

/* Symbol: AC4DEC_size_panner_get_gains */
/* Demangled: AC4DEC_size_panner_get_gains */
int AC4DEC_size_panner_get_gains(void);

/* Symbol: DLB_blk_LminLL_strict */
/* Demangled: DLB_blk_LminLL_strict */
int DLB_blk_LminLL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L192 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L192 */
extern void* dlb_dct_twiddle_table16_rev_1_L192;

/* Symbol: dlb_fft_fwd_scl_4 */
/* Demangled: dlb_fft_fwd_scl_4 */
int dlb_fft_fwd_scl_4(void);

/* Symbol: AC4DEC_evo_unpack_payloads */
/* Demangled: AC4DEC_evo_unpack_payloads */
int AC4DEC_evo_unpack_payloads(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L720 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L720 */
extern void* dlb_dct_twiddle_table16_rev_1_L720;

/* Symbol: dlb_dct_twiddle_table16_rev_L256 */
/* Demangled: dlb_dct_twiddle_table16_rev_L256 */
extern void* dlb_dct_twiddle_table16_rev_L256;

/* Symbol: DLB_r4_inv_fft_1024_s */
/* Demangled: DLB_r4_inv_fft_1024_s */
int DLB_r4_inv_fft_1024_s(void);

/* Symbol: DLB_blk_Liir2ssv1_dsmpL_strict */
/* Demangled: DLB_blk_Liir2ssv1_dsmpL_strict */
int DLB_blk_Liir2ssv1_dsmpL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L24 */
/* Demangled: dlb_dct_twiddle_table16_rev_L24 */
extern void* dlb_dct_twiddle_table16_rev_L24;

/* Symbol: dlb_fft_fwd_scl_6 */
/* Demangled: dlb_fft_fwd_scl_6 */
int dlb_fft_fwd_scl_6(void);

/* Symbol: AC4DEC_lvl_constrain_drc_scale */
/* Demangled: AC4DEC_lvl_constrain_drc_scale */
int AC4DEC_lvl_constrain_drc_scale(void);

/* Symbol: AC4DEC_ac4dec_input_stage_set_default_toc_values */
/* Demangled: AC4DEC_ac4dec_input_stage_set_default_toc_values */
int AC4DEC_ac4dec_input_stage_set_default_toc_values(void);

/* Symbol: AC4DEC_dvlim_query_memory */
/* Demangled: AC4DEC_dvlim_query_memory */
int AC4DEC_dvlim_query_memory(void);

/* Symbol: AC4DEC_dlb_bitbuf_safe_read_long */
/* Demangled: AC4DEC_dlb_bitbuf_safe_read_long */
int AC4DEC_dlb_bitbuf_safe_read_long(void);

/* Symbol: DLB_unload_mfb_p10km_analysisL_filter_state */
/* Demangled: DLB_unload_mfb_p10km_analysisL_filter_state */
int DLB_unload_mfb_p10km_analysisL_filter_state(void);

/* Symbol: AC4DEC_oamdi_to_bitstream */
/* Demangled: AC4DEC_oamdi_to_bitstream */
int AC4DEC_oamdi_to_bitstream(void);

/* Symbol: dlb_fft_fwd_scl_8 */
/* Demangled: dlb_fft_fwd_scl_8 */
int dlb_fft_fwd_scl_8(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_output_stage_close */
/* Demangled: AC4DEC_dlb_ac4dec_v1_output_stage_close */
int AC4DEC_dlb_ac4dec_v1_output_stage_close(void);

/* Symbol: DLB_VLsquaredmagCLIU_strict */
/* Demangled: DLB_VLsquaredmagCLIU_strict */
int DLB_VLsquaredmagCLIU_strict(void);

/* Symbol: DLB_r4_fft_144 */
/* Demangled: DLB_r4_fft_144 */
int DLB_r4_fft_144(void);

/* Symbol: _ZN7android10AC4Decoder4stopEv */
/* Demangled: android::AC4Decoder::stop() */
int _ZN7android10AC4Decoder4stopEv(void);

/* Symbol: AC4DEC_dlb_bitbuf_read */
/* Demangled: AC4DEC_dlb_bitbuf_read */
int AC4DEC_dlb_bitbuf_read(void);

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_3_0 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_3_0 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_3_0;

/* Symbol: AC4DEC_ajocdec_ajoc_de_max_gain_db_get */
/* Demangled: AC4DEC_ajocdec_ajoc_de_max_gain_db_get */
int AC4DEC_ajocdec_ajoc_de_max_gain_db_get(void);

/* Symbol: AC4DEC_oamdi_get_oa_element_headphone */
/* Demangled: AC4DEC_oamdi_get_oa_element_headphone */
int AC4DEC_oamdi_get_oa_element_headphone(void);

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_3_1 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_3_1 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_3_1;

/* Symbol: dlb_ac4dec_v2_dec_get_dialog_enhancement_gain */
/* Demangled: dlb_ac4dec_v2_dec_get_dialog_enhancement_gain */
int dlb_ac4dec_v2_dec_get_dialog_enhancement_gain(void);

/* Symbol: AC4DEC_compute_tna_filter_coefficients */
/* Demangled: AC4DEC_compute_tna_filter_coefficients */
int AC4DEC_compute_tna_filter_coefficients(void);

/* Symbol: AC4DEC_rsrc_query_mem */
/* Demangled: AC4DEC_rsrc_query_mem */
int AC4DEC_rsrc_query_mem(void);

/* Symbol: AC4DEC_oamdi_get_bitstream_size */
/* Demangled: AC4DEC_oamdi_get_bitstream_size */
int AC4DEC_oamdi_get_bitstream_size(void);

/* Symbol: dlb_blk_Lmix_shlULLLL_flex */
/* Demangled: dlb_blk_Lmix_shlULLLL_flex */
int dlb_blk_Lmix_shlULLLL_flex(void);

/* Symbol: _dlb_ldct2_unscaled_iplu */
/* Demangled: _dlb_ldct2_unscaled_iplu */
int _dlb_ldct2_unscaled_iplu(void);

/* Symbol: DLB_r4_fft_36_s */
/* Demangled: DLB_r4_fft_36_s */
int DLB_r4_fft_36_s(void);

/* Symbol: dlb_fft_fwd_usc_288 */
/* Demangled: dlb_fft_fwd_usc_288 */
int dlb_fft_fwd_usc_288(void);

/* Symbol: _ZN5dolby12DlbGenClass2C2Ev */
/* Demangled: dolby::DlbGenClass2::DlbGenClass2() */
int _ZN5dolby12DlbGenClass2C2Ev(void);

/* Symbol: AC4DEC_sf_open */
/* Demangled: AC4DEC_sf_open */
int AC4DEC_sf_open(void);

/* Symbol: AC4DEC_metadata_delay_get_max_num_elements */
/* Demangled: AC4DEC_metadata_delay_get_max_num_elements */
int AC4DEC_metadata_delay_get_max_num_elements(void);

/* Symbol: DLB_blk_LcmpLL_strict */
/* Demangled: DLB_blk_LcmpLL_strict */
int DLB_blk_LcmpLL_strict(void);

/* Symbol: AC4DEC_dap_mathlib_LpowinvLP */
/* Demangled: AC4DEC_dap_mathlib_LpowinvLP */
int AC4DEC_dap_mathlib_LpowinvLP(void);

/* Symbol: AC4DEC_acpldec_2ch_init */
/* Demangled: AC4DEC_acpldec_2ch_init */
int AC4DEC_acpldec_2ch_init(void);

/* Symbol: AC4DEC_ajoc_mdd_generate_dummy_de_data */
/* Demangled: AC4DEC_ajoc_mdd_generate_dummy_de_data */
int AC4DEC_ajoc_mdd_generate_dummy_de_data(void);

/* Symbol: DLB_qmf_synthesisS_close */
/* Demangled: DLB_qmf_synthesisS_close */
int DLB_qmf_synthesisS_close(void);

/* Symbol: AC4DEC_ac4dec_input_stage_count_mem */
/* Demangled: AC4DEC_ac4dec_input_stage_count_mem */
int AC4DEC_ac4dec_input_stage_count_mem(void);

/* Symbol: AC4DEC_oaril_open */
/* Demangled: AC4DEC_oaril_open */
int AC4DEC_oaril_open(void);

/* Symbol: DLB_r4_fft_40_s */
/* Demangled: DLB_r4_fft_40_s */
int DLB_r4_fft_40_s(void);

/* Symbol: DLB_r4_fft_8_s */
/* Demangled: DLB_r4_fft_8_s */
int DLB_r4_fft_8_s(void);

/* Symbol: AC4DEC_ac4toc_reader_get_emdf_info */
/* Demangled: AC4DEC_ac4toc_reader_get_emdf_info */
int AC4DEC_ac4toc_reader_get_emdf_info(void);

/* Symbol: dlb_dct_twiddle_table16_1_L960 */
/* Demangled: dlb_dct_twiddle_table16_1_L960 */
extern void* dlb_dct_twiddle_table16_1_L960;

/* Symbol: AC4DEC_dlb_bitbuf_get_abs_pos */
/* Demangled: AC4DEC_dlb_bitbuf_get_abs_pos */
int AC4DEC_dlb_bitbuf_get_abs_pos(void);

/* Symbol: AC4DEC_ldn_specific_loudness_transform */
/* Demangled: AC4DEC_ldn_specific_loudness_transform */
int AC4DEC_ldn_specific_loudness_transform(void);

/* Symbol: AC4DEC_aspx_dequantize_sig_1ch */
/* Demangled: AC4DEC_aspx_dequantize_sig_1ch */
int AC4DEC_aspx_dequantize_sig_1ch(void);

/* Symbol: AC4DEC_ac4dec_get_acpl_data_index */
/* Demangled: AC4DEC_ac4dec_get_acpl_data_index */
int AC4DEC_ac4dec_get_acpl_data_index(void);

/* Symbol: dlb_ac4dec_v2_dec_get_active_channel_config */
/* Demangled: dlb_ac4dec_v2_dec_get_active_channel_config */
int dlb_ac4dec_v2_dec_get_active_channel_config(void);

/* Symbol: AC4DEC_shared_mem_alloc */
/* Demangled: AC4DEC_shared_mem_alloc */
int AC4DEC_shared_mem_alloc(void);

/* Symbol: AC4DEC_loudness_info_init */
/* Demangled: AC4DEC_loudness_info_init */
int AC4DEC_loudness_info_init(void);

/* Symbol: AC4DEC_WindowKBD2048 */
/* Demangled: AC4DEC_WindowKBD2048 */
extern void* AC4DEC_WindowKBD2048;

/* Symbol: AC4DEC_dvlim_set_target_gain */
/* Demangled: AC4DEC_dvlim_set_target_gain */
int AC4DEC_dvlim_set_target_gain(void);

/* Symbol: AC4DEC_oamdi_get_object_dialog_indication */
/* Demangled: AC4DEC_oamdi_get_object_dialog_indication */
int AC4DEC_oamdi_get_object_dialog_indication(void);

/* Symbol: DLB_r4_fft_320 */
/* Demangled: DLB_r4_fft_320 */
int DLB_r4_fft_320(void);

/* Symbol: _ZN5dolby12DlbGenClass25checkEv */
/* Demangled: dolby::DlbGenClass2::check() */
int _ZN5dolby12DlbGenClass25checkEv(void);

/* Symbol: AC4DEC_P_NGCS_SEG_RANGE_2TO5CH */
/* Demangled: AC4DEC_P_NGCS_SEG_RANGE_2TO5CH */
extern void* AC4DEC_P_NGCS_SEG_RANGE_2TO5CH;

/* Symbol: AC4DEC_surround_compressor_compute_gain */
/* Demangled: AC4DEC_surround_compressor_compute_gain */
int AC4DEC_surround_compressor_compute_gain(void);

/* Symbol: AC4DEC_ac4toc_set_substream_signal_representation */
/* Demangled: AC4DEC_ac4toc_set_substream_signal_representation */
int AC4DEC_ac4toc_set_substream_signal_representation(void);

/* Symbol: AC4DEC_delay_line_init */
/* Demangled: AC4DEC_delay_line_init */
int AC4DEC_delay_line_init(void);

/* Symbol: AC4DEC_ac4dap_speaker_virtualizer_process */
/* Demangled: AC4DEC_ac4dap_speaker_virtualizer_process */
int AC4DEC_ac4dap_speaker_virtualizer_process(void);

/* Symbol: AC4DEC_aspxdec_open */
/* Demangled: AC4DEC_aspxdec_open */
int AC4DEC_aspxdec_open(void);

/* Symbol: AC4DEC_ssf_ext_find_nt */
/* Demangled: AC4DEC_ssf_ext_find_nt */
int AC4DEC_ssf_ext_find_nt(void);

/* Symbol: dlb_ac4dec_v2_dec_set_limiter_enable */
/* Demangled: dlb_ac4dec_v2_dec_set_limiter_enable */
int dlb_ac4dec_v2_dec_set_limiter_enable(void);

/* Symbol: AC4DEC_sv_dual_end_update */
/* Demangled: AC4DEC_sv_dual_end_update */
int AC4DEC_sv_dual_end_update(void);

/* Symbol: AC4DEC_sv_dual_end_xtc_deq_slot_process */
/* Demangled: AC4DEC_sv_dual_end_xtc_deq_slot_process */
int AC4DEC_sv_dual_end_xtc_deq_slot_process(void);

/* Symbol: AC4DEC_dlb_bitbuf_write_long */
/* Demangled: AC4DEC_dlb_bitbuf_write_long */
int AC4DEC_dlb_bitbuf_write_long(void);

/* Symbol: AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_130_X_ON_10 */
/* Demangled: AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_130_X_ON_10 */
extern void* AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_130_X_ON_10;

/* Symbol: AC4DEC_band_smoother_process */
/* Demangled: AC4DEC_band_smoother_process */
int AC4DEC_band_smoother_process(void);

/* Symbol: AC4DEC_a_ac4_to_oamdi_trim_config */
/* Demangled: AC4DEC_a_ac4_to_oamdi_trim_config */
extern void* AC4DEC_a_ac4_to_oamdi_trim_config;

/* Symbol: AC4DEC_oamdi_get_all_obj_md */
/* Demangled: AC4DEC_oamdi_get_all_obj_md */
int AC4DEC_oamdi_get_all_obj_md(void);

/* Symbol: AC4DEC_WindowKBD1024_alpha3_0 */
/* Demangled: AC4DEC_WindowKBD1024_alpha3_0 */
extern void* AC4DEC_WindowKBD1024_alpha3_0;

/* Symbol: ac4dec_wrapper_addbytes */
/* Demangled: ac4dec_wrapper_addbytes */
int ac4dec_wrapper_addbytes(void);

/* Symbol: dlb_ac4dec_v2_feed */
/* Demangled: dlb_ac4dec_v2_feed */
int dlb_ac4dec_v2_feed(void);

/* Symbol: AC4DEC_ajocdec_oar_merge */
/* Demangled: AC4DEC_ajocdec_oar_merge */
int AC4DEC_ajocdec_oar_merge(void);

/* Symbol: DLB_blk_LintegrateL_strict */
/* Demangled: DLB_blk_LintegrateL_strict */
int DLB_blk_LintegrateL_strict(void);

/* Symbol: AC4DEC_lvl_smooth_scale_band */
/* Demangled: AC4DEC_lvl_smooth_scale_band */
int AC4DEC_lvl_smooth_scale_band(void);

/* Symbol: AC4DEC_AA_DIFFUSE_NO_DECORR_2TO6CH */
/* Demangled: AC4DEC_AA_DIFFUSE_NO_DECORR_2TO6CH */
extern void* AC4DEC_AA_DIFFUSE_NO_DECORR_2TO6CH;

/* Symbol: AC4DEC_A_NGCS_SEG_RANGE_2TO6CH */
/* Demangled: AC4DEC_A_NGCS_SEG_RANGE_2TO6CH */
extern void* AC4DEC_A_NGCS_SEG_RANGE_2TO6CH;

/* Symbol: AC4DEC_ajccdec_process_core_decode */
/* Demangled: AC4DEC_ajccdec_process_core_decode */
int AC4DEC_ajccdec_process_core_decode(void);

/* Symbol: AC4DEC_DAP_MATHLIB_LOGTYPE_20_LOG_10_ON_256 */
/* Demangled: AC4DEC_DAP_MATHLIB_LOGTYPE_20_LOG_10_ON_256 */
extern void* AC4DEC_DAP_MATHLIB_LOGTYPE_20_LOG_10_ON_256;

/* Symbol: AC4DEC_ap_dvlim_coefs_40 */
/* Demangled: AC4DEC_ap_dvlim_coefs_40 */
extern void* AC4DEC_ap_dvlim_coefs_40;

/* Symbol: AC4DEC_ngcs_query_scratch */
/* Demangled: AC4DEC_ngcs_query_scratch */
int AC4DEC_ngcs_query_scratch(void);

/* Symbol: AC4DEC_dvlim_set_sample_rate */
/* Demangled: AC4DEC_dvlim_set_sample_rate */
int AC4DEC_dvlim_set_sample_rate(void);

/* Symbol: dlb_ac4dec_set_session_seed */
/* Demangled: dlb_ac4dec_set_session_seed */
int dlb_ac4dec_set_session_seed(void);

/* Symbol: dlb_dct_twiddle_table16_1_L240 */
/* Demangled: dlb_dct_twiddle_table16_1_L240 */
extern void* dlb_dct_twiddle_table16_1_L240;

/* Symbol: AC4DEC_volume_and_ieq_query_memory */
/* Demangled: AC4DEC_volume_and_ieq_query_memory */
int AC4DEC_volume_and_ieq_query_memory(void);

/* Symbol: AC4DEC_imsdec_band_config_decode */
/* Demangled: AC4DEC_imsdec_band_config_decode */
int AC4DEC_imsdec_band_config_decode(void);

/* Symbol: dlb_fft_fwd_usc_640 */
/* Demangled: dlb_fft_fwd_usc_640 */
int dlb_fft_fwd_usc_640(void);

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR48KHZ_BS192S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR48KHZ_BS192S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR48KHZ_BS192S;

/* Symbol: AC4DEC_ac4dap_log_content_process */
/* Demangled: AC4DEC_ac4dap_log_content_process */
int AC4DEC_ac4dap_log_content_process(void);

/* Symbol: AC4DEC_dlb_bitbuf_safe_read */
/* Demangled: AC4DEC_dlb_bitbuf_safe_read */
int AC4DEC_dlb_bitbuf_safe_read(void);

/* Symbol: AC4DEC_volume_and_ieq_preset_query_memory */
/* Demangled: AC4DEC_volume_and_ieq_preset_query_memory */
int AC4DEC_volume_and_ieq_preset_query_memory(void);

/* Symbol: DLB_r4_fft_384_s */
/* Demangled: DLB_r4_fft_384_s */
int DLB_r4_fft_384_s(void);

/* Symbol: AC4DEC_delay_line_lfract_size_query */
/* Demangled: AC4DEC_delay_line_lfract_size_query */
int AC4DEC_delay_line_lfract_size_query(void);

/* Symbol: AC4DEC_oamd_framer_get_metadata */
/* Demangled: AC4DEC_oamd_framer_get_metadata */
int AC4DEC_oamd_framer_get_metadata(void);

/* Symbol: AC4DEC_a_isf_bh_7_3_0_0_decode */
/* Demangled: AC4DEC_a_isf_bh_7_3_0_0_decode */
extern void* AC4DEC_a_isf_bh_7_3_0_0_decode;

/* Symbol: AC4DEC_evo_parse_payloads */
/* Demangled: AC4DEC_evo_parse_payloads */
int AC4DEC_evo_parse_payloads(void);

/* Symbol: AC4DEC_ac4dap_query_output_configuration */
/* Demangled: AC4DEC_ac4dap_query_output_configuration */
int AC4DEC_ac4dap_query_output_configuration(void);

/* Symbol: AC4DEC_speaker_config_speaker_is_present */
/* Demangled: AC4DEC_speaker_config_speaker_is_present */
int AC4DEC_speaker_config_speaker_is_present(void);

/* Symbol: AC4DEC_oamdi_round_from_Q15_away_from_zero */
/* Demangled: AC4DEC_oamdi_round_from_Q15_away_from_zero */
int AC4DEC_oamdi_round_from_Q15_away_from_zero(void);

/* Symbol: DLB_vec_UnormLU_strict */
/* Demangled: DLB_vec_UnormLU_strict */
int DLB_vec_UnormLU_strict(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_input_stage_close */
/* Demangled: AC4DEC_dlb_ac4dec_v1_input_stage_close */
int AC4DEC_dlb_ac4dec_v1_input_stage_close(void);

/* Symbol: AC4DEC_metadata_delay_query_mem */
/* Demangled: AC4DEC_metadata_delay_query_mem */
int AC4DEC_metadata_delay_query_mem(void);

/* Symbol: AC4DEC_loudness_info_update */
/* Demangled: AC4DEC_loudness_info_update */
int AC4DEC_loudness_info_update(void);

/* Symbol: AC4DEC_room_config_get_speaker_plane */
/* Demangled: AC4DEC_room_config_get_speaker_plane */
int AC4DEC_room_config_get_speaker_plane(void);

/* Symbol: AC4DEC_ims_sv_xtc_mtx_coeff_tab */
/* Demangled: AC4DEC_ims_sv_xtc_mtx_coeff_tab */
extern void* AC4DEC_ims_sv_xtc_mtx_coeff_tab;

/* Symbol: DLB_r4_fft_96_s */
/* Demangled: DLB_r4_fft_96_s */
int DLB_r4_fft_96_s(void);

/* Symbol: dlb_fft_inv_usc_480 */
/* Demangled: dlb_fft_inv_usc_480 */
int dlb_fft_inv_usc_480(void);

/* Symbol: AC4DEC_ajoc_de_dlg_dmx_coeff_quant_table */
/* Demangled: AC4DEC_ajoc_de_dlg_dmx_coeff_quant_table */
extern void* AC4DEC_ajoc_de_dlg_dmx_coeff_quant_table;

/* Symbol: AC4DEC_tree_joc_huff_code_7ch_pos_idx_sparse */
/* Demangled: AC4DEC_tree_joc_huff_code_7ch_pos_idx_sparse */
extern void* AC4DEC_tree_joc_huff_code_7ch_pos_idx_sparse;

/* Symbol: AC4DEC_ac4dap_log_content_query_memory */
/* Demangled: AC4DEC_ac4dap_log_content_query_memory */
int AC4DEC_ac4dap_log_content_query_memory(void);

/* Symbol: AC4DEC_bf1_fdn_get_write_pointer */
/* Demangled: AC4DEC_bf1_fdn_get_write_pointer */
int AC4DEC_bf1_fdn_get_write_pointer(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_beta_coarse_df */
/* Demangled: AC4DEC_tree_huff_code_acpl_beta_coarse_df */
extern void* AC4DEC_tree_huff_code_acpl_beta_coarse_df;

/* Symbol: AC4DEC_room_config_init */
/* Demangled: AC4DEC_room_config_init */
int AC4DEC_room_config_init(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L30 */
/* Demangled: dlb_dct_twiddle_table16_rev_L30 */
extern void* dlb_dct_twiddle_table16_rev_L30;

/* Symbol: AC4DEC_acpl_num_param_bands */
/* Demangled: AC4DEC_acpl_num_param_bands */
extern void* AC4DEC_acpl_num_param_bands;

/* Symbol: AC4DEC_oamd_trans_output_compare */
/* Demangled: AC4DEC_oamd_trans_output_compare */
int AC4DEC_oamd_trans_output_compare(void);

/* Symbol: AC4DEC_bm_channel_assignment */
/* Demangled: AC4DEC_bm_channel_assignment */
int AC4DEC_bm_channel_assignment(void);

/* Symbol: dlb_dct_twiddle_table16_L768_1 */
/* Demangled: dlb_dct_twiddle_table16_L768_1 */
extern void* dlb_dct_twiddle_table16_L768_1;

/* Symbol: dlb_dct_twiddle_table16_rev_L32 */
/* Demangled: dlb_dct_twiddle_table16_rev_L32 */
extern void* dlb_dct_twiddle_table16_rev_L32;

/* Symbol: dlb_dct_twiddle_table16_L768_2 */
/* Demangled: dlb_dct_twiddle_table16_L768_2 */
extern void* dlb_dct_twiddle_table16_L768_2;

/* Symbol: AC4DEC_oamd_common_data_copy */
/* Demangled: AC4DEC_oamd_common_data_copy */
int AC4DEC_oamd_common_data_copy(void);

/* Symbol: AC4DEC_ac4dsp_CLmpy_shlCLSIU_inplace_strict */
/* Demangled: AC4DEC_ac4dsp_CLmpy_shlCLSIU_inplace_strict */
int AC4DEC_ac4dsp_CLmpy_shlCLSIU_inplace_strict(void);

/* Symbol: AC4DEC_oamdi_set_has_oa_element_dimensional_trim */
/* Demangled: AC4DEC_oamdi_set_has_oa_element_dimensional_trim */
int AC4DEC_oamdi_set_has_oa_element_dimensional_trim(void);

/* Symbol: AC4DEC_WindowKBD128_alpha5_0 */
/* Demangled: AC4DEC_WindowKBD128_alpha5_0 */
extern void* AC4DEC_WindowKBD128_alpha5_0;

/* Symbol: AC4DEC_max_trim_compute */
/* Demangled: AC4DEC_max_trim_compute */
int AC4DEC_max_trim_compute(void);

/* Symbol: DLB_r4_inv_fft_960 */
/* Demangled: DLB_r4_inv_fft_960 */
int DLB_r4_inv_fft_960(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj(void);

/* Symbol: AC4DEC_emdf_mdd_generate_dummy_data */
/* Demangled: AC4DEC_emdf_mdd_generate_dummy_data */
int AC4DEC_emdf_mdd_generate_dummy_data(void);

/* Symbol: AC4DEC_tree_huff_code_ajcc_wet_coarse_df */
/* Demangled: AC4DEC_tree_huff_code_ajcc_wet_coarse_df */
extern void* AC4DEC_tree_huff_code_ajcc_wet_coarse_df;

/* Symbol: AC4DEC_WindowKBD30_alpha6_0 */
/* Demangled: AC4DEC_WindowKBD30_alpha6_0 */
extern void* AC4DEC_WindowKBD30_alpha6_0;

/* Symbol: AC4DEC_evo_variable_bits_size */
/* Demangled: AC4DEC_evo_variable_bits_size */
int AC4DEC_evo_variable_bits_size(void);

/* Symbol: dlb_blk_LabsL_flex */
/* Demangled: dlb_blk_LabsL_flex */
int dlb_blk_LabsL_flex(void);

/* Symbol: DLB_blk_Liir2ssv2L_strict */
/* Demangled: DLB_blk_Liir2ssv2L_strict */
int DLB_blk_Liir2ssv2L_strict(void);

/* Symbol: AC4DEC_phase90_filter_query_scratch */
/* Demangled: AC4DEC_phase90_filter_query_scratch */
int AC4DEC_phase90_filter_query_scratch(void);

/* Symbol: AC4DEC_mult_UM_2ch */
/* Demangled: AC4DEC_mult_UM_2ch */
int AC4DEC_mult_UM_2ch(void);

/* Symbol: dlb_dct_twiddle_table16_L45_cos */
/* Demangled: dlb_dct_twiddle_table16_L45_cos */
extern void* dlb_dct_twiddle_table16_L45_cos;

/* Symbol: AC4DEC_metadata_mdd_generate_dummy_data */
/* Demangled: AC4DEC_metadata_mdd_generate_dummy_data */
int AC4DEC_metadata_mdd_generate_dummy_data(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L36 */
/* Demangled: dlb_dct_twiddle_table16_rev_L36 */
extern void* dlb_dct_twiddle_table16_rev_L36;

/* Symbol: AC4DEC_ac4toc_set_decodable_flag */
/* Demangled: AC4DEC_ac4toc_set_decodable_flag */
int AC4DEC_ac4toc_set_decodable_flag(void);

/* Symbol: AC4DEC_gain_calc_init */
/* Demangled: AC4DEC_gain_calc_init */
int AC4DEC_gain_calc_init(void);

/* Symbol: AC4DEC_lvl_drc_process */
/* Demangled: AC4DEC_lvl_drc_process */
int AC4DEC_lvl_drc_process(void);

/* Symbol: AC4DEC_oarq_query_memory */
/* Demangled: AC4DEC_oarq_query_memory */
int AC4DEC_oarq_query_memory(void);

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR44KHZ1_BS384S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR44KHZ1_BS384S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR44KHZ1_BS384S;

/* Symbol: AC4DEC_P_PHASE_SHIFT_2TO5CH */
/* Demangled: AC4DEC_P_PHASE_SHIFT_2TO5CH */
extern void* AC4DEC_P_PHASE_SHIFT_2TO5CH;

/* Symbol: AC4DEC_lvl_noisegate_process */
/* Demangled: AC4DEC_lvl_noisegate_process */
int AC4DEC_lvl_noisegate_process(void);

/* Symbol: AC4DEC_PA_NGCS_SEG_STEERING_5TO7CH */
/* Demangled: AC4DEC_PA_NGCS_SEG_STEERING_5TO7CH */
extern void* AC4DEC_PA_NGCS_SEG_STEERING_5TO7CH;

/* Symbol: AC4DEC_ac4toc_oamd_reader_parse_common_data */
/* Demangled: AC4DEC_ac4toc_oamd_reader_parse_common_data */
int AC4DEC_ac4toc_oamd_reader_parse_common_data(void);

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR44KHZ1_BS384S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR44KHZ1_BS384S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR44KHZ1_BS384S;

/* Symbol: AC4DEC_PA_DIFFUSE_NO_DECORR_2TO4CH */
/* Demangled: AC4DEC_PA_DIFFUSE_NO_DECORR_2TO4CH */
extern void* AC4DEC_PA_DIFFUSE_NO_DECORR_2TO4CH;

/* Symbol: AC4DEC_mdct_to_qmf_alloc */
/* Demangled: AC4DEC_mdct_to_qmf_alloc */
int AC4DEC_mdct_to_qmf_alloc(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_8 */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_8 */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_8;

/* Symbol: AC4DEC_asa_reset_query_memory */
/* Demangled: AC4DEC_asa_reset_query_memory */
int AC4DEC_asa_reset_query_memory(void);

/* Symbol: dlb_dct_twiddle_table16_L240_1 */
/* Demangled: dlb_dct_twiddle_table16_L240_1 */
extern void* dlb_dct_twiddle_table16_L240_1;

/* Symbol: AC4DEC_omg_trim_manual_gain_get */
/* Demangled: AC4DEC_omg_trim_manual_gain_get */
int AC4DEC_omg_trim_manual_gain_get(void);

/* Symbol: DLB_qmf_analysisS_set_slot_increment */
/* Demangled: DLB_qmf_analysisS_set_slot_increment */
int DLB_qmf_analysisS_set_slot_increment(void);

/* Symbol: _Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: createSoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: dlb_dct_twiddle_table16_L12 */
/* Demangled: dlb_dct_twiddle_table16_L12 */
extern void* dlb_dct_twiddle_table16_L12;

/* Symbol: dlb_dct_twiddle_table16_L240_2 */
/* Demangled: dlb_dct_twiddle_table16_L240_2 */
extern void* dlb_dct_twiddle_table16_L240_2;

/* Symbol: AC4DEC_oamdi_get_oa_element_bed_object_read_only */
/* Demangled: AC4DEC_oamdi_get_oa_element_bed_object_read_only */
int AC4DEC_oamdi_get_oa_element_bed_object_read_only(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_beta_coarse_f0 */
/* Demangled: AC4DEC_tree_huff_code_acpl_beta_coarse_f0 */
extern void* AC4DEC_tree_huff_code_acpl_beta_coarse_f0;

/* Symbol: AC4DEC_bed_mixer_program_set */
/* Demangled: AC4DEC_bed_mixer_program_set */
int AC4DEC_bed_mixer_program_set(void);

/* Symbol: DLB_qmf_analysisS_close */
/* Demangled: DLB_qmf_analysisS_close */
int DLB_qmf_analysisS_close(void);

/* Symbol: AC4DEC_imdct_open */
/* Demangled: AC4DEC_imdct_open */
int AC4DEC_imdct_open(void);

/* Symbol: AC4DEC_ac4dec_input_stage_process_part_1 */
/* Demangled: AC4DEC_ac4dec_input_stage_process_part_1 */
int AC4DEC_ac4dec_input_stage_process_part_1(void);

/* Symbol: AC4DEC_oamdi_dimensional_trim_set_trim_bypass */
/* Demangled: AC4DEC_oamdi_dimensional_trim_set_trim_bypass */
int AC4DEC_oamdi_dimensional_trim_set_trim_bypass(void);

/* Symbol: AC4DEC_ac4dap_log_content_rebuild_dv */
/* Demangled: AC4DEC_ac4dap_log_content_rebuild_dv */
int AC4DEC_ac4dap_log_content_rebuild_dv(void);

/* Symbol: AC4DEC_ac4dec_input_stage_process_part_2 */
/* Demangled: AC4DEC_ac4dec_input_stage_process_part_2 */
int AC4DEC_ac4dec_input_stage_process_part_2(void);

/* Symbol: AC4DEC_get_toc_info_from_current_frame */
/* Demangled: AC4DEC_get_toc_info_from_current_frame */
int AC4DEC_get_toc_info_from_current_frame(void);

/* Symbol: AC4DEC_pcm_query_mem */
/* Demangled: AC4DEC_pcm_query_mem */
int AC4DEC_pcm_query_mem(void);

/* Symbol: AC4DEC_tree_huff_code_acpl_beta_coarse_dt */
/* Demangled: AC4DEC_tree_huff_code_acpl_beta_coarse_dt */
extern void* AC4DEC_tree_huff_code_acpl_beta_coarse_dt;

/* Symbol: DLB_r4_rsplit_fft_nn */
/* Demangled: DLB_r4_rsplit_fft_nn */
int DLB_r4_rsplit_fft_nn(void);

/* Symbol: dlb_fft_fwd_scl_768 */
/* Demangled: dlb_fft_fwd_scl_768 */
int dlb_fft_fwd_scl_768(void);

/* Symbol: DLB_MFB_P10KM_P4_319SC_128M */
/* Demangled: DLB_MFB_P10KM_P4_319SC_128M */
extern void* DLB_MFB_P10KM_P4_319SC_128M;

/* Symbol: dlb_dct_twiddle_table16_L15 */
/* Demangled: dlb_dct_twiddle_table16_L15 */
extern void* dlb_dct_twiddle_table16_L15;

/* Symbol: AC4DEC_ac4dec_input_stage_process_setup */
/* Demangled: AC4DEC_ac4dec_input_stage_process_setup */
int AC4DEC_ac4dec_input_stage_process_setup(void);

/* Symbol: AC4DEC_DELTA_SIZE_SAMPLES */
/* Demangled: AC4DEC_DELTA_SIZE_SAMPLES */
extern void* AC4DEC_DELTA_SIZE_SAMPLES;

/* Symbol: DLB_r4_inv_fft_240 */
/* Demangled: DLB_r4_inv_fft_240 */
int DLB_r4_inv_fft_240(void);

/* Symbol: _ZN5dolby12Ac4DecClientD1Ev */
/* Demangled: dolby::Ac4DecClient::~Ac4DecClient() */
int _ZN5dolby12Ac4DecClientD1Ev(void);

/* Symbol: AC4DEC_ajccdec_interpolate_update */
/* Demangled: AC4DEC_ajccdec_interpolate_update */
int AC4DEC_ajccdec_interpolate_update(void);

/* Symbol: AC4DEC_evo_query_mem */
/* Demangled: AC4DEC_evo_query_mem */
int AC4DEC_evo_query_mem(void);

/* Symbol: dlb_dct_twiddle_table16_L16 */
/* Demangled: dlb_dct_twiddle_table16_L16 */
extern void* dlb_dct_twiddle_table16_L16;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L384 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L384 */
extern void* dlb_dct_twiddle_table16_rev_1_L384;

/* Symbol: dlb_fft_inv_scl_12 */
/* Demangled: dlb_fft_inv_scl_12 */
int dlb_fft_inv_scl_12(void);

/* Symbol: ac4dec_wrapper_query_memory */
/* Demangled: ac4dec_wrapper_query_memory */
int ac4dec_wrapper_query_memory(void);

/* Symbol: AC4DEC_oaril_init */
/* Demangled: AC4DEC_oaril_init */
int AC4DEC_oaril_init(void);

/* Symbol: AC4DEC_tree_huff_code_ajcc_wet_coarse_f0 */
/* Demangled: AC4DEC_tree_huff_code_ajcc_wet_coarse_f0 */
extern void* AC4DEC_tree_huff_code_ajcc_wet_coarse_f0;

/* Symbol: AC4DEC_A_ROOM_CONFIG_SPKS_BACK_ALT */
/* Demangled: AC4DEC_A_ROOM_CONFIG_SPKS_BACK_ALT */
extern void* AC4DEC_A_ROOM_CONFIG_SPKS_BACK_ALT;

/* Symbol: AC4DEC_asa_event_query_memory */
/* Demangled: AC4DEC_asa_event_query_memory */
int AC4DEC_asa_event_query_memory(void);

/* Symbol: AC4DEC_tree_huff_code_asf */
/* Demangled: AC4DEC_tree_huff_code_asf */
extern void* AC4DEC_tree_huff_code_asf;

/* Symbol: dlb_dct_twiddle_table16_L144 */
/* Demangled: dlb_dct_twiddle_table16_L144 */
extern void* dlb_dct_twiddle_table16_L144;

/* Symbol: DLB_blk_Liir1L_strict */
/* Demangled: DLB_blk_Liir1L_strict */
int DLB_blk_Liir1L_strict(void);

/* Symbol: dlb_vec_UnormLU_flex */
/* Demangled: dlb_vec_UnormLU_flex */
int dlb_vec_UnormLU_flex(void);

/* Symbol: DLB_r4_inv_fft_128_s */
/* Demangled: DLB_r4_inv_fft_128_s */
int DLB_r4_inv_fft_128_s(void);

/* Symbol: _ZN5dolby12Ac4DecClient12ac4dec_flushEv */
/* Demangled: dolby::Ac4DecClient::ac4dec_flush() */
int _ZN5dolby12Ac4DecClient12ac4dec_flushEv(void);

/* Symbol: dlb_ac4dec_v2_query_mem */
/* Demangled: dlb_ac4dec_v2_query_mem */
int dlb_ac4dec_v2_query_mem(void);

/* Symbol: AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_130_X_ON_20 */
/* Demangled: AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_130_X_ON_20 */
extern void* AC4DEC_DAP_MATHLIB_POWTYPE_10_POW_130_X_ON_20;

/* Symbol: AC4DEC_decoder_set_limiter_enable */
/* Demangled: AC4DEC_decoder_set_limiter_enable */
int AC4DEC_decoder_set_limiter_enable(void);

/* Symbol: dlb_qmf_synthesisL_open */
/* Demangled: dlb_qmf_synthesisL_open */
int dlb_qmf_synthesisL_open(void);

/* Symbol: AC4DEC_tree_huff_code_ajcc_wet_coarse_dt */
/* Demangled: AC4DEC_tree_huff_code_ajcc_wet_coarse_dt */
extern void* AC4DEC_tree_huff_code_ajcc_wet_coarse_dt;

/* Symbol: dlb_fft_inv_scl_15 */
/* Demangled: dlb_fft_inv_scl_15 */
int dlb_fft_inv_scl_15(void);

/* Symbol: AC4DEC_sv_coefs_gen */
/* Demangled: AC4DEC_sv_coefs_gen */
int AC4DEC_sv_coefs_gen(void);

/* Symbol: AC4DEC_asa_event_init */
/* Demangled: AC4DEC_asa_event_init */
int AC4DEC_asa_event_init(void);

/* Symbol: AC4DEC_ade_query_mem */
/* Demangled: AC4DEC_ade_query_mem */
int AC4DEC_ade_query_mem(void);

/* Symbol: AC4DEC_ap_dvlim_coefs_128 */
/* Demangled: AC4DEC_ap_dvlim_coefs_128 */
extern void* AC4DEC_ap_dvlim_coefs_128;

/* Symbol: AC4DEC_dvlim_get_boost */
/* Demangled: AC4DEC_dvlim_get_boost */
int AC4DEC_dvlim_get_boost(void);

/* Symbol: dlb_fft_inv_scl_16 */
/* Demangled: dlb_fft_inv_scl_16 */
int dlb_fft_inv_scl_16(void);

/* Symbol: AC4DEC_emdf_get_buffer_size */
/* Demangled: AC4DEC_emdf_get_buffer_size */
int AC4DEC_emdf_get_buffer_size(void);

/* Symbol: _ZN5dolby12Ac4DecClient24ac4dec_setup_table_paramEhhh */
/* Demangled: dolby::Ac4DecClient::ac4dec_setup_table_param(unsigned char, unsigned char, unsigned char) */
int _ZN5dolby12Ac4DecClient24ac4dec_setup_table_paramEhhh(void);

/* Symbol: AC4DEC_dlb_bitbuf_skip */
/* Demangled: AC4DEC_dlb_bitbuf_skip */
int AC4DEC_dlb_bitbuf_skip(void);

/* Symbol: AC4DEC_arle_threshold_init */
/* Demangled: AC4DEC_arle_threshold_init */
int AC4DEC_arle_threshold_init(void);

/* Symbol: AC4DEC_decoder_get_active_presentation */
/* Demangled: AC4DEC_decoder_get_active_presentation */
int AC4DEC_decoder_get_active_presentation(void);

/* Symbol: AC4DEC_ajcc_reciprocal_table */
/* Demangled: AC4DEC_ajcc_reciprocal_table */
extern void* AC4DEC_ajcc_reciprocal_table;

/* Symbol: AC4DEC_IMS_BANDING_SCHEME_ANE_HR */
/* Demangled: AC4DEC_IMS_BANDING_SCHEME_ANE_HR */
extern void* AC4DEC_IMS_BANDING_SCHEME_ANE_HR;

/* Symbol: AC4DEC_evo_pb_insert */
/* Demangled: AC4DEC_evo_pb_insert */
int AC4DEC_evo_pb_insert(void);

/* Symbol: DLB_blk_Liir1xL_setup */
/* Demangled: DLB_blk_Liir1xL_setup */
int DLB_blk_Liir1xL_setup(void);

/* Symbol: DLB_blk_Lmix_shlaL */
/* Demangled: DLB_blk_Lmix_shlaL */
int DLB_blk_Lmix_shlaL(void);

/* Symbol: AC4DEC_framer_round */
/* Demangled: AC4DEC_framer_round */
int AC4DEC_framer_round(void);

/* Symbol: AC4DEC_ngcs_diffuse_run */
/* Demangled: AC4DEC_ngcs_diffuse_run */
int AC4DEC_ngcs_diffuse_run(void);

/* Symbol: AC4DEC_pcm_open */
/* Demangled: AC4DEC_pcm_open */
int AC4DEC_pcm_open(void);

/* Symbol: AC4DEC_ldn_norm_log_sone_add */
/* Demangled: AC4DEC_ldn_norm_log_sone_add */
int AC4DEC_ldn_norm_log_sone_add(void);

/* Symbol: AC4DEC_mult_DM_2ch */
/* Demangled: AC4DEC_mult_DM_2ch */
int AC4DEC_mult_DM_2ch(void);

/* Symbol: DLB_CLmix4CL4SU_strict */
/* Demangled: DLB_CLmix4CL4SU_strict */
int DLB_CLmix4CL4SU_strict(void);

/* Symbol: dlb_fft_fwd_usc_1024 */
/* Demangled: dlb_fft_fwd_usc_1024 */
int dlb_fft_fwd_usc_1024(void);

/* Symbol: dlb_dct_twiddle_table16_L320 */
/* Demangled: dlb_dct_twiddle_table16_L320 */
extern void* dlb_dct_twiddle_table16_L320;

/* Symbol: AC4DEC_tree_huff_code_ajoc_wet_fine_df */
/* Demangled: AC4DEC_tree_huff_code_ajoc_wet_fine_df */
extern void* AC4DEC_tree_huff_code_ajoc_wet_fine_df;

/* Symbol: AC4DEC_surround_compressor_process */
/* Demangled: AC4DEC_surround_compressor_process */
int AC4DEC_surround_compressor_process(void);

/* Symbol: AC4DEC_ac4toc_get_hsf_ext_substream_info */
/* Demangled: AC4DEC_ac4toc_get_hsf_ext_substream_info */
int AC4DEC_ac4toc_get_hsf_ext_substream_info(void);

/* Symbol: AC4DEC_hp_height_query_memory */
/* Demangled: AC4DEC_hp_height_query_memory */
int AC4DEC_hp_height_query_memory(void);

/* Symbol: AC4DEC_bf1_fdn_process */
/* Demangled: AC4DEC_bf1_fdn_process */
int AC4DEC_bf1_fdn_process(void);

/* Symbol: AC4DEC_AGC_MIN */
/* Demangled: AC4DEC_AGC_MIN */
extern void* AC4DEC_AGC_MIN;

/* Symbol: AC4DEC_pcm_get_limiter_gain */
/* Demangled: AC4DEC_pcm_get_limiter_gain */
int AC4DEC_pcm_get_limiter_gain(void);

/* Symbol: AC4DEC_WindowKBD720_alpha4_0 */
/* Demangled: AC4DEC_WindowKBD720_alpha4_0 */
extern void* AC4DEC_WindowKBD720_alpha4_0;

/* Symbol: DLB_r4_fft_288_s */
/* Demangled: DLB_r4_fft_288_s */
int DLB_r4_fft_288_s(void);

/* Symbol: DLB_r4_fft_512 */
/* Demangled: DLB_r4_fft_512 */
int DLB_r4_fft_512(void);

/* Symbol: AC4DEC_intelligent_eq_init */
/* Demangled: AC4DEC_intelligent_eq_init */
int AC4DEC_intelligent_eq_init(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_output_stage_open */
/* Demangled: AC4DEC_dlb_ac4dec_v1_output_stage_open */
int AC4DEC_dlb_ac4dec_v1_output_stage_open(void);

/* Symbol: AC4DEC_a_dvlim_win_128 */
/* Demangled: AC4DEC_a_dvlim_win_128 */
extern void* AC4DEC_a_dvlim_win_128;

/* Symbol: dlb_dct_twiddle_table16_1_L256 */
/* Demangled: dlb_dct_twiddle_table16_1_L256 */
extern void* dlb_dct_twiddle_table16_1_L256;

/* Symbol: AC4DEC_arle_distortion_get_band_masking_factor */
/* Demangled: AC4DEC_arle_distortion_get_band_masking_factor */
int AC4DEC_arle_distortion_get_band_masking_factor(void);

/* Symbol: AC4DEC_DAP_MATHLIB_LOGTYPE_10_LOG_10_ON_130 */
/* Demangled: AC4DEC_DAP_MATHLIB_LOGTYPE_10_LOG_10_ON_130 */
extern void* AC4DEC_DAP_MATHLIB_LOGTYPE_10_LOG_10_ON_130;

/* Symbol: AC4DEC_evo_calculate_pcm_protection */
/* Demangled: AC4DEC_evo_calculate_pcm_protection */
int AC4DEC_evo_calculate_pcm_protection(void);

/* Symbol: DLB_r4_inv_fft_512_s */
/* Demangled: DLB_r4_inv_fft_512_s */
int DLB_r4_inv_fft_512_s(void);

/* Symbol: AC4DEC_ac4dap_get_version */
/* Demangled: AC4DEC_ac4dap_get_version */
int AC4DEC_ac4dap_get_version(void);

/* Symbol: AC4DEC_metadata_delay_reset */
/* Demangled: AC4DEC_metadata_delay_reset */
int AC4DEC_metadata_delay_reset(void);

/* Symbol: AC4DEC_a_b_duplicate_col */
/* Demangled: AC4DEC_a_b_duplicate_col */
extern void* AC4DEC_a_b_duplicate_col;

/* Symbol: AC4DEC_A_ROOM_CONFIG_SPKS_HEIGHTS */
/* Demangled: AC4DEC_A_ROOM_CONFIG_SPKS_HEIGHTS */
extern void* AC4DEC_A_ROOM_CONFIG_SPKS_HEIGHTS;

/* Symbol: AC4DEC_speaker_config_mask_spkrs */
/* Demangled: AC4DEC_speaker_config_mask_spkrs */
int AC4DEC_speaker_config_mask_spkrs(void);

/* Symbol: DLB_hybrid_synthesisCL_get_delay */
/* Demangled: DLB_hybrid_synthesisCL_get_delay */
int DLB_hybrid_synthesisCL_get_delay(void);

/* Symbol: AC4DEC_ac4toc_reader_get_presentation_selection_info */
/* Demangled: AC4DEC_ac4toc_reader_get_presentation_selection_info */
int AC4DEC_ac4toc_reader_get_presentation_selection_info(void);

/* Symbol: AC4DEC_arle_process */
/* Demangled: AC4DEC_arle_process */
int AC4DEC_arle_process(void);

/* Symbol: AC4DEC_ac4parser_close */
/* Demangled: AC4DEC_ac4parser_close */
int AC4DEC_ac4parser_close(void);

/* Symbol: DLB_r4_inv_fft_64_s */
/* Demangled: DLB_r4_inv_fft_64_s */
int DLB_r4_inv_fft_64_s(void);

/* Symbol: dlb_fft_inv_usc_120 */
/* Demangled: dlb_fft_inv_usc_120 */
int dlb_fft_inv_usc_120(void);

/* Symbol: DLB_qmf_synthesisS_set_slot_increment */
/* Demangled: DLB_qmf_synthesisS_set_slot_increment */
int DLB_qmf_synthesisS_set_slot_increment(void);

/* Symbol: AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR46KHZ08 */
/* Demangled: AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR46KHZ08 */
extern void* AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR46KHZ08;

/* Symbol: AC4DEC_arle_set_mode */
/* Demangled: AC4DEC_arle_set_mode */
int AC4DEC_arle_set_mode(void);

/* Symbol: AC4DEC_AA_NGCS_SEG_CHANNELS_2TO7CH */
/* Demangled: AC4DEC_AA_NGCS_SEG_CHANNELS_2TO7CH */
extern void* AC4DEC_AA_NGCS_SEG_CHANNELS_2TO7CH;

/* Symbol: AC4DEC_offsets_db_to_lin */
/* Demangled: AC4DEC_offsets_db_to_lin */
extern void* AC4DEC_offsets_db_to_lin;

/* Symbol: DLB_time_end */
/* Demangled: DLB_time_end */
int DLB_time_end(void);

/* Symbol: AC4DEC_ngcs_query_memory */
/* Demangled: AC4DEC_ngcs_query_memory */
int AC4DEC_ngcs_query_memory(void);

/* Symbol: AC4DEC_point_panner_get_gains */
/* Demangled: AC4DEC_point_panner_get_gains */
int AC4DEC_point_panner_get_gains(void);

/* Symbol: DLB_r4_fft_160 */
/* Demangled: DLB_r4_fft_160 */
int DLB_r4_fft_160(void);

/* Symbol: dlb_fft_inv_scl_960 */
/* Demangled: dlb_fft_inv_scl_960 */
int dlb_fft_inv_scl_960(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency */
int DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency(void);

/* Symbol: AC4DEC_lvl_calc_drc_scale_min */
/* Demangled: AC4DEC_lvl_calc_drc_scale_min */
int AC4DEC_lvl_calc_drc_scale_min(void);

/* Symbol: AC4DEC_get_sfb_offset_tab */
/* Demangled: AC4DEC_get_sfb_offset_tab */
int AC4DEC_get_sfb_offset_tab(void);

/* Symbol: AC4DEC_oamdi_set_obj_info_blk */
/* Demangled: AC4DEC_oamdi_set_obj_info_blk */
int AC4DEC_oamdi_set_obj_info_blk(void);

/* Symbol: AC4DEC_tree_huff_code_ajoc_wet_fine_f0 */
/* Demangled: AC4DEC_tree_huff_code_ajoc_wet_fine_f0 */
extern void* AC4DEC_tree_huff_code_ajoc_wet_fine_f0;

/* Symbol: dlb_dct_twiddle_table16_rev_L45 */
/* Demangled: dlb_dct_twiddle_table16_rev_L45 */
extern void* dlb_dct_twiddle_table16_rev_L45;

/* Symbol: AC4DEC_ac4dap_fhcqmf_query_delay */
/* Demangled: AC4DEC_ac4dap_fhcqmf_query_delay */
int AC4DEC_ac4dap_fhcqmf_query_delay(void);

/* Symbol: AC4DEC_A_DV_SONE_TO_NORM_LOG_SONE */
/* Demangled: AC4DEC_A_DV_SONE_TO_NORM_LOG_SONE */
extern void* AC4DEC_A_DV_SONE_TO_NORM_LOG_SONE;

/* Symbol: AC4DEC_de_il_query_mem */
/* Demangled: AC4DEC_de_il_query_mem */
int AC4DEC_de_il_query_mem(void);

/* Symbol: DLB_blk_LmixLL_strict */
/* Demangled: DLB_blk_LmixLL_strict */
int DLB_blk_LmixLL_strict(void);

/* Symbol: AC4DEC_ac4toc_get_next_presentation_info */
/* Demangled: AC4DEC_ac4toc_get_next_presentation_info */
int AC4DEC_ac4toc_get_next_presentation_info(void);

/* Symbol: AC4DEC_ade_il_query_mem */
/* Demangled: AC4DEC_ade_il_query_mem */
int AC4DEC_ade_il_query_mem(void);

/* Symbol: AC4DEC_tree_huff_code_ajoc_wet_fine_dt */
/* Demangled: AC4DEC_tree_huff_code_ajoc_wet_fine_dt */
extern void* AC4DEC_tree_huff_code_ajoc_wet_fine_dt;

/* Symbol: dlb_vec_Lsum_sqrLUU_flex */
/* Demangled: dlb_vec_Lsum_sqrLUU_flex */
int dlb_vec_Lsum_sqrLUU_flex(void);

/* Symbol: AC4DEC_lb_bitbuf_fast_peek_long */
/* Demangled: AC4DEC_lb_bitbuf_fast_peek_long */
int AC4DEC_lb_bitbuf_fast_peek_long(void);

/* Symbol: AC4DEC_WindowKBD192_alpha5_0 */
/* Demangled: AC4DEC_WindowKBD192_alpha5_0 */
extern void* AC4DEC_WindowKBD192_alpha5_0;

/* Symbol: DLB_CLCLmix6CL12SU_strict */
/* Demangled: DLB_CLCLmix6CL12SU_strict */
int DLB_CLCLmix6CL12SU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L48 */
/* Demangled: dlb_dct_twiddle_table16_rev_L48 */
extern void* dlb_dct_twiddle_table16_rev_L48;

/* Symbol: dlb_fft_inv_usc_128 */
/* Demangled: dlb_fft_inv_usc_128 */
int dlb_fft_inv_usc_128(void);

/* Symbol: AC4DEC_IMS_BANDING_SCHEME_FDN_LR */
/* Demangled: AC4DEC_IMS_BANDING_SCHEME_FDN_LR */
extern void* AC4DEC_IMS_BANDING_SCHEME_FDN_LR;

/* Symbol: AC4DEC_oamdi_dimensional_trim_less_than_equal_to_zero */
/* Demangled: AC4DEC_oamdi_dimensional_trim_less_than_equal_to_zero */
int AC4DEC_oamdi_dimensional_trim_less_than_equal_to_zero(void);

/* Symbol: _ZN7android10AC4Decoder13onQueueFilledEj */
/* Demangled: android::AC4Decoder::onQueueFilled(unsigned int) */
int _ZN7android10AC4Decoder13onQueueFilledEj(void);

/* Symbol: AC4DEC_ac4toc_get_frame_rate_multiply_info */
/* Demangled: AC4DEC_ac4toc_get_frame_rate_multiply_info */
int AC4DEC_ac4toc_get_frame_rate_multiply_info(void);

/* Symbol: AC4DEC_AA_DIFFUSE_DECORR_2TO4CH */
/* Demangled: AC4DEC_AA_DIFFUSE_DECORR_2TO4CH */
extern void* AC4DEC_AA_DIFFUSE_DECORR_2TO4CH;

/* Symbol: DLB_r4_inv_fft_192_s */
/* Demangled: DLB_r4_inv_fft_192_s */
int DLB_r4_inv_fft_192_s(void);

/* Symbol: AC4DEC_agc_reset */
/* Demangled: AC4DEC_agc_reset */
int AC4DEC_agc_reset(void);

/* Symbol: AC4DEC_A_LDN_PF_AVG_EX_DB */
/* Demangled: AC4DEC_A_LDN_PF_AVG_EX_DB */
extern void* AC4DEC_A_LDN_PF_AVG_EX_DB;

/* Symbol: dlb_dct_twiddle_table16_L960_cos */
/* Demangled: dlb_dct_twiddle_table16_L960_cos */
extern void* dlb_dct_twiddle_table16_L960_cos;

/* Symbol: dlb_fft_fwd_scl_12 */
/* Demangled: dlb_fft_fwd_scl_12 */
int dlb_fft_fwd_scl_12(void);

/* Symbol: AC4DEC_calc_unquantized_position */
/* Demangled: AC4DEC_calc_unquantized_position */
int AC4DEC_calc_unquantized_position(void);

/* Symbol: AC4DEC_A_LDN_SL_VALUES_BAND00 */
/* Demangled: AC4DEC_A_LDN_SL_VALUES_BAND00 */
extern void* AC4DEC_A_LDN_SL_VALUES_BAND00;

/* Symbol: AC4DEC_aspx_tic_carry */
/* Demangled: AC4DEC_aspx_tic_carry */
int AC4DEC_aspx_tic_carry(void);

/* Symbol: dlb_dct_twiddle_table16_L144_1 */
/* Demangled: dlb_dct_twiddle_table16_L144_1 */
extern void* dlb_dct_twiddle_table16_L144_1;

/* Symbol: AC4DEC_oamt_count_number_of_object_types */
/* Demangled: AC4DEC_oamt_count_number_of_object_types */
int AC4DEC_oamt_count_number_of_object_types(void);

/* Symbol: dlb_vec_Sabs_maxSU_flex */
/* Demangled: dlb_vec_Sabs_maxSU_flex */
int dlb_vec_Sabs_maxSU_flex(void);

/* Symbol: DLB_r4_fft_12_s */
/* Demangled: DLB_r4_fft_12_s */
int DLB_r4_fft_12_s(void);

/* Symbol: dlb_fft_fwd_usc_480 */
/* Demangled: dlb_fft_fwd_usc_480 */
int dlb_fft_fwd_usc_480(void);

/* Symbol: AC4DEC_hist_get_num_vals_in_hist */
/* Demangled: AC4DEC_hist_get_num_vals_in_hist */
int AC4DEC_hist_get_num_vals_in_hist(void);

/* Symbol: AC4DEC_A_LDN_SL_VALUES_BAND01 */
/* Demangled: AC4DEC_A_LDN_SL_VALUES_BAND01 */
extern void* AC4DEC_A_LDN_SL_VALUES_BAND01;

/* Symbol: dlb_dct_twiddle_table16_L144_2 */
/* Demangled: dlb_dct_twiddle_table16_L144_2 */
extern void* dlb_dct_twiddle_table16_L144_2;

/* Symbol: dlb_dct_twiddle_table16_L24 */
/* Demangled: dlb_dct_twiddle_table16_L24 */
extern void* dlb_dct_twiddle_table16_L24;

/* Symbol: AC4DEC_tree_huff_code_aspx_env_balance_15_df */
/* Demangled: AC4DEC_tree_huff_code_aspx_env_balance_15_df */
extern void* AC4DEC_tree_huff_code_aspx_env_balance_15_df;

/* Symbol: dlb_BLmpy_scale_xBLSU_flex */
/* Demangled: dlb_BLmpy_scale_xBLSU_flex */
int dlb_BLmpy_scale_xBLSU_flex(void);

/* Symbol: dlb_fft_fwd_scl_15 */
/* Demangled: dlb_fft_fwd_scl_15 */
int dlb_fft_fwd_scl_15(void);

/* Symbol: dlb_fft_inv_scl_20 */
/* Demangled: dlb_fft_inv_scl_20 */
int dlb_fft_inv_scl_20(void);

/* Symbol: dlb_fft_inv_scl_240 */
/* Demangled: dlb_fft_inv_scl_240 */
int dlb_fft_inv_scl_240(void);

/* Symbol: dlb_ac4dec_v2_dec_get_dialog_enhancement_limit */
/* Demangled: dlb_ac4dec_v2_dec_get_dialog_enhancement_limit */
int dlb_ac4dec_v2_dec_get_dialog_enhancement_limit(void);

/* Symbol: AC4DEC_A_LDN_SL_VALUES_BAND02 */
/* Demangled: AC4DEC_A_LDN_SL_VALUES_BAND02 */
extern void* AC4DEC_A_LDN_SL_VALUES_BAND02;

/* Symbol: dlb_dct_twiddle_table16_L16_cos */
/* Demangled: dlb_dct_twiddle_table16_L16_cos */
extern void* dlb_dct_twiddle_table16_L16_cos;

/* Symbol: dlb_fft_fwd_scl_16 */
/* Demangled: dlb_fft_fwd_scl_16 */
int dlb_fft_fwd_scl_16(void);

/* Symbol: DLB_qmf_synthesisS_init */
/* Demangled: DLB_qmf_synthesisS_init */
int DLB_qmf_synthesisS_init(void);

/* Symbol: AC4DEC_A_LDN_SL_VALUES_BAND03 */
/* Demangled: AC4DEC_A_LDN_SL_VALUES_BAND03 */
extern void* AC4DEC_A_LDN_SL_VALUES_BAND03;

/* Symbol: AC4DEC_hp_height_reverb_query_memory */
/* Demangled: AC4DEC_hp_height_reverb_query_memory */
int AC4DEC_hp_height_reverb_query_memory(void);

/* Symbol: AC4DEC_imsdec_anechoic_coefficients_decode */
/* Demangled: AC4DEC_imsdec_anechoic_coefficients_decode */
int AC4DEC_imsdec_anechoic_coefficients_decode(void);

/* Symbol: AC4DEC_oamdi_set_md_update_info */
/* Demangled: AC4DEC_oamdi_set_md_update_info */
int AC4DEC_oamdi_set_md_update_info(void);

/* Symbol: AC4DEC_evo_unpack_md_set */
/* Demangled: AC4DEC_evo_unpack_md_set */
int AC4DEC_evo_unpack_md_set(void);

/* Symbol: stfrph_obj */
/* Demangled: stfrph_obj */
extern void* stfrph_obj;

/* Symbol: _ZN5dolby12Ac4DecClient12ac4dec_closeEP19tAc4DecoderExternalPv */
/* Demangled: dolby::Ac4DecClient::ac4dec_close(tAc4DecoderExternal*, void*) */
int _ZN5dolby12Ac4DecClient12ac4dec_closeEP19tAc4DecoderExternalPv(void);

/* Symbol: AC4DEC_A_LDN_SL_VALUES_BAND04 */
/* Demangled: AC4DEC_A_LDN_SL_VALUES_BAND04 */
extern void* AC4DEC_A_LDN_SL_VALUES_BAND04;

/* Symbol: AC4DEC_dvlim_set_block_size */
/* Demangled: AC4DEC_dvlim_set_block_size */
int AC4DEC_dvlim_set_block_size(void);

/* Symbol: AC4DEC_evo_ll_remove_head */
/* Demangled: AC4DEC_evo_ll_remove_head */
int AC4DEC_evo_ll_remove_head(void);

/* Symbol: AC4DEC_oamdi_set_object_dialog_indication */
/* Demangled: AC4DEC_oamdi_set_object_dialog_indication */
int AC4DEC_oamdi_set_object_dialog_indication(void);

/* Symbol: AC4DEC_oamdi_get_oa_element_object_description_read_o */
/* Demangled: AC4DEC_oamdi_get_oa_element_object_description_read_o */
int AC4DEC_oamdi_get_oa_element_object_description_read_o(void);

/* Symbol: AC4DEC_A_LDN_SL_VALUES_BAND05 */
/* Demangled: AC4DEC_A_LDN_SL_VALUES_BAND05 */
extern void* AC4DEC_A_LDN_SL_VALUES_BAND05;

/* Symbol: AC4DEC_imdct_init */
/* Demangled: AC4DEC_imdct_init */
int AC4DEC_imdct_init(void);

/* Symbol: AC4DEC_WindowKBD96_alpha4_0 */
/* Demangled: AC4DEC_WindowKBD96_alpha4_0 */
extern void* AC4DEC_WindowKBD96_alpha4_0;

/* Symbol: dlb_fft_inv_scl_24 */
/* Demangled: dlb_fft_inv_scl_24 */
int dlb_fft_inv_scl_24(void);

/* Symbol: AC4DEC_arle_query_memory */
/* Demangled: AC4DEC_arle_query_memory */
int AC4DEC_arle_query_memory(void);

/* Symbol: AC4DEC_A_LDN_SL_VALUES_BAND06 */
/* Demangled: AC4DEC_A_LDN_SL_VALUES_BAND06 */
extern void* AC4DEC_A_LDN_SL_VALUES_BAND06;

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_5_0 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_5_0 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_5_0;

/* Symbol: AC4DEC_A_LDN_SL_VALUES_BAND07 */
/* Demangled: AC4DEC_A_LDN_SL_VALUES_BAND07 */
extern void* AC4DEC_A_LDN_SL_VALUES_BAND07;

/* Symbol: dlb_CLcopyCLU_flex */
/* Demangled: dlb_CLcopyCLU_flex */
int dlb_CLcopyCLU_flex(void);

/* Symbol: AC4DEC_inverse_quantization */
/* Demangled: AC4DEC_inverse_quantization */
int AC4DEC_inverse_quantization(void);

/* Symbol: _ZN7android10AC4Decoder20internalGetParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::AC4Decoder::internalGetParameter(OMX_INDEXTYPE, void*) */
int _ZN7android10AC4Decoder20internalGetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_5_1 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_5_1 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_5_1;

/* Symbol: AC4DEC_expd_parse */
/* Demangled: AC4DEC_expd_parse */
int AC4DEC_expd_parse(void);

/* Symbol: DLB_r4_inv_fft_256 */
/* Demangled: DLB_r4_inv_fft_256 */
int DLB_r4_inv_fft_256(void);

/* Symbol: AC4DEC_PA_NGCS_SEG_CHANNELS_2TO5CH */
/* Demangled: AC4DEC_PA_NGCS_SEG_CHANNELS_2TO5CH */
extern void* AC4DEC_PA_NGCS_SEG_CHANNELS_2TO5CH;

/* Symbol: AC4DEC_ade_il_get_enable_prev_flag */
/* Demangled: AC4DEC_ade_il_get_enable_prev_flag */
int AC4DEC_ade_il_get_enable_prev_flag(void);

/* Symbol: AC4DEC_de_substream_index_get */
/* Demangled: AC4DEC_de_substream_index_get */
int AC4DEC_de_substream_index_get(void);

/* Symbol: AC4DEC_intelligent_eq_query_memory */
/* Demangled: AC4DEC_intelligent_eq_query_memory */
int AC4DEC_intelligent_eq_query_memory(void);

/* Symbol: AC4DEC_A_PHASE_SHIFT_2TO4CH */
/* Demangled: AC4DEC_A_PHASE_SHIFT_2TO4CH */
extern void* AC4DEC_A_PHASE_SHIFT_2TO4CH;

/* Symbol: AC4DEC_aspx_ec_data_sig_read */
/* Demangled: AC4DEC_aspx_ec_data_sig_read */
int AC4DEC_aspx_ec_data_sig_read(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_input_stage_new_program */
/* Demangled: AC4DEC_dlb_ac4dec_v1_input_stage_new_program */
int AC4DEC_dlb_ac4dec_v1_input_stage_new_program(void);

/* Symbol: AC4DEC_tree_huff_code_ajcc_dry_coarse_df */
/* Demangled: AC4DEC_tree_huff_code_ajcc_dry_coarse_df */
extern void* AC4DEC_tree_huff_code_ajcc_dry_coarse_df;

/* Symbol: AC4DEC_WindowKBD96_alpha4_5 */
/* Demangled: AC4DEC_WindowKBD96_alpha4_5 */
extern void* AC4DEC_WindowKBD96_alpha4_5;

/* Symbol: DLB_CLmacCLCLU_strict */
/* Demangled: DLB_CLmacCLCLU_strict */
int DLB_CLmacCLCLU_strict(void);

/* Symbol: _ZN7android10AC4DecoderD0Ev */
/* Demangled: android::AC4Decoder::~AC4Decoder() */
int _ZN7android10AC4DecoderD0Ev(void);

/* Symbol: AC4DEC_evo_mod_get_md_end */
/* Demangled: AC4DEC_evo_mod_get_md_end */
int AC4DEC_evo_mod_get_md_end(void);

/* Symbol: DLB_BLmpy_scale_xBLSU_strict */
/* Demangled: DLB_BLmpy_scale_xBLSU_strict */
int DLB_BLmpy_scale_xBLSU_strict(void);

/* Symbol: AC4DEC_ajoc_wet_quant_table */
/* Demangled: AC4DEC_ajoc_wet_quant_table */
extern void* AC4DEC_ajoc_wet_quant_table;

/* Symbol: AC4DEC_ade_update_param */
/* Demangled: AC4DEC_ade_update_param */
int AC4DEC_ade_update_param(void);

/* Symbol: AC4DEC_tree_huff_code_aspx_env_balance_15_f0 */
/* Demangled: AC4DEC_tree_huff_code_aspx_env_balance_15_f0 */
extern void* AC4DEC_tree_huff_code_aspx_env_balance_15_f0;

/* Symbol: AC4DEC_speaker_config_identity_get */
/* Demangled: AC4DEC_speaker_config_identity_get */
int AC4DEC_speaker_config_identity_get(void);

/* Symbol: AC4DEC_bed_mixer_query_memory */
/* Demangled: AC4DEC_bed_mixer_query_memory */
int AC4DEC_bed_mixer_query_memory(void);

/* Symbol: AC4DEC_ap_dvlim_coefs_64 */
/* Demangled: AC4DEC_ap_dvlim_coefs_64 */
extern void* AC4DEC_ap_dvlim_coefs_64;

/* Symbol: DLB_blk_LfirUL_setup */
/* Demangled: DLB_blk_LfirUL_setup */
int DLB_blk_LfirUL_setup(void);

/* Symbol: AC4DEC_aspxdec_close */
/* Demangled: AC4DEC_aspxdec_close */
int AC4DEC_aspxdec_close(void);

/* Symbol: AC4DEC_WindowKBD192 */
/* Demangled: AC4DEC_WindowKBD192 */
extern void* AC4DEC_WindowKBD192;

/* Symbol: AC4DEC_speaker_config_enable_warping */
/* Demangled: AC4DEC_speaker_config_enable_warping */
int AC4DEC_speaker_config_enable_warping(void);

/* Symbol: DLB_r4_inv_fft_12 */
/* Demangled: DLB_r4_inv_fft_12 */
int DLB_r4_inv_fft_12(void);

/* Symbol: AC4DEC_ac4dap_virtualizer_surround_boost_reset */
/* Demangled: AC4DEC_ac4dap_virtualizer_surround_boost_reset */
int AC4DEC_ac4dap_virtualizer_surround_boost_reset(void);

/* Symbol: AC4DEC_de_has_cross_channel_gains */
/* Demangled: AC4DEC_de_has_cross_channel_gains */
int AC4DEC_de_has_cross_channel_gains(void);

/* Symbol: AC4DEC_asa_reset_init */
/* Demangled: AC4DEC_asa_reset_init */
int AC4DEC_asa_reset_init(void);

/* Symbol: AC4DEC_P_NGCS_SEG_RANGE_2TO7CH */
/* Demangled: AC4DEC_P_NGCS_SEG_RANGE_2TO7CH */
extern void* AC4DEC_P_NGCS_SEG_RANGE_2TO7CH;

/* Symbol: AC4DEC_ajccdec_dequantize */
/* Demangled: AC4DEC_ajccdec_dequantize */
int AC4DEC_ajccdec_dequantize(void);

/* Symbol: AC4DEC_ac4dec_toc_reader_get_substream_info */
/* Demangled: AC4DEC_ac4dec_toc_reader_get_substream_info */
int AC4DEC_ac4dec_toc_reader_get_substream_info(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_16_vec_ana;

/* Symbol: AC4DEC_tree_huff_code_aspx_env_balance_15_dt */
/* Demangled: AC4DEC_tree_huff_code_aspx_env_balance_15_dt */
extern void* AC4DEC_tree_huff_code_aspx_env_balance_15_dt;

/* Symbol: dlb_hyb_p8_13 */
/* Demangled: dlb_hyb_p8_13 */
extern void* dlb_hyb_p8_13;

/* Symbol: AC4DEC_hp_height_reverb_init */
/* Demangled: AC4DEC_hp_height_reverb_init */
int AC4DEC_hp_height_reverb_init(void);

/* Symbol: AC4DEC_WindowKBD90_alpha6_0 */
/* Demangled: AC4DEC_WindowKBD90_alpha6_0 */
extern void* AC4DEC_WindowKBD90_alpha6_0;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L576 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L576 */
extern void* dlb_dct_twiddle_table16_rev_1_L576;

/* Symbol: DLB_r4_inv_fft_15 */
/* Demangled: DLB_r4_inv_fft_15 */
int DLB_r4_inv_fft_15(void);

/* Symbol: AC4DEC_AA_NGCS_SEG_STEERING_2TO4CH */
/* Demangled: AC4DEC_AA_NGCS_SEG_STEERING_2TO4CH */
extern void* AC4DEC_AA_NGCS_SEG_STEERING_2TO4CH;

/* Symbol: AC4DEC_ssfdec_subband_predictor */
/* Demangled: AC4DEC_ssfdec_subband_predictor */
int AC4DEC_ssfdec_subband_predictor(void);

/* Symbol: dlb_blk_Lmix_shlULL_flex */
/* Demangled: dlb_blk_Lmix_shlULL_flex */
int dlb_blk_Lmix_shlULL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L12 */
/* Demangled: dlb_dct_twiddle_table16_1_L12 */
extern void* dlb_dct_twiddle_table16_1_L12;

/* Symbol: DLB_r4_fft_360_s */
/* Demangled: DLB_r4_fft_360_s */
int DLB_r4_fft_360_s(void);

/* Symbol: DLB_r4_fft_4096 */
/* Demangled: DLB_r4_fft_4096 */
int DLB_r4_fft_4096(void);

/* Symbol: DLB_r4_inv_fft_16 */
/* Demangled: DLB_r4_inv_fft_16 */
int DLB_r4_inv_fft_16(void);

/* Symbol: AC4DEC_tree_huff_code_ajoc_dry_fine_df */
/* Demangled: AC4DEC_tree_huff_code_ajoc_dry_fine_df */
extern void* AC4DEC_tree_huff_code_ajoc_dry_fine_df;

/* Symbol: DLB_blk_LmixnL_strict */
/* Demangled: DLB_blk_LmixnL_strict */
int DLB_blk_LmixnL_strict(void);

/* Symbol: AC4DEC_cch_add_data */
/* Demangled: AC4DEC_cch_add_data */
int AC4DEC_cch_add_data(void);

/* Symbol: AC4DEC_CHANNEL_MAP_524_0 */
/* Demangled: AC4DEC_CHANNEL_MAP_524_0 */
extern void* AC4DEC_CHANNEL_MAP_524_0;

/* Symbol: AC4DEC_oamdi_get_lib_ver */
/* Demangled: AC4DEC_oamdi_get_lib_ver */
int AC4DEC_oamdi_get_lib_ver(void);

/* Symbol: AC4DEC_hp_height_fdn_allpass_process */
/* Demangled: AC4DEC_hp_height_fdn_allpass_process */
int AC4DEC_hp_height_fdn_allpass_process(void);

/* Symbol: AC4DEC_CHANNEL_MAP_524_1 */
/* Demangled: AC4DEC_CHANNEL_MAP_524_1 */
extern void* AC4DEC_CHANNEL_MAP_524_1;

/* Symbol: dlb_dct_twiddle_table16_L240_cos */
/* Demangled: dlb_dct_twiddle_table16_L240_cos */
extern void* dlb_dct_twiddle_table16_L240_cos;

/* Symbol: dlb_dct_twiddle_table16_1_L15 */
/* Demangled: dlb_dct_twiddle_table16_1_L15 */
extern void* dlb_dct_twiddle_table16_1_L15;

/* Symbol: DLB_CLmfb_p10km_analysisL_init */
/* Demangled: DLB_CLmfb_p10km_analysisL_init */
int DLB_CLmfb_p10km_analysisL_init(void);

/* Symbol: AC4DEC_calculate_crc */
/* Demangled: AC4DEC_calculate_crc */
int AC4DEC_calculate_crc(void);

/* Symbol: AC4DEC_surround_compressor_smooth_power_approximation */
/* Demangled: AC4DEC_surround_compressor_smooth_power_approximation */
int AC4DEC_surround_compressor_smooth_power_approximation(void);

/* Symbol: AC4DEC_tree_huff_code_ajcc_dry_coarse_f0 */
/* Demangled: AC4DEC_tree_huff_code_ajcc_dry_coarse_f0 */
extern void* AC4DEC_tree_huff_code_ajcc_dry_coarse_f0;

/* Symbol: DLB_blk_Liir2ssv2L_inplace_strict */
/* Demangled: DLB_blk_Liir2ssv2L_inplace_strict */
int DLB_blk_Liir2ssv2L_inplace_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L16 */
/* Demangled: dlb_dct_twiddle_table16_1_L16 */
extern void* dlb_dct_twiddle_table16_1_L16;

/* Symbol: DLB_r4_fft_72_s */
/* Demangled: DLB_r4_fft_72_s */
int DLB_r4_fft_72_s(void);

/* Symbol: DLB_Lpow05I16 */
/* Demangled: DLB_Lpow05I16 */
int DLB_Lpow05I16(void);

/* Symbol: DLB_Sqmf_synthesisCL */
/* Demangled: DLB_Sqmf_synthesisCL */
int DLB_Sqmf_synthesisCL(void);

/* Symbol: AC4DEC_ngcs_mode_input_channel_locs */
/* Demangled: AC4DEC_ngcs_mode_input_channel_locs */
int AC4DEC_ngcs_mode_input_channel_locs(void);

/* Symbol: AC4DEC_ac4toc_reader_feed */
/* Demangled: AC4DEC_ac4toc_reader_feed */
int AC4DEC_ac4toc_reader_feed(void);

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR44KHZ1_BS256S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR44KHZ1_BS256S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR44KHZ1_BS256S;

/* Symbol: AC4DEC_ac4dap_speaker_virtualizer_query_scratch */
/* Demangled: AC4DEC_ac4dap_speaker_virtualizer_query_scratch */
int AC4DEC_ac4dap_speaker_virtualizer_query_scratch(void);

/* Symbol: AC4DEC_acpldec_data_1ch_read */
/* Demangled: AC4DEC_acpldec_data_1ch_read */
int AC4DEC_acpldec_data_1ch_read(void);

/* Symbol: AC4DEC_tree_huff_code_ajcc_dry_coarse_dt */
/* Demangled: AC4DEC_tree_huff_code_ajcc_dry_coarse_dt */
extern void* AC4DEC_tree_huff_code_ajcc_dry_coarse_dt;

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: AC4DEC_ac4_brcalc_process */
/* Demangled: AC4DEC_ac4_brcalc_process */
int AC4DEC_ac4_brcalc_process(void);

/* Symbol: AC4DEC_delay_line_clvec_reset */
/* Demangled: AC4DEC_delay_line_clvec_reset */
int AC4DEC_delay_line_clvec_reset(void);

/* Symbol: AC4DEC_emdf_pack_programme_loudness_data */
/* Demangled: AC4DEC_emdf_pack_programme_loudness_data */
int AC4DEC_emdf_pack_programme_loudness_data(void);

/* Symbol: AC4DEC_WindowKBD64_alpha4_5 */
/* Demangled: AC4DEC_WindowKBD64_alpha4_5 */
extern void* AC4DEC_WindowKBD64_alpha4_5;

/* Symbol: dlb_dct_twiddle_table16_rev_L288 */
/* Demangled: dlb_dct_twiddle_table16_rev_L288 */
extern void* dlb_dct_twiddle_table16_rev_L288;

/* Symbol: AC4DEC_ac4toc_get_selected_presentation_v1_info */
/* Demangled: AC4DEC_ac4toc_get_selected_presentation_v1_info */
int AC4DEC_ac4toc_get_selected_presentation_v1_info(void);

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR44KHZ1_BS256S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR44KHZ1_BS256S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR44KHZ1_BS256S;

/* Symbol: AC4DEC_a_isf_bh_7_5_3_0_decode */
/* Demangled: AC4DEC_a_isf_bh_7_5_3_0_decode */
extern void* AC4DEC_a_isf_bh_7_5_3_0_decode;

/* Symbol: DLB_r4_inv_fft_256_s */
/* Demangled: DLB_r4_inv_fft_256_s */
int DLB_r4_inv_fft_256_s(void);

/* Symbol: dlb_dct_twiddle_table16_L512 */
/* Demangled: dlb_dct_twiddle_table16_L512 */
extern void* dlb_dct_twiddle_table16_L512;

/* Symbol: AC4DEC_ade_il_open */
/* Demangled: AC4DEC_ade_il_open */
int AC4DEC_ade_il_open(void);

/* Symbol: AC4DEC_oamd_z_extp_pos_unsigned_to_q15 */
/* Demangled: AC4DEC_oamd_z_extp_pos_unsigned_to_q15 */
extern void* AC4DEC_oamd_z_extp_pos_unsigned_to_q15;

/* Symbol: AC4DEC_huffdec_init */
/* Demangled: AC4DEC_huffdec_init */
int AC4DEC_huffdec_init(void);

/* Symbol: AC4DEC_IMS_BANDING_SCHEME_FDN_MR */
/* Demangled: AC4DEC_IMS_BANDING_SCHEME_FDN_MR */
extern void* AC4DEC_IMS_BANDING_SCHEME_FDN_MR;

/* Symbol: dlb_fft_fwd_scl_20 */
/* Demangled: dlb_fft_fwd_scl_20 */
int dlb_fft_fwd_scl_20(void);

/* Symbol: AC4DEC_ngcs_phase_shifter_get_rotation */
/* Demangled: AC4DEC_ngcs_phase_shifter_get_rotation */
int AC4DEC_ngcs_phase_shifter_get_rotation(void);

/* Symbol: dlb_dct_twiddle_table16_L30 */
/* Demangled: dlb_dct_twiddle_table16_L30 */
extern void* dlb_dct_twiddle_table16_L30;

/* Symbol: AC4DEC_metadata_delay_input_step */
/* Demangled: AC4DEC_metadata_delay_input_step */
int AC4DEC_metadata_delay_input_step(void);

/* Symbol: AC4DEC_oarq_process */
/* Demangled: AC4DEC_oarq_process */
int AC4DEC_oarq_process(void);

/* Symbol: dlb_dct_twiddle_table16_L4_cos */
/* Demangled: dlb_dct_twiddle_table16_L4_cos */
extern void* dlb_dct_twiddle_table16_L4_cos;

/* Symbol: AC4DEC_tree_huff_code_ajoc_dry_fine_f0 */
/* Demangled: AC4DEC_tree_huff_code_ajoc_dry_fine_f0 */
extern void* AC4DEC_tree_huff_code_ajoc_dry_fine_f0;

/* Symbol: AC4DEC_DELTA_SOURCE_POS_X_Y */
/* Demangled: AC4DEC_DELTA_SOURCE_POS_X_Y */
extern void* AC4DEC_DELTA_SOURCE_POS_X_Y;

/* Symbol: DLB_r4_fft_576_s */
/* Demangled: DLB_r4_fft_576_s */
int DLB_r4_fft_576_s(void);

/* Symbol: DLB_hybrid_analysisCL_close */
/* Demangled: DLB_hybrid_analysisCL_close */
int DLB_hybrid_analysisCL_close(void);

/* Symbol: dlb_dct_twiddle_table16_L32 */
/* Demangled: dlb_dct_twiddle_table16_L32 */
extern void* dlb_dct_twiddle_table16_L32;

/* Symbol: _ZN5dolby12Ac4DecClient13configChangedEv */
/* Demangled: dolby::Ac4DecClient::configChanged() */
int _ZN5dolby12Ac4DecClient13configChangedEv(void);

/* Symbol: AC4DEC_tree_huff_code_ajoc_dry_fine_dt */
/* Demangled: AC4DEC_tree_huff_code_ajoc_dry_fine_dt */
extern void* AC4DEC_tree_huff_code_ajoc_dry_fine_dt;

/* Symbol: dlb_fft_fwd_scl_24 */
/* Demangled: dlb_fft_fwd_scl_24 */
int dlb_fft_fwd_scl_24(void);

/* Symbol: AC4DEC_ph90_qmf_get_delay_slots */
/* Demangled: AC4DEC_ph90_qmf_get_delay_slots */
int AC4DEC_ph90_qmf_get_delay_slots(void);

/* Symbol: AC4DEC_asfdec_fill_noise */
/* Demangled: AC4DEC_asfdec_fill_noise */
int AC4DEC_asfdec_fill_noise(void);

/* Symbol: dlb_fft_inv_scl_30 */
/* Demangled: dlb_fft_inv_scl_30 */
int dlb_fft_inv_scl_30(void);

/* Symbol: AC4DEC_ims_sv_deq_band_start_index */
/* Demangled: AC4DEC_ims_sv_deq_band_start_index */
extern void* AC4DEC_ims_sv_deq_band_start_index;

/* Symbol: AC4DEC_acpldec_mdd_generate_dummy_data_2ch */
/* Demangled: AC4DEC_acpldec_mdd_generate_dummy_data_2ch */
int AC4DEC_acpldec_mdd_generate_dummy_data_2ch(void);

/* Symbol: DLB_blk_LminLLL_strict */
/* Demangled: DLB_blk_LminLLL_strict */
int DLB_blk_LminLLL_strict(void);

/* Symbol: dlb_fft_fwd_usc_120 */
/* Demangled: dlb_fft_fwd_usc_120 */
int dlb_fft_fwd_usc_120(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_get_version */
/* Demangled: AC4DEC_dlb_ac4dec_v1_get_version */
int AC4DEC_dlb_ac4dec_v1_get_version(void);

/* Symbol: dlb_dct_twiddle_table16_L36 */
/* Demangled: dlb_dct_twiddle_table16_L36 */
extern void* dlb_dct_twiddle_table16_L36;

/* Symbol: AC4DEC_tree_huff_code_aspx_env_level_30_df */
/* Demangled: AC4DEC_tree_huff_code_aspx_env_level_30_df */
extern void* AC4DEC_tree_huff_code_aspx_env_level_30_df;

/* Symbol: dlb_fft_inv_scl_32 */
/* Demangled: dlb_fft_inv_scl_32 */
int dlb_fft_inv_scl_32(void);

/* Symbol: AC4DEC_decorr_apply */
/* Demangled: AC4DEC_decorr_apply */
int AC4DEC_decorr_apply(void);

/* Symbol: dlb_unused_debug */
/* Demangled: dlb_unused_debug */
extern void* dlb_unused_debug;

/* Symbol: dlb_dct_twiddle_table16_L2 */
/* Demangled: dlb_dct_twiddle_table16_L2 */
extern void* dlb_dct_twiddle_table16_L2;

/* Symbol: AC4DEC_cx_allpass_init */
/* Demangled: AC4DEC_cx_allpass_init */
int AC4DEC_cx_allpass_init(void);

/* Symbol: dlb_ac4dec_v2_dec_get_flushing_status */
/* Demangled: dlb_ac4dec_v2_dec_get_flushing_status */
int dlb_ac4dec_v2_dec_get_flushing_status(void);

/* Symbol: AC4DEC_evo_ll_insert */
/* Demangled: AC4DEC_evo_ll_insert */
int AC4DEC_evo_ll_insert(void);

/* Symbol: dlb_fft_fwd_scl_960 */
/* Demangled: dlb_fft_fwd_scl_960 */
int dlb_fft_fwd_scl_960(void);

/* Symbol: AC4DEC_gain_calc_query_memory */
/* Demangled: AC4DEC_gain_calc_query_memory */
int AC4DEC_gain_calc_query_memory(void);

/* Symbol: AC4DEC_leveler_init */
/* Demangled: AC4DEC_leveler_init */
int AC4DEC_leveler_init(void);

/* Symbol: dlb_dct_twiddle_table16_L4 */
/* Demangled: dlb_dct_twiddle_table16_L4 */
extern void* dlb_dct_twiddle_table16_L4;

/* Symbol: DLB_r4_inv_fft_640_s */
/* Demangled: DLB_r4_inv_fft_640_s */
int DLB_r4_inv_fft_640_s(void);

/* Symbol: AC4DEC_crctab */
/* Demangled: AC4DEC_crctab */
extern void* AC4DEC_crctab;

/* Symbol: AC4DEC_P_PHASE_SHIFT_2TO7CH */
/* Demangled: AC4DEC_P_PHASE_SHIFT_2TO7CH */
extern void* AC4DEC_P_PHASE_SHIFT_2TO7CH;

/* Symbol: AC4DEC_qextract_init */
/* Demangled: AC4DEC_qextract_init */
int AC4DEC_qextract_init(void);

/* Symbol: AC4DEC_loud_get_loud_corr */
/* Demangled: AC4DEC_loud_get_loud_corr */
int AC4DEC_loud_get_loud_corr(void);

/* Symbol: AC4DEC_dvlim_get_peak */
/* Demangled: AC4DEC_dvlim_get_peak */
int AC4DEC_dvlim_get_peak(void);

/* Symbol: dlb_fft_inv_scl_36 */
/* Demangled: dlb_fft_inv_scl_36 */
int dlb_fft_inv_scl_36(void);

/* Symbol: dlb_fft_inv_scl_256 */
/* Demangled: dlb_fft_inv_scl_256 */
int dlb_fft_inv_scl_256(void);

/* Symbol: AC4DEC_aspx_data_2ch_read */
/* Demangled: AC4DEC_aspx_data_2ch_read */
int AC4DEC_aspx_data_2ch_read(void);

/* Symbol: DLB_blk_LmixLLLL_strict */
/* Demangled: DLB_blk_LmixLLLL_strict */
int DLB_blk_LmixLLLL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L640 */
/* Demangled: dlb_dct_twiddle_table16_rev_L640 */
extern void* dlb_dct_twiddle_table16_rev_L640;

/* Symbol: AC4DEC_arle_distortion_init */
/* Demangled: AC4DEC_arle_distortion_init */
int AC4DEC_arle_distortion_init(void);

/* Symbol: AC4DEC_PA_DIFFUSE_NO_DECORR_2TO6CH */
/* Demangled: AC4DEC_PA_DIFFUSE_NO_DECORR_2TO6CH */
extern void* AC4DEC_PA_DIFFUSE_NO_DECORR_2TO6CH;

/* Symbol: AC4DEC_acpldec_open */
/* Demangled: AC4DEC_acpldec_open */
int AC4DEC_acpldec_open(void);

/* Symbol: AC4DEC_ajoc_dmx_de_data_read */
/* Demangled: AC4DEC_ajoc_dmx_de_data_read */
int AC4DEC_ajoc_dmx_de_data_read(void);

/* Symbol: AC4DEC_dapil_drc_params_convert */
/* Demangled: AC4DEC_dapil_drc_params_convert */
int AC4DEC_dapil_drc_params_convert(void);

/* Symbol: dlb_dct_twiddle_table16_L16_1 */
/* Demangled: dlb_dct_twiddle_table16_L16_1 */
extern void* dlb_dct_twiddle_table16_L16_1;

/* Symbol: AC4DEC_WindowKBD120_alpha5_0 */
/* Demangled: AC4DEC_WindowKBD120_alpha5_0 */
extern void* AC4DEC_WindowKBD120_alpha5_0;

/* Symbol: AC4DEC_oamdi_set_trim_config */
/* Demangled: AC4DEC_oamdi_set_trim_config */
int AC4DEC_oamdi_set_trim_config(void);

/* Symbol: DLB_mfb_p10km_analysisL_query_mem */
/* Demangled: DLB_mfb_p10km_analysisL_query_mem */
int DLB_mfb_p10km_analysisL_query_mem(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_input_stage_open */
/* Demangled: AC4DEC_dlb_ac4dec_v1_input_stage_open */
int AC4DEC_dlb_ac4dec_v1_input_stage_open(void);

/* Symbol: dlb_dct_twiddle_table16_L16_2 */
/* Demangled: dlb_dct_twiddle_table16_L16_2 */
extern void* dlb_dct_twiddle_table16_L16_2;

/* Symbol: dlb_dct_twiddle_table16_L8 */
/* Demangled: dlb_dct_twiddle_table16_L8 */
extern void* dlb_dct_twiddle_table16_L8;

/* Symbol: DLB_Lqmf_synthesisCL */
/* Demangled: DLB_Lqmf_synthesisCL */
int DLB_Lqmf_synthesisCL(void);

/* Symbol: AC4DEC_tree_huff_code_aspx_noise_level_df */
/* Demangled: AC4DEC_tree_huff_code_aspx_noise_level_df */
extern void* AC4DEC_tree_huff_code_aspx_noise_level_df;

/* Symbol: dlb_fft_fwd_usc_128 */
/* Demangled: dlb_fft_fwd_usc_128 */
int dlb_fft_fwd_usc_128(void);

/* Symbol: dlb_fft_inv_usc_1024 */
/* Demangled: dlb_fft_inv_usc_1024 */
int dlb_fft_inv_usc_1024(void);

/* Symbol: AC4DEC_WRAPPER_DEFAULT_TIMESCALE */
/* Demangled: AC4DEC_WRAPPER_DEFAULT_TIMESCALE */
extern void* AC4DEC_WRAPPER_DEFAULT_TIMESCALE;

/* Symbol: DLB_r4_fft_960_s */
/* Demangled: DLB_r4_fft_960_s */
int DLB_r4_fft_960_s(void);

/* Symbol: DLB_Lqmf_synthesisL */
/* Demangled: DLB_Lqmf_synthesisL */
int DLB_Lqmf_synthesisL(void);

/* Symbol: AC4DEC_beta_quant_table_fine */
/* Demangled: AC4DEC_beta_quant_table_fine */
extern void* AC4DEC_beta_quant_table_fine;

/* Symbol: AC4DEC_evo_ll_init */
/* Demangled: AC4DEC_evo_ll_init */
int AC4DEC_evo_ll_init(void);

/* Symbol: DLB_r4_inv_fft_20 */
/* Demangled: DLB_r4_inv_fft_20 */
int DLB_r4_inv_fft_20(void);

/* Symbol: DLB_r4_inv_fft_480_s */
/* Demangled: DLB_r4_inv_fft_480_s */
int DLB_r4_inv_fft_480_s(void);

/* Symbol: _ZTVN7android10AC4Decoder16DolbyMediaBufferE */
/* Demangled: vtable for android::AC4Decoder::DolbyMediaBuffer */
extern void* _ZTVN7android10AC4Decoder16DolbyMediaBufferE;

/* Symbol: AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR48KHZ */
/* Demangled: AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR48KHZ */
extern void* AC4DEC_BF1_FDN_HPVIRT_TUNING_ROOM_COEF_SR48KHZ;

/* Symbol: AC4DEC_dap_mathlib_Llogsmooth2LL */
/* Demangled: AC4DEC_dap_mathlib_Llogsmooth2LL */
int AC4DEC_dap_mathlib_Llogsmooth2LL(void);

/* Symbol: AC4DEC_ajcc_pb15_qmf_table */
/* Demangled: AC4DEC_ajcc_pb15_qmf_table */
extern void* AC4DEC_ajcc_pb15_qmf_table;

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_vec_syn;

/* Symbol: AC4DEC_qmf_to_par_band_table */
/* Demangled: AC4DEC_qmf_to_par_band_table */
extern void* AC4DEC_qmf_to_par_band_table;

/* Symbol: AC4DEC_ade_il_get_ade_gain_hist */
/* Demangled: AC4DEC_ade_il_get_ade_gain_hist */
int AC4DEC_ade_il_get_ade_gain_hist(void);

/* Symbol: AC4DEC_tree_huff_code_aspx_env_level_30_f0 */
/* Demangled: AC4DEC_tree_huff_code_aspx_env_level_30_f0 */
extern void* AC4DEC_tree_huff_code_aspx_env_level_30_f0;

/* Symbol: AC4DEC_ac4toc_reader_new_program */
/* Demangled: AC4DEC_ac4toc_reader_new_program */
int AC4DEC_ac4toc_reader_new_program(void);

/* Symbol: AC4DEC_ajoc_read */
/* Demangled: AC4DEC_ajoc_read */
int AC4DEC_ajoc_read(void);

/* Symbol: DLB_r4_inv_fft_24 */
/* Demangled: DLB_r4_inv_fft_24 */
int DLB_r4_inv_fft_24(void);

/* Symbol: dlb_fft_fwd_scl_240 */
/* Demangled: dlb_fft_fwd_scl_240 */
int dlb_fft_fwd_scl_240(void);

/* Symbol: dlb_cos_8_full */
/* Demangled: dlb_cos_8_full */
extern void* dlb_cos_8_full;

/* Symbol: AC4DEC_delay_line_clvec_size_query */
/* Demangled: AC4DEC_delay_line_clvec_size_query */
int AC4DEC_delay_line_clvec_size_query(void);

/* Symbol: AC4DEC_dvlim_set_num_channels */
/* Demangled: AC4DEC_dvlim_set_num_channels */
int AC4DEC_dvlim_set_num_channels(void);

/* Symbol: AC4DEC_tree_huff_code_aspx_env_level_30_dt */
/* Demangled: AC4DEC_tree_huff_code_aspx_env_level_30_dt */
extern void* AC4DEC_tree_huff_code_aspx_env_level_30_dt;

/* Symbol: DLB_blk_Lcrossfade_gainLS_strict */
/* Demangled: DLB_blk_Lcrossfade_gainLS_strict */
int DLB_blk_Lcrossfade_gainLS_strict(void);

/* Symbol: AC4DEC_dlb_bitbuf_set_abs_pos */
/* Demangled: AC4DEC_dlb_bitbuf_set_abs_pos */
int AC4DEC_dlb_bitbuf_set_abs_pos(void);

/* Symbol: AC4DEC_decorr_index_core_mode */
/* Demangled: AC4DEC_decorr_index_core_mode */
extern void* AC4DEC_decorr_index_core_mode;

/* Symbol: AC4DEC_drc_mdd_generate_dummy */
/* Demangled: AC4DEC_drc_mdd_generate_dummy */
int AC4DEC_drc_mdd_generate_dummy(void);

/* Symbol: DLB_qmf_synthesisL_init */
/* Demangled: DLB_qmf_synthesisL_init */
int DLB_qmf_synthesisL_init(void);

/* Symbol: AC4DEC_ac4toc_reader_get_toc_info */
/* Demangled: AC4DEC_ac4toc_reader_get_toc_info */
int AC4DEC_ac4toc_reader_get_toc_info(void);

/* Symbol: AC4DEC_hp_height_reverb_reset */
/* Demangled: AC4DEC_hp_height_reverb_reset */
int AC4DEC_hp_height_reverb_reset(void);

/* Symbol: AC4DEC_memlib_pool_get_type */
/* Demangled: AC4DEC_memlib_pool_get_type */
int AC4DEC_memlib_pool_get_type(void);

/* Symbol: AC4DEC_dapil_open */
/* Demangled: AC4DEC_dapil_open */
int AC4DEC_dapil_open(void);

/* Symbol: AC4DEC_qextract_convert_coefs */
/* Demangled: AC4DEC_qextract_convert_coefs */
int AC4DEC_qextract_convert_coefs(void);

/* Symbol: _ZN5dolby16Ac4DynamicConfigD0Ev */
/* Demangled: dolby::Ac4DynamicConfig::~Ac4DynamicConfig() */
int _ZN5dolby16Ac4DynamicConfigD0Ev(void);

/* Symbol: AC4DEC_dlb_bitbuf_peek_long */
/* Demangled: AC4DEC_dlb_bitbuf_peek_long */
int AC4DEC_dlb_bitbuf_peek_long(void);

/* Symbol: dlb_dct_twiddle_table16_1_L24 */
/* Demangled: dlb_dct_twiddle_table16_1_L24 */
extern void* dlb_dct_twiddle_table16_1_L24;

/* Symbol: dlb_dct_twiddle_table16_rev_L60 */
/* Demangled: dlb_dct_twiddle_table16_rev_L60 */
extern void* dlb_dct_twiddle_table16_rev_L60;

/* Symbol: AC4DEC_memlib_init */
/* Demangled: AC4DEC_memlib_init */
int AC4DEC_memlib_init(void);

/* Symbol: AC4DEC_oamd_common_data_init */
/* Demangled: AC4DEC_oamd_common_data_init */
int AC4DEC_oamd_common_data_init(void);

/* Symbol: DLB_CLshlCLUU_strict */
/* Demangled: DLB_CLshlCLUU_strict */
int DLB_CLshlCLUU_strict(void);

/* Symbol: DLB_r4_inv_fft_36_s */
/* Demangled: DLB_r4_inv_fft_36_s */
int DLB_r4_inv_fft_36_s(void);

/* Symbol: AC4DEC_emdf_add_emdf_pl_substream_info */
/* Demangled: AC4DEC_emdf_add_emdf_pl_substream_info */
int AC4DEC_emdf_add_emdf_pl_substream_info(void);

/* Symbol: AC4DEC_ims_il_close */
/* Demangled: AC4DEC_ims_il_close */
int AC4DEC_ims_il_close(void);

/* Symbol: AC4DEC_tree_huff_code_aspx_noise_level_f0 */
/* Demangled: AC4DEC_tree_huff_code_aspx_noise_level_f0 */
extern void* AC4DEC_tree_huff_code_aspx_noise_level_f0;

/* Symbol: DLB_r4_inv_fft_2_s */
/* Demangled: DLB_r4_inv_fft_2_s */
int DLB_r4_inv_fft_2_s(void);

/* Symbol: dlb_inverseModulationComplex */
/* Demangled: dlb_inverseModulationComplex */
int dlb_inverseModulationComplex(void);

/* Symbol: dlb_ac4dec_v2_dec_get_phase90_status */
/* Demangled: dlb_ac4dec_v2_dec_get_phase90_status */
int dlb_ac4dec_v2_dec_get_phase90_status(void);

/* Symbol: AC4DEC_ac4dec_input_stage_process_init */
/* Demangled: AC4DEC_ac4dec_input_stage_process_init */
int AC4DEC_ac4dec_input_stage_process_init(void);

/* Symbol: DLB_r4_fft_180 */
/* Demangled: DLB_r4_fft_180 */
int DLB_r4_fft_180(void);

/* Symbol: AC4DEC_ade_process */
/* Demangled: AC4DEC_ade_process */
int AC4DEC_ade_process(void);

/* Symbol: AC4DEC_tree_huff_code_aspx_noise_level_dt */
/* Demangled: AC4DEC_tree_huff_code_aspx_noise_level_dt */
extern void* AC4DEC_tree_huff_code_aspx_noise_level_dt;

/* Symbol: AC4DEC_WindowKBD96 */
/* Demangled: AC4DEC_WindowKBD96 */
extern void* AC4DEC_WindowKBD96;

/* Symbol: AC4DEC_oamdi_get_signed_pos_codes */
/* Demangled: AC4DEC_oamdi_get_signed_pos_codes */
int AC4DEC_oamdi_get_signed_pos_codes(void);

/* Symbol: dlb_blk_Liir1_shlLU_flex */
/* Demangled: dlb_blk_Liir1_shlLU_flex */
int dlb_blk_Liir1_shlLU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L64 */
/* Demangled: dlb_dct_twiddle_table16_rev_L64 */
extern void* dlb_dct_twiddle_table16_rev_L64;

/* Symbol: DLB_r4_inv_fft_40_s */
/* Demangled: DLB_r4_inv_fft_40_s */
int DLB_r4_inv_fft_40_s(void);

/* Symbol: dlb_fft_inv_usc_144 */
/* Demangled: dlb_fft_inv_usc_144 */
int dlb_fft_inv_usc_144(void);

/* Symbol: AC4DEC_sone_buffer_init */
/* Demangled: AC4DEC_sone_buffer_init */
int AC4DEC_sone_buffer_init(void);

/* Symbol: AC4DEC_CHANNEL_MAP_1_0 */
/* Demangled: AC4DEC_CHANNEL_MAP_1_0 */
extern void* AC4DEC_CHANNEL_MAP_1_0;

/* Symbol: AC4DEC_omg_width_gains_get */
/* Demangled: AC4DEC_omg_width_gains_get */
int AC4DEC_omg_width_gains_get(void);

/* Symbol: AC4DEC_oamdi_get_oa_element_object_description */
/* Demangled: AC4DEC_oamdi_get_oa_element_object_description */
int AC4DEC_oamdi_get_oa_element_object_description(void);

/* Symbol: dlb_fft_inv_usc_12 */
/* Demangled: dlb_fft_inv_usc_12 */
int dlb_fft_inv_usc_12(void);

/* Symbol: AC4DEC_oamd_6bit_unsigned_to_oari_Q15 */
/* Demangled: AC4DEC_oamd_6bit_unsigned_to_oari_Q15 */
extern void* AC4DEC_oamd_6bit_unsigned_to_oari_Q15;

/* Symbol: dlb_CLCLmix4CL8SU_flex */
/* Demangled: dlb_CLCLmix4CL8SU_flex */
int dlb_CLCLmix4CL8SU_flex(void);

/* Symbol: AC4DEC_ac4dec_input_stage_alloc */
/* Demangled: AC4DEC_ac4dec_input_stage_alloc */
int AC4DEC_ac4dec_input_stage_alloc(void);

/* Symbol: AC4DEC_WindowKBD384 */
/* Demangled: AC4DEC_WindowKBD384 */
extern void* AC4DEC_WindowKBD384;

/* Symbol: dlb_CLmpyCLSU_flex */
/* Demangled: dlb_CLmpyCLSU_flex */
int dlb_CLmpyCLSU_flex(void);

/* Symbol: DLB_CLmpyCLVSU_strict */
/* Demangled: DLB_CLmpyCLVSU_strict */
int DLB_CLmpyCLVSU_strict(void);

/* Symbol: AC4DEC_ac4dap_query_scratch */
/* Demangled: AC4DEC_ac4dap_query_scratch */
int AC4DEC_ac4dap_query_scratch(void);

/* Symbol: AC4DEC_legq_clip_gains */
/* Demangled: AC4DEC_legq_clip_gains */
int AC4DEC_legq_clip_gains(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L12 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L12 */
extern void* dlb_dct_twiddle_table16_rev_1_L12;

/* Symbol: dlb_fft_fwd_scl_30 */
/* Demangled: dlb_fft_fwd_scl_30 */
int dlb_fft_fwd_scl_30(void);

/* Symbol: dlb_fft_inv_usc_15 */
/* Demangled: dlb_fft_inv_usc_15 */
int dlb_fft_inv_usc_15(void);

/* Symbol: dlb_fft_fwd_scl_1024 */
/* Demangled: dlb_fft_fwd_scl_1024 */
int dlb_fft_fwd_scl_1024(void);

/* Symbol: dlb_ac4dec_v2_open */
/* Demangled: dlb_ac4dec_v2_open */
int dlb_ac4dec_v2_open(void);

/* Symbol: AC4DEC_memlib_alloc_mem_section */
/* Demangled: AC4DEC_memlib_alloc_mem_section */
int AC4DEC_memlib_alloc_mem_section(void);

/* Symbol: AC4DEC_delay_line_lfract_initialize */
/* Demangled: AC4DEC_delay_line_lfract_initialize */
int AC4DEC_delay_line_lfract_initialize(void);

/* Symbol: AC4DEC_ssfdec_process */
/* Demangled: AC4DEC_ssfdec_process */
int AC4DEC_ssfdec_process(void);

/* Symbol: dlb_fft_inv_usc_16 */
/* Demangled: dlb_fft_inv_usc_16 */
int dlb_fft_inv_usc_16(void);

/* Symbol: DLB_time_sub */
/* Demangled: DLB_time_sub */
int DLB_time_sub(void);

/* Symbol: AC4DEC_ajcc_num_param_bands */
/* Demangled: AC4DEC_ajcc_num_param_bands */
extern void* AC4DEC_ajcc_num_param_bands;

/* Symbol: AC4DEC_expd_pow_7_13 */
/* Demangled: AC4DEC_expd_pow_7_13 */
int AC4DEC_expd_pow_7_13(void);

/* Symbol: AC4DEC_loud_loud_corr_init */
/* Demangled: AC4DEC_loud_loud_corr_init */
int AC4DEC_loud_loud_corr_init(void);

/* Symbol: AC4DEC_pcm_check_pcm_buffer_data_type */
/* Demangled: AC4DEC_pcm_check_pcm_buffer_data_type */
int AC4DEC_pcm_check_pcm_buffer_data_type(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L768 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L768 */
extern void* dlb_dct_twiddle_table16_rev_1_L768;

/* Symbol: dlb_fft_fwd_scl_32 */
/* Demangled: dlb_fft_fwd_scl_32 */
int dlb_fft_fwd_scl_32(void);

/* Symbol: dlb_cos_64_full_scl */
/* Demangled: dlb_cos_64_full_scl */
extern void* dlb_cos_64_full_scl;

/* Symbol: AC4DEC_omg_panner_program_metadata_set */
/* Demangled: AC4DEC_omg_panner_program_metadata_set */
int AC4DEC_omg_panner_program_metadata_set(void);

/* Symbol: AC4DEC_omg_speaker_count_get */
/* Demangled: AC4DEC_omg_speaker_count_get */
int AC4DEC_omg_speaker_count_get(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L15 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L15 */
extern void* dlb_dct_twiddle_table16_rev_1_L15;

/* Symbol: dlb_fft_inv_usc_320 */
/* Demangled: dlb_fft_inv_usc_320 */
int dlb_fft_inv_usc_320(void);

/* Symbol: AC4DEC_ade_il_init */
/* Demangled: AC4DEC_ade_il_init */
int AC4DEC_ade_il_init(void);

/* Symbol: AC4DEC_drc_gains_init */
/* Demangled: AC4DEC_drc_gains_init */
int AC4DEC_drc_gains_init(void);

/* Symbol: AC4DEC_mdct_time_to_freq */
/* Demangled: AC4DEC_mdct_time_to_freq */
int AC4DEC_mdct_time_to_freq(void);

/* Symbol: AC4DEC_a_non_reorder */
/* Demangled: AC4DEC_a_non_reorder */
extern void* AC4DEC_a_non_reorder;

/* Symbol: dlb_vec_Labs_maxLU_flex */
/* Demangled: dlb_vec_Labs_maxLU_flex */
int dlb_vec_Labs_maxLU_flex(void);

/* Symbol: dlb_blk_Liir1xL_flex */
/* Demangled: dlb_blk_Liir1xL_flex */
int dlb_blk_Liir1xL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L16 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L16 */
extern void* dlb_dct_twiddle_table16_rev_1_L16;

/* Symbol: DLB_r4_fft_12 */
/* Demangled: DLB_r4_fft_12 */
int DLB_r4_fft_12(void);

/* Symbol: dlb_qmf_analysisS_open */
/* Demangled: dlb_qmf_analysisS_open */
int dlb_qmf_analysisS_open(void);

/* Symbol: initexecparams */
/* Demangled: initexecparams */
int initexecparams(void);

/* Symbol: AC4DEC_de_query_memory */
/* Demangled: AC4DEC_de_query_memory */
int AC4DEC_de_query_memory(void);

/* Symbol: AC4DEC_AA_NGCS_SEG_CHANNELS_5TO7CH */
/* Demangled: AC4DEC_AA_NGCS_SEG_CHANNELS_5TO7CH */
extern void* AC4DEC_AA_NGCS_SEG_CHANNELS_5TO7CH;

/* Symbol: AC4DEC_size_panner_query_scratch */
/* Demangled: AC4DEC_size_panner_query_scratch */
int AC4DEC_size_panner_query_scratch(void);

/* Symbol: dlb_fft_inv_scl_40 */
/* Demangled: dlb_fft_inv_scl_40 */
int dlb_fft_inv_scl_40(void);

/* Symbol: AC4DEC_ac4dap_split_drc_params */
/* Demangled: AC4DEC_ac4dap_split_drc_params */
int AC4DEC_ac4dap_split_drc_params(void);

/* Symbol: AC4DEC_ac4dap_process_log_content_close */
/* Demangled: AC4DEC_ac4dap_process_log_content_close */
int AC4DEC_ac4dap_process_log_content_close(void);

/* Symbol: AC4DEC_decoder_set_loud_pres_de_enable */
/* Demangled: AC4DEC_decoder_set_loud_pres_de_enable */
int AC4DEC_decoder_set_loud_pres_de_enable(void);

/* Symbol: dlb_dct_twiddle_table16_L45 */
/* Demangled: dlb_dct_twiddle_table16_L45 */
extern void* dlb_dct_twiddle_table16_L45;

/* Symbol: DLB_r4_fft_360 */
/* Demangled: DLB_r4_fft_360 */
int DLB_r4_fft_360(void);

/* Symbol: dlb_fft_fwd_scl_36 */
/* Demangled: dlb_fft_fwd_scl_36 */
int dlb_fft_fwd_scl_36(void);

/* Symbol: dlb_forwardModulationComplex */
/* Demangled: dlb_forwardModulationComplex */
int dlb_forwardModulationComplex(void);

/* Symbol: AC4DEC_ac4framer_query_mem */
/* Demangled: AC4DEC_ac4framer_query_mem */
int AC4DEC_ac4framer_query_mem(void);

/* Symbol: AC4DEC_acpldec_config_2ch_read */
/* Demangled: AC4DEC_acpldec_config_2ch_read */
int AC4DEC_acpldec_config_2ch_read(void);

/* Symbol: AC4DEC_pred_lag_tab */
/* Demangled: AC4DEC_pred_lag_tab */
extern void* AC4DEC_pred_lag_tab;

/* Symbol: dlb_dct_twiddle_table16_rev_L2 */
/* Demangled: dlb_dct_twiddle_table16_rev_L2 */
extern void* dlb_dct_twiddle_table16_rev_L2;

/* Symbol: DLB_r4_fft_15 */
/* Demangled: DLB_r4_fft_15 */
int DLB_r4_fft_15(void);

/* Symbol: dlb_dct_twiddle_table16_L120_1 */
/* Demangled: dlb_dct_twiddle_table16_L120_1 */
extern void* dlb_dct_twiddle_table16_L120_1;

/* Symbol: AC4DEC_a_s_indices */
/* Demangled: AC4DEC_a_s_indices */
extern void* AC4DEC_a_s_indices;

/* Symbol: AC4DEC_oamdi_get_bed_object_presence */
/* Demangled: AC4DEC_oamdi_get_bed_object_presence */
int AC4DEC_oamdi_get_bed_object_presence(void);

/* Symbol: DLB_r4_fft_16 */
/* Demangled: DLB_r4_fft_16 */
int DLB_r4_fft_16(void);

/* Symbol: dlb_dct_twiddle_table16_L120_2 */
/* Demangled: dlb_dct_twiddle_table16_L120_2 */
extern void* dlb_dct_twiddle_table16_L120_2;

/* Symbol: dlb_dct_twiddle_table16_L48 */
/* Demangled: dlb_dct_twiddle_table16_L48 */
extern void* dlb_dct_twiddle_table16_L48;

/* Symbol: AC4DEC_ac4dec_preso_get_ac4_presentation_substream */
/* Demangled: AC4DEC_ac4dec_preso_get_ac4_presentation_substream */
int AC4DEC_ac4dec_preso_get_ac4_presentation_substream(void);

/* Symbol: AC4DEC_A_ROOM_CONFIG_SPKS_FRONT */
/* Demangled: AC4DEC_A_ROOM_CONFIG_SPKS_FRONT */
extern void* AC4DEC_A_ROOM_CONFIG_SPKS_FRONT;

/* Symbol: dlb_dct_twiddle_table16_rev_L4 */
/* Demangled: dlb_dct_twiddle_table16_rev_L4 */
extern void* dlb_dct_twiddle_table16_rev_L4;

/* Symbol: DLB_fft_CLinv_unscaledCL */
/* Demangled: DLB_fft_CLinv_unscaledCL */
int DLB_fft_CLinv_unscaledCL(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_init */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_init */
int DLB_Lmfb_p10km_synthesisCL_init(void);

/* Symbol: AC4DEC_dvlim_get_target_gain */
/* Demangled: AC4DEC_dvlim_get_target_gain */
int AC4DEC_dvlim_get_target_gain(void);

/* Symbol: DLB_cvec_Lmpy_conjLLIU_strict */
/* Demangled: DLB_cvec_Lmpy_conjLLIU_strict */
int DLB_cvec_Lmpy_conjLLIU_strict(void);

/* Symbol: dlb_fft_inv_scl_45 */
/* Demangled: dlb_fft_inv_scl_45 */
int dlb_fft_inv_scl_45(void);

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_322_0 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_322_0 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_322_0;

/* Symbol: AC4DEC_de_read */
/* Demangled: AC4DEC_de_read */
int AC4DEC_de_read(void);

/* Symbol: AC4DEC_offsets_tab */
/* Demangled: AC4DEC_offsets_tab */
extern void* AC4DEC_offsets_tab;

/* Symbol: AC4DEC_dyn_objs_prog_only */
/* Demangled: AC4DEC_dyn_objs_prog_only */
int AC4DEC_dyn_objs_prog_only(void);

/* Symbol: AC4DEC_oamdi_truncate_from_Q15 */
/* Demangled: AC4DEC_oamdi_truncate_from_Q15 */
int AC4DEC_oamdi_truncate_from_Q15(void);

/* Symbol: DLB_MFB_TWID256E */
/* Demangled: DLB_MFB_TWID256E */
extern void* DLB_MFB_TWID256E;

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_322_1 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_322_1 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_322_1;

/* Symbol: AC4DEC_WindowKBD256_alpha3_0 */
/* Demangled: AC4DEC_WindowKBD256_alpha3_0 */
extern void* AC4DEC_WindowKBD256_alpha3_0;

/* Symbol: AC4DEC_WindowKBD480_alpha4_0 */
/* Demangled: AC4DEC_WindowKBD480_alpha4_0 */
extern void* AC4DEC_WindowKBD480_alpha4_0;

/* Symbol: DLB_blk_Lmix_shlUnL_strict */
/* Demangled: DLB_blk_Lmix_shlUnL_strict */
int DLB_blk_Lmix_shlUnL_strict(void);

/* Symbol: AC4DEC_AA_DIFFUSE_DECORR_2TO6CH */
/* Demangled: AC4DEC_AA_DIFFUSE_DECORR_2TO6CH */
extern void* AC4DEC_AA_DIFFUSE_DECORR_2TO6CH;

/* Symbol: AC4DEC_sha256_do_hash */
/* Demangled: AC4DEC_sha256_do_hash */
int AC4DEC_sha256_do_hash(void);

/* Symbol: AC4DEC_evo_verify_hmac */
/* Demangled: AC4DEC_evo_verify_hmac */
int AC4DEC_evo_verify_hmac(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L8 */
/* Demangled: dlb_dct_twiddle_table16_rev_L8 */
extern void* dlb_dct_twiddle_table16_rev_L8;

/* Symbol: dlb_fft_inv_scl_48 */
/* Demangled: dlb_fft_inv_scl_48 */
int dlb_fft_inv_scl_48(void);

/* Symbol: _ZN5dolby12Ac4DecClient17ac4dec_xfer_tableEPhjh */
/* Demangled: dolby::Ac4DecClient::ac4dec_xfer_table(unsigned char*, unsigned int, unsigned char) */
int _ZN5dolby12Ac4DecClient17ac4dec_xfer_tableEPhjh(void);

/* Symbol: AC4DEC_imsdec_reset */
/* Demangled: AC4DEC_imsdec_reset */
int AC4DEC_imsdec_reset(void);

/* Symbol: AC4DEC_speaker_config_index_find */
/* Demangled: AC4DEC_speaker_config_index_find */
int AC4DEC_speaker_config_index_find(void);

/* Symbol: DLB_r4_inv_fft_96_s */
/* Demangled: DLB_r4_inv_fft_96_s */
int DLB_r4_inv_fft_96_s(void);

/* Symbol: dlb_forwardModulationReal */
/* Demangled: dlb_forwardModulationReal */
int dlb_forwardModulationReal(void);

/* Symbol: AC4DEC_ac4toc_reader_get_version */
/* Demangled: AC4DEC_ac4toc_reader_get_version */
int AC4DEC_ac4toc_reader_get_version(void);

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR48KHZ_BS192S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR48KHZ_BS192S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_SR48KHZ_BS192S;

/* Symbol: dlb_ac4dec_v2_dec_get_active_presentation */
/* Demangled: dlb_ac4dec_v2_dec_get_active_presentation */
int dlb_ac4dec_v2_dec_get_active_presentation(void);

/* Symbol: DLB_r4_inv_fft_30 */
/* Demangled: DLB_r4_inv_fft_30 */
int DLB_r4_inv_fft_30(void);

/* Symbol: AC4DEC_volume_and_ieq_process */
/* Demangled: AC4DEC_volume_and_ieq_process */
int AC4DEC_volume_and_ieq_process(void);

/* Symbol: AC4DEC_oamdi_get_oa_element_dimensional_trim */
/* Demangled: AC4DEC_oamdi_get_oa_element_dimensional_trim */
int AC4DEC_oamdi_get_oa_element_dimensional_trim(void);

/* Symbol: AC4DEC_isf_decoder_compute_trim */
/* Demangled: AC4DEC_isf_decoder_compute_trim */
int AC4DEC_isf_decoder_compute_trim(void);

/* Symbol: dlb_ac4dec_v2_presentation_selection_set_index */
/* Demangled: dlb_ac4dec_v2_presentation_selection_set_index */
int dlb_ac4dec_v2_presentation_selection_set_index(void);

/* Symbol: AC4DEC_acpldec_init */
/* Demangled: AC4DEC_acpldec_init */
int AC4DEC_acpldec_init(void);

/* Symbol: AC4DEC_unpack_envelope */
/* Demangled: AC4DEC_unpack_envelope */
int AC4DEC_unpack_envelope(void);

/* Symbol: AC4DEC_dvlim_get_sample_rate */
/* Demangled: AC4DEC_dvlim_get_sample_rate */
int AC4DEC_dvlim_get_sample_rate(void);

/* Symbol: DLB_r4_inv_fft_384_s */
/* Demangled: DLB_r4_inv_fft_384_s */
int DLB_r4_inv_fft_384_s(void);

/* Symbol: DLB_r4_inv_fft_32 */
/* Demangled: DLB_r4_inv_fft_32 */
int DLB_r4_inv_fft_32(void);

/* Symbol: AC4DEC_oamdi_set_has_oa_element_bed_object */
/* Demangled: AC4DEC_oamdi_set_has_oa_element_bed_object */
int AC4DEC_oamdi_set_has_oa_element_bed_object(void);

/* Symbol: AC4DEC_omg_speaker_position_get */
/* Demangled: AC4DEC_omg_speaker_position_get */
int AC4DEC_omg_speaker_position_get(void);

/* Symbol: DLB_r4_fft_2048 */
/* Demangled: DLB_r4_fft_2048 */
int DLB_r4_fft_2048(void);

/* Symbol: DLB_hybrid_analysisCL_shl */
/* Demangled: DLB_hybrid_analysisCL_shl */
int DLB_hybrid_analysisCL_shl(void);

/* Symbol: AC4DEC_sv_coefs_query_memory */
/* Demangled: AC4DEC_sv_coefs_query_memory */
int AC4DEC_sv_coefs_query_memory(void);

/* Symbol: AC4DEC_dequantize_ajoc_mtxwet_values */
/* Demangled: AC4DEC_dequantize_ajoc_mtxwet_values */
int AC4DEC_dequantize_ajoc_mtxwet_values(void);

/* Symbol: AC4DEC_a_spec_exp_mant_table_comb */
/* Demangled: AC4DEC_a_spec_exp_mant_table_comb */
extern void* AC4DEC_a_spec_exp_mant_table_comb;

/* Symbol: dlb_dct_twiddle_table16_1_L30 */
/* Demangled: dlb_dct_twiddle_table16_1_L30 */
extern void* dlb_dct_twiddle_table16_1_L30;

/* Symbol: _ZN7android10AC4Decoder9getConfigE13OMX_INDEXTYPEPv */
/* Demangled: android::AC4Decoder::getConfig(OMX_INDEXTYPE, void*) */
int _ZN7android10AC4Decoder9getConfigE13OMX_INDEXTYPEPv(void);

/* Symbol: dlb_ac4dec_v2_dec_set_target_reference_level */
/* Demangled: dlb_ac4dec_v2_dec_set_target_reference_level */
int dlb_ac4dec_v2_dec_set_target_reference_level(void);

/* Symbol: AC4DEC_aspx_process_2ch */
/* Demangled: AC4DEC_aspx_process_2ch */
int AC4DEC_aspx_process_2ch(void);

/* Symbol: AC4DEC_WindowKBD96_alpha6_0 */
/* Demangled: AC4DEC_WindowKBD96_alpha6_0 */
extern void* AC4DEC_WindowKBD96_alpha6_0;

/* Symbol: AC4DEC_metadata_delay_output_get_buffer_var */
/* Demangled: AC4DEC_metadata_delay_output_get_buffer_var */
int AC4DEC_metadata_delay_output_get_buffer_var(void);

/* Symbol: AC4DEC_rsrc_open */
/* Demangled: AC4DEC_rsrc_open */
int AC4DEC_rsrc_open(void);

/* Symbol: DLB_vec_Labs_maxLU_strict */
/* Demangled: DLB_vec_Labs_maxLU_strict */
int DLB_vec_Labs_maxLU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L32 */
/* Demangled: dlb_dct_twiddle_table16_1_L32 */
extern void* dlb_dct_twiddle_table16_1_L32;

/* Symbol: DLB_r4_inv_fft_36 */
/* Demangled: DLB_r4_inv_fft_36 */
int DLB_r4_inv_fft_36(void);

/* Symbol: _ZN5dolby12Ac4DecClientC2EPNS_10IDecConfigE */
/* Demangled: dolby::Ac4DecClient::Ac4DecClient(dolby::IDecConfig*) */
int _ZN5dolby12Ac4DecClientC2EPNS_10IDecConfigE(void);

/* Symbol: ac4dec_wrapper_setup_table_param */
/* Demangled: ac4dec_wrapper_setup_table_param */
int ac4dec_wrapper_setup_table_param(void);

/* Symbol: AC4DEC_imsdec_query_mem */
/* Demangled: AC4DEC_imsdec_query_mem */
int AC4DEC_imsdec_query_mem(void);

/* Symbol: AC4DEC_oamdi_read_variable_bits_max */
/* Demangled: AC4DEC_oamdi_read_variable_bits_max */
int AC4DEC_oamdi_read_variable_bits_max(void);

/* Symbol: dlb_dct_twiddle_table16_1_L288 */
/* Demangled: dlb_dct_twiddle_table16_1_L288 */
extern void* dlb_dct_twiddle_table16_1_L288;

/* Symbol: _ZN7android10AC4DecoderC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::AC4Decoder::AC4Decoder(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android10AC4DecoderC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: DLB_CLhybrid_analysisCL */
/* Demangled: DLB_CLhybrid_analysisCL */
int DLB_CLhybrid_analysisCL(void);

/* Symbol: AC4DEC_agc_process */
/* Demangled: AC4DEC_agc_process */
int AC4DEC_agc_process(void);

/* Symbol: AC4DEC_imsdec_num_band_coeff_get */
/* Demangled: AC4DEC_imsdec_num_band_coeff_get */
int AC4DEC_imsdec_num_band_coeff_get(void);

/* Symbol: dlb_blk_Liir2df1L_flex */
/* Demangled: dlb_blk_Liir2df1L_flex */
int dlb_blk_Liir2df1L_flex(void);

/* Symbol: dlb_cos_8_ast_mini_twiddle */
/* Demangled: dlb_cos_8_ast_mini_twiddle */
extern void* dlb_cos_8_ast_mini_twiddle;

/* Symbol: AC4DEC_loudness_query_memory */
/* Demangled: AC4DEC_loudness_query_memory */
int AC4DEC_loudness_query_memory(void);

/* Symbol: AC4DEC_PA_NGCS_SEG_CHANNELS_2TO7CH */
/* Demangled: AC4DEC_PA_NGCS_SEG_CHANNELS_2TO7CH */
extern void* AC4DEC_PA_NGCS_SEG_CHANNELS_2TO7CH;

/* Symbol: dlb_ac4dec_v2_presentation_selection_set_preference */
/* Demangled: dlb_ac4dec_v2_presentation_selection_set_preference */
int dlb_ac4dec_v2_presentation_selection_set_preference(void);

/* Symbol: dlb_fft_fwd_usc_12 */
/* Demangled: dlb_fft_fwd_usc_12 */
int dlb_fft_fwd_usc_12(void);

/* Symbol: AC4DEC_ac4toc_read_variable_bits */
/* Demangled: AC4DEC_ac4toc_read_variable_bits */
int AC4DEC_ac4toc_read_variable_bits(void);

/* Symbol: AC4DEC_ac4dap_mixer_process */
/* Demangled: AC4DEC_ac4dap_mixer_process */
int AC4DEC_ac4dap_mixer_process(void);

/* Symbol: AC4DEC_A_PHASE_SHIFT_2TO6CH */
/* Demangled: AC4DEC_A_PHASE_SHIFT_2TO6CH */
extern void* AC4DEC_A_PHASE_SHIFT_2TO6CH;

/* Symbol: DLB_vec_LshlLIU_inplace_strict */
/* Demangled: DLB_vec_LshlLIU_inplace_strict */
int DLB_vec_LshlLIU_inplace_strict(void);

/* Symbol: AC4DEC_ajoc_de_process */
/* Demangled: AC4DEC_ajoc_de_process */
int AC4DEC_ajoc_de_process(void);

/* Symbol: AC4DEC_aspx_random_noise_interleaved */
/* Demangled: AC4DEC_aspx_random_noise_interleaved */
extern void* AC4DEC_aspx_random_noise_interleaved;

/* Symbol: AC4DEC_evo_brw_init */
/* Demangled: AC4DEC_evo_brw_init */
int AC4DEC_evo_brw_init(void);

/* Symbol: dlb_dct_twiddle_table16_1_L36 */
/* Demangled: dlb_dct_twiddle_table16_1_L36 */
extern void* dlb_dct_twiddle_table16_1_L36;

/* Symbol: dlb_dct_twiddle_table16_rev_L72 */
/* Demangled: dlb_dct_twiddle_table16_rev_L72 */
extern void* dlb_dct_twiddle_table16_rev_L72;

/* Symbol: dlb_fft_fwd_scl_256 */
/* Demangled: dlb_fft_fwd_scl_256 */
int dlb_fft_fwd_scl_256(void);

/* Symbol: _ZN7android10AC4DecoderD2Ev */
/* Demangled: android::AC4Decoder::~AC4Decoder() */
int _ZN7android10AC4DecoderD2Ev(void);

/* Symbol: AC4DEC_DE_UPPER_BAND */
/* Demangled: AC4DEC_DE_UPPER_BAND */
extern void* AC4DEC_DE_UPPER_BAND;

/* Symbol: AC4DEC_oamd_reader_open */
/* Demangled: AC4DEC_oamd_reader_open */
int AC4DEC_oamd_reader_open(void);

/* Symbol: _ZN5dolby12DlbGenClass2D0Ev */
/* Demangled: dolby::DlbGenClass2::~DlbGenClass2() */
int _ZN5dolby12DlbGenClass2D0Ev(void);

/* Symbol: AC4DEC_ac4toc_set_oamdi_prog_assign */
/* Demangled: AC4DEC_ac4toc_set_oamdi_prog_assign */
int AC4DEC_ac4toc_set_oamdi_prog_assign(void);

/* Symbol: AC4DEC_decoder_get_phase90_status */
/* Demangled: AC4DEC_decoder_get_phase90_status */
int AC4DEC_decoder_get_phase90_status(void);

/* Symbol: AC4DEC_dapil_init */
/* Demangled: AC4DEC_dapil_init */
int AC4DEC_dapil_init(void);

/* Symbol: AC4DEC_get_max_emdf_md_set_size */
/* Demangled: AC4DEC_get_max_emdf_md_set_size */
int AC4DEC_get_max_emdf_md_set_size(void);

/* Symbol: dlb_fft_fwd_usc_15 */
/* Demangled: dlb_fft_fwd_usc_15 */
int dlb_fft_fwd_usc_15(void);

/* Symbol: dlb_fft_inv_usc_20 */
/* Demangled: dlb_fft_inv_usc_20 */
int dlb_fft_inv_usc_20(void);

/* Symbol: AC4DEC_dap_mathlib_PpowLP */
/* Demangled: AC4DEC_dap_mathlib_PpowLP */
int AC4DEC_dap_mathlib_PpowLP(void);

/* Symbol: AC4DEC_aspx_mdd_generate_dummy_config */
/* Demangled: AC4DEC_aspx_mdd_generate_dummy_config */
int AC4DEC_aspx_mdd_generate_dummy_config(void);

/* Symbol: AC4DEC_oamd_xy_extp_pos_unsigned_to_q15 */
/* Demangled: AC4DEC_oamd_xy_extp_pos_unsigned_to_q15 */
extern void* AC4DEC_oamd_xy_extp_pos_unsigned_to_q15;

/* Symbol: DLB_r4_fft_192 */
/* Demangled: DLB_r4_fft_192 */
int DLB_r4_fft_192(void);

/* Symbol: dlb_fft_fwd_usc_16 */
/* Demangled: dlb_fft_fwd_usc_16 */
int dlb_fft_fwd_usc_16(void);

/* Symbol: AC4DEC_cch_get_num_frames_collected */
/* Demangled: AC4DEC_cch_get_num_frames_collected */
int AC4DEC_cch_get_num_frames_collected(void);

/* Symbol: dlb_dct_twiddle_table16_L180_1 */
/* Demangled: dlb_dct_twiddle_table16_L180_1 */
extern void* dlb_dct_twiddle_table16_L180_1;

/* Symbol: DLB_r4_fft_720 */
/* Demangled: DLB_r4_fft_720 */
int DLB_r4_fft_720(void);

/* Symbol: AC4DEC_ac4dap_init */
/* Demangled: AC4DEC_ac4dap_init */
int AC4DEC_ac4dap_init(void);

/* Symbol: AC4DEC_PA_DIFFUSE_DECORR_2TO5CH */
/* Demangled: AC4DEC_PA_DIFFUSE_DECORR_2TO5CH */
extern void* AC4DEC_PA_DIFFUSE_DECORR_2TO5CH;

/* Symbol: AC4DEC_decoder_query_mem_info */
/* Demangled: AC4DEC_decoder_query_mem_info */
int AC4DEC_decoder_query_mem_info(void);

/* Symbol: AC4DEC_sbg_template_highres */
/* Demangled: AC4DEC_sbg_template_highres */
extern void* AC4DEC_sbg_template_highres;

/* Symbol: dlb_dct_twiddle_table16_L180_2 */
/* Demangled: dlb_dct_twiddle_table16_L180_2 */
extern void* dlb_dct_twiddle_table16_L180_2;

/* Symbol: AC4DEC_imsdec_fdn_coefficients_decode */
/* Demangled: AC4DEC_imsdec_fdn_coefficients_decode */
int AC4DEC_imsdec_fdn_coefficients_decode(void);

/* Symbol: AC4DEC_ramp_gain_process */
/* Demangled: AC4DEC_ramp_gain_process */
int AC4DEC_ramp_gain_process(void);

/* Symbol: _ZN7android10AC4Decoder7onResetEv */
/* Demangled: android::AC4Decoder::onReset() */
int _ZN7android10AC4Decoder7onResetEv(void);

/* Symbol: AC4DEC_P_NGCS_SEG_RANGE_5TO7CH */
/* Demangled: AC4DEC_P_NGCS_SEG_RANGE_5TO7CH */
extern void* AC4DEC_P_NGCS_SEG_RANGE_5TO7CH;

/* Symbol: AC4DEC_dap_mathlib_LfastdivL */
/* Demangled: AC4DEC_dap_mathlib_LfastdivL */
int AC4DEC_dap_mathlib_LfastdivL(void);

/* Symbol: DLB_blk_Liir2ssv1_usmpL_strict */
/* Demangled: DLB_blk_Liir2ssv1_usmpL_strict */
int DLB_blk_Liir2ssv1_usmpL_strict(void);

/* Symbol: dlb_fft_inv_usc_24 */
/* Demangled: dlb_fft_inv_usc_24 */
int dlb_fft_inv_usc_24(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L480 */
/* Demangled: dlb_dct_twiddle_table16_rev_L480 */
extern void* dlb_dct_twiddle_table16_rev_L480;

/* Symbol: dlb_fft_fwd_scl_40 */
/* Demangled: dlb_fft_fwd_scl_40 */
int dlb_fft_fwd_scl_40(void);

/* Symbol: _ZN7android10AC4Decoder9initPortsEv */
/* Demangled: android::AC4Decoder::initPorts() */
int _ZN7android10AC4Decoder9initPortsEv(void);

/* Symbol: AC4DEC_AA_NGCS_SEG_STEERING_2TO6CH */
/* Demangled: AC4DEC_AA_NGCS_SEG_STEERING_2TO6CH */
extern void* AC4DEC_AA_NGCS_SEG_STEERING_2TO6CH;

/* Symbol: AC4DEC_CHANNEL_MAP_340_0 */
/* Demangled: AC4DEC_CHANNEL_MAP_340_0 */
extern void* AC4DEC_CHANNEL_MAP_340_0;

/* Symbol: dlb_dct_twiddle_table16_L720_1 */
/* Demangled: dlb_dct_twiddle_table16_L720_1 */
extern void* dlb_dct_twiddle_table16_L720_1;

/* Symbol: AC4DEC_OAMDI_DIV_CODE_TO_AMOUNT */
/* Demangled: AC4DEC_OAMDI_DIV_CODE_TO_AMOUNT */
extern void* AC4DEC_OAMDI_DIV_CODE_TO_AMOUNT;

/* Symbol: AC4DEC_hmac_sha256_calculate_digest_stride */
/* Demangled: AC4DEC_hmac_sha256_calculate_digest_stride */
int AC4DEC_hmac_sha256_calculate_digest_stride(void);

/* Symbol: DLB_qmf_analysisS_init */
/* Demangled: DLB_qmf_analysisS_init */
int DLB_qmf_analysisS_init(void);

/* Symbol: AC4DEC_CHANNEL_MAP_340_1 */
/* Demangled: AC4DEC_CHANNEL_MAP_340_1 */
extern void* AC4DEC_CHANNEL_MAP_340_1;

/* Symbol: dlb_dct_twiddle_table16_L720_2 */
/* Demangled: dlb_dct_twiddle_table16_L720_2 */
extern void* dlb_dct_twiddle_table16_L720_2;

/* Symbol: AC4DEC_metadata_delay_open */
/* Demangled: AC4DEC_metadata_delay_open */
int AC4DEC_metadata_delay_open(void);

/* Symbol: dlb_blk_LminLLL_flex */
/* Demangled: dlb_blk_LminLLL_flex */
int dlb_blk_LminLLL_flex(void);

/* Symbol: DLB_blk_LmixL_strict */
/* Demangled: DLB_blk_LmixL_strict */
int DLB_blk_LmixL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L24 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L24 */
extern void* dlb_dct_twiddle_table16_rev_1_L24;

/* Symbol: DLB_r4_fft_20 */
/* Demangled: DLB_r4_fft_20 */
int DLB_r4_fft_20(void);

/* Symbol: DLB_qmf_synthesisL_copy_states */
/* Demangled: DLB_qmf_synthesisL_copy_states */
int DLB_qmf_synthesisL_copy_states(void);

/* Symbol: AC4DEC_ac4toc_reader_get_presentation_info_cb */
/* Demangled: AC4DEC_ac4toc_reader_get_presentation_info_cb */
int AC4DEC_ac4toc_reader_get_presentation_info_cb(void);

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR48KHZ_BS384S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR48KHZ_BS384S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR48KHZ_BS384S;

/* Symbol: AC4DEC_dlb_bitbuf_fast_read */
/* Demangled: AC4DEC_dlb_bitbuf_fast_read */
int AC4DEC_dlb_bitbuf_fast_read(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_get_max_samples_per_channel */
/* Demangled: AC4DEC_dlb_ac4dec_v1_get_max_samples_per_channel */
int AC4DEC_dlb_ac4dec_v1_get_max_samples_per_channel(void);

/* Symbol: AC4DEC_WindowKBD64_alpha6_0 */
/* Demangled: AC4DEC_WindowKBD64_alpha6_0 */
extern void* AC4DEC_WindowKBD64_alpha6_0;

/* Symbol: AC4DEC_tree_huff_code_ims */
/* Demangled: AC4DEC_tree_huff_code_ims */
extern void* AC4DEC_tree_huff_code_ims;

/* Symbol: DLB_BLsaddBLL_strict */
/* Demangled: DLB_BLsaddBLL_strict */
int DLB_BLsaddBLL_strict(void);

/* Symbol: AC4DEC_cx_allpass_query_memory */
/* Demangled: AC4DEC_cx_allpass_query_memory */
int AC4DEC_cx_allpass_query_memory(void);

/* Symbol: dlb_dct_twiddle_table16_L180 */
/* Demangled: dlb_dct_twiddle_table16_L180 */
extern void* dlb_dct_twiddle_table16_L180;

/* Symbol: AC4DEC_oamt_process */
/* Demangled: AC4DEC_oamt_process */
int AC4DEC_oamt_process(void);

/* Symbol: AC4DEC_rts_tab */
/* Demangled: AC4DEC_rts_tab */
extern void* AC4DEC_rts_tab;

/* Symbol: AC4DEC_WindowKBD180_alpha5_0 */
/* Demangled: AC4DEC_WindowKBD180_alpha5_0 */
extern void* AC4DEC_WindowKBD180_alpha5_0;

/* Symbol: dlb_fft_fwd_scl_45 */
/* Demangled: dlb_fft_fwd_scl_45 */
int dlb_fft_fwd_scl_45(void);

/* Symbol: AC4DEC_q2le_process_linear */
/* Demangled: AC4DEC_q2le_process_linear */
int AC4DEC_q2le_process_linear(void);

/* Symbol: AC4DEC_mult_UM_1ch_no_decorr */
/* Demangled: AC4DEC_mult_UM_1ch_no_decorr */
int AC4DEC_mult_UM_1ch_no_decorr(void);

/* Symbol: AC4DEC_envelope_cdf_lut_tab */
/* Demangled: AC4DEC_envelope_cdf_lut_tab */
extern void* AC4DEC_envelope_cdf_lut_tab;

/* Symbol: AC4DEC_WindowKBD60_alpha5_0 */
/* Demangled: AC4DEC_WindowKBD60_alpha5_0 */
extern void* AC4DEC_WindowKBD60_alpha5_0;

/* Symbol: dlb_dct_twiddle_table16_1_L640 */
/* Demangled: dlb_dct_twiddle_table16_1_L640 */
extern void* dlb_dct_twiddle_table16_1_L640;

/* Symbol: DLB_r4_fft_24 */
/* Demangled: DLB_r4_fft_24 */
int DLB_r4_fft_24(void);

/* Symbol: AC4DEC_ngcs_reset */
/* Demangled: AC4DEC_ngcs_reset */
int AC4DEC_ngcs_reset(void);

/* Symbol: AC4DEC_imsdec_loudness_correction_factor_set */
/* Demangled: AC4DEC_imsdec_loudness_correction_factor_set */
int AC4DEC_imsdec_loudness_correction_factor_set(void);

/* Symbol: AC4DEC_oamdi_query_mem */
/* Demangled: AC4DEC_oamdi_query_mem */
int AC4DEC_oamdi_query_mem(void);

/* Symbol: AC4DEC_ac4parser_open */
/* Demangled: AC4DEC_ac4parser_open */
int AC4DEC_ac4parser_open(void);

/* Symbol: AC4DEC_oamdi_dimensional_trim_get_trim_bypass */
/* Demangled: AC4DEC_oamdi_dimensional_trim_get_trim_bypass */
int AC4DEC_oamdi_dimensional_trim_get_trim_bypass(void);

/* Symbol: dlb_blk_LmixLLL_flex */
/* Demangled: dlb_blk_LmixLLL_flex */
int dlb_blk_LmixLLL_flex(void);

/* Symbol: dlb_fft_fwd_scl_48 */
/* Demangled: dlb_fft_fwd_scl_48 */
int dlb_fft_fwd_scl_48(void);

/* Symbol: AC4DEC_ac4toc_set_oamd_from_group_info */
/* Demangled: AC4DEC_ac4toc_set_oamd_from_group_info */
int AC4DEC_ac4toc_set_oamd_from_group_info(void);

/* Symbol: AC4DEC_agc_calc_alpha_mid */
/* Demangled: AC4DEC_agc_calc_alpha_mid */
int AC4DEC_agc_calc_alpha_mid(void);

/* Symbol: AC4DEC_asf_read_spectral_data */
/* Demangled: AC4DEC_asf_read_spectral_data */
int AC4DEC_asf_read_spectral_data(void);

/* Symbol: DLB_blk_LfirUL_set_coef */
/* Demangled: DLB_blk_LfirUL_set_coef */
int DLB_blk_LfirUL_set_coef(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_legacy */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_legacy */
int DLB_Lmfb_p10km_synthesisCL_legacy(void);

/* Symbol: dlb_fft_fwd_usc_144 */
/* Demangled: dlb_fft_fwd_usc_144 */
int dlb_fft_fwd_usc_144(void);

/* Symbol: AC4DEC_ims_il_is_max_in_ch_mode_mono */
/* Demangled: AC4DEC_ims_il_is_max_in_ch_mode_mono */
int AC4DEC_ims_il_is_max_in_ch_mode_mono(void);

/* Symbol: AC4DEC_oamd_reader_parse_joc_oamd_data */
/* Demangled: AC4DEC_oamd_reader_parse_joc_oamd_data */
int AC4DEC_oamd_reader_parse_joc_oamd_data(void);

/* Symbol: AC4DEC_obj_render_init */
/* Demangled: AC4DEC_obj_render_init */
int AC4DEC_obj_render_init(void);

/* Symbol: dlb_blk_Lmix_shlUL_flex */
/* Demangled: dlb_blk_Lmix_shlUL_flex */
int dlb_blk_Lmix_shlUL_flex(void);

/* Symbol: _ZTVN7android10AC4DecoderE */
/* Demangled: vtable for android::AC4Decoder */
extern void* _ZTVN7android10AC4DecoderE;

/* Symbol: _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE */
/* Demangled: vtable for android::List<android::SimpleSoftOMXComponent::BufferInfo*> */
extern void* _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE;

/* Symbol: AC4DEC_sv_dual_end_reset */
/* Demangled: AC4DEC_sv_dual_end_reset */
int AC4DEC_sv_dual_end_reset(void);

/* Symbol: AC4DEC_asf_read_section_data */
/* Demangled: AC4DEC_asf_read_section_data */
int AC4DEC_asf_read_section_data(void);

/* Symbol: AC4DEC_mdct_to_qmf_close */
/* Demangled: AC4DEC_mdct_to_qmf_close */
int AC4DEC_mdct_to_qmf_close(void);

/* Symbol: AC4DEC_arle_init */
/* Demangled: AC4DEC_arle_init */
int AC4DEC_arle_init(void);

/* Symbol: AC4DEC_volume_and_ieq_preset_init_copy */
/* Demangled: AC4DEC_volume_and_ieq_preset_init_copy */
int AC4DEC_volume_and_ieq_preset_init_copy(void);

/* Symbol: AC4DEC_IMS_BANDING_SCHEME_ANE_LR */
/* Demangled: AC4DEC_IMS_BANDING_SCHEME_ANE_LR */
extern void* AC4DEC_IMS_BANDING_SCHEME_ANE_LR;

/* Symbol: AC4DEC_WindowKBD960_alpha3_0 */
/* Demangled: AC4DEC_WindowKBD960_alpha3_0 */
extern void* AC4DEC_WindowKBD960_alpha3_0;

/* Symbol: DLB_vec_UnormSU_strict */
/* Demangled: DLB_vec_UnormSU_strict */
int DLB_vec_UnormSU_strict(void);

/* Symbol: DLB_r4_inv_fft_288 */
/* Demangled: DLB_r4_inv_fft_288 */
int DLB_r4_inv_fft_288(void);

/* Symbol: AC4DEC_ssfdec_get_transform_info */
/* Demangled: AC4DEC_ssfdec_get_transform_info */
int AC4DEC_ssfdec_get_transform_info(void);

/* Symbol: AC4DEC_oamdi_set_has_oa_element_object_description */
/* Demangled: AC4DEC_oamdi_set_has_oa_element_object_description */
int AC4DEC_oamdi_set_has_oa_element_object_description(void);

/* Symbol: AC4DEC_ac4dec_get_acpl_config_index */
/* Demangled: AC4DEC_ac4dec_get_acpl_config_index */
int AC4DEC_ac4dec_get_acpl_config_index(void);

/* Symbol: DLB_r4_inv_fft_40 */
/* Demangled: DLB_r4_inv_fft_40 */
int DLB_r4_inv_fft_40(void);

/* Symbol: AC4DEC_sbg_template_highres_subsampled */
/* Demangled: AC4DEC_sbg_template_highres_subsampled */
extern void* AC4DEC_sbg_template_highres_subsampled;

/* Symbol: dlb_dct_twiddle_table16_L360 */
/* Demangled: dlb_dct_twiddle_table16_L360 */
extern void* dlb_dct_twiddle_table16_L360;

/* Symbol: AC4DEC_rsrc_get_output_delay */
/* Demangled: AC4DEC_rsrc_get_output_delay */
int AC4DEC_rsrc_get_output_delay(void);

/* Symbol: AC4DEC_dvlim_init_smoothed_gain */
/* Demangled: AC4DEC_dvlim_init_smoothed_gain */
int AC4DEC_dvlim_init_smoothed_gain(void);

/* Symbol: AC4DEC_evo_check_bitstream_protection */
/* Demangled: AC4DEC_evo_check_bitstream_protection */
int AC4DEC_evo_check_bitstream_protection(void);

/* Symbol: dlb_fft_inv_usc_512 */
/* Demangled: dlb_fft_inv_usc_512 */
int dlb_fft_inv_usc_512(void);

/* Symbol: AC4DEC_dvlim_set_hard_clip */
/* Demangled: AC4DEC_dvlim_set_hard_clip */
int AC4DEC_dvlim_set_hard_clip(void);

/* Symbol: AC4DEC_WindowKBD32_alpha6_0 */
/* Demangled: AC4DEC_WindowKBD32_alpha6_0 */
extern void* AC4DEC_WindowKBD32_alpha6_0;

/* Symbol: dlb_fft_fwd_usc_320 */
/* Demangled: dlb_fft_fwd_usc_320 */
int dlb_fft_fwd_usc_320(void);

/* Symbol: AC4DEC_ph90_qmf_get_filter_length */
/* Demangled: AC4DEC_ph90_qmf_get_filter_length */
int AC4DEC_ph90_qmf_get_filter_length(void);

/* Symbol: AC4DEC_random_noise_table */
/* Demangled: AC4DEC_random_noise_table */
extern void* AC4DEC_random_noise_table;

/* Symbol: DLB_r4_fft_768_s */
/* Demangled: DLB_r4_fft_768_s */
int DLB_r4_fft_768_s(void);

/* Symbol: AC4DEC_agc_init */
/* Demangled: AC4DEC_agc_init */
int AC4DEC_agc_init(void);

/* Symbol: AC4DEC_ps_select */
/* Demangled: AC4DEC_ps_select */
int AC4DEC_ps_select(void);

/* Symbol: AC4DEC_tree_huff_code_ajoc */
/* Demangled: AC4DEC_tree_huff_code_ajoc */
extern void* AC4DEC_tree_huff_code_ajoc;

/* Symbol: AC4DEC_oamd_reader_query_mem */
/* Demangled: AC4DEC_oamd_reader_query_mem */
int AC4DEC_oamd_reader_query_mem(void);

/* Symbol: DLB_blk_Liir2df1L_set_coef */
/* Demangled: DLB_blk_Liir2df1L_set_coef */
int DLB_blk_Liir2df1L_set_coef(void);

/* Symbol: DLB_r4_inv_fft_288_s */
/* Demangled: DLB_r4_inv_fft_288_s */
int DLB_r4_inv_fft_288_s(void);

/* Symbol: dlb_qmf_filter_coeff_P4_32_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P4_32_vec_syn */
extern void* dlb_qmf_filter_coeff_P4_32_vec_syn;

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj(void);

/* Symbol: AC4DEC_lvl_calc_ng_scale */
/* Demangled: AC4DEC_lvl_calc_ng_scale */
int AC4DEC_lvl_calc_ng_scale(void);

/* Symbol: AC4DEC_dequantize_coefficients */
/* Demangled: AC4DEC_dequantize_coefficients */
int AC4DEC_dequantize_coefficients(void);

/* Symbol: DLB_r4_inv_fft_45 */
/* Demangled: DLB_r4_inv_fft_45 */
int DLB_r4_inv_fft_45(void);

/* Symbol: AC4DEC_phase90_filter_query_memory */
/* Demangled: AC4DEC_phase90_filter_query_memory */
int AC4DEC_phase90_filter_query_memory(void);

/* Symbol: AC4DEC_PA_NGCS_SEG_STEERING_2TO4CH */
/* Demangled: AC4DEC_PA_NGCS_SEG_STEERING_2TO4CH */
extern void* AC4DEC_PA_NGCS_SEG_STEERING_2TO4CH;

/* Symbol: AC4DEC_sap_parse_chparam_info */
/* Demangled: AC4DEC_sap_parse_chparam_info */
int AC4DEC_sap_parse_chparam_info(void);

/* Symbol: DLB_BLmaxBLL_strict */
/* Demangled: DLB_BLmaxBLL_strict */
int DLB_BLmaxBLL_strict(void);

/* Symbol: DLB_blk_Liir2ssv1efL_strict */
/* Demangled: DLB_blk_Liir2ssv1efL_strict */
int DLB_blk_Liir2ssv1efL_strict(void);

/* Symbol: DLB_r4_rfft_nn */
/* Demangled: DLB_r4_rfft_nn */
int DLB_r4_rfft_nn(void);

/* Symbol: AC4DEC_ph90_qmf_query_memory */
/* Demangled: AC4DEC_ph90_qmf_query_memory */
int AC4DEC_ph90_qmf_query_memory(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_output_stage_query_mem */
/* Demangled: AC4DEC_dlb_ac4dec_v1_output_stage_query_mem */
int AC4DEC_dlb_ac4dec_v1_output_stage_query_mem(void);

/* Symbol: AC4DEC_rand_gen_get_value */
/* Demangled: AC4DEC_rand_gen_get_value */
int AC4DEC_rand_gen_get_value(void);

/* Symbol: AC4DEC_cch_query_mem */
/* Demangled: AC4DEC_cch_query_mem */
int AC4DEC_cch_query_mem(void);

/* Symbol: AC4DEC_imsdec_ims_de_band_config_get */
/* Demangled: AC4DEC_imsdec_ims_de_band_config_get */
int AC4DEC_imsdec_ims_de_band_config_get(void);

/* Symbol: AC4DEC_a_isf_bh_5_3_0_0_reorder */
/* Demangled: AC4DEC_a_isf_bh_5_3_0_0_reorder */
extern void* AC4DEC_a_isf_bh_5_3_0_0_reorder;

/* Symbol: AC4DEC_ramp_gain_query_mem */
/* Demangled: AC4DEC_ramp_gain_query_mem */
int AC4DEC_ramp_gain_query_mem(void);

/* Symbol: AC4DEC_a_dvlim_win_32 */
/* Demangled: AC4DEC_a_dvlim_win_32 */
extern void* AC4DEC_a_dvlim_win_32;

/* Symbol: dlb_fft_fwd_usc_20 */
/* Demangled: dlb_fft_fwd_usc_20 */
int dlb_fft_fwd_usc_20(void);

/* Symbol: ac4dec_wrapper_open */
/* Demangled: ac4dec_wrapper_open */
int ac4dec_wrapper_open(void);

/* Symbol: AC4DEC_P_PHASE_SHIFT_5TO7CH */
/* Demangled: AC4DEC_P_PHASE_SHIFT_5TO7CH */
extern void* AC4DEC_P_PHASE_SHIFT_5TO7CH;

/* Symbol: DLB_r4_inv_fft_48 */
/* Demangled: DLB_r4_inv_fft_48 */
int DLB_r4_inv_fft_48(void);

/* Symbol: dlb_fft_inv_usc_160 */
/* Demangled: dlb_fft_inv_usc_160 */
int dlb_fft_inv_usc_160(void);

/* Symbol: AC4DEC_dlb_ac4dec_v1_output_stage_config */
/* Demangled: AC4DEC_dlb_ac4dec_v1_output_stage_config */
int AC4DEC_dlb_ac4dec_v1_output_stage_config(void);

/* Symbol: dlb_dct_twiddle_table16_1_L45 */
/* Demangled: dlb_dct_twiddle_table16_1_L45 */
extern void* dlb_dct_twiddle_table16_1_L45;

/* Symbol: dlb_qmf_filter_coeff_P5_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_vec_syn;

/* Symbol: AC4DEC_asa_event_process */
/* Demangled: AC4DEC_asa_event_process */
int AC4DEC_asa_event_process(void);

/* Symbol: AC4DEC_metadata_delay_close */
/* Demangled: AC4DEC_metadata_delay_close */
int AC4DEC_metadata_delay_close(void);

/* Symbol: AC4DEC_obj_render_process */
/* Demangled: AC4DEC_obj_render_process */
int AC4DEC_obj_render_process(void);

/* Symbol: AC4DEC_rsrc_init */
/* Demangled: AC4DEC_rsrc_init */
int AC4DEC_rsrc_init(void);

/* Symbol: AC4DEC_oamdi_set_dimensional_trim_defaults */
/* Demangled: AC4DEC_oamdi_set_dimensional_trim_defaults */
int AC4DEC_oamdi_set_dimensional_trim_defaults(void);

/* Symbol: dlb_fft_fwd_usc_24 */
/* Demangled: dlb_fft_fwd_usc_24 */
int dlb_fft_fwd_usc_24(void);

/* Symbol: AC4DEC_ac4dap_speaker_virtualizer_query_mem */
/* Demangled: AC4DEC_ac4dap_speaker_virtualizer_query_mem */
int AC4DEC_ac4dap_speaker_virtualizer_query_mem(void);

/* Symbol: AC4DEC_emdf_get_max_num_pl_substreams */
/* Demangled: AC4DEC_emdf_get_max_num_pl_substreams */
int AC4DEC_emdf_get_max_num_pl_substreams(void);

/* Symbol: AC4DEC_oamdi_get_obj_info_blk */
/* Demangled: AC4DEC_oamdi_get_obj_info_blk */
int AC4DEC_oamdi_get_obj_info_blk(void);

/* Symbol: dlb_blk_Liir2ssv1efL_flex */
/* Demangled: dlb_blk_Liir2ssv1efL_flex */
int dlb_blk_Liir2ssv1efL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L48 */
/* Demangled: dlb_dct_twiddle_table16_1_L48 */
extern void* dlb_dct_twiddle_table16_1_L48;

/* Symbol: DLB_r4_fft_240_s */
/* Demangled: DLB_r4_fft_240_s */
int DLB_r4_fft_240_s(void);

/* Symbol: dlb_fft_inv_usc_30 */
/* Demangled: dlb_fft_inv_usc_30 */
int dlb_fft_inv_usc_30(void);

/* Symbol: AC4DEC_surround_compressor_query_memory */
/* Demangled: AC4DEC_surround_compressor_query_memory */
int AC4DEC_surround_compressor_query_memory(void);

/* Symbol: AC4DEC_evo_pack_md_set */
/* Demangled: AC4DEC_evo_pack_md_set */
int AC4DEC_evo_pack_md_set(void);

/* Symbol: AC4DEC_oaril_get_scale_factor */
/* Demangled: AC4DEC_oaril_get_scale_factor */
int AC4DEC_oaril_get_scale_factor(void);

/* Symbol: AC4DEC_evo_calculate_bitstream_protection */
/* Demangled: AC4DEC_evo_calculate_bitstream_protection */
int AC4DEC_evo_calculate_bitstream_protection(void);

/* Symbol: DLB_vec_IeqLLU_strict */
/* Demangled: DLB_vec_IeqLLU_strict */
int DLB_vec_IeqLLU_strict(void);

/* Symbol: DLB_r4_inv_fft_12_s */
/* Demangled: DLB_r4_inv_fft_12_s */
int DLB_r4_inv_fft_12_s(void);

/* Symbol: dlb_ac4dec_v2_decode */
/* Demangled: dlb_ac4dec_v2_decode */
int dlb_ac4dec_v2_decode(void);

/* Symbol: dlb_dct_twiddle_table16_L64_cos */
/* Demangled: dlb_dct_twiddle_table16_L64_cos */
extern void* dlb_dct_twiddle_table16_L64_cos;

/* Symbol: DLB_blk_Liir2ssv3aLU_inplace_strict */
/* Demangled: DLB_blk_Liir2ssv3aLU_inplace_strict */
int DLB_blk_Liir2ssv3aLU_inplace_strict(void);

/* Symbol: DLB_r4_inv_fft_640 */
/* Demangled: DLB_r4_inv_fft_640 */
int DLB_r4_inv_fft_640(void);

/* Symbol: dlb_fft_inv_usc_32 */
/* Demangled: dlb_fft_inv_usc_32 */
int dlb_fft_inv_usc_32(void);

/* Symbol: AC4DEC_acpldec_process_1ch */
/* Demangled: AC4DEC_acpldec_process_1ch */
int AC4DEC_acpldec_process_1ch(void);

/* Symbol: AC4DEC_sap_process_channels */
/* Demangled: AC4DEC_sap_process_channels */
int AC4DEC_sap_process_channels(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L30 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L30 */
extern void* dlb_dct_twiddle_table16_rev_1_L30;

/* Symbol: dlb_fft_inv_scl_1024 */
/* Demangled: dlb_fft_inv_scl_1024 */
int dlb_fft_inv_scl_1024(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_48_vec_syn;

/* Symbol: AC4DEC_ngcs_hcqmf_banded_power */
/* Demangled: AC4DEC_ngcs_hcqmf_banded_power */
int AC4DEC_ngcs_hcqmf_banded_power(void);

/* Symbol: mdd_max_instances */
/* Demangled: mdd_max_instances */
extern void* mdd_max_instances;

/* Symbol: AC4DEC_renderer_normalize_by_energy */
/* Demangled: AC4DEC_renderer_normalize_by_energy */
int AC4DEC_renderer_normalize_by_energy(void);

/* Symbol: _ZN5dolby12Ac4DecClient20updateparamsbyoutputEP26ac4dec_wrapper_io_params_sP7AC4EXEC */
/* Demangled: dolby::Ac4DecClient::updateparamsbyoutput(ac4dec_wrapper_io_params_s*, AC4EXEC*) */
int _ZN5dolby12Ac4DecClient20updateparamsbyoutputEP26ac4dec_wrapper_io_params_sP7AC4EXEC(void);

/* Symbol: AC4DEC_ac4toc_reader_get_substream_info */
/* Demangled: AC4DEC_ac4toc_reader_get_substream_info */
int AC4DEC_ac4toc_reader_get_substream_info(void);

/* Symbol: AC4DEC_hp_height_init */
/* Demangled: AC4DEC_hp_height_init */
int AC4DEC_hp_height_init(void);

/* Symbol: AC4DEC_evo_close */
/* Demangled: AC4DEC_evo_close */
int AC4DEC_evo_close(void);

/* Symbol: AC4DEC_imsdec_mdd_generate_dummy_data */
/* Demangled: AC4DEC_imsdec_mdd_generate_dummy_data */
int AC4DEC_imsdec_mdd_generate_dummy_data(void);

/* Symbol: AC4DEC_evo_mem_init */
/* Demangled: AC4DEC_evo_mem_init */
int AC4DEC_evo_mem_init(void);

/* Symbol: dlb_blk_Liir2ssv1L_flex */
/* Demangled: dlb_blk_Liir2ssv1L_flex */
int dlb_blk_Liir2ssv1L_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L32 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L32 */
extern void* dlb_dct_twiddle_table16_rev_1_L32;

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj(void);

/* Symbol: ac4dec_wrapper_decode */
/* Demangled: ac4dec_wrapper_decode */
int ac4dec_wrapper_decode(void);

/* Symbol: AC4DEC_convert_downmix_to_internal_mode */
/* Demangled: AC4DEC_convert_downmix_to_internal_mode */
int AC4DEC_convert_downmix_to_internal_mode(void);

/* Symbol: AC4DEC_arle_constrain_compressor_threshold */
/* Demangled: AC4DEC_arle_constrain_compressor_threshold */
int AC4DEC_arle_constrain_compressor_threshold(void);

/* Symbol: dlb_dct_twiddle_table16_L60 */
/* Demangled: dlb_dct_twiddle_table16_L60 */
extern void* dlb_dct_twiddle_table16_L60;

/* Symbol: dlb_fft_inv_usc_36 */
/* Demangled: dlb_fft_inv_usc_36 */
int dlb_fft_inv_usc_36(void);

/* Symbol: AC4DEC_ieq_calc_loudness */
/* Demangled: AC4DEC_ieq_calc_loudness */
int AC4DEC_ieq_calc_loudness(void);

/* Symbol: AC4DEC_memlib_pool_block_begin */
/* Demangled: AC4DEC_memlib_pool_block_begin */
int AC4DEC_memlib_pool_block_begin(void);

/* Symbol: AC4DEC_tree_huff_code_de_diff_0 */
/* Demangled: AC4DEC_tree_huff_code_de_diff_0 */
extern void* AC4DEC_tree_huff_code_de_diff_0;

/* Symbol: AC4DEC_bed_distrib_process */
/* Demangled: AC4DEC_bed_distrib_process */
int AC4DEC_bed_distrib_process(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L120 */
/* Demangled: dlb_dct_twiddle_table16_rev_L120 */
extern void* dlb_dct_twiddle_table16_rev_L120;

/* Symbol: DLB_r4_fft_30 */
/* Demangled: DLB_r4_fft_30 */
int DLB_r4_fft_30(void);

/* Symbol: _ZN5dolby16Ac4DynamicConfigD2Ev */
/* Demangled: dolby::Ac4DynamicConfig::~Ac4DynamicConfig() */
int _ZN5dolby16Ac4DynamicConfigD2Ev(void);

/* Symbol: dlb_ac4dec_v2_close */
/* Demangled: dlb_ac4dec_v2_close */
int dlb_ac4dec_v2_close(void);

/* Symbol: AC4DEC_tree_asf_booksnf */
/* Demangled: AC4DEC_tree_asf_booksnf */
extern void* AC4DEC_tree_asf_booksnf;

/* Symbol: AC4DEC_tree_huff_code_de_diff_1 */
/* Demangled: AC4DEC_tree_huff_code_de_diff_1 */
extern void* AC4DEC_tree_huff_code_de_diff_1;

/* Symbol: dlb_dct_twiddle_table16_L48_1 */
/* Demangled: dlb_dct_twiddle_table16_L48_1 */
extern void* dlb_dct_twiddle_table16_L48_1;

/* Symbol: AC4DEC_oaril_query_mem */
/* Demangled: AC4DEC_oaril_query_mem */
int AC4DEC_oaril_query_mem(void);

/* Symbol: DLB_blk_Liir2ssv3L_inplace_strict */
/* Demangled: DLB_blk_Liir2ssv3L_inplace_strict */
int DLB_blk_Liir2ssv3L_inplace_strict(void);

/* Symbol: DLB_mfb_p10km_analysisL_query_scratch */
/* Demangled: DLB_mfb_p10km_analysisL_query_scratch */
int DLB_mfb_p10km_analysisL_query_scratch(void);

/* Symbol: AC4DEC_ac4dap_log_content_init */
/* Demangled: AC4DEC_ac4dap_log_content_init */
int AC4DEC_ac4dap_log_content_init(void);

/* Symbol: AC4DEC_ph90_qmf_init */
/* Demangled: AC4DEC_ph90_qmf_init */
int AC4DEC_ph90_qmf_init(void);

/* Symbol: AC4DEC_ptr_bits */
/* Demangled: AC4DEC_ptr_bits */
extern void* AC4DEC_ptr_bits;

/* Symbol: dlb_dct_twiddle_table16_L48_2 */
/* Demangled: dlb_dct_twiddle_table16_L48_2 */
extern void* dlb_dct_twiddle_table16_L48_2;

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_8_vec_ana;

/* Symbol: DLB_blk_Lattack_decay_peak_iir1L_setup */
/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_setup */
int DLB_blk_Lattack_decay_peak_iir1L_setup(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L36 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L36 */
extern void* dlb_dct_twiddle_table16_rev_1_L36;

/* Symbol: DLB_r4_fft_32 */
/* Demangled: DLB_r4_fft_32 */
int DLB_r4_fft_32(void);

/* Symbol: AC4DEC_imdct_query_mem */
/* Demangled: AC4DEC_imdct_query_mem */
int AC4DEC_imdct_query_mem(void);

/* Symbol: dlb_dct_twiddle_table16_L64 */
/* Demangled: dlb_dct_twiddle_table16_L64 */
extern void* dlb_dct_twiddle_table16_L64;

/* Symbol: DLB_r4_inv_fft_4_s */
/* Demangled: DLB_r4_inv_fft_4_s */
int DLB_r4_inv_fft_4_s(void);

/* Symbol: dlb_fft_inv_scl_60 */
/* Demangled: dlb_fft_inv_scl_60 */
int dlb_fft_inv_scl_60(void);

/* Symbol: dlb_cos_48_full */
/* Demangled: dlb_cos_48_full */
extern void* dlb_cos_48_full;

/* Symbol: AC4DEC_delay_line_write_indirect */
/* Demangled: AC4DEC_delay_line_write_indirect */
int AC4DEC_delay_line_write_indirect(void);

/* Symbol: AC4DEC_hp_height_reverb_peek */
/* Demangled: AC4DEC_hp_height_reverb_peek */
int AC4DEC_hp_height_reverb_peek(void);

/* Symbol: AC4DEC_interpol_mult_UM_2ch_no_decorr */
/* Demangled: AC4DEC_interpol_mult_UM_2ch_no_decorr */
int AC4DEC_interpol_mult_UM_2ch_no_decorr(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L960 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L960 */
extern void* dlb_dct_twiddle_table16_rev_1_L960;

/* Symbol: dlb_dct_twiddle_table16_L192 */
/* Demangled: dlb_dct_twiddle_table16_L192 */
extern void* dlb_dct_twiddle_table16_L192;

/* Symbol: AC4DEC_dlb_ac4dec_v1_input_stage_get_num_channels */
/* Demangled: AC4DEC_dlb_ac4dec_v1_input_stage_get_num_channels */
int AC4DEC_dlb_ac4dec_v1_input_stage_get_num_channels(void);

/* Symbol: AC4DEC_loud_stereo_dmx_coeff_init */
/* Demangled: AC4DEC_loud_stereo_dmx_coeff_init */
int AC4DEC_loud_stereo_dmx_coeff_init(void);

/* Symbol: DLB_MFB_TWID128E */
/* Demangled: DLB_MFB_TWID128E */
extern void* DLB_MFB_TWID128E;

/* Symbol: dlb_inverseModulationReal */
/* Demangled: dlb_inverseModulationReal */
int dlb_inverseModulationReal(void);

/* Symbol: AC4DEC_get_new_chirp_factors */
/* Demangled: AC4DEC_get_new_chirp_factors */
int AC4DEC_get_new_chirp_factors(void);

/* Symbol: AC4DEC_CHANNEL_MAP_3_0 */
/* Demangled: AC4DEC_CHANNEL_MAP_3_0 */
extern void* AC4DEC_CHANNEL_MAP_3_0;

/* Symbol: dlb_dct_twiddle_table16_L720 */
/* Demangled: dlb_dct_twiddle_table16_L720 */
extern void* dlb_dct_twiddle_table16_L720;

/* Symbol: AC4DEC_WindowKBD144_alpha5_0 */
/* Demangled: AC4DEC_WindowKBD144_alpha5_0 */
extern void* AC4DEC_WindowKBD144_alpha5_0;

/* Symbol: DLB_r4_fft_36 */
/* Demangled: DLB_r4_fft_36 */
int DLB_r4_fft_36(void);

/* Symbol: AC4DEC_CHANNEL_MAP_3_1 */
/* Demangled: AC4DEC_CHANNEL_MAP_3_1 */
extern void* AC4DEC_CHANNEL_MAP_3_1;

/* Symbol: dlb_fft_inv_scl_64 */
/* Demangled: dlb_fft_inv_scl_64 */
int dlb_fft_inv_scl_64(void);

/* Symbol: dlb_blk_Lmpy_shlLLU_flex */
/* Demangled: dlb_blk_Lmpy_shlLLU_flex */
int dlb_blk_Lmpy_shlLLU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L128 */
/* Demangled: dlb_dct_twiddle_table16_rev_L128 */
extern void* dlb_dct_twiddle_table16_rev_L128;

/* Symbol: DLB_r4_fft_384 */
/* Demangled: DLB_r4_fft_384 */
int DLB_r4_fft_384(void);

/* Symbol: AC4DEC_arle_compressor_threshold_calculation */
/* Demangled: AC4DEC_arle_compressor_threshold_calculation */
int AC4DEC_arle_compressor_threshold_calculation(void);

/* Symbol: AC4DEC_aspx_hf_gen */
/* Demangled: AC4DEC_aspx_hf_gen */
int AC4DEC_aspx_hf_gen(void);

/* Symbol: AC4DEC_ltp_quant32_rec */
/* Demangled: AC4DEC_ltp_quant32_rec */
extern void* AC4DEC_ltp_quant32_rec;

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR44KHZ1_BS192S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR44KHZ1_BS192S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR44KHZ1_BS192S;

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR48KHZ_BS192S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR48KHZ_BS192S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_TRANSFILTER_SR48KHZ_BS192S;

/* Symbol: AC4DEC_de_get_enhancement_gain */
/* Demangled: AC4DEC_de_get_enhancement_gain */
int AC4DEC_de_get_enhancement_gain(void);

/* Symbol: AC4DEC_gain_calc_process */
/* Demangled: AC4DEC_gain_calc_process */
int AC4DEC_gain_calc_process(void);

/* Symbol: DLB_blk_Lattack_decay_iir1L_setup */
/* Demangled: DLB_blk_Lattack_decay_iir1L_setup */
int DLB_blk_Lattack_decay_iir1L_setup(void);

/* Symbol: AC4DEC_IMS_BANDING_SCHEME_ANE_MR */
/* Demangled: AC4DEC_IMS_BANDING_SCHEME_ANE_MR */
extern void* AC4DEC_IMS_BANDING_SCHEME_ANE_MR;

/* Symbol: AC4DEC_offset_db_to_lin_inv */
/* Demangled: AC4DEC_offset_db_to_lin_inv */
extern void* AC4DEC_offset_db_to_lin_inv;

/* Symbol: dlb_fft_inv_scl_288 */
/* Demangled: dlb_fft_inv_scl_288 */
int dlb_fft_inv_scl_288(void);

/* Symbol: dlb_ac4dec_v2_dec_set_dialog_enhancement_preference */
/* Demangled: dlb_ac4dec_v2_dec_set_dialog_enhancement_preference */
int dlb_ac4dec_v2_dec_set_dialog_enhancement_preference(void);

/* Symbol: DLB_r4_inv_fft_4096 */
/* Demangled: DLB_r4_inv_fft_4096 */
int DLB_r4_inv_fft_4096(void);

/* Symbol: AC4DEC_imsdec_open */
/* Demangled: AC4DEC_imsdec_open */
int AC4DEC_imsdec_open(void);

/* Symbol: AC4DEC_bed_mixer_init */
/* Demangled: AC4DEC_bed_mixer_init */
int AC4DEC_bed_mixer_init(void);

/* Symbol: AC4DEC_omg_init */
/* Demangled: AC4DEC_omg_init */
int AC4DEC_omg_init(void);

/* Symbol: DLB_load_mfb_p10km_analysisL_filter_state */
/* Demangled: DLB_load_mfb_p10km_analysisL_filter_state */
int DLB_load_mfb_p10km_analysisL_filter_state(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_32_vec_syn;

/* Symbol: AC4DEC_ac4toc_reader_set_mode */
/* Demangled: AC4DEC_ac4toc_reader_set_mode */
int AC4DEC_ac4toc_reader_set_mode(void);

/* Symbol: AC4DEC_scale_input_2ch */
/* Demangled: AC4DEC_scale_input_2ch */
int AC4DEC_scale_input_2ch(void);

/* Symbol: AC4DEC_DVLIM_ONE_OVER_256_L */
/* Demangled: AC4DEC_DVLIM_ONE_OVER_256_L */
extern void* AC4DEC_DVLIM_ONE_OVER_256_L;

/* Symbol: AC4DEC_sha256_get_digest */
/* Demangled: AC4DEC_sha256_get_digest */
int AC4DEC_sha256_get_digest(void);

/* Symbol: _ZTVN5dolby16Ac4DynamicConfigE */
/* Demangled: vtable for dolby::Ac4DynamicConfig */
extern void* _ZTVN5dolby16Ac4DynamicConfigE;

/* Symbol: _ZN7android10AC4Decoder17internalSetConfigE13OMX_INDEXTYPEPvPb */
/* Demangled: android::AC4Decoder::internalSetConfig(OMX_INDEXTYPE, void*, bool*) */
int _ZN7android10AC4Decoder17internalSetConfigE13OMX_INDEXTYPEPvPb(void);

/* Symbol: DLB_blk_LsubLL_strict */
/* Demangled: DLB_blk_LsubLL_strict */
int DLB_blk_LsubLL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L240 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L240 */
extern void* dlb_dct_twiddle_table16_rev_1_L240;

/* Symbol: dlb_qmf_filter_coeff_P4_32 */
/* Demangled: dlb_qmf_filter_coeff_P4_32 */
extern void* dlb_qmf_filter_coeff_P4_32;

/* Symbol: AC4DEC_ac4toc_reader_open */
/* Demangled: AC4DEC_ac4toc_reader_open */
int AC4DEC_ac4toc_reader_open(void);

/* Symbol: DLB_CLmpy_shlCLSIU_strict */
/* Demangled: DLB_CLmpy_shlCLSIU_strict */
int DLB_CLmpy_shlCLSIU_strict(void);

/* Symbol: DLB_r4_inv_fft_72_s */
/* Demangled: DLB_r4_inv_fft_72_s */
int DLB_r4_inv_fft_72_s(void);

/* Symbol: AC4DEC_generate_dither */
/* Demangled: AC4DEC_generate_dither */
int AC4DEC_generate_dither(void);

/* Symbol: AC4DEC_ac4toc_get_substream_segment_info */
/* Demangled: AC4DEC_ac4toc_get_substream_segment_info */
int AC4DEC_ac4toc_get_substream_segment_info(void);

/* Symbol: AC4DEC_asa_calculate_skewness */
/* Demangled: AC4DEC_asa_calculate_skewness */
int AC4DEC_asa_calculate_skewness(void);

/* Symbol: input_stage_init_2 */
/* Demangled: input_stage_init_2 */
int input_stage_init_2(void);

/* Symbol: AC4DEC_a_dvlim_win_40 */
/* Demangled: AC4DEC_a_dvlim_win_40 */
extern void* AC4DEC_a_dvlim_win_40;

/* Symbol: DLB_blk_LmaxLL_strict */
/* Demangled: DLB_blk_LmaxLL_strict */
int DLB_blk_LmaxLL_strict(void);

/* Symbol: AC4DEC_calc_nrg_per_subband */
/* Demangled: AC4DEC_calc_nrg_per_subband */
int AC4DEC_calc_nrg_per_subband(void);

/* Symbol: AC4DEC_evo_init */
/* Demangled: AC4DEC_evo_init */
int AC4DEC_evo_init(void);

/* Symbol: DLB_r4_inv_fft_360_s */
/* Demangled: DLB_r4_inv_fft_360_s */
int DLB_r4_inv_fft_360_s(void);

/* Symbol: dlb_vec_LmpyLSU_inplace_flex */
/* Demangled: dlb_vec_LmpyLSU_inplace_flex */
int dlb_vec_LmpyLSU_inplace_flex(void);

/* Symbol: AC4DEC_oamd_reader_parse_dyndata_single */
/* Demangled: AC4DEC_oamd_reader_parse_dyndata_single */
int AC4DEC_oamd_reader_parse_dyndata_single(void);

/* Symbol: AC4DEC_A_SPEAKER_CONFIG_SPK_POS */
/* Demangled: AC4DEC_A_SPEAKER_CONFIG_SPK_POS */
extern void* AC4DEC_A_SPEAKER_CONFIG_SPK_POS;

/* Symbol: AC4DEC_DVLIM_ONE_OVER_256_S */
/* Demangled: AC4DEC_DVLIM_ONE_OVER_256_S */
extern void* AC4DEC_DVLIM_ONE_OVER_256_S;

/* Symbol: AC4DEC_oamdi_object_divergence_from_lr_c_db */
/* Demangled: AC4DEC_oamdi_object_divergence_from_lr_c_db */
int AC4DEC_oamdi_object_divergence_from_lr_c_db(void);

/* Symbol: dlb_fft_fwd_usc_30 */
/* Demangled: dlb_fft_fwd_usc_30 */
int dlb_fft_fwd_usc_30(void);

/* Symbol: AC4DEC_ac4toc_reader_get_substream_info_ext */
/* Demangled: AC4DEC_ac4toc_reader_get_substream_info_ext */
int AC4DEC_ac4toc_reader_get_substream_info_ext(void);

/* Symbol: AC4DEC_A_LDN_NUM_SL_TABLE_VALS */
/* Demangled: AC4DEC_A_LDN_NUM_SL_TABLE_VALS */
extern void* AC4DEC_A_LDN_NUM_SL_TABLE_VALS;

/* Symbol: AC4DEC_ajoc_ir */
/* Demangled: AC4DEC_ajoc_ir */
int AC4DEC_ajoc_ir(void);

/* Symbol: AC4DEC_imsdec_loudness_target_correction_gain_get */
/* Demangled: AC4DEC_imsdec_loudness_target_correction_gain_get */
int AC4DEC_imsdec_loudness_target_correction_gain_get(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L90 */
/* Demangled: dlb_dct_twiddle_table16_rev_L90 */
extern void* dlb_dct_twiddle_table16_rev_L90;

/* Symbol: DLB_fft_Linv_unscaledCL */
/* Demangled: DLB_fft_Linv_unscaledCL */
int DLB_fft_Linv_unscaledCL(void);

/* Symbol: DLB_time_div */
/* Demangled: DLB_time_div */
int DLB_time_div(void);

/* Symbol: AC4DEC_agc_query_memory */
/* Demangled: AC4DEC_agc_query_memory */
int AC4DEC_agc_query_memory(void);

/* Symbol: dlb_fft_fwd_usc_32 */
/* Demangled: dlb_fft_fwd_usc_32 */
int dlb_fft_fwd_usc_32(void);

/* Symbol: AC4DEC_memlib_block_start */
/* Demangled: AC4DEC_memlib_block_start */
int AC4DEC_memlib_block_start(void);

/* Symbol: AC4DEC_omg_process */
/* Demangled: AC4DEC_omg_process */
int AC4DEC_omg_process(void);

/* Symbol: DLB_CLCLmix7CL14SU_strict */
/* Demangled: DLB_CLCLmix7CL14SU_strict */
int DLB_CLCLmix7CL14SU_strict(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: AC4DEC_ngcs_init */
/* Demangled: AC4DEC_ngcs_init */
int AC4DEC_ngcs_init(void);

/* Symbol: AC4DEC_WindowKBD768 */
/* Demangled: AC4DEC_WindowKBD768 */
extern void* AC4DEC_WindowKBD768;

/* Symbol: AC4DEC_oamdi_get_max_bitstream_size */
/* Demangled: AC4DEC_oamdi_get_max_bitstream_size */
int AC4DEC_oamdi_get_max_bitstream_size(void);

/* Symbol: dlb_dct_twiddle_table16_1_L480 */
/* Demangled: dlb_dct_twiddle_table16_1_L480 */
extern void* dlb_dct_twiddle_table16_1_L480;

/* Symbol: AC4DEC_sv_dual_end_init */
/* Demangled: AC4DEC_sv_dual_end_init */
int AC4DEC_sv_dual_end_init(void);

/* Symbol: AC4DEC_dlb_bitbuf_write */
/* Demangled: AC4DEC_dlb_bitbuf_write */
int AC4DEC_dlb_bitbuf_write(void);

/* Symbol: AC4DEC_fboar_query_memory */
/* Demangled: AC4DEC_fboar_query_memory */
int AC4DEC_fboar_query_memory(void);

/* Symbol: DLB_r4_fft_16_s */
/* Demangled: DLB_r4_fft_16_s */
int DLB_r4_fft_16_s(void);

/* Symbol: dlb_fft_inv_usc_40 */
/* Demangled: dlb_fft_inv_usc_40 */
int dlb_fft_inv_usc_40(void);

/* Symbol: AC4DEC_sv_init */
/* Demangled: AC4DEC_sv_init */
int AC4DEC_sv_init(void);

/* Symbol: dlb_fft_fwd_usc_36 */
/* Demangled: dlb_fft_fwd_usc_36 */
int dlb_fft_fwd_usc_36(void);

/* Symbol: dlb_fft_inv_scl_640 */
/* Demangled: dlb_fft_inv_scl_640 */
int dlb_fft_inv_scl_640(void);

/* Symbol: AC4DEC_memlib_get_mem_section_size */
/* Demangled: AC4DEC_memlib_get_mem_section_size */
int AC4DEC_memlib_get_mem_section_size(void);

/* Symbol: AC4DEC_ac4dsp_CLmpy_shlCLLUU_inplace_strict */
/* Demangled: AC4DEC_ac4dsp_CLmpy_shlCLLUU_inplace_strict */
int AC4DEC_ac4dsp_CLmpy_shlCLLUU_inplace_strict(void);

/* Symbol: AC4DEC_evo_init_hmac */
/* Demangled: AC4DEC_evo_init_hmac */
int AC4DEC_evo_init_hmac(void);

/* Symbol: dlb_vec_IeqLLU_flex */
/* Demangled: dlb_vec_IeqLLU_flex */
int dlb_vec_IeqLLU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L96 */
/* Demangled: dlb_dct_twiddle_table16_rev_L96 */
extern void* dlb_dct_twiddle_table16_rev_L96;

/* Symbol: DLB_r4_fft_144_s */
/* Demangled: DLB_r4_fft_144_s */
int DLB_r4_fft_144_s(void);

/* Symbol: DLB_fft_shutdown */
/* Demangled: DLB_fft_shutdown */
int DLB_fft_shutdown(void);

/* Symbol: _ZN7android10AC4Decoder4initEPKc */
/* Demangled: android::AC4Decoder::init(char const*) */
int _ZN7android10AC4Decoder4initEPKc(void);

/* Symbol: DLB_CLmacCLLU_strict */
/* Demangled: DLB_CLmacCLLU_strict */
int DLB_CLmacCLLU_strict(void);

/* Symbol: AC4DEC_speaker_config_spkr_set */
/* Demangled: AC4DEC_speaker_config_spkr_set */
int AC4DEC_speaker_config_spkr_set(void);

/* Symbol: DLB_r4_fft_20_s */
/* Demangled: DLB_r4_fft_20_s */
int DLB_r4_fft_20_s(void);

/* Symbol: DLB_mfb_p10km_synthesisCL_query_mem */
/* Demangled: DLB_mfb_p10km_synthesisCL_query_mem */
int DLB_mfb_p10km_synthesisCL_query_mem(void);

/* Symbol: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR48KHZ_BS256S */
/* Demangled: AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR48KHZ_BS256S */
extern void* AC4DEC_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_SR48KHZ_BS256S;

/* Symbol: AC4DEC_oamd_mdd_generate_dummy_data */
/* Demangled: AC4DEC_oamd_mdd_generate_dummy_data */
int AC4DEC_oamd_mdd_generate_dummy_data(void);

/* Symbol: dlb_fft_fwd_usc_512 */
/* Demangled: dlb_fft_fwd_usc_512 */
int dlb_fft_fwd_usc_512(void);

/* Symbol: dlb_dct_twiddle_table16_L288_cos */
/* Demangled: dlb_dct_twiddle_table16_L288_cos */
extern void* dlb_dct_twiddle_table16_L288_cos;

/* Symbol: AC4DEC_WindowKBD512_alpha3_0 */
/* Demangled: AC4DEC_WindowKBD512_alpha3_0 */
extern void* AC4DEC_WindowKBD512_alpha3_0;

/* Symbol: dlb_fft_fwd_scl_60 */
/* Demangled: dlb_fft_fwd_scl_60 */
int dlb_fft_fwd_scl_60(void);

/* Symbol: dlb_fft_inv_usc_45 */
/* Demangled: dlb_fft_inv_usc_45 */
int dlb_fft_inv_usc_45(void);

/* Symbol: AC4DEC_aspx_dequantize_noise_1ch */
/* Demangled: AC4DEC_aspx_dequantize_noise_1ch */
int AC4DEC_aspx_dequantize_noise_1ch(void);

/* Symbol: dlb_qmf_filter_coeff_P5_32_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_32_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_32_vec_ana;

/* Symbol: AC4DEC_ac4framer_configure */
/* Demangled: AC4DEC_ac4framer_configure */
int AC4DEC_ac4framer_configure(void);

/* Symbol: AC4DEC_ngcs_mode_get_num_upmix_out_chans */
/* Demangled: AC4DEC_ngcs_mode_get_num_upmix_out_chans */
int AC4DEC_ngcs_mode_get_num_upmix_out_chans(void);

/* Symbol: AC4DEC_A_ROOM_CONFIG_SPKS_BACK_CENTRE */
/* Demangled: AC4DEC_A_ROOM_CONFIG_SPKS_BACK_CENTRE */
extern void* AC4DEC_A_ROOM_CONFIG_SPKS_BACK_CENTRE;

/* Symbol: DLB_r4_fft_40 */
/* Demangled: DLB_r4_fft_40 */
int DLB_r4_fft_40(void);

/* Symbol: DLB_r4_inv_fft_576_s */
/* Demangled: DLB_r4_inv_fft_576_s */
int DLB_r4_inv_fft_576_s(void);

/* Symbol: AC4DEC_delay_line_clvec_initialize */
/* Demangled: AC4DEC_delay_line_clvec_initialize */
int AC4DEC_delay_line_clvec_initialize(void);

/* Symbol: dlb_dct_twiddle_table16_L72 */
/* Demangled: dlb_dct_twiddle_table16_L72 */
extern void* dlb_dct_twiddle_table16_L72;

/* Symbol: AC4DEC_adaptive_noise_gain_tab */
/* Demangled: AC4DEC_adaptive_noise_gain_tab */
extern void* AC4DEC_adaptive_noise_gain_tab;

/* Symbol: AC4DEC_evo_ll_remove_tail */
/* Demangled: AC4DEC_evo_ll_remove_tail */
int AC4DEC_evo_ll_remove_tail(void);

/* Symbol: dlb_CLmacCLCLU_flex */
/* Demangled: dlb_CLmacCLCLU_flex */
int dlb_CLmacCLCLU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L45 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L45 */
extern void* dlb_dct_twiddle_table16_rev_1_L45;

/* Symbol: dlb_fft_inv_usc_48 */
/* Demangled: dlb_fft_inv_usc_48 */
int dlb_fft_inv_usc_48(void);

/* Symbol: AC4DEC_decoder_process */
/* Demangled: AC4DEC_decoder_process */
int AC4DEC_decoder_process(void);

/* Symbol: AC4DEC_dequantize_ajoc_mtxdry_values */
/* Demangled: AC4DEC_dequantize_ajoc_mtxdry_values */
int AC4DEC_dequantize_ajoc_mtxdry_values(void);

/* Symbol: AC4DEC_aspx_hf_adjust_tsg */
/* Demangled: AC4DEC_aspx_hf_adjust_tsg */
int AC4DEC_aspx_hf_adjust_tsg(void);

/* Symbol: AC4DEC_oamdi_set_prog_assign */
/* Demangled: AC4DEC_oamdi_set_prog_assign */
int AC4DEC_oamdi_set_prog_assign(void);

/* Symbol: AC4DEC_speaker_config_count */
/* Demangled: AC4DEC_speaker_config_count */
int AC4DEC_speaker_config_count(void);

/* Symbol: dlb_fft_fwd_scl_64 */
/* Demangled: dlb_fft_fwd_scl_64 */
int dlb_fft_fwd_scl_64(void);

/* Symbol: AC4DEC_PA_NGCS_SEG_CHANNELS_5TO7CH */
/* Demangled: AC4DEC_PA_NGCS_SEG_CHANNELS_5TO7CH */
extern void* AC4DEC_PA_NGCS_SEG_CHANNELS_5TO7CH;

/* Symbol: AC4DEC_IMS_BANDING_SCHEME_DEN_AP */
/* Demangled: AC4DEC_IMS_BANDING_SCHEME_DEN_AP */
extern void* AC4DEC_IMS_BANDING_SCHEME_DEN_AP;

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_544_0 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_544_0 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_544_0;

/* Symbol: AC4DEC_ac4dap_query_memory */
/* Demangled: AC4DEC_ac4dap_query_memory */
int AC4DEC_ac4dap_query_memory(void);

/* Symbol: AC4DEC_interpol_mult_UM_1ch */
/* Demangled: AC4DEC_interpol_mult_UM_1ch */
int AC4DEC_interpol_mult_UM_1ch(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L48 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L48 */
extern void* dlb_dct_twiddle_table16_rev_1_L48;

/* Symbol: dlb_fft_fwd_usc_160 */
/* Demangled: dlb_fft_fwd_usc_160 */
int dlb_fft_fwd_usc_160(void);

/* Symbol: _ZN5dolby12DlbGenClass2D2Ev */
/* Demangled: dolby::DlbGenClass2::~DlbGenClass2() */
int _ZN5dolby12DlbGenClass2D2Ev(void);

/* Symbol: AC4DEC_AC4TOC_CHANNEL_MAP_544_1 */
/* Demangled: AC4DEC_AC4TOC_CHANNEL_MAP_544_1 */
extern void* AC4DEC_AC4TOC_CHANNEL_MAP_544_1;

/* Symbol: AC4DEC_ac4dap_rhcqmf_process */
/* Demangled: AC4DEC_ac4dap_rhcqmf_process */
int AC4DEC_ac4dap_rhcqmf_process(void);

/* Symbol: AC4DEC_room_config_query_memory */
/* Demangled: AC4DEC_room_config_query_memory */
int AC4DEC_room_config_query_memory(void);

/* Symbol: dlb_blk_Lcrossfade_gainLS_flex */
/* Demangled: dlb_blk_Lcrossfade_gainLS_flex */
int dlb_blk_Lcrossfade_gainLS_flex(void);

/* Symbol: DLB_r4_fft_45 */
/* Demangled: DLB_r4_fft_45 */
int DLB_r4_fft_45(void);

/* Symbol: dlb_fft_inv_scl_72 */
/* Demangled: dlb_fft_inv_scl_72 */
int dlb_fft_inv_scl_72(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSTAGEFRIGHT_SOFT_AC4DEC_H */
