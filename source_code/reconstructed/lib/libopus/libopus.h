/*
 * Reverse-Engineered ABI Specification for: libopus.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libopus.so
 */

#ifndef BEGONIA_RE_LIBOPUS_H
#define BEGONIA_RE_LIBOPUS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: silk_LTP_vq_sizes */
/* Demangled: silk_LTP_vq_sizes */
extern void* silk_LTP_vq_sizes;

/* Symbol: silk_nb_cbk_searchs_stage3 */
/* Demangled: silk_nb_cbk_searchs_stage3 */
extern void* silk_nb_cbk_searchs_stage3;

/* Symbol: silk_schur */
/* Demangled: silk_schur */
int silk_schur(void);

/* Symbol: opus_multistream_encoder_destroy */
/* Demangled: opus_multistream_encoder_destroy */
int opus_multistream_encoder_destroy(void);

/* Symbol: silk_uniform3_iCDF */
/* Demangled: silk_uniform3_iCDF */
extern void* silk_uniform3_iCDF;

/* Symbol: SILK_NSQ_DEL_DEC_IMPL */
/* Demangled: SILK_NSQ_DEL_DEC_IMPL */
extern void* SILK_NSQ_DEL_DEC_IMPL;

/* Symbol: mapping_matrix_soa_demixing */
/* Demangled: mapping_matrix_soa_demixing */
extern void* mapping_matrix_soa_demixing;

/* Symbol: silk_decoder_set_fs */
/* Demangled: silk_decoder_set_fs */
int silk_decoder_set_fs(void);

/* Symbol: silk_scale_copy_vector16 */
/* Demangled: silk_scale_copy_vector16 */
int silk_scale_copy_vector16(void);

/* Symbol: quant_all_bands */
/* Demangled: quant_all_bands */
int quant_all_bands(void);

/* Symbol: init_caps */
/* Demangled: init_caps */
int init_caps(void);

/* Symbol: ec_enc_done */
/* Demangled: ec_enc_done */
int ec_enc_done(void);

/* Symbol: op_pvq_search_c */
/* Demangled: op_pvq_search_c */
int op_pvq_search_c(void);

/* Symbol: silk_CNG */
/* Demangled: silk_CNG */
int silk_CNG(void);

/* Symbol: silk_InitDecoder */
/* Demangled: silk_InitDecoder */
int silk_InitDecoder(void);

/* Symbol: silk_resampler_frac_FIR_12 */
/* Demangled: silk_resampler_frac_FIR_12 */
extern void* silk_resampler_frac_FIR_12;

/* Symbol: SILK_WARPED_AUTOCORRELATION_FIX_IMPL */
/* Demangled: SILK_WARPED_AUTOCORRELATION_FIX_IMPL */
extern void* SILK_WARPED_AUTOCORRELATION_FIX_IMPL;

/* Symbol: unquant_coarse_energy */
/* Demangled: unquant_coarse_energy */
int unquant_coarse_energy(void);

/* Symbol: silk_decode_frame */
/* Demangled: silk_decode_frame */
int silk_decode_frame(void);

/* Symbol: silk_LTP_per_index_iCDF */
/* Demangled: silk_LTP_per_index_iCDF */
extern void* silk_LTP_per_index_iCDF;

/* Symbol: silk_shell_decoder */
/* Demangled: silk_shell_decoder */
int silk_shell_decoder(void);

/* Symbol: silk_encode_pulses */
/* Demangled: silk_encode_pulses */
int silk_encode_pulses(void);

/* Symbol: opus_packet_get_samples_per_frame */
/* Demangled: opus_packet_get_samples_per_frame */
int opus_packet_get_samples_per_frame(void);

/* Symbol: amp2Log2 */
/* Demangled: amp2Log2 */
int amp2Log2(void);

/* Symbol: unquant_fine_energy */
/* Demangled: unquant_fine_energy */
int unquant_fine_energy(void);

/* Symbol: silk_sigm_Q15 */
/* Demangled: silk_sigm_Q15 */
int silk_sigm_Q15(void);

/* Symbol: get_mono_channel */
/* Demangled: get_mono_channel */
int get_mono_channel(void);

/* Symbol: opus_projection_decoder_ctl */
/* Demangled: opus_projection_decoder_ctl */
int opus_projection_decoder_ctl(void);

/* Symbol: silk_warped_autocorrelation_FIX_c */
/* Demangled: silk_warped_autocorrelation_FIX_c */
int silk_warped_autocorrelation_FIX_c(void);

/* Symbol: silk_NSQ_noise_shape_feedback_loop_neon */
/* Demangled: silk_NSQ_noise_shape_feedback_loop_neon */
int silk_NSQ_noise_shape_feedback_loop_neon(void);

/* Symbol: ec_dec_icdf */
/* Demangled: ec_dec_icdf */
int ec_dec_icdf(void);

/* Symbol: silk_insertion_sort_increasing_all_values_int16 */
/* Demangled: silk_insertion_sort_increasing_all_values_int16 */
int silk_insertion_sort_increasing_all_values_int16(void);

/* Symbol: silk_burg_modified_c */
/* Demangled: silk_burg_modified_c */
int silk_burg_modified_c(void);

/* Symbol: run_analysis */
/* Demangled: run_analysis */
int run_analysis(void);

/* Symbol: silk_NSQ_del_dec_c */
/* Demangled: silk_NSQ_del_dec_c */
int silk_NSQ_del_dec_c(void);

/* Symbol: silk_CB_lags_stage2_10_ms */
/* Demangled: silk_CB_lags_stage2_10_ms */
extern void* silk_CB_lags_stage2_10_ms;

/* Symbol: silk_Resampler_1_4_COEFS */
/* Demangled: silk_Resampler_1_4_COEFS */
extern void* silk_Resampler_1_4_COEFS;

/* Symbol: mapping_matrix_soa_mixing */
/* Demangled: mapping_matrix_soa_mixing */
extern void* mapping_matrix_soa_mixing;

/* Symbol: opus_encoder_init */
/* Demangled: opus_encoder_init */
int opus_encoder_init(void);

/* Symbol: ec_enc_bits */
/* Demangled: ec_enc_bits */
int ec_enc_bits(void);

/* Symbol: celt_decoder_init */
/* Demangled: celt_decoder_init */
int celt_decoder_init(void);

/* Symbol: mapping_matrix_soa_mixing_data */
/* Demangled: mapping_matrix_soa_mixing_data */
extern void* mapping_matrix_soa_mixing_data;

/* Symbol: opus_multistream_encode */
/* Demangled: opus_multistream_encode */
int opus_multistream_encode(void);

/* Symbol: ec_encode */
/* Demangled: ec_encode */
int ec_encode(void);

/* Symbol: opus_packet_get_bandwidth */
/* Demangled: opus_packet_get_bandwidth */
int opus_packet_get_bandwidth(void);

/* Symbol: opus_encode_float */
/* Demangled: opus_encode_float */
int opus_encode_float(void);

/* Symbol: silk_pulses_per_block_BITS_Q5 */
/* Demangled: silk_pulses_per_block_BITS_Q5 */
extern void* silk_pulses_per_block_BITS_Q5;

