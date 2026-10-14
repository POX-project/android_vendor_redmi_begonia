/*
 * Reverse-Engineered Source for: libopus.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libopus"

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
#include "libopus.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: silk_LTP_vq_sizes */
extern "C" __attribute__((visibility("default"))) void* silk_LTP_vq_sizes = NULL;

/* Exported Object: silk_nb_cbk_searchs_stage3 */
extern "C" __attribute__((visibility("default"))) void* silk_nb_cbk_searchs_stage3 = NULL;

/* Demangled: silk_schur */
extern "C" __attribute__((visibility("default"))) int silk_schur(void) {
    ALOGD("silk_schur() called");
    return 0;
}

/* Demangled: opus_multistream_encoder_destroy */
extern "C" __attribute__((visibility("default"))) int opus_multistream_encoder_destroy(void) {
    ALOGD("opus_multistream_encoder_destroy() called");
    return 0;
}

/* Exported Object: silk_uniform3_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_uniform3_iCDF = NULL;

/* Exported Object: SILK_NSQ_DEL_DEC_IMPL */
extern "C" __attribute__((visibility("default"))) void* SILK_NSQ_DEL_DEC_IMPL = NULL;

/* Exported Object: mapping_matrix_soa_demixing */
extern "C" __attribute__((visibility("default"))) void* mapping_matrix_soa_demixing = NULL;

/* Demangled: silk_decoder_set_fs */
extern "C" __attribute__((visibility("default"))) int silk_decoder_set_fs(void) {
    ALOGD("silk_decoder_set_fs() called");
    return 0;
}

/* Demangled: silk_scale_copy_vector16 */
extern "C" __attribute__((visibility("default"))) int silk_scale_copy_vector16(void) {
    ALOGD("silk_scale_copy_vector16() called");
    return 0;
}

/* Demangled: quant_all_bands */
extern "C" __attribute__((visibility("default"))) int quant_all_bands(void) {
    ALOGD("quant_all_bands() called");
    return 0;
}

/* Demangled: init_caps */
extern "C" __attribute__((visibility("default"))) int init_caps(void) {
    ALOGD("init_caps() called");
    return 0;
}

/* Demangled: ec_enc_done */
extern "C" __attribute__((visibility("default"))) int ec_enc_done(void) {
    ALOGD("ec_enc_done() called");
    return 0;
}

/* Demangled: op_pvq_search_c */
extern "C" __attribute__((visibility("default"))) int op_pvq_search_c(void) {
    ALOGD("op_pvq_search_c() called");
    return 0;
}

/* Demangled: silk_CNG */
extern "C" __attribute__((visibility("default"))) int silk_CNG(void) {
    ALOGD("silk_CNG() called");
    return 0;
}

/* Demangled: silk_InitDecoder */
extern "C" __attribute__((visibility("default"))) int silk_InitDecoder(void) {
    ALOGD("silk_InitDecoder() called");
    return 0;
}

/* Exported Object: silk_resampler_frac_FIR_12 */
extern "C" __attribute__((visibility("default"))) void* silk_resampler_frac_FIR_12 = NULL;

/* Exported Object: SILK_WARPED_AUTOCORRELATION_FIX_IMPL */
extern "C" __attribute__((visibility("default"))) void* SILK_WARPED_AUTOCORRELATION_FIX_IMPL = NULL;

/* Demangled: unquant_coarse_energy */
extern "C" __attribute__((visibility("default"))) int unquant_coarse_energy(void) {
    ALOGD("unquant_coarse_energy() called");
    return 0;
}

/* Demangled: silk_decode_frame */
extern "C" __attribute__((visibility("default"))) int silk_decode_frame(void) {
    ALOGD("silk_decode_frame() called");
    return 0;
}

/* Exported Object: silk_LTP_per_index_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_LTP_per_index_iCDF = NULL;

/* Demangled: silk_shell_decoder */
extern "C" __attribute__((visibility("default"))) int silk_shell_decoder(void) {
    ALOGD("silk_shell_decoder() called");
    return 0;
}

/* Demangled: silk_encode_pulses */
extern "C" __attribute__((visibility("default"))) int silk_encode_pulses(void) {
    ALOGD("silk_encode_pulses() called");
    return 0;
}

/* Demangled: opus_packet_get_samples_per_frame */
extern "C" __attribute__((visibility("default"))) int opus_packet_get_samples_per_frame(void) {
    ALOGD("opus_packet_get_samples_per_frame() called");
    return 0;
}

/* Demangled: amp2Log2 */
extern "C" __attribute__((visibility("default"))) int amp2Log2(void) {
    ALOGD("amp2Log2() called");
    return 0;
}

/* Demangled: unquant_fine_energy */
extern "C" __attribute__((visibility("default"))) int unquant_fine_energy(void) {
    ALOGD("unquant_fine_energy() called");
    return 0;
}

/* Demangled: silk_sigm_Q15 */
extern "C" __attribute__((visibility("default"))) int silk_sigm_Q15(void) {
    ALOGD("silk_sigm_Q15() called");
    return 0;
}

/* Demangled: get_mono_channel */
extern "C" __attribute__((visibility("default"))) int get_mono_channel(void) {
    ALOGD("get_mono_channel() called");
    return 0;
}

/* Demangled: opus_projection_decoder_ctl */
extern "C" __attribute__((visibility("default"))) int opus_projection_decoder_ctl(void) {
    ALOGD("opus_projection_decoder_ctl() called");
    return 0;
}

/* Demangled: silk_warped_autocorrelation_FIX_c */
extern "C" __attribute__((visibility("default"))) int silk_warped_autocorrelation_FIX_c(void) {
    ALOGD("silk_warped_autocorrelation_FIX_c() called");
    return 0;
}

/* Demangled: silk_NSQ_noise_shape_feedback_loop_neon */
extern "C" __attribute__((visibility("default"))) int silk_NSQ_noise_shape_feedback_loop_neon(void) {
    ALOGD("silk_NSQ_noise_shape_feedback_loop_neon() called");
    return 0;
}

/* Demangled: ec_dec_icdf */
extern "C" __attribute__((visibility("default"))) int ec_dec_icdf(void) {
    ALOGD("ec_dec_icdf() called");
    return 0;
}

/* Demangled: silk_insertion_sort_increasing_all_values_int16 */
extern "C" __attribute__((visibility("default"))) int silk_insertion_sort_increasing_all_values_int16(void) {
    ALOGD("silk_insertion_sort_increasing_all_values_int16() called");
    return 0;
}

/* Demangled: silk_burg_modified_c */
extern "C" __attribute__((visibility("default"))) int silk_burg_modified_c(void) {
    ALOGD("silk_burg_modified_c() called");
    return 0;
}

/* Demangled: run_analysis */
extern "C" __attribute__((visibility("default"))) int run_analysis(void) {
    ALOGD("run_analysis() called");
    return 0;
}

/* Demangled: silk_NSQ_del_dec_c */
extern "C" __attribute__((visibility("default"))) int silk_NSQ_del_dec_c(void) {
    ALOGD("silk_NSQ_del_dec_c() called");
    return 0;
}

/* Exported Object: silk_CB_lags_stage2_10_ms */
extern "C" __attribute__((visibility("default"))) void* silk_CB_lags_stage2_10_ms = NULL;

/* Exported Object: silk_Resampler_1_4_COEFS */
extern "C" __attribute__((visibility("default"))) void* silk_Resampler_1_4_COEFS = NULL;

/* Exported Object: mapping_matrix_soa_mixing */
extern "C" __attribute__((visibility("default"))) void* mapping_matrix_soa_mixing = NULL;

/* Demangled: opus_encoder_init */
extern "C" __attribute__((visibility("default"))) int opus_encoder_init(void) {
    ALOGD("opus_encoder_init() called");
    return 0;
}

/* Demangled: ec_enc_bits */
extern "C" __attribute__((visibility("default"))) int ec_enc_bits(void) {
    ALOGD("ec_enc_bits() called");
    return 0;
}

/* Demangled: celt_decoder_init */
extern "C" __attribute__((visibility("default"))) int celt_decoder_init(void) {
    ALOGD("celt_decoder_init() called");
    return 0;
}

/* Exported Object: mapping_matrix_soa_mixing_data */
extern "C" __attribute__((visibility("default"))) void* mapping_matrix_soa_mixing_data = NULL;

/* Demangled: opus_multistream_encode */
extern "C" __attribute__((visibility("default"))) int opus_multistream_encode(void) {
    ALOGD("opus_multistream_encode() called");
    return 0;
}

/* Demangled: ec_encode */
extern "C" __attribute__((visibility("default"))) int ec_encode(void) {
    ALOGD("ec_encode() called");
    return 0;
}

/* Demangled: opus_packet_get_bandwidth */
extern "C" __attribute__((visibility("default"))) int opus_packet_get_bandwidth(void) {
    ALOGD("opus_packet_get_bandwidth() called");
    return 0;
}

/* Demangled: opus_encode_float */
extern "C" __attribute__((visibility("default"))) int opus_encode_float(void) {
    ALOGD("opus_encode_float() called");
    return 0;
}

/* Exported Object: silk_pulses_per_block_BITS_Q5 */
extern "C" __attribute__((visibility("default"))) void* silk_pulses_per_block_BITS_Q5 = NULL;

/* Demangled: silk_control_audio_bandwidth */
extern "C" __attribute__((visibility("default"))) int silk_control_audio_bandwidth(void) {
    ALOGD("silk_control_audio_bandwidth() called");
    return 0;
}

/* Demangled: opus_repacketizer_cat */
extern "C" __attribute__((visibility("default"))) int opus_repacketizer_cat(void) {
    ALOGD("opus_repacketizer_cat() called");
    return 0;
}

