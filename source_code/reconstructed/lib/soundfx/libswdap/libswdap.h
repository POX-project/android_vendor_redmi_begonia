/*
 * Reverse-Engineered ABI Specification for: libswdap.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libswdap.so
 */

#ifndef BEGONIA_RE_LIBSWDAP_H
#define BEGONIA_RE_LIBSWDAP_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: dap_cpdp_regulator_sibilance_suppress_enable_set */
/* Demangled: dap_cpdp_regulator_sibilance_suppress_enable_set */
int dap_cpdp_regulator_sibilance_suppress_enable_set(void);

/* Symbol: DAP_CPDP_PVT_mfcc_clip_process */
/* Demangled: DAP_CPDP_PVT_mfcc_clip_process */
int DAP_CPDP_PVT_mfcc_clip_process(void);

/* Symbol: DAP_CPDP_PVT_zcr_init */
/* Demangled: DAP_CPDP_PVT_zcr_init */
int DAP_CPDP_PVT_zcr_init(void);

/* Symbol: DAP_CPDP_PVT_lvl_calc_drc_scale_min */
/* Demangled: DAP_CPDP_PVT_lvl_calc_drc_scale_min */
int DAP_CPDP_PVT_lvl_calc_drc_scale_min(void);

/* Symbol: dlb_fft_fwd_scl_20 */
/* Demangled: dlb_fft_fwd_scl_20 */
int dlb_fft_fwd_scl_20(void);

/* Symbol: DAP_CPDP_PVT_dap_utilities_update_clip_unsigned */
/* Demangled: DAP_CPDP_PVT_dap_utilities_update_clip_unsigned */
int DAP_CPDP_PVT_dap_utilities_update_clip_unsigned(void);

/* Symbol: DAP_CPDP_PVT_dvlim_get_block_size */
/* Demangled: DAP_CPDP_PVT_dvlim_get_block_size */
int DAP_CPDP_PVT_dvlim_get_block_size(void);

/* Symbol: DAP_CPDP_PVT_de_compr_set_amount */
/* Demangled: DAP_CPDP_PVT_de_compr_set_amount */
int DAP_CPDP_PVT_de_compr_set_amount(void);

/* Symbol: DAP_CPDP_PVT_modified_sin_tab */
/* Demangled: DAP_CPDP_PVT_modified_sin_tab */
extern void* DAP_CPDP_PVT_modified_sin_tab;

/* Symbol: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MAX_TAB_44K */
/* Demangled: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MAX_TAB_44K */
extern void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MAX_TAB_44K;

/* Symbol: DLB_r4_fft_2 */
/* Demangled: DLB_r4_fft_2 */
int DLB_r4_fft_2(void);

/* Symbol: DLB_r4_inv_fft_64 */
/* Demangled: DLB_r4_inv_fft_64 */
int DLB_r4_inv_fft_64(void);

/* Symbol: dlb_fft_cplx_inv_usc */
/* Demangled: dlb_fft_cplx_inv_usc */
extern void* dlb_fft_cplx_inv_usc;

/* Symbol: DLB_CLmfb_p10km_analysisL_init */
/* Demangled: DLB_CLmfb_p10km_analysisL_init */
int DLB_CLmfb_p10km_analysisL_init(void);

/* Symbol: _ZN5dolby13EffectContext9setVolumeEiPKj */
/* Demangled: dolby::EffectContext::setVolume(int, unsigned int const*) */
int _ZN5dolby13EffectContext9setVolumeEiPKj(void);

/* Symbol: DAP_CPDP_PVT_P_VISUALIZER_COEF_48K */
/* Demangled: DAP_CPDP_PVT_P_VISUALIZER_COEF_48K */
extern void* DAP_CPDP_PVT_P_VISUALIZER_COEF_48K;

/* Symbol: dlb_fft_fwd_usc_576 */
/* Demangled: dlb_fft_fwd_usc_576 */
int dlb_fft_fwd_usc_576(void);

/* Symbol: _ZTVN5dolby16DlbBufferAdapterE */
/* Demangled: vtable for dolby::DlbBufferAdapter */
extern void* _ZTVN5dolby16DlbBufferAdapterE;

/* Symbol: DAP_CPDP_PVT_evaluation_process */
/* Demangled: DAP_CPDP_PVT_evaluation_process */
int DAP_CPDP_PVT_evaluation_process(void);

/* Symbol: DLB_r4_fft_4 */
/* Demangled: DLB_r4_fft_4 */
int DLB_r4_fft_4(void);

/* Symbol: dlb_fft_fwd_scl_24 */
/* Demangled: dlb_fft_fwd_scl_24 */
int dlb_fft_fwd_scl_24(void);

/* Symbol: DAP_CPDP_PVT_sone_buffer_channel_init */
/* Demangled: DAP_CPDP_PVT_sone_buffer_channel_init */
int DAP_CPDP_PVT_sone_buffer_channel_init(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L768 */
/* Demangled: dlb_dct_twiddle_table16_rev_L768 */
extern void* dlb_dct_twiddle_table16_rev_L768;

/* Symbol: DLB_MFB_TWID64O */
/* Demangled: DLB_MFB_TWID64O */
extern void* DLB_MFB_TWID64O;

/* Symbol: _ZN5dolby16DapEffectContextD2Ev */
/* Demangled: dolby::DapEffectContext::~DapEffectContext() */
int _ZN5dolby16DapEffectContextD2Ev(void);

/* Symbol: _ZN5dolby12BufferSource15fillWithSilenceEv */
/* Demangled: dolby::BufferSource::fillWithSilence() */
int _ZN5dolby12BufferSource15fillWithSilenceEv(void);

/* Symbol: DAP_CPDP_PVT_arle_gain_smooth_init */
/* Demangled: DAP_CPDP_PVT_arle_gain_smooth_init */
int DAP_CPDP_PVT_arle_gain_smooth_init(void);

/* Symbol: DAP_CPDP_PVT_virtual_bass_query_memory */
/* Demangled: DAP_CPDP_PVT_virtual_bass_query_memory */
int DAP_CPDP_PVT_virtual_bass_query_memory(void);

/* Symbol: DAP_CPDP_PVT_down_mix_init */
/* Demangled: DAP_CPDP_PVT_down_mix_init */
int DAP_CPDP_PVT_down_mix_init(void);

/* Symbol: DAP_CPDP_PVT_DE_MCRA_WIN_DEPTH02 */
/* Demangled: DAP_CPDP_PVT_DE_MCRA_WIN_DEPTH02 */
extern void* DAP_CPDP_PVT_DE_MCRA_WIN_DEPTH02;

/* Symbol: DLB_r4_fft_6 */
/* Demangled: DLB_r4_fft_6 */
int DLB_r4_fft_6(void);

/* Symbol: dlb_dct_twiddle_table16_L480_cos */
/* Demangled: dlb_dct_twiddle_table16_L480_cos */
extern void* dlb_dct_twiddle_table16_L480_cos;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj(void);

/* Symbol: dap_cpdp_virtual_bass_blend_linear_gain_set */
/* Demangled: dap_cpdp_virtual_bass_blend_linear_gain_set */
int dap_cpdp_virtual_bass_blend_linear_gain_set(void);

/* Symbol: DAP_CPDP_PVT_chroma_close */
/* Demangled: DAP_CPDP_PVT_chroma_close */
int DAP_CPDP_PVT_chroma_close(void);

/* Symbol: DAP_CPDP_PVT_volume_and_ieq_preset_init_copy */
/* Demangled: DAP_CPDP_PVT_volume_and_ieq_preset_init_copy */
int DAP_CPDP_PVT_volume_and_ieq_preset_init_copy(void);

/* Symbol: DLB_blk_Liir2df1L_setup */
/* Demangled: DLB_blk_Liir2df1L_setup */
int DLB_blk_Liir2df1L_setup(void);

/* Symbol: dlb_dct_twiddle_table16_L120_cos */
/* Demangled: dlb_dct_twiddle_table16_L120_cos */
extern void* dlb_dct_twiddle_table16_L120_cos;

/* Symbol: _ZN5dolby16DapEffectContext4initEv */
/* Demangled: dolby::DapEffectContext::init() */
int _ZN5dolby16DapEffectContext4initEv(void);

/* Symbol: _ZN5dolby11Dap2Process4openEv */
/* Demangled: dolby::Dap2Process::open() */
int _ZN5dolby11Dap2Process4openEv(void);

/* Symbol: DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC_128M */
/* Demangled: DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC_128M */
extern void* DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC_128M;

/* Symbol: DAP_CPDP_PVT_PROTO_COEF */
/* Demangled: DAP_CPDP_PVT_PROTO_COEF */
extern void* DAP_CPDP_PVT_PROTO_COEF;

/* Symbol: DAP_CPDP_PVT_lvl_smooth_scale_time */
/* Demangled: DAP_CPDP_PVT_lvl_smooth_scale_time */
int DAP_CPDP_PVT_lvl_smooth_scale_time(void);

/* Symbol: dlb_dct_twiddle_table16_L192_1 */
/* Demangled: dlb_dct_twiddle_table16_L192_1 */
extern void* dlb_dct_twiddle_table16_L192_1;

/* Symbol: DLB_r4_fft_8 */
/* Demangled: DLB_r4_fft_8 */
int DLB_r4_fft_8(void);

/* Symbol: dap_cpdp_virtual_bass_mode_set */
/* Demangled: dap_cpdp_virtual_bass_mode_set */
int dap_cpdp_virtual_bass_mode_set(void);

/* Symbol: dap_cpdp_pvt_audio_optimizer_supported */
/* Demangled: dap_cpdp_pvt_audio_optimizer_supported */
int dap_cpdp_pvt_audio_optimizer_supported(void);

/* Symbol: DAP_CPDP_PVT_dnn_layer_type_tab */
/* Demangled: DAP_CPDP_PVT_dnn_layer_type_tab */
extern void* DAP_CPDP_PVT_dnn_layer_type_tab;

/* Symbol: DAP_CPDP_PVT_down_mix_process */
/* Demangled: DAP_CPDP_PVT_down_mix_process */
int DAP_CPDP_PVT_down_mix_process(void);

/* Symbol: dlb_dct_twiddle_table16_L192_2 */
/* Demangled: dlb_dct_twiddle_table16_L192_2 */
extern void* dlb_dct_twiddle_table16_L192_2;

/* Symbol: DLB_r4_fft_384_s */
/* Demangled: DLB_r4_fft_384_s */
int DLB_r4_fft_384_s(void);

/* Symbol: DLB_r4_inv_fft_960 */
/* Demangled: DLB_r4_inv_fft_960 */
int DLB_r4_inv_fft_960(void);

/* Symbol: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_STEREO_TO_5D1DX */
/* Demangled: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_STEREO_TO_5D1DX */
extern void* DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_STEREO_TO_5D1DX;

/* Symbol: DAP_CPDP_PVT_de_speech_process */
/* Demangled: DAP_CPDP_PVT_de_speech_process */
int DAP_CPDP_PVT_de_speech_process(void);

/* Symbol: _ZTCN5dolby16DapEffectContext18DlbDapEffCallbacksE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-dolby::DapEffectContext::DlbDapEffCallbacks */
extern void* _ZTCN5dolby16DapEffectContext18DlbDapEffCallbacksE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: DAP_CPDP_PVT_sv_coefs_query_memory */
/* Demangled: DAP_CPDP_PVT_sv_coefs_query_memory */
int DAP_CPDP_PVT_sv_coefs_query_memory(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L384 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L384 */
extern void* dlb_dct_twiddle_table16_rev_1_L384;

/* Symbol: DLB_r4_inv_fft_4096_s */
/* Demangled: DLB_r4_inv_fft_4096_s */
int DLB_r4_inv_fft_4096_s(void);

/* Symbol: DAP_CPDP_PVT_arle_smoothed_excitations_calculation */
/* Demangled: DAP_CPDP_PVT_arle_smoothed_excitations_calculation */
int DAP_CPDP_PVT_arle_smoothed_excitations_calculation(void);

/* Symbol: _ZN5dolby13EffectContextD1Ev */
/* Demangled: dolby::EffectContext::~EffectContext() */
int _ZN5dolby13EffectContextD1Ev(void);

/* Symbol: DAP_CPDP_PVT_lvl_calc_single_ts_loudness */
/* Demangled: DAP_CPDP_PVT_lvl_calc_single_ts_loudness */
int DAP_CPDP_PVT_lvl_calc_single_ts_loudness(void);

/* Symbol: DLB_Lqmf_analysisL */
/* Demangled: DLB_Lqmf_analysisL */
int DLB_Lqmf_analysisL(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_attack_time */
/* Demangled: DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_attack_time */
int DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_attack_time(void);

/* Symbol: dlb_cos_32_full_scl */
/* Demangled: dlb_cos_32_full_scl */
extern void* dlb_cos_32_full_scl;

/* Symbol: dap_cpdp_init */
/* Demangled: dap_cpdp_init */
int dap_cpdp_init(void);

/* Symbol: DAP_CPDP_PVT_log_smoothing_approximation2 */
/* Demangled: DAP_CPDP_PVT_log_smoothing_approximation2 */
int DAP_CPDP_PVT_log_smoothing_approximation2(void);

/* Symbol: DAP_CPDP_PVT_hdr_Plog2P */
/* Demangled: DAP_CPDP_PVT_hdr_Plog2P */
int DAP_CPDP_PVT_hdr_Plog2P(void);

/* Symbol: DAP_CPDP_PVT_sbpp_query_clip_mem */
/* Demangled: DAP_CPDP_PVT_sbpp_query_clip_mem */
int DAP_CPDP_PVT_sbpp_query_clip_mem(void);

/* Symbol: DAP_CPDP_PVT_ap_dvlim_coefs_32 */
/* Demangled: DAP_CPDP_PVT_ap_dvlim_coefs_32 */
extern void* DAP_CPDP_PVT_ap_dvlim_coefs_32;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L90 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L90 */
extern void* dlb_dct_twiddle_table16_rev_1_L90;

/* Symbol: dlb_fft_inv_scl_180 */
/* Demangled: dlb_fft_inv_scl_180 */
int dlb_fft_inv_scl_180(void);

/* Symbol: DAP_CPDP_PVT_log_smoothing_approximation3 */
/* Demangled: DAP_CPDP_PVT_log_smoothing_approximation3 */
int DAP_CPDP_PVT_log_smoothing_approximation3(void);

/* Symbol: DAP_CPDP_PVT_loudness_query_memory */
/* Demangled: DAP_CPDP_PVT_loudness_query_memory */
int DAP_CPDP_PVT_loudness_query_memory(void);

/* Symbol: DAP_CPDP_PVT_dap_interp_configure */
/* Demangled: DAP_CPDP_PVT_dap_interp_configure */
int DAP_CPDP_PVT_dap_interp_configure(void);

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_ana_reset_channel */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_reset_channel */
int DAP_CPDP_PVT_mfb_rcp10km_ana_reset_channel(void);

/* Symbol: dlb_dct_twiddle_table16_L256_1 */
/* Demangled: dlb_dct_twiddle_table16_L256_1 */
extern void* dlb_dct_twiddle_table16_L256_1;

/* Symbol: DLB_r4_fft_180 */
/* Demangled: DLB_r4_fft_180 */
int DLB_r4_fft_180(void);

/* Symbol: dlb_dct_twiddle_table16_L256_2 */
/* Demangled: dlb_dct_twiddle_table16_L256_2 */
extern void* dlb_dct_twiddle_table16_L256_2;

/* Symbol: DLB_fft_is_supported */
/* Demangled: DLB_fft_is_supported */
int DLB_fft_is_supported(void);

/* Symbol: DLB_qmf_synthesisL_copy_states */
/* Demangled: DLB_qmf_synthesisL_copy_states */
int DLB_qmf_synthesisL_copy_states(void);

/* Symbol: _ZN5dolby16DapBufferAdapterD2Ev */
/* Demangled: dolby::DapBufferAdapter::~DapBufferAdapter() */
int _ZN5dolby16DapBufferAdapterD2Ev(void);

/* Symbol: DAP_CPDP_PVT_volume_and_ieq_query_memory */
/* Demangled: DAP_CPDP_PVT_volume_and_ieq_query_memory */
int DAP_CPDP_PVT_volume_and_ieq_query_memory(void);

/* Symbol: dlb_fft_fwd_scl_720 */
/* Demangled: dlb_fft_fwd_scl_720 */
int dlb_fft_fwd_scl_720(void);

/* Symbol: _ZN5dolby11Dap2Process4initEv */
/* Demangled: dolby::Dap2Process::init() */
int _ZN5dolby11Dap2Process4initEv(void);

/* Symbol: DAP_CPDP_PVT_data_bass_get_latency */
/* Demangled: DAP_CPDP_PVT_data_bass_get_latency */
int DAP_CPDP_PVT_data_bass_get_latency(void);

/* Symbol: DLB_Lqmf_analysisS */
/* Demangled: DLB_Lqmf_analysisS */
int DLB_Lqmf_analysisS(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L96 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L96 */
extern void* dlb_dct_twiddle_table16_rev_1_L96;

/* Symbol: DLB_r4_fft_12_s */
/* Demangled: DLB_r4_fft_12_s */
int DLB_r4_fft_12_s(void);

/* Symbol: _ZN5dolby17DlbBufferProvider14updateCapacityEi */
/* Demangled: dolby::DlbBufferProvider::updateCapacity(int) */
int _ZN5dolby17DlbBufferProvider14updateCapacityEi(void);

/* Symbol: DAP_CPDP_PVT_nyquist_filters_844_reset_channel */
/* Demangled: DAP_CPDP_PVT_nyquist_filters_844_reset_channel */
int DAP_CPDP_PVT_nyquist_filters_844_reset_channel(void);

/* Symbol: DLB_qmf_analysisL_init */
/* Demangled: DLB_qmf_analysisL_init */
int DLB_qmf_analysisL_init(void);

/* Symbol: DAP_CPDP_PVT_arle_threshold_init */
/* Demangled: DAP_CPDP_PVT_arle_threshold_init */
int DAP_CPDP_PVT_arle_threshold_init(void);

/* Symbol: DLB_r4_cplx_fwd_pair */
/* Demangled: DLB_r4_cplx_fwd_pair */
int DLB_r4_cplx_fwd_pair(void);

/* Symbol: DLB_r4_inv_fft_320_s */
/* Demangled: DLB_r4_inv_fft_320_s */
int DLB_r4_inv_fft_320_s(void);

/* Symbol: DLB_fft_CLfwd_scaledCL */
/* Demangled: DLB_fft_CLfwd_scaledCL */
int DLB_fft_CLfwd_scaledCL(void);

/* Symbol: _ZNK7android6VectorIjE10do_destroyEPvj */
/* Demangled: android::Vector<unsigned int>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIjE10do_destroyEPvj(void);

/* Symbol: DAP_CPDP_PVT_ldn_specific_loudness_transform */
/* Demangled: DAP_CPDP_PVT_ldn_specific_loudness_transform */
int DAP_CPDP_PVT_ldn_specific_loudness_transform(void);

/* Symbol: DAP_CPDP_PVT_dvlim_get_hard_clip */
/* Demangled: DAP_CPDP_PVT_dvlim_get_hard_clip */
int DAP_CPDP_PVT_dvlim_get_hard_clip(void);

/* Symbol: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_TF_DB_TAB_48K */
/* Demangled: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_TF_DB_TAB_48K */
extern void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_TF_DB_TAB_48K;

/* Symbol: DLB_blk_Lmpy_shlLSU_strict */
/* Demangled: DLB_blk_Lmpy_shlLSU_strict */
int DLB_blk_Lmpy_shlLSU_strict(void);

/* Symbol: dlb_fft_inv_usc_30 */
/* Demangled: dlb_fft_inv_usc_30 */
int dlb_fft_inv_usc_30(void);

/* Symbol: dlb_dct_twiddle_table16_1_L960 */
/* Demangled: dlb_dct_twiddle_table16_1_L960 */
extern void* dlb_dct_twiddle_table16_1_L960;

/* Symbol: _ZN5dolby9DlbEffect22handle_EFFECT_CMD_INITERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_INIT(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect22handle_EFFECT_CMD_INITERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: dlb_blk_LcmpLL_flex */
/* Demangled: dlb_blk_LcmpLL_flex */
int dlb_blk_LcmpLL_flex(void);

/* Symbol: DLB_r4_inv_fft_288_s */
/* Demangled: DLB_r4_inv_fft_288_s */
int DLB_r4_inv_fft_288_s(void);

/* Symbol: dlb_fft_fwd_usc_72 */
/* Demangled: dlb_fft_fwd_usc_72 */
int dlb_fft_fwd_usc_72(void);

/* Symbol: dlb_fft_inv_usc_32 */
/* Demangled: dlb_fft_inv_usc_32 */
int dlb_fft_inv_usc_32(void);

/* Symbol: DAP_CPDP_PVT_arle_sibilance_calculation */
/* Demangled: DAP_CPDP_PVT_arle_sibilance_calculation */
int DAP_CPDP_PVT_arle_sibilance_calculation(void);

/* Symbol: dap_cpdp_pvt_sysgains_update_control */
/* Demangled: dap_cpdp_pvt_sysgains_update_control */
int dap_cpdp_pvt_sysgains_update_control(void);

/* Symbol: DAP_CPDP_PVT_AA_COMPR_COEFS_OFFSETS_32K */
/* Demangled: DAP_CPDP_PVT_AA_COMPR_COEFS_OFFSETS_32K */
extern void* DAP_CPDP_PVT_AA_COMPR_COEFS_OFFSETS_32K;

/* Symbol: DAP_CPDP_PVT_ngcs_stats_reset */
/* Demangled: DAP_CPDP_PVT_ngcs_stats_reset */
int DAP_CPDP_PVT_ngcs_stats_reset(void);

/* Symbol: dlb_dct_twiddle_table16_L720 */
/* Demangled: dlb_dct_twiddle_table16_L720 */
extern void* dlb_dct_twiddle_table16_L720;

/* Symbol: DAP_CPDP_PVT_agc_query_memory */
/* Demangled: DAP_CPDP_PVT_agc_query_memory */
int DAP_CPDP_PVT_agc_query_memory(void);

/* Symbol: DAP_CPDP_PVT_acorr_clip_process */
/* Demangled: DAP_CPDP_PVT_acorr_clip_process */
int DAP_CPDP_PVT_acorr_clip_process(void);

/* Symbol: dlb_BLmaxBLL_flex */
/* Demangled: dlb_BLmaxBLL_flex */
int dlb_BLmaxBLL_flex(void);

/* Symbol: DAP_CPDP_PVT_A_LTRT3D_DELAYATTEN_SR32KHZ */
/* Demangled: DAP_CPDP_PVT_A_LTRT3D_DELAYATTEN_SR32KHZ */
extern void* DAP_CPDP_PVT_A_LTRT3D_DELAYATTEN_SR32KHZ;

/* Symbol: DLB_r4_fft_4096 */
/* Demangled: DLB_r4_fft_4096 */
int DLB_r4_fft_4096(void);

/* Symbol: _ZN5dolby16DapEffectContextC1Ev */
/* Demangled: dolby::DapEffectContext::DapEffectContext() */
int _ZN5dolby16DapEffectContextC1Ev(void);

/* Symbol: DLB_CLmacCLLU_strict */
/* Demangled: DLB_CLmacCLLU_strict */
int DLB_CLmacCLLU_strict(void);

/* Symbol: dlb_fft_inv_usc_36 */
/* Demangled: dlb_fft_inv_usc_36 */
int dlb_fft_inv_usc_36(void);

/* Symbol: dap_cpdp_regulator_enable_set */
/* Demangled: dap_cpdp_regulator_enable_set */
int dap_cpdp_regulator_enable_set(void);

/* Symbol: DAP_CPDP_PVT_dvlim_get_num_channels */
/* Demangled: DAP_CPDP_PVT_dvlim_get_num_channels */
int DAP_CPDP_PVT_dvlim_get_num_channels(void);

/* Symbol: DAP_CPDP_PVT_lfra_frame_process */
/* Demangled: DAP_CPDP_PVT_lfra_frame_process */
int DAP_CPDP_PVT_lfra_frame_process(void);

/* Symbol: DLB_blk_Lcrossfade_gainLS_strict */
/* Demangled: DLB_blk_Lcrossfade_gainLS_strict */
int DLB_blk_Lcrossfade_gainLS_strict(void);

/* Symbol: dlb_num_of_non_power_two_lengths */
/* Demangled: dlb_num_of_non_power_two_lengths */
extern void* dlb_num_of_non_power_two_lengths;

/* Symbol: DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency */
int DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency(void);

/* Symbol: _ZN5dolby16DapBufferAdapterC1EPNS_11IDlbProcessE */
/* Demangled: dolby::DapBufferAdapter::DapBufferAdapter(dolby::IDlbProcess*) */
int _ZN5dolby16DapBufferAdapterC1EPNS_11IDlbProcessE(void);

/* Symbol: dlb_odd_fft_cplx_fwd_usc */
/* Demangled: dlb_odd_fft_cplx_fwd_usc */
extern void* dlb_odd_fft_cplx_fwd_usc;

/* Symbol: DAP_CPDP_PVT_sbsc_frame_process */
/* Demangled: DAP_CPDP_PVT_sbsc_frame_process */
int DAP_CPDP_PVT_sbsc_frame_process(void);

/* Symbol: DLB_r4_fft_96_s */
/* Demangled: DLB_r4_fft_96_s */
int DLB_r4_fft_96_s(void);

/* Symbol: DLB_r4_inv_fft_72 */
/* Demangled: DLB_r4_inv_fft_72 */
int DLB_r4_inv_fft_72(void);

/* Symbol: dlb_fft_fwd_scl_30 */
/* Demangled: dlb_fft_fwd_scl_30 */
int dlb_fft_fwd_scl_30(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_cqmf_query_memory */
/* Demangled: DAP_CPDP_PVT_ltrt3d_cqmf_query_memory */
int DAP_CPDP_PVT_ltrt3d_cqmf_query_memory(void);

/* Symbol: DAP_CPDP_PVT_simple_downmixer_process */
/* Demangled: DAP_CPDP_PVT_simple_downmixer_process */
int DAP_CPDP_PVT_simple_downmixer_process(void);

/* Symbol: DAP_CPDP_PVT_mi_buffer_init */
/* Demangled: DAP_CPDP_PVT_mi_buffer_init */
int DAP_CPDP_PVT_mi_buffer_init(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L60 */
/* Demangled: dlb_dct_twiddle_table16_rev_L60 */
extern void* dlb_dct_twiddle_table16_rev_L60;

/* Symbol: dlb_dct_twiddle_table16_L48_cos */
/* Demangled: dlb_dct_twiddle_table16_L48_cos */
extern void* dlb_dct_twiddle_table16_L48_cos;

/* Symbol: _ZN5dolby11Dap2Process12getMixMatrixEi */
/* Demangled: dolby::Dap2Process::getMixMatrix(int) */
int _ZN5dolby11Dap2Process12getMixMatrixEi(void);

/* Symbol: DAP_CPDP_PVT_rs_set_amount */
/* Demangled: DAP_CPDP_PVT_rs_set_amount */
int DAP_CPDP_PVT_rs_set_amount(void);

/* Symbol: dlb_vec_Lsum_sqrLUU_flex */
/* Demangled: dlb_vec_Lsum_sqrLUU_flex */
int dlb_vec_Lsum_sqrLUU_flex(void);

/* Symbol: dlb_fft_fwd_scl_32 */
/* Demangled: dlb_fft_fwd_scl_32 */
int dlb_fft_fwd_scl_32(void);

/* Symbol: _ZN5dolby9EffectDapC1EPNS_11IDlbProcessE */
/* Demangled: dolby::EffectDap::EffectDap(dolby::IDlbProcess*) */
int _ZN5dolby9EffectDapC1EPNS_11IDlbProcessE(void);

/* Symbol: dlb_fft_fwd_usc_120 */
/* Demangled: dlb_fft_fwd_usc_120 */
int dlb_fft_fwd_usc_120(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_32_vec_ana;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5dolby9DlbEffect19effectGetDescriptorEPP18effect_interface_sP19effect_descriptor_s */
/* Demangled: dolby::DlbEffect::effectGetDescriptor(effect_interface_s**, effect_descriptor_s*) */
int _ZN5dolby9DlbEffect19effectGetDescriptorEPP18effect_interface_sP19effect_descriptor_s(void);

/* Symbol: DAP_CPDP_PVT_bass_extraction_process */
/* Demangled: DAP_CPDP_PVT_bass_extraction_process */
int DAP_CPDP_PVT_bass_extraction_process(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_apply_gains_query_scratch */
/* Demangled: DAP_CPDP_PVT_ltrt3d_apply_gains_query_scratch */
int DAP_CPDP_PVT_ltrt3d_apply_gains_query_scratch(void);

/* Symbol: _ZN5dolby16DlbBufferAdapter4initEv */
/* Demangled: dolby::DlbBufferAdapter::init() */
int _ZN5dolby16DlbBufferAdapter4initEv(void);

/* Symbol: dap_cpdp_query_scratch */
/* Demangled: dap_cpdp_query_scratch */
int dap_cpdp_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_sbsc_query_memory */
/* Demangled: DAP_CPDP_PVT_sbsc_query_memory */
int DAP_CPDP_PVT_sbsc_query_memory(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L64 */
/* Demangled: dlb_dct_twiddle_table16_rev_L64 */
extern void* dlb_dct_twiddle_table16_rev_L64;

/* Symbol: DLB_r4_inv_fft_192_s */
/* Demangled: DLB_r4_inv_fft_192_s */
int DLB_r4_inv_fft_192_s(void);

/* Symbol: DLB_CLmfb_p10km_analysisL_close */
/* Demangled: DLB_CLmfb_p10km_analysisL_close */
int DLB_CLmfb_p10km_analysisL_close(void);

/* Symbol: dlb_qmf_filter_coeff_P4_32_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P4_32_vec_ana */
extern void* dlb_qmf_filter_coeff_P4_32_vec_ana;

/* Symbol: _ZN5dolby9EffectDap10setEnabledEb */
/* Demangled: dolby::EffectDap::setEnabled(bool) */
int _ZN5dolby9EffectDap10setEnabledEb(void);

/* Symbol: dap_cpdp_shutdown */
/* Demangled: dap_cpdp_shutdown */
int dap_cpdp_shutdown(void);

/* Symbol: dlb_dct_twiddle_table16_1_L12 */
/* Demangled: dlb_dct_twiddle_table16_1_L12 */
extern void* dlb_dct_twiddle_table16_1_L12;

/* Symbol: dlb_fft_fwd_scl_36 */
/* Demangled: dlb_fft_fwd_scl_36 */
int dlb_fft_fwd_scl_36(void);

/* Symbol: DAP_CPDP_PVT_sv_query_memory */
/* Demangled: DAP_CPDP_PVT_sv_query_memory */
int DAP_CPDP_PVT_sv_query_memory(void);

/* Symbol: dap_cpdp_clear */
/* Demangled: dap_cpdp_clear */
int dap_cpdp_clear(void);

/* Symbol: A_NGCS_UPMIX_PLAN_5CH1_TO_5CH1 */
/* Demangled: A_NGCS_UPMIX_PLAN_5CH1_TO_5CH1 */
extern void* A_NGCS_UPMIX_PLAN_5CH1_TO_5CH1;

/* Symbol: DAP_CPDP_PVT_A_DAP_CPDP_LVL_DRC_COMP */
/* Demangled: DAP_CPDP_PVT_A_DAP_CPDP_LVL_DRC_COMP */
extern void* DAP_CPDP_PVT_A_DAP_CPDP_LVL_DRC_COMP;

/* Symbol: DAP_CPDP_PVT_sben_get_norm_en */
/* Demangled: DAP_CPDP_PVT_sben_get_norm_en */
int DAP_CPDP_PVT_sben_get_norm_en(void);

/* Symbol: DAP_CPDP_PVT_intelligent_eq_process */
/* Demangled: DAP_CPDP_PVT_intelligent_eq_process */
int DAP_CPDP_PVT_intelligent_eq_process(void);

/* Symbol: DAP_CPDP_PVT_hist_update_value */
/* Demangled: DAP_CPDP_PVT_hist_update_value */
int DAP_CPDP_PVT_hist_update_value(void);

/* Symbol: dlb_blk_Lfir3L_flex */
/* Demangled: dlb_blk_Lfir3L_flex */
int dlb_blk_Lfir3L_flex(void);

/* Symbol: DAP_CPDP_PVT_reset_filters */
/* Demangled: DAP_CPDP_PVT_reset_filters */
int DAP_CPDP_PVT_reset_filters(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_make_5_1_2 */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_make_5_1_2 */
int DAP_CPDP_PVT_dap_cpdp_make_5_1_2(void);

/* Symbol: DAP_CPDP_PVT_AP_LDN_SL_TABLE_PTRS */
/* Demangled: DAP_CPDP_PVT_AP_LDN_SL_TABLE_PTRS */
extern void* DAP_CPDP_PVT_AP_LDN_SL_TABLE_PTRS;

/* Symbol: DAP_CPDP_PVT_AA_COMPR_COEFS_OFFSETS_44K */
/* Demangled: DAP_CPDP_PVT_AA_COMPR_COEFS_OFFSETS_44K */
extern void* DAP_CPDP_PVT_AA_COMPR_COEFS_OFFSETS_44K;

/* Symbol: DAP_CPDP_PVT_spec_flux_clip_process */
/* Demangled: DAP_CPDP_PVT_spec_flux_clip_process */
int DAP_CPDP_PVT_spec_flux_clip_process(void);

/* Symbol: DLB_blk_LcmpLL_strict */
/* Demangled: DLB_blk_LcmpLL_strict */
int DLB_blk_LcmpLL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L15 */
/* Demangled: dlb_dct_twiddle_table16_1_L15 */
extern void* dlb_dct_twiddle_table16_1_L15;

/* Symbol: DLB_r4_inv_fft_2 */
/* Demangled: DLB_r4_inv_fft_2 */
int DLB_r4_inv_fft_2(void);

/* Symbol: DAP_CPDP_PVT_mi_dap_mapping_reset */
/* Demangled: DAP_CPDP_PVT_mi_dap_mapping_reset */
int DAP_CPDP_PVT_mi_dap_mapping_reset(void);

/* Symbol: A_NGCS_UPMIX_PLAN_STEREO_TO_7CH1 */
/* Demangled: A_NGCS_UPMIX_PLAN_STEREO_TO_7CH1 */
extern void* A_NGCS_UPMIX_PLAN_STEREO_TO_7CH1;

/* Symbol: DAP_CPDP_PVT_MFB_TWID8O */
/* Demangled: DAP_CPDP_PVT_MFB_TWID8O */
extern void* DAP_CPDP_PVT_MFB_TWID8O;

/* Symbol: DAP_CPDP_PVT_down_mix_query_scratch */
/* Demangled: DAP_CPDP_PVT_down_mix_query_scratch */
int DAP_CPDP_PVT_down_mix_query_scratch(void);

/* Symbol: DLB_blk_Lfir3L_set_coef */
/* Demangled: DLB_blk_Lfir3L_set_coef */
int DLB_blk_Lfir3L_set_coef(void);

/* Symbol: dlb_dct_twiddle_table16_1_L16 */
/* Demangled: dlb_dct_twiddle_table16_1_L16 */
extern void* dlb_dct_twiddle_table16_1_L16;

/* Symbol: _ZN5dolby19DapCrossfadeProcessD2Ev */
/* Demangled: dolby::DapCrossfadeProcess::~DapCrossfadeProcess() */
int _ZN5dolby19DapCrossfadeProcessD2Ev(void);

/* Symbol: DLB_blk_Liir2ssv3aLU_inplace */
/* Demangled: DLB_blk_Liir2ssv3aLU_inplace */
int DLB_blk_Liir2ssv3aLU_inplace(void);

/* Symbol: DLB_r4_inv_fft_4 */
/* Demangled: DLB_r4_inv_fft_4 */
int DLB_r4_inv_fft_4(void);

/* Symbol: dlb_fft_fwd_usc_128 */
/* Demangled: dlb_fft_fwd_usc_128 */
int dlb_fft_fwd_usc_128(void);

/* Symbol: DLB_blk_delay_clear_strict */
/* Demangled: DLB_blk_delay_clear_strict */
int DLB_blk_delay_clear_strict(void);

/* Symbol: DLB_r4_inv_fft_12_s */
/* Demangled: DLB_r4_inv_fft_12_s */
int DLB_r4_inv_fft_12_s(void);

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7CH1_CC */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7CH1_CC */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7CH1_CC;

/* Symbol: DAP_CPDP_PVT_ap_dvlim_coefs_40 */
/* Demangled: DAP_CPDP_PVT_ap_dvlim_coefs_40 */
extern void* DAP_CPDP_PVT_ap_dvlim_coefs_40;

/* Symbol: DAP_CPDP_PVT_ltrt3d_calc_ring_pan */
/* Demangled: DAP_CPDP_PVT_ltrt3d_calc_ring_pan */
int DAP_CPDP_PVT_ltrt3d_calc_ring_pan(void);

/* Symbol: DLB_r4_inv_fft_6 */
/* Demangled: DLB_r4_inv_fft_6 */
int DLB_r4_inv_fft_6(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcess9crossfadeEPNS_14BufferProviderES2_b */
/* Demangled: dolby::DlbCrossfadeProcess::crossfade(dolby::BufferProvider*, dolby::BufferProvider*, bool) */
int _ZN5dolby19DlbCrossfadeProcess9crossfadeEPNS_14BufferProviderES2_b(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_(void);

/* Symbol: DAP_CPDP_PVT_ngcs_steering_run */
/* Demangled: DAP_CPDP_PVT_ngcs_steering_run */
int DAP_CPDP_PVT_ngcs_steering_run(void);

/* Symbol: dlb_dct_twiddle_table16_L12 */
/* Demangled: dlb_dct_twiddle_table16_L12 */
extern void* dlb_dct_twiddle_table16_L12;

/* Symbol: dlb_dct_twiddle_table16_L12_1 */
/* Demangled: dlb_dct_twiddle_table16_L12_1 */
extern void* dlb_dct_twiddle_table16_L12_1;

/* Symbol: DLB_r4_inv_fft_256_s */
/* Demangled: DLB_r4_inv_fft_256_s */
int DLB_r4_inv_fft_256_s(void);

/* Symbol: hp_height_hrtf_and_fdn_downmix_process */
/* Demangled: hp_height_hrtf_and_fdn_downmix_process */
int hp_height_hrtf_and_fdn_downmix_process(void);

/* Symbol: dlb_dct_twiddle_table16_L12_2 */
/* Demangled: dlb_dct_twiddle_table16_L12_2 */
extern void* dlb_dct_twiddle_table16_L12_2;

/* Symbol: DLB_r4_inv_fft_8 */
/* Demangled: DLB_r4_inv_fft_8 */
int DLB_r4_inv_fft_8(void);

/* Symbol: dlb_dct_twiddle_table16_L576_cos */
/* Demangled: dlb_dct_twiddle_table16_L576_cos */
extern void* dlb_dct_twiddle_table16_L576_cos;

/* Symbol: _ZTTN5dolby16DapEffectContext18DlbDapEffCallbacksE */
/* Demangled: VTT for dolby::DapEffectContext::DlbDapEffCallbacks */
extern void* _ZTTN5dolby16DapEffectContext18DlbDapEffCallbacksE;

/* Symbol: DLB_blk_Lcrossfade_gainLS_setup */
/* Demangled: DLB_blk_Lcrossfade_gainLS_setup */
int DLB_blk_Lcrossfade_gainLS_setup(void);

/* Symbol: dlb_fft_fwd_scl_960 */
/* Demangled: dlb_fft_fwd_scl_960 */
int dlb_fft_fwd_scl_960(void);

/* Symbol: dap_cpdp_get_version */
/* Demangled: dap_cpdp_get_version */
int dap_cpdp_get_version(void);

/* Symbol: dap_cpdp_volume_leveler_in_target_set */
/* Demangled: dap_cpdp_volume_leveler_in_target_set */
int dap_cpdp_volume_leveler_in_target_set(void);

/* Symbol: dlb_dct_twiddle_table16_L15 */
/* Demangled: dlb_dct_twiddle_table16_L15 */
extern void* dlb_dct_twiddle_table16_L15;

/* Symbol: DLB_r4_inv_fft_512 */
/* Demangled: DLB_r4_inv_fft_512 */
int DLB_r4_inv_fft_512(void);

/* Symbol: dlb_fft_inv_scl_192 */
/* Demangled: dlb_fft_inv_scl_192 */
int dlb_fft_inv_scl_192(void);

/* Symbol: DLB_blk_Lfir2L_setup */
/* Demangled: DLB_blk_Lfir2L_setup */
int DLB_blk_Lfir2L_setup(void);

/* Symbol: DLB_vec_LmaskLSU_strict */
/* Demangled: DLB_vec_LmaskLSU_strict */
int DLB_vec_LmaskLSU_strict(void);

/* Symbol: dlb_vec_Sabs_maxSU_flex */
/* Demangled: dlb_vec_Sabs_maxSU_flex */
int dlb_vec_Sabs_maxSU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L16 */
/* Demangled: dlb_dct_twiddle_table16_L16 */
extern void* dlb_dct_twiddle_table16_L16;

/* Symbol: DLB_r4_fft_320_s */
/* Demangled: DLB_r4_fft_320_s */
int DLB_r4_fft_320_s(void);

/* Symbol: dlb_fft_fwd_usc_240 */
/* Demangled: dlb_fft_fwd_usc_240 */
int dlb_fft_fwd_usc_240(void);

/* Symbol: _ZTVN7android6VectorIjEE */
/* Demangled: vtable for android::Vector<unsigned int> */
extern void* _ZTVN7android6VectorIjEE;

/* Symbol: DLB_r4_fft_192 */
/* Demangled: DLB_r4_fft_192 */
int DLB_r4_fft_192(void);

/* Symbol: DLB_qmf_synthesisL_init */
/* Demangled: DLB_qmf_synthesisL_init */
int DLB_qmf_synthesisL_init(void);

/* Symbol: DLB_r4_inv_fft_4096 */
/* Demangled: DLB_r4_inv_fft_4096 */
int DLB_r4_inv_fft_4096(void);

/* Symbol: DLB_CLmfb_p10km_analysisL_legacy */
/* Demangled: DLB_CLmfb_p10km_analysisL_legacy */
int DLB_CLmfb_p10km_analysisL_legacy(void);

/* Symbol: dap_cpdp_process_optimizer_bands_set */
/* Demangled: dap_cpdp_process_optimizer_bands_set */
int dap_cpdp_process_optimizer_bands_set(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_end_chain_query_memory */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_end_chain_query_memory */
int DAP_CPDP_PVT_dap_cpdp_end_chain_query_memory(void);

/* Symbol: DLB_r4_fft_288_s */
/* Demangled: DLB_r4_fft_288_s */
int DLB_r4_fft_288_s(void);

/* Symbol: DLB_r4_fft_64_s */
/* Demangled: DLB_r4_fft_64_s */
int DLB_r4_fft_64_s(void);

/* Symbol: _ZN5dolby9EffectDap12setAudioModeE12audio_mode_t */
/* Demangled: dolby::EffectDap::setAudioMode(audio_mode_t) */
int _ZN5dolby9EffectDap12setAudioModeE12audio_mode_t(void);

/* Symbol: DAP_CPDP_PVT_visualizer_init */
/* Demangled: DAP_CPDP_PVT_visualizer_init */
int DAP_CPDP_PVT_visualizer_init(void);

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_ana_process_legacy */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_process_legacy */
int DAP_CPDP_PVT_mfb_rcp10km_ana_process_legacy(void);

/* Symbol: dlb_vec_LmaskLSU_flex */
/* Demangled: dlb_vec_LmaskLSU_flex */
int dlb_vec_LmaskLSU_flex(void);

/* Symbol: dlb_CLmacCLCLU_flex */
/* Demangled: dlb_CLmacCLCLU_flex */
int dlb_CLmacCLCLU_flex(void);

/* Symbol: DLB_CLshrCLUU_strict */
/* Demangled: DLB_CLshrCLUU_strict */
int DLB_CLshrCLUU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L32_cos */
/* Demangled: dlb_dct_twiddle_table16_L32_cos */
extern void* dlb_dct_twiddle_table16_L32_cos;

/* Symbol: _ZN5dolby9DlbEffect23handle_EFFECT_CMD_RESETERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_RESET(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect23handle_EFFECT_CMD_RESETERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: DAP_CPDP_PVT_A_DV_SONE_TO_NORM_LOG_SONE */
/* Demangled: DAP_CPDP_PVT_A_DV_SONE_TO_NORM_LOG_SONE */
extern void* DAP_CPDP_PVT_A_DV_SONE_TO_NORM_LOG_SONE;

/* Symbol: DAP_CPDP_PVT_mfcc_flux_clip_process */
/* Demangled: DAP_CPDP_PVT_mfcc_flux_clip_process */
int DAP_CPDP_PVT_mfcc_flux_clip_process(void);

/* Symbol: DAP_CPDP_PVT_sben_reset */
/* Demangled: DAP_CPDP_PVT_sben_reset */
int DAP_CPDP_PVT_sben_reset(void);

/* Symbol: _ZN5dolby9DlbEffect25handle_EFFECT_CMD_DISABLEERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_DISABLE(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect25handle_EFFECT_CMD_DISABLEERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: _ZN5dolby16DapEffectContextD1Ev */
/* Demangled: dolby::DapEffectContext::~DapEffectContext() */
int _ZN5dolby16DapEffectContextD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int const*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE10do_compareEPKvS7_(void);

/* Symbol: DAP_CPDP_PVT_mi_vec_bubble_sort */
/* Demangled: DAP_CPDP_PVT_mi_vec_bubble_sort */
int DAP_CPDP_PVT_mi_vec_bubble_sort(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_stats_query_scratch */
/* Demangled: DAP_CPDP_PVT_ltrt3d_stats_query_scratch */
int DAP_CPDP_PVT_ltrt3d_stats_query_scratch(void);

/* Symbol: dlb_dct_twiddle_table16_L960 */
/* Demangled: dlb_dct_twiddle_table16_L960 */
extern void* dlb_dct_twiddle_table16_L960;

/* Symbol: DLB_r4_inv_fft_96_s */
/* Demangled: DLB_r4_inv_fft_96_s */
int DLB_r4_inv_fft_96_s(void);

/* Symbol: dlb_fft_fwd_usc_80 */
/* Demangled: dlb_fft_fwd_usc_80 */
int dlb_fft_fwd_usc_80(void);

/* Symbol: dlb_fft_inv_usc_40 */
/* Demangled: dlb_fft_inv_usc_40 */
int dlb_fft_inv_usc_40(void);

/* Symbol: DLB_fft_CLinv_scaledCL */
/* Demangled: DLB_fft_CLinv_scaledCL */
int DLB_fft_CLinv_scaledCL(void);

/* Symbol: DAP_CPDP_PVT_rs_query_memory */
/* Demangled: DAP_CPDP_PVT_rs_query_memory */
int DAP_CPDP_PVT_rs_query_memory(void);

/* Symbol: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_COMP_ATTACK_ALPHA_TAB */
/* Demangled: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_COMP_ATTACK_ALPHA_TAB */
extern void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_COMP_ATTACK_ALPHA_TAB;

/* Symbol: dlb_dct_twiddle_table16_L2_1 */
/* Demangled: dlb_dct_twiddle_table16_L2_1 */
extern void* dlb_dct_twiddle_table16_L2_1;

/* Symbol: DAP_CPDP_PVT_ltrt3d_cqmf_query_scratch */
/* Demangled: DAP_CPDP_PVT_ltrt3d_cqmf_query_scratch */
int DAP_CPDP_PVT_ltrt3d_cqmf_query_scratch(void);

/* Symbol: DLB_r4_cplx_fwd_scaled */
/* Demangled: DLB_r4_cplx_fwd_scaled */
int DLB_r4_cplx_fwd_scaled(void);

/* Symbol: dlb_dct_twiddle_table16_L2_2 */
/* Demangled: dlb_dct_twiddle_table16_L2_2 */
extern void* dlb_dct_twiddle_table16_L2_2;

/* Symbol: dlb_dct_twiddle_table16_L96_1 */
/* Demangled: dlb_dct_twiddle_table16_L96_1 */
extern void* dlb_dct_twiddle_table16_L96_1;

/* Symbol: DLB_r4_inv_fft_160_s */
/* Demangled: DLB_r4_inv_fft_160_s */
int DLB_r4_inv_fft_160_s(void);

/* Symbol: _ZN5dolby16DapEffectContext9setDeviceE15audio_devices_t */
/* Demangled: dolby::DapEffectContext::setDevice(audio_devices_t) */
int _ZN5dolby16DapEffectContext9setDeviceE15audio_devices_t(void);

/* Symbol: dlb_blk_LmaxLL_flex */
/* Demangled: dlb_blk_LmaxLL_flex */
int dlb_blk_LmaxLL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L96_2 */
/* Demangled: dlb_dct_twiddle_table16_L96_2 */
extern void* dlb_dct_twiddle_table16_L96_2;

/* Symbol: DAP_CPDP_PVT_arle_init */
/* Demangled: DAP_CPDP_PVT_arle_init */
int DAP_CPDP_PVT_arle_init(void);

/* Symbol: DAP_CPDP_PVT_feature_query_memory */
/* Demangled: DAP_CPDP_PVT_feature_query_memory */
int DAP_CPDP_PVT_feature_query_memory(void);

/* Symbol: DAP_CPDP_PVT_mi_buffer_update_samples */
/* Demangled: DAP_CPDP_PVT_mi_buffer_update_samples */
int DAP_CPDP_PVT_mi_buffer_update_samples(void);

/* Symbol: _ZN5dolby9EffectDap15commitAllParamsE15audio_devices_t */
/* Demangled: dolby::EffectDap::commitAllParams(audio_devices_t) */
int _ZN5dolby9EffectDap15commitAllParamsE15audio_devices_t(void);

/* Symbol: DAP_CPDP_PVT_zcr_close */
/* Demangled: DAP_CPDP_PVT_zcr_close */
int DAP_CPDP_PVT_zcr_close(void);

/* Symbol: dlb_CLmixCLCLSSU_flex */
/* Demangled: dlb_CLmixCLCLSSU_flex */
int dlb_CLmixCLCLSSU_flex(void);

/* Symbol: dlb_fft_inv_usc_45 */
/* Demangled: dlb_fft_inv_usc_45 */
int dlb_fft_inv_usc_45(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301 */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301 */
extern void* dlb_qmf_filter_coeff_P5_p64atm301;

/* Symbol: DAP_CPDP_PVT_dap_cpdp_input_target_level_smoother */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_input_target_level_smoother */
int DAP_CPDP_PVT_dap_cpdp_input_target_level_smoother(void);

/* Symbol: DAP_CPDP_PVT_mfcc_frame_process */
/* Demangled: DAP_CPDP_PVT_mfcc_frame_process */
int DAP_CPDP_PVT_mfcc_frame_process(void);

/* Symbol: DAP_CPDP_PVT_ngcs_upmixer_configure */
/* Demangled: DAP_CPDP_PVT_ngcs_upmixer_configure */
int DAP_CPDP_PVT_ngcs_upmixer_configure(void);

/* Symbol: DLB_blk_Lattack_decay_peak_iir1L_strict */
/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_strict */
int DLB_blk_Lattack_decay_peak_iir1L_strict(void);

/* Symbol: process_Phase90Hilbert */
/* Demangled: process_Phase90Hilbert */
int process_Phase90Hilbert(void);

/* Symbol: _ZN5dolby13EffectContextD0Ev */
/* Demangled: dolby::EffectContext::~EffectContext() */
int _ZN5dolby13EffectContextD0Ev(void);

/* Symbol: DLB_r4_inv_fft_80 */
/* Demangled: DLB_r4_inv_fft_80 */
int DLB_r4_inv_fft_80(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_32_vec_syn;

/* Symbol: DLB_blk_LfirUL_set_coef */
/* Demangled: DLB_blk_LfirUL_set_coef */
int DLB_blk_LfirUL_set_coef(void);

/* Symbol: DLB_r4_inv_fft_1024_s */
/* Demangled: DLB_r4_inv_fft_1024_s */
int DLB_r4_inv_fft_1024_s(void);

/* Symbol: dlb_fft_inv_usc_48 */
/* Demangled: dlb_fft_inv_usc_48 */
int dlb_fft_inv_usc_48(void);

/* Symbol: dlb_fft_inv_usc_576 */
/* Demangled: dlb_fft_inv_usc_576 */
int dlb_fft_inv_usc_576(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: DAP_UPMIX_MODE_STEREO_TO_5D1D4_GAMING */
/* Demangled: DAP_UPMIX_MODE_STEREO_TO_5D1D4_GAMING */
extern void* DAP_UPMIX_MODE_STEREO_TO_5D1D4_GAMING;

/* Symbol: dlb_blk_LfirUL_flex */
/* Demangled: dlb_blk_LfirUL_flex */
int dlb_blk_LfirUL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L512 */
/* Demangled: dlb_dct_twiddle_table16_1_L512 */
extern void* dlb_dct_twiddle_table16_1_L512;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L288 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L288 */
extern void* dlb_dct_twiddle_table16_rev_1_L288;

/* Symbol: DLB_r4_fft_192_s */
/* Demangled: DLB_r4_fft_192_s */
int DLB_r4_fft_192_s(void);

/* Symbol: dlb_fft_fwd_scl_40 */
/* Demangled: dlb_fft_fwd_scl_40 */
int dlb_fft_fwd_scl_40(void);

/* Symbol: dlb_fft_fwd_usc_360 */
/* Demangled: dlb_fft_fwd_usc_360 */
int dlb_fft_fwd_usc_360(void);

/* Symbol: dlb_qmf_filter_coeff_P4_32_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P4_32_vec_syn */
extern void* dlb_qmf_filter_coeff_P4_32_vec_syn;

/* Symbol: _ZN5dolby10BufferSink7consumeERNS_12BufferSourceEi */
/* Demangled: dolby::BufferSink::consume(dolby::BufferSource&, int) */
int _ZN5dolby10BufferSink7consumeERNS_12BufferSourceEi(void);

/* Symbol: DAP_CPDP_PVT_resi_query_scratch */
/* Demangled: DAP_CPDP_PVT_resi_query_scratch */
int DAP_CPDP_PVT_resi_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_A_LDN_NUM_SL_TABLE_VALS */
/* Demangled: DAP_CPDP_PVT_A_LDN_NUM_SL_TABLE_VALS */
extern void* DAP_CPDP_PVT_A_LDN_NUM_SL_TABLE_VALS;

/* Symbol: DAP_CPDP_PVT_SURROUND_COMPRESSOR_INV_130_ON_SURROUND_COMPRESSOR_AK_PARAM_STEPS */
/* Demangled: DAP_CPDP_PVT_SURROUND_COMPRESSOR_INV_130_ON_SURROUND_COMPRESSOR_AK_PARAM_STEPS */
extern void* DAP_CPDP_PVT_SURROUND_COMPRESSOR_INV_130_ON_SURROUND_COMPRESSOR_AK_PARAM_STEPS;

/* Symbol: dlb_forwardModulationReal */
/* Demangled: dlb_forwardModulationReal */
int dlb_forwardModulationReal(void);

/* Symbol: dlb_blk_Liir2ssv2L_flex */
/* Demangled: dlb_blk_Liir2ssv2L_flex */
int dlb_blk_Liir2ssv2L_flex(void);

/* Symbol: _ZN5dolby9EffectDap19commitChangedParamsE15audio_devices_t */
/* Demangled: dolby::EffectDap::commitChangedParams(audio_devices_t) */
int _ZN5dolby9EffectDap19commitChangedParamsE15audio_devices_t(void);

/* Symbol: _ZN5dolby11Dap2Process7processEPNS_14BufferProviderES2_ */
/* Demangled: dolby::Dap2Process::process(dolby::BufferProvider*, dolby::BufferProvider*) */
int _ZN5dolby11Dap2Process7processEPNS_14BufferProviderES2_(void);

/* Symbol: DAP_CPDP_PVT_arle_query_memory */
/* Demangled: DAP_CPDP_PVT_arle_query_memory */
int DAP_CPDP_PVT_arle_query_memory(void);

/* Symbol: DAP_CPDP_PVT_bass_extraction_coefs_gen */
/* Demangled: DAP_CPDP_PVT_bass_extraction_coefs_gen */
int DAP_CPDP_PVT_bass_extraction_coefs_gen(void);

/* Symbol: DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF0_COMPENSATION */
/* Demangled: DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF0_COMPENSATION */
extern void* DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF0_COMPENSATION;

/* Symbol: DAP_CPDP_PVT_de_stereo_init */
/* Demangled: DAP_CPDP_PVT_de_stereo_init */
int DAP_CPDP_PVT_de_stereo_init(void);

/* Symbol: _dlb_ldct3_scaled_iplu */
/* Demangled: _dlb_ldct3_scaled_iplu */
int _dlb_ldct3_scaled_iplu(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L320 */
/* Demangled: dlb_dct_twiddle_table16_rev_L320 */
extern void* dlb_dct_twiddle_table16_rev_L320;

/* Symbol: dlb_dct_twiddle_table16_rev_L72 */
/* Demangled: dlb_dct_twiddle_table16_rev_L72 */
extern void* dlb_dct_twiddle_table16_rev_L72;

/* Symbol: DLB_MFB_P10KM_P4_319SC_128M */
/* Demangled: DLB_MFB_P10KM_P4_319SC_128M */
extern void* DLB_MFB_P10KM_P4_319SC_128M;

/* Symbol: _ZN5dolby16DapBufferAdapterD1Ev */
/* Demangled: dolby::DapBufferAdapter::~DapBufferAdapter() */
int _ZN5dolby16DapBufferAdapterD1Ev(void);

/* Symbol: dap_cpdp_bass_mbdrc_tuning_set */
/* Demangled: dap_cpdp_bass_mbdrc_tuning_set */
int dap_cpdp_bass_mbdrc_tuning_set(void);

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7CH1_CC */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7CH1_CC */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7CH1_CC;

/* Symbol: DAP_CPDP_PVT_modeler_vlm_process */
/* Demangled: DAP_CPDP_PVT_modeler_vlm_process */
int DAP_CPDP_PVT_modeler_vlm_process(void);

/* Symbol: _ZN5dolby16DapEffectContext23setSelectedTuningDeviceEPvj */
/* Demangled: dolby::DapEffectContext::setSelectedTuningDevice(void*, unsigned int) */
int _ZN5dolby16DapEffectContext23setSelectedTuningDeviceEPvj(void);

/* Symbol: DAP_CPDP_PVT_hp_height_reverb_reset */
/* Demangled: DAP_CPDP_PVT_hp_height_reverb_reset */
int DAP_CPDP_PVT_hp_height_reverb_reset(void);

/* Symbol: DAP_CPDP_PVT_dvlim_set_boost */
/* Demangled: DAP_CPDP_PVT_dvlim_set_boost */
int DAP_CPDP_PVT_dvlim_set_boost(void);

/* Symbol: dlb_VLsquaredmagCLIU_flex */
/* Demangled: dlb_VLsquaredmagCLIU_flex */
int dlb_VLsquaredmagCLIU_flex(void);

/* Symbol: dlb_fft_fwd_scl_45 */
/* Demangled: dlb_fft_fwd_scl_45 */
int dlb_fft_fwd_scl_45(void);

/* Symbol: dlb_dct4_premodulation */
/* Demangled: dlb_dct4_premodulation */
int dlb_dct4_premodulation(void);

/* Symbol: dap_cpdp_bass_enhancer_boost_set */
/* Demangled: dap_cpdp_bass_enhancer_boost_set */
int dap_cpdp_bass_enhancer_boost_set(void);

/* Symbol: dap_cpdp_mi2surround_compressor_steering_enable_set */
/* Demangled: dap_cpdp_mi2surround_compressor_steering_enable_set */
int dap_cpdp_mi2surround_compressor_steering_enable_set(void);

/* Symbol: DAP_CPDP_PVT_sbpp_query_memory */
/* Demangled: DAP_CPDP_PVT_sbpp_query_memory */
int DAP_CPDP_PVT_sbpp_query_memory(void);

/* Symbol: DLB_blk_LmixLLLL_strict */
/* Demangled: DLB_blk_LmixLLLL_strict */
int DLB_blk_LmixLLLL_strict(void);

/* Symbol: dlb_fft_fwd_scl_2 */
/* Demangled: dlb_fft_fwd_scl_2 */
int dlb_fft_fwd_scl_2(void);

/* Symbol: DAP_CPDP_PVT_ngcs_separate_run */
/* Demangled: DAP_CPDP_PVT_ngcs_separate_run */
int DAP_CPDP_PVT_ngcs_separate_run(void);

/* Symbol: DAP_CPDP_PVT_dvlim_set_hard_clip */
/* Demangled: DAP_CPDP_PVT_dvlim_set_hard_clip */
int DAP_CPDP_PVT_dvlim_set_hard_clip(void);

/* Symbol: dlb_BLmpy_scaleBLSU_inplace_flex */
/* Demangled: dlb_BLmpy_scaleBLSU_inplace_flex */
int dlb_BLmpy_scaleBLSU_inplace_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L24 */
/* Demangled: dlb_dct_twiddle_table16_1_L24 */
extern void* dlb_dct_twiddle_table16_1_L24;

/* Symbol: dlb_fft_fwd_scl_48 */
/* Demangled: dlb_fft_fwd_scl_48 */
int dlb_fft_fwd_scl_48(void);

/* Symbol: dlb_fft_fwd_scl_4 */
/* Demangled: dlb_fft_fwd_scl_4 */
int dlb_fft_fwd_scl_4(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int const*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE12do_constructEPvj(void);

/* Symbol: _ZTVN5dolby12DlbGenClass2E */
/* Demangled: vtable for dolby::DlbGenClass2 */
extern void* _ZTVN5dolby12DlbGenClass2E;

/* Symbol: dlb_vec_SshlSIU_inplace_flex */
/* Demangled: dlb_vec_SshlSIU_inplace_flex */
int dlb_vec_SshlSIU_inplace_flex(void);

/* Symbol: dlb_CLdivCLCLU_flex */
/* Demangled: dlb_CLdivCLCLU_flex */
int dlb_CLdivCLCLU_flex(void);

/* Symbol: DLB_r4_fft_256_s */
/* Demangled: DLB_r4_fft_256_s */
int DLB_r4_fft_256_s(void);

/* Symbol: DLB_r4_fft_32_s */
/* Demangled: DLB_r4_fft_32_s */
int DLB_r4_fft_32_s(void);

/* Symbol: _ZTVN5dolby14BufferProviderE */
/* Demangled: vtable for dolby::BufferProvider */
extern void* _ZTVN5dolby14BufferProviderE;

/* Symbol: dap_cpdp_pvt_sysgains_init */
/* Demangled: dap_cpdp_pvt_sysgains_init */
int dap_cpdp_pvt_sysgains_init(void);

/* Symbol: DLB_r4_inv_fft_2_s */
/* Demangled: DLB_r4_inv_fft_2_s */
int DLB_r4_inv_fft_2_s(void);

/* Symbol: dlb_fft_fwd_scl_6 */
/* Demangled: dlb_fft_fwd_scl_6 */
int dlb_fft_fwd_scl_6(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_16_vec_ana;

/* Symbol: DAP_CPDP_PVT_hist_add_element */
/* Demangled: DAP_CPDP_PVT_hist_add_element */
int DAP_CPDP_PVT_hist_add_element(void);

/* Symbol: DAP_CPDP_PVT_transposer_2nd_order */
/* Demangled: DAP_CPDP_PVT_transposer_2nd_order */
int DAP_CPDP_PVT_transposer_2nd_order(void);

/* Symbol: dlb_blk_LLshuffleLL_inplace_flex */
/* Demangled: dlb_blk_LLshuffleLL_inplace_flex */
int dlb_blk_LLshuffleLL_inplace_flex(void);

/* Symbol: dlb_blk_LsubLL_flex */
/* Demangled: dlb_blk_LsubLL_flex */
int dlb_blk_LsubLL_flex(void);

/* Symbol: DLB_r4_fft_4_s */
/* Demangled: DLB_r4_fft_4_s */
int DLB_r4_fft_4_s(void);

/* Symbol: DLB_r4_inv_fft_64_s */
/* Demangled: DLB_r4_inv_fft_64_s */
int DLB_r4_inv_fft_64_s(void);

/* Symbol: dlb_fft_fwd_scl_8 */
/* Demangled: dlb_fft_fwd_scl_8 */
int dlb_fft_fwd_scl_8(void);

/* Symbol: _ZN5dolby9DlbEffect24handle_EFFECT_CMD_ENABLEERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_ENABLE(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect24handle_EFFECT_CMD_ENABLEERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: DLB_fft_CLfwd_unscaledL */
/* Demangled: DLB_fft_CLfwd_unscaledL */
int DLB_fft_CLfwd_unscaledL(void);

/* Symbol: DAP_CPDP_PVT_lfra_init */
/* Demangled: DAP_CPDP_PVT_lfra_init */
int DAP_CPDP_PVT_lfra_init(void);

/* Symbol: DAP_CPDP_PVT_ngcs_steering_get_segment */
/* Demangled: DAP_CPDP_PVT_ngcs_steering_get_segment */
int DAP_CPDP_PVT_ngcs_steering_get_segment(void);

/* Symbol: DLB_blk_LclipL_strict */
/* Demangled: DLB_blk_LclipL_strict */
int DLB_blk_LclipL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L64_1 */
/* Demangled: dlb_dct_twiddle_table16_L64_1 */
extern void* dlb_dct_twiddle_table16_L64_1;

/* Symbol: DLB_qmf_synthesisL_query_mem */
/* Demangled: DLB_qmf_synthesisL_query_mem */
int DLB_qmf_synthesisL_query_mem(void);

/* Symbol: _ZTVN5dolby9EffectDapE */
/* Demangled: vtable for dolby::EffectDap */
extern void* _ZTVN5dolby9EffectDapE;

/* Symbol: _ZN5dolby19DlbCrossfadeProcess10accumulateEPfS1_S1_iff */
/* Demangled: dolby::DlbCrossfadeProcess::accumulate(float*, float*, float*, int, float, float) */
int _ZN5dolby19DlbCrossfadeProcess10accumulateEPfS1_S1_iff(void);

/* Symbol: dap_cpdp_pvt_bass_extraction_update_control */
/* Demangled: dap_cpdp_pvt_bass_extraction_update_control */
int dap_cpdp_pvt_bass_extraction_update_control(void);

/* Symbol: DAP_CPDP_PVT_mi_vec_mean_std */
/* Demangled: DAP_CPDP_PVT_mi_vec_mean_std */
int DAP_CPDP_PVT_mi_vec_mean_std(void);

/* Symbol: DAP_CPDP_PVT_de_powmin_get_new_pow_min_mi_mcra */
/* Demangled: DAP_CPDP_PVT_de_powmin_get_new_pow_min_mi_mcra */
int DAP_CPDP_PVT_de_powmin_get_new_pow_min_mi_mcra(void);

/* Symbol: _dlb_ldct2_unscaled_iplu */
/* Demangled: _dlb_ldct2_unscaled_iplu */
int _dlb_ldct2_unscaled_iplu(void);

/* Symbol: dlb_dct_twiddle_table16_L64_2 */
/* Demangled: dlb_dct_twiddle_table16_L64_2 */
extern void* dlb_dct_twiddle_table16_L64_2;

/* Symbol: dlb_fft_fwd_usc_480 */
/* Demangled: dlb_fft_fwd_usc_480 */
int dlb_fft_fwd_usc_480(void);

/* Symbol: dlb_fft_inv_scl_720 */
/* Demangled: dlb_fft_inv_scl_720 */
int dlb_fft_inv_scl_720(void);

/* Symbol: dap_cpdp_volume_leveler_enable_set */
/* Demangled: dap_cpdp_volume_leveler_enable_set */
int dap_cpdp_volume_leveler_enable_set(void);

/* Symbol: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_STEREO_TO_7D1DX */
/* Demangled: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_STEREO_TO_7D1DX */
extern void* DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_STEREO_TO_7D1DX;

/* Symbol: DAP_CPDP_PVT_mfcc_filter_hcqmf_tab */
/* Demangled: DAP_CPDP_PVT_mfcc_filter_hcqmf_tab */
extern void* DAP_CPDP_PVT_mfcc_filter_hcqmf_tab;

/* Symbol: dlb_BLmpy_scale_xBLSU_flex */
/* Demangled: dlb_BLmpy_scale_xBLSU_flex */
int dlb_BLmpy_scale_xBLSU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L24 */
/* Demangled: dlb_dct_twiddle_table16_L24 */
extern void* dlb_dct_twiddle_table16_L24;

/* Symbol: dap_cpdp_vis_custom_bands_get */
/* Demangled: dap_cpdp_vis_custom_bands_get */
int dap_cpdp_vis_custom_bands_get(void);

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7CH1 */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7CH1 */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7CH1;

/* Symbol: DAP_CPDP_PVT_de_pow_smooth_process */
/* Demangled: DAP_CPDP_PVT_de_pow_smooth_process */
int DAP_CPDP_PVT_de_pow_smooth_process(void);

/* Symbol: DAP_CPDP_PVT_mi_buffer_write_samples */
/* Demangled: DAP_CPDP_PVT_mi_buffer_write_samples */
int DAP_CPDP_PVT_mi_buffer_write_samples(void);

/* Symbol: DAP_CPDP_PVT_ngcs_upmixer_query_configure_results_memory */
/* Demangled: DAP_CPDP_PVT_ngcs_upmixer_query_configure_results_memory */
int DAP_CPDP_PVT_ngcs_upmixer_query_configure_results_memory(void);

/* Symbol: dlb_dct_twiddle_table16_L128_1 */
/* Demangled: dlb_dct_twiddle_table16_L128_1 */
extern void* dlb_dct_twiddle_table16_L128_1;

/* Symbol: dlb_dct_twiddle_table16_L180_1 */
/* Demangled: dlb_dct_twiddle_table16_L180_1 */
extern void* dlb_dct_twiddle_table16_L180_1;

/* Symbol: DLB_r4_fft_720 */
/* Demangled: DLB_r4_fft_720 */
int DLB_r4_fft_720(void);

/* Symbol: _ZN5dolby13EffectContext8getParamEiPjPv */
/* Demangled: dolby::EffectContext::getParam(int, unsigned int*, void*) */
int _ZN5dolby13EffectContext8getParamEiPjPv(void);

/* Symbol: DAP_CPDP_PVT_step_weight_frm32_inv_sum */
/* Demangled: DAP_CPDP_PVT_step_weight_frm32_inv_sum */
extern void* DAP_CPDP_PVT_step_weight_frm32_inv_sum;

/* Symbol: dlb_dct_twiddle_table16_L128_2 */
/* Demangled: dlb_dct_twiddle_table16_L128_2 */
extern void* dlb_dct_twiddle_table16_L128_2;

/* Symbol: dlb_dct_twiddle_table16_L180_2 */
/* Demangled: dlb_dct_twiddle_table16_L180_2 */
extern void* dlb_dct_twiddle_table16_L180_2;

/* Symbol: DLB_qmf_analysisL_get_filter_state_length */
/* Demangled: DLB_qmf_analysisL_get_filter_state_length */
int DLB_qmf_analysisL_get_filter_state_length(void);

/* Symbol: _ZN5dolby13EffectContext9setBypassEPvj */
/* Demangled: dolby::EffectContext::setBypass(void*, unsigned int) */
int _ZN5dolby13EffectContext9setBypassEPvj(void);

/* Symbol: DAP_CPDP_PVT_resi_calc_saliency_contrast */
/* Demangled: DAP_CPDP_PVT_resi_calc_saliency_contrast */
int DAP_CPDP_PVT_resi_calc_saliency_contrast(void);

/* Symbol: dlb_vec_LshlLIU_inplace_flex */
/* Demangled: dlb_vec_LshlLIU_inplace_flex */
int dlb_vec_LshlLIU_inplace_flex(void);

/* Symbol: DLB_r4_cplx_fwd_unscaled */
/* Demangled: DLB_r4_cplx_fwd_unscaled */
int DLB_r4_cplx_fwd_unscaled(void);

/* Symbol: dlb_CLmpy_shlCLSIU_inplace_flex */
/* Demangled: dlb_CLmpy_shlCLSIU_inplace_flex */
int dlb_CLmpy_shlCLSIU_inplace_flex(void);

/* Symbol: DAP_CPDP_PVT_de_compr_state_clear */
/* Demangled: DAP_CPDP_PVT_de_compr_state_clear */
int DAP_CPDP_PVT_de_compr_state_clear(void);

/* Symbol: dlb_BLmpy_scaleBLSU_flex */
/* Demangled: dlb_BLmpy_scaleBLSU_flex */
int dlb_BLmpy_scaleBLSU_flex(void);

/* Symbol: DLB_r4_fft_160_s */
/* Demangled: DLB_r4_fft_160_s */
int DLB_r4_fft_160_s(void);

/* Symbol: DAP_CPDP_PVT_agc_init */
/* Demangled: DAP_CPDP_PVT_agc_init */
int DAP_CPDP_PVT_agc_init(void);

/* Symbol: DAP_CPDP_PVT_mfcc_query_memory */
/* Demangled: DAP_CPDP_PVT_mfcc_query_memory */
int DAP_CPDP_PVT_mfcc_query_memory(void);

/* Symbol: dlb_unused_debug */
/* Demangled: dlb_unused_debug */
extern void* dlb_unused_debug;

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_syn_process_legacy_extra_latency */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_process_legacy_extra_latency */
int DAP_CPDP_PVT_mfb_rcp10km_syn_process_legacy_extra_latency(void);

/* Symbol: DAP_CPDP_PVT_dvlim_get_sample_rate */
/* Demangled: DAP_CPDP_PVT_dvlim_get_sample_rate */
int DAP_CPDP_PVT_dvlim_get_sample_rate(void);

/* Symbol: _ZN5dolby12DlbGenClass28unmangleEPKcPcjS2_i */
/* Demangled: dolby::DlbGenClass2::unmangle(char const*, char*, unsigned int, char const*, int) */
int _ZN5dolby12DlbGenClass28unmangleEPKcPcjS2_i(void);

/* Symbol: DAP_CPDP_PVT_mi_vec_check_valley */
/* Demangled: DAP_CPDP_PVT_mi_vec_check_valley */
int DAP_CPDP_PVT_mi_vec_check_valley(void);

/* Symbol: dlb_fft_fwd_usc_90 */
/* Demangled: dlb_fft_fwd_usc_90 */
int dlb_fft_fwd_usc_90(void);

/* Symbol: dlb_fft_fwd_scl_512 */
/* Demangled: dlb_fft_fwd_scl_512 */
int dlb_fft_fwd_scl_512(void);

/* Symbol: dlb_fft_fwd_usc_256 */
/* Demangled: dlb_fft_fwd_usc_256 */
int dlb_fft_fwd_usc_256(void);

/* Symbol: DAP_CPDP_PVT_DLBcand_CLCLmixCLCLSSSSU_inplace */
/* Demangled: DAP_CPDP_PVT_DLBcand_CLCLmixCLCLSSSSU_inplace */
int DAP_CPDP_PVT_DLBcand_CLCLmixCLCLSSSSU_inplace(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_virt_chain_process */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_virt_chain_process */
int DAP_CPDP_PVT_dap_cpdp_virt_chain_process(void);

/* Symbol: DAP_CPDP_PVT_ngcs_process */
/* Demangled: DAP_CPDP_PVT_ngcs_process */
int DAP_CPDP_PVT_ngcs_process(void);

/* Symbol: DAP_CPDP_PVT_spec_flux_reset */
/* Demangled: DAP_CPDP_PVT_spec_flux_reset */
int DAP_CPDP_PVT_spec_flux_reset(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L1024 */
/* Demangled: dlb_dct_twiddle_table16_rev_L1024 */
extern void* dlb_dct_twiddle_table16_rev_L1024;

/* Symbol: DAP_CPDP_PVT_mi_pre_query_scratch */
/* Demangled: DAP_CPDP_PVT_mi_pre_query_scratch */
int DAP_CPDP_PVT_mi_pre_query_scratch(void);

/* Symbol: dlb_dct_twiddle_table16_L4_cos */
/* Demangled: dlb_dct_twiddle_table16_L4_cos */
extern void* dlb_dct_twiddle_table16_L4_cos;

/* Symbol: DAP_CPDP_PVT_asa_noise_calc_attenuation_factor */
/* Demangled: DAP_CPDP_PVT_asa_noise_calc_attenuation_factor */
int DAP_CPDP_PVT_asa_noise_calc_attenuation_factor(void);

/* Symbol: DAP_CPDP_PVT_delay_line_clvec_initialize */
/* Demangled: DAP_CPDP_PVT_delay_line_clvec_initialize */
int DAP_CPDP_PVT_delay_line_clvec_initialize(void);

/* Symbol: DAP_CPDP_PVT_A_LTRT3D_STATS_ALPHA_SR48KHZ_BR256 */
/* Demangled: DAP_CPDP_PVT_A_LTRT3D_STATS_ALPHA_SR48KHZ_BR256 */
extern void* DAP_CPDP_PVT_A_LTRT3D_STATS_ALPHA_SR48KHZ_BR256;

/* Symbol: dap_cpdp_calibration_boost_set */
/* Demangled: dap_cpdp_calibration_boost_set */
int dap_cpdp_calibration_boost_set(void);

/* Symbol: dap_cpdp_pvt_bass_extraction_param_init */
/* Demangled: dap_cpdp_pvt_bass_extraction_param_init */
int dap_cpdp_pvt_bass_extraction_param_init(void);

/* Symbol: A_NGCS_UPMIX_PLAN_5CH1_TO_7CH1 */
/* Demangled: A_NGCS_UPMIX_PLAN_5CH1_TO_7CH1 */
extern void* A_NGCS_UPMIX_PLAN_5CH1_TO_7CH1;

/* Symbol: DAP_CPDP_PVT_mi_dap_process */
/* Demangled: DAP_CPDP_PVT_mi_dap_process */
int DAP_CPDP_PVT_mi_dap_process(void);

/* Symbol: dlb_cos_48_full */
/* Demangled: dlb_cos_48_full */
extern void* dlb_cos_48_full;

/* Symbol: _ZN5dolby19DapCrossfadeProcessD1Ev */
/* Demangled: dolby::DapCrossfadeProcess::~DapCrossfadeProcess() */
int _ZN5dolby19DapCrossfadeProcessD1Ev(void);

/* Symbol: DAP_CPDP_PVT_mi_internal_set_legacy_enable */
/* Demangled: DAP_CPDP_PVT_mi_internal_set_legacy_enable */
int DAP_CPDP_PVT_mi_internal_set_legacy_enable(void);

/* Symbol: dap_cpdp_regulator_overdrive_set */
/* Demangled: dap_cpdp_regulator_overdrive_set */
int dap_cpdp_regulator_overdrive_set(void);

/* Symbol: DAP_CPDP_PVT_hist_reset */
/* Demangled: DAP_CPDP_PVT_hist_reset */
int DAP_CPDP_PVT_hist_reset(void);

/* Symbol: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_7D1_TO_5D1D2 */
/* Demangled: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_7D1_TO_5D1D2 */
extern void* DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_7D1_TO_5D1D2;

/* Symbol: DLB_r4_inv_fft_640 */
/* Demangled: DLB_r4_inv_fft_640 */
int DLB_r4_inv_fft_640(void);

/* Symbol: dlb_fft_fwd_usc_96 */
/* Demangled: dlb_fft_fwd_usc_96 */
int dlb_fft_fwd_usc_96(void);

/* Symbol: DLB_r4_inv_fft_90 */
/* Demangled: DLB_r4_inv_fft_90 */
int DLB_r4_inv_fft_90(void);

/* Symbol: DLB_blk_LsaddLL_strict */
/* Demangled: DLB_blk_LsaddLL_strict */
int DLB_blk_LsaddLL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L512 */
/* Demangled: dlb_dct_twiddle_table16_L512 */
extern void* dlb_dct_twiddle_table16_L512;

/* Symbol: dlb_fft_inv_usc_120 */
/* Demangled: dlb_fft_inv_usc_120 */
int dlb_fft_inv_usc_120(void);

/* Symbol: _ZN5dolby9EffectDap4initEv */
/* Demangled: dolby::EffectDap::init() */
int _ZN5dolby9EffectDap4initEv(void);

/* Symbol: DAP_CPDP_PVT_evaluation_query_memory */
/* Demangled: DAP_CPDP_PVT_evaluation_query_memory */
int DAP_CPDP_PVT_evaluation_query_memory(void);

/* Symbol: DAP_CPDP_PVT_feature_query_clip_fea_mem */
/* Demangled: DAP_CPDP_PVT_feature_query_clip_fea_mem */
int DAP_CPDP_PVT_feature_query_clip_fea_mem(void);

/* Symbol: DLB_r4_inv_fft_32_s */
/* Demangled: DLB_r4_inv_fft_32_s */
int DLB_r4_inv_fft_32_s(void);

/* Symbol: DAP_CPDP_PVT_SURROUND_COMPRESSOR_GAIN_MAX_DB */
/* Demangled: DAP_CPDP_PVT_SURROUND_COMPRESSOR_GAIN_MAX_DB */
extern void* DAP_CPDP_PVT_SURROUND_COMPRESSOR_GAIN_MAX_DB;

/* Symbol: _ZN5dolby13AudioHalUtilsC2Ev */
/* Demangled: dolby::AudioHalUtils::AudioHalUtils() */
int _ZN5dolby13AudioHalUtilsC2Ev(void);

/* Symbol: DAP_CPDP_PVT_agc_reset */
/* Demangled: DAP_CPDP_PVT_agc_reset */
int DAP_CPDP_PVT_agc_reset(void);

/* Symbol: DAP_CPDP_PVT_nyquist_filters_844_init */
/* Demangled: DAP_CPDP_PVT_nyquist_filters_844_init */
int DAP_CPDP_PVT_nyquist_filters_844_init(void);

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_5D1D2 */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_5D1D2 */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_5D1D2;

/* Symbol: DLB_blk_Lattack_decay_iir1L_setup */
/* Demangled: DLB_blk_Lattack_decay_iir1L_setup */
int DLB_blk_Lattack_decay_iir1L_setup(void);

/* Symbol: DLB_vec_SshlSIU_inplace_strict */
/* Demangled: DLB_vec_SshlSIU_inplace_strict */
int DLB_vec_SshlSIU_inplace_strict(void);

/* Symbol: dlb_CLCLmix4CL8SU_flex */
/* Demangled: dlb_CLCLmix4CL8SU_flex */
int dlb_CLCLmix4CL8SU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L32_1 */
/* Demangled: dlb_dct_twiddle_table16_L32_1 */
extern void* dlb_dct_twiddle_table16_L32_1;

/* Symbol: dlb_dct_twiddle_table16_L360_1 */
/* Demangled: dlb_dct_twiddle_table16_L360_1 */
extern void* dlb_dct_twiddle_table16_L360_1;

/* Symbol: dlb_fft_inv_scl_12 */
/* Demangled: dlb_fft_inv_scl_12 */
int dlb_fft_inv_scl_12(void);

/* Symbol: dap_cpdp_virtual_bass_src_freqs_set */
/* Demangled: dap_cpdp_virtual_bass_src_freqs_set */
int dap_cpdp_virtual_bass_src_freqs_set(void);

/* Symbol: dlb_dct_twiddle_table16_L32_2 */
/* Demangled: dlb_dct_twiddle_table16_L32_2 */
extern void* dlb_dct_twiddle_table16_L32_2;

/* Symbol: dlb_dct_twiddle_table16_L360_2 */
/* Demangled: dlb_dct_twiddle_table16_L360_2 */
extern void* dlb_dct_twiddle_table16_L360_2;

/* Symbol: DLB_Lmfb_p10km_synthesisCL_init */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_init */
int DLB_Lmfb_p10km_synthesisCL_init(void);

/* Symbol: dlb_qmf_analysisL_open */
/* Demangled: dlb_qmf_analysisL_open */
int dlb_qmf_analysisL_open(void);

/* Symbol: DAP_CPDP_PVT_hist_init */
/* Demangled: DAP_CPDP_PVT_hist_init */
int DAP_CPDP_PVT_hist_init(void);

/* Symbol: dlb_dct_twiddle_table16_1_L30 */
/* Demangled: dlb_dct_twiddle_table16_1_L30 */
extern void* dlb_dct_twiddle_table16_1_L30;

/* Symbol: DLB_r4_inv_fft_96 */
/* Demangled: DLB_r4_inv_fft_96 */
int DLB_r4_inv_fft_96(void);

/* Symbol: dlb_fft_inv_usc_2 */
/* Demangled: dlb_fft_inv_usc_2 */
int dlb_fft_inv_usc_2(void);

/* Symbol: DLB_qmf_synthesisS_init */
/* Demangled: DLB_qmf_synthesisS_init */
int DLB_qmf_synthesisS_init(void);

/* Symbol: dlb_dct_twiddle_table16_L16_cos */
/* Demangled: dlb_dct_twiddle_table16_L16_cos */
extern void* dlb_dct_twiddle_table16_L16_cos;

/* Symbol: DLB_time_add */
/* Demangled: DLB_time_add */
int DLB_time_add(void);

/* Symbol: DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_get_interp_gains */
/* Demangled: DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_get_interp_gains */
int DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_get_interp_gains(void);

/* Symbol: DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_query_memory */
/* Demangled: DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_query_memory */
int DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_query_memory(void);

/* Symbol: dlb_fft_inv_scl_15 */
/* Demangled: dlb_fft_inv_scl_15 */
int dlb_fft_inv_scl_15(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_16_vec_syn;

/* Symbol: _ZN5dolby18EndpointParamCache4initEv */
/* Demangled: dolby::EndpointParamCache::init() */
int _ZN5dolby18EndpointParamCache4initEv(void);

/* Symbol: _ZN5dolby9EffectDap9setConfigERK15buffer_config_sS3_ */
/* Demangled: dolby::EffectDap::setConfig(buffer_config_s const&, buffer_config_s const&) */
int _ZN5dolby9EffectDap9setConfigERK15buffer_config_sS3_(void);

/* Symbol: _ZN5dolby16DapEffectContext11setPostgainEPvj */
/* Demangled: dolby::DapEffectContext::setPostgain(void*, unsigned int) */
int _ZN5dolby16DapEffectContext11setPostgainEPvj(void);

/* Symbol: _ZN5dolby16DapEffectContext21setContentProcEnabledEb */
/* Demangled: dolby::DapEffectContext::setContentProcEnabled(bool) */
int _ZN5dolby16DapEffectContext21setContentProcEnabledEb(void);

/* Symbol: dap_cpdp_pvt_hearing_protection_param_init */
/* Demangled: dap_cpdp_pvt_hearing_protection_param_init */
int dap_cpdp_pvt_hearing_protection_param_init(void);

/* Symbol: DAP_CPDP_PVT_spec_calc_reset */
/* Demangled: DAP_CPDP_PVT_spec_calc_reset */
int DAP_CPDP_PVT_spec_calc_reset(void);

/* Symbol: dlb_dct_twiddle_table16_1_L32 */
/* Demangled: dlb_dct_twiddle_table16_1_L32 */
extern void* dlb_dct_twiddle_table16_1_L32;

/* Symbol: dlb_fft_inv_scl_16 */
/* Demangled: dlb_fft_inv_scl_16 */
int dlb_fft_inv_scl_16(void);

/* Symbol: dlb_fft_inv_usc_4 */
/* Demangled: dlb_fft_inv_usc_4 */
int dlb_fft_inv_usc_4(void);

/* Symbol: dlb_dct_twiddle_table16_L768_cos */
/* Demangled: dlb_dct_twiddle_table16_L768_cos */
extern void* dlb_dct_twiddle_table16_L768_cos;

/* Symbol: _ZN5dolby16DapEffectContext18DlbDapEffCallbacks16onDapParamUpdateERKN7android8hardware8hidl_vecIhEE */
/* Demangled: dolby::DapEffectContext::DlbDapEffCallbacks::onDapParamUpdate(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN5dolby16DapEffectContext18DlbDapEffCallbacks16onDapParamUpdateERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_ana_init */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_init */
int DAP_CPDP_PVT_mfb_rcp10km_ana_init(void);

/* Symbol: DAP_CPDP_PVT_spec_flux_close */
/* Demangled: DAP_CPDP_PVT_spec_flux_close */
int DAP_CPDP_PVT_spec_flux_close(void);

/* Symbol: dlb_BLsaddBLL_flex */
/* Demangled: dlb_BLsaddBLL_flex */
int dlb_BLsaddBLL_flex(void);

/* Symbol: dlb_fft_fwd_usc_144 */
/* Demangled: dlb_fft_fwd_usc_144 */
int dlb_fft_fwd_usc_144(void);

/* Symbol: dlb_fft_inv_usc_128 */
/* Demangled: dlb_fft_inv_usc_128 */
int dlb_fft_inv_usc_128(void);

/* Symbol: _ZTVN5dolby16DapBufferAdapterE */
/* Demangled: vtable for dolby::DapBufferAdapter */
extern void* _ZTVN5dolby16DapBufferAdapterE;

/* Symbol: DAP_CPDP_PVT_asa_event_query_memory */
/* Demangled: DAP_CPDP_PVT_asa_event_query_memory */
int DAP_CPDP_PVT_asa_event_query_memory(void);

/* Symbol: DAP_CPDP_PVT_visualizer_excitations_get */
/* Demangled: DAP_CPDP_PVT_visualizer_excitations_get */
int DAP_CPDP_PVT_visualizer_excitations_get(void);

/* Symbol: DAP_CPDP_PVT_classifier_set_binaural_enable */
/* Demangled: DAP_CPDP_PVT_classifier_set_binaural_enable */
int DAP_CPDP_PVT_classifier_set_binaural_enable(void);

/* Symbol: dlb_fft_inv_usc_6 */
/* Demangled: dlb_fft_inv_usc_6 */
int dlb_fft_inv_usc_6(void);

/* Symbol: _ZN5dolby16DapEffectContextD0Ev */
/* Demangled: dolby::DapEffectContext::~DapEffectContext() */
int _ZN5dolby16DapEffectContextD0Ev(void);

/* Symbol: DAP_CPDP_PVT_calculate_intermediate_feed_angles */
/* Demangled: DAP_CPDP_PVT_calculate_intermediate_feed_angles */
int DAP_CPDP_PVT_calculate_intermediate_feed_angles(void);

/* Symbol: dlb_CLmpyCLVSU_flex */
/* Demangled: dlb_CLmpyCLVSU_flex */
int dlb_CLmpyCLVSU_flex(void);

/* Symbol: DAP_CPDP_PVT_A_DUCK_THRESHOLDS_48K */
/* Demangled: DAP_CPDP_PVT_A_DUCK_THRESHOLDS_48K */
extern void* DAP_CPDP_PVT_A_DUCK_THRESHOLDS_48K;

/* Symbol: DAP_CPDP_PVT_down_mix_query_memory */
/* Demangled: DAP_CPDP_PVT_down_mix_query_memory */
int DAP_CPDP_PVT_down_mix_query_memory(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_steering_gains_init_scratch */
/* Demangled: DAP_CPDP_PVT_ltrt3d_steering_gains_init_scratch */
int DAP_CPDP_PVT_ltrt3d_steering_gains_init_scratch(void);

/* Symbol: DAP_CPDP_PVT_transposer_3rd_order */
/* Demangled: DAP_CPDP_PVT_transposer_3rd_order */
int DAP_CPDP_PVT_transposer_3rd_order(void);

/* Symbol: DLB_hybrid_analysisCL_get_scale */
/* Demangled: DLB_hybrid_analysisCL_get_scale */
int DLB_hybrid_analysisCL_get_scale(void);

/* Symbol: DAP_CPDP_PVT_resample_process */
/* Demangled: DAP_CPDP_PVT_resample_process */
int DAP_CPDP_PVT_resample_process(void);

/* Symbol: dlb_dct_twiddle_table16_1_L36 */
/* Demangled: dlb_dct_twiddle_table16_1_L36 */
extern void* dlb_dct_twiddle_table16_1_L36;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L180 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L180 */
extern void* dlb_dct_twiddle_table16_rev_1_L180;

/* Symbol: dlb_fft_inv_usc_8 */
/* Demangled: dlb_fft_inv_usc_8 */
int dlb_fft_inv_usc_8(void);

/* Symbol: DLB_Lqmf_synthesisCL_Head1Bit */
/* Demangled: DLB_Lqmf_synthesisCL_Head1Bit */
int DLB_Lqmf_synthesisCL_Head1Bit(void);

/* Symbol: dlb_qmf_synthesisS_open */
/* Demangled: dlb_qmf_synthesisS_open */
int dlb_qmf_synthesisS_open(void);

/* Symbol: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_5D1_TO_5D1D2 */
/* Demangled: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_5D1_TO_5D1D2 */
extern void* DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_5D1_TO_5D1D2;

/* Symbol: DAP_CPDP_PVT_mi_vec_dot_production */
/* Demangled: DAP_CPDP_PVT_mi_vec_dot_production */
int DAP_CPDP_PVT_mi_vec_dot_production(void);

/* Symbol: dlb_dct_twiddle_table16_L30 */
/* Demangled: dlb_dct_twiddle_table16_L30 */
extern void* dlb_dct_twiddle_table16_L30;

/* Symbol: dlb_fft_inv_scl_960 */
/* Demangled: dlb_fft_inv_scl_960 */
int dlb_fft_inv_scl_960(void);

/* Symbol: DAP_CPDP_PVT_visualizer_excitations_update */
/* Demangled: DAP_CPDP_PVT_visualizer_excitations_update */
int DAP_CPDP_PVT_visualizer_excitations_update(void);

/* Symbol: DAP_CPDP_PVT_dlb_ex_delay_run */
/* Demangled: DAP_CPDP_PVT_dlb_ex_delay_run */
int DAP_CPDP_PVT_dlb_ex_delay_run(void);

/* Symbol: dlb_dct_twiddle_table16_1_L640 */
/* Demangled: dlb_dct_twiddle_table16_1_L640 */
extern void* dlb_dct_twiddle_table16_1_L640;

/* Symbol: A_NGCS_UPMIX_PLAN_5CH1_TO_5CH1_CC */
/* Demangled: A_NGCS_UPMIX_PLAN_5CH1_TO_5CH1_CC */
extern void* A_NGCS_UPMIX_PLAN_5CH1_TO_5CH1_CC;

/* Symbol: dlb_dct_twiddle_table16_L32 */
/* Demangled: dlb_dct_twiddle_table16_L32 */
extern void* dlb_dct_twiddle_table16_L32;

/* Symbol: DLB_r4_fft_960 */
/* Demangled: DLB_r4_fft_960 */
int DLB_r4_fft_960(void);

/* Symbol: DLB_r4_inv_fft_180_s */
/* Demangled: DLB_r4_inv_fft_180_s */
int DLB_r4_inv_fft_180_s(void);

/* Symbol: DLB_r4_inv_fft_128_s */
/* Demangled: DLB_r4_inv_fft_128_s */
int DLB_r4_inv_fft_128_s(void);

/* Symbol: dlb_fft_inv_usc_240 */
/* Demangled: dlb_fft_inv_usc_240 */
int dlb_fft_inv_usc_240(void);

/* Symbol: dlb_fft_fwd_scl_1024 */
/* Demangled: dlb_fft_fwd_scl_1024 */
int dlb_fft_fwd_scl_1024(void);

/* Symbol: DAP_CPDP_PVT_arle_process */
/* Demangled: DAP_CPDP_PVT_arle_process */
int DAP_CPDP_PVT_arle_process(void);

/* Symbol: DAP_CPDP_PVT_mi_vec_check_peak */
/* Demangled: DAP_CPDP_PVT_mi_vec_check_peak */
int DAP_CPDP_PVT_mi_vec_check_peak(void);

/* Symbol: DAP_CPDP_PVT_SURROUND_COMPRESSOR_T_MAX_DB */
/* Demangled: DAP_CPDP_PVT_SURROUND_COMPRESSOR_T_MAX_DB */
extern void* DAP_CPDP_PVT_SURROUND_COMPRESSOR_T_MAX_DB;

/* Symbol: dap_cpdp_process */
/* Demangled: dap_cpdp_process */
int dap_cpdp_process(void);

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_syn_query_mem */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_query_mem */
int DAP_CPDP_PVT_mfb_rcp10km_syn_query_mem(void);

/* Symbol: DAP_CPDP_PVT_ap_dvlim_coefs_64 */
/* Demangled: DAP_CPDP_PVT_ap_dvlim_coefs_64 */
extern void* DAP_CPDP_PVT_ap_dvlim_coefs_64;

/* Symbol: _ZN5dolby13EffectContext7disableEv */
/* Demangled: dolby::EffectContext::disable() */
int _ZN5dolby13EffectContext7disableEv(void);

/* Symbol: DAP_CPDP_PVT_dap_interp_int_test */
/* Demangled: DAP_CPDP_PVT_dap_interp_int_test */
int DAP_CPDP_PVT_dap_interp_int_test(void);

/* Symbol: DAP_CPDP_PVT_sben_clip_process */
/* Demangled: DAP_CPDP_PVT_sben_clip_process */
int DAP_CPDP_PVT_sben_clip_process(void);

/* Symbol: DLB_CLmpy_shlCLSIU_strict */
/* Demangled: DLB_CLmpy_shlCLSIU_strict */
int DLB_CLmpy_shlCLSIU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L36 */
/* Demangled: dlb_dct_twiddle_table16_L36 */
extern void* dlb_dct_twiddle_table16_L36;

/* Symbol: DAP_CPDP_PVT_sben_modulation_init */
/* Demangled: DAP_CPDP_PVT_sben_modulation_init */
int DAP_CPDP_PVT_sben_modulation_init(void);

/* Symbol: dlb_dct4_postmodulation_shl */
/* Demangled: dlb_dct4_postmodulation_shl */
int dlb_dct4_postmodulation_shl(void);

/* Symbol: _ZN5dolby11Dap2Process10processQmfEP12clvec_bufferPNS_14BufferProviderEi */
/* Demangled: dolby::Dap2Process::processQmf(clvec_buffer*, dolby::BufferProvider*, int) */
int _ZN5dolby11Dap2Process10processQmfEP12clvec_bufferPNS_14BufferProviderEi(void);

/* Symbol: dap_cpdp_virtual_bass_compressor_tuning_set */
/* Demangled: dap_cpdp_virtual_bass_compressor_tuning_set */
int dap_cpdp_virtual_bass_compressor_tuning_set(void);

/* Symbol: DAP_CPDP_PVT_dvlim_get_boost */
/* Demangled: DAP_CPDP_PVT_dvlim_get_boost */
int DAP_CPDP_PVT_dvlim_get_boost(void);

/* Symbol: dlb_vec_IeqLLU_flex */
/* Demangled: dlb_vec_IeqLLU_flex */
int dlb_vec_IeqLLU_flex(void);

/* Symbol: DLB_r4_inv_fft_768 */
/* Demangled: DLB_r4_inv_fft_768 */
int DLB_r4_inv_fft_768(void);

/* Symbol: _ZTVN5dolby11Dap2ProcessE */
/* Demangled: vtable for dolby::Dap2Process */
extern void* _ZTVN5dolby11Dap2ProcessE;

/* Symbol: DAP_CPDP_PVT_arle_clear_state */
/* Demangled: DAP_CPDP_PVT_arle_clear_state */
int DAP_CPDP_PVT_arle_clear_state(void);

/* Symbol: DAP_CPDP_PVT_delay_line_clvec_copy */
/* Demangled: DAP_CPDP_PVT_delay_line_clvec_copy */
int DAP_CPDP_PVT_delay_line_clvec_copy(void);

/* Symbol: DAP_CPDP_PVT_sben_rap_query_scratch */
/* Demangled: DAP_CPDP_PVT_sben_rap_query_scratch */
int DAP_CPDP_PVT_sben_rap_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_spec_calc_close */
/* Demangled: DAP_CPDP_PVT_spec_calc_close */
int DAP_CPDP_PVT_spec_calc_close(void);

/* Symbol: DLB_r4_cplx_inv_unscaled */
/* Demangled: DLB_r4_cplx_inv_unscaled */
int DLB_r4_cplx_inv_unscaled(void);

/* Symbol: _ZN5dolby16DapBufferAdapterD0Ev */
/* Demangled: dolby::DapBufferAdapter::~DapBufferAdapter() */
int _ZN5dolby16DapBufferAdapterD0Ev(void);

/* Symbol: DAP_CPDP_PVT_lfra_query_clip_mem */
/* Demangled: DAP_CPDP_PVT_lfra_query_clip_mem */
int DAP_CPDP_PVT_lfra_query_clip_mem(void);

/* Symbol: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_COMP_RELEASE_ALPHA_TAB */
/* Demangled: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_COMP_RELEASE_ALPHA_TAB */
extern void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_COMP_RELEASE_ALPHA_TAB;

/* Symbol: dlb_cos_8_full_scl */
/* Demangled: dlb_cos_8_full_scl */
extern void* dlb_cos_8_full_scl;

/* Symbol: _ZN5dolby13EffectContext7releaseEv */
/* Demangled: dolby::EffectContext::release() */
int _ZN5dolby13EffectContext7releaseEv(void);

/* Symbol: _ZN5dolby11Dap2ProcessD2Ev */
/* Demangled: dolby::Dap2Process::~Dap2Process() */
int _ZN5dolby11Dap2ProcessD2Ev(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_cqmf_init */
/* Demangled: DAP_CPDP_PVT_ltrt3d_cqmf_init */
int DAP_CPDP_PVT_ltrt3d_cqmf_init(void);

/* Symbol: dlb_CLmpyCLSU_flex */
/* Demangled: dlb_CLmpyCLSU_flex */
int dlb_CLmpyCLSU_flex(void);

/* Symbol: DAP_CPDP_PVT_icsc_frame_process */
/* Demangled: DAP_CPDP_PVT_icsc_frame_process */
int DAP_CPDP_PVT_icsc_frame_process(void);

/* Symbol: DAP_CPDP_PVT_dap_pvt_audio_optimizer_update_control */
/* Demangled: DAP_CPDP_PVT_dap_pvt_audio_optimizer_update_control */
int DAP_CPDP_PVT_dap_pvt_audio_optimizer_update_control(void);

/* Symbol: DAP_CPDP_PVT_dvlim_set_sample_rate */
/* Demangled: DAP_CPDP_PVT_dvlim_set_sample_rate */
int DAP_CPDP_PVT_dvlim_set_sample_rate(void);

/* Symbol: DAP_CPDP_PVT_dlb_milib_set_legacy_enable */
/* Demangled: DAP_CPDP_PVT_dlb_milib_set_legacy_enable */
int DAP_CPDP_PVT_dlb_milib_set_legacy_enable(void);

/* Symbol: dlb_fft_inv_usc_60 */
/* Demangled: dlb_fft_inv_usc_60 */
int dlb_fft_inv_usc_60(void);

/* Symbol: dlb_blk_LmixLLL_flex */
/* Demangled: dlb_blk_LmixLLL_flex */
int dlb_blk_LmixLLL_flex(void);

/* Symbol: DLB_r4_inv_rfft_half_n */
/* Demangled: DLB_r4_inv_rfft_half_n */
int DLB_r4_inv_rfft_half_n(void);

/* Symbol: _ZN5dolby10IEffectDlb16EffectDlbFactoryEv */
/* Demangled: dolby::IEffectDlb::EffectDlbFactory() */
int _ZN5dolby10IEffectDlb16EffectDlbFactoryEv(void);

/* Symbol: DAP_CPDP_PVT_dvlim_get_peak */
/* Demangled: DAP_CPDP_PVT_dvlim_get_peak */
int DAP_CPDP_PVT_dvlim_get_peak(void);

/* Symbol: DLB_vec_IeqLLU_strict */
/* Demangled: DLB_vec_IeqLLU_strict */
int DLB_vec_IeqLLU_strict(void);

/* Symbol: DAP_CPDP_PVT_resample_close */
/* Demangled: DAP_CPDP_PVT_resample_close */
int DAP_CPDP_PVT_resample_close(void);

/* Symbol: DAP_CPDP_PVT_dvlim_init */
/* Demangled: DAP_CPDP_PVT_dvlim_init */
int DAP_CPDP_PVT_dvlim_init(void);

/* Symbol: DAP_CPDP_PVT_icsc_clip_process */
/* Demangled: DAP_CPDP_PVT_icsc_clip_process */
int DAP_CPDP_PVT_icsc_clip_process(void);

/* Symbol: DAP_CPDP_PVT_gain_process */
/* Demangled: DAP_CPDP_PVT_gain_process */
int DAP_CPDP_PVT_gain_process(void);

/* Symbol: dlb_fft_inv_usc_64 */
/* Demangled: dlb_fft_inv_usc_64 */
int dlb_fft_inv_usc_64(void);

/* Symbol: _ZN5dolby13AudioHalUtilsD2Ev */
/* Demangled: dolby::AudioHalUtils::~AudioHalUtils() */
int _ZN5dolby13AudioHalUtilsD2Ev(void);

/* Symbol: dlb_fft_inv_usc_360 */
/* Demangled: dlb_fft_inv_usc_360 */
int dlb_fft_inv_usc_360(void);

/* Symbol: _ZN5dolby13EffectContext7offloadEbi */
/* Demangled: dolby::EffectContext::offload(bool, int) */
int _ZN5dolby13EffectContext7offloadEbi(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_release_time */
/* Demangled: DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_release_time */
int DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_release_time(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_apply_gains */
/* Demangled: DAP_CPDP_PVT_ltrt3d_apply_gains */
int DAP_CPDP_PVT_ltrt3d_apply_gains(void);

/* Symbol: DAP_CPDP_PVT_sben_query_scratch */
/* Demangled: DAP_CPDP_PVT_sben_query_scratch */
int DAP_CPDP_PVT_sben_query_scratch(void);

/* Symbol: dlb_dct_twiddle_table16_L192_cos */
/* Demangled: dlb_dct_twiddle_table16_L192_cos */
extern void* dlb_dct_twiddle_table16_L192_cos;

/* Symbol: DLB_r4_inv_fft_360_s */
/* Demangled: DLB_r4_inv_fft_360_s */
int DLB_r4_inv_fft_360_s(void);

/* Symbol: DAP_CPDP_PVT_zcr_query_memory */
/* Demangled: DAP_CPDP_PVT_zcr_query_memory */
int DAP_CPDP_PVT_zcr_query_memory(void);

/* Symbol: DAP_CPDP_PVT_legq_get_linear_gain */
/* Demangled: DAP_CPDP_PVT_legq_get_linear_gain */
int DAP_CPDP_PVT_legq_get_linear_gain(void);

/* Symbol: DLB_blk_Liir2ssefL_set_coef */
/* Demangled: DLB_blk_Liir2ssefL_set_coef */
int DLB_blk_Liir2ssefL_set_coef(void);

/* Symbol: dlb_fft_fwd_scl_60 */
/* Demangled: dlb_fft_fwd_scl_60 */
int dlb_fft_fwd_scl_60(void);

/* Symbol: dlb_fft_inv_scl_20 */
/* Demangled: dlb_fft_inv_scl_20 */
int dlb_fft_inv_scl_20(void);

/* Symbol: dlb_dct_twiddle_table16_L640_cos */
/* Demangled: dlb_dct_twiddle_table16_L640_cos */
extern void* dlb_dct_twiddle_table16_L640_cos;

/* Symbol: _ZN5dolby13EffectContext10getVersionEPiS1_ */
/* Demangled: dolby::EffectContext::getVersion(int*, int*) */
int _ZN5dolby13EffectContext10getVersionEPiS1_(void);

/* Symbol: DAP_CPDP_PVT_SURROUND_COMPRESSOR_T_MIN_DB */
/* Demangled: DAP_CPDP_PVT_SURROUND_COMPRESSOR_T_MIN_DB */
extern void* DAP_CPDP_PVT_SURROUND_COMPRESSOR_T_MIN_DB;

/* Symbol: DAP_CPDP_PVT_virtual_bass_coefs_get_post_qmf0_phase_adjust */
/* Demangled: DAP_CPDP_PVT_virtual_bass_coefs_get_post_qmf0_phase_adjust */
int DAP_CPDP_PVT_virtual_bass_coefs_get_post_qmf0_phase_adjust(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L90 */
/* Demangled: dlb_dct_twiddle_table16_rev_L90 */
extern void* dlb_dct_twiddle_table16_rev_L90;

/* Symbol: DLB_time_div */
/* Demangled: DLB_time_div */
int DLB_time_div(void);

/* Symbol: DAP_CPDP_PVT_chroma_query_scratch */
/* Demangled: DAP_CPDP_PVT_chroma_query_scratch */
int DAP_CPDP_PVT_chroma_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MAX_TAB_48K */
/* Demangled: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MAX_TAB_48K */
extern void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MAX_TAB_48K;

/* Symbol: DAP_CPDP_PVT_ltrt3d_cqmf_reset */
/* Demangled: DAP_CPDP_PVT_ltrt3d_cqmf_reset */
int DAP_CPDP_PVT_ltrt3d_cqmf_reset(void);

/* Symbol: DAP_CPDP_PVT_de_compr_process_legacy */
/* Demangled: DAP_CPDP_PVT_de_compr_process_legacy */
int DAP_CPDP_PVT_de_compr_process_legacy(void);

/* Symbol: dlb_dct_twiddle_table16_1_L768 */
/* Demangled: dlb_dct_twiddle_table16_1_L768 */
extern void* dlb_dct_twiddle_table16_1_L768;

/* Symbol: dap_cpdp_graphic_equalizer_bands_set */
/* Demangled: dap_cpdp_graphic_equalizer_bands_set */
int dap_cpdp_graphic_equalizer_bands_set(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_clear */
/* Demangled: DAP_CPDP_PVT_hearing_protection_clear */
int DAP_CPDP_PVT_hearing_protection_clear(void);

/* Symbol: DAP_CPDP_PVT_mi_vec_log */
/* Demangled: DAP_CPDP_PVT_mi_vec_log */
int DAP_CPDP_PVT_mi_vec_log(void);

/* Symbol: DLB_blk_LabsL_strict */
/* Demangled: DLB_blk_LabsL_strict */
int DLB_blk_LabsL_strict(void);

/* Symbol: dlb_fft_fwd_scl_640 */
/* Demangled: dlb_fft_fwd_scl_640 */
int dlb_fft_fwd_scl_640(void);

/* Symbol: dlb_fft_fwd_usc_384 */
/* Demangled: dlb_fft_fwd_usc_384 */
int dlb_fft_fwd_usc_384(void);

/* Symbol: dlb_fft_inv_scl_24 */
/* Demangled: dlb_fft_inv_scl_24 */
int dlb_fft_inv_scl_24(void);

/* Symbol: dlb_fft_fwd_scl_64 */
/* Demangled: dlb_fft_fwd_scl_64 */
int dlb_fft_fwd_scl_64(void);

/* Symbol: _ZTVN5dolby19AudioBufferProviderE */
/* Demangled: vtable for dolby::AudioBufferProvider */
extern void* _ZTVN5dolby19AudioBufferProviderE;

/* Symbol: dlb_CLshrCLUU_flex */
/* Demangled: dlb_CLshrCLUU_flex */
int dlb_CLshrCLUU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L720_1 */
/* Demangled: dlb_dct_twiddle_table16_L720_1 */
extern void* dlb_dct_twiddle_table16_L720_1;

/* Symbol: dlb_dct_twiddle_table16_rev_L576 */
/* Demangled: dlb_dct_twiddle_table16_rev_L576 */
extern void* dlb_dct_twiddle_table16_rev_L576;

/* Symbol: dlb_dct_twiddle_table16_L720_2 */
/* Demangled: dlb_dct_twiddle_table16_L720_2 */
extern void* dlb_dct_twiddle_table16_L720_2;

/* Symbol: DAP_CPDP_PVT_legq_process */
/* Demangled: DAP_CPDP_PVT_legq_process */
int DAP_CPDP_PVT_legq_process(void);

/* Symbol: DLB_vec_NdotLLU_strict */
/* Demangled: DLB_vec_NdotLLU_strict */
int DLB_vec_NdotLLU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L96 */
/* Demangled: dlb_dct_twiddle_table16_rev_L96 */
extern void* dlb_dct_twiddle_table16_rev_L96;

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5D1D2 */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5D1D2 */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5D1D2;

/* Symbol: _ZN5dolby13EffectContext16mWaitReleaseLockE */
/* Demangled: dolby::EffectContext::mWaitReleaseLock */
extern void* _ZN5dolby13EffectContext16mWaitReleaseLockE;

/* Symbol: DLB_blk_delay_setup_strict */
/* Demangled: DLB_blk_delay_setup_strict */
int DLB_blk_delay_setup_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L45 */
/* Demangled: dlb_dct_twiddle_table16_1_L45 */
extern void* dlb_dct_twiddle_table16_1_L45;

/* Symbol: DLB_r4_fft_180_s */
/* Demangled: DLB_r4_fft_180_s */
int DLB_r4_fft_180_s(void);

/* Symbol: DLB_r4_fft_128_s */
/* Demangled: DLB_r4_fft_128_s */
int DLB_r4_fft_128_s(void);

/* Symbol: DAP_CPDP_PVT_AGC_MIN */
/* Demangled: DAP_CPDP_PVT_AGC_MIN */
extern void* DAP_CPDP_PVT_AGC_MIN;

/* Symbol: A_NGCS_UPMIX_PLAN_5CH1_TO_5D1D2_CC */
/* Demangled: A_NGCS_UPMIX_PLAN_5CH1_TO_5D1D2_CC */
extern void* A_NGCS_UPMIX_PLAN_5CH1_TO_5D1D2_CC;

/* Symbol: DLB_blk_Liir2ssv3L_inplace_strict */
/* Demangled: DLB_blk_Liir2ssv3L_inplace_strict */
int DLB_blk_Liir2ssv3L_inplace_strict(void);

/* Symbol: DAP_CPDP_PVT_hp_height_init */
/* Demangled: DAP_CPDP_PVT_hp_height_init */
int DAP_CPDP_PVT_hp_height_init(void);

/* Symbol: dlb_CLCLmix7CL14SU_flex */
/* Demangled: dlb_CLCLmix7CL14SU_flex */
int dlb_CLCLmix7CL14SU_flex(void);

/* Symbol: dlb_fft_inv_usc_480 */
/* Demangled: dlb_fft_inv_usc_480 */
int dlb_fft_inv_usc_480(void);

/* Symbol: DLB_hybrid_analysisCL_get_delay */
/* Demangled: DLB_hybrid_analysisCL_get_delay */
int DLB_hybrid_analysisCL_get_delay(void);

/* Symbol: DAP_CPDP_PVT_MFB_TWID128E */
/* Demangled: DAP_CPDP_PVT_MFB_TWID128E */
extern void* DAP_CPDP_PVT_MFB_TWID128E;

/* Symbol: dlb_dct_twiddle_table16_1_L48 */
/* Demangled: dlb_dct_twiddle_table16_1_L48 */
extern void* dlb_dct_twiddle_table16_1_L48;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L192 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L192 */
extern void* dlb_dct_twiddle_table16_rev_1_L192;

/* Symbol: _ZN5dolby19DlbCrossfadeProcess8getParamEiPiS1_ */
/* Demangled: dolby::DlbCrossfadeProcess::getParam(int, int*, int*) */
int _ZN5dolby19DlbCrossfadeProcess8getParamEiPiS1_(void);

/* Symbol: DAP_CPDP_PVT_dlb_ex_delay_init */
/* Demangled: DAP_CPDP_PVT_dlb_ex_delay_init */
int DAP_CPDP_PVT_dlb_ex_delay_init(void);

/* Symbol: DAP_CPDP_PVT_hp_height_fdn_ane_mixing_process */
/* Demangled: DAP_CPDP_PVT_hp_height_fdn_ane_mixing_process */
int DAP_CPDP_PVT_hp_height_fdn_ane_mixing_process(void);

/* Symbol: DAP_CPDP_PVT_get_binaural_event_weight */
/* Demangled: DAP_CPDP_PVT_get_binaural_event_weight */
int DAP_CPDP_PVT_get_binaural_event_weight(void);

/* Symbol: _ZN5dolby19DapCrossfadeProcessD0Ev */
/* Demangled: dolby::DapCrossfadeProcess::~DapCrossfadeProcess() */
int _ZN5dolby19DapCrossfadeProcessD0Ev(void);

/* Symbol: DAP_CPDP_PVT_leveler_init */
/* Demangled: DAP_CPDP_PVT_leveler_init */
int DAP_CPDP_PVT_leveler_init(void);

/* Symbol: dlb_fft_inv_scl_1024 */
/* Demangled: dlb_fft_inv_scl_1024 */
int dlb_fft_inv_scl_1024(void);

/* Symbol: _ZN5dolby16DlbBufferAdapter7processEPNS_14BufferProviderES2_ */
/* Demangled: dolby::DlbBufferAdapter::process(dolby::BufferProvider*, dolby::BufferProvider*) */
int _ZN5dolby16DlbBufferAdapter7processEPNS_14BufferProviderES2_(void);

/* Symbol: DAP_CPDP_PVT_chroma_clip_process */
/* Demangled: DAP_CPDP_PVT_chroma_clip_process */
int DAP_CPDP_PVT_chroma_clip_process(void);

/* Symbol: dlb_dct_twiddle_table16_L45 */
/* Demangled: dlb_dct_twiddle_table16_L45 */
extern void* dlb_dct_twiddle_table16_L45;

/* Symbol: _ZTCN5dolby16DapEffectContext18DlbDapEffCallbacksE0_N6vendor5dolby8hardware3dms4V2_013IDmsCallbacksE */
/* Demangled: construction vtable for vendor::dolby::hardware::dms::V2_0::IDmsCallbacks-in-dolby::DapEffectContext::DlbDapEffCallbacks */
extern void* _ZTCN5dolby16DapEffectContext18DlbDapEffCallbacksE0_N6vendor5dolby8hardware3dms4V2_013IDmsCallbacksE;

/* Symbol: dap_cpdp_pregain_set */
/* Demangled: dap_cpdp_pregain_set */
int dap_cpdp_pregain_set(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_calc_steering_gains */
/* Demangled: DAP_CPDP_PVT_ltrt3d_calc_steering_gains */
int DAP_CPDP_PVT_ltrt3d_calc_steering_gains(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L2 */
/* Demangled: dlb_dct_twiddle_table16_rev_L2 */
extern void* dlb_dct_twiddle_table16_rev_L2;

/* Symbol: DLB_r4_fft_20_s */
/* Demangled: DLB_r4_fft_20_s */
int DLB_r4_fft_20_s(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_close */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_close */
int DLB_Lmfb_p10km_synthesisCL_close(void);

/* Symbol: dlb_cos_32_ast_mini_twiddle */
/* Demangled: dlb_cos_32_ast_mini_twiddle */
extern void* dlb_cos_32_ast_mini_twiddle;

/* Symbol: _ZN5dolby13AudioHalUtilsC1Ev */
/* Demangled: dolby::AudioHalUtils::AudioHalUtils() */
int _ZN5dolby13AudioHalUtilsC1Ev(void);

/* Symbol: dap_cpdp_prepare_cqmf */
/* Demangled: dap_cpdp_prepare_cqmf */
int dap_cpdp_prepare_cqmf(void);

/* Symbol: DAP_CPDP_PVT_mfcc_get_current_mfcc */
/* Demangled: DAP_CPDP_PVT_mfcc_get_current_mfcc */
int DAP_CPDP_PVT_mfcc_get_current_mfcc(void);

/* Symbol: DAP_CPDP_PVT_A_LTRT3D_PASSIVE_GAIN_714 */
/* Demangled: DAP_CPDP_PVT_A_LTRT3D_PASSIVE_GAIN_714 */
extern void* DAP_CPDP_PVT_A_LTRT3D_PASSIVE_GAIN_714;

/* Symbol: dlb_dct_twiddle_table16_rev_L4 */
/* Demangled: dlb_dct_twiddle_table16_rev_L4 */
extern void* dlb_dct_twiddle_table16_rev_L4;

/* Symbol: dlb_dct_twiddle_table16_L48 */
/* Demangled: dlb_dct_twiddle_table16_L48 */
extern void* dlb_dct_twiddle_table16_L48;

/* Symbol: dlb_fft_inv_scl_512 */
/* Demangled: dlb_fft_inv_scl_512 */
int dlb_fft_inv_scl_512(void);

/* Symbol: dlb_fft_inv_usc_256 */
/* Demangled: dlb_fft_inv_usc_256 */
int dlb_fft_inv_usc_256(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_end_chain_process */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_end_chain_process */
int DAP_CPDP_PVT_dap_cpdp_end_chain_process(void);

/* Symbol: DAP_CPDP_PVT_data_bass_process */
/* Demangled: DAP_CPDP_PVT_data_bass_process */
int DAP_CPDP_PVT_data_bass_process(void);

/* Symbol: dlb_blk_Liir2ssv1efL_flex */
/* Demangled: dlb_blk_Liir2ssv1efL_flex */
int dlb_blk_Liir2ssv1efL_flex(void);

/* Symbol: DLB_r4_fft_512 */
/* Demangled: DLB_r4_fft_512 */
int DLB_r4_fft_512(void);

/* Symbol: _ZN5dolby13EffectContext12isConfiguredEv */
/* Demangled: dolby::EffectContext::isConfigured() */
int _ZN5dolby13EffectContext12isConfiguredEv(void);

/* Symbol: DAP_CPDP_PVT_hp_height_fdn_process */
/* Demangled: DAP_CPDP_PVT_hp_height_fdn_process */
int DAP_CPDP_PVT_hp_height_fdn_process(void);

/* Symbol: DLB_CLmpyCLCSU_strict */
/* Demangled: DLB_CLmpyCLCSU_strict */
int DLB_CLmpyCLCSU_strict(void);

/* Symbol: dlb_fft_cplx_inv_scl */
/* Demangled: dlb_fft_cplx_inv_scl */
extern void* dlb_fft_cplx_inv_scl;

/* Symbol: DLB_blk_LsubLL_strict */
/* Demangled: DLB_blk_LsubLL_strict */
int DLB_blk_LsubLL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L8 */
/* Demangled: dlb_dct_twiddle_table16_rev_L8 */
extern void* dlb_dct_twiddle_table16_rev_L8;

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_5D1D2_CC */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_5D1D2_CC */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_5D1D2_CC;

/* Symbol: DAP_CPDP_PVT_mi_vec_max_index */
/* Demangled: DAP_CPDP_PVT_mi_vec_max_index */
int DAP_CPDP_PVT_mi_vec_max_index(void);

/* Symbol: DAP_CPDP_PVT_ngcs_init */
/* Demangled: DAP_CPDP_PVT_ngcs_init */
int DAP_CPDP_PVT_ngcs_init(void);

/* Symbol: dlb_blk_LminLLL_flex */
/* Demangled: dlb_blk_LminLLL_flex */
int dlb_blk_LminLLL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L2 */
/* Demangled: dlb_dct_twiddle_table16_L2 */
extern void* dlb_dct_twiddle_table16_L2;

/* Symbol: dlb_fft_inv_usc_72 */
/* Demangled: dlb_fft_inv_usc_72 */
int dlb_fft_inv_usc_72(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcess10setEnabledEb */
/* Demangled: dolby::DlbCrossfadeProcess::setEnabled(bool) */
int _ZN5dolby19DlbCrossfadeProcess10setEnabledEb(void);

/* Symbol: _ZN5dolby14BufferProviderC2Ev */
/* Demangled: dolby::BufferProvider::BufferProvider() */
int _ZN5dolby14BufferProviderC2Ev(void);

/* Symbol: dap_cpdp_regulator_distortion_slope_set */
/* Demangled: dap_cpdp_regulator_distortion_slope_set */
int dap_cpdp_regulator_distortion_slope_set(void);

/* Symbol: dap_cpdp_custom_woofer_channel_index_set */
/* Demangled: dap_cpdp_custom_woofer_channel_index_set */
int dap_cpdp_custom_woofer_channel_index_set(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_get_version */
/* Demangled: DAP_CPDP_PVT_ltrt3d_get_version */
int DAP_CPDP_PVT_ltrt3d_get_version(void);

/* Symbol: DLB_r4_fft_360_s */
/* Demangled: DLB_r4_fft_360_s */
int DLB_r4_fft_360_s(void);

/* Symbol: dlb_fft_fwd_scl_768 */
/* Demangled: dlb_fft_fwd_scl_768 */
int dlb_fft_fwd_scl_768(void);

/* Symbol: _ZN5dolby18EndpointParamCache15commitAllParamsE15audio_devices_t */
/* Demangled: dolby::EndpointParamCache::commitAllParams(audio_devices_t) */
int _ZN5dolby18EndpointParamCache15commitAllParamsE15audio_devices_t(void);

/* Symbol: DAP_CPDP_PVT_mi_dap_query_scratch */
/* Demangled: DAP_CPDP_PVT_mi_dap_query_scratch */
int DAP_CPDP_PVT_mi_dap_query_scratch(void);

/* Symbol: dap_cpdp_regulator_tuning_info_get */
/* Demangled: dap_cpdp_regulator_tuning_info_get */
int dap_cpdp_regulator_tuning_info_get(void);

/* Symbol: DAP_CPDP_PVT_hybrid_filter_synthesis_process */
/* Demangled: DAP_CPDP_PVT_hybrid_filter_synthesis_process */
int DAP_CPDP_PVT_hybrid_filter_synthesis_process(void);

/* Symbol: DAP_CPDP_PVT_ldn_excitation_transform */
/* Demangled: DAP_CPDP_PVT_ldn_excitation_transform */
int DAP_CPDP_PVT_ldn_excitation_transform(void);

/* Symbol: dlb_dct_twiddle_table16_L4 */
/* Demangled: dlb_dct_twiddle_table16_L4 */
extern void* dlb_dct_twiddle_table16_L4;

/* Symbol: dap_cpdp_pvt_dv_params_init */
/* Demangled: dap_cpdp_pvt_dv_params_init */
int dap_cpdp_pvt_dv_params_init(void);

/* Symbol: dap_cpdp_bass_mbdrc_convert_params */
/* Demangled: dap_cpdp_bass_mbdrc_convert_params */
int dap_cpdp_bass_mbdrc_convert_params(void);

/* Symbol: DAP_CPDP_PVT_dvlim_process */
/* Demangled: DAP_CPDP_PVT_dvlim_process */
int DAP_CPDP_PVT_dvlim_process(void);

/* Symbol: DAP_CPDP_PVT_resi_init */
/* Demangled: DAP_CPDP_PVT_resi_init */
int DAP_CPDP_PVT_resi_init(void);

/* Symbol: DAP_CPDP_PVT_cmtx_trylock */
/* Demangled: DAP_CPDP_PVT_cmtx_trylock */
int DAP_CPDP_PVT_cmtx_trylock(void);

/* Symbol: DAP_CPDP_PVT_A_LTRT3D_DELAYATTEN_SR44KHZ1 */
/* Demangled: DAP_CPDP_PVT_A_LTRT3D_DELAYATTEN_SR44KHZ1 */
extern void* DAP_CPDP_PVT_A_LTRT3D_DELAYATTEN_SR44KHZ1;

/* Symbol: dlb_dct_twiddle_table16_L8 */
/* Demangled: dlb_dct_twiddle_table16_L8 */
extern void* dlb_dct_twiddle_table16_L8;

/* Symbol: dap_cpdp_output_mode_set */
/* Demangled: dap_cpdp_output_mode_set */
int dap_cpdp_output_mode_set(void);

/* Symbol: dap_cpdp_virtual_bass_overall_gain_set */
/* Demangled: dap_cpdp_virtual_bass_overall_gain_set */
int dap_cpdp_virtual_bass_overall_gain_set(void);

/* Symbol: DAP_CPDP_PVT_surround_compressor_init */
/* Demangled: DAP_CPDP_PVT_surround_compressor_init */
int DAP_CPDP_PVT_surround_compressor_init(void);

/* Symbol: dlb_fft_inv_scl_30 */
/* Demangled: dlb_fft_inv_scl_30 */
int dlb_fft_inv_scl_30(void);

/* Symbol: DAP_CPDP_PVT_sben_onset_calc */
/* Demangled: DAP_CPDP_PVT_sben_onset_calc */
int DAP_CPDP_PVT_sben_onset_calc(void);

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7D1D2_CC */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7D1D2_CC */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7D1D2_CC;

/* Symbol: DAP_CPDP_PVT_ngcs_upmixer_init */
/* Demangled: DAP_CPDP_PVT_ngcs_upmixer_init */
int DAP_CPDP_PVT_ngcs_upmixer_init(void);

/* Symbol: dlb_dct_twiddle_table16_L768 */
/* Demangled: dlb_dct_twiddle_table16_L768 */
extern void* dlb_dct_twiddle_table16_L768;

/* Symbol: DLB_r4_inv_fft_720_s */
/* Demangled: DLB_r4_inv_fft_720_s */
int DLB_r4_inv_fft_720_s(void);

/* Symbol: dlb_fft_fwd_scl_72 */
/* Demangled: dlb_fft_fwd_scl_72 */
int dlb_fft_fwd_scl_72(void);

/* Symbol: dlb_fft_inv_scl_32 */
/* Demangled: dlb_fft_inv_scl_32 */
int dlb_fft_inv_scl_32(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_virt_chain_init */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_virt_chain_init */
int DAP_CPDP_PVT_dap_cpdp_virt_chain_init(void);

/* Symbol: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_7D1_TO_7D1D2 */
/* Demangled: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_7D1_TO_7D1D2 */
extern void* DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_7D1_TO_7D1D2;

/* Symbol: dlb_fft_fwd_usc_160 */
/* Demangled: dlb_fft_fwd_usc_160 */
int dlb_fft_fwd_usc_160(void);

/* Symbol: dlb_fft_inv_usc_144 */
/* Demangled: dlb_fft_inv_usc_144 */
int dlb_fft_inv_usc_144(void);

/* Symbol: DLB_fft_Linv_scaledCL */
/* Demangled: DLB_fft_Linv_scaledCL */
int DLB_fft_Linv_scaledCL(void);

/* Symbol: _ZN5dolby9EffectDap8getParamE15audio_devices_tiPiS2_ */
/* Demangled: dolby::EffectDap::getParam(audio_devices_t, int, int*, int*) */
int _ZN5dolby9EffectDap8getParamE15audio_devices_tiPiS2_(void);

/* Symbol: DAP_CPDP_PVT_visualizer_custom_bands_update */
/* Demangled: DAP_CPDP_PVT_visualizer_custom_bands_update */
int DAP_CPDP_PVT_visualizer_custom_bands_update(void);

/* Symbol: DAP_CPDP_PVT_A_LTRT3D_BH9550_714_CONV */
/* Demangled: DAP_CPDP_PVT_A_LTRT3D_BH9550_714_CONV */
extern void* DAP_CPDP_PVT_A_LTRT3D_BH9550_714_CONV;

/* Symbol: dlb_blk_Lcrossfade_gainLS_flex */
/* Demangled: dlb_blk_Lcrossfade_gainLS_flex */
int dlb_blk_Lcrossfade_gainLS_flex(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_get_process_format */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_get_process_format */
int DAP_CPDP_PVT_dap_cpdp_get_process_format(void);

/* Symbol: A_NGCS_UPMIX_PLAN_7CH1_TO_7D1D2_CC */
/* Demangled: A_NGCS_UPMIX_PLAN_7CH1_TO_7D1D2_CC */
extern void* A_NGCS_UPMIX_PLAN_7CH1_TO_7D1D2_CC;

/* Symbol: DAP_CPDP_PVT_AAA_DAP_CPDP_SLOPE_GAIN_TAB_INFO */
/* Demangled: DAP_CPDP_PVT_AAA_DAP_CPDP_SLOPE_GAIN_TAB_INFO */
extern void* DAP_CPDP_PVT_AAA_DAP_CPDP_SLOPE_GAIN_TAB_INFO;

/* Symbol: DLB_BLmpyBLS_inplace_strict */
/* Demangled: DLB_BLmpyBLS_inplace_strict */
int DLB_BLmpyBLS_inplace_strict(void);

/* Symbol: DAP_CPDP_PVT_get_ge_speech_confidence */
/* Demangled: DAP_CPDP_PVT_get_ge_speech_confidence */
int DAP_CPDP_PVT_get_ge_speech_confidence(void);

/* Symbol: DLB_vec_Lsum_sqrLUU_strict */
/* Demangled: DLB_vec_Lsum_sqrLUU_strict */
int DLB_vec_Lsum_sqrLUU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L120 */
/* Demangled: dlb_dct_twiddle_table16_rev_L120 */
extern void* dlb_dct_twiddle_table16_rev_L120;

/* Symbol: dlb_fft_inv_scl_36 */
/* Demangled: dlb_fft_inv_scl_36 */
int dlb_fft_inv_scl_36(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_cqmf_set_upmix_plan */
/* Demangled: DAP_CPDP_PVT_ltrt3d_cqmf_set_upmix_plan */
int DAP_CPDP_PVT_ltrt3d_cqmf_set_upmix_plan(void);

/* Symbol: dlb_dct_twiddle_table16_L288_cos */
/* Demangled: dlb_dct_twiddle_table16_L288_cos */
extern void* dlb_dct_twiddle_table16_L288_cos;

/* Symbol: _ZN5dolby11Dap2ProcessD1Ev */
/* Demangled: dolby::Dap2Process::~Dap2Process() */
int _ZN5dolby11Dap2ProcessD1Ev(void);

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_7D1D2 */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_7D1D2 */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_7D1D2;

/* Symbol: _ZN5dolby18EndpointParamCache8doCommitEPNS_13DapParamCacheEb */
/* Demangled: dolby::EndpointParamCache::doCommit(dolby::DapParamCache*, bool) */
int _ZN5dolby18EndpointParamCache8doCommitEPNS_13DapParamCacheEb(void);

/* Symbol: dap_cpdp_hearing_protection_attenuation_attack_time_set */
/* Demangled: dap_cpdp_hearing_protection_attenuation_attack_time_set */
int dap_cpdp_hearing_protection_attenuation_attack_time_set(void);

/* Symbol: DAP_CPDP_PVT_ASA_EVENT_MAXSL */
/* Demangled: DAP_CPDP_PVT_ASA_EVENT_MAXSL */
extern void* DAP_CPDP_PVT_ASA_EVENT_MAXSL;

/* Symbol: DAP_CPDP_PVT_AA_COMPR_COEFS_OFFSETS_48K */
/* Demangled: DAP_CPDP_PVT_AA_COMPR_COEFS_OFFSETS_48K */
extern void* DAP_CPDP_PVT_AA_COMPR_COEFS_OFFSETS_48K;

/* Symbol: DLB_r4_inv_fft_20_s */
/* Demangled: DLB_r4_inv_fft_20_s */
int DLB_r4_inv_fft_20_s(void);

/* Symbol: _ZN5dolby18EndpointParamCacheD2Ev */
/* Demangled: dolby::EndpointParamCache::~EndpointParamCache() */
int _ZN5dolby18EndpointParamCacheD2Ev(void);

/* Symbol: _ZN5dolby9DlbEffect27handle_EFFECT_CMD_GET_PARAMERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_GET_PARAM(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect27handle_EFFECT_CMD_GET_PARAMERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: DAP_CPDP_PVT_ngcs_centre_spread_run */
/* Demangled: DAP_CPDP_PVT_ngcs_centre_spread_run */
int DAP_CPDP_PVT_ngcs_centre_spread_run(void);

/* Symbol: DLB_CLCLmix7CL14SU_strict */
/* Demangled: DLB_CLCLmix7CL14SU_strict */
int DLB_CLCLmix7CL14SU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L720 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L720 */
extern void* dlb_dct_twiddle_table16_rev_1_L720;

/* Symbol: DLB_qmf_analysisL_query_mem */
/* Demangled: DLB_qmf_analysisL_query_mem */
int DLB_qmf_analysisL_query_mem(void);

/* Symbol: DAP_CPDP_PVT_A_VIRTUAL_BASS_SYN_WINDOW */
/* Demangled: DAP_CPDP_PVT_A_VIRTUAL_BASS_SYN_WINDOW */
extern void* DAP_CPDP_PVT_A_VIRTUAL_BASS_SYN_WINDOW;

/* Symbol: DLB_CLhybrid_analysisCL */
/* Demangled: DLB_CLhybrid_analysisCL */
int DLB_CLhybrid_analysisCL(void);

/* Symbol: DAP_CPDP_PVT_feature_set_legacy_enable */
/* Demangled: DAP_CPDP_PVT_feature_set_legacy_enable */
int DAP_CPDP_PVT_feature_set_legacy_enable(void);

/* Symbol: DLB_r4_fft_30_s */
/* Demangled: DLB_r4_fft_30_s */
int DLB_r4_fft_30_s(void);

/* Symbol: DLB_hybrid_synthesisCL_get_delay */
/* Demangled: DLB_hybrid_synthesisCL_get_delay */
int DLB_hybrid_synthesisCL_get_delay(void);

/* Symbol: dlb_dct_twiddle_table16_L1024_cos */
/* Demangled: dlb_dct_twiddle_table16_L1024_cos */
extern void* dlb_dct_twiddle_table16_L1024_cos;

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_5D1D2 */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_5D1D2 */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_5D1D2;

/* Symbol: DAP_CPDP_PVT_de_powmin_process */
/* Demangled: DAP_CPDP_PVT_de_powmin_process */
int DAP_CPDP_PVT_de_powmin_process(void);

/* Symbol: DLB_time_init */
/* Demangled: DLB_time_init */
int DLB_time_init(void);

/* Symbol: _ZN5dolby13AudioHalUtilsD1Ev */
/* Demangled: dolby::AudioHalUtils::~AudioHalUtils() */
int _ZN5dolby13AudioHalUtilsD1Ev(void);

/* Symbol: DAP_CPDP_PVT_agc_process */
/* Demangled: DAP_CPDP_PVT_agc_process */
int DAP_CPDP_PVT_agc_process(void);

/* Symbol: DAP_CPDP_PVT_surround_compressor_smooth_power_approximation */
/* Demangled: DAP_CPDP_PVT_surround_compressor_smooth_power_approximation */
int DAP_CPDP_PVT_surround_compressor_smooth_power_approximation(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L128 */
/* Demangled: dlb_dct_twiddle_table16_rev_L128 */
extern void* dlb_dct_twiddle_table16_rev_L128;

/* Symbol: dlb_hyb_p4_13 */
/* Demangled: dlb_hyb_p4_13 */
extern void* dlb_hyb_p4_13;

/* Symbol: dlb_forwardModulationComplex */
/* Demangled: dlb_forwardModulationComplex */
int dlb_forwardModulationComplex(void);

/* Symbol: dap_cpdp_rs_amount_set */
/* Demangled: dap_cpdp_rs_amount_set */
int dap_cpdp_rs_amount_set(void);

/* Symbol: DLB_r4_fft_2_s */
/* Demangled: DLB_r4_fft_2_s */
int DLB_r4_fft_2_s(void);

/* Symbol: dap_cpdp_pvt_virtual_bass_params_init */
/* Demangled: dap_cpdp_pvt_virtual_bass_params_init */
int dap_cpdp_pvt_virtual_bass_params_init(void);

/* Symbol: DAP_CPDP_PVT_de_duck_set_amount */
/* Demangled: DAP_CPDP_PVT_de_duck_set_amount */
int DAP_CPDP_PVT_de_duck_set_amount(void);

/* Symbol: DAP_CPDP_PVT_spec_calc_process */
/* Demangled: DAP_CPDP_PVT_spec_calc_process */
int DAP_CPDP_PVT_spec_calc_process(void);

/* Symbol: dlb_blk_Lattack_decay_peak_iir1L_flex */
/* Demangled: dlb_blk_Lattack_decay_peak_iir1L_flex */
int dlb_blk_Lattack_decay_peak_iir1L_flex(void);

/* Symbol: DLB_blk_refLdelayU */
/* Demangled: DLB_blk_refLdelayU */
int DLB_blk_refLdelayU(void);

/* Symbol: DAP_CPDP_PVT_dlb_scalar_avg_filter_clear */
/* Demangled: DAP_CPDP_PVT_dlb_scalar_avg_filter_clear */
int DAP_CPDP_PVT_dlb_scalar_avg_filter_clear(void);

/* Symbol: DLB_vec_Lmask_rev_coefLSU_strict */
/* Demangled: DLB_vec_Lmask_rev_coefLSU_strict */
int DLB_vec_Lmask_rev_coefLSU_strict(void);

/* Symbol: DLB_r4_fft_72_s */
/* Demangled: DLB_r4_fft_72_s */
int DLB_r4_fft_72_s(void);

/* Symbol: DLB_r4_inv_fft_320 */
/* Demangled: DLB_r4_inv_fft_320 */
int DLB_r4_inv_fft_320(void);

/* Symbol: _ZN5dolby16DapEffectContext15setDapParameterEPvj */
/* Demangled: dolby::DapEffectContext::setDapParameter(void*, unsigned int) */
int _ZN5dolby16DapEffectContext15setDapParameterEPvj(void);

/* Symbol: dlb_qmf_filter_coeff_P4_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P4_vec_ana */
extern void* dlb_qmf_filter_coeff_P4_vec_ana;

/* Symbol: dap_cpdp_mi2ieq_steering_enable_set */
/* Demangled: dap_cpdp_mi2ieq_steering_enable_set */
int dap_cpdp_mi2ieq_steering_enable_set(void);

/* Symbol: DAP_CPDP_PVT_ngcs_separate_apply_gains */
/* Demangled: DAP_CPDP_PVT_ngcs_separate_apply_gains */
int DAP_CPDP_PVT_ngcs_separate_apply_gains(void);

/* Symbol: dlb_odd_fft_cplx_fwd_scl */
/* Demangled: dlb_odd_fft_cplx_fwd_scl */
extern void* dlb_odd_fft_cplx_fwd_scl;

/* Symbol: _ZN5dolby14BufferProviderD2Ev */
/* Demangled: dolby::BufferProvider::~BufferProvider() */
int _ZN5dolby14BufferProviderD2Ev(void);

/* Symbol: DAP_CPDP_PVT_clvec_buffer_mixer_process */
/* Demangled: DAP_CPDP_PVT_clvec_buffer_mixer_process */
int DAP_CPDP_PVT_clvec_buffer_mixer_process(void);

/* Symbol: DAP_CPDP_PVT_P_MIX_FREQ_HIGH_BOUNDARY_TAB_44KHZ */
/* Demangled: DAP_CPDP_PVT_P_MIX_FREQ_HIGH_BOUNDARY_TAB_44KHZ */
extern void* DAP_CPDP_PVT_P_MIX_FREQ_HIGH_BOUNDARY_TAB_44KHZ;

/* Symbol: DAP_CPDP_PVT_leveler_query_memory */
/* Demangled: DAP_CPDP_PVT_leveler_query_memory */
int DAP_CPDP_PVT_leveler_query_memory(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L240 */
/* Demangled: dlb_dct_twiddle_table16_rev_L240 */
extern void* dlb_dct_twiddle_table16_rev_L240;

/* Symbol: dlb_dct_twiddle_table16_L512_cos */
/* Demangled: dlb_dct_twiddle_table16_L512_cos */
extern void* dlb_dct_twiddle_table16_L512_cos;

/* Symbol: dap_cpdp_complex_equalizer_tuning_set */
/* Demangled: dap_cpdp_complex_equalizer_tuning_set */
int dap_cpdp_complex_equalizer_tuning_set(void);

/* Symbol: DAP_CPDP_PVT_nyquist_filters_844_close */
/* Demangled: DAP_CPDP_PVT_nyquist_filters_844_close */
int DAP_CPDP_PVT_nyquist_filters_844_close(void);

/* Symbol: DAP_CPDP_PVT_ngcs_diffuse_init */
/* Demangled: DAP_CPDP_PVT_ngcs_diffuse_init */
int DAP_CPDP_PVT_ngcs_diffuse_init(void);

/* Symbol: DLB_unload_mfb_p10km_analysisL_filter_state */
/* Demangled: DLB_unload_mfb_p10km_analysisL_filter_state */
int DLB_unload_mfb_p10km_analysisL_filter_state(void);

/* Symbol: dlb_dct_twiddle_table16_L384_cos */
/* Demangled: dlb_dct_twiddle_table16_L384_cos */
extern void* dlb_dct_twiddle_table16_L384_cos;

/* Symbol: _ZN5dolby16DapEffectContext23getSelectedTuningDeviceEiPvPj */
/* Demangled: dolby::DapEffectContext::getSelectedTuningDevice(int, void*, unsigned int*) */
int _ZN5dolby16DapEffectContext23getSelectedTuningDeviceEiPvPj(void);

/* Symbol: DAP_CPDP_PVT_hp_height_fdn_allpass_reset */
/* Demangled: DAP_CPDP_PVT_hp_height_fdn_allpass_reset */
int DAP_CPDP_PVT_hp_height_fdn_allpass_reset(void);

/* Symbol: DAP_CPDP_PVT_lfra_query_memory */
/* Demangled: DAP_CPDP_PVT_lfra_query_memory */
int DAP_CPDP_PVT_lfra_query_memory(void);

/* Symbol: DAP_CPDP_PVT_sben_rap_process */
/* Demangled: DAP_CPDP_PVT_sben_rap_process */
int DAP_CPDP_PVT_sben_rap_process(void);

/* Symbol: DAP_CPDP_PVT_agc_calc_alpha_mid */
/* Demangled: DAP_CPDP_PVT_agc_calc_alpha_mid */
int DAP_CPDP_PVT_agc_calc_alpha_mid(void);

/* Symbol: dlb_fft_inv_usc_80 */
/* Demangled: dlb_fft_inv_usc_80 */
int dlb_fft_inv_usc_80(void);

/* Symbol: _ZN5dolby18EndpointParamCache8getCacheE15audio_devices_t */
/* Demangled: dolby::EndpointParamCache::getCache(audio_devices_t) */
int _ZN5dolby18EndpointParamCache8getCacheE15audio_devices_t(void);

/* Symbol: DAP_CPDP_PVT_data_bass_subqmf_synthesis */
/* Demangled: DAP_CPDP_PVT_data_bass_subqmf_synthesis */
int DAP_CPDP_PVT_data_bass_subqmf_synthesis(void);

/* Symbol: DLB_vec_UnormSU_strict */
/* Demangled: DLB_vec_UnormSU_strict */
int DLB_vec_UnormSU_strict(void);

/* Symbol: dap_pvt_bass_mbdrc_configure */
/* Demangled: dap_pvt_bass_mbdrc_configure */
int dap_pvt_bass_mbdrc_configure(void);

/* Symbol: DAP_CPDP_PVT_dvlim_set_block_size */
/* Demangled: DAP_CPDP_PVT_dvlim_set_block_size */
int DAP_CPDP_PVT_dvlim_set_block_size(void);

/* Symbol: DAP_CPDP_PVT_resi_reset */
/* Demangled: DAP_CPDP_PVT_resi_reset */
int DAP_CPDP_PVT_resi_reset(void);

/* Symbol: DAP_CPDP_PVT_sben_modulation_query_scratch */
/* Demangled: DAP_CPDP_PVT_sben_modulation_query_scratch */
int DAP_CPDP_PVT_sben_modulation_query_scratch(void);

/* Symbol: DLB_r4_cplx_inv_scaled */
/* Demangled: DLB_r4_cplx_inv_scaled */
int DLB_r4_cplx_inv_scaled(void);

/* Symbol: dlb_fft_fwd_usc_288 */
/* Demangled: dlb_fft_fwd_usc_288 */
int dlb_fft_fwd_usc_288(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcess10accumulateEPsS1_S1_iff */
/* Demangled: dolby::DlbCrossfadeProcess::accumulate(short*, short*, short*, int, float, float) */
int _ZN5dolby19DlbCrossfadeProcess10accumulateEPsS1_S1_iff(void);

/* Symbol: _ZN5dolby12DlbGenClass2C2Ev */
/* Demangled: dolby::DlbGenClass2::DlbGenClass2() */
int _ZN5dolby12DlbGenClass2C2Ev(void);

/* Symbol: DAP_CPDP_PVT_NYQUIST_FILTERS_844_LOW_LATENCY_FILT4 */
/* Demangled: DAP_CPDP_PVT_NYQUIST_FILTERS_844_LOW_LATENCY_FILT4 */
extern void* DAP_CPDP_PVT_NYQUIST_FILTERS_844_LOW_LATENCY_FILT4;

/* Symbol: _ZN5dolby13EffectContext21transformExternalGainEj */
/* Demangled: dolby::EffectContext::transformExternalGain(unsigned int) */
int _ZN5dolby13EffectContext21transformExternalGainEj(void);

/* Symbol: DAP_CPDP_PVT_volume_and_ieq_preset_query_memory */
/* Demangled: DAP_CPDP_PVT_volume_and_ieq_preset_query_memory */
int DAP_CPDP_PVT_volume_and_ieq_preset_query_memory(void);

/* Symbol: DAP_CPDP_PVT_virtual_bass_transpose */
/* Demangled: DAP_CPDP_PVT_virtual_bass_transpose */
int DAP_CPDP_PVT_virtual_bass_transpose(void);

/* Symbol: DAP_CPDP_PVT_resi_query_memory */
/* Demangled: DAP_CPDP_PVT_resi_query_memory */
int DAP_CPDP_PVT_resi_query_memory(void);

/* Symbol: DAP_CPDP_PVT_arle_smooth_gains_across_frequency */
/* Demangled: DAP_CPDP_PVT_arle_smooth_gains_across_frequency */
int DAP_CPDP_PVT_arle_smooth_gains_across_frequency(void);

/* Symbol: DLB_r4_fft_720_s */
/* Demangled: DLB_r4_fft_720_s */
int DLB_r4_fft_720_s(void);

/* Symbol: dlb_dct_twiddle_table16_L720_cos */
/* Demangled: dlb_dct_twiddle_table16_L720_cos */
extern void* dlb_dct_twiddle_table16_L720_cos;

/* Symbol: DAP_CPDP_PVT_arle_distortion_get_band_masking_factor */
/* Demangled: DAP_CPDP_PVT_arle_distortion_get_band_masking_factor */
int DAP_CPDP_PVT_arle_distortion_get_band_masking_factor(void);

/* Symbol: DAP_CPDP_PVT_NYQUIST_FILTERS_844_LOW_LATENCY_FILT8 */
/* Demangled: DAP_CPDP_PVT_NYQUIST_FILTERS_844_LOW_LATENCY_FILT8 */
extern void* DAP_CPDP_PVT_NYQUIST_FILTERS_844_LOW_LATENCY_FILT8;

/* Symbol: _ZN5dolby18EndpointParamCache8getParamE15audio_devices_tiPiS2_ */
/* Demangled: dolby::EndpointParamCache::getParam(audio_devices_t, int, int*, int*) */
int _ZN5dolby18EndpointParamCache8getParamE15audio_devices_tiPiS2_(void);

/* Symbol: _ZN5dolby9EffectDapD2Ev */
/* Demangled: dolby::EffectDap::~EffectDap() */
int _ZN5dolby9EffectDapD2Ev(void);

/* Symbol: DAP_CPDP_PVT_agc_calc_loudness */
/* Demangled: DAP_CPDP_PVT_agc_calc_loudness */
int DAP_CPDP_PVT_agc_calc_loudness(void);

/* Symbol: DAP_CPDP_PVT_resi_query_clip_mem */
/* Demangled: DAP_CPDP_PVT_resi_query_clip_mem */
int DAP_CPDP_PVT_resi_query_clip_mem(void);

/* Symbol: DAP_CPDP_PVT_sben_modulation_process */
/* Demangled: DAP_CPDP_PVT_sben_modulation_process */
int DAP_CPDP_PVT_sben_modulation_process(void);

/* Symbol: DAP_CPDP_PVT_dvlim_get_smoothed_gain */
/* Demangled: DAP_CPDP_PVT_dvlim_get_smoothed_gain */
int DAP_CPDP_PVT_dvlim_get_smoothed_gain(void);

/* Symbol: _ZN5dolby13AudioHalUtils13resumeProfileEv */
/* Demangled: dolby::AudioHalUtils::resumeProfile() */
int _ZN5dolby13AudioHalUtils13resumeProfileEv(void);

/* Symbol: DAP_CPDP_PVT_dlb_ex_delay_clear */
/* Demangled: DAP_CPDP_PVT_dlb_ex_delay_clear */
int DAP_CPDP_PVT_dlb_ex_delay_clear(void);

/* Symbol: dlb_fft_fwd_scl_80 */
/* Demangled: dlb_fft_fwd_scl_80 */
int dlb_fft_fwd_scl_80(void);

/* Symbol: dlb_fft_inv_scl_40 */
/* Demangled: dlb_fft_inv_scl_40 */
int dlb_fft_inv_scl_40(void);

/* Symbol: dlb_fft_inv_scl_640 */
/* Demangled: dlb_fft_inv_scl_640 */
int dlb_fft_inv_scl_640(void);

/* Symbol: dlb_fft_inv_usc_384 */
/* Demangled: dlb_fft_inv_usc_384 */
int dlb_fft_inv_usc_384(void);

/* Symbol: dap_cpdp_system_gain_set */
/* Demangled: dap_cpdp_system_gain_set */
int dap_cpdp_system_gain_set(void);

/* Symbol: DAP_CPDP_PVT_asa_event_init */
/* Demangled: DAP_CPDP_PVT_asa_event_init */
int DAP_CPDP_PVT_asa_event_init(void);

/* Symbol: DAP_CPDP_PVT_mi_dap_query_memory */
/* Demangled: DAP_CPDP_PVT_mi_dap_query_memory */
int DAP_CPDP_PVT_mi_dap_query_memory(void);

/* Symbol: DAP_CPDP_PVT_delay_line_query_memory */
/* Demangled: DAP_CPDP_PVT_delay_line_query_memory */
int DAP_CPDP_PVT_delay_line_query_memory(void);

/* Symbol: DAP_CPDP_PVT_hp_height_reverb_process */
/* Demangled: DAP_CPDP_PVT_hp_height_reverb_process */
int DAP_CPDP_PVT_hp_height_reverb_process(void);

/* Symbol: dlb_dct_twiddle_table16_1_L320 */
/* Demangled: dlb_dct_twiddle_table16_1_L320 */
extern void* dlb_dct_twiddle_table16_1_L320;

/* Symbol: dlb_dct_twiddle_table16_L36_cos */
/* Demangled: dlb_dct_twiddle_table16_L36_cos */
extern void* dlb_dct_twiddle_table16_L36_cos;

/* Symbol: _ZN5dolby16DapEffectContext16getTuningListLenEiPvPj */
/* Demangled: dolby::DapEffectContext::getTuningListLen(int, void*, unsigned int*) */
int _ZN5dolby16DapEffectContext16getTuningListLenEiPvPj(void);

/* Symbol: dap_cpdp_mi2adaptive_virtualizer_steering_enable_set */
/* Demangled: dap_cpdp_mi2adaptive_virtualizer_steering_enable_set */
int dap_cpdp_mi2adaptive_virtualizer_steering_enable_set(void);

/* Symbol: DAP_CPDP_PVT_surround_compressor_reset */
/* Demangled: DAP_CPDP_PVT_surround_compressor_reset */
int DAP_CPDP_PVT_surround_compressor_reset(void);

/* Symbol: DAP_CPDP_PVT_hfra_query_memory */
/* Demangled: DAP_CPDP_PVT_hfra_query_memory */
int DAP_CPDP_PVT_hfra_query_memory(void);

/* Symbol: DLB_BLsaddBLL_strict */
/* Demangled: DLB_BLsaddBLL_strict */
int DLB_BLsaddBLL_strict(void);

/* Symbol: DLB_r4_fft_640 */
/* Demangled: DLB_r4_fft_640 */
int DLB_r4_fft_640(void);

/* Symbol: _ZN5dolby18VoiceEffectContext8setParamEijPv */
/* Demangled: dolby::VoiceEffectContext::setParam(int, unsigned int, void*) */
int _ZN5dolby18VoiceEffectContext8setParamEijPv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int const*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE15do_move_forwardEPvPKvj(void);

/* Symbol: DAP_CPDP_PVT_ieq_clear */
/* Demangled: DAP_CPDP_PVT_ieq_clear */
int DAP_CPDP_PVT_ieq_clear(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_cqmf_process */
/* Demangled: DAP_CPDP_PVT_ltrt3d_cqmf_process */
int DAP_CPDP_PVT_ltrt3d_cqmf_process(void);

/* Symbol: DAP_CPDP_PVT_mi_vec_weighted_mean_std */
/* Demangled: DAP_CPDP_PVT_mi_vec_weighted_mean_std */
int DAP_CPDP_PVT_mi_vec_weighted_mean_std(void);

/* Symbol: DAP_CPDP_PVT_evaluation_is_demo */
/* Demangled: DAP_CPDP_PVT_evaluation_is_demo */
int DAP_CPDP_PVT_evaluation_is_demo(void);

/* Symbol: DAP_CPDP_PVT_lvl_calc_drc_scale */
/* Demangled: DAP_CPDP_PVT_lvl_calc_drc_scale */
int DAP_CPDP_PVT_lvl_calc_drc_scale(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L360 */
/* Demangled: dlb_dct_twiddle_table16_rev_L360 */
extern void* dlb_dct_twiddle_table16_rev_L360;

/* Symbol: DLB_r4_inv_fft_30_s */
/* Demangled: DLB_r4_inv_fft_30_s */
int DLB_r4_inv_fft_30_s(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvj(void);

/* Symbol: DAP_CPDP_PVT_A_DAP_CPDP_HCQMF_NORMALIZED_FREQUENCIES */
/* Demangled: DAP_CPDP_PVT_A_DAP_CPDP_HCQMF_NORMALIZED_FREQUENCIES */
extern void* DAP_CPDP_PVT_A_DAP_CPDP_HCQMF_NORMALIZED_FREQUENCIES;

/* Symbol: dap_cpdp_pvt_virtualization_supported */
/* Demangled: dap_cpdp_pvt_virtualization_supported */
int dap_cpdp_pvt_virtualization_supported(void);

/* Symbol: DAP_CPDP_PVT_ERBBandStop */
/* Demangled: DAP_CPDP_PVT_ERBBandStop */
extern void* DAP_CPDP_PVT_ERBBandStop;

/* Symbol: DLB_blk_LdelayU_strict */
/* Demangled: DLB_blk_LdelayU_strict */
int DLB_blk_LdelayU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L60 */
/* Demangled: dlb_dct_twiddle_table16_1_L60 */
extern void* dlb_dct_twiddle_table16_1_L60;

/* Symbol: _ZN5dolby18EndpointParamCache6commitE15audio_devices_tb */
/* Demangled: dolby::EndpointParamCache::commit(audio_devices_t, bool) */
int _ZN5dolby18EndpointParamCache6commitE15audio_devices_tb(void);

/* Symbol: _ZTTN5dolby13EffectContext17DmsDeathRecipientE */
/* Demangled: VTT for dolby::EffectContext::DmsDeathRecipient */
extern void* _ZTTN5dolby13EffectContext17DmsDeathRecipientE;

/* Symbol: DAP_CPDP_PVT_asa_noise_query_memory */
/* Demangled: DAP_CPDP_PVT_asa_noise_query_memory */
int DAP_CPDP_PVT_asa_noise_query_memory(void);

/* Symbol: dlb_dct_twiddle_table16_L30_1 */
/* Demangled: dlb_dct_twiddle_table16_L30_1 */
extern void* dlb_dct_twiddle_table16_L30_1;

/* Symbol: dlb_fft_inv_scl_45 */
/* Demangled: dlb_fft_inv_scl_45 */
int dlb_fft_inv_scl_45(void);

/* Symbol: _ZN5dolby13EffectContext9setConfigEPK15effect_config_s */
/* Demangled: dolby::EffectContext::setConfig(effect_config_s const*) */
int _ZN5dolby13EffectContext9setConfigEPK15effect_config_s(void);

/* Symbol: dlb_dct_twiddle_table16_L30_2 */
/* Demangled: dlb_dct_twiddle_table16_L30_2 */
extern void* dlb_dct_twiddle_table16_L30_2;

/* Symbol: DLB_r4_fft_40_s */
/* Demangled: DLB_r4_fft_40_s */
int DLB_r4_fft_40_s(void);

/* Symbol: dap_cpdp_de_ducking_set */
/* Demangled: dap_cpdp_de_ducking_set */
int dap_cpdp_de_ducking_set(void);

/* Symbol: DAP_CPDP_PVT_calc_noise_weight_gain */
/* Demangled: DAP_CPDP_PVT_calc_noise_weight_gain */
int DAP_CPDP_PVT_calc_noise_weight_gain(void);

/* Symbol: DAP_CPDP_PVT_lvl_constrain_drc_scale */
/* Demangled: DAP_CPDP_PVT_lvl_constrain_drc_scale */
int DAP_CPDP_PVT_lvl_constrain_drc_scale(void);

/* Symbol: DAP_CPDP_PVT_SURROUND_COMPRESSOR_INV_130_ON_SURROUND_COMPRESSOR_APIDB_STEPS */
/* Demangled: DAP_CPDP_PVT_SURROUND_COMPRESSOR_INV_130_ON_SURROUND_COMPRESSOR_APIDB_STEPS */
extern void* DAP_CPDP_PVT_SURROUND_COMPRESSOR_INV_130_ON_SURROUND_COMPRESSOR_APIDB_STEPS;

/* Symbol: DLB_blk_Lconst_strict */
/* Demangled: DLB_blk_Lconst_strict */
int DLB_blk_Lconst_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L960 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L960 */
extern void* dlb_dct_twiddle_table16_rev_1_L960;

/* Symbol: DAP_CPDP_PVT_sv_init */
/* Demangled: DAP_CPDP_PVT_sv_init */
int DAP_CPDP_PVT_sv_init(void);

/* Symbol: DAP_CPDP_PVT_resi_close */
/* Demangled: DAP_CPDP_PVT_resi_close */
int DAP_CPDP_PVT_resi_close(void);

/* Symbol: DAP_CPDP_PVT_dlb_milib_set_binaural_enable */
/* Demangled: DAP_CPDP_PVT_dlb_milib_set_binaural_enable */
int DAP_CPDP_PVT_dlb_milib_set_binaural_enable(void);

/* Symbol: dlb_dct_twiddle_table16_1_L64 */
/* Demangled: dlb_dct_twiddle_table16_1_L64 */
extern void* dlb_dct_twiddle_table16_1_L64;

/* Symbol: dlb_fft_inv_scl_48 */
/* Demangled: dlb_fft_inv_scl_48 */
int dlb_fft_inv_scl_48(void);

/* Symbol: DLB_r4_inv_fft_72_s */
/* Demangled: DLB_r4_inv_fft_72_s */
int DLB_r4_inv_fft_72_s(void);

/* Symbol: DAP_CPDP_PVT_A_VIRTUAL_BASS_MOD_SHIFT_POS */
/* Demangled: DAP_CPDP_PVT_A_VIRTUAL_BASS_MOD_SHIFT_POS */
extern void* DAP_CPDP_PVT_A_VIRTUAL_BASS_MOD_SHIFT_POS;

/* Symbol: DAP_CPDP_PVT_acorr_init */
/* Demangled: DAP_CPDP_PVT_acorr_init */
int DAP_CPDP_PVT_acorr_init(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_set_enable */
/* Demangled: DAP_CPDP_PVT_hearing_protection_set_enable */
int DAP_CPDP_PVT_hearing_protection_set_enable(void);

/* Symbol: dlb_dct_twiddle_table16_L72_1 */
/* Demangled: dlb_dct_twiddle_table16_L72_1 */
extern void* dlb_dct_twiddle_table16_L72_1;

/* Symbol: _ZN5dolby14BufferProviderC1Ev */
/* Demangled: dolby::BufferProvider::BufferProvider() */
int _ZN5dolby14BufferProviderC1Ev(void);

/* Symbol: DAP_CPDP_PVT_virtual_bass_clear_vb_processing_buf */
/* Demangled: DAP_CPDP_PVT_virtual_bass_clear_vb_processing_buf */
int DAP_CPDP_PVT_virtual_bass_clear_vb_processing_buf(void);

/* Symbol: dlb_dct_twiddle_table16_L60 */
/* Demangled: dlb_dct_twiddle_table16_L60 */
extern void* dlb_dct_twiddle_table16_L60;

/* Symbol: dlb_dct_twiddle_table16_L72_2 */
/* Demangled: dlb_dct_twiddle_table16_L72_2 */
extern void* dlb_dct_twiddle_table16_L72_2;

/* Symbol: dlb_fft_fwd_scl_2048 */
/* Demangled: dlb_fft_fwd_scl_2048 */
int dlb_fft_fwd_scl_2048(void);

/* Symbol: A_NGCS_UPMIX_PLAN_7CH1_TO_7CH1_CC */
/* Demangled: A_NGCS_UPMIX_PLAN_7CH1_TO_7CH1_CC */
extern void* A_NGCS_UPMIX_PLAN_7CH1_TO_7CH1_CC;

/* Symbol: DAP_CPDP_PVT_de_speech_init */
/* Demangled: DAP_CPDP_PVT_de_speech_init */
int DAP_CPDP_PVT_de_speech_init(void);

/* Symbol: DAP_CPDP_PVT_zcr_query_scratch */
/* Demangled: DAP_CPDP_PVT_zcr_query_scratch */
int DAP_CPDP_PVT_zcr_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_ldn_smoothing_process */
/* Demangled: DAP_CPDP_PVT_ldn_smoothing_process */
int DAP_CPDP_PVT_ldn_smoothing_process(void);

/* Symbol: DLB_qmf_synthesisL_set_slot_increment */
/* Demangled: DLB_qmf_synthesisL_set_slot_increment */
int DLB_qmf_synthesisL_set_slot_increment(void);

/* Symbol: dlb_dct_twiddle_table16_L45_cos */
/* Demangled: dlb_dct_twiddle_table16_L45_cos */
extern void* dlb_dct_twiddle_table16_L45_cos;

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7D1D2 */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7D1D2 */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7D1D2;

/* Symbol: DAP_CPDP_PVT_de_stereo_process */
/* Demangled: DAP_CPDP_PVT_de_stereo_process */
int DAP_CPDP_PVT_de_stereo_process(void);

/* Symbol: DAP_CPDP_PVT_SURROUND_COMPRESSOR_NOISE_GATE_RECIPROCAL_DIFF */
/* Demangled: DAP_CPDP_PVT_SURROUND_COMPRESSOR_NOISE_GATE_RECIPROCAL_DIFF */
extern void* DAP_CPDP_PVT_SURROUND_COMPRESSOR_NOISE_GATE_RECIPROCAL_DIFF;

/* Symbol: dlb_qmf_filter_coeff_P4_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P4_vec_syn */
extern void* dlb_qmf_filter_coeff_P4_vec_syn;

/* Symbol: DAP_CPDP_PVT_classifier_reset */
/* Demangled: DAP_CPDP_PVT_classifier_reset */
int DAP_CPDP_PVT_classifier_reset(void);

/* Symbol: DLB_BLmaxBLL_inplace_strict */
/* Demangled: DLB_BLmaxBLL_inplace_strict */
int DLB_BLmaxBLL_inplace_strict(void);

/* Symbol: DAP_CPDP_PVT_mask_ICLD_subbandIdx */
/* Demangled: DAP_CPDP_PVT_mask_ICLD_subbandIdx */
extern void* DAP_CPDP_PVT_mask_ICLD_subbandIdx;

/* Symbol: dlb_dct_twiddle_table16_L64 */
/* Demangled: dlb_dct_twiddle_table16_L64 */
extern void* dlb_dct_twiddle_table16_L64;

/* Symbol: dlb_non_power_two_lengths */
/* Demangled: dlb_non_power_two_lengths */
extern void* dlb_non_power_two_lengths;

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_ana_process_legacy_twiddle */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_process_legacy_twiddle */
int DAP_CPDP_PVT_mfb_rcp10km_ana_process_legacy_twiddle(void);

/* Symbol: DLB_r4_cplx_inv_pair */
/* Demangled: DLB_r4_cplx_inv_pair */
int DLB_r4_cplx_inv_pair(void);

/* Symbol: DAP_CPDP_PVT_virtual_bass_coefs_get_pre_phase_adjust */
/* Demangled: DAP_CPDP_PVT_virtual_bass_coefs_get_pre_phase_adjust */
int DAP_CPDP_PVT_virtual_bass_coefs_get_pre_phase_adjust(void);

/* Symbol: DAP_CPDP_PVT_dap_pvt_regulator_tuning_info_init */
/* Demangled: DAP_CPDP_PVT_dap_pvt_regulator_tuning_info_init */
int DAP_CPDP_PVT_dap_pvt_regulator_tuning_info_init(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L480 */
/* Demangled: dlb_dct_twiddle_table16_rev_L480 */
extern void* dlb_dct_twiddle_table16_rev_L480;

/* Symbol: DLB_qmf_analysisL_close */
/* Demangled: DLB_qmf_analysisL_close */
int DLB_qmf_analysisL_close(void);

/* Symbol: _ZN5dolby9EffectDap7processEP14audio_buffer_sS2_ */
/* Demangled: dolby::EffectDap::process(audio_buffer_s*, audio_buffer_s*) */
int _ZN5dolby9EffectDap7processEP14audio_buffer_sS2_(void);

/* Symbol: dap_cpdp_virtual_bass_hybgains_set */
/* Demangled: dap_cpdp_virtual_bass_hybgains_set */
int dap_cpdp_virtual_bass_hybgains_set(void);

/* Symbol: DAP_CPDP_PVT_lvl_configure_smoothing_params */
/* Demangled: DAP_CPDP_PVT_lvl_configure_smoothing_params */
int DAP_CPDP_PVT_lvl_configure_smoothing_params(void);

/* Symbol: dlb_cos_32_full */
/* Demangled: dlb_cos_32_full */
extern void* dlb_cos_32_full;

/* Symbol: _ZN5dolby12DlbGenClass2D2Ev */
/* Demangled: dolby::DlbGenClass2::~DlbGenClass2() */
int _ZN5dolby12DlbGenClass2D2Ev(void);

/* Symbol: DAP_CPDP_PVT_hist_get_probability */
/* Demangled: DAP_CPDP_PVT_hist_get_probability */
int DAP_CPDP_PVT_hist_get_probability(void);

/* Symbol: DAP_CPDP_PVT_intelligent_eq_query_memory */
/* Demangled: DAP_CPDP_PVT_intelligent_eq_query_memory */
int DAP_CPDP_PVT_intelligent_eq_query_memory(void);

/* Symbol: DAP_CPDP_PVT_hdr_Latan2PP */
/* Demangled: DAP_CPDP_PVT_hdr_Latan2PP */
int DAP_CPDP_PVT_hdr_Latan2PP(void);

/* Symbol: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_5D1_TO_7D1DX */
/* Demangled: DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_5D1_TO_7D1DX */
extern void* DAP_CPDP_PVT_A_DAP_CPDP_HF_UPMIX_5D1_TO_7D1DX;

/* Symbol: dlb_cos_64_full */
/* Demangled: dlb_cos_64_full */
extern void* dlb_cos_64_full;

/* Symbol: _ZN5dolby11Dap2Process5closeEv */
/* Demangled: dolby::Dap2Process::close() */
int _ZN5dolby11Dap2Process5closeEv(void);

/* Symbol: DLB_vec_UnormLU_strict */
/* Demangled: DLB_vec_UnormLU_strict */
int DLB_vec_UnormLU_strict(void);

/* Symbol: dlb_fft_inv_scl_768 */
/* Demangled: dlb_fft_inv_scl_768 */
int dlb_fft_inv_scl_768(void);

/* Symbol: dap_cpdp_pvt_complex_equalizer_param_init */
/* Demangled: dap_cpdp_pvt_complex_equalizer_param_init */
int dap_cpdp_pvt_complex_equalizer_param_init(void);

/* Symbol: DAP_CPDP_PVT_spec_calc_init */
/* Demangled: DAP_CPDP_PVT_spec_calc_init */
int DAP_CPDP_PVT_spec_calc_init(void);

/* Symbol: dlb_fft_inv_usc_90 */
/* Demangled: dlb_fft_inv_usc_90 */
int dlb_fft_inv_usc_90(void);

/* Symbol: DLB_MFB_P10KM_P64ATM301_LEGACY */
/* Demangled: DLB_MFB_P10KM_P64ATM301_LEGACY */
extern void* DLB_MFB_P10KM_P64ATM301_LEGACY;

/* Symbol: DAP_CPDP_PVT_ltrt3d_stats_run */
/* Demangled: DAP_CPDP_PVT_ltrt3d_stats_run */
int DAP_CPDP_PVT_ltrt3d_stats_run(void);

/* Symbol: DLB_r4_fft_768 */
/* Demangled: DLB_r4_fft_768 */
int DLB_r4_fft_768(void);

/* Symbol: dlb_fft_fwd_scl_320 */
/* Demangled: dlb_fft_fwd_scl_320 */
int dlb_fft_fwd_scl_320(void);

/* Symbol: _ZN5dolby11Dap2ProcessD0Ev */
/* Demangled: dolby::Dap2Process::~Dap2Process() */
int _ZN5dolby11Dap2ProcessD0Ev(void);

/* Symbol: DAP_CPDP_PVT_volume_and_ieq_query_scratch */
/* Demangled: DAP_CPDP_PVT_volume_and_ieq_query_scratch */
int DAP_CPDP_PVT_volume_and_ieq_query_scratch(void);

/* Symbol: DLB_r4_inv_rfft_nn */
/* Demangled: DLB_r4_inv_rfft_nn */
int DLB_r4_inv_rfft_nn(void);

/* Symbol: DAP_CPDP_PVT_lfra_query_scratch */
/* Demangled: DAP_CPDP_PVT_lfra_query_scratch */
int DAP_CPDP_PVT_lfra_query_scratch(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L256 */
/* Demangled: dlb_dct_twiddle_table16_rev_L256 */
extern void* dlb_dct_twiddle_table16_rev_L256;

/* Symbol: _ZN5dolby18EndpointParamCacheD1Ev */
/* Demangled: dolby::EndpointParamCache::~EndpointParamCache() */
int _ZN5dolby18EndpointParamCacheD1Ev(void);

/* Symbol: DLB_blk_Liir2ssL_setup */
/* Demangled: DLB_blk_Liir2ssL_setup */
int DLB_blk_Liir2ssL_setup(void);

/* Symbol: DAP_CPDP_PVT_cmtx_destroy */
/* Demangled: DAP_CPDP_PVT_cmtx_destroy */
int DAP_CPDP_PVT_cmtx_destroy(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_end_chain_get_limiter_gain */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_end_chain_get_limiter_gain */
int DAP_CPDP_PVT_dap_cpdp_end_chain_get_limiter_gain(void);

/* Symbol: DAP_CPDP_PVT_ngcs_stats_run */
/* Demangled: DAP_CPDP_PVT_ngcs_stats_run */
int DAP_CPDP_PVT_ngcs_stats_run(void);

/* Symbol: dlb_cos_8_ast_mini_twiddle */
/* Demangled: dlb_cos_8_ast_mini_twiddle */
extern void* dlb_cos_8_ast_mini_twiddle;

/* Symbol: DAP_CPDP_PVT_dap_cpdp_get_lin_hf_gains */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_get_lin_hf_gains */
int DAP_CPDP_PVT_dap_cpdp_get_lin_hf_gains(void);

/* Symbol: DAP_CPDP_PVT_classifier_close */
/* Demangled: DAP_CPDP_PVT_classifier_close */
int DAP_CPDP_PVT_classifier_close(void);

/* Symbol: DLB_r4_inv_fft_40_s */
/* Demangled: DLB_r4_inv_fft_40_s */
int DLB_r4_inv_fft_40_s(void);

/* Symbol: dlb_fft_inv_usc_96 */
/* Demangled: dlb_fft_inv_usc_96 */
int dlb_fft_inv_usc_96(void);

/* Symbol: DAP_CPDP_PVT_newton_raphson_div */
/* Demangled: DAP_CPDP_PVT_newton_raphson_div */
int DAP_CPDP_PVT_newton_raphson_div(void);

/* Symbol: DAP_CPDP_PVT_mi_vec_exp */
/* Demangled: DAP_CPDP_PVT_mi_vec_exp */
int DAP_CPDP_PVT_mi_vec_exp(void);

/* Symbol: DLB_time_end */
/* Demangled: DLB_time_end */
int DLB_time_end(void);

/* Symbol: DAP_CPDP_PVT_dvlim_get_limiter_gain */
/* Demangled: DAP_CPDP_PVT_dvlim_get_limiter_gain */
int DAP_CPDP_PVT_dvlim_get_limiter_gain(void);

/* Symbol: dlb_fft_inv_usc_160 */
/* Demangled: dlb_fft_inv_usc_160 */
int dlb_fft_inv_usc_160(void);

/* Symbol: dap_cpdp_complex_equalizer_enable_set */
/* Demangled: dap_cpdp_complex_equalizer_enable_set */
int dap_cpdp_complex_equalizer_enable_set(void);

/* Symbol: dap_cpdp_process_optimizer_enable_set */
/* Demangled: dap_cpdp_process_optimizer_enable_set */
int dap_cpdp_process_optimizer_enable_set(void);

/* Symbol: DAP_CPDP_PVT_mfcc_flux_query_clip_mem */
/* Demangled: DAP_CPDP_PVT_mfcc_flux_query_clip_mem */
int DAP_CPDP_PVT_mfcc_flux_query_clip_mem(void);

/* Symbol: dlb_dct_twiddle_table16_1_L1024 */
/* Demangled: dlb_dct_twiddle_table16_1_L1024 */
extern void* dlb_dct_twiddle_table16_1_L1024;

/* Symbol: dlb_dct_twiddle_table16_L320 */
/* Demangled: dlb_dct_twiddle_table16_L320 */
extern void* dlb_dct_twiddle_table16_L320;

/* Symbol: dlb_fft_fwd_scl_90 */
/* Demangled: dlb_fft_fwd_scl_90 */
int dlb_fft_fwd_scl_90(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5dolby9DlbEffect13effectCommandEPP18effect_interface_sjjPvPjS4_ */
/* Demangled: dolby::DlbEffect::effectCommand(effect_interface_s**, unsigned int, unsigned int, void*, unsigned int*, void*) */
int _ZN5dolby9DlbEffect13effectCommandEPP18effect_interface_sjjPvPjS4_(void);

/* Symbol: dap_cpdp_audio_optimizer_enable_set */
/* Demangled: dap_cpdp_audio_optimizer_enable_set */
int dap_cpdp_audio_optimizer_enable_set(void);

/* Symbol: DAP_CPDP_PVT_nyquist_filters_844_synthesise_channel */
/* Demangled: DAP_CPDP_PVT_nyquist_filters_844_synthesise_channel */
int DAP_CPDP_PVT_nyquist_filters_844_synthesise_channel(void);

/* Symbol: _ZN5dolby18VoiceEffectContext20resetNoiseEstimationEPvj */
/* Demangled: dolby::VoiceEffectContext::resetNoiseEstimation(void*, unsigned int) */
int _ZN5dolby18VoiceEffectContext20resetNoiseEstimationEPvj(void);

/* Symbol: DAP_CPDP_PVT_hp_height_reverb_peek */
/* Demangled: DAP_CPDP_PVT_hp_height_reverb_peek */
int DAP_CPDP_PVT_hp_height_reverb_peek(void);

/* Symbol: _ZN5dolby19DapCrossfadeProcess13deviceChangedEv */
/* Demangled: dolby::DapCrossfadeProcess::deviceChanged() */
int _ZN5dolby19DapCrossfadeProcess13deviceChangedEv(void);

/* Symbol: DAP_CPDP_PVT_DAP_CPDP_NGCS_MEMORY_INFO */
/* Demangled: DAP_CPDP_PVT_DAP_CPDP_NGCS_MEMORY_INFO */
extern void* DAP_CPDP_PVT_DAP_CPDP_NGCS_MEMORY_INFO;

/* Symbol: DAP_CPDP_PVT_get_adaptive_profile_weight */
/* Demangled: DAP_CPDP_PVT_get_adaptive_profile_weight */
int DAP_CPDP_PVT_get_adaptive_profile_weight(void);

/* Symbol: DAP_CPDP_PVT_SURROUND_COMPRESSOR_RECIP_DIFF_T_MIN_MAX_DB */
/* Demangled: DAP_CPDP_PVT_SURROUND_COMPRESSOR_RECIP_DIFF_T_MIN_MAX_DB */
extern void* DAP_CPDP_PVT_SURROUND_COMPRESSOR_RECIP_DIFF_T_MIN_MAX_DB;

/* Symbol: dlb_fft_fwd_usc_180 */
/* Demangled: dlb_fft_fwd_usc_180 */
int dlb_fft_fwd_usc_180(void);

/* Symbol: A_NGCS_UPMIX_PLAN_5CH1_TO_7CH1_CC */
/* Demangled: A_NGCS_UPMIX_PLAN_5CH1_TO_7CH1_CC */
extern void* A_NGCS_UPMIX_PLAN_5CH1_TO_7CH1_CC;

/* Symbol: DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_712 */
/* Demangled: DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_712 */
extern void* DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_712;

/* Symbol: DLB_qmf_synthesisS_get_delay */
/* Demangled: DLB_qmf_synthesisS_get_delay */
int DLB_qmf_synthesisS_get_delay(void);

/* Symbol: _ZN5dolby11Dap2Process14dumpMIMetadataEPKc */
/* Demangled: dolby::Dap2Process::dumpMIMetadata(char const*) */
int _ZN5dolby11Dap2Process14dumpMIMetadataEPKc(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_coefs_find */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_coefs_find */
int DAP_CPDP_PVT_dap_cpdp_coefs_find(void);

/* Symbol: DAP_CPDP_PVT_virtual_bass_init */
/* Demangled: DAP_CPDP_PVT_virtual_bass_init */
int DAP_CPDP_PVT_virtual_bass_init(void);

/* Symbol: dlb_blk_LdelayU_flex */
/* Demangled: dlb_blk_LdelayU_flex */
int dlb_blk_LdelayU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L2 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L2 */
extern void* dlb_dct_twiddle_table16_rev_1_L2;

/* Symbol: dlb_dct_twiddle_table16_L8_cos */
/* Demangled: dlb_dct_twiddle_table16_L8_cos */
extern void* dlb_dct_twiddle_table16_L8_cos;

/* Symbol: _ZN5dolby17DlbBufferProvider9configureEi14audio_format_t20audio_channel_mask_t */
/* Demangled: dolby::DlbBufferProvider::configure(int, audio_format_t, audio_channel_mask_t) */
int _ZN5dolby17DlbBufferProvider9configureEi14audio_format_t20audio_channel_mask_t(void);

/* Symbol: _ZN5dolby14BufferProviderD1Ev */
/* Demangled: dolby::BufferProvider::~BufferProvider() */
int _ZN5dolby14BufferProviderD1Ev(void);

/* Symbol: DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_714 */
/* Demangled: DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_714 */
extern void* DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_714;

/* Symbol: DAP_CPDP_PVT_compressor_calcscale */
/* Demangled: DAP_CPDP_PVT_compressor_calcscale */
int DAP_CPDP_PVT_compressor_calcscale(void);

/* Symbol: dlb_blk_Lmix_shlUL_flex */
/* Demangled: dlb_blk_Lmix_shlUL_flex */
int dlb_blk_Lmix_shlUL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L72 */
/* Demangled: dlb_dct_twiddle_table16_1_L72 */
extern void* dlb_dct_twiddle_table16_1_L72;

/* Symbol: dlb_fft_fwd_scl_96 */
/* Demangled: dlb_fft_fwd_scl_96 */
int dlb_fft_fwd_scl_96(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L4 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L4 */
extern void* dlb_dct_twiddle_table16_rev_1_L4;

/* Symbol: DAP_CPDP_PVT_virtual_bass_query_scratch */
/* Demangled: DAP_CPDP_PVT_virtual_bass_query_scratch */
int DAP_CPDP_PVT_virtual_bass_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_de_compr_process */
/* Demangled: DAP_CPDP_PVT_de_compr_process */
int DAP_CPDP_PVT_de_compr_process(void);

/* Symbol: _ZN5dolby13EffectContext9setDeviceE15audio_devices_t */
/* Demangled: dolby::EffectContext::setDevice(audio_devices_t) */
int _ZN5dolby13EffectContext9setDeviceE15audio_devices_t(void);

/* Symbol: _ZN5dolby11Dap2Process16updateOutputModeEv */
/* Demangled: dolby::Dap2Process::updateOutputMode() */
int _ZN5dolby11Dap2Process16updateOutputModeEv(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L144 */
/* Demangled: dlb_dct_twiddle_table16_rev_L144 */
extern void* dlb_dct_twiddle_table16_rev_L144;

/* Symbol: dlb_dct_twiddle_table16_L256_cos */
/* Demangled: dlb_dct_twiddle_table16_L256_cos */
extern void* dlb_dct_twiddle_table16_L256_cos;

/* Symbol: DAP_CPDP_PVT_de_query_memory */
/* Demangled: DAP_CPDP_PVT_de_query_memory */
int DAP_CPDP_PVT_de_query_memory(void);

/* Symbol: DAP_CPDP_PVT_chroma_powspec_coef_tab */
/* Demangled: DAP_CPDP_PVT_chroma_powspec_coef_tab */
extern void* DAP_CPDP_PVT_chroma_powspec_coef_tab;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L8 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L8 */
extern void* dlb_dct_twiddle_table16_rev_1_L8;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEEE;

/* Symbol: _ZN5dolby12DlbGenClass2C1Ev */
/* Demangled: dolby::DlbGenClass2::DlbGenClass2() */
int _ZN5dolby12DlbGenClass2C1Ev(void);

/* Symbol: DAP_CPDP_PVT_gain_calc_process */
/* Demangled: DAP_CPDP_PVT_gain_calc_process */
int DAP_CPDP_PVT_gain_calc_process(void);

/* Symbol: DAP_CPDP_PVT_dvlim_init_smoothed_gain */
/* Demangled: DAP_CPDP_PVT_dvlim_init_smoothed_gain */
int DAP_CPDP_PVT_dvlim_init_smoothed_gain(void);

/* Symbol: DLB_blk_Liir2ssv2L_inplace_strict */
/* Demangled: DLB_blk_Liir2ssv2L_inplace_strict */
int DLB_blk_Liir2ssv2L_inplace_strict(void);

/* Symbol: DAP_CPDP_PVT_classifier_set_legacy_enable */
/* Demangled: DAP_CPDP_PVT_classifier_set_legacy_enable */
int DAP_CPDP_PVT_classifier_set_legacy_enable(void);

/* Symbol: DLB_blk_LmixLL_strict */
/* Demangled: DLB_blk_LmixLL_strict */
int DLB_blk_LmixLL_strict(void);

/* Symbol: dlb_blk_LmixLLLL_flex */
/* Demangled: dlb_blk_LmixLLLL_flex */
int dlb_blk_LmixLLLL_flex(void);

/* Symbol: dlb_odd_fft_cplx_inv_usc */
/* Demangled: dlb_odd_fft_cplx_inv_usc */
extern void* dlb_odd_fft_cplx_inv_usc;

/* Symbol: dlb_fft_inv_scl_2048 */
/* Demangled: dlb_fft_inv_scl_2048 */
int dlb_fft_inv_scl_2048(void);

/* Symbol: _ZN5dolby9EffectDap8setParamE15audio_devices_tiPKii */
/* Demangled: dolby::EffectDap::setParam(audio_devices_t, int, int const*, int) */
int _ZN5dolby9EffectDap8setParamE15audio_devices_tiPKii(void);

/* Symbol: _ZN5dolby25Ac4DecAudioBufferProvider9configureE14audio_format_tjj */
/* Demangled: dolby::Ac4DecAudioBufferProvider::configure(audio_format_t, unsigned int, unsigned int) */
int _ZN5dolby25Ac4DecAudioBufferProvider9configureE14audio_format_tjj(void);

/* Symbol: DAP_CPDP_PVT_gain_calc_masking_correction */
/* Demangled: DAP_CPDP_PVT_gain_calc_masking_correction */
int DAP_CPDP_PVT_gain_calc_masking_correction(void);

/* Symbol: dlb_dct_twiddle_table16_L72 */
/* Demangled: dlb_dct_twiddle_table16_L72 */
extern void* dlb_dct_twiddle_table16_L72;

/* Symbol: DLB_qmf_analysisS_query_mem */
/* Demangled: DLB_qmf_analysisS_query_mem */
int DLB_qmf_analysisS_query_mem(void);

/* Symbol: _ZN5dolby9DlbEffect6createEPK12audio_uuid_siiPPP18effect_interface_s */
/* Demangled: dolby::DlbEffect::create(audio_uuid_s const*, int, int, effect_interface_s***) */
int _ZN5dolby9DlbEffect6createEPK12audio_uuid_siiPPP18effect_interface_s(void);

/* Symbol: _ZTVN5dolby13EffectContextE */
/* Demangled: vtable for dolby::EffectContext */
extern void* _ZTVN5dolby13EffectContextE;

/* Symbol: DAP_CPDP_PVT_arle_sibilance_init */
/* Demangled: DAP_CPDP_PVT_arle_sibilance_init */
int DAP_CPDP_PVT_arle_sibilance_init(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L512 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L512 */
extern void* dlb_dct_twiddle_table16_rev_1_L512;

/* Symbol: DAP_CPDP_PVT_visualizer_bands_store */
/* Demangled: DAP_CPDP_PVT_visualizer_bands_store */
int DAP_CPDP_PVT_visualizer_bands_store(void);

/* Symbol: DAP_CPDP_PVT_resi_frame_process */
/* Demangled: DAP_CPDP_PVT_resi_frame_process */
int DAP_CPDP_PVT_resi_frame_process(void);

/* Symbol: DAP_CPDP_PVT_sbpp_reset */
/* Demangled: DAP_CPDP_PVT_sbpp_reset */
int DAP_CPDP_PVT_sbpp_reset(void);

/* Symbol: dlb_blk_delay_clear_flex */
/* Demangled: dlb_blk_delay_clear_flex */
int dlb_blk_delay_clear_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L144_cos */
/* Demangled: dlb_dct_twiddle_table16_L144_cos */
extern void* dlb_dct_twiddle_table16_L144_cos;

/* Symbol: dlb_dct_twiddle_table16_L72_cos */
/* Demangled: dlb_dct_twiddle_table16_L72_cos */
extern void* dlb_dct_twiddle_table16_L72_cos;

/* Symbol: _ZN5dolby9EffectDapD1Ev */
/* Demangled: dolby::EffectDap::~EffectDap() */
int _ZN5dolby9EffectDapD1Ev(void);

/* Symbol: dap_cpdp_ieq_bands_set */
/* Demangled: dap_cpdp_ieq_bands_set */
int dap_cpdp_ieq_bands_set(void);

/* Symbol: DAP_CPDP_PVT_asa_calculate_skewness */
/* Demangled: DAP_CPDP_PVT_asa_calculate_skewness */
int DAP_CPDP_PVT_asa_calculate_skewness(void);

/* Symbol: DAP_UPMIX_MODE_STEREO_TO_7D1D4_GAMING */
/* Demangled: DAP_UPMIX_MODE_STEREO_TO_7D1D4_GAMING */
extern void* DAP_UPMIX_MODE_STEREO_TO_7D1D4_GAMING;

/* Symbol: DAP_CPDP_PVT_div_table */
/* Demangled: DAP_CPDP_PVT_div_table */
extern void* DAP_CPDP_PVT_div_table;

/* Symbol: DAP_CPDP_PVT_a_ds_idx_44k1 */
/* Demangled: DAP_CPDP_PVT_a_ds_idx_44k1 */
extern void* DAP_CPDP_PVT_a_ds_idx_44k1;

/* Symbol: DLB_r4_inv_fft_2048_s */
/* Demangled: DLB_r4_inv_fft_2048_s */
int DLB_r4_inv_fft_2048_s(void);

/* Symbol: _ZN5dolby11Dap2Process15validateLicenseEv */
/* Demangled: dolby::Dap2Process::validateLicense() */
int _ZN5dolby11Dap2Process15validateLicenseEv(void);

/* Symbol: dlb_blk_Liir1_shl_addLL_flex */
/* Demangled: dlb_blk_Liir1_shl_addLL_flex */
int dlb_blk_Liir1_shl_addLL_flex(void);

/* Symbol: DLB_qmf_synthesisS_copy_states */
/* Demangled: DLB_qmf_synthesisS_copy_states */
int DLB_qmf_synthesisS_copy_states(void);

/* Symbol: _ZNK7android6VectorIjE8do_splatEPvPKvj */
/* Demangled: android::Vector<unsigned int>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIjE8do_splatEPvPKvj(void);

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7D1D2 */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7D1D2 */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7D1D2;

/* Symbol: DAP_CPDP_PVT_ngcs_diffuse_reset */
/* Demangled: DAP_CPDP_PVT_ngcs_diffuse_reset */
int DAP_CPDP_PVT_ngcs_diffuse_reset(void);

/* Symbol: DLB_CLmix4CL4SU_strict */
/* Demangled: DLB_CLmix4CL4SU_strict */
int DLB_CLmix4CL4SU_strict(void);

/* Symbol: _ZN5dolby13EffectContext19connectDolbyServiceEN7android2spIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEi */
/* Demangled: dolby::EffectContext::connectDolbyService(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks>, int) */
int _ZN5dolby13EffectContext19connectDolbyServiceEN7android2spIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEi(void);

/* Symbol: dap_cpdp_headphone_virtualizer_steerer_source_distance_set */
/* Demangled: dap_cpdp_headphone_virtualizer_steerer_source_distance_set */
int dap_cpdp_headphone_virtualizer_steerer_source_distance_set(void);

/* Symbol: DAP_CPDP_PVT_sv_clear_center_state */
/* Demangled: DAP_CPDP_PVT_sv_clear_center_state */
int DAP_CPDP_PVT_sv_clear_center_state(void);

/* Symbol: DAP_CPDP_PVT_legq_apply_hcqmf_scale_gain_inplace_4 */
/* Demangled: DAP_CPDP_PVT_legq_apply_hcqmf_scale_gain_inplace_4 */
int DAP_CPDP_PVT_legq_apply_hcqmf_scale_gain_inplace_4(void);

/* Symbol: AELI */
/* Demangled: AELI */
extern void* AELI;

/* Symbol: _ZN5dolby11Dap2Process8getParamEiPiS1_ */
/* Demangled: dolby::Dap2Process::getParam(int, int*, int*) */
int _ZN5dolby11Dap2Process8getParamEiPiS1_(void);

/* Symbol: dap_cpdp_ieq_amount_set */
/* Demangled: dap_cpdp_ieq_amount_set */
int dap_cpdp_ieq_amount_set(void);

/* Symbol: DAP_CPDP_PVT_gain_clvec_process_inplace */
/* Demangled: DAP_CPDP_PVT_gain_clvec_process_inplace */
int DAP_CPDP_PVT_gain_clvec_process_inplace(void);

/* Symbol: DAP_CPDP_PVT_A_LTRT3D_PASSIVE_GAIN_512 */
/* Demangled: DAP_CPDP_PVT_A_LTRT3D_PASSIVE_GAIN_512 */
extern void* DAP_CPDP_PVT_A_LTRT3D_PASSIVE_GAIN_512;

/* Symbol: DLB_r4_inv_fft_576 */
/* Demangled: DLB_r4_inv_fft_576 */
int DLB_r4_inv_fft_576(void);

/* Symbol: _ZNK7android6VectorIjE12do_constructEPvj */
/* Demangled: android::Vector<unsigned int>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIjE12do_constructEPvj(void);

/* Symbol: DAP_CPDP_PVT_asa_normlogsone_2sone */
/* Demangled: DAP_CPDP_PVT_asa_normlogsone_2sone */
int DAP_CPDP_PVT_asa_normlogsone_2sone(void);

/* Symbol: dlb_fft_inv_usc_288 */
/* Demangled: dlb_fft_inv_usc_288 */
int dlb_fft_inv_usc_288(void);

/* Symbol: DAP_CPDP_PVT_asa_event_process */
/* Demangled: DAP_CPDP_PVT_asa_event_process */
int DAP_CPDP_PVT_asa_event_process(void);

/* Symbol: DAP_CPDP_PVT_classifier_query_memory */
/* Demangled: DAP_CPDP_PVT_classifier_query_memory */
int DAP_CPDP_PVT_classifier_query_memory(void);

/* Symbol: dlb_qmf_synthesisL_open */
/* Demangled: dlb_qmf_synthesisL_open */
int dlb_qmf_synthesisL_open(void);

/* Symbol: dlb_dct4_postmodulation_shl0 */
/* Demangled: dlb_dct4_postmodulation_shl0 */
int dlb_dct4_postmodulation_shl0(void);

/* Symbol: DAP_CPDP_PVT_mi_internal_query_memory */
/* Demangled: DAP_CPDP_PVT_mi_internal_query_memory */
int DAP_CPDP_PVT_mi_internal_query_memory(void);

/* Symbol: DAP_CPDP_PVT_AP_LDN_SL_INV_DIFFS */
/* Demangled: DAP_CPDP_PVT_AP_LDN_SL_INV_DIFFS */
extern void* DAP_CPDP_PVT_AP_LDN_SL_INV_DIFFS;

/* Symbol: dlb_dct4_postmodulation_shl1 */
/* Demangled: dlb_dct4_postmodulation_shl1 */
int dlb_dct4_postmodulation_shl1(void);

/* Symbol: dap_cpdp_pvt_mi_update_control */
/* Demangled: dap_cpdp_pvt_mi_update_control */
int dap_cpdp_pvt_mi_update_control(void);

/* Symbol: dlb_dct4_postmodulation_shl2 */
/* Demangled: dlb_dct4_postmodulation_shl2 */
int dlb_dct4_postmodulation_shl2(void);

/* Symbol: _ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_DEVICEERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_SET_DEVICE(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_DEVICEERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: DAP_CPDP_PVT_ieq_reset */
/* Demangled: DAP_CPDP_PVT_ieq_reset */
int DAP_CPDP_PVT_ieq_reset(void);

/* Symbol: DLB_r4_fft_60_s */
/* Demangled: DLB_r4_fft_60_s */
int DLB_r4_fft_60_s(void);

/* Symbol: DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC */
/* Demangled: DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC */
extern void* DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC;

/* Symbol: DAP_CPDP_PVT_hybrid_filter_synthesis_close */
/* Demangled: DAP_CPDP_PVT_hybrid_filter_synthesis_close */
int DAP_CPDP_PVT_hybrid_filter_synthesis_close(void);

/* Symbol: DAP_CPDP_PVT_dlb_milib_open */
/* Demangled: DAP_CPDP_PVT_dlb_milib_open */
int DAP_CPDP_PVT_dlb_milib_open(void);

/* Symbol: DLB_blk_Lfir2L_strict */
/* Demangled: DLB_blk_Lfir2L_strict */
int DLB_blk_Lfir2L_strict(void);

/* Symbol: _ZN5dolby16DlbBufferAdapter10setEnabledEb */
/* Demangled: dolby::DlbBufferAdapter::setEnabled(bool) */
int _ZN5dolby16DlbBufferAdapter10setEnabledEb(void);

/* Symbol: DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF1_COMPENSATION */
/* Demangled: DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF1_COMPENSATION */
extern void* DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF1_COMPENSATION;

/* Symbol: init_Phase90Hilbert */
/* Demangled: init_Phase90Hilbert */
int init_Phase90Hilbert(void);

/* Symbol: dlb_cos_8_full */
/* Demangled: dlb_cos_8_full */
extern void* dlb_cos_8_full;

/* Symbol: DAP_CPDP_PVT_hdr_Plog2P_poly3 */
/* Demangled: DAP_CPDP_PVT_hdr_Plog2P_poly3 */
int DAP_CPDP_PVT_hdr_Plog2P_poly3(void);

/* Symbol: DAP_CPDP_PVT_sbpp_close */
/* Demangled: DAP_CPDP_PVT_sbpp_close */
int DAP_CPDP_PVT_sbpp_close(void);

/* Symbol: DAP_CPDP_PVT_hamming_win_1024_tab */
/* Demangled: DAP_CPDP_PVT_hamming_win_1024_tab */
extern void* DAP_CPDP_PVT_hamming_win_1024_tab;

/* Symbol: DLB_Sqmf_synthesisL */
/* Demangled: DLB_Sqmf_synthesisL */
int DLB_Sqmf_synthesisL(void);

/* Symbol: dlb_dct_twiddle_table16_L240_cos */
/* Demangled: dlb_dct_twiddle_table16_L240_cos */
extern void* dlb_dct_twiddle_table16_L240_cos;

/* Symbol: DAP_CPDP_PVT_de_flux_state_clear */
/* Demangled: DAP_CPDP_PVT_de_flux_state_clear */
int DAP_CPDP_PVT_de_flux_state_clear(void);

/* Symbol: DAP_CPDP_PVT_ieq_calc_loudness */
/* Demangled: DAP_CPDP_PVT_ieq_calc_loudness */
int DAP_CPDP_PVT_ieq_calc_loudness(void);

/* Symbol: _ZN5dolby11Dap2Process17updateInputFormatEv */
/* Demangled: dolby::Dap2Process::updateInputFormat() */
int _ZN5dolby11Dap2Process17updateInputFormatEv(void);

/* Symbol: dap_cpdp_prepare */
/* Demangled: dap_cpdp_prepare */
int dap_cpdp_prepare(void);

/* Symbol: dlb_fft_inv_scl_60 */
/* Demangled: dlb_fft_inv_scl_60 */
int dlb_fft_inv_scl_60(void);

/* Symbol: DAP_CPDP_PVT_delay_line_peek_indirect */
/* Demangled: DAP_CPDP_PVT_delay_line_peek_indirect */
int DAP_CPDP_PVT_delay_line_peek_indirect(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvj(void);

/* Symbol: A_NGCS_UPMIX_PLAN_STEREO_TO_5D1D2 */
/* Demangled: A_NGCS_UPMIX_PLAN_STEREO_TO_5D1D2 */
extern void* A_NGCS_UPMIX_PLAN_STEREO_TO_5D1D2;

/* Symbol: DAP_CPDP_PVT_mi_pre_reset */
/* Demangled: DAP_CPDP_PVT_mi_pre_reset */
int DAP_CPDP_PVT_mi_pre_reset(void);

/* Symbol: DAP_CPDP_PVT_sbsc_init */
/* Demangled: DAP_CPDP_PVT_sbsc_init */
int DAP_CPDP_PVT_sbsc_init(void);

/* Symbol: DAP_CPDP_PVT_spec_calc_query_memory */
/* Demangled: DAP_CPDP_PVT_spec_calc_query_memory */
int DAP_CPDP_PVT_spec_calc_query_memory(void);

/* Symbol: DLB_blk_LminLLL_strict */
/* Demangled: DLB_blk_LminLLL_strict */
int DLB_blk_LminLLL_strict(void);

/* Symbol: DAP_CPDP_PVT_sben_close */
/* Demangled: DAP_CPDP_PVT_sben_close */
int DAP_CPDP_PVT_sben_close(void);

/* Symbol: _ZN5dolby18VoiceEffectContextC2Ev */
/* Demangled: dolby::VoiceEffectContext::VoiceEffectContext() */
int _ZN5dolby18VoiceEffectContextC2Ev(void);

/* Symbol: dlb_blk_Liir1_shlLU_flex */
/* Demangled: dlb_blk_Liir1_shlLU_flex */
int dlb_blk_Liir1_shlLU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L576 */
/* Demangled: dlb_dct_twiddle_table16_1_L576 */
extern void* dlb_dct_twiddle_table16_1_L576;

/* Symbol: dlb_fft_inv_scl_64 */
/* Demangled: dlb_fft_inv_scl_64 */
int dlb_fft_inv_scl_64(void);

/* Symbol: DAP_CPDP_PVT_asa_noise_init */
/* Demangled: DAP_CPDP_PVT_asa_noise_init */
int DAP_CPDP_PVT_asa_noise_init(void);

/* Symbol: dap_cpdp_pvt_mi_param_init */
/* Demangled: dap_cpdp_pvt_mi_param_init */
int dap_cpdp_pvt_mi_param_init(void);

/* Symbol: DAP_CPDP_PVT_delay_line_clvec_size_query */
/* Demangled: DAP_CPDP_PVT_delay_line_clvec_size_query */
int DAP_CPDP_PVT_delay_line_clvec_size_query(void);

/* Symbol: dlb_fft_fwd_usc_192 */
/* Demangled: dlb_fft_fwd_usc_192 */
int dlb_fft_fwd_usc_192(void);

/* Symbol: _ZN5dolby12DlbGenClass2D1Ev */
/* Demangled: dolby::DlbGenClass2::~DlbGenClass2() */
int _ZN5dolby12DlbGenClass2D1Ev(void);

/* Symbol: DAP_CPDP_PVT_mi_buffer_query_memory */
/* Demangled: DAP_CPDP_PVT_mi_buffer_query_memory */
int DAP_CPDP_PVT_mi_buffer_query_memory(void);

/* Symbol: dlb_blk_LabsL_flex */
/* Demangled: dlb_blk_LabsL_flex */
int dlb_blk_LabsL_flex(void);

/* Symbol: _ZN5dolby9DlbEffect28handle_EFFECT_CMD_GET_CONFIGERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_GET_CONFIG(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect28handle_EFFECT_CMD_GET_CONFIGERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: DAP_CPDP_PVT_get_deq_event_weight */
/* Demangled: DAP_CPDP_PVT_get_deq_event_weight */
int DAP_CPDP_PVT_get_deq_event_weight(void);

/* Symbol: DAP_CPDP_PVT_dlb_ex_avg_filter_init */
/* Demangled: DAP_CPDP_PVT_dlb_ex_avg_filter_init */
int DAP_CPDP_PVT_dlb_ex_avg_filter_init(void);

/* Symbol: dlb_dctII_unscaled */
/* Demangled: dlb_dctII_unscaled */
int dlb_dctII_unscaled(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L384 */
/* Demangled: dlb_dct_twiddle_table16_rev_L384 */
extern void* dlb_dct_twiddle_table16_rev_L384;

/* Symbol: dlb_dct_twiddle_table16_L90_cos */
/* Demangled: dlb_dct_twiddle_table16_L90_cos */
extern void* dlb_dct_twiddle_table16_L90_cos;

/* Symbol: DAP_CPDP_PVT_de_stereo_clear */
/* Demangled: DAP_CPDP_PVT_de_stereo_clear */
int DAP_CPDP_PVT_de_stereo_clear(void);

/* Symbol: DAP_CPDP_PVT_acorr_query_scratch */
/* Demangled: DAP_CPDP_PVT_acorr_query_scratch */
int DAP_CPDP_PVT_acorr_query_scratch(void);

/* Symbol: dlb_vec_UnormLU_flex */
/* Demangled: dlb_vec_UnormLU_flex */
int dlb_vec_UnormLU_flex(void);

/* Symbol: dap_cpdp_mi2dialog_enhancer_steering_enable_set */
/* Demangled: dap_cpdp_mi2dialog_enhancer_steering_enable_set */
int dap_cpdp_mi2dialog_enhancer_steering_enable_set(void);

/* Symbol: A_NGCS_UPMIX_PLAN_5CH1_TO_5D1D2 */
/* Demangled: A_NGCS_UPMIX_PLAN_5CH1_TO_5D1D2 */
extern void* A_NGCS_UPMIX_PLAN_5CH1_TO_5D1D2;

/* Symbol: DAP_CPDP_PVT_sbsc_reset */
/* Demangled: DAP_CPDP_PVT_sbsc_reset */
int DAP_CPDP_PVT_sbsc_reset(void);

/* Symbol: DLB_CLshlCLUU_strict */
/* Demangled: DLB_CLshlCLUU_strict */
int DLB_CLshlCLUU_strict(void);

/* Symbol: _ZN5dolby16DapEffectContext9setConfigEPK15effect_config_s */
/* Demangled: dolby::DapEffectContext::setConfig(effect_config_s const*) */
int _ZN5dolby16DapEffectContext9setConfigEPK15effect_config_s(void);

/* Symbol: dap_cpdp_mi2virtualizer_binaural_steering_enable_set */
/* Demangled: dap_cpdp_mi2virtualizer_binaural_steering_enable_set */
int dap_cpdp_mi2virtualizer_binaural_steering_enable_set(void);

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_ana_query_mem */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_query_mem */
int DAP_CPDP_PVT_mfb_rcp10km_ana_query_mem(void);

/* Symbol: A_NGCS_UPMIX_PLAN_7CH1_TO_7CH1 */
/* Demangled: A_NGCS_UPMIX_PLAN_7CH1_TO_7CH1 */
extern void* A_NGCS_UPMIX_PLAN_7CH1_TO_7CH1;

/* Symbol: dlb_inverseModulationComplex */
/* Demangled: dlb_inverseModulationComplex */
int dlb_inverseModulationComplex(void);

/* Symbol: DLB_time_lt */
/* Demangled: DLB_time_lt */
int DLB_time_lt(void);

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_0 */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_0 */
int DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_0(void);

/* Symbol: DAP_CPDP_PVT_sbsc_query_clip_mem */
/* Demangled: DAP_CPDP_PVT_sbsc_query_clip_mem */
int DAP_CPDP_PVT_sbsc_query_clip_mem(void);

/* Symbol: DLB_r4_fft_12 */
/* Demangled: DLB_r4_fft_12 */
int DLB_r4_fft_12(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_end_chain_init */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_end_chain_init */
int DAP_CPDP_PVT_dap_cpdp_end_chain_init(void);

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_1 */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_1 */
int DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_1(void);

/* Symbol: dap_cpdp_postgain_set */
/* Demangled: dap_cpdp_postgain_set */
int dap_cpdp_postgain_set(void);

/* Symbol: _ZN5dolby14BufferProvider9setBufferEPv */
/* Demangled: dolby::BufferProvider::setBuffer(void*) */
int _ZN5dolby14BufferProvider9setBufferEPv(void);

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_2 */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_2 */
int DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_2(void);

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_syn_process_symmetric */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_process_symmetric */
int DAP_CPDP_PVT_mfb_rcp10km_syn_process_symmetric(void);

/* Symbol: dlb_blk_delayL_flex */
/* Demangled: dlb_blk_delayL_flex */
int dlb_blk_delayL_flex(void);

/* Symbol: DAP_CPDP_PVT_dap_pvt_graphic_equalizer_update_control */
/* Demangled: DAP_CPDP_PVT_dap_pvt_graphic_equalizer_update_control */
int DAP_CPDP_PVT_dap_pvt_graphic_equalizer_update_control(void);

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_3 */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_3 */
int DAP_CPDP_PVT_mfb_rcp10km_syn_process_even_3(void);

/* Symbol: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_TAB_32K */
/* Demangled: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_TAB_32K */
extern void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_TAB_32K;

/* Symbol: DLB_r4_fft_15 */
/* Demangled: DLB_r4_fft_15 */
int DLB_r4_fft_15(void);

/* Symbol: dlb_fft_inv_scl_2 */
/* Demangled: dlb_fft_inv_scl_2 */
int dlb_fft_inv_scl_2(void);

/* Symbol: dap_cpdp_hearing_protection_rms_averaging_time_win_len_set */
/* Demangled: dap_cpdp_hearing_protection_rms_averaging_time_win_len_set */
int dap_cpdp_hearing_protection_rms_averaging_time_win_len_set(void);

/* Symbol: DAP_CPDP_PVT_mi_pre_close */
/* Demangled: DAP_CPDP_PVT_mi_pre_close */
int DAP_CPDP_PVT_mi_pre_close(void);

/* Symbol: DLB_r4_fft_16 */
/* Demangled: DLB_r4_fft_16 */
int DLB_r4_fft_16(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcess10accumulateEPiS1_S1_iff */
/* Demangled: dolby::DlbCrossfadeProcess::accumulate(int*, int*, int*, int, float, float) */
int _ZN5dolby19DlbCrossfadeProcess10accumulateEPiS1_S1_iff(void);

/* Symbol: DLB_r4_inv_fft_60_s */
/* Demangled: DLB_r4_inv_fft_60_s */
int DLB_r4_inv_fft_60_s(void);

/* Symbol: dlb_fft_inv_scl_4 */
/* Demangled: dlb_fft_inv_scl_4 */
int dlb_fft_inv_scl_4(void);

/* Symbol: DLB_hybrid_analysisCL_close */
/* Demangled: DLB_hybrid_analysisCL_close */
int DLB_hybrid_analysisCL_close(void);

/* Symbol: _ZN5dolby16DapEffectContext14setParamValuesEPvj */
/* Demangled: dolby::DapEffectContext::setParamValues(void*, unsigned int) */
int _ZN5dolby16DapEffectContext14setParamValuesEPvj(void);

/* Symbol: dap_cpdp_woofer_regulator_tuning_set */
/* Demangled: dap_cpdp_woofer_regulator_tuning_set */
int dap_cpdp_woofer_regulator_tuning_set(void);

/* Symbol: DAP_CPDP_PVT_hp_height_process */
/* Demangled: DAP_CPDP_PVT_hp_height_process */
int DAP_CPDP_PVT_hp_height_process(void);

/* Symbol: dlb_dct_twiddle_table16_L60_1 */
/* Demangled: dlb_dct_twiddle_table16_L60_1 */
extern void* dlb_dct_twiddle_table16_L60_1;

/* Symbol: dlb_fft_inv_scl_6 */
/* Demangled: dlb_fft_inv_scl_6 */
int dlb_fft_inv_scl_6(void);

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_syn_query_scratch */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_query_scratch */
int DAP_CPDP_PVT_mfb_rcp10km_syn_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_chroma_init */
/* Demangled: DAP_CPDP_PVT_chroma_init */
int DAP_CPDP_PVT_chroma_init(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_diffuse_gains_init_scratch */
/* Demangled: DAP_CPDP_PVT_ltrt3d_diffuse_gains_init_scratch */
int DAP_CPDP_PVT_ltrt3d_diffuse_gains_init_scratch(void);

/* Symbol: DLB_blk_Liir2ssv1_usmpL_strict */
/* Demangled: DLB_blk_Liir2ssv1_usmpL_strict */
int DLB_blk_Liir2ssv1_usmpL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L60_2 */
/* Demangled: dlb_dct_twiddle_table16_L60_2 */
extern void* dlb_dct_twiddle_table16_L60_2;

/* Symbol: DLB_r4_inv_fft_120 */
/* Demangled: DLB_r4_inv_fft_120 */
int DLB_r4_inv_fft_120(void);

/* Symbol: DLB_r4_fft_1024 */
/* Demangled: DLB_r4_fft_1024 */
int DLB_r4_fft_1024(void);

/* Symbol: dlb_fft_inv_scl_320 */
/* Demangled: dlb_fft_inv_scl_320 */
int dlb_fft_inv_scl_320(void);

/* Symbol: DAP_CPDP_PVT_hfra_init */
/* Demangled: DAP_CPDP_PVT_hfra_init */
int DAP_CPDP_PVT_hfra_init(void);

/* Symbol: dlb_fft_inv_scl_8 */
/* Demangled: dlb_fft_inv_scl_8 */
int dlb_fft_inv_scl_8(void);

/* Symbol: DLB_qmf_analysisS_set_slot_increment */
/* Demangled: DLB_qmf_analysisS_set_slot_increment */
int DLB_qmf_analysisS_set_slot_increment(void);

/* Symbol: DAP_CPDP_PVT_hybrid_filter_synthesis_query_memory */
/* Demangled: DAP_CPDP_PVT_hybrid_filter_synthesis_query_memory */
int DAP_CPDP_PVT_hybrid_filter_synthesis_query_memory(void);

/* Symbol: dlb_blk_Liir1xL_flex */
/* Demangled: dlb_blk_Liir1xL_flex */
int dlb_blk_Liir1xL_flex(void);

/* Symbol: dlb_blk_Liir2df1L_flex */
/* Demangled: dlb_blk_Liir2df1L_flex */
int dlb_blk_Liir2df1L_flex(void);

/* Symbol: DLB_r4_fft_320 */
/* Demangled: DLB_r4_fft_320 */
int DLB_r4_fft_320(void);

/* Symbol: dlb_hyb_p8_13 */
/* Demangled: dlb_hyb_p8_13 */
extern void* dlb_hyb_p8_13;

/* Symbol: DLB_Lunload_CLqmf_analysisL_filter_state */
/* Demangled: DLB_Lunload_CLqmf_analysisL_filter_state */
int DLB_Lunload_CLqmf_analysisL_filter_state(void);

/* Symbol: dlb_cos_16_full */
/* Demangled: dlb_cos_16_full */
extern void* dlb_cos_16_full;

/* Symbol: _ZN5dolby14BufferProviderD0Ev */
/* Demangled: dolby::BufferProvider::~BufferProvider() */
int _ZN5dolby14BufferProviderD0Ev(void);

/* Symbol: DLB_BLmpy_scaleBLSU_inplace_strict */
/* Demangled: DLB_BLmpy_scaleBLSU_inplace_strict */
int DLB_BLmpy_scaleBLSU_inplace_strict(void);

/* Symbol: dap_cpdp_end_chain_get_woofer_limiter_gain */
/* Demangled: dap_cpdp_end_chain_get_woofer_limiter_gain */
int dap_cpdp_end_chain_get_woofer_limiter_gain(void);

/* Symbol: DAP_CPDP_PVT_de_powmin_state_init */
/* Demangled: DAP_CPDP_PVT_de_powmin_state_init */
int DAP_CPDP_PVT_de_powmin_state_init(void);

/* Symbol: DAP_CPDP_PVT_a_dvlim_win_32 */
/* Demangled: DAP_CPDP_PVT_a_dvlim_win_32 */
extern void* DAP_CPDP_PVT_a_dvlim_win_32;

/* Symbol: DAP_CPDP_PVT_mi_dap_set_de_amount */
/* Demangled: DAP_CPDP_PVT_mi_dap_set_de_amount */
int DAP_CPDP_PVT_mi_dap_set_de_amount(void);

/* Symbol: DAP_CPDP_PVT_sbsc_close */
/* Demangled: DAP_CPDP_PVT_sbsc_close */
int DAP_CPDP_PVT_sbsc_close(void);

/* Symbol: dap_cpdp_rs_enable_set */
/* Demangled: dap_cpdp_rs_enable_set */
int dap_cpdp_rs_enable_set(void);

/* Symbol: dap_cpdp_vis_bands_get */
/* Demangled: dap_cpdp_vis_bands_get */
int dap_cpdp_vis_bands_get(void);

/* Symbol: DAP_CPDP_PVT_chroma_spec_index_tab */
/* Demangled: DAP_CPDP_PVT_chroma_spec_index_tab */
extern void* DAP_CPDP_PVT_chroma_spec_index_tab;

/* Symbol: DAP_CPDP_PVT_sben_onset_to_rhythm */
/* Demangled: DAP_CPDP_PVT_sben_onset_to_rhythm */
int DAP_CPDP_PVT_sben_onset_to_rhythm(void);

/* Symbol: DAP_CPDP_PVT_spec_flux_query_clip_mem */
/* Demangled: DAP_CPDP_PVT_spec_flux_query_clip_mem */
int DAP_CPDP_PVT_spec_flux_query_clip_mem(void);

/* Symbol: _ZN5dolby17DlbBufferProviderC2Ev */
/* Demangled: dolby::DlbBufferProvider::DlbBufferProvider() */
int _ZN5dolby17DlbBufferProviderC2Ev(void);

/* Symbol: _ZN5dolby12DlbGenClass212icasecompareERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: dolby::DlbGenClass2::icasecompare(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5dolby12DlbGenClass212icasecompareERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L640 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L640 */
extern void* dlb_dct_twiddle_table16_rev_1_L640;

/* Symbol: dlb_fft_fwd_scl_576 */
/* Demangled: dlb_fft_fwd_scl_576 */
int dlb_fft_fwd_scl_576(void);

/* Symbol: dap_cpdp_hearing_protection_attenuation_release_time_set */
/* Demangled: dap_cpdp_hearing_protection_attenuation_release_time_set */
int dap_cpdp_hearing_protection_attenuation_release_time_set(void);

/* Symbol: DAP_CPDP_PVT_visualizer_query_memory */
/* Demangled: DAP_CPDP_PVT_visualizer_query_memory */
int DAP_CPDP_PVT_visualizer_query_memory(void);

/* Symbol: DAP_CPDP_PVT_dlb_milib_get_version_info */
/* Demangled: DAP_CPDP_PVT_dlb_milib_get_version_info */
int DAP_CPDP_PVT_dlb_milib_get_version_info(void);

/* Symbol: DLB_r4_inv_fft_128 */
/* Demangled: DLB_r4_inv_fft_128 */
int DLB_r4_inv_fft_128(void);

/* Symbol: DAP_CPDP_PVT_resample_query_memory */
/* Demangled: DAP_CPDP_PVT_resample_query_memory */
int DAP_CPDP_PVT_resample_query_memory(void);

/* Symbol: _ZN5dolby18VoiceEffectContextD2Ev */
/* Demangled: dolby::VoiceEffectContext::~VoiceEffectContext() */
int _ZN5dolby18VoiceEffectContextD2Ev(void);

/* Symbol: DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF1_COMPENSATION_LL */
/* Demangled: DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF1_COMPENSATION_LL */
extern void* DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF1_COMPENSATION_LL;

/* Symbol: DAP_CPDP_PVT_virtual_bass_clear_delayline_buf */
/* Demangled: DAP_CPDP_PVT_virtual_bass_clear_delayline_buf */
int DAP_CPDP_PVT_virtual_bass_clear_delayline_buf(void);

/* Symbol: DAP_CPDP_PVT_hfra_query_clip_mem */
/* Demangled: DAP_CPDP_PVT_hfra_query_clip_mem */
int DAP_CPDP_PVT_hfra_query_clip_mem(void);

/* Symbol: DAP_CPDP_PVT_lvl_calc_release_accel */
/* Demangled: DAP_CPDP_PVT_lvl_calc_release_accel */
int DAP_CPDP_PVT_lvl_calc_release_accel(void);

/* Symbol: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_TAB_44K */
/* Demangled: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_TAB_44K */
extern void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_TAB_44K;

/* Symbol: DLB_blk_Lmix_shlaL_strict */
/* Demangled: DLB_blk_Lmix_shlaL_strict */
int DLB_blk_Lmix_shlaL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L128_cos */
/* Demangled: dlb_dct_twiddle_table16_L128_cos */
extern void* dlb_dct_twiddle_table16_L128_cos;

/* Symbol: dlb_dct_twiddle_table16_L180_cos */
/* Demangled: dlb_dct_twiddle_table16_L180_cos */
extern void* dlb_dct_twiddle_table16_L180_cos;

/* Symbol: _ZN5dolby22UdcAudioBufferProvider9configureE14audio_format_tjj */
/* Demangled: dolby::UdcAudioBufferProvider::configure(audio_format_t, unsigned int, unsigned int) */
int _ZN5dolby22UdcAudioBufferProvider9configureE14audio_format_tjj(void);

/* Symbol: DAP_CPDP_PVT_hp_height_reverb_init */
/* Demangled: DAP_CPDP_PVT_hp_height_reverb_init */
int DAP_CPDP_PVT_hp_height_reverb_init(void);

/* Symbol: dlb_dct_twiddle_table16_L240_1 */
/* Demangled: dlb_dct_twiddle_table16_L240_1 */
extern void* dlb_dct_twiddle_table16_L240_1;

/* Symbol: dlb_fft_inv_usc_180 */
/* Demangled: dlb_fft_inv_usc_180 */
int dlb_fft_inv_usc_180(void);

/* Symbol: DLB_blk_Liir1_shl_addLL_strict */
/* Demangled: DLB_blk_Liir1_shl_addLL_strict */
int DLB_blk_Liir1_shl_addLL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L240_2 */
/* Demangled: dlb_dct_twiddle_table16_L240_2 */
extern void* dlb_dct_twiddle_table16_L240_2;

/* Symbol: _ZN5dolby16DapEffectContext13getTuningListEiPvPj */
/* Demangled: dolby::DapEffectContext::getTuningList(int, void*, unsigned int*) */
int _ZN5dolby16DapEffectContext13getTuningListEiPvPj(void);

/* Symbol: _ZN5dolby16DapEffectContext14getProfileNameEiPvPj */
/* Demangled: dolby::DapEffectContext::getProfileName(int, void*, unsigned int*) */
int _ZN5dolby16DapEffectContext14getProfileNameEiPvPj(void);

/* Symbol: DAP_CPDP_PVT_asa_noise_detect_process */
/* Demangled: DAP_CPDP_PVT_asa_noise_detect_process */
int DAP_CPDP_PVT_asa_noise_detect_process(void);

/* Symbol: _ZN5dolby9EffectDapD0Ev */
/* Demangled: dolby::EffectDap::~EffectDap() */
int _ZN5dolby9EffectDapD0Ev(void);

/* Symbol: DAP_CPDP_PVT_hamming_weight_frm32_inv_sum */
/* Demangled: DAP_CPDP_PVT_hamming_weight_frm32_inv_sum */
extern void* DAP_CPDP_PVT_hamming_weight_frm32_inv_sum;

/* Symbol: DAP_CPDP_PVT_hp_height_fdn_allpass_init */
/* Demangled: DAP_CPDP_PVT_hp_height_fdn_allpass_init */
int DAP_CPDP_PVT_hp_height_fdn_allpass_init(void);

/* Symbol: dlb_fft_inv_scl_72 */
/* Demangled: dlb_fft_inv_scl_72 */
int dlb_fft_inv_scl_72(void);

/* Symbol: _ZN5dolby11Dap2Process6logTagEv */
/* Demangled: dolby::Dap2Process::logTag() */
int _ZN5dolby11Dap2Process6logTagEv(void);

/* Symbol: dlb_blk_Liir2ssv1_dsmpL_flex */
/* Demangled: dlb_blk_Liir2ssv1_dsmpL_flex */
int dlb_blk_Liir2ssv1_dsmpL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L576 */
/* Demangled: dlb_dct_twiddle_table16_L576 */
extern void* dlb_dct_twiddle_table16_L576;

/* Symbol: DLB_r4_inv_fft_240 */
/* Demangled: DLB_r4_inv_fft_240 */
int DLB_r4_inv_fft_240(void);

/* Symbol: dlb_fft_fwd_usc_720 */
/* Demangled: dlb_fft_fwd_usc_720 */
int dlb_fft_fwd_usc_720(void);

/* Symbol: DAP_CPDP_PVT_classifier_process */
/* Demangled: DAP_CPDP_PVT_classifier_process */
int DAP_CPDP_PVT_classifier_process(void);

/* Symbol: DAP_CPDP_PVT_hfra_query_scratch */
/* Demangled: DAP_CPDP_PVT_hfra_query_scratch */
int DAP_CPDP_PVT_hfra_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_legq_clip_gains */
/* Demangled: DAP_CPDP_PVT_legq_clip_gains */
int DAP_CPDP_PVT_legq_clip_gains(void);

/* Symbol: dlb_dct_twiddle_table16_1_L120 */
/* Demangled: dlb_dct_twiddle_table16_1_L120 */
extern void* dlb_dct_twiddle_table16_1_L120;

/* Symbol: dlb_dct_twiddle_table16_1_L90 */
/* Demangled: dlb_dct_twiddle_table16_1_L90 */
extern void* dlb_dct_twiddle_table16_1_L90;

/* Symbol: dlb_vec_LmpyLSU_inplace_flex */
/* Demangled: dlb_vec_LmpyLSU_inplace_flex */
int dlb_vec_LmpyLSU_inplace_flex(void);

/* Symbol: DLB_CLsubCLCLU_strict */
/* Demangled: DLB_CLsubCLCLU_strict */
int DLB_CLsubCLCLU_strict(void);

/* Symbol: DLB_fft_CLinv_unscaledCL */
/* Demangled: DLB_fft_CLinv_unscaledCL */
int DLB_fft_CLinv_unscaledCL(void);

/* Symbol: DAP_CPDP_PVT_delay_line_init */
/* Demangled: DAP_CPDP_PVT_delay_line_init */
int DAP_CPDP_PVT_delay_line_init(void);

/* Symbol: DAP_CPDP_PVT_mi_buffer_samples_available */
/* Demangled: DAP_CPDP_PVT_mi_buffer_samples_available */
int DAP_CPDP_PVT_mi_buffer_samples_available(void);

/* Symbol: DLB_blk_Liir2df1L_strict */
/* Demangled: DLB_blk_Liir2df1L_strict */
int DLB_blk_Liir2df1L_strict(void);

/* Symbol: _ZN5dolby16DlbBufferAdapterC2EPNS_11IDlbProcessE */
/* Demangled: dolby::DlbBufferAdapter::DlbBufferAdapter(dolby::IDlbProcess*) */
int _ZN5dolby16DlbBufferAdapterC2EPNS_11IDlbProcessE(void);

/* Symbol: _ZN5dolby11Dap2Process14parseMixMatrixEiPKi */
/* Demangled: dolby::Dap2Process::parseMixMatrix(int, int const*) */
int _ZN5dolby11Dap2Process14parseMixMatrixEiPKi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int const*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE7do_copyEPvPKvj(void);

/* Symbol: DAP_CPDP_PVT_rs_process */
/* Demangled: DAP_CPDP_PVT_rs_process */
int DAP_CPDP_PVT_rs_process(void);

/* Symbol: dlb_CLrecipCLUU_flex */
/* Demangled: dlb_CLrecipCLUU_flex */
int dlb_CLrecipCLUU_flex(void);

/* Symbol: dlb_CLshlCLUU_flex */
/* Demangled: dlb_CLshlCLUU_flex */
int dlb_CLshlCLUU_flex(void);

/* Symbol: DAP_CPDP_PVT_agc_filter_loudness */
/* Demangled: DAP_CPDP_PVT_agc_filter_loudness */
int DAP_CPDP_PVT_agc_filter_loudness(void);

/* Symbol: DAP_CPDP_PVT_hist_value_to_bin */
/* Demangled: DAP_CPDP_PVT_hist_value_to_bin */
int DAP_CPDP_PVT_hist_value_to_bin(void);

/* Symbol: DLB_blk_LmixLLL_strict */
/* Demangled: DLB_blk_LmixLLL_strict */
int DLB_blk_LmixLLL_strict(void);

/* Symbol: _ZN5dolby17GameEffectContext19connectDolbyServiceEv */
/* Demangled: dolby::GameEffectContext::connectDolbyService() */
int _ZN5dolby17GameEffectContext19connectDolbyServiceEv(void);

/* Symbol: dlb_dct_twiddle_table16_1_L96 */
/* Demangled: dlb_dct_twiddle_table16_1_L96 */
extern void* dlb_dct_twiddle_table16_1_L96;

/* Symbol: _ZN5dolby19DlbCrossfadeProcess9configureEii14audio_format_t20audio_channel_mask_tS2_ */
/* Demangled: dolby::DlbCrossfadeProcess::configure(int, int, audio_format_t, audio_channel_mask_t, audio_channel_mask_t) */
int _ZN5dolby19DlbCrossfadeProcess9configureEii14audio_format_t20audio_channel_mask_tS2_(void);

/* Symbol: _ZN5dolby12DlbGenClass25checkEv */
/* Demangled: dolby::DlbGenClass2::check() */
int _ZN5dolby12DlbGenClass25checkEv(void);

/* Symbol: DAP_CPDP_PVT_hfra_close */
/* Demangled: DAP_CPDP_PVT_hfra_close */
int DAP_CPDP_PVT_hfra_close(void);

/* Symbol: DLB_blk_Lfir2L_set_coef */
/* Demangled: DLB_blk_Lfir2L_set_coef */
int DLB_blk_Lfir2L_set_coef(void);

/* Symbol: DLB_vec_LshlLIU_strict */
/* Demangled: DLB_vec_LshlLIU_strict */
int DLB_vec_LshlLIU_strict(void);

/* Symbol: DLB_r4_fft_20 */
/* Demangled: DLB_r4_fft_20 */
int DLB_r4_fft_20(void);

/* Symbol: dlb_dct_twiddle_table16_1_L128 */
/* Demangled: dlb_dct_twiddle_table16_1_L128 */
extern void* dlb_dct_twiddle_table16_1_L128;

/* Symbol: dlb_dct_twiddle_table16_L90 */
/* Demangled: dlb_dct_twiddle_table16_L90 */
extern void* dlb_dct_twiddle_table16_L90;

/* Symbol: DLB_r4_inv_fft_1024 */
/* Demangled: DLB_r4_inv_fft_1024 */
int DLB_r4_inv_fft_1024(void);

/* Symbol: dap_cpdp_bass_mbdrc_enable_set */
/* Demangled: dap_cpdp_bass_mbdrc_enable_set */
int dap_cpdp_bass_mbdrc_enable_set(void);

/* Symbol: DAP_CPDP_PVT_icsc_query_clip_mem */
/* Demangled: DAP_CPDP_PVT_icsc_query_clip_mem */
int DAP_CPDP_PVT_icsc_query_clip_mem(void);

/* Symbol: DAP_CPDP_PVT_sben_frame_process */
/* Demangled: DAP_CPDP_PVT_sben_frame_process */
int DAP_CPDP_PVT_sben_frame_process(void);

/* Symbol: DAP_CPDP_PVT_lvl_drc_process */
/* Demangled: DAP_CPDP_PVT_lvl_drc_process */
int DAP_CPDP_PVT_lvl_drc_process(void);

/* Symbol: dlb_BLmpyBLS_inplace_flex */
/* Demangled: dlb_BLmpyBLS_inplace_flex */
int dlb_BLmpyBLS_inplace_flex(void);

/* Symbol: DLB_blk_LmixnL_strict */
/* Demangled: DLB_blk_LmixnL_strict */
int DLB_blk_LmixnL_strict(void);

/* Symbol: DAP_CPDP_PVT_dap_pvt_graphic_equalizer_configure */
/* Demangled: DAP_CPDP_PVT_dap_pvt_graphic_equalizer_configure */
int DAP_CPDP_PVT_dap_pvt_graphic_equalizer_configure(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_init */
/* Demangled: DAP_CPDP_PVT_hearing_protection_init */
int DAP_CPDP_PVT_hearing_protection_init(void);

/* Symbol: DLB_vec_LmpyLSU_strict */
/* Demangled: DLB_vec_LmpyLSU_strict */
int DLB_vec_LmpyLSU_strict(void);

/* Symbol: _ZN5dolby16DapEffectContext8getParamEiPjPv */
/* Demangled: dolby::DapEffectContext::getParam(int, unsigned int*, void*) */
int _ZN5dolby16DapEffectContext8getParamEiPjPv(void);

/* Symbol: _ZTVN5dolby11IDlbProcessE */
/* Demangled: vtable for dolby::IDlbProcess */
extern void* _ZTVN5dolby11IDlbProcessE;

/* Symbol: DAP_CPDP_PVT_dap_utilities_update_clip_signed */
/* Demangled: DAP_CPDP_PVT_dap_utilities_update_clip_signed */
int DAP_CPDP_PVT_dap_utilities_update_clip_signed(void);

/* Symbol: DAP_CPDP_PVT_data_bass_dynamic_compressor */
/* Demangled: DAP_CPDP_PVT_data_bass_dynamic_compressor */
int DAP_CPDP_PVT_data_bass_dynamic_compressor(void);

/* Symbol: DAP_CPDP_PVT_acorr_query_memory */
/* Demangled: DAP_CPDP_PVT_acorr_query_memory */
int DAP_CPDP_PVT_acorr_query_memory(void);

/* Symbol: DAP_CPDP_PVT_down_mix_close */
/* Demangled: DAP_CPDP_PVT_down_mix_close */
int DAP_CPDP_PVT_down_mix_close(void);

/* Symbol: DAP_CPDP_PVT_de_powmin_get_current_rms_err */
/* Demangled: DAP_CPDP_PVT_de_powmin_get_current_rms_err */
int DAP_CPDP_PVT_de_powmin_get_current_rms_err(void);

/* Symbol: DLB_r4_fft_24 */
/* Demangled: DLB_r4_fft_24 */
int DLB_r4_fft_24(void);

/* Symbol: DLB_r4_fft_80_s */
/* Demangled: DLB_r4_fft_80_s */
int DLB_r4_fft_80_s(void);

/* Symbol: dlb_valid_pair_ptr */
/* Demangled: dlb_valid_pair_ptr */
int dlb_valid_pair_ptr(void);

/* Symbol: DAP_CPDP_PVT_mi_dap_set_enable */
/* Demangled: DAP_CPDP_PVT_mi_dap_set_enable */
int DAP_CPDP_PVT_mi_dap_set_enable(void);

/* Symbol: A_NGCS_UPMIX_PLAN_7CH1_TO_5D1D2 */
/* Demangled: A_NGCS_UPMIX_PLAN_7CH1_TO_5D1D2 */
extern void* A_NGCS_UPMIX_PLAN_7CH1_TO_5D1D2;

/* Symbol: DAP_CPDP_PVT_dap_cpdp_internal_chain_process */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_internal_chain_process */
int DAP_CPDP_PVT_dap_cpdp_internal_chain_process(void);

/* Symbol: DAP_CPDP_PVT_virtual_bass_process */
/* Demangled: DAP_CPDP_PVT_virtual_bass_process */
int DAP_CPDP_PVT_virtual_bass_process(void);

/* Symbol: DAP_CPDP_PVT_sone_buffer_init */
/* Demangled: DAP_CPDP_PVT_sone_buffer_init */
int DAP_CPDP_PVT_sone_buffer_init(void);

/* Symbol: DLB_blk_LintegrateL_strict */
/* Demangled: DLB_blk_LintegrateL_strict */
int DLB_blk_LintegrateL_strict(void);

/* Symbol: DAP_CPDP_PVT_data_bass_hybrid_ana */
/* Demangled: DAP_CPDP_PVT_data_bass_hybrid_ana */
int DAP_CPDP_PVT_data_bass_hybrid_ana(void);

/* Symbol: DAP_CPDP_PVT_chroma_frame_process */
/* Demangled: DAP_CPDP_PVT_chroma_frame_process */
int DAP_CPDP_PVT_chroma_frame_process(void);

/* Symbol: DLB_time_sub */
/* Demangled: DLB_time_sub */
int DLB_time_sub(void);

/* Symbol: DAP_CPDP_PVT_dap_interp_init */
/* Demangled: DAP_CPDP_PVT_dap_interp_init */
int DAP_CPDP_PVT_dap_interp_init(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_target */
/* Demangled: DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_target */
int DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_target(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L768 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L768 */
extern void* dlb_dct_twiddle_table16_rev_1_L768;

/* Symbol: dlb_dct_twiddle_table16_L96 */
/* Demangled: dlb_dct_twiddle_table16_L96 */
extern void* dlb_dct_twiddle_table16_L96;

/* Symbol: DLB_r4_inv_fft_360 */
/* Demangled: DLB_r4_inv_fft_360 */
int DLB_r4_inv_fft_360(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int const*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE10do_destroyEPvj(void);

/* Symbol: dap_cpdp_pvt_data_bass_params_init */
/* Demangled: dap_cpdp_pvt_data_bass_params_init */
int dap_cpdp_pvt_data_bass_params_init(void);

/* Symbol: DAP_CPDP_PVT_acorr_close */
/* Demangled: DAP_CPDP_PVT_acorr_close */
int DAP_CPDP_PVT_acorr_close(void);

/* Symbol: dlb_dct_twiddle_table16_1_L240 */
/* Demangled: dlb_dct_twiddle_table16_1_L240 */
extern void* dlb_dct_twiddle_table16_1_L240;

/* Symbol: dlb_cos_64_full_twiddle */
/* Demangled: dlb_cos_64_full_twiddle */
extern void* dlb_cos_64_full_twiddle;

/* Symbol: dlb_qmf_filter_coeff_P4_32 */
/* Demangled: dlb_qmf_filter_coeff_P4_32 */
extern void* dlb_qmf_filter_coeff_P4_32;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: DAP_CPDP_PVT_arle_compressor_gains_update */
/* Demangled: DAP_CPDP_PVT_arle_compressor_gains_update */
int DAP_CPDP_PVT_arle_compressor_gains_update(void);

/* Symbol: dlb_dct_twiddle_table16_L960_1 */
/* Demangled: dlb_dct_twiddle_table16_L960_1 */
extern void* dlb_dct_twiddle_table16_L960_1;

/* Symbol: _ZN5dolby9EffectDap20updateProcessEnabledEv */
/* Demangled: dolby::EffectDap::updateProcessEnabled() */
int _ZN5dolby9EffectDap20updateProcessEnabledEv(void);

/* Symbol: DAP_CPDP_PVT_volume_and_ieq_process */
/* Demangled: DAP_CPDP_PVT_volume_and_ieq_process */
int DAP_CPDP_PVT_volume_and_ieq_process(void);

/* Symbol: DAP_CPDP_PVT_NYQUIST_FILTERS_844_STANDARD_FILT4 */
/* Demangled: DAP_CPDP_PVT_NYQUIST_FILTERS_844_STANDARD_FILT4 */
extern void* DAP_CPDP_PVT_NYQUIST_FILTERS_844_STANDARD_FILT4;

/* Symbol: DLB_blk_LfirUL_strict */
/* Demangled: DLB_blk_LfirUL_strict */
int DLB_blk_LfirUL_strict(void);

/* Symbol: dlb_CLCLmix6CL12SU_flex */
/* Demangled: dlb_CLCLmix6CL12SU_flex */
int dlb_CLCLmix6CL12SU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L960_2 */
/* Demangled: dlb_dct_twiddle_table16_L960_2 */
extern void* dlb_dct_twiddle_table16_L960_2;

/* Symbol: _ZN5dolby18VoiceEffectContextC1Ev */
/* Demangled: dolby::VoiceEffectContext::VoiceEffectContext() */
int _ZN5dolby18VoiceEffectContextC1Ev(void);

/* Symbol: _ZN5dolby13AudioHalUtils4initEPNS_13EffectContextE */
/* Demangled: dolby::AudioHalUtils::init(dolby::EffectContext*) */
int _ZN5dolby13AudioHalUtils4initEPNS_13EffectContextE(void);

/* Symbol: dap_cpdp_graphic_equalizer_enable_set */
/* Demangled: dap_cpdp_graphic_equalizer_enable_set */
int dap_cpdp_graphic_equalizer_enable_set(void);

/* Symbol: _ZN5dolby17DlbBufferProviderD2Ev */
/* Demangled: dolby::DlbBufferProvider::~DlbBufferProvider() */
int _ZN5dolby17DlbBufferProviderD2Ev(void);

/* Symbol: DAP_CPDP_PVT_ngcs_query_scratch */
/* Demangled: DAP_CPDP_PVT_ngcs_query_scratch */
int DAP_CPDP_PVT_ngcs_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_sben_rap_init */
/* Demangled: DAP_CPDP_PVT_sben_rap_init */
int DAP_CPDP_PVT_sben_rap_init(void);

/* Symbol: _ZN5dolby16DapEffectContext15updateDapParamsEv */
/* Demangled: dolby::DapEffectContext::updateDapParams() */
int _ZN5dolby16DapEffectContext15updateDapParamsEv(void);

/* Symbol: dap_cpdp_virtual_bass_mix_freqs_set */
/* Demangled: dap_cpdp_virtual_bass_mix_freqs_set */
int dap_cpdp_virtual_bass_mix_freqs_set(void);

/* Symbol: _ZN5dolby12DlbGenClass213propIsMatchedEPKcjS2_j */
/* Demangled: dolby::DlbGenClass2::propIsMatched(char const*, unsigned int, char const*, unsigned int) */
int _ZN5dolby12DlbGenClass213propIsMatchedEPKcjS2_j(void);

/* Symbol: DAP_CPDP_PVT_dlb_milib_reset */
/* Demangled: DAP_CPDP_PVT_dlb_milib_reset */
int DAP_CPDP_PVT_dlb_milib_reset(void);

/* Symbol: DAP_CPDP_PVT_a_dvlim_win_40 */
/* Demangled: DAP_CPDP_PVT_a_dvlim_win_40 */
extern void* DAP_CPDP_PVT_a_dvlim_win_40;

/* Symbol: DAP_CPDP_PVT_mi_dap_mapping_init */
/* Demangled: DAP_CPDP_PVT_mi_dap_mapping_init */
int DAP_CPDP_PVT_mi_dap_mapping_init(void);

/* Symbol: dlb_fft_fwd_usc_1024 */
/* Demangled: dlb_fft_fwd_usc_1024 */
int dlb_fft_fwd_usc_1024(void);

/* Symbol: dap_cpdp_volume_leveler_out_target_set */
/* Demangled: dap_cpdp_volume_leveler_out_target_set */
int dap_cpdp_volume_leveler_out_target_set(void);

/* Symbol: _ZN5dolby12DlbGenClass2D0Ev */
/* Demangled: dolby::DlbGenClass2::~DlbGenClass2() */
int _ZN5dolby12DlbGenClass2D0Ev(void);

/* Symbol: DLB_hybrid_synthesisCL_close */
/* Demangled: DLB_hybrid_synthesisCL_close */
int DLB_hybrid_synthesisCL_close(void);

/* Symbol: DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_init */
/* Demangled: DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_init */
int DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_init(void);

/* Symbol: DAP_CPDP_PVT_ngcs_query_memory */
/* Demangled: DAP_CPDP_PVT_ngcs_query_memory */
int DAP_CPDP_PVT_ngcs_query_memory(void);

/* Symbol: DAP_CPDP_PVT_spec_flux_init */
/* Demangled: DAP_CPDP_PVT_spec_flux_init */
int DAP_CPDP_PVT_spec_flux_init(void);

/* Symbol: DAP_CPDP_PVT_NYQUIST_FILTERS_844_STANDARD_FILT8 */
/* Demangled: DAP_CPDP_PVT_NYQUIST_FILTERS_844_STANDARD_FILT8 */
extern void* DAP_CPDP_PVT_NYQUIST_FILTERS_844_STANDARD_FILT8;

/* Symbol: DAP_CPDP_PVT_de_compr_gain_post_process */
/* Demangled: DAP_CPDP_PVT_de_compr_gain_post_process */
int DAP_CPDP_PVT_de_compr_gain_post_process(void);

/* Symbol: dlb_dct_twiddle_table16_L8_1 */
/* Demangled: dlb_dct_twiddle_table16_L8_1 */
extern void* dlb_dct_twiddle_table16_L8_1;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L12 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L12 */
extern void* dlb_dct_twiddle_table16_rev_1_L12;

/* Symbol: dlb_dct_twiddle_table16_L8_2 */
/* Demangled: dlb_dct_twiddle_table16_L8_2 */
extern void* dlb_dct_twiddle_table16_L8_2;

/* Symbol: DAP_CPDP_PVT_chital_validate */
/* Demangled: DAP_CPDP_PVT_chital_validate */
int DAP_CPDP_PVT_chital_validate(void);

/* Symbol: DAP_CPDP_PVT_sbpp_init */
/* Demangled: DAP_CPDP_PVT_sbpp_init */
int DAP_CPDP_PVT_sbpp_init(void);

/* Symbol: DAP_CPDP_PVT_sbsc_clip_process */
/* Demangled: DAP_CPDP_PVT_sbsc_clip_process */
int DAP_CPDP_PVT_sbsc_clip_process(void);

/* Symbol: DAP_CPDP_PVT_virtual_bass_coefs_get_post_qmf1_phase_adjust */
/* Demangled: DAP_CPDP_PVT_virtual_bass_coefs_get_post_qmf1_phase_adjust */
int DAP_CPDP_PVT_virtual_bass_coefs_get_post_qmf1_phase_adjust(void);

/* Symbol: _ZN5dolby18VoiceEffectContext7processEP14audio_buffer_sS2_ */
/* Demangled: dolby::VoiceEffectContext::process(audio_buffer_s*, audio_buffer_s*) */
int _ZN5dolby18VoiceEffectContext7processEP14audio_buffer_sS2_(void);

/* Symbol: dap_cpdp_surround_decoder_center_spreading_enable_set */
/* Demangled: dap_cpdp_surround_decoder_center_spreading_enable_set */
int dap_cpdp_surround_decoder_center_spreading_enable_set(void);

/* Symbol: DAP_CPDP_PVT_mfcc_flux_query_scratch */
/* Demangled: DAP_CPDP_PVT_mfcc_flux_query_scratch */
int DAP_CPDP_PVT_mfcc_flux_query_scratch(void);

/* Symbol: DLB_blk_Lmix_shlUnL_strict */
/* Demangled: DLB_blk_Lmix_shlUnL_strict */
int DLB_blk_Lmix_shlUnL_strict(void);

/* Symbol: dlb_fft_fwd_scl_120 */
/* Demangled: dlb_fft_fwd_scl_120 */
int dlb_fft_fwd_scl_120(void);

/* Symbol: dlb_dct_twiddle_table16_L320_cos */
/* Demangled: dlb_dct_twiddle_table16_L320_cos */
extern void* dlb_dct_twiddle_table16_L320_cos;

/* Symbol: DAP_CPDP_PVT_spec_flux_query_memory */
/* Demangled: DAP_CPDP_PVT_spec_flux_query_memory */
int DAP_CPDP_PVT_spec_flux_query_memory(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L15 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L15 */
extern void* dlb_dct_twiddle_table16_rev_1_L15;

/* Symbol: dlb_dct_twiddle_table16_rev_L288 */
/* Demangled: dlb_dct_twiddle_table16_rev_L288 */
extern void* dlb_dct_twiddle_table16_rev_L288;

/* Symbol: DLB_r4_inv_fft_240_s */
/* Demangled: DLB_r4_inv_fft_240_s */
int DLB_r4_inv_fft_240_s(void);

/* Symbol: dlb_inverseModulationReal */
/* Demangled: dlb_inverseModulationReal */
int dlb_inverseModulationReal(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj(void);

/* Symbol: dap_cpdp_query_memory */
/* Demangled: dap_cpdp_query_memory */
int dap_cpdp_query_memory(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_calc_diffuse_gains */
/* Demangled: DAP_CPDP_PVT_ltrt3d_calc_diffuse_gains */
int DAP_CPDP_PVT_ltrt3d_calc_diffuse_gains(void);

/* Symbol: DLB_vec_LdotLLU_strict */
/* Demangled: DLB_vec_LdotLLU_strict */
int DLB_vec_LdotLLU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L16 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L16 */
extern void* dlb_dct_twiddle_table16_rev_1_L16;

/* Symbol: DLB_mfb_p10km_synthesisCL_query_scratch */
/* Demangled: DLB_mfb_p10km_synthesisCL_query_scratch */
int DLB_mfb_p10km_synthesisCL_query_scratch(void);

/* Symbol: dlb_vec_LsetLU_flex */
/* Demangled: dlb_vec_LsetLU_flex */
int dlb_vec_LsetLU_flex(void);

/* Symbol: dap_cpdp_ltrt3d_decoder_enable_set */
/* Demangled: dap_cpdp_ltrt3d_decoder_enable_set */
int dap_cpdp_ltrt3d_decoder_enable_set(void);

/* Symbol: DLB_r4_rfft_nn */
/* Demangled: DLB_r4_rfft_nn */
int DLB_r4_rfft_nn(void);

/* Symbol: DAP_CPDP_PVT_virtual_bass_transpose_analysis */
/* Demangled: DAP_CPDP_PVT_virtual_bass_transpose_analysis */
int DAP_CPDP_PVT_virtual_bass_transpose_analysis(void);

/* Symbol: _ZN5dolby11Dap2Process9configureEii14audio_format_t20audio_channel_mask_tS2_ */
/* Demangled: dolby::Dap2Process::configure(int, int, audio_format_t, audio_channel_mask_t, audio_channel_mask_t) */
int _ZN5dolby11Dap2Process9configureEii14audio_format_t20audio_channel_mask_tS2_(void);

/* Symbol: _ZN5dolby22UdcAudioBufferProvider3setEPvi */
/* Demangled: dolby::UdcAudioBufferProvider::set(void*, int) */
int _ZN5dolby22UdcAudioBufferProvider3setEPvi(void);

/* Symbol: DAP_CPDP_PVT_sv_query_scratch */
/* Demangled: DAP_CPDP_PVT_sv_query_scratch */
int DAP_CPDP_PVT_sv_query_scratch(void);

/* Symbol: DLB_r4_fft_4096_s */
/* Demangled: DLB_r4_fft_4096_s */
int DLB_r4_fft_4096_s(void);

/* Symbol: _ZN5dolby14BufferProvider9setConfigEij */
/* Demangled: dolby::BufferProvider::setConfig(int, unsigned int) */
int _ZN5dolby14BufferProvider9setConfigEij(void);

/* Symbol: DLB_vec_LsetLU_strict */
/* Demangled: DLB_vec_LsetLU_strict */
int DLB_vec_LsetLU_strict(void);

/* Symbol: DAP_CPDP_PVT_mi_dap_set_pregain */
/* Demangled: DAP_CPDP_PVT_mi_dap_set_pregain */
int DAP_CPDP_PVT_mi_dap_set_pregain(void);

/* Symbol: DAP_CPDP_PVT_de_flux_state_init */
/* Demangled: DAP_CPDP_PVT_de_flux_state_init */
int DAP_CPDP_PVT_de_flux_state_init(void);

/* Symbol: DAP_CPDP_PVT_mi_internal_set_binaural_enable */
/* Demangled: DAP_CPDP_PVT_mi_internal_set_binaural_enable */
int DAP_CPDP_PVT_mi_internal_set_binaural_enable(void);

/* Symbol: DLB_blk_LLshuffleLL_inplace_strict */
/* Demangled: DLB_blk_LLshuffleLL_inplace_strict */
int DLB_blk_LLshuffleLL_inplace_strict(void);

/* Symbol: dlb_CLsubCLCLU_flex */
/* Demangled: dlb_CLsubCLCLU_flex */
int dlb_CLsubCLCLU_flex(void);

/* Symbol: DLB_r4_inv_fft_480 */
/* Demangled: DLB_r4_inv_fft_480 */
int DLB_r4_inv_fft_480(void);

/* Symbol: dlb_fft_fwd_usc_960 */
/* Demangled: dlb_fft_fwd_usc_960 */
int dlb_fft_fwd_usc_960(void);

/* Symbol: dlb_fft_inv_scl_80 */
/* Demangled: dlb_fft_inv_scl_80 */
int dlb_fft_inv_scl_80(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_vec_ana;

/* Symbol: _ZN5dolby19DapCrossfadeProcessC1EPNS_11IDlbProcessE */
/* Demangled: dolby::DapCrossfadeProcess::DapCrossfadeProcess(dolby::IDlbProcess*) */
int _ZN5dolby19DapCrossfadeProcessC1EPNS_11IDlbProcessE(void);

/* Symbol: _ZN5dolby16DlbBufferAdapter8setParamEiPKii */
/* Demangled: dolby::DlbBufferAdapter::setParam(int, int const*, int) */
int _ZN5dolby16DlbBufferAdapter8setParamEiPKii(void);

/* Symbol: _ZTVN5dolby17DlbBufferProviderE */
/* Demangled: vtable for dolby::DlbBufferProvider */
extern void* _ZTVN5dolby17DlbBufferProviderE;

/* Symbol: DAP_CPDP_PVT_de_hiss_process */
/* Demangled: DAP_CPDP_PVT_de_hiss_process */
int DAP_CPDP_PVT_de_hiss_process(void);

/* Symbol: DAP_CPDP_PVT_mi_buffer_reset */
/* Demangled: DAP_CPDP_PVT_mi_buffer_reset */
int DAP_CPDP_PVT_mi_buffer_reset(void);

/* Symbol: DAP_CPDP_PVT_spec_bassband_bins_hcqmf_tab */
/* Demangled: DAP_CPDP_PVT_spec_bassband_bins_hcqmf_tab */
extern void* DAP_CPDP_PVT_spec_bassband_bins_hcqmf_tab;

/* Symbol: DAP_CPDP_PVT_modified_cos_tab */
/* Demangled: DAP_CPDP_PVT_modified_cos_tab */
extern void* DAP_CPDP_PVT_modified_cos_tab;

/* Symbol: dlb_dct_twiddle_table16_1_L360 */
/* Demangled: dlb_dct_twiddle_table16_1_L360 */
extern void* dlb_dct_twiddle_table16_1_L360;

/* Symbol: dlb_fft_inv_usc_192 */
/* Demangled: dlb_fft_inv_usc_192 */
int dlb_fft_inv_usc_192(void);

/* Symbol: DAP_CPDP_PVT_cmtx_lock */
/* Demangled: DAP_CPDP_PVT_cmtx_lock */
int DAP_CPDP_PVT_cmtx_lock(void);

/* Symbol: DAP_UPMIX_MODE_STEREO_TO_5D1D2_GAMING */
/* Demangled: DAP_UPMIX_MODE_STEREO_TO_5D1D2_GAMING */
extern void* DAP_UPMIX_MODE_STEREO_TO_5D1D2_GAMING;

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_syn_close */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_close */
int DAP_CPDP_PVT_mfb_rcp10km_syn_close(void);

/* Symbol: dlb_dct_twiddle_table16_L120 */
/* Demangled: dlb_dct_twiddle_table16_L120 */
extern void* dlb_dct_twiddle_table16_L120;

/* Symbol: dlb_fft_fwd_scl_128 */
/* Demangled: dlb_fft_fwd_scl_128 */
int dlb_fft_fwd_scl_128(void);

/* Symbol: DLB_mfb_p10km_analysisL_query_mem */
/* Demangled: DLB_mfb_p10km_analysisL_query_mem */
int DLB_mfb_p10km_analysisL_query_mem(void);

/* Symbol: DAP_CPDP_PVT_dvlim_update_smoothed_gain */
/* Demangled: DAP_CPDP_PVT_dvlim_update_smoothed_gain */
int DAP_CPDP_PVT_dvlim_update_smoothed_gain(void);

/* Symbol: dlb_blk_Liir2ssv3L_inplace_flex */
/* Demangled: dlb_blk_Liir2ssv3L_inplace_flex */
int dlb_blk_Liir2ssv3L_inplace_flex(void);

/* Symbol: DLB_blk_LminLL_strict */
/* Demangled: DLB_blk_LminLL_strict */
int DLB_blk_LminLL_strict(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvj(void);

/* Symbol: DAP_CPDP_PVT_dlb_milib_close */
/* Demangled: DAP_CPDP_PVT_dlb_milib_close */
int DAP_CPDP_PVT_dlb_milib_close(void);

/* Symbol: DLB_CLmixCLCLSSU_strict */
/* Demangled: DLB_CLmixCLCLSSU_strict */
int DLB_CLmixCLCLSSU_strict(void);

/* Symbol: dlb_dctII_scaled */
/* Demangled: dlb_dctII_scaled */
int dlb_dctII_scaled(void);

/* Symbol: DLB_r4_inv_fft_80_s */
/* Demangled: DLB_r4_inv_fft_80_s */
int DLB_r4_inv_fft_80_s(void);

/* Symbol: _ZN5dolby16DapEffectContext19connectDolbyServiceEv */
/* Demangled: dolby::DapEffectContext::connectDolbyService() */
int _ZN5dolby16DapEffectContext19connectDolbyServiceEv(void);

/* Symbol: dap_cpdp_pvt_virtual_bass_update_control */
/* Demangled: dap_cpdp_pvt_virtual_bass_update_control */
int dap_cpdp_pvt_virtual_bass_update_control(void);

/* Symbol: DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_512 */
/* Demangled: DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_512 */
extern void* DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_512;

/* Symbol: DLB_blk_Lmix_shlUnL */
/* Demangled: DLB_blk_Lmix_shlUnL */
int DLB_blk_Lmix_shlUnL(void);

/* Symbol: A_NGCS_UPMIX_PLAN_STEREO_TO_7D1D2 */
/* Demangled: A_NGCS_UPMIX_PLAN_STEREO_TO_7D1D2 */
extern void* A_NGCS_UPMIX_PLAN_STEREO_TO_7D1D2;

/* Symbol: DAP_CPDP_PVT_data_bass_clear_delayline_buf */
/* Demangled: DAP_CPDP_PVT_data_bass_clear_delayline_buf */
int DAP_CPDP_PVT_data_bass_clear_delayline_buf(void);

/* Symbol: DAP_CPDP_PVT_ldn_norm_log_sone_add */
/* Demangled: DAP_CPDP_PVT_ldn_norm_log_sone_add */
int DAP_CPDP_PVT_ldn_norm_log_sone_add(void);

/* Symbol: DAP_CPDP_PVT_ldn_set_min_ex_c */
/* Demangled: DAP_CPDP_PVT_ldn_set_min_ex_c */
int DAP_CPDP_PVT_ldn_set_min_ex_c(void);

/* Symbol: DAP_CPDP_PVT_ngcs_upmixer_reset */
/* Demangled: DAP_CPDP_PVT_ngcs_upmixer_reset */
int DAP_CPDP_PVT_ngcs_upmixer_reset(void);

/* Symbol: DAP_CPDP_PVT_A_DE_MCRA_ALPHA0 */
/* Demangled: DAP_CPDP_PVT_A_DE_MCRA_ALPHA0 */
extern void* DAP_CPDP_PVT_A_DE_MCRA_ALPHA0;

/* Symbol: DAP_CPDP_PVT_bass_mbdrc_init */
/* Demangled: DAP_CPDP_PVT_bass_mbdrc_init */
int DAP_CPDP_PVT_bass_mbdrc_init(void);

/* Symbol: DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_514 */
/* Demangled: DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_514 */
extern void* DAP_CPDP_PVT_A_LTRT3D_UPMIX_COEFS_514;

/* Symbol: DAP_CPDP_PVT_A_LTRT3D_BH9550_512_CONV */
/* Demangled: DAP_CPDP_PVT_A_LTRT3D_BH9550_512_CONV */
extern void* DAP_CPDP_PVT_A_LTRT3D_BH9550_512_CONV;

/* Symbol: DLB_blk_Lmix_shlULLL_strict */
/* Demangled: DLB_blk_Lmix_shlULLL_strict */
int DLB_blk_Lmix_shlULLL_strict(void);

/* Symbol: DLB_r4_fft_90_s */
/* Demangled: DLB_r4_fft_90_s */
int DLB_r4_fft_90_s(void);

/* Symbol: DLB_r4_inv_fft_256 */
/* Demangled: DLB_r4_inv_fft_256 */
int DLB_r4_inv_fft_256(void);

/* Symbol: _ZN5dolby16DapEffectContext8setParamEijPv */
/* Demangled: dolby::DapEffectContext::setParam(int, unsigned int, void*) */
int _ZN5dolby16DapEffectContext8setParamEijPv(void);

/* Symbol: DAP_CPDP_PVT_mfcc_flux_query_memory */
/* Demangled: DAP_CPDP_PVT_mfcc_flux_query_memory */
int DAP_CPDP_PVT_mfcc_flux_query_memory(void);

/* Symbol: DAP_CPDP_PVT_sben_modulation_close */
/* Demangled: DAP_CPDP_PVT_sben_modulation_close */
int DAP_CPDP_PVT_sben_modulation_close(void);

/* Symbol: DAP_CPDP_PVT_ngcs_stats_init */
/* Demangled: DAP_CPDP_PVT_ngcs_stats_init */
int DAP_CPDP_PVT_ngcs_stats_init(void);

/* Symbol: DLB_r4_inv_fft_8_s */
/* Demangled: DLB_r4_inv_fft_8_s */
int DLB_r4_inv_fft_8_s(void);

/* Symbol: dlb_fft_fwd_scl_240 */
/* Demangled: dlb_fft_fwd_scl_240 */
int dlb_fft_fwd_scl_240(void);

/* Symbol: DAP_CPDP_PVT_ngcs_phase_shifter_run */
/* Demangled: DAP_CPDP_PVT_ngcs_phase_shifter_run */
int DAP_CPDP_PVT_ngcs_phase_shifter_run(void);

/* Symbol: DLB_blk_LLdeshuffleLL_inplace_strict */
/* Demangled: DLB_blk_LLdeshuffleLL_inplace_strict */
int DLB_blk_LLdeshuffleLL_inplace_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L128 */
/* Demangled: dlb_dct_twiddle_table16_L128 */
extern void* dlb_dct_twiddle_table16_L128;

/* Symbol: dlb_dct_twiddle_table16_L144_1 */
/* Demangled: dlb_dct_twiddle_table16_L144_1 */
extern void* dlb_dct_twiddle_table16_L144_1;

/* Symbol: DLB_r4_fft_30 */
/* Demangled: DLB_r4_fft_30 */
int DLB_r4_fft_30(void);

/* Symbol: dap_cpdp_surround_boost_set */
/* Demangled: dap_cpdp_surround_boost_set */
int dap_cpdp_surround_boost_set(void);

/* Symbol: dap_cpdp_virtualizer_surround_speaker_angle_set */
/* Demangled: dap_cpdp_virtualizer_surround_speaker_angle_set */
int dap_cpdp_virtualizer_surround_speaker_angle_set(void);

/* Symbol: DAP_CPDP_PVT_feature_query_clip_mem */
/* Demangled: DAP_CPDP_PVT_feature_query_clip_mem */
int DAP_CPDP_PVT_feature_query_clip_mem(void);

/* Symbol: dlb_dct_twiddle_table16_L144_2 */
/* Demangled: dlb_dct_twiddle_table16_L144_2 */
extern void* dlb_dct_twiddle_table16_L144_2;

/* Symbol: _ZN5dolby17DlbBufferProviderC1Ev */
/* Demangled: dolby::DlbBufferProvider::DlbBufferProvider() */
int _ZN5dolby17DlbBufferProviderC1Ev(void);

/* Symbol: DAP_CPDP_PVT_data_bass_close */
/* Demangled: DAP_CPDP_PVT_data_bass_close */
int DAP_CPDP_PVT_data_bass_close(void);

/* Symbol: DAP_CPDP_PVT_de_duck_process */
/* Demangled: DAP_CPDP_PVT_de_duck_process */
int DAP_CPDP_PVT_de_duck_process(void);

/* Symbol: DAP_CPDP_PVT_spec_flux_query_scratch */
/* Demangled: DAP_CPDP_PVT_spec_flux_query_scratch */
int DAP_CPDP_PVT_spec_flux_query_scratch(void);

/* Symbol: DLB_blk_Liir1L_strict */
/* Demangled: DLB_blk_Liir1L_strict */
int DLB_blk_Liir1L_strict(void);

/* Symbol: DLB_blk_Lmix_shlUL_strict */
/* Demangled: DLB_blk_Lmix_shlUL_strict */
int DLB_blk_Lmix_shlUL_strict(void);

/* Symbol: DLB_r4_fft_32 */
/* Demangled: DLB_r4_fft_32 */
int DLB_r4_fft_32(void);

/* Symbol: DLB_fft_Linv_unscaledCL */
/* Demangled: DLB_fft_Linv_unscaledCL */
int DLB_fft_Linv_unscaledCL(void);

/* Symbol: dlb_qmf_filter_coeff_P5_32 */
/* Demangled: dlb_qmf_filter_coeff_P5_32 */
extern void* dlb_qmf_filter_coeff_P5_32;

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_5CH1 */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_5CH1 */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_5CH1;

/* Symbol: DAP_CPDP_PVT_de_speech_clear */
/* Demangled: DAP_CPDP_PVT_de_speech_clear */
int DAP_CPDP_PVT_de_speech_clear(void);

/* Symbol: DAP_CPDP_PVT_feature_query_scratch */
/* Demangled: DAP_CPDP_PVT_feature_query_scratch */
int DAP_CPDP_PVT_feature_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_mi_dap_smooth_confidence */
/* Demangled: DAP_CPDP_PVT_mi_dap_smooth_confidence */
int DAP_CPDP_PVT_mi_dap_smooth_confidence(void);

/* Symbol: dlb_vec_Lmean_sqrLU_flex */
/* Demangled: dlb_vec_Lmean_sqrLU_flex */
int dlb_vec_Lmean_sqrLU_flex(void);

/* Symbol: DLB_fft_init */
/* Demangled: DLB_fft_init */
int DLB_fft_init(void);

/* Symbol: _ZN5dolby18VoiceEffectContextD1Ev */
/* Demangled: dolby::VoiceEffectContext::~VoiceEffectContext() */
int _ZN5dolby18VoiceEffectContextD1Ev(void);

/* Symbol: _ZN5dolby9DlbEffect32handle_EFFECT_CMD_SET_AUDIO_MODEERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_SET_AUDIO_MODE(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect32handle_EFFECT_CMD_SET_AUDIO_MODEERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int const*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE8do_splatEPvPKvj(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_end_chain_close */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_end_chain_close */
int DAP_CPDP_PVT_dap_cpdp_end_chain_close(void);

/* Symbol: DAP_CPDP_PVT_ERBBandStart */
/* Demangled: DAP_CPDP_PVT_ERBBandStart */
extern void* DAP_CPDP_PVT_ERBBandStart;

/* Symbol: DAP_CPDP_PVT_hybrid_filter_get_setup */
/* Demangled: DAP_CPDP_PVT_hybrid_filter_get_setup */
int DAP_CPDP_PVT_hybrid_filter_get_setup(void);

/* Symbol: dlb_CLmacCLLU_flex */
/* Demangled: dlb_CLmacCLLU_flex */
int dlb_CLmacCLLU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L480 */
/* Demangled: dlb_dct_twiddle_table16_1_L480 */
extern void* dlb_dct_twiddle_table16_1_L480;

/* Symbol: _ZN5dolby17GameEffectContextC2Ev */
/* Demangled: dolby::GameEffectContext::GameEffectContext() */
int _ZN5dolby17GameEffectContextC2Ev(void);

/* Symbol: DAP_CPDP_PVT_dap_pvt_regulator_params_update_control */
/* Demangled: DAP_CPDP_PVT_dap_pvt_regulator_params_update_control */
int DAP_CPDP_PVT_dap_pvt_regulator_params_update_control(void);

/* Symbol: DAP_CPDP_PVT_data_bass_init */
/* Demangled: DAP_CPDP_PVT_data_bass_init */
int DAP_CPDP_PVT_data_bass_init(void);

/* Symbol: A_NGCS_UPMIX_PLAN_5CH1_TO_7D1D2 */
/* Demangled: A_NGCS_UPMIX_PLAN_5CH1_TO_7D1D2 */
extern void* A_NGCS_UPMIX_PLAN_5CH1_TO_7D1D2;

/* Symbol: DLB_r4_fft_36 */
/* Demangled: DLB_r4_fft_36 */
int DLB_r4_fft_36(void);

/* Symbol: DLB_r4_inv_fft_960_s */
/* Demangled: DLB_r4_inv_fft_960_s */
int DLB_r4_inv_fft_960_s(void);

/* Symbol: dlb_cos_48_full_scl */
/* Demangled: dlb_cos_48_full_scl */
extern void* dlb_cos_48_full_scl;

/* Symbol: DAP_CPDP_PVT_asa_calculate_sldn_sone */
/* Demangled: DAP_CPDP_PVT_asa_calculate_sldn_sone */
int DAP_CPDP_PVT_asa_calculate_sldn_sone(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_get_rms_avg_time_win_len */
/* Demangled: DAP_CPDP_PVT_hearing_protection_get_rms_avg_time_win_len */
int DAP_CPDP_PVT_hearing_protection_get_rms_avg_time_win_len(void);

/* Symbol: DAP_CPDP_PVT_calc_hcqmf_3ch_decorr */
/* Demangled: DAP_CPDP_PVT_calc_hcqmf_3ch_decorr */
int DAP_CPDP_PVT_calc_hcqmf_3ch_decorr(void);

/* Symbol: dlb_dct_twiddle_table16_L240 */
/* Demangled: dlb_dct_twiddle_table16_L240 */
extern void* dlb_dct_twiddle_table16_L240;

/* Symbol: DAP_CPDP_PVT_volume_and_ieq_preset_init_generate */
/* Demangled: DAP_CPDP_PVT_volume_and_ieq_preset_init_generate */
int DAP_CPDP_PVT_volume_and_ieq_preset_init_generate(void);

/* Symbol: DAP_CPDP_PVT_mi_internal_init */
/* Demangled: DAP_CPDP_PVT_mi_internal_init */
int DAP_CPDP_PVT_mi_internal_init(void);

/* Symbol: DAP_CPDP_PVT_spec_calc_set_binaural_enable */
/* Demangled: DAP_CPDP_PVT_spec_calc_set_binaural_enable */
int DAP_CPDP_PVT_spec_calc_set_binaural_enable(void);

/* Symbol: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND00 */
/* Demangled: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND00 */
extern void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND00;

/* Symbol: DLB_fft_shutdown */
/* Demangled: DLB_fft_shutdown */
int DLB_fft_shutdown(void);

/* Symbol: DLB_qmf_analysisL_get_max_filter_state_length */
/* Demangled: DLB_qmf_analysisL_get_max_filter_state_length */
int DLB_qmf_analysisL_get_max_filter_state_length(void);

/* Symbol: dap_cpdp_de_amount_set */
/* Demangled: dap_cpdp_de_amount_set */
int dap_cpdp_de_amount_set(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_convert_drc_params */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_convert_drc_params */
int DAP_CPDP_PVT_dap_cpdp_convert_drc_params(void);

/* Symbol: DAP_CPDP_PVT_de_compr_state_init */
/* Demangled: DAP_CPDP_PVT_de_compr_state_init */
int DAP_CPDP_PVT_de_compr_state_init(void);

/* Symbol: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND01 */
/* Demangled: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND01 */
extern void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND01;

/* Symbol: _ZTVN5dolby19DlbCrossfadeProcessE */
/* Demangled: vtable for dolby::DlbCrossfadeProcess */
extern void* _ZTVN5dolby19DlbCrossfadeProcessE;

/* Symbol: DAP_CPDP_PVT_surround_compressor_query_memory */
/* Demangled: DAP_CPDP_PVT_surround_compressor_query_memory */
int DAP_CPDP_PVT_surround_compressor_query_memory(void);

/* Symbol: DAP_CPDP_PVT_dlb_scalar_avg_filter_run */
/* Demangled: DAP_CPDP_PVT_dlb_scalar_avg_filter_run */
int DAP_CPDP_PVT_dlb_scalar_avg_filter_run(void);

/* Symbol: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND02 */
/* Demangled: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND02 */
extern void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND02;

/* Symbol: DLB_blk_Liir1L_setup */
/* Demangled: DLB_blk_Liir1L_setup */
int DLB_blk_Liir1L_setup(void);

/* Symbol: dap_cpdp_mi2dv_leveler_steering_enable_set */
/* Demangled: dap_cpdp_mi2dv_leveler_steering_enable_set */
int dap_cpdp_mi2dv_leveler_steering_enable_set(void);

/* Symbol: DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_is_enabled */
/* Demangled: DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_is_enabled */
int DAP_CPDP_PVT_dap_pvt_audio_optimizer_param_is_enabled(void);

/* Symbol: DAP_CPDP_PVT_feature_get_clip_fea_vec */
/* Demangled: DAP_CPDP_PVT_feature_get_clip_fea_vec */
int DAP_CPDP_PVT_feature_get_clip_fea_vec(void);

/* Symbol: DAP_CPDP_PVT_lvl_noisegate_process */
/* Demangled: DAP_CPDP_PVT_lvl_noisegate_process */
int DAP_CPDP_PVT_lvl_noisegate_process(void);

/* Symbol: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND03 */
/* Demangled: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND03 */
extern void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND03;

/* Symbol: DAP_CPDP_PVT_ngcs_upmixer_process */
/* Demangled: DAP_CPDP_PVT_ngcs_upmixer_process */
int DAP_CPDP_PVT_ngcs_upmixer_process(void);

/* Symbol: DLB_qmf_synthesisL_close */
/* Demangled: DLB_qmf_synthesisL_close */
int DLB_qmf_synthesisL_close(void);

/* Symbol: dlb_dct_twiddle_table16_L15_cos */
/* Demangled: dlb_dct_twiddle_table16_L15_cos */
extern void* dlb_dct_twiddle_table16_L15_cos;

/* Symbol: dap_pvt_bass_mbdrc_param_init */
/* Demangled: dap_pvt_bass_mbdrc_param_init */
int dap_pvt_bass_mbdrc_param_init(void);

/* Symbol: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND04 */
/* Demangled: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND04 */
extern void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND04;

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_syn_process_legacy */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_process_legacy */
int DAP_CPDP_PVT_mfb_rcp10km_syn_process_legacy(void);

/* Symbol: reset_Phase90Hilbert */
/* Demangled: reset_Phase90Hilbert */
int reset_Phase90Hilbert(void);

/* Symbol: dlb_cos_32_full_twiddle */
/* Demangled: dlb_cos_32_full_twiddle */
extern void* dlb_cos_32_full_twiddle;

/* Symbol: _ZN5dolby11Dap2Process7setMaveEv */
/* Demangled: dolby::Dap2Process::setMave() */
int _ZN5dolby11Dap2Process7setMaveEv(void);

/* Symbol: dap_cpdp_virtual_bass_subgains_set */
/* Demangled: dap_cpdp_virtual_bass_subgains_set */
int dap_cpdp_virtual_bass_subgains_set(void);

/* Symbol: DAP_CPDP_PVT_arle_smooth_gains_across_time */
/* Demangled: DAP_CPDP_PVT_arle_smooth_gains_across_time */
int DAP_CPDP_PVT_arle_smooth_gains_across_time(void);

/* Symbol: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND05 */
/* Demangled: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND05 */
extern void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND05;

/* Symbol: DLB_r4_fft_240_s */
/* Demangled: DLB_r4_fft_240_s */
int DLB_r4_fft_240_s(void);

/* Symbol: dlb_fft_inv_scl_576 */
/* Demangled: dlb_fft_inv_scl_576 */
int dlb_fft_inv_scl_576(void);

/* Symbol: dlb_fft_inv_usc_1024 */
/* Demangled: dlb_fft_inv_usc_1024 */
int dlb_fft_inv_usc_1024(void);

/* Symbol: DLB_MFB_TWID256E */
/* Demangled: DLB_MFB_TWID256E */
extern void* DLB_MFB_TWID256E;

/* Symbol: DAP_CPDP_PVT_lfra_mfcc_filter_start_bins_table */
/* Demangled: DAP_CPDP_PVT_lfra_mfcc_filter_start_bins_table */
extern void* DAP_CPDP_PVT_lfra_mfcc_filter_start_bins_table;

/* Symbol: DAP_CPDP_PVT_dvlim_process_indirect */
/* Demangled: DAP_CPDP_PVT_dvlim_process_indirect */
int DAP_CPDP_PVT_dvlim_process_indirect(void);

/* Symbol: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND06 */
/* Demangled: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND06 */
extern void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND06;

/* Symbol: dlb_dct_twiddle_table16_1_L256 */
/* Demangled: dlb_dct_twiddle_table16_1_L256 */
extern void* dlb_dct_twiddle_table16_1_L256;

/* Symbol: DLB_r4_inv_fft_144 */
/* Demangled: DLB_r4_inv_fft_144 */
int DLB_r4_inv_fft_144(void);

/* Symbol: dlb_fft_fwd_scl_360 */
/* Demangled: dlb_fft_fwd_scl_360 */
int dlb_fft_fwd_scl_360(void);

/* Symbol: DLB_Lqmf_synthesisL */
/* Demangled: DLB_Lqmf_synthesisL */
int DLB_Lqmf_synthesisL(void);

/* Symbol: DAP_CPDP_PVT_power_log_add */
/* Demangled: DAP_CPDP_PVT_power_log_add */
int DAP_CPDP_PVT_power_log_add(void);

/* Symbol: DAP_CPDP_PVT_data_bass_harmonic_generate */
/* Demangled: DAP_CPDP_PVT_data_bass_harmonic_generate */
int DAP_CPDP_PVT_data_bass_harmonic_generate(void);

/* Symbol: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND07 */
/* Demangled: DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND07 */
extern void* DAP_CPDP_PVT_A_LDN_SL_VALUES_BAND07;

/* Symbol: DLB_blk_Lattack_decay_peak_iir1L_set_coef */
/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_set_coef */
int DLB_blk_Lattack_decay_peak_iir1L_set_coef(void);

/* Symbol: DLB_r4_fft_576 */
/* Demangled: DLB_r4_fft_576 */
int DLB_r4_fft_576(void);

/* Symbol: DAP_CPDP_PVT_sv_process */
/* Demangled: DAP_CPDP_PVT_sv_process */
int DAP_CPDP_PVT_sv_process(void);

/* Symbol: DLB_blk_Lmix_shlaL */
/* Demangled: DLB_blk_Lmix_shlaL */
int DLB_blk_Lmix_shlaL(void);

/* Symbol: DAP_CPDP_PVT_sbpp_clip_process */
/* Demangled: DAP_CPDP_PVT_sbpp_clip_process */
int DAP_CPDP_PVT_sbpp_clip_process(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L24 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L24 */
extern void* dlb_dct_twiddle_table16_rev_1_L24;

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_vec_syn;

/* Symbol: dlb_blk_Lmpy_shlLLU_flex */
/* Demangled: dlb_blk_Lmpy_shlLLU_flex */
int dlb_blk_Lmpy_shlLLU_flex(void);

/* Symbol: DLB_VLsquaredmagCLIU_strict */
/* Demangled: DLB_VLsquaredmagCLIU_strict */
int DLB_VLsquaredmagCLIU_strict(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_even_0 */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_0 */
int DLB_Lmfb_p10km_synthesisCL_even_0(void);

/* Symbol: dlb_fft_cplx_fwd_usc */
/* Demangled: dlb_fft_cplx_fwd_usc */
extern void* dlb_fft_cplx_fwd_usc;

/* Symbol: DLB_Lmfb_p10km_synthesisCL_even_1 */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_1 */
int DLB_Lmfb_p10km_synthesisCL_even_1(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_even_2 */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_2 */
int DLB_Lmfb_p10km_synthesisCL_even_2(void);

/* Symbol: _ZN5dolby13EffectContext17DmsDeathRecipient11serviceDiedEyRKN7android2wpINS2_4hidl4base4V1_05IBaseEEE */
/* Demangled: dolby::EffectContext::DmsDeathRecipient::serviceDied(unsigned long long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN5dolby13EffectContext17DmsDeathRecipient11serviceDiedEyRKN7android2wpINS2_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: DAP_CPDP_PVT_loudness_init */
/* Demangled: DAP_CPDP_PVT_loudness_init */
int DAP_CPDP_PVT_loudness_init(void);

/* Symbol: DAP_CPDP_PVT_get_ge_music_confidence */
/* Demangled: DAP_CPDP_PVT_get_ge_music_confidence */
int DAP_CPDP_PVT_get_ge_music_confidence(void);

/* Symbol: dlb_fft_inv_usc_720 */
/* Demangled: dlb_fft_inv_usc_720 */
int dlb_fft_inv_usc_720(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_even_3 */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_3 */
int DLB_Lmfb_p10km_synthesisCL_even_3(void);

/* Symbol: DLB_qmf_synthesisL_get_delay */
/* Demangled: DLB_qmf_synthesisL_get_delay */
int DLB_qmf_synthesisL_get_delay(void);

/* Symbol: dap_cpdp_ieq_enable_set */
/* Demangled: dap_cpdp_ieq_enable_set */
int dap_cpdp_ieq_enable_set(void);

/* Symbol: DAP_CPDP_PVT_de_clear */
/* Demangled: DAP_CPDP_PVT_de_clear */
int DAP_CPDP_PVT_de_clear(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_target */
/* Demangled: DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_target */
int DAP_CPDP_PVT_hearing_protection_set_rms_attenuation_target(void);

/* Symbol: DAP_CPDP_PVT_icsc_init */
/* Demangled: DAP_CPDP_PVT_icsc_init */
int DAP_CPDP_PVT_icsc_init(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_rms_gain_calculation */
/* Demangled: DAP_CPDP_PVT_hearing_protection_rms_gain_calculation */
int DAP_CPDP_PVT_hearing_protection_rms_gain_calculation(void);

/* Symbol: dlb_dct_twiddle_table16_L360 */
/* Demangled: dlb_dct_twiddle_table16_L360 */
extern void* dlb_dct_twiddle_table16_L360;

/* Symbol: DLB_r4_inv_fft_90_s */
/* Demangled: DLB_r4_inv_fft_90_s */
int DLB_r4_inv_fft_90_s(void);

/* Symbol: dlb_fft_inv_scl_90 */
/* Demangled: dlb_fft_inv_scl_90 */
int dlb_fft_inv_scl_90(void);

/* Symbol: dlb_hyb_p2_6 */
/* Demangled: dlb_hyb_p2_6 */
extern void* dlb_hyb_p2_6;

/* Symbol: dlb_dct_twiddle_table16_L24_cos */
/* Demangled: dlb_dct_twiddle_table16_L24_cos */
extern void* dlb_dct_twiddle_table16_L24_cos;

/* Symbol: _ZN5dolby13EffectContext6enableEv */
/* Demangled: dolby::EffectContext::enable() */
int _ZN5dolby13EffectContext6enableEv(void);

/* Symbol: DAP_CPDP_PVT_dap_pvt_bass_enhancer_update_control */
/* Demangled: DAP_CPDP_PVT_dap_pvt_bass_enhancer_update_control */
int DAP_CPDP_PVT_dap_pvt_bass_enhancer_update_control(void);

/* Symbol: DAP_CPDP_PVT_feature_init */
/* Demangled: DAP_CPDP_PVT_feature_init */
int DAP_CPDP_PVT_feature_init(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_stats_reset */
/* Demangled: DAP_CPDP_PVT_ltrt3d_stats_reset */
int DAP_CPDP_PVT_ltrt3d_stats_reset(void);

/* Symbol: dlb_dct_twiddle_table16_L90_1 */
/* Demangled: dlb_dct_twiddle_table16_L90_1 */
extern void* dlb_dct_twiddle_table16_L90_1;

/* Symbol: _ZN5dolby13EffectContext5resetEv */
/* Demangled: dolby::EffectContext::reset() */
int _ZN5dolby13EffectContext5resetEv(void);

/* Symbol: dlb_dct_twiddle_table16_L90_2 */
/* Demangled: dlb_dct_twiddle_table16_L90_2 */
extern void* dlb_dct_twiddle_table16_L90_2;

/* Symbol: DLB_r4_fft_48_s */
/* Demangled: DLB_r4_fft_48_s */
int DLB_r4_fft_48_s(void);

/* Symbol: dlb_vec_Labs_maxLU_flex */
/* Demangled: dlb_vec_Labs_maxLU_flex */
int dlb_vec_Labs_maxLU_flex(void);

/* Symbol: DLB_qmf_analysisS_close */
/* Demangled: DLB_qmf_analysisS_close */
int DLB_qmf_analysisS_close(void);

/* Symbol: dap_cpdp_height_filter_mode_set */
/* Demangled: dap_cpdp_height_filter_mode_set */
int dap_cpdp_height_filter_mode_set(void);

/* Symbol: DLB_blk_Liir2ssv1efL_strict */
/* Demangled: DLB_blk_Liir2ssv1efL_strict */
int DLB_blk_Liir2ssv1efL_strict(void);

/* Symbol: DAP_CPDP_PVT_arle_distortion_init */
/* Demangled: DAP_CPDP_PVT_arle_distortion_init */
int DAP_CPDP_PVT_arle_distortion_init(void);

/* Symbol: dap_cpdp_woofer_regulator_enable */
/* Demangled: dap_cpdp_woofer_regulator_enable */
int dap_cpdp_woofer_regulator_enable(void);

/* Symbol: DAP_CPDP_PVT_acorr_query_clip_mem */
/* Demangled: DAP_CPDP_PVT_acorr_query_clip_mem */
int DAP_CPDP_PVT_acorr_query_clip_mem(void);

/* Symbol: DLB_vec_LshlLIU_inplace_strict */
/* Demangled: DLB_vec_LshlLIU_inplace_strict */
int DLB_vec_LshlLIU_inplace_strict(void);

/* Symbol: dlb_vec_LdotLLU_flex */
/* Demangled: dlb_vec_LdotLLU_flex */
int dlb_vec_LdotLLU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L180 */
/* Demangled: dlb_dct_twiddle_table16_rev_L180 */
extern void* dlb_dct_twiddle_table16_rev_L180;

/* Symbol: dlb_fft_inv_scl_96 */
/* Demangled: dlb_fft_inv_scl_96 */
int dlb_fft_inv_scl_96(void);

/* Symbol: _ZN5dolby17DlbBufferProviderD1Ev */
/* Demangled: dolby::DlbBufferProvider::~DlbBufferProvider() */
int _ZN5dolby17DlbBufferProviderD1Ev(void);

/* Symbol: DAP_CPDP_PVT_ngcs_upmixer_query_process_scratch */
/* Demangled: DAP_CPDP_PVT_ngcs_upmixer_query_process_scratch */
int DAP_CPDP_PVT_ngcs_upmixer_query_process_scratch(void);

/* Symbol: dlb_fft_fwd_scl_480 */
/* Demangled: dlb_fft_fwd_scl_480 */
int dlb_fft_fwd_scl_480(void);

/* Symbol: _ZN5dolby18EndpointParamCache17markParamModifiedEi */
/* Demangled: dolby::EndpointParamCache::markParamModified(int) */
int _ZN5dolby18EndpointParamCache17markParamModifiedEi(void);

/* Symbol: DAP_CPDP_PVT_DVLIM_ONE_OVER_256_L */
/* Demangled: DAP_CPDP_PVT_DVLIM_ONE_OVER_256_L */
extern void* DAP_CPDP_PVT_DVLIM_ONE_OVER_256_L;

/* Symbol: DAP_CPDP_PVT_hp_height_fdn_allpass_query_memory */
/* Demangled: DAP_CPDP_PVT_hp_height_fdn_allpass_query_memory */
int DAP_CPDP_PVT_hp_height_fdn_allpass_query_memory(void);

/* Symbol: dlb_dct_twiddle_table16_1_L144 */
/* Demangled: dlb_dct_twiddle_table16_1_L144 */
extern void* dlb_dct_twiddle_table16_1_L144;

/* Symbol: DLB_r4_inv_fft_144_s */
/* Demangled: DLB_r4_inv_fft_144_s */
int DLB_r4_inv_fft_144_s(void);

/* Symbol: dlb_fft_fwd_usc_512 */
/* Demangled: dlb_fft_fwd_usc_512 */
int dlb_fft_fwd_usc_512(void);

/* Symbol: _ZN5dolby16DlbBufferAdapterD2Ev */
/* Demangled: dolby::DlbBufferAdapter::~DlbBufferAdapter() */
int _ZN5dolby16DlbBufferAdapterD2Ev(void);

/* Symbol: DAP_CPDP_PVT_dlb_milib_process */
/* Demangled: DAP_CPDP_PVT_dlb_milib_process */
int DAP_CPDP_PVT_dlb_milib_process(void);

/* Symbol: _ZN5dolby18EndpointParamCacheC2EPNS_11IDlbProcessE */
/* Demangled: dolby::EndpointParamCache::EndpointParamCache(dolby::IDlbProcess*) */
int _ZN5dolby18EndpointParamCacheC2EPNS_11IDlbProcessE(void);

/* Symbol: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_TAB_32K */
/* Demangled: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_TAB_32K */
extern void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_TAB_32K;

/* Symbol: DLB_Sqmf_synthesisCL */
/* Demangled: DLB_Sqmf_synthesisCL */
int DLB_Sqmf_synthesisCL(void);

/* Symbol: dlb_qmf_filter_coeff_P5_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_vec_ana;

/* Symbol: _ZN5dolby17GameEffectContextD2Ev */
/* Demangled: dolby::GameEffectContext::~GameEffectContext() */
int _ZN5dolby17GameEffectContextD2Ev(void);

/* Symbol: dap_cpdp_virtual_bass_harmgains_set */
/* Demangled: dap_cpdp_virtual_bass_harmgains_set */
int dap_cpdp_virtual_bass_harmgains_set(void);

/* Symbol: DAP_CPDP_PVT_spec_subband_bins_hcqmf_tab */
/* Demangled: DAP_CPDP_PVT_spec_subband_bins_hcqmf_tab */
extern void* DAP_CPDP_PVT_spec_subband_bins_hcqmf_tab;

/* Symbol: DAP_CPDP_PVT_volume_and_ieq_update_drc_cut_params */
/* Demangled: DAP_CPDP_PVT_volume_and_ieq_update_drc_cut_params */
int DAP_CPDP_PVT_volume_and_ieq_update_drc_cut_params(void);

/* Symbol: dlb_clclmix5cl10csu_c */
/* Demangled: dlb_clclmix5cl10csu_c */
extern void* dlb_clclmix5cl10csu_c;

/* Symbol: DLB_r4_fft_40 */
/* Demangled: DLB_r4_fft_40 */
int DLB_r4_fft_40(void);

/* Symbol: dlb_qmf_filter_coeff_P4 */
/* Demangled: dlb_qmf_filter_coeff_P4 */
extern void* dlb_qmf_filter_coeff_P4;

/* Symbol: DLB_r4_fft_960_s */
/* Demangled: DLB_r4_fft_960_s */
int DLB_r4_fft_960_s(void);

/* Symbol: dlb_qmf_filter_coeff_P5 */
/* Demangled: dlb_qmf_filter_coeff_P5 */
extern void* dlb_qmf_filter_coeff_P5;

/* Symbol: _ZN5dolby9DlbEffect7releaseEPP18effect_interface_s */
/* Demangled: dolby::DlbEffect::release(effect_interface_s**) */
int _ZN5dolby9DlbEffect7releaseEPP18effect_interface_s(void);

/* Symbol: DLB_blk_LnrrecipLU_strict */
/* Demangled: DLB_blk_LnrrecipLU_strict */
int DLB_blk_LnrrecipLU_strict(void);

/* Symbol: _ZN5dolby18EndpointParamCache8setParamE15audio_devices_tiPKii */
/* Demangled: dolby::EndpointParamCache::setParam(audio_devices_t, int, int const*, int) */
int _ZN5dolby18EndpointParamCache8setParamE15audio_devices_tiPKii(void);

/* Symbol: DAP_CPDP_PVT_mi_vec_mean */
/* Demangled: DAP_CPDP_PVT_mi_vec_mean */
int DAP_CPDP_PVT_mi_vec_mean(void);

/* Symbol: DAP_CPDP_PVT_dlb_milib_get_delay_samples */
/* Demangled: DAP_CPDP_PVT_dlb_milib_get_delay_samples */
int DAP_CPDP_PVT_dlb_milib_get_delay_samples(void);

/* Symbol: DLB_blk_Liir1xL_setup */
/* Demangled: DLB_blk_Liir1xL_setup */
int DLB_blk_Liir1xL_setup(void);

/* Symbol: dlb_CLmpy_shlCLSIU_flex */
/* Demangled: dlb_CLmpy_shlCLSIU_flex */
int dlb_CLmpy_shlCLSIU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L1024 */
/* Demangled: dlb_dct_twiddle_table16_L1024 */
extern void* dlb_dct_twiddle_table16_L1024;

/* Symbol: dap_cpdp_pvt_virtualizer_param_init */
/* Demangled: dap_cpdp_pvt_virtualizer_param_init */
int dap_cpdp_pvt_virtualizer_param_init(void);

/* Symbol: DAP_CPDP_PVT_DVLIM_ONE_OVER_256_S */
/* Demangled: DAP_CPDP_PVT_DVLIM_ONE_OVER_256_S */
extern void* DAP_CPDP_PVT_DVLIM_ONE_OVER_256_S;

/* Symbol: DAP_CPDP_PVT_hp_height_reverb_query_memory */
/* Demangled: DAP_CPDP_PVT_hp_height_reverb_query_memory */
int DAP_CPDP_PVT_hp_height_reverb_query_memory(void);

/* Symbol: dlb_dct_twiddle_table16_L480 */
/* Demangled: dlb_dct_twiddle_table16_L480 */
extern void* dlb_dct_twiddle_table16_L480;

/* Symbol: DAP_CPDP_PVT_ngcs_reset */
/* Demangled: DAP_CPDP_PVT_ngcs_reset */
int DAP_CPDP_PVT_ngcs_reset(void);

/* Symbol: DAP_CPDP_PVT_sben_rhythm_calc */
/* Demangled: DAP_CPDP_PVT_sben_rhythm_calc */
int DAP_CPDP_PVT_sben_rhythm_calc(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L320 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L320 */
extern void* dlb_dct_twiddle_table16_rev_1_L320;

/* Symbol: DLB_r4_fft_45 */
/* Demangled: DLB_r4_fft_45 */
int DLB_r4_fft_45(void);

/* Symbol: dlb_fft_fwd_scl_256 */
/* Demangled: dlb_fft_fwd_scl_256 */
int dlb_fft_fwd_scl_256(void);

/* Symbol: DLB_blk_Liir1L_set_coef */
/* Demangled: DLB_blk_Liir1L_set_coef */
int DLB_blk_Liir1L_set_coef(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_end_chain_query_scratch */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_end_chain_query_scratch */
int DAP_CPDP_PVT_dap_cpdp_end_chain_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_P_MIX_FREQ_HIGH_BOUNDARY_TAB_32KHZ */
/* Demangled: DAP_CPDP_PVT_P_MIX_FREQ_HIGH_BOUNDARY_TAB_32KHZ */
extern void* DAP_CPDP_PVT_P_MIX_FREQ_HIGH_BOUNDARY_TAB_32KHZ;

/* Symbol: _ZN5dolby18VoiceEffectContext9setVolumeEiPKj */
/* Demangled: dolby::VoiceEffectContext::setVolume(int, unsigned int const*) */
int _ZN5dolby18VoiceEffectContext9setVolumeEiPKj(void);

/* Symbol: DLB_r4_fft_48 */
/* Demangled: DLB_r4_fft_48 */
int DLB_r4_fft_48(void);

/* Symbol: DLB_r4_fft_2048 */
/* Demangled: DLB_r4_fft_2048 */
int DLB_r4_fft_2048(void);

/* Symbol: DLB_blk_Lattack_decay_peak_iir1L_setup */
/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_setup */
int DLB_blk_Lattack_decay_peak_iir1L_setup(void);

/* Symbol: DLB_r4_fft_1024_s */
/* Demangled: DLB_r4_fft_1024_s */
int DLB_r4_fft_1024_s(void);

/* Symbol: DAP_CPDP_PVT_dap_pvt_bass_enhancer_param_init */
/* Demangled: DAP_CPDP_PVT_dap_pvt_bass_enhancer_param_init */
int DAP_CPDP_PVT_dap_pvt_bass_enhancer_param_init(void);

/* Symbol: DAP_CPDP_PVT_rs_init */
/* Demangled: DAP_CPDP_PVT_rs_init */
int DAP_CPDP_PVT_rs_init(void);

/* Symbol: DAP_CPDP_PVT_sben_rap_reset */
/* Demangled: DAP_CPDP_PVT_sben_rap_reset */
int DAP_CPDP_PVT_sben_rap_reset(void);

/* Symbol: DAP_CPDP_PVT_step_weight_frm32_tab */
/* Demangled: DAP_CPDP_PVT_step_weight_frm32_tab */
extern void* DAP_CPDP_PVT_step_weight_frm32_tab;

/* Symbol: DLB_blk_Liir1xL_set_coef */
/* Demangled: DLB_blk_Liir1xL_set_coef */
int DLB_blk_Liir1xL_set_coef(void);

/* Symbol: DAP_CPDP_PVT_newton_raphson_recip */
/* Demangled: DAP_CPDP_PVT_newton_raphson_recip */
int DAP_CPDP_PVT_newton_raphson_recip(void);

/* Symbol: A_NGCS_UPMIX_PLAN_7CH1_TO_7D1D2 */
/* Demangled: A_NGCS_UPMIX_PLAN_7CH1_TO_7D1D2 */
extern void* A_NGCS_UPMIX_PLAN_7CH1_TO_7D1D2;

/* Symbol: DLB_r4_inv_fft_384 */
/* Demangled: DLB_r4_inv_fft_384 */
int DLB_r4_inv_fft_384(void);

/* Symbol: DAP_CPDP_PVT_dvlim_clear */
/* Demangled: DAP_CPDP_PVT_dvlim_clear */
int DAP_CPDP_PVT_dvlim_clear(void);

/* Symbol: DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC_256M */
/* Demangled: DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC_256M */
extern void* DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC_256M;

/* Symbol: DAP_CPDP_PVT_lfra_close */
/* Demangled: DAP_CPDP_PVT_lfra_close */
int DAP_CPDP_PVT_lfra_close(void);

/* Symbol: DAP_CPDP_PVT_DE_POW_RATE_32K */
/* Demangled: DAP_CPDP_PVT_DE_POW_RATE_32K */
extern void* DAP_CPDP_PVT_DE_POW_RATE_32K;

/* Symbol: DLB_hybrid_analysisCL_open */
/* Demangled: DLB_hybrid_analysisCL_open */
int DLB_hybrid_analysisCL_open(void);

/* Symbol: DAP_CPDP_PVT_sbpp_query_scratch */
/* Demangled: DAP_CPDP_PVT_sbpp_query_scratch */
int DAP_CPDP_PVT_sbpp_query_scratch(void);

/* Symbol: dlb_blk_Lmix_shlULLL_flex */
/* Demangled: dlb_blk_Lmix_shlULLL_flex */
int dlb_blk_Lmix_shlULLL_flex(void);

/* Symbol: dlb_CLaddCLCLU_flex */
/* Demangled: dlb_CLaddCLCLU_flex */
int dlb_CLaddCLCLU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L30 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L30 */
extern void* dlb_dct_twiddle_table16_rev_1_L30;

/* Symbol: dlb_dct_twiddle_table16_L256 */
/* Demangled: dlb_dct_twiddle_table16_L256 */
extern void* dlb_dct_twiddle_table16_L256;

/* Symbol: DLB_r4_fft_16_s */
/* Demangled: DLB_r4_fft_16_s */
int DLB_r4_fft_16_s(void);

/* Symbol: dlb_fft_inv_scl_120 */
/* Demangled: dlb_fft_inv_scl_120 */
int dlb_fft_inv_scl_120(void);

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_ana_close */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_close */
int DAP_CPDP_PVT_mfb_rcp10km_ana_close(void);

/* Symbol: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_TAB_44K */
/* Demangled: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_TAB_44K */
extern void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_TAB_44K;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L32 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L32 */
extern void* dlb_dct_twiddle_table16_rev_1_L32;

/* Symbol: DLB_r4_fft_120 */
/* Demangled: DLB_r4_fft_120 */
int DLB_r4_fft_120(void);

/* Symbol: dap_cpdp_virtualizer_start_band_set */
/* Demangled: dap_cpdp_virtualizer_start_band_set */
int dap_cpdp_virtualizer_start_band_set(void);

/* Symbol: DAP_CPDP_PVT_mdct_cos_tab */
/* Demangled: DAP_CPDP_PVT_mdct_cos_tab */
extern void* DAP_CPDP_PVT_mdct_cos_tab;

/* Symbol: DAP_CPDP_PVT_a_dvlim_win_64 */
/* Demangled: DAP_CPDP_PVT_a_dvlim_win_64 */
extern void* DAP_CPDP_PVT_a_dvlim_win_64;

/* Symbol: DLB_r4_inv_fft_48_s */
/* Demangled: DLB_r4_inv_fft_48_s */
int DLB_r4_inv_fft_48_s(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_get_process_channels */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_get_process_channels */
int DAP_CPDP_PVT_dap_cpdp_get_process_channels(void);

/* Symbol: DAP_CPDP_PVT_AA_COMPR_COEFS_SLOPES_32K */
/* Demangled: DAP_CPDP_PVT_AA_COMPR_COEFS_SLOPES_32K */
extern void* DAP_CPDP_PVT_AA_COMPR_COEFS_SLOPES_32K;

/* Symbol: DAP_CPDP_PVT_zcr_frame_process */
/* Demangled: DAP_CPDP_PVT_zcr_frame_process */
int DAP_CPDP_PVT_zcr_frame_process(void);

/* Symbol: DLB_CLaddCLCLU_strict */
/* Demangled: DLB_CLaddCLCLU_strict */
int DLB_CLaddCLCLU_strict(void);

/* Symbol: DAP_CPDP_PVT_hist_get_num_vals_in_hist */
/* Demangled: DAP_CPDP_PVT_hist_get_num_vals_in_hist */
int DAP_CPDP_PVT_hist_get_num_vals_in_hist(void);

/* Symbol: dlb_dct_twiddle_table16_L48_1 */
/* Demangled: dlb_dct_twiddle_table16_L48_1 */
extern void* dlb_dct_twiddle_table16_L48_1;

/* Symbol: dlb_fft_inv_usc_960 */
/* Demangled: dlb_fft_inv_usc_960 */
int dlb_fft_inv_usc_960(void);

/* Symbol: DAP_CPDP_PVT_hdr_P2powP */
/* Demangled: DAP_CPDP_PVT_hdr_P2powP */
int DAP_CPDP_PVT_hdr_P2powP(void);

/* Symbol: dap_cpdp_volume_and_ieq_process */
/* Demangled: dap_cpdp_volume_and_ieq_process */
int dap_cpdp_volume_and_ieq_process(void);

/* Symbol: DAP_CPDP_PVT_A_LDN_PF_AVG_EX_DB */
/* Demangled: DAP_CPDP_PVT_A_LDN_PF_AVG_EX_DB */
extern void* DAP_CPDP_PVT_A_LDN_PF_AVG_EX_DB;

/* Symbol: DAP_CPDP_PVT_virtual_bass_hybrid_ana */
/* Demangled: DAP_CPDP_PVT_virtual_bass_hybrid_ana */
int DAP_CPDP_PVT_virtual_bass_hybrid_ana(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L36 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L36 */
extern void* dlb_dct_twiddle_table16_rev_1_L36;

/* Symbol: dlb_dct_twiddle_table16_L48_2 */
/* Demangled: dlb_dct_twiddle_table16_L48_2 */
extern void* dlb_dct_twiddle_table16_L48_2;

/* Symbol: dap_cpdp_pvt_hearing_protection_update_control */
/* Demangled: dap_cpdp_pvt_hearing_protection_update_control */
int dap_cpdp_pvt_hearing_protection_update_control(void);

/* Symbol: _ZN5dolby9EffectDap9setDeviceE15audio_devices_t */
/* Demangled: dolby::EffectDap::setDevice(audio_devices_t) */
int _ZN5dolby9EffectDap9setDeviceE15audio_devices_t(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_query_memory */
/* Demangled: DAP_CPDP_PVT_hearing_protection_query_memory */
int DAP_CPDP_PVT_hearing_protection_query_memory(void);

/* Symbol: dlb_fft_fwd_scl_144 */
/* Demangled: dlb_fft_fwd_scl_144 */
int dlb_fft_fwd_scl_144(void);

/* Symbol: dlb_fft_inv_scl_128 */
/* Demangled: dlb_fft_inv_scl_128 */
int dlb_fft_inv_scl_128(void);

/* Symbol: DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF0_COMPENSATION_LL */
/* Demangled: DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF0_COMPENSATION_LL */
extern void* DAP_CPDP_PVT_A_VIRTUAL_BASS_QMF0_COMPENSATION_LL;

/* Symbol: DAP_CPDP_PVT_p_adaboost_hcqmf_model_tab */
/* Demangled: DAP_CPDP_PVT_p_adaboost_hcqmf_model_tab */
extern void* DAP_CPDP_PVT_p_adaboost_hcqmf_model_tab;

/* Symbol: DAP_CPDP_PVT_spec_subband_reciprocal_hcqmf_tab */
/* Demangled: DAP_CPDP_PVT_spec_subband_reciprocal_hcqmf_tab */
extern void* DAP_CPDP_PVT_spec_subband_reciprocal_hcqmf_tab;

/* Symbol: _ZN5dolby18VoiceEffectContextD0Ev */
/* Demangled: dolby::VoiceEffectContext::~VoiceEffectContext() */
int _ZN5dolby18VoiceEffectContextD0Ev(void);

/* Symbol: DLB_r4_fft_128 */
/* Demangled: DLB_r4_fft_128 */
int DLB_r4_fft_128(void);

/* Symbol: dlb_odd_fft_cplx_inv_scl */
/* Demangled: dlb_odd_fft_cplx_inv_scl */
extern void* dlb_odd_fft_cplx_inv_scl;

/* Symbol: DLB_fft_state_query_mem */
/* Demangled: DLB_fft_state_query_mem */
int DLB_fft_state_query_mem(void);

/* Symbol: _ZN5dolby17GameEffectContextC1Ev */
/* Demangled: dolby::GameEffectContext::GameEffectContext() */
int _ZN5dolby17GameEffectContextC1Ev(void);

/* Symbol: _ZN5dolby16DapEffectContext15getDapParameterEjPvPj */
/* Demangled: dolby::DapEffectContext::getDapParameter(unsigned int, void*, unsigned int*) */
int _ZN5dolby16DapEffectContext15getDapParameterEjPvPj(void);

/* Symbol: _ZN5dolby16DlbBufferAdapter8getParamEiPiS1_ */
/* Demangled: dolby::DlbBufferAdapter::getParam(int, int*, int*) */
int _ZN5dolby16DlbBufferAdapter8getParamEiPiS1_(void);

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_7CH1 */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_7CH1 */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_STEREO_TO_7CH1;

/* Symbol: dlb_dct_twiddle_table16_1_L2 */
/* Demangled: dlb_dct_twiddle_table16_1_L2 */
extern void* dlb_dct_twiddle_table16_1_L2;

/* Symbol: dlb_fft_fwd_usc_12 */
/* Demangled: dlb_fft_fwd_usc_12 */
int dlb_fft_fwd_usc_12(void);

/* Symbol: DAP_CPDP_PVT_sben_rap_close */
/* Demangled: DAP_CPDP_PVT_sben_rap_close */
int DAP_CPDP_PVT_sben_rap_close(void);

/* Symbol: DLB_blk_Liir1xL_strict */
/* Demangled: DLB_blk_Liir1xL_strict */
int DLB_blk_Liir1xL_strict(void);

/* Symbol: DLB_r4_fft_144_s */
/* Demangled: DLB_r4_fft_144_s */
int DLB_r4_fft_144_s(void);

/* Symbol: DAP_CPDP_PVT_dvlim_get_version */
/* Demangled: DAP_CPDP_PVT_dvlim_get_version */
int DAP_CPDP_PVT_dvlim_get_version(void);

/* Symbol: DAP_CPDP_PVT_dlb_shift_ex_avg_filter_init */
/* Demangled: DAP_CPDP_PVT_dlb_shift_ex_avg_filter_init */
int DAP_CPDP_PVT_dlb_shift_ex_avg_filter_init(void);

/* Symbol: dlb_dct_twiddle_table16_1_L4 */
/* Demangled: dlb_dct_twiddle_table16_1_L4 */
extern void* dlb_dct_twiddle_table16_1_L4;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: DAP_CPDP_PVT_sben_query_memory */
/* Demangled: DAP_CPDP_PVT_sben_query_memory */
int DAP_CPDP_PVT_sben_query_memory(void);

/* Symbol: DAP_CPDP_PVT_DE_POW_RATE_44K */
/* Demangled: DAP_CPDP_PVT_DE_POW_RATE_44K */
extern void* DAP_CPDP_PVT_DE_POW_RATE_44K;

/* Symbol: dlb_dct_twiddle_table16_1_L384 */
/* Demangled: dlb_dct_twiddle_table16_1_L384 */
extern void* dlb_dct_twiddle_table16_1_L384;

/* Symbol: dlb_fft_fwd_usc_15 */
/* Demangled: dlb_fft_fwd_usc_15 */
int dlb_fft_fwd_usc_15(void);

/* Symbol: dlb_qmf_filter_coeff_P5_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_vec_syn;

/* Symbol: _ZN5dolby9EffectDap19isSharedParamSetterEv */
/* Demangled: dolby::EffectDap::isSharedParamSetter() */
int _ZN5dolby9EffectDap19isSharedParamSetterEv(void);

/* Symbol: _ZN5dolby17GameEffectContext7processEP14audio_buffer_sS2_ */
/* Demangled: dolby::GameEffectContext::process(audio_buffer_s*, audio_buffer_s*) */
int _ZN5dolby17GameEffectContext7processEP14audio_buffer_sS2_(void);

/* Symbol: dlb_fft_inv_scl_240 */
/* Demangled: dlb_fft_inv_scl_240 */
int dlb_fft_inv_scl_240(void);

/* Symbol: dlb_fft_fwd_usc_16 */
/* Demangled: dlb_fft_fwd_usc_16 */
int dlb_fft_fwd_usc_16(void);

/* Symbol: DAP_CPDP_PVT_arle_smoothed_excitations_init */
/* Demangled: DAP_CPDP_PVT_arle_smoothed_excitations_init */
int DAP_CPDP_PVT_arle_smoothed_excitations_init(void);

/* Symbol: DLB_Lpow05I16 */
/* Demangled: DLB_Lpow05I16 */
int DLB_Lpow05I16(void);

/* Symbol: DAP_CPDP_PVT_sben_init */
/* Demangled: DAP_CPDP_PVT_sben_init */
int DAP_CPDP_PVT_sben_init(void);

/* Symbol: DAP_CPDP_PVT_ldn_calc_specific_loudness */
/* Demangled: DAP_CPDP_PVT_ldn_calc_specific_loudness */
int DAP_CPDP_PVT_ldn_calc_specific_loudness(void);

/* Symbol: dlb_dct_twiddle_table16_L144 */
/* Demangled: dlb_dct_twiddle_table16_L144 */
extern void* dlb_dct_twiddle_table16_L144;

/* Symbol: _ZTVN5dolby17GameEffectContextE */
/* Demangled: vtable for dolby::GameEffectContext */
extern void* _ZTVN5dolby17GameEffectContextE;

/* Symbol: DAP_CPDP_PVT_dap_cpdp_virt_chain_close */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_virt_chain_close */
int DAP_CPDP_PVT_dap_cpdp_virt_chain_close(void);

/* Symbol: DLB_CLcopyCLU_strict */
/* Demangled: DLB_CLcopyCLU_strict */
int DLB_CLcopyCLU_strict(void);

/* Symbol: DAP_CPDP_PVT_mi_pre_process */
/* Demangled: DAP_CPDP_PVT_mi_pre_process */
int DAP_CPDP_PVT_mi_pre_process(void);

/* Symbol: dlb_dct_twiddle_table16_1_L8 */
/* Demangled: dlb_dct_twiddle_table16_1_L8 */
extern void* dlb_dct_twiddle_table16_1_L8;

/* Symbol: dlb_dct_twiddle_table16_rev_L192 */
/* Demangled: dlb_dct_twiddle_table16_rev_L192 */
extern void* dlb_dct_twiddle_table16_rev_L192;

/* Symbol: DLB_r4_fft_240 */
/* Demangled: DLB_r4_fft_240 */
int DLB_r4_fft_240(void);

/* Symbol: dap_cpdp_regulator_speaker_distortion_enable_set */
/* Demangled: dap_cpdp_regulator_speaker_distortion_enable_set */
int dap_cpdp_regulator_speaker_distortion_enable_set(void);

/* Symbol: dlb_CLzeroCLU_flex */
/* Demangled: dlb_CLzeroCLU_flex */
int dlb_CLzeroCLU_flex(void);

/* Symbol: DLB_r4_inv_fft_12 */
/* Demangled: DLB_r4_inv_fft_12 */
int DLB_r4_inv_fft_12(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_symmetric */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_symmetric */
int DLB_Lmfb_p10km_synthesisCL_symmetric(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcess20updateProcessEnabledEv */
/* Demangled: dolby::DlbCrossfadeProcess::updateProcessEnabled() */
int _ZN5dolby19DlbCrossfadeProcess20updateProcessEnabledEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj(void);

/* Symbol: DAP_CPDP_PVT_AA_COMPR_COEFS_SLOPES_44K */
/* Demangled: DAP_CPDP_PVT_AA_COMPR_COEFS_SLOPES_44K */
extern void* DAP_CPDP_PVT_AA_COMPR_COEFS_SLOPES_44K;

/* Symbol: DLB_r4_inv_fft_2048 */
/* Demangled: DLB_r4_inv_fft_2048 */
int DLB_r4_inv_fft_2048(void);

/* Symbol: DLB_CLqmf_analysisL */
/* Demangled: DLB_CLqmf_analysisL */
int DLB_CLqmf_analysisL(void);

/* Symbol: _ZN5dolby18EndpointParamCache19commitChangedParamsE15audio_devices_t */
/* Demangled: dolby::EndpointParamCache::commitChangedParams(audio_devices_t) */
int _ZN5dolby18EndpointParamCache19commitChangedParamsE15audio_devices_t(void);

/* Symbol: dlb_dct_twiddle_table16_L768_1 */
/* Demangled: dlb_dct_twiddle_table16_L768_1 */
extern void* dlb_dct_twiddle_table16_L768_1;

/* Symbol: dap_cpdp_ltrt3d_decoder_mode_set */
/* Demangled: dap_cpdp_ltrt3d_decoder_mode_set */
int dap_cpdp_ltrt3d_decoder_mode_set(void);

/* Symbol: DAP_CPDP_PVT_data_bass_delayline_buf_attenuate */
/* Demangled: DAP_CPDP_PVT_data_bass_delayline_buf_attenuate */
int DAP_CPDP_PVT_data_bass_delayline_buf_attenuate(void);

/* Symbol: DAP_CPDP_PVT_delay_line_reset */
/* Demangled: DAP_CPDP_PVT_delay_line_reset */
int DAP_CPDP_PVT_delay_line_reset(void);

/* Symbol: dlb_blk_LminLL_flex */
/* Demangled: dlb_blk_LminLL_flex */
int dlb_blk_LminLL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L768_2 */
/* Demangled: dlb_dct_twiddle_table16_L768_2 */
extern void* dlb_dct_twiddle_table16_L768_2;

/* Symbol: DLB_r4_inv_fft_15 */
/* Demangled: DLB_r4_inv_fft_15 */
int DLB_r4_inv_fft_15(void);

/* Symbol: dlb_clclmix5cl10csu_order_coef_c */
/* Demangled: dlb_clclmix5cl10csu_order_coef_c */
extern void* dlb_clclmix5cl10csu_order_coef_c;

/* Symbol: DLB_r4_inv_fft_16 */
/* Demangled: DLB_r4_inv_fft_16 */
int DLB_r4_inv_fft_16(void);

/* Symbol: DAP_CPDP_PVT_delta_mfcc_query_clip_mem */
/* Demangled: DAP_CPDP_PVT_delta_mfcc_query_clip_mem */
int DAP_CPDP_PVT_delta_mfcc_query_clip_mem(void);

/* Symbol: DAP_CPDP_PVT_A_DE_COMPR_DIV_COEFS */
/* Demangled: DAP_CPDP_PVT_A_DE_COMPR_DIV_COEFS */
extern void* DAP_CPDP_PVT_A_DE_COMPR_DIV_COEFS;

/* Symbol: dlb_CLmix4CL4SU_flex */
/* Demangled: dlb_CLmix4CL4SU_flex */
int dlb_CLmix4CL4SU_flex(void);

/* Symbol: DLB_mfb_p10km_synthesisCL_query_mem */
/* Demangled: DLB_mfb_p10km_synthesisCL_query_mem */
int DLB_mfb_p10km_synthesisCL_query_mem(void);

/* Symbol: _ZTVN5dolby13EffectContext17DmsDeathRecipientE */
/* Demangled: vtable for dolby::EffectContext::DmsDeathRecipient */
extern void* _ZTVN5dolby13EffectContext17DmsDeathRecipientE;

/* Symbol: DAP_CPDP_PVT_icsc_query_memory */
/* Demangled: DAP_CPDP_PVT_icsc_query_memory */
int DAP_CPDP_PVT_icsc_query_memory(void);

/* Symbol: DAP_CPDP_PVT_sben_rap_query_memory */
/* Demangled: DAP_CPDP_PVT_sben_rap_query_memory */
int DAP_CPDP_PVT_sben_rap_query_memory(void);

/* Symbol: DLB_blk_Lattack_decay_iir1L_strict */
/* Demangled: DLB_blk_Lattack_decay_iir1L_strict */
int DLB_blk_Lattack_decay_iir1L_strict(void);

/* Symbol: DLB_blk_Liir2ssefL_setup */
/* Demangled: DLB_blk_Liir2ssefL_setup */
int DLB_blk_Liir2ssefL_setup(void);

/* Symbol: DLB_r4_inv_fft_16_s */
/* Demangled: DLB_r4_inv_fft_16_s */
int DLB_r4_inv_fft_16_s(void);

/* Symbol: _ZN5dolby13EffectContext4initEv */
/* Demangled: dolby::EffectContext::init() */
int _ZN5dolby13EffectContext4initEv(void);

/* Symbol: DLB_BLmpy_scale_xBLSU_strict */
/* Demangled: DLB_BLmpy_scale_xBLSU_strict */
int DLB_BLmpy_scale_xBLSU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L60_cos */
/* Demangled: dlb_dct_twiddle_table16_L60_cos */
extern void* dlb_dct_twiddle_table16_L60_cos;

/* Symbol: _ZN5dolby11Dap2ProcessC2EbbbPKc */
/* Demangled: dolby::Dap2Process::Dap2Process(bool, bool, bool, char const*) */
int _ZN5dolby11Dap2ProcessC2EbbbPKc(void);

/* Symbol: DAP_CPDP_PVT_a_dvlim_win_128 */
/* Demangled: DAP_CPDP_PVT_a_dvlim_win_128 */
extern void* DAP_CPDP_PVT_a_dvlim_win_128;

/* Symbol: DLB_cvec_Lmpy_conjLLIU_strict */
/* Demangled: DLB_cvec_Lmpy_conjLLIU_strict */
int DLB_cvec_Lmpy_conjLLIU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L16_1 */
/* Demangled: dlb_dct_twiddle_table16_L16_1 */
extern void* dlb_dct_twiddle_table16_L16_1;

/* Symbol: DLB_CLqmf_analysisS */
/* Demangled: DLB_CLqmf_analysisS */
int DLB_CLqmf_analysisS(void);

/* Symbol: dlb_blk_LmixLL_flex */
/* Demangled: dlb_blk_LmixLL_flex */
int dlb_blk_LmixLL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L16_2 */
/* Demangled: dlb_dct_twiddle_table16_L16_2 */
extern void* dlb_dct_twiddle_table16_L16_2;

/* Symbol: _ZN5dolby18EndpointParamCache9setDeviceE15audio_devices_t */
/* Demangled: dolby::EndpointParamCache::setDevice(audio_devices_t) */
int _ZN5dolby18EndpointParamCache9setDeviceE15audio_devices_t(void);

/* Symbol: DAP_CPDP_PVT_mi_pre_query_memory */
/* Demangled: DAP_CPDP_PVT_mi_pre_query_memory */
int DAP_CPDP_PVT_mi_pre_query_memory(void);

/* Symbol: _ZNK7android6VectorIjE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<unsigned int>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIjE16do_move_backwardEPvPKvj(void);

/* Symbol: DLB_vec_Lmean_sqrLU_strict */
/* Demangled: DLB_vec_Lmean_sqrLU_strict */
int DLB_vec_Lmean_sqrLU_strict(void);

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5CH1 */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5CH1 */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5CH1;

/* Symbol: DLB_r4_inv_fft_160 */
/* Demangled: DLB_r4_inv_fft_160 */
int DLB_r4_inv_fft_160(void);

/* Symbol: dlb_fft_fwd_usc_640 */
/* Demangled: dlb_fft_fwd_usc_640 */
int dlb_fft_fwd_usc_640(void);

/* Symbol: dlb_fft_inv_scl_360 */
/* Demangled: dlb_fft_inv_scl_360 */
int dlb_fft_inv_scl_360(void);

/* Symbol: dlb_fft_fwd_usc_2048 */
/* Demangled: dlb_fft_fwd_usc_2048 */
int dlb_fft_fwd_usc_2048(void);

/* Symbol: _ZN5dolby16DapEffectContext16getTuningVersionEPvPj */
/* Demangled: dolby::DapEffectContext::getTuningVersion(void*, unsigned int*) */
int _ZN5dolby16DapEffectContext16getTuningVersionEPvPj(void);

/* Symbol: dap_cpdp_volume_modeler_calibration_set */
/* Demangled: dap_cpdp_volume_modeler_calibration_set */
int dap_cpdp_volume_modeler_calibration_set(void);

/* Symbol: DAP_CPDP_PVT_zcr_clip_process */
/* Demangled: DAP_CPDP_PVT_zcr_clip_process */
int DAP_CPDP_PVT_zcr_clip_process(void);

/* Symbol: DAP_CPDP_PVT_bass_mbdrc_query_memory */
/* Demangled: DAP_CPDP_PVT_bass_mbdrc_query_memory */
int DAP_CPDP_PVT_bass_mbdrc_query_memory(void);

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_ana_query_scratch */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_query_scratch */
int DAP_CPDP_PVT_mfb_rcp10km_ana_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_sone_buffer_query_memory */
/* Demangled: DAP_CPDP_PVT_sone_buffer_query_memory */
int DAP_CPDP_PVT_sone_buffer_query_memory(void);

/* Symbol: DLB_r4_fft_360 */
/* Demangled: DLB_r4_fft_360 */
int DLB_r4_fft_360(void);

/* Symbol: _ZN5dolby17GameEffectContext9setDeviceE15audio_devices_t */
/* Demangled: dolby::GameEffectContext::setDevice(audio_devices_t) */
int _ZN5dolby17GameEffectContext9setDeviceE15audio_devices_t(void);

/* Symbol: DAP_CPDP_PVT_ngcs_steering_table_get_segment_from_idx */
/* Demangled: DAP_CPDP_PVT_ngcs_steering_table_get_segment_from_idx */
int DAP_CPDP_PVT_ngcs_steering_table_get_segment_from_idx(void);

/* Symbol: dlb_blk_LsaddLL_flex */
/* Demangled: dlb_blk_LsaddLL_flex */
int dlb_blk_LsaddLL_flex(void);

/* Symbol: _ZN5dolby17DlbBufferProviderD0Ev */
/* Demangled: dolby::DlbBufferProvider::~DlbBufferProvider() */
int _ZN5dolby17DlbBufferProviderD0Ev(void);

/* Symbol: DAP_CPDP_PVT_dlb_milib_query_memory */
/* Demangled: DAP_CPDP_PVT_dlb_milib_query_memory */
int DAP_CPDP_PVT_dlb_milib_query_memory(void);

/* Symbol: DAP_CPDP_PVT_virtual_bass_hybrid_syn */
/* Demangled: DAP_CPDP_PVT_virtual_bass_hybrid_syn */
int DAP_CPDP_PVT_virtual_bass_hybrid_syn(void);

/* Symbol: DAP_CPDP_PVT_sben_query_clip_mem */
/* Demangled: DAP_CPDP_PVT_sben_query_clip_mem */
int DAP_CPDP_PVT_sben_query_clip_mem(void);

/* Symbol: _ZN5dolby16DlbBufferAdapterD1Ev */
/* Demangled: dolby::DlbBufferAdapter::~DlbBufferAdapter() */
int _ZN5dolby16DlbBufferAdapterD1Ev(void);

/* Symbol: DAP_CPDP_PVT_delay_line_peek_indirect_offset */
/* Demangled: DAP_CPDP_PVT_delay_line_peek_indirect_offset */
int DAP_CPDP_PVT_delay_line_peek_indirect_offset(void);

/* Symbol: DAP_CPDP_PVT_sbsc_query_scratch */
/* Demangled: DAP_CPDP_PVT_sbsc_query_scratch */
int DAP_CPDP_PVT_sbsc_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_dvlim_get_enable */
/* Demangled: DAP_CPDP_PVT_dvlim_get_enable */
int DAP_CPDP_PVT_dvlim_get_enable(void);

/* Symbol: DAP_CPDP_PVT_simple_downmixer_query_scratch */
/* Demangled: DAP_CPDP_PVT_simple_downmixer_query_scratch */
int DAP_CPDP_PVT_simple_downmixer_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_downmix_excitations */
/* Demangled: DAP_CPDP_PVT_downmix_excitations */
int DAP_CPDP_PVT_downmix_excitations(void);

/* Symbol: hp_height_fdn_and_hrtfsum_process */
/* Demangled: hp_height_fdn_and_hrtfsum_process */
int hp_height_fdn_and_hrtfsum_process(void);

/* Symbol: DAP_CPDP_PVT_hdr_PinvcubrtP */
/* Demangled: DAP_CPDP_PVT_hdr_PinvcubrtP */
int DAP_CPDP_PVT_hdr_PinvcubrtP(void);

/* Symbol: dlb_vec_UnormSU_flex */
/* Demangled: dlb_vec_UnormSU_flex */
int dlb_vec_UnormSU_flex(void);

/* Symbol: _ZN5dolby17GameEffectContextD1Ev */
/* Demangled: dolby::GameEffectContext::~GameEffectContext() */
int _ZN5dolby17GameEffectContextD1Ev(void);

/* Symbol: _ZN5dolby9DlbEffect13effectProcessEPP18effect_interface_sP14audio_buffer_sS5_ */
/* Demangled: dolby::DlbEffect::effectProcess(effect_interface_s**, audio_buffer_s*, audio_buffer_s*) */
int _ZN5dolby9DlbEffect13effectProcessEPP18effect_interface_sP14audio_buffer_sS5_(void);

/* Symbol: DAP_CPDP_PVT_volume_and_ieq_init */
/* Demangled: DAP_CPDP_PVT_volume_and_ieq_init */
int DAP_CPDP_PVT_volume_and_ieq_init(void);

/* Symbol: DAP_CPDP_PVT_intelligent_eq_init */
/* Demangled: DAP_CPDP_PVT_intelligent_eq_init */
int DAP_CPDP_PVT_intelligent_eq_init(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L45 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L45 */
extern void* dlb_dct_twiddle_table16_rev_1_L45;

/* Symbol: dlb_fft_fwd_scl_384 */
/* Demangled: dlb_fft_fwd_scl_384 */
int dlb_fft_fwd_scl_384(void);

/* Symbol: _ZN5dolby9DlbEffect11kDescriptorE */
/* Demangled: dolby::DlbEffect::kDescriptor */
extern void* _ZN5dolby9DlbEffect11kDescriptorE;

/* Symbol: DAP_CPDP_PVT_evaluation_is_unrestricted */
/* Demangled: DAP_CPDP_PVT_evaluation_is_unrestricted */
int DAP_CPDP_PVT_evaluation_is_unrestricted(void);

/* Symbol: DAP_CPDP_PVT_P_VISUALIZER_COEF_32K */
/* Demangled: DAP_CPDP_PVT_P_VISUALIZER_COEF_32K */
extern void* DAP_CPDP_PVT_P_VISUALIZER_COEF_32K;

/* Symbol: DLB_CLCLmix6CL12SU_strict */
/* Demangled: DLB_CLCLmix6CL12SU_strict */
int DLB_CLCLmix6CL12SU_strict(void);

/* Symbol: dlb_cos_16_full_scl */
/* Demangled: dlb_cos_16_full_scl */
extern void* dlb_cos_16_full_scl;

/* Symbol: _ZN5dolby11Dap2Process8setParamEiPKii */
/* Demangled: dolby::Dap2Process::setParam(int, int const*, int) */
int _ZN5dolby11Dap2Process8setParamEiPKii(void);

/* Symbol: DLB_hybrid_synthesisCL_open */
/* Demangled: DLB_hybrid_synthesisCL_open */
int DLB_hybrid_synthesisCL_open(void);

/* Symbol: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_TAB_48K */
/* Demangled: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_TAB_48K */
extern void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_GAIN_WEIGHTING_TAB_48K;

/* Symbol: DAP_CPDP_PVT_de_flux_process */
/* Demangled: DAP_CPDP_PVT_de_flux_process */
int DAP_CPDP_PVT_de_flux_process(void);

/* Symbol: DAP_CPDP_PVT_de_hiss_init */
/* Demangled: DAP_CPDP_PVT_de_hiss_init */
int DAP_CPDP_PVT_de_hiss_init(void);

/* Symbol: DAP_CPDP_PVT_mi_vec_atan */
/* Demangled: DAP_CPDP_PVT_mi_vec_atan */
int DAP_CPDP_PVT_mi_vec_atan(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L48 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L48 */
extern void* dlb_dct_twiddle_table16_rev_1_L48;

/* Symbol: DAP_CPDP_PVT_sone_buffer_channel_query_memory */
/* Demangled: DAP_CPDP_PVT_sone_buffer_channel_query_memory */
int DAP_CPDP_PVT_sone_buffer_channel_query_memory(void);

/* Symbol: dlb_blk_Liir2ssv2_shlLU_flex */
/* Demangled: dlb_blk_Liir2ssv2_shlLU_flex */
int dlb_blk_Liir2ssv2_shlLU_flex(void);

/* Symbol: dlb_blk_Lmix_shlULL_flex */
/* Demangled: dlb_blk_Lmix_shlULL_flex */
int dlb_blk_Lmix_shlULL_flex(void);

/* Symbol: DLB_blk_Lmpy_shlLLU_strict */
/* Demangled: DLB_blk_Lmpy_shlLLU_strict */
int DLB_blk_Lmpy_shlLLU_strict(void);

/* Symbol: dlb_fft_fwd_usc_20 */
/* Demangled: dlb_fft_fwd_usc_20 */
int dlb_fft_fwd_usc_20(void);

/* Symbol: _ZN5dolby18VoiceEffectContext15setVqeParameterEPvj */
/* Demangled: dolby::VoiceEffectContext::setVqeParameter(void*, unsigned int) */
int _ZN5dolby18VoiceEffectContext15setVqeParameterEPvj(void);

/* Symbol: DAP_CPDP_PVT_NYQUIST_FILTERS_844_LOW_LATENCY */
/* Demangled: DAP_CPDP_PVT_NYQUIST_FILTERS_844_LOW_LATENCY */
extern void* DAP_CPDP_PVT_NYQUIST_FILTERS_844_LOW_LATENCY;

/* Symbol: DLB_hybrid_analysisCL_query_mem */
/* Demangled: DLB_hybrid_analysisCL_query_mem */
int DLB_hybrid_analysisCL_query_mem(void);

/* Symbol: DAP_CPDP_PVT_spec_calc_query_scratch */
/* Demangled: DAP_CPDP_PVT_spec_calc_query_scratch */
int DAP_CPDP_PVT_spec_calc_query_scratch(void);

/* Symbol: dlb_blk_LintegrateL_flex */
/* Demangled: dlb_blk_LintegrateL_flex */
int dlb_blk_LintegrateL_flex(void);

/* Symbol: _ZN5dolby19DapCrossfadeProcessC2EPNS_11IDlbProcessE */
/* Demangled: dolby::DapCrossfadeProcess::DapCrossfadeProcess(dolby::IDlbProcess*) */
int _ZN5dolby19DapCrossfadeProcessC2EPNS_11IDlbProcessE(void);

/* Symbol: dap_cpdp_peak_limiter_peak_set */
/* Demangled: dap_cpdp_peak_limiter_peak_set */
int dap_cpdp_peak_limiter_peak_set(void);

/* Symbol: dlb_fft_inv_scl_480 */
/* Demangled: dlb_fft_inv_scl_480 */
int dlb_fft_inv_scl_480(void);

/* Symbol: dap_cpdp_volume_modeler_enable_set */
/* Demangled: dap_cpdp_volume_modeler_enable_set */
int dap_cpdp_volume_modeler_enable_set(void);

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5D1D2_CC */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5D1D2_CC */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5D1D2_CC;

/* Symbol: DAP_CPDP_PVT_chroma_query_memory */
/* Demangled: DAP_CPDP_PVT_chroma_query_memory */
int DAP_CPDP_PVT_chroma_query_memory(void);

/* Symbol: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_SMOOTH_COEF_TAB */
/* Demangled: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_SMOOTH_COEF_TAB */
extern void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_SMOOTH_COEF_TAB;

/* Symbol: dlb_dct_twiddle_table16_L384 */
/* Demangled: dlb_dct_twiddle_table16_L384 */
extern void* dlb_dct_twiddle_table16_L384;

/* Symbol: dlb_fft_fwd_usc_24 */
/* Demangled: dlb_fft_fwd_usc_24 */
int dlb_fft_fwd_usc_24(void);

/* Symbol: dlb_fft_inv_usc_512 */
/* Demangled: dlb_fft_inv_usc_512 */
int dlb_fft_inv_usc_512(void);

/* Symbol: DAP_CPDP_PVT_feature_set_binaural_enable */
/* Demangled: DAP_CPDP_PVT_feature_set_binaural_enable */
int DAP_CPDP_PVT_feature_set_binaural_enable(void);

/* Symbol: DLB_r4_fft_480 */
/* Demangled: DLB_r4_fft_480 */
int DLB_r4_fft_480(void);

/* Symbol: dap_cpdp_bass_extraction_enable_set */
/* Demangled: dap_cpdp_bass_extraction_enable_set */
int dap_cpdp_bass_extraction_enable_set(void);

/* Symbol: DAP_CPDP_PVT_dvlim_set_peak */
/* Demangled: DAP_CPDP_PVT_dvlim_set_peak */
int DAP_CPDP_PVT_dvlim_set_peak(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L720 */
/* Demangled: dlb_dct_twiddle_table16_rev_L720 */
extern void* dlb_dct_twiddle_table16_rev_L720;

/* Symbol: DLB_Lmfb_p10km_synthesisCL_legacy */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_legacy */
int DLB_Lmfb_p10km_synthesisCL_legacy(void);

/* Symbol: _ZNK7android6VectorIjE7do_copyEPvPKvj */
/* Demangled: android::Vector<unsigned int>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIjE7do_copyEPvPKvj(void);

/* Symbol: A_NGCS_UPMIX_PLAN_7CH1_TO_5D1D2_CC */
/* Demangled: A_NGCS_UPMIX_PLAN_7CH1_TO_5D1D2_CC */
extern void* A_NGCS_UPMIX_PLAN_7CH1_TO_5D1D2_CC;

/* Symbol: DLB_r4_inv_fft_20 */
/* Demangled: DLB_r4_inv_fft_20 */
int DLB_r4_inv_fft_20(void);

/* Symbol: DLB_load_CLqmf_analysisL_filter_stateL */
/* Demangled: DLB_load_CLqmf_analysisL_filter_stateL */
int DLB_load_CLqmf_analysisL_filter_stateL(void);

/* Symbol: DAP_CPDP_PVT_hp_height_query_memory */
/* Demangled: DAP_CPDP_PVT_hp_height_query_memory */
int DAP_CPDP_PVT_hp_height_query_memory(void);

/* Symbol: dap_cpdp_woofer_regulator_tuning_info_get */
/* Demangled: dap_cpdp_woofer_regulator_tuning_info_get */
int dap_cpdp_woofer_regulator_tuning_info_get(void);

/* Symbol: dlb_vec_Lmask_rev_coefLSU_flex */
/* Demangled: dlb_vec_Lmask_rev_coefLSU_flex */
int dlb_vec_Lmask_rev_coefLSU_flex(void);

/* Symbol: DLB_r4_inv_fft_768_s */
/* Demangled: DLB_r4_inv_fft_768_s */
int DLB_r4_inv_fft_768_s(void);

/* Symbol: DAP_CPDP_PVT_data_bass_query_scratch */
/* Demangled: DAP_CPDP_PVT_data_bass_query_scratch */
int DAP_CPDP_PVT_data_bass_query_scratch(void);

/* Symbol: DLB_r4_fft_15_s */
/* Demangled: DLB_r4_fft_15_s */
int DLB_r4_fft_15_s(void);

/* Symbol: DLB_r4_inv_rfft_nn_s */
/* Demangled: DLB_r4_inv_rfft_nn_s */
int DLB_r4_inv_rfft_nn_s(void);

/* Symbol: _ZN5dolby13EffectContext9getConfigEP15effect_config_s */
/* Demangled: dolby::EffectContext::getConfig(effect_config_s*) */
int _ZN5dolby13EffectContext9getConfigEP15effect_config_s(void);

/* Symbol: DAP_CPDP_PVT_ap_dvlim_coefs_128 */
/* Demangled: DAP_CPDP_PVT_ap_dvlim_coefs_128 */
extern void* DAP_CPDP_PVT_ap_dvlim_coefs_128;

/* Symbol: DAP_CPDP_PVT_lvl_calc_ng_scale */
/* Demangled: DAP_CPDP_PVT_lvl_calc_ng_scale */
int DAP_CPDP_PVT_lvl_calc_ng_scale(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_reset_state */
/* Demangled: DAP_CPDP_PVT_hearing_protection_reset_state */
int DAP_CPDP_PVT_hearing_protection_reset_state(void);

/* Symbol: DLB_blk_LmaxLL_strict */
/* Demangled: DLB_blk_LmaxLL_strict */
int DLB_blk_LmaxLL_strict(void);

/* Symbol: DLB_r4_fft_60 */
/* Demangled: DLB_r4_fft_60 */
int DLB_r4_fft_60(void);

/* Symbol: DLB_r4_inv_fft_24 */
/* Demangled: DLB_r4_inv_fft_24 */
int DLB_r4_inv_fft_24(void);

/* Symbol: DLB_r4_inv_fft_288 */
/* Demangled: DLB_r4_inv_fft_288 */
int DLB_r4_inv_fft_288(void);

/* Symbol: dlb_fft_fwd_usc_768 */
/* Demangled: dlb_fft_fwd_usc_768 */
int dlb_fft_fwd_usc_768(void);

/* Symbol: DAP_CPDP_PVT_MFB_RCP10KM_P64ATM301_LEGACY */
/* Demangled: DAP_CPDP_PVT_MFB_RCP10KM_P64ATM301_LEGACY */
extern void* DAP_CPDP_PVT_MFB_RCP10KM_P64ATM301_LEGACY;

/* Symbol: DAP_CPDP_PVT_dvlim_get_target_gain */
/* Demangled: DAP_CPDP_PVT_dvlim_get_target_gain */
int DAP_CPDP_PVT_dvlim_get_target_gain(void);

/* Symbol: DAP_CPDP_PVT_P_VISUALIZER_COEF_44K */
/* Demangled: DAP_CPDP_PVT_P_VISUALIZER_COEF_44K */
extern void* DAP_CPDP_PVT_P_VISUALIZER_COEF_44K;

/* Symbol: dlb_dct_twiddle_table16_rev_L12 */
/* Demangled: dlb_dct_twiddle_table16_rev_L12 */
extern void* dlb_dct_twiddle_table16_rev_L12;

/* Symbol: DLB_r4_fft_36_s */
/* Demangled: DLB_r4_fft_36_s */
int DLB_r4_fft_36_s(void);

/* Symbol: dlb_fft_inv_scl_256 */
/* Demangled: dlb_fft_inv_scl_256 */
int dlb_fft_inv_scl_256(void);

/* Symbol: _ZN5dolby9DlbEffect25handle_EFFECT_CMD_OFFLOADERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_OFFLOAD(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect25handle_EFFECT_CMD_OFFLOADERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: DAP_CPDP_PVT_de_pow_smooth_init */
/* Demangled: DAP_CPDP_PVT_de_pow_smooth_init */
int DAP_CPDP_PVT_de_pow_smooth_init(void);

/* Symbol: DAP_CPDP_PVT_dlb_scalar_avg_filter_init */
/* Demangled: DAP_CPDP_PVT_dlb_scalar_avg_filter_init */
int DAP_CPDP_PVT_dlb_scalar_avg_filter_init(void);

/* Symbol: hdr_vec4_P2powPLPU */
/* Demangled: hdr_vec4_P2powPLPU */
int hdr_vec4_P2powPLPU(void);

/* Symbol: DLB_r4_inv_fft_6_s */
/* Demangled: DLB_r4_inv_fft_6_s */
int DLB_r4_inv_fft_6_s(void);

/* Symbol: _ZTVN5dolby18VoiceEffectContextE */
/* Demangled: vtable for dolby::VoiceEffectContext */
extern void* _ZTVN5dolby18VoiceEffectContextE;

/* Symbol: DAP_CPDP_PVT_rs_clear_state */
/* Demangled: DAP_CPDP_PVT_rs_clear_state */
int DAP_CPDP_PVT_rs_clear_state(void);

/* Symbol: dap_cpdp_pvt_surround_compressor_supported */
/* Demangled: dap_cpdp_pvt_surround_compressor_supported */
int dap_cpdp_pvt_surround_compressor_supported(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_apply_deq_gain */
/* Demangled: DAP_CPDP_PVT_ltrt3d_apply_deq_gain */
int DAP_CPDP_PVT_ltrt3d_apply_deq_gain(void);

/* Symbol: DLB_r4_fft_256 */
/* Demangled: DLB_r4_fft_256 */
int DLB_r4_fft_256(void);

/* Symbol: _ZN5dolby13EffectContext12setAudioModeE12audio_mode_t */
/* Demangled: dolby::EffectContext::setAudioMode(audio_mode_t) */
int _ZN5dolby13EffectContext12setAudioModeE12audio_mode_t(void);

/* Symbol: DAP_CPDP_PVT_arle_constrain_compressor_threshold */
/* Demangled: DAP_CPDP_PVT_arle_constrain_compressor_threshold */
int DAP_CPDP_PVT_arle_constrain_compressor_threshold(void);

/* Symbol: DAP_CPDP_PVT_A_VIRTUAL_BASS_SUBGAIN_COMPENSATION_FACTOR */
/* Demangled: DAP_CPDP_PVT_A_VIRTUAL_BASS_SUBGAIN_COMPENSATION_FACTOR */
extern void* DAP_CPDP_PVT_A_VIRTUAL_BASS_SUBGAIN_COMPENSATION_FACTOR;

/* Symbol: dlb_dct_twiddle_table16_rev_L15 */
/* Demangled: dlb_dct_twiddle_table16_rev_L15 */
extern void* dlb_dct_twiddle_table16_rev_L15;

/* Symbol: DLB_r4_fft_64 */
/* Demangled: DLB_r4_fft_64 */
int DLB_r4_fft_64(void);

/* Symbol: DLB_r4_fft_8_s */
/* Demangled: DLB_r4_fft_8_s */
int DLB_r4_fft_8_s(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_release_time */
/* Demangled: DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_release_time */
int DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_release_time(void);

/* Symbol: DAP_CPDP_PVT_trans_downmix_process */
/* Demangled: DAP_CPDP_PVT_trans_downmix_process */
int DAP_CPDP_PVT_trans_downmix_process(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L16 */
/* Demangled: dlb_dct_twiddle_table16_rev_L16 */
extern void* dlb_dct_twiddle_table16_rev_L16;

/* Symbol: A_NGCS_UPMIX_PLAN_5CH1_TO_7D1D2_CC */
/* Demangled: A_NGCS_UPMIX_PLAN_5CH1_TO_7D1D2_CC */
extern void* A_NGCS_UPMIX_PLAN_5CH1_TO_7D1D2_CC;

/* Symbol: DAP_CPDP_PVT_dlb_milib_get_default_init */
/* Demangled: DAP_CPDP_PVT_dlb_milib_get_default_init */
int DAP_CPDP_PVT_dlb_milib_get_default_init(void);

/* Symbol: DLB_blk_Liir2df1L_set_coef */
/* Demangled: DLB_blk_Liir2df1L_set_coef */
int DLB_blk_Liir2df1L_set_coef(void);

/* Symbol: DAP_CPDP_PVT_hybrid_filter_synthesis_init */
/* Demangled: DAP_CPDP_PVT_hybrid_filter_synthesis_init */
int DAP_CPDP_PVT_hybrid_filter_synthesis_init(void);

/* Symbol: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_TF_DB_TAB_32K */
/* Demangled: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_TF_DB_TAB_32K */
extern void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_TF_DB_TAB_32K;

/* Symbol: DLB_MFB_P10KM_P4_319SC_256M */
/* Demangled: DLB_MFB_P10KM_P4_319SC_256M */
extern void* DLB_MFB_P10KM_P4_319SC_256M;

/* Symbol: DLB_qmf_analysisS_init */
/* Demangled: DLB_qmf_analysisS_init */
int DLB_qmf_analysisS_init(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: dap_cpdp_pvt_data_bass_update_control */
/* Demangled: dap_cpdp_pvt_data_bass_update_control */
int dap_cpdp_pvt_data_bass_update_control(void);

/* Symbol: DAP_CPDP_PVT_dvlim_reset_smoothed_gain */
/* Demangled: DAP_CPDP_PVT_dvlim_reset_smoothed_gain */
int DAP_CPDP_PVT_dvlim_reset_smoothed_gain(void);

/* Symbol: DLB_blk_Lfir3L_strict */
/* Demangled: DLB_blk_Lfir3L_strict */
int DLB_blk_Lfir3L_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L576 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L576 */
extern void* dlb_dct_twiddle_table16_rev_1_L576;

/* Symbol: DLB_r4_rsplit_fft_nn */
/* Demangled: DLB_r4_rsplit_fft_nn */
int DLB_r4_rsplit_fft_nn(void);

/* Symbol: DAP_CPDP_PVT_delay_line_clvec_reset */
/* Demangled: DAP_CPDP_PVT_delay_line_clvec_reset */
int DAP_CPDP_PVT_delay_line_clvec_reset(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_16 */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_16 */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_16;

/* Symbol: _ZNK7android6VectorIjE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<unsigned int>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIjE15do_move_forwardEPvPKvj(void);

/* Symbol: DAP_CPDP_PVT_de_duck_state_clear */
/* Demangled: DAP_CPDP_PVT_de_duck_state_clear */
int DAP_CPDP_PVT_de_duck_state_clear(void);

/* Symbol: DAP_CPDP_PVT_get_dv_noise_weight */
/* Demangled: DAP_CPDP_PVT_get_dv_noise_weight */
int DAP_CPDP_PVT_get_dv_noise_weight(void);

/* Symbol: dlb_blk_Lfir2L_flex */
/* Demangled: dlb_blk_Lfir2L_flex */
int dlb_blk_Lfir2L_flex(void);

/* Symbol: dlb_fft_inv_usc_2048 */
/* Demangled: dlb_fft_inv_usc_2048 */
int dlb_fft_inv_usc_2048(void);

/* Symbol: dap_cpdp_pvt_complex_equalizer_param_query_memory */
/* Demangled: dap_cpdp_pvt_complex_equalizer_param_query_memory */
int dap_cpdp_pvt_complex_equalizer_param_query_memory(void);

/* Symbol: DAP_CPDP_PVT_nyquist_filters_844_analyse_channel */
/* Demangled: DAP_CPDP_PVT_nyquist_filters_844_analyse_channel */
int DAP_CPDP_PVT_nyquist_filters_844_analyse_channel(void);

/* Symbol: DLB_blk_Liir1_shlLU_strict */
/* Demangled: DLB_blk_Liir1_shlLU_strict */
int DLB_blk_Liir1_shlLU_strict(void);

/* Symbol: DAP_CPDP_PVT_acorr_frame_process */
/* Demangled: DAP_CPDP_PVT_acorr_frame_process */
int DAP_CPDP_PVT_acorr_frame_process(void);

/* Symbol: DAP_CPDP_PVT_mfcc_query_scratch */
/* Demangled: DAP_CPDP_PVT_mfcc_query_scratch */
int DAP_CPDP_PVT_mfcc_query_scratch(void);

/* Symbol: DLB_blk_Liir2ssL_set_coef */
/* Demangled: DLB_blk_Liir2ssL_set_coef */
int DLB_blk_Liir2ssL_set_coef(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcess8setParamEiPKii */
/* Demangled: dolby::DlbCrossfadeProcess::setParam(int, int const*, int) */
int _ZN5dolby19DlbCrossfadeProcess8setParamEiPKii(void);

/* Symbol: DAP_CPDP_PVT_visualizer_gains_get */
/* Demangled: DAP_CPDP_PVT_visualizer_gains_get */
int DAP_CPDP_PVT_visualizer_gains_get(void);

/* Symbol: DAP_CPDP_PVT_mi_vec_norm */
/* Demangled: DAP_CPDP_PVT_mi_vec_norm */
int DAP_CPDP_PVT_mi_vec_norm(void);

/* Symbol: DAP_CPDP_PVT_dlb_ex_avg_filter_clear */
/* Demangled: DAP_CPDP_PVT_dlb_ex_avg_filter_clear */
int DAP_CPDP_PVT_dlb_ex_avg_filter_clear(void);

/* Symbol: DLB_load_mfb_p10km_analysisL_filter_state */
/* Demangled: DLB_load_mfb_p10km_analysisL_filter_state */
int DLB_load_mfb_p10km_analysisL_filter_state(void);

/* Symbol: dap_cpdp_virtual_bass_mix_frequency_set */
/* Demangled: dap_cpdp_virtual_bass_mix_frequency_set */
int dap_cpdp_virtual_bass_mix_frequency_set(void);

/* Symbol: DLB_blk_Lmix_shlULL_strict */
/* Demangled: DLB_blk_Lmix_shlULL_strict */
int DLB_blk_Lmix_shlULL_strict(void);

/* Symbol: _ZN5dolby17GameEffectContext4initEv */
/* Demangled: dolby::GameEffectContext::init() */
int _ZN5dolby17GameEffectContext4initEv(void);

/* Symbol: _ZN5dolby16DapEffectContext7processEP14audio_buffer_sS2_ */
/* Demangled: dolby::DapEffectContext::process(audio_buffer_s*, audio_buffer_s*) */
int _ZN5dolby16DapEffectContext7processEP14audio_buffer_sS2_(void);

/* Symbol: DAP_CPDP_PVT_dvlim_reset_state */
/* Demangled: DAP_CPDP_PVT_dvlim_reset_state */
int DAP_CPDP_PVT_dvlim_reset_state(void);

/* Symbol: dlb_dct_twiddle_table16_1_L288 */
/* Demangled: dlb_dct_twiddle_table16_1_L288 */
extern void* dlb_dct_twiddle_table16_1_L288;

/* Symbol: _ZN5dolby19DlbCrossfadeProcessD2Ev */
/* Demangled: dolby::DlbCrossfadeProcess::~DlbCrossfadeProcess() */
int _ZN5dolby19DlbCrossfadeProcessD2Ev(void);

/* Symbol: _ZTVN5dolby17GameEffectContext19DlbGameEffCallbacksE */
/* Demangled: vtable for dolby::GameEffectContext::DlbGameEffCallbacks */
extern void* _ZTVN5dolby17GameEffectContext19DlbGameEffCallbacksE;

/* Symbol: DLB_r4_rsplit_fft_nn_s */
/* Demangled: DLB_r4_rsplit_fft_nn_s */
int DLB_r4_rsplit_fft_nn_s(void);

/* Symbol: dlb_fft_fwd_scl_160 */
/* Demangled: dlb_fft_fwd_scl_160 */
int dlb_fft_fwd_scl_160(void);

/* Symbol: dlb_fft_inv_scl_144 */
/* Demangled: dlb_fft_inv_scl_144 */
int dlb_fft_inv_scl_144(void);

/* Symbol: DAP_CPDP_PVT_virtual_bass_transpose_synthesis */
/* Demangled: DAP_CPDP_PVT_virtual_bass_transpose_synthesis */
int DAP_CPDP_PVT_virtual_bass_transpose_synthesis(void);

/* Symbol: DLB_qmf_analysisL_get_delay */
/* Demangled: DLB_qmf_analysisL_get_delay */
int DLB_qmf_analysisL_get_delay(void);

/* Symbol: _ZN5dolby16DapEffectContext10setPregainEPvj */
/* Demangled: dolby::DapEffectContext::setPregain(void*, unsigned int) */
int _ZN5dolby16DapEffectContext10setPregainEPvj(void);

/* Symbol: DAP_CPDP_PVT_dvlim_set_num_channels */
/* Demangled: DAP_CPDP_PVT_dvlim_set_num_channels */
int DAP_CPDP_PVT_dvlim_set_num_channels(void);

/* Symbol: DAP_CPDP_PVT_mfcc_reset */
/* Demangled: DAP_CPDP_PVT_mfcc_reset */
int DAP_CPDP_PVT_mfcc_reset(void);

/* Symbol: DAP_CPDP_PVT_a_dvlim_win_256 */
/* Demangled: DAP_CPDP_PVT_a_dvlim_win_256 */
extern void* DAP_CPDP_PVT_a_dvlim_win_256;

/* Symbol: dlb_cvec_Lmpy_conjLLIU_flex */
/* Demangled: dlb_cvec_Lmpy_conjLLIU_flex */
int dlb_cvec_Lmpy_conjLLIU_flex(void);

/* Symbol: DLB_r4_fft_144 */
/* Demangled: DLB_r4_fft_144 */
int DLB_r4_fft_144(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_48_vec_ana;

/* Symbol: dap_cpdp_hearing_protection_enable_set */
/* Demangled: dap_cpdp_hearing_protection_enable_set */
int dap_cpdp_hearing_protection_enable_set(void);

/* Symbol: DAP_CPDP_PVT_dap_pvt_regulator_params_init */
/* Demangled: DAP_CPDP_PVT_dap_pvt_regulator_params_init */
int DAP_CPDP_PVT_dap_pvt_regulator_params_init(void);

/* Symbol: DAP_CPDP_PVT_feature_reset */
/* Demangled: DAP_CPDP_PVT_feature_reset */
int DAP_CPDP_PVT_feature_reset(void);

/* Symbol: dlb_blk_LmixL_flex */
/* Demangled: dlb_blk_LmixL_flex */
int dlb_blk_LmixL_flex(void);

/* Symbol: _ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_CONFIGERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_SET_CONFIG(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_CONFIGERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: dap_cpdp_de_enable_set */
/* Demangled: dap_cpdp_de_enable_set */
int dap_cpdp_de_enable_set(void);

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7D1D2_CC */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7D1D2_CC */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_7CH1_TO_7D1D2_CC;

/* Symbol: DAP_CPDP_PVT_dvlim_set_enable */
/* Demangled: DAP_CPDP_PVT_dvlim_set_enable */
int DAP_CPDP_PVT_dvlim_set_enable(void);

/* Symbol: DAP_CPDP_PVT_dvlim_get_smoothed_gain_alpha */
/* Demangled: DAP_CPDP_PVT_dvlim_get_smoothed_gain_alpha */
int DAP_CPDP_PVT_dvlim_get_smoothed_gain_alpha(void);

/* Symbol: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_TF_DB_TAB_44K */
/* Demangled: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_TF_DB_TAB_44K */
extern void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_TF_DB_TAB_44K;

/* Symbol: DLB_CLmpy_shlCLSIU_inplace_strict */
/* Demangled: DLB_CLmpy_shlCLSIU_inplace_strict */
int DLB_CLmpy_shlCLSIU_inplace_strict(void);

/* Symbol: DLB_r4_inv_fft_15_s */
/* Demangled: DLB_r4_inv_fft_15_s */
int DLB_r4_inv_fft_15_s(void);

/* Symbol: dlb_fft_fwd_usc_30 */
/* Demangled: dlb_fft_fwd_usc_30 */
int dlb_fft_fwd_usc_30(void);

/* Symbol: _ZN5dolby18VoiceEffectContext8getParamEiPjPv */
/* Demangled: dolby::VoiceEffectContext::getParam(int, unsigned int*, void*) */
int _ZN5dolby18VoiceEffectContext8getParamEiPjPv(void);

/* Symbol: dap_cpdp_pvt_virtualizer_update_control */
/* Demangled: dap_cpdp_pvt_virtualizer_update_control */
int dap_cpdp_pvt_virtualizer_update_control(void);

/* Symbol: DAP_CPDP_PVT_de_hysteresis_detect */
/* Demangled: DAP_CPDP_PVT_de_hysteresis_detect */
int DAP_CPDP_PVT_de_hysteresis_detect(void);

/* Symbol: dlb_dct_twiddle_table16_L15_1 */
/* Demangled: dlb_dct_twiddle_table16_L15_1 */
extern void* dlb_dct_twiddle_table16_L15_1;

/* Symbol: dlb_dct_twiddle_table16_L576_1 */
/* Demangled: dlb_dct_twiddle_table16_L576_1 */
extern void* dlb_dct_twiddle_table16_L576_1;

/* Symbol: dlb_fft_fwd_usc_32 */
/* Demangled: dlb_fft_fwd_usc_32 */
int dlb_fft_fwd_usc_32(void);

/* Symbol: DLB_hybrid_analysisCL_init */
/* Demangled: DLB_hybrid_analysisCL_init */
int DLB_hybrid_analysisCL_init(void);

/* Symbol: DLB_vec_Labs_maxLU_strict */
/* Demangled: DLB_vec_Labs_maxLU_strict */
int DLB_vec_Labs_maxLU_strict(void);

/* Symbol: DLB_hybrid_synthesisCL_query_mem */
/* Demangled: DLB_hybrid_synthesisCL_query_mem */
int DLB_hybrid_synthesisCL_query_mem(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L960 */
/* Demangled: dlb_dct_twiddle_table16_rev_L960 */
extern void* dlb_dct_twiddle_table16_rev_L960;

/* Symbol: dlb_dct_twiddle_table16_L15_2 */
/* Demangled: dlb_dct_twiddle_table16_L15_2 */
extern void* dlb_dct_twiddle_table16_L15_2;

/* Symbol: dlb_dct_twiddle_table16_L576_2 */
/* Demangled: dlb_dct_twiddle_table16_L576_2 */
extern void* dlb_dct_twiddle_table16_L576_2;

/* Symbol: DLB_r4_fft_768_s */
/* Demangled: DLB_r4_fft_768_s */
int DLB_r4_fft_768_s(void);

/* Symbol: DLB_r4_inv_fft_36_s */
/* Demangled: DLB_r4_inv_fft_36_s */
int DLB_r4_inv_fft_36_s(void);

/* Symbol: dlb_fft_fwd_usc_2 */
/* Demangled: dlb_fft_fwd_usc_2 */
int dlb_fft_fwd_usc_2(void);

/* Symbol: DAP_CPDP_PVT_q2le_process */
/* Demangled: DAP_CPDP_PVT_q2le_process */
int DAP_CPDP_PVT_q2le_process(void);

/* Symbol: DAP_CPDP_PVT_mi_vec_auto_correlation */
/* Demangled: DAP_CPDP_PVT_mi_vec_auto_correlation */
int DAP_CPDP_PVT_mi_vec_auto_correlation(void);

/* Symbol: DAP_CPDP_PVT_get_adaptive_virtualizer_amount_event_weight */
/* Demangled: DAP_CPDP_PVT_get_adaptive_virtualizer_amount_event_weight */
int DAP_CPDP_PVT_get_adaptive_virtualizer_amount_event_weight(void);

/* Symbol: DLB_blk_Liir2ssv1_dsmpL_strict */
/* Demangled: DLB_blk_Liir2ssv1_dsmpL_strict */
int DLB_blk_Liir2ssv1_dsmpL_strict(void);

/* Symbol: DLB_r4_rfft_nn_s */
/* Demangled: DLB_r4_rfft_nn_s */
int DLB_r4_rfft_nn_s(void);

/* Symbol: DAP_CPDP_PVT_mi_dap_init */
/* Demangled: DAP_CPDP_PVT_mi_dap_init */
int DAP_CPDP_PVT_mi_dap_init(void);

/* Symbol: DAP_CPDP_PVT_visualizer_custom_bands_compute */
/* Demangled: DAP_CPDP_PVT_visualizer_custom_bands_compute */
int DAP_CPDP_PVT_visualizer_custom_bands_compute(void);

/* Symbol: dap_cpdp_virtualizer_rear_surround_speaker_angle_set */
/* Demangled: dap_cpdp_virtualizer_rear_surround_speaker_angle_set */
int dap_cpdp_virtualizer_rear_surround_speaker_angle_set(void);

/* Symbol: DAP_CPDP_PVT_sben_rhythm_query_scratch */
/* Demangled: DAP_CPDP_PVT_sben_rhythm_query_scratch */
int DAP_CPDP_PVT_sben_rhythm_query_scratch(void);

/* Symbol: DLB_blk_Lmix_shlULLLL_strict */
/* Demangled: DLB_blk_Lmix_shlULLLL_strict */
int DLB_blk_Lmix_shlULLLL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L36_1 */
/* Demangled: dlb_dct_twiddle_table16_L36_1 */
extern void* dlb_dct_twiddle_table16_L36_1;

/* Symbol: dlb_fft_fwd_usc_4 */
/* Demangled: dlb_fft_fwd_usc_4 */
int dlb_fft_fwd_usc_4(void);

/* Symbol: _ZN5dolby18EndpointParamCacheC1EPNS_11IDlbProcessE */
/* Demangled: dolby::EndpointParamCache::EndpointParamCache(dolby::IDlbProcess*) */
int _ZN5dolby18EndpointParamCacheC1EPNS_11IDlbProcessE(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_stats_post_run4 */
/* Demangled: DAP_CPDP_PVT_ltrt3d_stats_post_run4 */
int DAP_CPDP_PVT_ltrt3d_stats_post_run4(void);

/* Symbol: dlb_vec_LshlLIU_flex */
/* Demangled: dlb_vec_LshlLIU_flex */
int dlb_vec_LshlLIU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L36_2 */
/* Demangled: dlb_dct_twiddle_table16_L36_2 */
extern void* dlb_dct_twiddle_table16_L36_2;

/* Symbol: dlb_fft_fwd_usc_36 */
/* Demangled: dlb_fft_fwd_usc_36 */
int dlb_fft_fwd_usc_36(void);

/* Symbol: DLB_r4_inv_fft_30 */
/* Demangled: DLB_r4_inv_fft_30 */
int DLB_r4_inv_fft_30(void);

/* Symbol: dlb_fft_fwd_usc_6 */
/* Demangled: dlb_fft_fwd_usc_6 */
int dlb_fft_fwd_usc_6(void);

/* Symbol: dap_cpdp_virtualizer_rear_height_speaker_angle_set */
/* Demangled: dap_cpdp_virtualizer_rear_height_speaker_angle_set */
int dap_cpdp_virtualizer_rear_height_speaker_angle_set(void);

/* Symbol: DAP_CPDP_PVT_mi_vec_root */
/* Demangled: DAP_CPDP_PVT_mi_vec_root */
int DAP_CPDP_PVT_mi_vec_root(void);

/* Symbol: DLB_blk_Liir2ssv2L_strict */
/* Demangled: DLB_blk_Liir2ssv2L_strict */
int DLB_blk_Liir2ssv2L_strict(void);

/* Symbol: dlb_blk_LnrrecipLU_flex */
/* Demangled: dlb_blk_LnrrecipLU_flex */
int dlb_blk_LnrrecipLU_flex(void);

/* Symbol: DLB_r4_inv_fft_640_s */
/* Demangled: DLB_r4_inv_fft_640_s */
int DLB_r4_inv_fft_640_s(void);

/* Symbol: _ZTVN5dolby16DapEffectContext18DlbDapEffCallbacksE */
/* Demangled: vtable for dolby::DapEffectContext::DlbDapEffCallbacks */
extern void* _ZTVN5dolby16DapEffectContext18DlbDapEffCallbacksE;

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7CH1 */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7CH1 */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_7CH1;

/* Symbol: DAP_CPDP_PVT_transposer_4th_order */
/* Demangled: DAP_CPDP_PVT_transposer_4th_order */
int DAP_CPDP_PVT_transposer_4th_order(void);

/* Symbol: dlb_blk_LLdeshuffleLL_inplace_flex */
/* Demangled: dlb_blk_LLdeshuffleLL_inplace_flex */
int dlb_blk_LLdeshuffleLL_inplace_flex(void);

/* Symbol: DLB_blk_LintegrateL_setup */
/* Demangled: DLB_blk_LintegrateL_setup */
int DLB_blk_LintegrateL_setup(void);

/* Symbol: DLB_r4_inv_fft_32 */
/* Demangled: DLB_r4_inv_fft_32 */
int DLB_r4_inv_fft_32(void);

/* Symbol: dlb_fft_fwd_usc_8 */
/* Demangled: dlb_fft_fwd_usc_8 */
int dlb_fft_fwd_usc_8(void);

/* Symbol: _ZTVN5dolby16DapEffectContextE */
/* Demangled: vtable for dolby::DapEffectContext */
extern void* _ZTVN5dolby16DapEffectContextE;

/* Symbol: DLB_CLmpyCLVSU_strict */
/* Demangled: DLB_CLmpyCLVSU_strict */
int DLB_CLmpyCLVSU_strict(void);

/* Symbol: DLB_blk_Lattack_decay_iir1L_set_coef */
/* Demangled: DLB_blk_Lattack_decay_iir1L_set_coef */
int DLB_blk_Lattack_decay_iir1L_set_coef(void);

/* Symbol: DLB_MFB_P10KM_P64ATM301 */
/* Demangled: DLB_MFB_P10KM_P64ATM301 */
extern void* DLB_MFB_P10KM_P64ATM301;

/* Symbol: DAP_CPDP_PVT_arle_set_mode */
/* Demangled: DAP_CPDP_PVT_arle_set_mode */
int DAP_CPDP_PVT_arle_set_mode(void);

/* Symbol: _ZTCN5dolby13EffectContext17DmsDeathRecipientE0_N7android8hardware20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-dolby::EffectContext::DmsDeathRecipient */
extern void* _ZTCN5dolby13EffectContext17DmsDeathRecipientE0_N7android8hardware20hidl_death_recipientE;

/* Symbol: _ZN5dolby16DlbBufferAdapterD0Ev */
/* Demangled: dolby::DlbBufferAdapter::~DlbBufferAdapter() */
int _ZN5dolby16DlbBufferAdapterD0Ev(void);

/* Symbol: DAP_CPDP_PVT_asa_reset_query_memory */
/* Demangled: DAP_CPDP_PVT_asa_reset_query_memory */
int DAP_CPDP_PVT_asa_reset_query_memory(void);

/* Symbol: DAP_CPDP_PVT_lfra_clip_process */
/* Demangled: DAP_CPDP_PVT_lfra_clip_process */
int DAP_CPDP_PVT_lfra_clip_process(void);

/* Symbol: DAP_CPDP_PVT_mfcc_close */
/* Demangled: DAP_CPDP_PVT_mfcc_close */
int DAP_CPDP_PVT_mfcc_close(void);

/* Symbol: DAP_CPDP_PVT_mfcc_init */
/* Demangled: DAP_CPDP_PVT_mfcc_init */
int DAP_CPDP_PVT_mfcc_init(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_steering_gains_query_scratch */
/* Demangled: DAP_CPDP_PVT_ltrt3d_steering_gains_query_scratch */
int DAP_CPDP_PVT_ltrt3d_steering_gains_query_scratch(void);

/* Symbol: dap_cpdp_surround_decoder_enable_set */
/* Demangled: dap_cpdp_surround_decoder_enable_set */
int dap_cpdp_surround_decoder_enable_set(void);

/* Symbol: DAP_CPDP_PVT_clvec_buffer_mixer_coefs_query_scratch */
/* Demangled: DAP_CPDP_PVT_clvec_buffer_mixer_coefs_query_scratch */
int DAP_CPDP_PVT_clvec_buffer_mixer_coefs_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_feature_close */
/* Demangled: DAP_CPDP_PVT_feature_close */
int DAP_CPDP_PVT_feature_close(void);

/* Symbol: DAP_CPDP_PVT_dvlim_set_target_gain */
/* Demangled: DAP_CPDP_PVT_dvlim_set_target_gain */
int DAP_CPDP_PVT_dvlim_set_target_gain(void);

/* Symbol: dlb_dct_twiddle_table16_L1024_1 */
/* Demangled: dlb_dct_twiddle_table16_L1024_1 */
extern void* dlb_dct_twiddle_table16_L1024_1;

/* Symbol: DLB_r4_fft_72 */
/* Demangled: DLB_r4_fft_72 */
int DLB_r4_fft_72(void);

/* Symbol: DLB_r4_inv_fft_36 */
/* Demangled: DLB_r4_inv_fft_36 */
int DLB_r4_inv_fft_36(void);

/* Symbol: _ZN5dolby17GameEffectContextD0Ev */
/* Demangled: dolby::GameEffectContext::~GameEffectContext() */
int _ZN5dolby17GameEffectContextD0Ev(void);

/* Symbol: DAP_CPDP_PVT_ngcs_diffuse_run */
/* Demangled: DAP_CPDP_PVT_ngcs_diffuse_run */
int DAP_CPDP_PVT_ngcs_diffuse_run(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L24 */
/* Demangled: dlb_dct_twiddle_table16_rev_L24 */
extern void* dlb_dct_twiddle_table16_rev_L24;

/* Symbol: dlb_dct_twiddle_table16_L1024_2 */
/* Demangled: dlb_dct_twiddle_table16_L1024_2 */
extern void* dlb_dct_twiddle_table16_L1024_2;

/* Symbol: dlb_dct_twiddle_table16_L480_1 */
/* Demangled: dlb_dct_twiddle_table16_L480_1 */
extern void* dlb_dct_twiddle_table16_L480_1;

/* Symbol: DLB_blk_Liir2ssv1L_strict */
/* Demangled: DLB_blk_Liir2ssv1L_strict */
int DLB_blk_Liir2ssv1L_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L480_2 */
/* Demangled: dlb_dct_twiddle_table16_L480_2 */
extern void* dlb_dct_twiddle_table16_L480_2;

/* Symbol: DLB_CLmpyCLSU_strict */
/* Demangled: DLB_CLmpyCLSU_strict */
int DLB_CLmpyCLSU_strict(void);

/* Symbol: DLB_blk_LmixL_strict */
/* Demangled: DLB_blk_LmixL_strict */
int DLB_blk_LmixL_strict(void);

/* Symbol: dap_cpdp_bass_enhancer_width_set */
/* Demangled: dap_cpdp_bass_enhancer_width_set */
int dap_cpdp_bass_enhancer_width_set(void);

/* Symbol: dap_cpdp_rear_height_filter_mode_set */
/* Demangled: dap_cpdp_rear_height_filter_mode_set */
int dap_cpdp_rear_height_filter_mode_set(void);

/* Symbol: dlb_blk_Liir2ssv1L_flex */
/* Demangled: dlb_blk_Liir2ssv1L_flex */
int dlb_blk_Liir2ssv1L_flex(void);

/* Symbol: dlb_fft_inv_usc_640 */
/* Demangled: dlb_fft_inv_usc_640 */
int dlb_fft_inv_usc_640(void);

/* Symbol: _ZN5dolby9DlbEffect13getDescriptorEPK12audio_uuid_sP19effect_descriptor_s */
/* Demangled: dolby::DlbEffect::getDescriptor(audio_uuid_s const*, effect_descriptor_s*) */
int _ZN5dolby9DlbEffect13getDescriptorEPK12audio_uuid_sP19effect_descriptor_s(void);

/* Symbol: DAP_CPDP_PVT_arle_compressor_threshold_calculation */
/* Demangled: DAP_CPDP_PVT_arle_compressor_threshold_calculation */
int DAP_CPDP_PVT_arle_compressor_threshold_calculation(void);

/* Symbol: DAP_CPDP_PVT_hp_height_query_scratch */
/* Demangled: DAP_CPDP_PVT_hp_height_query_scratch */
int DAP_CPDP_PVT_hp_height_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_resi_clip_process */
/* Demangled: DAP_CPDP_PVT_resi_clip_process */
int DAP_CPDP_PVT_resi_clip_process(void);

/* Symbol: dlb_fft_fwd_scl_288 */
/* Demangled: dlb_fft_fwd_scl_288 */
int dlb_fft_fwd_scl_288(void);

/* Symbol: DLB_fft_CLfwd_unscaledCL */
/* Demangled: DLB_fft_CLfwd_unscaledCL */
int DLB_fft_CLfwd_unscaledCL(void);

/* Symbol: _ZN5dolby18VoiceEffectContext15getVqeParameterEiPvPj */
/* Demangled: dolby::VoiceEffectContext::getVqeParameter(int, void*, unsigned int*) */
int _ZN5dolby18VoiceEffectContext15getVqeParameterEiPvPj(void);

/* Symbol: _ZN5dolby13AudioHalUtils13updateProfileEi */
/* Demangled: dolby::AudioHalUtils::updateProfile(int) */
int _ZN5dolby13AudioHalUtils13updateProfileEi(void);

/* Symbol: _ZN5dolby13AudioHalUtils9sInstanceE */
/* Demangled: dolby::AudioHalUtils::sInstance */
extern void* _ZN5dolby13AudioHalUtils9sInstanceE;

/* Symbol: DAP_CPDP_PVT_hfra_frame_process */
/* Demangled: DAP_CPDP_PVT_hfra_frame_process */
int DAP_CPDP_PVT_hfra_frame_process(void);

/* Symbol: DAP_CPDP_PVT_get_scle_music_confidence */
/* Demangled: DAP_CPDP_PVT_get_scle_music_confidence */
int DAP_CPDP_PVT_get_scle_music_confidence(void);

/* Symbol: dlb_blk_Lmix_shlULLLL_flex */
/* Demangled: dlb_blk_Lmix_shlULLLL_flex */
int dlb_blk_Lmix_shlULLLL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L120 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L120 */
extern void* dlb_dct_twiddle_table16_rev_1_L120;

/* Symbol: dap_cpdp_regulator_sibilance_suppress_amounts_set */
/* Demangled: dap_cpdp_regulator_sibilance_suppress_amounts_set */
int dap_cpdp_regulator_sibilance_suppress_amounts_set(void);

/* Symbol: DAP_CPDP_PVT_dap_pvt_graphic_equalizer_param_init */
/* Demangled: DAP_CPDP_PVT_dap_pvt_graphic_equalizer_param_init */
int DAP_CPDP_PVT_dap_pvt_graphic_equalizer_param_init(void);

/* Symbol: DLB_CLhybrid_synthesisCL */
/* Demangled: DLB_CLhybrid_synthesisCL */
int DLB_CLhybrid_synthesisCL(void);

/* Symbol: dlb_dctIII_scaled */
/* Demangled: dlb_dctIII_scaled */
int dlb_dctIII_scaled(void);

/* Symbol: DLB_r4_inv_fft_180 */
/* Demangled: DLB_r4_inv_fft_180 */
int DLB_r4_inv_fft_180(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPKiEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, int const*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPKiEEEE;

/* Symbol: DAP_CPDP_PVT_resample_init */
/* Demangled: DAP_CPDP_PVT_resample_init */
int DAP_CPDP_PVT_resample_init(void);

/* Symbol: DAP_CPDP_PVT_dlb_ex_avg_filter_run */
/* Demangled: DAP_CPDP_PVT_dlb_ex_avg_filter_run */
int DAP_CPDP_PVT_dlb_ex_avg_filter_run(void);

/* Symbol: DLB_Lqmf_synthesisCL */
/* Demangled: DLB_Lqmf_synthesisCL */
int DLB_Lqmf_synthesisCL(void);

/* Symbol: _ZN5dolby11Dap2Process11loadLicenseEv */
/* Demangled: dolby::Dap2Process::loadLicense() */
int _ZN5dolby11Dap2Process11loadLicenseEv(void);

/* Symbol: DAP_CPDP_PVT_ap_dvlim_coefs_256 */
/* Demangled: DAP_CPDP_PVT_ap_dvlim_coefs_256 */
extern void* DAP_CPDP_PVT_ap_dvlim_coefs_256;

/* Symbol: DAP_CPDP_PVT_dap_interp_boolean_test */
/* Demangled: DAP_CPDP_PVT_dap_interp_boolean_test */
int DAP_CPDP_PVT_dap_interp_boolean_test(void);

/* Symbol: DAP_CPDP_PVT_hfra_clip_process */
/* Demangled: DAP_CPDP_PVT_hfra_clip_process */
int DAP_CPDP_PVT_hfra_clip_process(void);

/* Symbol: DAP_CPDP_PVT_mask_ICPD_subbandIdx */
/* Demangled: DAP_CPDP_PVT_mask_ICPD_subbandIdx */
extern void* DAP_CPDP_PVT_mask_ICPD_subbandIdx;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L60 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L60 */
extern void* dlb_dct_twiddle_table16_rev_1_L60;

/* Symbol: dlb_fft_inv_scl_384 */
/* Demangled: dlb_fft_inv_scl_384 */
int dlb_fft_inv_scl_384(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_48_vec_syn;

/* Symbol: dlb_dct_twiddle_table16_L96_cos */
/* Demangled: dlb_dct_twiddle_table16_L96_cos */
extern void* dlb_dct_twiddle_table16_L96_cos;

/* Symbol: dlb_CLcopyCLU_flex */
/* Demangled: dlb_CLcopyCLU_flex */
int dlb_CLcopyCLU_flex(void);

/* Symbol: DLB_blk_Lfir3L_setup */
/* Demangled: DLB_blk_Lfir3L_setup */
int DLB_blk_Lfir3L_setup(void);

/* Symbol: dlb_dct_twiddle_table16_L288 */
/* Demangled: dlb_dct_twiddle_table16_L288 */
extern void* dlb_dct_twiddle_table16_L288;

/* Symbol: dlb_vec_LmpyLSU_flex */
/* Demangled: dlb_vec_LmpyLSU_flex */
int dlb_vec_LmpyLSU_flex(void);

/* Symbol: dlb_blk_Liir2ssv1_usmpL_flex */
/* Demangled: dlb_blk_Liir2ssv1_usmpL_flex */
int dlb_blk_Liir2ssv1_usmpL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L128 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L128 */
extern void* dlb_dct_twiddle_table16_rev_1_L128;

/* Symbol: DLB_r4_fft_384 */
/* Demangled: DLB_r4_fft_384 */
int DLB_r4_fft_384(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L64 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L64 */
extern void* dlb_dct_twiddle_table16_rev_1_L64;

/* Symbol: DLB_fft_CLfwd_scaledL */
/* Demangled: DLB_fft_CLfwd_scaledL */
int DLB_fft_CLfwd_scaledL(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_diffuse_gains_query_scratch */
/* Demangled: DAP_CPDP_PVT_ltrt3d_diffuse_gains_query_scratch */
int DAP_CPDP_PVT_ltrt3d_diffuse_gains_query_scratch(void);

/* Symbol: dlb_dct_twiddle_table16_L120_1 */
/* Demangled: dlb_dct_twiddle_table16_L120_1 */
extern void* dlb_dct_twiddle_table16_L120_1;

/* Symbol: dlb_dct_twiddle_table16_L120_2 */
/* Demangled: dlb_dct_twiddle_table16_L120_2 */
extern void* dlb_dct_twiddle_table16_L120_2;

/* Symbol: dlb_blk_Liir1L_flex */
/* Demangled: dlb_blk_Liir1L_flex */
int dlb_blk_Liir1L_flex(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_8_vec_ana;

/* Symbol: DAP_CPDP_PVT_bass_mbdrc_process */
/* Demangled: DAP_CPDP_PVT_bass_mbdrc_process */
int DAP_CPDP_PVT_bass_mbdrc_process(void);

/* Symbol: DLB_vec_LmpyLSU_inplace_strict */
/* Demangled: DLB_vec_LmpyLSU_inplace_strict */
int DLB_vec_LmpyLSU_inplace_strict(void);

/* Symbol: DAP_CPDP_PVT_mi_internal_query_scratch */
/* Demangled: DAP_CPDP_PVT_mi_internal_query_scratch */
int DAP_CPDP_PVT_mi_internal_query_scratch(void);

/* Symbol: DLB_r4_inv_fft_576_s */
/* Demangled: DLB_r4_inv_fft_576_s */
int DLB_r4_inv_fft_576_s(void);

/* Symbol: DLB_mfb_p10km_analysisL_reset_channel */
/* Demangled: DLB_mfb_p10km_analysisL_reset_channel */
int DLB_mfb_p10km_analysisL_reset_channel(void);

/* Symbol: _ZN5dolby13EffectContext23hasProcessConfigChangedERK15buffer_config_sS3_ */
/* Demangled: dolby::EffectContext::hasProcessConfigChanged(buffer_config_s const&, buffer_config_s const&) */
int _ZN5dolby13EffectContext23hasProcessConfigChangedERK15buffer_config_sS3_(void);

/* Symbol: DAP_CPDP_PVT_A_DAP_CPDP_AGC_COMP */
/* Demangled: DAP_CPDP_PVT_A_DAP_CPDP_AGC_COMP */
extern void* DAP_CPDP_PVT_A_DAP_CPDP_AGC_COMP;

/* Symbol: DAP_CPDP_PVT_sub_band_idx_tbl */
/* Demangled: DAP_CPDP_PVT_sub_band_idx_tbl */
extern void* DAP_CPDP_PVT_sub_band_idx_tbl;

/* Symbol: DLB_BLmpy_scaleBLSU_strict */
/* Demangled: DLB_BLmpy_scaleBLSU_strict */
int DLB_BLmpy_scaleBLSU_strict(void);

/* Symbol: dlb_fft_fwd_usc_40 */
/* Demangled: dlb_fft_fwd_usc_40 */
int dlb_fft_fwd_usc_40(void);

/* Symbol: DAP_CPDP_PVT_hp_height_fdn_allpass_process */
/* Demangled: DAP_CPDP_PVT_hp_height_fdn_allpass_process */
int DAP_CPDP_PVT_hp_height_fdn_allpass_process(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L240 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L240 */
extern void* dlb_dct_twiddle_table16_rev_1_L240;

/* Symbol: DLB_dsplib_init */
/* Demangled: DLB_dsplib_init */
int DLB_dsplib_init(void);

/* Symbol: DAP_CPDP_PVT_data_bass_subqmf_analysis */
/* Demangled: DAP_CPDP_PVT_data_bass_subqmf_analysis */
int DAP_CPDP_PVT_data_bass_subqmf_analysis(void);

/* Symbol: DLB_BLmaxBLL_strict */
/* Demangled: DLB_BLmaxBLL_strict */
int DLB_BLmaxBLL_strict(void);

/* Symbol: DLB_r4_fft_640_s */
/* Demangled: DLB_r4_fft_640_s */
int DLB_r4_fft_640_s(void);

/* Symbol: DAP_CPDP_PVT_mi_vec_fabs_max */
/* Demangled: DAP_CPDP_PVT_mi_vec_fabs_max */
int DAP_CPDP_PVT_mi_vec_fabs_max(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_rms_calculation */
/* Demangled: DAP_CPDP_PVT_hearing_protection_rms_calculation */
int DAP_CPDP_PVT_hearing_protection_rms_calculation(void);

/* Symbol: dlb_BLmaxBLL_inplace_flex */
/* Demangled: dlb_BLmaxBLL_inplace_flex */
int dlb_BLmaxBLL_inplace_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L180 */
/* Demangled: dlb_dct_twiddle_table16_1_L180 */
extern void* dlb_dct_twiddle_table16_1_L180;

/* Symbol: dlb_fft_fwd_usc_45 */
/* Demangled: dlb_fft_fwd_usc_45 */
int dlb_fft_fwd_usc_45(void);

/* Symbol: getRequiredBufferSize_Phase90Hilbert */
/* Demangled: getRequiredBufferSize_Phase90Hilbert */
int getRequiredBufferSize_Phase90Hilbert(void);

/* Symbol: dap_cpdp_pvt_complex_equalizer_update_control */
/* Demangled: dap_cpdp_pvt_complex_equalizer_update_control */
int dap_cpdp_pvt_complex_equalizer_update_control(void);

/* Symbol: DAP_CPDP_PVT_hamming_weight_frm32_tab */
/* Demangled: DAP_CPDP_PVT_hamming_weight_frm32_tab */
extern void* DAP_CPDP_PVT_hamming_weight_frm32_tab;

/* Symbol: DLB_CLmacCLCLU_strict */
/* Demangled: DLB_CLmacCLCLU_strict */
int DLB_CLmacCLCLU_strict(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int const*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPKiEEE16do_move_backwardEPvPKvj(void);

/* Symbol: DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC_8 */
/* Demangled: DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC_8 */
extern void* DAP_CPDP_PVT_MFB_RCP10KM_P4_319SC_8;

/* Symbol: DAP_CPDP_PVT_chroma_query_clip_mem */
/* Demangled: DAP_CPDP_PVT_chroma_query_clip_mem */
int DAP_CPDP_PVT_chroma_query_clip_mem(void);

/* Symbol: DLB_r4_inv_fft_40 */
/* Demangled: DLB_r4_inv_fft_40 */
int DLB_r4_inv_fft_40(void);

/* Symbol: dlb_fft_inv_usc_768 */
/* Demangled: dlb_fft_inv_usc_768 */
int dlb_fft_inv_usc_768(void);

/* Symbol: DAP_CPDP_PVT_ldn_wb_loudness_transform */
/* Demangled: DAP_CPDP_PVT_ldn_wb_loudness_transform */
int DAP_CPDP_PVT_ldn_wb_loudness_transform(void);

/* Symbol: dlb_blk_delay_setup_flex */
/* Demangled: dlb_blk_delay_setup_flex */
int dlb_blk_delay_setup_flex(void);

/* Symbol: dlb_fft_fwd_usc_48 */
/* Demangled: dlb_fft_fwd_usc_48 */
int dlb_fft_fwd_usc_48(void);

/* Symbol: DLB_CLmfb_p10km_analysisL_legacy_twiddle */
/* Demangled: DLB_CLmfb_p10km_analysisL_legacy_twiddle */
int DLB_CLmfb_p10km_analysisL_legacy_twiddle(void);

/* Symbol: DLB_qmf_synthesisS_close */
/* Demangled: DLB_qmf_synthesisS_close */
int DLB_qmf_synthesisS_close(void);

/* Symbol: dlb_qmf_filter_coeff_P5_32_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_32_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_32_vec_ana;

/* Symbol: dap_pvt_bass_mbdrc_update_control */
/* Demangled: dap_pvt_bass_mbdrc_update_control */
int dap_pvt_bass_mbdrc_update_control(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_attack_time */
/* Demangled: DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_attack_time */
int DAP_CPDP_PVT_hearing_protection_get_rms_attenuation_attack_time(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_mono2stereo_inplace */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_mono2stereo_inplace */
int DAP_CPDP_PVT_dap_cpdp_mono2stereo_inplace(void);

/* Symbol: DAP_CPDP_PVT_delay_line_write */
/* Demangled: DAP_CPDP_PVT_delay_line_write */
int DAP_CPDP_PVT_delay_line_write(void);

/* Symbol: DAP_CPDP_PVT_spec_subband_max_inv_hcqmf */
/* Demangled: DAP_CPDP_PVT_spec_subband_max_inv_hcqmf */
extern void* DAP_CPDP_PVT_spec_subband_max_inv_hcqmf;

/* Symbol: DAP_CPDP_PVT_surround_compressor_compute_gain */
/* Demangled: DAP_CPDP_PVT_surround_compressor_compute_gain */
int DAP_CPDP_PVT_surround_compressor_compute_gain(void);

/* Symbol: dlb_fft_fwd_usc_320 */
/* Demangled: dlb_fft_fwd_usc_320 */
int dlb_fft_fwd_usc_320(void);

/* Symbol: _ZN5dolby14BufferProvider9configureE14audio_format_t20audio_channel_mask_t */
/* Demangled: dolby::BufferProvider::configure(audio_format_t, audio_channel_mask_t) */
int _ZN5dolby14BufferProvider9configureE14audio_format_t20audio_channel_mask_t(void);

/* Symbol: _ZN5dolby13EffectContextC2Ev */
/* Demangled: dolby::EffectContext::EffectContext() */
int _ZN5dolby13EffectContextC2Ev(void);

/* Symbol: DAP_CPDP_PVT_mfcc_flux_frame_process */
/* Demangled: DAP_CPDP_PVT_mfcc_flux_frame_process */
int DAP_CPDP_PVT_mfcc_flux_frame_process(void);

/* Symbol: DAP_CPDP_PVT_leveler_process */
/* Demangled: DAP_CPDP_PVT_leveler_process */
int DAP_CPDP_PVT_leveler_process(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L30 */
/* Demangled: dlb_dct_twiddle_table16_rev_L30 */
extern void* dlb_dct_twiddle_table16_rev_L30;

/* Symbol: DLB_hybrid_synthesisCL_init */
/* Demangled: DLB_hybrid_synthesisCL_init */
int DLB_hybrid_synthesisCL_init(void);

/* Symbol: dlb_cos_64_full_scl */
/* Demangled: dlb_cos_64_full_scl */
extern void* dlb_cos_64_full_scl;

/* Symbol: _ZN5dolby9EffectDap9setBypassEb */
/* Demangled: dolby::EffectDap::setBypass(bool) */
int _ZN5dolby9EffectDap9setBypassEb(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L512 */
/* Demangled: dlb_dct_twiddle_table16_rev_L512 */
extern void* dlb_dct_twiddle_table16_rev_L512;

/* Symbol: dlb_dct_twiddle_table16_L512_1 */
/* Demangled: dlb_dct_twiddle_table16_L512_1 */
extern void* dlb_dct_twiddle_table16_L512_1;

/* Symbol: DLB_r4_fft_80 */
/* Demangled: DLB_r4_fft_80 */
int DLB_r4_fft_80(void);

/* Symbol: DLB_r4_inv_fft_480_s */
/* Demangled: DLB_r4_inv_fft_480_s */
int DLB_r4_inv_fft_480_s(void);

/* Symbol: _ZN5dolby16DapBufferAdapterC2EPNS_11IDlbProcessE */
/* Demangled: dolby::DapBufferAdapter::DapBufferAdapter(dolby::IDlbProcess*) */
int _ZN5dolby16DapBufferAdapterC2EPNS_11IDlbProcessE(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L32 */
/* Demangled: dlb_dct_twiddle_table16_rev_L32 */
extern void* dlb_dct_twiddle_table16_rev_L32;

/* Symbol: dlb_dct_twiddle_table16_L512_2 */
/* Demangled: dlb_dct_twiddle_table16_L512_2 */
extern void* dlb_dct_twiddle_table16_L512_2;

/* Symbol: DLB_r4_inv_fft_45 */
/* Demangled: DLB_r4_inv_fft_45 */
int DLB_r4_inv_fft_45(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcessD1Ev */
/* Demangled: dolby::DlbCrossfadeProcess::~DlbCrossfadeProcess() */
int _ZN5dolby19DlbCrossfadeProcessD1Ev(void);

/* Symbol: dap_cpdp_volume_leveler_compressor_enable_set */
/* Demangled: dap_cpdp_volume_leveler_compressor_enable_set */
int dap_cpdp_volume_leveler_compressor_enable_set(void);

/* Symbol: _ZN5dolby25Ac4DecAudioBufferProvider3setEPvi */
/* Demangled: dolby::Ac4DecAudioBufferProvider::set(void*, int) */
int _ZN5dolby25Ac4DecAudioBufferProvider3setEPvi(void);

/* Symbol: DLB_CLmpy_recipCLLIU_strict */
/* Demangled: DLB_CLmpy_recipCLLIU_strict */
int DLB_CLmpy_recipCLLIU_strict(void);

/* Symbol: dlb_CLmpy_recipCLLIU_flex */
/* Demangled: dlb_CLmpy_recipCLLIU_flex */
int dlb_CLmpy_recipCLLIU_flex(void);

/* Symbol: DLB_qmf_synthesisS_set_slot_increment */
/* Demangled: DLB_qmf_synthesisS_set_slot_increment */
int DLB_qmf_synthesisS_set_slot_increment(void);

/* Symbol: _ZN5dolby19DapCrossfadeProcess7processEPNS_14BufferProviderES2_ */
/* Demangled: dolby::DapCrossfadeProcess::process(dolby::BufferProvider*, dolby::BufferProvider*) */
int _ZN5dolby19DapCrossfadeProcess7processEPNS_14BufferProviderES2_(void);

/* Symbol: DAP_CPDP_PVT_cmtx_init */
/* Demangled: DAP_CPDP_PVT_cmtx_init */
int DAP_CPDP_PVT_cmtx_init(void);

/* Symbol: DAP_CPDP_PVT_mi_dap_close */
/* Demangled: DAP_CPDP_PVT_mi_dap_close */
int DAP_CPDP_PVT_mi_dap_close(void);

/* Symbol: dlb_dct_twiddle_table16_L960_cos */
/* Demangled: dlb_dct_twiddle_table16_L960_cos */
extern void* dlb_dct_twiddle_table16_L960_cos;

/* Symbol: DAP_CPDP_PVT_surround_compressor_process */
/* Demangled: DAP_CPDP_PVT_surround_compressor_process */
int DAP_CPDP_PVT_surround_compressor_process(void);

/* Symbol: dlb_blk_Lmpy_shlLSU_flex */
/* Demangled: dlb_blk_Lmpy_shlLSU_flex */
int dlb_blk_Lmpy_shlLSU_flex(void);

/* Symbol: DLB_r4_inv_fft_48 */
/* Demangled: DLB_r4_inv_fft_48 */
int DLB_r4_inv_fft_48(void);

/* Symbol: _ZN5dolby9EffectDapC2EPNS_11IDlbProcessE */
/* Demangled: dolby::EffectDap::EffectDap(dolby::IDlbProcess*) */
int _ZN5dolby9EffectDapC2EPNS_11IDlbProcessE(void);

/* Symbol: DAP_CPDP_PVT_asa_reset_process */
/* Demangled: DAP_CPDP_PVT_asa_reset_process */
int DAP_CPDP_PVT_asa_reset_process(void);

/* Symbol: DLB_vec_Sabs_maxSU_strict */
/* Demangled: DLB_vec_Sabs_maxSU_strict */
int DLB_vec_Sabs_maxSU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L360 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L360 */
extern void* dlb_dct_twiddle_table16_rev_1_L360;

/* Symbol: dlb_dct_twiddle_table16_rev_L36 */
/* Demangled: dlb_dct_twiddle_table16_rev_L36 */
extern void* dlb_dct_twiddle_table16_rev_L36;

/* Symbol: DAP_CPDP_PVT_icsc_query_scratch */
/* Demangled: DAP_CPDP_PVT_icsc_query_scratch */
int DAP_CPDP_PVT_icsc_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_A_LTRT3D_DELAYATTEN_SR48KHZ */
/* Demangled: DAP_CPDP_PVT_A_LTRT3D_DELAYATTEN_SR48KHZ */
extern void* DAP_CPDP_PVT_A_LTRT3D_DELAYATTEN_SR48KHZ;

/* Symbol: DLB_blk_LmixnL */
/* Demangled: DLB_blk_LmixnL */
int DLB_blk_LmixnL(void);

/* Symbol: DLB_fft_scratch_query_mem */
/* Demangled: DLB_fft_scratch_query_mem */
int DLB_fft_scratch_query_mem(void);

/* Symbol: DLB_hybrid_analysisCL_shl */
/* Demangled: DLB_hybrid_analysisCL_shl */
int DLB_hybrid_analysisCL_shl(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_32 */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_32 */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_32;

/* Symbol: dap_cpdp_virtualizer_front_speaker_angle_set */
/* Demangled: dap_cpdp_virtualizer_front_speaker_angle_set */
int dap_cpdp_virtualizer_front_speaker_angle_set(void);

/* Symbol: DAP_CPDP_PVT_evaluation_init */
/* Demangled: DAP_CPDP_PVT_evaluation_init */
int DAP_CPDP_PVT_evaluation_init(void);

/* Symbol: DAP_CPDP_PVT_sv_coefs_init */
/* Demangled: DAP_CPDP_PVT_sv_coefs_init */
int DAP_CPDP_PVT_sv_coefs_init(void);

/* Symbol: DAP_CPDP_PVT_mfcc_flux_reset */
/* Demangled: DAP_CPDP_PVT_mfcc_flux_reset */
int DAP_CPDP_PVT_mfcc_flux_reset(void);

/* Symbol: DAP_CPDP_PVT_get_dv_event_weight */
/* Demangled: DAP_CPDP_PVT_get_dv_event_weight */
int DAP_CPDP_PVT_get_dv_event_weight(void);

/* Symbol: DAP_CPDP_PVT_init_hcqmf_3ch_decorr */
/* Demangled: DAP_CPDP_PVT_init_hcqmf_3ch_decorr */
int DAP_CPDP_PVT_init_hcqmf_3ch_decorr(void);

/* Symbol: dlb_fft_cplx_fwd_scl */
/* Demangled: dlb_fft_cplx_fwd_scl */
extern void* dlb_fft_cplx_fwd_scl;

/* Symbol: DAP_UPMIX_MODE_STEREO_TO_7D1D2_GAMING */
/* Demangled: DAP_UPMIX_MODE_STEREO_TO_7D1D2_GAMING */
extern void* DAP_UPMIX_MODE_STEREO_TO_7D1D2_GAMING;

/* Symbol: DAP_CPDP_PVT_mfcc_flux_init */
/* Demangled: DAP_CPDP_PVT_mfcc_flux_init */
int DAP_CPDP_PVT_mfcc_flux_init(void);

/* Symbol: DAP_CPDP_PVT_gain_calc_query_memory */
/* Demangled: DAP_CPDP_PVT_gain_calc_query_memory */
int DAP_CPDP_PVT_gain_calc_query_memory(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcessC2EPNS_11IDlbProcessENS_13SampleCounterES3_ */
/* Demangled: dolby::DlbCrossfadeProcess::DlbCrossfadeProcess(dolby::IDlbProcess*, dolby::SampleCounter, dolby::SampleCounter) */
int _ZN5dolby19DlbCrossfadeProcessC2EPNS_11IDlbProcessENS_13SampleCounterES3_(void);

/* Symbol: DLB_CLmfb_p10km_analysisL */
/* Demangled: DLB_CLmfb_p10km_analysisL */
int DLB_CLmfb_p10km_analysisL(void);

/* Symbol: dap_cpdp_regulator_timbre_preservation_set */
/* Demangled: dap_cpdp_regulator_timbre_preservation_set */
int dap_cpdp_regulator_timbre_preservation_set(void);

/* Symbol: DLB_r4_fft_24_s */
/* Demangled: DLB_r4_fft_24_s */
int DLB_r4_fft_24_s(void);

/* Symbol: _ZN5dolby9DlbEffect27handle_EFFECT_CMD_SET_PARAMERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_SET_PARAM(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect27handle_EFFECT_CMD_SET_PARAMERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: DAP_CPDP_PVT_data_bass_clear_buffer */
/* Demangled: DAP_CPDP_PVT_data_bass_clear_buffer */
int DAP_CPDP_PVT_data_bass_clear_buffer(void);

/* Symbol: DAP_CPDP_PVT_dlb_shift_ex_avg_filter_run */
/* Demangled: DAP_CPDP_PVT_dlb_shift_ex_avg_filter_run */
int DAP_CPDP_PVT_dlb_shift_ex_avg_filter_run(void);

/* Symbol: dlb_dct_twiddle_table16_L360_cos */
/* Demangled: dlb_dct_twiddle_table16_L360_cos */
extern void* dlb_dct_twiddle_table16_L360_cos;

/* Symbol: _ZN5dolby18VoiceEffectContext10getVersionEPiS1_ */
/* Demangled: dolby::VoiceEffectContext::getVersion(int*, int*) */
int _ZN5dolby18VoiceEffectContext10getVersionEPiS1_(void);

/* Symbol: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5CH1_CC */
/* Demangled: DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5CH1_CC */
extern void* DAP_CPDP_PVT_DAP_UPMIX_MODE_5CH1_TO_5CH1_CC;

/* Symbol: DAP_CPDP_PVT_NYQUIST_FILTERS_844_STANDARD */
/* Demangled: DAP_CPDP_PVT_NYQUIST_FILTERS_844_STANDARD */
extern void* DAP_CPDP_PVT_NYQUIST_FILTERS_844_STANDARD;

/* Symbol: DAP_CPDP_PVT_mi_vec_pow */
/* Demangled: DAP_CPDP_PVT_mi_vec_pow */
int DAP_CPDP_PVT_mi_vec_pow(void);

/* Symbol: DLB_r4_inv_fft_192 */
/* Demangled: DLB_r4_inv_fft_192 */
int DLB_r4_inv_fft_192(void);

/* Symbol: DAP_CPDP_PVT_data_bass_clear_db_processing_buf */
/* Demangled: DAP_CPDP_PVT_data_bass_clear_db_processing_buf */
int DAP_CPDP_PVT_data_bass_clear_db_processing_buf(void);

/* Symbol: DAP_CPDP_PVT_mfcc_query_clip_mem */
/* Demangled: DAP_CPDP_PVT_mfcc_query_clip_mem */
int DAP_CPDP_PVT_mfcc_query_clip_mem(void);

/* Symbol: DLB_CLrecipCLUU_strict */
/* Demangled: DLB_CLrecipCLUU_strict */
int DLB_CLrecipCLUU_strict(void);

/* Symbol: DLB_r4_fft_45_s */
/* Demangled: DLB_r4_fft_45_s */
int DLB_r4_fft_45_s(void);

/* Symbol: dlb_fft_inv_scl_160 */
/* Demangled: dlb_fft_inv_scl_160 */
int dlb_fft_inv_scl_160(void);

/* Symbol: DAP_CPDP_PVT_asa_reset_init */
/* Demangled: DAP_CPDP_PVT_asa_reset_init */
int DAP_CPDP_PVT_asa_reset_init(void);

/* Symbol: DAP_CPDP_PVT_classifier_init */
/* Demangled: DAP_CPDP_PVT_classifier_init */
int DAP_CPDP_PVT_classifier_init(void);

/* Symbol: DAP_CPDP_PVT_mi_internal_reset */
/* Demangled: DAP_CPDP_PVT_mi_internal_reset */
int DAP_CPDP_PVT_mi_internal_reset(void);

/* Symbol: DAP_CPDP_PVT_mi_pre_set_binaural_enable */
/* Demangled: DAP_CPDP_PVT_mi_pre_set_binaural_enable */
int DAP_CPDP_PVT_mi_pre_set_binaural_enable(void);

/* Symbol: DAP_CPDP_PVT_mi_internal_process */
/* Demangled: DAP_CPDP_PVT_mi_internal_process */
int DAP_CPDP_PVT_mi_internal_process(void);

/* Symbol: DAP_CPDP_PVT_calculate_hrtf_and_fdn_downmix_gains */
/* Demangled: DAP_CPDP_PVT_calculate_hrtf_and_fdn_downmix_gains */
int DAP_CPDP_PVT_calculate_hrtf_and_fdn_downmix_gains(void);

/* Symbol: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_TAB_48K */
/* Demangled: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_TAB_48K */
extern void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MIN_TAB_48K;

/* Symbol: dap_cpdp_virtual_bass_slope_gain_set */
/* Demangled: dap_cpdp_virtual_bass_slope_gain_set */
int dap_cpdp_virtual_bass_slope_gain_set(void);

/* Symbol: DLB_CLdivCLCLU_strict */
/* Demangled: DLB_CLdivCLCLU_strict */
int DLB_CLdivCLCLU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L72 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L72 */
extern void* dlb_dct_twiddle_table16_rev_1_L72;

/* Symbol: dlb_dct_twiddle_table16_L384_1 */
/* Demangled: dlb_dct_twiddle_table16_L384_1 */
extern void* dlb_dct_twiddle_table16_L384_1;

/* Symbol: DLB_r4_fft_160 */
/* Demangled: DLB_r4_fft_160 */
int DLB_r4_fft_160(void);

/* Symbol: DLB_r4_inv_fft_120_s */
/* Demangled: DLB_r4_inv_fft_120_s */
int DLB_r4_inv_fft_120_s(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_8_vec_syn;

/* Symbol: DAP_CPDP_PVT_MFB_TWID256E */
/* Demangled: DAP_CPDP_PVT_MFB_TWID256E */
extern void* DAP_CPDP_PVT_MFB_TWID256E;

/* Symbol: _dlb_ldct2_scaled_iplu */
/* Demangled: _dlb_ldct2_scaled_iplu */
int _dlb_ldct2_scaled_iplu(void);

/* Symbol: dlb_dct_twiddle_table16_L384_2 */
/* Demangled: dlb_dct_twiddle_table16_L384_2 */
extern void* dlb_dct_twiddle_table16_L384_2;

/* Symbol: DLB_r4_fft_576_s */
/* Demangled: DLB_r4_fft_576_s */
int DLB_r4_fft_576_s(void);

/* Symbol: DLB_mfb_p10km_analysisL_query_scratch */
/* Demangled: DLB_mfb_p10km_analysisL_query_scratch */
int DLB_mfb_p10km_analysisL_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_mask_ICC_subbandIdx */
/* Demangled: DAP_CPDP_PVT_mask_ICC_subbandIdx */
extern void* DAP_CPDP_PVT_mask_ICC_subbandIdx;

/* Symbol: DAP_CPDP_PVT_spec_flux_frame_process */
/* Demangled: DAP_CPDP_PVT_spec_flux_frame_process */
int DAP_CPDP_PVT_spec_flux_frame_process(void);

/* Symbol: DAP_CPDP_PVT_mi_dap_get_binaural_virtualizer_amount */
/* Demangled: DAP_CPDP_PVT_mi_dap_get_binaural_virtualizer_amount */
int DAP_CPDP_PVT_mi_dap_get_binaural_virtualizer_amount(void);

/* Symbol: DAP_CPDP_PVT_ngcs_upmixer_query_memory */
/* Demangled: DAP_CPDP_PVT_ngcs_upmixer_query_memory */
int DAP_CPDP_PVT_ngcs_upmixer_query_memory(void);

/* Symbol: dlb_fft_fwd_scl_180 */
/* Demangled: dlb_fft_fwd_scl_180 */
int dlb_fft_fwd_scl_180(void);

/* Symbol: DLB_qmf_synthesisS_query_mem */
/* Demangled: DLB_qmf_synthesisS_query_mem */
int DLB_qmf_synthesisS_query_mem(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_virt_chain_query_scratch */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_virt_chain_query_scratch */
int DAP_CPDP_PVT_dap_cpdp_virt_chain_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_sv_get_cutoff_bins */
/* Demangled: DAP_CPDP_PVT_sv_get_cutoff_bins */
int DAP_CPDP_PVT_sv_get_cutoff_bins(void);

/* Symbol: DAP_CPDP_PVT_A_LTRT3D_STATS_ALPHA_SR32KHZ_BR256 */
/* Demangled: DAP_CPDP_PVT_A_LTRT3D_STATS_ALPHA_SR32KHZ_BR256 */
extern void* DAP_CPDP_PVT_A_LTRT3D_STATS_ALPHA_SR32KHZ_BR256;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L480 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L480 */
extern void* dlb_dct_twiddle_table16_rev_1_L480;

/* Symbol: dlb_dct_twiddle_table16_L4_1 */
/* Demangled: dlb_dct_twiddle_table16_L4_1 */
extern void* dlb_dct_twiddle_table16_L4_1;

/* Symbol: DLB_CLzeroCLU_strict */
/* Demangled: DLB_CLzeroCLU_strict */
int DLB_CLzeroCLU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L4_2 */
/* Demangled: dlb_dct_twiddle_table16_L4_2 */
extern void* dlb_dct_twiddle_table16_L4_2;

/* Symbol: DLB_qmf_analysisS_get_delay */
/* Demangled: DLB_qmf_analysisS_get_delay */
int DLB_qmf_analysisS_get_delay(void);

/* Symbol: dlb_qmf_analysisS_open */
/* Demangled: dlb_qmf_analysisS_open */
int dlb_qmf_analysisS_open(void);

/* Symbol: _ZN5dolby13EffectContext14isEffectActiveEv */
/* Demangled: dolby::EffectContext::isEffectActive() */
int _ZN5dolby13EffectContext14isEffectActiveEv(void);

/* Symbol: dap_cpdp_hearing_protection_rms_attenuation_target_set */
/* Demangled: dap_cpdp_hearing_protection_rms_attenuation_target_set */
int dap_cpdp_hearing_protection_rms_attenuation_target_set(void);

/* Symbol: DAP_CPDP_PVT_mfcc_flux_close */
/* Demangled: DAP_CPDP_PVT_mfcc_flux_close */
int DAP_CPDP_PVT_mfcc_flux_close(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcess4initEv */
/* Demangled: dolby::DlbCrossfadeProcess::init() */
int _ZN5dolby19DlbCrossfadeProcess4initEv(void);

/* Symbol: DAP_CPDP_PVT_band_smoother_process */
/* Demangled: DAP_CPDP_PVT_band_smoother_process */
int DAP_CPDP_PVT_band_smoother_process(void);

/* Symbol: dlb_dct_twiddle_table16_L12_cos */
/* Demangled: dlb_dct_twiddle_table16_L12_cos */
extern void* dlb_dct_twiddle_table16_L12_cos;

/* Symbol: DAP_CPDP_PVT_agc_update_alpha */
/* Demangled: DAP_CPDP_PVT_agc_update_alpha */
int DAP_CPDP_PVT_agc_update_alpha(void);

/* Symbol: DAP_CPDP_PVT_de_duck_state_init */
/* Demangled: DAP_CPDP_PVT_de_duck_state_init */
int DAP_CPDP_PVT_de_duck_state_init(void);

/* Symbol: DAP_CPDP_PVT_ltrt3d_stats_init */
/* Demangled: DAP_CPDP_PVT_ltrt3d_stats_init */
int DAP_CPDP_PVT_ltrt3d_stats_init(void);

/* Symbol: dlb_fft_inv_usc_12 */
/* Demangled: dlb_fft_inv_usc_12 */
int dlb_fft_inv_usc_12(void);

/* Symbol: DAP_CPDP_PVT_cmtx_unlock */
/* Demangled: DAP_CPDP_PVT_cmtx_unlock */
int DAP_CPDP_PVT_cmtx_unlock(void);

/* Symbol: DAP_CPDP_PVT_dvlim_query_memory */
/* Demangled: DAP_CPDP_PVT_dvlim_query_memory */
int DAP_CPDP_PVT_dvlim_query_memory(void);

/* Symbol: DAP_CPDP_PVT_A_DUCK_THRESHOLDS_32K */
/* Demangled: DAP_CPDP_PVT_A_DUCK_THRESHOLDS_32K */
extern void* DAP_CPDP_PVT_A_DUCK_THRESHOLDS_32K;

/* Symbol: DLB_CLCLmix4CL8SU_strict */
/* Demangled: DLB_CLCLmix4CL8SU_strict */
int DLB_CLCLmix4CL8SU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L180 */
/* Demangled: dlb_dct_twiddle_table16_L180 */
extern void* dlb_dct_twiddle_table16_L180;

/* Symbol: dlb_qmf_filter_coeff_P5_32_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_32_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_32_vec_syn;

/* Symbol: _ZN5dolby13EffectContextD2Ev */
/* Demangled: dolby::EffectContext::~EffectContext() */
int _ZN5dolby13EffectContextD2Ev(void);

/* Symbol: dap_cpdp_bass_extraction_cutoff_frequency_set */
/* Demangled: dap_cpdp_bass_extraction_cutoff_frequency_set */
int dap_cpdp_bass_extraction_cutoff_frequency_set(void);

/* Symbol: DAP_CPDP_PVT_lvl_smooth_scale_band */
/* Demangled: DAP_CPDP_PVT_lvl_smooth_scale_band */
int DAP_CPDP_PVT_lvl_smooth_scale_band(void);

/* Symbol: DAP_CPDP_PVT_nyquist_filters_844_query_memory */
/* Demangled: DAP_CPDP_PVT_nyquist_filters_844_query_memory */
int DAP_CPDP_PVT_nyquist_filters_844_query_memory(void);

/* Symbol: DAP_CPDP_PVT_DE_POW_RATE_48K */
/* Demangled: DAP_CPDP_PVT_DE_POW_RATE_48K */
extern void* DAP_CPDP_PVT_DE_POW_RATE_48K;

/* Symbol: dlb_blk_Liir2ssv2L_inplace_flex */
/* Demangled: dlb_blk_Liir2ssv2L_inplace_flex */
int dlb_blk_Liir2ssv2L_inplace_flex(void);

/* Symbol: DLB_blk_Liir2ssv2_shlLU_strict */
/* Demangled: DLB_blk_Liir2ssv2_shlLU_strict */
int DLB_blk_Liir2ssv2_shlLU_strict(void);

/* Symbol: dlb_CLmpyCLCSU_flex */
/* Demangled: dlb_CLmpyCLCSU_flex */
int dlb_CLmpyCLCSU_flex(void);

/* Symbol: dlb_fft_inv_usc_15 */
/* Demangled: dlb_fft_inv_usc_15 */
int dlb_fft_inv_usc_15(void);

/* Symbol: dlb_dct_twiddle_table16_1_L192 */
/* Demangled: dlb_dct_twiddle_table16_1_L192 */
extern void* dlb_dct_twiddle_table16_1_L192;

/* Symbol: DLB_r4_fft_480_s */
/* Demangled: DLB_r4_fft_480_s */
int DLB_r4_fft_480_s(void);

/* Symbol: dlb_fft_inv_usc_16 */
/* Demangled: dlb_fft_inv_usc_16 */
int dlb_fft_inv_usc_16(void);

/* Symbol: DLB_MFB_P10KM_P4_319SC */
/* Demangled: DLB_MFB_P10KM_P4_319SC */
extern void* DLB_MFB_P10KM_P4_319SC;

/* Symbol: DAP_CPDP_PVT_arle_compressor_init */
/* Demangled: DAP_CPDP_PVT_arle_compressor_init */
int DAP_CPDP_PVT_arle_compressor_init(void);

/* Symbol: DAP_CPDP_PVT_mi_internal_close */
/* Demangled: DAP_CPDP_PVT_mi_internal_close */
int DAP_CPDP_PVT_mi_internal_close(void);

/* Symbol: DAP_CPDP_PVT_mi_vec_log10 */
/* Demangled: DAP_CPDP_PVT_mi_vec_log10 */
int DAP_CPDP_PVT_mi_vec_log10(void);

/* Symbol: DAP_CPDP_PVT_leveler_reset */
/* Demangled: DAP_CPDP_PVT_leveler_reset */
int DAP_CPDP_PVT_leveler_reset(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L256 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L256 */
extern void* dlb_dct_twiddle_table16_rev_1_L256;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE;

/* Symbol: _ZN5dolby13EffectContext8setParamEijPv */
/* Demangled: dolby::EffectContext::setParam(int, unsigned int, void*) */
int _ZN5dolby13EffectContext8setParamEijPv(void);

/* Symbol: dap_cpdp_virtual_bass_rolloff_gain_set */
/* Demangled: dap_cpdp_virtual_bass_rolloff_gain_set */
int dap_cpdp_virtual_bass_rolloff_gain_set(void);

/* Symbol: DAP_CPDP_PVT_gain_calc_init */
/* Demangled: DAP_CPDP_PVT_gain_calc_init */
int DAP_CPDP_PVT_gain_calc_init(void);

/* Symbol: DLB_blk_Liir2ssv3aLU_inplace_strict */
/* Demangled: DLB_blk_Liir2ssv3aLU_inplace_strict */
int DLB_blk_Liir2ssv3aLU_inplace_strict(void);

/* Symbol: DLB_r4_inv_fft_512_s */
/* Demangled: DLB_r4_inv_fft_512_s */
int DLB_r4_inv_fft_512_s(void);

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_ana_process */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_ana_process */
int DAP_CPDP_PVT_mfb_rcp10km_ana_process(void);

/* Symbol: _ZN5dolby13EffectContext18serviceDeathHandleEv */
/* Demangled: dolby::EffectContext::serviceDeathHandle() */
int _ZN5dolby13EffectContext18serviceDeathHandleEv(void);

/* Symbol: DAP_CPDP_PVT_A_VIRTUAL_BASS_MOD_SHIFT_NEG */
/* Demangled: DAP_CPDP_PVT_A_VIRTUAL_BASS_MOD_SHIFT_NEG */
extern void* DAP_CPDP_PVT_A_VIRTUAL_BASS_MOD_SHIFT_NEG;

/* Symbol: DAP_CPDP_PVT_AA_COMPR_COEFS_SLOPES_48K */
/* Demangled: DAP_CPDP_PVT_AA_COMPR_COEFS_SLOPES_48K */
extern void* DAP_CPDP_PVT_AA_COMPR_COEFS_SLOPES_48K;

/* Symbol: dlb_blk_LmaxLLL_flex */
/* Demangled: dlb_blk_LmaxLLL_flex */
int dlb_blk_LmaxLLL_flex(void);

/* Symbol: dap_cpdp_volmax_boost_set */
/* Demangled: dap_cpdp_volmax_boost_set */
int dap_cpdp_volmax_boost_set(void);

/* Symbol: DAP_CPDP_PVT_delay_line_write_indirect */
/* Demangled: DAP_CPDP_PVT_delay_line_write_indirect */
int DAP_CPDP_PVT_delay_line_write_indirect(void);

/* Symbol: dlb_blk_Lattack_decay_iir1L_flex */
/* Demangled: dlb_blk_Lattack_decay_iir1L_flex */
int dlb_blk_Lattack_decay_iir1L_flex(void);

/* Symbol: DLB_r4_fft_90 */
/* Demangled: DLB_r4_fft_90 */
int DLB_r4_fft_90(void);

/* Symbol: dlb_fft_fwd_scl_12 */
/* Demangled: dlb_fft_fwd_scl_12 */
int dlb_fft_fwd_scl_12(void);

/* Symbol: dlb_qmf_analysisL_reconfig */
/* Demangled: dlb_qmf_analysisL_reconfig */
int dlb_qmf_analysisL_reconfig(void);

/* Symbol: DAP_CPDP_PVT_dvlim_get_latency */
/* Demangled: DAP_CPDP_PVT_dvlim_get_latency */
int DAP_CPDP_PVT_dvlim_get_latency(void);

/* Symbol: DAP_CPDP_PVT_A_LTRT3D_STATS_ALPHA_SR44KHZ1_BR256 */
/* Demangled: DAP_CPDP_PVT_A_LTRT3D_STATS_ALPHA_SR44KHZ1_BR256 */
extern void* DAP_CPDP_PVT_A_LTRT3D_STATS_ALPHA_SR44KHZ1_BR256;

/* Symbol: DLB_blk_LmaxLLL_strict */
/* Demangled: DLB_blk_LmaxLLL_strict */
int DLB_blk_LmaxLLL_strict(void);

/* Symbol: DLB_r4_inv_fft_24_s */
/* Demangled: DLB_r4_inv_fft_24_s */
int DLB_r4_inv_fft_24_s(void);

/* Symbol: dap_cpdp_volume_leveler_amount_set */
/* Demangled: dap_cpdp_volume_leveler_amount_set */
int dap_cpdp_volume_leveler_amount_set(void);

/* Symbol: DAP_CPDP_PVT_data_bass_query_memory */
/* Demangled: DAP_CPDP_PVT_data_bass_query_memory */
int DAP_CPDP_PVT_data_bass_query_memory(void);

/* Symbol: DAP_CPDP_PVT_hdr_vec_P2powPLPU */
/* Demangled: DAP_CPDP_PVT_hdr_vec_P2powPLPU */
int DAP_CPDP_PVT_hdr_vec_P2powPLPU(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L1024 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L1024 */
extern void* dlb_dct_twiddle_table16_rev_1_L1024;

/* Symbol: DLB_time_reset */
/* Demangled: DLB_time_reset */
int DLB_time_reset(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_set_rms_avg_time_win_len */
/* Demangled: DAP_CPDP_PVT_hearing_protection_set_rms_avg_time_win_len */
int DAP_CPDP_PVT_hearing_protection_set_rms_avg_time_win_len(void);

/* Symbol: dlb_blk_LclipL_flex */
/* Demangled: dlb_blk_LclipL_flex */
int dlb_blk_LclipL_flex(void);

/* Symbol: DLB_blk_LnrrecipLU_setup */
/* Demangled: DLB_blk_LnrrecipLU_setup */
int DLB_blk_LnrrecipLU_setup(void);

/* Symbol: dlb_dct_twiddle_table16_L24_1 */
/* Demangled: dlb_dct_twiddle_table16_L24_1 */
extern void* dlb_dct_twiddle_table16_L24_1;

/* Symbol: dlb_fft_fwd_scl_15 */
/* Demangled: dlb_fft_fwd_scl_15 */
int dlb_fft_fwd_scl_15(void);

/* Symbol: dlb_fft_inv_scl_288 */
/* Demangled: dlb_fft_inv_scl_288 */
int dlb_fft_inv_scl_288(void);

/* Symbol: DAP_CPDP_PVT_virtual_bass_get_latency */
/* Demangled: DAP_CPDP_PVT_virtual_bass_get_latency */
int DAP_CPDP_PVT_virtual_bass_get_latency(void);

/* Symbol: dlb_blk_Lconst_flex */
/* Demangled: dlb_blk_Lconst_flex */
int dlb_blk_Lconst_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L45 */
/* Demangled: dlb_dct_twiddle_table16_rev_L45 */
extern void* dlb_dct_twiddle_table16_rev_L45;

/* Symbol: dlb_dct_twiddle_table16_L24_2 */
/* Demangled: dlb_dct_twiddle_table16_L24_2 */
extern void* dlb_dct_twiddle_table16_L24_2;

/* Symbol: DLB_r4_inv_fft_45_s */
/* Demangled: DLB_r4_inv_fft_45_s */
int DLB_r4_inv_fft_45_s(void);

/* Symbol: dlb_fft_fwd_scl_16 */
/* Demangled: dlb_fft_fwd_scl_16 */
int dlb_fft_fwd_scl_16(void);

/* Symbol: _ZN5dolby16DapBufferAdapter9configureEii14audio_format_t20audio_channel_mask_tS2_ */
/* Demangled: dolby::DapBufferAdapter::configure(int, int, audio_format_t, audio_channel_mask_t, audio_channel_mask_t) */
int _ZN5dolby16DapBufferAdapter9configureEii14audio_format_t20audio_channel_mask_tS2_(void);

/* Symbol: DAP_CPDP_PVT_feature_process */
/* Demangled: DAP_CPDP_PVT_feature_process */
int DAP_CPDP_PVT_feature_process(void);

/* Symbol: DLB_blk_LfirUL_setup */
/* Demangled: DLB_blk_LfirUL_setup */
int DLB_blk_LfirUL_setup(void);

/* Symbol: DLB_r4_fft_288 */
/* Demangled: DLB_r4_fft_288 */
int DLB_r4_fft_288(void);

/* Symbol: DLB_r4_inv_fft_4_s */
/* Demangled: DLB_r4_inv_fft_4_s */
int DLB_r4_inv_fft_4_s(void);

/* Symbol: dlb_cos_16_ast_mini_twiddle */
/* Demangled: dlb_cos_16_ast_mini_twiddle */
extern void* dlb_cos_16_ast_mini_twiddle;

/* Symbol: DAP_CPDP_PVT_A_VIRTUAL_BASS_ANA_WINDOW */
/* Demangled: DAP_CPDP_PVT_A_VIRTUAL_BASS_ANA_WINDOW */
extern void* DAP_CPDP_PVT_A_VIRTUAL_BASS_ANA_WINDOW;

/* Symbol: DAP_CPDP_PVT_hearing_protection_get_enable */
/* Demangled: DAP_CPDP_PVT_hearing_protection_get_enable */
int DAP_CPDP_PVT_hearing_protection_get_enable(void);

/* Symbol: DAP_CPDP_PVT_virtual_bass_delayline_buf_attenuate */
/* Demangled: DAP_CPDP_PVT_virtual_bass_delayline_buf_attenuate */
int DAP_CPDP_PVT_virtual_bass_delayline_buf_attenuate(void);

/* Symbol: dlb_dct_twiddle_table16_L45_1 */
/* Demangled: dlb_dct_twiddle_table16_L45_1 */
extern void* dlb_dct_twiddle_table16_L45_1;

/* Symbol: DLB_r4_fft_96 */
/* Demangled: DLB_r4_fft_96 */
int DLB_r4_fft_96(void);

/* Symbol: _ZN5dolby11Dap2ProcessC1EbbbPKc */
/* Demangled: dolby::Dap2Process::Dap2Process(bool, bool, bool, char const*) */
int _ZN5dolby11Dap2ProcessC1EbbbPKc(void);

/* Symbol: DAP_CPDP_PVT_virtual_bass_close */
/* Demangled: DAP_CPDP_PVT_virtual_bass_close */
int DAP_CPDP_PVT_virtual_bass_close(void);

/* Symbol: DAP_CPDP_PVT_A_DUCK_THRESHOLDS_44K */
/* Demangled: DAP_CPDP_PVT_A_DUCK_THRESHOLDS_44K */
extern void* DAP_CPDP_PVT_A_DUCK_THRESHOLDS_44K;

/* Symbol: dlb_dct_twiddle_table16_rev_L48 */
/* Demangled: dlb_dct_twiddle_table16_rev_L48 */
extern void* dlb_dct_twiddle_table16_rev_L48;

/* Symbol: dlb_dct_twiddle_table16_L45_2 */
/* Demangled: dlb_dct_twiddle_table16_L45_2 */
extern void* dlb_dct_twiddle_table16_L45_2;

/* Symbol: DLB_r4_fft_6_s */
/* Demangled: DLB_r4_fft_6_s */
int DLB_r4_fft_6_s(void);

/* Symbol: DLB_MFB_TWID128E */
/* Demangled: DLB_MFB_TWID128E */
extern void* DLB_MFB_TWID128E;

/* Symbol: DAP_CPDP_PVT_mi_pre_init */
/* Demangled: DAP_CPDP_PVT_mi_pre_init */
int DAP_CPDP_PVT_mi_pre_init(void);

/* Symbol: DAP_CPDP_PVT_mfb_rcp10km_syn_init */
/* Demangled: DAP_CPDP_PVT_mfb_rcp10km_syn_init */
int DAP_CPDP_PVT_mfb_rcp10km_syn_init(void);

/* Symbol: DAP_CPDP_PVT_mi_vec_log2 */
/* Demangled: DAP_CPDP_PVT_mi_vec_log2 */
int DAP_CPDP_PVT_mi_vec_log2(void);

/* Symbol: _ZN5dolby16DapEffectContextC2Ev */
/* Demangled: dolby::DapEffectContext::DapEffectContext() */
int _ZN5dolby16DapEffectContextC2Ev(void);

/* Symbol: DAP_CPDP_PVT_zcr_query_clip_mem */
/* Demangled: DAP_CPDP_PVT_zcr_query_clip_mem */
int DAP_CPDP_PVT_zcr_query_clip_mem(void);

/* Symbol: DAP_CPDP_PVT_log_smoothing_approximation */
/* Demangled: DAP_CPDP_PVT_log_smoothing_approximation */
int DAP_CPDP_PVT_log_smoothing_approximation(void);

/* Symbol: DLB_r4_fft_120_s */
/* Demangled: DLB_r4_fft_120_s */
int DLB_r4_fft_120_s(void);

/* Symbol: DLB_r4_inv_fft_720 */
/* Demangled: DLB_r4_inv_fft_720 */
int DLB_r4_inv_fft_720(void);

/* Symbol: DAP_CPDP_PVT_de_init */
/* Demangled: DAP_CPDP_PVT_de_init */
int DAP_CPDP_PVT_de_init(void);

/* Symbol: _ZN5dolby9DlbEffect10kInterfaceE */
/* Demangled: dolby::DlbEffect::kInterface */
extern void* _ZN5dolby9DlbEffect10kInterfaceE;

/* Symbol: DAP_CPDP_PVT_clvec_buffer_mixer_coefs_gen_init */
/* Demangled: DAP_CPDP_PVT_clvec_buffer_mixer_coefs_gen_init */
int DAP_CPDP_PVT_clvec_buffer_mixer_coefs_gen_init(void);

/* Symbol: DAP_CPDP_PVT_classifier_query_scratch */
/* Demangled: DAP_CPDP_PVT_classifier_query_scratch */
int DAP_CPDP_PVT_classifier_query_scratch(void);

/* Symbol: DAP_CPDP_PVT_loudness_process */
/* Demangled: DAP_CPDP_PVT_loudness_process */
int DAP_CPDP_PVT_loudness_process(void);

/* Symbol: dlb_vec_NdotLLU_flex */
/* Demangled: dlb_vec_NdotLLU_flex */
int dlb_vec_NdotLLU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L144 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L144 */
extern void* dlb_dct_twiddle_table16_rev_1_L144;

/* Symbol: DLB_r4_inv_fft_384_s */
/* Demangled: DLB_r4_inv_fft_384_s */
int DLB_r4_inv_fft_384_s(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_48 */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_48 */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_48;

/* Symbol: _ZN5dolby13EffectContext15getStoredParamsEbRiRN7android11KeyedVectorI15audio_devices_tPNS_13DapParamCacheEEE */
/* Demangled: dolby::EffectContext::getStoredParams(bool, int&, android::KeyedVector<audio_devices_t, dolby::DapParamCache*>&) */
int _ZN5dolby13EffectContext15getStoredParamsEbRiRN7android11KeyedVectorI15audio_devices_tPNS_13DapParamCacheEEE(void);

/* Symbol: DAP_CPDP_PVT_virtual_bass_clear_buffer */
/* Demangled: DAP_CPDP_PVT_virtual_bass_clear_buffer */
int DAP_CPDP_PVT_virtual_bass_clear_buffer(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L640 */
/* Demangled: dlb_dct_twiddle_table16_rev_L640 */
extern void* dlb_dct_twiddle_table16_rev_L640;

/* Symbol: DAP_CPDP_PVT_mi_vec_sum */
/* Demangled: DAP_CPDP_PVT_mi_vec_sum */
int DAP_CPDP_PVT_mi_vec_sum(void);

/* Symbol: DLB_blk_delayL_strict */
/* Demangled: DLB_blk_delayL_strict */
int DLB_blk_delayL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L30_cos */
/* Demangled: dlb_dct_twiddle_table16_L30_cos */
extern void* dlb_dct_twiddle_table16_L30_cos;

/* Symbol: DAP_CPDP_PVT_clvec_buffer_mixer_coefs_query_memory */
/* Demangled: DAP_CPDP_PVT_clvec_buffer_mixer_coefs_query_memory */
int DAP_CPDP_PVT_clvec_buffer_mixer_coefs_query_memory(void);

/* Symbol: DAP_CPDP_PVT_hearing_protection_process */
/* Demangled: DAP_CPDP_PVT_hearing_protection_process */
int DAP_CPDP_PVT_hearing_protection_process(void);

/* Symbol: DAP_CPDP_PVT_icsc_reset */
/* Demangled: DAP_CPDP_PVT_icsc_reset */
int DAP_CPDP_PVT_icsc_reset(void);

/* Symbol: DAP_CPDP_PVT_sben_modulation_query_memory */
/* Demangled: DAP_CPDP_PVT_sben_modulation_query_memory */
int DAP_CPDP_PVT_sben_modulation_query_memory(void);

/* Symbol: dap_cpdp_regulator_stress_amount_set */
/* Demangled: dap_cpdp_regulator_stress_amount_set */
int dap_cpdp_regulator_stress_amount_set(void);

/* Symbol: DAP_CPDP_PVT_hdr_P2powLP */
/* Demangled: DAP_CPDP_PVT_hdr_P2powLP */
int DAP_CPDP_PVT_hdr_P2powLP(void);

/* Symbol: DAP_CPDP_PVT_MFB_TWID64E */
/* Demangled: DAP_CPDP_PVT_MFB_TWID64E */
extern void* DAP_CPDP_PVT_MFB_TWID64E;

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_8 */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_8 */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_8;

/* Symbol: _ZN5dolby13AudioHalUtils14restoreProfileEv */
/* Demangled: dolby::AudioHalUtils::restoreProfile() */
int _ZN5dolby13AudioHalUtils14restoreProfileEv(void);

/* Symbol: DAP_CPDP_PVT_dap_cpdp_virt_chain_query_mem */
/* Demangled: DAP_CPDP_PVT_dap_cpdp_virt_chain_query_mem */
int DAP_CPDP_PVT_dap_cpdp_virt_chain_query_mem(void);

/* Symbol: dlb_dct_twiddle_table16_L64_cos */
/* Demangled: dlb_dct_twiddle_table16_L64_cos */
extern void* dlb_dct_twiddle_table16_L64_cos;

/* Symbol: dap_cpdp_bass_enhancer_cutoff_frequency_set */
/* Demangled: dap_cpdp_bass_enhancer_cutoff_frequency_set */
int dap_cpdp_bass_enhancer_cutoff_frequency_set(void);

/* Symbol: dap_cpdp_regulator_tuning_set */
/* Demangled: dap_cpdp_regulator_tuning_set */
int dap_cpdp_regulator_tuning_set(void);

/* Symbol: DAP_CPDP_PVT_de_process */
/* Demangled: DAP_CPDP_PVT_de_process */
int DAP_CPDP_PVT_de_process(void);

/* Symbol: DAP_CPDP_PVT_de_pow_smooth_clear */
/* Demangled: DAP_CPDP_PVT_de_pow_smooth_clear */
int DAP_CPDP_PVT_de_pow_smooth_clear(void);

/* Symbol: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MAX_TAB_32K */
/* Demangled: DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MAX_TAB_32K */
extern void* DAP_CPDP_PVT_A_SURROUND_COMPRESSOR_NOISE_GATE_MAX_TAB_32K;

/* Symbol: DAP_CPDP_PVT_A_DE_MCRA_WIN_DEPTH01 */
/* Demangled: DAP_CPDP_PVT_A_DE_MCRA_WIN_DEPTH01 */
extern void* DAP_CPDP_PVT_A_DE_MCRA_WIN_DEPTH01;

/* Symbol: dlb_fft_fwd_scl_192 */
/* Demangled: dlb_fft_fwd_scl_192 */
int dlb_fft_fwd_scl_192(void);

/* Symbol: _ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_VOLUMEERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_SET_VOLUME(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_VOLUMEERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcessD0Ev */
/* Demangled: dolby::DlbCrossfadeProcess::~DlbCrossfadeProcess() */
int _ZN5dolby19DlbCrossfadeProcessD0Ev(void);

/* Symbol: A_NGCS_UPMIX_PLAN_STEREO_TO_5CH1 */
/* Demangled: A_NGCS_UPMIX_PLAN_STEREO_TO_5CH1 */
extern void* A_NGCS_UPMIX_PLAN_STEREO_TO_5CH1;

/* Symbol: DLB_qmf_analysisL_set_slot_increment */
/* Demangled: DLB_qmf_analysisL_set_slot_increment */
int DLB_qmf_analysisL_set_slot_increment(void);

/* Symbol: DAP_CPDP_PVT_sv_coefs_gen */
/* Demangled: DAP_CPDP_PVT_sv_coefs_gen */
int DAP_CPDP_PVT_sv_coefs_gen(void);

/* Symbol: dap_cpdp_pvt_device_processing_supported */
/* Demangled: dap_cpdp_pvt_device_processing_supported */
int dap_cpdp_pvt_device_processing_supported(void);

/* Symbol: DAP_CPDP_PVT_dlb_shift_ex_avg_filter_clear */
/* Demangled: DAP_CPDP_PVT_dlb_shift_ex_avg_filter_clear */
int DAP_CPDP_PVT_dlb_shift_ex_avg_filter_clear(void);

/* Symbol: dlb_fft_fwd_usc_60 */
/* Demangled: dlb_fft_fwd_usc_60 */
int dlb_fft_fwd_usc_60(void);

/* Symbol: dlb_fft_inv_usc_20 */
/* Demangled: dlb_fft_inv_usc_20 */
int dlb_fft_inv_usc_20(void);

/* Symbol: DAP_CPDP_PVT_shuffle_process_inplace */
/* Demangled: DAP_CPDP_PVT_shuffle_process_inplace */
int DAP_CPDP_PVT_shuffle_process_inplace(void);

/* Symbol: DAP_CPDP_PVT_chroma_reset */
/* Demangled: DAP_CPDP_PVT_chroma_reset */
int DAP_CPDP_PVT_chroma_reset(void);

/* Symbol: dap_cpdp_audio_optimizer_bands_set */
/* Demangled: dap_cpdp_audio_optimizer_bands_set */
int dap_cpdp_audio_optimizer_bands_set(void);

/* Symbol: dlb_dct_twiddle_table16_L320_1 */
/* Demangled: dlb_dct_twiddle_table16_L320_1 */
extern void* dlb_dct_twiddle_table16_L320_1;

/* Symbol: _ZN5dolby19AudioBufferProvider3setEP14audio_buffer_s */
/* Demangled: dolby::AudioBufferProvider::set(audio_buffer_s*) */
int _ZN5dolby19AudioBufferProvider3setEP14audio_buffer_s(void);

/* Symbol: dap_cpdp_bass_enhancer_enable_set */
/* Demangled: dap_cpdp_bass_enhancer_enable_set */
int dap_cpdp_bass_enhancer_enable_set(void);

/* Symbol: DAP_CPDP_PVT_regulator_configure */
/* Demangled: DAP_CPDP_PVT_regulator_configure */
int DAP_CPDP_PVT_regulator_configure(void);

/* Symbol: dlb_dct_twiddle_table16_L320_2 */
/* Demangled: dlb_dct_twiddle_table16_L320_2 */
extern void* dlb_dct_twiddle_table16_L320_2;

/* Symbol: DLB_r4_fft_512_s */
/* Demangled: DLB_r4_fft_512_s */
int DLB_r4_fft_512_s(void);

/* Symbol: DAP_CPDP_PVT_MFB_TWID64O */
/* Demangled: DAP_CPDP_PVT_MFB_TWID64O */
extern void* DAP_CPDP_PVT_MFB_TWID64O;

/* Symbol: dlb_dct_twiddle_table16_1_L720 */
/* Demangled: dlb_dct_twiddle_table16_1_L720 */
extern void* dlb_dct_twiddle_table16_1_L720;

/* Symbol: dlb_fft_inv_usc_24 */
/* Demangled: dlb_fft_inv_usc_24 */
int dlb_fft_inv_usc_24(void);

/* Symbol: dlb_fft_fwd_usc_64 */
/* Demangled: dlb_fft_fwd_usc_64 */
int dlb_fft_fwd_usc_64(void);

/* Symbol: DLB_MFB_TWID64E */
/* Demangled: DLB_MFB_TWID64E */
extern void* DLB_MFB_TWID64E;

/* Symbol: dlb_dct_twiddle_table16_L192 */
/* Demangled: dlb_dct_twiddle_table16_L192 */
extern void* dlb_dct_twiddle_table16_L192;

/* Symbol: dlb_dct_twiddle_table16_L288_1 */
/* Demangled: dlb_dct_twiddle_table16_L288_1 */
extern void* dlb_dct_twiddle_table16_L288_1;

/* Symbol: DLB_r4_fft_2048_s */
/* Demangled: DLB_r4_fft_2048_s */
int DLB_r4_fft_2048_s(void);

/* Symbol: dlb_fft_inv_usc_320 */
/* Demangled: dlb_fft_inv_usc_320 */
int dlb_fft_inv_usc_320(void);

/* Symbol: dap_cpdp_virtualizer_height_speaker_angle_set */
/* Demangled: dap_cpdp_virtualizer_height_speaker_angle_set */
int dap_cpdp_virtualizer_height_speaker_angle_set(void);

/* Symbol: DAP_CPDP_PVT_arle_distortion_masking_calculation */
/* Demangled: DAP_CPDP_PVT_arle_distortion_masking_calculation */
int DAP_CPDP_PVT_arle_distortion_masking_calculation(void);

/* Symbol: DAP_CPDP_PVT_sbpp_frame_process */
/* Demangled: DAP_CPDP_PVT_sbpp_frame_process */
int DAP_CPDP_PVT_sbpp_frame_process(void);

/* Symbol: dlb_dct_twiddle_table16_L288_2 */
/* Demangled: dlb_dct_twiddle_table16_L288_2 */
extern void* dlb_dct_twiddle_table16_L288_2;

/* Symbol: dlb_cos_48_ast_mini_twiddle */
/* Demangled: dlb_cos_48_ast_mini_twiddle */
extern void* dlb_cos_48_ast_mini_twiddle;

/* Symbol: _ZTVN5dolby19DapCrossfadeProcessE */
/* Demangled: vtable for dolby::DapCrossfadeProcess */
extern void* _ZTVN5dolby19DapCrossfadeProcessE;

/* Symbol: DAP_CPDP_PVT_de_powmin_state_clear */
/* Demangled: DAP_CPDP_PVT_de_powmin_state_clear */
int DAP_CPDP_PVT_de_powmin_state_clear(void);

/* Symbol: DLB_r4_inv_fft_60 */
/* Demangled: DLB_r4_inv_fft_60 */
int DLB_r4_inv_fft_60(void);

/* Symbol: DAP_CPDP_PVT_dap_pvt_optimizer_configure */
/* Demangled: DAP_CPDP_PVT_dap_pvt_optimizer_configure */
int DAP_CPDP_PVT_dap_pvt_optimizer_configure(void);

/* Symbol: DAP_CPDP_PVT_icsc_close */
/* Demangled: DAP_CPDP_PVT_icsc_close */
int DAP_CPDP_PVT_icsc_close(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSWDAP_H */
