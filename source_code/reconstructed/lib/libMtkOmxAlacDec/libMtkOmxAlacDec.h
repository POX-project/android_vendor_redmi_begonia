/*
 * Reverse-Engineered ABI Specification for: libMtkOmxAlacDec.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libMtkOmxAlacDec.so
 */

#ifndef BEGONIA_RE_LIBMTKOMXALACDEC_H
#define BEGONIA_RE_LIBMTKOMXALACDEC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN18MtkOmxAudioDecBase8GetStateEPvP13OMX_STATETYPE */
/* Demangled: MtkOmxAudioDecBase::GetState(void*, OMX_STATETYPE*) */
int _ZN18MtkOmxAudioDecBase8GetStateEPvP13OMX_STATETYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase16HandlePortEnableEj */
/* Demangled: MtkOmxAudioDecBase::HandlePortEnable(unsigned int) */
int _ZN18MtkOmxAudioDecBase16HandlePortEnableEj(void);

/* Symbol: _ZN13MtkOmxAlacDecD1Ev */
/* Demangled: MtkOmxAlacDec::~MtkOmxAlacDec() */
int _ZN13MtkOmxAlacDecD1Ev(void);

/* Symbol: _ZN18MtkOmxAudioDecBase23CheckBufferAvailabilityEv */
/* Demangled: MtkOmxAudioDecBase::CheckBufferAvailability() */
int _ZN18MtkOmxAudioDecBase23CheckBufferAvailabilityEv(void);

/* Symbol: _ZNK7android6VectorIiE10do_destroyEPvj */
/* Demangled: android::Vector<int>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIiE10do_destroyEPvj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase17HandlePortDisableEj */
/* Demangled: MtkOmxAudioDecBase::HandlePortDisable(unsigned int) */
int _ZN18MtkOmxAudioDecBase17HandlePortDisableEj(void);

/* Symbol: _ZNK7android6VectorIiE12do_constructEPvj */
/* Demangled: android::Vector<int>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIiE12do_constructEPvj(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: alac_get_version */
/* Demangled: alac_get_version */
int alac_get_version(void);

/* Symbol: _ZN18MtkOmxAudioDecBaseD2Ev */
/* Demangled: MtkOmxAudioDecBase::~MtkOmxAudioDecBase() */
int _ZN18MtkOmxAudioDecBaseD2Ev(void);

/* Symbol: alac_decode_frame */
/* Demangled: alac_decode_frame */
int alac_decode_frame(void);

/* Symbol: _Z24MtkOmxAudioCommandThreadPv */
/* Demangled: MtkOmxAudioCommandThread(void*) */
int _Z24MtkOmxAudioCommandThreadPv(void);

/* Symbol: _Z13StateToStringj */
/* Demangled: StateToString(unsigned int) */
int _Z13StateToStringj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase14HandleStateSetEj */
/* Demangled: MtkOmxAudioDecBase::HandleStateSet(unsigned int) */
int _ZN18MtkOmxAudioDecBase14HandleStateSetEj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase8DumpETBQEv */
/* Demangled: MtkOmxAudioDecBase::DumpETBQ() */
int _ZN18MtkOmxAudioDecBase8DumpETBQEv(void);

/* Symbol: _ZTVN7android6VectorIiEE */
/* Demangled: vtable for android::Vector<int> */
extern void* _ZTVN7android6VectorIiEE;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN13MtkOmxAlacDec15InitAudioParamsEv */
/* Demangled: MtkOmxAlacDec::InitAudioParams() */
int _ZN13MtkOmxAlacDec15InitAudioParamsEv(void);

/* Symbol: _ZN13MtkOmxAlacDecD0Ev */
/* Demangled: MtkOmxAlacDec::~MtkOmxAlacDec() */
int _ZN13MtkOmxAlacDecD0Ev(void);

/* Symbol: alac_reset */
/* Demangled: alac_reset */
int alac_reset(void);

/* Symbol: _ZN18MtkOmxAudioDecBase14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j */
/* Demangled: MtkOmxAudioDecBase::AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
int _ZN18MtkOmxAudioDecBase14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j(void);

/* Symbol: _ZTV13MtkOmxAlacDec */
/* Demangled: vtable for MtkOmxAlacDec */
extern void* _ZTV13MtkOmxAlacDec;

