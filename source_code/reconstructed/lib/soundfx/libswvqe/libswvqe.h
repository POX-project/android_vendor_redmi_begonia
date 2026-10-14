/*
 * Reverse-Engineered ABI Specification for: libswvqe.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libswvqe.so
 */

#ifndef BEGONIA_RE_LIBSWVQE_H
#define BEGONIA_RE_LIBSWVQE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: dlb_dct_twiddle_table16_L36_1 */
/* Demangled: dlb_dct_twiddle_table16_L36_1 */
extern void* dlb_dct_twiddle_table16_L36_1;

/* Symbol: dlb_qmf_synthesisS_open */
/* Demangled: dlb_qmf_synthesisS_open */
int dlb_qmf_synthesisS_open(void);

/* Symbol: DLB_blk_Lattack_decay_iir1L_strict */
/* Demangled: DLB_blk_Lattack_decay_iir1L_strict */
int DLB_blk_Lattack_decay_iir1L_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L36_2 */
/* Demangled: dlb_dct_twiddle_table16_L36_2 */
extern void* dlb_dct_twiddle_table16_L36_2;

/* Symbol: DLB_r4_fft_36_s */
/* Demangled: DLB_r4_fft_36_s */
int DLB_r4_fft_36_s(void);

/* Symbol: dlb_fft_inv_usc_480 */
/* Demangled: dlb_fft_inv_usc_480 */
int dlb_fft_inv_usc_480(void);

/* Symbol: dlb_qmf_filter_coeff_P4_32 */
/* Demangled: dlb_qmf_filter_coeff_P4_32 */
extern void* dlb_qmf_filter_coeff_P4_32;

/* Symbol: vlib_transform_copy */
/* Demangled: vlib_transform_copy */
int vlib_transform_copy(void);

/* Symbol: dlb_vec_LsetLU_flex */
/* Demangled: dlb_vec_LsetLU_flex */
int dlb_vec_LsetLU_flex(void);

/* Symbol: _ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_VOLUMEERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_SET_VOLUME(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_VOLUMEERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: dlb_vec_NdotLLU_flex */
/* Demangled: dlb_vec_NdotLLU_flex */
int dlb_vec_NdotLLU_flex(void);

/* Symbol: dlb_fft_inv_usc_768 */
/* Demangled: dlb_fft_inv_usc_768 */
int dlb_fft_inv_usc_768(void);

/* Symbol: dlb_odd_fft_cplx_fwd_usc */
/* Demangled: dlb_odd_fft_cplx_fwd_usc */
extern void* dlb_odd_fft_cplx_fwd_usc;

/* Symbol: dlb_fft_inv_scl_128 */
/* Demangled: dlb_fft_inv_scl_128 */
int dlb_fft_inv_scl_128(void);

/* Symbol: dlb_cos_32_full_twiddle */
/* Demangled: dlb_cos_32_full_twiddle */
extern void* dlb_cos_32_full_twiddle;

/* Symbol: dlb_forwardModulationReal */
/* Demangled: dlb_forwardModulationReal */
int dlb_forwardModulationReal(void);

/* Symbol: dlb_num_of_non_power_two_lengths */
/* Demangled: dlb_num_of_non_power_two_lengths */
extern void* dlb_num_of_non_power_two_lengths;

/* Symbol: DLB_fft_Linv_scaledCL */
/* Demangled: DLB_fft_Linv_scaledCL */
int DLB_fft_Linv_scaledCL(void);

/* Symbol: _ZN5dolby16DapEffectContextC2Ev */
/* Demangled: dolby::DapEffectContext::DapEffectContext() */
int _ZN5dolby16DapEffectContextC2Ev(void);

/* Symbol: dlb_dct_twiddle_table16_1_L320 */
/* Demangled: dlb_dct_twiddle_table16_1_L320 */
extern void* dlb_dct_twiddle_table16_1_L320;

/* Symbol: DLB_r4_fft_384_s */
/* Demangled: DLB_r4_fft_384_s */
int DLB_r4_fft_384_s(void);

/* Symbol: _ZN5dolby16VqeBufferAdapterD0Ev */
/* Demangled: dolby::VqeBufferAdapter::~VqeBufferAdapter() */
int _ZN5dolby16VqeBufferAdapterD0Ev(void);

/* Symbol: vsv_har_open */
/* Demangled: vsv_har_open */
int vsv_har_open(void);

/* Symbol: DLB_blk_refLdelayU */
/* Demangled: DLB_blk_refLdelayU */
int DLB_blk_refLdelayU(void);

/* Symbol: dlb_vec_Sabs_maxSU_flex */
/* Demangled: dlb_vec_Sabs_maxSU_flex */
int dlb_vec_Sabs_maxSU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L480_1 */
/* Demangled: dlb_dct_twiddle_table16_L480_1 */
extern void* dlb_dct_twiddle_table16_L480_1;

/* Symbol: dlb_fft_fwd_scl_12 */
/* Demangled: dlb_fft_fwd_scl_12 */
int dlb_fft_fwd_scl_12(void);

/* Symbol: dlb_qmf_filter_coeff_P5_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_vec_ana;

/* Symbol: vsv_banding_forward_no_tilt */
/* Demangled: vsv_banding_forward_no_tilt */
int vsv_banding_forward_no_tilt(void);

/* Symbol: dlb_dct_twiddle_table16_L480_2 */
/* Demangled: dlb_dct_twiddle_table16_L480_2 */
extern void* dlb_dct_twiddle_table16_L480_2;

/* Symbol: DLB_r4_fft_180 */
/* Demangled: DLB_r4_fft_180 */
int DLB_r4_fft_180(void);

/* Symbol: vsv_trag_open */
/* Demangled: vsv_trag_open */
int vsv_trag_open(void);

/* Symbol: _ZN5dolby13AudioHalUtils9sInstanceE */
/* Demangled: dolby::AudioHalUtils::sInstance */
extern void* _ZN5dolby13AudioHalUtils9sInstanceE;

/* Symbol: dlb_blk_LmixLL_flex */
/* Demangled: dlb_blk_LmixLL_flex */
int dlb_blk_LmixLL_flex(void);

/* Symbol: dlb_fft_fwd_usc_576 */
/* Demangled: dlb_fft_fwd_usc_576 */
int dlb_fft_fwd_usc_576(void);

/* Symbol: DLB_MFB_TWID64O */
/* Demangled: DLB_MFB_TWID64O */
extern void* DLB_MFB_TWID64O;