/* Demangled: silk_resampler */
extern "C" __attribute__((visibility("default"))) int silk_resampler(void) {
    ALOGD("silk_resampler() called");
    return 0;
}

/* Demangled: silk_biquad_alt_stride1 */
extern "C" __attribute__((visibility("default"))) int silk_biquad_alt_stride1(void) {
    ALOGD("silk_biquad_alt_stride1() called");
    return 0;
}

/* Demangled: silk_sum_sqr_shift */
extern "C" __attribute__((visibility("default"))) int silk_sum_sqr_shift(void) {
    ALOGD("silk_sum_sqr_shift() called");
    return 0;
}

/* Demangled: celt_rcp */
extern "C" __attribute__((visibility("default"))) int celt_rcp(void) {
    ALOGD("celt_rcp() called");
    return 0;
}

/* Demangled: ec_dec_init */
extern "C" __attribute__((visibility("default"))) int ec_dec_init(void) {
    ALOGD("ec_dec_init() called");
    return 0;
}

/* Demangled: opus_fft_c */
extern "C" __attribute__((visibility("default"))) int opus_fft_c(void) {
    ALOGD("opus_fft_c() called");
    return 0;
}

/* Exported Object: silk_NLSF_CB_NB_MB */
extern "C" __attribute__((visibility("default"))) void* silk_NLSF_CB_NB_MB = NULL;

/* Exported Object: silk_CB_lags_stage2 */
extern "C" __attribute__((visibility("default"))) void* silk_CB_lags_stage2 = NULL;

/* Demangled: frame_size_select */
extern "C" __attribute__((visibility("default"))) int frame_size_select(void) {
    ALOGD("frame_size_select() called");
    return 0;
}

/* Demangled: opus_multistream_surround_encoder_init */
extern "C" __attribute__((visibility("default"))) int opus_multistream_surround_encoder_init(void) {
    ALOGD("opus_multistream_surround_encoder_init() called");
    return 0;
}

/* Demangled: silk_encode_signs */
extern "C" __attribute__((visibility("default"))) int silk_encode_signs(void) {
    ALOGD("silk_encode_signs() called");
    return 0;
}

/* Exported Object: silk_LTP_vq_gain_ptrs_Q7 */
extern "C" __attribute__((visibility("default"))) void* silk_LTP_vq_gain_ptrs_Q7 = NULL;

/* Exported Object: silk_stereo_only_code_mid_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_stereo_only_code_mid_iCDF = NULL;

/* Exported Object: silk_CB_lags_stage3 */
extern "C" __attribute__((visibility("default"))) void* silk_CB_lags_stage3 = NULL;

/* Demangled: silk_find_LPC_FIX */
extern "C" __attribute__((visibility("default"))) int silk_find_LPC_FIX(void) {
    ALOGD("silk_find_LPC_FIX() called");
    return 0;
}

/* Demangled: silk_Encode */
extern "C" __attribute__((visibility("default"))) int silk_Encode(void) {
    ALOGD("silk_Encode() called");
    return 0;
}

/* Demangled: opus_projection_encode */
extern "C" __attribute__((visibility("default"))) int opus_projection_encode(void) {
    ALOGD("opus_projection_encode() called");
    return 0;
}

/* Demangled: opus_projection_encoder_ctl */
extern "C" __attribute__((visibility("default"))) int opus_projection_encoder_ctl(void) {
    ALOGD("opus_projection_encoder_ctl() called");
    return 0;
}

/* Demangled: opus_repacketizer_create */
extern "C" __attribute__((visibility("default"))) int opus_repacketizer_create(void) {
    ALOGD("opus_repacketizer_create() called");
    return 0;
}

/* Demangled: opus_strerror */
extern "C" __attribute__((visibility("default"))) int opus_strerror(void) {
    ALOGD("opus_strerror() called");
    return 0;
}

/* Demangled: celt_iir */
extern "C" __attribute__((visibility("default"))) int celt_iir(void) {
    ALOGD("celt_iir() called");
    return 0;
}

/* Demangled: silk_HP_variable_cutoff */
extern "C" __attribute__((visibility("default"))) int silk_HP_variable_cutoff(void) {
    ALOGD("silk_HP_variable_cutoff() called");
    return 0;
}

/* Demangled: downmix_float */
extern "C" __attribute__((visibility("default"))) int downmix_float(void) {
    ALOGD("downmix_float() called");
    return 0;
}

/* Demangled: silk_resampler_private_down_FIR */
extern "C" __attribute__((visibility("default"))) int silk_resampler_private_down_FIR(void) {
    ALOGD("silk_resampler_private_down_FIR() called");
    return 0;
}

/* Demangled: silk_find_LTP_FIX */
extern "C" __attribute__((visibility("default"))) int silk_find_LTP_FIX(void) {
    ALOGD("silk_find_LTP_FIX() called");
    return 0;
}

/* Demangled: opus_decode_native */
extern "C" __attribute__((visibility("default"))) int opus_decode_native(void) {
    ALOGD("opus_decode_native() called");
    return 0;
}

/* Demangled: opus_decoder_get_nb_samples */
extern "C" __attribute__((visibility("default"))) int opus_decoder_get_nb_samples(void) {
    ALOGD("opus_decoder_get_nb_samples() called");
    return 0;
}

/* Demangled: silk_stereo_find_predictor */
extern "C" __attribute__((visibility("default"))) int silk_stereo_find_predictor(void) {
    ALOGD("silk_stereo_find_predictor() called");
    return 0;
}

/* Demangled: opus_multistream_decoder_create */
extern "C" __attribute__((visibility("default"))) int opus_multistream_decoder_create(void) {
    ALOGD("opus_multistream_decoder_create() called");
    return 0;
}

/* Demangled: isqrt32 */
extern "C" __attribute__((visibility("default"))) int isqrt32(void) {
    ALOGD("isqrt32() called");
    return 0;
}

/* Demangled: clt_mdct_backward_c */
extern "C" __attribute__((visibility("default"))) int clt_mdct_backward_c(void) {
    ALOGD("clt_mdct_backward_c() called");
    return 0;
}

/* Demangled: silk_decode_core */
extern "C" __attribute__((visibility("default"))) int silk_decode_core(void) {
    ALOGD("silk_decode_core() called");
    return 0;
}

/* Exported Object: silk_NLSF_EXT_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_NLSF_EXT_iCDF = NULL;

/* Exported Object: silk_Transition_LP_A_Q28 */
extern "C" __attribute__((visibility("default"))) void* silk_Transition_LP_A_Q28 = NULL;

/* Demangled: silk_NLSF_VQ_weights_laroia */
extern "C" __attribute__((visibility("default"))) int silk_NLSF_VQ_weights_laroia(void) {
    ALOGD("silk_NLSF_VQ_weights_laroia() called");
    return 0;
}

/* Demangled: opus_repacketizer_out */
extern "C" __attribute__((visibility("default"))) int opus_repacketizer_out(void) {
    ALOGD("opus_repacketizer_out() called");
    return 0;
}

/* Demangled: silk_PLC_Reset */
extern "C" __attribute__((visibility("default"))) int silk_PLC_Reset(void) {
    ALOGD("silk_PLC_Reset() called");
    return 0;
}

/* Exported Object: silk_type_offset_no_VAD_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_type_offset_no_VAD_iCDF = NULL;

/* Exported Object: silk_Lag_range_stage3_10_ms */
extern "C" __attribute__((visibility("default"))) void* silk_Lag_range_stage3_10_ms = NULL;

/* Demangled: silk_resampler_private_AR2 */
extern "C" __attribute__((visibility("default"))) int silk_resampler_private_AR2(void) {
    ALOGD("silk_resampler_private_AR2() called");
    return 0;
}

/* Demangled: opus_multistream_decoder_destroy */
extern "C" __attribute__((visibility("default"))) int opus_multistream_decoder_destroy(void) {
    ALOGD("opus_multistream_decoder_destroy() called");
    return 0;
}

/* Demangled: celt_pitch_xcorr_c */
extern "C" __attribute__((visibility("default"))) int celt_pitch_xcorr_c(void) {
    ALOGD("celt_pitch_xcorr_c() called");
    return 0;
}

/* Exported Object: silk_LTP_vq_ptrs_Q7 */
extern "C" __attribute__((visibility("default"))) void* silk_LTP_vq_ptrs_Q7 = NULL;

/* Exported Object: silk_uniform6_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_uniform6_iCDF = NULL;

/* Demangled: silk_gains_ID */
extern "C" __attribute__((visibility("default"))) int silk_gains_ID(void) {
    ALOGD("silk_gains_ID() called");
    return 0;
}

/* Demangled: opus_multistream_decode */
extern "C" __attribute__((visibility("default"))) int opus_multistream_decode(void) {
    ALOGD("opus_multistream_decode() called");
    return 0;
}

/* Demangled: ec_decode */
extern "C" __attribute__((visibility("default"))) int ec_decode(void) {
    ALOGD("ec_decode() called");
    return 0;
}

/* Demangled: frac_div32 */
extern "C" __attribute__((visibility("default"))) int frac_div32(void) {
    ALOGD("frac_div32() called");
    return 0;
}

/* Exported Object: silk_Resampler_1_6_COEFS */
extern "C" __attribute__((visibility("default"))) void* silk_Resampler_1_6_COEFS = NULL;

/* Exported Object: silk_rate_levels_BITS_Q5 */
extern "C" __attribute__((visibility("default"))) void* silk_rate_levels_BITS_Q5 = NULL;

/* Exported Object: silk_stereo_pred_quant_Q13 */
extern "C" __attribute__((visibility("default"))) void* silk_stereo_pred_quant_Q13 = NULL;