/* Symbol: silk_control_audio_bandwidth */
/* Demangled: silk_control_audio_bandwidth */
int silk_control_audio_bandwidth(void);

/* Symbol: opus_repacketizer_cat */
/* Demangled: opus_repacketizer_cat */
int opus_repacketizer_cat(void);

/* Symbol: silk_resampler */
/* Demangled: silk_resampler */
int silk_resampler(void);

/* Symbol: silk_biquad_alt_stride1 */
/* Demangled: silk_biquad_alt_stride1 */
int silk_biquad_alt_stride1(void);

/* Symbol: silk_sum_sqr_shift */
/* Demangled: silk_sum_sqr_shift */
int silk_sum_sqr_shift(void);

/* Symbol: celt_rcp */
/* Demangled: celt_rcp */
int celt_rcp(void);

/* Symbol: ec_dec_init */
/* Demangled: ec_dec_init */
int ec_dec_init(void);

/* Symbol: opus_fft_c */
/* Demangled: opus_fft_c */
int opus_fft_c(void);

/* Symbol: silk_NLSF_CB_NB_MB */
/* Demangled: silk_NLSF_CB_NB_MB */
extern void* silk_NLSF_CB_NB_MB;

/* Symbol: silk_CB_lags_stage2 */
/* Demangled: silk_CB_lags_stage2 */
extern void* silk_CB_lags_stage2;

/* Symbol: frame_size_select */
/* Demangled: frame_size_select */
int frame_size_select(void);

/* Symbol: opus_multistream_surround_encoder_init */
/* Demangled: opus_multistream_surround_encoder_init */
int opus_multistream_surround_encoder_init(void);

/* Symbol: silk_encode_signs */
/* Demangled: silk_encode_signs */
int silk_encode_signs(void);

/* Symbol: silk_LTP_vq_gain_ptrs_Q7 */
/* Demangled: silk_LTP_vq_gain_ptrs_Q7 */
extern void* silk_LTP_vq_gain_ptrs_Q7;

/* Symbol: silk_stereo_only_code_mid_iCDF */
/* Demangled: silk_stereo_only_code_mid_iCDF */
extern void* silk_stereo_only_code_mid_iCDF;

/* Symbol: silk_CB_lags_stage3 */
/* Demangled: silk_CB_lags_stage3 */
extern void* silk_CB_lags_stage3;

/* Symbol: silk_find_LPC_FIX */
/* Demangled: silk_find_LPC_FIX */
int silk_find_LPC_FIX(void);

/* Symbol: silk_Encode */
/* Demangled: silk_Encode */
int silk_Encode(void);

/* Symbol: opus_projection_encode */
/* Demangled: opus_projection_encode */
int opus_projection_encode(void);

/* Symbol: opus_projection_encoder_ctl */
/* Demangled: opus_projection_encoder_ctl */
int opus_projection_encoder_ctl(void);

/* Symbol: opus_repacketizer_create */
/* Demangled: opus_repacketizer_create */
int opus_repacketizer_create(void);

/* Symbol: opus_strerror */
/* Demangled: opus_strerror */
int opus_strerror(void);

/* Symbol: celt_iir */
/* Demangled: celt_iir */
int celt_iir(void);

/* Symbol: silk_HP_variable_cutoff */
/* Demangled: silk_HP_variable_cutoff */
int silk_HP_variable_cutoff(void);

/* Symbol: downmix_float */
/* Demangled: downmix_float */
int downmix_float(void);

/* Symbol: silk_resampler_private_down_FIR */
/* Demangled: silk_resampler_private_down_FIR */
int silk_resampler_private_down_FIR(void);

/* Symbol: silk_find_LTP_FIX */
/* Demangled: silk_find_LTP_FIX */
int silk_find_LTP_FIX(void);

/* Symbol: opus_decode_native */
/* Demangled: opus_decode_native */
int opus_decode_native(void);

/* Symbol: opus_decoder_get_nb_samples */
/* Demangled: opus_decoder_get_nb_samples */
int opus_decoder_get_nb_samples(void);

/* Symbol: silk_stereo_find_predictor */
/* Demangled: silk_stereo_find_predictor */
int silk_stereo_find_predictor(void);

/* Symbol: opus_multistream_decoder_create */
/* Demangled: opus_multistream_decoder_create */
int opus_multistream_decoder_create(void);

/* Symbol: isqrt32 */
/* Demangled: isqrt32 */
int isqrt32(void);

/* Symbol: clt_mdct_backward_c */
/* Demangled: clt_mdct_backward_c */
int clt_mdct_backward_c(void);

/* Symbol: silk_decode_core */
/* Demangled: silk_decode_core */
int silk_decode_core(void);

/* Symbol: silk_NLSF_EXT_iCDF */
/* Demangled: silk_NLSF_EXT_iCDF */
extern void* silk_NLSF_EXT_iCDF;

/* Symbol: silk_Transition_LP_A_Q28 */
/* Demangled: silk_Transition_LP_A_Q28 */
extern void* silk_Transition_LP_A_Q28;

/* Symbol: silk_NLSF_VQ_weights_laroia */
/* Demangled: silk_NLSF_VQ_weights_laroia */
int silk_NLSF_VQ_weights_laroia(void);

/* Symbol: opus_repacketizer_out */
/* Demangled: opus_repacketizer_out */
int opus_repacketizer_out(void);

/* Symbol: silk_PLC_Reset */
/* Demangled: silk_PLC_Reset */
int silk_PLC_Reset(void);

/* Symbol: silk_type_offset_no_VAD_iCDF */
/* Demangled: silk_type_offset_no_VAD_iCDF */
extern void* silk_type_offset_no_VAD_iCDF;

/* Symbol: silk_Lag_range_stage3_10_ms */
/* Demangled: silk_Lag_range_stage3_10_ms */
extern void* silk_Lag_range_stage3_10_ms;

/* Symbol: silk_resampler_private_AR2 */
/* Demangled: silk_resampler_private_AR2 */
int silk_resampler_private_AR2(void);

/* Symbol: opus_multistream_decoder_destroy */
/* Demangled: opus_multistream_decoder_destroy */
int opus_multistream_decoder_destroy(void);

/* Symbol: celt_pitch_xcorr_c */
/* Demangled: celt_pitch_xcorr_c */
int celt_pitch_xcorr_c(void);

/* Symbol: silk_LTP_vq_ptrs_Q7 */
/* Demangled: silk_LTP_vq_ptrs_Q7 */
extern void* silk_LTP_vq_ptrs_Q7;

/* Symbol: silk_uniform6_iCDF */
/* Demangled: silk_uniform6_iCDF */
extern void* silk_uniform6_iCDF;

/* Symbol: silk_gains_ID */
/* Demangled: silk_gains_ID */
int silk_gains_ID(void);

/* Symbol: opus_multistream_decode */
/* Demangled: opus_multistream_decode */
int opus_multistream_decode(void);

/* Symbol: ec_decode */
/* Demangled: ec_decode */
int ec_decode(void);

/* Symbol: frac_div32 */
/* Demangled: frac_div32 */
int frac_div32(void);

