/*
 * Reverse-Engineered ABI Specification for: libMtkOmxApeDec.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libMtkOmxApeDec.so
 */

#ifndef BEGONIA_RE_LIBMTKOMXAPEDEC_H
#define BEGONIA_RE_LIBMTKOMXAPEDEC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z25MtkAudioDec_ComponentInitPvPc */
/* Demangled: MtkAudioDec_ComponentInit(void*, char*) */
int _Z25MtkAudioDec_ComponentInitPvPc(void);

/* Symbol: _ZN12MtkOmxApeDec12fn_ErrHandleEPKciiP20OMX_BUFFERHEADERTYPES3_b */
/* Demangled: MtkOmxApeDec::fn_ErrHandle(char const*, int, int, OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*, bool) */
int _ZN12MtkOmxApeDec12fn_ErrHandleEPKciiP20OMX_BUFFERHEADERTYPES3_b(void);

/* Symbol: _ZN18MtkOmxAudioDecBase21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::findBufferHeaderIndex(unsigned int, OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBaseC2Ev */
/* Demangled: MtkOmxAudioDecBase::MtkOmxAudioDecBase() */
int _ZN18MtkOmxAudioDecBaseC2Ev(void);

/* Symbol: _ZN18MtkOmxAudioDecBaseD2Ev */
/* Demangled: MtkOmxAudioDecBase::~MtkOmxAudioDecBase() */
int _ZN18MtkOmxAudioDecBaseD2Ev(void);