/* Symbol: _Z29MtkAudioDec_GetExtensionIndexPvPcP13OMX_INDEXTYPE */
/* Demangled: MtkAudioDec_GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
int _Z29MtkAudioDec_GetExtensionIndexPvPcP13OMX_INDEXTYPE(void);

/* Symbol: _Z31MtkAudioDec_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h */
/* Demangled: MtkAudioDec_GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
int _Z31MtkAudioDec_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h(void);

/* Symbol: _ZN18MtkOmxAudioDecBase21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::HandleEmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN13MtkOmxAlacDec17FlushAudioDecoderEv */
/* Demangled: MtkOmxAlacDec::FlushAudioDecoder() */
int _ZN13MtkOmxAlacDec17FlushAudioDecoderEv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase16QueueInputBufferEi */
/* Demangled: MtkOmxAudioDecBase::QueueInputBuffer(int) */
int _ZN18MtkOmxAudioDecBase16QueueInputBufferEi(void);

/* Symbol: _ZN18MtkOmxAudioDecBase21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::findBufferHeaderIndex(unsigned int, OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _Z20MtkAudioDec_GetStatePvP13OMX_STATETYPE */
/* Demangled: MtkAudioDec_GetState(void*, OMX_STATETYPE*) */
int _Z20MtkAudioDec_GetStatePvP13OMX_STATETYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBaseD1Ev */
/* Demangled: MtkOmxAudioDecBase::~MtkOmxAudioDecBase() */
int _ZN18MtkOmxAudioDecBaseD1Ev(void);

/* Symbol: se_struct_24 */
/* Demangled: se_struct_24 */
extern void* se_struct_24;