/* Demangled: silk_NLSF_encode */
extern "C" __attribute__((visibility("default"))) int silk_NLSF_encode(void) {
    ALOGD("silk_NLSF_encode() called");
    return 0;
}

/* Demangled: silk_find_pitch_lags_FIX */
extern "C" __attribute__((visibility("default"))) int silk_find_pitch_lags_FIX(void) {
    ALOGD("silk_find_pitch_lags_FIX() called");
    return 0;
}

/* Demangled: silk_process_gains_FIX */
extern "C" __attribute__((visibility("default"))) int silk_process_gains_FIX(void) {
    ALOGD("silk_process_gains_FIX() called");
    return 0;
}

/* Demangled: silk_residual_energy_FIX */
extern "C" __attribute__((visibility("default"))) int silk_residual_energy_FIX(void) {
    ALOGD("silk_residual_energy_FIX() called");
    return 0;
}

/* Demangled: encode_size */
extern "C" __attribute__((visibility("default"))) int encode_size(void) {
    ALOGD("encode_size() called");
    return 0;
}

/* Demangled: opus_multistream_decode_native */
extern "C" __attribute__((visibility("default"))) int opus_multistream_decode_native(void) {
    ALOGD("opus_multistream_decode_native() called");
    return 0;
}

/* Demangled: renormalise_vector */
extern "C" __attribute__((visibility("default"))) int renormalise_vector(void) {
    ALOGD("renormalise_vector() called");
    return 0;
}

/* Demangled: celt_encode_with_ec */
extern "C" __attribute__((visibility("default"))) int celt_encode_with_ec(void) {
    ALOGD("celt_encode_with_ec() called");
    return 0;
}

/* Demangled: celt_cos_norm */
extern "C" __attribute__((visibility("default"))) int celt_cos_norm(void) {
    ALOGD("celt_cos_norm() called");
    return 0;
}

/* Exported Object: silk_Resampler_2_3_COEFS */
extern "C" __attribute__((visibility("default"))) void* silk_Resampler_2_3_COEFS = NULL;

/* Exported Object: mapping_matrix_toa_mixing_data */
extern "C" __attribute__((visibility("default"))) void* mapping_matrix_toa_mixing_data = NULL;

/* Demangled: opus_decoder_get_size */
extern "C" __attribute__((visibility("default"))) int opus_decoder_get_size(void) {
    ALOGD("opus_decoder_get_size() called");
    return 0;
}

/* Exported Object: DUAL_INNER_PROD_IMPL */
extern "C" __attribute__((visibility("default"))) void* DUAL_INNER_PROD_IMPL = NULL;

/* Exported Object: SMALL_DIV_TABLE */
extern "C" __attribute__((visibility("default"))) void* SMALL_DIV_TABLE = NULL;

/* Exported Object: silk_pitch_lag_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_pitch_lag_iCDF = NULL;

/* Demangled: silk_VQ_WMat_EC_c */
extern "C" __attribute__((visibility("default"))) int silk_VQ_WMat_EC_c(void) {
    ALOGD("silk_VQ_WMat_EC_c() called");
    return 0;
}

/* Demangled: opus_packet_pad */
extern "C" __attribute__((visibility("default"))) int opus_packet_pad(void) {
    ALOGD("opus_packet_pad() called");
    return 0;
}

/* Demangled: opus_repacketizer_destroy */
extern "C" __attribute__((visibility("default"))) int opus_repacketizer_destroy(void) {
    ALOGD("opus_repacketizer_destroy() called");
    return 0;
}

/* Demangled: silk_Decode */
extern "C" __attribute__((visibility("default"))) int silk_Decode(void) {
    ALOGD("silk_Decode() called");
    return 0;
}

/* Demangled: silk_InitEncoder */
extern "C" __attribute__((visibility("default"))) int silk_InitEncoder(void) {
    ALOGD("silk_InitEncoder() called");
    return 0;
}

/* Demangled: silk_noise_shape_quantizer_short_prediction_neon */
extern "C" __attribute__((visibility("default"))) int silk_noise_shape_quantizer_short_prediction_neon(void) {
    ALOGD("silk_noise_shape_quantizer_short_prediction_neon() called");
    return 0;
}

/* Demangled: opus_projection_decode */
extern "C" __attribute__((visibility("default"))) int opus_projection_decode(void) {
    ALOGD("opus_projection_decode() called");
    return 0;
}

/* Demangled: silk_schur64 */
extern "C" __attribute__((visibility("default"))) int silk_schur64(void) {
    ALOGD("silk_schur64() called");
    return 0;
}

/* Demangled: opus_encoder_get_size */
extern "C" __attribute__((visibility("default"))) int opus_encoder_get_size(void) {
    ALOGD("opus_encoder_get_size() called");
    return 0;
}

/* Demangled: silk_stereo_MS_to_LR */
extern "C" __attribute__((visibility("default"))) int silk_stereo_MS_to_LR(void) {
    ALOGD("silk_stereo_MS_to_LR() called");
    return 0;
}

/* Demangled: silk_bwexpander_32 */
extern "C" __attribute__((visibility("default"))) int silk_bwexpander_32(void) {
    ALOGD("silk_bwexpander_32() called");
    return 0;
}

/* Demangled: pitch_search */
extern "C" __attribute__((visibility("default"))) int pitch_search(void) {
    ALOGD("pitch_search() called");
    return 0;
}

/* Demangled: opus_select_arch */
extern "C" __attribute__((visibility("default"))) int opus_select_arch(void) {
    ALOGD("opus_select_arch() called");
    return 0;
}

/* Exported Object: silk_LTPScales_table_Q14 */
extern "C" __attribute__((visibility("default"))) void* silk_LTPScales_table_Q14 = NULL;

/* Demangled: silk_ana_filt_bank_1 */
extern "C" __attribute__((visibility("default"))) int silk_ana_filt_bank_1(void) {
    ALOGD("silk_ana_filt_bank_1() called");
    return 0;
}

/* Demangled: opus_projection_decoder_get_size */
extern "C" __attribute__((visibility("default"))) int opus_projection_decoder_get_size(void) {
    ALOGD("opus_projection_decoder_get_size() called");
    return 0;
}

/* Demangled: ec_dec_bits */
extern "C" __attribute__((visibility("default"))) int ec_dec_bits(void) {
    ALOGD("ec_dec_bits() called");
    return 0;
}

/* Demangled: celt_encoder_init */
extern "C" __attribute__((visibility("default"))) int celt_encoder_init(void) {
    ALOGD("celt_encoder_init() called");
    return 0;
}

/* Demangled: validate_celt_decoder */
extern "C" __attribute__((visibility("default"))) int validate_celt_decoder(void) {
    ALOGD("validate_celt_decoder() called");
    return 0;
}

/* Demangled: silk_A2NLSF */
extern "C" __attribute__((visibility("default"))) int silk_A2NLSF(void) {
    ALOGD("silk_A2NLSF() called");
    return 0;
}

/* Demangled: silk_k2a */
extern "C" __attribute__((visibility("default"))) int silk_k2a(void) {
    ALOGD("silk_k2a() called");
    return 0;
}

/* Demangled: opus_get_version_string */
extern "C" __attribute__((visibility("default"))) int opus_get_version_string(void) {
    ALOGD("opus_get_version_string() called");
    return 0;
}

/* Demangled: ec_enc_shrink */
extern "C" __attribute__((visibility("default"))) int ec_enc_shrink(void) {
    ALOGD("ec_enc_shrink() called");
    return 0;
}

/* Exported Object: silk_LTP_gain_iCDF_ptrs */
extern "C" __attribute__((visibility("default"))) void* silk_LTP_gain_iCDF_ptrs = NULL;

/* Demangled: silk_k2a_Q16 */
extern "C" __attribute__((visibility("default"))) int silk_k2a_Q16(void) {
    ALOGD("silk_k2a_Q16() called");
    return 0;
}

/* Demangled: surround_analysis */
extern "C" __attribute__((visibility("default"))) int surround_analysis(void) {
    ALOGD("surround_analysis() called");
    return 0;
}

/* Exported Object: silk_pitch_contour_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_pitch_contour_iCDF = NULL;

/* Demangled: silk_VAD_Init */
extern "C" __attribute__((visibility("default"))) int silk_VAD_Init(void) {
    ALOGD("silk_VAD_Init() called");
    return 0;
}

/* Demangled: silk_inner_prod_aligned_scale */
extern "C" __attribute__((visibility("default"))) int silk_inner_prod_aligned_scale(void) {
    ALOGD("silk_inner_prod_aligned_scale() called");
    return 0;
}

/* Demangled: opus_repacketizer_init */
extern "C" __attribute__((visibility("default"))) int opus_repacketizer_init(void) {
    ALOGD("opus_repacketizer_init() called");
    return 0;
}

/* Exported Object: eMeans */
extern "C" __attribute__((visibility("default"))) void* eMeans = NULL;

/* Demangled: silk_decode_pulses */
extern "C" __attribute__((visibility("default"))) int silk_decode_pulses(void) {
    ALOGD("silk_decode_pulses() called");
    return 0;
}

/* Demangled: silk_NLSF_stabilize */
extern "C" __attribute__((visibility("default"))) int silk_NLSF_stabilize(void) {
    ALOGD("silk_NLSF_stabilize() called");
    return 0;
}

/* Exported Object: mapping_matrix_toa_demixing */
extern "C" __attribute__((visibility("default"))) void* mapping_matrix_toa_demixing = NULL;

/* Demangled: compute_band_energies */
extern "C" __attribute__((visibility("default"))) int compute_band_energies(void) {
    ALOGD("compute_band_energies() called");
    return 0;
}