/* Symbol: silk_Resampler_1_6_COEFS */
/* Demangled: silk_Resampler_1_6_COEFS */
extern void* silk_Resampler_1_6_COEFS;

/* Symbol: silk_rate_levels_BITS_Q5 */
/* Demangled: silk_rate_levels_BITS_Q5 */
extern void* silk_rate_levels_BITS_Q5;

/* Symbol: silk_stereo_pred_quant_Q13 */
/* Demangled: silk_stereo_pred_quant_Q13 */
extern void* silk_stereo_pred_quant_Q13;

/* Symbol: silk_NLSF_encode */
/* Demangled: silk_NLSF_encode */
int silk_NLSF_encode(void);

/* Symbol: silk_find_pitch_lags_FIX */
/* Demangled: silk_find_pitch_lags_FIX */
int silk_find_pitch_lags_FIX(void);

/* Symbol: silk_process_gains_FIX */
/* Demangled: silk_process_gains_FIX */
int silk_process_gains_FIX(void);

/* Symbol: silk_residual_energy_FIX */
/* Demangled: silk_residual_energy_FIX */
int silk_residual_energy_FIX(void);

/* Symbol: encode_size */
/* Demangled: encode_size */
int encode_size(void);

/* Symbol: opus_multistream_decode_native */
/* Demangled: opus_multistream_decode_native */
int opus_multistream_decode_native(void);

/* Symbol: renormalise_vector */
/* Demangled: renormalise_vector */
int renormalise_vector(void);

/* Symbol: celt_encode_with_ec */
/* Demangled: celt_encode_with_ec */
int celt_encode_with_ec(void);

/* Symbol: celt_cos_norm */
/* Demangled: celt_cos_norm */
int celt_cos_norm(void);

/* Symbol: silk_Resampler_2_3_COEFS */
/* Demangled: silk_Resampler_2_3_COEFS */
extern void* silk_Resampler_2_3_COEFS;

/* Symbol: mapping_matrix_toa_mixing_data */
/* Demangled: mapping_matrix_toa_mixing_data */
extern void* mapping_matrix_toa_mixing_data;

/* Symbol: opus_decoder_get_size */
/* Demangled: opus_decoder_get_size */
int opus_decoder_get_size(void);

/* Symbol: DUAL_INNER_PROD_IMPL */
/* Demangled: DUAL_INNER_PROD_IMPL */
extern void* DUAL_INNER_PROD_IMPL;

/* Symbol: SMALL_DIV_TABLE */
/* Demangled: SMALL_DIV_TABLE */
extern void* SMALL_DIV_TABLE;

/* Symbol: silk_pitch_lag_iCDF */
/* Demangled: silk_pitch_lag_iCDF */
extern void* silk_pitch_lag_iCDF;

/* Symbol: silk_VQ_WMat_EC_c */
/* Demangled: silk_VQ_WMat_EC_c */
int silk_VQ_WMat_EC_c(void);

/* Symbol: opus_packet_pad */
/* Demangled: opus_packet_pad */
int opus_packet_pad(void);

/* Symbol: opus_repacketizer_destroy */
/* Demangled: opus_repacketizer_destroy */
int opus_repacketizer_destroy(void);

/* Symbol: silk_Decode */
/* Demangled: silk_Decode */
int silk_Decode(void);

/* Symbol: silk_InitEncoder */
/* Demangled: silk_InitEncoder */
int silk_InitEncoder(void);

/* Symbol: silk_noise_shape_quantizer_short_prediction_neon */
/* Demangled: silk_noise_shape_quantizer_short_prediction_neon */
int silk_noise_shape_quantizer_short_prediction_neon(void);

/* Symbol: opus_projection_decode */
/* Demangled: opus_projection_decode */
int opus_projection_decode(void);

/* Symbol: silk_schur64 */
/* Demangled: silk_schur64 */
int silk_schur64(void);

/* Symbol: opus_encoder_get_size */
/* Demangled: opus_encoder_get_size */
int opus_encoder_get_size(void);

/* Symbol: silk_stereo_MS_to_LR */
/* Demangled: silk_stereo_MS_to_LR */
int silk_stereo_MS_to_LR(void);

/* Symbol: silk_bwexpander_32 */
/* Demangled: silk_bwexpander_32 */
int silk_bwexpander_32(void);

/* Symbol: pitch_search */
/* Demangled: pitch_search */
int pitch_search(void);

/* Symbol: opus_select_arch */
/* Demangled: opus_select_arch */
int opus_select_arch(void);

/* Symbol: silk_LTPScales_table_Q14 */
/* Demangled: silk_LTPScales_table_Q14 */
extern void* silk_LTPScales_table_Q14;

/* Symbol: silk_ana_filt_bank_1 */
/* Demangled: silk_ana_filt_bank_1 */
int silk_ana_filt_bank_1(void);

/* Symbol: opus_projection_decoder_get_size */
/* Demangled: opus_projection_decoder_get_size */
int opus_projection_decoder_get_size(void);

/* Symbol: ec_dec_bits */
/* Demangled: ec_dec_bits */
int ec_dec_bits(void);

/* Symbol: celt_encoder_init */
/* Demangled: celt_encoder_init */
int celt_encoder_init(void);

/* Symbol: validate_celt_decoder */
/* Demangled: validate_celt_decoder */
int validate_celt_decoder(void);

/* Symbol: silk_A2NLSF */
/* Demangled: silk_A2NLSF */
int silk_A2NLSF(void);

/* Symbol: silk_k2a */
/* Demangled: silk_k2a */
int silk_k2a(void);

/* Symbol: opus_get_version_string */
/* Demangled: opus_get_version_string */
int opus_get_version_string(void);

/* Symbol: ec_enc_shrink */
/* Demangled: ec_enc_shrink */
int ec_enc_shrink(void);

/* Symbol: silk_LTP_gain_iCDF_ptrs */
/* Demangled: silk_LTP_gain_iCDF_ptrs */
extern void* silk_LTP_gain_iCDF_ptrs;

/* Symbol: silk_k2a_Q16 */
/* Demangled: silk_k2a_Q16 */
int silk_k2a_Q16(void);

/* Symbol: surround_analysis */
/* Demangled: surround_analysis */
int surround_analysis(void);

/* Symbol: silk_pitch_contour_iCDF */
/* Demangled: silk_pitch_contour_iCDF */
extern void* silk_pitch_contour_iCDF;

/* Symbol: silk_VAD_Init */
/* Demangled: silk_VAD_Init */
int silk_VAD_Init(void);

/* Symbol: silk_inner_prod_aligned_scale */
/* Demangled: silk_inner_prod_aligned_scale */
int silk_inner_prod_aligned_scale(void);

/* Symbol: opus_repacketizer_init */
/* Demangled: opus_repacketizer_init */
int opus_repacketizer_init(void);

/* Symbol: eMeans */
/* Demangled: eMeans */
extern void* eMeans;

/* Symbol: silk_decode_pulses */
/* Demangled: silk_decode_pulses */
int silk_decode_pulses(void);

/* Symbol: silk_NLSF_stabilize */
/* Demangled: silk_NLSF_stabilize */
int silk_NLSF_stabilize(void);