/* Symbol: _ZN18MtkOmxAudioDecBase21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::HandleEmptyBufferDone(OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase9GetConfigEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxAudioDecBase::GetConfig(void*, OMX_INDEXTYPE, void*) */
int _ZN18MtkOmxAudioDecBase9GetConfigEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _Z15CommandToStringj */
/* Demangled: CommandToString(unsigned int) */
int _Z15CommandToStringj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase16HandleMarkBufferEjPv */
/* Demangled: MtkOmxAudioDecBase::HandleMarkBuffer(unsigned int, void*) */
int _ZN18MtkOmxAudioDecBase16HandleMarkBufferEjPv(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN18MtkOmxAudioDecBase19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h */
/* Demangled: MtkOmxAudioDecBase::GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
int _ZN18MtkOmxAudioDecBase19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h(void);

/* Symbol: _Z26MtkAudioDec_FillThisBufferPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkAudioDec_FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _Z26MtkAudioDec_FillThisBufferPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _Z14MTK_OMX_MEMSETPvij */
/* Demangled: MTK_OMX_MEMSET(void*, int, unsigned int) */
int _Z14MTK_OMX_MEMSETPvij(void);

/* Symbol: _Z27MtkAudioDec_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkAudioDec_EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _Z27MtkAudioDec_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBaseD0Ev */
/* Demangled: MtkOmxAudioDecBase::~MtkOmxAudioDecBase() */
int _ZN18MtkOmxAudioDecBaseD0Ev(void);

/* Symbol: _ZN13MtkOmxAlacDec18DeinitAudioDecoderEv */
/* Demangled: MtkOmxAlacDec::DeinitAudioDecoder() */
int _ZN13MtkOmxAlacDec18DeinitAudioDecoderEv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase11SendCommandEPv15OMX_COMMANDTYPEjS0_ */
/* Demangled: MtkOmxAudioDecBase::SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
int _ZN18MtkOmxAudioDecBase11SendCommandEPv15OMX_COMMANDTYPEjS0_(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN18MtkOmxAudioDecBase20PortBuffersPopulatedEv */
/* Demangled: MtkOmxAudioDecBase::PortBuffersPopulated() */
int _ZN18MtkOmxAudioDecBase20PortBuffersPopulatedEv(void);

/* Symbol: _ZNK7android6VectorIiE8do_splatEPvPKvj */
/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE8do_splatEPvPKvj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase19DequeueOutputBufferEv */
/* Demangled: MtkOmxAudioDecBase::DequeueOutputBuffer() */
int _ZN18MtkOmxAudioDecBase19DequeueOutputBufferEv(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN13MtkOmxAlacDecC2Ev */
/* Demangled: MtkOmxAlacDec::MtkOmxAlacDec() */
int _ZN13MtkOmxAlacDecC2Ev(void);

/* Symbol: _Z22MtkAudioDec_FreeBufferPvjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkAudioDec_FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
int _Z22MtkAudioDec_FreeBufferPvjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _Z23MtkAudioDec_SendCommandPv15OMX_COMMANDTYPEjS_ */
/* Demangled: MtkAudioDec_SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
int _Z23MtkAudioDec_SendCommandPv15OMX_COMMANDTYPEjS_(void);

/* Symbol: _ZN13MtkOmxAlacDec18BitsWidthAdaptTo16EPhi */
/* Demangled: MtkOmxAlacDec::BitsWidthAdaptTo16(unsigned char*, int) */
int _ZN13MtkOmxAlacDec18BitsWidthAdaptTo16EPhi(void);

/* Symbol: alac_deinit */
/* Demangled: alac_deinit */
int alac_deinit(void);

/* Symbol: _Z16sem_wait_timeoutP5sem_ti */
/* Demangled: sem_wait_timeout(sem_t*, int) */
int _Z16sem_wait_timeoutP5sem_ti(void);

/* Symbol: _Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti */
/* Demangled: pthread_mutex_lock_timeout(pthread_mutex_t*, int) */
int _Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN13MtkOmxAlacDec11DecodeAudioEP20OMX_BUFFERHEADERTYPES1_ */
/* Demangled: MtkOmxAlacDec::DecodeAudio(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
int _ZN13MtkOmxAlacDec11DecodeAudioEP20OMX_BUFFERHEADERTYPES1_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase15ComponentDeInitEPv */
/* Demangled: MtkOmxAudioDecBase::ComponentDeInit(void*) */
int _ZN18MtkOmxAudioDecBase15ComponentDeInitEPv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase15FlushOutputPortEv */
/* Demangled: MtkOmxAudioDecBase::FlushOutputPort() */
int _ZN18MtkOmxAudioDecBase15FlushOutputPortEv(void);

/* Symbol: _ZN13MtkOmxAlacDecC1Ev */
/* Demangled: MtkOmxAlacDec::MtkOmxAlacDec() */
int _ZN13MtkOmxAlacDecC1Ev(void);

/* Symbol: _ZN18MtkOmxAudioDecBase12SetParameterEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxAudioDecBase::SetParameter(void*, OMX_INDEXTYPE, void*) */
int _ZN18MtkOmxAudioDecBase12SetParameterEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _Z29MtkAudioDec_ComponentRoleEnumPvPhj */
/* Demangled: MtkAudioDec_ComponentRoleEnum(void*, unsigned char*, unsigned int) */
int _Z29MtkAudioDec_ComponentRoleEnumPvPhj(void);

/* Symbol: _ZNK7android6VectorIiE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE15do_move_forwardEPvPKvj(void);

/* Symbol: _Z13MTK_OMX_ALLOCj */
/* Demangled: MTK_OMX_ALLOC(unsigned int) */
int _Z13MTK_OMX_ALLOCj(void);

/* Symbol: alac_init */
/* Demangled: alac_init */
int alac_init(void);

/* Symbol: _Z21MtkAudioDec_GetConfigPv13OMX_INDEXTYPES_ */
/* Demangled: MtkAudioDec_GetConfig(void*, OMX_INDEXTYPE, void*) */
int _Z21MtkAudioDec_GetConfigPv13OMX_INDEXTYPES_(void);

/* Symbol: _ZNK7android6VectorIiE7do_copyEPvPKvj */
/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE7do_copyEPvPKvj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBaseC2Ev */
/* Demangled: MtkOmxAudioDecBase::MtkOmxAudioDecBase() */
int _ZN18MtkOmxAudioDecBaseC2Ev(void);

/* Symbol: _Z25MtkAudioDec_ComponentInitPvPc */
/* Demangled: MtkAudioDec_ComponentInit(void*, char*) */
int _Z25MtkAudioDec_ComponentInitPvPc(void);

/* Symbol: _Z27MtkAudioDec_ComponentDeInitPv */
/* Demangled: MtkAudioDec_ComponentDeInit(void*) */
int _Z27MtkAudioDec_ComponentDeInitPv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase18DequeueInputBufferEv */
/* Demangled: MtkOmxAudioDecBase::DequeueInputBuffer() */
int _ZN18MtkOmxAudioDecBase18DequeueInputBufferEv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase25ReturnPendingInputBuffersEv */
/* Demangled: MtkOmxAudioDecBase::ReturnPendingInputBuffers() */
int _ZN18MtkOmxAudioDecBase25ReturnPendingInputBuffersEv(void);

/* Symbol: _ZTV18MtkOmxAudioDecBase */
/* Demangled: vtable for MtkOmxAudioDecBase */
extern void* _ZTV18MtkOmxAudioDecBase;

/* Symbol: _Z12MTK_OMX_FREEPv */
/* Demangled: MTK_OMX_FREE(void*) */
int _Z12MTK_OMX_FREEPv(void);

/* Symbol: _ZN18MtkOmxAudioDecBase12SetCallbacksEPvP16OMX_CALLBACKTYPES0_ */
/* Demangled: MtkOmxAudioDecBase::SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
int _ZN18MtkOmxAudioDecBase12SetCallbacksEPvP16OMX_CALLBACKTYPES0_(void);

/* Symbol: _Z24MtkAudioDec_SetParameterPv13OMX_INDEXTYPES_ */
/* Demangled: MtkAudioDec_SetParameter(void*, OMX_INDEXTYPE, void*) */
int _Z24MtkAudioDec_SetParameterPv13OMX_INDEXTYPES_(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: MtkOmxComponentCreate */
/* Demangled: MtkOmxComponentCreate */
int MtkOmxComponentCreate(void);

/* Symbol: _ZN18MtkOmxAudioDecBase17QueueOutputBufferEi */
/* Demangled: MtkOmxAudioDecBase::QueueOutputBuffer(int) */
int _ZN18MtkOmxAudioDecBase17QueueOutputBufferEi(void);

/* Symbol: _Z26MtkAudioDec_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j */
/* Demangled: MtkAudioDec_AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
int _Z26MtkAudioDec_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j(void);

/* Symbol: _ZN18MtkOmxAudioDecBase8DumpFTBQEv */
/* Demangled: MtkOmxAudioDecBase::DumpFTBQ() */
int _ZN18MtkOmxAudioDecBase8DumpFTBQEv(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _Z16MTK_OMX_MEMALIGNjj */
/* Demangled: MTK_OMX_MEMALIGN(unsigned int, unsigned int) */
int _Z16MTK_OMX_MEMALIGNjj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _Z24MtkAudioDec_SetCallbacksPvP16OMX_CALLBACKTYPES_ */
/* Demangled: MtkAudioDec_SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
int _Z24MtkAudioDec_SetCallbacksPvP16OMX_CALLBACKTYPES_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase15HandlePortFlushEj */
/* Demangled: MtkOmxAudioDecBase::HandlePortFlush(unsigned int) */
int _ZN18MtkOmxAudioDecBase15HandlePortFlushEj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase13ComponentInitEPvPc */
/* Demangled: MtkOmxAudioDecBase::ComponentInit(void*, char*) */
int _ZN18MtkOmxAudioDecBase13ComponentInitEPvPc(void);

/* Symbol: _ZN18MtkOmxAudioDecBase9SetConfigEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxAudioDecBase::SetConfig(void*, OMX_INDEXTYPE, void*) */
int _ZN18MtkOmxAudioDecBase9SetConfigEPv13OMX_INDEXTYPES0_(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN18MtkOmxAudioDecBase12GetParameterEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxAudioDecBase::GetParameter(void*, OMX_INDEXTYPE, void*) */
int _ZN18MtkOmxAudioDecBase12GetParameterEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::HandleFillThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase26ReturnPendingOutputBuffersEv */
/* Demangled: MtkOmxAudioDecBase::ReturnPendingOutputBuffers() */
int _ZN18MtkOmxAudioDecBase26ReturnPendingOutputBuffersEv(void);

/* Symbol: _ZN13MtkOmxAlacDec15InitAlacDecoderEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAlacDec::InitAlacDecoder(OMX_BUFFERHEADERTYPE*) */
int _ZN13MtkOmxAlacDec15InitAlacDecoderEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase17ComponentRoleEnumEPvPhj */
/* Demangled: MtkOmxAudioDecBase::ComponentRoleEnum(void*, unsigned char*, unsigned int) */
int _ZN18MtkOmxAudioDecBase17ComponentRoleEnumEPvPhj(void);

/* Symbol: _ZN18MtkOmxAudioDecBase9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh */
/* Demangled: MtkOmxAudioDecBase::UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
int _ZN18MtkOmxAudioDecBase9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh(void);

/* Symbol: _Z21MtkAudioDec_SetConfigPv13OMX_INDEXTYPES_ */
/* Demangled: MtkAudioDec_SetConfig(void*, OMX_INDEXTYPE, void*) */
int _Z21MtkAudioDec_SetConfigPv13OMX_INDEXTYPES_(void);

/* Symbol: _ZN18MtkOmxAudioDecBase14FlushInputPortEv */
/* Demangled: MtkOmxAudioDecBase::FlushInputPort() */
int _ZN18MtkOmxAudioDecBase14FlushInputPortEv(void);

/* Symbol: _ZN13MtkOmxAlacDecD2Ev */
/* Demangled: MtkOmxAlacDec::~MtkOmxAlacDec() */
int _ZN13MtkOmxAlacDecD2Ev(void);

/* Symbol: _ZN18MtkOmxAudioDecBase17GetExtensionIndexEPvPcP13OMX_INDEXTYPE */
/* Demangled: MtkOmxAudioDecBase::GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
int _ZN18MtkOmxAudioDecBase17GetExtensionIndexEPvPcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN18MtkOmxAudioDecBase20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxAudioDecBase::HandleFillBufferDone(OMX_BUFFERHEADERTYPE*) */
int _ZN18MtkOmxAudioDecBase20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _Z31absolute_timespec_from_timespecR8timespecRKS_i */
/* Demangled: absolute_timespec_from_timespec(timespec&, timespec const&, int) */
int _Z31absolute_timespec_from_timespecR8timespecRKS_i(void);

/* Symbol: _ZN13MtkOmxAlacDec13HandleBuffersEP20OMX_BUFFERHEADERTYPE8OMX_BOOLS1_S2_ */
/* Demangled: MtkOmxAlacDec::HandleBuffers(OMX_BUFFERHEADERTYPE*, OMX_BOOL, OMX_BUFFERHEADERTYPE*, OMX_BOOL) */
int _ZN13MtkOmxAlacDec13HandleBuffersEP20OMX_BUFFERHEADERTYPE8OMX_BOOLS1_S2_(void);

/* Symbol: _Z21MtkAudioDec_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh */
/* Demangled: MtkAudioDec_UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
int _Z21MtkAudioDec_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh(void);

/* Symbol: _Z23MtkOmxAudioDecodeThreadPv */
/* Demangled: MtkOmxAudioDecodeThread(void*) */
int _Z23MtkOmxAudioDecodeThreadPv(void);

/* Symbol: _Z24MtkAudioDec_GetParameterPv13OMX_INDEXTYPES_ */
/* Demangled: MtkAudioDec_GetParameter(void*, OMX_INDEXTYPE, void*) */
int _Z24MtkAudioDec_GetParameterPv13OMX_INDEXTYPES_(void);

/* Symbol: _Z13get_sem_valueP5sem_t */
/* Demangled: get_sem_value(sem_t*) */
int _Z13get_sem_valueP5sem_t(void);

/* Symbol: _ZNK7android6VectorIiE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE16do_move_backwardEPvPKvj(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKOMXALACDEC_H */