/* Exported Object: silk_Lag_range_stage3 */
extern "C" __attribute__((visibility("default"))) void* silk_Lag_range_stage3 = NULL;

/* Demangled: mapping_matrix_get_data */
extern "C" __attribute__((visibility("default"))) int mapping_matrix_get_data(void) {
    ALOGD("mapping_matrix_get_data() called");
    return 0;
}

/* Demangled: opus_multistream_surround_encoder_get_size */
extern "C" __attribute__((visibility("default"))) int opus_multistream_surround_encoder_get_size(void) {
    ALOGD("opus_multistream_surround_encoder_get_size() called");
    return 0;
}

/* Demangled: opus_projection_ambisonics_encoder_get_size */
extern "C" __attribute__((visibility("default"))) int opus_projection_ambisonics_encoder_get_size(void) {
    ALOGD("opus_projection_ambisonics_encoder_get_size() called");
    return 0;
}

/* Demangled: _celt_lpc */
extern "C" __attribute__((visibility("default"))) int _celt_lpc(void) {
    ALOGD("_celt_lpc() called");
    return 0;
}

/* Demangled: ec_decode_bin */
extern "C" __attribute__((visibility("default"))) int ec_decode_bin(void) {
    ALOGD("ec_decode_bin() called");
    return 0;
}

/* Demangled: opus_fft_impl */
extern "C" __attribute__((visibility("default"))) int opus_fft_impl(void) {
    ALOGD("opus_fft_impl() called");
    return 0;
}

/* Exported Object: silk_Quantization_Offsets_Q10 */
extern "C" __attribute__((visibility("default"))) void* silk_Quantization_Offsets_Q10 = NULL;

/* Demangled: silk_residual_energy16_covar_FIX */
extern "C" __attribute__((visibility("default"))) int silk_residual_energy16_covar_FIX(void) {
    ALOGD("silk_residual_energy16_covar_FIX() called");
    return 0;
}

/* Demangled: opus_decoder_create */
extern "C" __attribute__((visibility("default"))) int opus_decoder_create(void) {
    ALOGD("opus_decoder_create() called");
    return 0;
}

/* Demangled: opus_projection_encoder_destroy */
extern "C" __attribute__((visibility("default"))) int opus_projection_encoder_destroy(void) {
    ALOGD("opus_projection_encoder_destroy() called");
    return 0;
}

/* Demangled: compute_dense */
extern "C" __attribute__((visibility("default"))) int compute_dense(void) {
    ALOGD("compute_dense() called");
    return 0;
}

/* Demangled: celt_rsqrt_norm */
extern "C" __attribute__((visibility("default"))) int celt_rsqrt_norm(void) {
    ALOGD("celt_rsqrt_norm() called");
    return 0;
}

/* Demangled: silk_NLSF_decode */
extern "C" __attribute__((visibility("default"))) int silk_NLSF_decode(void) {
    ALOGD("silk_NLSF_decode() called");
    return 0;
}

/* Exported Object: silk_Resampler_1_3_COEFS */
extern "C" __attribute__((visibility("default"))) void* silk_Resampler_1_3_COEFS = NULL;

/* Demangled: quant_fine_energy */
extern "C" __attribute__((visibility("default"))) int quant_fine_energy(void) {
    ALOGD("quant_fine_energy() called");
    return 0;
}

/* Demangled: silk_gains_dequant */
extern "C" __attribute__((visibility("default"))) int silk_gains_dequant(void) {
    ALOGD("silk_gains_dequant() called");
    return 0;
}

/* Demangled: silk_LTP_scale_ctrl_FIX */
extern "C" __attribute__((visibility("default"))) int silk_LTP_scale_ctrl_FIX(void) {
    ALOGD("silk_LTP_scale_ctrl_FIX() called");
    return 0;
}

/* Demangled: opus_projection_decoder_create */
extern "C" __attribute__((visibility("default"))) int opus_projection_decoder_create(void) {
    ALOGD("opus_projection_decoder_create() called");
    return 0;
}

/* Demangled: opus_projection_decoder_init */
extern "C" __attribute__((visibility("default"))) int opus_projection_decoder_init(void) {
    ALOGD("opus_projection_decoder_init() called");
    return 0;
}

/* Demangled: celt_fir_c */
extern "C" __attribute__((visibility("default"))) int celt_fir_c(void) {
    ALOGD("celt_fir_c() called");
    return 0;
}

/* Exported Object: silk_pitch_contour_10_ms_NB_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_pitch_contour_10_ms_NB_iCDF = NULL;

/* Demangled: celt_inner_prod_neon */
extern "C" __attribute__((visibility("default"))) int celt_inner_prod_neon(void) {
    ALOGD("celt_inner_prod_neon() called");
    return 0;
}

/* Demangled: silk_Get_Decoder_Size */
extern "C" __attribute__((visibility("default"))) int silk_Get_Decoder_Size(void) {
    ALOGD("silk_Get_Decoder_Size() called");
    return 0;
}

/* Demangled: silk_shell_encoder */
extern "C" __attribute__((visibility("default"))) int silk_shell_encoder(void) {
    ALOGD("silk_shell_encoder() called");
    return 0;
}

/* Exported Object: silk_Transition_LP_B_Q28 */
extern "C" __attribute__((visibility("default"))) void* silk_Transition_LP_B_Q28 = NULL;

/* Demangled: opus_projection_decode_float */
extern "C" __attribute__((visibility("default"))) int opus_projection_decode_float(void) {
    ALOGD("opus_projection_decode_float() called");
    return 0;
}

/* Demangled: exp_rotation */
extern "C" __attribute__((visibility("default"))) int exp_rotation(void) {
    ALOGD("exp_rotation() called");
    return 0;
}

/* Demangled: silk_resampler_init */
extern "C" __attribute__((visibility("default"))) int silk_resampler_init(void) {
    ALOGD("silk_resampler_init() called");
    return 0;
}

/* Demangled: opus_multistream_surround_encoder_create */
extern "C" __attribute__((visibility("default"))) int opus_multistream_surround_encoder_create(void) {
    ALOGD("opus_multistream_surround_encoder_create() called");
    return 0;
}

/* Demangled: tonality_get_info */
extern "C" __attribute__((visibility("default"))) int tonality_get_info(void) {
    ALOGD("tonality_get_info() called");
    return 0;
}

/* Demangled: _celt_autocorr */
extern "C" __attribute__((visibility("default"))) int _celt_autocorr(void) {
    ALOGD("_celt_autocorr() called");
    return 0;
}

/* Demangled: unquant_energy_finalise */
extern "C" __attribute__((visibility("default"))) int unquant_energy_finalise(void) {
    ALOGD("unquant_energy_finalise() called");
    return 0;
}

/* Exported Object: silk_type_offset_VAD_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_type_offset_VAD_iCDF = NULL;

/* Demangled: silk_NLSF_VQ */
extern "C" __attribute__((visibility("default"))) int silk_NLSF_VQ(void) {
    ALOGD("silk_NLSF_VQ() called");
    return 0;
}

/* Demangled: silk_apply_sine_window */
extern "C" __attribute__((visibility("default"))) int silk_apply_sine_window(void) {
    ALOGD("silk_apply_sine_window() called");
    return 0;
}

/* Demangled: ec_enc_uint */
extern "C" __attribute__((visibility("default"))) int ec_enc_uint(void) {
    ALOGD("ec_enc_uint() called");
    return 0;
}

/* Demangled: opus_repacketizer_get_nb_frames */
extern "C" __attribute__((visibility("default"))) int opus_repacketizer_get_nb_frames(void) {
    ALOGD("opus_repacketizer_get_nb_frames() called");
    return 0;
}

/* Demangled: pitch_downsample */
extern "C" __attribute__((visibility("default"))) int pitch_downsample(void) {
    ALOGD("pitch_downsample() called");
    return 0;
}

/* Demangled: ec_encode_bin */
extern "C" __attribute__((visibility("default"))) int ec_encode_bin(void) {
    ALOGD("ec_encode_bin() called");
    return 0;
}

/* Exported Object: silk_rate_levels_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_rate_levels_iCDF = NULL;

/* Demangled: silk_LPC_inverse_pred_gain_neon */
extern "C" __attribute__((visibility("default"))) int silk_LPC_inverse_pred_gain_neon(void) {
    ALOGD("silk_LPC_inverse_pred_gain_neon() called");
    return 0;
}

/* Demangled: alg_quant */
extern "C" __attribute__((visibility("default"))) int alg_quant(void) {
    ALOGD("alg_quant() called");
    return 0;
}

/* Demangled: silk_NLSF_unpack */
extern "C" __attribute__((visibility("default"))) int silk_NLSF_unpack(void) {
    ALOGD("silk_NLSF_unpack() called");
    return 0;
}

/* Exported Object: silk_LBRR_flags_iCDF_ptr */
extern "C" __attribute__((visibility("default"))) void* silk_LBRR_flags_iCDF_ptr = NULL;

/* Exported Object: silk_uniform5_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_uniform5_iCDF = NULL;

/* Demangled: silk_insertion_sort_increasing */
extern "C" __attribute__((visibility("default"))) int silk_insertion_sort_increasing(void) {
    ALOGD("silk_insertion_sort_increasing() called");
    return 0;
}

/* Exported Object: silk_LSFCosTab_FIX_Q12 */
extern "C" __attribute__((visibility("default"))) void* silk_LSFCosTab_FIX_Q12 = NULL;

/* Demangled: opus_repacketizer_out_range */
extern "C" __attribute__((visibility("default"))) int opus_repacketizer_out_range(void) {
    ALOGD("opus_repacketizer_out_range() called");
    return 0;
}