/* Symbol: mapping_matrix_toa_demixing */
/* Demangled: mapping_matrix_toa_demixing */
extern void* mapping_matrix_toa_demixing;

/* Symbol: compute_band_energies */
/* Demangled: compute_band_energies */
int compute_band_energies(void);

/* Symbol: silk_Lag_range_stage3 */
/* Demangled: silk_Lag_range_stage3 */
extern void* silk_Lag_range_stage3;

/* Symbol: mapping_matrix_get_data */
/* Demangled: mapping_matrix_get_data */
int mapping_matrix_get_data(void);

/* Symbol: opus_multistream_surround_encoder_get_size */
/* Demangled: opus_multistream_surround_encoder_get_size */
int opus_multistream_surround_encoder_get_size(void);

/* Symbol: opus_projection_ambisonics_encoder_get_size */
/* Demangled: opus_projection_ambisonics_encoder_get_size */
int opus_projection_ambisonics_encoder_get_size(void);

/* Symbol: _celt_lpc */
/* Demangled: _celt_lpc */
int _celt_lpc(void);

/* Symbol: ec_decode_bin */
/* Demangled: ec_decode_bin */
int ec_decode_bin(void);

/* Symbol: opus_fft_impl */
/* Demangled: opus_fft_impl */
int opus_fft_impl(void);

/* Symbol: silk_Quantization_Offsets_Q10 */
/* Demangled: silk_Quantization_Offsets_Q10 */
extern void* silk_Quantization_Offsets_Q10;

/* Symbol: silk_residual_energy16_covar_FIX */
/* Demangled: silk_residual_energy16_covar_FIX */
int silk_residual_energy16_covar_FIX(void);

/* Symbol: opus_decoder_create */
/* Demangled: opus_decoder_create */
int opus_decoder_create(void);

/* Symbol: opus_projection_encoder_destroy */
/* Demangled: opus_projection_encoder_destroy */
int opus_projection_encoder_destroy(void);

/* Symbol: compute_dense */
/* Demangled: compute_dense */
int compute_dense(void);

/* Symbol: celt_rsqrt_norm */
/* Demangled: celt_rsqrt_norm */
int celt_rsqrt_norm(void);

/* Symbol: silk_NLSF_decode */
/* Demangled: silk_NLSF_decode */
int silk_NLSF_decode(void);

/* Symbol: silk_Resampler_1_3_COEFS */
/* Demangled: silk_Resampler_1_3_COEFS */
extern void* silk_Resampler_1_3_COEFS;

/* Symbol: quant_fine_energy */
/* Demangled: quant_fine_energy */
int quant_fine_energy(void);

/* Symbol: silk_gains_dequant */
/* Demangled: silk_gains_dequant */
int silk_gains_dequant(void);

/* Symbol: silk_LTP_scale_ctrl_FIX */
/* Demangled: silk_LTP_scale_ctrl_FIX */
int silk_LTP_scale_ctrl_FIX(void);

/* Symbol: opus_projection_decoder_create */
/* Demangled: opus_projection_decoder_create */
int opus_projection_decoder_create(void);

/* Symbol: opus_projection_decoder_init */
/* Demangled: opus_projection_decoder_init */
int opus_projection_decoder_init(void);

/* Symbol: celt_fir_c */
/* Demangled: celt_fir_c */
int celt_fir_c(void);

/* Symbol: silk_pitch_contour_10_ms_NB_iCDF */
/* Demangled: silk_pitch_contour_10_ms_NB_iCDF */
extern void* silk_pitch_contour_10_ms_NB_iCDF;

/* Symbol: celt_inner_prod_neon */
/* Demangled: celt_inner_prod_neon */
int celt_inner_prod_neon(void);

/* Symbol: silk_Get_Decoder_Size */
/* Demangled: silk_Get_Decoder_Size */
int silk_Get_Decoder_Size(void);

/* Symbol: silk_shell_encoder */
/* Demangled: silk_shell_encoder */
int silk_shell_encoder(void);

/* Symbol: silk_Transition_LP_B_Q28 */
/* Demangled: silk_Transition_LP_B_Q28 */
extern void* silk_Transition_LP_B_Q28;

/* Symbol: opus_projection_decode_float */
/* Demangled: opus_projection_decode_float */
int opus_projection_decode_float(void);

/* Symbol: exp_rotation */
/* Demangled: exp_rotation */
int exp_rotation(void);

/* Symbol: silk_resampler_init */
/* Demangled: silk_resampler_init */
int silk_resampler_init(void);

/* Symbol: opus_multistream_surround_encoder_create */
/* Demangled: opus_multistream_surround_encoder_create */
int opus_multistream_surround_encoder_create(void);

/* Symbol: tonality_get_info */
/* Demangled: tonality_get_info */
int tonality_get_info(void);

/* Symbol: _celt_autocorr */
/* Demangled: _celt_autocorr */
int _celt_autocorr(void);

/* Symbol: unquant_energy_finalise */
/* Demangled: unquant_energy_finalise */
int unquant_energy_finalise(void);

/* Symbol: silk_type_offset_VAD_iCDF */
/* Demangled: silk_type_offset_VAD_iCDF */
extern void* silk_type_offset_VAD_iCDF;

/* Symbol: silk_NLSF_VQ */
/* Demangled: silk_NLSF_VQ */
int silk_NLSF_VQ(void);

/* Symbol: silk_apply_sine_window */
/* Demangled: silk_apply_sine_window */
int silk_apply_sine_window(void);

/* Symbol: ec_enc_uint */
/* Demangled: ec_enc_uint */
int ec_enc_uint(void);

/* Symbol: opus_repacketizer_get_nb_frames */
/* Demangled: opus_repacketizer_get_nb_frames */
int opus_repacketizer_get_nb_frames(void);

/* Symbol: pitch_downsample */
/* Demangled: pitch_downsample */
int pitch_downsample(void);

/* Symbol: ec_encode_bin */
/* Demangled: ec_encode_bin */
int ec_encode_bin(void);

/* Symbol: silk_rate_levels_iCDF */
/* Demangled: silk_rate_levels_iCDF */
extern void* silk_rate_levels_iCDF;

/* Symbol: silk_LPC_inverse_pred_gain_neon */
/* Demangled: silk_LPC_inverse_pred_gain_neon */
int silk_LPC_inverse_pred_gain_neon(void);

/* Symbol: alg_quant */
/* Demangled: alg_quant */
int alg_quant(void);

/* Symbol: silk_NLSF_unpack */
/* Demangled: silk_NLSF_unpack */
int silk_NLSF_unpack(void);

/* Symbol: silk_LBRR_flags_iCDF_ptr */
/* Demangled: silk_LBRR_flags_iCDF_ptr */
extern void* silk_LBRR_flags_iCDF_ptr;

/* Symbol: silk_uniform5_iCDF */
/* Demangled: silk_uniform5_iCDF */
extern void* silk_uniform5_iCDF;

/* Symbol: silk_insertion_sort_increasing */
/* Demangled: silk_insertion_sort_increasing */
int silk_insertion_sort_increasing(void);

/* Symbol: silk_LSFCosTab_FIX_Q12 */
/* Demangled: silk_LSFCosTab_FIX_Q12 */
extern void* silk_LSFCosTab_FIX_Q12;

