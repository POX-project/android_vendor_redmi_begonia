/*
 * Reverse-Engineered Source for: libswvqe.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libswvqe"

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
#include "libswvqe.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: dlb_dct_twiddle_table16_L36_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L36_1 = NULL;

/* Demangled: dlb_qmf_synthesisS_open */
extern "C" __attribute__((visibility("default"))) int dlb_qmf_synthesisS_open(void) {
    ALOGD("dlb_qmf_synthesisS_open() called");
    return 0;
}

/* Demangled: DLB_blk_Lattack_decay_iir1L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_iir1L_strict(void) {
    ALOGD("DLB_blk_Lattack_decay_iir1L_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L36_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L36_2 = NULL;

/* Demangled: DLB_r4_fft_36_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_36_s(void) {
    ALOGD("DLB_r4_fft_36_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_480 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_480(void) {
    ALOGD("dlb_fft_inv_usc_480() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P4_32 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4_32 = NULL;

/* Demangled: vlib_transform_copy */
extern "C" __attribute__((visibility("default"))) int vlib_transform_copy(void) {
    ALOGD("vlib_transform_copy() called");
    return 0;
}

/* Demangled: dlb_vec_LsetLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LsetLU_flex(void) {
    ALOGD("dlb_vec_LsetLU_flex() called");
    return 0;
}

/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_SET_VOLUME(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_VOLUMEERNS_13EffectContextERNS_12ParserBufferES4_(void) {
    ALOGD("_ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_VOLUMEERNS_13EffectContextERNS_12ParserBufferES4_() called");
    return 0;
}

/* Demangled: dlb_vec_NdotLLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_NdotLLU_flex(void) {
    ALOGD("dlb_vec_NdotLLU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_768 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_768(void) {
    ALOGD("dlb_fft_inv_usc_768() called");
    return 0;
}

/* Exported Object: dlb_odd_fft_cplx_fwd_usc */
extern "C" __attribute__((visibility("default"))) void* dlb_odd_fft_cplx_fwd_usc = NULL;

/* Demangled: dlb_fft_inv_scl_128 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_128(void) {
    ALOGD("dlb_fft_inv_scl_128() called");
    return 0;
}

/* Exported Object: dlb_cos_32_full_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_32_full_twiddle = NULL;

/* Demangled: dlb_forwardModulationReal */
extern "C" __attribute__((visibility("default"))) int dlb_forwardModulationReal(void) {
    ALOGD("dlb_forwardModulationReal() called");
    return 0;
}

/* Exported Object: dlb_num_of_non_power_two_lengths */
extern "C" __attribute__((visibility("default"))) void* dlb_num_of_non_power_two_lengths = NULL;

/* Demangled: DLB_fft_Linv_scaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_Linv_scaledCL(void) {
    ALOGD("DLB_fft_Linv_scaledCL() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::DapEffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContextC2Ev(void) {
    ALOGD("_ZN5dolby16DapEffectContextC2Ev() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L320 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L320 = NULL;

/* Demangled: DLB_r4_fft_384_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_384_s(void) {
    ALOGD("DLB_r4_fft_384_s() called");
    return 0;
}

/* Demangled: dolby::VqeBufferAdapter::~VqeBufferAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16VqeBufferAdapterD0Ev(void) {
    ALOGD("_ZN5dolby16VqeBufferAdapterD0Ev() called");
    return 0;
}

/* Demangled: vsv_har_open */
extern "C" __attribute__((visibility("default"))) int vsv_har_open(void) {
    ALOGD("vsv_har_open() called");
    return 0;
}

/* Demangled: DLB_blk_refLdelayU */
extern "C" __attribute__((visibility("default"))) int DLB_blk_refLdelayU(void) {
    ALOGD("DLB_blk_refLdelayU() called");
    return 0;
}