/* Symbol: vqe_get_out_level */
/* Demangled: vqe_get_out_level */
int vqe_get_out_level(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L120 */
/* Demangled: dlb_dct_twiddle_table16_rev_L120 */
extern void* dlb_dct_twiddle_table16_rev_L120;

/* Symbol: dlb_fft_fwd_scl_15 */
/* Demangled: dlb_fft_fwd_scl_15 */
int dlb_fft_fwd_scl_15(void);

/* Symbol: utlog_add_1d_variable */
/* Demangled: utlog_add_1d_variable */
int utlog_add_1d_variable(void);

/* Symbol: vsv_tx_init */
/* Demangled: vsv_tx_init */
int vsv_tx_init(void);

/* Symbol: _ZN5dolby17GameEffectContextC1Ev */
/* Demangled: dolby::GameEffectContext::GameEffectContext() */
int _ZN5dolby17GameEffectContextC1Ev(void);

/* Symbol: dlb_fft_fwd_usc_720 */
/* Demangled: dlb_fft_fwd_usc_720 */
int dlb_fft_fwd_usc_720(void);

/* Symbol: dlb_fft_fwd_scl_16 */
/* Demangled: dlb_fft_fwd_scl_16 */
int dlb_fft_fwd_scl_16(void);

/* Symbol: dlb_octfile_disk_vtable */
/* Demangled: dlb_octfile_disk_vtable */
extern void* dlb_octfile_disk_vtable;

/* Symbol: DLB_blk_Lattack_decay_iir1L_setup */
/* Demangled: DLB_blk_Lattack_decay_iir1L_setup */
int DLB_blk_Lattack_decay_iir1L_setup(void);

/* Symbol: DLB_r4_inv_fft_16_s */
/* Demangled: DLB_r4_inv_fft_16_s */
int DLB_r4_inv_fft_16_s(void);

/* Symbol: a_shift_table_MDXT_160x160x41_16000_tab */
/* Demangled: a_shift_table_MDXT_160x160x41_16000_tab */
extern void* a_shift_table_MDXT_160x160x41_16000_tab;

/* Symbol: DLB_blk_LsaddLL_strict */
/* Demangled: DLB_blk_LsaddLL_strict */
int DLB_blk_LsaddLL_strict(void);

/* Symbol: _ZN5dolby19VqeCrossfadeProcess7processEPNS_14BufferProviderES2_ */
/* Demangled: dolby::VqeCrossfadeProcess::process(dolby::BufferProvider*, dolby::BufferProvider*) */
int _ZN5dolby19VqeCrossfadeProcess7processEPNS_14BufferProviderES2_(void);

/* Symbol: _ZN5dolby9DlbEffect25handle_EFFECT_CMD_OFFLOADERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_OFFLOAD(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect25handle_EFFECT_CMD_OFFLOADERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: DLB_blk_Liir2ssv3aLU_inplace */
/* Demangled: DLB_blk_Liir2ssv3aLU_inplace */
int DLB_blk_Liir2ssv3aLU_inplace(void);

/* Symbol: dlb_blk_delayL_flex */
/* Demangled: dlb_blk_delayL_flex */
int dlb_blk_delayL_flex(void);

/* Symbol: vsv_asa_get_snr */
/* Demangled: vsv_asa_get_snr */
int vsv_asa_get_snr(void);

/* Symbol: vqe_get_snr */
/* Demangled: vqe_get_snr */
int vqe_get_snr(void);

/* Symbol: DLB_vec_LshlLIU_strict */
/* Demangled: DLB_vec_LshlLIU_strict */
int DLB_vec_LshlLIU_strict(void);

/* Symbol: dlb_CLmixCLCLSSU_flex */
/* Demangled: dlb_CLmixCLCLSSU_flex */
int dlb_CLmixCLCLSSU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L960 */
/* Demangled: dlb_dct_twiddle_table16_L960 */
extern void* dlb_dct_twiddle_table16_L960;

/* Symbol: DLB_fft_Linv_unscaledCL */
/* Demangled: DLB_fft_Linv_unscaledCL */
int DLB_fft_Linv_unscaledCL(void);

/* Symbol: dlb_wave_octfile_write */
/* Demangled: dlb_wave_octfile_write */
int dlb_wave_octfile_write(void);

/* Symbol: _ZN5dolby13EffectContextD2Ev */
/* Demangled: dolby::EffectContext::~EffectContext() */
int _ZN5dolby13EffectContextD2Ev(void);

/* Symbol: DLB_BLmaxBLL_strict */
/* Demangled: DLB_BLmaxBLL_strict */
int DLB_BLmaxBLL_strict(void);

/* Symbol: DLB_qmf_analysisS_close */
/* Demangled: DLB_qmf_analysisS_close */
int DLB_qmf_analysisS_close(void);

/* Symbol: DLB_qmf_synthesisS_init */
/* Demangled: DLB_qmf_synthesisS_init */
int DLB_qmf_synthesisS_init(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L128 */
/* Demangled: dlb_dct_twiddle_table16_rev_L128 */
extern void* dlb_dct_twiddle_table16_rev_L128;

/* Symbol: dlb_fft_inv_scl_960 */
/* Demangled: dlb_fft_inv_scl_960 */
int dlb_fft_inv_scl_960(void);

/* Symbol: _ZN5dolby17GameEffectContext9setDeviceE15audio_devices_t */
/* Demangled: dolby::GameEffectContext::setDevice(audio_devices_t) */
int _ZN5dolby17GameEffectContext9setDeviceE15audio_devices_t(void);

/* Symbol: dlb_blk_Liir2ssv2L_inplace_flex */
/* Demangled: dlb_blk_Liir2ssv2L_inplace_flex */
int dlb_blk_Liir2ssv2L_inplace_flex(void);

/* Symbol: dlb_qmf_analysisS_open */
/* Demangled: dlb_qmf_analysisS_open */
int dlb_qmf_analysisS_open(void);

/* Symbol: _ZN5dolby10BufferSink7consumeERNS_12BufferSourceEi */
/* Demangled: dolby::BufferSink::consume(dolby::BufferSource&, int) */
int _ZN5dolby10BufferSink7consumeERNS_12BufferSourceEi(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L288 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L288 */
extern void* dlb_dct_twiddle_table16_rev_1_L288;

/* Symbol: _ZTVN5dolby16VqeBufferAdapterE */
/* Demangled: vtable for dolby::VqeBufferAdapter */
extern void* _ZTVN5dolby16VqeBufferAdapterE;

/* Symbol: vsv_ml_process */
/* Demangled: vsv_ml_process */
int vsv_ml_process(void);

/* Symbol: DLB_blk_LmixLLL_strict */
/* Demangled: DLB_blk_LmixLLL_strict */
int DLB_blk_LmixLLL_strict(void);

/* Symbol: DLB_CLmpy_recipCLLIU_strict */
/* Demangled: DLB_CLmpy_recipCLLIU_strict */
int DLB_CLmpy_recipCLLIU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L15_1 */
/* Demangled: dlb_dct_twiddle_table16_L15_1 */
extern void* dlb_dct_twiddle_table16_L15_1;

/* Symbol: DLB_r4_fft_4096 */
/* Demangled: DLB_r4_fft_4096 */
int DLB_r4_fft_4096(void);

/* Symbol: datalog_open */
/* Demangled: datalog_open */
int datalog_open(void);

/* Symbol: DLB_CLzeroCLU_strict */
/* Demangled: DLB_CLzeroCLU_strict */
int DLB_CLzeroCLU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L15_2 */
/* Demangled: dlb_dct_twiddle_table16_L15_2 */
extern void* dlb_dct_twiddle_table16_L15_2;

/* Symbol: dlb_dct_twiddle_table16_L48_1 */
/* Demangled: dlb_dct_twiddle_table16_L48_1 */
extern void* dlb_dct_twiddle_table16_L48_1;

/* Symbol: DLB_r4_fft_15_s */
/* Demangled: DLB_r4_fft_15_s */
int DLB_r4_fft_15_s(void);

/* Symbol: vlib_transform_inverse */
/* Demangled: vlib_transform_inverse */
int vlib_transform_inverse(void);

/* Symbol: DLB_vec_LmaskLSU_strict */
/* Demangled: DLB_vec_LmaskLSU_strict */
int DLB_vec_LmaskLSU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L48_2 */
/* Demangled: dlb_dct_twiddle_table16_L48_2 */
extern void* dlb_dct_twiddle_table16_L48_2;

/* Symbol: DLB_r4_fft_48_s */
/* Demangled: DLB_r4_fft_48_s */
int DLB_r4_fft_48_s(void);

/* Symbol: DLB_Lqmf_synthesisCL */
/* Demangled: DLB_Lqmf_synthesisCL */
int DLB_Lqmf_synthesisCL(void);

/* Symbol: DLB_qmf_synthesisS_set_slot_increment */
/* Demangled: DLB_qmf_synthesisS_set_slot_increment */
int DLB_qmf_synthesisS_set_slot_increment(void);

/* Symbol: a_twist_table_CQMF_080x080x33_08000_tab */
/* Demangled: a_twist_table_CQMF_080x080x33_08000_tab */
extern void* a_twist_table_CQMF_080x080x33_08000_tab;

/* Symbol: dft_close */
/* Demangled: dft_close */
int dft_close(void);

/* Symbol: vsv_mixer_ctrl_cleanup */
/* Demangled: vsv_mixer_ctrl_cleanup */
int vsv_mixer_ctrl_cleanup(void);

/* Symbol: dlb_fft_fwd_usc_160 */
/* Demangled: dlb_fft_fwd_usc_160 */
int dlb_fft_fwd_usc_160(void);

/* Symbol: _ZN5dolby10IEffectDlb16EffectDlbFactoryEv */
/* Demangled: dolby::IEffectDlb::EffectDlbFactory() */
int _ZN5dolby10IEffectDlb16EffectDlbFactoryEv(void);

/* Symbol: _ZN5dolby16DapEffectContext14setParamValuesEPvj */
/* Demangled: dolby::DapEffectContext::setParamValues(void*, unsigned int) */
int _ZN5dolby16DapEffectContext14setParamValuesEPvj(void);

/* Symbol: _ZTVN5dolby16DapEffectContext18DlbDapEffCallbacksE */
/* Demangled: vtable for dolby::DapEffectContext::DlbDapEffCallbacks */
extern void* _ZTVN5dolby16DapEffectContext18DlbDapEffCallbacksE;

/* Symbol: _ZN5dolby13AudioHalUtils14restoreProfileEv */
/* Demangled: dolby::AudioHalUtils::restoreProfile() */
int _ZN5dolby13AudioHalUtils14restoreProfileEv(void);

/* Symbol: DLB_r4_inv_fft_80_s */
/* Demangled: DLB_r4_inv_fft_80_s */
int DLB_r4_inv_fft_80_s(void);

/* Symbol: dlb_fft_fwd_usc_20 */
/* Demangled: dlb_fft_fwd_usc_20 */
int dlb_fft_fwd_usc_20(void);

/* Symbol: dlb_fft_fwd_usc_2048 */
/* Demangled: dlb_fft_fwd_usc_2048 */
int dlb_fft_fwd_usc_2048(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_16_vec_ana;

/* Symbol: vqe_get_clipping */
/* Demangled: vqe_get_clipping */
int vqe_get_clipping(void);

/* Symbol: a_shift_table_MDFT_160x160x41_16000_tab */
/* Demangled: a_shift_table_MDFT_160x160x41_16000_tab */
extern void* a_shift_table_MDFT_160x160x41_16000_tab;

/* Symbol: vqe_get_agc_gain */
/* Demangled: vqe_get_agc_gain */
int vqe_get_agc_gain(void);

/* Symbol: dlb_fft_inv_usc_12 */
/* Demangled: dlb_fft_inv_usc_12 */
int dlb_fft_inv_usc_12(void);

/* Symbol: dlb_fft_cplx_fwd_scl */
/* Demangled: dlb_fft_cplx_fwd_scl */
extern void* dlb_fft_cplx_fwd_scl;

/* Symbol: vsv_banding_inverse */
/* Demangled: vsv_banding_inverse */
int vsv_banding_inverse(void);

/* Symbol: vsv_tx_close */
/* Demangled: vsv_tx_close */
int vsv_tx_close(void);

/* Symbol: DLB_r4_fft_512_s */
/* Demangled: DLB_r4_fft_512_s */
int DLB_r4_fft_512_s(void);

/* Symbol: DLB_r4_cplx_inv_scaled */
/* Demangled: DLB_r4_cplx_inv_scaled */
int DLB_r4_cplx_inv_scaled(void);

/* Symbol: DLB_CLqmf_analysisL */
/* Demangled: DLB_CLqmf_analysisL */
int DLB_CLqmf_analysisL(void);

/* Symbol: vqe_get_ml_continue_decision */
/* Demangled: vqe_get_ml_continue_decision */
int vqe_get_ml_continue_decision(void);

/* Symbol: DLB_vec_UnormLU_strict */
/* Demangled: DLB_vec_UnormLU_strict */
int DLB_vec_UnormLU_strict(void);

/* Symbol: dlb_fft_fwd_usc_24 */
/* Demangled: dlb_fft_fwd_usc_24 */
int dlb_fft_fwd_usc_24(void);

/* Symbol: DLB_CLmpy_shlCLSIU_strict */
/* Demangled: DLB_CLmpy_shlCLSIU_strict */
int DLB_CLmpy_shlCLSIU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L180 */
/* Demangled: dlb_dct_twiddle_table16_1_L180 */
extern void* dlb_dct_twiddle_table16_1_L180;

/* Symbol: DLB_r4_fft_720_s */
/* Demangled: DLB_r4_fft_720_s */
int DLB_r4_fft_720_s(void);

/* Symbol: dlb_fft_inv_usc_15 */
/* Demangled: dlb_fft_inv_usc_15 */
int dlb_fft_inv_usc_15(void);

/* Symbol: dlb_cos_64_full_twiddle */
/* Demangled: dlb_cos_64_full_twiddle */
extern void* dlb_cos_64_full_twiddle;

/* Symbol: dlb_dct_twiddle_table16_rev_L960 */
/* Demangled: dlb_dct_twiddle_table16_rev_L960 */
extern void* dlb_dct_twiddle_table16_rev_L960;

/* Symbol: dlb_dct_twiddle_table16_L120_1 */
/* Demangled: dlb_dct_twiddle_table16_L120_1 */
extern void* dlb_dct_twiddle_table16_L120_1;

/* Symbol: dlb_fft_inv_usc_16 */
/* Demangled: dlb_fft_inv_usc_16 */
int dlb_fft_inv_usc_16(void);

/* Symbol: a_twist_table_MDCT_080x080x33_08000_tab */
/* Demangled: a_twist_table_MDCT_080x080x33_08000_tab */
extern void* a_twist_table_MDCT_080x080x33_08000_tab;

/* Symbol: utlog_set_pdata */
/* Demangled: utlog_set_pdata */
int utlog_set_pdata(void);

/* Symbol: dlb_blk_Lconst_flex */
/* Demangled: dlb_blk_Lconst_flex */
int dlb_blk_Lconst_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L120_2 */
/* Demangled: dlb_dct_twiddle_table16_L120_2 */
extern void* dlb_dct_twiddle_table16_L120_2;

/* Symbol: dlb_riff_chunk_handler_new */
/* Demangled: dlb_riff_chunk_handler_new */
int dlb_riff_chunk_handler_new(void);

/* Symbol: dlb_fft_inv_scl_2048 */
/* Demangled: dlb_fft_inv_scl_2048 */
int dlb_fft_inv_scl_2048(void);

/* Symbol: process_Phase90Hilbert */
/* Demangled: process_Phase90Hilbert */
int process_Phase90Hilbert(void);

/* Symbol: _ZN5dolby17DlbBufferProviderC2Ev */
/* Demangled: dolby::DlbBufferProvider::DlbBufferProvider() */
int _ZN5dolby17DlbBufferProviderC2Ev(void);

/* Symbol: DLB_blk_Lfir2L_set_coef */
/* Demangled: DLB_blk_Lfir2L_set_coef */
int DLB_blk_Lfir2L_set_coef(void);

/* Symbol: dlb_blk_Liir2ssv2_shlLU_flex */
/* Demangled: dlb_blk_Liir2ssv2_shlLU_flex */
int dlb_blk_Liir2ssv2_shlLU_flex(void);

/* Symbol: dlb_cos_8_full_scl */
/* Demangled: dlb_cos_8_full_scl */
extern void* dlb_cos_8_full_scl;

/* Symbol: vsv_agc_open */
/* Demangled: vsv_agc_open */
int vsv_agc_open(void);

/* Symbol: DLB_blk_LfirUL_set_coef */
/* Demangled: DLB_blk_LfirUL_set_coef */
int DLB_blk_LfirUL_set_coef(void);

/* Symbol: dlb_blk_LsubLL_flex */
/* Demangled: dlb_blk_LsubLL_flex */
int dlb_blk_LsubLL_flex(void);

/* Symbol: DLB_r4_rsplit_fft_nn */
/* Demangled: DLB_r4_rsplit_fft_nn */
int DLB_r4_rsplit_fft_nn(void);

/* Symbol: DLB_CLqmf_analysisS */
/* Demangled: DLB_CLqmf_analysisS */
int DLB_CLqmf_analysisS(void);

/* Symbol: vsv_asa_obj_level */
/* Demangled: vsv_asa_obj_level */
int vsv_asa_obj_level(void);

/* Symbol: DLB_BLmaxBLL_inplace_strict */
/* Demangled: DLB_BLmaxBLL_inplace_strict */
int DLB_BLmaxBLL_inplace_strict(void);

/* Symbol: DLB_r4_inv_fft_320 */
/* Demangled: DLB_r4_inv_fft_320 */
int DLB_r4_inv_fft_320(void);

/* Symbol: _ZN5dolby18VoiceEffectContextD1Ev */
/* Demangled: dolby::VoiceEffectContext::~VoiceEffectContext() */
int _ZN5dolby18VoiceEffectContextD1Ev(void);

/* Symbol: dlb_blk_Lfir2L_flex */
/* Demangled: dlb_blk_Lfir2L_flex */
int dlb_blk_Lfir2L_flex(void);

/* Symbol: DLB_blk_Liir1xL_strict */
/* Demangled: DLB_blk_Liir1xL_strict */
int DLB_blk_Liir1xL_strict(void);

/* Symbol: DLB_CLmix4CL4SU_strict */
/* Demangled: DLB_CLmix4CL4SU_strict */
int DLB_CLmix4CL4SU_strict(void);

/* Symbol: DLB_r4_fft_20_s */
/* Demangled: DLB_r4_fft_20_s */
int DLB_r4_fft_20_s(void);

/* Symbol: dlb_fft_fwd_scl_20 */
/* Demangled: dlb_fft_fwd_scl_20 */
int dlb_fft_fwd_scl_20(void);

/* Symbol: getRequiredBufferSize_Phase90Hilbert */
/* Demangled: getRequiredBufferSize_Phase90Hilbert */
int getRequiredBufferSize_Phase90Hilbert(void);

/* Symbol: AELI */
/* Demangled: AELI */
extern void* AELI;

/* Symbol: DLB_r4_fft_160_s */
/* Demangled: DLB_r4_fft_160_s */
int DLB_r4_fft_160_s(void);

/* Symbol: DLB_r4_rsplit_fft_nn_s */
/* Demangled: DLB_r4_rsplit_fft_nn_s */
int DLB_r4_rsplit_fft_nn_s(void);

/* Symbol: dlb_blk_Liir2ssv3L_inplace_flex */
/* Demangled: dlb_blk_Liir2ssv3L_inplace_flex */
int dlb_blk_Liir2ssv3L_inplace_flex(void);

/* Symbol: dlb_fft_fwd_scl_640 */
/* Demangled: dlb_fft_fwd_scl_640 */
int dlb_fft_fwd_scl_640(void);

/* Symbol: dlb_fft_inv_scl_12 */
/* Demangled: dlb_fft_inv_scl_12 */
int dlb_fft_inv_scl_12(void);

/* Symbol: dlb_dct_twiddle_table16_L512_cos */
/* Demangled: dlb_dct_twiddle_table16_L512_cos */
extern void* dlb_dct_twiddle_table16_L512_cos;

/* Symbol: _ZN5dolby10VqeProcessD0Ev */
/* Demangled: dolby::VqeProcess::~VqeProcess() */
int _ZN5dolby10VqeProcessD0Ev(void);

/* Symbol: dlb_CLmpyCLVSU_flex */
/* Demangled: dlb_CLmpyCLVSU_flex */
int dlb_CLmpyCLVSU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L576_1 */
/* Demangled: dlb_dct_twiddle_table16_L576_1 */
extern void* dlb_dct_twiddle_table16_L576_1;

/* Symbol: dlb_wave_read_data */
/* Demangled: dlb_wave_read_data */
int dlb_wave_read_data(void);

/* Symbol: DLB_blk_Liir2ssv1L_strict */
/* Demangled: DLB_blk_Liir2ssv1L_strict */
int DLB_blk_Liir2ssv1L_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L576_2 */
/* Demangled: dlb_dct_twiddle_table16_L576_2 */
extern void* dlb_dct_twiddle_table16_L576_2;

/* Symbol: DLB_r4_inv_fft_640_s */
/* Demangled: DLB_r4_inv_fft_640_s */
int DLB_r4_inv_fft_640_s(void);

/* Symbol: dlb_fft_fwd_scl_24 */
/* Demangled: dlb_fft_fwd_scl_24 */
int dlb_fft_fwd_scl_24(void);

/* Symbol: vsv_agc_cleanup */
/* Demangled: vsv_agc_cleanup */
int vsv_agc_cleanup(void);

/* Symbol: _ZN5dolby13AudioHalUtilsD1Ev */
/* Demangled: dolby::AudioHalUtils::~AudioHalUtils() */
int _ZN5dolby13AudioHalUtilsD1Ev(void);

/* Symbol: DLB_blk_LmixLLLL_strict */
/* Demangled: DLB_blk_LmixLLLL_strict */
int DLB_blk_LmixLLLL_strict(void);

/* Symbol: DLB_r4_fft_192 */
/* Demangled: DLB_r4_fft_192 */
int DLB_r4_fft_192(void);

/* Symbol: dlb_fft_inv_scl_15 */
/* Demangled: dlb_fft_inv_scl_15 */
int dlb_fft_inv_scl_15(void);

/* Symbol: DLB_hybrid_synthesisCL_init */
/* Demangled: DLB_hybrid_synthesisCL_init */
int DLB_hybrid_synthesisCL_init(void);

/* Symbol: dlb_octfile_write */
/* Demangled: dlb_octfile_write */
int dlb_octfile_write(void);

/* Symbol: dlb_riff_chunk_size */
/* Demangled: dlb_riff_chunk_size */
int dlb_riff_chunk_size(void);

/* Symbol: vqe_get_vad_count */
/* Demangled: vqe_get_vad_count */
int vqe_get_vad_count(void);

/* Symbol: vqe_get_vad_count_for_output */
/* Demangled: vqe_get_vad_count_for_output */
int vqe_get_vad_count_for_output(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L576 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L576 */
extern void* dlb_dct_twiddle_table16_rev_1_L576;

/* Symbol: DLB_r4_inv_fft_6_s */
/* Demangled: DLB_r4_inv_fft_6_s */
int DLB_r4_inv_fft_6_s(void);

/* Symbol: dlb_fft_inv_usc_640 */
/* Demangled: dlb_fft_inv_usc_640 */
int dlb_fft_inv_usc_640(void);

/* Symbol: dlb_fft_inv_scl_16 */
/* Demangled: dlb_fft_inv_scl_16 */
int dlb_fft_inv_scl_16(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcess10setEnabledEb */
/* Demangled: dolby::DlbCrossfadeProcess::setEnabled(bool) */
int _ZN5dolby19DlbCrossfadeProcess10setEnabledEb(void);

/* Symbol: vsv_trag_close */
/* Demangled: vsv_trag_close */
int vsv_trag_close(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L90 */
/* Demangled: dlb_dct_twiddle_table16_rev_L90 */
extern void* dlb_dct_twiddle_table16_rev_L90;

/* Symbol: DLB_r4_fft_2_s */
/* Demangled: DLB_r4_fft_2_s */
int DLB_r4_fft_2_s(void);

/* Symbol: DLB_fft_shutdown */
/* Demangled: DLB_fft_shutdown */
int DLB_fft_shutdown(void);

/* Symbol: a_twist_table_MDXT_080x080x33_08000_tab */
/* Demangled: a_twist_table_MDXT_080x080x33_08000_tab */
extern void* a_twist_table_MDXT_080x080x33_08000_tab;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L720 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L720 */
extern void* dlb_dct_twiddle_table16_rev_1_L720;

/* Symbol: DLB_r4_inv_fft_360_s */
/* Demangled: DLB_r4_inv_fft_360_s */
int DLB_r4_inv_fft_360_s(void);

/* Symbol: a_twist_table_CQMF_640x640x56_32000_tab */
/* Demangled: a_twist_table_CQMF_640x640x56_32000_tab */
extern void* a_twist_table_CQMF_640x640x56_32000_tab;

/* Symbol: dlb_fft_fwd_scl_360 */
/* Demangled: dlb_fft_fwd_scl_360 */
int dlb_fft_fwd_scl_360(void);

/* Symbol: vsv_mixer_ctrl_process */
/* Demangled: vsv_mixer_ctrl_process */
int vsv_mixer_ctrl_process(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_32_vec_syn;

/* Symbol: dlb_dct_twiddle_table16_L4_cos */
/* Demangled: dlb_dct_twiddle_table16_L4_cos */
extern void* dlb_dct_twiddle_table16_L4_cos;

/* Symbol: _ZN5dolby19DlbCrossfadeProcess20updateProcessEnabledEv */
/* Demangled: dolby::DlbCrossfadeProcess::updateProcessEnabled() */
int _ZN5dolby19DlbCrossfadeProcess20updateProcessEnabledEv(void);

/* Symbol: vsv_gain_scalar_gain_real_data */
/* Demangled: vsv_gain_scalar_gain_real_data */
int vsv_gain_scalar_gain_real_data(void);

/* Symbol: _ZTCN5dolby13EffectContext17DmsDeathRecipientE0_N7android8hardware20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-dolby::EffectContext::DmsDeathRecipient */
extern void* _ZTCN5dolby13EffectContext17DmsDeathRecipientE0_N7android8hardware20hidl_death_recipientE;

/* Symbol: DLB_blk_Lmix_shlULLLL_strict */
/* Demangled: DLB_blk_Lmix_shlULLLL_strict */
int DLB_blk_Lmix_shlULLLL_strict(void);

/* Symbol: dlb_fft_fwd_scl_1024 */
/* Demangled: dlb_fft_fwd_scl_1024 */
int dlb_fft_fwd_scl_1024(void);

/* Symbol: dlb_fft_inv_scl_2 */
/* Demangled: dlb_fft_inv_scl_2 */
int dlb_fft_inv_scl_2(void);

/* Symbol: DLB_MFB_TWID256E */
/* Demangled: DLB_MFB_TWID256E */
extern void* DLB_MFB_TWID256E;

/* Symbol: DLB_hybrid_analysisCL_init */
/* Demangled: DLB_hybrid_analysisCL_init */
int DLB_hybrid_analysisCL_init(void);

/* Symbol: DLB_CLmfb_p10km_analysisL_legacy_twiddle */
/* Demangled: DLB_CLmfb_p10km_analysisL_legacy_twiddle */
int DLB_CLmfb_p10km_analysisL_legacy_twiddle(void);

/* Symbol: DLB_r4_cplx_fwd_unscaled */
/* Demangled: DLB_r4_cplx_fwd_unscaled */
int DLB_r4_cplx_fwd_unscaled(void);

/* Symbol: dlb_blk_Lattack_decay_iir1L_flex */
/* Demangled: dlb_blk_Lattack_decay_iir1L_flex */
int dlb_blk_Lattack_decay_iir1L_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L96 */
/* Demangled: dlb_dct_twiddle_table16_rev_L96 */
extern void* dlb_dct_twiddle_table16_rev_L96;

/* Symbol: dlb_fft_inv_usc_360 */
/* Demangled: dlb_fft_inv_usc_360 */
int dlb_fft_inv_usc_360(void);

/* Symbol: dlb_fft_inv_scl_4 */
/* Demangled: dlb_fft_inv_scl_4 */
int dlb_fft_inv_scl_4(void);

/* Symbol: dlb_dct4_premodulation */
/* Demangled: dlb_dct4_premodulation */
int dlb_dct4_premodulation(void);

/* Symbol: _ZTVN5dolby9EffectVqeE */
/* Demangled: vtable for dolby::EffectVqe */
extern void* _ZTVN5dolby9EffectVqeE;

/* Symbol: _ZN5dolby19DlbCrossfadeProcess9configureEii14audio_format_t20audio_channel_mask_tS2_ */
/* Demangled: dolby::DlbCrossfadeProcess::configure(int, int, audio_format_t, audio_channel_mask_t, audio_channel_mask_t) */
int _ZN5dolby19DlbCrossfadeProcess9configureEii14audio_format_t20audio_channel_mask_tS2_(void);

/* Symbol: a_twist_table_CQMF_320x320x49_32000_tab */
/* Demangled: a_twist_table_CQMF_320x320x49_32000_tab */
extern void* a_twist_table_CQMF_320x320x49_32000_tab;

/* Symbol: _ZN5dolby13EffectContext4initEv */
/* Demangled: dolby::EffectContext::init() */
int _ZN5dolby13EffectContext4initEv(void);

/* Symbol: dlb_vec_UnormSU_flex */
/* Demangled: dlb_vec_UnormSU_flex */
int dlb_vec_UnormSU_flex(void);

/* Symbol: dlb_fft_inv_scl_6 */
/* Demangled: dlb_fft_inv_scl_6 */
int dlb_fft_inv_scl_6(void);

/* Symbol: DLB_fft_is_supported */
/* Demangled: DLB_fft_is_supported */
int DLB_fft_is_supported(void);

/* Symbol: vqe_reset */
/* Demangled: vqe_reset */
int vqe_reset(void);

/* Symbol: DLB_blk_LfirUL_setup */
/* Demangled: DLB_blk_LfirUL_setup */
int DLB_blk_LfirUL_setup(void);

/* Symbol: dlb_dct_twiddle_table16_1_L12 */
/* Demangled: dlb_dct_twiddle_table16_1_L12 */
extern void* dlb_dct_twiddle_table16_1_L12;

/* Symbol: dlb_fft_inv_scl_8 */
/* Demangled: dlb_fft_inv_scl_8 */
int dlb_fft_inv_scl_8(void);

/* Symbol: _ZTCN5dolby16DapEffectContext18DlbDapEffCallbacksE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-dolby::DapEffectContext::DlbDapEffCallbacks */
extern void* _ZTCN5dolby16DapEffectContext18DlbDapEffCallbacksE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: dlb_CLmix4CL4SU_flex */
/* Demangled: dlb_CLmix4CL4SU_flex */
int dlb_CLmix4CL4SU_flex(void);

/* Symbol: DLB_r4_inv_fft_12 */
/* Demangled: DLB_r4_inv_fft_12 */
int DLB_r4_inv_fft_12(void);

/* Symbol: _ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_CONFIGERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_SET_CONFIG(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_CONFIGERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcessD0Ev */
/* Demangled: dolby::DlbCrossfadeProcess::~DlbCrossfadeProcess() */
int _ZN5dolby19DlbCrossfadeProcessD0Ev(void);

/* Symbol: dlb_dct_twiddle_table16_L32_1 */
/* Demangled: dlb_dct_twiddle_table16_L32_1 */
extern void* dlb_dct_twiddle_table16_L32_1;

/* Symbol: dlb_fft_fwd_scl_512 */
/* Demangled: dlb_fft_fwd_scl_512 */
int dlb_fft_fwd_scl_512(void);

/* Symbol: _ZN5dolby18VoiceEffectContext9setVolumeEiPKj */
/* Demangled: dolby::VoiceEffectContext::setVolume(int, unsigned int const*) */
int _ZN5dolby18VoiceEffectContext9setVolumeEiPKj(void);

/* Symbol: _ZN5dolby9DlbEffect25handle_EFFECT_CMD_DISABLEERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_DISABLE(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect25handle_EFFECT_CMD_DISABLEERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: DLB_blk_Liir2df1L_strict */
/* Demangled: DLB_blk_Liir2df1L_strict */
int DLB_blk_Liir2df1L_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L15 */
/* Demangled: dlb_dct_twiddle_table16_1_L15 */
extern void* dlb_dct_twiddle_table16_1_L15;

/* Symbol: dlb_dct_twiddle_table16_L32_2 */
/* Demangled: dlb_dct_twiddle_table16_L32_2 */
extern void* dlb_dct_twiddle_table16_L32_2;

/* Symbol: DLB_r4_fft_32_s */
/* Demangled: DLB_r4_fft_32_s */
int DLB_r4_fft_32_s(void);

/* Symbol: dlb_riff_octfile_write */
/* Demangled: dlb_riff_octfile_write */
int dlb_riff_octfile_write(void);

/* Symbol: vstack_alloc */
/* Demangled: vstack_alloc */
int vstack_alloc(void);

/* Symbol: DLB_blk_Lmix_shlaL_strict */
/* Demangled: DLB_blk_Lmix_shlaL_strict */
int DLB_blk_Lmix_shlaL_strict(void);

/* Symbol: DLB_CLmpyCLVSU_strict */
/* Demangled: DLB_CLmpyCLVSU_strict */
int DLB_CLmpyCLVSU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L16 */
/* Demangled: dlb_dct_twiddle_table16_1_L16 */
extern void* dlb_dct_twiddle_table16_1_L16;

/* Symbol: DLB_r4_inv_fft_15 */
/* Demangled: DLB_r4_inv_fft_15 */
int DLB_r4_inv_fft_15(void);

/* Symbol: dlb_fft_fwd_usc_30 */
/* Demangled: dlb_fft_fwd_usc_30 */
int dlb_fft_fwd_usc_30(void);

/* Symbol: dlb_fft_inv_usc_20 */
/* Demangled: dlb_fft_inv_usc_20 */
int dlb_fft_inv_usc_20(void);

/* Symbol: dlb_dct_twiddle_table16_L640_cos */
/* Demangled: dlb_dct_twiddle_table16_L640_cos */
extern void* dlb_dct_twiddle_table16_L640_cos;

/* Symbol: dlb_dct_twiddle_table16_L90 */
/* Demangled: dlb_dct_twiddle_table16_L90 */
extern void* dlb_dct_twiddle_table16_L90;

/* Symbol: DLB_r4_inv_fft_16 */
/* Demangled: DLB_r4_inv_fft_16 */
int DLB_r4_inv_fft_16(void);

/* Symbol: dlb_riff_open_read */
/* Demangled: dlb_riff_open_read */
int dlb_riff_open_read(void);

/* Symbol: dft_fwd_unscaled */
/* Demangled: dft_fwd_unscaled */
int dft_fwd_unscaled(void);

/* Symbol: a_twist_table_MDFT_080x080x33_08000_tab */
/* Demangled: a_twist_table_MDFT_080x080x33_08000_tab */
extern void* a_twist_table_MDFT_080x080x33_08000_tab;

/* Symbol: DLB_blk_Lmix_shlaL */
/* Demangled: DLB_blk_Lmix_shlaL */
int DLB_blk_Lmix_shlaL(void);

/* Symbol: dlb_CLcopyCLU_flex */
/* Demangled: dlb_CLcopyCLU_flex */
int dlb_CLcopyCLU_flex(void);

/* Symbol: dlb_fft_fwd_usc_32 */
/* Demangled: dlb_fft_fwd_usc_32 */
int dlb_fft_fwd_usc_32(void);

/* Symbol: dlb_fft_inv_usc_512 */
/* Demangled: dlb_fft_inv_usc_512 */
int dlb_fft_inv_usc_512(void);

/* Symbol: _ZN5dolby10VqeProcess8setParamEiPKii */
/* Demangled: dolby::VqeProcess::setParam(int, int const*, int) */
int _ZN5dolby10VqeProcess8setParamEiPKii(void);

/* Symbol: vqe_get_asa_theta_gain */
/* Demangled: vqe_get_asa_theta_gain */
int vqe_get_asa_theta_gain(void);

/* Symbol: vsv_force_tx */
/* Demangled: vsv_force_tx */
int vsv_force_tx(void);

/* Symbol: _ZN5dolby16DapEffectContext15updateDapParamsEv */
/* Demangled: dolby::DapEffectContext::updateDapParams() */
int _ZN5dolby16DapEffectContext15updateDapParamsEv(void);

/* Symbol: DLB_r4_inv_fft_180 */
/* Demangled: DLB_r4_inv_fft_180 */
int DLB_r4_inv_fft_180(void);

/* Symbol: utlog_close */
/* Demangled: utlog_close */
int utlog_close(void);

/* Symbol: dlb_dct_twiddle_table16_L144 */
/* Demangled: dlb_dct_twiddle_table16_L144 */
extern void* dlb_dct_twiddle_table16_L144;

/* Symbol: dlb_fft_inv_usc_24 */
/* Demangled: dlb_fft_inv_usc_24 */
int dlb_fft_inv_usc_24(void);

/* Symbol: DLB_hybrid_synthesisCL_close */
/* Demangled: DLB_hybrid_synthesisCL_close */
int DLB_hybrid_synthesisCL_close(void);

/* Symbol: dlb_wave_octfile_read */
/* Demangled: dlb_wave_octfile_read */
int dlb_wave_octfile_read(void);

/* Symbol: vsv_banding_get_cfg */
/* Demangled: vsv_banding_get_cfg */
int vsv_banding_get_cfg(void);

/* Symbol: a_twist_table_CQMF_480x480x54_48000_tab */
/* Demangled: a_twist_table_CQMF_480x480x54_48000_tab */
extern void* a_twist_table_CQMF_480x480x54_48000_tab;

/* Symbol: dlb_fft_fwd_usc_36 */
/* Demangled: dlb_fft_fwd_usc_36 */
int dlb_fft_fwd_usc_36(void);

/* Symbol: DLB_load_mfb_p10km_analysisL_filter_state */
/* Demangled: DLB_load_mfb_p10km_analysisL_filter_state */
int DLB_load_mfb_p10km_analysisL_filter_state(void);

/* Symbol: _ZN5dolby9DlbEffect6createEPK12audio_uuid_siiPPP18effect_interface_s */
/* Demangled: dolby::DlbEffect::create(audio_uuid_s const*, int, int, effect_interface_s***) */
int _ZN5dolby9DlbEffect6createEPK12audio_uuid_siiPPP18effect_interface_s(void);

/* Symbol: _ZN5dolby9EffectVqe10setEnabledEb */
/* Demangled: dolby::EffectVqe::setEnabled(bool) */
int _ZN5dolby9EffectVqe10setEnabledEb(void);

/* Symbol: vsv_agc_process */
/* Demangled: vsv_agc_process */
int vsv_agc_process(void);

/* Symbol: dlb_CLCLmix7CL14SU_flex */
/* Demangled: dlb_CLCLmix7CL14SU_flex */
int dlb_CLCLmix7CL14SU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L192 */
/* Demangled: dlb_dct_twiddle_table16_1_L192 */
extern void* dlb_dct_twiddle_table16_1_L192;

/* Symbol: dlb_dct_twiddle_table16_L96 */
/* Demangled: dlb_dct_twiddle_table16_L96 */
extern void* dlb_dct_twiddle_table16_L96;

/* Symbol: dlb_fft_fwd_usc_320 */
/* Demangled: dlb_fft_fwd_usc_320 */
int dlb_fft_fwd_usc_320(void);

/* Symbol: dlb_fft_inv_scl_144 */
/* Demangled: dlb_fft_inv_scl_144 */
int dlb_fft_inv_scl_144(void);

/* Symbol: _ZN5dolby9EffectVqeD1Ev */
/* Demangled: dolby::EffectVqe::~EffectVqe() */
int _ZN5dolby9EffectVqeD1Ev(void);

/* Symbol: vqe_get_nuisance_prob */
/* Demangled: vqe_get_nuisance_prob */
int vqe_get_nuisance_prob(void);

/* Symbol: DLB_r4_fft_480 */
/* Demangled: DLB_r4_fft_480 */
int DLB_r4_fft_480(void);

/* Symbol: DLB_r4_inv_fft_12_s */
/* Demangled: DLB_r4_inv_fft_12_s */
int DLB_r4_inv_fft_12_s(void);

/* Symbol: dlb_qmf_synthesisL_open */
/* Demangled: dlb_qmf_synthesisL_open */
int dlb_qmf_synthesisL_open(void);

/* Symbol: _ZN5dolby13EffectContext8getParamEiPjPv */
/* Demangled: dolby::EffectContext::getParam(int, unsigned int*, void*) */
int _ZN5dolby13EffectContext8getParamEiPjPv(void);

/* Symbol: dlb_CLmpy_shlCLSIU_flex */
/* Demangled: dlb_CLmpy_shlCLSIU_flex */
int dlb_CLmpy_shlCLSIU_flex(void);

/* Symbol: DLB_r4_fft_768 */
/* Demangled: DLB_r4_fft_768 */
int DLB_r4_fft_768(void);

/* Symbol: DLB_r4_inv_fft_45_s */
/* Demangled: DLB_r4_inv_fft_45_s */
int DLB_r4_inv_fft_45_s(void);

/* Symbol: a_twist_table_MDXT_640x640x56_32000_tab */
/* Demangled: a_twist_table_MDXT_640x640x56_32000_tab */
extern void* a_twist_table_MDXT_640x640x56_32000_tab;

/* Symbol: utlog_enable_log */
/* Demangled: utlog_enable_log */
int utlog_enable_log(void);

/* Symbol: vqe_get_asa_prob_inst_obj */
/* Demangled: vqe_get_asa_prob_inst_obj */
int vqe_get_asa_prob_inst_obj(void);

/* Symbol: vqe_reset_ne_module */
/* Demangled: vqe_reset_ne_module */
int vqe_reset_ne_module(void);

/* Symbol: DLB_vec_Lsum_sqrLUU_strict */
/* Demangled: DLB_vec_Lsum_sqrLUU_strict */
int DLB_vec_Lsum_sqrLUU_strict(void);

/* Symbol: _ZN5dolby16VqeBufferAdapterC1EPNS_11IDlbProcessE */
/* Demangled: dolby::VqeBufferAdapter::VqeBufferAdapter(dolby::IDlbProcess*) */
int _ZN5dolby16VqeBufferAdapterC1EPNS_11IDlbProcessE(void);

/* Symbol: _ZN5dolby14BufferProviderD0Ev */
/* Demangled: dolby::BufferProvider::~BufferProvider() */
int _ZN5dolby14BufferProviderD0Ev(void);

/* Symbol: a_shift_table_CQMF_160x160x40_08000_tab */
/* Demangled: a_shift_table_CQMF_160x160x40_08000_tab */
extern void* a_shift_table_CQMF_160x160x40_08000_tab;

/* Symbol: dlb_vec_Lmean_sqrLU_flex */
/* Demangled: dlb_vec_Lmean_sqrLU_flex */
int dlb_vec_Lmean_sqrLU_flex(void);

/* Symbol: dlb_fft_fwd_scl_30 */
/* Demangled: dlb_fft_fwd_scl_30 */
int dlb_fft_fwd_scl_30(void);

/* Symbol: dlb_fft_inv_scl_20 */
/* Demangled: dlb_fft_inv_scl_20 */
int dlb_fft_inv_scl_20(void);

/* Symbol: DLB_MFB_P10KM_P64ATM301 */
/* Demangled: DLB_MFB_P10KM_P64ATM301 */
extern void* DLB_MFB_P10KM_P64ATM301;

/* Symbol: _ZN5dolby16DlbBufferAdapter8setParamEiPKii */
/* Demangled: dolby::DlbBufferAdapter::setParam(int, int const*, int) */
int _ZN5dolby16DlbBufferAdapter8setParamEiPKii(void);

/* Symbol: dlb_dct_twiddle_table16_L144_1 */
/* Demangled: dlb_dct_twiddle_table16_L144_1 */
extern void* dlb_dct_twiddle_table16_L144_1;

/* Symbol: DLB_r4_fft_12 */
/* Demangled: DLB_r4_fft_12 */
int DLB_r4_fft_12(void);

/* Symbol: DLB_r4_inv_rfft_half_n */
/* Demangled: DLB_r4_inv_rfft_half_n */
int DLB_r4_inv_rfft_half_n(void);

/* Symbol: dlb_dct_twiddle_table16_L128_cos */
/* Demangled: dlb_dct_twiddle_table16_L128_cos */
extern void* dlb_dct_twiddle_table16_L128_cos;

/* Symbol: dlb_dct_twiddle_table16_L144_2 */
/* Demangled: dlb_dct_twiddle_table16_L144_2 */
extern void* dlb_dct_twiddle_table16_L144_2;

/* Symbol: DLB_r4_fft_256_s */
/* Demangled: DLB_r4_fft_256_s */
int DLB_r4_fft_256_s(void);

/* Symbol: dlb_fft_fwd_scl_32 */
/* Demangled: dlb_fft_fwd_scl_32 */
int dlb_fft_fwd_scl_32(void);

/* Symbol: DLB_fft_CLfwd_unscaledCL */
/* Demangled: DLB_fft_CLfwd_unscaledCL */
int DLB_fft_CLfwd_unscaledCL(void);

/* Symbol: _ZTVN5dolby10VqeProcessE */
/* Demangled: vtable for dolby::VqeProcess */
extern void* _ZTVN5dolby10VqeProcessE;

/* Symbol: datalog_cleanup */
/* Demangled: datalog_cleanup */
int datalog_cleanup(void);

/* Symbol: a_twist_table_MDCT_480x480x54_48000_tab */
/* Demangled: a_twist_table_MDCT_480x480x54_48000_tab */
extern void* a_twist_table_MDCT_480x480x54_48000_tab;

/* Symbol: dlb_fft_cplx_inv_usc */
/* Demangled: dlb_fft_cplx_inv_usc */
extern void* dlb_fft_cplx_inv_usc;

/* Symbol: a_twist_table_MDXT_320x320x49_32000_tab */
/* Demangled: a_twist_table_MDXT_320x320x49_32000_tab */
extern void* a_twist_table_MDXT_320x320x49_32000_tab;

/* Symbol: DLB_r4_fft_15 */
/* Demangled: DLB_r4_fft_15 */
int DLB_r4_fft_15(void);

/* Symbol: dlb_fft_inv_scl_24 */
/* Demangled: dlb_fft_inv_scl_24 */
int dlb_fft_inv_scl_24(void);

/* Symbol: dlb_blk_LmixL_flex */
/* Demangled: dlb_blk_LmixL_flex */
int dlb_blk_LmixL_flex(void);

/* Symbol: DLB_r4_fft_16 */
/* Demangled: DLB_r4_fft_16 */
int DLB_r4_fft_16(void);

/* Symbol: _ZN5dolby18VoiceEffectContextC2Ev */
/* Demangled: dolby::VoiceEffectContext::VoiceEffectContext() */
int _ZN5dolby18VoiceEffectContextC2Ev(void);

/* Symbol: dlb_dct_twiddle_table16_L2 */
/* Demangled: dlb_dct_twiddle_table16_L2 */
extern void* dlb_dct_twiddle_table16_L2;

/* Symbol: dlb_fft_fwd_scl_36 */
/* Demangled: dlb_fft_fwd_scl_36 */
int dlb_fft_fwd_scl_36(void);

/* Symbol: vqe_get_quality_alarm */
/* Demangled: vqe_get_quality_alarm */
int vqe_get_quality_alarm(void);

/* Symbol: _ZN5dolby9DlbEffect27handle_EFFECT_CMD_GET_PARAMERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_GET_PARAM(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect27handle_EFFECT_CMD_GET_PARAMERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: _ZN5dolby16DapEffectContext18DlbDapEffCallbacks16onDapParamUpdateERKN7android8hardware8hidl_vecIhEE */
/* Demangled: dolby::DapEffectContext::DlbDapEffCallbacks::onDapParamUpdate(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN5dolby16DapEffectContext18DlbDapEffCallbacks16onDapParamUpdateERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN5dolby10VqeProcess9configureEii14audio_format_t20audio_channel_mask_tS2_ */
/* Demangled: dolby::VqeProcess::configure(int, int, audio_format_t, audio_channel_mask_t, audio_channel_mask_t) */
int _ZN5dolby10VqeProcess9configureEii14audio_format_t20audio_channel_mask_tS2_(void);

/* Symbol: vsv_ml_boost_process */
/* Demangled: vsv_ml_boost_process */
int vsv_ml_boost_process(void);

/* Symbol: dlb_blk_LLdeshuffleLL_inplace_flex */
/* Demangled: dlb_blk_LLdeshuffleLL_inplace_flex */
int dlb_blk_LLdeshuffleLL_inplace_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L4 */
/* Demangled: dlb_dct_twiddle_table16_L4 */
extern void* dlb_dct_twiddle_table16_L4;

/* Symbol: dlb_dct_twiddle_table16_L48_cos */
/* Demangled: dlb_dct_twiddle_table16_L48_cos */
extern void* dlb_dct_twiddle_table16_L48_cos;

/* Symbol: _ZN5dolby10VqeProcessC1Ev */
/* Demangled: dolby::VqeProcess::VqeProcess() */
int _ZN5dolby10VqeProcessC1Ev(void);

/* Symbol: a_shift_table_MDCT_160x160x40_08000_tab */
/* Demangled: a_shift_table_MDCT_160x160x40_08000_tab */
extern void* a_shift_table_MDCT_160x160x40_08000_tab;

/* Symbol: _ZTVN5dolby13EffectContextE */
/* Demangled: vtable for dolby::EffectContext */
extern void* _ZTVN5dolby13EffectContextE;

/* Symbol: dlb_dct_twiddle_table16_rev_L144 */
/* Demangled: dlb_dct_twiddle_table16_rev_L144 */
extern void* dlb_dct_twiddle_table16_rev_L144;

/* Symbol: dlb_dct_twiddle_table16_L192_cos */
/* Demangled: dlb_dct_twiddle_table16_L192_cos */
extern void* dlb_dct_twiddle_table16_L192_cos;

/* Symbol: dlb_wave_get_channel_count */
/* Demangled: dlb_wave_get_channel_count */
int dlb_wave_get_channel_count(void);

/* Symbol: _ZN5dolby16DapEffectContextD0Ev */
/* Demangled: dolby::DapEffectContext::~DapEffectContext() */
int _ZN5dolby16DapEffectContextD0Ev(void);

/* Symbol: DLB_qmf_synthesisL_close */
/* Demangled: DLB_qmf_synthesisL_close */
int DLB_qmf_synthesisL_close(void);

/* Symbol: _ZN5dolby19VqeCrossfadeProcessC2EPNS_11IDlbProcessE */
/* Demangled: dolby::VqeCrossfadeProcess::VqeCrossfadeProcess(dolby::IDlbProcess*) */
int _ZN5dolby19VqeCrossfadeProcessC2EPNS_11IDlbProcessE(void);

/* Symbol: a_shift_table_MDCT_960x960x61_48000_tab */
/* Demangled: a_shift_table_MDCT_960x960x61_48000_tab */
extern void* a_shift_table_MDCT_960x960x61_48000_tab;

/* Symbol: vqe_get_asa_num_obj */
/* Demangled: vqe_get_asa_num_obj */
int vqe_get_asa_num_obj(void);

/* Symbol: _ZN5dolby16DapEffectContext9setConfigEPK15effect_config_s */
/* Demangled: dolby::DapEffectContext::setConfig(effect_config_s const*) */
int _ZN5dolby16DapEffectContext9setConfigEPK15effect_config_s(void);

/* Symbol: _ZN5dolby13AudioHalUtilsC2Ev */
/* Demangled: dolby::AudioHalUtils::AudioHalUtils() */
int _ZN5dolby13AudioHalUtilsC2Ev(void);

/* Symbol: DLB_blk_Lmix_shlULLL_strict */
/* Demangled: DLB_blk_Lmix_shlULLL_strict */
int DLB_blk_Lmix_shlULLL_strict(void);

/* Symbol: dlb_hyb_p4_13 */
/* Demangled: dlb_hyb_p4_13 */
extern void* dlb_hyb_p4_13;

/* Symbol: dlb_dct_twiddle_table16_L8 */
/* Demangled: dlb_dct_twiddle_table16_L8 */
extern void* dlb_dct_twiddle_table16_L8;

/* Symbol: a_twist_table_MDFT_640x640x56_32000_tab */
/* Demangled: a_twist_table_MDFT_640x640x56_32000_tab */
extern void* a_twist_table_MDFT_640x640x56_32000_tab;

/* Symbol: vsv_tx_get_vad_state */
/* Demangled: vsv_tx_get_vad_state */
int vsv_tx_get_vad_state(void);

/* Symbol: DLB_r4_cplx_inv_pair */
/* Demangled: DLB_r4_cplx_inv_pair */
int DLB_r4_cplx_inv_pair(void);

/* Symbol: dlb_inverseModulationComplex */
/* Demangled: dlb_inverseModulationComplex */
int dlb_inverseModulationComplex(void);

/* Symbol: dlb_qmf_analysisL_open */
/* Demangled: dlb_qmf_analysisL_open */
int dlb_qmf_analysisL_open(void);

/* Symbol: _ZN5dolby14BufferProvider9setBufferEPv */
/* Demangled: dolby::BufferProvider::setBuffer(void*) */
int _ZN5dolby14BufferProvider9setBufferEPv(void);

/* Symbol: datalog_dump_wave */
/* Demangled: datalog_dump_wave */
int datalog_dump_wave(void);

/* Symbol: vsv_har_get_outputs */
/* Demangled: vsv_har_get_outputs */
int vsv_har_get_outputs(void);

/* Symbol: dlb_dct_twiddle_table16_L288 */
/* Demangled: dlb_dct_twiddle_table16_L288 */
extern void* dlb_dct_twiddle_table16_L288;

/* Symbol: vlib_transform_open */
/* Demangled: vlib_transform_open */
int vlib_transform_open(void);

/* Symbol: DLB_r4_inv_fft_384_s */
/* Demangled: DLB_r4_inv_fft_384_s */
int DLB_r4_inv_fft_384_s(void);

/* Symbol: DLB_Lqmf_analysisL */
/* Demangled: DLB_Lqmf_analysisL */
int DLB_Lqmf_analysisL(void);

/* Symbol: a_twist_table_MDXT_480x480x54_48000_tab */
/* Demangled: a_twist_table_MDXT_480x480x54_48000_tab */
extern void* a_twist_table_MDXT_480x480x54_48000_tab;

/* Symbol: vlib_transform_num_def */
/* Demangled: vlib_transform_num_def */
extern void* vlib_transform_num_def;

/* Symbol: vsv_banding_open */
/* Demangled: vsv_banding_open */
int vsv_banding_open(void);

/* Symbol: _ZN5dolby17GameEffectContext7processEP14audio_buffer_sS2_ */
/* Demangled: dolby::GameEffectContext::process(audio_buffer_s*, audio_buffer_s*) */
int _ZN5dolby17GameEffectContext7processEP14audio_buffer_sS2_(void);

/* Symbol: dlb_CLmacCLLU_flex */
/* Demangled: dlb_CLmacCLLU_flex */
int dlb_CLmacCLLU_flex(void);

/* Symbol: DLB_r4_inv_fft_20 */
/* Demangled: DLB_r4_inv_fft_20 */
int DLB_r4_inv_fft_20(void);

/* Symbol: DLB_r4_inv_fft_24_s */
/* Demangled: DLB_r4_inv_fft_24_s */
int DLB_r4_inv_fft_24_s(void);

/* Symbol: init_Phase90Hilbert */
/* Demangled: init_Phase90Hilbert */
int init_Phase90Hilbert(void);

/* Symbol: utlog_add_scalar_variable */
/* Demangled: utlog_add_scalar_variable */
int utlog_add_scalar_variable(void);

/* Symbol: vsv_banding_flattening */
/* Demangled: vsv_banding_flattening */
int vsv_banding_flattening(void);

/* Symbol: vsv_har_init */
/* Demangled: vsv_har_init */
int vsv_har_init(void);

/* Symbol: dlb_blk_Liir2ssv2L_flex */
/* Demangled: dlb_blk_Liir2ssv2L_flex */
int dlb_blk_Liir2ssv2L_flex(void);

/* Symbol: dlb_fft_inv_scl_288 */
/* Demangled: dlb_fft_inv_scl_288 */
int dlb_fft_inv_scl_288(void);

/* Symbol: dlb_blk_Liir2ssv1_usmpL_flex */
/* Demangled: dlb_blk_Liir2ssv1_usmpL_flex */
int dlb_blk_Liir2ssv1_usmpL_flex(void);

/* Symbol: a_twist_table_MDFT_320x320x49_32000_tab */
/* Demangled: a_twist_table_MDFT_320x320x49_32000_tab */
extern void* a_twist_table_MDFT_320x320x49_32000_tab;

/* Symbol: vsv_trag_init */
/* Demangled: vsv_trag_init */
int vsv_trag_init(void);

/* Symbol: dlb_CLCLmix4CL8SU_flex */
/* Demangled: dlb_CLCLmix4CL8SU_flex */
int dlb_CLCLmix4CL8SU_flex(void);

/* Symbol: dlb_CLaddCLCLU_flex */
/* Demangled: dlb_CLaddCLCLU_flex */
int dlb_CLaddCLCLU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L24 */
/* Demangled: dlb_dct_twiddle_table16_1_L24 */
extern void* dlb_dct_twiddle_table16_1_L24;

/* Symbol: dlb_dct_twiddle_table16_1_L480 */
/* Demangled: dlb_dct_twiddle_table16_1_L480 */
extern void* dlb_dct_twiddle_table16_1_L480;

/* Symbol: dlb_dctII_unscaled */
/* Demangled: dlb_dctII_unscaled */
int dlb_dctII_unscaled(void);

/* Symbol: dlb_dct_twiddle_table16_1_L768 */
/* Demangled: dlb_dct_twiddle_table16_1_L768 */
extern void* dlb_dct_twiddle_table16_1_L768;

/* Symbol: DLB_r4_inv_fft_24 */
/* Demangled: DLB_r4_inv_fft_24 */
int DLB_r4_inv_fft_24(void);

/* Symbol: dlb_fft_fwd_usc_180 */
/* Demangled: dlb_fft_fwd_usc_180 */
int dlb_fft_fwd_usc_180(void);

/* Symbol: dlb_dct_twiddle_table16_L256_cos */
/* Demangled: dlb_dct_twiddle_table16_L256_cos */
extern void* dlb_dct_twiddle_table16_L256_cos;

/* Symbol: vqe_api_reset_ne_module */
/* Demangled: vqe_api_reset_ne_module */
int vqe_api_reset_ne_module(void);

/* Symbol: vsv_ml_rules_rom_size */
/* Demangled: vsv_ml_rules_rom_size */
extern void* vsv_ml_rules_rom_size;

/* Symbol: _ZN5dolby18VoiceEffectContext8setParamEijPv */
/* Demangled: dolby::VoiceEffectContext::setParam(int, unsigned int, void*) */
int _ZN5dolby18VoiceEffectContext8setParamEijPv(void);

/* Symbol: dlb_BLsaddBLL_flex */
/* Demangled: dlb_BLsaddBLL_flex */
int dlb_BLsaddBLL_flex(void);

/* Symbol: dlb_fft_fwd_usc_40 */
/* Demangled: dlb_fft_fwd_usc_40 */
int dlb_fft_fwd_usc_40(void);

/* Symbol: dlb_fft_inv_usc_30 */
/* Demangled: dlb_fft_inv_usc_30 */
int dlb_fft_inv_usc_30(void);

/* Symbol: DLB_CLhybrid_synthesisCL */
/* Demangled: DLB_CLhybrid_synthesisCL */
int DLB_CLhybrid_synthesisCL(void);

/* Symbol: a_shift_table_MDXT_160x160x40_08000_tab */
/* Demangled: a_shift_table_MDXT_160x160x40_08000_tab */
extern void* a_shift_table_MDXT_160x160x40_08000_tab;

/* Symbol: DLB_Lqmf_analysisS */
/* Demangled: DLB_Lqmf_analysisS */
int DLB_Lqmf_analysisS(void);

/* Symbol: dlb_dct_twiddle_table16_L72_cos */
/* Demangled: dlb_dct_twiddle_table16_L72_cos */
extern void* dlb_dct_twiddle_table16_L72_cos;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvj(void);

/* Symbol: dlb_fft_inv_usc_2048 */
/* Demangled: dlb_fft_inv_usc_2048 */
int dlb_fft_inv_usc_2048(void);

/* Symbol: dlb_fft_inv_usc_32 */
/* Demangled: dlb_fft_inv_usc_32 */
int dlb_fft_inv_usc_32(void);

/* Symbol: vqe_get_asa_max_num_obj */
/* Demangled: vqe_get_asa_max_num_obj */
int vqe_get_asa_max_num_obj(void);

/* Symbol: dlb_fft_fwd_scl_240 */
/* Demangled: dlb_fft_fwd_scl_240 */
int dlb_fft_fwd_scl_240(void);

/* Symbol: vsv_reg_get_outputs */
/* Demangled: vsv_reg_get_outputs */
int vsv_reg_get_outputs(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZTVN5dolby16DapEffectContextE */
/* Demangled: vtable for dolby::DapEffectContext */
extern void* _ZTVN5dolby16DapEffectContextE;

/* Symbol: DLB_blk_Liir2ssv2L_inplace_strict */
/* Demangled: DLB_blk_Liir2ssv2L_inplace_strict */
int DLB_blk_Liir2ssv2L_inplace_strict(void);

/* Symbol: dlb_riff_rename_chunk */
/* Demangled: dlb_riff_rename_chunk */
int dlb_riff_rename_chunk(void);

/* Symbol: vqe_get_tx_vad_state_for_output */
/* Demangled: vqe_get_tx_vad_state_for_output */
int vqe_get_tx_vad_state_for_output(void);

/* Symbol: DLB_r4_inv_fft_192 */
/* Demangled: DLB_r4_inv_fft_192 */
int DLB_r4_inv_fft_192(void);

/* Symbol: dlb_fft_fwd_usc_45 */
/* Demangled: dlb_fft_fwd_usc_45 */
int dlb_fft_fwd_usc_45(void);

/* Symbol: dlb_fft_inv_usc_36 */
/* Demangled: dlb_fft_inv_usc_36 */
int dlb_fft_inv_usc_36(void);

/* Symbol: DLB_qmf_analysisS_init */
/* Demangled: DLB_qmf_analysisS_init */
int DLB_qmf_analysisS_init(void);

/* Symbol: DLB_time_div */
/* Demangled: DLB_time_div */
int DLB_time_div(void);

/* Symbol: vsv_ne_reset */
/* Demangled: vsv_ne_reset */
int vsv_ne_reset(void);

/* Symbol: DLB_r4_inv_fft_2_s */
/* Demangled: DLB_r4_inv_fft_2_s */
int DLB_r4_inv_fft_2_s(void);

/* Symbol: dlb_fft_inv_usc_240 */
/* Demangled: dlb_fft_inv_usc_240 */
int dlb_fft_inv_usc_240(void);

/* Symbol: DLB_mfb_p10km_synthesisCL_query_scratch */
/* Demangled: DLB_mfb_p10km_synthesisCL_query_scratch */
int DLB_mfb_p10km_synthesisCL_query_scratch(void);

/* Symbol: dlb_dct_twiddle_table16_L32_cos */
/* Demangled: dlb_dct_twiddle_table16_L32_cos */
extern void* dlb_dct_twiddle_table16_L32_cos;

/* Symbol: dlb_wave_ksdataformat_subtype_pcm */
/* Demangled: dlb_wave_ksdataformat_subtype_pcm */
extern void* dlb_wave_ksdataformat_subtype_pcm;

/* Symbol: dlb_fft_fwd_usc_48 */
/* Demangled: dlb_fft_fwd_usc_48 */
int dlb_fft_fwd_usc_48(void);

/* Symbol: dlb_CLshrCLUU_flex */
/* Demangled: dlb_CLshrCLUU_flex */
int dlb_CLshrCLUU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L320 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L320 */
extern void* dlb_dct_twiddle_table16_rev_1_L320;

/* Symbol: DLB_r4_inv_fft_2048_s */
/* Demangled: DLB_r4_inv_fft_2048_s */
int DLB_r4_inv_fft_2048_s(void);

/* Symbol: a_twist_table_MDFT_480x480x54_48000_tab */
/* Demangled: a_twist_table_MDFT_480x480x54_48000_tab */
extern void* a_twist_table_MDFT_480x480x54_48000_tab;

/* Symbol: DLB_blk_LmixnL_strict */
/* Demangled: DLB_blk_LmixnL_strict */
int DLB_blk_LmixnL_strict(void);

/* Symbol: dlb_CLsubCLCLU_flex */
/* Demangled: dlb_CLsubCLCLU_flex */
int dlb_CLsubCLCLU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L12 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L12 */
extern void* dlb_dct_twiddle_table16_rev_1_L12;

/* Symbol: dlb_dct_twiddle_table16_rev_L288 */
/* Demangled: dlb_dct_twiddle_table16_rev_L288 */
extern void* dlb_dct_twiddle_table16_rev_L288;

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_16 */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_16 */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_16;

/* Symbol: dlb_dct_twiddle_table16_L12_cos */
/* Demangled: dlb_dct_twiddle_table16_L12_cos */
extern void* dlb_dct_twiddle_table16_L12_cos;

/* Symbol: _ZN5dolby9DlbEffect13getDescriptorEPK12audio_uuid_sP19effect_descriptor_s */
/* Demangled: dolby::DlbEffect::getDescriptor(audio_uuid_s const*, effect_descriptor_s*) */
int _ZN5dolby9DlbEffect13getDescriptorEPK12audio_uuid_sP19effect_descriptor_s(void);

/* Symbol: datalog_init */
/* Demangled: datalog_init */
int datalog_init(void);

/* Symbol: DLB_r4_fft_20 */
/* Demangled: DLB_r4_fft_20 */
int DLB_r4_fft_20(void);

/* Symbol: DLB_r4_fft_1024_s */
/* Demangled: DLB_r4_fft_1024_s */
int DLB_r4_fft_1024_s(void);

/* Symbol: vsv_ne_defs_num */
/* Demangled: vsv_ne_defs_num */
extern void* vsv_ne_defs_num;

/* Symbol: DLB_blk_Lattack_decay_iir1L_set_coef */
/* Demangled: DLB_blk_Lattack_decay_iir1L_set_coef */
int DLB_blk_Lattack_decay_iir1L_set_coef(void);

/* Symbol: dlb_fft_fwd_scl_40 */
/* Demangled: dlb_fft_fwd_scl_40 */
int dlb_fft_fwd_scl_40(void);

/* Symbol: dlb_fft_inv_scl_30 */
/* Demangled: dlb_fft_inv_scl_30 */
int dlb_fft_inv_scl_30(void);

/* Symbol: _ZN5dolby9DlbEffect10kInterfaceE */
/* Demangled: dolby::DlbEffect::kInterface */
extern void* _ZN5dolby9DlbEffect10kInterfaceE;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L15 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L15 */
extern void* dlb_dct_twiddle_table16_rev_1_L15;

/* Symbol: vsv_asa_get_outputs */
/* Demangled: vsv_asa_get_outputs */
int vsv_asa_get_outputs(void);

/* Symbol: vqe_get_vad_gain */
/* Demangled: vqe_get_vad_gain */
int vqe_get_vad_gain(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcess10accumulateEPsS1_S1_iff */
/* Demangled: dolby::DlbCrossfadeProcess::accumulate(short*, short*, short*, int, float, float) */
int _ZN5dolby19DlbCrossfadeProcess10accumulateEPsS1_S1_iff(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L16 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L16 */
extern void* dlb_dct_twiddle_table16_rev_1_L16;

/* Symbol: dlb_fft_inv_scl_32 */
/* Demangled: dlb_fft_inv_scl_32 */
int dlb_fft_inv_scl_32(void);

/* Symbol: _ZN5dolby16DlbBufferAdapterD1Ev */
/* Demangled: dolby::DlbBufferAdapter::~DlbBufferAdapter() */
int _ZN5dolby16DlbBufferAdapterD1Ev(void);

/* Symbol: dlb_BLmaxBLL_flex */
/* Demangled: dlb_BLmaxBLL_flex */
int dlb_BLmaxBLL_flex(void);

/* Symbol: DLB_blk_Lcrossfade_gainLS_setup */
/* Demangled: DLB_blk_Lcrossfade_gainLS_setup */
int DLB_blk_Lcrossfade_gainLS_setup(void);

/* Symbol: DLB_r4_fft_24 */
/* Demangled: DLB_r4_fft_24 */
int DLB_r4_fft_24(void);

/* Symbol: DLB_r4_inv_fft_36_s */
/* Demangled: DLB_r4_inv_fft_36_s */
int DLB_r4_inv_fft_36_s(void);

/* Symbol: datalog_flush */
/* Demangled: datalog_flush */
int datalog_flush(void);

/* Symbol: a_shift_table_MDFT_160x160x40_08000_tab */
/* Demangled: a_shift_table_MDFT_160x160x40_08000_tab */
extern void* a_shift_table_MDFT_160x160x40_08000_tab;

/* Symbol: DLB_r4_fft_240_s */
/* Demangled: DLB_r4_fft_240_s */
int DLB_r4_fft_240_s(void);

/* Symbol: DLB_r4_fft_640 */
/* Demangled: DLB_r4_fft_640 */
int DLB_r4_fft_640(void);

/* Symbol: dlb_riff_open_chunk */
/* Demangled: dlb_riff_open_chunk */
int dlb_riff_open_chunk(void);

/* Symbol: dlb_dct_twiddle_table16_L576 */
/* Demangled: dlb_dct_twiddle_table16_L576 */
extern void* dlb_dct_twiddle_table16_L576;

/* Symbol: DLB_r4_inv_fft_512_s */
/* Demangled: DLB_r4_inv_fft_512_s */
int DLB_r4_inv_fft_512_s(void);

/* Symbol: dlb_fft_fwd_scl_45 */
/* Demangled: dlb_fft_fwd_scl_45 */
int dlb_fft_fwd_scl_45(void);

/* Symbol: dlb_fft_fwd_usc_1024 */
/* Demangled: dlb_fft_fwd_usc_1024 */
int dlb_fft_fwd_usc_1024(void);

/* Symbol: DLB_qmf_analysisL_query_mem */
/* Demangled: DLB_qmf_analysisL_query_mem */
int DLB_qmf_analysisL_query_mem(void);

/* Symbol: _ZN5dolby14BufferProviderC1Ev */
/* Demangled: dolby::BufferProvider::BufferProvider() */
int _ZN5dolby14BufferProviderC1Ev(void);

/* Symbol: _ZN5dolby17DlbBufferProviderD0Ev */
/* Demangled: dolby::DlbBufferProvider::~DlbBufferProvider() */
int _ZN5dolby17DlbBufferProviderD0Ev(void);

/* Symbol: _ZN5dolby16DlbBufferAdapter4initEv */
/* Demangled: dolby::DlbBufferAdapter::init() */
int _ZN5dolby16DlbBufferAdapter4initEv(void);

/* Symbol: dlb_wave_ksdataformat_subtype_ieee_float */
/* Demangled: dlb_wave_ksdataformat_subtype_ieee_float */
extern void* dlb_wave_ksdataformat_subtype_ieee_float;

/* Symbol: DLB_vec_Lmean_sqrLU_strict */
/* Demangled: DLB_vec_Lmean_sqrLU_strict */
int DLB_vec_Lmean_sqrLU_strict(void);

/* Symbol: dlb_CLCLmix6CL12SU_flex */
/* Demangled: dlb_CLCLmix6CL12SU_flex */
int dlb_CLCLmix6CL12SU_flex(void);

/* Symbol: dlb_fft_inv_scl_36 */
/* Demangled: dlb_fft_inv_scl_36 */
int dlb_fft_inv_scl_36(void);

/* Symbol: DLB_Lunload_CLqmf_analysisL_filter_state */
/* Demangled: DLB_Lunload_CLqmf_analysisL_filter_state */
int DLB_Lunload_CLqmf_analysisL_filter_state(void);

/* Symbol: dlb_dct_twiddle_table16_L384_cos */
/* Demangled: dlb_dct_twiddle_table16_L384_cos */
extern void* dlb_dct_twiddle_table16_L384_cos;

/* Symbol: dlb_blk_Liir2ssv1efL_flex */
/* Demangled: dlb_blk_Liir2ssv1efL_flex */
int dlb_blk_Liir2ssv1efL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L720 */
/* Demangled: dlb_dct_twiddle_table16_L720 */
extern void* dlb_dct_twiddle_table16_L720;

/* Symbol: DLB_r4_fft_768_s */
/* Demangled: DLB_r4_fft_768_s */
int DLB_r4_fft_768_s(void);

/* Symbol: DLB_r4_inv_fft_720_s */
/* Demangled: DLB_r4_inv_fft_720_s */
int DLB_r4_inv_fft_720_s(void);

/* Symbol: dlb_dct_twiddle_table16_L240_cos */
/* Demangled: dlb_dct_twiddle_table16_L240_cos */
extern void* dlb_dct_twiddle_table16_L240_cos;

/* Symbol: _ZN5dolby18VoiceEffectContext7processEP14audio_buffer_sS2_ */
/* Demangled: dolby::VoiceEffectContext::process(audio_buffer_s*, audio_buffer_s*) */
int _ZN5dolby18VoiceEffectContext7processEP14audio_buffer_sS2_(void);

/* Symbol: DLB_blk_LmaxLLL_strict */
/* Demangled: DLB_blk_LmaxLLL_strict */
int DLB_blk_LmaxLLL_strict(void);

/* Symbol: dlb_fft_fwd_scl_48 */
/* Demangled: dlb_fft_fwd_scl_48 */
int dlb_fft_fwd_scl_48(void);

/* Symbol: dlb_fft_inv_scl_576 */
/* Demangled: dlb_fft_inv_scl_576 */
int dlb_fft_inv_scl_576(void);

/* Symbol: _ZTCN5dolby16DapEffectContext18DlbDapEffCallbacksE0_N6vendor5dolby8hardware3dms4V2_013IDmsCallbacksE */
/* Demangled: construction vtable for vendor::dolby::hardware::dms::V2_0::IDmsCallbacks-in-dolby::DapEffectContext::DlbDapEffCallbacks */
extern void* _ZTCN5dolby16DapEffectContext18DlbDapEffCallbacksE0_N6vendor5dolby8hardware3dms4V2_013IDmsCallbacksE;

/* Symbol: dlb_blk_LclipL_flex */
/* Demangled: dlb_blk_LclipL_flex */
int dlb_blk_LclipL_flex(void);

/* Symbol: dlb_fft_inv_scl_720 */
/* Demangled: dlb_fft_inv_scl_720 */
int dlb_fft_inv_scl_720(void);

/* Symbol: dlb_odd_fft_cplx_fwd_scl */
/* Demangled: dlb_odd_fft_cplx_fwd_scl */
extern void* dlb_odd_fft_cplx_fwd_scl;

/* Symbol: dlb_wave_begin_data */
/* Demangled: dlb_wave_begin_data */
int dlb_wave_begin_data(void);

/* Symbol: DLB_CLaddCLCLU_strict */
/* Demangled: DLB_CLaddCLCLU_strict */
int DLB_CLaddCLCLU_strict(void);

/* Symbol: DLB_r4_fft_360 */
/* Demangled: DLB_r4_fft_360 */
int DLB_r4_fft_360(void);

/* Symbol: vsv_agc_init */
/* Demangled: vsv_agc_init */
int vsv_agc_init(void);

/* Symbol: DLB_blk_LdelayU_strict */
/* Demangled: DLB_blk_LdelayU_strict */
int DLB_blk_LdelayU_strict(void);

/* Symbol: dlb_fft_fwd_scl_384 */
/* Demangled: dlb_fft_fwd_scl_384 */
int dlb_fft_fwd_scl_384(void);

/* Symbol: dlb_fft_inv_scl_1024 */
/* Demangled: dlb_fft_inv_scl_1024 */
int dlb_fft_inv_scl_1024(void);

/* Symbol: _ZN5dolby9DlbEffect13effectProcessEPP18effect_interface_sP14audio_buffer_sS5_ */
/* Demangled: dolby::DlbEffect::effectProcess(effect_interface_s**, audio_buffer_s*, audio_buffer_s*) */
int _ZN5dolby9DlbEffect13effectProcessEPP18effect_interface_sP14audio_buffer_sS5_(void);

/* Symbol: DLB_qmf_synthesisL_get_delay */
/* Demangled: DLB_qmf_synthesisL_get_delay */
int DLB_qmf_synthesisL_get_delay(void);

/* Symbol: dlb_cos_16_ast_mini_twiddle */
/* Demangled: dlb_cos_16_ast_mini_twiddle */
extern void* dlb_cos_16_ast_mini_twiddle;

/* Symbol: _ZN5dolby9EffectVqe8setParamE15audio_devices_tiPKii */
/* Demangled: dolby::EffectVqe::setParam(audio_devices_t, int, int const*, int) */
int _ZN5dolby9EffectVqe8setParamE15audio_devices_tiPKii(void);

/* Symbol: dlb_BLmpyBLS_inplace_flex */
/* Demangled: dlb_BLmpyBLS_inplace_flex */
int dlb_BLmpyBLS_inplace_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L30 */
/* Demangled: dlb_dct_twiddle_table16_1_L30 */
extern void* dlb_dct_twiddle_table16_1_L30;

/* Symbol: DLB_r4_inv_fft_160_s */
/* Demangled: DLB_r4_inv_fft_160_s */
int DLB_r4_inv_fft_160_s(void);

/* Symbol: DLB_r4_cplx_inv_unscaled */
/* Demangled: DLB_r4_cplx_inv_unscaled */
int DLB_r4_cplx_inv_unscaled(void);

/* Symbol: vqe_api_process */
/* Demangled: vqe_api_process */
int vqe_api_process(void);

/* Symbol: dlb_riff_chunk_location */
/* Demangled: dlb_riff_chunk_location */
int dlb_riff_chunk_location(void);

/* Symbol: _ZN5dolby16DapEffectContextC1Ev */
/* Demangled: dolby::DapEffectContext::DapEffectContext() */
int _ZN5dolby16DapEffectContextC1Ev(void);

/* Symbol: DLB_r4_inv_fft_30 */
/* Demangled: DLB_r4_inv_fft_30 */
int DLB_r4_inv_fft_30(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_32_vec_ana;

/* Symbol: dlb_blk_delay_clear_flex */
/* Demangled: dlb_blk_delay_clear_flex */
int dlb_blk_delay_clear_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L32 */
/* Demangled: dlb_dct_twiddle_table16_1_L32 */
extern void* dlb_dct_twiddle_table16_1_L32;

/* Symbol: DLB_r4_inv_fft_480 */
/* Demangled: DLB_r4_inv_fft_480 */
int DLB_r4_inv_fft_480(void);

/* Symbol: dlb_fft_inv_usc_384 */
/* Demangled: dlb_fft_inv_usc_384 */
int dlb_fft_inv_usc_384(void);

/* Symbol: vlib_transform_forward */
/* Demangled: vlib_transform_forward */
int vlib_transform_forward(void);

/* Symbol: vqe_get_asa_obj_age */
/* Demangled: vqe_get_asa_obj_age */
int vqe_get_asa_obj_age(void);

/* Symbol: _ZN5dolby16DapEffectContext23getSelectedTuningDeviceEiPvPj */
/* Demangled: dolby::DapEffectContext::getSelectedTuningDevice(int, void*, unsigned int*) */
int _ZN5dolby16DapEffectContext23getSelectedTuningDeviceEiPvPj(void);

/* Symbol: DLB_r4_inv_fft_768 */
/* Demangled: DLB_r4_inv_fft_768 */
int DLB_r4_inv_fft_768(void);

/* Symbol: DLB_r4_inv_fft_32 */
/* Demangled: DLB_r4_inv_fft_32 */
int DLB_r4_inv_fft_32(void);

/* Symbol: dlb_dct4_postmodulation_shl */
/* Demangled: dlb_dct4_postmodulation_shl */
int dlb_dct4_postmodulation_shl(void);

/* Symbol: vqe_save_audio_logs */
/* Demangled: vqe_save_audio_logs */
int vqe_save_audio_logs(void);

/* Symbol: DLB_MFB_P10KM_P64ATM301_LEGACY */
/* Demangled: DLB_MFB_P10KM_P64ATM301_LEGACY */
extern void* DLB_MFB_P10KM_P64ATM301_LEGACY;

/* Symbol: DLB_blk_Liir2ssv3L_inplace_strict */
/* Demangled: DLB_blk_Liir2ssv3L_inplace_strict */
int DLB_blk_Liir2ssv3L_inplace_strict(void);

/* Symbol: dlb_CLdivCLCLU_flex */
/* Demangled: dlb_CLdivCLCLU_flex */
int dlb_CLdivCLCLU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L36 */
/* Demangled: dlb_dct_twiddle_table16_1_L36 */
extern void* dlb_dct_twiddle_table16_1_L36;

/* Symbol: DLB_r4_fft_512 */
/* Demangled: DLB_r4_fft_512 */
int DLB_r4_fft_512(void);

/* Symbol: DLB_r4_inv_fft_4096 */
/* Demangled: DLB_r4_inv_fft_4096 */
int DLB_r4_inv_fft_4096(void);

/* Symbol: dlb_fft_inv_usc_40 */
/* Demangled: dlb_fft_inv_usc_40 */
int dlb_fft_inv_usc_40(void);

/* Symbol: utlog_set_1d_pdata */
/* Demangled: utlog_set_1d_pdata */
int utlog_set_1d_pdata(void);

/* Symbol: DLB_blk_LmixL_strict */
/* Demangled: DLB_blk_LmixL_strict */
int DLB_blk_LmixL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L180 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L180 */
extern void* dlb_dct_twiddle_table16_rev_1_L180;

/* Symbol: dlb_dct_twiddle_table16_rev_L576 */
/* Demangled: dlb_dct_twiddle_table16_rev_L576 */
extern void* dlb_dct_twiddle_table16_rev_L576;

/* Symbol: DLB_r4_inv_fft_15_s */
/* Demangled: DLB_r4_inv_fft_15_s */
int DLB_r4_inv_fft_15_s(void);

/* Symbol: DLB_r4_inv_fft_36 */
/* Demangled: DLB_r4_inv_fft_36 */
int DLB_r4_inv_fft_36(void);

/* Symbol: dlb_fft_fwd_usc_192 */
/* Demangled: dlb_fft_fwd_usc_192 */
int dlb_fft_fwd_usc_192(void);

/* Symbol: DLB_r4_inv_fft_48_s */
/* Demangled: DLB_r4_inv_fft_48_s */
int DLB_r4_inv_fft_48_s(void);

/* Symbol: DLB_unload_mfb_p10km_analysisL_filter_state */
/* Demangled: DLB_unload_mfb_p10km_analysisL_filter_state */
int DLB_unload_mfb_p10km_analysisL_filter_state(void);

/* Symbol: dlb_wave_end_data */
/* Demangled: dlb_wave_end_data */
int dlb_wave_end_data(void);

/* Symbol: vsv_banding_forward */
/* Demangled: vsv_banding_forward */
int vsv_banding_forward(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L720 */
/* Demangled: dlb_dct_twiddle_table16_rev_L720 */
extern void* dlb_dct_twiddle_table16_rev_L720;

/* Symbol: dlb_fft_inv_scl_160 */
/* Demangled: dlb_fft_inv_scl_160 */
int dlb_fft_inv_scl_160(void);

/* Symbol: _ZN5dolby10VqeProcess16copyToFloatArrayEPvPNS_14BufferProviderE14audio_format_t */
/* Demangled: dolby::VqeProcess::copyToFloatArray(void*, dolby::BufferProvider*, audio_format_t) */
int _ZN5dolby10VqeProcess16copyToFloatArrayEPvPNS_14BufferProviderE14audio_format_t(void);

/* Symbol: vsv_flux_cleanup */
/* Demangled: vsv_flux_cleanup */
int vsv_flux_cleanup(void);

/* Symbol: _ZN5dolby13EffectContext7disableEv */
/* Demangled: dolby::EffectContext::disable() */
int _ZN5dolby13EffectContext7disableEv(void);

/* Symbol: DLB_blk_Lattack_decay_peak_iir1L_setup */
/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_setup */
int DLB_blk_Lattack_decay_peak_iir1L_setup(void);

/* Symbol: dlb_cos_16_full */
/* Demangled: dlb_cos_16_full */
extern void* dlb_cos_16_full;

/* Symbol: _ZN5dolby13EffectContextD1Ev */
/* Demangled: dolby::EffectContext::~EffectContext() */
int _ZN5dolby13EffectContextD1Ev(void);

/* Symbol: _ZN5dolby16DapEffectContext15getDapParameterEjPvPj */
/* Demangled: dolby::DapEffectContext::getDapParameter(unsigned int, void*, unsigned int*) */
int _ZN5dolby16DapEffectContext15getDapParameterEjPvPj(void);

/* Symbol: dlb_fft_inv_usc_45 */
/* Demangled: dlb_fft_inv_usc_45 */
int dlb_fft_inv_usc_45(void);

/* Symbol: DLB_dsplib_init */
/* Demangled: DLB_dsplib_init */
int DLB_dsplib_init(void);

/* Symbol: DLB_qmf_synthesisL_set_slot_increment */
/* Demangled: DLB_qmf_synthesisL_set_slot_increment */
int DLB_qmf_synthesisL_set_slot_increment(void);

/* Symbol: dlb_dct_twiddle_table16_1_L640 */
/* Demangled: dlb_dct_twiddle_table16_1_L640 */
extern void* dlb_dct_twiddle_table16_1_L640;

/* Symbol: DLB_time_end */
/* Demangled: DLB_time_end */
int DLB_time_end(void);

/* Symbol: vsv_asa_curr_obj_id */
/* Demangled: vsv_asa_curr_obj_id */
int vsv_asa_curr_obj_id(void);

/* Symbol: DLB_blk_Liir2df1L_setup */
/* Demangled: DLB_blk_Liir2df1L_setup */
int DLB_blk_Liir2df1L_setup(void);

/* Symbol: DLB_r4_fft_40_s */
/* Demangled: DLB_r4_fft_40_s */
int DLB_r4_fft_40_s(void);

/* Symbol: dlb_fft_inv_usc_48 */
/* Demangled: dlb_fft_inv_usc_48 */
int dlb_fft_inv_usc_48(void);

/* Symbol: DLB_r4_fft_180_s */
/* Demangled: DLB_r4_fft_180_s */
int DLB_r4_fft_180_s(void);

/* Symbol: dlb_fft_fwd_scl_256 */
/* Demangled: dlb_fft_fwd_scl_256 */
int dlb_fft_fwd_scl_256(void);

/* Symbol: a_twist_table_CQMF_320x320x48_16000_tab */
/* Demangled: a_twist_table_CQMF_320x320x48_16000_tab */
extern void* a_twist_table_CQMF_320x320x48_16000_tab;

/* Symbol: _ZN5dolby16DapEffectContext11setPostgainEPvj */
/* Demangled: dolby::DapEffectContext::setPostgain(void*, unsigned int) */
int _ZN5dolby16DapEffectContext11setPostgainEPvj(void);

/* Symbol: _ZN5dolby16DapEffectContext15setDapParameterEPvj */
/* Demangled: dolby::DapEffectContext::setDapParameter(void*, unsigned int) */
int _ZN5dolby16DapEffectContext15setDapParameterEPvj(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L2 */
/* Demangled: dlb_dct_twiddle_table16_rev_L2 */
extern void* dlb_dct_twiddle_table16_rev_L2;

/* Symbol: dlb_blk_Lattack_decay_peak_iir1L_flex */
/* Demangled: dlb_blk_Lattack_decay_peak_iir1L_flex */
int dlb_blk_Lattack_decay_peak_iir1L_flex(void);

/* Symbol: DLB_r4_fft_30 */
/* Demangled: DLB_r4_fft_30 */
int DLB_r4_fft_30(void);

/* Symbol: DLB_fft_state_query_mem */
/* Demangled: DLB_fft_state_query_mem */
int DLB_fft_state_query_mem(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L24 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L24 */
extern void* dlb_dct_twiddle_table16_rev_1_L24;

/* Symbol: dlb_dct_twiddle_table16_rev_L4 */
/* Demangled: dlb_dct_twiddle_table16_rev_L4 */
extern void* dlb_dct_twiddle_table16_rev_L4;

/* Symbol: dlb_fft_inv_scl_40 */
/* Demangled: dlb_fft_inv_scl_40 */
int dlb_fft_inv_scl_40(void);

/* Symbol: _ZTVN5dolby11IDlbProcessE */
/* Demangled: vtable for dolby::IDlbProcess */
extern void* _ZTVN5dolby11IDlbProcessE;

/* Symbol: _ZN5dolby9DlbEffect13effectCommandEPP18effect_interface_sjjPvPjS4_ */
/* Demangled: dolby::DlbEffect::effectCommand(effect_interface_s**, unsigned int, unsigned int, void*, unsigned int*, void*) */
int _ZN5dolby9DlbEffect13effectCommandEPP18effect_interface_sjjPvPjS4_(void);

/* Symbol: dlb_dct_twiddle_table16_1_L360 */
/* Demangled: dlb_dct_twiddle_table16_1_L360 */
extern void* dlb_dct_twiddle_table16_1_L360;

/* Symbol: DLB_r4_fft_32 */
/* Demangled: DLB_r4_fft_32 */
int DLB_r4_fft_32(void);

/* Symbol: dlb_fft_inv_usc_256 */
/* Demangled: dlb_fft_inv_usc_256 */
int dlb_fft_inv_usc_256(void);

/* Symbol: vqe_api_open */
/* Demangled: vqe_api_open */
int vqe_api_open(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEEE;

/* Symbol: DLB_r4_fft_128_s */
/* Demangled: DLB_r4_fft_128_s */
int DLB_r4_fft_128_s(void);

/* Symbol: _ZN5dolby13EffectContext9getConfigEP15effect_config_s */
/* Demangled: dolby::EffectContext::getConfig(effect_config_s*) */
int _ZN5dolby13EffectContext9getConfigEP15effect_config_s(void);

/* Symbol: dlb_dct_twiddle_table16_1_L2 */
/* Demangled: dlb_dct_twiddle_table16_1_L2 */
extern void* dlb_dct_twiddle_table16_1_L2;

/* Symbol: dlb_dct_twiddle_table16_rev_L8 */
/* Demangled: dlb_dct_twiddle_table16_rev_L8 */
extern void* dlb_dct_twiddle_table16_rev_L8;

/* Symbol: DLB_r4_rfft_nn_s */
/* Demangled: DLB_r4_rfft_nn_s */
int DLB_r4_rfft_nn_s(void);

/* Symbol: DLB_mfb_p10km_analysisL_query_scratch */
/* Demangled: DLB_mfb_p10km_analysisL_query_scratch */
int DLB_mfb_p10km_analysisL_query_scratch(void);

/* Symbol: _ZN5dolby25Ac4DecAudioBufferProvider3setEPvi */
/* Demangled: dolby::Ac4DecAudioBufferProvider::set(void*, int) */
int _ZN5dolby25Ac4DecAudioBufferProvider3setEPvi(void);

/* Symbol: DLB_r4_fft_36 */
/* Demangled: DLB_r4_fft_36 */
int DLB_r4_fft_36(void);

/* Symbol: DLB_r4_inv_fft_20_s */
/* Demangled: DLB_r4_inv_fft_20_s */
int DLB_r4_inv_fft_20_s(void);

/* Symbol: dlb_fft_inv_scl_45 */
/* Demangled: dlb_fft_inv_scl_45 */
int dlb_fft_inv_scl_45(void);

/* Symbol: vsv_ns_open */
/* Demangled: vsv_ns_open */
int vsv_ns_open(void);

/* Symbol: dlb_dct_twiddle_table16_1_L4 */
/* Demangled: dlb_dct_twiddle_table16_1_L4 */
extern void* dlb_dct_twiddle_table16_1_L4;

/* Symbol: dlb_fft_fwd_scl_120 */
/* Demangled: dlb_fft_fwd_scl_120 */
int dlb_fft_fwd_scl_120(void);

/* Symbol: DLB_fft_CLfwd_scaledL */
/* Demangled: DLB_fft_CLfwd_scaledL */
int DLB_fft_CLfwd_scaledL(void);

/* Symbol: DLB_qmf_analysisS_set_slot_increment */
/* Demangled: DLB_qmf_analysisS_set_slot_increment */
int DLB_qmf_analysisS_set_slot_increment(void);

/* Symbol: a_twist_table_MDCT_320x320x48_16000_tab */
/* Demangled: a_twist_table_MDCT_320x320x48_16000_tab */
extern void* a_twist_table_MDCT_320x320x48_16000_tab;

/* Symbol: _ZN5dolby19AudioBufferProvider3setEP14audio_buffer_s */
/* Demangled: dolby::AudioBufferProvider::set(audio_buffer_s*) */
int _ZN5dolby19AudioBufferProvider3setEP14audio_buffer_s(void);

/* Symbol: vsv_banding_close */
/* Demangled: vsv_banding_close */
int vsv_banding_close(void);

/* Symbol: vqe_set_mode */
/* Demangled: vqe_set_mode */
int vqe_set_mode(void);

/* Symbol: _ZN5dolby17GameEffectContextD2Ev */
/* Demangled: dolby::GameEffectContext::~GameEffectContext() */
int _ZN5dolby17GameEffectContextD2Ev(void);

/* Symbol: DLB_blk_LmixnL */
/* Demangled: DLB_blk_LmixnL */
int DLB_blk_LmixnL(void);

/* Symbol: dlb_fft_inv_scl_48 */
/* Demangled: dlb_fft_inv_scl_48 */
int dlb_fft_inv_scl_48(void);

/* Symbol: DLB_fft_scratch_query_mem */
/* Demangled: DLB_fft_scratch_query_mem */
int DLB_fft_scratch_query_mem(void);

/* Symbol: _ZN5dolby16DapEffectContext13getTuningListEiPvPj */
/* Demangled: dolby::DapEffectContext::getTuningList(int, void*, unsigned int*) */
int _ZN5dolby16DapEffectContext13getTuningListEiPvPj(void);

/* Symbol: dlb_vec_IeqLLU_flex */
/* Demangled: dlb_vec_IeqLLU_flex */
int dlb_vec_IeqLLU_flex(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcess8setParamEiPKii */
/* Demangled: dolby::DlbCrossfadeProcess::setParam(int, int const*, int) */
int _ZN5dolby19DlbCrossfadeProcess8setParamEiPKii(void);

/* Symbol: vlib_transform_close */
/* Demangled: vlib_transform_close */
int vlib_transform_close(void);

/* Symbol: dlb_vec_SshlSIU_inplace_flex */
/* Demangled: dlb_vec_SshlSIU_inplace_flex */
int dlb_vec_SshlSIU_inplace_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L8 */
/* Demangled: dlb_dct_twiddle_table16_1_L8 */
extern void* dlb_dct_twiddle_table16_1_L8;

/* Symbol: dlb_fft_inv_usc_120 */
/* Demangled: dlb_fft_inv_usc_120 */
int dlb_fft_inv_usc_120(void);

/* Symbol: dlb_octfile_seek */
/* Demangled: dlb_octfile_seek */
int dlb_octfile_seek(void);

/* Symbol: _ZN5dolby17DlbBufferProviderC1Ev */
/* Demangled: dolby::DlbBufferProvider::DlbBufferProvider() */
int _ZN5dolby17DlbBufferProviderC1Ev(void);

/* Symbol: DLB_vec_SshlSIU_inplace_strict */
/* Demangled: DLB_vec_SshlSIU_inplace_strict */
int DLB_vec_SshlSIU_inplace_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L512 */
/* Demangled: dlb_dct_twiddle_table16_1_L512 */
extern void* dlb_dct_twiddle_table16_1_L512;

/* Symbol: DLB_r4_fft_960_s */
/* Demangled: DLB_r4_fft_960_s */
int DLB_r4_fft_960_s(void);

/* Symbol: _ZN5dolby13EffectContext9setDeviceE15audio_devices_t */
/* Demangled: dolby::EffectContext::setDevice(audio_devices_t) */
int _ZN5dolby13EffectContext9setDeviceE15audio_devices_t(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvj(void);

/* Symbol: dlb_dct_twiddle_table16_L360_1 */
/* Demangled: dlb_dct_twiddle_table16_L360_1 */
extern void* dlb_dct_twiddle_table16_L360_1;

/* Symbol: dlb_riff_close */
/* Demangled: dlb_riff_close */
int dlb_riff_close(void);

/* Symbol: dlb_dct_twiddle_table16_L360_2 */
/* Demangled: dlb_dct_twiddle_table16_L360_2 */
extern void* dlb_dct_twiddle_table16_L360_2;

/* Symbol: DLB_r4_inv_fft_2 */
/* Demangled: DLB_r4_inv_fft_2 */
int DLB_r4_inv_fft_2(void);

/* Symbol: dlb_fft_fwd_usc_480 */
/* Demangled: dlb_fft_fwd_usc_480 */
int dlb_fft_fwd_usc_480(void);

/* Symbol: DLB_blk_Liir2ssefL_set_coef */
/* Demangled: DLB_blk_Liir2ssefL_set_coef */
int DLB_blk_Liir2ssefL_set_coef(void);

/* Symbol: dlb_fft_fwd_usc_768 */
/* Demangled: dlb_fft_fwd_usc_768 */
int dlb_fft_fwd_usc_768(void);

/* Symbol: dlb_fft_fwd_scl_128 */
/* Demangled: dlb_fft_fwd_scl_128 */
int dlb_fft_fwd_scl_128(void);

/* Symbol: vsv_flux_process */
/* Demangled: vsv_flux_process */
int vsv_flux_process(void);

/* Symbol: DLB_vec_LsetLU_strict */
/* Demangled: DLB_vec_LsetLU_strict */
int DLB_vec_LsetLU_strict(void);

/* Symbol: _ZN5dolby18VoiceEffectContextD0Ev */
/* Demangled: dolby::VoiceEffectContext::~VoiceEffectContext() */
int _ZN5dolby18VoiceEffectContextD0Ev(void);

/* Symbol: DLB_r4_inv_fft_4 */
/* Demangled: DLB_r4_inv_fft_4 */
int DLB_r4_inv_fft_4(void);

/* Symbol: dlb_dct_twiddle_table16_L480_cos */
/* Demangled: dlb_dct_twiddle_table16_L480_cos */
extern void* dlb_dct_twiddle_table16_L480_cos;

/* Symbol: utlog_set_2d_pdata */
/* Demangled: utlog_set_2d_pdata */
int utlog_set_2d_pdata(void);

/* Symbol: vqe_get_asa_temp_obj_level */
/* Demangled: vqe_get_asa_temp_obj_level */
int vqe_get_asa_temp_obj_level(void);

/* Symbol: DLB_r4_inv_fft_40 */
/* Demangled: DLB_r4_inv_fft_40 */
int DLB_r4_inv_fft_40(void);

/* Symbol: DLB_r4_inv_fft_256_s */
/* Demangled: DLB_r4_inv_fft_256_s */
int DLB_r4_inv_fft_256_s(void);

/* Symbol: _ZN5dolby25Ac4DecAudioBufferProvider9configureE14audio_format_tjj */
/* Demangled: dolby::Ac4DecAudioBufferProvider::configure(audio_format_t, unsigned int, unsigned int) */
int _ZN5dolby25Ac4DecAudioBufferProvider9configureE14audio_format_tjj(void);

/* Symbol: _ZN5dolby9EffectVqeC1EPNS_11IDlbProcessE */
/* Demangled: dolby::EffectVqe::EffectVqe(dolby::IDlbProcess*) */
int _ZN5dolby9EffectVqeC1EPNS_11IDlbProcessE(void);

/* Symbol: a_twist_table_CQMF_160x160x40_08000_tab */
/* Demangled: a_twist_table_CQMF_160x160x40_08000_tab */
extern void* a_twist_table_CQMF_160x160x40_08000_tab;

/* Symbol: vsv_mixer_ctrl_get_outputs */
/* Demangled: vsv_mixer_ctrl_get_outputs */
int vsv_mixer_ctrl_get_outputs(void);

/* Symbol: DLB_blk_LmixLL_strict */
/* Demangled: DLB_blk_LmixLL_strict */
int DLB_blk_LmixLL_strict(void);

/* Symbol: DLB_r4_fft_192_s */
/* Demangled: DLB_r4_fft_192_s */
int DLB_r4_fft_192_s(void);

/* Symbol: DLB_r4_inv_fft_6 */
/* Demangled: DLB_r4_inv_fft_6 */
int DLB_r4_inv_fft_6(void);

/* Symbol: a_vsv_modes_tab */
/* Demangled: a_vsv_modes_tab */
extern void* a_vsv_modes_tab;

/* Symbol: dlb_fft_inv_usc_128 */
/* Demangled: dlb_fft_inv_usc_128 */
int dlb_fft_inv_usc_128(void);

/* Symbol: _ZN5dolby22UdcAudioBufferProvider9configureE14audio_format_tjj */
/* Demangled: dolby::UdcAudioBufferProvider::configure(audio_format_t, unsigned int, unsigned int) */
int _ZN5dolby22UdcAudioBufferProvider9configureE14audio_format_tjj(void);

/* Symbol: a_twist_table_CQMF_960x960x61_48000_tab */
/* Demangled: a_twist_table_CQMF_960x960x61_48000_tab */
extern void* a_twist_table_CQMF_960x960x61_48000_tab;

/* Symbol: vsv_flux_def_num */
/* Demangled: vsv_flux_def_num */
extern void* vsv_flux_def_num;

/* Symbol: DLB_r4_inv_fft_8 */
/* Demangled: DLB_r4_inv_fft_8 */
int DLB_r4_inv_fft_8(void);

/* Symbol: a_twist_table_MDXT_320x320x48_16000_tab */
/* Demangled: a_twist_table_MDXT_320x320x48_16000_tab */
extern void* a_twist_table_MDXT_320x320x48_16000_tab;

/* Symbol: dlb_dct_twiddle_table16_1_L45 */
/* Demangled: dlb_dct_twiddle_table16_1_L45 */
extern void* dlb_dct_twiddle_table16_1_L45;

/* Symbol: DLB_BLmpy_scaleBLSU_strict */
/* Demangled: DLB_BLmpy_scaleBLSU_strict */
int DLB_BLmpy_scaleBLSU_strict(void);

/* Symbol: DLB_blk_Liir2ssv1efL_strict */
/* Demangled: DLB_blk_Liir2ssv1efL_strict */
int DLB_blk_Liir2ssv1efL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L2 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L2 */
extern void* dlb_dct_twiddle_table16_rev_1_L2;

/* Symbol: DLB_r4_inv_fft_45 */
/* Demangled: DLB_r4_inv_fft_45 */
int DLB_r4_inv_fft_45(void);

/* Symbol: dlb_fft_fwd_usc_60 */
/* Demangled: dlb_fft_fwd_usc_60 */
int dlb_fft_fwd_usc_60(void);

/* Symbol: dlb_fft_inv_usc_2 */
/* Demangled: dlb_fft_inv_usc_2 */
int dlb_fft_inv_usc_2(void);

/* Symbol: vqe_api_set_maxsnr */
/* Demangled: vqe_api_set_maxsnr */
int vqe_api_set_maxsnr(void);

/* Symbol: DLB_blk_LmaxLL_strict */
/* Demangled: DLB_blk_LmaxLL_strict */
int DLB_blk_LmaxLL_strict(void);

/* Symbol: vqe_get_in_level */
/* Demangled: vqe_get_in_level */
int vqe_get_in_level(void);

/* Symbol: dlb_dct_twiddle_table16_1_L48 */
/* Demangled: dlb_dct_twiddle_table16_1_L48 */
extern void* dlb_dct_twiddle_table16_1_L48;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L4 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L4 */
extern void* dlb_dct_twiddle_table16_rev_1_L4;

/* Symbol: dlb_odd_fft_cplx_inv_usc */
/* Demangled: dlb_odd_fft_cplx_inv_usc */
extern void* dlb_odd_fft_cplx_inv_usc;

/* Symbol: dlb_fft_inv_usc_4 */
/* Demangled: dlb_fft_inv_usc_4 */
int dlb_fft_inv_usc_4(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L192 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L192 */
extern void* dlb_dct_twiddle_table16_rev_1_L192;

/* Symbol: DLB_r4_inv_fft_48 */
/* Demangled: DLB_r4_inv_fft_48 */
int DLB_r4_inv_fft_48(void);

/* Symbol: dlb_cos_16_full_scl */
/* Demangled: dlb_cos_16_full_scl */
extern void* dlb_cos_16_full_scl;

/* Symbol: _ZN5dolby16DlbBufferAdapter10setEnabledEb */
/* Demangled: dolby::DlbBufferAdapter::setEnabled(bool) */
int _ZN5dolby16DlbBufferAdapter10setEnabledEb(void);

/* Symbol: dlb_octfile_read */
/* Demangled: dlb_octfile_read */
int dlb_octfile_read(void);

/* Symbol: dlb_wave_open_write */
/* Demangled: dlb_wave_open_write */
int dlb_wave_open_write(void);

/* Symbol: DLB_vec_LmpyLSU_strict */
/* Demangled: DLB_vec_LmpyLSU_strict */
int DLB_vec_LmpyLSU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L2_1 */
/* Demangled: dlb_dct_twiddle_table16_L2_1 */
extern void* dlb_dct_twiddle_table16_L2_1;

/* Symbol: DLB_r4_inv_fft_640 */
/* Demangled: DLB_r4_inv_fft_640 */
int DLB_r4_inv_fft_640(void);

/* Symbol: DLB_r4_inv_fft_32_s */
/* Demangled: DLB_r4_inv_fft_32_s */
int DLB_r4_inv_fft_32_s(void);

/* Symbol: dlb_fft_inv_usc_6 */
/* Demangled: dlb_fft_inv_usc_6 */
int dlb_fft_inv_usc_6(void);

/* Symbol: dlb_fft_fwd_usc_64 */
/* Demangled: dlb_fft_fwd_usc_64 */
int dlb_fft_fwd_usc_64(void);

/* Symbol: DLB_blk_Lmix_shlUL_strict */
/* Demangled: DLB_blk_Lmix_shlUL_strict */
int DLB_blk_Lmix_shlUL_strict(void);

/* Symbol: dlb_blk_Lmix_shlULL_flex */
/* Demangled: dlb_blk_Lmix_shlULL_flex */
int dlb_blk_Lmix_shlULL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L2_2 */
/* Demangled: dlb_dct_twiddle_table16_L2_2 */
extern void* dlb_dct_twiddle_table16_L2_2;

/* Symbol: DLB_r4_fft_240 */
/* Demangled: DLB_r4_fft_240 */
int DLB_r4_fft_240(void);

/* Symbol: DLB_r4_fft_8_s */
/* Demangled: DLB_r4_fft_8_s */
int DLB_r4_fft_8_s(void);

/* Symbol: DLB_qmf_analysisL_init */
/* Demangled: DLB_qmf_analysisL_init */
int DLB_qmf_analysisL_init(void);

/* Symbol: dlb_dct_twiddle_table16_L90_cos */
/* Demangled: dlb_dct_twiddle_table16_L90_cos */
extern void* dlb_dct_twiddle_table16_L90_cos;

/* Symbol: dlb_octfile_get_memory */
/* Demangled: dlb_octfile_get_memory */
int dlb_octfile_get_memory(void);

/* Symbol: vsv_ne_open */
/* Demangled: vsv_ne_open */
int vsv_ne_open(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L8 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L8 */
extern void* dlb_dct_twiddle_table16_rev_1_L8;

/* Symbol: DLB_r4_fft_2048 */
/* Demangled: DLB_r4_fft_2048 */
int DLB_r4_fft_2048(void);

/* Symbol: dlb_fft_inv_usc_8 */
/* Demangled: dlb_fft_inv_usc_8 */
int dlb_fft_inv_usc_8(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_32 */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_32 */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_32;

/* Symbol: vsv_flux_get_outputs */
/* Demangled: vsv_flux_get_outputs */
int vsv_flux_get_outputs(void);

/* Symbol: dlb_blk_Liir1_shl_addLL_flex */
/* Demangled: dlb_blk_Liir1_shl_addLL_flex */
int dlb_blk_Liir1_shl_addLL_flex(void);

/* Symbol: dlb_fft_fwd_scl_960 */
/* Demangled: dlb_fft_fwd_scl_960 */
int dlb_fft_fwd_scl_960(void);

/* Symbol: _ZN5dolby19VqeCrossfadeProcessD2Ev */
/* Demangled: dolby::VqeCrossfadeProcess::~VqeCrossfadeProcess() */
int _ZN5dolby19VqeCrossfadeProcessD2Ev(void);

/* Symbol: vqe_open */
/* Demangled: vqe_open */
int vqe_open(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L30 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L30 */
extern void* dlb_dct_twiddle_table16_rev_1_L30;

/* Symbol: dlb_dct_twiddle_table16_L320 */
/* Demangled: dlb_dct_twiddle_table16_L320 */
extern void* dlb_dct_twiddle_table16_L320;

/* Symbol: DLB_r4_rfft_nn */
/* Demangled: DLB_r4_rfft_nn */
int DLB_r4_rfft_nn(void);

/* Symbol: _ZN5dolby9EffectVqe7processEP14audio_buffer_sS2_ */
/* Demangled: dolby::EffectVqe::process(audio_buffer_s*, audio_buffer_s*) */
int _ZN5dolby9EffectVqe7processEP14audio_buffer_sS2_(void);

/* Symbol: _ZTVN5dolby19AudioBufferProviderE */
/* Demangled: vtable for dolby::AudioBufferProvider */
extern void* _ZTVN5dolby19AudioBufferProviderE;

/* Symbol: vlib_transform_init */
/* Demangled: vlib_transform_init */
int vlib_transform_init(void);

/* Symbol: vstack_get_max_used */
/* Demangled: vstack_get_max_used */
int vstack_get_max_used(void);

/* Symbol: _ZN5dolby9DlbEffect28handle_EFFECT_CMD_GET_CONFIGERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_GET_CONFIG(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect28handle_EFFECT_CMD_GET_CONFIGERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: datalog_write */
/* Demangled: datalog_write */
int datalog_write(void);

/* Symbol: dft_fwd_scaled */
/* Demangled: dft_fwd_scaled */
int dft_fwd_scaled(void);

/* Symbol: vsv_banding_init */
/* Demangled: vsv_banding_init */
int vsv_banding_init(void);

/* Symbol: DLB_blk_Liir1L_set_coef */
/* Demangled: DLB_blk_Liir1L_set_coef */
int DLB_blk_Liir1L_set_coef(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L32 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L32 */
extern void* dlb_dct_twiddle_table16_rev_1_L32;

/* Symbol: vsv_ns_close */
/* Demangled: vsv_ns_close */
int vsv_ns_close(void);

/* Symbol: _ZN5dolby13EffectContext9setConfigEPK15effect_config_s */
/* Demangled: dolby::EffectContext::setConfig(effect_config_s const*) */
int _ZN5dolby13EffectContext9setConfigEPK15effect_config_s(void);

/* Symbol: _ZN5dolby13EffectContextC2Ev */
/* Demangled: dolby::EffectContext::EffectContext() */
int _ZN5dolby13EffectContextC2Ev(void);

/* Symbol: DLB_BLmpy_scale_xBLSU_strict */
/* Demangled: DLB_BLmpy_scale_xBLSU_strict */
int DLB_BLmpy_scale_xBLSU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L90_1 */
/* Demangled: dlb_dct_twiddle_table16_L90_1 */
extern void* dlb_dct_twiddle_table16_L90_1;

/* Symbol: DLB_r4_fft_40 */
/* Demangled: DLB_r4_fft_40 */
int DLB_r4_fft_40(void);

/* Symbol: DLB_r4_inv_fft_360 */
/* Demangled: DLB_r4_inv_fft_360 */
int DLB_r4_inv_fft_360(void);

/* Symbol: dlb_fft_inv_scl_320 */
/* Demangled: dlb_fft_inv_scl_320 */
int dlb_fft_inv_scl_320(void);

/* Symbol: dlb_fft_inv_usc_960 */
/* Demangled: dlb_fft_inv_usc_960 */
int dlb_fft_inv_usc_960(void);

/* Symbol: a_vsv_tx_defs_tab */
/* Demangled: a_vsv_tx_defs_tab */
extern void* a_vsv_tx_defs_tab;

/* Symbol: _ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_DEVICEERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_SET_DEVICE(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_DEVICEERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: _ZN5dolby16DapEffectContext16getTuningVersionEPvPj */
/* Demangled: dolby::DapEffectContext::getTuningVersion(void*, unsigned int*) */
int _ZN5dolby16DapEffectContext16getTuningVersionEPvPj(void);

/* Symbol: dlb_dct_twiddle_table16_L90_2 */
/* Demangled: dlb_dct_twiddle_table16_L90_2 */
extern void* dlb_dct_twiddle_table16_L90_2;

/* Symbol: DLB_r4_fft_90_s */
/* Demangled: DLB_r4_fft_90_s */
int DLB_r4_fft_90_s(void);

/* Symbol: dlb_fft_fwd_scl_60 */
/* Demangled: dlb_fft_fwd_scl_60 */
int dlb_fft_fwd_scl_60(void);

/* Symbol: dlb_wave_insert_chunk */
/* Demangled: dlb_wave_insert_chunk */
int dlb_wave_insert_chunk(void);

/* Symbol: dlb_wave_int_write */
/* Demangled: dlb_wave_int_write */
int dlb_wave_int_write(void);

/* Symbol: _ZN5dolby10VqeProcess18copyFromFloatArrayEPNS_14BufferProviderEPv14audio_format_t */
/* Demangled: dolby::VqeProcess::copyFromFloatArray(dolby::BufferProvider*, void*, audio_format_t) */
int _ZN5dolby10VqeProcess18copyFromFloatArrayEPNS_14BufferProviderEPv14audio_format_t(void);

/* Symbol: a_twist_table_MDFT_320x320x48_16000_tab */
/* Demangled: a_twist_table_MDFT_320x320x48_16000_tab */
extern void* a_twist_table_MDFT_320x320x48_16000_tab;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L36 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L36 */
extern void* dlb_dct_twiddle_table16_rev_1_L36;

/* Symbol: dlb_dct_twiddle_table16_L64_1 */
/* Demangled: dlb_dct_twiddle_table16_L64_1 */
extern void* dlb_dct_twiddle_table16_L64_1;

/* Symbol: dlb_dct_twiddle_table16_L30_cos */
/* Demangled: dlb_dct_twiddle_table16_L30_cos */
extern void* dlb_dct_twiddle_table16_L30_cos;

/* Symbol: dlb_octfile_close */
/* Demangled: dlb_octfile_close */
int dlb_octfile_close(void);

/* Symbol: _ZTVN5dolby19DlbCrossfadeProcessE */
/* Demangled: vtable for dolby::DlbCrossfadeProcess */
extern void* _ZTVN5dolby19DlbCrossfadeProcessE;

/* Symbol: DLB_blk_delay_setup_strict */
/* Demangled: DLB_blk_delay_setup_strict */
int DLB_blk_delay_setup_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L64_2 */
/* Demangled: dlb_dct_twiddle_table16_L64_2 */
extern void* dlb_dct_twiddle_table16_L64_2;

/* Symbol: DLB_r4_fft_64_s */
/* Demangled: DLB_r4_fft_64_s */
int DLB_r4_fft_64_s(void);

/* Symbol: utlog_disable_all */
/* Demangled: utlog_disable_all */
int utlog_disable_all(void);

/* Symbol: vsv_asa_temp_obj_level */
/* Demangled: vsv_asa_temp_obj_level */
int vsv_asa_temp_obj_level(void);

/* Symbol: a_vsv_block_def_tab */
/* Demangled: a_vsv_block_def_tab */
extern void* a_vsv_block_def_tab;

/* Symbol: _ZN5dolby9DlbEffect22handle_EFFECT_CMD_INITERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_INIT(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect22handle_EFFECT_CMD_INITERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: DLB_r4_fft_45 */
/* Demangled: DLB_r4_fft_45 */
int DLB_r4_fft_45(void);

/* Symbol: dlb_fft_fwd_scl_64 */
/* Demangled: dlb_fft_fwd_scl_64 */
int dlb_fft_fwd_scl_64(void);

/* Symbol: _ZN5dolby9DlbEffect7releaseEPP18effect_interface_s */
/* Demangled: dolby::DlbEffect::release(effect_interface_s**) */
int _ZN5dolby9DlbEffect7releaseEPP18effect_interface_s(void);

/* Symbol: datalog_write_long */
/* Demangled: datalog_write_long */
int datalog_write_long(void);

/* Symbol: vsv_banding_def_find */
/* Demangled: vsv_banding_def_find */
int vsv_banding_def_find(void);

/* Symbol: vsv_tx_defs_num */
/* Demangled: vsv_tx_defs_num */
extern void* vsv_tx_defs_num;

/* Symbol: _ZN5dolby13EffectContext14isEffectActiveEv */
/* Demangled: dolby::EffectContext::isEffectActive() */
int _ZN5dolby13EffectContext14isEffectActiveEv(void);

/* Symbol: _ZN5dolby13EffectContext21transformExternalGainEj */
/* Demangled: dolby::EffectContext::transformExternalGain(unsigned int) */
int _ZN5dolby13EffectContext21transformExternalGainEj(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301 */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301 */
extern void* dlb_qmf_filter_coeff_P5_p64atm301;

/* Symbol: a_twist_table_MDXT_160x160x40_08000_tab */
/* Demangled: a_twist_table_MDXT_160x160x40_08000_tab */
extern void* a_twist_table_MDXT_160x160x40_08000_tab;

/* Symbol: utlog_set_ppdata */
/* Demangled: utlog_set_ppdata */
int utlog_set_ppdata(void);

/* Symbol: vsv_trag_cleanup */
/* Demangled: vsv_trag_cleanup */
int vsv_trag_cleanup(void);

/* Symbol: DLB_vec_UnormSU_strict */
/* Demangled: DLB_vec_UnormSU_strict */
int DLB_vec_UnormSU_strict(void);

/* Symbol: DLB_blk_Liir2ssefL_setup */
/* Demangled: DLB_blk_Liir2ssefL_setup */
int DLB_blk_Liir2ssefL_setup(void);

/* Symbol: DLB_r4_fft_320_s */
/* Demangled: DLB_r4_fft_320_s */
int DLB_r4_fft_320_s(void);

/* Symbol: DLB_r4_fft_48 */
/* Demangled: DLB_r4_fft_48 */
int DLB_r4_fft_48(void);

/* Symbol: dlb_fft_inv_usc_1024 */
/* Demangled: dlb_fft_inv_usc_1024 */
int dlb_fft_inv_usc_1024(void);

/* Symbol: a_twist_table_MDXT_960x960x61_48000_tab */
/* Demangled: a_twist_table_MDXT_960x960x61_48000_tab */
extern void* a_twist_table_MDXT_960x960x61_48000_tab;

/* Symbol: vqe_get_asa_obj_voice_count */
/* Demangled: vqe_get_asa_obj_voice_count */
int vqe_get_asa_obj_voice_count(void);

/* Symbol: vqe_get_voice_level */
/* Demangled: vqe_get_voice_level */
int vqe_get_voice_level(void);

/* Symbol: DLB_time_lt */
/* Demangled: DLB_time_lt */
int DLB_time_lt(void);

/* Symbol: vstack_close */
/* Demangled: vstack_close */
int vstack_close(void);

/* Symbol: DLB_CLCLmix6CL12SU_strict */
/* Demangled: DLB_CLCLmix6CL12SU_strict */
int DLB_CLCLmix6CL12SU_strict(void);

/* Symbol: DLB_r4_inv_fft_512 */
/* Demangled: DLB_r4_inv_fft_512 */
int DLB_r4_inv_fft_512(void);

/* Symbol: _ZN5dolby16VqeBufferAdapterD2Ev */
/* Demangled: dolby::VqeBufferAdapter::~VqeBufferAdapter() */
int _ZN5dolby16VqeBufferAdapterD2Ev(void);

/* Symbol: DLB_hybrid_synthesisCL_query_mem */
/* Demangled: DLB_hybrid_synthesisCL_query_mem */
int DLB_hybrid_synthesisCL_query_mem(void);

/* Symbol: _ZN5dolby9EffectVqeD0Ev */
/* Demangled: dolby::EffectVqe::~EffectVqe() */
int _ZN5dolby9EffectVqeD0Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE;

/* Symbol: DLB_blk_Lattack_decay_peak_iir1L_strict */
/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_strict */
int DLB_blk_Lattack_decay_peak_iir1L_strict(void);

/* Symbol: analysis_s_mdct */
/* Demangled: analysis_s_mdct */
int analysis_s_mdct(void);

/* Symbol: dlb_cos_32_full */
/* Demangled: dlb_cos_32_full */
extern void* dlb_cos_32_full;

/* Symbol: DLB_qmf_analysisS_query_mem */
/* Demangled: DLB_qmf_analysisS_query_mem */
int DLB_qmf_analysisS_query_mem(void);

/* Symbol: DLB_blk_Liir2ssv3aLU_inplace_strict */
/* Demangled: DLB_blk_Liir2ssv3aLU_inplace_strict */
int DLB_blk_Liir2ssv3aLU_inplace_strict(void);

/* Symbol: DLB_vec_LshlLIU_inplace_strict */
/* Demangled: DLB_vec_LshlLIU_inplace_strict */
int DLB_vec_LshlLIU_inplace_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L320 */
/* Demangled: dlb_dct_twiddle_table16_rev_L320 */
extern void* dlb_dct_twiddle_table16_rev_L320;

/* Symbol: dlb_vec_Lsum_sqrLUU_flex */
/* Demangled: dlb_vec_Lsum_sqrLUU_flex */
int dlb_vec_Lsum_sqrLUU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L12 */
/* Demangled: dlb_dct_twiddle_table16_rev_L12 */
extern void* dlb_dct_twiddle_table16_rev_L12;

/* Symbol: dlb_fft_cplx_inv_scl */
/* Demangled: dlb_fft_cplx_inv_scl */
extern void* dlb_fft_cplx_inv_scl;

/* Symbol: DLB_blk_Lcrossfade_gainLS_strict */
/* Demangled: DLB_blk_Lcrossfade_gainLS_strict */
int DLB_blk_Lcrossfade_gainLS_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L480 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L480 */
extern void* dlb_dct_twiddle_table16_rev_1_L480;

/* Symbol: DLB_r4_fft_384 */
/* Demangled: DLB_r4_fft_384 */
int DLB_r4_fft_384(void);

/* Symbol: stats_copy */
/* Demangled: stats_copy */
int stats_copy(void);

/* Symbol: dlb_dct_twiddle_table16_1_L240 */
/* Demangled: dlb_dct_twiddle_table16_1_L240 */
extern void* dlb_dct_twiddle_table16_1_L240;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L768 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L768 */
extern void* dlb_dct_twiddle_table16_rev_1_L768;

/* Symbol: dlb_dct_twiddle_table16_rev_L15 */
/* Demangled: dlb_dct_twiddle_table16_rev_L15 */
extern void* dlb_dct_twiddle_table16_rev_L15;

/* Symbol: utlog_add_2d_variable */
/* Demangled: utlog_add_2d_variable */
int utlog_add_2d_variable(void);

/* Symbol: vsv_mixer_ctrl_close */
/* Demangled: vsv_mixer_ctrl_close */
int vsv_mixer_ctrl_close(void);

/* Symbol: DLB_blk_LsubLL_strict */
/* Demangled: DLB_blk_LsubLL_strict */
int DLB_blk_LsubLL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L16 */
/* Demangled: dlb_dct_twiddle_table16_rev_L16 */
extern void* dlb_dct_twiddle_table16_rev_L16;

/* Symbol: DLB_r4_fft_288_s */
/* Demangled: DLB_r4_fft_288_s */
int DLB_r4_fft_288_s(void);

/* Symbol: DLB_r4_inv_fft_240_s */
/* Demangled: DLB_r4_inv_fft_240_s */
int DLB_r4_inv_fft_240_s(void);

/* Symbol: a_vsv_flux_def_tab */
/* Demangled: a_vsv_flux_def_tab */
extern void* a_vsv_flux_def_tab;

/* Symbol: dlb_blk_Lfir3L_flex */
/* Demangled: dlb_blk_Lfir3L_flex */
int dlb_blk_Lfir3L_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L384_1 */
/* Demangled: dlb_dct_twiddle_table16_L384_1 */
extern void* dlb_dct_twiddle_table16_L384_1;

/* Symbol: analysis_s */
/* Demangled: analysis_s */
int analysis_s(void);

/* Symbol: dlb_dct_twiddle_table16_L384_2 */
/* Demangled: dlb_dct_twiddle_table16_L384_2 */
extern void* dlb_dct_twiddle_table16_L384_2;

/* Symbol: a_twist_table_MDFT_160x160x40_08000_tab */
/* Demangled: a_twist_table_MDFT_160x160x40_08000_tab */
extern void* a_twist_table_MDFT_160x160x40_08000_tab;

/* Symbol: _ZN5dolby18VoiceEffectContextC1Ev */
/* Demangled: dolby::VoiceEffectContext::VoiceEffectContext() */
int _ZN5dolby18VoiceEffectContextC1Ev(void);

/* Symbol: dlb_unused_debug */
/* Demangled: dlb_unused_debug */
extern void* dlb_unused_debug;

/* Symbol: dlb_dct_twiddle_table16_L180 */
/* Demangled: dlb_dct_twiddle_table16_L180 */
extern void* dlb_dct_twiddle_table16_L180;

/* Symbol: DLB_r4_inv_fft_768_s */
/* Demangled: DLB_r4_inv_fft_768_s */
int DLB_r4_inv_fft_768_s(void);

/* Symbol: dlb_fft_fwd_usc_640 */
/* Demangled: dlb_fft_fwd_usc_640 */
int dlb_fft_fwd_usc_640(void);

/* Symbol: dlb_fft_inv_usc_60 */
/* Demangled: dlb_fft_inv_usc_60 */
int dlb_fft_inv_usc_60(void);

/* Symbol: _ZN5dolby17DlbBufferProvider9configureEi14audio_format_t20audio_channel_mask_t */
/* Demangled: dolby::DlbBufferProvider::configure(int, audio_format_t, audio_channel_mask_t) */
int _ZN5dolby17DlbBufferProvider9configureEi14audio_format_t20audio_channel_mask_t(void);

/* Symbol: dlb_riff_override_chunk_size */
/* Demangled: dlb_riff_override_chunk_size */
int dlb_riff_override_chunk_size(void);

/* Symbol: vqe_get_mixer_gain */
/* Demangled: vqe_get_mixer_gain */
int vqe_get_mixer_gain(void);

/* Symbol: DLB_Lqmf_synthesisCL_Head1Bit */
/* Demangled: DLB_Lqmf_synthesisCL_Head1Bit */
int DLB_Lqmf_synthesisCL_Head1Bit(void);

/* Symbol: DLB_time_reset */
/* Demangled: DLB_time_reset */
int DLB_time_reset(void);

/* Symbol: _ZN5dolby16DlbBufferAdapter8getParamEiPiS1_ */
/* Demangled: dolby::DlbBufferAdapter::getParam(int, int*, int*) */
int _ZN5dolby16DlbBufferAdapter8getParamEiPiS1_(void);

/* Symbol: a_twist_table_MDFT_960x960x61_48000_tab */
/* Demangled: a_twist_table_MDFT_960x960x61_48000_tab */
extern void* a_twist_table_MDFT_960x960x61_48000_tab;

/* Symbol: dlb_CLzeroCLU_flex */
/* Demangled: dlb_CLzeroCLU_flex */
int dlb_CLzeroCLU_flex(void);

/* Symbol: _dlb_ldct2_unscaled_iplu */
/* Demangled: _dlb_ldct2_unscaled_iplu */
int _dlb_ldct2_unscaled_iplu(void);

/* Symbol: dlb_fft_fwd_usc_72 */
/* Demangled: dlb_fft_fwd_usc_72 */
int dlb_fft_fwd_usc_72(void);

/* Symbol: dlb_dct_twiddle_table16_L15_cos */
/* Demangled: dlb_dct_twiddle_table16_L15_cos */
extern void* dlb_dct_twiddle_table16_L15_cos;

/* Symbol: _ZN5dolby13EffectContext12isConfiguredEv */
/* Demangled: dolby::EffectContext::isConfigured() */
int _ZN5dolby13EffectContext12isConfiguredEv(void);

/* Symbol: dlb_fft_inv_scl_180 */
/* Demangled: dlb_fft_inv_scl_180 */
int dlb_fft_inv_scl_180(void);

/* Symbol: _ZN5dolby16DapEffectContext23setSelectedTuningDeviceEPvj */
/* Demangled: dolby::DapEffectContext::setSelectedTuningDevice(void*, unsigned int) */
int _ZN5dolby16DapEffectContext23setSelectedTuningDeviceEPvj(void);

/* Symbol: dlb_dct_twiddle_table16_L1024_1 */
/* Demangled: dlb_dct_twiddle_table16_L1024_1 */
extern void* dlb_dct_twiddle_table16_L1024_1;

/* Symbol: dlb_fft_inv_usc_64 */
/* Demangled: dlb_fft_inv_usc_64 */
int dlb_fft_inv_usc_64(void);

/* Symbol: a_shift_table_CQMF_080x080x33_08000_tab */
/* Demangled: a_shift_table_CQMF_080x080x33_08000_tab */
extern void* a_shift_table_CQMF_080x080x33_08000_tab;

/* Symbol: _ZN5dolby13AudioHalUtilsC1Ev */
/* Demangled: dolby::AudioHalUtils::AudioHalUtils() */
int _ZN5dolby13AudioHalUtilsC1Ev(void);

/* Symbol: dlb_dct_twiddle_table16_L1024_2 */
/* Demangled: dlb_dct_twiddle_table16_L1024_2 */
extern void* dlb_dct_twiddle_table16_L1024_2;

/* Symbol: _ZN5dolby13EffectContext15getStoredParamsEbRiRN7android11KeyedVectorI15audio_devices_tPNS_13DapParamCacheEEE */
/* Demangled: dolby::EffectContext::getStoredParams(bool, int&, android::KeyedVector<audio_devices_t, dolby::DapParamCache*>&) */
int _ZN5dolby13EffectContext15getStoredParamsEbRiRN7android11KeyedVectorI15audio_devices_tPNS_13DapParamCacheEEE(void);

/* Symbol: DLB_blk_Liir1L_setup */
/* Demangled: DLB_blk_Liir1L_setup */
int DLB_blk_Liir1L_setup(void);

/* Symbol: dlb_riff_seek_chunk */
/* Demangled: dlb_riff_seek_chunk */
int dlb_riff_seek_chunk(void);

/* Symbol: dlb_wave_int_read */
/* Demangled: dlb_wave_int_read */
int dlb_wave_int_read(void);

/* Symbol: dlb_fft_fwd_usc_360 */
/* Demangled: dlb_fft_fwd_usc_360 */
int dlb_fft_fwd_usc_360(void);

/* Symbol: dlb_octfile_eof */
/* Demangled: dlb_octfile_eof */
int dlb_octfile_eof(void);

/* Symbol: dft_cleanup */
/* Demangled: dft_cleanup */
int dft_cleanup(void);

/* Symbol: vsv_trag_process */
/* Demangled: vsv_trag_process */
int vsv_trag_process(void);

/* Symbol: dlb_dct_twiddle_table16_L12 */
/* Demangled: dlb_dct_twiddle_table16_L12 */
extern void* dlb_dct_twiddle_table16_L12;

/* Symbol: _ZTVN5dolby18VoiceEffectContextE */
/* Demangled: vtable for dolby::VoiceEffectContext */
extern void* _ZTVN5dolby18VoiceEffectContextE;

/* Symbol: dlb_vec_LdotLLU_flex */
/* Demangled: dlb_vec_LdotLLU_flex */
int dlb_vec_LdotLLU_flex(void);

/* Symbol: DLB_CLsubCLCLU_strict */
/* Demangled: DLB_CLsubCLCLU_strict */
int DLB_CLsubCLCLU_strict(void);

/* Symbol: DLB_blk_Lmpy_shlLLU_strict */
/* Demangled: DLB_blk_Lmpy_shlLLU_strict */
int DLB_blk_Lmpy_shlLLU_strict(void);

/* Symbol: DLB_blk_Lmpy_shlLSU_strict */
/* Demangled: DLB_blk_Lmpy_shlLSU_strict */
int DLB_blk_Lmpy_shlLSU_strict(void);

/* Symbol: dlb_dctIII_scaled */
/* Demangled: dlb_dctIII_scaled */
int dlb_dctIII_scaled(void);

/* Symbol: dlb_octfile_memory_vtable */
/* Demangled: dlb_octfile_memory_vtable */
extern void* dlb_octfile_memory_vtable;

/* Symbol: a_twist_table_MDCT_640x640x56_32000_tab */
/* Demangled: a_twist_table_MDCT_640x640x56_32000_tab */
extern void* a_twist_table_MDCT_640x640x56_32000_tab;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvj(void);

/* Symbol: dlb_dct_twiddle_table16_L15 */
/* Demangled: dlb_dct_twiddle_table16_L15 */
extern void* dlb_dct_twiddle_table16_L15;

/* Symbol: DLB_r4_fft_256 */
/* Demangled: DLB_r4_fft_256 */
int DLB_r4_fft_256(void);

/* Symbol: _ZN5dolby19VqeCrossfadeProcess9configureEii14audio_format_t20audio_channel_mask_tS2_ */
/* Demangled: dolby::VqeCrossfadeProcess::configure(int, int, audio_format_t, audio_channel_mask_t, audio_channel_mask_t) */
int _ZN5dolby19VqeCrossfadeProcess9configureEii14audio_format_t20audio_channel_mask_tS2_(void);

/* Symbol: vsv_ml_open */
/* Demangled: vsv_ml_open */
int vsv_ml_open(void);

/* Symbol: vqe_get_drc_gain */
/* Demangled: vqe_get_drc_gain */
int vqe_get_drc_gain(void);

/* Symbol: _ZN5dolby17GameEffectContext4initEv */
/* Demangled: dolby::GameEffectContext::init() */
int _ZN5dolby17GameEffectContext4initEv(void);

/* Symbol: dlb_dct_twiddle_table16_L16 */
/* Demangled: dlb_dct_twiddle_table16_L16 */
extern void* dlb_dct_twiddle_table16_L16;

/* Symbol: DLB_r4_fft_4096_s */
/* Demangled: DLB_r4_fft_4096_s */
int DLB_r4_fft_4096_s(void);

/* Symbol: dlb_fft_inv_scl_60 */
/* Demangled: dlb_fft_inv_scl_60 */
int dlb_fft_inv_scl_60(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_48 */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_48 */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_48;

/* Symbol: dlb_dct_twiddle_table16_1_L1024 */
/* Demangled: dlb_dct_twiddle_table16_1_L1024 */
extern void* dlb_dct_twiddle_table16_1_L1024;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L45 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L45 */
extern void* dlb_dct_twiddle_table16_rev_1_L45;

/* Symbol: a_shift_table_MDCT_080x080x33_08000_tab */
/* Demangled: a_shift_table_MDCT_080x080x33_08000_tab */
extern void* a_shift_table_MDCT_080x080x33_08000_tab;

/* Symbol: vsv_banding_get_table_pointers */
/* Demangled: vsv_banding_get_table_pointers */
int vsv_banding_get_table_pointers(void);

/* Symbol: dlb_fft_fwd_scl_72 */
/* Demangled: dlb_fft_fwd_scl_72 */
int dlb_fft_fwd_scl_72(void);

/* Symbol: DLB_blk_LLshuffleLL_inplace_strict */
/* Demangled: DLB_blk_LLshuffleLL_inplace_strict */
int DLB_blk_LLshuffleLL_inplace_strict(void);

/* Symbol: dlb_qmf_filter_coeff_P4_32_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P4_32_vec_syn */
extern void* dlb_qmf_filter_coeff_P4_32_vec_syn;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L48 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L48 */
extern void* dlb_dct_twiddle_table16_rev_1_L48;

/* Symbol: dlb_fft_inv_scl_64 */
/* Demangled: dlb_fft_inv_scl_64 */
int dlb_fft_inv_scl_64(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency */
int DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency(void);

/* Symbol: a_twist_table_MDCT_320x320x49_32000_tab */
/* Demangled: a_twist_table_MDCT_320x320x49_32000_tab */
extern void* a_twist_table_MDCT_320x320x49_32000_tab;

/* Symbol: dlb_dct_twiddle_table16_1_L384 */
/* Demangled: dlb_dct_twiddle_table16_1_L384 */
extern void* dlb_dct_twiddle_table16_1_L384;

/* Symbol: dlb_dct_twiddle_table16_rev_L180 */
/* Demangled: dlb_dct_twiddle_table16_rev_L180 */
extern void* dlb_dct_twiddle_table16_rev_L180;

/* Symbol: dlb_fft_fwd_usc_512 */
/* Demangled: dlb_fft_fwd_usc_512 */
int dlb_fft_fwd_usc_512(void);

/* Symbol: dlb_wave_float_write */
/* Demangled: dlb_wave_float_write */
int dlb_wave_float_write(void);

/* Symbol: dlb_blk_delay_setup_flex */
/* Demangled: dlb_blk_delay_setup_flex */
int dlb_blk_delay_setup_flex(void);

/* Symbol: DLB_CLmfb_p10km_analysisL_legacy */
/* Demangled: DLB_CLmfb_p10km_analysisL_legacy */
int DLB_CLmfb_p10km_analysisL_legacy(void);

/* Symbol: DLB_MFB_TWID128E */
/* Demangled: DLB_MFB_TWID128E */
extern void* DLB_MFB_TWID128E;

/* Symbol: DLB_fft_CLfwd_scaledCL */
/* Demangled: DLB_fft_CLfwd_scaledCL */
int DLB_fft_CLfwd_scaledCL(void);

/* Symbol: DLB_qmf_synthesisS_query_mem */
/* Demangled: DLB_qmf_synthesisS_query_mem */
int DLB_qmf_synthesisS_query_mem(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_vec_syn;

/* Symbol: _ZN5dolby16VqeBufferAdapterC2EPNS_11IDlbProcessE */
/* Demangled: dolby::VqeBufferAdapter::VqeBufferAdapter(dolby::IDlbProcess*) */
int _ZN5dolby16VqeBufferAdapterC2EPNS_11IDlbProcessE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj(void);

/* Symbol: dlb_riff_open_write */
/* Demangled: dlb_riff_open_write */
int dlb_riff_open_write(void);

/* Symbol: dlb_wave_open_read */
/* Demangled: dlb_wave_open_read */
int dlb_wave_open_read(void);

/* Symbol: vsv_mixer_ctrl_open */
/* Demangled: vsv_mixer_ctrl_open */
int vsv_mixer_ctrl_open(void);

/* Symbol: DLB_blk_Lmix_shlULL_strict */
/* Demangled: DLB_blk_Lmix_shlULL_strict */
int DLB_blk_Lmix_shlULL_strict(void);

/* Symbol: DLB_r4_fft_120 */
/* Demangled: DLB_r4_fft_120 */
int DLB_r4_fft_120(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_(void);

/* Symbol: dlb_dct_twiddle_table16_L512_1 */
/* Demangled: dlb_dct_twiddle_table16_L512_1 */
extern void* dlb_dct_twiddle_table16_L512_1;

/* Symbol: dlb_blk_Liir2df1L_flex */
/* Demangled: dlb_blk_Liir2df1L_flex */
int dlb_blk_Liir2df1L_flex(void);

/* Symbol: dlb_blk_LsaddLL_flex */
/* Demangled: dlb_blk_LsaddLL_flex */
int dlb_blk_LsaddLL_flex(void);

/* Symbol: DLB_blk_delayL_strict */
/* Demangled: DLB_blk_delayL_strict */
int DLB_blk_delayL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L512_2 */
/* Demangled: dlb_dct_twiddle_table16_L512_2 */
extern void* dlb_dct_twiddle_table16_L512_2;

/* Symbol: dlb_fft_fwd_scl_144 */
/* Demangled: dlb_fft_fwd_scl_144 */
int dlb_fft_fwd_scl_144(void);

/* Symbol: DLB_fft_CLfwd_unscaledL */
/* Demangled: DLB_fft_CLfwd_unscaledL */
int DLB_fft_CLfwd_unscaledL(void);

/* Symbol: DLB_MFB_P10KM_P4_319SC_256M */
/* Demangled: DLB_MFB_P10KM_P4_319SC_256M */
extern void* DLB_MFB_P10KM_P4_319SC_256M;

/* Symbol: dlb_dct_twiddle_table16_L720_cos */
/* Demangled: dlb_dct_twiddle_table16_L720_cos */
extern void* dlb_dct_twiddle_table16_L720_cos;

/* Symbol: _ZTVN5dolby19VqeCrossfadeProcessE */
/* Demangled: vtable for dolby::VqeCrossfadeProcess */
extern void* _ZTVN5dolby19VqeCrossfadeProcessE;

/* Symbol: _ZN5dolby10VqeProcessD2Ev */
/* Demangled: dolby::VqeProcess::~VqeProcess() */
int _ZN5dolby10VqeProcessD2Ev(void);

/* Symbol: dlb_riff_close_chunk */
/* Demangled: dlb_riff_close_chunk */
int dlb_riff_close_chunk(void);

/* Symbol: _ZN5dolby13AudioHalUtils4initEPNS_13EffectContextE */
/* Demangled: dolby::AudioHalUtils::init(dolby::EffectContext*) */
int _ZN5dolby13AudioHalUtils4initEPNS_13EffectContextE(void);

/* Symbol: dlb_dct_twiddle_table16_L720_1 */
/* Demangled: dlb_dct_twiddle_table16_L720_1 */
extern void* dlb_dct_twiddle_table16_L720_1;

/* Symbol: DLB_r4_inv_fft_180_s */
/* Demangled: DLB_r4_inv_fft_180_s */
int DLB_r4_inv_fft_180_s(void);

/* Symbol: dlb_dct_twiddle_table16_L288_cos */
/* Demangled: dlb_dct_twiddle_table16_L288_cos */
extern void* dlb_dct_twiddle_table16_L288_cos;

/* Symbol: _ZN5dolby9EffectVqe4initEv */
/* Demangled: dolby::EffectVqe::init() */
int _ZN5dolby9EffectVqe4initEv(void);

/* Symbol: vqe_get_ml_voice_decision */
/* Demangled: vqe_get_ml_voice_decision */
int vqe_get_ml_voice_decision(void);

/* Symbol: DLB_blk_LclipL_strict */
/* Demangled: DLB_blk_LclipL_strict */
int DLB_blk_LclipL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L720_2 */
/* Demangled: dlb_dct_twiddle_table16_L720_2 */
extern void* dlb_dct_twiddle_table16_L720_2;

/* Symbol: dlb_dct_twiddle_table16_L144_cos */
/* Demangled: dlb_dct_twiddle_table16_L144_cos */
extern void* dlb_dct_twiddle_table16_L144_cos;

/* Symbol: _ZN5dolby16DapEffectContext19connectDolbyServiceEv */
/* Demangled: dolby::DapEffectContext::connectDolbyService() */
int _ZN5dolby16DapEffectContext19connectDolbyServiceEv(void);

/* Symbol: DLB_r4_inv_fft_240 */
/* Demangled: DLB_r4_inv_fft_240 */
int DLB_r4_inv_fft_240(void);

/* Symbol: DLB_r4_inv_fft_8_s */
/* Demangled: DLB_r4_inv_fft_8_s */
int DLB_r4_inv_fft_8_s(void);

/* Symbol: dlb_fft_inv_usc_144 */
/* Demangled: dlb_fft_inv_usc_144 */
int dlb_fft_inv_usc_144(void);

/* Symbol: DLB_CLmfb_p10km_analysisL_close */
/* Demangled: DLB_CLmfb_p10km_analysisL_close */
int DLB_CLmfb_p10km_analysisL_close(void);

/* Symbol: a_shift_table_MDXT_080x080x33_08000_tab */
/* Demangled: a_shift_table_MDXT_080x080x33_08000_tab */
extern void* a_shift_table_MDXT_080x080x33_08000_tab;

/* Symbol: _ZTVN5dolby16DlbBufferAdapterE */
/* Demangled: vtable for dolby::DlbBufferAdapter */
extern void* _ZTVN5dolby16DlbBufferAdapterE;

/* Symbol: DLB_vec_LdotLLU_strict */
/* Demangled: DLB_vec_LdotLLU_strict */
int DLB_vec_LdotLLU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L60 */
/* Demangled: dlb_dct_twiddle_table16_1_L60 */
extern void* dlb_dct_twiddle_table16_1_L60;

/* Symbol: DLB_r4_fft_4_s */
/* Demangled: DLB_r4_fft_4_s */
int DLB_r4_fft_4_s(void);

/* Symbol: DLB_hybrid_analysisCL_shl */
/* Demangled: DLB_hybrid_analysisCL_shl */
int DLB_hybrid_analysisCL_shl(void);

/* Symbol: a_shift_table_CQMF_640x640x56_32000_tab */
/* Demangled: a_shift_table_CQMF_640x640x56_32000_tab */
extern void* a_shift_table_CQMF_640x640x56_32000_tab;

/* Symbol: DLB_blk_Lfir2L_strict */
/* Demangled: DLB_blk_Lfir2L_strict */
int DLB_blk_Lfir2L_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L24 */
/* Demangled: dlb_dct_twiddle_table16_rev_L24 */
extern void* dlb_dct_twiddle_table16_rev_L24;

/* Symbol: DLB_r4_inv_fft_60 */
/* Demangled: DLB_r4_inv_fft_60 */
int DLB_r4_inv_fft_60(void);

/* Symbol: DLB_r4_fft_128 */
/* Demangled: DLB_r4_fft_128 */
int DLB_r4_fft_128(void);

/* Symbol: a_twist_table_CQMF_160x160x41_16000_tab */
/* Demangled: a_twist_table_CQMF_160x160x41_16000_tab */
extern void* a_twist_table_CQMF_160x160x41_16000_tab;

/* Symbol: vqe_get_tx_fade_index */
/* Demangled: vqe_get_tx_fade_index */
int vqe_get_tx_fade_index(void);

/* Symbol: vqe_api_init */
/* Demangled: vqe_api_init */
int vqe_api_init(void);

/* Symbol: DLB_r4_inv_fft_128_s */
/* Demangled: DLB_r4_inv_fft_128_s */
int DLB_r4_inv_fft_128_s(void);

/* Symbol: DLB_r4_inv_rfft_nn */
/* Demangled: DLB_r4_inv_rfft_nn */
int DLB_r4_inv_rfft_nn(void);

/* Symbol: _ZN5dolby13EffectContext16mWaitReleaseLockE */
/* Demangled: dolby::EffectContext::mWaitReleaseLock */
extern void* _ZN5dolby13EffectContext16mWaitReleaseLockE;

/* Symbol: _ZN5dolby16DlbBufferAdapterD0Ev */
/* Demangled: dolby::DlbBufferAdapter::~DlbBufferAdapter() */
int _ZN5dolby16DlbBufferAdapterD0Ev(void);

/* Symbol: dlb_CLmpyCLCSU_flex */
/* Demangled: dlb_CLmpyCLCSU_flex */
int dlb_CLmpyCLCSU_flex(void);

/* Symbol: DLB_r4_inv_rfft_nn_s */
/* Demangled: DLB_r4_inv_rfft_nn_s */
int DLB_r4_inv_rfft_nn_s(void);

/* Symbol: dlb_dct_twiddle_table16_1_L64 */
/* Demangled: dlb_dct_twiddle_table16_1_L64 */
extern void* dlb_dct_twiddle_table16_1_L64;

/* Symbol: dlb_dct_twiddle_table16_L64_cos */
/* Demangled: dlb_dct_twiddle_table16_L64_cos */
extern void* dlb_dct_twiddle_table16_L64_cos;

/* Symbol: vsv_tx_cleanup */
/* Demangled: vsv_tx_cleanup */
int vsv_tx_cleanup(void);

/* Symbol: DLB_r4_cplx_fwd_pair */
/* Demangled: DLB_r4_cplx_fwd_pair */
int DLB_r4_cplx_fwd_pair(void);

/* Symbol: _dlb_ldct2_scaled_iplu */
/* Demangled: _dlb_ldct2_scaled_iplu */
int _dlb_ldct2_scaled_iplu(void);

/* Symbol: DLB_r4_inv_fft_64 */
/* Demangled: DLB_r4_inv_fft_64 */
int DLB_r4_inv_fft_64(void);

/* Symbol: _ZN5dolby9EffectVqe9setConfigERK15buffer_config_sS3_ */
/* Demangled: dolby::EffectVqe::setConfig(buffer_config_s const&, buffer_config_s const&) */
int _ZN5dolby9EffectVqe9setConfigERK15buffer_config_sS3_(void);

/* Symbol: vsv_ns_init */
/* Demangled: vsv_ns_init */
int vsv_ns_init(void);

/* Symbol: _ZN5dolby13AudioHalUtils13updateProfileEi */
/* Demangled: dolby::AudioHalUtils::updateProfile(int) */
int _ZN5dolby13AudioHalUtils13updateProfileEi(void);

/* Symbol: dlb_fft_fwd_usc_80 */
/* Demangled: dlb_fft_fwd_usc_80 */
int dlb_fft_fwd_usc_80(void);

/* Symbol: a_shift_table_CQMF_320x320x49_32000_tab */
/* Demangled: a_shift_table_CQMF_320x320x49_32000_tab */
extern void* a_shift_table_CQMF_320x320x49_32000_tab;

/* Symbol: _ZN5dolby13EffectContext9setVolumeEiPKj */
/* Demangled: dolby::EffectContext::setVolume(int, unsigned int const*) */
int _ZN5dolby13EffectContext9setVolumeEiPKj(void);

/* Symbol: dlb_dct_twiddle_table16_1_L256 */
/* Demangled: dlb_dct_twiddle_table16_1_L256 */
extern void* dlb_dct_twiddle_table16_1_L256;

/* Symbol: DLB_r4_fft_480_s */
/* Demangled: DLB_r4_fft_480_s */
int DLB_r4_fft_480_s(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L640 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L640 */
extern void* dlb_dct_twiddle_table16_rev_1_L640;

/* Symbol: dlb_dct_twiddle_table16_L192 */
/* Demangled: dlb_dct_twiddle_table16_L192 */
extern void* dlb_dct_twiddle_table16_L192;

/* Symbol: dlb_fft_inv_usc_72 */
/* Demangled: dlb_fft_inv_usc_72 */
int dlb_fft_inv_usc_72(void);

/* Symbol: DLB_hybrid_analysisCL_close */
/* Demangled: DLB_hybrid_analysisCL_close */
int DLB_hybrid_analysisCL_close(void);

/* Symbol: dlb_octfile_tell */
/* Demangled: dlb_octfile_tell */
int dlb_octfile_tell(void);

/* Symbol: vqe_get_asa_num_inputs */
/* Demangled: vqe_get_asa_num_inputs */
int vqe_get_asa_num_inputs(void);

/* Symbol: dlb_dct_twiddle_table16_L60_1 */
/* Demangled: dlb_dct_twiddle_table16_L60_1 */
extern void* dlb_dct_twiddle_table16_L60_1;

/* Symbol: DLB_qmf_synthesisS_close */
/* Demangled: DLB_qmf_synthesisS_close */
int DLB_qmf_synthesisS_close(void);

/* Symbol: _ZN5dolby13EffectContext19connectDolbyServiceEN7android2spIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEi */
/* Demangled: dolby::EffectContext::connectDolbyService(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks>, int) */
int _ZN5dolby13EffectContext19connectDolbyServiceEN7android2spIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEi(void);

/* Symbol: dlb_vec_LmaskLSU_flex */
/* Demangled: dlb_vec_LmaskLSU_flex */
int dlb_vec_LmaskLSU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L60_2 */
/* Demangled: dlb_dct_twiddle_table16_L60_2 */
extern void* dlb_dct_twiddle_table16_L60_2;

/* Symbol: DLB_r4_fft_60_s */
/* Demangled: DLB_r4_fft_60_s */
int DLB_r4_fft_60_s(void);

/* Symbol: DLB_r4_inv_fft_960_s */
/* Demangled: DLB_r4_inv_fft_960_s */
int DLB_r4_inv_fft_960_s(void);

/* Symbol: DLB_qmf_synthesisL_init */
/* Demangled: DLB_qmf_synthesisL_init */
int DLB_qmf_synthesisL_init(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_8 */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_8 */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_8;

/* Symbol: dlb_dct_twiddle_table16_L24_cos */
/* Demangled: dlb_dct_twiddle_table16_L24_cos */
extern void* dlb_dct_twiddle_table16_L24_cos;

/* Symbol: _ZN5dolby19DlbCrossfadeProcessC2EPNS_11IDlbProcessENS_13SampleCounterES3_ */
/* Demangled: dolby::DlbCrossfadeProcess::DlbCrossfadeProcess(dolby::IDlbProcess*, dolby::SampleCounter, dolby::SampleCounter) */
int _ZN5dolby19DlbCrossfadeProcessC2EPNS_11IDlbProcessENS_13SampleCounterES3_(void);

/* Symbol: a_twist_table_MDCT_160x160x41_16000_tab */
/* Demangled: a_twist_table_MDCT_160x160x41_16000_tab */
extern void* a_twist_table_MDCT_160x160x41_16000_tab;

/* Symbol: DLB_vec_Labs_maxLU_strict */
/* Demangled: DLB_vec_Labs_maxLU_strict */
int DLB_vec_Labs_maxLU_strict(void);

/* Symbol: DLB_CLmacCLCLU_strict */
/* Demangled: DLB_CLmacCLCLU_strict */
int DLB_CLmacCLCLU_strict(void);

/* Symbol: dlb_CLmpy_recipCLLIU_flex */
/* Demangled: dlb_CLmpy_recipCLLIU_flex */
int dlb_CLmpy_recipCLLIU_flex(void);

/* Symbol: dlb_fft_inv_scl_192 */
/* Demangled: dlb_fft_inv_scl_192 */
int dlb_fft_inv_scl_192(void);

/* Symbol: DLB_Lqmf_synthesisL */
/* Demangled: DLB_Lqmf_synthesisL */
int DLB_Lqmf_synthesisL(void);

/* Symbol: dlb_cos_48_full_scl */
/* Demangled: dlb_cos_48_full_scl */
extern void* dlb_cos_48_full_scl;

/* Symbol: _ZN5dolby14BufferProvider9configureE14audio_format_t20audio_channel_mask_t */
/* Demangled: dolby::BufferProvider::configure(audio_format_t, audio_channel_mask_t) */
int _ZN5dolby14BufferProvider9configureE14audio_format_t20audio_channel_mask_t(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcessD2Ev */
/* Demangled: dolby::DlbCrossfadeProcess::~DlbCrossfadeProcess() */
int _ZN5dolby19DlbCrossfadeProcessD2Ev(void);

/* Symbol: vsv_asa_close */
/* Demangled: vsv_asa_close */
int vsv_asa_close(void);

/* Symbol: DLB_VLsquaredmagCLIU_strict */
/* Demangled: DLB_VLsquaredmagCLIU_strict */
int DLB_VLsquaredmagCLIU_strict(void);

/* Symbol: DLB_CLmpyCLSU_strict */
/* Demangled: DLB_CLmpyCLSU_strict */
int DLB_CLmpyCLSU_strict(void);

/* Symbol: DLB_r4_fft_2 */
/* Demangled: DLB_r4_fft_2 */
int DLB_r4_fft_2(void);

/* Symbol: dlb_cos_64_full */
/* Demangled: dlb_cos_64_full */
extern void* dlb_cos_64_full;

/* Symbol: a_shift_table_MDFT_080x080x33_08000_tab */
/* Demangled: a_shift_table_MDFT_080x080x33_08000_tab */
extern void* a_shift_table_MDFT_080x080x33_08000_tab;

/* Symbol: vqe_close */
/* Demangled: vqe_close */
int vqe_close(void);

/* Symbol: _ZN5dolby13EffectContext12setAudioModeE12audio_mode_t */
/* Demangled: dolby::EffectContext::setAudioMode(audio_mode_t) */
int _ZN5dolby13EffectContext12setAudioModeE12audio_mode_t(void);

/* Symbol: _ZN5dolby13EffectContext18serviceDeathHandleEv */
/* Demangled: dolby::EffectContext::serviceDeathHandle() */
int _ZN5dolby13EffectContext18serviceDeathHandleEv(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L360 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L360 */
extern void* dlb_dct_twiddle_table16_rev_1_L360;

/* Symbol: DLB_r4_fft_960 */
/* Demangled: DLB_r4_fft_960 */
int DLB_r4_fft_960(void);

/* Symbol: DLB_r4_fft_4 */
/* Demangled: DLB_r4_fft_4 */
int DLB_r4_fft_4(void);

/* Symbol: dlb_dct_twiddle_table16_1_L120 */
/* Demangled: dlb_dct_twiddle_table16_1_L120 */
extern void* dlb_dct_twiddle_table16_1_L120;

/* Symbol: dlb_dct_twiddle_table16_L24 */
/* Demangled: dlb_dct_twiddle_table16_L24 */
extern void* dlb_dct_twiddle_table16_L24;

/* Symbol: DLB_r4_inv_fft_192_s */
/* Demangled: DLB_r4_inv_fft_192_s */
int DLB_r4_inv_fft_192_s(void);

/* Symbol: vsv_ml_get_outputs */
/* Demangled: vsv_ml_get_outputs */
int vsv_ml_get_outputs(void);

/* Symbol: DLB_blk_delay_clear_strict */
/* Demangled: DLB_blk_delay_clear_strict */
int DLB_blk_delay_clear_strict(void);

/* Symbol: DLB_r4_fft_6 */
/* Demangled: DLB_r4_fft_6 */
int DLB_r4_fft_6(void);

/* Symbol: DLB_r4_fft_60 */
/* Demangled: DLB_r4_fft_60 */
int DLB_r4_fft_60(void);

/* Symbol: dlb_fft_fwd_scl_288 */
/* Demangled: dlb_fft_fwd_scl_288 */
int dlb_fft_fwd_scl_288(void);

/* Symbol: utlog_read */
/* Demangled: utlog_read */
int utlog_read(void);

/* Symbol: dlb_fft_fwd_scl_80 */
/* Demangled: dlb_fft_fwd_scl_80 */
int dlb_fft_fwd_scl_80(void);

/* Symbol: DLB_qmf_analysisL_get_delay */
/* Demangled: DLB_qmf_analysisL_get_delay */
int DLB_qmf_analysisL_get_delay(void);

/* Symbol: a_shift_table_CQMF_480x480x54_48000_tab */
/* Demangled: a_shift_table_CQMF_480x480x54_48000_tab */
extern void* a_shift_table_CQMF_480x480x54_48000_tab;

/* Symbol: vqe_get_ml_level_decision */
/* Demangled: vqe_get_ml_level_decision */
int vqe_get_ml_level_decision(void);

/* Symbol: dlb_CLrecipCLUU_flex */
/* Demangled: dlb_CLrecipCLUU_flex */
int dlb_CLrecipCLUU_flex(void);

/* Symbol: DLB_r4_inv_fft_40_s */
/* Demangled: DLB_r4_inv_fft_40_s */
int DLB_r4_inv_fft_40_s(void);

/* Symbol: DLB_r4_fft_8 */
/* Demangled: DLB_r4_fft_8 */
int DLB_r4_fft_8(void);

/* Symbol: dlb_riff_chunk_status */
/* Demangled: dlb_riff_chunk_status */
int dlb_riff_chunk_status(void);

/* Symbol: dlb_fft_inv_scl_72 */
/* Demangled: dlb_fft_inv_scl_72 */
int dlb_fft_inv_scl_72(void);

/* Symbol: vsv_banding_num_def */
/* Demangled: vsv_banding_num_def */
extern void* vsv_banding_num_def;

/* Symbol: DLB_r4_inv_fft_384 */
/* Demangled: DLB_r4_inv_fft_384 */
int DLB_r4_inv_fft_384(void);

/* Symbol: DLB_r4_fft_64 */
/* Demangled: DLB_r4_fft_64 */
int DLB_r4_fft_64(void);

/* Symbol: dlb_fft_inv_usc_288 */
/* Demangled: dlb_fft_inv_usc_288 */
int dlb_fft_inv_usc_288(void);

/* Symbol: DLB_blk_Liir2ssv2L_strict */
/* Demangled: DLB_blk_Liir2ssv2L_strict */
int DLB_blk_Liir2ssv2L_strict(void);

/* Symbol: a_shift_table_MDXT_640x640x56_32000_tab */
/* Demangled: a_shift_table_MDXT_640x640x56_32000_tab */
extern void* a_shift_table_MDXT_640x640x56_32000_tab;

/* Symbol: a_twist_table_MDXT_160x160x41_16000_tab */
/* Demangled: a_twist_table_MDXT_160x160x41_16000_tab */
extern void* a_twist_table_MDXT_160x160x41_16000_tab;

/* Symbol: dlb_dct_twiddle_table16_1_L128 */
/* Demangled: dlb_dct_twiddle_table16_1_L128 */
extern void* dlb_dct_twiddle_table16_1_L128;

/* Symbol: _ZN5dolby14BufferProviderD2Ev */
/* Demangled: dolby::BufferProvider::~BufferProvider() */
int _ZN5dolby14BufferProviderD2Ev(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L512 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L512 */
extern void* dlb_dct_twiddle_table16_rev_1_L512;

/* Symbol: dlb_dct_twiddle_table16_rev_L192 */
/* Demangled: dlb_dct_twiddle_table16_rev_L192 */
extern void* dlb_dct_twiddle_table16_rev_L192;

/* Symbol: vsv_asa_num_obj */
/* Demangled: vsv_asa_num_obj */
int vsv_asa_num_obj(void);

/* Symbol: _ZN5dolby13EffectContextD0Ev */
/* Demangled: dolby::EffectContext::~EffectContext() */
int _ZN5dolby13EffectContextD0Ev(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L1024 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L1024 */
extern void* dlb_dct_twiddle_table16_rev_1_L1024;

/* Symbol: vsv_ne_get_outputs */
/* Demangled: vsv_ne_get_outputs */
int vsv_ne_get_outputs(void);

/* Symbol: vsv_ne_init */
/* Demangled: vsv_ne_init */
int vsv_ne_init(void);

/* Symbol: a_vsv_ne_defs_tab */
/* Demangled: a_vsv_ne_defs_tab */
extern void* a_vsv_ne_defs_tab;

/* Symbol: vqe_get_asa_curr_level */
/* Demangled: vqe_get_asa_curr_level */
int vqe_get_asa_curr_level(void);

/* Symbol: DLB_blk_Liir1_shlLU_strict */
/* Demangled: DLB_blk_Liir1_shlLU_strict */
int DLB_blk_Liir1_shlLU_strict(void);

/* Symbol: dlb_riff_chunk_id_matches */
/* Demangled: dlb_riff_chunk_id_matches */
int dlb_riff_chunk_id_matches(void);

/* Symbol: dlb_wave_write_data */
/* Demangled: dlb_wave_write_data */
int dlb_wave_write_data(void);

/* Symbol: a_shift_table_MDCT_480x480x54_48000_tab */
/* Demangled: a_shift_table_MDCT_480x480x54_48000_tab */
extern void* a_shift_table_MDCT_480x480x54_48000_tab;

/* Symbol: vsv_tx_process */
/* Demangled: vsv_tx_process */
int vsv_tx_process(void);

/* Symbol: dlb_vec_LmpyLSU_inplace_flex */
/* Demangled: dlb_vec_LmpyLSU_inplace_flex */
int dlb_vec_LmpyLSU_inplace_flex(void);

/* Symbol: dlb_fft_fwd_usc_240 */
/* Demangled: dlb_fft_fwd_usc_240 */
int dlb_fft_fwd_usc_240(void);

/* Symbol: vqe_init */
/* Demangled: vqe_init */
int vqe_init(void);

/* Symbol: dlb_blk_Lmpy_shlLLU_flex */
/* Demangled: dlb_blk_Lmpy_shlLLU_flex */
int dlb_blk_Lmpy_shlLLU_flex(void);

/* Symbol: DLB_cvec_Lmpy_conjLLIU_strict */
/* Demangled: DLB_cvec_Lmpy_conjLLIU_strict */
int DLB_cvec_Lmpy_conjLLIU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L72_1 */
/* Demangled: dlb_dct_twiddle_table16_L72_1 */
extern void* dlb_dct_twiddle_table16_L72_1;

/* Symbol: DLB_r4_fft_1024 */
/* Demangled: DLB_r4_fft_1024 */
int DLB_r4_fft_1024(void);

/* Symbol: _ZTTN5dolby13EffectContext17DmsDeathRecipientE */
/* Demangled: VTT for dolby::EffectContext::DmsDeathRecipient */
extern void* _ZTTN5dolby13EffectContext17DmsDeathRecipientE;

/* Symbol: dlb_dct_twiddle_table16_rev_L30 */
/* Demangled: dlb_dct_twiddle_table16_rev_L30 */
extern void* dlb_dct_twiddle_table16_rev_L30;

/* Symbol: dlb_dct_twiddle_table16_L72_2 */
/* Demangled: dlb_dct_twiddle_table16_L72_2 */
extern void* dlb_dct_twiddle_table16_L72_2;

/* Symbol: DLB_r4_fft_72_s */
/* Demangled: DLB_r4_fft_72_s */
int DLB_r4_fft_72_s(void);

/* Symbol: vqe_get_mute_state */
/* Demangled: vqe_get_mute_state */
int vqe_get_mute_state(void);

/* Symbol: DLB_blk_Liir2ssL_setup */
/* Demangled: DLB_blk_Liir2ssL_setup */
int DLB_blk_Liir2ssL_setup(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L32 */
/* Demangled: dlb_dct_twiddle_table16_rev_L32 */
extern void* dlb_dct_twiddle_table16_rev_L32;

/* Symbol: dlb_dct_twiddle_table16_L480 */
/* Demangled: dlb_dct_twiddle_table16_L480 */
extern void* dlb_dct_twiddle_table16_L480;

/* Symbol: DLB_r4_fft_120_s */
/* Demangled: DLB_r4_fft_120_s */
int DLB_r4_fft_120_s(void);

/* Symbol: DLB_load_CLqmf_analysisL_filter_stateL */
/* Demangled: DLB_load_CLqmf_analysisL_filter_stateL */
int DLB_load_CLqmf_analysisL_filter_stateL(void);

/* Symbol: DLB_qmf_analysisL_set_slot_increment */
/* Demangled: DLB_qmf_analysisL_set_slot_increment */
int DLB_qmf_analysisL_set_slot_increment(void);

/* Symbol: dlb_wave_float_read */
/* Demangled: dlb_wave_float_read */
int dlb_wave_float_read(void);

/* Symbol: dlb_dct_twiddle_table16_L768 */
/* Demangled: dlb_dct_twiddle_table16_L768 */
extern void* dlb_dct_twiddle_table16_L768;

/* Symbol: dlb_qmf_filter_coeff_P5_32 */
/* Demangled: dlb_qmf_filter_coeff_P5_32 */
extern void* dlb_qmf_filter_coeff_P5_32;

/* Symbol: vsv_asa_obj_voice_count */
/* Demangled: vsv_asa_obj_voice_count */
int vsv_asa_obj_voice_count(void);

/* Symbol: stats_process */
/* Demangled: stats_process */
int stats_process(void);

/* Symbol: vqe_get_default_transform_type */
/* Demangled: vqe_get_default_transform_type */
int vqe_get_default_transform_type(void);

/* Symbol: dlb_blk_Liir2ssv1_dsmpL_flex */
/* Demangled: dlb_blk_Liir2ssv1_dsmpL_flex */
int dlb_blk_Liir2ssv1_dsmpL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_1_L72 */
/* Demangled: dlb_dct_twiddle_table16_1_L72 */
extern void* dlb_dct_twiddle_table16_1_L72;

/* Symbol: dlb_fft_inv_scl_480 */
/* Demangled: dlb_fft_inv_scl_480 */
int dlb_fft_inv_scl_480(void);

/* Symbol: DLB_hybrid_analysisCL_query_mem */
/* Demangled: DLB_hybrid_analysisCL_query_mem */
int DLB_hybrid_analysisCL_query_mem(void);

/* Symbol: a_vlib_transform_definitions_tab */
/* Demangled: a_vlib_transform_definitions_tab */
extern void* a_vlib_transform_definitions_tab;

/* Symbol: _ZN5dolby16DapEffectContextD2Ev */
/* Demangled: dolby::DapEffectContext::~DapEffectContext() */
int _ZN5dolby16DapEffectContextD2Ev(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L36 */
/* Demangled: dlb_dct_twiddle_table16_rev_L36 */
extern void* dlb_dct_twiddle_table16_rev_L36;

/* Symbol: DLB_r4_inv_fft_72 */
/* Demangled: DLB_r4_inv_fft_72 */
int DLB_r4_inv_fft_72(void);

/* Symbol: dlb_fft_inv_scl_768 */
/* Demangled: dlb_fft_inv_scl_768 */
int dlb_fft_inv_scl_768(void);

/* Symbol: dlb_qmf_filter_coeff_P5_32_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_32_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_32_vec_syn;

/* Symbol: dlb_dct_twiddle_table16_L960_cos */
/* Demangled: dlb_dct_twiddle_table16_L960_cos */
extern void* dlb_dct_twiddle_table16_L960_cos;

/* Symbol: vsv_gain_scalar_gain_complex_data */
/* Demangled: vsv_gain_scalar_gain_complex_data */
int vsv_gain_scalar_gain_complex_data(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcess10accumulateEPfS1_S1_iff */
/* Demangled: dolby::DlbCrossfadeProcess::accumulate(float*, float*, float*, int, float, float) */
int _ZN5dolby19DlbCrossfadeProcess10accumulateEPfS1_S1_iff(void);

/* Symbol: a_shift_table_MDFT_640x640x56_32000_tab */
/* Demangled: a_shift_table_MDFT_640x640x56_32000_tab */
extern void* a_shift_table_MDFT_640x640x56_32000_tab;

/* Symbol: dlb_dct_twiddle_table16_1_L960 */
/* Demangled: dlb_dct_twiddle_table16_1_L960 */
extern void* dlb_dct_twiddle_table16_1_L960;

/* Symbol: dlb_dct_twiddle_table16_L256_1 */
/* Demangled: dlb_dct_twiddle_table16_L256_1 */
extern void* dlb_dct_twiddle_table16_L256_1;

/* Symbol: DLB_r4_inv_fft_256 */
/* Demangled: DLB_r4_inv_fft_256 */
int DLB_r4_inv_fft_256(void);

/* Symbol: a_twist_table_MDFT_160x160x41_16000_tab */
/* Demangled: a_twist_table_MDFT_160x160x41_16000_tab */
extern void* a_twist_table_MDFT_160x160x41_16000_tab;

/* Symbol: dlb_clclmix5cl10csu_c */
/* Demangled: dlb_clclmix5cl10csu_c */
extern void* dlb_clclmix5cl10csu_c;

/* Symbol: dlb_dct_twiddle_table16_L256_2 */
/* Demangled: dlb_dct_twiddle_table16_L256_2 */
extern void* dlb_dct_twiddle_table16_L256_2;

/* Symbol: DLB_r4_inv_fft_320_s */
/* Demangled: DLB_r4_inv_fft_320_s */
int DLB_r4_inv_fft_320_s(void);

/* Symbol: dlb_fft_fwd_usc_90 */
/* Demangled: dlb_fft_fwd_usc_90 */
int dlb_fft_fwd_usc_90(void);

/* Symbol: dlb_fft_inv_usc_80 */
/* Demangled: dlb_fft_inv_usc_80 */
int dlb_fft_inv_usc_80(void);

/* Symbol: DLB_time_add */
/* Demangled: DLB_time_add */
int DLB_time_add(void);

/* Symbol: DLB_BLsaddBLL_strict */
/* Demangled: DLB_BLsaddBLL_strict */
int DLB_BLsaddBLL_strict(void);

/* Symbol: a_shift_table_MDXT_480x480x54_48000_tab */
/* Demangled: a_shift_table_MDXT_480x480x54_48000_tab */
extern void* a_shift_table_MDXT_480x480x54_48000_tab;

/* Symbol: _ZN5dolby17GameEffectContextD1Ev */
/* Demangled: dolby::GameEffectContext::~GameEffectContext() */
int _ZN5dolby17GameEffectContextD1Ev(void);

/* Symbol: DLB_blk_Lconst_strict */
/* Demangled: DLB_blk_Lconst_strict */
int DLB_blk_Lconst_strict(void);

/* Symbol: DLB_r4_fft_576_s */
/* Demangled: DLB_r4_fft_576_s */
int DLB_r4_fft_576_s(void);

/* Symbol: dlb_fft_fwd_scl_576 */
/* Demangled: dlb_fft_fwd_scl_576 */
int dlb_fft_fwd_scl_576(void);

/* Symbol: dlb_dct_twiddle_table16_L360_cos */
/* Demangled: dlb_dct_twiddle_table16_L360_cos */
extern void* dlb_dct_twiddle_table16_L360_cos;

/* Symbol: dlb_fft_fwd_scl_2 */
/* Demangled: dlb_fft_fwd_scl_2 */
int dlb_fft_fwd_scl_2(void);

/* Symbol: dlb_vec_LshlLIU_inplace_flex */
/* Demangled: dlb_vec_LshlLIU_inplace_flex */
int dlb_vec_LshlLIU_inplace_flex(void);

/* Symbol: dlb_fft_fwd_scl_720 */
/* Demangled: dlb_fft_fwd_scl_720 */
int dlb_fft_fwd_scl_720(void);

/* Symbol: dlb_non_power_two_lengths */
/* Demangled: dlb_non_power_two_lengths */
extern void* dlb_non_power_two_lengths;

/* Symbol: a_shift_table_MDFT_320x320x49_32000_tab */
/* Demangled: a_shift_table_MDFT_320x320x49_32000_tab */
extern void* a_shift_table_MDFT_320x320x49_32000_tab;

/* Symbol: vsv_reg_cleanup */
/* Demangled: vsv_reg_cleanup */
int vsv_reg_cleanup(void);

/* Symbol: DLB_CLcopyCLU_strict */
/* Demangled: DLB_CLcopyCLU_strict */
int DLB_CLcopyCLU_strict(void);

/* Symbol: dlb_fft_fwd_scl_4 */
/* Demangled: dlb_fft_fwd_scl_4 */
int dlb_fft_fwd_scl_4(void);

/* Symbol: dlb_dct_twiddle_table16_L30 */
/* Demangled: dlb_dct_twiddle_table16_L30 */
extern void* dlb_dct_twiddle_table16_L30;

/* Symbol: DLB_r4_inv_fft_1024_s */
/* Demangled: DLB_r4_inv_fft_1024_s */
int DLB_r4_inv_fft_1024_s(void);

/* Symbol: dlb_fft_fwd_usc_96 */
/* Demangled: dlb_fft_fwd_usc_96 */
int dlb_fft_fwd_usc_96(void);

/* Symbol: dlb_fft_inv_usc_576 */
/* Demangled: dlb_fft_inv_usc_576 */
int dlb_fft_inv_usc_576(void);

/* Symbol: dlb_riff_read_chunk_data */
/* Demangled: dlb_riff_read_chunk_data */
int dlb_riff_read_chunk_data(void);

/* Symbol: a_vsv_banding_definitions_tab */
/* Demangled: a_vsv_banding_definitions_tab */
extern void* a_vsv_banding_definitions_tab;

/* Symbol: dlb_blk_LLshuffleLL_inplace_flex */
/* Demangled: dlb_blk_LLshuffleLL_inplace_flex */
int dlb_blk_LLshuffleLL_inplace_flex(void);

/* Symbol: dlb_fft_fwd_scl_6 */
/* Demangled: dlb_fft_fwd_scl_6 */
int dlb_fft_fwd_scl_6(void);

/* Symbol: DLB_BLmpy_scaleBLSU_inplace_strict */
/* Demangled: DLB_BLmpy_scaleBLSU_inplace_strict */
int DLB_BLmpy_scaleBLSU_inplace_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L60 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L60 */
extern void* dlb_dct_twiddle_table16_rev_1_L60;

/* Symbol: dlb_dct_twiddle_table16_L32 */
/* Demangled: dlb_dct_twiddle_table16_L32 */
extern void* dlb_dct_twiddle_table16_L32;

/* Symbol: DLB_r4_inv_fft_120 */
/* Demangled: DLB_r4_inv_fft_120 */
int DLB_r4_inv_fft_120(void);

/* Symbol: dlb_fft_inv_usc_720 */
/* Demangled: dlb_fft_inv_usc_720 */
int dlb_fft_inv_usc_720(void);

/* Symbol: dlb_dct_twiddle_table16_L320_cos */
/* Demangled: dlb_dct_twiddle_table16_L320_cos */
extern void* dlb_dct_twiddle_table16_L320_cos;

/* Symbol: _ZN5dolby19DlbCrossfadeProcess8getParamEiPiS1_ */
/* Demangled: dolby::DlbCrossfadeProcess::getParam(int, int*, int*) */
int _ZN5dolby19DlbCrossfadeProcess8getParamEiPiS1_(void);

/* Symbol: vstack_open */
/* Demangled: vstack_open */
int vstack_open(void);

/* Symbol: dlb_wave_get_version */
/* Demangled: dlb_wave_get_version */
int dlb_wave_get_version(void);

/* Symbol: DLB_CLCLmix4CL8SU_strict */
/* Demangled: DLB_CLCLmix4CL8SU_strict */
int DLB_CLCLmix4CL8SU_strict(void);

/* Symbol: dlb_fft_fwd_scl_8 */
/* Demangled: dlb_fft_fwd_scl_8 */
int dlb_fft_fwd_scl_8(void);

/* Symbol: _ZN5dolby16DapEffectContext9setDeviceE15audio_devices_t */
/* Demangled: dolby::DapEffectContext::setDevice(audio_devices_t) */
int _ZN5dolby16DapEffectContext9setDeviceE15audio_devices_t(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L480 */
/* Demangled: dlb_dct_twiddle_table16_rev_L480 */
extern void* dlb_dct_twiddle_table16_rev_L480;

/* Symbol: DLB_blk_LcmpLL_strict */
/* Demangled: DLB_blk_LcmpLL_strict */
int DLB_blk_LcmpLL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L768 */
/* Demangled: dlb_dct_twiddle_table16_rev_L768 */
extern void* dlb_dct_twiddle_table16_rev_L768;

/* Symbol: DLB_r4_inv_fft_288_s */
/* Demangled: DLB_r4_inv_fft_288_s */
int DLB_r4_inv_fft_288_s(void);

/* Symbol: DLB_r4_inv_fft_2048 */
/* Demangled: DLB_r4_inv_fft_2048 */
int DLB_r4_inv_fft_2048(void);

/* Symbol: dlb_fft_fwd_usc_384 */
/* Demangled: dlb_fft_fwd_usc_384 */
int dlb_fft_fwd_usc_384(void);

/* Symbol: vqe_set_pregain */
/* Demangled: vqe_set_pregain */
int vqe_set_pregain(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L64 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L64 */
extern void* dlb_dct_twiddle_table16_rev_1_L64;

/* Symbol: dlb_dct_twiddle_table16_L36 */
/* Demangled: dlb_dct_twiddle_table16_L36 */
extern void* dlb_dct_twiddle_table16_L36;

/* Symbol: dlb_fft_fwd_scl_90 */
/* Demangled: dlb_fft_fwd_scl_90 */
int dlb_fft_fwd_scl_90(void);

/* Symbol: dlb_fft_inv_scl_80 */
/* Demangled: dlb_fft_inv_scl_80 */
int dlb_fft_inv_scl_80(void);

/* Symbol: _ZN5dolby9DlbEffect23handle_EFFECT_CMD_RESETERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_RESET(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect23handle_EFFECT_CMD_RESETERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: DLB_r4_fft_72 */
/* Demangled: DLB_r4_fft_72 */
int DLB_r4_fft_72(void);

/* Symbol: dlb_odd_fft_cplx_inv_scl */
/* Demangled: dlb_odd_fft_cplx_inv_scl */
extern void* dlb_odd_fft_cplx_inv_scl;

/* Symbol: DLB_blk_Lfir3L_strict */
/* Demangled: DLB_blk_Lfir3L_strict */
int DLB_blk_Lfir3L_strict(void);

/* Symbol: _dlb_ldct3_scaled_iplu */
/* Demangled: _dlb_ldct3_scaled_iplu */
int _dlb_ldct3_scaled_iplu(void);

/* Symbol: DLB_Sqmf_synthesisCL */
/* Demangled: DLB_Sqmf_synthesisCL */
int DLB_Sqmf_synthesisCL(void);

/* Symbol: DLB_r4_inv_fft_4_s */
/* Demangled: DLB_r4_inv_fft_4_s */
int DLB_r4_inv_fft_4_s(void);

/* Symbol: DLB_CLmfb_p10km_analysisL */
/* Demangled: DLB_CLmfb_p10km_analysisL */
int DLB_CLmfb_p10km_analysisL(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_init */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_init */
int DLB_Lmfb_p10km_synthesisCL_init(void);

/* Symbol: dlb_hyb_p8_13 */
/* Demangled: dlb_hyb_p8_13 */
extern void* dlb_hyb_p8_13;

/* Symbol: DLB_qmf_analysisL_close */
/* Demangled: DLB_qmf_analysisL_close */
int DLB_qmf_analysisL_close(void);

/* Symbol: utlog_add_variables_from_info_file */
/* Demangled: utlog_add_variables_from_info_file */
int utlog_add_variables_from_info_file(void);

/* Symbol: dlb_CLmacCLCLU_flex */
/* Demangled: dlb_CLmacCLCLU_flex */
int dlb_CLmacCLCLU_flex(void);

/* Symbol: DLB_r4_inv_fft_128 */
/* Demangled: DLB_r4_inv_fft_128 */
int DLB_r4_inv_fft_128(void);

/* Symbol: DLB_CLmfb_p10km_analysisL_init */
/* Demangled: DLB_CLmfb_p10km_analysisL_init */
int DLB_CLmfb_p10km_analysisL_init(void);

/* Symbol: _ZN5dolby9EffectVqe9setBypassEb */
/* Demangled: dolby::EffectVqe::setBypass(bool) */
int _ZN5dolby9EffectVqe9setBypassEb(void);

/* Symbol: _ZN5dolby10VqeProcess4initEv */
/* Demangled: dolby::VqeProcess::init() */
int _ZN5dolby10VqeProcess4initEv(void);

/* Symbol: datalog_read */
/* Demangled: datalog_read */
int datalog_read(void);

/* Symbol: a_shift_table_MDFT_480x480x54_48000_tab */
/* Demangled: a_shift_table_MDFT_480x480x54_48000_tab */
extern void* a_shift_table_MDFT_480x480x54_48000_tab;

/* Symbol: vsv_agc_get_outputs */
/* Demangled: vsv_agc_get_outputs */
int vsv_agc_get_outputs(void);

/* Symbol: _ZN5dolby18VoiceEffectContext10getVersionEPiS1_ */
/* Demangled: dolby::VoiceEffectContext::getVersion(int*, int*) */
int _ZN5dolby18VoiceEffectContext10getVersionEPiS1_(void);

/* Symbol: DLB_blk_Liir1L_strict */
/* Demangled: DLB_blk_Liir1L_strict */
int DLB_blk_Liir1L_strict(void);

/* Symbol: DLB_r4_inv_fft_90_s */
/* Demangled: DLB_r4_inv_fft_90_s */
int DLB_r4_inv_fft_90_s(void);

/* Symbol: vlib_transform_get_output_window */
/* Demangled: vlib_transform_get_output_window */
int vlib_transform_get_output_window(void);

/* Symbol: dlb_fft_fwd_scl_160 */
/* Demangled: dlb_fft_fwd_scl_160 */
int dlb_fft_fwd_scl_160(void);

/* Symbol: dlb_fft_fwd_scl_96 */
/* Demangled: dlb_fft_fwd_scl_96 */
int dlb_fft_fwd_scl_96(void);

/* Symbol: dlb_cos_32_full_scl */
/* Demangled: dlb_cos_32_full_scl */
extern void* dlb_cos_32_full_scl;

/* Symbol: _ZN5dolby16DlbBufferAdapter7processEPNS_14BufferProviderES2_ */
/* Demangled: dolby::DlbBufferAdapter::process(dolby::BufferProvider*, dolby::BufferProvider*) */
int _ZN5dolby16DlbBufferAdapter7processEPNS_14BufferProviderES2_(void);

/* Symbol: dlb_blk_LcmpLL_flex */
/* Demangled: dlb_blk_LcmpLL_flex */
int dlb_blk_LcmpLL_flex(void);

/* Symbol: DLB_r4_inv_fft_64_s */
/* Demangled: DLB_r4_inv_fft_64_s */
int DLB_r4_inv_fft_64_s(void);

/* Symbol: vsv_ne_close */
/* Demangled: vsv_ne_close */
int vsv_ne_close(void);

/* Symbol: DLB_fft_CLinv_scaledCL */
/* Demangled: DLB_fft_CLinv_scaledCL */
int DLB_fft_CLinv_scaledCL(void);

/* Symbol: dlb_qmf_filter_coeff_P4_32_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P4_32_vec_ana */
extern void* dlb_qmf_filter_coeff_P4_32_vec_ana;

/* Symbol: synthesis */
/* Demangled: synthesis */
int synthesis(void);

/* Symbol: DLB_blk_Liir1_shl_addLL_strict */
/* Demangled: DLB_blk_Liir1_shl_addLL_strict */
int DLB_blk_Liir1_shl_addLL_strict(void);

/* Symbol: dlb_fft_inv_usc_160 */
/* Demangled: dlb_fft_inv_usc_160 */
int dlb_fft_inv_usc_160(void);

/* Symbol: _ZN5dolby22UdcAudioBufferProvider3setEPvi */
/* Demangled: dolby::UdcAudioBufferProvider::set(void*, int) */
int _ZN5dolby22UdcAudioBufferProvider3setEPvi(void);

/* Symbol: _ZN5dolby19VqeCrossfadeProcessD1Ev */
/* Demangled: dolby::VqeCrossfadeProcess::~VqeCrossfadeProcess() */
int _ZN5dolby19VqeCrossfadeProcessD1Ev(void);

/* Symbol: dlb_blk_LmixLLL_flex */
/* Demangled: dlb_blk_LmixLLL_flex */
int dlb_blk_LmixLLL_flex(void);

/* Symbol: dlb_cvec_Lmpy_conjLLIU_flex */
/* Demangled: dlb_cvec_Lmpy_conjLLIU_flex */
int dlb_cvec_Lmpy_conjLLIU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L8_1 */
/* Demangled: dlb_dct_twiddle_table16_L8_1 */
extern void* dlb_dct_twiddle_table16_L8_1;

/* Symbol: dlb_cos_8_ast_mini_twiddle */
/* Demangled: dlb_cos_8_ast_mini_twiddle */
extern void* dlb_cos_8_ast_mini_twiddle;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L240 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L240 */
extern void* dlb_dct_twiddle_table16_rev_1_L240;

/* Symbol: dlb_dct_twiddle_table16_L8_2 */
/* Demangled: dlb_dct_twiddle_table16_L8_2 */
extern void* dlb_dct_twiddle_table16_L8_2;

/* Symbol: DLB_r4_fft_144 */
/* Demangled: DLB_r4_fft_144 */
int DLB_r4_fft_144(void);

/* Symbol: vsv_har_cleanup */
/* Demangled: vsv_har_cleanup */
int vsv_har_cleanup(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_vec_ana;

/* Symbol: _ZN5dolby17DlbBufferProviderD2Ev */
/* Demangled: dolby::DlbBufferProvider::~DlbBufferProvider() */
int _ZN5dolby17DlbBufferProviderD2Ev(void);

/* Symbol: dlb_wave_get_num_frames */
/* Demangled: dlb_wave_get_num_frames */
int dlb_wave_get_num_frames(void);

/* Symbol: dlb_blk_Liir1_shlLU_flex */
/* Demangled: dlb_blk_Liir1_shlLU_flex */
int dlb_blk_Liir1_shlLU_flex(void);

/* Symbol: _ZN5dolby16DlbBufferAdapterC2EPNS_11IDlbProcessE */
/* Demangled: dolby::DlbBufferAdapter::DlbBufferAdapter(dolby::IDlbProcess*) */
int _ZN5dolby16DlbBufferAdapterC2EPNS_11IDlbProcessE(void);

/* Symbol: vsv_asa_obj_age */
/* Demangled: vsv_asa_obj_age */
int vsv_asa_obj_age(void);

/* Symbol: vsv_asa_open */
/* Demangled: vsv_asa_open */
int vsv_asa_open(void);

/* Symbol: vsv_asa_prob_inst_obj */
/* Demangled: vsv_asa_prob_inst_obj */
int vsv_asa_prob_inst_obj(void);

/* Symbol: vsv_ml_init */
/* Demangled: vsv_ml_init */
int vsv_ml_init(void);

/* Symbol: dlb_qmf_filter_coeff_P4_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P4_vec_syn */
extern void* dlb_qmf_filter_coeff_P4_vec_syn;

/* Symbol: dlb_dct_twiddle_table16_L1024_cos */
/* Demangled: dlb_dct_twiddle_table16_L1024_cos */
extern void* dlb_dct_twiddle_table16_L1024_cos;

/* Symbol: _ZN5dolby10VqeProcess4openEv */
/* Demangled: dolby::VqeProcess::open() */
int _ZN5dolby10VqeProcess4openEv(void);

/* Symbol: vsv_reg_process */
/* Demangled: vsv_reg_process */
int vsv_reg_process(void);

/* Symbol: _ZN5dolby13EffectContext8setParamEijPv */
/* Demangled: dolby::EffectContext::setParam(int, unsigned int, void*) */
int _ZN5dolby13EffectContext8setParamEijPv(void);

/* Symbol: DLB_BLmpyBLS_inplace_strict */
/* Demangled: DLB_BLmpyBLS_inplace_strict */
int DLB_BLmpyBLS_inplace_strict(void);

/* Symbol: dlb_blk_Lmix_shlUL_flex */
/* Demangled: dlb_blk_Lmix_shlUL_flex */
int dlb_blk_Lmix_shlUL_flex(void);

/* Symbol: DLB_CLmpyCLCSU_strict */
/* Demangled: DLB_CLmpyCLCSU_strict */
int DLB_CLmpyCLCSU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L30_1 */
/* Demangled: dlb_dct_twiddle_table16_L30_1 */
extern void* dlb_dct_twiddle_table16_L30_1;

/* Symbol: DLB_r4_inv_fft_80 */
/* Demangled: DLB_r4_inv_fft_80 */
int DLB_r4_inv_fft_80(void);

/* Symbol: dlb_fft_fwd_usc_256 */
/* Demangled: dlb_fft_fwd_usc_256 */
int dlb_fft_fwd_usc_256(void);

/* Symbol: vsv_flux_close */
/* Demangled: vsv_flux_close */
int vsv_flux_close(void);

/* Symbol: dlb_blk_LminLL_flex */
/* Demangled: dlb_blk_LminLL_flex */
int dlb_blk_LminLL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L45 */
/* Demangled: dlb_dct_twiddle_table16_rev_L45 */
extern void* dlb_dct_twiddle_table16_rev_L45;

/* Symbol: dlb_dct_twiddle_table16_L30_2 */
/* Demangled: dlb_dct_twiddle_table16_L30_2 */
extern void* dlb_dct_twiddle_table16_L30_2;

/* Symbol: DLB_r4_fft_30_s */
/* Demangled: DLB_r4_fft_30_s */
int DLB_r4_fft_30_s(void);

/* Symbol: dlb_dct_twiddle_table16_L576_cos */
/* Demangled: dlb_dct_twiddle_table16_L576_cos */
extern void* dlb_dct_twiddle_table16_L576_cos;

/* Symbol: dlb_dct_twiddle_table16_L96_1 */
/* Demangled: dlb_dct_twiddle_table16_L96_1 */
extern void* dlb_dct_twiddle_table16_L96_1;

/* Symbol: DLB_r4_inv_fft_960 */
/* Demangled: DLB_r4_inv_fft_960 */
int DLB_r4_inv_fft_960(void);

/* Symbol: vqe_api_set_pregain */
/* Demangled: vqe_api_set_pregain */
int vqe_api_set_pregain(void);

/* Symbol: _ZN5dolby18VoiceEffectContext15getVqeParameterEiPvPj */
/* Demangled: dolby::VoiceEffectContext::getVqeParameter(int, void*, unsigned int*) */
int _ZN5dolby18VoiceEffectContext15getVqeParameterEiPvPj(void);

/* Symbol: _ZN5dolby13EffectContext7offloadEbi */
/* Demangled: dolby::EffectContext::offload(bool, int) */
int _ZN5dolby13EffectContext7offloadEbi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: dlb_dct_twiddle_table16_L96_2 */
/* Demangled: dlb_dct_twiddle_table16_L96_2 */
extern void* dlb_dct_twiddle_table16_L96_2;

/* Symbol: DLB_r4_fft_96_s */
/* Demangled: DLB_r4_fft_96_s */
int DLB_r4_fft_96_s(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L48 */
/* Demangled: dlb_dct_twiddle_table16_rev_L48 */
extern void* dlb_dct_twiddle_table16_rev_L48;

/* Symbol: _ZN5dolby19DlbCrossfadeProcess9crossfadeEPNS_14BufferProviderES2_b */
/* Demangled: dolby::DlbCrossfadeProcess::crossfade(dolby::BufferProvider*, dolby::BufferProvider*, bool) */
int _ZN5dolby19DlbCrossfadeProcess9crossfadeEPNS_14BufferProviderES2_b(void);

/* Symbol: DLB_r4_fft_144_s */
/* Demangled: DLB_r4_fft_144_s */
int DLB_r4_fft_144_s(void);

/* Symbol: dlb_fft_inv_usc_90 */
/* Demangled: dlb_fft_inv_usc_90 */
int dlb_fft_inv_usc_90(void);

/* Symbol: dlb_inverseModulationReal */
/* Demangled: dlb_inverseModulationReal */
int dlb_inverseModulationReal(void);

/* Symbol: DLB_vec_NdotLLU_strict */
/* Demangled: DLB_vec_NdotLLU_strict */
int DLB_vec_NdotLLU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L240_1 */
/* Demangled: dlb_dct_twiddle_table16_L240_1 */
extern void* dlb_dct_twiddle_table16_L240_1;

/* Symbol: vsv_mixer_ctrl_init */
/* Demangled: vsv_mixer_ctrl_init */
int vsv_mixer_ctrl_init(void);

/* Symbol: dlb_dct_twiddle_table16_L240_2 */
/* Demangled: dlb_dct_twiddle_table16_L240_2 */
extern void* dlb_dct_twiddle_table16_L240_2;

/* Symbol: dlb_blk_LabsL_flex */
/* Demangled: dlb_blk_LabsL_flex */
int dlb_blk_LabsL_flex(void);

/* Symbol: DLB_blk_LintegrateL_strict */
/* Demangled: DLB_blk_LintegrateL_strict */
int DLB_blk_LintegrateL_strict(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_48_vec_syn;

/* Symbol: _ZN5dolby9EffectVqe8getParamE15audio_devices_tiPiS2_ */
/* Demangled: dolby::EffectVqe::getParam(audio_devices_t, int, int*, int*) */
int _ZN5dolby9EffectVqe8getParamE15audio_devices_tiPiS2_(void);

/* Symbol: _ZN5dolby16VqeBufferAdapterD1Ev */
/* Demangled: dolby::VqeBufferAdapter::~VqeBufferAdapter() */
int _ZN5dolby16VqeBufferAdapterD1Ev(void);

/* Symbol: vsv_banding_covariance */
/* Demangled: vsv_banding_covariance */
int vsv_banding_covariance(void);

/* Symbol: _ZN5dolby16DapEffectContext4initEv */
/* Demangled: dolby::DapEffectContext::init() */
int _ZN5dolby16DapEffectContext4initEv(void);

/* Symbol: dlb_dct_twiddle_table16_L768_1 */
/* Demangled: dlb_dct_twiddle_table16_L768_1 */
extern void* dlb_dct_twiddle_table16_L768_1;

/* Symbol: dlb_fft_fwd_usc_120 */
/* Demangled: dlb_fft_fwd_usc_120 */
int dlb_fft_fwd_usc_120(void);

/* Symbol: dlb_fft_inv_scl_640 */
/* Demangled: dlb_fft_inv_scl_640 */
int dlb_fft_inv_scl_640(void);

/* Symbol: dlb_dct4_postmodulation_shl0 */
/* Demangled: dlb_dct4_postmodulation_shl0 */
int dlb_dct4_postmodulation_shl0(void);

/* Symbol: _ZN5dolby9EffectVqeC2EPNS_11IDlbProcessE */
/* Demangled: dolby::EffectVqe::EffectVqe(dolby::IDlbProcess*) */
int _ZN5dolby9EffectVqeC2EPNS_11IDlbProcessE(void);

/* Symbol: vsv_asa_cleanup */
/* Demangled: vsv_asa_cleanup */
int vsv_asa_cleanup(void);

/* Symbol: vsv_ne_cleanup */
/* Demangled: vsv_ne_cleanup */
int vsv_ne_cleanup(void);

/* Symbol: vsv_ns_cleanup */
/* Demangled: vsv_ns_cleanup */
int vsv_ns_cleanup(void);

/* Symbol: vsv_reg_close */
/* Demangled: vsv_reg_close */
int vsv_reg_close(void);

/* Symbol: vqe_cleanup */
/* Demangled: vqe_cleanup */
int vqe_cleanup(void);

/* Symbol: dlb_dct_twiddle_table16_L768_2 */
/* Demangled: dlb_dct_twiddle_table16_L768_2 */
extern void* dlb_dct_twiddle_table16_L768_2;

/* Symbol: dlb_dct4_postmodulation_shl1 */
/* Demangled: dlb_dct4_postmodulation_shl1 */
int dlb_dct4_postmodulation_shl1(void);

/* Symbol: vsv_asa_max_num_obj */
/* Demangled: vsv_asa_max_num_obj */
int vsv_asa_max_num_obj(void);

/* Symbol: vsv_reg_open */
/* Demangled: vsv_reg_open */
int vsv_reg_open(void);

/* Symbol: _ZN5dolby16DapEffectContext10setPregainEPvj */
/* Demangled: dolby::DapEffectContext::setPregain(void*, unsigned int) */
int _ZN5dolby16DapEffectContext10setPregainEPvj(void);

/* Symbol: dlb_fft_inv_usc_96 */
/* Demangled: dlb_fft_inv_usc_96 */
int dlb_fft_inv_usc_96(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_8_vec_syn;

/* Symbol: dlb_dct4_postmodulation_shl2 */
/* Demangled: dlb_dct4_postmodulation_shl2 */
int dlb_dct4_postmodulation_shl2(void);

/* Symbol: datalog_close */
/* Demangled: datalog_close */
int datalog_close(void);

/* Symbol: vsv_asa_scaling */
/* Demangled: vsv_asa_scaling */
int vsv_asa_scaling(void);

/* Symbol: vsv_ne_scaling */
/* Demangled: vsv_ne_scaling */
int vsv_ne_scaling(void);

/* Symbol: vsv_tx_get_voice_ratio */
/* Demangled: vsv_tx_get_voice_ratio */
int vsv_tx_get_voice_ratio(void);

/* Symbol: vsv_ns_get_outputs */
/* Demangled: vsv_ns_get_outputs */
int vsv_ns_get_outputs(void);

/* Symbol: _ZN5dolby17GameEffectContextC2Ev */
/* Demangled: dolby::GameEffectContext::GameEffectContext() */
int _ZN5dolby17GameEffectContextC2Ev(void);

/* Symbol: dlb_dct_twiddle_table16_L360 */
/* Demangled: dlb_dct_twiddle_table16_L360 */
extern void* dlb_dct_twiddle_table16_L360;

/* Symbol: DLB_CLhybrid_analysisCL */
/* Demangled: DLB_CLhybrid_analysisCL */
int DLB_CLhybrid_analysisCL(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvj(void);

/* Symbol: dlb_BLmaxBLL_inplace_flex */
/* Demangled: dlb_BLmaxBLL_inplace_flex */
int dlb_BLmaxBLL_inplace_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L72 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L72 */
extern void* dlb_dct_twiddle_table16_rev_1_L72;

/* Symbol: _ZN5dolby13AudioHalUtils13resumeProfileEv */
/* Demangled: dolby::AudioHalUtils::resumeProfile() */
int _ZN5dolby13AudioHalUtils13resumeProfileEv(void);

/* Symbol: dlb_dct_twiddle_table16_L45 */
/* Demangled: dlb_dct_twiddle_table16_L45 */
extern void* dlb_dct_twiddle_table16_L45;

/* Symbol: DLB_r4_fft_80 */
/* Demangled: DLB_r4_fft_80 */
int DLB_r4_fft_80(void);

/* Symbol: dlb_fft_inv_scl_360 */
/* Demangled: dlb_fft_inv_scl_360 */
int dlb_fft_inv_scl_360(void);

/* Symbol: _ZN5dolby10VqeProcess5closeEv */
/* Demangled: dolby::VqeProcess::close() */
int _ZN5dolby10VqeProcess5closeEv(void);

/* Symbol: vsv_agc_get_target_level */
/* Demangled: vsv_agc_get_target_level */
int vsv_agc_get_target_level(void);

/* Symbol: _ZN5dolby18VoiceEffectContext8getParamEiPjPv */
/* Demangled: dolby::VoiceEffectContext::getParam(int, unsigned int*, void*) */
int _ZN5dolby18VoiceEffectContext8getParamEiPjPv(void);

/* Symbol: dlb_fft_inv_scl_90 */
/* Demangled: dlb_fft_inv_scl_90 */
int dlb_fft_inv_scl_90(void);

/* Symbol: dlb_fft_fwd_usc_128 */
/* Demangled: dlb_fft_fwd_usc_128 */
int dlb_fft_fwd_usc_128(void);

/* Symbol: DLB_mfb_p10km_synthesisCL_query_mem */
/* Demangled: DLB_mfb_p10km_synthesisCL_query_mem */
int DLB_mfb_p10km_synthesisCL_query_mem(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L384 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L384 */
extern void* dlb_dct_twiddle_table16_rev_1_L384;

/* Symbol: DLB_r4_fft_288 */
/* Demangled: DLB_r4_fft_288 */
int DLB_r4_fft_288(void);

/* Symbol: dlb_dct_twiddle_table16_L8_cos */
/* Demangled: dlb_dct_twiddle_table16_L8_cos */
extern void* dlb_dct_twiddle_table16_L8_cos;

/* Symbol: vqe_get_alg_switches */
/* Demangled: vqe_get_alg_switches */
int vqe_get_alg_switches(void);

/* Symbol: DLB_vec_Lmask_rev_coefLSU_strict */
/* Demangled: DLB_vec_Lmask_rev_coefLSU_strict */
int DLB_vec_Lmask_rev_coefLSU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L144 */
/* Demangled: dlb_dct_twiddle_table16_1_L144 */
extern void* dlb_dct_twiddle_table16_1_L144;

/* Symbol: dlb_dct_twiddle_table16_L48 */
/* Demangled: dlb_dct_twiddle_table16_L48 */
extern void* dlb_dct_twiddle_table16_L48;

/* Symbol: DLB_Sqmf_synthesisL */
/* Demangled: DLB_Sqmf_synthesisL */
int DLB_Sqmf_synthesisL(void);

/* Symbol: dlb_octfile_open_memory */
/* Demangled: dlb_octfile_open_memory */
int dlb_octfile_open_memory(void);

/* Symbol: dlb_riff_chunk_handler_call_chain */
/* Demangled: dlb_riff_chunk_handler_call_chain */
int dlb_riff_chunk_handler_call_chain(void);

/* Symbol: vsv_har_process */
/* Demangled: vsv_har_process */
int vsv_har_process(void);

/* Symbol: _ZN5dolby9DlbEffect24handle_EFFECT_CMD_ENABLEERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_ENABLE(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect24handle_EFFECT_CMD_ENABLEERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: _ZN5dolby13EffectContext17DmsDeathRecipient11serviceDiedEyRKN7android2wpINS2_4hidl4base4V1_05IBaseEEE */
/* Demangled: dolby::EffectContext::DmsDeathRecipient::serviceDied(unsigned long long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN5dolby13EffectContext17DmsDeathRecipient11serviceDiedEyRKN7android2wpINS2_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: dlb_blk_LdelayU_flex */
/* Demangled: dlb_blk_LdelayU_flex */
int dlb_blk_LdelayU_flex(void);

/* Symbol: DLB_blk_Lmix_shlUnL_strict */
/* Demangled: DLB_blk_Lmix_shlUnL_strict */
int DLB_blk_Lmix_shlUnL_strict(void);

/* Symbol: DLB_r4_inv_fft_480_s */
/* Demangled: DLB_r4_inv_fft_480_s */
int DLB_r4_inv_fft_480_s(void);

/* Symbol: dlb_octfile_setpos */
/* Demangled: dlb_octfile_setpos */
int dlb_octfile_setpos(void);

/* Symbol: vsv_mixer_ctrl_get_config */
/* Demangled: vsv_mixer_ctrl_get_config */
int vsv_mixer_ctrl_get_config(void);

/* Symbol: a_shift_table_CQMF_320x320x48_16000_tab */
/* Demangled: a_shift_table_CQMF_320x320x48_16000_tab */
extern void* a_shift_table_CQMF_320x320x48_16000_tab;

/* Symbol: utlog_set_cdata */
/* Demangled: utlog_set_cdata */
int utlog_set_cdata(void);

/* Symbol: DLB_hybrid_synthesisCL_get_delay */
/* Demangled: DLB_hybrid_synthesisCL_get_delay */
int DLB_hybrid_synthesisCL_get_delay(void);

/* Symbol: dlb_vec_UnormLU_flex */
/* Demangled: dlb_vec_UnormLU_flex */
int dlb_vec_UnormLU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L640 */
/* Demangled: dlb_dct_twiddle_table16_rev_L640 */
extern void* dlb_dct_twiddle_table16_rev_L640;

/* Symbol: dlb_dct_twiddle_table16_L16_1 */
/* Demangled: dlb_dct_twiddle_table16_L16_1 */
extern void* dlb_dct_twiddle_table16_L16_1;

/* Symbol: dlb_dct_twiddle_table16_L512 */
/* Demangled: dlb_dct_twiddle_table16_L512 */
extern void* dlb_dct_twiddle_table16_L512;

/* Symbol: dlb_fft_inv_scl_96 */
/* Demangled: dlb_fft_inv_scl_96 */
int dlb_fft_inv_scl_96(void);

/* Symbol: a_twist_table_MDCT_160x160x40_08000_tab */
/* Demangled: a_twist_table_MDCT_160x160x40_08000_tab */
extern void* a_twist_table_MDCT_160x160x40_08000_tab;

/* Symbol: vsv_flux_open */
/* Demangled: vsv_flux_open */
int vsv_flux_open(void);

/* Symbol: dlb_blk_Lmix_shlULLLL_flex */
/* Demangled: dlb_blk_Lmix_shlULLLL_flex */
int dlb_blk_Lmix_shlULLLL_flex(void);

/* Symbol: DLB_CLshrCLUU_strict */
/* Demangled: DLB_CLshrCLUU_strict */
int DLB_CLshrCLUU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L16_2 */
/* Demangled: dlb_dct_twiddle_table16_L16_2 */
extern void* dlb_dct_twiddle_table16_L16_2;

/* Symbol: DLB_r4_fft_16_s */
/* Demangled: DLB_r4_fft_16_s */
int DLB_r4_fft_16_s(void);

/* Symbol: DLB_qmf_analysisS_get_delay */
/* Demangled: DLB_qmf_analysisS_get_delay */
int DLB_qmf_analysisS_get_delay(void);

/* Symbol: dlb_vec_LmpyLSU_flex */
/* Demangled: dlb_vec_LmpyLSU_flex */
int dlb_vec_LmpyLSU_flex(void);

/* Symbol: dlb_blk_LmaxLLL_flex */
/* Demangled: dlb_blk_LmaxLLL_flex */
int dlb_blk_LmaxLLL_flex(void);

/* Symbol: DLB_CLmixCLCLSSU_strict */
/* Demangled: DLB_CLmixCLCLSSU_strict */
int DLB_CLmixCLCLSSU_strict(void);

/* Symbol: dlb_CLmpyCLSU_flex */
/* Demangled: dlb_CLmpyCLSU_flex */
int dlb_CLmpyCLSU_flex(void);

/* Symbol: dlb_cos_32_ast_mini_twiddle */
/* Demangled: dlb_cos_32_ast_mini_twiddle */
extern void* dlb_cos_32_ast_mini_twiddle;

/* Symbol: dlb_octfile_open */
/* Demangled: dlb_octfile_open */
int dlb_octfile_open(void);

/* Symbol: dft_open */
/* Demangled: dft_open */
int dft_open(void);

/* Symbol: a_twist_table_MDCT_960x960x61_48000_tab */
/* Demangled: a_twist_table_MDCT_960x960x61_48000_tab */
extern void* a_twist_table_MDCT_960x960x61_48000_tab;

/* Symbol: DLB_CLmpy_shlCLSIU_inplace_strict */
/* Demangled: DLB_CLmpy_shlCLSIU_inplace_strict */
int DLB_CLmpy_shlCLSIU_inplace_strict(void);

/* Symbol: dlb_fft_inv_scl_512 */
/* Demangled: dlb_fft_inv_scl_512 */
int dlb_fft_inv_scl_512(void);

/* Symbol: dlb_dct_twiddle_table16_L1024 */
/* Demangled: dlb_dct_twiddle_table16_L1024 */
extern void* dlb_dct_twiddle_table16_L1024;

/* Symbol: DLB_Lpow05I16 */
/* Demangled: DLB_Lpow05I16 */
int DLB_Lpow05I16(void);

/* Symbol: dlb_riff_reopen_chunk */
/* Demangled: dlb_riff_reopen_chunk */
int dlb_riff_reopen_chunk(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L360 */
/* Demangled: dlb_dct_twiddle_table16_rev_L360 */
extern void* dlb_dct_twiddle_table16_rev_L360;

/* Symbol: a_shift_table_MDCT_320x320x48_16000_tab */
/* Demangled: a_shift_table_MDCT_320x320x48_16000_tab */
extern void* a_shift_table_MDCT_320x320x48_16000_tab;

/* Symbol: a_pp_vsv_ml_rules_tab */
/* Demangled: a_pp_vsv_ml_rules_tab */
extern void* a_pp_vsv_ml_rules_tab;

/* Symbol: DLB_blk_Liir1xL_set_coef */
/* Demangled: DLB_blk_Liir1xL_set_coef */
int DLB_blk_Liir1xL_set_coef(void);

/* Symbol: DLB_blk_Liir2df1L_set_coef */
/* Demangled: DLB_blk_Liir2df1L_set_coef */
int DLB_blk_Liir2df1L_set_coef(void);

/* Symbol: dlb_fft_fwd_scl_320 */
/* Demangled: dlb_fft_fwd_scl_320 */
int dlb_fft_fwd_scl_320(void);

/* Symbol: dlb_fft_fwd_usc_960 */
/* Demangled: dlb_fft_fwd_usc_960 */
int dlb_fft_fwd_usc_960(void);

/* Symbol: dlb_dct_twiddle_table16_L768_cos */
/* Demangled: dlb_dct_twiddle_table16_L768_cos */
extern void* dlb_dct_twiddle_table16_L768_cos;

/* Symbol: dlb_wave_get_bit_depth */
/* Demangled: dlb_wave_get_bit_depth */
int dlb_wave_get_bit_depth(void);

/* Symbol: dlb_dct_twiddle_table16_1_L90 */
/* Demangled: dlb_dct_twiddle_table16_1_L90 */
extern void* dlb_dct_twiddle_table16_1_L90;

/* Symbol: dlb_dct_twiddle_table16_L180_1 */
/* Demangled: dlb_dct_twiddle_table16_L180_1 */
extern void* dlb_dct_twiddle_table16_L180_1;

/* Symbol: vsv_asa_process */
/* Demangled: vsv_asa_process */
int vsv_asa_process(void);

/* Symbol: vsv_ne_process */
/* Demangled: vsv_ne_process */
int vsv_ne_process(void);

/* Symbol: vsv_ns_process */
/* Demangled: vsv_ns_process */
int vsv_ns_process(void);

/* Symbol: vqe_process */
/* Demangled: vqe_process */
int vqe_process(void);

/* Symbol: _ZN5dolby16DapEffectContext14getProfileNameEiPvPj */
/* Demangled: dolby::DapEffectContext::getProfileName(int, void*, unsigned int*) */
int _ZN5dolby16DapEffectContext14getProfileNameEiPvPj(void);

/* Symbol: dlb_dct_twiddle_table16_L180_2 */
/* Demangled: dlb_dct_twiddle_table16_L180_2 */
extern void* dlb_dct_twiddle_table16_L180_2;

/* Symbol: DLB_r4_inv_fft_90 */
/* Demangled: DLB_r4_inv_fft_90 */
int DLB_r4_inv_fft_90(void);

/* Symbol: _ZTVN5dolby17GameEffectContext19DlbGameEffCallbacksE */
/* Demangled: vtable for dolby::GameEffectContext::DlbGameEffCallbacks */
extern void* _ZTVN5dolby17GameEffectContext19DlbGameEffCallbacksE;

/* Symbol: dlb_fft_cplx_fwd_usc */
/* Demangled: dlb_fft_cplx_fwd_usc */
extern void* dlb_fft_cplx_fwd_usc;

/* Symbol: datalog_dump_binary */
/* Demangled: datalog_dump_binary */
int datalog_dump_binary(void);

/* Symbol: vsv_asa_get_config */
/* Demangled: vsv_asa_get_config */
int vsv_asa_get_config(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L256 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L256 */
extern void* dlb_dct_twiddle_table16_rev_1_L256;

/* Symbol: dlb_fft_inv_usc_320 */
/* Demangled: dlb_fft_inv_usc_320 */
int dlb_fft_inv_usc_320(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_legacy */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_legacy */
int DLB_Lmfb_p10km_synthesisCL_legacy(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: vqe_get_noise_level */
/* Demangled: vqe_get_noise_level */
int vqe_get_noise_level(void);

/* Symbol: vqe_set_maxsnr */
/* Demangled: vqe_set_maxsnr */
int vqe_set_maxsnr(void);

/* Symbol: dlb_dct_twiddle_table16_1_L96 */
/* Demangled: dlb_dct_twiddle_table16_1_L96 */
extern void* dlb_dct_twiddle_table16_1_L96;

/* Symbol: dlb_dct_twiddle_table16_L128_1 */
/* Demangled: dlb_dct_twiddle_table16_L128_1 */
extern void* dlb_dct_twiddle_table16_L128_1;

/* Symbol: DLB_r4_fft_80_s */
/* Demangled: DLB_r4_fft_80_s */
int DLB_r4_fft_80_s(void);

/* Symbol: dlb_octfile_getpos */
/* Demangled: dlb_octfile_getpos */
int dlb_octfile_getpos(void);

/* Symbol: vqe_get_default_alg_switches */
/* Demangled: vqe_get_default_alg_switches */
int vqe_get_default_alg_switches(void);

/* Symbol: dlb_CLshlCLUU_flex */
/* Demangled: dlb_CLshlCLUU_flex */
int dlb_CLshlCLUU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L128_2 */
/* Demangled: dlb_dct_twiddle_table16_L128_2 */
extern void* dlb_dct_twiddle_table16_L128_2;

/* Symbol: DLB_r4_inv_fft_96 */
/* Demangled: DLB_r4_inv_fft_96 */
int DLB_r4_inv_fft_96(void);

/* Symbol: dlb_cos_48_full */
/* Demangled: dlb_cos_48_full */
extern void* dlb_cos_48_full;

/* Symbol: _ZN5dolby18VoiceEffectContextD2Ev */
/* Demangled: dolby::VoiceEffectContext::~VoiceEffectContext() */
int _ZN5dolby18VoiceEffectContextD2Ev(void);

/* Symbol: _ZN5dolby16DapEffectContext7processEP14audio_buffer_sS2_ */
/* Demangled: dolby::DapEffectContext::process(audio_buffer_s*, audio_buffer_s*) */
int _ZN5dolby16DapEffectContext7processEP14audio_buffer_sS2_(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L512 */
/* Demangled: dlb_dct_twiddle_table16_rev_L512 */
extern void* dlb_dct_twiddle_table16_rev_L512;

/* Symbol: vqe_get_num_bands */
/* Demangled: vqe_get_num_bands */
int vqe_get_num_bands(void);

/* Symbol: DLB_blk_LnrrecipLU_strict */
/* Demangled: DLB_blk_LnrrecipLU_strict */
int DLB_blk_LnrrecipLU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L288 */
/* Demangled: dlb_dct_twiddle_table16_1_L288 */
extern void* dlb_dct_twiddle_table16_1_L288;

/* Symbol: DLB_qmf_analysisL_get_filter_state_length */
/* Demangled: DLB_qmf_analysisL_get_filter_state_length */
int DLB_qmf_analysisL_get_filter_state_length(void);

/* Symbol: dlb_qmf_filter_coeff_P5_32_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_32_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_32_vec_ana;

/* Symbol: DLB_r4_fft_576 */
/* Demangled: DLB_r4_fft_576 */
int DLB_r4_fft_576(void);

/* Symbol: _ZN5dolby10VqeProcessD1Ev */
/* Demangled: dolby::VqeProcess::~VqeProcess() */
int _ZN5dolby10VqeProcessD1Ev(void);

/* Symbol: datalog_write_char */
/* Demangled: datalog_write_char */
int datalog_write_char(void);

/* Symbol: a_shift_table_CQMF_960x960x61_48000_tab */
/* Demangled: a_shift_table_CQMF_960x960x61_48000_tab */
extern void* a_shift_table_CQMF_960x960x61_48000_tab;

/* Symbol: vqe_get_avg_supp_gain */
/* Demangled: vqe_get_avg_supp_gain */
int vqe_get_avg_supp_gain(void);

/* Symbol: DLB_blk_LminLLL_strict */
/* Demangled: DLB_blk_LminLLL_strict */
int DLB_blk_LminLLL_strict(void);

/* Symbol: vqe_api_close */
/* Demangled: vqe_api_close */
int vqe_api_close(void);

/* Symbol: a_shift_table_MDXT_320x320x48_16000_tab */
/* Demangled: a_shift_table_MDXT_320x320x48_16000_tab */
extern void* a_shift_table_MDXT_320x320x48_16000_tab;

/* Symbol: DLB_blk_Liir1xL_setup */
/* Demangled: DLB_blk_Liir1xL_setup */
int DLB_blk_Liir1xL_setup(void);

/* Symbol: DLB_blk_Liir2ssL_set_coef */
/* Demangled: DLB_blk_Liir2ssL_set_coef */
int DLB_blk_Liir2ssL_set_coef(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L120 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L120 */
extern void* dlb_dct_twiddle_table16_rev_1_L120;

/* Symbol: DLB_r4_fft_720 */
/* Demangled: DLB_r4_fft_720 */
int DLB_r4_fft_720(void);

/* Symbol: _ZN5dolby13AudioHalUtilsD2Ev */
/* Demangled: dolby::AudioHalUtils::~AudioHalUtils() */
int _ZN5dolby13AudioHalUtilsD2Ev(void);

/* Symbol: DLB_blk_Liir2ssv1_usmpL_strict */
/* Demangled: DLB_blk_Liir2ssv1_usmpL_strict */
int DLB_blk_Liir2ssv1_usmpL_strict(void);

/* Symbol: DLB_r4_inv_fft_120_s */
/* Demangled: DLB_r4_inv_fft_120_s */
int DLB_r4_inv_fft_120_s(void);

/* Symbol: vsv_tx_open */
/* Demangled: vsv_tx_open */
int vsv_tx_open(void);

/* Symbol: dlb_dct_twiddle_table16_L960_1 */
/* Demangled: dlb_dct_twiddle_table16_L960_1 */
extern void* dlb_dct_twiddle_table16_L960_1;

/* Symbol: vqe_get_asa_curr_obj_id */
/* Demangled: vqe_get_asa_curr_obj_id */
int vqe_get_asa_curr_obj_id(void);

/* Symbol: _ZN5dolby13EffectContext5resetEv */
/* Demangled: dolby::EffectContext::reset() */
int _ZN5dolby13EffectContext5resetEv(void);

/* Symbol: dlb_dct_twiddle_table16_L960_2 */
/* Demangled: dlb_dct_twiddle_table16_L960_2 */
extern void* dlb_dct_twiddle_table16_L960_2;

/* Symbol: DLB_r4_inv_fft_60_s */
/* Demangled: DLB_r4_inv_fft_60_s */
int DLB_r4_inv_fft_60_s(void);

/* Symbol: DLB_hybrid_analysisCL_get_scale */
/* Demangled: DLB_hybrid_analysisCL_get_scale */
int DLB_hybrid_analysisCL_get_scale(void);

/* Symbol: dlb_riff_skip_chunk_data */
/* Demangled: dlb_riff_skip_chunk_data */
int dlb_riff_skip_chunk_data(void);

/* Symbol: vstack_cleanup */
/* Demangled: vstack_cleanup */
int vstack_cleanup(void);

/* Symbol: dlb_vec_Labs_maxLU_flex */
/* Demangled: dlb_vec_Labs_maxLU_flex */
int dlb_vec_Labs_maxLU_flex(void);

/* Symbol: DLB_CLdivCLCLU_strict */
/* Demangled: DLB_CLdivCLCLU_strict */
int DLB_CLdivCLCLU_strict(void);

/* Symbol: dlb_VLsquaredmagCLIU_flex */
/* Demangled: dlb_VLsquaredmagCLIU_flex */
int dlb_VLsquaredmagCLIU_flex(void);

/* Symbol: _ZN5dolby16VqeBufferAdapter9configureEii14audio_format_t20audio_channel_mask_tS2_ */
/* Demangled: dolby::VqeBufferAdapter::configure(int, int, audio_format_t, audio_channel_mask_t, audio_channel_mask_t) */
int _ZN5dolby16VqeBufferAdapter9configureEii14audio_format_t20audio_channel_mask_tS2_(void);

/* Symbol: vqe_get_mic_bulk_gain */
/* Demangled: vqe_get_mic_bulk_gain */
int vqe_get_mic_bulk_gain(void);

/* Symbol: DLB_r4_fft_90 */
/* Demangled: DLB_r4_fft_90 */
int DLB_r4_fft_90(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_even_0 */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_0 */
int DLB_Lmfb_p10km_synthesisCL_even_0(void);

/* Symbol: utlog_write */
/* Demangled: utlog_write */
int utlog_write(void);

/* Symbol: dlb_dct_twiddle_table16_L4_1 */
/* Demangled: dlb_dct_twiddle_table16_L4_1 */
extern void* dlb_dct_twiddle_table16_L4_1;

/* Symbol: DLB_r4_inv_fft_144 */
/* Demangled: DLB_r4_inv_fft_144 */
int DLB_r4_inv_fft_144(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_even_1 */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_1 */
int DLB_Lmfb_p10km_synthesisCL_even_1(void);

/* Symbol: _ZN5dolby9EffectVqe20updateProcessEnabledEv */
/* Demangled: dolby::EffectVqe::updateProcessEnabled() */
int _ZN5dolby9EffectVqe20updateProcessEnabledEv(void);

/* Symbol: _ZN5dolby18VoiceEffectContext15setVqeParameterEPvj */
/* Demangled: dolby::VoiceEffectContext::setVqeParameter(void*, unsigned int) */
int _ZN5dolby18VoiceEffectContext15setVqeParameterEPvj(void);

/* Symbol: dlb_vec_Lmask_rev_coefLSU_flex */
/* Demangled: dlb_vec_Lmask_rev_coefLSU_flex */
int dlb_vec_Lmask_rev_coefLSU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L4_2 */
/* Demangled: dlb_dct_twiddle_table16_L4_2 */
extern void* dlb_dct_twiddle_table16_L4_2;

/* Symbol: DLB_Lmfb_p10km_synthesisCL_even_2 */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_2 */
int DLB_Lmfb_p10km_synthesisCL_even_2(void);

/* Symbol: dlb_qmf_filter_coeff_P5_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_vec_syn;

/* Symbol: DLB_vec_IeqLLU_strict */
/* Demangled: DLB_vec_IeqLLU_strict */
int DLB_vec_IeqLLU_strict(void);

/* Symbol: dlb_CLmpy_shlCLSIU_inplace_flex */
/* Demangled: dlb_CLmpy_shlCLSIU_inplace_flex */
int dlb_CLmpy_shlCLSIU_inplace_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L128 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L128 */
extern void* dlb_dct_twiddle_table16_rev_1_L128;

/* Symbol: dlb_dct_twiddle_table16_L192_1 */
/* Demangled: dlb_dct_twiddle_table16_L192_1 */
extern void* dlb_dct_twiddle_table16_L192_1;

/* Symbol: DLB_Lmfb_p10km_synthesisCL_even_3 */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_3 */
int DLB_Lmfb_p10km_synthesisCL_even_3(void);

/* Symbol: DLB_qmf_synthesisS_get_delay */
/* Demangled: DLB_qmf_synthesisS_get_delay */
int DLB_qmf_synthesisS_get_delay(void);

/* Symbol: _ZTVN5dolby17DlbBufferProviderE */
/* Demangled: vtable for dolby::DlbBufferProvider */
extern void* _ZTVN5dolby17DlbBufferProviderE;

/* Symbol: dlb_wave_get_channel_mask */
/* Demangled: dlb_wave_get_channel_mask */
int dlb_wave_get_channel_mask(void);

/* Symbol: dlb_blk_Liir2ssv1L_flex */
/* Demangled: dlb_blk_Liir2ssv1L_flex */
int dlb_blk_Liir2ssv1L_flex(void);

/* Symbol: dlb_blk_LintegrateL_flex */
/* Demangled: dlb_blk_LintegrateL_flex */
int dlb_blk_LintegrateL_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L192_2 */
/* Demangled: dlb_dct_twiddle_table16_L192_2 */
extern void* dlb_dct_twiddle_table16_L192_2;

/* Symbol: DLB_fft_CLinv_unscaledCL */
/* Demangled: DLB_fft_CLinv_unscaledCL */
int DLB_fft_CLinv_unscaledCL(void);

/* Symbol: vsv_trag_get_cflx */
/* Demangled: vsv_trag_get_cflx */
int vsv_trag_get_cflx(void);

/* Symbol: DLB_r4_inv_fft_576_s */
/* Demangled: DLB_r4_inv_fft_576_s */
int DLB_r4_inv_fft_576_s(void);

/* Symbol: dlb_blk_LnrrecipLU_flex */
/* Demangled: dlb_blk_LnrrecipLU_flex */
int dlb_blk_LnrrecipLU_flex(void);

/* Symbol: DLB_r4_fft_96 */
/* Demangled: DLB_r4_fft_96 */
int DLB_r4_fft_96(void);

/* Symbol: _ZN5dolby17DlbBufferProvider14updateCapacityEi */
/* Demangled: dolby::DlbBufferProvider::updateCapacity(int) */
int _ZN5dolby17DlbBufferProvider14updateCapacityEi(void);

/* Symbol: _ZN5dolby9DlbEffect27handle_EFFECT_CMD_SET_PARAMERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_SET_PARAM(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect27handle_EFFECT_CMD_SET_PARAMERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: DLB_CLrecipCLUU_strict */
/* Demangled: DLB_CLrecipCLUU_strict */
int DLB_CLrecipCLUU_strict(void);

/* Symbol: dlb_fft_fwd_scl_180 */
/* Demangled: dlb_fft_fwd_scl_180 */
int dlb_fft_fwd_scl_180(void);

/* Symbol: _ZN5dolby19VqeCrossfadeProcessC1EPNS_11IDlbProcessE */
/* Demangled: dolby::VqeCrossfadeProcess::VqeCrossfadeProcess(dolby::IDlbProcess*) */
int _ZN5dolby19VqeCrossfadeProcessC1EPNS_11IDlbProcessE(void);

/* Symbol: DLB_r4_fft_2048_s */
/* Demangled: DLB_r4_fft_2048_s */
int DLB_r4_fft_2048_s(void);

/* Symbol: DLB_r4_fft_160 */
/* Demangled: DLB_r4_fft_160 */
int DLB_r4_fft_160(void);

/* Symbol: dlb_cos_64_full_scl */
/* Demangled: dlb_cos_64_full_scl */
extern void* dlb_cos_64_full_scl;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj(void);

/* Symbol: a_shift_table_MDFT_320x320x48_16000_tab */
/* Demangled: a_shift_table_MDFT_320x320x48_16000_tab */
extern void* a_shift_table_MDFT_320x320x48_16000_tab;

/* Symbol: _ZN5dolby17GameEffectContext19connectDolbyServiceEv */
/* Demangled: dolby::GameEffectContext::connectDolbyService() */
int _ZN5dolby17GameEffectContext19connectDolbyServiceEv(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcess10accumulateEPiS1_S1_iff */
/* Demangled: dolby::DlbCrossfadeProcess::accumulate(int*, int*, int*, int, float, float) */
int _ZN5dolby19DlbCrossfadeProcess10accumulateEPiS1_S1_iff(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcessD1Ev */
/* Demangled: dolby::DlbCrossfadeProcess::~DlbCrossfadeProcess() */
int _ZN5dolby19DlbCrossfadeProcessD1Ev(void);

/* Symbol: dlb_hyb_p2_6 */
/* Demangled: dlb_hyb_p2_6 */
extern void* dlb_hyb_p2_6;

/* Symbol: dlb_vec_LshlLIU_flex */
/* Demangled: dlb_vec_LshlLIU_flex */
int dlb_vec_LshlLIU_flex(void);

/* Symbol: dlb_fft_inv_usc_180 */
/* Demangled: dlb_fft_inv_usc_180 */
int dlb_fft_inv_usc_180(void);

/* Symbol: dlb_dct_twiddle_table16_L96_cos */
/* Demangled: dlb_dct_twiddle_table16_L96_cos */
extern void* dlb_dct_twiddle_table16_L96_cos;

/* Symbol: _ZN5dolby16DapEffectContext21setContentProcEnabledEb */
/* Demangled: dolby::DapEffectContext::setContentProcEnabled(bool) */
int _ZN5dolby16DapEffectContext21setContentProcEnabledEb(void);

/* Symbol: dlb_dct_twiddle_table16_L240 */
/* Demangled: dlb_dct_twiddle_table16_L240 */
extern void* dlb_dct_twiddle_table16_L240;

/* Symbol: vstack_init */
/* Demangled: vstack_init */
int vstack_init(void);

/* Symbol: dlb_dctII_scaled */
/* Demangled: dlb_dctII_scaled */
int dlb_dctII_scaled(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L60 */
/* Demangled: dlb_dct_twiddle_table16_rev_L60 */
extern void* dlb_dct_twiddle_table16_rev_L60;

/* Symbol: dlb_wave_get_current_frame */
/* Demangled: dlb_wave_get_current_frame */
int dlb_wave_get_current_frame(void);

/* Symbol: _ZN5dolby18VoiceEffectContext20resetNoiseEstimationEPvj */
/* Demangled: dolby::VoiceEffectContext::resetNoiseEstimation(void*, unsigned int) */
int _ZN5dolby18VoiceEffectContext20resetNoiseEstimationEPvj(void);

/* Symbol: stats_init */
/* Demangled: stats_init */
int stats_init(void);

/* Symbol: DLB_blk_Lfir2L_setup */
/* Demangled: DLB_blk_Lfir2L_setup */
int DLB_blk_Lfir2L_setup(void);

/* Symbol: DLB_blk_Liir2ssv2_shlLU_strict */
/* Demangled: DLB_blk_Liir2ssv2_shlLU_strict */
int DLB_blk_Liir2ssv2_shlLU_strict(void);

/* Symbol: dlb_fft_inv_scl_240 */
/* Demangled: dlb_fft_inv_scl_240 */
int dlb_fft_inv_scl_240(void);

/* Symbol: a_shift_table_MDXT_960x960x61_48000_tab */
/* Demangled: a_shift_table_MDXT_960x960x61_48000_tab */
extern void* a_shift_table_MDXT_960x960x61_48000_tab;

/* Symbol: DLB_CLshlCLUU_strict */
/* Demangled: DLB_CLshlCLUU_strict */
int DLB_CLshlCLUU_strict(void);

/* Symbol: dlb_dct_twiddle_table16_1_L576 */
/* Demangled: dlb_dct_twiddle_table16_1_L576 */
extern void* dlb_dct_twiddle_table16_1_L576;

/* Symbol: dlb_dct_twiddle_table16_rev_1_L960 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L960 */
extern void* dlb_dct_twiddle_table16_rev_1_L960;

/* Symbol: dlb_dct_twiddle_table16_rev_L64 */
/* Demangled: dlb_dct_twiddle_table16_rev_L64 */
extern void* dlb_dct_twiddle_table16_rev_L64;

/* Symbol: DLB_r4_inv_fft_1024 */
/* Demangled: DLB_r4_inv_fft_1024 */
int DLB_r4_inv_fft_1024(void);

/* Symbol: DLB_mfb_p10km_analysisL_query_mem */
/* Demangled: DLB_mfb_p10km_analysisL_query_mem */
int DLB_mfb_p10km_analysisL_query_mem(void);

/* Symbol: dlb_riff_read_next_chunk */
/* Demangled: dlb_riff_read_next_chunk */
int dlb_riff_read_next_chunk(void);

/* Symbol: _ZN5dolby13EffectContext6enableEv */
/* Demangled: dolby::EffectContext::enable() */
int _ZN5dolby13EffectContext6enableEv(void);

/* Symbol: dlb_dct_twiddle_table16_1_L720 */
/* Demangled: dlb_dct_twiddle_table16_1_L720 */
extern void* dlb_dct_twiddle_table16_1_L720;

/* Symbol: DLB_r4_inv_fft_72_s */
/* Demangled: DLB_r4_inv_fft_72_s */
int DLB_r4_inv_fft_72_s(void);

/* Symbol: datalog_frame_count */
/* Demangled: datalog_frame_count */
int datalog_frame_count(void);

/* Symbol: DLB_CLmacCLLU_strict */
/* Demangled: DLB_CLmacCLLU_strict */
int DLB_CLmacCLLU_strict(void);

/* Symbol: dlb_qmf_filter_coeff_P4 */
/* Demangled: dlb_qmf_filter_coeff_P4 */
extern void* dlb_qmf_filter_coeff_P4;

/* Symbol: _ZN5dolby9EffectVqeD2Ev */
/* Demangled: dolby::EffectVqe::~EffectVqe() */
int _ZN5dolby9EffectVqeD2Ev(void);

/* Symbol: vsv_agc_close */
/* Demangled: vsv_agc_close */
int vsv_agc_close(void);

/* Symbol: vsv_ml_num_defs */
/* Demangled: vsv_ml_num_defs */
extern void* vsv_ml_num_defs;

/* Symbol: DLB_blk_LLdeshuffleLL_inplace_strict */
/* Demangled: DLB_blk_LLdeshuffleLL_inplace_strict */
int DLB_blk_LLdeshuffleLL_inplace_strict(void);

/* Symbol: DLB_CLCLmix7CL14SU_strict */
/* Demangled: DLB_CLCLmix7CL14SU_strict */
int DLB_CLCLmix7CL14SU_strict(void);

/* Symbol: dlb_qmf_filter_coeff_P5 */
/* Demangled: dlb_qmf_filter_coeff_P5 */
extern void* dlb_qmf_filter_coeff_P5;

/* Symbol: dlb_dct_twiddle_table16_L36_cos */
/* Demangled: dlb_dct_twiddle_table16_L36_cos */
extern void* dlb_dct_twiddle_table16_L36_cos;

/* Symbol: synthesis_mdct */
/* Demangled: synthesis_mdct */
int synthesis_mdct(void);

/* Symbol: DLB_blk_Liir2ssv1_dsmpL_strict */
/* Demangled: DLB_blk_Liir2ssv1_dsmpL_strict */
int DLB_blk_Liir2ssv1_dsmpL_strict(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_syn */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_syn */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_16_vec_syn;

/* Symbol: dlb_dct_twiddle_table16_L180_cos */
/* Demangled: dlb_dct_twiddle_table16_L180_cos */
extern void* dlb_dct_twiddle_table16_L180_cos;

/* Symbol: dlb_BLmpy_scaleBLSU_flex */
/* Demangled: dlb_BLmpy_scaleBLSU_flex */
int dlb_BLmpy_scaleBLSU_flex(void);

/* Symbol: dlb_qmf_filter_coeff_P4_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P4_vec_ana */
extern void* dlb_qmf_filter_coeff_P4_vec_ana;

/* Symbol: DLB_r4_inv_fft_288 */
/* Demangled: DLB_r4_inv_fft_288 */
int DLB_r4_inv_fft_288(void);

/* Symbol: dlb_qmf_analysisL_reconfig */
/* Demangled: dlb_qmf_analysisL_reconfig */
int dlb_qmf_analysisL_reconfig(void);

/* Symbol: dlb_dct_twiddle_table16_L16_cos */
/* Demangled: dlb_dct_twiddle_table16_L16_cos */
extern void* dlb_dct_twiddle_table16_L16_cos;

/* Symbol: _ZN5dolby14BufferProviderD1Ev */
/* Demangled: dolby::BufferProvider::~BufferProvider() */
int _ZN5dolby14BufferProviderD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj(void);

/* Symbol: DLB_blk_Lfir3L_set_coef */
/* Demangled: DLB_blk_Lfir3L_set_coef */
int DLB_blk_Lfir3L_set_coef(void);

/* Symbol: dlb_blk_LmaxLL_flex */
/* Demangled: dlb_blk_LmaxLL_flex */
int dlb_blk_LmaxLL_flex(void);

/* Symbol: DLB_fft_init */
/* Demangled: DLB_fft_init */
int DLB_fft_init(void);

/* Symbol: vsv_agc_defs_num */
/* Demangled: vsv_agc_defs_num */
extern void* vsv_agc_defs_num;

/* Symbol: vsv_asa_defs_num */
/* Demangled: vsv_asa_defs_num */
extern void* vsv_asa_defs_num;

/* Symbol: dlb_dct_twiddle_table16_rev_L1024 */
/* Demangled: dlb_dct_twiddle_table16_rev_L1024 */
extern void* dlb_dct_twiddle_table16_rev_L1024;

/* Symbol: dlb_dct_twiddle_table16_L320_1 */
/* Demangled: dlb_dct_twiddle_table16_L320_1 */
extern void* dlb_dct_twiddle_table16_L320_1;

/* Symbol: dlb_wave_get_format_flags */
/* Demangled: dlb_wave_get_format_flags */
int dlb_wave_get_format_flags(void);

/* Symbol: vsv_agc_get_gain_range */
/* Demangled: vsv_agc_get_gain_range */
int vsv_agc_get_gain_range(void);

/* Symbol: DLB_blk_Lattack_decay_peak_iir1L_set_coef */
/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_set_coef */
int DLB_blk_Lattack_decay_peak_iir1L_set_coef(void);

/* Symbol: dlb_dct_twiddle_table16_L320_2 */
/* Demangled: dlb_dct_twiddle_table16_L320_2 */
extern void* dlb_dct_twiddle_table16_L320_2;

/* Symbol: _ZN5dolby14BufferProvider9setConfigEij */
/* Demangled: dolby::BufferProvider::setConfig(int, unsigned int) */
int _ZN5dolby14BufferProvider9setConfigEij(void);

/* Symbol: _ZTVN5dolby17GameEffectContextE */
/* Demangled: vtable for dolby::GameEffectContext */
extern void* _ZTVN5dolby17GameEffectContextE;

/* Symbol: dlb_dct_twiddle_table16_L60 */
/* Demangled: dlb_dct_twiddle_table16_L60 */
extern void* dlb_dct_twiddle_table16_L60;

/* Symbol: DLB_qmf_analysisL_get_max_filter_state_length */
/* Demangled: DLB_qmf_analysisL_get_max_filter_state_length */
int DLB_qmf_analysisL_get_max_filter_state_length(void);

/* Symbol: _ZN5dolby16DapEffectContext16getTuningListLenEiPvPj */
/* Demangled: dolby::DapEffectContext::getTuningListLen(int, void*, unsigned int*) */
int _ZN5dolby16DapEffectContext16getTuningListLenEiPvPj(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L240 */
/* Demangled: dlb_dct_twiddle_table16_rev_L240 */
extern void* dlb_dct_twiddle_table16_rev_L240;

/* Symbol: dlb_dct_twiddle_table16_L12_1 */
/* Demangled: dlb_dct_twiddle_table16_L12_1 */
extern void* dlb_dct_twiddle_table16_L12_1;

/* Symbol: DLB_r4_fft_640_s */
/* Demangled: DLB_r4_fft_640_s */
int DLB_r4_fft_640_s(void);

/* Symbol: DLB_r4_inv_fft_4096_s */
/* Demangled: DLB_r4_inv_fft_4096_s */
int DLB_r4_inv_fft_4096_s(void);

/* Symbol: DLB_hybrid_synthesisCL_open */
/* Demangled: DLB_hybrid_synthesisCL_open */
int DLB_hybrid_synthesisCL_open(void);

/* Symbol: vsv_gain_vector_gain_complex_data */
/* Demangled: vsv_gain_vector_gain_complex_data */
int vsv_gain_vector_gain_complex_data(void);

/* Symbol: DLB_blk_LabsL_strict */
/* Demangled: DLB_blk_LabsL_strict */
int DLB_blk_LabsL_strict(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L90 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L90 */
extern void* dlb_dct_twiddle_table16_rev_1_L90;

/* Symbol: dlb_dct_twiddle_table16_L12_2 */
/* Demangled: dlb_dct_twiddle_table16_L12_2 */
extern void* dlb_dct_twiddle_table16_L12_2;

/* Symbol: dlb_dct_twiddle_table16_L45_1 */
/* Demangled: dlb_dct_twiddle_table16_L45_1 */
extern void* dlb_dct_twiddle_table16_L45_1;

/* Symbol: DLB_r4_fft_12_s */
/* Demangled: DLB_r4_fft_12_s */
int DLB_r4_fft_12_s(void);

/* Symbol: dlb_fft_fwd_usc_144 */
/* Demangled: dlb_fft_fwd_usc_144 */
int dlb_fft_fwd_usc_144(void);

/* Symbol: dlb_dct_twiddle_table16_L120_cos */
/* Demangled: dlb_dct_twiddle_table16_L120_cos */
extern void* dlb_dct_twiddle_table16_L120_cos;

/* Symbol: a_shift_table_MDFT_960x960x61_48000_tab */
/* Demangled: a_shift_table_MDFT_960x960x61_48000_tab */
extern void* a_shift_table_MDFT_960x960x61_48000_tab;

/* Symbol: vsv_asa_init */
/* Demangled: vsv_asa_init */
int vsv_asa_init(void);

/* Symbol: DLB_blk_LfirUL_strict */
/* Demangled: DLB_blk_LfirUL_strict */
int DLB_blk_LfirUL_strict(void);

/* Symbol: dlb_blk_Liir1xL_flex */
/* Demangled: dlb_blk_Liir1xL_flex */
int dlb_blk_Liir1xL_flex(void);

/* Symbol: dlb_clclmix5cl10csu_order_coef_c */
/* Demangled: dlb_clclmix5cl10csu_order_coef_c */
extern void* dlb_clclmix5cl10csu_order_coef_c;

/* Symbol: dlb_dct_twiddle_table16_L45_2 */
/* Demangled: dlb_dct_twiddle_table16_L45_2 */
extern void* dlb_dct_twiddle_table16_L45_2;

/* Symbol: DLB_r4_fft_45_s */
/* Demangled: DLB_r4_fft_45_s */
int DLB_r4_fft_45_s(void);

/* Symbol: DLB_Lmfb_p10km_synthesisCL_close */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_close */
int DLB_Lmfb_p10km_synthesisCL_close(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_48_vec_ana;

/* Symbol: dlb_dct_twiddle_table16_L64 */
/* Demangled: dlb_dct_twiddle_table16_L64 */
extern void* dlb_dct_twiddle_table16_L64;

/* Symbol: _ZN5dolby9DlbEffect11kDescriptorE */
/* Demangled: dolby::DlbEffect::kDescriptor */
extern void* _ZN5dolby9DlbEffect11kDescriptorE;

/* Symbol: _ZN5dolby10VqeProcessC2Ev */
/* Demangled: dolby::VqeProcess::VqeProcess() */
int _ZN5dolby10VqeProcessC2Ev(void);

/* Symbol: dlb_blk_LfirUL_flex */
/* Demangled: dlb_blk_LfirUL_flex */
int dlb_blk_LfirUL_flex(void);

/* Symbol: DLB_r4_fft_360_s */
/* Demangled: DLB_r4_fft_360_s */
int DLB_r4_fft_360_s(void);

/* Symbol: dlb_fft_fwd_scl_2048 */
/* Demangled: dlb_fft_fwd_scl_2048 */
int dlb_fft_fwd_scl_2048(void);

/* Symbol: _ZN5dolby16DapEffectContextD1Ev */
/* Demangled: dolby::DapEffectContext::~DapEffectContext() */
int _ZN5dolby16DapEffectContextD1Ev(void);

/* Symbol: dlb_dct_twiddle_table16_L384 */
/* Demangled: dlb_dct_twiddle_table16_L384 */
extern void* dlb_dct_twiddle_table16_L384;

/* Symbol: DLB_Lmfb_p10km_synthesisCL_symmetric */
/* Demangled: DLB_Lmfb_p10km_synthesisCL_symmetric */
int DLB_Lmfb_p10km_synthesisCL_symmetric(void);

/* Symbol: dlb_forwardModulationComplex */
/* Demangled: dlb_forwardModulationComplex */
int dlb_forwardModulationComplex(void);

/* Symbol: DLB_qmf_synthesisS_copy_states */
/* Demangled: DLB_qmf_synthesisS_copy_states */
int DLB_qmf_synthesisS_copy_states(void);

/* Symbol: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_ana */
/* Demangled: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_ana */
extern void* dlb_qmf_filter_coeff_P5_p64atm301_8_vec_ana;

/* Symbol: dlb_dct_twiddle_table16_L60_cos */
/* Demangled: dlb_dct_twiddle_table16_L60_cos */
extern void* dlb_dct_twiddle_table16_L60_cos;

/* Symbol: DLB_time_sub */
/* Demangled: DLB_time_sub */
int DLB_time_sub(void);

/* Symbol: dlb_wave_close */
/* Demangled: dlb_wave_close */
int dlb_wave_close(void);

/* Symbol: vlib_transform_reset */
/* Demangled: vlib_transform_reset */
int vlib_transform_reset(void);

/* Symbol: dlb_blk_Lmix_shlULLL_flex */
/* Demangled: dlb_blk_Lmix_shlULLL_flex */
int dlb_blk_Lmix_shlULLL_flex(void);

/* Symbol: dlb_fft_fwd_usc_2 */
/* Demangled: dlb_fft_fwd_usc_2 */
int dlb_fft_fwd_usc_2(void);

/* Symbol: DLB_hybrid_analysisCL_open */
/* Demangled: DLB_hybrid_analysisCL_open */
int DLB_hybrid_analysisCL_open(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L96 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L96 */
extern void* dlb_dct_twiddle_table16_rev_1_L96;

/* Symbol: DLB_r4_inv_fft_144_s */
/* Demangled: DLB_r4_inv_fft_144_s */
int DLB_r4_inv_fft_144_s(void);

/* Symbol: dlb_dct_twiddle_table16_L288_1 */
/* Demangled: dlb_dct_twiddle_table16_L288_1 */
extern void* dlb_dct_twiddle_table16_L288_1;

/* Symbol: dlb_fft_inv_scl_384 */
/* Demangled: dlb_fft_inv_scl_384 */
int dlb_fft_inv_scl_384(void);

/* Symbol: dlb_fft_fwd_usc_4 */
/* Demangled: dlb_fft_fwd_usc_4 */
int dlb_fft_fwd_usc_4(void);

/* Symbol: vstack_close_frame */
/* Demangled: vstack_close_frame */
int vstack_close_frame(void);

/* Symbol: DLB_vec_LmpyLSU_inplace_strict */
/* Demangled: DLB_vec_LmpyLSU_inplace_strict */
int DLB_vec_LmpyLSU_inplace_strict(void);

/* Symbol: dlb_dct_twiddle_table16_L288_2 */
/* Demangled: dlb_dct_twiddle_table16_L288_2 */
extern void* dlb_dct_twiddle_table16_L288_2;

/* Symbol: _ZN5dolby10VqeProcess8getParamEiPiS1_ */
/* Demangled: dolby::VqeProcess::getParam(int, int*, int*) */
int _ZN5dolby10VqeProcess8getParamEiPiS1_(void);

/* Symbol: _ZN5dolby17GameEffectContextD0Ev */
/* Demangled: dolby::GameEffectContext::~GameEffectContext() */
int _ZN5dolby17GameEffectContextD0Ev(void);

/* Symbol: _ZN5dolby13EffectContext9setBypassEPvj */
/* Demangled: dolby::EffectContext::setBypass(void*, unsigned int) */
int _ZN5dolby13EffectContext9setBypassEPvj(void);

/* Symbol: dlb_fft_fwd_usc_6 */
/* Demangled: dlb_fft_fwd_usc_6 */
int dlb_fft_fwd_usc_6(void);

/* Symbol: DLB_MFB_P10KM_P4_319SC_128M */
/* Demangled: DLB_MFB_P10KM_P4_319SC_128M */
extern void* DLB_MFB_P10KM_P4_319SC_128M;

/* Symbol: a_shift_table_MDCT_640x640x56_32000_tab */
/* Demangled: a_shift_table_MDCT_640x640x56_32000_tab */
extern void* a_shift_table_MDCT_640x640x56_32000_tab;

/* Symbol: dlb_fft_fwd_usc_8 */
/* Demangled: dlb_fft_fwd_usc_8 */
int dlb_fft_fwd_usc_8(void);

/* Symbol: _ZN5dolby19DlbCrossfadeProcess4initEv */
/* Demangled: dolby::DlbCrossfadeProcess::init() */
int _ZN5dolby19DlbCrossfadeProcess4initEv(void);

/* Symbol: _ZN5dolby12BufferSource15fillWithSilenceEv */
/* Demangled: dolby::BufferSource::fillWithSilence() */
int _ZN5dolby12BufferSource15fillWithSilenceEv(void);

/* Symbol: dlb_octfile_open_generic */
/* Demangled: dlb_octfile_open_generic */
int dlb_octfile_open_generic(void);

/* Symbol: DLB_blk_Lfir3L_setup */
/* Demangled: DLB_blk_Lfir3L_setup */
int DLB_blk_Lfir3L_setup(void);

/* Symbol: dlb_fft_fwd_scl_192 */
/* Demangled: dlb_fft_fwd_scl_192 */
int dlb_fft_fwd_scl_192(void);

/* Symbol: vsv_reg_init */
/* Demangled: vsv_reg_init */
int vsv_reg_init(void);

/* Symbol: _ZN5dolby9DlbEffect32handle_EFFECT_CMD_SET_AUDIO_MODEERNS_13EffectContextERNS_12ParserBufferES4_ */
/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_SET_AUDIO_MODE(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
int _ZN5dolby9DlbEffect32handle_EFFECT_CMD_SET_AUDIO_MODEERNS_13EffectContextERNS_12ParserBufferES4_(void);

/* Symbol: dlb_blk_Liir1L_flex */
/* Demangled: dlb_blk_Liir1L_flex */
int dlb_blk_Liir1L_flex(void);

/* Symbol: vqe_get_valid_alg_switches */
/* Demangled: vqe_get_valid_alg_switches */
int vqe_get_valid_alg_switches(void);

/* Symbol: _ZN5dolby9DlbEffect19effectGetDescriptorEPP18effect_interface_sP19effect_descriptor_s */
/* Demangled: dolby::DlbEffect::effectGetDescriptor(effect_interface_s**, effect_descriptor_s*) */
int _ZN5dolby9DlbEffect19effectGetDescriptorEPP18effect_interface_sP19effect_descriptor_s(void);

/* Symbol: dlb_blk_LminLLL_flex */
/* Demangled: dlb_blk_LminLLL_flex */
int dlb_blk_LminLLL_flex(void);

/* Symbol: dlb_wave_get_format */
/* Demangled: dlb_wave_get_format */
int dlb_wave_get_format(void);

/* Symbol: a_shift_table_MDCT_320x320x49_32000_tab */
/* Demangled: a_shift_table_MDCT_320x320x49_32000_tab */
extern void* a_shift_table_MDCT_320x320x49_32000_tab;

/* Symbol: vsv_har_close */
/* Demangled: vsv_har_close */
int vsv_har_close(void);

/* Symbol: dlb_fft_inv_usc_192 */
/* Demangled: dlb_fft_inv_usc_192 */
int dlb_fft_inv_usc_192(void);

/* Symbol: DLB_hybrid_analysisCL_get_delay */
/* Demangled: DLB_hybrid_analysisCL_get_delay */
int DLB_hybrid_analysisCL_get_delay(void);

/* Symbol: dlb_wave_get_sample_rate */
/* Demangled: dlb_wave_get_sample_rate */
int dlb_wave_get_sample_rate(void);

/* Symbol: DLB_r4_inv_fft_576 */
/* Demangled: DLB_r4_inv_fft_576 */
int DLB_r4_inv_fft_576(void);

/* Symbol: dlb_wave_seek_to_frame */
/* Demangled: dlb_wave_seek_to_frame */
int dlb_wave_seek_to_frame(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L72 */
/* Demangled: dlb_dct_twiddle_table16_rev_L72 */
extern void* dlb_dct_twiddle_table16_rev_L72;

/* Symbol: reset_Phase90Hilbert */
/* Demangled: reset_Phase90Hilbert */
int reset_Phase90Hilbert(void);

/* Symbol: dlb_cos_8_full */
/* Demangled: dlb_cos_8_full */
extern void* dlb_cos_8_full;

/* Symbol: _ZN5dolby16DapEffectContext8setParamEijPv */
/* Demangled: dolby::DapEffectContext::setParam(int, unsigned int, void*) */
int _ZN5dolby16DapEffectContext8setParamEijPv(void);

/* Symbol: dlb_dct_twiddle_table16_L24_1 */
/* Demangled: dlb_dct_twiddle_table16_L24_1 */
extern void* dlb_dct_twiddle_table16_L24_1;

/* Symbol: DLB_r4_inv_fft_720 */
/* Demangled: DLB_r4_inv_fft_720 */
int DLB_r4_inv_fft_720(void);

/* Symbol: _ZN5dolby13EffectContext7releaseEv */
/* Demangled: dolby::EffectContext::release() */
int _ZN5dolby13EffectContext7releaseEv(void);

/* Symbol: dlb_dct_twiddle_table16_L24_2 */
/* Demangled: dlb_dct_twiddle_table16_L24_2 */
extern void* dlb_dct_twiddle_table16_L24_2;

/* Symbol: DLB_r4_fft_24_s */
/* Demangled: DLB_r4_fft_24_s */
int DLB_r4_fft_24_s(void);

/* Symbol: DLB_r4_fft_320 */
/* Demangled: DLB_r4_fft_320 */
int DLB_r4_fft_320(void);

/* Symbol: dlb_octfile_flush */
/* Demangled: dlb_octfile_flush */
int dlb_octfile_flush(void);

/* Symbol: utlog_open */
/* Demangled: utlog_open */
int utlog_open(void);

/* Symbol: vqe_get_ml_start_decision */
/* Demangled: vqe_get_ml_start_decision */
int vqe_get_ml_start_decision(void);

/* Symbol: dlb_BLmpy_scale_xBLSU_flex */
/* Demangled: dlb_BLmpy_scale_xBLSU_flex */
int dlb_BLmpy_scale_xBLSU_flex(void);

/* Symbol: dlb_dct_twiddle_table16_rev_L384 */
/* Demangled: dlb_dct_twiddle_table16_rev_L384 */
extern void* dlb_dct_twiddle_table16_rev_L384;

/* Symbol: dlb_dct_twiddle_table16_L256 */
/* Demangled: dlb_dct_twiddle_table16_L256 */
extern void* dlb_dct_twiddle_table16_L256;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: dlb_fft_fwd_usc_288 */
/* Demangled: dlb_fft_fwd_usc_288 */
int dlb_fft_fwd_usc_288(void);

/* Symbol: dlb_cos_48_ast_mini_twiddle */
/* Demangled: dlb_cos_48_ast_mini_twiddle */
extern void* dlb_cos_48_ast_mini_twiddle;

/* Symbol: _ZN5dolby13EffectContext23hasProcessConfigChangedERK15buffer_config_sS3_ */
/* Demangled: dolby::EffectContext::hasProcessConfigChanged(buffer_config_s const&, buffer_config_s const&) */
int _ZN5dolby13EffectContext23hasProcessConfigChangedERK15buffer_config_sS3_(void);

/* Symbol: _ZTVN5dolby13EffectContext17DmsDeathRecipientE */
/* Demangled: vtable for dolby::EffectContext::DmsDeathRecipient */
extern void* _ZTVN5dolby13EffectContext17DmsDeathRecipientE;

/* Symbol: dlb_blk_Lcrossfade_gainLS_flex */
/* Demangled: dlb_blk_Lcrossfade_gainLS_flex */
int dlb_blk_Lcrossfade_gainLS_flex(void);

/* Symbol: dlb_fft_inv_scl_256 */
/* Demangled: dlb_fft_inv_scl_256 */
int dlb_fft_inv_scl_256(void);

/* Symbol: dlb_dct_twiddle_table16_L45_cos */
/* Demangled: dlb_dct_twiddle_table16_L45_cos */
extern void* dlb_dct_twiddle_table16_L45_cos;

/* Symbol: vsv_flux_init */
/* Demangled: vsv_flux_init */
int vsv_flux_init(void);

/* Symbol: _ZN5dolby16DapEffectContext8getParamEiPjPv */
/* Demangled: dolby::DapEffectContext::getParam(int, unsigned int*, void*) */
int _ZN5dolby16DapEffectContext8getParamEiPjPv(void);

/* Symbol: DLB_r4_inv_fft_30_s */
/* Demangled: DLB_r4_inv_fft_30_s */
int DLB_r4_inv_fft_30_s(void);

/* Symbol: _ZTVN5dolby14BufferProviderE */
/* Demangled: vtable for dolby::BufferProvider */
extern void* _ZTVN5dolby14BufferProviderE;

/* Symbol: vsv_asa_num_inputs */
/* Demangled: vsv_asa_num_inputs */
int vsv_asa_num_inputs(void);

/* Symbol: vsv_ns_set_maxsnr */
/* Demangled: vsv_ns_set_maxsnr */
int vsv_ns_set_maxsnr(void);

/* Symbol: DLB_r4_fft_6_s */
/* Demangled: DLB_r4_fft_6_s */
int DLB_r4_fft_6_s(void);

/* Symbol: dft_init */
/* Demangled: dft_init */
int dft_init(void);

/* Symbol: a_shift_table_CQMF_160x160x41_16000_tab */
/* Demangled: a_shift_table_CQMF_160x160x41_16000_tab */
extern void* a_shift_table_CQMF_160x160x41_16000_tab;

/* Symbol: a_vsv_agc_defs_tab */
/* Demangled: a_vsv_agc_defs_tab */
extern void* a_vsv_agc_defs_tab;

/* Symbol: a_vsv_asa_defs_tab */
/* Demangled: a_vsv_asa_defs_tab */
extern void* a_vsv_asa_defs_tab;

/* Symbol: DLB_blk_LintegrateL_setup */
/* Demangled: DLB_blk_LintegrateL_setup */
int DLB_blk_LintegrateL_setup(void);

/* Symbol: DLB_blk_LminLL_strict */
/* Demangled: DLB_blk_LminLL_strict */
int DLB_blk_LminLL_strict(void);

/* Symbol: DLB_r4_inv_fft_96_s */
/* Demangled: DLB_r4_inv_fft_96_s */
int DLB_r4_inv_fft_96_s(void);

/* Symbol: DLB_qmf_synthesisL_query_mem */
/* Demangled: DLB_qmf_synthesisL_query_mem */
int DLB_qmf_synthesisL_query_mem(void);

/* Symbol: dlb_riff_chunk_id */
/* Demangled: dlb_riff_chunk_id */
int dlb_riff_chunk_id(void);

/* Symbol: a_shift_table_MDXT_320x320x49_32000_tab */
/* Demangled: a_shift_table_MDXT_320x320x49_32000_tab */
extern void* a_shift_table_MDXT_320x320x49_32000_tab;

/* Symbol: vlib_transform_cleanup */
/* Demangled: vlib_transform_cleanup */
int vlib_transform_cleanup(void);

/* Symbol: a_vsv_ns_defs_tab */
/* Demangled: a_vsv_ns_defs_tab */
extern void* a_vsv_ns_defs_tab;

/* Symbol: vsv_tx_get_outputs */
/* Demangled: vsv_tx_get_outputs */
int vsv_tx_get_outputs(void);

/* Symbol: _ZTTN5dolby16DapEffectContext18DlbDapEffCallbacksE */
/* Demangled: VTT for dolby::DapEffectContext::DlbDapEffCallbacks */
extern void* _ZTTN5dolby16DapEffectContext18DlbDapEffCallbacksE;

/* Symbol: dlb_blk_Lmpy_shlLSU_flex */
/* Demangled: dlb_blk_Lmpy_shlLSU_flex */
int dlb_blk_Lmpy_shlLSU_flex(void);

/* Symbol: DLB_blk_LnrrecipLU_setup */
/* Demangled: DLB_blk_LnrrecipLU_setup */
int DLB_blk_LnrrecipLU_setup(void);

/* Symbol: DLB_mfb_p10km_analysisL_reset_channel */
/* Demangled: DLB_mfb_p10km_analysisL_reset_channel */
int DLB_mfb_p10km_analysisL_reset_channel(void);

/* Symbol: _ZN5dolby19VqeCrossfadeProcessD0Ev */
/* Demangled: dolby::VqeCrossfadeProcess::~VqeCrossfadeProcess() */
int _ZN5dolby19VqeCrossfadeProcessD0Ev(void);

/* Symbol: _ZN5dolby16DlbBufferAdapterD2Ev */
/* Demangled: dolby::DlbBufferAdapter::~DlbBufferAdapter() */
int _ZN5dolby16DlbBufferAdapterD2Ev(void);

/* Symbol: vsv_process_banding */
/* Demangled: vsv_process_banding */
int vsv_process_banding(void);

/* Symbol: dlb_BLmpy_scaleBLSU_inplace_flex */
/* Demangled: dlb_BLmpy_scaleBLSU_inplace_flex */
int dlb_BLmpy_scaleBLSU_inplace_flex(void);

/* Symbol: dlb_dct_twiddle_table16_L120 */
/* Demangled: dlb_dct_twiddle_table16_L120 */
extern void* dlb_dct_twiddle_table16_L120;

/* Symbol: vsv_tx_force */
/* Demangled: vsv_tx_force */
int vsv_tx_force(void);

/* Symbol: DLB_vec_Sabs_maxSU_strict */
/* Demangled: DLB_vec_Sabs_maxSU_strict */
int DLB_vec_Sabs_maxSU_strict(void);

/* Symbol: _ZN5dolby14BufferProviderC2Ev */
/* Demangled: dolby::BufferProvider::BufferProvider() */
int _ZN5dolby14BufferProviderC2Ev(void);

/* Symbol: _ZN5dolby17DlbBufferProviderD1Ev */
/* Demangled: dolby::DlbBufferProvider::~DlbBufferProvider() */
int _ZN5dolby17DlbBufferProviderD1Ev(void);

/* Symbol: dlb_fft_fwd_usc_12 */
/* Demangled: dlb_fft_fwd_usc_12 */
int dlb_fft_fwd_usc_12(void);

/* Symbol: DLB_qmf_synthesisL_copy_states */
/* Demangled: DLB_qmf_synthesisL_copy_states */
int DLB_qmf_synthesisL_copy_states(void);

/* Symbol: vsv_ml_close */
/* Demangled: vsv_ml_close */
int vsv_ml_close(void);

/* Symbol: a_vsv_ml_defs_tab */
/* Demangled: a_vsv_ml_defs_tab */
extern void* a_vsv_ml_defs_tab;

/* Symbol: DLB_r4_cplx_fwd_scaled */
/* Demangled: DLB_r4_cplx_fwd_scaled */
int DLB_r4_cplx_fwd_scaled(void);

/* Symbol: dlb_dct_twiddle_table16_L72 */
/* Demangled: dlb_dct_twiddle_table16_L72 */
extern void* dlb_dct_twiddle_table16_L72;

/* Symbol: DLB_r4_inv_fft_160 */
/* Demangled: DLB_r4_inv_fft_160 */
int DLB_r4_inv_fft_160(void);

/* Symbol: dlb_fft_inv_scl_120 */
/* Demangled: dlb_fft_inv_scl_120 */
int dlb_fft_inv_scl_120(void);

/* Symbol: DLB_time_init */
/* Demangled: DLB_time_init */
int DLB_time_init(void);

/* Symbol: dlb_octfile_rewind */
/* Demangled: dlb_octfile_rewind */
int dlb_octfile_rewind(void);

/* Symbol: vsv_ns_defs_num */
/* Demangled: vsv_ns_defs_num */
extern void* vsv_ns_defs_num;

/* Symbol: _ZN5dolby10VqeProcess7processEPNS_14BufferProviderES2_ */
/* Demangled: dolby::VqeProcess::process(dolby::BufferProvider*, dolby::BufferProvider*) */
int _ZN5dolby10VqeProcess7processEPNS_14BufferProviderES2_(void);

/* Symbol: dlb_riff_octfile_read */
/* Demangled: dlb_riff_octfile_read */
int dlb_riff_octfile_read(void);

/* Symbol: vsv_banding_cleanup */
/* Demangled: vsv_banding_cleanup */
int vsv_banding_cleanup(void);

/* Symbol: vsv_ml_cleanup */
/* Demangled: vsv_ml_cleanup */
int vsv_ml_cleanup(void);

/* Symbol: dlb_dct_twiddle_table16_rev_1_L144 */
/* Demangled: dlb_dct_twiddle_table16_rev_1_L144 */
extern void* dlb_dct_twiddle_table16_rev_1_L144;

/* Symbol: dlb_fft_fwd_usc_15 */
/* Demangled: dlb_fft_fwd_usc_15 */
int dlb_fft_fwd_usc_15(void);

/* Symbol: DLB_MFB_P10KM_P4_319SC */
/* Demangled: DLB_MFB_P10KM_P4_319SC */
extern void* DLB_MFB_P10KM_P4_319SC;

/* Symbol: dlb_octfile_open_memory_fixed */
/* Demangled: dlb_octfile_open_memory_fixed */
int dlb_octfile_open_memory_fixed(void);

/* Symbol: DLB_blk_Lmix_shlUnL */
/* Demangled: DLB_blk_Lmix_shlUnL */
int DLB_blk_Lmix_shlUnL(void);

/* Symbol: dlb_fft_fwd_scl_480 */
/* Demangled: dlb_fft_fwd_scl_480 */
int dlb_fft_fwd_scl_480(void);

/* Symbol: dlb_fft_fwd_usc_16 */
/* Demangled: dlb_fft_fwd_usc_16 */
int dlb_fft_fwd_usc_16(void);

/* Symbol: DLB_MFB_TWID64E */
/* Demangled: DLB_MFB_TWID64E */
extern void* DLB_MFB_TWID64E;

/* Symbol: dlb_riff_write_chunk_data */
/* Demangled: dlb_riff_write_chunk_data */
int dlb_riff_write_chunk_data(void);

/* Symbol: a_shift_table_MDCT_160x160x41_16000_tab */
/* Demangled: a_shift_table_MDCT_160x160x41_16000_tab */
extern void* a_shift_table_MDCT_160x160x41_16000_tab;

/* Symbol: vqe_get_asa_obj_level */
/* Demangled: vqe_get_asa_obj_level */
int vqe_get_asa_obj_level(void);

/* Symbol: dlb_valid_pair_ptr */
/* Demangled: dlb_valid_pair_ptr */
int dlb_valid_pair_ptr(void);

/* Symbol: _ZN5dolby13EffectContext10getVersionEPiS1_ */
/* Demangled: dolby::EffectContext::getVersion(int*, int*) */
int _ZN5dolby13EffectContext10getVersionEPiS1_(void);

/* Symbol: dlb_blk_LmixLLLL_flex */
/* Demangled: dlb_blk_LmixLLLL_flex */
int dlb_blk_LmixLLLL_flex(void);

/* Symbol: dlb_fft_fwd_scl_768 */
/* Demangled: dlb_fft_fwd_scl_768 */
int dlb_fft_fwd_scl_768(void);

/* Symbol: vstack_open_frame */
/* Demangled: vstack_open_frame */
int vstack_open_frame(void);

/* Symbol: a_pp_vsv_ml_dec_thr_tab */
/* Demangled: a_pp_vsv_ml_dec_thr_tab */
extern void* a_pp_vsv_ml_dec_thr_tab;

/* Symbol: dlb_dct_twiddle_table16_rev_L256 */
/* Demangled: dlb_dct_twiddle_table16_rev_L256 */
extern void* dlb_dct_twiddle_table16_rev_L256;

/* Symbol: dlb_dct_twiddle_table16_L128 */
/* Demangled: dlb_dct_twiddle_table16_L128 */
extern void* dlb_dct_twiddle_table16_L128;

__END_DECLS

#endif /* BEGONIA_RE_LIBSWVQE_H */