/* Symbol: opus_repacketizer_out_range */
/* Demangled: opus_repacketizer_out_range */
int opus_repacketizer_out_range(void);

/* Symbol: silk_pitch_contour_NB_iCDF */
/* Demangled: silk_pitch_contour_NB_iCDF */
extern void* silk_pitch_contour_NB_iCDF;

/* Symbol: SILK_BIQUAD_ALT_STRIDE2_IMPL */
/* Demangled: SILK_BIQUAD_ALT_STRIDE2_IMPL */
extern void* SILK_BIQUAD_ALT_STRIDE2_IMPL;

/* Symbol: silk_CNG_Reset */
/* Demangled: silk_CNG_Reset */
int silk_CNG_Reset(void);

/* Symbol: silk_LTP_analysis_filter_FIX */
/* Demangled: silk_LTP_analysis_filter_FIX */
int silk_LTP_analysis_filter_FIX(void);

/* Symbol: silk_init_decoder */
/* Demangled: silk_init_decoder */
int silk_init_decoder(void);

/* Symbol: silk_stereo_encode_mid_only */
/* Demangled: silk_stereo_encode_mid_only */
int silk_stereo_encode_mid_only(void);

/* Symbol: silk_quant_LTP_gains */
/* Demangled: silk_quant_LTP_gains */
int silk_quant_LTP_gains(void);

/* Symbol: opus_encoder_destroy */
/* Demangled: opus_encoder_destroy */
int opus_encoder_destroy(void);

/* Symbol: get_right_channel */
/* Demangled: get_right_channel */
int get_right_channel(void);

/* Symbol: validate_layout */
/* Demangled: validate_layout */
int validate_layout(void);

/* Symbol: opus_multistream_encoder_create */
/* Demangled: opus_multistream_encoder_create */
int opus_multistream_encoder_create(void);

/* Symbol: opus_multistream_packet_unpad */
/* Demangled: opus_multistream_packet_unpad */
int opus_multistream_packet_unpad(void);

/* Symbol: clt_mdct_forward_c */
/* Demangled: clt_mdct_forward_c */
int clt_mdct_forward_c(void);

/* Symbol: silk_gains_quant */
/* Demangled: silk_gains_quant */
int silk_gains_quant(void);

/* Symbol: opus_pcm_soft_clip */
/* Demangled: opus_pcm_soft_clip */
int opus_pcm_soft_clip(void);

/* Symbol: silk_autocorr */
/* Demangled: silk_autocorr */
int silk_autocorr(void);

/* Symbol: bitexact_log2tan */
/* Demangled: bitexact_log2tan */
int bitexact_log2tan(void);

/* Symbol: denormalise_bands */
/* Demangled: denormalise_bands */
int denormalise_bands(void);

/* Symbol: ec_dec_bit_logp */
/* Demangled: ec_dec_bit_logp */
int ec_dec_bit_logp(void);

/* Symbol: ec_laplace_encode */
/* Demangled: ec_laplace_encode */
int ec_laplace_encode(void);

/* Symbol: silk_pitch_delta_iCDF */
/* Demangled: silk_pitch_delta_iCDF */
extern void* silk_pitch_delta_iCDF;

/* Symbol: silk_resampler_private_IIR_FIR */
/* Demangled: silk_resampler_private_IIR_FIR */
int silk_resampler_private_IIR_FIR(void);

/* Symbol: downmix_int */
/* Demangled: downmix_int */
int downmix_int(void);

/* Symbol: opus_repacketizer_get_size */
/* Demangled: opus_repacketizer_get_size */
int opus_repacketizer_get_size(void);

/* Symbol: xcorr_kernel_neon_fixed */
/* Demangled: xcorr_kernel_neon_fixed */
int xcorr_kernel_neon_fixed(void);

/* Symbol: silk_NLSF_interpolation_factor_iCDF */
/* Demangled: silk_NLSF_interpolation_factor_iCDF */
extern void* silk_NLSF_interpolation_factor_iCDF;

/* Symbol: silk_LP_variable_cutoff */
/* Demangled: silk_LP_variable_cutoff */
int silk_LP_variable_cutoff(void);

/* Symbol: silk_LPC_fit */
/* Demangled: silk_LPC_fit */
int silk_LPC_fit(void);

/* Symbol: opus_packet_get_nb_channels */
/* Demangled: opus_packet_get_nb_channels */
int opus_packet_get_nb_channels(void);

/* Symbol: hysteresis_decision */
/* Demangled: hysteresis_decision */
int hysteresis_decision(void);

/* Symbol: silk_decode_indices */
/* Demangled: silk_decode_indices */
int silk_decode_indices(void);

/* Symbol: opus_packet_get_nb_samples */
/* Demangled: opus_packet_get_nb_samples */
int opus_packet_get_nb_samples(void);

/* Symbol: opus_projection_ambisonics_encoder_init */
/* Demangled: opus_projection_ambisonics_encoder_init */
int opus_projection_ambisonics_encoder_init(void);

/* Symbol: normalise_bands */
/* Demangled: normalise_bands */
int normalise_bands(void);

/* Symbol: remove_doubling */
/* Demangled: remove_doubling */
int remove_doubling(void);

/* Symbol: silk_NLSF_CB_WB */
/* Demangled: silk_NLSF_CB_WB */
extern void* silk_NLSF_CB_WB;

/* Symbol: opus_projection_encode_float */
/* Demangled: opus_projection_encode_float */
int opus_projection_encode_float(void);

/* Symbol: layer0 */
/* Demangled: layer0 */
extern void* layer0;

/* Symbol: spreading_decision */
/* Demangled: spreading_decision */
int spreading_decision(void);

/* Symbol: opus_encode */
/* Demangled: opus_encode */
int opus_encode(void);

/* Symbol: opus_projection_ambisonics_encoder_create */
/* Demangled: opus_projection_ambisonics_encoder_create */
int opus_projection_ambisonics_encoder_create(void);

/* Symbol: layer1 */
/* Demangled: layer1 */
extern void* layer1;

/* Symbol: opus_multistream_decoder_ctl_va_list */
/* Demangled: opus_multistream_decoder_ctl_va_list */
int opus_multistream_decoder_ctl_va_list(void);

/* Symbol: layer2 */
/* Demangled: layer2 */
extern void* layer2;

/* Symbol: silk_encode_do_VAD_FIX */
/* Demangled: silk_encode_do_VAD_FIX */
int silk_encode_do_VAD_FIX(void);

/* Symbol: silk_stereo_quant_pred */
/* Demangled: silk_stereo_quant_pred */
int silk_stereo_quant_pred(void);

/* Symbol: compute_gru */
/* Demangled: compute_gru */
int compute_gru(void);

/* Symbol: encode_pulses */
/* Demangled: encode_pulses */
int encode_pulses(void);

/* Symbol: silk_decode_parameters */
/* Demangled: silk_decode_parameters */
int silk_decode_parameters(void);

/* Symbol: silk_LTPscale_iCDF */
/* Demangled: silk_LTPscale_iCDF */
extern void* silk_LTPscale_iCDF;