/* Demangled: dlb_vec_Sabs_maxSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_Sabs_maxSU_flex(void) {
    ALOGD("dlb_vec_Sabs_maxSU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L480_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L480_1 = NULL;

/* Demangled: dlb_fft_fwd_scl_12 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_12(void) {
    ALOGD("dlb_fft_fwd_scl_12() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_vec_ana = NULL;

/* Demangled: vsv_banding_forward_no_tilt */
extern "C" __attribute__((visibility("default"))) int vsv_banding_forward_no_tilt(void) {
    ALOGD("vsv_banding_forward_no_tilt() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L480_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L480_2 = NULL;

/* Demangled: DLB_r4_fft_180 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_180(void) {
    ALOGD("DLB_r4_fft_180() called");
    return 0;
}

/* Demangled: vsv_trag_open */
extern "C" __attribute__((visibility("default"))) int vsv_trag_open(void) {
    ALOGD("vsv_trag_open() called");
    return 0;
}

/* Exported Object: dolby::AudioHalUtils::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby13AudioHalUtils9sInstanceE = NULL;

/* Demangled: dlb_blk_LmixLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmixLL_flex(void) {
    ALOGD("dlb_blk_LmixLL_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_576 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_576(void) {
    ALOGD("dlb_fft_fwd_usc_576() called");
    return 0;
}

/* Exported Object: DLB_MFB_TWID64O */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_TWID64O = NULL;

/* Demangled: vqe_get_out_level */
extern "C" __attribute__((visibility("default"))) int vqe_get_out_level(void) {
    ALOGD("vqe_get_out_level() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L120 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L120 = NULL;

/* Demangled: dlb_fft_fwd_scl_15 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_15(void) {
    ALOGD("dlb_fft_fwd_scl_15() called");
    return 0;
}

/* Demangled: utlog_add_1d_variable */
extern "C" __attribute__((visibility("default"))) int utlog_add_1d_variable(void) {
    ALOGD("utlog_add_1d_variable() called");
    return 0;
}

/* Demangled: vsv_tx_init */
extern "C" __attribute__((visibility("default"))) int vsv_tx_init(void) {
    ALOGD("vsv_tx_init() called");
    return 0;
}

/* Demangled: dolby::GameEffectContext::GameEffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17GameEffectContextC1Ev(void) {
    ALOGD("_ZN5dolby17GameEffectContextC1Ev() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_720 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_720(void) {
    ALOGD("dlb_fft_fwd_usc_720() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_16 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_16(void) {
    ALOGD("dlb_fft_fwd_scl_16() called");
    return 0;
}

/* Exported Object: dlb_octfile_disk_vtable */
extern "C" __attribute__((visibility("default"))) void* dlb_octfile_disk_vtable = NULL;

/* Demangled: DLB_blk_Lattack_decay_iir1L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_iir1L_setup(void) {
    ALOGD("DLB_blk_Lattack_decay_iir1L_setup() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_16_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_16_s(void) {
    ALOGD("DLB_r4_inv_fft_16_s() called");
    return 0;
}

/* Exported Object: a_shift_table_MDXT_160x160x41_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDXT_160x160x41_16000_tab = NULL;

/* Demangled: DLB_blk_LsaddLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LsaddLL_strict(void) {
    ALOGD("DLB_blk_LsaddLL_strict() called");
    return 0;
}

/* Demangled: dolby::VqeCrossfadeProcess::process(dolby::BufferProvider*, dolby::BufferProvider*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19VqeCrossfadeProcess7processEPNS_14BufferProviderES2_(void) {
    ALOGD("_ZN5dolby19VqeCrossfadeProcess7processEPNS_14BufferProviderES2_() called");
    return 0;
}

/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_OFFLOAD(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect25handle_EFFECT_CMD_OFFLOADERNS_13EffectContextERNS_12ParserBufferES4_(void) {
    ALOGD("_ZN5dolby9DlbEffect25handle_EFFECT_CMD_OFFLOADERNS_13EffectContextERNS_12ParserBufferES4_() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv3aLU_inplace */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv3aLU_inplace(void) {
    ALOGD("DLB_blk_Liir2ssv3aLU_inplace() called");
    return 0;
}

/* Demangled: dlb_blk_delayL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_delayL_flex(void) {
    ALOGD("dlb_blk_delayL_flex() called");
    return 0;
}

/* Demangled: vsv_asa_get_snr */
extern "C" __attribute__((visibility("default"))) int vsv_asa_get_snr(void) {
    ALOGD("vsv_asa_get_snr() called");
    return 0;
}

/* Demangled: vqe_get_snr */
extern "C" __attribute__((visibility("default"))) int vqe_get_snr(void) {
    ALOGD("vqe_get_snr() called");
    return 0;
}

/* Demangled: DLB_vec_LshlLIU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LshlLIU_strict(void) {
    ALOGD("DLB_vec_LshlLIU_strict() called");
    return 0;
}

/* Demangled: dlb_CLmixCLCLSSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmixCLCLSSU_flex(void) {
    ALOGD("dlb_CLmixCLCLSSU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L960 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L960 = NULL;

/* Demangled: DLB_fft_Linv_unscaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_Linv_unscaledCL(void) {
    ALOGD("DLB_fft_Linv_unscaledCL() called");
    return 0;
}

/* Demangled: dlb_wave_octfile_write */
extern "C" __attribute__((visibility("default"))) int dlb_wave_octfile_write(void) {
    ALOGD("dlb_wave_octfile_write() called");
    return 0;
}

/* Demangled: dolby::EffectContext::~EffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContextD2Ev(void) {
    ALOGD("_ZN5dolby13EffectContextD2Ev() called");
    return 0;
}

/* Demangled: DLB_BLmaxBLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmaxBLL_strict(void) {
    ALOGD("DLB_BLmaxBLL_strict() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisS_close */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisS_close(void) {
    ALOGD("DLB_qmf_analysisS_close() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisS_init */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_init(void) {
    ALOGD("DLB_qmf_synthesisS_init() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L128 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L128 = NULL;

/* Demangled: dlb_fft_inv_scl_960 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_960(void) {
    ALOGD("dlb_fft_inv_scl_960() called");
    return 0;
}

/* Demangled: dolby::GameEffectContext::setDevice(audio_devices_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17GameEffectContext9setDeviceE15audio_devices_t(void) {
    ALOGD("_ZN5dolby17GameEffectContext9setDeviceE15audio_devices_t() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv2L_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv2L_inplace_flex(void) {
    ALOGD("dlb_blk_Liir2ssv2L_inplace_flex() called");
    return 0;
}

/* Demangled: dlb_qmf_analysisS_open */
extern "C" __attribute__((visibility("default"))) int dlb_qmf_analysisS_open(void) {
    ALOGD("dlb_qmf_analysisS_open() called");
    return 0;
}

/* Demangled: dolby::BufferSink::consume(dolby::BufferSource&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10BufferSink7consumeERNS_12BufferSourceEi(void) {
    ALOGD("_ZN5dolby10BufferSink7consumeERNS_12BufferSourceEi() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L288 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L288 = NULL;

/* Exported Object: vtable for dolby::VqeBufferAdapter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16VqeBufferAdapterE = NULL;

/* Demangled: vsv_ml_process */
extern "C" __attribute__((visibility("default"))) int vsv_ml_process(void) {
    ALOGD("vsv_ml_process() called");
    return 0;
}

/* Demangled: DLB_blk_LmixLLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixLLL_strict(void) {
    ALOGD("DLB_blk_LmixLLL_strict() called");
    return 0;
}

/* Demangled: DLB_CLmpy_recipCLLIU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpy_recipCLLIU_strict(void) {
    ALOGD("DLB_CLmpy_recipCLLIU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L15_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L15_1 = NULL;

/* Demangled: DLB_r4_fft_4096 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_4096(void) {
    ALOGD("DLB_r4_fft_4096() called");
    return 0;
}

/* Demangled: datalog_open */
extern "C" __attribute__((visibility("default"))) int datalog_open(void) {
    ALOGD("datalog_open() called");
    return 0;
}

/* Demangled: DLB_CLzeroCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLzeroCLU_strict(void) {
    ALOGD("DLB_CLzeroCLU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L15_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L15_2 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L48_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L48_1 = NULL;

/* Demangled: DLB_r4_fft_15_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_15_s(void) {
    ALOGD("DLB_r4_fft_15_s() called");
    return 0;
}

/* Demangled: vlib_transform_inverse */
extern "C" __attribute__((visibility("default"))) int vlib_transform_inverse(void) {
    ALOGD("vlib_transform_inverse() called");
    return 0;
}

/* Demangled: DLB_vec_LmaskLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LmaskLSU_strict(void) {
    ALOGD("DLB_vec_LmaskLSU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L48_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L48_2 = NULL;

/* Demangled: DLB_r4_fft_48_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_48_s(void) {
    ALOGD("DLB_r4_fft_48_s() called");
    return 0;
}

/* Demangled: DLB_Lqmf_synthesisCL */
extern "C" __attribute__((visibility("default"))) int DLB_Lqmf_synthesisCL(void) {
    ALOGD("DLB_Lqmf_synthesisCL() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisS_set_slot_increment */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_set_slot_increment(void) {
    ALOGD("DLB_qmf_synthesisS_set_slot_increment() called");
    return 0;
}

/* Exported Object: a_twist_table_CQMF_080x080x33_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_CQMF_080x080x33_08000_tab = NULL;

/* Demangled: dft_close */
extern "C" __attribute__((visibility("default"))) int dft_close(void) {
    ALOGD("dft_close() called");
    return 0;
}

/* Demangled: vsv_mixer_ctrl_cleanup */
extern "C" __attribute__((visibility("default"))) int vsv_mixer_ctrl_cleanup(void) {
    ALOGD("vsv_mixer_ctrl_cleanup() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_160 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_160(void) {
    ALOGD("dlb_fft_fwd_usc_160() called");
    return 0;
}

/* Demangled: dolby::IEffectDlb::EffectDlbFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10IEffectDlb16EffectDlbFactoryEv(void) {
    ALOGD("_ZN5dolby10IEffectDlb16EffectDlbFactoryEv() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::setParamValues(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext14setParamValuesEPvj(void) {
    ALOGD("_ZN5dolby16DapEffectContext14setParamValuesEPvj() called");
    return 0;
}

/* Exported Object: vtable for dolby::DapEffectContext::DlbDapEffCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16DapEffectContext18DlbDapEffCallbacksE = NULL;

/* Demangled: dolby::AudioHalUtils::restoreProfile() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13AudioHalUtils14restoreProfileEv(void) {
    ALOGD("_ZN5dolby13AudioHalUtils14restoreProfileEv() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_80_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_80_s(void) {
    ALOGD("DLB_r4_inv_fft_80_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_20 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_20(void) {
    ALOGD("dlb_fft_fwd_usc_20() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_2048 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_2048(void) {
    ALOGD("dlb_fft_fwd_usc_2048() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_16_vec_ana = NULL;

/* Demangled: vqe_get_clipping */
extern "C" __attribute__((visibility("default"))) int vqe_get_clipping(void) {
    ALOGD("vqe_get_clipping() called");
    return 0;
}

/* Exported Object: a_shift_table_MDFT_160x160x41_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDFT_160x160x41_16000_tab = NULL;

/* Demangled: vqe_get_agc_gain */
extern "C" __attribute__((visibility("default"))) int vqe_get_agc_gain(void) {
    ALOGD("vqe_get_agc_gain() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_12 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_12(void) {
    ALOGD("dlb_fft_inv_usc_12() called");
    return 0;
}

/* Exported Object: dlb_fft_cplx_fwd_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_fft_cplx_fwd_scl = NULL;

/* Demangled: vsv_banding_inverse */
extern "C" __attribute__((visibility("default"))) int vsv_banding_inverse(void) {
    ALOGD("vsv_banding_inverse() called");
    return 0;
}

/* Demangled: vsv_tx_close */
extern "C" __attribute__((visibility("default"))) int vsv_tx_close(void) {
    ALOGD("vsv_tx_close() called");
    return 0;
}

/* Demangled: DLB_r4_fft_512_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_512_s(void) {
    ALOGD("DLB_r4_fft_512_s() called");
    return 0;
}

/* Demangled: DLB_r4_cplx_inv_scaled */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_inv_scaled(void) {
    ALOGD("DLB_r4_cplx_inv_scaled() called");
    return 0;
}

/* Demangled: DLB_CLqmf_analysisL */
extern "C" __attribute__((visibility("default"))) int DLB_CLqmf_analysisL(void) {
    ALOGD("DLB_CLqmf_analysisL() called");
    return 0;
}

/* Demangled: vqe_get_ml_continue_decision */
extern "C" __attribute__((visibility("default"))) int vqe_get_ml_continue_decision(void) {
    ALOGD("vqe_get_ml_continue_decision() called");
    return 0;
}

/* Demangled: DLB_vec_UnormLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_UnormLU_strict(void) {
    ALOGD("DLB_vec_UnormLU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_24 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_24(void) {
    ALOGD("dlb_fft_fwd_usc_24() called");
    return 0;
}

/* Demangled: DLB_CLmpy_shlCLSIU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpy_shlCLSIU_strict(void) {
    ALOGD("DLB_CLmpy_shlCLSIU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L180 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L180 = NULL;

/* Demangled: DLB_r4_fft_720_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_720_s(void) {
    ALOGD("DLB_r4_fft_720_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_15 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_15(void) {
    ALOGD("dlb_fft_inv_usc_15() called");
    return 0;
}

/* Exported Object: dlb_cos_64_full_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_64_full_twiddle = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L960 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L960 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L120_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L120_1 = NULL;

/* Demangled: dlb_fft_inv_usc_16 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_16(void) {
    ALOGD("dlb_fft_inv_usc_16() called");
    return 0;
}

/* Exported Object: a_twist_table_MDCT_080x080x33_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDCT_080x080x33_08000_tab = NULL;

/* Demangled: utlog_set_pdata */
extern "C" __attribute__((visibility("default"))) int utlog_set_pdata(void) {
    ALOGD("utlog_set_pdata() called");
    return 0;
}

/* Demangled: dlb_blk_Lconst_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lconst_flex(void) {
    ALOGD("dlb_blk_Lconst_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L120_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L120_2 = NULL;

/* Demangled: dlb_riff_chunk_handler_new */
extern "C" __attribute__((visibility("default"))) int dlb_riff_chunk_handler_new(void) {
    ALOGD("dlb_riff_chunk_handler_new() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_2048 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_2048(void) {
    ALOGD("dlb_fft_inv_scl_2048() called");
    return 0;
}

/* Demangled: process_Phase90Hilbert */
extern "C" __attribute__((visibility("default"))) int process_Phase90Hilbert(void) {
    ALOGD("process_Phase90Hilbert() called");
    return 0;
}

/* Demangled: dolby::DlbBufferProvider::DlbBufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17DlbBufferProviderC2Ev(void) {
    ALOGD("_ZN5dolby17DlbBufferProviderC2Ev() called");
    return 0;
}

/* Demangled: DLB_blk_Lfir2L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir2L_set_coef(void) {
    ALOGD("DLB_blk_Lfir2L_set_coef() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv2_shlLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv2_shlLU_flex(void) {
    ALOGD("dlb_blk_Liir2ssv2_shlLU_flex() called");
    return 0;
}

/* Exported Object: dlb_cos_8_full_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_8_full_scl = NULL;

/* Demangled: vsv_agc_open */
extern "C" __attribute__((visibility("default"))) int vsv_agc_open(void) {
    ALOGD("vsv_agc_open() called");
    return 0;
}

/* Demangled: DLB_blk_LfirUL_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LfirUL_set_coef(void) {
    ALOGD("DLB_blk_LfirUL_set_coef() called");
    return 0;
}

/* Demangled: dlb_blk_LsubLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LsubLL_flex(void) {
    ALOGD("dlb_blk_LsubLL_flex() called");
    return 0;
}

/* Demangled: DLB_r4_rsplit_fft_nn */
extern "C" __attribute__((visibility("default"))) int DLB_r4_rsplit_fft_nn(void) {
    ALOGD("DLB_r4_rsplit_fft_nn() called");
    return 0;
}

/* Demangled: DLB_CLqmf_analysisS */
extern "C" __attribute__((visibility("default"))) int DLB_CLqmf_analysisS(void) {
    ALOGD("DLB_CLqmf_analysisS() called");
    return 0;
}

/* Demangled: vsv_asa_obj_level */
extern "C" __attribute__((visibility("default"))) int vsv_asa_obj_level(void) {
    ALOGD("vsv_asa_obj_level() called");
    return 0;
}

/* Demangled: DLB_BLmaxBLL_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmaxBLL_inplace_strict(void) {
    ALOGD("DLB_BLmaxBLL_inplace_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_320 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_320(void) {
    ALOGD("DLB_r4_inv_fft_320() called");
    return 0;
}

/* Demangled: dolby::VoiceEffectContext::~VoiceEffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18VoiceEffectContextD1Ev(void) {
    ALOGD("_ZN5dolby18VoiceEffectContextD1Ev() called");
    return 0;
}

/* Demangled: dlb_blk_Lfir2L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lfir2L_flex(void) {
    ALOGD("dlb_blk_Lfir2L_flex() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1xL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1xL_strict(void) {
    ALOGD("DLB_blk_Liir1xL_strict() called");
    return 0;
}

/* Demangled: DLB_CLmix4CL4SU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmix4CL4SU_strict(void) {
    ALOGD("DLB_CLmix4CL4SU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_20_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_20_s(void) {
    ALOGD("DLB_r4_fft_20_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_20 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_20(void) {
    ALOGD("dlb_fft_fwd_scl_20() called");
    return 0;
}

/* Demangled: getRequiredBufferSize_Phase90Hilbert */
extern "C" __attribute__((visibility("default"))) int getRequiredBufferSize_Phase90Hilbert(void) {
    ALOGD("getRequiredBufferSize_Phase90Hilbert() called");
    return 0;
}

/* Exported Object: AELI */
extern "C" __attribute__((visibility("default"))) void* AELI = NULL;

/* Demangled: DLB_r4_fft_160_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_160_s(void) {
    ALOGD("DLB_r4_fft_160_s() called");
    return 0;
}

/* Demangled: DLB_r4_rsplit_fft_nn_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_rsplit_fft_nn_s(void) {
    ALOGD("DLB_r4_rsplit_fft_nn_s() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv3L_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv3L_inplace_flex(void) {
    ALOGD("dlb_blk_Liir2ssv3L_inplace_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_640 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_640(void) {
    ALOGD("dlb_fft_fwd_scl_640() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_12 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_12(void) {
    ALOGD("dlb_fft_inv_scl_12() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L512_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L512_cos = NULL;

/* Demangled: dolby::VqeProcess::~VqeProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10VqeProcessD0Ev(void) {
    ALOGD("_ZN5dolby10VqeProcessD0Ev() called");
    return 0;
}

/* Demangled: dlb_CLmpyCLVSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpyCLVSU_flex(void) {
    ALOGD("dlb_CLmpyCLVSU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L576_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L576_1 = NULL;

/* Demangled: dlb_wave_read_data */
extern "C" __attribute__((visibility("default"))) int dlb_wave_read_data(void) {
    ALOGD("dlb_wave_read_data() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv1L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv1L_strict(void) {
    ALOGD("DLB_blk_Liir2ssv1L_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L576_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L576_2 = NULL;

/* Demangled: DLB_r4_inv_fft_640_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_640_s(void) {
    ALOGD("DLB_r4_inv_fft_640_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_24 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_24(void) {
    ALOGD("dlb_fft_fwd_scl_24() called");
    return 0;
}

/* Demangled: vsv_agc_cleanup */
extern "C" __attribute__((visibility("default"))) int vsv_agc_cleanup(void) {
    ALOGD("vsv_agc_cleanup() called");
    return 0;
}

/* Demangled: dolby::AudioHalUtils::~AudioHalUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13AudioHalUtilsD1Ev(void) {
    ALOGD("_ZN5dolby13AudioHalUtilsD1Ev() called");
    return 0;
}

/* Demangled: DLB_blk_LmixLLLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixLLLL_strict(void) {
    ALOGD("DLB_blk_LmixLLLL_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_192 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_192(void) {
    ALOGD("DLB_r4_fft_192() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_15 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_15(void) {
    ALOGD("dlb_fft_inv_scl_15() called");
    return 0;
}

/* Demangled: DLB_hybrid_synthesisCL_init */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_synthesisCL_init(void) {
    ALOGD("DLB_hybrid_synthesisCL_init() called");
    return 0;
}

/* Demangled: dlb_octfile_write */
extern "C" __attribute__((visibility("default"))) int dlb_octfile_write(void) {
    ALOGD("dlb_octfile_write() called");
    return 0;
}

/* Demangled: dlb_riff_chunk_size */
extern "C" __attribute__((visibility("default"))) int dlb_riff_chunk_size(void) {
    ALOGD("dlb_riff_chunk_size() called");
    return 0;
}

/* Demangled: vqe_get_vad_count */
extern "C" __attribute__((visibility("default"))) int vqe_get_vad_count(void) {
    ALOGD("vqe_get_vad_count() called");
    return 0;
}

/* Demangled: vqe_get_vad_count_for_output */
extern "C" __attribute__((visibility("default"))) int vqe_get_vad_count_for_output(void) {
    ALOGD("vqe_get_vad_count_for_output() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L576 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L576 = NULL;

/* Demangled: DLB_r4_inv_fft_6_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_6_s(void) {
    ALOGD("DLB_r4_inv_fft_6_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_640 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_640(void) {
    ALOGD("dlb_fft_inv_usc_640() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_16 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_16(void) {
    ALOGD("dlb_fft_inv_scl_16() called");
    return 0;
}

/* Demangled: dolby::DlbCrossfadeProcess::setEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19DlbCrossfadeProcess10setEnabledEb(void) {
    ALOGD("_ZN5dolby19DlbCrossfadeProcess10setEnabledEb() called");
    return 0;
}

/* Demangled: vsv_trag_close */
extern "C" __attribute__((visibility("default"))) int vsv_trag_close(void) {
    ALOGD("vsv_trag_close() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L90 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L90 = NULL;

/* Demangled: DLB_r4_fft_2_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_2_s(void) {
    ALOGD("DLB_r4_fft_2_s() called");
    return 0;
}

/* Demangled: DLB_fft_shutdown */
extern "C" __attribute__((visibility("default"))) int DLB_fft_shutdown(void) {
    ALOGD("DLB_fft_shutdown() called");
    return 0;
}

/* Exported Object: a_twist_table_MDXT_080x080x33_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDXT_080x080x33_08000_tab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L720 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L720 = NULL;

/* Demangled: DLB_r4_inv_fft_360_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_360_s(void) {
    ALOGD("DLB_r4_inv_fft_360_s() called");
    return 0;
}

/* Exported Object: a_twist_table_CQMF_640x640x56_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_CQMF_640x640x56_32000_tab = NULL;

/* Demangled: dlb_fft_fwd_scl_360 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_360(void) {
    ALOGD("dlb_fft_fwd_scl_360() called");
    return 0;
}

/* Demangled: vsv_mixer_ctrl_process */
extern "C" __attribute__((visibility("default"))) int vsv_mixer_ctrl_process(void) {
    ALOGD("vsv_mixer_ctrl_process() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_32_vec_syn = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L4_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L4_cos = NULL;

/* Demangled: dolby::DlbCrossfadeProcess::updateProcessEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19DlbCrossfadeProcess20updateProcessEnabledEv(void) {
    ALOGD("_ZN5dolby19DlbCrossfadeProcess20updateProcessEnabledEv() called");
    return 0;
}

/* Demangled: vsv_gain_scalar_gain_real_data */
extern "C" __attribute__((visibility("default"))) int vsv_gain_scalar_gain_real_data(void) {
    ALOGD("vsv_gain_scalar_gain_real_data() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-dolby::EffectContext::DmsDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5dolby13EffectContext17DmsDeathRecipientE0_N7android8hardware20hidl_death_recipientE = NULL;

/* Demangled: DLB_blk_Lmix_shlULLLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlULLLL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlULLLL_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_1024 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_1024(void) {
    ALOGD("dlb_fft_fwd_scl_1024() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_2 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_2(void) {
    ALOGD("dlb_fft_inv_scl_2() called");
    return 0;
}

/* Exported Object: DLB_MFB_TWID256E */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_TWID256E = NULL;

/* Demangled: DLB_hybrid_analysisCL_init */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_init(void) {
    ALOGD("DLB_hybrid_analysisCL_init() called");
    return 0;
}

/* Demangled: DLB_CLmfb_p10km_analysisL_legacy_twiddle */
extern "C" __attribute__((visibility("default"))) int DLB_CLmfb_p10km_analysisL_legacy_twiddle(void) {
    ALOGD("DLB_CLmfb_p10km_analysisL_legacy_twiddle() called");
    return 0;
}

/* Demangled: DLB_r4_cplx_fwd_unscaled */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_fwd_unscaled(void) {
    ALOGD("DLB_r4_cplx_fwd_unscaled() called");
    return 0;
}

/* Demangled: dlb_blk_Lattack_decay_iir1L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lattack_decay_iir1L_flex(void) {
    ALOGD("dlb_blk_Lattack_decay_iir1L_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L96 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L96 = NULL;

/* Demangled: dlb_fft_inv_usc_360 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_360(void) {
    ALOGD("dlb_fft_inv_usc_360() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_4 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_4(void) {
    ALOGD("dlb_fft_inv_scl_4() called");
    return 0;
}

/* Demangled: dlb_dct4_premodulation */
extern "C" __attribute__((visibility("default"))) int dlb_dct4_premodulation(void) {
    ALOGD("dlb_dct4_premodulation() called");
    return 0;
}

/* Exported Object: vtable for dolby::EffectVqe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby9EffectVqeE = NULL;

/* Demangled: dolby::DlbCrossfadeProcess::configure(int, int, audio_format_t, audio_channel_mask_t, audio_channel_mask_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19DlbCrossfadeProcess9configureEii14audio_format_t20audio_channel_mask_tS2_(void) {
    ALOGD("_ZN5dolby19DlbCrossfadeProcess9configureEii14audio_format_t20audio_channel_mask_tS2_() called");
    return 0;
}

/* Exported Object: a_twist_table_CQMF_320x320x49_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_CQMF_320x320x49_32000_tab = NULL;

/* Demangled: dolby::EffectContext::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext4initEv(void) {
    ALOGD("_ZN5dolby13EffectContext4initEv() called");
    return 0;
}

/* Demangled: dlb_vec_UnormSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_UnormSU_flex(void) {
    ALOGD("dlb_vec_UnormSU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_6 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_6(void) {
    ALOGD("dlb_fft_inv_scl_6() called");
    return 0;
}

/* Demangled: DLB_fft_is_supported */
extern "C" __attribute__((visibility("default"))) int DLB_fft_is_supported(void) {
    ALOGD("DLB_fft_is_supported() called");
    return 0;
}

/* Demangled: vqe_reset */
extern "C" __attribute__((visibility("default"))) int vqe_reset(void) {
    ALOGD("vqe_reset() called");
    return 0;
}

/* Demangled: DLB_blk_LfirUL_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LfirUL_setup(void) {
    ALOGD("DLB_blk_LfirUL_setup() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L12 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L12 = NULL;

/* Demangled: dlb_fft_inv_scl_8 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_8(void) {
    ALOGD("dlb_fft_inv_scl_8() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-dolby::DapEffectContext::DlbDapEffCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5dolby16DapEffectContext18DlbDapEffCallbacksE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: dlb_CLmix4CL4SU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmix4CL4SU_flex(void) {
    ALOGD("dlb_CLmix4CL4SU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_12 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_12(void) {
    ALOGD("DLB_r4_inv_fft_12() called");
    return 0;
}

/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_SET_CONFIG(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_CONFIGERNS_13EffectContextERNS_12ParserBufferES4_(void) {
    ALOGD("_ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_CONFIGERNS_13EffectContextERNS_12ParserBufferES4_() called");
    return 0;
}

/* Demangled: dolby::DlbCrossfadeProcess::~DlbCrossfadeProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19DlbCrossfadeProcessD0Ev(void) {
    ALOGD("_ZN5dolby19DlbCrossfadeProcessD0Ev() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L32_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L32_1 = NULL;

/* Demangled: dlb_fft_fwd_scl_512 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_512(void) {
    ALOGD("dlb_fft_fwd_scl_512() called");
    return 0;
}

/* Demangled: dolby::VoiceEffectContext::setVolume(int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18VoiceEffectContext9setVolumeEiPKj(void) {
    ALOGD("_ZN5dolby18VoiceEffectContext9setVolumeEiPKj() called");
    return 0;
}

/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_DISABLE(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect25handle_EFFECT_CMD_DISABLEERNS_13EffectContextERNS_12ParserBufferES4_(void) {
    ALOGD("_ZN5dolby9DlbEffect25handle_EFFECT_CMD_DISABLEERNS_13EffectContextERNS_12ParserBufferES4_() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2df1L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2df1L_strict(void) {
    ALOGD("DLB_blk_Liir2df1L_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L15 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L15 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L32_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L32_2 = NULL;

/* Demangled: DLB_r4_fft_32_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_32_s(void) {
    ALOGD("DLB_r4_fft_32_s() called");
    return 0;
}

/* Demangled: dlb_riff_octfile_write */
extern "C" __attribute__((visibility("default"))) int dlb_riff_octfile_write(void) {
    ALOGD("dlb_riff_octfile_write() called");
    return 0;
}

/* Demangled: vstack_alloc */
extern "C" __attribute__((visibility("default"))) int vstack_alloc(void) {
    ALOGD("vstack_alloc() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlaL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlaL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlaL_strict() called");
    return 0;
}

/* Demangled: DLB_CLmpyCLVSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpyCLVSU_strict(void) {
    ALOGD("DLB_CLmpyCLVSU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L16 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L16 = NULL;

/* Demangled: DLB_r4_inv_fft_15 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_15(void) {
    ALOGD("DLB_r4_inv_fft_15() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_30 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_30(void) {
    ALOGD("dlb_fft_fwd_usc_30() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_20 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_20(void) {
    ALOGD("dlb_fft_inv_usc_20() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L640_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L640_cos = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L90 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L90 = NULL;

/* Demangled: DLB_r4_inv_fft_16 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_16(void) {
    ALOGD("DLB_r4_inv_fft_16() called");
    return 0;
}

/* Demangled: dlb_riff_open_read */
extern "C" __attribute__((visibility("default"))) int dlb_riff_open_read(void) {
    ALOGD("dlb_riff_open_read() called");
    return 0;
}

/* Demangled: dft_fwd_unscaled */
extern "C" __attribute__((visibility("default"))) int dft_fwd_unscaled(void) {
    ALOGD("dft_fwd_unscaled() called");
    return 0;
}

/* Exported Object: a_twist_table_MDFT_080x080x33_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDFT_080x080x33_08000_tab = NULL;

/* Demangled: DLB_blk_Lmix_shlaL */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlaL(void) {
    ALOGD("DLB_blk_Lmix_shlaL() called");
    return 0;
}

/* Demangled: dlb_CLcopyCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLcopyCLU_flex(void) {
    ALOGD("dlb_CLcopyCLU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_32 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_32(void) {
    ALOGD("dlb_fft_fwd_usc_32() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_512 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_512(void) {
    ALOGD("dlb_fft_inv_usc_512() called");
    return 0;
}

/* Demangled: dolby::VqeProcess::setParam(int, int const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10VqeProcess8setParamEiPKii(void) {
    ALOGD("_ZN5dolby10VqeProcess8setParamEiPKii() called");
    return 0;
}

/* Demangled: vqe_get_asa_theta_gain */
extern "C" __attribute__((visibility("default"))) int vqe_get_asa_theta_gain(void) {
    ALOGD("vqe_get_asa_theta_gain() called");
    return 0;
}

/* Demangled: vsv_force_tx */
extern "C" __attribute__((visibility("default"))) int vsv_force_tx(void) {
    ALOGD("vsv_force_tx() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::updateDapParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext15updateDapParamsEv(void) {
    ALOGD("_ZN5dolby16DapEffectContext15updateDapParamsEv() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_180 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_180(void) {
    ALOGD("DLB_r4_inv_fft_180() called");
    return 0;
}

/* Demangled: utlog_close */
extern "C" __attribute__((visibility("default"))) int utlog_close(void) {
    ALOGD("utlog_close() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L144 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L144 = NULL;

/* Demangled: dlb_fft_inv_usc_24 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_24(void) {
    ALOGD("dlb_fft_inv_usc_24() called");
    return 0;
}

/* Demangled: DLB_hybrid_synthesisCL_close */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_synthesisCL_close(void) {
    ALOGD("DLB_hybrid_synthesisCL_close() called");
    return 0;
}

/* Demangled: dlb_wave_octfile_read */
extern "C" __attribute__((visibility("default"))) int dlb_wave_octfile_read(void) {
    ALOGD("dlb_wave_octfile_read() called");
    return 0;
}

/* Demangled: vsv_banding_get_cfg */
extern "C" __attribute__((visibility("default"))) int vsv_banding_get_cfg(void) {
    ALOGD("vsv_banding_get_cfg() called");
    return 0;
}

/* Exported Object: a_twist_table_CQMF_480x480x54_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_CQMF_480x480x54_48000_tab = NULL;

/* Demangled: dlb_fft_fwd_usc_36 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_36(void) {
    ALOGD("dlb_fft_fwd_usc_36() called");
    return 0;
}

/* Demangled: DLB_load_mfb_p10km_analysisL_filter_state */
extern "C" __attribute__((visibility("default"))) int DLB_load_mfb_p10km_analysisL_filter_state(void) {
    ALOGD("DLB_load_mfb_p10km_analysisL_filter_state() called");
    return 0;
}

/* Demangled: dolby::DlbEffect::create(audio_uuid_s const*, int, int, effect_interface_s***) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect6createEPK12audio_uuid_siiPPP18effect_interface_s(void) {
    ALOGD("_ZN5dolby9DlbEffect6createEPK12audio_uuid_siiPPP18effect_interface_s() called");
    return 0;
}

/* Demangled: dolby::EffectVqe::setEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9EffectVqe10setEnabledEb(void) {
    ALOGD("_ZN5dolby9EffectVqe10setEnabledEb() called");
    return 0;
}

/* Demangled: vsv_agc_process */
extern "C" __attribute__((visibility("default"))) int vsv_agc_process(void) {
    ALOGD("vsv_agc_process() called");
    return 0;
}

/* Demangled: dlb_CLCLmix7CL14SU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLCLmix7CL14SU_flex(void) {
    ALOGD("dlb_CLCLmix7CL14SU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L192 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L192 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L96 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L96 = NULL;

/* Demangled: dlb_fft_fwd_usc_320 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_320(void) {
    ALOGD("dlb_fft_fwd_usc_320() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_144 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_144(void) {
    ALOGD("dlb_fft_inv_scl_144() called");
    return 0;
}

/* Demangled: dolby::EffectVqe::~EffectVqe() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9EffectVqeD1Ev(void) {
    ALOGD("_ZN5dolby9EffectVqeD1Ev() called");
    return 0;
}

/* Demangled: vqe_get_nuisance_prob */
extern "C" __attribute__((visibility("default"))) int vqe_get_nuisance_prob(void) {
    ALOGD("vqe_get_nuisance_prob() called");
    return 0;
}

/* Demangled: DLB_r4_fft_480 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_480(void) {
    ALOGD("DLB_r4_fft_480() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_12_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_12_s(void) {
    ALOGD("DLB_r4_inv_fft_12_s() called");
    return 0;
}

/* Demangled: dlb_qmf_synthesisL_open */
extern "C" __attribute__((visibility("default"))) int dlb_qmf_synthesisL_open(void) {
    ALOGD("dlb_qmf_synthesisL_open() called");
    return 0;
}

/* Demangled: dolby::EffectContext::getParam(int, unsigned int*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext8getParamEiPjPv(void) {
    ALOGD("_ZN5dolby13EffectContext8getParamEiPjPv() called");
    return 0;
}

/* Demangled: dlb_CLmpy_shlCLSIU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpy_shlCLSIU_flex(void) {
    ALOGD("dlb_CLmpy_shlCLSIU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_fft_768 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_768(void) {
    ALOGD("DLB_r4_fft_768() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_45_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_45_s(void) {
    ALOGD("DLB_r4_inv_fft_45_s() called");
    return 0;
}

/* Exported Object: a_twist_table_MDXT_640x640x56_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDXT_640x640x56_32000_tab = NULL;

/* Demangled: utlog_enable_log */
extern "C" __attribute__((visibility("default"))) int utlog_enable_log(void) {
    ALOGD("utlog_enable_log() called");
    return 0;
}

/* Demangled: vqe_get_asa_prob_inst_obj */
extern "C" __attribute__((visibility("default"))) int vqe_get_asa_prob_inst_obj(void) {
    ALOGD("vqe_get_asa_prob_inst_obj() called");
    return 0;
}

/* Demangled: vqe_reset_ne_module */
extern "C" __attribute__((visibility("default"))) int vqe_reset_ne_module(void) {
    ALOGD("vqe_reset_ne_module() called");
    return 0;
}

/* Demangled: DLB_vec_Lsum_sqrLUU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_Lsum_sqrLUU_strict(void) {
    ALOGD("DLB_vec_Lsum_sqrLUU_strict() called");
    return 0;
}

/* Demangled: dolby::VqeBufferAdapter::VqeBufferAdapter(dolby::IDlbProcess*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16VqeBufferAdapterC1EPNS_11IDlbProcessE(void) {
    ALOGD("_ZN5dolby16VqeBufferAdapterC1EPNS_11IDlbProcessE() called");
    return 0;
}

/* Demangled: dolby::BufferProvider::~BufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProviderD0Ev(void) {
    ALOGD("_ZN5dolby14BufferProviderD0Ev() called");
    return 0;
}

/* Exported Object: a_shift_table_CQMF_160x160x40_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_CQMF_160x160x40_08000_tab = NULL;

/* Demangled: dlb_vec_Lmean_sqrLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_Lmean_sqrLU_flex(void) {
    ALOGD("dlb_vec_Lmean_sqrLU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_30 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_30(void) {
    ALOGD("dlb_fft_fwd_scl_30() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_20 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_20(void) {
    ALOGD("dlb_fft_inv_scl_20() called");
    return 0;
}

/* Exported Object: DLB_MFB_P10KM_P64ATM301 */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_P10KM_P64ATM301 = NULL;

/* Demangled: dolby::DlbBufferAdapter::setParam(int, int const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DlbBufferAdapter8setParamEiPKii(void) {
    ALOGD("_ZN5dolby16DlbBufferAdapter8setParamEiPKii() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L144_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L144_1 = NULL;

/* Demangled: DLB_r4_fft_12 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_12(void) {
    ALOGD("DLB_r4_fft_12() called");
    return 0;
}

/* Demangled: DLB_r4_inv_rfft_half_n */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_rfft_half_n(void) {
    ALOGD("DLB_r4_inv_rfft_half_n() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L128_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L128_cos = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L144_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L144_2 = NULL;

/* Demangled: DLB_r4_fft_256_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_256_s(void) {
    ALOGD("DLB_r4_fft_256_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_32 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_32(void) {
    ALOGD("dlb_fft_fwd_scl_32() called");
    return 0;
}

/* Demangled: DLB_fft_CLfwd_unscaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLfwd_unscaledCL(void) {
    ALOGD("DLB_fft_CLfwd_unscaledCL() called");
    return 0;
}

/* Exported Object: vtable for dolby::VqeProcess */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby10VqeProcessE = NULL;

/* Demangled: datalog_cleanup */
extern "C" __attribute__((visibility("default"))) int datalog_cleanup(void) {
    ALOGD("datalog_cleanup() called");
    return 0;
}

/* Exported Object: a_twist_table_MDCT_480x480x54_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDCT_480x480x54_48000_tab = NULL;

/* Exported Object: dlb_fft_cplx_inv_usc */
extern "C" __attribute__((visibility("default"))) void* dlb_fft_cplx_inv_usc = NULL;

/* Exported Object: a_twist_table_MDXT_320x320x49_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDXT_320x320x49_32000_tab = NULL;

/* Demangled: DLB_r4_fft_15 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_15(void) {
    ALOGD("DLB_r4_fft_15() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_24 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_24(void) {
    ALOGD("dlb_fft_inv_scl_24() called");
    return 0;
}

/* Demangled: dlb_blk_LmixL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmixL_flex(void) {
    ALOGD("dlb_blk_LmixL_flex() called");
    return 0;
}

/* Demangled: DLB_r4_fft_16 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_16(void) {
    ALOGD("DLB_r4_fft_16() called");
    return 0;
}

/* Demangled: dolby::VoiceEffectContext::VoiceEffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18VoiceEffectContextC2Ev(void) {
    ALOGD("_ZN5dolby18VoiceEffectContextC2Ev() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L2 = NULL;

/* Demangled: dlb_fft_fwd_scl_36 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_36(void) {
    ALOGD("dlb_fft_fwd_scl_36() called");
    return 0;
}

/* Demangled: vqe_get_quality_alarm */
extern "C" __attribute__((visibility("default"))) int vqe_get_quality_alarm(void) {
    ALOGD("vqe_get_quality_alarm() called");
    return 0;
}

/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_GET_PARAM(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect27handle_EFFECT_CMD_GET_PARAMERNS_13EffectContextERNS_12ParserBufferES4_(void) {
    ALOGD("_ZN5dolby9DlbEffect27handle_EFFECT_CMD_GET_PARAMERNS_13EffectContextERNS_12ParserBufferES4_() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::DlbDapEffCallbacks::onDapParamUpdate(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext18DlbDapEffCallbacks16onDapParamUpdateERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN5dolby16DapEffectContext18DlbDapEffCallbacks16onDapParamUpdateERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: dolby::VqeProcess::configure(int, int, audio_format_t, audio_channel_mask_t, audio_channel_mask_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10VqeProcess9configureEii14audio_format_t20audio_channel_mask_tS2_(void) {
    ALOGD("_ZN5dolby10VqeProcess9configureEii14audio_format_t20audio_channel_mask_tS2_() called");
    return 0;
}

/* Demangled: vsv_ml_boost_process */
extern "C" __attribute__((visibility("default"))) int vsv_ml_boost_process(void) {
    ALOGD("vsv_ml_boost_process() called");
    return 0;
}

/* Demangled: dlb_blk_LLdeshuffleLL_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LLdeshuffleLL_inplace_flex(void) {
    ALOGD("dlb_blk_LLdeshuffleLL_inplace_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L4 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L4 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L48_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L48_cos = NULL;

/* Demangled: dolby::VqeProcess::VqeProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10VqeProcessC1Ev(void) {
    ALOGD("_ZN5dolby10VqeProcessC1Ev() called");
    return 0;
}

/* Exported Object: a_shift_table_MDCT_160x160x40_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDCT_160x160x40_08000_tab = NULL;

/* Exported Object: vtable for dolby::EffectContext */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby13EffectContextE = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L144 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L144 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L192_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L192_cos = NULL;

/* Demangled: dlb_wave_get_channel_count */
extern "C" __attribute__((visibility("default"))) int dlb_wave_get_channel_count(void) {
    ALOGD("dlb_wave_get_channel_count() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::~DapEffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContextD0Ev(void) {
    ALOGD("_ZN5dolby16DapEffectContextD0Ev() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisL_close */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_close(void) {
    ALOGD("DLB_qmf_synthesisL_close() called");
    return 0;
}

/* Demangled: dolby::VqeCrossfadeProcess::VqeCrossfadeProcess(dolby::IDlbProcess*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19VqeCrossfadeProcessC2EPNS_11IDlbProcessE(void) {
    ALOGD("_ZN5dolby19VqeCrossfadeProcessC2EPNS_11IDlbProcessE() called");
    return 0;
}

/* Exported Object: a_shift_table_MDCT_960x960x61_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDCT_960x960x61_48000_tab = NULL;

/* Demangled: vqe_get_asa_num_obj */
extern "C" __attribute__((visibility("default"))) int vqe_get_asa_num_obj(void) {
    ALOGD("vqe_get_asa_num_obj() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::setConfig(effect_config_s const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext9setConfigEPK15effect_config_s(void) {
    ALOGD("_ZN5dolby16DapEffectContext9setConfigEPK15effect_config_s() called");
    return 0;
}

/* Demangled: dolby::AudioHalUtils::AudioHalUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13AudioHalUtilsC2Ev(void) {
    ALOGD("_ZN5dolby13AudioHalUtilsC2Ev() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlULLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlULLL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlULLL_strict() called");
    return 0;
}

/* Exported Object: dlb_hyb_p4_13 */
extern "C" __attribute__((visibility("default"))) void* dlb_hyb_p4_13 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L8 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L8 = NULL;

/* Exported Object: a_twist_table_MDFT_640x640x56_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDFT_640x640x56_32000_tab = NULL;

/* Demangled: vsv_tx_get_vad_state */
extern "C" __attribute__((visibility("default"))) int vsv_tx_get_vad_state(void) {
    ALOGD("vsv_tx_get_vad_state() called");
    return 0;
}

/* Demangled: DLB_r4_cplx_inv_pair */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_inv_pair(void) {
    ALOGD("DLB_r4_cplx_inv_pair() called");
    return 0;
}

/* Demangled: dlb_inverseModulationComplex */
extern "C" __attribute__((visibility("default"))) int dlb_inverseModulationComplex(void) {
    ALOGD("dlb_inverseModulationComplex() called");
    return 0;
}

/* Demangled: dlb_qmf_analysisL_open */
extern "C" __attribute__((visibility("default"))) int dlb_qmf_analysisL_open(void) {
    ALOGD("dlb_qmf_analysisL_open() called");
    return 0;
}

/* Demangled: dolby::BufferProvider::setBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProvider9setBufferEPv(void) {
    ALOGD("_ZN5dolby14BufferProvider9setBufferEPv() called");
    return 0;
}

/* Demangled: datalog_dump_wave */
extern "C" __attribute__((visibility("default"))) int datalog_dump_wave(void) {
    ALOGD("datalog_dump_wave() called");
    return 0;
}

/* Demangled: vsv_har_get_outputs */
extern "C" __attribute__((visibility("default"))) int vsv_har_get_outputs(void) {
    ALOGD("vsv_har_get_outputs() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L288 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L288 = NULL;

/* Demangled: vlib_transform_open */
extern "C" __attribute__((visibility("default"))) int vlib_transform_open(void) {
    ALOGD("vlib_transform_open() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_384_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_384_s(void) {
    ALOGD("DLB_r4_inv_fft_384_s() called");
    return 0;
}

/* Demangled: DLB_Lqmf_analysisL */
extern "C" __attribute__((visibility("default"))) int DLB_Lqmf_analysisL(void) {
    ALOGD("DLB_Lqmf_analysisL() called");
    return 0;
}

/* Exported Object: a_twist_table_MDXT_480x480x54_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDXT_480x480x54_48000_tab = NULL;

/* Exported Object: vlib_transform_num_def */
extern "C" __attribute__((visibility("default"))) void* vlib_transform_num_def = NULL;

/* Demangled: vsv_banding_open */
extern "C" __attribute__((visibility("default"))) int vsv_banding_open(void) {
    ALOGD("vsv_banding_open() called");
    return 0;
}

/* Demangled: dolby::GameEffectContext::process(audio_buffer_s*, audio_buffer_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17GameEffectContext7processEP14audio_buffer_sS2_(void) {
    ALOGD("_ZN5dolby17GameEffectContext7processEP14audio_buffer_sS2_() called");
    return 0;
}

/* Demangled: dlb_CLmacCLLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmacCLLU_flex(void) {
    ALOGD("dlb_CLmacCLLU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_20 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_20(void) {
    ALOGD("DLB_r4_inv_fft_20() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_24_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_24_s(void) {
    ALOGD("DLB_r4_inv_fft_24_s() called");
    return 0;
}

/* Demangled: init_Phase90Hilbert */
extern "C" __attribute__((visibility("default"))) int init_Phase90Hilbert(void) {
    ALOGD("init_Phase90Hilbert() called");
    return 0;
}

/* Demangled: utlog_add_scalar_variable */
extern "C" __attribute__((visibility("default"))) int utlog_add_scalar_variable(void) {
    ALOGD("utlog_add_scalar_variable() called");
    return 0;
}

/* Demangled: vsv_banding_flattening */
extern "C" __attribute__((visibility("default"))) int vsv_banding_flattening(void) {
    ALOGD("vsv_banding_flattening() called");
    return 0;
}

/* Demangled: vsv_har_init */
extern "C" __attribute__((visibility("default"))) int vsv_har_init(void) {
    ALOGD("vsv_har_init() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv2L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv2L_flex(void) {
    ALOGD("dlb_blk_Liir2ssv2L_flex() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_288 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_288(void) {
    ALOGD("dlb_fft_inv_scl_288() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv1_usmpL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv1_usmpL_flex(void) {
    ALOGD("dlb_blk_Liir2ssv1_usmpL_flex() called");
    return 0;
}

/* Exported Object: a_twist_table_MDFT_320x320x49_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDFT_320x320x49_32000_tab = NULL;

/* Demangled: vsv_trag_init */
extern "C" __attribute__((visibility("default"))) int vsv_trag_init(void) {
    ALOGD("vsv_trag_init() called");
    return 0;
}

/* Demangled: dlb_CLCLmix4CL8SU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLCLmix4CL8SU_flex(void) {
    ALOGD("dlb_CLCLmix4CL8SU_flex() called");
    return 0;
}

/* Demangled: dlb_CLaddCLCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLaddCLCLU_flex(void) {
    ALOGD("dlb_CLaddCLCLU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L24 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L24 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L480 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L480 = NULL;

/* Demangled: dlb_dctII_unscaled */
extern "C" __attribute__((visibility("default"))) int dlb_dctII_unscaled(void) {
    ALOGD("dlb_dctII_unscaled() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L768 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L768 = NULL;

/* Demangled: DLB_r4_inv_fft_24 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_24(void) {
    ALOGD("DLB_r4_inv_fft_24() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_180 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_180(void) {
    ALOGD("dlb_fft_fwd_usc_180() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L256_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L256_cos = NULL;

/* Demangled: vqe_api_reset_ne_module */
extern "C" __attribute__((visibility("default"))) int vqe_api_reset_ne_module(void) {
    ALOGD("vqe_api_reset_ne_module() called");
    return 0;
}

/* Exported Object: vsv_ml_rules_rom_size */
extern "C" __attribute__((visibility("default"))) void* vsv_ml_rules_rom_size = NULL;

/* Demangled: dolby::VoiceEffectContext::setParam(int, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18VoiceEffectContext8setParamEijPv(void) {
    ALOGD("_ZN5dolby18VoiceEffectContext8setParamEijPv() called");
    return 0;
}

/* Demangled: dlb_BLsaddBLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLsaddBLL_flex(void) {
    ALOGD("dlb_BLsaddBLL_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_40 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_40(void) {
    ALOGD("dlb_fft_fwd_usc_40() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_30 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_30(void) {
    ALOGD("dlb_fft_inv_usc_30() called");
    return 0;
}

/* Demangled: DLB_CLhybrid_synthesisCL */
extern "C" __attribute__((visibility("default"))) int DLB_CLhybrid_synthesisCL(void) {
    ALOGD("DLB_CLhybrid_synthesisCL() called");
    return 0;
}

/* Exported Object: a_shift_table_MDXT_160x160x40_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDXT_160x160x40_08000_tab = NULL;

/* Demangled: DLB_Lqmf_analysisS */
extern "C" __attribute__((visibility("default"))) int DLB_Lqmf_analysisS(void) {
    ALOGD("DLB_Lqmf_analysisS() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L72_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L72_cos = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_2048 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_2048(void) {
    ALOGD("dlb_fft_inv_usc_2048() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_32 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_32(void) {
    ALOGD("dlb_fft_inv_usc_32() called");
    return 0;
}

/* Demangled: vqe_get_asa_max_num_obj */
extern "C" __attribute__((visibility("default"))) int vqe_get_asa_max_num_obj(void) {
    ALOGD("vqe_get_asa_max_num_obj() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_240 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_240(void) {
    ALOGD("dlb_fft_fwd_scl_240() called");
    return 0;
}

/* Demangled: vsv_reg_get_outputs */
extern "C" __attribute__((visibility("default"))) int vsv_reg_get_outputs(void) {
    ALOGD("vsv_reg_get_outputs() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Exported Object: vtable for dolby::DapEffectContext */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16DapEffectContextE = NULL;

/* Demangled: DLB_blk_Liir2ssv2L_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv2L_inplace_strict(void) {
    ALOGD("DLB_blk_Liir2ssv2L_inplace_strict() called");
    return 0;
}

/* Demangled: dlb_riff_rename_chunk */
extern "C" __attribute__((visibility("default"))) int dlb_riff_rename_chunk(void) {
    ALOGD("dlb_riff_rename_chunk() called");
    return 0;
}

/* Demangled: vqe_get_tx_vad_state_for_output */
extern "C" __attribute__((visibility("default"))) int vqe_get_tx_vad_state_for_output(void) {
    ALOGD("vqe_get_tx_vad_state_for_output() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_192 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_192(void) {
    ALOGD("DLB_r4_inv_fft_192() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_45 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_45(void) {
    ALOGD("dlb_fft_fwd_usc_45() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_36 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_36(void) {
    ALOGD("dlb_fft_inv_usc_36() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisS_init */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisS_init(void) {
    ALOGD("DLB_qmf_analysisS_init() called");
    return 0;
}

/* Demangled: DLB_time_div */
extern "C" __attribute__((visibility("default"))) int DLB_time_div(void) {
    ALOGD("DLB_time_div() called");
    return 0;
}

/* Demangled: vsv_ne_reset */
extern "C" __attribute__((visibility("default"))) int vsv_ne_reset(void) {
    ALOGD("vsv_ne_reset() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_2_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_2_s(void) {
    ALOGD("DLB_r4_inv_fft_2_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_240 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_240(void) {
    ALOGD("dlb_fft_inv_usc_240() called");
    return 0;
}

/* Demangled: DLB_mfb_p10km_synthesisCL_query_scratch */
extern "C" __attribute__((visibility("default"))) int DLB_mfb_p10km_synthesisCL_query_scratch(void) {
    ALOGD("DLB_mfb_p10km_synthesisCL_query_scratch() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L32_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L32_cos = NULL;

/* Exported Object: dlb_wave_ksdataformat_subtype_pcm */
extern "C" __attribute__((visibility("default"))) void* dlb_wave_ksdataformat_subtype_pcm = NULL;

/* Demangled: dlb_fft_fwd_usc_48 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_48(void) {
    ALOGD("dlb_fft_fwd_usc_48() called");
    return 0;
}

/* Demangled: dlb_CLshrCLUU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLshrCLUU_flex(void) {
    ALOGD("dlb_CLshrCLUU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L320 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L320 = NULL;

/* Demangled: DLB_r4_inv_fft_2048_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_2048_s(void) {
    ALOGD("DLB_r4_inv_fft_2048_s() called");
    return 0;
}

/* Exported Object: a_twist_table_MDFT_480x480x54_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDFT_480x480x54_48000_tab = NULL;

/* Demangled: DLB_blk_LmixnL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixnL_strict(void) {
    ALOGD("DLB_blk_LmixnL_strict() called");
    return 0;
}

/* Demangled: dlb_CLsubCLCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLsubCLCLU_flex(void) {
    ALOGD("dlb_CLsubCLCLU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L12 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L12 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L288 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L288 = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_16 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_16 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L12_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L12_cos = NULL;

/* Demangled: dolby::DlbEffect::getDescriptor(audio_uuid_s const*, effect_descriptor_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect13getDescriptorEPK12audio_uuid_sP19effect_descriptor_s(void) {
    ALOGD("_ZN5dolby9DlbEffect13getDescriptorEPK12audio_uuid_sP19effect_descriptor_s() called");
    return 0;
}

/* Demangled: datalog_init */
extern "C" __attribute__((visibility("default"))) int datalog_init(void) {
    ALOGD("datalog_init() called");
    return 0;
}

/* Demangled: DLB_r4_fft_20 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_20(void) {
    ALOGD("DLB_r4_fft_20() called");
    return 0;
}

/* Demangled: DLB_r4_fft_1024_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_1024_s(void) {
    ALOGD("DLB_r4_fft_1024_s() called");
    return 0;
}

/* Exported Object: vsv_ne_defs_num */
extern "C" __attribute__((visibility("default"))) void* vsv_ne_defs_num = NULL;

/* Demangled: DLB_blk_Lattack_decay_iir1L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_iir1L_set_coef(void) {
    ALOGD("DLB_blk_Lattack_decay_iir1L_set_coef() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_40 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_40(void) {
    ALOGD("dlb_fft_fwd_scl_40() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_30 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_30(void) {
    ALOGD("dlb_fft_inv_scl_30() called");
    return 0;
}

/* Exported Object: dolby::DlbEffect::kInterface */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby9DlbEffect10kInterfaceE = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L15 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L15 = NULL;

/* Demangled: vsv_asa_get_outputs */
extern "C" __attribute__((visibility("default"))) int vsv_asa_get_outputs(void) {
    ALOGD("vsv_asa_get_outputs() called");
    return 0;
}

/* Demangled: vqe_get_vad_gain */
extern "C" __attribute__((visibility("default"))) int vqe_get_vad_gain(void) {
    ALOGD("vqe_get_vad_gain() called");
    return 0;
}

/* Demangled: dolby::DlbCrossfadeProcess::accumulate(short*, short*, short*, int, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19DlbCrossfadeProcess10accumulateEPsS1_S1_iff(void) {
    ALOGD("_ZN5dolby19DlbCrossfadeProcess10accumulateEPsS1_S1_iff() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L16 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L16 = NULL;

/* Demangled: dlb_fft_inv_scl_32 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_32(void) {
    ALOGD("dlb_fft_inv_scl_32() called");
    return 0;
}

/* Demangled: dolby::DlbBufferAdapter::~DlbBufferAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DlbBufferAdapterD1Ev(void) {
    ALOGD("_ZN5dolby16DlbBufferAdapterD1Ev() called");
    return 0;
}

/* Demangled: dlb_BLmaxBLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmaxBLL_flex(void) {
    ALOGD("dlb_BLmaxBLL_flex() called");
    return 0;
}

/* Demangled: DLB_blk_Lcrossfade_gainLS_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lcrossfade_gainLS_setup(void) {
    ALOGD("DLB_blk_Lcrossfade_gainLS_setup() called");
    return 0;
}

/* Demangled: DLB_r4_fft_24 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_24(void) {
    ALOGD("DLB_r4_fft_24() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_36_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_36_s(void) {
    ALOGD("DLB_r4_inv_fft_36_s() called");
    return 0;
}

/* Demangled: datalog_flush */
extern "C" __attribute__((visibility("default"))) int datalog_flush(void) {
    ALOGD("datalog_flush() called");
    return 0;
}

/* Exported Object: a_shift_table_MDFT_160x160x40_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDFT_160x160x40_08000_tab = NULL;

/* Demangled: DLB_r4_fft_240_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_240_s(void) {
    ALOGD("DLB_r4_fft_240_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_640 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_640(void) {
    ALOGD("DLB_r4_fft_640() called");
    return 0;
}

/* Demangled: dlb_riff_open_chunk */
extern "C" __attribute__((visibility("default"))) int dlb_riff_open_chunk(void) {
    ALOGD("dlb_riff_open_chunk() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L576 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L576 = NULL;

/* Demangled: DLB_r4_inv_fft_512_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_512_s(void) {
    ALOGD("DLB_r4_inv_fft_512_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_45 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_45(void) {
    ALOGD("dlb_fft_fwd_scl_45() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_1024 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_1024(void) {
    ALOGD("dlb_fft_fwd_usc_1024() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_query_mem(void) {
    ALOGD("DLB_qmf_analysisL_query_mem() called");
    return 0;
}

/* Demangled: dolby::BufferProvider::BufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProviderC1Ev(void) {
    ALOGD("_ZN5dolby14BufferProviderC1Ev() called");
    return 0;
}

/* Demangled: dolby::DlbBufferProvider::~DlbBufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17DlbBufferProviderD0Ev(void) {
    ALOGD("_ZN5dolby17DlbBufferProviderD0Ev() called");
    return 0;
}

/* Demangled: dolby::DlbBufferAdapter::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DlbBufferAdapter4initEv(void) {
    ALOGD("_ZN5dolby16DlbBufferAdapter4initEv() called");
    return 0;
}

/* Exported Object: dlb_wave_ksdataformat_subtype_ieee_float */
extern "C" __attribute__((visibility("default"))) void* dlb_wave_ksdataformat_subtype_ieee_float = NULL;

/* Demangled: DLB_vec_Lmean_sqrLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_Lmean_sqrLU_strict(void) {
    ALOGD("DLB_vec_Lmean_sqrLU_strict() called");
    return 0;
}

/* Demangled: dlb_CLCLmix6CL12SU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLCLmix6CL12SU_flex(void) {
    ALOGD("dlb_CLCLmix6CL12SU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_36 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_36(void) {
    ALOGD("dlb_fft_inv_scl_36() called");
    return 0;
}

/* Demangled: DLB_Lunload_CLqmf_analysisL_filter_state */
extern "C" __attribute__((visibility("default"))) int DLB_Lunload_CLqmf_analysisL_filter_state(void) {
    ALOGD("DLB_Lunload_CLqmf_analysisL_filter_state() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L384_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L384_cos = NULL;

/* Demangled: dlb_blk_Liir2ssv1efL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv1efL_flex(void) {
    ALOGD("dlb_blk_Liir2ssv1efL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L720 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L720 = NULL;

/* Demangled: DLB_r4_fft_768_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_768_s(void) {
    ALOGD("DLB_r4_fft_768_s() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_720_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_720_s(void) {
    ALOGD("DLB_r4_inv_fft_720_s() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L240_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L240_cos = NULL;

/* Demangled: dolby::VoiceEffectContext::process(audio_buffer_s*, audio_buffer_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18VoiceEffectContext7processEP14audio_buffer_sS2_(void) {
    ALOGD("_ZN5dolby18VoiceEffectContext7processEP14audio_buffer_sS2_() called");
    return 0;
}

/* Demangled: DLB_blk_LmaxLLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmaxLLL_strict(void) {
    ALOGD("DLB_blk_LmaxLLL_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_48 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_48(void) {
    ALOGD("dlb_fft_fwd_scl_48() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_576 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_576(void) {
    ALOGD("dlb_fft_inv_scl_576() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::dolby::hardware::dms::V2_0::IDmsCallbacks-in-dolby::DapEffectContext::DlbDapEffCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5dolby16DapEffectContext18DlbDapEffCallbacksE0_N6vendor5dolby8hardware3dms4V2_013IDmsCallbacksE = NULL;

/* Demangled: dlb_blk_LclipL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LclipL_flex(void) {
    ALOGD("dlb_blk_LclipL_flex() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_720 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_720(void) {
    ALOGD("dlb_fft_inv_scl_720() called");
    return 0;
}

/* Exported Object: dlb_odd_fft_cplx_fwd_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_odd_fft_cplx_fwd_scl = NULL;

/* Demangled: dlb_wave_begin_data */
extern "C" __attribute__((visibility("default"))) int dlb_wave_begin_data(void) {
    ALOGD("dlb_wave_begin_data() called");
    return 0;
}

/* Demangled: DLB_CLaddCLCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLaddCLCLU_strict(void) {
    ALOGD("DLB_CLaddCLCLU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_360 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_360(void) {
    ALOGD("DLB_r4_fft_360() called");
    return 0;
}

/* Demangled: vsv_agc_init */
extern "C" __attribute__((visibility("default"))) int vsv_agc_init(void) {
    ALOGD("vsv_agc_init() called");
    return 0;
}

/* Demangled: DLB_blk_LdelayU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LdelayU_strict(void) {
    ALOGD("DLB_blk_LdelayU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_384 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_384(void) {
    ALOGD("dlb_fft_fwd_scl_384() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_1024 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_1024(void) {
    ALOGD("dlb_fft_inv_scl_1024() called");
    return 0;
}

/* Demangled: dolby::DlbEffect::effectProcess(effect_interface_s**, audio_buffer_s*, audio_buffer_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect13effectProcessEPP18effect_interface_sP14audio_buffer_sS5_(void) {
    ALOGD("_ZN5dolby9DlbEffect13effectProcessEPP18effect_interface_sP14audio_buffer_sS5_() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisL_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_get_delay(void) {
    ALOGD("DLB_qmf_synthesisL_get_delay() called");
    return 0;
}

/* Exported Object: dlb_cos_16_ast_mini_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_16_ast_mini_twiddle = NULL;

/* Demangled: dolby::EffectVqe::setParam(audio_devices_t, int, int const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9EffectVqe8setParamE15audio_devices_tiPKii(void) {
    ALOGD("_ZN5dolby9EffectVqe8setParamE15audio_devices_tiPKii() called");
    return 0;
}

/* Demangled: dlb_BLmpyBLS_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmpyBLS_inplace_flex(void) {
    ALOGD("dlb_BLmpyBLS_inplace_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L30 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L30 = NULL;

/* Demangled: DLB_r4_inv_fft_160_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_160_s(void) {
    ALOGD("DLB_r4_inv_fft_160_s() called");
    return 0;
}

/* Demangled: DLB_r4_cplx_inv_unscaled */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_inv_unscaled(void) {
    ALOGD("DLB_r4_cplx_inv_unscaled() called");
    return 0;
}

/* Demangled: vqe_api_process */
extern "C" __attribute__((visibility("default"))) int vqe_api_process(void) {
    ALOGD("vqe_api_process() called");
    return 0;
}

/* Demangled: dlb_riff_chunk_location */
extern "C" __attribute__((visibility("default"))) int dlb_riff_chunk_location(void) {
    ALOGD("dlb_riff_chunk_location() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::DapEffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContextC1Ev(void) {
    ALOGD("_ZN5dolby16DapEffectContextC1Ev() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_30 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_30(void) {
    ALOGD("DLB_r4_inv_fft_30() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_32_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_32_vec_ana = NULL;

/* Demangled: dlb_blk_delay_clear_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_delay_clear_flex(void) {
    ALOGD("dlb_blk_delay_clear_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L32 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L32 = NULL;

/* Demangled: DLB_r4_inv_fft_480 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_480(void) {
    ALOGD("DLB_r4_inv_fft_480() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_384 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_384(void) {
    ALOGD("dlb_fft_inv_usc_384() called");
    return 0;
}

/* Demangled: vlib_transform_forward */
extern "C" __attribute__((visibility("default"))) int vlib_transform_forward(void) {
    ALOGD("vlib_transform_forward() called");
    return 0;
}

/* Demangled: vqe_get_asa_obj_age */
extern "C" __attribute__((visibility("default"))) int vqe_get_asa_obj_age(void) {
    ALOGD("vqe_get_asa_obj_age() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::getSelectedTuningDevice(int, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext23getSelectedTuningDeviceEiPvPj(void) {
    ALOGD("_ZN5dolby16DapEffectContext23getSelectedTuningDeviceEiPvPj() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_768 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_768(void) {
    ALOGD("DLB_r4_inv_fft_768() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_32 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_32(void) {
    ALOGD("DLB_r4_inv_fft_32() called");
    return 0;
}

/* Demangled: dlb_dct4_postmodulation_shl */
extern "C" __attribute__((visibility("default"))) int dlb_dct4_postmodulation_shl(void) {
    ALOGD("dlb_dct4_postmodulation_shl() called");
    return 0;
}

/* Demangled: vqe_save_audio_logs */
extern "C" __attribute__((visibility("default"))) int vqe_save_audio_logs(void) {
    ALOGD("vqe_save_audio_logs() called");
    return 0;
}

/* Exported Object: DLB_MFB_P10KM_P64ATM301_LEGACY */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_P10KM_P64ATM301_LEGACY = NULL;

/* Demangled: DLB_blk_Liir2ssv3L_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv3L_inplace_strict(void) {
    ALOGD("DLB_blk_Liir2ssv3L_inplace_strict() called");
    return 0;
}

/* Demangled: dlb_CLdivCLCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLdivCLCLU_flex(void) {
    ALOGD("dlb_CLdivCLCLU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L36 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L36 = NULL;

/* Demangled: DLB_r4_fft_512 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_512(void) {
    ALOGD("DLB_r4_fft_512() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_4096 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_4096(void) {
    ALOGD("DLB_r4_inv_fft_4096() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_40 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_40(void) {
    ALOGD("dlb_fft_inv_usc_40() called");
    return 0;
}

/* Demangled: utlog_set_1d_pdata */
extern "C" __attribute__((visibility("default"))) int utlog_set_1d_pdata(void) {
    ALOGD("utlog_set_1d_pdata() called");
    return 0;
}

/* Demangled: DLB_blk_LmixL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixL_strict(void) {
    ALOGD("DLB_blk_LmixL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L180 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L180 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L576 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L576 = NULL;

/* Demangled: DLB_r4_inv_fft_15_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_15_s(void) {
    ALOGD("DLB_r4_inv_fft_15_s() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_36 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_36(void) {
    ALOGD("DLB_r4_inv_fft_36() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_192 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_192(void) {
    ALOGD("dlb_fft_fwd_usc_192() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_48_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_48_s(void) {
    ALOGD("DLB_r4_inv_fft_48_s() called");
    return 0;
}

/* Demangled: DLB_unload_mfb_p10km_analysisL_filter_state */
extern "C" __attribute__((visibility("default"))) int DLB_unload_mfb_p10km_analysisL_filter_state(void) {
    ALOGD("DLB_unload_mfb_p10km_analysisL_filter_state() called");
    return 0;
}

/* Demangled: dlb_wave_end_data */
extern "C" __attribute__((visibility("default"))) int dlb_wave_end_data(void) {
    ALOGD("dlb_wave_end_data() called");
    return 0;
}

/* Demangled: vsv_banding_forward */
extern "C" __attribute__((visibility("default"))) int vsv_banding_forward(void) {
    ALOGD("vsv_banding_forward() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L720 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L720 = NULL;

/* Demangled: dlb_fft_inv_scl_160 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_160(void) {
    ALOGD("dlb_fft_inv_scl_160() called");
    return 0;
}

/* Demangled: dolby::VqeProcess::copyToFloatArray(void*, dolby::BufferProvider*, audio_format_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10VqeProcess16copyToFloatArrayEPvPNS_14BufferProviderE14audio_format_t(void) {
    ALOGD("_ZN5dolby10VqeProcess16copyToFloatArrayEPvPNS_14BufferProviderE14audio_format_t() called");
    return 0;
}

/* Demangled: vsv_flux_cleanup */
extern "C" __attribute__((visibility("default"))) int vsv_flux_cleanup(void) {
    ALOGD("vsv_flux_cleanup() called");
    return 0;
}

/* Demangled: dolby::EffectContext::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext7disableEv(void) {
    ALOGD("_ZN5dolby13EffectContext7disableEv() called");
    return 0;
}

/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_peak_iir1L_setup(void) {
    ALOGD("DLB_blk_Lattack_decay_peak_iir1L_setup() called");
    return 0;
}

/* Exported Object: dlb_cos_16_full */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_16_full = NULL;

/* Demangled: dolby::EffectContext::~EffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContextD1Ev(void) {
    ALOGD("_ZN5dolby13EffectContextD1Ev() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::getDapParameter(unsigned int, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext15getDapParameterEjPvPj(void) {
    ALOGD("_ZN5dolby16DapEffectContext15getDapParameterEjPvPj() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_45 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_45(void) {
    ALOGD("dlb_fft_inv_usc_45() called");
    return 0;
}

/* Demangled: DLB_dsplib_init */
extern "C" __attribute__((visibility("default"))) int DLB_dsplib_init(void) {
    ALOGD("DLB_dsplib_init() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisL_set_slot_increment */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_set_slot_increment(void) {
    ALOGD("DLB_qmf_synthesisL_set_slot_increment() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L640 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L640 = NULL;

/* Demangled: DLB_time_end */
extern "C" __attribute__((visibility("default"))) int DLB_time_end(void) {
    ALOGD("DLB_time_end() called");
    return 0;
}

/* Demangled: vsv_asa_curr_obj_id */
extern "C" __attribute__((visibility("default"))) int vsv_asa_curr_obj_id(void) {
    ALOGD("vsv_asa_curr_obj_id() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2df1L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2df1L_setup(void) {
    ALOGD("DLB_blk_Liir2df1L_setup() called");
    return 0;
}

/* Demangled: DLB_r4_fft_40_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_40_s(void) {
    ALOGD("DLB_r4_fft_40_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_48 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_48(void) {
    ALOGD("dlb_fft_inv_usc_48() called");
    return 0;
}

/* Demangled: DLB_r4_fft_180_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_180_s(void) {
    ALOGD("DLB_r4_fft_180_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_256 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_256(void) {
    ALOGD("dlb_fft_fwd_scl_256() called");
    return 0;
}

/* Exported Object: a_twist_table_CQMF_320x320x48_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_CQMF_320x320x48_16000_tab = NULL;

/* Demangled: dolby::DapEffectContext::setPostgain(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext11setPostgainEPvj(void) {
    ALOGD("_ZN5dolby16DapEffectContext11setPostgainEPvj() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::setDapParameter(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext15setDapParameterEPvj(void) {
    ALOGD("_ZN5dolby16DapEffectContext15setDapParameterEPvj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L2 = NULL;

/* Demangled: dlb_blk_Lattack_decay_peak_iir1L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lattack_decay_peak_iir1L_flex(void) {
    ALOGD("dlb_blk_Lattack_decay_peak_iir1L_flex() called");
    return 0;
}

/* Demangled: DLB_r4_fft_30 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_30(void) {
    ALOGD("DLB_r4_fft_30() called");
    return 0;
}

/* Demangled: DLB_fft_state_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_fft_state_query_mem(void) {
    ALOGD("DLB_fft_state_query_mem() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L24 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L24 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L4 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L4 = NULL;

/* Demangled: dlb_fft_inv_scl_40 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_40(void) {
    ALOGD("dlb_fft_inv_scl_40() called");
    return 0;
}

/* Exported Object: vtable for dolby::IDlbProcess */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby11IDlbProcessE = NULL;

/* Demangled: dolby::DlbEffect::effectCommand(effect_interface_s**, unsigned int, unsigned int, void*, unsigned int*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect13effectCommandEPP18effect_interface_sjjPvPjS4_(void) {
    ALOGD("_ZN5dolby9DlbEffect13effectCommandEPP18effect_interface_sjjPvPjS4_() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L360 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L360 = NULL;

/* Demangled: DLB_r4_fft_32 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_32(void) {
    ALOGD("DLB_r4_fft_32() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_256 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_256(void) {
    ALOGD("dlb_fft_inv_usc_256() called");
    return 0;
}

/* Demangled: vqe_api_open */
extern "C" __attribute__((visibility("default"))) int vqe_api_open(void) {
    ALOGD("vqe_api_open() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEEE = NULL;

/* Demangled: DLB_r4_fft_128_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_128_s(void) {
    ALOGD("DLB_r4_fft_128_s() called");
    return 0;
}

/* Demangled: dolby::EffectContext::getConfig(effect_config_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext9getConfigEP15effect_config_s(void) {
    ALOGD("_ZN5dolby13EffectContext9getConfigEP15effect_config_s() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L2 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L8 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L8 = NULL;

/* Demangled: DLB_r4_rfft_nn_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_rfft_nn_s(void) {
    ALOGD("DLB_r4_rfft_nn_s() called");
    return 0;
}

/* Demangled: DLB_mfb_p10km_analysisL_query_scratch */
extern "C" __attribute__((visibility("default"))) int DLB_mfb_p10km_analysisL_query_scratch(void) {
    ALOGD("DLB_mfb_p10km_analysisL_query_scratch() called");
    return 0;
}

/* Demangled: dolby::Ac4DecAudioBufferProvider::set(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25Ac4DecAudioBufferProvider3setEPvi(void) {
    ALOGD("_ZN5dolby25Ac4DecAudioBufferProvider3setEPvi() called");
    return 0;
}

/* Demangled: DLB_r4_fft_36 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_36(void) {
    ALOGD("DLB_r4_fft_36() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_20_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_20_s(void) {
    ALOGD("DLB_r4_inv_fft_20_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_45 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_45(void) {
    ALOGD("dlb_fft_inv_scl_45() called");
    return 0;
}

/* Demangled: vsv_ns_open */
extern "C" __attribute__((visibility("default"))) int vsv_ns_open(void) {
    ALOGD("vsv_ns_open() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L4 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L4 = NULL;

/* Demangled: dlb_fft_fwd_scl_120 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_120(void) {
    ALOGD("dlb_fft_fwd_scl_120() called");
    return 0;
}

/* Demangled: DLB_fft_CLfwd_scaledL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLfwd_scaledL(void) {
    ALOGD("DLB_fft_CLfwd_scaledL() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisS_set_slot_increment */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisS_set_slot_increment(void) {
    ALOGD("DLB_qmf_analysisS_set_slot_increment() called");
    return 0;
}

/* Exported Object: a_twist_table_MDCT_320x320x48_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDCT_320x320x48_16000_tab = NULL;

/* Demangled: dolby::AudioBufferProvider::set(audio_buffer_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19AudioBufferProvider3setEP14audio_buffer_s(void) {
    ALOGD("_ZN5dolby19AudioBufferProvider3setEP14audio_buffer_s() called");
    return 0;
}

/* Demangled: vsv_banding_close */
extern "C" __attribute__((visibility("default"))) int vsv_banding_close(void) {
    ALOGD("vsv_banding_close() called");
    return 0;
}

/* Demangled: vqe_set_mode */
extern "C" __attribute__((visibility("default"))) int vqe_set_mode(void) {
    ALOGD("vqe_set_mode() called");
    return 0;
}

/* Demangled: dolby::GameEffectContext::~GameEffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17GameEffectContextD2Ev(void) {
    ALOGD("_ZN5dolby17GameEffectContextD2Ev() called");
    return 0;
}

/* Demangled: DLB_blk_LmixnL */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixnL(void) {
    ALOGD("DLB_blk_LmixnL() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_48 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_48(void) {
    ALOGD("dlb_fft_inv_scl_48() called");
    return 0;
}

/* Demangled: DLB_fft_scratch_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_fft_scratch_query_mem(void) {
    ALOGD("DLB_fft_scratch_query_mem() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::getTuningList(int, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext13getTuningListEiPvPj(void) {
    ALOGD("_ZN5dolby16DapEffectContext13getTuningListEiPvPj() called");
    return 0;
}

/* Demangled: dlb_vec_IeqLLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_IeqLLU_flex(void) {
    ALOGD("dlb_vec_IeqLLU_flex() called");
    return 0;
}

/* Demangled: dolby::DlbCrossfadeProcess::setParam(int, int const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19DlbCrossfadeProcess8setParamEiPKii(void) {
    ALOGD("_ZN5dolby19DlbCrossfadeProcess8setParamEiPKii() called");
    return 0;
}

/* Demangled: vlib_transform_close */
extern "C" __attribute__((visibility("default"))) int vlib_transform_close(void) {
    ALOGD("vlib_transform_close() called");
    return 0;
}

/* Demangled: dlb_vec_SshlSIU_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_SshlSIU_inplace_flex(void) {
    ALOGD("dlb_vec_SshlSIU_inplace_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L8 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L8 = NULL;

/* Demangled: dlb_fft_inv_usc_120 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_120(void) {
    ALOGD("dlb_fft_inv_usc_120() called");
    return 0;
}

/* Demangled: dlb_octfile_seek */
extern "C" __attribute__((visibility("default"))) int dlb_octfile_seek(void) {
    ALOGD("dlb_octfile_seek() called");
    return 0;
}

/* Demangled: dolby::DlbBufferProvider::DlbBufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17DlbBufferProviderC1Ev(void) {
    ALOGD("_ZN5dolby17DlbBufferProviderC1Ev() called");
    return 0;
}

/* Demangled: DLB_vec_SshlSIU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_SshlSIU_inplace_strict(void) {
    ALOGD("DLB_vec_SshlSIU_inplace_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L512 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L512 = NULL;

/* Demangled: DLB_r4_fft_960_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_960_s(void) {
    ALOGD("DLB_r4_fft_960_s() called");
    return 0;
}

/* Demangled: dolby::EffectContext::setDevice(audio_devices_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext9setDeviceE15audio_devices_t(void) {
    ALOGD("_ZN5dolby13EffectContext9setDeviceE15audio_devices_t() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L360_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L360_1 = NULL;

/* Demangled: dlb_riff_close */
extern "C" __attribute__((visibility("default"))) int dlb_riff_close(void) {
    ALOGD("dlb_riff_close() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L360_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L360_2 = NULL;

/* Demangled: DLB_r4_inv_fft_2 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_2(void) {
    ALOGD("DLB_r4_inv_fft_2() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_480 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_480(void) {
    ALOGD("dlb_fft_fwd_usc_480() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssefL_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssefL_set_coef(void) {
    ALOGD("DLB_blk_Liir2ssefL_set_coef() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_768 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_768(void) {
    ALOGD("dlb_fft_fwd_usc_768() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_128 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_128(void) {
    ALOGD("dlb_fft_fwd_scl_128() called");
    return 0;
}

/* Demangled: vsv_flux_process */
extern "C" __attribute__((visibility("default"))) int vsv_flux_process(void) {
    ALOGD("vsv_flux_process() called");
    return 0;
}

/* Demangled: DLB_vec_LsetLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LsetLU_strict(void) {
    ALOGD("DLB_vec_LsetLU_strict() called");
    return 0;
}

/* Demangled: dolby::VoiceEffectContext::~VoiceEffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18VoiceEffectContextD0Ev(void) {
    ALOGD("_ZN5dolby18VoiceEffectContextD0Ev() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_4 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_4(void) {
    ALOGD("DLB_r4_inv_fft_4() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L480_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L480_cos = NULL;

/* Demangled: utlog_set_2d_pdata */
extern "C" __attribute__((visibility("default"))) int utlog_set_2d_pdata(void) {
    ALOGD("utlog_set_2d_pdata() called");
    return 0;
}

/* Demangled: vqe_get_asa_temp_obj_level */
extern "C" __attribute__((visibility("default"))) int vqe_get_asa_temp_obj_level(void) {
    ALOGD("vqe_get_asa_temp_obj_level() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_40 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_40(void) {
    ALOGD("DLB_r4_inv_fft_40() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_256_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_256_s(void) {
    ALOGD("DLB_r4_inv_fft_256_s() called");
    return 0;
}

/* Demangled: dolby::Ac4DecAudioBufferProvider::configure(audio_format_t, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25Ac4DecAudioBufferProvider9configureE14audio_format_tjj(void) {
    ALOGD("_ZN5dolby25Ac4DecAudioBufferProvider9configureE14audio_format_tjj() called");
    return 0;
}

/* Demangled: dolby::EffectVqe::EffectVqe(dolby::IDlbProcess*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9EffectVqeC1EPNS_11IDlbProcessE(void) {
    ALOGD("_ZN5dolby9EffectVqeC1EPNS_11IDlbProcessE() called");
    return 0;
}

/* Exported Object: a_twist_table_CQMF_160x160x40_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_CQMF_160x160x40_08000_tab = NULL;

/* Demangled: vsv_mixer_ctrl_get_outputs */
extern "C" __attribute__((visibility("default"))) int vsv_mixer_ctrl_get_outputs(void) {
    ALOGD("vsv_mixer_ctrl_get_outputs() called");
    return 0;
}

/* Demangled: DLB_blk_LmixLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmixLL_strict(void) {
    ALOGD("DLB_blk_LmixLL_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_192_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_192_s(void) {
    ALOGD("DLB_r4_fft_192_s() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_6 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_6(void) {
    ALOGD("DLB_r4_inv_fft_6() called");
    return 0;
}

/* Exported Object: a_vsv_modes_tab */
extern "C" __attribute__((visibility("default"))) void* a_vsv_modes_tab = NULL;

/* Demangled: dlb_fft_inv_usc_128 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_128(void) {
    ALOGD("dlb_fft_inv_usc_128() called");
    return 0;
}

/* Demangled: dolby::UdcAudioBufferProvider::configure(audio_format_t, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby22UdcAudioBufferProvider9configureE14audio_format_tjj(void) {
    ALOGD("_ZN5dolby22UdcAudioBufferProvider9configureE14audio_format_tjj() called");
    return 0;
}

/* Exported Object: a_twist_table_CQMF_960x960x61_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_CQMF_960x960x61_48000_tab = NULL;

/* Exported Object: vsv_flux_def_num */
extern "C" __attribute__((visibility("default"))) void* vsv_flux_def_num = NULL;

/* Demangled: DLB_r4_inv_fft_8 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_8(void) {
    ALOGD("DLB_r4_inv_fft_8() called");
    return 0;
}

/* Exported Object: a_twist_table_MDXT_320x320x48_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDXT_320x320x48_16000_tab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L45 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L45 = NULL;

/* Demangled: DLB_BLmpy_scaleBLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmpy_scaleBLSU_strict(void) {
    ALOGD("DLB_BLmpy_scaleBLSU_strict() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv1efL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv1efL_strict(void) {
    ALOGD("DLB_blk_Liir2ssv1efL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L2 = NULL;

/* Demangled: DLB_r4_inv_fft_45 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_45(void) {
    ALOGD("DLB_r4_inv_fft_45() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_60 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_60(void) {
    ALOGD("dlb_fft_fwd_usc_60() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_2 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_2(void) {
    ALOGD("dlb_fft_inv_usc_2() called");
    return 0;
}

/* Demangled: vqe_api_set_maxsnr */
extern "C" __attribute__((visibility("default"))) int vqe_api_set_maxsnr(void) {
    ALOGD("vqe_api_set_maxsnr() called");
    return 0;
}

/* Demangled: DLB_blk_LmaxLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LmaxLL_strict(void) {
    ALOGD("DLB_blk_LmaxLL_strict() called");
    return 0;
}

/* Demangled: vqe_get_in_level */
extern "C" __attribute__((visibility("default"))) int vqe_get_in_level(void) {
    ALOGD("vqe_get_in_level() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L48 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L48 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L4 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L4 = NULL;

/* Exported Object: dlb_odd_fft_cplx_inv_usc */
extern "C" __attribute__((visibility("default"))) void* dlb_odd_fft_cplx_inv_usc = NULL;

/* Demangled: dlb_fft_inv_usc_4 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_4(void) {
    ALOGD("dlb_fft_inv_usc_4() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L192 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L192 = NULL;

/* Demangled: DLB_r4_inv_fft_48 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_48(void) {
    ALOGD("DLB_r4_inv_fft_48() called");
    return 0;
}

/* Exported Object: dlb_cos_16_full_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_16_full_scl = NULL;

/* Demangled: dolby::DlbBufferAdapter::setEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DlbBufferAdapter10setEnabledEb(void) {
    ALOGD("_ZN5dolby16DlbBufferAdapter10setEnabledEb() called");
    return 0;
}

/* Demangled: dlb_octfile_read */
extern "C" __attribute__((visibility("default"))) int dlb_octfile_read(void) {
    ALOGD("dlb_octfile_read() called");
    return 0;
}

/* Demangled: dlb_wave_open_write */
extern "C" __attribute__((visibility("default"))) int dlb_wave_open_write(void) {
    ALOGD("dlb_wave_open_write() called");
    return 0;
}

/* Demangled: DLB_vec_LmpyLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LmpyLSU_strict(void) {
    ALOGD("DLB_vec_LmpyLSU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L2_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L2_1 = NULL;

/* Demangled: DLB_r4_inv_fft_640 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_640(void) {
    ALOGD("DLB_r4_inv_fft_640() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_32_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_32_s(void) {
    ALOGD("DLB_r4_inv_fft_32_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_6 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_6(void) {
    ALOGD("dlb_fft_inv_usc_6() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_64 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_64(void) {
    ALOGD("dlb_fft_fwd_usc_64() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlUL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlUL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlUL_strict() called");
    return 0;
}

/* Demangled: dlb_blk_Lmix_shlULL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmix_shlULL_flex(void) {
    ALOGD("dlb_blk_Lmix_shlULL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L2_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L2_2 = NULL;

/* Demangled: DLB_r4_fft_240 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_240(void) {
    ALOGD("DLB_r4_fft_240() called");
    return 0;
}

/* Demangled: DLB_r4_fft_8_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_8_s(void) {
    ALOGD("DLB_r4_fft_8_s() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisL_init */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_init(void) {
    ALOGD("DLB_qmf_analysisL_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L90_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L90_cos = NULL;

/* Demangled: dlb_octfile_get_memory */
extern "C" __attribute__((visibility("default"))) int dlb_octfile_get_memory(void) {
    ALOGD("dlb_octfile_get_memory() called");
    return 0;
}

/* Demangled: vsv_ne_open */
extern "C" __attribute__((visibility("default"))) int vsv_ne_open(void) {
    ALOGD("vsv_ne_open() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L8 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L8 = NULL;

/* Demangled: DLB_r4_fft_2048 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_2048(void) {
    ALOGD("DLB_r4_fft_2048() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_8 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_8(void) {
    ALOGD("dlb_fft_inv_usc_8() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_32 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_32 = NULL;

/* Demangled: vsv_flux_get_outputs */
extern "C" __attribute__((visibility("default"))) int vsv_flux_get_outputs(void) {
    ALOGD("vsv_flux_get_outputs() called");
    return 0;
}

/* Demangled: dlb_blk_Liir1_shl_addLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir1_shl_addLL_flex(void) {
    ALOGD("dlb_blk_Liir1_shl_addLL_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_960 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_960(void) {
    ALOGD("dlb_fft_fwd_scl_960() called");
    return 0;
}

/* Demangled: dolby::VqeCrossfadeProcess::~VqeCrossfadeProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19VqeCrossfadeProcessD2Ev(void) {
    ALOGD("_ZN5dolby19VqeCrossfadeProcessD2Ev() called");
    return 0;
}

/* Demangled: vqe_open */
extern "C" __attribute__((visibility("default"))) int vqe_open(void) {
    ALOGD("vqe_open() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L30 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L30 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L320 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L320 = NULL;

/* Demangled: DLB_r4_rfft_nn */
extern "C" __attribute__((visibility("default"))) int DLB_r4_rfft_nn(void) {
    ALOGD("DLB_r4_rfft_nn() called");
    return 0;
}

/* Demangled: dolby::EffectVqe::process(audio_buffer_s*, audio_buffer_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9EffectVqe7processEP14audio_buffer_sS2_(void) {
    ALOGD("_ZN5dolby9EffectVqe7processEP14audio_buffer_sS2_() called");
    return 0;
}

/* Exported Object: vtable for dolby::AudioBufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby19AudioBufferProviderE = NULL;

/* Demangled: vlib_transform_init */
extern "C" __attribute__((visibility("default"))) int vlib_transform_init(void) {
    ALOGD("vlib_transform_init() called");
    return 0;
}

/* Demangled: vstack_get_max_used */
extern "C" __attribute__((visibility("default"))) int vstack_get_max_used(void) {
    ALOGD("vstack_get_max_used() called");
    return 0;
}

/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_GET_CONFIG(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect28handle_EFFECT_CMD_GET_CONFIGERNS_13EffectContextERNS_12ParserBufferES4_(void) {
    ALOGD("_ZN5dolby9DlbEffect28handle_EFFECT_CMD_GET_CONFIGERNS_13EffectContextERNS_12ParserBufferES4_() called");
    return 0;
}

/* Demangled: datalog_write */
extern "C" __attribute__((visibility("default"))) int datalog_write(void) {
    ALOGD("datalog_write() called");
    return 0;
}

/* Demangled: dft_fwd_scaled */
extern "C" __attribute__((visibility("default"))) int dft_fwd_scaled(void) {
    ALOGD("dft_fwd_scaled() called");
    return 0;
}

/* Demangled: vsv_banding_init */
extern "C" __attribute__((visibility("default"))) int vsv_banding_init(void) {
    ALOGD("vsv_banding_init() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1L_set_coef(void) {
    ALOGD("DLB_blk_Liir1L_set_coef() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L32 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L32 = NULL;

/* Demangled: vsv_ns_close */
extern "C" __attribute__((visibility("default"))) int vsv_ns_close(void) {
    ALOGD("vsv_ns_close() called");
    return 0;
}

/* Demangled: dolby::EffectContext::setConfig(effect_config_s const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext9setConfigEPK15effect_config_s(void) {
    ALOGD("_ZN5dolby13EffectContext9setConfigEPK15effect_config_s() called");
    return 0;
}

/* Demangled: dolby::EffectContext::EffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContextC2Ev(void) {
    ALOGD("_ZN5dolby13EffectContextC2Ev() called");
    return 0;
}

/* Demangled: DLB_BLmpy_scale_xBLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmpy_scale_xBLSU_strict(void) {
    ALOGD("DLB_BLmpy_scale_xBLSU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L90_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L90_1 = NULL;

/* Demangled: DLB_r4_fft_40 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_40(void) {
    ALOGD("DLB_r4_fft_40() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_360 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_360(void) {
    ALOGD("DLB_r4_inv_fft_360() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_320 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_320(void) {
    ALOGD("dlb_fft_inv_scl_320() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_960 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_960(void) {
    ALOGD("dlb_fft_inv_usc_960() called");
    return 0;
}

/* Exported Object: a_vsv_tx_defs_tab */
extern "C" __attribute__((visibility("default"))) void* a_vsv_tx_defs_tab = NULL;

/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_SET_DEVICE(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_DEVICEERNS_13EffectContextERNS_12ParserBufferES4_(void) {
    ALOGD("_ZN5dolby9DlbEffect28handle_EFFECT_CMD_SET_DEVICEERNS_13EffectContextERNS_12ParserBufferES4_() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::getTuningVersion(void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext16getTuningVersionEPvPj(void) {
    ALOGD("_ZN5dolby16DapEffectContext16getTuningVersionEPvPj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L90_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L90_2 = NULL;

/* Demangled: DLB_r4_fft_90_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_90_s(void) {
    ALOGD("DLB_r4_fft_90_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_60 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_60(void) {
    ALOGD("dlb_fft_fwd_scl_60() called");
    return 0;
}

/* Demangled: dlb_wave_insert_chunk */
extern "C" __attribute__((visibility("default"))) int dlb_wave_insert_chunk(void) {
    ALOGD("dlb_wave_insert_chunk() called");
    return 0;
}

/* Demangled: dlb_wave_int_write */
extern "C" __attribute__((visibility("default"))) int dlb_wave_int_write(void) {
    ALOGD("dlb_wave_int_write() called");
    return 0;
}

/* Demangled: dolby::VqeProcess::copyFromFloatArray(dolby::BufferProvider*, void*, audio_format_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10VqeProcess18copyFromFloatArrayEPNS_14BufferProviderEPv14audio_format_t(void) {
    ALOGD("_ZN5dolby10VqeProcess18copyFromFloatArrayEPNS_14BufferProviderEPv14audio_format_t() called");
    return 0;
}

/* Exported Object: a_twist_table_MDFT_320x320x48_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDFT_320x320x48_16000_tab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L36 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L36 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L64_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L64_1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L30_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L30_cos = NULL;

/* Demangled: dlb_octfile_close */
extern "C" __attribute__((visibility("default"))) int dlb_octfile_close(void) {
    ALOGD("dlb_octfile_close() called");
    return 0;
}

/* Exported Object: vtable for dolby::DlbCrossfadeProcess */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby19DlbCrossfadeProcessE = NULL;

/* Demangled: DLB_blk_delay_setup_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_delay_setup_strict(void) {
    ALOGD("DLB_blk_delay_setup_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L64_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L64_2 = NULL;

/* Demangled: DLB_r4_fft_64_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_64_s(void) {
    ALOGD("DLB_r4_fft_64_s() called");
    return 0;
}

/* Demangled: utlog_disable_all */
extern "C" __attribute__((visibility("default"))) int utlog_disable_all(void) {
    ALOGD("utlog_disable_all() called");
    return 0;
}

/* Demangled: vsv_asa_temp_obj_level */
extern "C" __attribute__((visibility("default"))) int vsv_asa_temp_obj_level(void) {
    ALOGD("vsv_asa_temp_obj_level() called");
    return 0;
}

/* Exported Object: a_vsv_block_def_tab */
extern "C" __attribute__((visibility("default"))) void* a_vsv_block_def_tab = NULL;

/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_INIT(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect22handle_EFFECT_CMD_INITERNS_13EffectContextERNS_12ParserBufferES4_(void) {
    ALOGD("_ZN5dolby9DlbEffect22handle_EFFECT_CMD_INITERNS_13EffectContextERNS_12ParserBufferES4_() called");
    return 0;
}

/* Demangled: DLB_r4_fft_45 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_45(void) {
    ALOGD("DLB_r4_fft_45() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_64 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_64(void) {
    ALOGD("dlb_fft_fwd_scl_64() called");
    return 0;
}

/* Demangled: dolby::DlbEffect::release(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect7releaseEPP18effect_interface_s(void) {
    ALOGD("_ZN5dolby9DlbEffect7releaseEPP18effect_interface_s() called");
    return 0;
}

/* Demangled: datalog_write_long */
extern "C" __attribute__((visibility("default"))) int datalog_write_long(void) {
    ALOGD("datalog_write_long() called");
    return 0;
}

/* Demangled: vsv_banding_def_find */
extern "C" __attribute__((visibility("default"))) int vsv_banding_def_find(void) {
    ALOGD("vsv_banding_def_find() called");
    return 0;
}

/* Exported Object: vsv_tx_defs_num */
extern "C" __attribute__((visibility("default"))) void* vsv_tx_defs_num = NULL;

/* Demangled: dolby::EffectContext::isEffectActive() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext14isEffectActiveEv(void) {
    ALOGD("_ZN5dolby13EffectContext14isEffectActiveEv() called");
    return 0;
}

/* Demangled: dolby::EffectContext::transformExternalGain(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext21transformExternalGainEj(void) {
    ALOGD("_ZN5dolby13EffectContext21transformExternalGainEj() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301 = NULL;

/* Exported Object: a_twist_table_MDXT_160x160x40_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDXT_160x160x40_08000_tab = NULL;

/* Demangled: utlog_set_ppdata */
extern "C" __attribute__((visibility("default"))) int utlog_set_ppdata(void) {
    ALOGD("utlog_set_ppdata() called");
    return 0;
}

/* Demangled: vsv_trag_cleanup */
extern "C" __attribute__((visibility("default"))) int vsv_trag_cleanup(void) {
    ALOGD("vsv_trag_cleanup() called");
    return 0;
}

/* Demangled: DLB_vec_UnormSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_UnormSU_strict(void) {
    ALOGD("DLB_vec_UnormSU_strict() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssefL_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssefL_setup(void) {
    ALOGD("DLB_blk_Liir2ssefL_setup() called");
    return 0;
}

/* Demangled: DLB_r4_fft_320_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_320_s(void) {
    ALOGD("DLB_r4_fft_320_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_48 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_48(void) {
    ALOGD("DLB_r4_fft_48() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_1024 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_1024(void) {
    ALOGD("dlb_fft_inv_usc_1024() called");
    return 0;
}

/* Exported Object: a_twist_table_MDXT_960x960x61_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDXT_960x960x61_48000_tab = NULL;

/* Demangled: vqe_get_asa_obj_voice_count */
extern "C" __attribute__((visibility("default"))) int vqe_get_asa_obj_voice_count(void) {
    ALOGD("vqe_get_asa_obj_voice_count() called");
    return 0;
}

/* Demangled: vqe_get_voice_level */
extern "C" __attribute__((visibility("default"))) int vqe_get_voice_level(void) {
    ALOGD("vqe_get_voice_level() called");
    return 0;
}

/* Demangled: DLB_time_lt */
extern "C" __attribute__((visibility("default"))) int DLB_time_lt(void) {
    ALOGD("DLB_time_lt() called");
    return 0;
}

/* Demangled: vstack_close */
extern "C" __attribute__((visibility("default"))) int vstack_close(void) {
    ALOGD("vstack_close() called");
    return 0;
}

/* Demangled: DLB_CLCLmix6CL12SU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLCLmix6CL12SU_strict(void) {
    ALOGD("DLB_CLCLmix6CL12SU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_512 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_512(void) {
    ALOGD("DLB_r4_inv_fft_512() called");
    return 0;
}

/* Demangled: dolby::VqeBufferAdapter::~VqeBufferAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16VqeBufferAdapterD2Ev(void) {
    ALOGD("_ZN5dolby16VqeBufferAdapterD2Ev() called");
    return 0;
}

/* Demangled: DLB_hybrid_synthesisCL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_synthesisCL_query_mem(void) {
    ALOGD("DLB_hybrid_synthesisCL_query_mem() called");
    return 0;
}

/* Demangled: dolby::EffectVqe::~EffectVqe() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9EffectVqeD0Ev(void) {
    ALOGD("_ZN5dolby9EffectVqeD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE = NULL;

/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_peak_iir1L_strict(void) {
    ALOGD("DLB_blk_Lattack_decay_peak_iir1L_strict() called");
    return 0;
}

/* Demangled: analysis_s_mdct */
extern "C" __attribute__((visibility("default"))) int analysis_s_mdct(void) {
    ALOGD("analysis_s_mdct() called");
    return 0;
}

/* Exported Object: dlb_cos_32_full */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_32_full = NULL;

/* Demangled: DLB_qmf_analysisS_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisS_query_mem(void) {
    ALOGD("DLB_qmf_analysisS_query_mem() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv3aLU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv3aLU_inplace_strict(void) {
    ALOGD("DLB_blk_Liir2ssv3aLU_inplace_strict() called");
    return 0;
}

/* Demangled: DLB_vec_LshlLIU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LshlLIU_inplace_strict(void) {
    ALOGD("DLB_vec_LshlLIU_inplace_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L320 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L320 = NULL;

/* Demangled: dlb_vec_Lsum_sqrLUU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_Lsum_sqrLUU_flex(void) {
    ALOGD("dlb_vec_Lsum_sqrLUU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L12 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L12 = NULL;

/* Exported Object: dlb_fft_cplx_inv_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_fft_cplx_inv_scl = NULL;

/* Demangled: DLB_blk_Lcrossfade_gainLS_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lcrossfade_gainLS_strict(void) {
    ALOGD("DLB_blk_Lcrossfade_gainLS_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L480 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L480 = NULL;

/* Demangled: DLB_r4_fft_384 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_384(void) {
    ALOGD("DLB_r4_fft_384() called");
    return 0;
}

/* Demangled: stats_copy */
extern "C" __attribute__((visibility("default"))) int stats_copy(void) {
    ALOGD("stats_copy() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L240 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L240 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L768 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L768 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L15 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L15 = NULL;

/* Demangled: utlog_add_2d_variable */
extern "C" __attribute__((visibility("default"))) int utlog_add_2d_variable(void) {
    ALOGD("utlog_add_2d_variable() called");
    return 0;
}

/* Demangled: vsv_mixer_ctrl_close */
extern "C" __attribute__((visibility("default"))) int vsv_mixer_ctrl_close(void) {
    ALOGD("vsv_mixer_ctrl_close() called");
    return 0;
}

/* Demangled: DLB_blk_LsubLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LsubLL_strict(void) {
    ALOGD("DLB_blk_LsubLL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L16 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L16 = NULL;

/* Demangled: DLB_r4_fft_288_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_288_s(void) {
    ALOGD("DLB_r4_fft_288_s() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_240_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_240_s(void) {
    ALOGD("DLB_r4_inv_fft_240_s() called");
    return 0;
}

/* Exported Object: a_vsv_flux_def_tab */
extern "C" __attribute__((visibility("default"))) void* a_vsv_flux_def_tab = NULL;

/* Demangled: dlb_blk_Lfir3L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lfir3L_flex(void) {
    ALOGD("dlb_blk_Lfir3L_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L384_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L384_1 = NULL;

/* Demangled: analysis_s */
extern "C" __attribute__((visibility("default"))) int analysis_s(void) {
    ALOGD("analysis_s() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L384_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L384_2 = NULL;

/* Exported Object: a_twist_table_MDFT_160x160x40_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDFT_160x160x40_08000_tab = NULL;

/* Demangled: dolby::VoiceEffectContext::VoiceEffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18VoiceEffectContextC1Ev(void) {
    ALOGD("_ZN5dolby18VoiceEffectContextC1Ev() called");
    return 0;
}

/* Exported Object: dlb_unused_debug */
extern "C" __attribute__((visibility("default"))) void* dlb_unused_debug = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L180 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L180 = NULL;

/* Demangled: DLB_r4_inv_fft_768_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_768_s(void) {
    ALOGD("DLB_r4_inv_fft_768_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_640 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_640(void) {
    ALOGD("dlb_fft_fwd_usc_640() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_60 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_60(void) {
    ALOGD("dlb_fft_inv_usc_60() called");
    return 0;
}

/* Demangled: dolby::DlbBufferProvider::configure(int, audio_format_t, audio_channel_mask_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17DlbBufferProvider9configureEi14audio_format_t20audio_channel_mask_t(void) {
    ALOGD("_ZN5dolby17DlbBufferProvider9configureEi14audio_format_t20audio_channel_mask_t() called");
    return 0;
}

/* Demangled: dlb_riff_override_chunk_size */
extern "C" __attribute__((visibility("default"))) int dlb_riff_override_chunk_size(void) {
    ALOGD("dlb_riff_override_chunk_size() called");
    return 0;
}

/* Demangled: vqe_get_mixer_gain */
extern "C" __attribute__((visibility("default"))) int vqe_get_mixer_gain(void) {
    ALOGD("vqe_get_mixer_gain() called");
    return 0;
}

/* Demangled: DLB_Lqmf_synthesisCL_Head1Bit */
extern "C" __attribute__((visibility("default"))) int DLB_Lqmf_synthesisCL_Head1Bit(void) {
    ALOGD("DLB_Lqmf_synthesisCL_Head1Bit() called");
    return 0;
}

/* Demangled: DLB_time_reset */
extern "C" __attribute__((visibility("default"))) int DLB_time_reset(void) {
    ALOGD("DLB_time_reset() called");
    return 0;
}

/* Demangled: dolby::DlbBufferAdapter::getParam(int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DlbBufferAdapter8getParamEiPiS1_(void) {
    ALOGD("_ZN5dolby16DlbBufferAdapter8getParamEiPiS1_() called");
    return 0;
}

/* Exported Object: a_twist_table_MDFT_960x960x61_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDFT_960x960x61_48000_tab = NULL;

/* Demangled: dlb_CLzeroCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLzeroCLU_flex(void) {
    ALOGD("dlb_CLzeroCLU_flex() called");
    return 0;
}

/* Demangled: _dlb_ldct2_unscaled_iplu */
extern "C" __attribute__((visibility("default"))) int _dlb_ldct2_unscaled_iplu(void) {
    ALOGD("_dlb_ldct2_unscaled_iplu() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_72 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_72(void) {
    ALOGD("dlb_fft_fwd_usc_72() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L15_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L15_cos = NULL;

/* Demangled: dolby::EffectContext::isConfigured() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext12isConfiguredEv(void) {
    ALOGD("_ZN5dolby13EffectContext12isConfiguredEv() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_180 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_180(void) {
    ALOGD("dlb_fft_inv_scl_180() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::setSelectedTuningDevice(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext23setSelectedTuningDeviceEPvj(void) {
    ALOGD("_ZN5dolby16DapEffectContext23setSelectedTuningDeviceEPvj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L1024_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L1024_1 = NULL;

/* Demangled: dlb_fft_inv_usc_64 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_64(void) {
    ALOGD("dlb_fft_inv_usc_64() called");
    return 0;
}

/* Exported Object: a_shift_table_CQMF_080x080x33_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_CQMF_080x080x33_08000_tab = NULL;

/* Demangled: dolby::AudioHalUtils::AudioHalUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13AudioHalUtilsC1Ev(void) {
    ALOGD("_ZN5dolby13AudioHalUtilsC1Ev() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L1024_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L1024_2 = NULL;

/* Demangled: dolby::EffectContext::getStoredParams(bool, int&, android::KeyedVector<audio_devices_t, dolby::DapParamCache*>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext15getStoredParamsEbRiRN7android11KeyedVectorI15audio_devices_tPNS_13DapParamCacheEEE(void) {
    ALOGD("_ZN5dolby13EffectContext15getStoredParamsEbRiRN7android11KeyedVectorI15audio_devices_tPNS_13DapParamCacheEEE() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1L_setup(void) {
    ALOGD("DLB_blk_Liir1L_setup() called");
    return 0;
}

/* Demangled: dlb_riff_seek_chunk */
extern "C" __attribute__((visibility("default"))) int dlb_riff_seek_chunk(void) {
    ALOGD("dlb_riff_seek_chunk() called");
    return 0;
}

/* Demangled: dlb_wave_int_read */
extern "C" __attribute__((visibility("default"))) int dlb_wave_int_read(void) {
    ALOGD("dlb_wave_int_read() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_360 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_360(void) {
    ALOGD("dlb_fft_fwd_usc_360() called");
    return 0;
}

/* Demangled: dlb_octfile_eof */
extern "C" __attribute__((visibility("default"))) int dlb_octfile_eof(void) {
    ALOGD("dlb_octfile_eof() called");
    return 0;
}

/* Demangled: dft_cleanup */
extern "C" __attribute__((visibility("default"))) int dft_cleanup(void) {
    ALOGD("dft_cleanup() called");
    return 0;
}

/* Demangled: vsv_trag_process */
extern "C" __attribute__((visibility("default"))) int vsv_trag_process(void) {
    ALOGD("vsv_trag_process() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L12 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L12 = NULL;

/* Exported Object: vtable for dolby::VoiceEffectContext */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby18VoiceEffectContextE = NULL;

/* Demangled: dlb_vec_LdotLLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LdotLLU_flex(void) {
    ALOGD("dlb_vec_LdotLLU_flex() called");
    return 0;
}

/* Demangled: DLB_CLsubCLCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLsubCLCLU_strict(void) {
    ALOGD("DLB_CLsubCLCLU_strict() called");
    return 0;
}

/* Demangled: DLB_blk_Lmpy_shlLLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmpy_shlLLU_strict(void) {
    ALOGD("DLB_blk_Lmpy_shlLLU_strict() called");
    return 0;
}

/* Demangled: DLB_blk_Lmpy_shlLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmpy_shlLSU_strict(void) {
    ALOGD("DLB_blk_Lmpy_shlLSU_strict() called");
    return 0;
}

/* Demangled: dlb_dctIII_scaled */
extern "C" __attribute__((visibility("default"))) int dlb_dctIII_scaled(void) {
    ALOGD("dlb_dctIII_scaled() called");
    return 0;
}

/* Exported Object: dlb_octfile_memory_vtable */
extern "C" __attribute__((visibility("default"))) void* dlb_octfile_memory_vtable = NULL;

/* Exported Object: a_twist_table_MDCT_640x640x56_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDCT_640x640x56_32000_tab = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L15 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L15 = NULL;

/* Demangled: DLB_r4_fft_256 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_256(void) {
    ALOGD("DLB_r4_fft_256() called");
    return 0;
}

/* Demangled: dolby::VqeCrossfadeProcess::configure(int, int, audio_format_t, audio_channel_mask_t, audio_channel_mask_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19VqeCrossfadeProcess9configureEii14audio_format_t20audio_channel_mask_tS2_(void) {
    ALOGD("_ZN5dolby19VqeCrossfadeProcess9configureEii14audio_format_t20audio_channel_mask_tS2_() called");
    return 0;
}

/* Demangled: vsv_ml_open */
extern "C" __attribute__((visibility("default"))) int vsv_ml_open(void) {
    ALOGD("vsv_ml_open() called");
    return 0;
}

/* Demangled: vqe_get_drc_gain */
extern "C" __attribute__((visibility("default"))) int vqe_get_drc_gain(void) {
    ALOGD("vqe_get_drc_gain() called");
    return 0;
}

/* Demangled: dolby::GameEffectContext::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17GameEffectContext4initEv(void) {
    ALOGD("_ZN5dolby17GameEffectContext4initEv() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L16 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L16 = NULL;

/* Demangled: DLB_r4_fft_4096_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_4096_s(void) {
    ALOGD("DLB_r4_fft_4096_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_60 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_60(void) {
    ALOGD("dlb_fft_inv_scl_60() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_48 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_48 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L1024 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L1024 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L45 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L45 = NULL;

/* Exported Object: a_shift_table_MDCT_080x080x33_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDCT_080x080x33_08000_tab = NULL;

/* Demangled: vsv_banding_get_table_pointers */
extern "C" __attribute__((visibility("default"))) int vsv_banding_get_table_pointers(void) {
    ALOGD("vsv_banding_get_table_pointers() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_72 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_72(void) {
    ALOGD("dlb_fft_fwd_scl_72() called");
    return 0;
}

/* Demangled: DLB_blk_LLshuffleLL_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LLshuffleLL_inplace_strict(void) {
    ALOGD("DLB_blk_LLshuffleLL_inplace_strict() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P4_32_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4_32_vec_syn = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L48 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L48 = NULL;

/* Demangled: dlb_fft_inv_scl_64 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_64(void) {
    ALOGD("dlb_fft_inv_scl_64() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_legacy_extra_latency() called");
    return 0;
}

/* Exported Object: a_twist_table_MDCT_320x320x49_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDCT_320x320x49_32000_tab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L384 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L384 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L180 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L180 = NULL;

/* Demangled: dlb_fft_fwd_usc_512 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_512(void) {
    ALOGD("dlb_fft_fwd_usc_512() called");
    return 0;
}

/* Demangled: dlb_wave_float_write */
extern "C" __attribute__((visibility("default"))) int dlb_wave_float_write(void) {
    ALOGD("dlb_wave_float_write() called");
    return 0;
}

/* Demangled: dlb_blk_delay_setup_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_delay_setup_flex(void) {
    ALOGD("dlb_blk_delay_setup_flex() called");
    return 0;
}

/* Demangled: DLB_CLmfb_p10km_analysisL_legacy */
extern "C" __attribute__((visibility("default"))) int DLB_CLmfb_p10km_analysisL_legacy(void) {
    ALOGD("DLB_CLmfb_p10km_analysisL_legacy() called");
    return 0;
}

/* Exported Object: DLB_MFB_TWID128E */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_TWID128E = NULL;

/* Demangled: DLB_fft_CLfwd_scaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLfwd_scaledCL(void) {
    ALOGD("DLB_fft_CLfwd_scaledCL() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisS_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_query_mem(void) {
    ALOGD("DLB_qmf_synthesisS_query_mem() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_vec_syn = NULL;

/* Demangled: dolby::VqeBufferAdapter::VqeBufferAdapter(dolby::IDlbProcess*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16VqeBufferAdapterC2EPNS_11IDlbProcessE(void) {
    ALOGD("_ZN5dolby16VqeBufferAdapterC2EPNS_11IDlbProcessE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: dlb_riff_open_write */
extern "C" __attribute__((visibility("default"))) int dlb_riff_open_write(void) {
    ALOGD("dlb_riff_open_write() called");
    return 0;
}

/* Demangled: dlb_wave_open_read */
extern "C" __attribute__((visibility("default"))) int dlb_wave_open_read(void) {
    ALOGD("dlb_wave_open_read() called");
    return 0;
}

/* Demangled: vsv_mixer_ctrl_open */
extern "C" __attribute__((visibility("default"))) int vsv_mixer_ctrl_open(void) {
    ALOGD("vsv_mixer_ctrl_open() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlULL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlULL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlULL_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_120 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_120(void) {
    ALOGD("DLB_r4_fft_120() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L512_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L512_1 = NULL;

/* Demangled: dlb_blk_Liir2df1L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2df1L_flex(void) {
    ALOGD("dlb_blk_Liir2df1L_flex() called");
    return 0;
}

/* Demangled: dlb_blk_LsaddLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LsaddLL_flex(void) {
    ALOGD("dlb_blk_LsaddLL_flex() called");
    return 0;
}

/* Demangled: DLB_blk_delayL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_delayL_strict(void) {
    ALOGD("DLB_blk_delayL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L512_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L512_2 = NULL;

/* Demangled: dlb_fft_fwd_scl_144 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_144(void) {
    ALOGD("dlb_fft_fwd_scl_144() called");
    return 0;
}

/* Demangled: DLB_fft_CLfwd_unscaledL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLfwd_unscaledL(void) {
    ALOGD("DLB_fft_CLfwd_unscaledL() called");
    return 0;
}

/* Exported Object: DLB_MFB_P10KM_P4_319SC_256M */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_P10KM_P4_319SC_256M = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L720_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L720_cos = NULL;

/* Exported Object: vtable for dolby::VqeCrossfadeProcess */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby19VqeCrossfadeProcessE = NULL;

/* Demangled: dolby::VqeProcess::~VqeProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10VqeProcessD2Ev(void) {
    ALOGD("_ZN5dolby10VqeProcessD2Ev() called");
    return 0;
}

/* Demangled: dlb_riff_close_chunk */
extern "C" __attribute__((visibility("default"))) int dlb_riff_close_chunk(void) {
    ALOGD("dlb_riff_close_chunk() called");
    return 0;
}

/* Demangled: dolby::AudioHalUtils::init(dolby::EffectContext*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13AudioHalUtils4initEPNS_13EffectContextE(void) {
    ALOGD("_ZN5dolby13AudioHalUtils4initEPNS_13EffectContextE() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L720_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L720_1 = NULL;

/* Demangled: DLB_r4_inv_fft_180_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_180_s(void) {
    ALOGD("DLB_r4_inv_fft_180_s() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L288_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L288_cos = NULL;

/* Demangled: dolby::EffectVqe::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9EffectVqe4initEv(void) {
    ALOGD("_ZN5dolby9EffectVqe4initEv() called");
    return 0;
}

/* Demangled: vqe_get_ml_voice_decision */
extern "C" __attribute__((visibility("default"))) int vqe_get_ml_voice_decision(void) {
    ALOGD("vqe_get_ml_voice_decision() called");
    return 0;
}

/* Demangled: DLB_blk_LclipL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LclipL_strict(void) {
    ALOGD("DLB_blk_LclipL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L720_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L720_2 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L144_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L144_cos = NULL;

/* Demangled: dolby::DapEffectContext::connectDolbyService() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext19connectDolbyServiceEv(void) {
    ALOGD("_ZN5dolby16DapEffectContext19connectDolbyServiceEv() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_240 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_240(void) {
    ALOGD("DLB_r4_inv_fft_240() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_8_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_8_s(void) {
    ALOGD("DLB_r4_inv_fft_8_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_144 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_144(void) {
    ALOGD("dlb_fft_inv_usc_144() called");
    return 0;
}

/* Demangled: DLB_CLmfb_p10km_analysisL_close */
extern "C" __attribute__((visibility("default"))) int DLB_CLmfb_p10km_analysisL_close(void) {
    ALOGD("DLB_CLmfb_p10km_analysisL_close() called");
    return 0;
}

/* Exported Object: a_shift_table_MDXT_080x080x33_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDXT_080x080x33_08000_tab = NULL;

/* Exported Object: vtable for dolby::DlbBufferAdapter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16DlbBufferAdapterE = NULL;

/* Demangled: DLB_vec_LdotLLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LdotLLU_strict(void) {
    ALOGD("DLB_vec_LdotLLU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L60 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L60 = NULL;

/* Demangled: DLB_r4_fft_4_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_4_s(void) {
    ALOGD("DLB_r4_fft_4_s() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_shl */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_shl(void) {
    ALOGD("DLB_hybrid_analysisCL_shl() called");
    return 0;
}

/* Exported Object: a_shift_table_CQMF_640x640x56_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_CQMF_640x640x56_32000_tab = NULL;

/* Demangled: DLB_blk_Lfir2L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir2L_strict(void) {
    ALOGD("DLB_blk_Lfir2L_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L24 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L24 = NULL;

/* Demangled: DLB_r4_inv_fft_60 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_60(void) {
    ALOGD("DLB_r4_inv_fft_60() called");
    return 0;
}

/* Demangled: DLB_r4_fft_128 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_128(void) {
    ALOGD("DLB_r4_fft_128() called");
    return 0;
}

/* Exported Object: a_twist_table_CQMF_160x160x41_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_CQMF_160x160x41_16000_tab = NULL;

/* Demangled: vqe_get_tx_fade_index */
extern "C" __attribute__((visibility("default"))) int vqe_get_tx_fade_index(void) {
    ALOGD("vqe_get_tx_fade_index() called");
    return 0;
}

/* Demangled: vqe_api_init */
extern "C" __attribute__((visibility("default"))) int vqe_api_init(void) {
    ALOGD("vqe_api_init() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_128_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_128_s(void) {
    ALOGD("DLB_r4_inv_fft_128_s() called");
    return 0;
}

/* Demangled: DLB_r4_inv_rfft_nn */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_rfft_nn(void) {
    ALOGD("DLB_r4_inv_rfft_nn() called");
    return 0;
}

/* Exported Object: dolby::EffectContext::mWaitReleaseLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby13EffectContext16mWaitReleaseLockE = NULL;

/* Demangled: dolby::DlbBufferAdapter::~DlbBufferAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DlbBufferAdapterD0Ev(void) {
    ALOGD("_ZN5dolby16DlbBufferAdapterD0Ev() called");
    return 0;
}

/* Demangled: dlb_CLmpyCLCSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpyCLCSU_flex(void) {
    ALOGD("dlb_CLmpyCLCSU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_rfft_nn_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_rfft_nn_s(void) {
    ALOGD("DLB_r4_inv_rfft_nn_s() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L64 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L64 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L64_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L64_cos = NULL;

/* Demangled: vsv_tx_cleanup */
extern "C" __attribute__((visibility("default"))) int vsv_tx_cleanup(void) {
    ALOGD("vsv_tx_cleanup() called");
    return 0;
}

/* Demangled: DLB_r4_cplx_fwd_pair */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_fwd_pair(void) {
    ALOGD("DLB_r4_cplx_fwd_pair() called");
    return 0;
}

/* Demangled: _dlb_ldct2_scaled_iplu */
extern "C" __attribute__((visibility("default"))) int _dlb_ldct2_scaled_iplu(void) {
    ALOGD("_dlb_ldct2_scaled_iplu() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_64 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_64(void) {
    ALOGD("DLB_r4_inv_fft_64() called");
    return 0;
}

/* Demangled: dolby::EffectVqe::setConfig(buffer_config_s const&, buffer_config_s const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9EffectVqe9setConfigERK15buffer_config_sS3_(void) {
    ALOGD("_ZN5dolby9EffectVqe9setConfigERK15buffer_config_sS3_() called");
    return 0;
}

/* Demangled: vsv_ns_init */
extern "C" __attribute__((visibility("default"))) int vsv_ns_init(void) {
    ALOGD("vsv_ns_init() called");
    return 0;
}

/* Demangled: dolby::AudioHalUtils::updateProfile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13AudioHalUtils13updateProfileEi(void) {
    ALOGD("_ZN5dolby13AudioHalUtils13updateProfileEi() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_80 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_80(void) {
    ALOGD("dlb_fft_fwd_usc_80() called");
    return 0;
}

/* Exported Object: a_shift_table_CQMF_320x320x49_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_CQMF_320x320x49_32000_tab = NULL;

/* Demangled: dolby::EffectContext::setVolume(int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext9setVolumeEiPKj(void) {
    ALOGD("_ZN5dolby13EffectContext9setVolumeEiPKj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L256 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L256 = NULL;

/* Demangled: DLB_r4_fft_480_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_480_s(void) {
    ALOGD("DLB_r4_fft_480_s() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L640 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L640 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L192 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L192 = NULL;

/* Demangled: dlb_fft_inv_usc_72 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_72(void) {
    ALOGD("dlb_fft_inv_usc_72() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_close */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_close(void) {
    ALOGD("DLB_hybrid_analysisCL_close() called");
    return 0;
}

/* Demangled: dlb_octfile_tell */
extern "C" __attribute__((visibility("default"))) int dlb_octfile_tell(void) {
    ALOGD("dlb_octfile_tell() called");
    return 0;
}

/* Demangled: vqe_get_asa_num_inputs */
extern "C" __attribute__((visibility("default"))) int vqe_get_asa_num_inputs(void) {
    ALOGD("vqe_get_asa_num_inputs() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L60_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L60_1 = NULL;

/* Demangled: DLB_qmf_synthesisS_close */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_close(void) {
    ALOGD("DLB_qmf_synthesisS_close() called");
    return 0;
}

/* Demangled: dolby::EffectContext::connectDolbyService(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext19connectDolbyServiceEN7android2spIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEi(void) {
    ALOGD("_ZN5dolby13EffectContext19connectDolbyServiceEN7android2spIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEi() called");
    return 0;
}

/* Demangled: dlb_vec_LmaskLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LmaskLSU_flex(void) {
    ALOGD("dlb_vec_LmaskLSU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L60_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L60_2 = NULL;

/* Demangled: DLB_r4_fft_60_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_60_s(void) {
    ALOGD("DLB_r4_fft_60_s() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_960_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_960_s(void) {
    ALOGD("DLB_r4_inv_fft_960_s() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisL_init */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_init(void) {
    ALOGD("DLB_qmf_synthesisL_init() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_8 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_8 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L24_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L24_cos = NULL;

/* Demangled: dolby::DlbCrossfadeProcess::DlbCrossfadeProcess(dolby::IDlbProcess*, dolby::SampleCounter, dolby::SampleCounter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19DlbCrossfadeProcessC2EPNS_11IDlbProcessENS_13SampleCounterES3_(void) {
    ALOGD("_ZN5dolby19DlbCrossfadeProcessC2EPNS_11IDlbProcessENS_13SampleCounterES3_() called");
    return 0;
}

/* Exported Object: a_twist_table_MDCT_160x160x41_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDCT_160x160x41_16000_tab = NULL;

/* Demangled: DLB_vec_Labs_maxLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_Labs_maxLU_strict(void) {
    ALOGD("DLB_vec_Labs_maxLU_strict() called");
    return 0;
}

/* Demangled: DLB_CLmacCLCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmacCLCLU_strict(void) {
    ALOGD("DLB_CLmacCLCLU_strict() called");
    return 0;
}

/* Demangled: dlb_CLmpy_recipCLLIU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpy_recipCLLIU_flex(void) {
    ALOGD("dlb_CLmpy_recipCLLIU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_192 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_192(void) {
    ALOGD("dlb_fft_inv_scl_192() called");
    return 0;
}

/* Demangled: DLB_Lqmf_synthesisL */
extern "C" __attribute__((visibility("default"))) int DLB_Lqmf_synthesisL(void) {
    ALOGD("DLB_Lqmf_synthesisL() called");
    return 0;
}

/* Exported Object: dlb_cos_48_full_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_48_full_scl = NULL;

/* Demangled: dolby::BufferProvider::configure(audio_format_t, audio_channel_mask_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProvider9configureE14audio_format_t20audio_channel_mask_t(void) {
    ALOGD("_ZN5dolby14BufferProvider9configureE14audio_format_t20audio_channel_mask_t() called");
    return 0;
}

/* Demangled: dolby::DlbCrossfadeProcess::~DlbCrossfadeProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19DlbCrossfadeProcessD2Ev(void) {
    ALOGD("_ZN5dolby19DlbCrossfadeProcessD2Ev() called");
    return 0;
}

/* Demangled: vsv_asa_close */
extern "C" __attribute__((visibility("default"))) int vsv_asa_close(void) {
    ALOGD("vsv_asa_close() called");
    return 0;
}

/* Demangled: DLB_VLsquaredmagCLIU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_VLsquaredmagCLIU_strict(void) {
    ALOGD("DLB_VLsquaredmagCLIU_strict() called");
    return 0;
}

/* Demangled: DLB_CLmpyCLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpyCLSU_strict(void) {
    ALOGD("DLB_CLmpyCLSU_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_2 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_2(void) {
    ALOGD("DLB_r4_fft_2() called");
    return 0;
}

/* Exported Object: dlb_cos_64_full */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_64_full = NULL;

/* Exported Object: a_shift_table_MDFT_080x080x33_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDFT_080x080x33_08000_tab = NULL;

/* Demangled: vqe_close */
extern "C" __attribute__((visibility("default"))) int vqe_close(void) {
    ALOGD("vqe_close() called");
    return 0;
}

/* Demangled: dolby::EffectContext::setAudioMode(audio_mode_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext12setAudioModeE12audio_mode_t(void) {
    ALOGD("_ZN5dolby13EffectContext12setAudioModeE12audio_mode_t() called");
    return 0;
}

/* Demangled: dolby::EffectContext::serviceDeathHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext18serviceDeathHandleEv(void) {
    ALOGD("_ZN5dolby13EffectContext18serviceDeathHandleEv() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L360 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L360 = NULL;

/* Demangled: DLB_r4_fft_960 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_960(void) {
    ALOGD("DLB_r4_fft_960() called");
    return 0;
}

/* Demangled: DLB_r4_fft_4 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_4(void) {
    ALOGD("DLB_r4_fft_4() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L120 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L120 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L24 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L24 = NULL;

/* Demangled: DLB_r4_inv_fft_192_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_192_s(void) {
    ALOGD("DLB_r4_inv_fft_192_s() called");
    return 0;
}

/* Demangled: vsv_ml_get_outputs */
extern "C" __attribute__((visibility("default"))) int vsv_ml_get_outputs(void) {
    ALOGD("vsv_ml_get_outputs() called");
    return 0;
}

/* Demangled: DLB_blk_delay_clear_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_delay_clear_strict(void) {
    ALOGD("DLB_blk_delay_clear_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_6 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_6(void) {
    ALOGD("DLB_r4_fft_6() called");
    return 0;
}

/* Demangled: DLB_r4_fft_60 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_60(void) {
    ALOGD("DLB_r4_fft_60() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_288 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_288(void) {
    ALOGD("dlb_fft_fwd_scl_288() called");
    return 0;
}

/* Demangled: utlog_read */
extern "C" __attribute__((visibility("default"))) int utlog_read(void) {
    ALOGD("utlog_read() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_80 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_80(void) {
    ALOGD("dlb_fft_fwd_scl_80() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisL_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_get_delay(void) {
    ALOGD("DLB_qmf_analysisL_get_delay() called");
    return 0;
}

/* Exported Object: a_shift_table_CQMF_480x480x54_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_CQMF_480x480x54_48000_tab = NULL;

/* Demangled: vqe_get_ml_level_decision */
extern "C" __attribute__((visibility("default"))) int vqe_get_ml_level_decision(void) {
    ALOGD("vqe_get_ml_level_decision() called");
    return 0;
}

/* Demangled: dlb_CLrecipCLUU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLrecipCLUU_flex(void) {
    ALOGD("dlb_CLrecipCLUU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_40_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_40_s(void) {
    ALOGD("DLB_r4_inv_fft_40_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_8 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_8(void) {
    ALOGD("DLB_r4_fft_8() called");
    return 0;
}

/* Demangled: dlb_riff_chunk_status */
extern "C" __attribute__((visibility("default"))) int dlb_riff_chunk_status(void) {
    ALOGD("dlb_riff_chunk_status() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_72 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_72(void) {
    ALOGD("dlb_fft_inv_scl_72() called");
    return 0;
}

/* Exported Object: vsv_banding_num_def */
extern "C" __attribute__((visibility("default"))) void* vsv_banding_num_def = NULL;

/* Demangled: DLB_r4_inv_fft_384 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_384(void) {
    ALOGD("DLB_r4_inv_fft_384() called");
    return 0;
}

/* Demangled: DLB_r4_fft_64 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_64(void) {
    ALOGD("DLB_r4_fft_64() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_288 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_288(void) {
    ALOGD("dlb_fft_inv_usc_288() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv2L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv2L_strict(void) {
    ALOGD("DLB_blk_Liir2ssv2L_strict() called");
    return 0;
}

/* Exported Object: a_shift_table_MDXT_640x640x56_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDXT_640x640x56_32000_tab = NULL;

/* Exported Object: a_twist_table_MDXT_160x160x41_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDXT_160x160x41_16000_tab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L128 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L128 = NULL;

/* Demangled: dolby::BufferProvider::~BufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProviderD2Ev(void) {
    ALOGD("_ZN5dolby14BufferProviderD2Ev() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L512 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L512 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L192 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L192 = NULL;

/* Demangled: vsv_asa_num_obj */
extern "C" __attribute__((visibility("default"))) int vsv_asa_num_obj(void) {
    ALOGD("vsv_asa_num_obj() called");
    return 0;
}

/* Demangled: dolby::EffectContext::~EffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContextD0Ev(void) {
    ALOGD("_ZN5dolby13EffectContextD0Ev() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L1024 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L1024 = NULL;

/* Demangled: vsv_ne_get_outputs */
extern "C" __attribute__((visibility("default"))) int vsv_ne_get_outputs(void) {
    ALOGD("vsv_ne_get_outputs() called");
    return 0;
}

/* Demangled: vsv_ne_init */
extern "C" __attribute__((visibility("default"))) int vsv_ne_init(void) {
    ALOGD("vsv_ne_init() called");
    return 0;
}

/* Exported Object: a_vsv_ne_defs_tab */
extern "C" __attribute__((visibility("default"))) void* a_vsv_ne_defs_tab = NULL;

/* Demangled: vqe_get_asa_curr_level */
extern "C" __attribute__((visibility("default"))) int vqe_get_asa_curr_level(void) {
    ALOGD("vqe_get_asa_curr_level() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1_shlLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1_shlLU_strict(void) {
    ALOGD("DLB_blk_Liir1_shlLU_strict() called");
    return 0;
}

/* Demangled: dlb_riff_chunk_id_matches */
extern "C" __attribute__((visibility("default"))) int dlb_riff_chunk_id_matches(void) {
    ALOGD("dlb_riff_chunk_id_matches() called");
    return 0;
}

/* Demangled: dlb_wave_write_data */
extern "C" __attribute__((visibility("default"))) int dlb_wave_write_data(void) {
    ALOGD("dlb_wave_write_data() called");
    return 0;
}

/* Exported Object: a_shift_table_MDCT_480x480x54_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDCT_480x480x54_48000_tab = NULL;

/* Demangled: vsv_tx_process */
extern "C" __attribute__((visibility("default"))) int vsv_tx_process(void) {
    ALOGD("vsv_tx_process() called");
    return 0;
}

/* Demangled: dlb_vec_LmpyLSU_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LmpyLSU_inplace_flex(void) {
    ALOGD("dlb_vec_LmpyLSU_inplace_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_240 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_240(void) {
    ALOGD("dlb_fft_fwd_usc_240() called");
    return 0;
}

/* Demangled: vqe_init */
extern "C" __attribute__((visibility("default"))) int vqe_init(void) {
    ALOGD("vqe_init() called");
    return 0;
}

/* Demangled: dlb_blk_Lmpy_shlLLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmpy_shlLLU_flex(void) {
    ALOGD("dlb_blk_Lmpy_shlLLU_flex() called");
    return 0;
}

/* Demangled: DLB_cvec_Lmpy_conjLLIU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_cvec_Lmpy_conjLLIU_strict(void) {
    ALOGD("DLB_cvec_Lmpy_conjLLIU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L72_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L72_1 = NULL;

/* Demangled: DLB_r4_fft_1024 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_1024(void) {
    ALOGD("DLB_r4_fft_1024() called");
    return 0;
}

/* Exported Object: VTT for dolby::EffectContext::DmsDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5dolby13EffectContext17DmsDeathRecipientE = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L30 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L30 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L72_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L72_2 = NULL;

/* Demangled: DLB_r4_fft_72_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_72_s(void) {
    ALOGD("DLB_r4_fft_72_s() called");
    return 0;
}

/* Demangled: vqe_get_mute_state */
extern "C" __attribute__((visibility("default"))) int vqe_get_mute_state(void) {
    ALOGD("vqe_get_mute_state() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssL_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssL_setup(void) {
    ALOGD("DLB_blk_Liir2ssL_setup() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L32 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L32 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L480 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L480 = NULL;

/* Demangled: DLB_r4_fft_120_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_120_s(void) {
    ALOGD("DLB_r4_fft_120_s() called");
    return 0;
}

/* Demangled: DLB_load_CLqmf_analysisL_filter_stateL */
extern "C" __attribute__((visibility("default"))) int DLB_load_CLqmf_analysisL_filter_stateL(void) {
    ALOGD("DLB_load_CLqmf_analysisL_filter_stateL() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisL_set_slot_increment */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_set_slot_increment(void) {
    ALOGD("DLB_qmf_analysisL_set_slot_increment() called");
    return 0;
}

/* Demangled: dlb_wave_float_read */
extern "C" __attribute__((visibility("default"))) int dlb_wave_float_read(void) {
    ALOGD("dlb_wave_float_read() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L768 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L768 = NULL;

/* Exported Object: dlb_qmf_filter_coeff_P5_32 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_32 = NULL;

/* Demangled: vsv_asa_obj_voice_count */
extern "C" __attribute__((visibility("default"))) int vsv_asa_obj_voice_count(void) {
    ALOGD("vsv_asa_obj_voice_count() called");
    return 0;
}

/* Demangled: stats_process */
extern "C" __attribute__((visibility("default"))) int stats_process(void) {
    ALOGD("stats_process() called");
    return 0;
}

/* Demangled: vqe_get_default_transform_type */
extern "C" __attribute__((visibility("default"))) int vqe_get_default_transform_type(void) {
    ALOGD("vqe_get_default_transform_type() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv1_dsmpL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv1_dsmpL_flex(void) {
    ALOGD("dlb_blk_Liir2ssv1_dsmpL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L72 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L72 = NULL;

/* Demangled: dlb_fft_inv_scl_480 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_480(void) {
    ALOGD("dlb_fft_inv_scl_480() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_query_mem(void) {
    ALOGD("DLB_hybrid_analysisCL_query_mem() called");
    return 0;
}

/* Exported Object: a_vlib_transform_definitions_tab */
extern "C" __attribute__((visibility("default"))) void* a_vlib_transform_definitions_tab = NULL;

/* Demangled: dolby::DapEffectContext::~DapEffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContextD2Ev(void) {
    ALOGD("_ZN5dolby16DapEffectContextD2Ev() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L36 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L36 = NULL;

/* Demangled: DLB_r4_inv_fft_72 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_72(void) {
    ALOGD("DLB_r4_inv_fft_72() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_768 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_768(void) {
    ALOGD("dlb_fft_inv_scl_768() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_32_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_32_vec_syn = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L960_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L960_cos = NULL;

/* Demangled: vsv_gain_scalar_gain_complex_data */
extern "C" __attribute__((visibility("default"))) int vsv_gain_scalar_gain_complex_data(void) {
    ALOGD("vsv_gain_scalar_gain_complex_data() called");
    return 0;
}

/* Demangled: dolby::DlbCrossfadeProcess::accumulate(float*, float*, float*, int, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19DlbCrossfadeProcess10accumulateEPfS1_S1_iff(void) {
    ALOGD("_ZN5dolby19DlbCrossfadeProcess10accumulateEPfS1_S1_iff() called");
    return 0;
}

/* Exported Object: a_shift_table_MDFT_640x640x56_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDFT_640x640x56_32000_tab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_1_L960 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L960 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L256_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L256_1 = NULL;

/* Demangled: DLB_r4_inv_fft_256 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_256(void) {
    ALOGD("DLB_r4_inv_fft_256() called");
    return 0;
}

/* Exported Object: a_twist_table_MDFT_160x160x41_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDFT_160x160x41_16000_tab = NULL;

/* Exported Object: dlb_clclmix5cl10csu_c */
extern "C" __attribute__((visibility("default"))) void* dlb_clclmix5cl10csu_c = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L256_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L256_2 = NULL;

/* Demangled: DLB_r4_inv_fft_320_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_320_s(void) {
    ALOGD("DLB_r4_inv_fft_320_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_90 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_90(void) {
    ALOGD("dlb_fft_fwd_usc_90() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_80 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_80(void) {
    ALOGD("dlb_fft_inv_usc_80() called");
    return 0;
}

/* Demangled: DLB_time_add */
extern "C" __attribute__((visibility("default"))) int DLB_time_add(void) {
    ALOGD("DLB_time_add() called");
    return 0;
}

/* Demangled: DLB_BLsaddBLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLsaddBLL_strict(void) {
    ALOGD("DLB_BLsaddBLL_strict() called");
    return 0;
}

/* Exported Object: a_shift_table_MDXT_480x480x54_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDXT_480x480x54_48000_tab = NULL;

/* Demangled: dolby::GameEffectContext::~GameEffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17GameEffectContextD1Ev(void) {
    ALOGD("_ZN5dolby17GameEffectContextD1Ev() called");
    return 0;
}

/* Demangled: DLB_blk_Lconst_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lconst_strict(void) {
    ALOGD("DLB_blk_Lconst_strict() called");
    return 0;
}

/* Demangled: DLB_r4_fft_576_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_576_s(void) {
    ALOGD("DLB_r4_fft_576_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_576 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_576(void) {
    ALOGD("dlb_fft_fwd_scl_576() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L360_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L360_cos = NULL;

/* Demangled: dlb_fft_fwd_scl_2 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_2(void) {
    ALOGD("dlb_fft_fwd_scl_2() called");
    return 0;
}

/* Demangled: dlb_vec_LshlLIU_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LshlLIU_inplace_flex(void) {
    ALOGD("dlb_vec_LshlLIU_inplace_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_720 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_720(void) {
    ALOGD("dlb_fft_fwd_scl_720() called");
    return 0;
}

/* Exported Object: dlb_non_power_two_lengths */
extern "C" __attribute__((visibility("default"))) void* dlb_non_power_two_lengths = NULL;

/* Exported Object: a_shift_table_MDFT_320x320x49_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDFT_320x320x49_32000_tab = NULL;

/* Demangled: vsv_reg_cleanup */
extern "C" __attribute__((visibility("default"))) int vsv_reg_cleanup(void) {
    ALOGD("vsv_reg_cleanup() called");
    return 0;
}

/* Demangled: DLB_CLcopyCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLcopyCLU_strict(void) {
    ALOGD("DLB_CLcopyCLU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_4 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_4(void) {
    ALOGD("dlb_fft_fwd_scl_4() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L30 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L30 = NULL;

/* Demangled: DLB_r4_inv_fft_1024_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_1024_s(void) {
    ALOGD("DLB_r4_inv_fft_1024_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_96 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_96(void) {
    ALOGD("dlb_fft_fwd_usc_96() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_576 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_576(void) {
    ALOGD("dlb_fft_inv_usc_576() called");
    return 0;
}

/* Demangled: dlb_riff_read_chunk_data */
extern "C" __attribute__((visibility("default"))) int dlb_riff_read_chunk_data(void) {
    ALOGD("dlb_riff_read_chunk_data() called");
    return 0;
}

/* Exported Object: a_vsv_banding_definitions_tab */
extern "C" __attribute__((visibility("default"))) void* a_vsv_banding_definitions_tab = NULL;

/* Demangled: dlb_blk_LLshuffleLL_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LLshuffleLL_inplace_flex(void) {
    ALOGD("dlb_blk_LLshuffleLL_inplace_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_6 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_6(void) {
    ALOGD("dlb_fft_fwd_scl_6() called");
    return 0;
}

/* Demangled: DLB_BLmpy_scaleBLSU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmpy_scaleBLSU_inplace_strict(void) {
    ALOGD("DLB_BLmpy_scaleBLSU_inplace_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L60 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L60 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L32 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L32 = NULL;

/* Demangled: DLB_r4_inv_fft_120 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_120(void) {
    ALOGD("DLB_r4_inv_fft_120() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_720 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_720(void) {
    ALOGD("dlb_fft_inv_usc_720() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L320_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L320_cos = NULL;

/* Demangled: dolby::DlbCrossfadeProcess::getParam(int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19DlbCrossfadeProcess8getParamEiPiS1_(void) {
    ALOGD("_ZN5dolby19DlbCrossfadeProcess8getParamEiPiS1_() called");
    return 0;
}

/* Demangled: vstack_open */
extern "C" __attribute__((visibility("default"))) int vstack_open(void) {
    ALOGD("vstack_open() called");
    return 0;
}

/* Demangled: dlb_wave_get_version */
extern "C" __attribute__((visibility("default"))) int dlb_wave_get_version(void) {
    ALOGD("dlb_wave_get_version() called");
    return 0;
}

/* Demangled: DLB_CLCLmix4CL8SU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLCLmix4CL8SU_strict(void) {
    ALOGD("DLB_CLCLmix4CL8SU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_8 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_8(void) {
    ALOGD("dlb_fft_fwd_scl_8() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::setDevice(audio_devices_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext9setDeviceE15audio_devices_t(void) {
    ALOGD("_ZN5dolby16DapEffectContext9setDeviceE15audio_devices_t() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L480 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L480 = NULL;

/* Demangled: DLB_blk_LcmpLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LcmpLL_strict(void) {
    ALOGD("DLB_blk_LcmpLL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L768 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L768 = NULL;

/* Demangled: DLB_r4_inv_fft_288_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_288_s(void) {
    ALOGD("DLB_r4_inv_fft_288_s() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_2048 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_2048(void) {
    ALOGD("DLB_r4_inv_fft_2048() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_384 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_384(void) {
    ALOGD("dlb_fft_fwd_usc_384() called");
    return 0;
}

/* Demangled: vqe_set_pregain */
extern "C" __attribute__((visibility("default"))) int vqe_set_pregain(void) {
    ALOGD("vqe_set_pregain() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L64 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L64 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L36 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L36 = NULL;

/* Demangled: dlb_fft_fwd_scl_90 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_90(void) {
    ALOGD("dlb_fft_fwd_scl_90() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_80 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_80(void) {
    ALOGD("dlb_fft_inv_scl_80() called");
    return 0;
}

/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_RESET(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect23handle_EFFECT_CMD_RESETERNS_13EffectContextERNS_12ParserBufferES4_(void) {
    ALOGD("_ZN5dolby9DlbEffect23handle_EFFECT_CMD_RESETERNS_13EffectContextERNS_12ParserBufferES4_() called");
    return 0;
}

/* Demangled: DLB_r4_fft_72 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_72(void) {
    ALOGD("DLB_r4_fft_72() called");
    return 0;
}

/* Exported Object: dlb_odd_fft_cplx_inv_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_odd_fft_cplx_inv_scl = NULL;

/* Demangled: DLB_blk_Lfir3L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir3L_strict(void) {
    ALOGD("DLB_blk_Lfir3L_strict() called");
    return 0;
}

/* Demangled: _dlb_ldct3_scaled_iplu */
extern "C" __attribute__((visibility("default"))) int _dlb_ldct3_scaled_iplu(void) {
    ALOGD("_dlb_ldct3_scaled_iplu() called");
    return 0;
}

/* Demangled: DLB_Sqmf_synthesisCL */
extern "C" __attribute__((visibility("default"))) int DLB_Sqmf_synthesisCL(void) {
    ALOGD("DLB_Sqmf_synthesisCL() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_4_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_4_s(void) {
    ALOGD("DLB_r4_inv_fft_4_s() called");
    return 0;
}

/* Demangled: DLB_CLmfb_p10km_analysisL */
extern "C" __attribute__((visibility("default"))) int DLB_CLmfb_p10km_analysisL(void) {
    ALOGD("DLB_CLmfb_p10km_analysisL() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_init */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_init(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_init() called");
    return 0;
}

/* Exported Object: dlb_hyb_p8_13 */
extern "C" __attribute__((visibility("default"))) void* dlb_hyb_p8_13 = NULL;

/* Demangled: DLB_qmf_analysisL_close */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_close(void) {
    ALOGD("DLB_qmf_analysisL_close() called");
    return 0;
}

/* Demangled: utlog_add_variables_from_info_file */
extern "C" __attribute__((visibility("default"))) int utlog_add_variables_from_info_file(void) {
    ALOGD("utlog_add_variables_from_info_file() called");
    return 0;
}

/* Demangled: dlb_CLmacCLCLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmacCLCLU_flex(void) {
    ALOGD("dlb_CLmacCLCLU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_128 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_128(void) {
    ALOGD("DLB_r4_inv_fft_128() called");
    return 0;
}

/* Demangled: DLB_CLmfb_p10km_analysisL_init */
extern "C" __attribute__((visibility("default"))) int DLB_CLmfb_p10km_analysisL_init(void) {
    ALOGD("DLB_CLmfb_p10km_analysisL_init() called");
    return 0;
}

/* Demangled: dolby::EffectVqe::setBypass(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9EffectVqe9setBypassEb(void) {
    ALOGD("_ZN5dolby9EffectVqe9setBypassEb() called");
    return 0;
}

/* Demangled: dolby::VqeProcess::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10VqeProcess4initEv(void) {
    ALOGD("_ZN5dolby10VqeProcess4initEv() called");
    return 0;
}

/* Demangled: datalog_read */
extern "C" __attribute__((visibility("default"))) int datalog_read(void) {
    ALOGD("datalog_read() called");
    return 0;
}

/* Exported Object: a_shift_table_MDFT_480x480x54_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDFT_480x480x54_48000_tab = NULL;

/* Demangled: vsv_agc_get_outputs */
extern "C" __attribute__((visibility("default"))) int vsv_agc_get_outputs(void) {
    ALOGD("vsv_agc_get_outputs() called");
    return 0;
}

/* Demangled: dolby::VoiceEffectContext::getVersion(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18VoiceEffectContext10getVersionEPiS1_(void) {
    ALOGD("_ZN5dolby18VoiceEffectContext10getVersionEPiS1_() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1L_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1L_strict(void) {
    ALOGD("DLB_blk_Liir1L_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_90_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_90_s(void) {
    ALOGD("DLB_r4_inv_fft_90_s() called");
    return 0;
}

/* Demangled: vlib_transform_get_output_window */
extern "C" __attribute__((visibility("default"))) int vlib_transform_get_output_window(void) {
    ALOGD("vlib_transform_get_output_window() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_160 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_160(void) {
    ALOGD("dlb_fft_fwd_scl_160() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_96 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_96(void) {
    ALOGD("dlb_fft_fwd_scl_96() called");
    return 0;
}

/* Exported Object: dlb_cos_32_full_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_32_full_scl = NULL;

/* Demangled: dolby::DlbBufferAdapter::process(dolby::BufferProvider*, dolby::BufferProvider*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DlbBufferAdapter7processEPNS_14BufferProviderES2_(void) {
    ALOGD("_ZN5dolby16DlbBufferAdapter7processEPNS_14BufferProviderES2_() called");
    return 0;
}

/* Demangled: dlb_blk_LcmpLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LcmpLL_flex(void) {
    ALOGD("dlb_blk_LcmpLL_flex() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_64_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_64_s(void) {
    ALOGD("DLB_r4_inv_fft_64_s() called");
    return 0;
}

/* Demangled: vsv_ne_close */
extern "C" __attribute__((visibility("default"))) int vsv_ne_close(void) {
    ALOGD("vsv_ne_close() called");
    return 0;
}

/* Demangled: DLB_fft_CLinv_scaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLinv_scaledCL(void) {
    ALOGD("DLB_fft_CLinv_scaledCL() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P4_32_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4_32_vec_ana = NULL;

/* Demangled: synthesis */
extern "C" __attribute__((visibility("default"))) int synthesis(void) {
    ALOGD("synthesis() called");
    return 0;
}

/* Demangled: DLB_blk_Liir1_shl_addLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1_shl_addLL_strict(void) {
    ALOGD("DLB_blk_Liir1_shl_addLL_strict() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_160 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_160(void) {
    ALOGD("dlb_fft_inv_usc_160() called");
    return 0;
}

/* Demangled: dolby::UdcAudioBufferProvider::set(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby22UdcAudioBufferProvider3setEPvi(void) {
    ALOGD("_ZN5dolby22UdcAudioBufferProvider3setEPvi() called");
    return 0;
}

/* Demangled: dolby::VqeCrossfadeProcess::~VqeCrossfadeProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19VqeCrossfadeProcessD1Ev(void) {
    ALOGD("_ZN5dolby19VqeCrossfadeProcessD1Ev() called");
    return 0;
}

/* Demangled: dlb_blk_LmixLLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmixLLL_flex(void) {
    ALOGD("dlb_blk_LmixLLL_flex() called");
    return 0;
}

/* Demangled: dlb_cvec_Lmpy_conjLLIU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_cvec_Lmpy_conjLLIU_flex(void) {
    ALOGD("dlb_cvec_Lmpy_conjLLIU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L8_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L8_1 = NULL;

/* Exported Object: dlb_cos_8_ast_mini_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_8_ast_mini_twiddle = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L240 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L240 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L8_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L8_2 = NULL;

/* Demangled: DLB_r4_fft_144 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_144(void) {
    ALOGD("DLB_r4_fft_144() called");
    return 0;
}

/* Demangled: vsv_har_cleanup */
extern "C" __attribute__((visibility("default"))) int vsv_har_cleanup(void) {
    ALOGD("vsv_har_cleanup() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_vec_ana = NULL;

/* Demangled: dolby::DlbBufferProvider::~DlbBufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17DlbBufferProviderD2Ev(void) {
    ALOGD("_ZN5dolby17DlbBufferProviderD2Ev() called");
    return 0;
}

/* Demangled: dlb_wave_get_num_frames */
extern "C" __attribute__((visibility("default"))) int dlb_wave_get_num_frames(void) {
    ALOGD("dlb_wave_get_num_frames() called");
    return 0;
}

/* Demangled: dlb_blk_Liir1_shlLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir1_shlLU_flex(void) {
    ALOGD("dlb_blk_Liir1_shlLU_flex() called");
    return 0;
}

/* Demangled: dolby::DlbBufferAdapter::DlbBufferAdapter(dolby::IDlbProcess*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DlbBufferAdapterC2EPNS_11IDlbProcessE(void) {
    ALOGD("_ZN5dolby16DlbBufferAdapterC2EPNS_11IDlbProcessE() called");
    return 0;
}

/* Demangled: vsv_asa_obj_age */
extern "C" __attribute__((visibility("default"))) int vsv_asa_obj_age(void) {
    ALOGD("vsv_asa_obj_age() called");
    return 0;
}

/* Demangled: vsv_asa_open */
extern "C" __attribute__((visibility("default"))) int vsv_asa_open(void) {
    ALOGD("vsv_asa_open() called");
    return 0;
}

/* Demangled: vsv_asa_prob_inst_obj */
extern "C" __attribute__((visibility("default"))) int vsv_asa_prob_inst_obj(void) {
    ALOGD("vsv_asa_prob_inst_obj() called");
    return 0;
}

/* Demangled: vsv_ml_init */
extern "C" __attribute__((visibility("default"))) int vsv_ml_init(void) {
    ALOGD("vsv_ml_init() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P4_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4_vec_syn = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L1024_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L1024_cos = NULL;

/* Demangled: dolby::VqeProcess::open() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10VqeProcess4openEv(void) {
    ALOGD("_ZN5dolby10VqeProcess4openEv() called");
    return 0;
}

/* Demangled: vsv_reg_process */
extern "C" __attribute__((visibility("default"))) int vsv_reg_process(void) {
    ALOGD("vsv_reg_process() called");
    return 0;
}

/* Demangled: dolby::EffectContext::setParam(int, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext8setParamEijPv(void) {
    ALOGD("_ZN5dolby13EffectContext8setParamEijPv() called");
    return 0;
}

/* Demangled: DLB_BLmpyBLS_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_BLmpyBLS_inplace_strict(void) {
    ALOGD("DLB_BLmpyBLS_inplace_strict() called");
    return 0;
}

/* Demangled: dlb_blk_Lmix_shlUL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmix_shlUL_flex(void) {
    ALOGD("dlb_blk_Lmix_shlUL_flex() called");
    return 0;
}

/* Demangled: DLB_CLmpyCLCSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpyCLCSU_strict(void) {
    ALOGD("DLB_CLmpyCLCSU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L30_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L30_1 = NULL;

/* Demangled: DLB_r4_inv_fft_80 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_80(void) {
    ALOGD("DLB_r4_inv_fft_80() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_256 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_256(void) {
    ALOGD("dlb_fft_fwd_usc_256() called");
    return 0;
}

/* Demangled: vsv_flux_close */
extern "C" __attribute__((visibility("default"))) int vsv_flux_close(void) {
    ALOGD("vsv_flux_close() called");
    return 0;
}

/* Demangled: dlb_blk_LminLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LminLL_flex(void) {
    ALOGD("dlb_blk_LminLL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L45 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L45 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L30_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L30_2 = NULL;

/* Demangled: DLB_r4_fft_30_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_30_s(void) {
    ALOGD("DLB_r4_fft_30_s() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L576_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L576_cos = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L96_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L96_1 = NULL;

/* Demangled: DLB_r4_inv_fft_960 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_960(void) {
    ALOGD("DLB_r4_inv_fft_960() called");
    return 0;
}

/* Demangled: vqe_api_set_pregain */
extern "C" __attribute__((visibility("default"))) int vqe_api_set_pregain(void) {
    ALOGD("vqe_api_set_pregain() called");
    return 0;
}

/* Demangled: dolby::VoiceEffectContext::getVqeParameter(int, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18VoiceEffectContext15getVqeParameterEiPvPj(void) {
    ALOGD("_ZN5dolby18VoiceEffectContext15getVqeParameterEiPvPj() called");
    return 0;
}

/* Demangled: dolby::EffectContext::offload(bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext7offloadEbi(void) {
    ALOGD("_ZN5dolby13EffectContext7offloadEbi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L96_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L96_2 = NULL;

/* Demangled: DLB_r4_fft_96_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_96_s(void) {
    ALOGD("DLB_r4_fft_96_s() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L48 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L48 = NULL;

/* Demangled: dolby::DlbCrossfadeProcess::crossfade(dolby::BufferProvider*, dolby::BufferProvider*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19DlbCrossfadeProcess9crossfadeEPNS_14BufferProviderES2_b(void) {
    ALOGD("_ZN5dolby19DlbCrossfadeProcess9crossfadeEPNS_14BufferProviderES2_b() called");
    return 0;
}

/* Demangled: DLB_r4_fft_144_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_144_s(void) {
    ALOGD("DLB_r4_fft_144_s() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_90 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_90(void) {
    ALOGD("dlb_fft_inv_usc_90() called");
    return 0;
}

/* Demangled: dlb_inverseModulationReal */
extern "C" __attribute__((visibility("default"))) int dlb_inverseModulationReal(void) {
    ALOGD("dlb_inverseModulationReal() called");
    return 0;
}

/* Demangled: DLB_vec_NdotLLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_NdotLLU_strict(void) {
    ALOGD("DLB_vec_NdotLLU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L240_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L240_1 = NULL;

/* Demangled: vsv_mixer_ctrl_init */
extern "C" __attribute__((visibility("default"))) int vsv_mixer_ctrl_init(void) {
    ALOGD("vsv_mixer_ctrl_init() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L240_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L240_2 = NULL;

/* Demangled: dlb_blk_LabsL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LabsL_flex(void) {
    ALOGD("dlb_blk_LabsL_flex() called");
    return 0;
}

/* Demangled: DLB_blk_LintegrateL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LintegrateL_strict(void) {
    ALOGD("DLB_blk_LintegrateL_strict() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_48_vec_syn = NULL;

/* Demangled: dolby::EffectVqe::getParam(audio_devices_t, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9EffectVqe8getParamE15audio_devices_tiPiS2_(void) {
    ALOGD("_ZN5dolby9EffectVqe8getParamE15audio_devices_tiPiS2_() called");
    return 0;
}

/* Demangled: dolby::VqeBufferAdapter::~VqeBufferAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16VqeBufferAdapterD1Ev(void) {
    ALOGD("_ZN5dolby16VqeBufferAdapterD1Ev() called");
    return 0;
}

/* Demangled: vsv_banding_covariance */
extern "C" __attribute__((visibility("default"))) int vsv_banding_covariance(void) {
    ALOGD("vsv_banding_covariance() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext4initEv(void) {
    ALOGD("_ZN5dolby16DapEffectContext4initEv() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L768_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L768_1 = NULL;

/* Demangled: dlb_fft_fwd_usc_120 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_120(void) {
    ALOGD("dlb_fft_fwd_usc_120() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_640 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_640(void) {
    ALOGD("dlb_fft_inv_scl_640() called");
    return 0;
}

/* Demangled: dlb_dct4_postmodulation_shl0 */
extern "C" __attribute__((visibility("default"))) int dlb_dct4_postmodulation_shl0(void) {
    ALOGD("dlb_dct4_postmodulation_shl0() called");
    return 0;
}

/* Demangled: dolby::EffectVqe::EffectVqe(dolby::IDlbProcess*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9EffectVqeC2EPNS_11IDlbProcessE(void) {
    ALOGD("_ZN5dolby9EffectVqeC2EPNS_11IDlbProcessE() called");
    return 0;
}

/* Demangled: vsv_asa_cleanup */
extern "C" __attribute__((visibility("default"))) int vsv_asa_cleanup(void) {
    ALOGD("vsv_asa_cleanup() called");
    return 0;
}

/* Demangled: vsv_ne_cleanup */
extern "C" __attribute__((visibility("default"))) int vsv_ne_cleanup(void) {
    ALOGD("vsv_ne_cleanup() called");
    return 0;
}

/* Demangled: vsv_ns_cleanup */
extern "C" __attribute__((visibility("default"))) int vsv_ns_cleanup(void) {
    ALOGD("vsv_ns_cleanup() called");
    return 0;
}

/* Demangled: vsv_reg_close */
extern "C" __attribute__((visibility("default"))) int vsv_reg_close(void) {
    ALOGD("vsv_reg_close() called");
    return 0;
}

/* Demangled: vqe_cleanup */
extern "C" __attribute__((visibility("default"))) int vqe_cleanup(void) {
    ALOGD("vqe_cleanup() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L768_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L768_2 = NULL;

/* Demangled: dlb_dct4_postmodulation_shl1 */
extern "C" __attribute__((visibility("default"))) int dlb_dct4_postmodulation_shl1(void) {
    ALOGD("dlb_dct4_postmodulation_shl1() called");
    return 0;
}

/* Demangled: vsv_asa_max_num_obj */
extern "C" __attribute__((visibility("default"))) int vsv_asa_max_num_obj(void) {
    ALOGD("vsv_asa_max_num_obj() called");
    return 0;
}

/* Demangled: vsv_reg_open */
extern "C" __attribute__((visibility("default"))) int vsv_reg_open(void) {
    ALOGD("vsv_reg_open() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::setPregain(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext10setPregainEPvj(void) {
    ALOGD("_ZN5dolby16DapEffectContext10setPregainEPvj() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_96 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_96(void) {
    ALOGD("dlb_fft_inv_usc_96() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_8_vec_syn = NULL;

/* Demangled: dlb_dct4_postmodulation_shl2 */
extern "C" __attribute__((visibility("default"))) int dlb_dct4_postmodulation_shl2(void) {
    ALOGD("dlb_dct4_postmodulation_shl2() called");
    return 0;
}

/* Demangled: datalog_close */
extern "C" __attribute__((visibility("default"))) int datalog_close(void) {
    ALOGD("datalog_close() called");
    return 0;
}

/* Demangled: vsv_asa_scaling */
extern "C" __attribute__((visibility("default"))) int vsv_asa_scaling(void) {
    ALOGD("vsv_asa_scaling() called");
    return 0;
}

/* Demangled: vsv_ne_scaling */
extern "C" __attribute__((visibility("default"))) int vsv_ne_scaling(void) {
    ALOGD("vsv_ne_scaling() called");
    return 0;
}

/* Demangled: vsv_tx_get_voice_ratio */
extern "C" __attribute__((visibility("default"))) int vsv_tx_get_voice_ratio(void) {
    ALOGD("vsv_tx_get_voice_ratio() called");
    return 0;
}

/* Demangled: vsv_ns_get_outputs */
extern "C" __attribute__((visibility("default"))) int vsv_ns_get_outputs(void) {
    ALOGD("vsv_ns_get_outputs() called");
    return 0;
}

/* Demangled: dolby::GameEffectContext::GameEffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17GameEffectContextC2Ev(void) {
    ALOGD("_ZN5dolby17GameEffectContextC2Ev() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L360 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L360 = NULL;

/* Demangled: DLB_CLhybrid_analysisCL */
extern "C" __attribute__((visibility("default"))) int DLB_CLhybrid_analysisCL(void) {
    ALOGD("DLB_CLhybrid_analysisCL() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: dlb_BLmaxBLL_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmaxBLL_inplace_flex(void) {
    ALOGD("dlb_BLmaxBLL_inplace_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L72 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L72 = NULL;

/* Demangled: dolby::AudioHalUtils::resumeProfile() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13AudioHalUtils13resumeProfileEv(void) {
    ALOGD("_ZN5dolby13AudioHalUtils13resumeProfileEv() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L45 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L45 = NULL;

/* Demangled: DLB_r4_fft_80 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_80(void) {
    ALOGD("DLB_r4_fft_80() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_360 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_360(void) {
    ALOGD("dlb_fft_inv_scl_360() called");
    return 0;
}

/* Demangled: dolby::VqeProcess::close() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10VqeProcess5closeEv(void) {
    ALOGD("_ZN5dolby10VqeProcess5closeEv() called");
    return 0;
}

/* Demangled: vsv_agc_get_target_level */
extern "C" __attribute__((visibility("default"))) int vsv_agc_get_target_level(void) {
    ALOGD("vsv_agc_get_target_level() called");
    return 0;
}

/* Demangled: dolby::VoiceEffectContext::getParam(int, unsigned int*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18VoiceEffectContext8getParamEiPjPv(void) {
    ALOGD("_ZN5dolby18VoiceEffectContext8getParamEiPjPv() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_90 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_90(void) {
    ALOGD("dlb_fft_inv_scl_90() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_128 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_128(void) {
    ALOGD("dlb_fft_fwd_usc_128() called");
    return 0;
}

/* Demangled: DLB_mfb_p10km_synthesisCL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_mfb_p10km_synthesisCL_query_mem(void) {
    ALOGD("DLB_mfb_p10km_synthesisCL_query_mem() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L384 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L384 = NULL;

/* Demangled: DLB_r4_fft_288 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_288(void) {
    ALOGD("DLB_r4_fft_288() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L8_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L8_cos = NULL;

/* Demangled: vqe_get_alg_switches */
extern "C" __attribute__((visibility("default"))) int vqe_get_alg_switches(void) {
    ALOGD("vqe_get_alg_switches() called");
    return 0;
}

/* Demangled: DLB_vec_Lmask_rev_coefLSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_Lmask_rev_coefLSU_strict(void) {
    ALOGD("DLB_vec_Lmask_rev_coefLSU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L144 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L144 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L48 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L48 = NULL;

/* Demangled: DLB_Sqmf_synthesisL */
extern "C" __attribute__((visibility("default"))) int DLB_Sqmf_synthesisL(void) {
    ALOGD("DLB_Sqmf_synthesisL() called");
    return 0;
}

/* Demangled: dlb_octfile_open_memory */
extern "C" __attribute__((visibility("default"))) int dlb_octfile_open_memory(void) {
    ALOGD("dlb_octfile_open_memory() called");
    return 0;
}

/* Demangled: dlb_riff_chunk_handler_call_chain */
extern "C" __attribute__((visibility("default"))) int dlb_riff_chunk_handler_call_chain(void) {
    ALOGD("dlb_riff_chunk_handler_call_chain() called");
    return 0;
}

/* Demangled: vsv_har_process */
extern "C" __attribute__((visibility("default"))) int vsv_har_process(void) {
    ALOGD("vsv_har_process() called");
    return 0;
}

/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_ENABLE(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect24handle_EFFECT_CMD_ENABLEERNS_13EffectContextERNS_12ParserBufferES4_(void) {
    ALOGD("_ZN5dolby9DlbEffect24handle_EFFECT_CMD_ENABLEERNS_13EffectContextERNS_12ParserBufferES4_() called");
    return 0;
}

/* Demangled: dolby::EffectContext::DmsDeathRecipient::serviceDied(unsigned long long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext17DmsDeathRecipient11serviceDiedEyRKN7android2wpINS2_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN5dolby13EffectContext17DmsDeathRecipient11serviceDiedEyRKN7android2wpINS2_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: dlb_blk_LdelayU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LdelayU_flex(void) {
    ALOGD("dlb_blk_LdelayU_flex() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlUnL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlUnL_strict(void) {
    ALOGD("DLB_blk_Lmix_shlUnL_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_480_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_480_s(void) {
    ALOGD("DLB_r4_inv_fft_480_s() called");
    return 0;
}

/* Demangled: dlb_octfile_setpos */
extern "C" __attribute__((visibility("default"))) int dlb_octfile_setpos(void) {
    ALOGD("dlb_octfile_setpos() called");
    return 0;
}

/* Demangled: vsv_mixer_ctrl_get_config */
extern "C" __attribute__((visibility("default"))) int vsv_mixer_ctrl_get_config(void) {
    ALOGD("vsv_mixer_ctrl_get_config() called");
    return 0;
}

/* Exported Object: a_shift_table_CQMF_320x320x48_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_CQMF_320x320x48_16000_tab = NULL;

/* Demangled: utlog_set_cdata */
extern "C" __attribute__((visibility("default"))) int utlog_set_cdata(void) {
    ALOGD("utlog_set_cdata() called");
    return 0;
}

/* Demangled: DLB_hybrid_synthesisCL_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_synthesisCL_get_delay(void) {
    ALOGD("DLB_hybrid_synthesisCL_get_delay() called");
    return 0;
}

/* Demangled: dlb_vec_UnormLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_UnormLU_flex(void) {
    ALOGD("dlb_vec_UnormLU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L640 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L640 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L16_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L16_1 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L512 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L512 = NULL;

/* Demangled: dlb_fft_inv_scl_96 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_96(void) {
    ALOGD("dlb_fft_inv_scl_96() called");
    return 0;
}

/* Exported Object: a_twist_table_MDCT_160x160x40_08000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDCT_160x160x40_08000_tab = NULL;

/* Demangled: vsv_flux_open */
extern "C" __attribute__((visibility("default"))) int vsv_flux_open(void) {
    ALOGD("vsv_flux_open() called");
    return 0;
}

/* Demangled: dlb_blk_Lmix_shlULLLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmix_shlULLLL_flex(void) {
    ALOGD("dlb_blk_Lmix_shlULLLL_flex() called");
    return 0;
}

/* Demangled: DLB_CLshrCLUU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLshrCLUU_strict(void) {
    ALOGD("DLB_CLshrCLUU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L16_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L16_2 = NULL;

/* Demangled: DLB_r4_fft_16_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_16_s(void) {
    ALOGD("DLB_r4_fft_16_s() called");
    return 0;
}

/* Demangled: DLB_qmf_analysisS_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisS_get_delay(void) {
    ALOGD("DLB_qmf_analysisS_get_delay() called");
    return 0;
}

/* Demangled: dlb_vec_LmpyLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LmpyLSU_flex(void) {
    ALOGD("dlb_vec_LmpyLSU_flex() called");
    return 0;
}

/* Demangled: dlb_blk_LmaxLLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmaxLLL_flex(void) {
    ALOGD("dlb_blk_LmaxLLL_flex() called");
    return 0;
}

/* Demangled: DLB_CLmixCLCLSSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmixCLCLSSU_strict(void) {
    ALOGD("DLB_CLmixCLCLSSU_strict() called");
    return 0;
}

/* Demangled: dlb_CLmpyCLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpyCLSU_flex(void) {
    ALOGD("dlb_CLmpyCLSU_flex() called");
    return 0;
}

/* Exported Object: dlb_cos_32_ast_mini_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_32_ast_mini_twiddle = NULL;

/* Demangled: dlb_octfile_open */
extern "C" __attribute__((visibility("default"))) int dlb_octfile_open(void) {
    ALOGD("dlb_octfile_open() called");
    return 0;
}

/* Demangled: dft_open */
extern "C" __attribute__((visibility("default"))) int dft_open(void) {
    ALOGD("dft_open() called");
    return 0;
}

/* Exported Object: a_twist_table_MDCT_960x960x61_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_twist_table_MDCT_960x960x61_48000_tab = NULL;

/* Demangled: DLB_CLmpy_shlCLSIU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmpy_shlCLSIU_inplace_strict(void) {
    ALOGD("DLB_CLmpy_shlCLSIU_inplace_strict() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_512 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_512(void) {
    ALOGD("dlb_fft_inv_scl_512() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L1024 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L1024 = NULL;

/* Demangled: DLB_Lpow05I16 */
extern "C" __attribute__((visibility("default"))) int DLB_Lpow05I16(void) {
    ALOGD("DLB_Lpow05I16() called");
    return 0;
}

/* Demangled: dlb_riff_reopen_chunk */
extern "C" __attribute__((visibility("default"))) int dlb_riff_reopen_chunk(void) {
    ALOGD("dlb_riff_reopen_chunk() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L360 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L360 = NULL;

/* Exported Object: a_shift_table_MDCT_320x320x48_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDCT_320x320x48_16000_tab = NULL;

/* Exported Object: a_pp_vsv_ml_rules_tab */
extern "C" __attribute__((visibility("default"))) void* a_pp_vsv_ml_rules_tab = NULL;

/* Demangled: DLB_blk_Liir1xL_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1xL_set_coef(void) {
    ALOGD("DLB_blk_Liir1xL_set_coef() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2df1L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2df1L_set_coef(void) {
    ALOGD("DLB_blk_Liir2df1L_set_coef() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_320 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_320(void) {
    ALOGD("dlb_fft_fwd_scl_320() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_960 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_960(void) {
    ALOGD("dlb_fft_fwd_usc_960() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L768_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L768_cos = NULL;

/* Demangled: dlb_wave_get_bit_depth */
extern "C" __attribute__((visibility("default"))) int dlb_wave_get_bit_depth(void) {
    ALOGD("dlb_wave_get_bit_depth() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L90 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L90 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L180_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L180_1 = NULL;

/* Demangled: vsv_asa_process */
extern "C" __attribute__((visibility("default"))) int vsv_asa_process(void) {
    ALOGD("vsv_asa_process() called");
    return 0;
}

/* Demangled: vsv_ne_process */
extern "C" __attribute__((visibility("default"))) int vsv_ne_process(void) {
    ALOGD("vsv_ne_process() called");
    return 0;
}

/* Demangled: vsv_ns_process */
extern "C" __attribute__((visibility("default"))) int vsv_ns_process(void) {
    ALOGD("vsv_ns_process() called");
    return 0;
}

/* Demangled: vqe_process */
extern "C" __attribute__((visibility("default"))) int vqe_process(void) {
    ALOGD("vqe_process() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::getProfileName(int, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext14getProfileNameEiPvPj(void) {
    ALOGD("_ZN5dolby16DapEffectContext14getProfileNameEiPvPj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L180_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L180_2 = NULL;

/* Demangled: DLB_r4_inv_fft_90 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_90(void) {
    ALOGD("DLB_r4_inv_fft_90() called");
    return 0;
}

/* Exported Object: vtable for dolby::GameEffectContext::DlbGameEffCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby17GameEffectContext19DlbGameEffCallbacksE = NULL;

/* Exported Object: dlb_fft_cplx_fwd_usc */
extern "C" __attribute__((visibility("default"))) void* dlb_fft_cplx_fwd_usc = NULL;

/* Demangled: datalog_dump_binary */
extern "C" __attribute__((visibility("default"))) int datalog_dump_binary(void) {
    ALOGD("datalog_dump_binary() called");
    return 0;
}

/* Demangled: vsv_asa_get_config */
extern "C" __attribute__((visibility("default"))) int vsv_asa_get_config(void) {
    ALOGD("vsv_asa_get_config() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L256 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L256 = NULL;

/* Demangled: dlb_fft_inv_usc_320 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_320(void) {
    ALOGD("dlb_fft_inv_usc_320() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_legacy */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_legacy(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_legacy() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: vqe_get_noise_level */
extern "C" __attribute__((visibility("default"))) int vqe_get_noise_level(void) {
    ALOGD("vqe_get_noise_level() called");
    return 0;
}

/* Demangled: vqe_set_maxsnr */
extern "C" __attribute__((visibility("default"))) int vqe_set_maxsnr(void) {
    ALOGD("vqe_set_maxsnr() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L96 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L96 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L128_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L128_1 = NULL;

/* Demangled: DLB_r4_fft_80_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_80_s(void) {
    ALOGD("DLB_r4_fft_80_s() called");
    return 0;
}

/* Demangled: dlb_octfile_getpos */
extern "C" __attribute__((visibility("default"))) int dlb_octfile_getpos(void) {
    ALOGD("dlb_octfile_getpos() called");
    return 0;
}

/* Demangled: vqe_get_default_alg_switches */
extern "C" __attribute__((visibility("default"))) int vqe_get_default_alg_switches(void) {
    ALOGD("vqe_get_default_alg_switches() called");
    return 0;
}

/* Demangled: dlb_CLshlCLUU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLshlCLUU_flex(void) {
    ALOGD("dlb_CLshlCLUU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L128_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L128_2 = NULL;

/* Demangled: DLB_r4_inv_fft_96 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_96(void) {
    ALOGD("DLB_r4_inv_fft_96() called");
    return 0;
}

/* Exported Object: dlb_cos_48_full */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_48_full = NULL;

/* Demangled: dolby::VoiceEffectContext::~VoiceEffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18VoiceEffectContextD2Ev(void) {
    ALOGD("_ZN5dolby18VoiceEffectContextD2Ev() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::process(audio_buffer_s*, audio_buffer_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext7processEP14audio_buffer_sS2_(void) {
    ALOGD("_ZN5dolby16DapEffectContext7processEP14audio_buffer_sS2_() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L512 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L512 = NULL;

/* Demangled: vqe_get_num_bands */
extern "C" __attribute__((visibility("default"))) int vqe_get_num_bands(void) {
    ALOGD("vqe_get_num_bands() called");
    return 0;
}

/* Demangled: DLB_blk_LnrrecipLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LnrrecipLU_strict(void) {
    ALOGD("DLB_blk_LnrrecipLU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L288 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L288 = NULL;

/* Demangled: DLB_qmf_analysisL_get_filter_state_length */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_get_filter_state_length(void) {
    ALOGD("DLB_qmf_analysisL_get_filter_state_length() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_32_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_32_vec_ana = NULL;

/* Demangled: DLB_r4_fft_576 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_576(void) {
    ALOGD("DLB_r4_fft_576() called");
    return 0;
}

/* Demangled: dolby::VqeProcess::~VqeProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10VqeProcessD1Ev(void) {
    ALOGD("_ZN5dolby10VqeProcessD1Ev() called");
    return 0;
}

/* Demangled: datalog_write_char */
extern "C" __attribute__((visibility("default"))) int datalog_write_char(void) {
    ALOGD("datalog_write_char() called");
    return 0;
}

/* Exported Object: a_shift_table_CQMF_960x960x61_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_CQMF_960x960x61_48000_tab = NULL;

/* Demangled: vqe_get_avg_supp_gain */
extern "C" __attribute__((visibility("default"))) int vqe_get_avg_supp_gain(void) {
    ALOGD("vqe_get_avg_supp_gain() called");
    return 0;
}

/* Demangled: DLB_blk_LminLLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LminLLL_strict(void) {
    ALOGD("DLB_blk_LminLLL_strict() called");
    return 0;
}

/* Demangled: vqe_api_close */
extern "C" __attribute__((visibility("default"))) int vqe_api_close(void) {
    ALOGD("vqe_api_close() called");
    return 0;
}

/* Exported Object: a_shift_table_MDXT_320x320x48_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDXT_320x320x48_16000_tab = NULL;

/* Demangled: DLB_blk_Liir1xL_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir1xL_setup(void) {
    ALOGD("DLB_blk_Liir1xL_setup() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssL_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssL_set_coef(void) {
    ALOGD("DLB_blk_Liir2ssL_set_coef() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L120 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L120 = NULL;

/* Demangled: DLB_r4_fft_720 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_720(void) {
    ALOGD("DLB_r4_fft_720() called");
    return 0;
}

/* Demangled: dolby::AudioHalUtils::~AudioHalUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13AudioHalUtilsD2Ev(void) {
    ALOGD("_ZN5dolby13AudioHalUtilsD2Ev() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv1_usmpL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv1_usmpL_strict(void) {
    ALOGD("DLB_blk_Liir2ssv1_usmpL_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_120_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_120_s(void) {
    ALOGD("DLB_r4_inv_fft_120_s() called");
    return 0;
}

/* Demangled: vsv_tx_open */
extern "C" __attribute__((visibility("default"))) int vsv_tx_open(void) {
    ALOGD("vsv_tx_open() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L960_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L960_1 = NULL;

/* Demangled: vqe_get_asa_curr_obj_id */
extern "C" __attribute__((visibility("default"))) int vqe_get_asa_curr_obj_id(void) {
    ALOGD("vqe_get_asa_curr_obj_id() called");
    return 0;
}

/* Demangled: dolby::EffectContext::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext5resetEv(void) {
    ALOGD("_ZN5dolby13EffectContext5resetEv() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L960_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L960_2 = NULL;

/* Demangled: DLB_r4_inv_fft_60_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_60_s(void) {
    ALOGD("DLB_r4_inv_fft_60_s() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_get_scale */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_get_scale(void) {
    ALOGD("DLB_hybrid_analysisCL_get_scale() called");
    return 0;
}

/* Demangled: dlb_riff_skip_chunk_data */
extern "C" __attribute__((visibility("default"))) int dlb_riff_skip_chunk_data(void) {
    ALOGD("dlb_riff_skip_chunk_data() called");
    return 0;
}

/* Demangled: vstack_cleanup */
extern "C" __attribute__((visibility("default"))) int vstack_cleanup(void) {
    ALOGD("vstack_cleanup() called");
    return 0;
}

/* Demangled: dlb_vec_Labs_maxLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_Labs_maxLU_flex(void) {
    ALOGD("dlb_vec_Labs_maxLU_flex() called");
    return 0;
}

/* Demangled: DLB_CLdivCLCLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLdivCLCLU_strict(void) {
    ALOGD("DLB_CLdivCLCLU_strict() called");
    return 0;
}

/* Demangled: dlb_VLsquaredmagCLIU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_VLsquaredmagCLIU_flex(void) {
    ALOGD("dlb_VLsquaredmagCLIU_flex() called");
    return 0;
}

/* Demangled: dolby::VqeBufferAdapter::configure(int, int, audio_format_t, audio_channel_mask_t, audio_channel_mask_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16VqeBufferAdapter9configureEii14audio_format_t20audio_channel_mask_tS2_(void) {
    ALOGD("_ZN5dolby16VqeBufferAdapter9configureEii14audio_format_t20audio_channel_mask_tS2_() called");
    return 0;
}

/* Demangled: vqe_get_mic_bulk_gain */
extern "C" __attribute__((visibility("default"))) int vqe_get_mic_bulk_gain(void) {
    ALOGD("vqe_get_mic_bulk_gain() called");
    return 0;
}

/* Demangled: DLB_r4_fft_90 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_90(void) {
    ALOGD("DLB_r4_fft_90() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_0 */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_even_0(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_even_0() called");
    return 0;
}

/* Demangled: utlog_write */
extern "C" __attribute__((visibility("default"))) int utlog_write(void) {
    ALOGD("utlog_write() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L4_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L4_1 = NULL;

/* Demangled: DLB_r4_inv_fft_144 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_144(void) {
    ALOGD("DLB_r4_inv_fft_144() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_1 */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_even_1(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_even_1() called");
    return 0;
}

/* Demangled: dolby::EffectVqe::updateProcessEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9EffectVqe20updateProcessEnabledEv(void) {
    ALOGD("_ZN5dolby9EffectVqe20updateProcessEnabledEv() called");
    return 0;
}

/* Demangled: dolby::VoiceEffectContext::setVqeParameter(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18VoiceEffectContext15setVqeParameterEPvj(void) {
    ALOGD("_ZN5dolby18VoiceEffectContext15setVqeParameterEPvj() called");
    return 0;
}

/* Demangled: dlb_vec_Lmask_rev_coefLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_Lmask_rev_coefLSU_flex(void) {
    ALOGD("dlb_vec_Lmask_rev_coefLSU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L4_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L4_2 = NULL;

/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_2 */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_even_2(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_even_2() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_vec_syn = NULL;

/* Demangled: DLB_vec_IeqLLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_IeqLLU_strict(void) {
    ALOGD("DLB_vec_IeqLLU_strict() called");
    return 0;
}

/* Demangled: dlb_CLmpy_shlCLSIU_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_CLmpy_shlCLSIU_inplace_flex(void) {
    ALOGD("dlb_CLmpy_shlCLSIU_inplace_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L128 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L128 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L192_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L192_1 = NULL;

/* Demangled: DLB_Lmfb_p10km_synthesisCL_even_3 */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_even_3(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_even_3() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisS_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_get_delay(void) {
    ALOGD("DLB_qmf_synthesisS_get_delay() called");
    return 0;
}

/* Exported Object: vtable for dolby::DlbBufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby17DlbBufferProviderE = NULL;

/* Demangled: dlb_wave_get_channel_mask */
extern "C" __attribute__((visibility("default"))) int dlb_wave_get_channel_mask(void) {
    ALOGD("dlb_wave_get_channel_mask() called");
    return 0;
}

/* Demangled: dlb_blk_Liir2ssv1L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir2ssv1L_flex(void) {
    ALOGD("dlb_blk_Liir2ssv1L_flex() called");
    return 0;
}

/* Demangled: dlb_blk_LintegrateL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LintegrateL_flex(void) {
    ALOGD("dlb_blk_LintegrateL_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L192_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L192_2 = NULL;

/* Demangled: DLB_fft_CLinv_unscaledCL */
extern "C" __attribute__((visibility("default"))) int DLB_fft_CLinv_unscaledCL(void) {
    ALOGD("DLB_fft_CLinv_unscaledCL() called");
    return 0;
}

/* Demangled: vsv_trag_get_cflx */
extern "C" __attribute__((visibility("default"))) int vsv_trag_get_cflx(void) {
    ALOGD("vsv_trag_get_cflx() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_576_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_576_s(void) {
    ALOGD("DLB_r4_inv_fft_576_s() called");
    return 0;
}

/* Demangled: dlb_blk_LnrrecipLU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LnrrecipLU_flex(void) {
    ALOGD("dlb_blk_LnrrecipLU_flex() called");
    return 0;
}

/* Demangled: DLB_r4_fft_96 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_96(void) {
    ALOGD("DLB_r4_fft_96() called");
    return 0;
}

/* Demangled: dolby::DlbBufferProvider::updateCapacity(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17DlbBufferProvider14updateCapacityEi(void) {
    ALOGD("_ZN5dolby17DlbBufferProvider14updateCapacityEi() called");
    return 0;
}

/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_SET_PARAM(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect27handle_EFFECT_CMD_SET_PARAMERNS_13EffectContextERNS_12ParserBufferES4_(void) {
    ALOGD("_ZN5dolby9DlbEffect27handle_EFFECT_CMD_SET_PARAMERNS_13EffectContextERNS_12ParserBufferES4_() called");
    return 0;
}

/* Demangled: DLB_CLrecipCLUU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLrecipCLUU_strict(void) {
    ALOGD("DLB_CLrecipCLUU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_180 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_180(void) {
    ALOGD("dlb_fft_fwd_scl_180() called");
    return 0;
}

/* Demangled: dolby::VqeCrossfadeProcess::VqeCrossfadeProcess(dolby::IDlbProcess*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19VqeCrossfadeProcessC1EPNS_11IDlbProcessE(void) {
    ALOGD("_ZN5dolby19VqeCrossfadeProcessC1EPNS_11IDlbProcessE() called");
    return 0;
}

/* Demangled: DLB_r4_fft_2048_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_2048_s(void) {
    ALOGD("DLB_r4_fft_2048_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_160 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_160(void) {
    ALOGD("DLB_r4_fft_160() called");
    return 0;
}

/* Exported Object: dlb_cos_64_full_scl */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_64_full_scl = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: a_shift_table_MDFT_320x320x48_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDFT_320x320x48_16000_tab = NULL;

/* Demangled: dolby::GameEffectContext::connectDolbyService() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17GameEffectContext19connectDolbyServiceEv(void) {
    ALOGD("_ZN5dolby17GameEffectContext19connectDolbyServiceEv() called");
    return 0;
}

/* Demangled: dolby::DlbCrossfadeProcess::accumulate(int*, int*, int*, int, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19DlbCrossfadeProcess10accumulateEPiS1_S1_iff(void) {
    ALOGD("_ZN5dolby19DlbCrossfadeProcess10accumulateEPiS1_S1_iff() called");
    return 0;
}

/* Demangled: dolby::DlbCrossfadeProcess::~DlbCrossfadeProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19DlbCrossfadeProcessD1Ev(void) {
    ALOGD("_ZN5dolby19DlbCrossfadeProcessD1Ev() called");
    return 0;
}

/* Exported Object: dlb_hyb_p2_6 */
extern "C" __attribute__((visibility("default"))) void* dlb_hyb_p2_6 = NULL;

/* Demangled: dlb_vec_LshlLIU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_vec_LshlLIU_flex(void) {
    ALOGD("dlb_vec_LshlLIU_flex() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_180 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_180(void) {
    ALOGD("dlb_fft_inv_usc_180() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L96_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L96_cos = NULL;

/* Demangled: dolby::DapEffectContext::setContentProcEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext21setContentProcEnabledEb(void) {
    ALOGD("_ZN5dolby16DapEffectContext21setContentProcEnabledEb() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L240 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L240 = NULL;

/* Demangled: vstack_init */
extern "C" __attribute__((visibility("default"))) int vstack_init(void) {
    ALOGD("vstack_init() called");
    return 0;
}

/* Demangled: dlb_dctII_scaled */
extern "C" __attribute__((visibility("default"))) int dlb_dctII_scaled(void) {
    ALOGD("dlb_dctII_scaled() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L60 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L60 = NULL;

/* Demangled: dlb_wave_get_current_frame */
extern "C" __attribute__((visibility("default"))) int dlb_wave_get_current_frame(void) {
    ALOGD("dlb_wave_get_current_frame() called");
    return 0;
}

/* Demangled: dolby::VoiceEffectContext::resetNoiseEstimation(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18VoiceEffectContext20resetNoiseEstimationEPvj(void) {
    ALOGD("_ZN5dolby18VoiceEffectContext20resetNoiseEstimationEPvj() called");
    return 0;
}

/* Demangled: stats_init */
extern "C" __attribute__((visibility("default"))) int stats_init(void) {
    ALOGD("stats_init() called");
    return 0;
}

/* Demangled: DLB_blk_Lfir2L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir2L_setup(void) {
    ALOGD("DLB_blk_Lfir2L_setup() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv2_shlLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv2_shlLU_strict(void) {
    ALOGD("DLB_blk_Liir2ssv2_shlLU_strict() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_240 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_240(void) {
    ALOGD("dlb_fft_inv_scl_240() called");
    return 0;
}

/* Exported Object: a_shift_table_MDXT_960x960x61_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDXT_960x960x61_48000_tab = NULL;

/* Demangled: DLB_CLshlCLUU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLshlCLUU_strict(void) {
    ALOGD("DLB_CLshlCLUU_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L576 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L576 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L960 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L960 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L64 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L64 = NULL;

/* Demangled: DLB_r4_inv_fft_1024 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_1024(void) {
    ALOGD("DLB_r4_inv_fft_1024() called");
    return 0;
}

/* Demangled: DLB_mfb_p10km_analysisL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_mfb_p10km_analysisL_query_mem(void) {
    ALOGD("DLB_mfb_p10km_analysisL_query_mem() called");
    return 0;
}

/* Demangled: dlb_riff_read_next_chunk */
extern "C" __attribute__((visibility("default"))) int dlb_riff_read_next_chunk(void) {
    ALOGD("dlb_riff_read_next_chunk() called");
    return 0;
}

/* Demangled: dolby::EffectContext::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext6enableEv(void) {
    ALOGD("_ZN5dolby13EffectContext6enableEv() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_1_L720 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_1_L720 = NULL;

/* Demangled: DLB_r4_inv_fft_72_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_72_s(void) {
    ALOGD("DLB_r4_inv_fft_72_s() called");
    return 0;
}

/* Demangled: datalog_frame_count */
extern "C" __attribute__((visibility("default"))) int datalog_frame_count(void) {
    ALOGD("datalog_frame_count() called");
    return 0;
}

/* Demangled: DLB_CLmacCLLU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLmacCLLU_strict(void) {
    ALOGD("DLB_CLmacCLLU_strict() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P4 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4 = NULL;

/* Demangled: dolby::EffectVqe::~EffectVqe() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9EffectVqeD2Ev(void) {
    ALOGD("_ZN5dolby9EffectVqeD2Ev() called");
    return 0;
}

/* Demangled: vsv_agc_close */
extern "C" __attribute__((visibility("default"))) int vsv_agc_close(void) {
    ALOGD("vsv_agc_close() called");
    return 0;
}

/* Exported Object: vsv_ml_num_defs */
extern "C" __attribute__((visibility("default"))) void* vsv_ml_num_defs = NULL;

/* Demangled: DLB_blk_LLdeshuffleLL_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LLdeshuffleLL_inplace_strict(void) {
    ALOGD("DLB_blk_LLdeshuffleLL_inplace_strict() called");
    return 0;
}

/* Demangled: DLB_CLCLmix7CL14SU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_CLCLmix7CL14SU_strict(void) {
    ALOGD("DLB_CLCLmix7CL14SU_strict() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5 */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L36_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L36_cos = NULL;

/* Demangled: synthesis_mdct */
extern "C" __attribute__((visibility("default"))) int synthesis_mdct(void) {
    ALOGD("synthesis_mdct() called");
    return 0;
}

/* Demangled: DLB_blk_Liir2ssv1_dsmpL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Liir2ssv1_dsmpL_strict(void) {
    ALOGD("DLB_blk_Liir2ssv1_dsmpL_strict() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_16_vec_syn */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_16_vec_syn = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L180_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L180_cos = NULL;

/* Demangled: dlb_BLmpy_scaleBLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmpy_scaleBLSU_flex(void) {
    ALOGD("dlb_BLmpy_scaleBLSU_flex() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P4_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P4_vec_ana = NULL;

/* Demangled: DLB_r4_inv_fft_288 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_288(void) {
    ALOGD("DLB_r4_inv_fft_288() called");
    return 0;
}

/* Demangled: dlb_qmf_analysisL_reconfig */
extern "C" __attribute__((visibility("default"))) int dlb_qmf_analysisL_reconfig(void) {
    ALOGD("dlb_qmf_analysisL_reconfig() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L16_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L16_cos = NULL;

/* Demangled: dolby::BufferProvider::~BufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProviderD1Ev(void) {
    ALOGD("_ZN5dolby14BufferProviderD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: DLB_blk_Lfir3L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir3L_set_coef(void) {
    ALOGD("DLB_blk_Lfir3L_set_coef() called");
    return 0;
}

/* Demangled: dlb_blk_LmaxLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmaxLL_flex(void) {
    ALOGD("dlb_blk_LmaxLL_flex() called");
    return 0;
}

/* Demangled: DLB_fft_init */
extern "C" __attribute__((visibility("default"))) int DLB_fft_init(void) {
    ALOGD("DLB_fft_init() called");
    return 0;
}

/* Exported Object: vsv_agc_defs_num */
extern "C" __attribute__((visibility("default"))) void* vsv_agc_defs_num = NULL;

/* Exported Object: vsv_asa_defs_num */
extern "C" __attribute__((visibility("default"))) void* vsv_asa_defs_num = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L1024 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L1024 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L320_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L320_1 = NULL;

/* Demangled: dlb_wave_get_format_flags */
extern "C" __attribute__((visibility("default"))) int dlb_wave_get_format_flags(void) {
    ALOGD("dlb_wave_get_format_flags() called");
    return 0;
}

/* Demangled: vsv_agc_get_gain_range */
extern "C" __attribute__((visibility("default"))) int vsv_agc_get_gain_range(void) {
    ALOGD("vsv_agc_get_gain_range() called");
    return 0;
}

/* Demangled: DLB_blk_Lattack_decay_peak_iir1L_set_coef */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lattack_decay_peak_iir1L_set_coef(void) {
    ALOGD("DLB_blk_Lattack_decay_peak_iir1L_set_coef() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L320_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L320_2 = NULL;

/* Demangled: dolby::BufferProvider::setConfig(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProvider9setConfigEij(void) {
    ALOGD("_ZN5dolby14BufferProvider9setConfigEij() called");
    return 0;
}

/* Exported Object: vtable for dolby::GameEffectContext */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby17GameEffectContextE = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L60 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L60 = NULL;

/* Demangled: DLB_qmf_analysisL_get_max_filter_state_length */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_analysisL_get_max_filter_state_length(void) {
    ALOGD("DLB_qmf_analysisL_get_max_filter_state_length() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::getTuningListLen(int, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext16getTuningListLenEiPvPj(void) {
    ALOGD("_ZN5dolby16DapEffectContext16getTuningListLenEiPvPj() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L240 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L240 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L12_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L12_1 = NULL;

/* Demangled: DLB_r4_fft_640_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_640_s(void) {
    ALOGD("DLB_r4_fft_640_s() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_4096_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_4096_s(void) {
    ALOGD("DLB_r4_inv_fft_4096_s() called");
    return 0;
}

/* Demangled: DLB_hybrid_synthesisCL_open */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_synthesisCL_open(void) {
    ALOGD("DLB_hybrid_synthesisCL_open() called");
    return 0;
}

/* Demangled: vsv_gain_vector_gain_complex_data */
extern "C" __attribute__((visibility("default"))) int vsv_gain_vector_gain_complex_data(void) {
    ALOGD("vsv_gain_vector_gain_complex_data() called");
    return 0;
}

/* Demangled: DLB_blk_LabsL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LabsL_strict(void) {
    ALOGD("DLB_blk_LabsL_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L90 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L90 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L12_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L12_2 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L45_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L45_1 = NULL;

/* Demangled: DLB_r4_fft_12_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_12_s(void) {
    ALOGD("DLB_r4_fft_12_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_144 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_144(void) {
    ALOGD("dlb_fft_fwd_usc_144() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L120_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L120_cos = NULL;

/* Exported Object: a_shift_table_MDFT_960x960x61_48000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDFT_960x960x61_48000_tab = NULL;

/* Demangled: vsv_asa_init */
extern "C" __attribute__((visibility("default"))) int vsv_asa_init(void) {
    ALOGD("vsv_asa_init() called");
    return 0;
}

/* Demangled: DLB_blk_LfirUL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LfirUL_strict(void) {
    ALOGD("DLB_blk_LfirUL_strict() called");
    return 0;
}

/* Demangled: dlb_blk_Liir1xL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir1xL_flex(void) {
    ALOGD("dlb_blk_Liir1xL_flex() called");
    return 0;
}

/* Exported Object: dlb_clclmix5cl10csu_order_coef_c */
extern "C" __attribute__((visibility("default"))) void* dlb_clclmix5cl10csu_order_coef_c = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L45_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L45_2 = NULL;

/* Demangled: DLB_r4_fft_45_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_45_s(void) {
    ALOGD("DLB_r4_fft_45_s() called");
    return 0;
}

/* Demangled: DLB_Lmfb_p10km_synthesisCL_close */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_close(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_close() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_48_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_48_vec_ana = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L64 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L64 = NULL;

/* Exported Object: dolby::DlbEffect::kDescriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby9DlbEffect11kDescriptorE = NULL;

/* Demangled: dolby::VqeProcess::VqeProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10VqeProcessC2Ev(void) {
    ALOGD("_ZN5dolby10VqeProcessC2Ev() called");
    return 0;
}

/* Demangled: dlb_blk_LfirUL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LfirUL_flex(void) {
    ALOGD("dlb_blk_LfirUL_flex() called");
    return 0;
}

/* Demangled: DLB_r4_fft_360_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_360_s(void) {
    ALOGD("DLB_r4_fft_360_s() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_2048 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_2048(void) {
    ALOGD("dlb_fft_fwd_scl_2048() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::~DapEffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContextD1Ev(void) {
    ALOGD("_ZN5dolby16DapEffectContextD1Ev() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L384 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L384 = NULL;

/* Demangled: DLB_Lmfb_p10km_synthesisCL_symmetric */
extern "C" __attribute__((visibility("default"))) int DLB_Lmfb_p10km_synthesisCL_symmetric(void) {
    ALOGD("DLB_Lmfb_p10km_synthesisCL_symmetric() called");
    return 0;
}

/* Demangled: dlb_forwardModulationComplex */
extern "C" __attribute__((visibility("default"))) int dlb_forwardModulationComplex(void) {
    ALOGD("dlb_forwardModulationComplex() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisS_copy_states */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisS_copy_states(void) {
    ALOGD("DLB_qmf_synthesisS_copy_states() called");
    return 0;
}

/* Exported Object: dlb_qmf_filter_coeff_P5_p64atm301_8_vec_ana */
extern "C" __attribute__((visibility("default"))) void* dlb_qmf_filter_coeff_P5_p64atm301_8_vec_ana = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L60_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L60_cos = NULL;

/* Demangled: DLB_time_sub */
extern "C" __attribute__((visibility("default"))) int DLB_time_sub(void) {
    ALOGD("DLB_time_sub() called");
    return 0;
}

/* Demangled: dlb_wave_close */
extern "C" __attribute__((visibility("default"))) int dlb_wave_close(void) {
    ALOGD("dlb_wave_close() called");
    return 0;
}

/* Demangled: vlib_transform_reset */
extern "C" __attribute__((visibility("default"))) int vlib_transform_reset(void) {
    ALOGD("vlib_transform_reset() called");
    return 0;
}

/* Demangled: dlb_blk_Lmix_shlULLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmix_shlULLL_flex(void) {
    ALOGD("dlb_blk_Lmix_shlULLL_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_2 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_2(void) {
    ALOGD("dlb_fft_fwd_usc_2() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_open */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_open(void) {
    ALOGD("DLB_hybrid_analysisCL_open() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L96 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L96 = NULL;

/* Demangled: DLB_r4_inv_fft_144_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_144_s(void) {
    ALOGD("DLB_r4_inv_fft_144_s() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L288_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L288_1 = NULL;

/* Demangled: dlb_fft_inv_scl_384 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_384(void) {
    ALOGD("dlb_fft_inv_scl_384() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_4 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_4(void) {
    ALOGD("dlb_fft_fwd_usc_4() called");
    return 0;
}

/* Demangled: vstack_close_frame */
extern "C" __attribute__((visibility("default"))) int vstack_close_frame(void) {
    ALOGD("vstack_close_frame() called");
    return 0;
}

/* Demangled: DLB_vec_LmpyLSU_inplace_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_LmpyLSU_inplace_strict(void) {
    ALOGD("DLB_vec_LmpyLSU_inplace_strict() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L288_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L288_2 = NULL;

/* Demangled: dolby::VqeProcess::getParam(int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10VqeProcess8getParamEiPiS1_(void) {
    ALOGD("_ZN5dolby10VqeProcess8getParamEiPiS1_() called");
    return 0;
}

/* Demangled: dolby::GameEffectContext::~GameEffectContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17GameEffectContextD0Ev(void) {
    ALOGD("_ZN5dolby17GameEffectContextD0Ev() called");
    return 0;
}

/* Demangled: dolby::EffectContext::setBypass(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext9setBypassEPvj(void) {
    ALOGD("_ZN5dolby13EffectContext9setBypassEPvj() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_6 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_6(void) {
    ALOGD("dlb_fft_fwd_usc_6() called");
    return 0;
}

/* Exported Object: DLB_MFB_P10KM_P4_319SC_128M */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_P10KM_P4_319SC_128M = NULL;

/* Exported Object: a_shift_table_MDCT_640x640x56_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDCT_640x640x56_32000_tab = NULL;

/* Demangled: dlb_fft_fwd_usc_8 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_8(void) {
    ALOGD("dlb_fft_fwd_usc_8() called");
    return 0;
}

/* Demangled: dolby::DlbCrossfadeProcess::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19DlbCrossfadeProcess4initEv(void) {
    ALOGD("_ZN5dolby19DlbCrossfadeProcess4initEv() called");
    return 0;
}

/* Demangled: dolby::BufferSource::fillWithSilence() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12BufferSource15fillWithSilenceEv(void) {
    ALOGD("_ZN5dolby12BufferSource15fillWithSilenceEv() called");
    return 0;
}

/* Demangled: dlb_octfile_open_generic */
extern "C" __attribute__((visibility("default"))) int dlb_octfile_open_generic(void) {
    ALOGD("dlb_octfile_open_generic() called");
    return 0;
}

/* Demangled: DLB_blk_Lfir3L_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lfir3L_setup(void) {
    ALOGD("DLB_blk_Lfir3L_setup() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_192 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_192(void) {
    ALOGD("dlb_fft_fwd_scl_192() called");
    return 0;
}

/* Demangled: vsv_reg_init */
extern "C" __attribute__((visibility("default"))) int vsv_reg_init(void) {
    ALOGD("vsv_reg_init() called");
    return 0;
}

/* Demangled: dolby::DlbEffect::handle_EFFECT_CMD_SET_AUDIO_MODE(dolby::EffectContext&, dolby::ParserBuffer&, dolby::ParserBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect32handle_EFFECT_CMD_SET_AUDIO_MODEERNS_13EffectContextERNS_12ParserBufferES4_(void) {
    ALOGD("_ZN5dolby9DlbEffect32handle_EFFECT_CMD_SET_AUDIO_MODEERNS_13EffectContextERNS_12ParserBufferES4_() called");
    return 0;
}

/* Demangled: dlb_blk_Liir1L_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Liir1L_flex(void) {
    ALOGD("dlb_blk_Liir1L_flex() called");
    return 0;
}

/* Demangled: vqe_get_valid_alg_switches */
extern "C" __attribute__((visibility("default"))) int vqe_get_valid_alg_switches(void) {
    ALOGD("vqe_get_valid_alg_switches() called");
    return 0;
}

/* Demangled: dolby::DlbEffect::effectGetDescriptor(effect_interface_s**, effect_descriptor_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DlbEffect19effectGetDescriptorEPP18effect_interface_sP19effect_descriptor_s(void) {
    ALOGD("_ZN5dolby9DlbEffect19effectGetDescriptorEPP18effect_interface_sP19effect_descriptor_s() called");
    return 0;
}

/* Demangled: dlb_blk_LminLLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LminLLL_flex(void) {
    ALOGD("dlb_blk_LminLLL_flex() called");
    return 0;
}

/* Demangled: dlb_wave_get_format */
extern "C" __attribute__((visibility("default"))) int dlb_wave_get_format(void) {
    ALOGD("dlb_wave_get_format() called");
    return 0;
}

/* Exported Object: a_shift_table_MDCT_320x320x49_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDCT_320x320x49_32000_tab = NULL;

/* Demangled: vsv_har_close */
extern "C" __attribute__((visibility("default"))) int vsv_har_close(void) {
    ALOGD("vsv_har_close() called");
    return 0;
}

/* Demangled: dlb_fft_inv_usc_192 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_usc_192(void) {
    ALOGD("dlb_fft_inv_usc_192() called");
    return 0;
}

/* Demangled: DLB_hybrid_analysisCL_get_delay */
extern "C" __attribute__((visibility("default"))) int DLB_hybrid_analysisCL_get_delay(void) {
    ALOGD("DLB_hybrid_analysisCL_get_delay() called");
    return 0;
}

/* Demangled: dlb_wave_get_sample_rate */
extern "C" __attribute__((visibility("default"))) int dlb_wave_get_sample_rate(void) {
    ALOGD("dlb_wave_get_sample_rate() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_576 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_576(void) {
    ALOGD("DLB_r4_inv_fft_576() called");
    return 0;
}

/* Demangled: dlb_wave_seek_to_frame */
extern "C" __attribute__((visibility("default"))) int dlb_wave_seek_to_frame(void) {
    ALOGD("dlb_wave_seek_to_frame() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L72 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L72 = NULL;

/* Demangled: reset_Phase90Hilbert */
extern "C" __attribute__((visibility("default"))) int reset_Phase90Hilbert(void) {
    ALOGD("reset_Phase90Hilbert() called");
    return 0;
}

/* Exported Object: dlb_cos_8_full */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_8_full = NULL;

/* Demangled: dolby::DapEffectContext::setParam(int, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext8setParamEijPv(void) {
    ALOGD("_ZN5dolby16DapEffectContext8setParamEijPv() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L24_1 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L24_1 = NULL;

/* Demangled: DLB_r4_inv_fft_720 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_720(void) {
    ALOGD("DLB_r4_inv_fft_720() called");
    return 0;
}

/* Demangled: dolby::EffectContext::release() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext7releaseEv(void) {
    ALOGD("_ZN5dolby13EffectContext7releaseEv() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L24_2 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L24_2 = NULL;

/* Demangled: DLB_r4_fft_24_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_24_s(void) {
    ALOGD("DLB_r4_fft_24_s() called");
    return 0;
}

/* Demangled: DLB_r4_fft_320 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_320(void) {
    ALOGD("DLB_r4_fft_320() called");
    return 0;
}

/* Demangled: dlb_octfile_flush */
extern "C" __attribute__((visibility("default"))) int dlb_octfile_flush(void) {
    ALOGD("dlb_octfile_flush() called");
    return 0;
}

/* Demangled: utlog_open */
extern "C" __attribute__((visibility("default"))) int utlog_open(void) {
    ALOGD("utlog_open() called");
    return 0;
}

/* Demangled: vqe_get_ml_start_decision */
extern "C" __attribute__((visibility("default"))) int vqe_get_ml_start_decision(void) {
    ALOGD("vqe_get_ml_start_decision() called");
    return 0;
}

/* Demangled: dlb_BLmpy_scale_xBLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmpy_scale_xBLSU_flex(void) {
    ALOGD("dlb_BLmpy_scale_xBLSU_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_L384 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L384 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L256 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L256 = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_288 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_288(void) {
    ALOGD("dlb_fft_fwd_usc_288() called");
    return 0;
}

/* Exported Object: dlb_cos_48_ast_mini_twiddle */
extern "C" __attribute__((visibility("default"))) void* dlb_cos_48_ast_mini_twiddle = NULL;

/* Demangled: dolby::EffectContext::hasProcessConfigChanged(buffer_config_s const&, buffer_config_s const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext23hasProcessConfigChangedERK15buffer_config_sS3_(void) {
    ALOGD("_ZN5dolby13EffectContext23hasProcessConfigChangedERK15buffer_config_sS3_() called");
    return 0;
}

/* Exported Object: vtable for dolby::EffectContext::DmsDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby13EffectContext17DmsDeathRecipientE = NULL;

/* Demangled: dlb_blk_Lcrossfade_gainLS_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lcrossfade_gainLS_flex(void) {
    ALOGD("dlb_blk_Lcrossfade_gainLS_flex() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_256 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_256(void) {
    ALOGD("dlb_fft_inv_scl_256() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L45_cos */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L45_cos = NULL;

/* Demangled: vsv_flux_init */
extern "C" __attribute__((visibility("default"))) int vsv_flux_init(void) {
    ALOGD("vsv_flux_init() called");
    return 0;
}

/* Demangled: dolby::DapEffectContext::getParam(int, unsigned int*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DapEffectContext8getParamEiPjPv(void) {
    ALOGD("_ZN5dolby16DapEffectContext8getParamEiPjPv() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_30_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_30_s(void) {
    ALOGD("DLB_r4_inv_fft_30_s() called");
    return 0;
}

/* Exported Object: vtable for dolby::BufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby14BufferProviderE = NULL;

/* Demangled: vsv_asa_num_inputs */
extern "C" __attribute__((visibility("default"))) int vsv_asa_num_inputs(void) {
    ALOGD("vsv_asa_num_inputs() called");
    return 0;
}

/* Demangled: vsv_ns_set_maxsnr */
extern "C" __attribute__((visibility("default"))) int vsv_ns_set_maxsnr(void) {
    ALOGD("vsv_ns_set_maxsnr() called");
    return 0;
}

/* Demangled: DLB_r4_fft_6_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_fft_6_s(void) {
    ALOGD("DLB_r4_fft_6_s() called");
    return 0;
}

/* Demangled: dft_init */
extern "C" __attribute__((visibility("default"))) int dft_init(void) {
    ALOGD("dft_init() called");
    return 0;
}

/* Exported Object: a_shift_table_CQMF_160x160x41_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_CQMF_160x160x41_16000_tab = NULL;

/* Exported Object: a_vsv_agc_defs_tab */
extern "C" __attribute__((visibility("default"))) void* a_vsv_agc_defs_tab = NULL;

/* Exported Object: a_vsv_asa_defs_tab */
extern "C" __attribute__((visibility("default"))) void* a_vsv_asa_defs_tab = NULL;

/* Demangled: DLB_blk_LintegrateL_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LintegrateL_setup(void) {
    ALOGD("DLB_blk_LintegrateL_setup() called");
    return 0;
}

/* Demangled: DLB_blk_LminLL_strict */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LminLL_strict(void) {
    ALOGD("DLB_blk_LminLL_strict() called");
    return 0;
}

/* Demangled: DLB_r4_inv_fft_96_s */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_96_s(void) {
    ALOGD("DLB_r4_inv_fft_96_s() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisL_query_mem */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_query_mem(void) {
    ALOGD("DLB_qmf_synthesisL_query_mem() called");
    return 0;
}

/* Demangled: dlb_riff_chunk_id */
extern "C" __attribute__((visibility("default"))) int dlb_riff_chunk_id(void) {
    ALOGD("dlb_riff_chunk_id() called");
    return 0;
}

/* Exported Object: a_shift_table_MDXT_320x320x49_32000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDXT_320x320x49_32000_tab = NULL;

/* Demangled: vlib_transform_cleanup */
extern "C" __attribute__((visibility("default"))) int vlib_transform_cleanup(void) {
    ALOGD("vlib_transform_cleanup() called");
    return 0;
}

/* Exported Object: a_vsv_ns_defs_tab */
extern "C" __attribute__((visibility("default"))) void* a_vsv_ns_defs_tab = NULL;

/* Demangled: vsv_tx_get_outputs */
extern "C" __attribute__((visibility("default"))) int vsv_tx_get_outputs(void) {
    ALOGD("vsv_tx_get_outputs() called");
    return 0;
}

/* Exported Object: VTT for dolby::DapEffectContext::DlbDapEffCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5dolby16DapEffectContext18DlbDapEffCallbacksE = NULL;

/* Demangled: dlb_blk_Lmpy_shlLSU_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_Lmpy_shlLSU_flex(void) {
    ALOGD("dlb_blk_Lmpy_shlLSU_flex() called");
    return 0;
}

/* Demangled: DLB_blk_LnrrecipLU_setup */
extern "C" __attribute__((visibility("default"))) int DLB_blk_LnrrecipLU_setup(void) {
    ALOGD("DLB_blk_LnrrecipLU_setup() called");
    return 0;
}

/* Demangled: DLB_mfb_p10km_analysisL_reset_channel */
extern "C" __attribute__((visibility("default"))) int DLB_mfb_p10km_analysisL_reset_channel(void) {
    ALOGD("DLB_mfb_p10km_analysisL_reset_channel() called");
    return 0;
}

/* Demangled: dolby::VqeCrossfadeProcess::~VqeCrossfadeProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19VqeCrossfadeProcessD0Ev(void) {
    ALOGD("_ZN5dolby19VqeCrossfadeProcessD0Ev() called");
    return 0;
}

/* Demangled: dolby::DlbBufferAdapter::~DlbBufferAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DlbBufferAdapterD2Ev(void) {
    ALOGD("_ZN5dolby16DlbBufferAdapterD2Ev() called");
    return 0;
}

/* Demangled: vsv_process_banding */
extern "C" __attribute__((visibility("default"))) int vsv_process_banding(void) {
    ALOGD("vsv_process_banding() called");
    return 0;
}

/* Demangled: dlb_BLmpy_scaleBLSU_inplace_flex */
extern "C" __attribute__((visibility("default"))) int dlb_BLmpy_scaleBLSU_inplace_flex(void) {
    ALOGD("dlb_BLmpy_scaleBLSU_inplace_flex() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L120 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L120 = NULL;

/* Demangled: vsv_tx_force */
extern "C" __attribute__((visibility("default"))) int vsv_tx_force(void) {
    ALOGD("vsv_tx_force() called");
    return 0;
}

/* Demangled: DLB_vec_Sabs_maxSU_strict */
extern "C" __attribute__((visibility("default"))) int DLB_vec_Sabs_maxSU_strict(void) {
    ALOGD("DLB_vec_Sabs_maxSU_strict() called");
    return 0;
}

/* Demangled: dolby::BufferProvider::BufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14BufferProviderC2Ev(void) {
    ALOGD("_ZN5dolby14BufferProviderC2Ev() called");
    return 0;
}

/* Demangled: dolby::DlbBufferProvider::~DlbBufferProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17DlbBufferProviderD1Ev(void) {
    ALOGD("_ZN5dolby17DlbBufferProviderD1Ev() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_12 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_12(void) {
    ALOGD("dlb_fft_fwd_usc_12() called");
    return 0;
}

/* Demangled: DLB_qmf_synthesisL_copy_states */
extern "C" __attribute__((visibility("default"))) int DLB_qmf_synthesisL_copy_states(void) {
    ALOGD("DLB_qmf_synthesisL_copy_states() called");
    return 0;
}

/* Demangled: vsv_ml_close */
extern "C" __attribute__((visibility("default"))) int vsv_ml_close(void) {
    ALOGD("vsv_ml_close() called");
    return 0;
}

/* Exported Object: a_vsv_ml_defs_tab */
extern "C" __attribute__((visibility("default"))) void* a_vsv_ml_defs_tab = NULL;

/* Demangled: DLB_r4_cplx_fwd_scaled */
extern "C" __attribute__((visibility("default"))) int DLB_r4_cplx_fwd_scaled(void) {
    ALOGD("DLB_r4_cplx_fwd_scaled() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_L72 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L72 = NULL;

/* Demangled: DLB_r4_inv_fft_160 */
extern "C" __attribute__((visibility("default"))) int DLB_r4_inv_fft_160(void) {
    ALOGD("DLB_r4_inv_fft_160() called");
    return 0;
}

/* Demangled: dlb_fft_inv_scl_120 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_inv_scl_120(void) {
    ALOGD("dlb_fft_inv_scl_120() called");
    return 0;
}

/* Demangled: DLB_time_init */
extern "C" __attribute__((visibility("default"))) int DLB_time_init(void) {
    ALOGD("DLB_time_init() called");
    return 0;
}

/* Demangled: dlb_octfile_rewind */
extern "C" __attribute__((visibility("default"))) int dlb_octfile_rewind(void) {
    ALOGD("dlb_octfile_rewind() called");
    return 0;
}

/* Exported Object: vsv_ns_defs_num */
extern "C" __attribute__((visibility("default"))) void* vsv_ns_defs_num = NULL;

/* Demangled: dolby::VqeProcess::process(dolby::BufferProvider*, dolby::BufferProvider*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10VqeProcess7processEPNS_14BufferProviderES2_(void) {
    ALOGD("_ZN5dolby10VqeProcess7processEPNS_14BufferProviderES2_() called");
    return 0;
}

/* Demangled: dlb_riff_octfile_read */
extern "C" __attribute__((visibility("default"))) int dlb_riff_octfile_read(void) {
    ALOGD("dlb_riff_octfile_read() called");
    return 0;
}

/* Demangled: vsv_banding_cleanup */
extern "C" __attribute__((visibility("default"))) int vsv_banding_cleanup(void) {
    ALOGD("vsv_banding_cleanup() called");
    return 0;
}

/* Demangled: vsv_ml_cleanup */
extern "C" __attribute__((visibility("default"))) int vsv_ml_cleanup(void) {
    ALOGD("vsv_ml_cleanup() called");
    return 0;
}

/* Exported Object: dlb_dct_twiddle_table16_rev_1_L144 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_1_L144 = NULL;

/* Demangled: dlb_fft_fwd_usc_15 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_15(void) {
    ALOGD("dlb_fft_fwd_usc_15() called");
    return 0;
}

/* Exported Object: DLB_MFB_P10KM_P4_319SC */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_P10KM_P4_319SC = NULL;

/* Demangled: dlb_octfile_open_memory_fixed */
extern "C" __attribute__((visibility("default"))) int dlb_octfile_open_memory_fixed(void) {
    ALOGD("dlb_octfile_open_memory_fixed() called");
    return 0;
}

/* Demangled: DLB_blk_Lmix_shlUnL */
extern "C" __attribute__((visibility("default"))) int DLB_blk_Lmix_shlUnL(void) {
    ALOGD("DLB_blk_Lmix_shlUnL() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_480 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_480(void) {
    ALOGD("dlb_fft_fwd_scl_480() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_usc_16 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_usc_16(void) {
    ALOGD("dlb_fft_fwd_usc_16() called");
    return 0;
}

/* Exported Object: DLB_MFB_TWID64E */
extern "C" __attribute__((visibility("default"))) void* DLB_MFB_TWID64E = NULL;

/* Demangled: dlb_riff_write_chunk_data */
extern "C" __attribute__((visibility("default"))) int dlb_riff_write_chunk_data(void) {
    ALOGD("dlb_riff_write_chunk_data() called");
    return 0;
}

/* Exported Object: a_shift_table_MDCT_160x160x41_16000_tab */
extern "C" __attribute__((visibility("default"))) void* a_shift_table_MDCT_160x160x41_16000_tab = NULL;

/* Demangled: vqe_get_asa_obj_level */
extern "C" __attribute__((visibility("default"))) int vqe_get_asa_obj_level(void) {
    ALOGD("vqe_get_asa_obj_level() called");
    return 0;
}

/* Demangled: dlb_valid_pair_ptr */
extern "C" __attribute__((visibility("default"))) int dlb_valid_pair_ptr(void) {
    ALOGD("dlb_valid_pair_ptr() called");
    return 0;
}

/* Demangled: dolby::EffectContext::getVersion(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13EffectContext10getVersionEPiS1_(void) {
    ALOGD("_ZN5dolby13EffectContext10getVersionEPiS1_() called");
    return 0;
}

/* Demangled: dlb_blk_LmixLLLL_flex */
extern "C" __attribute__((visibility("default"))) int dlb_blk_LmixLLLL_flex(void) {
    ALOGD("dlb_blk_LmixLLLL_flex() called");
    return 0;
}

/* Demangled: dlb_fft_fwd_scl_768 */
extern "C" __attribute__((visibility("default"))) int dlb_fft_fwd_scl_768(void) {
    ALOGD("dlb_fft_fwd_scl_768() called");
    return 0;
}

/* Demangled: vstack_open_frame */
extern "C" __attribute__((visibility("default"))) int vstack_open_frame(void) {
    ALOGD("vstack_open_frame() called");
    return 0;
}

/* Exported Object: a_pp_vsv_ml_dec_thr_tab */
extern "C" __attribute__((visibility("default"))) void* a_pp_vsv_ml_dec_thr_tab = NULL;

/* Exported Object: dlb_dct_twiddle_table16_rev_L256 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_rev_L256 = NULL;

/* Exported Object: dlb_dct_twiddle_table16_L128 */
extern "C" __attribute__((visibility("default"))) void* dlb_dct_twiddle_table16_L128 = NULL;