/* Exported Object: silk_pitch_contour_NB_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_pitch_contour_NB_iCDF = NULL;

/* Exported Object: SILK_BIQUAD_ALT_STRIDE2_IMPL */
extern "C" __attribute__((visibility("default"))) void* SILK_BIQUAD_ALT_STRIDE2_IMPL = NULL;

/* Demangled: silk_CNG_Reset */
extern "C" __attribute__((visibility("default"))) int silk_CNG_Reset(void) {
    ALOGD("silk_CNG_Reset() called");
    return 0;
}

/* Demangled: silk_LTP_analysis_filter_FIX */
extern "C" __attribute__((visibility("default"))) int silk_LTP_analysis_filter_FIX(void) {
    ALOGD("silk_LTP_analysis_filter_FIX() called");
    return 0;
}

/* Demangled: silk_init_decoder */
extern "C" __attribute__((visibility("default"))) int silk_init_decoder(void) {
    ALOGD("silk_init_decoder() called");
    return 0;
}

/* Demangled: silk_stereo_encode_mid_only */
extern "C" __attribute__((visibility("default"))) int silk_stereo_encode_mid_only(void) {
    ALOGD("silk_stereo_encode_mid_only() called");
    return 0;
}

/* Demangled: silk_quant_LTP_gains */
extern "C" __attribute__((visibility("default"))) int silk_quant_LTP_gains(void) {
    ALOGD("silk_quant_LTP_gains() called");
    return 0;
}

/* Demangled: opus_encoder_destroy */
extern "C" __attribute__((visibility("default"))) int opus_encoder_destroy(void) {
    ALOGD("opus_encoder_destroy() called");
    return 0;
}

/* Demangled: get_right_channel */
extern "C" __attribute__((visibility("default"))) int get_right_channel(void) {
    ALOGD("get_right_channel() called");
    return 0;
}

/* Demangled: validate_layout */
extern "C" __attribute__((visibility("default"))) int validate_layout(void) {
    ALOGD("validate_layout() called");
    return 0;
}

/* Demangled: opus_multistream_encoder_create */
extern "C" __attribute__((visibility("default"))) int opus_multistream_encoder_create(void) {
    ALOGD("opus_multistream_encoder_create() called");
    return 0;
}

/* Demangled: opus_multistream_packet_unpad */
extern "C" __attribute__((visibility("default"))) int opus_multistream_packet_unpad(void) {
    ALOGD("opus_multistream_packet_unpad() called");
    return 0;
}

/* Demangled: clt_mdct_forward_c */
extern "C" __attribute__((visibility("default"))) int clt_mdct_forward_c(void) {
    ALOGD("clt_mdct_forward_c() called");
    return 0;
}

/* Demangled: silk_gains_quant */
extern "C" __attribute__((visibility("default"))) int silk_gains_quant(void) {
    ALOGD("silk_gains_quant() called");
    return 0;
}

/* Demangled: opus_pcm_soft_clip */
extern "C" __attribute__((visibility("default"))) int opus_pcm_soft_clip(void) {
    ALOGD("opus_pcm_soft_clip() called");
    return 0;
}

/* Demangled: silk_autocorr */
extern "C" __attribute__((visibility("default"))) int silk_autocorr(void) {
    ALOGD("silk_autocorr() called");
    return 0;
}

/* Demangled: bitexact_log2tan */
extern "C" __attribute__((visibility("default"))) int bitexact_log2tan(void) {
    ALOGD("bitexact_log2tan() called");
    return 0;
}

/* Demangled: denormalise_bands */
extern "C" __attribute__((visibility("default"))) int denormalise_bands(void) {
    ALOGD("denormalise_bands() called");
    return 0;
}

/* Demangled: ec_dec_bit_logp */
extern "C" __attribute__((visibility("default"))) int ec_dec_bit_logp(void) {
    ALOGD("ec_dec_bit_logp() called");
    return 0;
}

/* Demangled: ec_laplace_encode */
extern "C" __attribute__((visibility("default"))) int ec_laplace_encode(void) {
    ALOGD("ec_laplace_encode() called");
    return 0;
}

/* Exported Object: silk_pitch_delta_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_pitch_delta_iCDF = NULL;

/* Demangled: silk_resampler_private_IIR_FIR */
extern "C" __attribute__((visibility("default"))) int silk_resampler_private_IIR_FIR(void) {
    ALOGD("silk_resampler_private_IIR_FIR() called");
    return 0;
}

/* Demangled: downmix_int */
extern "C" __attribute__((visibility("default"))) int downmix_int(void) {
    ALOGD("downmix_int() called");
    return 0;
}

/* Demangled: opus_repacketizer_get_size */
extern "C" __attribute__((visibility("default"))) int opus_repacketizer_get_size(void) {
    ALOGD("opus_repacketizer_get_size() called");
    return 0;
}

/* Demangled: xcorr_kernel_neon_fixed */
extern "C" __attribute__((visibility("default"))) int xcorr_kernel_neon_fixed(void) {
    ALOGD("xcorr_kernel_neon_fixed() called");
    return 0;
}

/* Exported Object: silk_NLSF_interpolation_factor_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_NLSF_interpolation_factor_iCDF = NULL;

/* Demangled: silk_LP_variable_cutoff */
extern "C" __attribute__((visibility("default"))) int silk_LP_variable_cutoff(void) {
    ALOGD("silk_LP_variable_cutoff() called");
    return 0;
}

/* Demangled: silk_LPC_fit */
extern "C" __attribute__((visibility("default"))) int silk_LPC_fit(void) {
    ALOGD("silk_LPC_fit() called");
    return 0;
}

/* Demangled: opus_packet_get_nb_channels */
extern "C" __attribute__((visibility("default"))) int opus_packet_get_nb_channels(void) {
    ALOGD("opus_packet_get_nb_channels() called");
    return 0;
}

/* Demangled: hysteresis_decision */
extern "C" __attribute__((visibility("default"))) int hysteresis_decision(void) {
    ALOGD("hysteresis_decision() called");
    return 0;
}

/* Demangled: silk_decode_indices */
extern "C" __attribute__((visibility("default"))) int silk_decode_indices(void) {
    ALOGD("silk_decode_indices() called");
    return 0;
}

/* Demangled: opus_packet_get_nb_samples */
extern "C" __attribute__((visibility("default"))) int opus_packet_get_nb_samples(void) {
    ALOGD("opus_packet_get_nb_samples() called");
    return 0;
}

/* Demangled: opus_projection_ambisonics_encoder_init */
extern "C" __attribute__((visibility("default"))) int opus_projection_ambisonics_encoder_init(void) {
    ALOGD("opus_projection_ambisonics_encoder_init() called");
    return 0;
}

/* Demangled: normalise_bands */
extern "C" __attribute__((visibility("default"))) int normalise_bands(void) {
    ALOGD("normalise_bands() called");
    return 0;
}

/* Demangled: remove_doubling */
extern "C" __attribute__((visibility("default"))) int remove_doubling(void) {
    ALOGD("remove_doubling() called");
    return 0;
}

/* Exported Object: silk_NLSF_CB_WB */
extern "C" __attribute__((visibility("default"))) void* silk_NLSF_CB_WB = NULL;

/* Demangled: opus_projection_encode_float */
extern "C" __attribute__((visibility("default"))) int opus_projection_encode_float(void) {
    ALOGD("opus_projection_encode_float() called");
    return 0;
}

/* Exported Object: layer0 */
extern "C" __attribute__((visibility("default"))) void* layer0 = NULL;

/* Demangled: spreading_decision */
extern "C" __attribute__((visibility("default"))) int spreading_decision(void) {
    ALOGD("spreading_decision() called");
    return 0;
}

/* Demangled: opus_encode */
extern "C" __attribute__((visibility("default"))) int opus_encode(void) {
    ALOGD("opus_encode() called");
    return 0;
}

/* Demangled: opus_projection_ambisonics_encoder_create */
extern "C" __attribute__((visibility("default"))) int opus_projection_ambisonics_encoder_create(void) {
    ALOGD("opus_projection_ambisonics_encoder_create() called");
    return 0;
}

/* Exported Object: layer1 */
extern "C" __attribute__((visibility("default"))) void* layer1 = NULL;

/* Demangled: opus_multistream_decoder_ctl_va_list */
extern "C" __attribute__((visibility("default"))) int opus_multistream_decoder_ctl_va_list(void) {
    ALOGD("opus_multistream_decoder_ctl_va_list() called");
    return 0;
}

/* Exported Object: layer2 */
extern "C" __attribute__((visibility("default"))) void* layer2 = NULL;

/* Demangled: silk_encode_do_VAD_FIX */
extern "C" __attribute__((visibility("default"))) int silk_encode_do_VAD_FIX(void) {
    ALOGD("silk_encode_do_VAD_FIX() called");
    return 0;
}

/* Demangled: silk_stereo_quant_pred */
extern "C" __attribute__((visibility("default"))) int silk_stereo_quant_pred(void) {
    ALOGD("silk_stereo_quant_pred() called");
    return 0;
}

/* Demangled: compute_gru */
extern "C" __attribute__((visibility("default"))) int compute_gru(void) {
    ALOGD("compute_gru() called");
    return 0;
}

/* Demangled: encode_pulses */
extern "C" __attribute__((visibility("default"))) int encode_pulses(void) {
    ALOGD("encode_pulses() called");
    return 0;
}

/* Demangled: silk_decode_parameters */
extern "C" __attribute__((visibility("default"))) int silk_decode_parameters(void) {
    ALOGD("silk_decode_parameters() called");
    return 0;
}

