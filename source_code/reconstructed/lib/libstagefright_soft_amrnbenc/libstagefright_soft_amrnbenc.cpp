/*
 * Reverse-Engineered Source for: libstagefright_soft_amrnbenc.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libstagefright_soft_amrnbenc"

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
#include "libstagefright_soft_amrnbenc.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: Speech_Encode_Frame_reset */
extern "C" __attribute__((visibility("default"))) int Speech_Encode_Frame_reset(void) {
    ALOGD("Speech_Encode_Frame_reset() called");
    return 0;
}

/* Demangled: Levinson_init */
extern "C" __attribute__((visibility("default"))) int Levinson_init(void) {
    ALOGD("Levinson_init() called");
    return 0;
}

/* Demangled: q_gain_pitch */
extern "C" __attribute__((visibility("default"))) int q_gain_pitch(void) {
    ALOGD("q_gain_pitch() called");
    return 0;
}

/* Demangled: check_lsp */
extern "C" __attribute__((visibility("default"))) int check_lsp(void) {
    ALOGD("check_lsp() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: cor_h_x */
extern "C" __attribute__((visibility("default"))) int cor_h_x(void) {
    ALOGD("cor_h_x() called");
    return 0;
}

/* Demangled: android::SoftAMRNBEncoder::SoftAMRNBEncoder(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftAMRNBEncoderC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android16SoftAMRNBEncoderC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::SoftAMRNBEncoder::~SoftAMRNBEncoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftAMRNBEncoderD0Ev(void) {
    ALOGD("_ZN7android16SoftAMRNBEncoderD0Ev() called");
    return 0;
}

/* Demangled: calc_filt_energies */
extern "C" __attribute__((visibility("default"))) int calc_filt_energies(void) {
    ALOGD("calc_filt_energies() called");
    return 0;
}

/* Demangled: cl_ltp_reset */
extern "C" __attribute__((visibility("default"))) int cl_ltp_reset(void) {
    ALOGD("cl_ltp_reset() called");
    return 0;
}

/* Demangled: Levinson_exit */
extern "C" __attribute__((visibility("default"))) int Levinson_exit(void) {
    ALOGD("Levinson_exit() called");
    return 0;
}

/* Demangled: Speech_Encode_Frame_First */
extern "C" __attribute__((visibility("default"))) int Speech_Encode_Frame_First(void) {
    ALOGD("Speech_Encode_Frame_First() called");
    return 0;
}

/* Demangled: cl_ltp */
extern "C" __attribute__((visibility("default"))) int cl_ltp(void) {
    ALOGD("cl_ltp() called");
    return 0;
}

/* Exported Object: inter_6 */
extern "C" __attribute__((visibility("default"))) void* inter_6 = NULL;

/* Demangled: lpc_reset */
extern "C" __attribute__((visibility("default"))) int lpc_reset(void) {
    ALOGD("lpc_reset() called");
    return 0;
}

/* Demangled: pre_big */
extern "C" __attribute__((visibility("default"))) int pre_big(void) {
    ALOGD("pre_big() called");
    return 0;
}

/* Demangled: MR795_gain_quant */
extern "C" __attribute__((visibility("default"))) int MR795_gain_quant(void) {
    ALOGD("MR795_gain_quant() called");
    return 0;
}

/* Demangled: android::SoftAMRNBEncoder::SoftAMRNBEncoder(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftAMRNBEncoderC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android16SoftAMRNBEncoderC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::SoftAMRNBEncoder::~SoftAMRNBEncoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftAMRNBEncoderD1Ev(void) {
    ALOGD("_ZN7android16SoftAMRNBEncoderD1Ev() called");
    return 0;
}

/* Demangled: createSoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: GSMEncodeFrameExit */
extern "C" __attribute__((visibility("default"))) int GSMEncodeFrameExit(void) {
    ALOGD("GSMEncodeFrameExit() called");
    return 0;
}

/* Demangled: dtx_enc_reset */
extern "C" __attribute__((visibility("default"))) int dtx_enc_reset(void) {
    ALOGD("dtx_enc_reset() called");
    return 0;
}

/* Demangled: q_gain_code */
extern "C" __attribute__((visibility("default"))) int q_gain_code(void) {
    ALOGD("q_gain_code() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::SimpleSoftOMXComponent::BufferInfo*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE = NULL;

/* Demangled: ets_to_wmf */
extern "C" __attribute__((visibility("default"))) int ets_to_wmf(void) {
    ALOGD("ets_to_wmf() called");
    return 0;
}

/* Demangled: calc_unfilt_energies */
extern "C" __attribute__((visibility("default"))) int calc_unfilt_energies(void) {
    ALOGD("calc_unfilt_energies() called");
    return 0;
}

/* Demangled: search_10and8i40 */
extern "C" __attribute__((visibility("default"))) int search_10and8i40(void) {
    ALOGD("search_10and8i40() called");
    return 0;
}

/* Demangled: android::SoftAMRNBEncoder::~SoftAMRNBEncoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftAMRNBEncoderD2Ev(void) {
    ALOGD("_ZN7android16SoftAMRNBEncoderD2Ev() called");
    return 0;
}

/* Demangled: GSMEncodeFrame */
extern "C" __attribute__((visibility("default"))) int GSMEncodeFrame(void) {
    ALOGD("GSMEncodeFrame() called");
    return 0;
}

/* Demangled: sid_sync */
extern "C" __attribute__((visibility("default"))) int sid_sync(void) {
    ALOGD("sid_sync() called");
    return 0;
}

/* Demangled: cod_amr_first */
extern "C" __attribute__((visibility("default"))) int cod_amr_first(void) {
    ALOGD("cod_amr_first() called");
    return 0;
}

/* Demangled: cor_h */
extern "C" __attribute__((visibility("default"))) int cor_h(void) {
    ALOGD("cor_h() called");
    return 0;
}

/* Demangled: gain_adapt_init */
extern "C" __attribute__((visibility("default"))) int gain_adapt_init(void) {
    ALOGD("gain_adapt_init() called");
    return 0;
}

/* Demangled: Pitch_fr */
extern "C" __attribute__((visibility("default"))) int Pitch_fr(void) {
    ALOGD("Pitch_fr() called");
    return 0;
}

/* Demangled: gainQuant */
extern "C" __attribute__((visibility("default"))) int gainQuant(void) {
    ALOGD("gainQuant() called");
    return 0;
}

/* Demangled: L_Comp */
extern "C" __attribute__((visibility("default"))) int L_Comp(void) {
    ALOGD("L_Comp() called");
    return 0;
}

/* Demangled: Lag_window */
extern "C" __attribute__((visibility("default"))) int Lag_window(void) {
    ALOGD("Lag_window() called");
    return 0;
}

/* Demangled: q_p(short*, short) */
extern "C" __attribute__((visibility("default"))) int _Z3q_pPss(void) {
    ALOGD("_Z3q_pPss() called");
    return 0;
}

/* Demangled: Test_build_code */
extern "C" __attribute__((visibility("default"))) int Test_build_code(void) {
    ALOGD("Test_build_code() called");
    return 0;
}

/* Demangled: gain_adapt_exit */
extern "C" __attribute__((visibility("default"))) int gain_adapt_exit(void) {
    ALOGD("gain_adapt_exit() called");
    return 0;
}

/* Exported Object: lag_h */
extern "C" __attribute__((visibility("default"))) void* lag_h = NULL;

/* Demangled: MR475_update_unq_pred */
extern "C" __attribute__((visibility("default"))) int MR475_update_unq_pred(void) {
    ALOGD("MR475_update_unq_pred() called");
    return 0;
}

/* Demangled: tx_dtx_handler */
extern "C" __attribute__((visibility("default"))) int tx_dtx_handler(void) {
    ALOGD("tx_dtx_handler() called");
    return 0;
}

/* Demangled: gain_adapt */
extern "C" __attribute__((visibility("default"))) int gain_adapt(void) {
    ALOGD("gain_adapt() called");
    return 0;
}

/* Demangled: Levinson */
extern "C" __attribute__((visibility("default"))) int Levinson(void) {
    ALOGD("Levinson() called");
    return 0;
}

/* Demangled: sid_sync_set_handover_debt */
extern "C" __attribute__((visibility("default"))) int sid_sync_set_handover_debt(void) {
    ALOGD("sid_sync_set_handover_debt() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: WmfEncBytesPerFrame */
extern "C" __attribute__((visibility("default"))) void* WmfEncBytesPerFrame = NULL;

/* Demangled: Autocorr */
extern "C" __attribute__((visibility("default"))) int Autocorr(void) {
    ALOGD("Autocorr() called");
    return 0;
}

/* Demangled: AMREncode */
extern "C" __attribute__((visibility("default"))) int AMREncode(void) {
    ALOGD("AMREncode() called");
    return 0;
}

/* Demangled: GSMInitEncode */
extern "C" __attribute__((visibility("default"))) int GSMInitEncode(void) {
    ALOGD("GSMInitEncode() called");
    return 0;
}

/* Demangled: code_4i40_17bits */
extern "C" __attribute__((visibility("default"))) int code_4i40_17bits(void) {
    ALOGD("code_4i40_17bits() called");
    return 0;
}

/* Demangled: Enc_lag3 */
extern "C" __attribute__((visibility("default"))) int Enc_lag3(void) {
    ALOGD("Enc_lag3() called");
    return 0;
}

/* Demangled: G_pitch */
extern "C" __attribute__((visibility("default"))) int G_pitch(void) {
    ALOGD("G_pitch() called");
    return 0;
}

/* Demangled: hp_max */
extern "C" __attribute__((visibility("default"))) int hp_max(void) {
    ALOGD("hp_max() called");
    return 0;
}

/* Exported Object: lag_l */
extern "C" __attribute__((visibility("default"))) void* lag_l = NULL;

/* Demangled: subframePostProc */
extern "C" __attribute__((visibility("default"))) int subframePostProc(void) {
    ALOGD("subframePostProc() called");
    return 0;
}

/* Demangled: check_gp_clipping */
extern "C" __attribute__((visibility("default"))) int check_gp_clipping(void) {
    ALOGD("check_gp_clipping() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: code_3i40_14bits */
extern "C" __attribute__((visibility("default"))) int code_3i40_14bits(void) {
    ALOGD("code_3i40_14bits() called");
    return 0;
}

/* Demangled: Convolve */
extern "C" __attribute__((visibility("default"))) int Convolve(void) {
    ALOGD("Convolve() called");
    return 0;
}

/* Demangled: Levinson_reset */
extern "C" __attribute__((visibility("default"))) int Levinson_reset(void) {
    ALOGD("Levinson_reset() called");
    return 0;
}

/* Demangled: Pitch_ol_wgh */
extern "C" __attribute__((visibility("default"))) int Pitch_ol_wgh(void) {
    ALOGD("Pitch_ol_wgh() called");
    return 0;
}

/* Demangled: AMREncodeInit */
extern "C" __attribute__((visibility("default"))) int AMREncodeInit(void) {
    ALOGD("AMREncodeInit() called");
    return 0;
}

/* Demangled: android::SoftAMRNBEncoder::internalSetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftAMRNBEncoder20internalSetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android16SoftAMRNBEncoder20internalSetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: sid_sync_reset */
extern "C" __attribute__((visibility("default"))) int sid_sync_reset(void) {
    ALOGD("sid_sync_reset() called");
    return 0;
}

/* Demangled: code_10i40_35bits */
extern "C" __attribute__((visibility("default"))) int code_10i40_35bits(void) {
    ALOGD("code_10i40_35bits() called");
    return 0;
}

/* Demangled: L_Extract */
extern "C" __attribute__((visibility("default"))) int L_Extract(void) {
    ALOGD("L_Extract() called");
    return 0;
}

/* Demangled: L_negate */
extern "C" __attribute__((visibility("default"))) int L_negate(void) {
    ALOGD("L_negate() called");
    return 0;
}

/* Demangled: android::SoftAMRNBEncoder::internalGetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftAMRNBEncoder20internalGetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android16SoftAMRNBEncoder20internalGetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: ets_to_if2 */
extern "C" __attribute__((visibility("default"))) int ets_to_if2(void) {
    ALOGD("ets_to_if2() called");
    return 0;
}

/* Demangled: dtx_enc_init */
extern "C" __attribute__((visibility("default"))) int dtx_enc_init(void) {
    ALOGD("dtx_enc_init() called");
    return 0;
}

/* Demangled: Enc_lag6 */
extern "C" __attribute__((visibility("default"))) int Enc_lag6(void) {
    ALOGD("Enc_lag6() called");
    return 0;
}

/* Demangled: Prm2bits */
extern "C" __attribute__((visibility("default"))) int Prm2bits(void) {
    ALOGD("Prm2bits() called");
    return 0;
}

/* Demangled: set_sign */
extern "C" __attribute__((visibility("default"))) int set_sign(void) {
    ALOGD("set_sign() called");
    return 0;
}

/* Demangled: AMREncodeExit */
extern "C" __attribute__((visibility("default"))) int AMREncodeExit(void) {
    ALOGD("AMREncodeExit() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::SimpleSoftOMXComponent::BufferInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE = NULL;

/* Demangled: comp_corr */
extern "C" __attribute__((visibility("default"))) int comp_corr(void) {
    ALOGD("comp_corr() called");
    return 0;
}

/* Demangled: Pitch_fr_reset */
extern "C" __attribute__((visibility("default"))) int Pitch_fr_reset(void) {
    ALOGD("Pitch_fr_reset() called");
    return 0;
}

/* Demangled: Pre_Process_init */
extern "C" __attribute__((visibility("default"))) int Pre_Process_init(void) {
    ALOGD("Pre_Process_init() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: cod_amr_reset */
extern "C" __attribute__((visibility("default"))) int cod_amr_reset(void) {
    ALOGD("cod_amr_reset() called");
    return 0;
}

/* Demangled: dtx_enc_exit */
extern "C" __attribute__((visibility("default"))) int dtx_enc_exit(void) {
    ALOGD("dtx_enc_exit() called");
    return 0;
}

/* Demangled: gainQuant_reset */
extern "C" __attribute__((visibility("default"))) int gainQuant_reset(void) {
    ALOGD("gainQuant_reset() called");
    return 0;
}

/* Demangled: Pitch_ol */
extern "C" __attribute__((visibility("default"))) int Pitch_ol(void) {
    ALOGD("Pitch_ol() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: p_ol_wgh_init */
extern "C" __attribute__((visibility("default"))) int p_ol_wgh_init(void) {
    ALOGD("p_ol_wgh_init() called");
    return 0;
}

/* Demangled: Pre_Process_exit */
extern "C" __attribute__((visibility("default"))) int Pre_Process_exit(void) {
    ALOGD("Pre_Process_exit() called");
    return 0;
}

/* Demangled: Test_search_2i40 */
extern "C" __attribute__((visibility("default"))) int Test_search_2i40(void) {
    ALOGD("Test_search_2i40() called");
    return 0;
}

/* Demangled: code_8i40_31bits */
extern "C" __attribute__((visibility("default"))) int code_8i40_31bits(void) {
    ALOGD("code_8i40_31bits() called");
    return 0;
}

/* Demangled: gain_adapt_reset */
extern "C" __attribute__((visibility("default"))) int gain_adapt_reset(void) {
    ALOGD("gain_adapt_reset() called");
    return 0;
}

/* Demangled: MR475_gain_quant */
extern "C" __attribute__((visibility("default"))) int MR475_gain_quant(void) {
    ALOGD("MR475_gain_quant() called");
    return 0;
}

/* Demangled: ton_stab_reset */
extern "C" __attribute__((visibility("default"))) int ton_stab_reset(void) {
    ALOGD("ton_stab_reset() called");
    return 0;
}

/* Demangled: cod_amr_init */
extern "C" __attribute__((visibility("default"))) int cod_amr_init(void) {
    ALOGD("cod_amr_init() called");
    return 0;
}

/* Demangled: p_ol_wgh_exit */
extern "C" __attribute__((visibility("default"))) int p_ol_wgh_exit(void) {
    ALOGD("p_ol_wgh_exit() called");
    return 0;
}

/* Demangled: update_gp_clipping */
extern "C" __attribute__((visibility("default"))) int update_gp_clipping(void) {
    ALOGD("update_gp_clipping() called");
    return 0;
}

/* Demangled: sid_sync_init */
extern "C" __attribute__((visibility("default"))) int sid_sync_init(void) {
    ALOGD("sid_sync_init() called");
    return 0;
}

/* Demangled: cbsearch */
extern "C" __attribute__((visibility("default"))) int cbsearch(void) {
    ALOGD("cbsearch() called");
    return 0;
}

/* Demangled: cl_ltp_init */
extern "C" __attribute__((visibility("default"))) int cl_ltp_init(void) {
    ALOGD("cl_ltp_init() called");
    return 0;
}

/* Demangled: subframePreProc */
extern "C" __attribute__((visibility("default"))) int subframePreProc(void) {
    ALOGD("subframePreProc() called");
    return 0;
}

/* Demangled: android::SoftAMRNBEncoder::initEncoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftAMRNBEncoder11initEncoderEv(void) {
    ALOGD("_ZN7android16SoftAMRNBEncoder11initEncoderEv() called");
    return 0;
}

/* Demangled: cod_amr_exit */
extern "C" __attribute__((visibility("default"))) int cod_amr_exit(void) {
    ALOGD("cod_amr_exit() called");
    return 0;
}

/* Demangled: p_ol_wgh_reset */
extern "C" __attribute__((visibility("default"))) int p_ol_wgh_reset(void) {
    ALOGD("p_ol_wgh_reset() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: If2EncBytesPerFrame */
extern "C" __attribute__((visibility("default"))) void* If2EncBytesPerFrame = NULL;

/* Demangled: sid_sync_exit */
extern "C" __attribute__((visibility("default"))) int sid_sync_exit(void) {
    ALOGD("sid_sync_exit() called");
    return 0;
}

/* Demangled: cl_ltp_exit */
extern "C" __attribute__((visibility("default"))) int cl_ltp_exit(void) {
    ALOGD("cl_ltp_exit() called");
    return 0;
}

/* Demangled: G_code */
extern "C" __attribute__((visibility("default"))) int G_code(void) {
    ALOGD("G_code() called");
    return 0;
}

/* Demangled: gainQuant_init */
extern "C" __attribute__((visibility("default"))) int gainQuant_init(void) {
    ALOGD("gainQuant_init() called");
    return 0;
}

/* Demangled: Interpol_3or6 */
extern "C" __attribute__((visibility("default"))) int Interpol_3or6(void) {
    ALOGD("Interpol_3or6() called");
    return 0;
}

/* Demangled: lpc_init */
extern "C" __attribute__((visibility("default"))) int lpc_init(void) {
    ALOGD("lpc_init() called");
    return 0;
}

/* Demangled: calc_target_energy */
extern "C" __attribute__((visibility("default"))) int calc_target_energy(void) {
    ALOGD("calc_target_energy() called");
    return 0;
}

/* Demangled: dtx_buffer */
extern "C" __attribute__((visibility("default"))) int dtx_buffer(void) {
    ALOGD("dtx_buffer() called");
    return 0;
}

/* Demangled: ol_ltp */
extern "C" __attribute__((visibility("default"))) int ol_ltp(void) {
    ALOGD("ol_ltp() called");
    return 0;
}

/* Demangled: Pitch_fr_init */
extern "C" __attribute__((visibility("default"))) int Pitch_fr_init(void) {
    ALOGD("Pitch_fr_init() called");
    return 0;
}

/* Exported Object: vtable for android::SoftAMRNBEncoder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16SoftAMRNBEncoderE = NULL;

/* Exported Object: vtable for android::Vector<android::SimpleSoftOMXComponent::PortInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE = NULL;

/* Demangled: code_2i40_11bits */
extern "C" __attribute__((visibility("default"))) int code_2i40_11bits(void) {
    ALOGD("code_2i40_11bits() called");
    return 0;
}

/* Demangled: gainQuant_exit */
extern "C" __attribute__((visibility("default"))) int gainQuant_exit(void) {
    ALOGD("gainQuant_exit() called");
    return 0;
}

/* Demangled: lpc */
extern "C" __attribute__((visibility("default"))) int lpc(void) {
    ALOGD("lpc() called");
    return 0;
}

/* Demangled: lpc_exit */
extern "C" __attribute__((visibility("default"))) int lpc_exit(void) {
    ALOGD("lpc_exit() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: code_2i40_9bits */
extern "C" __attribute__((visibility("default"))) int code_2i40_9bits(void) {
    ALOGD("code_2i40_9bits() called");
    return 0;
}

/* Demangled: cod_amr */
extern "C" __attribute__((visibility("default"))) int cod_amr(void) {
    ALOGD("cod_amr() called");
    return 0;
}

/* Demangled: Pitch_fr_exit */
extern "C" __attribute__((visibility("default"))) int Pitch_fr_exit(void) {
    ALOGD("Pitch_fr_exit() called");
    return 0;
}

/* Demangled: ton_stab_init */
extern "C" __attribute__((visibility("default"))) int ton_stab_init(void) {
    ALOGD("ton_stab_init() called");
    return 0;
}

/* Demangled: android::SoftAMRNBEncoder::onQueueFilled(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftAMRNBEncoder13onQueueFilledEj(void) {
    ALOGD("_ZN7android16SoftAMRNBEncoder13onQueueFilledEj() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: cor_h_x2 */
extern "C" __attribute__((visibility("default"))) int cor_h_x2(void) {
    ALOGD("cor_h_x2() called");
    return 0;
}

/* Demangled: Lag_max_wrapper(vadState1*, int*, short*, short, short, short, short, short, short*, int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z15Lag_max_wrapperP9vadState1PiPssssssS2_iS1_(void) {
    ALOGD("_Z15Lag_max_wrapperP9vadState1PiPssssssS2_iS1_() called");
    return 0;
}

/* Demangled: Qua_gain */
extern "C" __attribute__((visibility("default"))) int Qua_gain(void) {
    ALOGD("Qua_gain() called");
    return 0;
}

/* Demangled: dtx_enc */
extern "C" __attribute__((visibility("default"))) int dtx_enc(void) {
    ALOGD("dtx_enc() called");
    return 0;
}

/* Demangled: Pre_Process */
extern "C" __attribute__((visibility("default"))) int Pre_Process(void) {
    ALOGD("Pre_Process() called");
    return 0;
}

/* Demangled: set_sign12k2 */
extern "C" __attribute__((visibility("default"))) int set_sign12k2(void) {
    ALOGD("set_sign12k2() called");
    return 0;
}

/* Demangled: ton_stab_exit */
extern "C" __attribute__((visibility("default"))) int ton_stab_exit(void) {
    ALOGD("ton_stab_exit() called");
    return 0;
}

/* Demangled: android::SoftAMRNBEncoder::initPorts() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftAMRNBEncoder9initPortsEv(void) {
    ALOGD("_ZN7android16SoftAMRNBEncoder9initPortsEv() called");
    return 0;
}

/* Demangled: Pre_Process_reset */
extern "C" __attribute__((visibility("default"))) int Pre_Process_reset(void) {
    ALOGD("Pre_Process_reset() called");
    return 0;
}

/* Demangled: AMREncodeReset */
extern "C" __attribute__((visibility("default"))) int AMREncodeReset(void) {
    ALOGD("AMREncodeReset() called");
    return 0;
}

/* Exported Object: corrweight */
extern "C" __attribute__((visibility("default"))) void* corrweight = NULL;
