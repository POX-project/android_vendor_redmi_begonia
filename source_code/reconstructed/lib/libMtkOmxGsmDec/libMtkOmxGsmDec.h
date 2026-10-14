/*
 * Reverse-Engineered ABI Specification for: libMtkOmxGsmDec.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libMtkOmxGsmDec.so
 */

#ifndef BEGONIA_RE_LIBMTKOMXGSMDEC_H
#define BEGONIA_RE_LIBMTKOMXGSMDEC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN12MtkOmxGsmDec15InitAudioParamsEv */
/* Demangled: MtkOmxGsmDec::InitAudioParams() */
int _ZN12MtkOmxGsmDec15InitAudioParamsEv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh */
/* Demangled: MtkOmxAudioDecBase::UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
int _ZN18MtkOmxAudioDecBase9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh(void);

/* Symbol: _ZTV12MtkOmxGsmDec */
/* Demangled: vtable for MtkOmxGsmDec */
extern void* _ZTV12MtkOmxGsmDec;

/* Symbol: _ZN18MtkOmxAudioDecBase21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::HandleEmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j */
/* Demangled: MtkOmxAudioDecBase::AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
int _ZN18MtkOmxAudioDecBase14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j(void);

/* Symbol: _ZN18MtkOmxAudioDecBase20PortBuffersPopulatedEv */
/* Demangled: MtkOmxAudioDecBase::PortBuffersPopulated() */
int _ZN18MtkOmxAudioDecBase20PortBuffersPopulatedEv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase8DumpETBQEv */
/* Demangled: MtkOmxAudioDecBase::DumpETBQ() */
int _ZN18MtkOmxAudioDecBase8DumpETBQEv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h */
/* Demangled: MtkOmxAudioDecBase::GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
int _ZN18MtkOmxAudioDecBase19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: _ZTV18MtkOmxAudioDecBase */
/* Demangled: vtable for MtkOmxAudioDecBase */
extern void* _ZTV18MtkOmxAudioDecBase;

/* Symbol: gsm_norm */
/* Demangled: gsm_norm */
int gsm_norm(void);

/* Symbol: _ZN12MtkOmxGsmDecD2Ev */
/* Demangled: MtkOmxGsmDec::~MtkOmxGsmDec() */
int _ZN12MtkOmxGsmDecD2Ev(void);

/* Symbol: _ZN18MtkOmxAudioDecBaseD0Ev */
/* Demangled: MtkOmxAudioDecBase::~MtkOmxAudioDecBase() */
int _ZN18MtkOmxAudioDecBaseD0Ev(void);

/* Symbol: _ZN18MtkOmxAudioDecBase12SetCallbacksEPvP16OMX_CALLBACKTYPES0_ */
/* Demangled: MtkOmxAudioDecBase::SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
int _ZN18MtkOmxAudioDecBase12SetCallbacksEPvP16OMX_CALLBACKTYPES0_(void);

/* Symbol: _Z29MtkAudioDec_GetExtensionIndexPvPcP13OMX_INDEXTYPE */
/* Demangled: MtkAudioDec_GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
int _Z29MtkAudioDec_GetExtensionIndexPvPcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase16QueueInputBufferEi */
/* Demangled: MtkOmxAudioDecBase::QueueInputBuffer(int) */
int _ZN18MtkOmxAudioDecBase16QueueInputBufferEi(void);

/* Symbol: gsm_option */
/* Demangled: gsm_option */
int gsm_option(void);

/* Symbol: _Z27MtkAudioDec_ComponentDeInitPv */
/* Demangled: MtkAudioDec_ComponentDeInit(void*) */
int _Z27MtkAudioDec_ComponentDeInitPv(void);

