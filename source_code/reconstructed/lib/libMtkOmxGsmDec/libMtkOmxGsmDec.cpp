/*
 * Reverse-Engineered Source for: libMtkOmxGsmDec.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libMtkOmxGsmDec"

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
#include "libMtkOmxGsmDec.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: MtkOmxGsmDec::InitAudioParams() */
extern "C" __attribute__((visibility("default"))) int _ZN12MtkOmxGsmDec15InitAudioParamsEv(void) {
    ALOGD("_ZN12MtkOmxGsmDec15InitAudioParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh() called");
    return 0;
}

/* Exported Object: vtable for MtkOmxGsmDec */
extern "C" __attribute__((visibility("default"))) void* _ZTV12MtkOmxGsmDec = NULL;

/* Demangled: MtkOmxAudioDecBase::HandleEmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::PortBuffersPopulated() */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase20PortBuffersPopulatedEv(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase20PortBuffersPopulatedEv() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::DumpETBQ() */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase8DumpETBQEv(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase8DumpETBQEv() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Exported Object: vtable for MtkOmxAudioDecBase */
extern "C" __attribute__((visibility("default"))) void* _ZTV18MtkOmxAudioDecBase = NULL;

/* Demangled: gsm_norm */
extern "C" __attribute__((visibility("default"))) int gsm_norm(void) {
    ALOGD("gsm_norm() called");
    return 0;
}

/* Demangled: MtkOmxGsmDec::~MtkOmxGsmDec() */
extern "C" __attribute__((visibility("default"))) int _ZN12MtkOmxGsmDecD2Ev(void) {
    ALOGD("_ZN12MtkOmxGsmDecD2Ev() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::~MtkOmxAudioDecBase() */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBaseD0Ev(void) {
    ALOGD("_ZN18MtkOmxAudioDecBaseD0Ev() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase12SetCallbacksEPvP16OMX_CALLBACKTYPES0_(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase12SetCallbacksEPvP16OMX_CALLBACKTYPES0_() called");
    return 0;
}

/* Demangled: MtkAudioDec_GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z29MtkAudioDec_GetExtensionIndexPvPcP13OMX_INDEXTYPE(void) {
    ALOGD("_Z29MtkAudioDec_GetExtensionIndexPvPcP13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::QueueInputBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase16QueueInputBufferEi(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase16QueueInputBufferEi() called");
    return 0;
}

/* Demangled: gsm_option */
extern "C" __attribute__((visibility("default"))) int gsm_option(void) {
    ALOGD("gsm_option() called");
    return 0;
}

/* Demangled: MtkAudioDec_ComponentDeInit(void*) */
extern "C" __attribute__((visibility("default"))) int _Z27MtkAudioDec_ComponentDeInitPv(void) {
    ALOGD("_Z27MtkAudioDec_ComponentDeInitPv() called");
    return 0;
}

/* Demangled: StateToString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13StateToStringj(void) {
    ALOGD("_Z13StateToStringj() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::ReturnPendingInputBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase25ReturnPendingInputBuffersEv(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase25ReturnPendingInputBuffersEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: MtkOmxGsmDec::DecodeAudio(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MtkOmxGsmDec11DecodeAudioEP20OMX_BUFFERHEADERTYPES1_(void) {
    ALOGD("_ZN12MtkOmxGsmDec11DecodeAudioEP20OMX_BUFFERHEADERTYPES1_() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::findBufferHeaderIndex(unsigned int, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: gsm_destroy */
extern "C" __attribute__((visibility("default"))) int gsm_destroy(void) {
    ALOGD("gsm_destroy() called");
    return 0;
}

/* Demangled: MtkAudioDec_GetParameter(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _Z24MtkAudioDec_GetParameterPv13OMX_INDEXTYPES_(void) {
    ALOGD("_Z24MtkAudioDec_GetParameterPv13OMX_INDEXTYPES_() called");
    return 0;
}

/* Demangled: MtkAudioDec_ComponentInit(void*, char*) */
extern "C" __attribute__((visibility("default"))) int _Z25MtkAudioDec_ComponentInitPvPc(void) {
    ALOGD("_Z25MtkAudioDec_ComponentInitPvPc() called");
    return 0;
}

/* Demangled: gsm_asl */
extern "C" __attribute__((visibility("default"))) int gsm_asl(void) {
    ALOGD("gsm_asl() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::GetState(void*, OMX_STATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase8GetStateEPvP13OMX_STATETYPE(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase8GetStateEPvP13OMX_STATETYPE() called");
    return 0;
}

/* Demangled: pthread_mutex_lock_timeout(pthread_mutex_t*, int) */
extern "C" __attribute__((visibility("default"))) int _Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti(void) {
    ALOGD("_Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti() called");
    return 0;
}

/* Demangled: gsm_abs */
extern "C" __attribute__((visibility("default"))) int gsm_abs(void) {
    ALOGD("gsm_abs() called");
    return 0;
}

/* Demangled: MtkOmxGsmDec::~MtkOmxGsmDec() */
extern "C" __attribute__((visibility("default"))) int _ZN12MtkOmxGsmDecD0Ev(void) {
    ALOGD("_ZN12MtkOmxGsmDecD0Ev() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::HandleFillBufferDone(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: gsm_mult */
extern "C" __attribute__((visibility("default"))) int gsm_mult(void) {
    ALOGD("gsm_mult() called");
    return 0;
}

/* Demangled: MtkAudioDec_EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z27MtkAudioDec_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_Z27MtkAudioDec_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::HandlePortDisable(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase17HandlePortDisableEj(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase17HandlePortDisableEj() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: sem_wait_timeout(sem_t*, int) */
extern "C" __attribute__((visibility("default"))) int _Z16sem_wait_timeoutP5sem_ti(void) {
    ALOGD("_Z16sem_wait_timeoutP5sem_ti() called");
    return 0;
}

/* Demangled: MTK_OMX_ALLOC(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13MTK_OMX_ALLOCj(void) {
    ALOGD("_Z13MTK_OMX_ALLOCj() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::GetParameter(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase12GetParameterEPv13OMX_INDEXTYPES0_(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase12GetParameterEPv13OMX_INDEXTYPES0_() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::HandleEmptyBufferDone(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkAudioDec_FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z26MtkAudioDec_FillThisBufferPvP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_Z26MtkAudioDec_FillThisBufferPvP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: gsm_A */
extern "C" __attribute__((visibility("default"))) void* gsm_A = NULL;

/* Demangled: MtkOmxAudioDecBase::ComponentRoleEnum(void*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase17ComponentRoleEnumEPvPhj(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase17ComponentRoleEnumEPvPhj() called");
    return 0;
}

/* Demangled: CommandToString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15CommandToStringj(void) {
    ALOGD("_Z15CommandToStringj() called");
    return 0;
}

/* Exported Object: gsm_B */
extern "C" __attribute__((visibility("default"))) void* gsm_B = NULL;

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: gsm_asr */
extern "C" __attribute__((visibility("default"))) int gsm_asr(void) {
    ALOGD("gsm_asr() called");
    return 0;
}

/* Exported Object: gsm_QLB */
extern "C" __attribute__((visibility("default"))) void* gsm_QLB = NULL;

/* Exported Object: gsm_NRFAC */
extern "C" __attribute__((visibility("default"))) void* gsm_NRFAC = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: MtkOmxGsmDec::FlushAudioDecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN12MtkOmxGsmDec17FlushAudioDecoderEv(void) {
    ALOGD("_ZN12MtkOmxGsmDec17FlushAudioDecoderEv() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::DumpFTBQ() */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase8DumpFTBQEv(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase8DumpFTBQEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: MtkOmxGsmDec::DecodeGSM(gsm_state*, short*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MtkOmxGsmDec9DecodeGSMEP9gsm_statePsPhj(void) {
    ALOGD("_ZN12MtkOmxGsmDec9DecodeGSMEP9gsm_statePsPhj() called");
    return 0;
}

/* Demangled: MtkOmxGsmDec::MtkOmxGsmDec() */
extern "C" __attribute__((visibility("default"))) int _ZN12MtkOmxGsmDecC1Ev(void) {
    ALOGD("_ZN12MtkOmxGsmDecC1Ev() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::SetParameter(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase12SetParameterEPv13OMX_INDEXTYPES0_(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase12SetParameterEPv13OMX_INDEXTYPES0_() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkAudioDec_SetParameter(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _Z24MtkAudioDec_SetParameterPv13OMX_INDEXTYPES_(void) {
    ALOGD("_Z24MtkAudioDec_SetParameterPv13OMX_INDEXTYPES_() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::DequeueOutputBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase19DequeueOutputBufferEv(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase19DequeueOutputBufferEv() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::ReturnPendingOutputBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase26ReturnPendingOutputBuffersEv(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase26ReturnPendingOutputBuffersEv() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIiE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: gsm_L_asl */
extern "C" __attribute__((visibility("default"))) int gsm_L_asl(void) {
    ALOGD("gsm_L_asl() called");
    return 0;
}

/* Demangled: MtkOmxGsmDec::GetParameter(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MtkOmxGsmDec12GetParameterEPv13OMX_INDEXTYPES0_(void) {
    ALOGD("_ZN12MtkOmxGsmDec12GetParameterEPv13OMX_INDEXTYPES0_() called");
    return 0;
}

/* Demangled: gsm_decode */
extern "C" __attribute__((visibility("default"))) int gsm_decode(void) {
    ALOGD("gsm_decode() called");
    return 0;
}

/* Demangled: get_sem_value(sem_t*) */
extern "C" __attribute__((visibility("default"))) int _Z13get_sem_valueP5sem_t(void) {
    ALOGD("_Z13get_sem_valueP5sem_t() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::FlushOutputPort() */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase15FlushOutputPortEv(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase15FlushOutputPortEv() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIiE12do_constructEPvj() called");
    return 0;
}

/* Demangled: Gsm_Decoder */
extern "C" __attribute__((visibility("default"))) int Gsm_Decoder(void) {
    ALOGD("Gsm_Decoder() called");
    return 0;
}

/* Demangled: MtkOmxGsmDec::DeinitAudioDecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN12MtkOmxGsmDec18DeinitAudioDecoderEv(void) {
    ALOGD("_ZN12MtkOmxGsmDec18DeinitAudioDecoderEv() called");
    return 0;
}

/* Demangled: MtkAudioDec_UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z21MtkAudioDec_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh(void) {
    ALOGD("_Z21MtkAudioDec_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh() called");
    return 0;
}

/* Demangled: MtkAudioDec_FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z22MtkAudioDec_FreeBufferPvjP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_Z22MtkAudioDec_FreeBufferPvjP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: MtkAudioDec_AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z26MtkAudioDec_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j(void) {
    ALOGD("_Z26MtkAudioDec_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::HandlePortFlush(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase15HandlePortFlushEj(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase15HandlePortFlushEj() called");
    return 0;
}

/* Demangled: gsm_sub */
extern "C" __attribute__((visibility("default"))) int gsm_sub(void) {
    ALOGD("gsm_sub() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: gsm_H */
extern "C" __attribute__((visibility("default"))) void* gsm_H = NULL;

/* Demangled: MtkOmxAudioDecBase::HandleMarkBuffer(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase16HandleMarkBufferEjPv(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase16HandleMarkBufferEjPv() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecodeThread(void*) */
extern "C" __attribute__((visibility("default"))) int _Z23MtkOmxAudioDecodeThreadPv(void) {
    ALOGD("_Z23MtkOmxAudioDecodeThreadPv() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::~MtkOmxAudioDecBase() */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBaseD1Ev(void) {
    ALOGD("_ZN18MtkOmxAudioDecBaseD1Ev() called");
    return 0;
}

/* Demangled: gsm_mult_r */
extern "C" __attribute__((visibility("default"))) int gsm_mult_r(void) {
    ALOGD("gsm_mult_r() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::DequeueInputBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase18DequeueInputBufferEv(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase18DequeueInputBufferEv() called");
    return 0;
}

/* Demangled: MTK_OMX_MEMALIGN(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16MTK_OMX_MEMALIGNjj(void) {
    ALOGD("_Z16MTK_OMX_MEMALIGNjj() called");
    return 0;
}

/* Demangled: gsm_L_asr */
extern "C" __attribute__((visibility("default"))) int gsm_L_asr(void) {
    ALOGD("gsm_L_asr() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: MtkOmxComponentCreate */
extern "C" __attribute__((visibility("default"))) int MtkOmxComponentCreate(void) {
    ALOGD("MtkOmxComponentCreate() called");
    return 0;
}

/* Demangled: gsm_add */
extern "C" __attribute__((visibility("default"))) int gsm_add(void) {
    ALOGD("gsm_add() called");
    return 0;
}

/* Demangled: Gsm_RPE_Decoding */
extern "C" __attribute__((visibility("default"))) int Gsm_RPE_Decoding(void) {
    ALOGD("Gsm_RPE_Decoding() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: MTK_OMX_FREE(void*) */
extern "C" __attribute__((visibility("default"))) int _Z12MTK_OMX_FREEPv(void) {
    ALOGD("_Z12MTK_OMX_FREEPv() called");
    return 0;
}

/* Demangled: Gsm_Short_Term_Analysis_Filter */
extern "C" __attribute__((visibility("default"))) int Gsm_Short_Term_Analysis_Filter(void) {
    ALOGD("Gsm_Short_Term_Analysis_Filter() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase17GetExtensionIndexEPvPcP13OMX_INDEXTYPE(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase17GetExtensionIndexEPvPcP13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::QueueOutputBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase17QueueOutputBufferEi(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase17QueueOutputBufferEi() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::CheckBufferAvailability() */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase23CheckBufferAvailabilityEv(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase23CheckBufferAvailabilityEv() called");
    return 0;
}

/* Demangled: Gsm_RPE_Encoding */
extern "C" __attribute__((visibility("default"))) int Gsm_RPE_Encoding(void) {
    ALOGD("Gsm_RPE_Encoding() called");
    return 0;
}

/* Exported Object: gsm_INVA */
extern "C" __attribute__((visibility("default"))) void* gsm_INVA = NULL;

/* Demangled: MtkOmxGsmDec::~MtkOmxGsmDec() */
extern "C" __attribute__((visibility("default"))) int _ZN12MtkOmxGsmDecD1Ev(void) {
    ALOGD("_ZN12MtkOmxGsmDecD1Ev() called");
    return 0;
}

/* Demangled: MtkAudioDec_ComponentRoleEnum(void*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z29MtkAudioDec_ComponentRoleEnumPvPhj(void) {
    ALOGD("_Z29MtkAudioDec_ComponentRoleEnumPvPhj() called");
    return 0;
}

/* Demangled: absolute_timespec_from_timespec(timespec&, timespec const&, int) */
extern "C" __attribute__((visibility("default"))) int _Z31absolute_timespec_from_timespecR8timespecRKS_i(void) {
    ALOGD("_Z31absolute_timespec_from_timespecR8timespecRKS_i() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::MtkOmxAudioDecBase() */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBaseC2Ev(void) {
    ALOGD("_ZN18MtkOmxAudioDecBaseC2Ev() called");
    return 0;
}

/* Demangled: gsm_L_sub */
extern "C" __attribute__((visibility("default"))) int gsm_L_sub(void) {
    ALOGD("gsm_L_sub() called");
    return 0;
}

/* Demangled: MtkOmxGsmDec::SetParameter(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MtkOmxGsmDec12SetParameterEPv13OMX_INDEXTYPES0_(void) {
    ALOGD("_ZN12MtkOmxGsmDec12SetParameterEPv13OMX_INDEXTYPES0_() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::ComponentInit(void*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase13ComponentInitEPvPc(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase13ComponentInitEPvPc() called");
    return 0;
}

/* Demangled: MtkAudioDec_GetState(void*, OMX_STATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z20MtkAudioDec_GetStatePvP13OMX_STATETYPE(void) {
    ALOGD("_Z20MtkAudioDec_GetStatePvP13OMX_STATETYPE() called");
    return 0;
}

/* Exported Object: gsm_DLB */
extern "C" __attribute__((visibility("default"))) void* gsm_DLB = NULL;

/* Demangled: MtkOmxGsmDec::initGSMDecoder(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MtkOmxGsmDec14initGSMDecoderEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN12MtkOmxGsmDec14initGSMDecoderEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::HandlePortEnable(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase16HandlePortEnableEj(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase16HandlePortEnableEj() called");
    return 0;
}

/* Demangled: Gsm_Long_Term_Synthesis_Filtering */
extern "C" __attribute__((visibility("default"))) int Gsm_Long_Term_Synthesis_Filtering(void) {
    ALOGD("Gsm_Long_Term_Synthesis_Filtering() called");
    return 0;
}

/* Demangled: MtkAudioDec_SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z23MtkAudioDec_SendCommandPv15OMX_COMMANDTYPEjS_(void) {
    ALOGD("_Z23MtkAudioDec_SendCommandPv15OMX_COMMANDTYPEjS_() called");
    return 0;
}

/* Demangled: gsm_create */
extern "C" __attribute__((visibility("default"))) int gsm_create(void) {
    ALOGD("gsm_create() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIiEE = NULL;

/* Demangled: gsm_L_add */
extern "C" __attribute__((visibility("default"))) int gsm_L_add(void) {
    ALOGD("gsm_L_add() called");
    return 0;
}

/* Demangled: Gsm_Short_Term_Synthesis_Filter */
extern "C" __attribute__((visibility("default"))) int Gsm_Short_Term_Synthesis_Filter(void) {
    ALOGD("Gsm_Short_Term_Synthesis_Filter() called");
    return 0;
}

/* Exported Object: gsm_FAC */
extern "C" __attribute__((visibility("default"))) void* gsm_FAC = NULL;

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: MtkOmxGsmDec::MtkOmxGsmDec() */
extern "C" __attribute__((visibility("default"))) int _ZN12MtkOmxGsmDecC2Ev(void) {
    ALOGD("_ZN12MtkOmxGsmDecC2Ev() called");
    return 0;
}

/* Demangled: MtkAudioDec_SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z24MtkAudioDec_SetCallbacksPvP16OMX_CALLBACKTYPES_(void) {
    ALOGD("_Z24MtkAudioDec_SetCallbacksPvP16OMX_CALLBACKTYPES_() called");
    return 0;
}

/* Demangled: MtkOmxAudioCommandThread(void*) */
extern "C" __attribute__((visibility("default"))) int _Z24MtkOmxAudioCommandThreadPv(void) {
    ALOGD("_Z24MtkOmxAudioCommandThreadPv() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::FlushInputPort() */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase14FlushInputPortEv(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase14FlushInputPortEv() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: gsm_div */
extern "C" __attribute__((visibility("default"))) int gsm_div(void) {
    ALOGD("gsm_div() called");
    return 0;
}

/* Exported Object: gsm_MAC */
extern "C" __attribute__((visibility("default"))) void* gsm_MAC = NULL;

/* Demangled: MtkOmxAudioDecBase::SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase11SendCommandEPv15OMX_COMMANDTYPEjS0_(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase11SendCommandEPv15OMX_COMMANDTYPEjS0_() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::SetConfig(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase9SetConfigEPv13OMX_INDEXTYPES0_(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase9SetConfigEPv13OMX_INDEXTYPES0_() called");
    return 0;
}

/* Demangled: MtkAudioDec_GetConfig(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _Z21MtkAudioDec_GetConfigPv13OMX_INDEXTYPES_(void) {
    ALOGD("_Z21MtkAudioDec_GetConfigPv13OMX_INDEXTYPES_() called");
    return 0;
}

/* Demangled: MtkAudioDec_GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
extern "C" __attribute__((visibility("default"))) int _Z31MtkAudioDec_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h(void) {
    ALOGD("_Z31MtkAudioDec_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: Gsm_Long_Term_Predictor */
extern "C" __attribute__((visibility("default"))) int Gsm_Long_Term_Predictor(void) {
    ALOGD("Gsm_Long_Term_Predictor() called");
    return 0;
}

/* Demangled: MtkOmxGsmDec::handleBuffers(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*, OMX_BOOL, OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN12MtkOmxGsmDec13handleBuffersEP20OMX_BUFFERHEADERTYPES1_8OMX_BOOLS2_(void) {
    ALOGD("_ZN12MtkOmxGsmDec13handleBuffersEP20OMX_BUFFERHEADERTYPES1_8OMX_BOOLS2_() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::ComponentDeInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase15ComponentDeInitEPv(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase15ComponentDeInitEPv() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::GetConfig(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase9GetConfigEPv13OMX_INDEXTYPES0_(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase9GetConfigEPv13OMX_INDEXTYPES0_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::HandleStateSet(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase14HandleStateSetEj(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase14HandleStateSetEj() called");
    return 0;
}

/* Demangled: MTK_OMX_MEMSET(void*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z14MTK_OMX_MEMSETPvij(void) {
    ALOGD("_Z14MTK_OMX_MEMSETPvij() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::~MtkOmxAudioDecBase() */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBaseD2Ev(void) {
    ALOGD("_ZN18MtkOmxAudioDecBaseD2Ev() called");
    return 0;
}

/* Demangled: MtkAudioDec_SetConfig(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _Z21MtkAudioDec_SetConfigPv13OMX_INDEXTYPES_(void) {
    ALOGD("_Z21MtkAudioDec_SetConfigPv13OMX_INDEXTYPES_() called");
    return 0;
}

/* Demangled: MtkOmxAudioDecBase::HandleFillThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN18MtkOmxAudioDecBase20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN18MtkOmxAudioDecBase20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: gsm_L_mult */
extern "C" __attribute__((visibility("default"))) int gsm_L_mult(void) {
    ALOGD("gsm_L_mult() called");
    return 0;
}

/* Exported Object: gsm_MIC */
extern "C" __attribute__((visibility("default"))) void* gsm_MIC = NULL;