/* Symbol: SILK_LPC_INVERSE_PRED_GAIN_IMPL */
/* Demangled: SILK_LPC_INVERSE_PRED_GAIN_IMPL */
extern void* SILK_LPC_INVERSE_PRED_GAIN_IMPL;

/* Symbol: opus_multistream_decoder_init */
/* Demangled: opus_multistream_decoder_init */
int opus_multistream_decoder_init(void);

/* Symbol: opus_projection_decoder_destroy */
/* Demangled: opus_projection_decoder_destroy */
int opus_projection_decoder_destroy(void);

/* Symbol: bitexact_cos */
/* Demangled: bitexact_cos */
int bitexact_cos(void);

/* Symbol: silk_gain_iCDF */
/* Demangled: silk_gain_iCDF */
extern void* silk_gain_iCDF;

/* Symbol: silk_LTP_gain_BITS_Q5_ptrs */
/* Demangled: silk_LTP_gain_BITS_Q5_ptrs */
extern void* silk_LTP_gain_BITS_Q5_ptrs;

/* Symbol: get_left_channel */
/* Demangled: get_left_channel */
int get_left_channel(void);

/* Symbol: silk_stereo_decode_mid_only */
/* Demangled: silk_stereo_decode_mid_only */
int silk_stereo_decode_mid_only(void);

/* Symbol: silk_corrMatrix_FIX */
/* Demangled: silk_corrMatrix_FIX */
int silk_corrMatrix_FIX(void);

/* Symbol: silk_noise_shape_analysis_FIX */
/* Demangled: silk_noise_shape_analysis_FIX */
int silk_noise_shape_analysis_FIX(void);

/* Symbol: silk_inner_prod16_aligned_64_c */
/* Demangled: silk_inner_prod16_aligned_64_c */
int silk_inner_prod16_aligned_64_c(void);

/* Symbol: opus_packet_get_nb_frames */
/* Demangled: opus_packet_get_nb_frames */
int opus_packet_get_nb_frames(void);

/* Symbol: opus_multistream_decode_float */
/* Demangled: opus_multistream_decode_float */
int opus_multistream_decode_float(void);

/* Symbol: stereo_itheta */
/* Demangled: stereo_itheta */
int stereo_itheta(void);

/* Symbol: silk_max_pulses_table */
/* Demangled: silk_max_pulses_table */
extern void* silk_max_pulses_table;

/* Symbol: silk_resampler_down2_3 */
/* Demangled: silk_resampler_down2_3 */
int silk_resampler_down2_3(void);

/* Symbol: alg_unquant */
/* Demangled: alg_unquant */
int alg_unquant(void);

/* Symbol: opus_ifft_c */
/* Demangled: opus_ifft_c */
int opus_ifft_c(void);

/* Symbol: silk_log2lin */
/* Demangled: silk_log2lin */
int silk_log2lin(void);

/* Symbol: silk_pitch_analysis_core */
/* Demangled: silk_pitch_analysis_core */
int silk_pitch_analysis_core(void);

/* Symbol: opus_multistream_decoder_get_size */
/* Demangled: opus_multistream_decoder_get_size */
int opus_multistream_decoder_get_size(void);

/* Symbol: silk_biquad_alt_stride2_neon */
/* Demangled: silk_biquad_alt_stride2_neon */
int silk_biquad_alt_stride2_neon(void);

/* Symbol: opus_custom_mode_create */
/* Demangled: opus_custom_mode_create */
int opus_custom_mode_create(void);

/* Symbol: silk_CB_lags_stage3_10_ms */
/* Demangled: silk_CB_lags_stage3_10_ms */
extern void* silk_CB_lags_stage3_10_ms;

/* Symbol: silk_scale_vector32_Q26_lshift_18 */
/* Demangled: silk_scale_vector32_Q26_lshift_18 */
int silk_scale_vector32_Q26_lshift_18(void);

/* Symbol: silk_warped_autocorrelation_FIX_neon */
/* Demangled: silk_warped_autocorrelation_FIX_neon */
int silk_warped_autocorrelation_FIX_neon(void);

/* Symbol: celt_lcg_rand */
/* Demangled: celt_lcg_rand */
int celt_lcg_rand(void);

/* Symbol: silk_Get_Encoder_Size */
/* Demangled: silk_Get_Encoder_Size */
int silk_Get_Encoder_Size(void);

/* Symbol: silk_resampler_private_up2_HQ_wrapper */
/* Demangled: silk_resampler_private_up2_HQ_wrapper */
int silk_resampler_private_up2_HQ_wrapper(void);

/* Symbol: silk_Resampler_2_3_COEFS_LQ */
/* Demangled: silk_Resampler_2_3_COEFS_LQ */
extern void* silk_Resampler_2_3_COEFS_LQ;

/* Symbol: mapping_matrix_multiply_channel_out_short */
/* Demangled: mapping_matrix_multiply_channel_out_short */
int mapping_matrix_multiply_channel_out_short(void);

/* Symbol: ec_enc_bit_logp */
/* Demangled: ec_enc_bit_logp */
int ec_enc_bit_logp(void);

/* Symbol: quant_energy_finalise */
/* Demangled: quant_energy_finalise */
int quant_energy_finalise(void);

/* Symbol: ec_laplace_decode */
/* Demangled: ec_laplace_decode */
int ec_laplace_decode(void);

/* Symbol: silk_VAD_GetSA_Q8_c */
/* Demangled: silk_VAD_GetSA_Q8_c */
int silk_VAD_GetSA_Q8_c(void);

/* Symbol: opus_multistream_encoder_get_size */
/* Demangled: opus_multistream_encoder_get_size */
int opus_multistream_encoder_get_size(void);

/* Symbol: ec_dec_uint */
/* Demangled: ec_dec_uint */
int ec_dec_uint(void);

/* Symbol: celt_encoder_get_size */
/* Demangled: celt_encoder_get_size */
int celt_encoder_get_size(void);

/* Symbol: silk_lsb_iCDF */
/* Demangled: silk_lsb_iCDF */
extern void* silk_lsb_iCDF;

/* Symbol: silk_control_encoder */
/* Demangled: silk_control_encoder */
int silk_control_encoder(void);

/* Symbol: silk_stereo_pred_joint_iCDF */
/* Demangled: silk_stereo_pred_joint_iCDF */
extern void* silk_stereo_pred_joint_iCDF;

/* Symbol: silk_process_NLSFs */
/* Demangled: silk_process_NLSFs */
int silk_process_NLSFs(void);

/* Symbol: opus_packet_parse */
/* Demangled: opus_packet_parse */
int opus_packet_parse(void);

/* Symbol: silk_uniform8_iCDF */
/* Demangled: silk_uniform8_iCDF */
extern void* silk_uniform8_iCDF;

/* Symbol: silk_stereo_decode_pred */
/* Demangled: silk_stereo_decode_pred */
int silk_stereo_decode_pred(void);

/* Symbol: silk_Resampler_3_4_COEFS */
/* Demangled: silk_Resampler_3_4_COEFS */
extern void* silk_Resampler_3_4_COEFS;

/* Symbol: mapping_matrix_multiply_channel_out_float */
/* Demangled: mapping_matrix_multiply_channel_out_float */
int mapping_matrix_multiply_channel_out_float(void);