/* Exported Object: silk_LTPscale_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_LTPscale_iCDF = NULL;

/* Exported Object: SILK_LPC_INVERSE_PRED_GAIN_IMPL */
extern "C" __attribute__((visibility("default"))) void* SILK_LPC_INVERSE_PRED_GAIN_IMPL = NULL;

/* Demangled: opus_multistream_decoder_init */
extern "C" __attribute__((visibility("default"))) int opus_multistream_decoder_init(void) {
    ALOGD("opus_multistream_decoder_init() called");
    return 0;
}

/* Demangled: opus_projection_decoder_destroy */
extern "C" __attribute__((visibility("default"))) int opus_projection_decoder_destroy(void) {
    ALOGD("opus_projection_decoder_destroy() called");
    return 0;
}

/* Demangled: bitexact_cos */
extern "C" __attribute__((visibility("default"))) int bitexact_cos(void) {
    ALOGD("bitexact_cos() called");
    return 0;
}

/* Exported Object: silk_gain_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_gain_iCDF = NULL;

/* Exported Object: silk_LTP_gain_BITS_Q5_ptrs */
extern "C" __attribute__((visibility("default"))) void* silk_LTP_gain_BITS_Q5_ptrs = NULL;

/* Demangled: get_left_channel */
extern "C" __attribute__((visibility("default"))) int get_left_channel(void) {
    ALOGD("get_left_channel() called");
    return 0;
}

/* Demangled: silk_stereo_decode_mid_only */
extern "C" __attribute__((visibility("default"))) int silk_stereo_decode_mid_only(void) {
    ALOGD("silk_stereo_decode_mid_only() called");
    return 0;
}

/* Demangled: silk_corrMatrix_FIX */
extern "C" __attribute__((visibility("default"))) int silk_corrMatrix_FIX(void) {
    ALOGD("silk_corrMatrix_FIX() called");
    return 0;
}

/* Demangled: silk_noise_shape_analysis_FIX */
extern "C" __attribute__((visibility("default"))) int silk_noise_shape_analysis_FIX(void) {
    ALOGD("silk_noise_shape_analysis_FIX() called");
    return 0;
}

/* Demangled: silk_inner_prod16_aligned_64_c */
extern "C" __attribute__((visibility("default"))) int silk_inner_prod16_aligned_64_c(void) {
    ALOGD("silk_inner_prod16_aligned_64_c() called");
    return 0;
}

/* Demangled: opus_packet_get_nb_frames */
extern "C" __attribute__((visibility("default"))) int opus_packet_get_nb_frames(void) {
    ALOGD("opus_packet_get_nb_frames() called");
    return 0;
}

/* Demangled: opus_multistream_decode_float */
extern "C" __attribute__((visibility("default"))) int opus_multistream_decode_float(void) {
    ALOGD("opus_multistream_decode_float() called");
    return 0;
}

/* Demangled: stereo_itheta */
extern "C" __attribute__((visibility("default"))) int stereo_itheta(void) {
    ALOGD("stereo_itheta() called");
    return 0;
}

/* Exported Object: silk_max_pulses_table */
extern "C" __attribute__((visibility("default"))) void* silk_max_pulses_table = NULL;

/* Demangled: silk_resampler_down2_3 */
extern "C" __attribute__((visibility("default"))) int silk_resampler_down2_3(void) {
    ALOGD("silk_resampler_down2_3() called");
    return 0;
}

/* Demangled: alg_unquant */
extern "C" __attribute__((visibility("default"))) int alg_unquant(void) {
    ALOGD("alg_unquant() called");
    return 0;
}

/* Demangled: opus_ifft_c */
extern "C" __attribute__((visibility("default"))) int opus_ifft_c(void) {
    ALOGD("opus_ifft_c() called");
    return 0;
}

/* Demangled: silk_log2lin */
extern "C" __attribute__((visibility("default"))) int silk_log2lin(void) {
    ALOGD("silk_log2lin() called");
    return 0;
}

/* Demangled: silk_pitch_analysis_core */
extern "C" __attribute__((visibility("default"))) int silk_pitch_analysis_core(void) {
    ALOGD("silk_pitch_analysis_core() called");
    return 0;
}

/* Demangled: opus_multistream_decoder_get_size */
extern "C" __attribute__((visibility("default"))) int opus_multistream_decoder_get_size(void) {
    ALOGD("opus_multistream_decoder_get_size() called");
    return 0;
}

/* Demangled: silk_biquad_alt_stride2_neon */
extern "C" __attribute__((visibility("default"))) int silk_biquad_alt_stride2_neon(void) {
    ALOGD("silk_biquad_alt_stride2_neon() called");
    return 0;
}

/* Demangled: opus_custom_mode_create */
extern "C" __attribute__((visibility("default"))) int opus_custom_mode_create(void) {
    ALOGD("opus_custom_mode_create() called");
    return 0;
}

/* Exported Object: silk_CB_lags_stage3_10_ms */
extern "C" __attribute__((visibility("default"))) void* silk_CB_lags_stage3_10_ms = NULL;

/* Demangled: silk_scale_vector32_Q26_lshift_18 */
extern "C" __attribute__((visibility("default"))) int silk_scale_vector32_Q26_lshift_18(void) {
    ALOGD("silk_scale_vector32_Q26_lshift_18() called");
    return 0;
}

/* Demangled: silk_warped_autocorrelation_FIX_neon */
extern "C" __attribute__((visibility("default"))) int silk_warped_autocorrelation_FIX_neon(void) {
    ALOGD("silk_warped_autocorrelation_FIX_neon() called");
    return 0;
}

/* Demangled: celt_lcg_rand */
extern "C" __attribute__((visibility("default"))) int celt_lcg_rand(void) {
    ALOGD("celt_lcg_rand() called");
    return 0;
}

/* Demangled: silk_Get_Encoder_Size */
extern "C" __attribute__((visibility("default"))) int silk_Get_Encoder_Size(void) {
    ALOGD("silk_Get_Encoder_Size() called");
    return 0;
}

/* Demangled: silk_resampler_private_up2_HQ_wrapper */
extern "C" __attribute__((visibility("default"))) int silk_resampler_private_up2_HQ_wrapper(void) {
    ALOGD("silk_resampler_private_up2_HQ_wrapper() called");
    return 0;
}

/* Exported Object: silk_Resampler_2_3_COEFS_LQ */
extern "C" __attribute__((visibility("default"))) void* silk_Resampler_2_3_COEFS_LQ = NULL;

/* Demangled: mapping_matrix_multiply_channel_out_short */
extern "C" __attribute__((visibility("default"))) int mapping_matrix_multiply_channel_out_short(void) {
    ALOGD("mapping_matrix_multiply_channel_out_short() called");
    return 0;
}

/* Demangled: ec_enc_bit_logp */
extern "C" __attribute__((visibility("default"))) int ec_enc_bit_logp(void) {
    ALOGD("ec_enc_bit_logp() called");
    return 0;
}

/* Demangled: quant_energy_finalise */
extern "C" __attribute__((visibility("default"))) int quant_energy_finalise(void) {
    ALOGD("quant_energy_finalise() called");
    return 0;
}

/* Demangled: ec_laplace_decode */
extern "C" __attribute__((visibility("default"))) int ec_laplace_decode(void) {
    ALOGD("ec_laplace_decode() called");
    return 0;
}

/* Demangled: silk_VAD_GetSA_Q8_c */
extern "C" __attribute__((visibility("default"))) int silk_VAD_GetSA_Q8_c(void) {
    ALOGD("silk_VAD_GetSA_Q8_c() called");
    return 0;
}

/* Demangled: opus_multistream_encoder_get_size */
extern "C" __attribute__((visibility("default"))) int opus_multistream_encoder_get_size(void) {
    ALOGD("opus_multistream_encoder_get_size() called");
    return 0;
}

/* Demangled: ec_dec_uint */
extern "C" __attribute__((visibility("default"))) int ec_dec_uint(void) {
    ALOGD("ec_dec_uint() called");
    return 0;
}

/* Demangled: celt_encoder_get_size */
extern "C" __attribute__((visibility("default"))) int celt_encoder_get_size(void) {
    ALOGD("celt_encoder_get_size() called");
    return 0;
}

/* Exported Object: silk_lsb_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_lsb_iCDF = NULL;

/* Demangled: silk_control_encoder */
extern "C" __attribute__((visibility("default"))) int silk_control_encoder(void) {
    ALOGD("silk_control_encoder() called");
    return 0;
}

/* Exported Object: silk_stereo_pred_joint_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_stereo_pred_joint_iCDF = NULL;

/* Demangled: silk_process_NLSFs */
extern "C" __attribute__((visibility("default"))) int silk_process_NLSFs(void) {
    ALOGD("silk_process_NLSFs() called");
    return 0;
}

/* Demangled: opus_packet_parse */
extern "C" __attribute__((visibility("default"))) int opus_packet_parse(void) {
    ALOGD("opus_packet_parse() called");
    return 0;
}

/* Exported Object: silk_uniform8_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_uniform8_iCDF = NULL;

/* Demangled: silk_stereo_decode_pred */
extern "C" __attribute__((visibility("default"))) int silk_stereo_decode_pred(void) {
    ALOGD("silk_stereo_decode_pred() called");
    return 0;
}

/* Exported Object: silk_Resampler_3_4_COEFS */
extern "C" __attribute__((visibility("default"))) void* silk_Resampler_3_4_COEFS = NULL;

/* Demangled: mapping_matrix_multiply_channel_out_float */
extern "C" __attribute__((visibility("default"))) int mapping_matrix_multiply_channel_out_float(void) {
    ALOGD("mapping_matrix_multiply_channel_out_float() called");
    return 0;
}