/* Symbol: _Z13StateToStringj */
/* Demangled: StateToString(unsigned int) */
int _Z13StateToStringj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase25ReturnPendingInputBuffersEv */
/* Demangled: MtkOmxAudioDecBase::ReturnPendingInputBuffers() */
int _ZN18MtkOmxAudioDecBase25ReturnPendingInputBuffersEv(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN12MtkOmxGsmDec11DecodeAudioEP20OMX_BUFFERHEADERTYPES1_ */
/* Demangled: MtkOmxGsmDec::DecodeAudio(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
int _ZN12MtkOmxGsmDec11DecodeAudioEP20OMX_BUFFERHEADERTYPES1_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::findBufferHeaderIndex(unsigned int, OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: gsm_destroy */
/* Demangled: gsm_destroy */
int gsm_destroy(void);

/* Symbol: _Z24MtkAudioDec_GetParameterPv13OMX_INDEXTYPES_ */
/* Demangled: MtkAudioDec_GetParameter(void*, OMX_INDEXTYPE, void*) */
int _Z24MtkAudioDec_GetParameterPv13OMX_INDEXTYPES_(void);

/* Symbol: _Z25MtkAudioDec_ComponentInitPvPc */
/* Demangled: MtkAudioDec_ComponentInit(void*, char*) */
int _Z25MtkAudioDec_ComponentInitPvPc(void);

/* Symbol: gsm_asl */
/* Demangled: gsm_asl */
int gsm_asl(void);

/* Symbol: _ZN18MtkOmxAudioDecBase8GetStateEPvP13OMX_STATETYPE */
/* Demangled: MtkOmxAudioDecBase::GetState(void*, OMX_STATETYPE*) */
int _ZN18MtkOmxAudioDecBase8GetStateEPvP13OMX_STATETYPE(void);

/* Symbol: _Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti */
/* Demangled: pthread_mutex_lock_timeout(pthread_mutex_t*, int) */
int _Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti(void);

/* Symbol: gsm_abs */
/* Demangled: gsm_abs */
int gsm_abs(void);

/* Symbol: _ZN12MtkOmxGsmDecD0Ev */
/* Demangled: MtkOmxGsmDec::~MtkOmxGsmDec() */
int _ZN12MtkOmxGsmDecD0Ev(void);

/* Symbol: _ZN18MtkOmxAudioDecBase10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::HandleFillBufferDone(OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNK7android6VectorIiE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE16do_move_backwardEPvPKvj(void);

/* Symbol: gsm_mult */
/* Demangled: gsm_mult */
int gsm_mult(void);

/* Symbol: _Z27MtkAudioDec_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkAudioDec_EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _Z27MtkAudioDec_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase17HandlePortDisableEj */
/* Demangled: MtkOmxAudioDecBase::HandlePortDisable(unsigned int) */
int _ZN18MtkOmxAudioDecBase17HandlePortDisableEj(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _Z16sem_wait_timeoutP5sem_ti */
/* Demangled: sem_wait_timeout(sem_t*, int) */
int _Z16sem_wait_timeoutP5sem_ti(void);

/* Symbol: _Z13MTK_OMX_ALLOCj */
/* Demangled: MTK_OMX_ALLOC(unsigned int) */
int _Z13MTK_OMX_ALLOCj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase12GetParameterEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxAudioDecBase::GetParameter(void*, OMX_INDEXTYPE, void*) */
int _ZN18MtkOmxAudioDecBase12GetParameterEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::HandleEmptyBufferDone(OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _Z26MtkAudioDec_FillThisBufferPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkAudioDec_FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _Z26MtkAudioDec_FillThisBufferPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNK7android6VectorIiE8do_splatEPvPKvj */
/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE8do_splatEPvPKvj(void);

/* Symbol: gsm_A */
/* Demangled: gsm_A */
extern void* gsm_A;

/* Symbol: _ZN18MtkOmxAudioDecBase17ComponentRoleEnumEPvPhj */
/* Demangled: MtkOmxAudioDecBase::ComponentRoleEnum(void*, unsigned char*, unsigned int) */
int _ZN18MtkOmxAudioDecBase17ComponentRoleEnumEPvPhj(void);

/* Symbol: _Z15CommandToStringj */
/* Demangled: CommandToString(unsigned int) */
int _Z15CommandToStringj(void);

/* Symbol: gsm_B */
/* Demangled: gsm_B */
extern void* gsm_B;

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: gsm_asr */
/* Demangled: gsm_asr */
int gsm_asr(void);

/* Symbol: gsm_QLB */
/* Demangled: gsm_QLB */
extern void* gsm_QLB;

/* Symbol: gsm_NRFAC */
/* Demangled: gsm_NRFAC */
extern void* gsm_NRFAC;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN12MtkOmxGsmDec17FlushAudioDecoderEv */
/* Demangled: MtkOmxGsmDec::FlushAudioDecoder() */
int _ZN12MtkOmxGsmDec17FlushAudioDecoderEv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase8DumpFTBQEv */
/* Demangled: MtkOmxAudioDecBase::DumpFTBQ() */
int _ZN18MtkOmxAudioDecBase8DumpFTBQEv(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN12MtkOmxGsmDec9DecodeGSMEP9gsm_statePsPhj */
/* Demangled: MtkOmxGsmDec::DecodeGSM(gsm_state*, short*, unsigned char*, unsigned int) */
int _ZN12MtkOmxGsmDec9DecodeGSMEP9gsm_statePsPhj(void);

/* Symbol: _ZN12MtkOmxGsmDecC1Ev */
/* Demangled: MtkOmxGsmDec::MtkOmxGsmDec() */
int _ZN12MtkOmxGsmDecC1Ev(void);

/* Symbol: _ZN18MtkOmxAudioDecBase12SetParameterEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxAudioDecBase::SetParameter(void*, OMX_INDEXTYPE, void*) */
int _ZN18MtkOmxAudioDecBase12SetParameterEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _Z24MtkAudioDec_SetParameterPv13OMX_INDEXTYPES_ */
/* Demangled: MtkAudioDec_SetParameter(void*, OMX_INDEXTYPE, void*) */
int _Z24MtkAudioDec_SetParameterPv13OMX_INDEXTYPES_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase19DequeueOutputBufferEv */
/* Demangled: MtkOmxAudioDecBase::DequeueOutputBuffer() */
int _ZN18MtkOmxAudioDecBase19DequeueOutputBufferEv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase26ReturnPendingOutputBuffersEv */
/* Demangled: MtkOmxAudioDecBase::ReturnPendingOutputBuffers() */
int _ZN18MtkOmxAudioDecBase26ReturnPendingOutputBuffersEv(void);

/* Symbol: _ZNK7android6VectorIiE10do_destroyEPvj */
/* Demangled: android::Vector<int>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIiE10do_destroyEPvj(void);

/* Symbol: gsm_L_asl */
/* Demangled: gsm_L_asl */
int gsm_L_asl(void);

/* Symbol: _ZN12MtkOmxGsmDec12GetParameterEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxGsmDec::GetParameter(void*, OMX_INDEXTYPE, void*) */
int _ZN12MtkOmxGsmDec12GetParameterEPv13OMX_INDEXTYPES0_(void);

/* Symbol: gsm_decode */
/* Demangled: gsm_decode */
int gsm_decode(void);

/* Symbol: _Z13get_sem_valueP5sem_t */
/* Demangled: get_sem_value(sem_t*) */
int _Z13get_sem_valueP5sem_t(void);

/* Symbol: _ZN18MtkOmxAudioDecBase15FlushOutputPortEv */
/* Demangled: MtkOmxAudioDecBase::FlushOutputPort() */
int _ZN18MtkOmxAudioDecBase15FlushOutputPortEv(void);

/* Symbol: _ZNK7android6VectorIiE12do_constructEPvj */
/* Demangled: android::Vector<int>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIiE12do_constructEPvj(void);

/* Symbol: Gsm_Decoder */
/* Demangled: Gsm_Decoder */
int Gsm_Decoder(void);

/* Symbol: _ZN12MtkOmxGsmDec18DeinitAudioDecoderEv */
/* Demangled: MtkOmxGsmDec::DeinitAudioDecoder() */
int _ZN12MtkOmxGsmDec18DeinitAudioDecoderEv(void);

/* Symbol: _Z21MtkAudioDec_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh */
/* Demangled: MtkAudioDec_UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
int _Z21MtkAudioDec_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh(void);

/* Symbol: _Z22MtkAudioDec_FreeBufferPvjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkAudioDec_FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
int _Z22MtkAudioDec_FreeBufferPvjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNK7android6VectorIiE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE15do_move_forwardEPvPKvj(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _Z26MtkAudioDec_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j */
/* Demangled: MtkAudioDec_AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
int _Z26MtkAudioDec_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j(void);

/* Symbol: _ZN18MtkOmxAudioDecBase15HandlePortFlushEj */
/* Demangled: MtkOmxAudioDecBase::HandlePortFlush(unsigned int) */
int _ZN18MtkOmxAudioDecBase15HandlePortFlushEj(void);

/* Symbol: gsm_sub */
/* Demangled: gsm_sub */
int gsm_sub(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: gsm_H */
/* Demangled: gsm_H */
extern void* gsm_H;

/* Symbol: _ZN18MtkOmxAudioDecBase16HandleMarkBufferEjPv */
/* Demangled: MtkOmxAudioDecBase::HandleMarkBuffer(unsigned int, void*) */
int _ZN18MtkOmxAudioDecBase16HandleMarkBufferEjPv(void);

/* Symbol: _Z23MtkOmxAudioDecodeThreadPv */
/* Demangled: MtkOmxAudioDecodeThread(void*) */
int _Z23MtkOmxAudioDecodeThreadPv(void);

/* Symbol: _ZN18MtkOmxAudioDecBaseD1Ev */
/* Demangled: MtkOmxAudioDecBase::~MtkOmxAudioDecBase() */
int _ZN18MtkOmxAudioDecBaseD1Ev(void);

/* Symbol: gsm_mult_r */
/* Demangled: gsm_mult_r */
int gsm_mult_r(void);

/* Symbol: _ZN18MtkOmxAudioDecBase14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase18DequeueInputBufferEv */
/* Demangled: MtkOmxAudioDecBase::DequeueInputBuffer() */
int _ZN18MtkOmxAudioDecBase18DequeueInputBufferEv(void);

/* Symbol: _Z16MTK_OMX_MEMALIGNjj */
/* Demangled: MTK_OMX_MEMALIGN(unsigned int, unsigned int) */
int _Z16MTK_OMX_MEMALIGNjj(void);

/* Symbol: gsm_L_asr */
/* Demangled: gsm_L_asr */
int gsm_L_asr(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: MtkOmxComponentCreate */
/* Demangled: MtkOmxComponentCreate */
int MtkOmxComponentCreate(void);

/* Symbol: gsm_add */
/* Demangled: gsm_add */
int gsm_add(void);

/* Symbol: Gsm_RPE_Decoding */
/* Demangled: Gsm_RPE_Decoding */
int Gsm_RPE_Decoding(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _Z12MTK_OMX_FREEPv */
/* Demangled: MTK_OMX_FREE(void*) */
int _Z12MTK_OMX_FREEPv(void);

/* Symbol: Gsm_Short_Term_Analysis_Filter */
/* Demangled: Gsm_Short_Term_Analysis_Filter */
int Gsm_Short_Term_Analysis_Filter(void);

/* Symbol: _ZN18MtkOmxAudioDecBase17GetExtensionIndexEPvPcP13OMX_INDEXTYPE */
/* Demangled: MtkOmxAudioDecBase::GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
int _ZN18MtkOmxAudioDecBase17GetExtensionIndexEPvPcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase17QueueOutputBufferEi */
/* Demangled: MtkOmxAudioDecBase::QueueOutputBuffer(int) */
int _ZN18MtkOmxAudioDecBase17QueueOutputBufferEi(void);

/* Symbol: _ZN18MtkOmxAudioDecBase23CheckBufferAvailabilityEv */
/* Demangled: MtkOmxAudioDecBase::CheckBufferAvailability() */
int _ZN18MtkOmxAudioDecBase23CheckBufferAvailabilityEv(void);

/* Symbol: Gsm_RPE_Encoding */
/* Demangled: Gsm_RPE_Encoding */
int Gsm_RPE_Encoding(void);

/* Symbol: gsm_INVA */
/* Demangled: gsm_INVA */
extern void* gsm_INVA;

/* Symbol: _ZN12MtkOmxGsmDecD1Ev */
/* Demangled: MtkOmxGsmDec::~MtkOmxGsmDec() */
int _ZN12MtkOmxGsmDecD1Ev(void);

/* Symbol: _Z29MtkAudioDec_ComponentRoleEnumPvPhj */
/* Demangled: MtkAudioDec_ComponentRoleEnum(void*, unsigned char*, unsigned int) */
int _Z29MtkAudioDec_ComponentRoleEnumPvPhj(void);

/* Symbol: _Z31absolute_timespec_from_timespecR8timespecRKS_i */
/* Demangled: absolute_timespec_from_timespec(timespec&, timespec const&, int) */
int _Z31absolute_timespec_from_timespecR8timespecRKS_i(void);

/* Symbol: _ZN18MtkOmxAudioDecBaseC2Ev */
/* Demangled: MtkOmxAudioDecBase::MtkOmxAudioDecBase() */
int _ZN18MtkOmxAudioDecBaseC2Ev(void);

/* Symbol: gsm_L_sub */
/* Demangled: gsm_L_sub */
int gsm_L_sub(void);

/* Symbol: _ZN12MtkOmxGsmDec12SetParameterEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxGsmDec::SetParameter(void*, OMX_INDEXTYPE, void*) */
int _ZN12MtkOmxGsmDec12SetParameterEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase13ComponentInitEPvPc */
/* Demangled: MtkOmxAudioDecBase::ComponentInit(void*, char*) */
int _ZN18MtkOmxAudioDecBase13ComponentInitEPvPc(void);

/* Symbol: _Z20MtkAudioDec_GetStatePvP13OMX_STATETYPE */
/* Demangled: MtkAudioDec_GetState(void*, OMX_STATETYPE*) */
int _Z20MtkAudioDec_GetStatePvP13OMX_STATETYPE(void);

/* Symbol: gsm_DLB */
/* Demangled: gsm_DLB */
extern void* gsm_DLB;

/* Symbol: _ZN12MtkOmxGsmDec14initGSMDecoderEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxGsmDec::initGSMDecoder(OMX_BUFFERHEADERTYPE*) */
int _ZN12MtkOmxGsmDec14initGSMDecoderEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase16HandlePortEnableEj */
/* Demangled: MtkOmxAudioDecBase::HandlePortEnable(unsigned int) */
int _ZN18MtkOmxAudioDecBase16HandlePortEnableEj(void);

/* Symbol: Gsm_Long_Term_Synthesis_Filtering */
/* Demangled: Gsm_Long_Term_Synthesis_Filtering */
int Gsm_Long_Term_Synthesis_Filtering(void);

/* Symbol: _Z23MtkAudioDec_SendCommandPv15OMX_COMMANDTYPEjS_ */
/* Demangled: MtkAudioDec_SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
int _Z23MtkAudioDec_SendCommandPv15OMX_COMMANDTYPEjS_(void);

/* Symbol: gsm_create */
/* Demangled: gsm_create */
int gsm_create(void);

/* Symbol: _ZTVN7android6VectorIiEE */
/* Demangled: vtable for android::Vector<int> */
extern void* _ZTVN7android6VectorIiEE;

/* Symbol: gsm_L_add */
/* Demangled: gsm_L_add */
int gsm_L_add(void);

/* Symbol: Gsm_Short_Term_Synthesis_Filter */
/* Demangled: Gsm_Short_Term_Synthesis_Filter */
int Gsm_Short_Term_Synthesis_Filter(void);

/* Symbol: gsm_FAC */
/* Demangled: gsm_FAC */
extern void* gsm_FAC;

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _ZN12MtkOmxGsmDecC2Ev */
/* Demangled: MtkOmxGsmDec::MtkOmxGsmDec() */
int _ZN12MtkOmxGsmDecC2Ev(void);

/* Symbol: _Z24MtkAudioDec_SetCallbacksPvP16OMX_CALLBACKTYPES_ */
/* Demangled: MtkAudioDec_SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
int _Z24MtkAudioDec_SetCallbacksPvP16OMX_CALLBACKTYPES_(void);

/* Symbol: _Z24MtkOmxAudioCommandThreadPv */
/* Demangled: MtkOmxAudioCommandThread(void*) */
int _Z24MtkOmxAudioCommandThreadPv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase14FlushInputPortEv */
/* Demangled: MtkOmxAudioDecBase::FlushInputPort() */
int _ZN18MtkOmxAudioDecBase14FlushInputPortEv(void);

/* Symbol: _ZNK7android6VectorIiE7do_copyEPvPKvj */
/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE7do_copyEPvPKvj(void);

/* Symbol: gsm_div */
/* Demangled: gsm_div */
int gsm_div(void);

/* Symbol: gsm_MAC */
/* Demangled: gsm_MAC */
extern void* gsm_MAC;

/* Symbol: _ZN18MtkOmxAudioDecBase11SendCommandEPv15OMX_COMMANDTYPEjS0_ */
/* Demangled: MtkOmxAudioDecBase::SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
int _ZN18MtkOmxAudioDecBase11SendCommandEPv15OMX_COMMANDTYPEjS0_(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _ZN18MtkOmxAudioDecBase9SetConfigEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxAudioDecBase::SetConfig(void*, OMX_INDEXTYPE, void*) */
int _ZN18MtkOmxAudioDecBase9SetConfigEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _Z21MtkAudioDec_GetConfigPv13OMX_INDEXTYPES_ */
/* Demangled: MtkAudioDec_GetConfig(void*, OMX_INDEXTYPE, void*) */
int _Z21MtkAudioDec_GetConfigPv13OMX_INDEXTYPES_(void);

/* Symbol: _Z31MtkAudioDec_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h */
/* Demangled: MtkAudioDec_GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
int _Z31MtkAudioDec_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: Gsm_Long_Term_Predictor */
/* Demangled: Gsm_Long_Term_Predictor */
int Gsm_Long_Term_Predictor(void);

/* Symbol: _ZN12MtkOmxGsmDec13handleBuffersEP20OMX_BUFFERHEADERTYPES1_8OMX_BOOLS2_ */
/* Demangled: MtkOmxGsmDec::handleBuffers(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*, OMX_BOOL, OMX_BOOL) */
int _ZN12MtkOmxGsmDec13handleBuffersEP20OMX_BUFFERHEADERTYPES1_8OMX_BOOLS2_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase15ComponentDeInitEPv */
/* Demangled: MtkOmxAudioDecBase::ComponentDeInit(void*) */
int _ZN18MtkOmxAudioDecBase15ComponentDeInitEPv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase9GetConfigEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxAudioDecBase::GetConfig(void*, OMX_INDEXTYPE, void*) */
int _ZN18MtkOmxAudioDecBase9GetConfigEPv13OMX_INDEXTYPES0_(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN18MtkOmxAudioDecBase14HandleStateSetEj */
/* Demangled: MtkOmxAudioDecBase::HandleStateSet(unsigned int) */
int _ZN18MtkOmxAudioDecBase14HandleStateSetEj(void);

/* Symbol: _Z14MTK_OMX_MEMSETPvij */
/* Demangled: MTK_OMX_MEMSET(void*, int, unsigned int) */
int _Z14MTK_OMX_MEMSETPvij(void);

/* Symbol: _ZN18MtkOmxAudioDecBaseD2Ev */
/* Demangled: MtkOmxAudioDecBase::~MtkOmxAudioDecBase() */
int _ZN18MtkOmxAudioDecBaseD2Ev(void);

/* Symbol: _Z21MtkAudioDec_SetConfigPv13OMX_INDEXTYPES_ */
/* Demangled: MtkAudioDec_SetConfig(void*, OMX_INDEXTYPE, void*) */
int _Z21MtkAudioDec_SetConfigPv13OMX_INDEXTYPES_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::HandleFillThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: gsm_L_mult */
/* Demangled: gsm_L_mult */
int gsm_L_mult(void);

/* Symbol: gsm_MIC */
/* Demangled: gsm_MIC */
extern void* gsm_MIC;

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKOMXGSMDEC_H */