/* Symbol: _ZN7android17BpMtkCodecServiceC1Ev */
/* Demangled: android::BpMtkCodecService::BpMtkCodecService() */
int _ZN7android17BpMtkCodecServiceC1Ev(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZN7android17BpMtkCodecServiceC2Ev */
/* Demangled: android::BpMtkCodecService::BpMtkCodecService() */
int _ZN7android17BpMtkCodecServiceC2Ev(void);

/* Symbol: _ZN7android17BpMtkCodecServiceD0Ev */
/* Demangled: android::BpMtkCodecService::~BpMtkCodecService() */
int _ZN7android17BpMtkCodecServiceD0Ev(void);

/* Symbol: _ZN7android17BpMtkCodecServiceD1Ev */
/* Demangled: android::BpMtkCodecService::~BpMtkCodecService() */
int _ZN7android17BpMtkCodecServiceD1Ev(void);

/* Symbol: _ZN7android17BpMtkCodecServiceD2Ev */
/* Demangled: android::BpMtkCodecService::~BpMtkCodecService() */
int _ZN7android17BpMtkCodecServiceD2Ev(void);

/* Symbol: _ZN18MtkOmxAudioDecBaseD0Ev */
/* Demangled: MtkOmxAudioDecBase::~MtkOmxAudioDecBase() */
int _ZN18MtkOmxAudioDecBaseD0Ev(void);

/* Symbol: _ZN18MtkOmxAudioDecBaseD1Ev */
/* Demangled: MtkOmxAudioDecBase::~MtkOmxAudioDecBase() */
int _ZN18MtkOmxAudioDecBaseD1Ev(void);

/* Symbol: _ZTV18MtkOmxAudioDecBase */
/* Demangled: vtable for MtkOmxAudioDecBase */
extern void* _ZTV18MtkOmxAudioDecBase;

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN12MtkOmxApeDec11DecodeAudioEP20OMX_BUFFERHEADERTYPES1_ */
/* Demangled: MtkOmxApeDec::DecodeAudio(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
int _ZN12MtkOmxApeDec11DecodeAudioEP20OMX_BUFFERHEADERTYPES1_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase17QueueOutputBufferEi */
/* Demangled: MtkOmxAudioDecBase::QueueOutputBuffer(int) */
int _ZN18MtkOmxAudioDecBase17QueueOutputBufferEi(void);

/* Symbol: _ZN18MtkOmxAudioDecBase21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::HandleEmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN18MtkOmxAudioDecBase15HandlePortFlushEj */
/* Demangled: MtkOmxAudioDecBase::HandlePortFlush(unsigned int) */
int _ZN18MtkOmxAudioDecBase15HandlePortFlushEj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase8GetStateEPvP13OMX_STATETYPE */
/* Demangled: MtkOmxAudioDecBase::GetState(void*, OMX_STATETYPE*) */
int _ZN18MtkOmxAudioDecBase8GetStateEPvP13OMX_STATETYPE(void);

/* Symbol: _ZNK7android6VectorIiE8do_splatEPvPKvj */
/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE8do_splatEPvPKvj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase9GetConfigEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxAudioDecBase::GetConfig(void*, OMX_INDEXTYPE, void*) */
int _ZN18MtkOmxAudioDecBase9GetConfigEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _Z24MtkAudioDec_SetParameterPv13OMX_INDEXTYPES_ */
/* Demangled: MtkAudioDec_SetParameter(void*, OMX_INDEXTYPE, void*) */
int _Z24MtkAudioDec_SetParameterPv13OMX_INDEXTYPES_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase17HandlePortDisableEj */
/* Demangled: MtkOmxAudioDecBase::HandlePortDisable(unsigned int) */
int _ZN18MtkOmxAudioDecBase17HandlePortDisableEj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase25ReturnPendingInputBuffersEv */
/* Demangled: MtkOmxAudioDecBase::ReturnPendingInputBuffers() */
int _ZN18MtkOmxAudioDecBase25ReturnPendingInputBuffersEv(void);

/* Symbol: _ZNK7android6VectorIiE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN12MtkOmxApeDec6RampUpEPaj */
/* Demangled: MtkOmxApeDec::RampUp(signed char*, unsigned int) */
int _ZN12MtkOmxApeDec6RampUpEPaj(void);

/* Symbol: _ZN12MtkOmxApeDec6RampUpEPsj */
/* Demangled: MtkOmxApeDec::RampUp(short*, unsigned int) */
int _ZN12MtkOmxApeDec6RampUpEPsj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase12SetCallbacksEPvP16OMX_CALLBACKTYPES0_ */
/* Demangled: MtkOmxAudioDecBase::SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
int _ZN18MtkOmxAudioDecBase12SetCallbacksEPvP16OMX_CALLBACKTYPES0_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase13ComponentInitEPvPc */
/* Demangled: MtkOmxAudioDecBase::ComponentInit(void*, char*) */
int _ZN18MtkOmxAudioDecBase13ComponentInitEPvPc(void);

/* Symbol: _ZN18MtkOmxAudioDecBase14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase14FlushInputPortEv */
/* Demangled: MtkOmxAudioDecBase::FlushInputPort() */
int _ZN18MtkOmxAudioDecBase14FlushInputPortEv(void);

/* Symbol: _ZN7android17BpMtkCodecService5ResetERN6vendor8mediatek8hardware15mtkcodecservice4V1_114apeResetParamsE */
/* Demangled: android::BpMtkCodecService::Reset(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeResetParams&) */
int _ZN7android17BpMtkCodecService5ResetERN6vendor8mediatek8hardware15mtkcodecservice4V1_114apeResetParamsE(void);

/* Symbol: _Z26MtkAudioDec_FillThisBufferPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkAudioDec_FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _Z26MtkAudioDec_FillThisBufferPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _Z27MtkAudioDec_ComponentDeInitPv */
/* Demangled: MtkAudioDec_ComponentDeInit(void*) */
int _Z27MtkAudioDec_ComponentDeInitPv(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZN7android17BpMtkCodecService7DestroyEv */
/* Demangled: android::BpMtkCodecService::Destroy() */
int _ZN7android17BpMtkCodecService7DestroyEv(void);

/* Symbol: _Z22MtkAudioDec_FreeBufferPvjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkAudioDec_FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
int _Z22MtkAudioDec_FreeBufferPvjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::HandleFillBufferDone(OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN7android2spINS_4hidl6memory4V1_07IMemoryEEaSEOS5_ */
/* Demangled: android::sp<android::hidl::memory::V1_0::IMemory>::operator=(android::sp<android::hidl::memory::V1_0::IMemory>&&) */
int _ZN7android2spINS_4hidl6memory4V1_07IMemoryEEaSEOS5_(void);

/* Symbol: _Z13get_sem_valueP5sem_t */
/* Demangled: get_sem_value(sem_t*) */
int _Z13get_sem_valueP5sem_t(void);

/* Symbol: _Z31absolute_timespec_from_timespecR8timespecRKS_i */
/* Demangled: absolute_timespec_from_timespec(timespec&, timespec const&, int) */
int _Z31absolute_timespec_from_timespecR8timespecRKS_i(void);

/* Symbol: _ZN7android17BpMtkCodecService4InitERN6vendor8mediatek8hardware15mtkcodecservice4V1_113apeInitParamsE */
/* Demangled: android::BpMtkCodecService::Init(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeInitParams&) */
int _ZN7android17BpMtkCodecService4InitERN6vendor8mediatek8hardware15mtkcodecservice4V1_113apeInitParamsE(void);

/* Symbol: _Z21MtkAudioDec_GetConfigPv13OMX_INDEXTYPES_ */
/* Demangled: MtkAudioDec_GetConfig(void*, OMX_INDEXTYPE, void*) */
int _Z21MtkAudioDec_GetConfigPv13OMX_INDEXTYPES_(void);

/* Symbol: _Z23MtkAudioDec_SendCommandPv15OMX_COMMANDTYPEjS_ */
/* Demangled: MtkAudioDec_SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
int _Z23MtkAudioDec_SendCommandPv15OMX_COMMANDTYPEjS_(void);

/* Symbol: _Z29MtkAudioDec_ComponentRoleEnumPvPhj */
/* Demangled: MtkAudioDec_ComponentRoleEnum(void*, unsigned char*, unsigned int) */
int _Z29MtkAudioDec_ComponentRoleEnumPvPhj(void);

/* Symbol: _ZTVN7android6VectorIiEE */
/* Demangled: vtable for android::Vector<int> */
extern void* _ZTVN7android6VectorIiEE;

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN12MtkOmxApeDec18IsMtkCodecSrvReadyEv */
/* Demangled: MtkOmxApeDec::IsMtkCodecSrvReady() */
int _ZN12MtkOmxApeDec18IsMtkCodecSrvReadyEv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh */
/* Demangled: MtkOmxAudioDecBase::UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
int _ZN18MtkOmxAudioDecBase9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh(void);

/* Symbol: _ZN7android2spINS_17BpMtkCodecServiceEEaSEPS1_ */
/* Demangled: android::sp<android::BpMtkCodecService>::operator=(android::BpMtkCodecService*) */
int _ZN7android2spINS_17BpMtkCodecServiceEEaSEPS1_(void);

/* Symbol: _Z31MtkAudioDec_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h */
/* Demangled: MtkAudioDec_GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
int _Z31MtkAudioDec_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h(void);

/* Symbol: _ZNK7android6VectorIiE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN12MtkOmxApeDec18DeinitAudioDecoderEv */
/* Demangled: MtkOmxApeDec::DeinitAudioDecoder() */
int _ZN12MtkOmxApeDec18DeinitAudioDecoderEv(void);

/* Symbol: _ZTV12MtkOmxApeDec */
/* Demangled: vtable for MtkOmxApeDec */
extern void* _ZTV12MtkOmxApeDec;

/* Symbol: _Z13StateToStringj */
/* Demangled: StateToString(unsigned int) */
int _Z13StateToStringj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j */
/* Demangled: MtkOmxAudioDecBase::AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
int _ZN18MtkOmxAudioDecBase14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j(void);

/* Symbol: _ZN7android17BpMtkCodecService6CreateERN6vendor8mediatek8hardware15mtkcodecservice4V1_115apeCreateParamsE */
/* Demangled: android::BpMtkCodecService::Create(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeCreateParams&) */
int _ZN7android17BpMtkCodecService6CreateERN6vendor8mediatek8hardware15mtkcodecservice4V1_115apeCreateParamsE(void);

/* Symbol: _Z26MtkAudioDec_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j */
/* Demangled: MtkAudioDec_AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
int _Z26MtkAudioDec_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j(void);

/* Symbol: _ZN18MtkOmxAudioDecBase16HandlePortEnableEj */
/* Demangled: MtkOmxAudioDecBase::HandlePortEnable(unsigned int) */
int _ZN18MtkOmxAudioDecBase16HandlePortEnableEj(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _ZN18MtkOmxAudioDecBase14HandleStateSetEj */
/* Demangled: MtkOmxAudioDecBase::HandleStateSet(unsigned int) */
int _ZN18MtkOmxAudioDecBase14HandleStateSetEj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase8DumpETBQEv */
/* Demangled: MtkOmxAudioDecBase::DumpETBQ() */
int _ZN18MtkOmxAudioDecBase8DumpETBQEv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase8DumpFTBQEv */
/* Demangled: MtkOmxAudioDecBase::DumpFTBQ() */
int _ZN18MtkOmxAudioDecBase8DumpFTBQEv(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN18MtkOmxAudioDecBase18DequeueInputBufferEv */
/* Demangled: MtkOmxAudioDecBase::DequeueInputBuffer() */
int _ZN18MtkOmxAudioDecBase18DequeueInputBufferEv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase12SetParameterEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxAudioDecBase::SetParameter(void*, OMX_INDEXTYPE, void*) */
int _ZN18MtkOmxAudioDecBase12SetParameterEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase16HandleMarkBufferEjPv */
/* Demangled: MtkOmxAudioDecBase::HandleMarkBuffer(unsigned int, void*) */
int _ZN18MtkOmxAudioDecBase16HandleMarkBufferEjPv(void);

/* Symbol: _Z16sem_wait_timeoutP5sem_ti */
/* Demangled: sem_wait_timeout(sem_t*, int) */
int _Z16sem_wait_timeoutP5sem_ti(void);

/* Symbol: _Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti */
/* Demangled: pthread_mutex_lock_timeout(pthread_mutex_t*, int) */
int _Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti(void);

/* Symbol: _ZN18MtkOmxAudioDecBase12GetParameterEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxAudioDecBase::GetParameter(void*, OMX_INDEXTYPE, void*) */
int _ZN18MtkOmxAudioDecBase12GetParameterEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _ZN12MtkOmxApeDec17FlushAudioDecoderEv */
/* Demangled: MtkOmxApeDec::FlushAudioDecoder() */
int _ZN12MtkOmxApeDec17FlushAudioDecoderEv(void);

/* Symbol: _ZN7android12gServiceNameE */
/* Demangled: android::gServiceName */
extern void* _ZN7android12gServiceNameE;

/* Symbol: _Z21MtkAudioDec_SetConfigPv13OMX_INDEXTYPES_ */
/* Demangled: MtkAudioDec_SetConfig(void*, OMX_INDEXTYPE, void*) */
int _Z21MtkAudioDec_SetConfigPv13OMX_INDEXTYPES_(void);

/* Symbol: _Z15CommandToStringj */
/* Demangled: CommandToString(unsigned int) */
int _Z15CommandToStringj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase26ReturnPendingOutputBuffersEv */
/* Demangled: MtkOmxAudioDecBase::ReturnPendingOutputBuffers() */
int _ZN18MtkOmxAudioDecBase26ReturnPendingOutputBuffersEv(void);

/* Symbol: _ZNK7android6VectorIiE10do_destroyEPvj */
/* Demangled: android::Vector<int>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIiE10do_destroyEPvj(void);

/* Symbol: _Z13MTK_OMX_ALLOCj */
/* Demangled: MTK_OMX_ALLOC(unsigned int) */
int _Z13MTK_OMX_ALLOCj(void);

/* Symbol: _ZN12MtkOmxApeDec17QueueOutputBufferEi */
/* Demangled: MtkOmxApeDec::QueueOutputBuffer(int) */
int _ZN12MtkOmxApeDec17QueueOutputBufferEi(void);

/* Symbol: _ZN18MtkOmxAudioDecBase16QueueInputBufferEi */
/* Demangled: MtkOmxAudioDecBase::QueueInputBuffer(int) */
int _ZN18MtkOmxAudioDecBase16QueueInputBufferEi(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN12MtkOmxApeDecC1Ev */
/* Demangled: MtkOmxApeDec::MtkOmxApeDec() */
int _ZN12MtkOmxApeDecC1Ev(void);

/* Symbol: _ZN12MtkOmxApeDecC2Ev */
/* Demangled: MtkOmxApeDec::MtkOmxApeDec() */
int _ZN12MtkOmxApeDecC2Ev(void);

/* Symbol: _ZN12MtkOmxApeDecD0Ev */
/* Demangled: MtkOmxApeDec::~MtkOmxApeDec() */
int _ZN12MtkOmxApeDecD0Ev(void);

/* Symbol: _ZN12MtkOmxApeDecD1Ev */
/* Demangled: MtkOmxApeDec::~MtkOmxApeDec() */
int _ZN12MtkOmxApeDecD1Ev(void);

/* Symbol: _ZN12MtkOmxApeDecD2Ev */
/* Demangled: MtkOmxApeDec::~MtkOmxApeDec() */
int _ZN12MtkOmxApeDecD2Ev(void);

/* Symbol: _ZN18MtkOmxAudioDecBase15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN7android17BpMtkCodecService6DeInitEv */
/* Demangled: android::BpMtkCodecService::DeInit() */
int _ZN7android17BpMtkCodecService6DeInitEv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::HandleFillThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _Z14MTK_OMX_MEMSETPvij */
/* Demangled: MTK_OMX_MEMSET(void*, int, unsigned int) */
int _Z14MTK_OMX_MEMSETPvij(void);

/* Symbol: _ZN12MtkOmxApeDec12SetParameterEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxApeDec::SetParameter(void*, OMX_INDEXTYPE, void*) */
int _ZN12MtkOmxApeDec12SetParameterEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase19DequeueOutputBufferEv */
/* Demangled: MtkOmxAudioDecBase::DequeueOutputBuffer() */
int _ZN18MtkOmxAudioDecBase19DequeueOutputBufferEv(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN12MtkOmxApeDec16QueueInputBufferEi */
/* Demangled: MtkOmxApeDec::QueueInputBuffer(int) */
int _ZN12MtkOmxApeDec16QueueInputBufferEi(void);

/* Symbol: _ZN18MtkOmxAudioDecBase15FlushOutputPortEv */
/* Demangled: MtkOmxAudioDecBase::FlushOutputPort() */
int _ZN18MtkOmxAudioDecBase15FlushOutputPortEv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::HandleEmptyBufferDone(OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZTVN7android17BpMtkCodecServiceE */
/* Demangled: vtable for android::BpMtkCodecService */
extern void* _ZTVN7android17BpMtkCodecServiceE;

/* Symbol: _ZNK7android6VectorIiE12do_constructEPvj */
/* Demangled: android::Vector<int>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIiE12do_constructEPvj(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN7android17BpMtkCodecService7DoCodecERN6vendor8mediatek8hardware15mtkcodecservice4V1_112apeDecParamsERNS5_15apeDecRetParamsEPh */
/* Demangled: android::BpMtkCodecService::DoCodec(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecParams&, vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecRetParams&, unsigned char*) */
int _ZN7android17BpMtkCodecService7DoCodecERN6vendor8mediatek8hardware15mtkcodecservice4V1_112apeDecParamsERNS5_15apeDecRetParamsEPh(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZN12MtkOmxApeDec15InitAudioParamsEv */
/* Demangled: MtkOmxApeDec::InitAudioParams() */
int _ZN12MtkOmxApeDec15InitAudioParamsEv(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecServiceEEaSEOS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService>::operator=(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService>&&) */
int _ZN7android2spIN6vendor8mediatek8hardware15mtkcodecservice4V1_116IMtkCodecServiceEEaSEOS7_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase15ComponentDeInitEPv */
/* Demangled: MtkOmxAudioDecBase::ComponentDeInit(void*) */
int _ZN18MtkOmxAudioDecBase15ComponentDeInitEPv(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _Z27MtkAudioDec_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkAudioDec_EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _Z27MtkAudioDec_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _Z29MtkAudioDec_GetExtensionIndexPvPcP13OMX_INDEXTYPE */
/* Demangled: MtkAudioDec_GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
int _Z29MtkAudioDec_GetExtensionIndexPvPcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase23CheckBufferAvailabilityEv */
/* Demangled: MtkOmxAudioDecBase::CheckBufferAvailability() */
int _ZN18MtkOmxAudioDecBase23CheckBufferAvailabilityEv(void);

/* Symbol: _ZN12MtkOmxApeDec13OmxApeDecInitEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxApeDec::OmxApeDecInit(OMX_BUFFERHEADERTYPE*) */
int _ZN12MtkOmxApeDec13OmxApeDecInitEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase11SendCommandEPv15OMX_COMMANDTYPEjS0_ */
/* Demangled: MtkOmxAudioDecBase::SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
int _ZN18MtkOmxAudioDecBase11SendCommandEPv15OMX_COMMANDTYPEjS0_(void);

/* Symbol: _Z20MtkAudioDec_GetStatePvP13OMX_STATETYPE */
/* Demangled: MtkAudioDec_GetState(void*, OMX_STATETYPE*) */
int _Z20MtkAudioDec_GetStatePvP13OMX_STATETYPE(void);

/* Symbol: _Z16MTK_OMX_MEMALIGNjj */
/* Demangled: MTK_OMX_MEMALIGN(unsigned int, unsigned int) */
int _Z16MTK_OMX_MEMALIGNjj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase17ComponentRoleEnumEPvPhj */
/* Demangled: MtkOmxAudioDecBase::ComponentRoleEnum(void*, unsigned char*, unsigned int) */
int _ZN18MtkOmxAudioDecBase17ComponentRoleEnumEPvPhj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase17GetExtensionIndexEPvPcP13OMX_INDEXTYPE */
/* Demangled: MtkOmxAudioDecBase::GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
int _ZN18MtkOmxAudioDecBase17GetExtensionIndexEPvPcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h */
/* Demangled: MtkOmxAudioDecBase::GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
int _ZN18MtkOmxAudioDecBase19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h(void);

/* Symbol: _Z23MtkOmxAudioDecodeThreadPv */
/* Demangled: MtkOmxAudioDecodeThread(void*) */
int _Z23MtkOmxAudioDecodeThreadPv(void);

/* Symbol: _Z24MtkAudioDec_GetParameterPv13OMX_INDEXTYPES_ */
/* Demangled: MtkAudioDec_GetParameter(void*, OMX_INDEXTYPE, void*) */
int _Z24MtkAudioDec_GetParameterPv13OMX_INDEXTYPES_(void);

/* Symbol: _Z24MtkAudioDec_SetCallbacksPvP16OMX_CALLBACKTYPES_ */
/* Demangled: MtkAudioDec_SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
int _Z24MtkAudioDec_SetCallbacksPvP16OMX_CALLBACKTYPES_(void);

/* Symbol: _Z24MtkOmxAudioCommandThreadPv */
/* Demangled: MtkOmxAudioCommandThread(void*) */
int _Z24MtkOmxAudioCommandThreadPv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase20PortBuffersPopulatedEv */
/* Demangled: MtkOmxAudioDecBase::PortBuffersPopulated() */
int _ZN18MtkOmxAudioDecBase20PortBuffersPopulatedEv(void);

/* Symbol: _ZNK7android6VectorIiE7do_copyEPvPKvj */
/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE7do_copyEPvPKvj(void);

/* Symbol: MtkOmxComponentCreate */
/* Demangled: MtkOmxComponentCreate */
int MtkOmxComponentCreate(void);

/* Symbol: _ZN18MtkOmxAudioDecBase9SetConfigEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxAudioDecBase::SetConfig(void*, OMX_INDEXTYPE, void*) */
int _ZN18MtkOmxAudioDecBase9SetConfigEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _Z12MTK_OMX_FREEPv */
/* Demangled: MTK_OMX_FREE(void*) */
int _Z12MTK_OMX_FREEPv(void);

/* Symbol: _Z21MtkAudioDec_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh */
/* Demangled: MtkAudioDec_UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
int _Z21MtkAudioDec_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKOMXAPEDEC_H */