/* Demangled: opus_encoder_create */
extern "C" __attribute__((visibility("default"))) int opus_encoder_create(void) {
    ALOGD("opus_encoder_create() called");
    return 0;
}

/* Demangled: clt_compute_allocation */
extern "C" __attribute__((visibility("default"))) int clt_compute_allocation(void) {
    ALOGD("clt_compute_allocation() called");
    return 0;
}

/* Demangled: opus_decode */
extern "C" __attribute__((visibility("default"))) int opus_decode(void) {
    ALOGD("opus_decode() called");
    return 0;
}

/* Demangled: opus_multistream_packet_pad */
extern "C" __attribute__((visibility("default"))) int opus_multistream_packet_pad(void) {
    ALOGD("opus_multistream_packet_pad() called");
    return 0;
}

/* Exported Object: silk_uniform4_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_uniform4_iCDF = NULL;

/* Exported Object: silk_shell_code_table0 */
extern "C" __attribute__((visibility("default"))) void* silk_shell_code_table0 = NULL;

/* Demangled: mapping_matrix_init */
extern "C" __attribute__((visibility("default"))) int mapping_matrix_init(void) {
    ALOGD("mapping_matrix_init() called");
    return 0;
}

/* Demangled: opus_decoder_destroy */
extern "C" __attribute__((visibility("default"))) int opus_decoder_destroy(void) {
    ALOGD("opus_decoder_destroy() called");
    return 0;
}

/* Demangled: opus_packet_unpad */
extern "C" __attribute__((visibility("default"))) int opus_packet_unpad(void) {
    ALOGD("opus_packet_unpad() called");
    return 0;
}

/* Exported Object: silk_shell_code_table1 */
extern "C" __attribute__((visibility("default"))) void* silk_shell_code_table1 = NULL;

/* Demangled: haar1 */
extern "C" __attribute__((visibility("default"))) int haar1(void) {
    ALOGD("haar1() called");
    return 0;
}

/* Demangled: silk_PLC */
extern "C" __attribute__((visibility("default"))) int silk_PLC(void) {
    ALOGD("silk_PLC() called");
    return 0;
}

/* Exported Object: silk_pulses_per_block_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_pulses_per_block_iCDF = NULL;

/* Exported Object: silk_shell_code_table2 */
extern "C" __attribute__((visibility("default"))) void* silk_shell_code_table2 = NULL;

/* Demangled: silk_resampler_private_up2_HQ */
extern "C" __attribute__((visibility("default"))) int silk_resampler_private_up2_HQ(void) {
    ALOGD("silk_resampler_private_up2_HQ() called");
    return 0;
}

/* Demangled: silk_corrVector_FIX */
extern "C" __attribute__((visibility("default"))) int silk_corrVector_FIX(void) {
    ALOGD("silk_corrVector_FIX() called");
    return 0;
}

/* Demangled: silk_inner_prod_aligned */
extern "C" __attribute__((visibility("default"))) int silk_inner_prod_aligned(void) {
    ALOGD("silk_inner_prod_aligned() called");
    return 0;
}

/* Demangled: opus_packet_parse_impl */
extern "C" __attribute__((visibility("default"))) int opus_packet_parse_impl(void) {
    ALOGD("opus_packet_parse_impl() called");
    return 0;
}

/* Demangled: celt_decoder_get_size */
extern "C" __attribute__((visibility("default"))) int celt_decoder_get_size(void) {
    ALOGD("celt_decoder_get_size() called");
    return 0;
}

/* Exported Object: silk_sign_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_sign_iCDF = NULL;

/* Demangled: silk_stereo_LR_to_MS */
extern "C" __attribute__((visibility("default"))) int silk_stereo_LR_to_MS(void) {
    ALOGD("silk_stereo_LR_to_MS() called");
    return 0;
}

/* Exported Object: silk_shell_code_table3 */
extern "C" __attribute__((visibility("default"))) void* silk_shell_code_table3 = NULL;

/* Exported Object: mapping_matrix_toa_demixing_data */
extern "C" __attribute__((visibility("default"))) void* mapping_matrix_toa_demixing_data = NULL;

/* Demangled: celt_fatal */
extern "C" __attribute__((visibility("default"))) int celt_fatal(void) {
    ALOGD("celt_fatal() called");
    return 0;
}

/* Demangled: silk_lin2log */
extern "C" __attribute__((visibility("default"))) int silk_lin2log(void) {
    ALOGD("silk_lin2log() called");
    return 0;
}

/* Exported Object: mapping_matrix_foa_demixing */
extern "C" __attribute__((visibility("default"))) void* mapping_matrix_foa_demixing = NULL;

/* Demangled: opus_repacketizer_out_range_impl */
extern "C" __attribute__((visibility("default"))) int opus_repacketizer_out_range_impl(void) {
    ALOGD("opus_repacketizer_out_range_impl() called");
    return 0;
}

/* Demangled: silk_NLSF_del_dec_quant */
extern "C" __attribute__((visibility("default"))) int silk_NLSF_del_dec_quant(void) {
    ALOGD("silk_NLSF_del_dec_quant() called");
    return 0;
}

/* Demangled: silk_biquad_alt_stride2_c */
extern "C" __attribute__((visibility("default"))) int silk_biquad_alt_stride2_c(void) {
    ALOGD("silk_biquad_alt_stride2_c() called");
    return 0;
}

/* Demangled: silk_find_pred_coefs_FIX */
extern "C" __attribute__((visibility("default"))) int silk_find_pred_coefs_FIX(void) {
    ALOGD("silk_find_pred_coefs_FIX() called");
    return 0;
}

/* Demangled: opus_multistream_encoder_ctl */
extern "C" __attribute__((visibility("default"))) int opus_multistream_encoder_ctl(void) {
    ALOGD("opus_multistream_encoder_ctl() called");
    return 0;
}

/* Demangled: opus_multistream_decoder_ctl */
extern "C" __attribute__((visibility("default"))) int opus_multistream_decoder_ctl(void) {
    ALOGD("opus_multistream_decoder_ctl() called");
    return 0;
}

/* Exported Object: XCORR_KERNEL_IMPL */
extern "C" __attribute__((visibility("default"))) void* XCORR_KERNEL_IMPL = NULL;

/* Demangled: silk_init_encoder */
extern "C" __attribute__((visibility("default"))) int silk_init_encoder(void) {
    ALOGD("silk_init_encoder() called");
    return 0;
}

/* Exported Object: tf_select_table */
extern "C" __attribute__((visibility("default"))) void* tf_select_table = NULL;

/* Demangled: silk_NLSF2A */
extern "C" __attribute__((visibility("default"))) int silk_NLSF2A(void) {
    ALOGD("silk_NLSF2A() called");
    return 0;
}

/* Exported Object: mapping_matrix_foa_demixing_data */
extern "C" __attribute__((visibility("default"))) void* mapping_matrix_foa_demixing_data = NULL;

/* Demangled: silk_NSQ_del_dec_neon */
extern "C" __attribute__((visibility("default"))) int silk_NSQ_del_dec_neon(void) {
    ALOGD("silk_NSQ_del_dec_neon() called");
    return 0;
}

/* Exported Object: silk_pitch_contour_10_ms_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_pitch_contour_10_ms_iCDF = NULL;

/* Demangled: silk_stereo_encode_pred */
extern "C" __attribute__((visibility("default"))) int silk_stereo_encode_pred(void) {
    ALOGD("silk_stereo_encode_pred() called");
    return 0;
}

/* Exported Object: silk_Resampler_1_2_COEFS */
extern "C" __attribute__((visibility("default"))) void* silk_Resampler_1_2_COEFS = NULL;

/* Exported Object: CELT_INNER_PROD_IMPL */
extern "C" __attribute__((visibility("default"))) void* CELT_INNER_PROD_IMPL = NULL;

/* Demangled: celt_preemphasis */
extern "C" __attribute__((visibility("default"))) int celt_preemphasis(void) {
    ALOGD("celt_preemphasis() called");
    return 0;
}

/* Demangled: ec_enc_icdf */
extern "C" __attribute__((visibility("default"))) int ec_enc_icdf(void) {
    ALOGD("ec_enc_icdf() called");
    return 0;
}

/* Demangled: ec_dec_update */
extern "C" __attribute__((visibility("default"))) int ec_dec_update(void) {
    ALOGD("ec_dec_update() called");
    return 0;
}

/* Demangled: silk_decode_pitch */
extern "C" __attribute__((visibility("default"))) int silk_decode_pitch(void) {
    ALOGD("silk_decode_pitch() called");
    return 0;
}

/* Demangled: opus_decoder_init */
extern "C" __attribute__((visibility("default"))) int opus_decoder_init(void) {
    ALOGD("opus_decoder_init() called");
    return 0;
}

/* Demangled: resampling_factor */
extern "C" __attribute__((visibility("default"))) int resampling_factor(void) {
    ALOGD("resampling_factor() called");
    return 0;
}

/* Demangled: quant_coarse_energy */
extern "C" __attribute__((visibility("default"))) int quant_coarse_energy(void) {
    ALOGD("quant_coarse_energy() called");
    return 0;
}

/* Demangled: silk_PLC_glue_frames */
extern "C" __attribute__((visibility("default"))) int silk_PLC_glue_frames(void) {
    ALOGD("silk_PLC_glue_frames() called");
    return 0;
}

/* Demangled: silk_encode_frame_FIX */
extern "C" __attribute__((visibility("default"))) int silk_encode_frame_FIX(void) {
    ALOGD("silk_encode_frame_FIX() called");
    return 0;
}

/* Exported Object: silk_shell_code_table_offsets */
extern "C" __attribute__((visibility("default"))) void* silk_shell_code_table_offsets = NULL;