/* Symbol: opus_encoder_create */
/* Demangled: opus_encoder_create */
int opus_encoder_create(void);

/* Symbol: clt_compute_allocation */
/* Demangled: clt_compute_allocation */
int clt_compute_allocation(void);

/* Symbol: opus_decode */
/* Demangled: opus_decode */
int opus_decode(void);

/* Symbol: opus_multistream_packet_pad */
/* Demangled: opus_multistream_packet_pad */
int opus_multistream_packet_pad(void);

/* Symbol: silk_uniform4_iCDF */
/* Demangled: silk_uniform4_iCDF */
extern void* silk_uniform4_iCDF;

/* Symbol: silk_shell_code_table0 */
/* Demangled: silk_shell_code_table0 */
extern void* silk_shell_code_table0;

/* Symbol: mapping_matrix_init */
/* Demangled: mapping_matrix_init */
int mapping_matrix_init(void);

/* Symbol: opus_decoder_destroy */
/* Demangled: opus_decoder_destroy */
int opus_decoder_destroy(void);

/* Symbol: opus_packet_unpad */
/* Demangled: opus_packet_unpad */
int opus_packet_unpad(void);

/* Symbol: silk_shell_code_table1 */
/* Demangled: silk_shell_code_table1 */
extern void* silk_shell_code_table1;

/* Symbol: haar1 */
/* Demangled: haar1 */
int haar1(void);

/* Symbol: silk_PLC */
/* Demangled: silk_PLC */
int silk_PLC(void);

/* Symbol: silk_pulses_per_block_iCDF */
/* Demangled: silk_pulses_per_block_iCDF */
extern void* silk_pulses_per_block_iCDF;

/* Symbol: silk_shell_code_table2 */
/* Demangled: silk_shell_code_table2 */
extern void* silk_shell_code_table2;

/* Symbol: silk_resampler_private_up2_HQ */
/* Demangled: silk_resampler_private_up2_HQ */
int silk_resampler_private_up2_HQ(void);

/* Symbol: silk_corrVector_FIX */
/* Demangled: silk_corrVector_FIX */
int silk_corrVector_FIX(void);

/* Symbol: silk_inner_prod_aligned */
/* Demangled: silk_inner_prod_aligned */
int silk_inner_prod_aligned(void);

/* Symbol: opus_packet_parse_impl */
/* Demangled: opus_packet_parse_impl */
int opus_packet_parse_impl(void);

/* Symbol: celt_decoder_get_size */
/* Demangled: celt_decoder_get_size */
int celt_decoder_get_size(void);

/* Symbol: silk_sign_iCDF */
/* Demangled: silk_sign_iCDF */
extern void* silk_sign_iCDF;

/* Symbol: silk_stereo_LR_to_MS */
/* Demangled: silk_stereo_LR_to_MS */
int silk_stereo_LR_to_MS(void);

/* Symbol: silk_shell_code_table3 */
/* Demangled: silk_shell_code_table3 */
extern void* silk_shell_code_table3;

/* Symbol: mapping_matrix_toa_demixing_data */
/* Demangled: mapping_matrix_toa_demixing_data */
extern void* mapping_matrix_toa_demixing_data;

/* Symbol: celt_fatal */
/* Demangled: celt_fatal */
int celt_fatal(void);

/* Symbol: silk_lin2log */
/* Demangled: silk_lin2log */
int silk_lin2log(void);

/* Symbol: mapping_matrix_foa_demixing */
/* Demangled: mapping_matrix_foa_demixing */
extern void* mapping_matrix_foa_demixing;

/* Symbol: opus_repacketizer_out_range_impl */
/* Demangled: opus_repacketizer_out_range_impl */
int opus_repacketizer_out_range_impl(void);

/* Symbol: silk_NLSF_del_dec_quant */
/* Demangled: silk_NLSF_del_dec_quant */
int silk_NLSF_del_dec_quant(void);

/* Symbol: silk_biquad_alt_stride2_c */
/* Demangled: silk_biquad_alt_stride2_c */
int silk_biquad_alt_stride2_c(void);

/* Symbol: silk_find_pred_coefs_FIX */
/* Demangled: silk_find_pred_coefs_FIX */
int silk_find_pred_coefs_FIX(void);

/* Symbol: opus_multistream_encoder_ctl */
/* Demangled: opus_multistream_encoder_ctl */
int opus_multistream_encoder_ctl(void);

/* Symbol: opus_multistream_decoder_ctl */
/* Demangled: opus_multistream_decoder_ctl */
int opus_multistream_decoder_ctl(void);

/* Symbol: XCORR_KERNEL_IMPL */
/* Demangled: XCORR_KERNEL_IMPL */
extern void* XCORR_KERNEL_IMPL;

/* Symbol: silk_init_encoder */
/* Demangled: silk_init_encoder */
int silk_init_encoder(void);

/* Symbol: tf_select_table */
/* Demangled: tf_select_table */
extern void* tf_select_table;

/* Symbol: silk_NLSF2A */
/* Demangled: silk_NLSF2A */
int silk_NLSF2A(void);

/* Symbol: mapping_matrix_foa_demixing_data */
/* Demangled: mapping_matrix_foa_demixing_data */
extern void* mapping_matrix_foa_demixing_data;

/* Symbol: silk_NSQ_del_dec_neon */
/* Demangled: silk_NSQ_del_dec_neon */
int silk_NSQ_del_dec_neon(void);

/* Symbol: silk_pitch_contour_10_ms_iCDF */
/* Demangled: silk_pitch_contour_10_ms_iCDF */
extern void* silk_pitch_contour_10_ms_iCDF;

/* Symbol: silk_stereo_encode_pred */
/* Demangled: silk_stereo_encode_pred */
int silk_stereo_encode_pred(void);

/* Symbol: silk_Resampler_1_2_COEFS */
/* Demangled: silk_Resampler_1_2_COEFS */
extern void* silk_Resampler_1_2_COEFS;

/* Symbol: CELT_INNER_PROD_IMPL */
/* Demangled: CELT_INNER_PROD_IMPL */
extern void* CELT_INNER_PROD_IMPL;

/* Symbol: celt_preemphasis */
/* Demangled: celt_preemphasis */
int celt_preemphasis(void);

/* Symbol: ec_enc_icdf */
/* Demangled: ec_enc_icdf */
int ec_enc_icdf(void);

/* Symbol: ec_dec_update */
/* Demangled: ec_dec_update */
int ec_dec_update(void);

/* Symbol: silk_decode_pitch */
/* Demangled: silk_decode_pitch */
int silk_decode_pitch(void);

/* Symbol: opus_decoder_init */
/* Demangled: opus_decoder_init */
int opus_decoder_init(void);

/* Symbol: resampling_factor */
/* Demangled: resampling_factor */
int resampling_factor(void);

/* Symbol: quant_coarse_energy */
/* Demangled: quant_coarse_energy */
int quant_coarse_energy(void);

/* Symbol: silk_PLC_glue_frames */
/* Demangled: silk_PLC_glue_frames */
int silk_PLC_glue_frames(void);

