/*
 * Reverse-Engineered ABI Specification for: libstagefright_soft_amrnbenc.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libstagefright_soft_amrnbenc.so
 */

#ifndef BEGONIA_RE_LIBSTAGEFRIGHT_SOFT_AMRNBENC_H
#define BEGONIA_RE_LIBSTAGEFRIGHT_SOFT_AMRNBENC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj(void);

/* Symbol: Speech_Encode_Frame_reset */
/* Demangled: Speech_Encode_Frame_reset */
int Speech_Encode_Frame_reset(void);

/* Symbol: Levinson_init */
/* Demangled: Levinson_init */
int Levinson_init(void);

/* Symbol: q_gain_pitch */
/* Demangled: q_gain_pitch */
int q_gain_pitch(void);

/* Symbol: check_lsp */
/* Demangled: check_lsp */
int check_lsp(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: cor_h_x */
/* Demangled: cor_h_x */
int cor_h_x(void);

/* Symbol: _ZN7android16SoftAMRNBEncoderC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::SoftAMRNBEncoder::SoftAMRNBEncoder(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android16SoftAMRNBEncoderC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZN7android16SoftAMRNBEncoderD0Ev */
/* Demangled: android::SoftAMRNBEncoder::~SoftAMRNBEncoder() */
int _ZN7android16SoftAMRNBEncoderD0Ev(void);

/* Symbol: calc_filt_energies */
/* Demangled: calc_filt_energies */
int calc_filt_energies(void);

/* Symbol: cl_ltp_reset */
/* Demangled: cl_ltp_reset */
int cl_ltp_reset(void);

/* Symbol: Levinson_exit */
/* Demangled: Levinson_exit */
int Levinson_exit(void);

/* Symbol: Speech_Encode_Frame_First */
/* Demangled: Speech_Encode_Frame_First */
int Speech_Encode_Frame_First(void);

/* Symbol: cl_ltp */
/* Demangled: cl_ltp */
int cl_ltp(void);

/* Symbol: inter_6 */
/* Demangled: inter_6 */
extern void* inter_6;

/* Symbol: lpc_reset */
/* Demangled: lpc_reset */
int lpc_reset(void);

/* Symbol: pre_big */
/* Demangled: pre_big */
int pre_big(void);

/* Symbol: MR795_gain_quant */
/* Demangled: MR795_gain_quant */
int MR795_gain_quant(void);

/* Symbol: _ZN7android16SoftAMRNBEncoderC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::SoftAMRNBEncoder::SoftAMRNBEncoder(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android16SoftAMRNBEncoderC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZN7android16SoftAMRNBEncoderD1Ev */
/* Demangled: android::SoftAMRNBEncoder::~SoftAMRNBEncoder() */
int _ZN7android16SoftAMRNBEncoderD1Ev(void);

/* Symbol: _Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: createSoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _Z22createSoftOMXComponentPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: GSMEncodeFrameExit */
/* Demangled: GSMEncodeFrameExit */
int GSMEncodeFrameExit(void);

/* Symbol: dtx_enc_reset */
/* Demangled: dtx_enc_reset */
int dtx_enc_reset(void);

/* Symbol: q_gain_code */
/* Demangled: q_gain_code */
int q_gain_code(void);

/* Symbol: _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE */
/* Demangled: vtable for android::List<android::SimpleSoftOMXComponent::BufferInfo*> */
extern void* _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE;

/* Symbol: ets_to_wmf */
/* Demangled: ets_to_wmf */
int ets_to_wmf(void);

/* Symbol: calc_unfilt_energies */
/* Demangled: calc_unfilt_energies */
int calc_unfilt_energies(void);

/* Symbol: search_10and8i40 */
/* Demangled: search_10and8i40 */
int search_10and8i40(void);

/* Symbol: _ZN7android16SoftAMRNBEncoderD2Ev */
/* Demangled: android::SoftAMRNBEncoder::~SoftAMRNBEncoder() */
int _ZN7android16SoftAMRNBEncoderD2Ev(void);

/* Symbol: GSMEncodeFrame */
/* Demangled: GSMEncodeFrame */
int GSMEncodeFrame(void);

/* Symbol: sid_sync */
/* Demangled: sid_sync */
int sid_sync(void);

/* Symbol: cod_amr_first */
/* Demangled: cod_amr_first */
int cod_amr_first(void);

/* Symbol: cor_h */
/* Demangled: cor_h */
int cor_h(void);

/* Symbol: gain_adapt_init */
/* Demangled: gain_adapt_init */
int gain_adapt_init(void);

/* Symbol: Pitch_fr */
/* Demangled: Pitch_fr */
int Pitch_fr(void);

/* Symbol: gainQuant */
/* Demangled: gainQuant */
int gainQuant(void);

/* Symbol: L_Comp */
/* Demangled: L_Comp */
int L_Comp(void);

/* Symbol: Lag_window */
/* Demangled: Lag_window */
int Lag_window(void);

/* Symbol: _Z3q_pPss */
/* Demangled: q_p(short*, short) */
int _Z3q_pPss(void);

/* Symbol: Test_build_code */
/* Demangled: Test_build_code */
int Test_build_code(void);

/* Symbol: gain_adapt_exit */
/* Demangled: gain_adapt_exit */
int gain_adapt_exit(void);

/* Symbol: lag_h */
/* Demangled: lag_h */
extern void* lag_h;

/* Symbol: MR475_update_unq_pred */
/* Demangled: MR475_update_unq_pred */
int MR475_update_unq_pred(void);

/* Symbol: tx_dtx_handler */
/* Demangled: tx_dtx_handler */
int tx_dtx_handler(void);

/* Symbol: gain_adapt */
/* Demangled: gain_adapt */
int gain_adapt(void);

/* Symbol: Levinson */
/* Demangled: Levinson */
int Levinson(void);

/* Symbol: sid_sync_set_handover_debt */
/* Demangled: sid_sync_set_handover_debt */
int sid_sync_set_handover_debt(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj(void);

/* Symbol: WmfEncBytesPerFrame */
/* Demangled: WmfEncBytesPerFrame */
extern void* WmfEncBytesPerFrame;

/* Symbol: Autocorr */
/* Demangled: Autocorr */
int Autocorr(void);

/* Symbol: AMREncode */
/* Demangled: AMREncode */
int AMREncode(void);

/* Symbol: GSMInitEncode */
/* Demangled: GSMInitEncode */
int GSMInitEncode(void);

/* Symbol: code_4i40_17bits */
/* Demangled: code_4i40_17bits */
int code_4i40_17bits(void);

/* Symbol: Enc_lag3 */
/* Demangled: Enc_lag3 */
int Enc_lag3(void);

/* Symbol: G_pitch */
/* Demangled: G_pitch */
int G_pitch(void);

/* Symbol: hp_max */
/* Demangled: hp_max */
int hp_max(void);

/* Symbol: lag_l */
/* Demangled: lag_l */
extern void* lag_l;

/* Symbol: subframePostProc */
/* Demangled: subframePostProc */
int subframePostProc(void);

/* Symbol: check_gp_clipping */
/* Demangled: check_gp_clipping */
int check_gp_clipping(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj(void);

/* Symbol: code_3i40_14bits */
/* Demangled: code_3i40_14bits */
int code_3i40_14bits(void);

/* Symbol: Convolve */
/* Demangled: Convolve */
int Convolve(void);

/* Symbol: Levinson_reset */
/* Demangled: Levinson_reset */
int Levinson_reset(void);

/* Symbol: Pitch_ol_wgh */
/* Demangled: Pitch_ol_wgh */
int Pitch_ol_wgh(void);

/* Symbol: AMREncodeInit */
/* Demangled: AMREncodeInit */
int AMREncodeInit(void);

/* Symbol: _ZN7android16SoftAMRNBEncoder20internalSetParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::SoftAMRNBEncoder::internalSetParameter(OMX_INDEXTYPE, void*) */
int _ZN7android16SoftAMRNBEncoder20internalSetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj(void);

/* Symbol: sid_sync_reset */
/* Demangled: sid_sync_reset */
int sid_sync_reset(void);

/* Symbol: code_10i40_35bits */
/* Demangled: code_10i40_35bits */
int code_10i40_35bits(void);

/* Symbol: L_Extract */
/* Demangled: L_Extract */
int L_Extract(void);

/* Symbol: L_negate */
/* Demangled: L_negate */
int L_negate(void);

/* Symbol: _ZN7android16SoftAMRNBEncoder20internalGetParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::SoftAMRNBEncoder::internalGetParameter(OMX_INDEXTYPE, void*) */
int _ZN7android16SoftAMRNBEncoder20internalGetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: ets_to_if2 */
/* Demangled: ets_to_if2 */
int ets_to_if2(void);

/* Symbol: dtx_enc_init */
/* Demangled: dtx_enc_init */
int dtx_enc_init(void);

/* Symbol: Enc_lag6 */
/* Demangled: Enc_lag6 */
int Enc_lag6(void);

/* Symbol: Prm2bits */
/* Demangled: Prm2bits */
int Prm2bits(void);

/* Symbol: set_sign */
/* Demangled: set_sign */
int set_sign(void);

/* Symbol: AMREncodeExit */
/* Demangled: AMREncodeExit */
int AMREncodeExit(void);

/* Symbol: _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE */
/* Demangled: vtable for android::Vector<android::SimpleSoftOMXComponent::BufferInfo> */
extern void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE;

/* Symbol: comp_corr */
/* Demangled: comp_corr */
int comp_corr(void);

/* Symbol: Pitch_fr_reset */
/* Demangled: Pitch_fr_reset */
int Pitch_fr_reset(void);

/* Symbol: Pre_Process_init */
/* Demangled: Pre_Process_init */
int Pre_Process_init(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: cod_amr_reset */
/* Demangled: cod_amr_reset */
int cod_amr_reset(void);

/* Symbol: dtx_enc_exit */
/* Demangled: dtx_enc_exit */
int dtx_enc_exit(void);

/* Symbol: gainQuant_reset */
/* Demangled: gainQuant_reset */
int gainQuant_reset(void);

/* Symbol: Pitch_ol */
/* Demangled: Pitch_ol */
int Pitch_ol(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj(void);

/* Symbol: p_ol_wgh_init */
/* Demangled: p_ol_wgh_init */
int p_ol_wgh_init(void);

/* Symbol: Pre_Process_exit */
/* Demangled: Pre_Process_exit */
int Pre_Process_exit(void);

/* Symbol: Test_search_2i40 */
/* Demangled: Test_search_2i40 */
int Test_search_2i40(void);

/* Symbol: code_8i40_31bits */
/* Demangled: code_8i40_31bits */
int code_8i40_31bits(void);

/* Symbol: gain_adapt_reset */
/* Demangled: gain_adapt_reset */
int gain_adapt_reset(void);

/* Symbol: MR475_gain_quant */
/* Demangled: MR475_gain_quant */
int MR475_gain_quant(void);

/* Symbol: ton_stab_reset */
/* Demangled: ton_stab_reset */
int ton_stab_reset(void);

/* Symbol: cod_amr_init */
/* Demangled: cod_amr_init */
int cod_amr_init(void);

/* Symbol: p_ol_wgh_exit */
/* Demangled: p_ol_wgh_exit */
int p_ol_wgh_exit(void);

/* Symbol: update_gp_clipping */
/* Demangled: update_gp_clipping */
int update_gp_clipping(void);

/* Symbol: sid_sync_init */
/* Demangled: sid_sync_init */
int sid_sync_init(void);

/* Symbol: cbsearch */
/* Demangled: cbsearch */
int cbsearch(void);

/* Symbol: cl_ltp_init */
/* Demangled: cl_ltp_init */
int cl_ltp_init(void);

/* Symbol: subframePreProc */
/* Demangled: subframePreProc */
int subframePreProc(void);

/* Symbol: _ZN7android16SoftAMRNBEncoder11initEncoderEv */
/* Demangled: android::SoftAMRNBEncoder::initEncoder() */
int _ZN7android16SoftAMRNBEncoder11initEncoderEv(void);

/* Symbol: cod_amr_exit */
/* Demangled: cod_amr_exit */
int cod_amr_exit(void);

/* Symbol: p_ol_wgh_reset */
/* Demangled: p_ol_wgh_reset */
int p_ol_wgh_reset(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: If2EncBytesPerFrame */
/* Demangled: If2EncBytesPerFrame */
extern void* If2EncBytesPerFrame;

/* Symbol: sid_sync_exit */
/* Demangled: sid_sync_exit */
int sid_sync_exit(void);

/* Symbol: cl_ltp_exit */
/* Demangled: cl_ltp_exit */
int cl_ltp_exit(void);

/* Symbol: G_code */
/* Demangled: G_code */
int G_code(void);

/* Symbol: gainQuant_init */
/* Demangled: gainQuant_init */
int gainQuant_init(void);

/* Symbol: Interpol_3or6 */
/* Demangled: Interpol_3or6 */
int Interpol_3or6(void);

/* Symbol: lpc_init */
/* Demangled: lpc_init */
int lpc_init(void);

/* Symbol: calc_target_energy */
/* Demangled: calc_target_energy */
int calc_target_energy(void);

/* Symbol: dtx_buffer */
/* Demangled: dtx_buffer */
int dtx_buffer(void);

/* Symbol: ol_ltp */
/* Demangled: ol_ltp */
int ol_ltp(void);

/* Symbol: Pitch_fr_init */
/* Demangled: Pitch_fr_init */
int Pitch_fr_init(void);

/* Symbol: _ZTVN7android16SoftAMRNBEncoderE */
/* Demangled: vtable for android::SoftAMRNBEncoder */
extern void* _ZTVN7android16SoftAMRNBEncoderE;

/* Symbol: _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE */
/* Demangled: vtable for android::Vector<android::SimpleSoftOMXComponent::PortInfo> */
extern void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE;

/* Symbol: code_2i40_11bits */
/* Demangled: code_2i40_11bits */
int code_2i40_11bits(void);

/* Symbol: gainQuant_exit */
/* Demangled: gainQuant_exit */
int gainQuant_exit(void);

/* Symbol: lpc */
/* Demangled: lpc */
int lpc(void);

/* Symbol: lpc_exit */
/* Demangled: lpc_exit */
int lpc_exit(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj(void);

/* Symbol: code_2i40_9bits */
/* Demangled: code_2i40_9bits */
int code_2i40_9bits(void);

/* Symbol: cod_amr */
/* Demangled: cod_amr */
int cod_amr(void);

/* Symbol: Pitch_fr_exit */
/* Demangled: Pitch_fr_exit */
int Pitch_fr_exit(void);

/* Symbol: ton_stab_init */
/* Demangled: ton_stab_init */
int ton_stab_init(void);

/* Symbol: _ZN7android16SoftAMRNBEncoder13onQueueFilledEj */
/* Demangled: android::SoftAMRNBEncoder::onQueueFilled(unsigned int) */
int _ZN7android16SoftAMRNBEncoder13onQueueFilledEj(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj(void);

/* Symbol: cor_h_x2 */
/* Demangled: cor_h_x2 */
int cor_h_x2(void);

/* Symbol: _Z15Lag_max_wrapperP9vadState1PiPssssssS2_iS1_ */
/* Demangled: Lag_max_wrapper(vadState1*, int*, short*, short, short, short, short, short, short*, int, int*) */
int _Z15Lag_max_wrapperP9vadState1PiPssssssS2_iS1_(void);

/* Symbol: Qua_gain */
/* Demangled: Qua_gain */
int Qua_gain(void);

/* Symbol: dtx_enc */
/* Demangled: dtx_enc */
int dtx_enc(void);

/* Symbol: Pre_Process */
/* Demangled: Pre_Process */
int Pre_Process(void);

/* Symbol: set_sign12k2 */
/* Demangled: set_sign12k2 */
int set_sign12k2(void);

/* Symbol: ton_stab_exit */
/* Demangled: ton_stab_exit */
int ton_stab_exit(void);

/* Symbol: _ZN7android16SoftAMRNBEncoder9initPortsEv */
/* Demangled: android::SoftAMRNBEncoder::initPorts() */
int _ZN7android16SoftAMRNBEncoder9initPortsEv(void);

/* Symbol: Pre_Process_reset */
/* Demangled: Pre_Process_reset */
int Pre_Process_reset(void);

/* Symbol: AMREncodeReset */
/* Demangled: AMREncodeReset */
int AMREncodeReset(void);

/* Symbol: corrweight */
/* Demangled: corrweight */
extern void* corrweight;

__END_DECLS

#endif /* BEGONIA_RE_LIBSTAGEFRIGHT_SOFT_AMRNBENC_H */