/* Demangled: mapping_matrix_multiply_channel_in_short */
extern "C" __attribute__((visibility("default"))) int mapping_matrix_multiply_channel_in_short(void) {
    ALOGD("mapping_matrix_multiply_channel_in_short() called");
    return 0;
}

/* Demangled: opus_encode_native */
extern "C" __attribute__((visibility("default"))) int opus_encode_native(void) {
    ALOGD("opus_encode_native() called");
    return 0;
}

/* Demangled: opus_decode_float */
extern "C" __attribute__((visibility("default"))) int opus_decode_float(void) {
    ALOGD("opus_decode_float() called");
    return 0;
}

/* Demangled: opus_multistream_encoder_ctl_va_list */
extern "C" __attribute__((visibility("default"))) int opus_multistream_encoder_ctl_va_list(void) {
    ALOGD("opus_multistream_encoder_ctl_va_list() called");
    return 0;
}

/* Demangled: opus_multistream_encoder_init */
extern "C" __attribute__((visibility("default"))) int opus_multistream_encoder_init(void) {
    ALOGD("opus_multistream_encoder_init() called");
    return 0;
}

/* Demangled: anti_collapse */
extern "C" __attribute__((visibility("default"))) int anti_collapse(void) {
    ALOGD("anti_collapse() called");
    return 0;
}

/* Exported Object: mapping_matrix_foa_mixing */
extern "C" __attribute__((visibility("default"))) void* mapping_matrix_foa_mixing = NULL;

/* Exported Object: mapping_matrix_toa_mixing */
extern "C" __attribute__((visibility("default"))) void* mapping_matrix_toa_mixing = NULL;

/* Demangled: opus_decoder_ctl */
extern "C" __attribute__((visibility("default"))) int opus_decoder_ctl(void) {
    ALOGD("opus_decoder_ctl() called");
    return 0;
}

/* Demangled: dual_inner_prod_neon */
extern "C" __attribute__((visibility("default"))) int dual_inner_prod_neon(void) {
    ALOGD("dual_inner_prod_neon() called");
    return 0;
}

/* Demangled: celt_sqrt */
extern "C" __attribute__((visibility("default"))) int celt_sqrt(void) {
    ALOGD("celt_sqrt() called");
    return 0;
}

/* Exported Object: silk_delta_gain_iCDF */
extern "C" __attribute__((visibility("default"))) void* silk_delta_gain_iCDF = NULL;

/* Demangled: opus_multistream_encode_float */
extern "C" __attribute__((visibility("default"))) int opus_multistream_encode_float(void) {
    ALOGD("opus_multistream_encode_float() called");
    return 0;
}

/* Demangled: celt_pitch_xcorr_edsp */
extern "C" __attribute__((visibility("default"))) int celt_pitch_xcorr_edsp(void) {
    ALOGD("celt_pitch_xcorr_edsp() called");
    return 0;
}

/* Demangled: ec_enc_init */
extern "C" __attribute__((visibility("default"))) int ec_enc_init(void) {
    ALOGD("ec_enc_init() called");
    return 0;
}

/* Demangled: opus_custom_encoder_ctl */
extern "C" __attribute__((visibility("default"))) int opus_custom_encoder_ctl(void) {
    ALOGD("opus_custom_encoder_ctl() called");
    return 0;
}

/* Demangled: opus_custom_decoder_ctl */
extern "C" __attribute__((visibility("default"))) int opus_custom_decoder_ctl(void) {
    ALOGD("opus_custom_decoder_ctl() called");
    return 0;
}

/* Demangled: ec_enc_patch_initial_bits */
extern "C" __attribute__((visibility("default"))) int ec_enc_patch_initial_bits(void) {
    ALOGD("ec_enc_patch_initial_bits() called");
    return 0;
}

/* Demangled: silk_encode_indices */
extern "C" __attribute__((visibility("default"))) int silk_encode_indices(void) {
    ALOGD("silk_encode_indices() called");
    return 0;
}

/* Demangled: silk_NSQ_c */
extern "C" __attribute__((visibility("default"))) int silk_NSQ_c(void) {
    ALOGD("silk_NSQ_c() called");
    return 0;
}

/* Demangled: silk_resampler_down2 */
extern "C" __attribute__((visibility("default"))) int silk_resampler_down2(void) {
    ALOGD("silk_resampler_down2() called");
    return 0;
}

/* Demangled: mapping_matrix_multiply_channel_in_float */
extern "C" __attribute__((visibility("default"))) int mapping_matrix_multiply_channel_in_float(void) {
    ALOGD("mapping_matrix_multiply_channel_in_float() called");
    return 0;
}

/* Demangled: silk_decode_signs */
extern "C" __attribute__((visibility("default"))) int silk_decode_signs(void) {
    ALOGD("silk_decode_signs() called");
    return 0;
}

/* Demangled: silk_LPC_analysis_filter */
extern "C" __attribute__((visibility("default"))) int silk_LPC_analysis_filter(void) {
    ALOGD("silk_LPC_analysis_filter() called");
    return 0;
}

/* Demangled: silk_control_SNR */
extern "C" __attribute__((visibility("default"))) int silk_control_SNR(void) {
    ALOGD("silk_control_SNR() called");
    return 0;
}

/* Demangled: mapping_matrix_get_size */
extern "C" __attribute__((visibility("default"))) int mapping_matrix_get_size(void) {
    ALOGD("mapping_matrix_get_size() called");
    return 0;
}

/* Demangled: comb_filter */
extern "C" __attribute__((visibility("default"))) int comb_filter(void) {
    ALOGD("comb_filter() called");
    return 0;
}

/* Demangled: ec_tell_frac */
extern "C" __attribute__((visibility("default"))) int ec_tell_frac(void) {
    ALOGD("ec_tell_frac() called");
    return 0;
}

/* Exported Object: CELT_PITCH_XCORR_IMPL */
extern "C" __attribute__((visibility("default"))) void* CELT_PITCH_XCORR_IMPL = NULL;

/* Exported Object: SILK_NSQ_NOISE_SHAPE_FEEDBACK_LOOP_IMPL */
extern "C" __attribute__((visibility("default"))) void* SILK_NSQ_NOISE_SHAPE_FEEDBACK_LOOP_IMPL = NULL;

/* Demangled: silk_insertion_sort_decreasing_int16 */
extern "C" __attribute__((visibility("default"))) int silk_insertion_sort_decreasing_int16(void) {
    ALOGD("silk_insertion_sort_decreasing_int16() called");
    return 0;
}

/* Exported Object: mapping_matrix_foa_mixing_data */
extern "C" __attribute__((visibility("default"))) void* mapping_matrix_foa_mixing_data = NULL;

/* Demangled: tonality_analysis_reset */
extern "C" __attribute__((visibility("default"))) int tonality_analysis_reset(void) {
    ALOGD("tonality_analysis_reset() called");
    return 0;
}

/* Demangled: silk_regularize_correlations_FIX */
extern "C" __attribute__((visibility("default"))) int silk_regularize_correlations_FIX(void) {
    ALOGD("silk_regularize_correlations_FIX() called");
    return 0;
}

/* Demangled: opus_multistream_encode_native */
extern "C" __attribute__((visibility("default"))) int opus_multistream_encode_native(void) {
    ALOGD("opus_multistream_encode_native() called");
    return 0;
}

/* Demangled: celt_decode_with_ec */
extern "C" __attribute__((visibility("default"))) int celt_decode_with_ec(void) {
    ALOGD("celt_decode_with_ec() called");
    return 0;
}

/* Demangled: decode_pulses */
extern "C" __attribute__((visibility("default"))) int decode_pulses(void) {
    ALOGD("decode_pulses() called");
    return 0;
}

/* Demangled: check_control_input */
extern "C" __attribute__((visibility("default"))) int check_control_input(void) {
    ALOGD("check_control_input() called");
    return 0;
}

/* Demangled: silk_interpolate */
extern "C" __attribute__((visibility("default"))) int silk_interpolate(void) {
    ALOGD("silk_interpolate() called");
    return 0;
}

/* Exported Object: mapping_matrix_soa_demixing_data */
extern "C" __attribute__((visibility("default"))) void* mapping_matrix_soa_demixing_data = NULL;

/* Demangled: compute_stereo_width */
extern "C" __attribute__((visibility("default"))) int compute_stereo_width(void) {
    ALOGD("compute_stereo_width() called");
    return 0;
}

/* Demangled: silk_bwexpander */
extern "C" __attribute__((visibility("default"))) int silk_bwexpander(void) {
    ALOGD("silk_bwexpander() called");
    return 0;
}

/* Demangled: silk_LPC_inverse_pred_gain_c */
extern "C" __attribute__((visibility("default"))) int silk_LPC_inverse_pred_gain_c(void) {
    ALOGD("silk_LPC_inverse_pred_gain_c() called");
    return 0;
}

/* Demangled: opus_cpu_capabilities */
extern "C" __attribute__((visibility("default"))) int opus_cpu_capabilities(void) {
    ALOGD("opus_cpu_capabilities() called");
    return 0;
}

/* Demangled: celt_pitch_xcorr_neon */
extern "C" __attribute__((visibility("default"))) int celt_pitch_xcorr_neon(void) {
    ALOGD("celt_pitch_xcorr_neon() called");
    return 0;
}

/* Demangled: opus_encoder_ctl */
extern "C" __attribute__((visibility("default"))) int opus_encoder_ctl(void) {
    ALOGD("opus_encoder_ctl() called");
    return 0;
}

/* Demangled: tonality_analysis_init */
extern "C" __attribute__((visibility("default"))) int tonality_analysis_init(void) {
    ALOGD("tonality_analysis_init() called");
    return 0;
}