/* Symbol: silk_encode_frame_FIX */
/* Demangled: silk_encode_frame_FIX */
int silk_encode_frame_FIX(void);

/* Symbol: silk_shell_code_table_offsets */
/* Demangled: silk_shell_code_table_offsets */
extern void* silk_shell_code_table_offsets;

/* Symbol: mapping_matrix_multiply_channel_in_short */
/* Demangled: mapping_matrix_multiply_channel_in_short */
int mapping_matrix_multiply_channel_in_short(void);

/* Symbol: opus_encode_native */
/* Demangled: opus_encode_native */
int opus_encode_native(void);

/* Symbol: opus_decode_float */
/* Demangled: opus_decode_float */
int opus_decode_float(void);

/* Symbol: opus_multistream_encoder_ctl_va_list */
/* Demangled: opus_multistream_encoder_ctl_va_list */
int opus_multistream_encoder_ctl_va_list(void);

/* Symbol: opus_multistream_encoder_init */
/* Demangled: opus_multistream_encoder_init */
int opus_multistream_encoder_init(void);

/* Symbol: anti_collapse */
/* Demangled: anti_collapse */
int anti_collapse(void);

/* Symbol: mapping_matrix_foa_mixing */
/* Demangled: mapping_matrix_foa_mixing */
extern void* mapping_matrix_foa_mixing;

/* Symbol: mapping_matrix_toa_mixing */
/* Demangled: mapping_matrix_toa_mixing */
extern void* mapping_matrix_toa_mixing;

/* Symbol: opus_decoder_ctl */
/* Demangled: opus_decoder_ctl */
int opus_decoder_ctl(void);

/* Symbol: dual_inner_prod_neon */
/* Demangled: dual_inner_prod_neon */
int dual_inner_prod_neon(void);

/* Symbol: celt_sqrt */
/* Demangled: celt_sqrt */
int celt_sqrt(void);

/* Symbol: silk_delta_gain_iCDF */
/* Demangled: silk_delta_gain_iCDF */
extern void* silk_delta_gain_iCDF;

/* Symbol: opus_multistream_encode_float */
/* Demangled: opus_multistream_encode_float */
int opus_multistream_encode_float(void);

/* Symbol: celt_pitch_xcorr_edsp */
/* Demangled: celt_pitch_xcorr_edsp */
int celt_pitch_xcorr_edsp(void);

/* Symbol: ec_enc_init */
/* Demangled: ec_enc_init */
int ec_enc_init(void);

/* Symbol: opus_custom_encoder_ctl */
/* Demangled: opus_custom_encoder_ctl */
int opus_custom_encoder_ctl(void);

/* Symbol: opus_custom_decoder_ctl */
/* Demangled: opus_custom_decoder_ctl */
int opus_custom_decoder_ctl(void);

/* Symbol: ec_enc_patch_initial_bits */
/* Demangled: ec_enc_patch_initial_bits */
int ec_enc_patch_initial_bits(void);

/* Symbol: silk_encode_indices */
/* Demangled: silk_encode_indices */
int silk_encode_indices(void);

/* Symbol: silk_NSQ_c */
/* Demangled: silk_NSQ_c */
int silk_NSQ_c(void);

/* Symbol: silk_resampler_down2 */
/* Demangled: silk_resampler_down2 */
int silk_resampler_down2(void);

/* Symbol: mapping_matrix_multiply_channel_in_float */
/* Demangled: mapping_matrix_multiply_channel_in_float */
int mapping_matrix_multiply_channel_in_float(void);

/* Symbol: silk_decode_signs */
/* Demangled: silk_decode_signs */
int silk_decode_signs(void);

/* Symbol: silk_LPC_analysis_filter */
/* Demangled: silk_LPC_analysis_filter */
int silk_LPC_analysis_filter(void);

/* Symbol: silk_control_SNR */
/* Demangled: silk_control_SNR */
int silk_control_SNR(void);

/* Symbol: mapping_matrix_get_size */
/* Demangled: mapping_matrix_get_size */
int mapping_matrix_get_size(void);

/* Symbol: comb_filter */
/* Demangled: comb_filter */
int comb_filter(void);

/* Symbol: ec_tell_frac */
/* Demangled: ec_tell_frac */
int ec_tell_frac(void);

/* Symbol: CELT_PITCH_XCORR_IMPL */
/* Demangled: CELT_PITCH_XCORR_IMPL */
extern void* CELT_PITCH_XCORR_IMPL;

/* Symbol: SILK_NSQ_NOISE_SHAPE_FEEDBACK_LOOP_IMPL */
/* Demangled: SILK_NSQ_NOISE_SHAPE_FEEDBACK_LOOP_IMPL */
extern void* SILK_NSQ_NOISE_SHAPE_FEEDBACK_LOOP_IMPL;

/* Symbol: silk_insertion_sort_decreasing_int16 */
/* Demangled: silk_insertion_sort_decreasing_int16 */
int silk_insertion_sort_decreasing_int16(void);

/* Symbol: mapping_matrix_foa_mixing_data */
/* Demangled: mapping_matrix_foa_mixing_data */
extern void* mapping_matrix_foa_mixing_data;

/* Symbol: tonality_analysis_reset */
/* Demangled: tonality_analysis_reset */
int tonality_analysis_reset(void);

/* Symbol: silk_regularize_correlations_FIX */
/* Demangled: silk_regularize_correlations_FIX */
int silk_regularize_correlations_FIX(void);

/* Symbol: opus_multistream_encode_native */
/* Demangled: opus_multistream_encode_native */
int opus_multistream_encode_native(void);

/* Symbol: celt_decode_with_ec */
/* Demangled: celt_decode_with_ec */
int celt_decode_with_ec(void);

/* Symbol: decode_pulses */
/* Demangled: decode_pulses */
int decode_pulses(void);

/* Symbol: check_control_input */
/* Demangled: check_control_input */
int check_control_input(void);

/* Symbol: silk_interpolate */
/* Demangled: silk_interpolate */
int silk_interpolate(void);

/* Symbol: mapping_matrix_soa_demixing_data */
/* Demangled: mapping_matrix_soa_demixing_data */
extern void* mapping_matrix_soa_demixing_data;

/* Symbol: compute_stereo_width */
/* Demangled: compute_stereo_width */
int compute_stereo_width(void);

/* Symbol: silk_bwexpander */
/* Demangled: silk_bwexpander */
int silk_bwexpander(void);

/* Symbol: silk_LPC_inverse_pred_gain_c */
/* Demangled: silk_LPC_inverse_pred_gain_c */
int silk_LPC_inverse_pred_gain_c(void);

/* Symbol: opus_cpu_capabilities */
/* Demangled: opus_cpu_capabilities */
int opus_cpu_capabilities(void);

/* Symbol: celt_pitch_xcorr_neon */
/* Demangled: celt_pitch_xcorr_neon */
int celt_pitch_xcorr_neon(void);

/* Symbol: opus_encoder_ctl */
/* Demangled: opus_encoder_ctl */
int opus_encoder_ctl(void);

/* Symbol: tonality_analysis_init */
/* Demangled: tonality_analysis_init */
int tonality_analysis_init(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBOPUS_H */
