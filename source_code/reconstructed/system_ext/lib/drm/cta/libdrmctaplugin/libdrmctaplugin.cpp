/*
 * Reverse-Engineered Source for: libdrmctaplugin.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libdrmctaplugin"

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
#include "libdrmctaplugin.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::DrmEngineBase::removeAllRights(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase15removeAllRightsEi(void) {
    ALOGD("_ZN7android13DrmEngineBase15removeAllRightsEi() called");
    return 0;
}

/* Demangled: android::DrmMetadata::KeyIterator::operator=(android::DrmMetadata::KeyIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DrmMetadata11KeyIteratoraSERKS1_(void) {
    ALOGD("_ZN7android11DrmMetadata11KeyIteratoraSERKS1_() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onProcessDrmInfo(int, android::DrmInfo const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn16onProcessDrmInfoEiPKNS_7DrmInfoE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn16onProcessDrmInfoEiPKNS_7DrmInfoE() called");
    return 0;
}

/* Demangled: android::Vector<android::DrmCtaUtil::Listener>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memmove8(void) __asm__("__aeabi_memmove8");
int fn___aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onInitialize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn12onInitializeEi(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn12onInitializeEi() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onSaveRights(int, android::DrmRights const&, android::String8 const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn12onSaveRightsEiRKNS_9DrmRightsERKNS_7String8ES6_(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn12onSaveRightsEiRKNS_9DrmRightsERKNS_7String8ES6_() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onGetConstraints(int, android::String8 const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn16onGetConstraintsEiPKNS_7String8Ei(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn16onGetConstraintsEiPKNS_7String8Ei() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onOpenConvertSession(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn20onOpenConvertSessionEii(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn20onOpenConvertSessionEii() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::decrypt(int, android::sp<android::DecryptHandle>&, int, android::DrmBuffer const*, android::DrmBuffer**, android::DrmBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase7decryptEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferEPPS5_S8_(void) {
    ALOGD("_ZN7android13DrmEngineBase7decryptEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferEPPS5_S8_() called");
    return 0;
}

/* Demangled: android::DrmMetadata::getCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11DrmMetadata8getCountEv(void) {
    ALOGD("_ZNK7android11DrmMetadata8getCountEv() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::DrmInfoRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14DrmInfoRequestE = NULL;

/* Demangled: android::DrmSupportInfo::getDescription() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14DrmSupportInfo14getDescriptionEv(void) {
    ALOGD("_ZNK7android14DrmSupportInfo14getDescriptionEv() called");
    return 0;
}

/* Demangled: android::DrmMetadata::KeyIterator::hasNext() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DrmMetadata11KeyIterator7hasNextEv(void) {
    ALOGD("_ZN7android11DrmMetadata11KeyIterator7hasNextEv() called");
    return 0;
}

/* Exported Object: android::DrmCtaPlugIn::sJavaAPIListeners */
extern "C" __attribute__((visibility("default"))) void* _ZN7android12DrmCtaPlugIn17sJavaAPIListenersE = NULL;

/* Demangled: android::DrmEngineBase::~DrmEngineBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBaseD2Ev(void) {
    ALOGD("_ZN7android13DrmEngineBaseD2Ev() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::setDescription(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfo14setDescriptionERKNS_7String8E(void) {
    ALOGD("_ZN7android14DrmSupportInfo14setDescriptionERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, char const*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: android::DrmInfo::put(android::String8 const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmInfo3putERKNS_7String8ES3_(void) {
    ALOGD("_ZN7android7DrmInfo3putERKNS_7String8ES3_() called");
    return 0;
}

/* Exported Object: vtable for android::DrmInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7DrmInfoE = NULL;

/* Demangled: android::DrmEngineBase::getMetadata(int, android::String8 const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase11getMetadataEiPKNS_7String8E(void) {
    ALOGD("_ZN7android13DrmEngineBase11getMetadataEiPKNS_7String8E() called");
    return 0;
}

/* Demangled: android::Vector<android::DrmCtaUtil::Listener>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::DrmInfoRequest::KeyIterator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14DrmInfoRequest11KeyIteratorE = NULL;

/* Exported Object: vtable for android::DrmInfoRequest::Iterator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14DrmInfoRequest8IteratorE = NULL;

/* Demangled: android::DrmSupportInfo::FileSuffixIterator::FileSuffixIterator(android::DrmSupportInfo::FileSuffixIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfo18FileSuffixIteratorC1ERKS1_(void) {
    ALOGD("_ZN7android14DrmSupportInfo18FileSuffixIteratorC1ERKS1_() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::getSupportInfo(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase14getSupportInfoEi(void) {
    ALOGD("_ZN7android13DrmEngineBase14getSupportInfoEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: vtable for android::DrmCtaPlugIn */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12DrmCtaPlugInE = NULL;

/* Exported Object: vtable for android::DrmInfo::Iterator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7DrmInfo8IteratorE = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memcpy4(void) __asm__("__aeabi_memcpy4");
int fn___aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onCanHandle(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn11onCanHandleEiRKNS_7String8E(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn11onCanHandleEiRKNS_7String8E() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::String8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_7String8EEE = NULL;

/* Demangled: android::DrmEngineBase::getConstraints(int, android::String8 const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase14getConstraintsEiPKNS_7String8Ei(void) {
    ALOGD("_ZN7android13DrmEngineBase14getConstraintsEiPKNS_7String8Ei() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::~DrmEngineBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBaseD0Ev(void) {
    ALOGD("_ZN7android13DrmEngineBaseD0Ev() called");
    return 0;
}

/* Demangled: android::DrmInfo::KeyIterator::hasNext() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmInfo11KeyIterator7hasNextEv(void) {
    ALOGD("_ZN7android7DrmInfo11KeyIterator7hasNextEv() called");
    return 0;
}

/* Demangled: android::DrmInfo::Iterator::Iterator(android::DrmInfo::Iterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmInfo8IteratorC2ERKS1_(void) {
    ALOGD("_ZN7android7DrmInfo8IteratorC2ERKS1_() called");
    return 0;
}

/* Exported Object: vtable for android::DrmSupportInfo::FileSuffixIterator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14DrmSupportInfo18FileSuffixIteratorE = NULL;

/* Demangled: android::DrmEngineBase::pread(int, android::sp<android::DecryptHandle>&, void*, int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase5preadEiRNS_2spINS_13DecryptHandleEEEPvix(void) {
    ALOGD("_ZN7android13DrmEngineBase5preadEiRNS_2spINS_13DecryptHandleEEEPvix() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::DrmCtaUtil::Listener> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_10DrmCtaUtil8ListenerEEE = NULL;

/* Demangled: android::DrmMetadata::KeyIterator::KeyIterator(android::DrmMetadata::KeyIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DrmMetadata11KeyIteratorC2ERKS1_(void) {
    ALOGD("_ZN7android11DrmMetadata11KeyIteratorC2ERKS1_() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::Iterator::hasNext() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmInfoRequest8Iterator7hasNextEv(void) {
    ALOGD("_ZN7android14DrmInfoRequest8Iterator7hasNextEv() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::operator=(android::DrmSupportInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfoaSERKS0_(void) {
    ALOGD("_ZN7android14DrmSupportInfoaSERKS0_() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::createDecryptThread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn19createDecryptThreadEv(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn19createDecryptThreadEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memcpy(void) __asm__("__aeabi_memcpy");
int fn___aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE12do_constructEPvj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memcpy8(void) __asm__("__aeabi_memcpy8");
int fn___aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start __asm__("__bss_start") = NULL;

/* Demangled: destroy */
extern "C" __attribute__((visibility("default"))) int destroy(void) {
    ALOGD("destroy() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::DrmSupportInfo(android::DrmSupportInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfoC2ERKS0_(void) {
    ALOGD("_ZN7android14DrmSupportInfoC2ERKS0_() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::validateAction(int, android::String8 const&, int, android::ActionDescription const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase14validateActionEiRKNS_7String8EiRKNS_17ActionDescriptionE(void) {
    ALOGD("_ZN7android13DrmEngineBase14validateActionEiRKNS_7String8EiRKNS_17ActionDescriptionE() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::openDecryptSession(int, android::sp<android::DecryptHandle>&, int, long long, long long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase18openDecryptSessionEiRNS_2spINS_13DecryptHandleEEEixxPKc(void) {
    ALOGD("_ZN7android13DrmEngineBase18openDecryptSessionEiRNS_2spINS_13DecryptHandleEEEixxPKc() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::initializeDecryptUnit(int, android::sp<android::DecryptHandle>&, int, android::DrmBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase21initializeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferE(void) {
    ALOGD("_ZN7android13DrmEngineBase21initializeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferE() called");
    return 0;
}

/* Demangled: android::DrmInfo::DrmInfo(int, android::DrmBuffer const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmInfoC1EiRKNS_9DrmBufferERKNS_7String8E(void) {
    ALOGD("_ZN7android7DrmInfoC1EiRKNS_9DrmBufferERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmMetadata::getAsByteArray(android::String8 const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11DrmMetadata14getAsByteArrayEPKNS_7String8E(void) {
    ALOGD("_ZNK7android11DrmMetadata14getAsByteArrayEPKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::Iterator::Iterator(android::DrmInfoRequest::Iterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmInfoRequest8IteratorC1ERKS1_(void) {
    ALOGD("_ZN7android14DrmInfoRequest8IteratorC1ERKS1_() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::DrmInfoRequest(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmInfoRequestC1EiRKNS_7String8E(void) {
    ALOGD("_ZN7android14DrmInfoRequestC1EiRKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::MimeTypeIterator::hasNext() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfo16MimeTypeIterator7hasNextEv(void) {
    ALOGD("_ZN7android14DrmSupportInfo16MimeTypeIterator7hasNextEv() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onValidateAction(int, android::String8 const&, int, android::ActionDescription const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn16onValidateActionEiRKNS_7String8EiRKNS_17ActionDescriptionE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn16onValidateActionEiRKNS_7String8EiRKNS_17ActionDescriptionE() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::setKey(android::DrmInfoRequest const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn6setKeyEPKNS_14DrmInfoRequestE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn6setKeyEPKNS_14DrmInfoRequestE() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onCheckRightsStatus(int, android::String8 const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn19onCheckRightsStatusEiRKNS_7String8Ei(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn19onCheckRightsStatusEiRKNS_7String8Ei() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onSetPlaybackStatus(int, android::sp<android::DecryptHandle>&, int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn19onSetPlaybackStatusEiRNS_2spINS_13DecryptHandleEEEix(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn19onSetPlaybackStatusEiRNS_2spINS_13DecryptHandleEEEix() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onCloseConvertSession(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn21onCloseConvertSessionEii(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn21onCloseConvertSessionEii() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::DrmInfo::getCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7DrmInfo8getCountEv(void) {
    ALOGD("_ZNK7android7DrmInfo8getCountEv() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onSetOnInfoListener(int, android::IDrmEngine::OnInfoListener const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn19onSetOnInfoListenerEiPKNS_10IDrmEngine14OnInfoListenerE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn19onSetOnInfoListenerEiPKNS_10IDrmEngine14OnInfoListenerE() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onFinalizeDecryptUnit(int, android::sp<android::DecryptHandle>&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn21onFinalizeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEi(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn21onFinalizeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEi() called");
    return 0;
}

/* Demangled: android::DrmMetadata::put(android::String8 const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DrmMetadata3putEPKNS_7String8EPKc(void) {
    ALOGD("_ZN7android11DrmMetadata3putEPKNS_7String8EPKc() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onCloseDecryptSession(int, android::sp<android::DecryptHandle>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn21onCloseDecryptSessionEiRNS_2spINS_13DecryptHandleEEE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn21onCloseDecryptSessionEiRNS_2spINS_13DecryptHandleEEE() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::DrmCtaPlugIn() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugInC1Ev(void) {
    ALOGD("_ZN7android12DrmCtaPlugInC1Ev() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::KeyIterator::hasNext() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmInfoRequest11KeyIterator7hasNextEv(void) {
    ALOGD("_ZN7android14DrmInfoRequest11KeyIterator7hasNextEv() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::put(android::String8 const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmInfoRequest3putERKNS_7String8ES3_(void) {
    ALOGD("_ZN7android14DrmInfoRequest3putERKNS_7String8ES3_() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::operator==(android::DrmSupportInfo const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14DrmSupportInfoeqERKS0_(void) {
    ALOGD("_ZNK7android14DrmSupportInfoeqERKS0_() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::get(android::String8 const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14DrmInfoRequest3getERKNS_7String8E(void) {
    ALOGD("_ZNK7android14DrmInfoRequest3getERKNS_7String8E() called");
    return 0;
}

/* Exported Object: vtable for android::DrmMetadata::KeyIterator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11DrmMetadata11KeyIteratorE = NULL;

/* Demangled: android::DrmSupportInfo::MimeTypeIterator::operator=(android::DrmSupportInfo::MimeTypeIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfo16MimeTypeIteratoraSERKS1_(void) {
    ALOGD("_ZN7android14DrmSupportInfo16MimeTypeIteratoraSERKS1_() called");
    return 0;
}

/* Exported Object: vtable for android::DrmSupportInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14DrmSupportInfoE = NULL;

/* Demangled: android::Vector<android::DrmCtaUtil::Listener>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::DrmMetadata::Iterator::Iterator(android::DrmMetadata::Iterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DrmMetadata8IteratorC1ERKS1_(void) {
    ALOGD("_ZN7android11DrmMetadata8IteratorC1ERKS1_() called");
    return 0;
}

/* Demangled: android::DrmMetadata::Iterator::hasNext() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DrmMetadata8Iterator7hasNextEv(void) {
    ALOGD("_ZN7android11DrmMetadata8Iterator7hasNextEv() called");
    return 0;
}

/* Demangled: android::DrmMetadata::getValue(android::String8 const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11DrmMetadata8getValueEPKNS_7String8E(void) {
    ALOGD("_ZNK7android11DrmMetadata8getValueEPKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::DrmSupportInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfoC2Ev(void) {
    ALOGD("_ZN7android14DrmSupportInfoC2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::DrmSupportInfo::MimeTypeIterator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14DrmSupportInfo16MimeTypeIteratorE = NULL;

/* Demangled: android::DrmCtaPlugIn::onGetSupportInfo(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn16onGetSupportInfoEi(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn16onGetSupportInfoEi() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onDecrypt(int, android::sp<android::DecryptHandle>&, int, android::DrmBuffer const*, android::DrmBuffer**, android::DrmBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn9onDecryptEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferEPPS5_S8_(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn9onDecryptEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferEPPS5_S8_() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::addFileSuffix(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfo13addFileSuffixERKNS_7String8E(void) {
    ALOGD("_ZN7android14DrmSupportInfo13addFileSuffixERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::sp<android::DecryptHandle>::operator=(android::DecryptHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_13DecryptHandleEEaSEPS1_(void) {
    ALOGD("_ZN7android2spINS_13DecryptHandleEEaSEPS1_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::DrmMetadata::KeyIterator::next() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DrmMetadata11KeyIterator4nextEv(void) {
    ALOGD("_ZN7android11DrmMetadata11KeyIterator4nextEv() called");
    return 0;
}

/* Demangled: create */
extern "C" __attribute__((visibility("default"))) int create(void) {
    ALOGD("create() called");
    return 0;
}

/* Demangled: android::DrmInfo::KeyIterator::KeyIterator(android::DrmInfo::KeyIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmInfo11KeyIteratorC1ERKS1_(void) {
    ALOGD("_ZN7android7DrmInfo11KeyIteratorC1ERKS1_() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::~DrmCtaPlugIn() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugInD1Ev(void) {
    ALOGD("_ZN7android12DrmCtaPlugInD1Ev() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::consumeRights(int, android::sp<android::DecryptHandle>&, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase13consumeRightsEiRNS_2spINS_13DecryptHandleEEEib(void) {
    ALOGD("_ZN7android13DrmEngineBase13consumeRightsEiRNS_2spINS_13DecryptHandleEEEib() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::createEncryptThread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn19createEncryptThreadEv(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn19createEncryptThreadEv() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::saveRights(int, android::DrmRights const&, android::String8 const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase10saveRightsEiRKNS_9DrmRightsERKNS_7String8ES6_(void) {
    ALOGD("_ZN7android13DrmEngineBase10saveRightsEiRKNS_9DrmRightsERKNS_7String8ES6_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, char const*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::Cta5File*>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPNS_8Cta5FileEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIPNS_8Cta5FileEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::DrmInfo::Iterator::Iterator(android::DrmInfo::Iterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmInfo8IteratorC1ERKS1_(void) {
    ALOGD("_ZN7android7DrmInfo8IteratorC1ERKS1_() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::getOriginalMimeType(int, android::String8 const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase19getOriginalMimeTypeEiRKNS_7String8Ei(void) {
    ALOGD("_ZN7android13DrmEngineBase19getOriginalMimeTypeEiRKNS_7String8Ei() called");
    return 0;
}

/* Demangled: android::DrmMetadata::KeyIterator::KeyIterator(android::DrmMetadata::KeyIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DrmMetadata11KeyIteratorC1ERKS1_(void) {
    ALOGD("_ZN7android11DrmMetadata11KeyIteratorC1ERKS1_() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onTerminate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn11onTerminateEi(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn11onTerminateEi() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onOpenDecryptSession(int, android::sp<android::DecryptHandle>&, int, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn20onOpenDecryptSessionEiRNS_2spINS_13DecryptHandleEEEixx(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn20onOpenDecryptSessionEiRNS_2spINS_13DecryptHandleEEEixx() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::openConvertSession(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase18openConvertSessionEii(void) {
    ALOGD("_ZN7android13DrmEngineBase18openConvertSessionEii() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::openDecryptSession(int, android::sp<android::DecryptHandle>&, android::DrmBuffer const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase18openDecryptSessionEiRNS_2spINS_13DecryptHandleEEERKNS_9DrmBufferERKNS_7String8E(void) {
    ALOGD("_ZN7android13DrmEngineBase18openDecryptSessionEiRNS_2spINS_13DecryptHandleEEERKNS_9DrmBufferERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, char const*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::KeyIterator::operator=(android::DrmInfoRequest::KeyIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmInfoRequest11KeyIteratoraSERKS1_(void) {
    ALOGD("_ZN7android14DrmInfoRequest11KeyIteratoraSERKS1_() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onOpenDecryptSession(int, android::sp<android::DecryptHandle>&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn20onOpenDecryptSessionEiRNS_2spINS_13DecryptHandleEEEPKc(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn20onOpenDecryptSessionEiRNS_2spINS_13DecryptHandleEEEPKc() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, char const*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::iterator() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14DrmInfoRequest8iteratorEv(void) {
    ALOGD("_ZNK7android14DrmInfoRequest8iteratorEv() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::MimeTypeIterator::MimeTypeIterator(android::DrmSupportInfo::MimeTypeIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfo16MimeTypeIteratorC2ERKS1_(void) {
    ALOGD("_ZN7android14DrmSupportInfo16MimeTypeIteratorC2ERKS1_() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::isSupportedMimeType(android::String8 const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14DrmSupportInfo19isSupportedMimeTypeERKNS_7String8E(void) {
    ALOGD("_ZNK7android14DrmSupportInfo19isSupportedMimeTypeERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onInitializeDecryptUnit(int, android::sp<android::DecryptHandle>&, int, android::DrmBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn23onInitializeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn23onInitializeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferE() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::KeyIterator::KeyIterator(android::DrmInfoRequest::KeyIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmInfoRequest11KeyIteratorC2ERKS1_(void) {
    ALOGD("_ZN7android14DrmInfoRequest11KeyIteratorC2ERKS1_() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::FileSuffixIterator::next() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfo18FileSuffixIterator4nextEv(void) {
    ALOGD("_ZN7android14DrmSupportInfo18FileSuffixIterator4nextEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, char const*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::Cta5File*>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPNS_8Cta5FileEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPNS_8Cta5FileEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::KeyIterator::next() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmInfoRequest11KeyIterator4nextEv(void) {
    ALOGD("_ZN7android14DrmInfoRequest11KeyIterator4nextEv() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: android::DrmCtaPlugIn::onGetDrmObjectType(int, android::String8 const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn18onGetDrmObjectTypeEiRKNS_7String8ES3_(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn18onGetDrmObjectTypeEiRKNS_7String8ES3_() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::getMimeType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14DrmInfoRequest11getMimeTypeEv(void) {
    ALOGD("_ZNK7android14DrmInfoRequest11getMimeTypeEv() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onRemoveRights(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn14onRemoveRightsEiRKNS_7String8E(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn14onRemoveRightsEiRKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::getInfoType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14DrmInfoRequest11getInfoTypeEv(void) {
    ALOGD("_ZNK7android14DrmInfoRequest11getInfoTypeEv() called");
    return 0;
}

/* Demangled: android::DrmInfo::KeyIterator::next() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmInfo11KeyIterator4nextEv(void) {
    ALOGD("_ZN7android7DrmInfo11KeyIterator4nextEv() called");
    return 0;
}

/* Demangled: android::DrmInfo::Iterator::next() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmInfo8Iterator4nextEv(void) {
    ALOGD("_ZN7android7DrmInfo8Iterator4nextEv() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::getProgress(android::DrmInfoRequest const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn11getProgressEPKNS_14DrmInfoRequestE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn11getProgressEPKNS_14DrmInfoRequestE() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::getToken(android::DrmInfoRequest const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn8getTokenEPKNS_14DrmInfoRequestE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn8getTokenEPKNS_14DrmInfoRequestE() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::convertData(int, int, android::DrmBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase11convertDataEiiPKNS_9DrmBufferE(void) {
    ALOGD("_ZN7android13DrmEngineBase11convertDataEiiPKNS_9DrmBufferE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::getFileSuffixCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14DrmSupportInfo18getFileSuffixCountEv(void) {
    ALOGD("_ZNK7android14DrmSupportInfo18getFileSuffixCountEv() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::initialize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase10initializeEi(void) {
    ALOGD("_ZN7android13DrmEngineBase10initializeEi() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::closeConvertSession(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase19closeConvertSessionEii(void) {
    ALOGD("_ZN7android13DrmEngineBase19closeConvertSessionEii() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::closeDecryptSession(int, android::sp<android::DecryptHandle>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase19closeDecryptSessionEiRNS_2spINS_13DecryptHandleEEE(void) {
    ALOGD("_ZN7android13DrmEngineBase19closeDecryptSessionEiRNS_2spINS_13DecryptHandleEEE() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::canHandle(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase9canHandleEiRKNS_7String8E(void) {
    ALOGD("_ZN7android13DrmEngineBase9canHandleEiRKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmMetadata::Iterator::next() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DrmMetadata8Iterator4nextEv(void) {
    ALOGD("_ZN7android11DrmMetadata8Iterator4nextEv() called");
    return 0;
}

/* Exported Object: vtable for android::DrmMetadata::Iterator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11DrmMetadata8IteratorE = NULL;

/* Demangled: android::DrmInfoRequest::keyIterator() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14DrmInfoRequest11keyIteratorEv(void) {
    ALOGD("_ZNK7android14DrmInfoRequest11keyIteratorEv() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::getMimeTypeIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfo19getMimeTypeIteratorEv(void) {
    ALOGD("_ZN7android14DrmSupportInfo19getMimeTypeIteratorEv() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::getMimeTypeCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14DrmSupportInfo16getMimeTypeCountEv(void) {
    ALOGD("_ZNK7android14DrmSupportInfo16getMimeTypeCountEv() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::acquireDrmInfo(int, android::DrmInfoRequest const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase14acquireDrmInfoEiPKNS_14DrmInfoRequestE(void) {
    ALOGD("_ZN7android13DrmEngineBase14acquireDrmInfoEiPKNS_14DrmInfoRequestE() called");
    return 0;
}

/* Demangled: android::decryptThread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13decryptThreadEPv(void) {
    ALOGD("_ZN7android13decryptThreadEPv() called");
    return 0;
}

/* Demangled: android::Vector<android::DrmCtaUtil::Listener>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE = NULL;

/* Demangled: android::DrmInfo::get(android::String8 const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7DrmInfo3getERKNS_7String8E(void) {
    ALOGD("_ZNK7android7DrmInfo3getERKNS_7String8E() called");
    return 0;
}

/* Exported Object: android::DrmInfoRequest::SUBSCRIPTION_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmInfoRequest15SUBSCRIPTION_IDE = NULL;

/* Demangled: android::DrmSupportInfo::getFileSuffixIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfo21getFileSuffixIteratorEv(void) {
    ALOGD("_ZN7android14DrmSupportInfo21getFileSuffixIteratorEv() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::DrmSupportInfo(android::DrmSupportInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfoC1ERKS0_(void) {
    ALOGD("_ZN7android14DrmSupportInfoC1ERKS0_() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: android::DrmCtaPlugIn::ChangeKey(android::DrmInfoRequest const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn9ChangeKeyEPKNS_14DrmInfoRequestE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn9ChangeKeyEPKNS_14DrmInfoRequestE() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::processDrmInfo(int, android::DrmInfo const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase14processDrmInfoEiPKNS_7DrmInfoE(void) {
    ALOGD("_ZN7android13DrmEngineBase14processDrmInfoEiPKNS_7DrmInfoE() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::~DrmEngineBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBaseD1Ev(void) {
    ALOGD("_ZN7android13DrmEngineBaseD1Ev() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onAcquireDrmInfo(int, android::DrmInfoRequest const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn16onAcquireDrmInfoEiPKNS_14DrmInfoRequestE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn16onAcquireDrmInfoEiPKNS_14DrmInfoRequestE() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::addMimeType(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfo11addMimeTypeERKNS_7String8E(void) {
    ALOGD("_ZN7android14DrmSupportInfo11addMimeTypeERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::Vector<android::DrmCtaUtil::Listener>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::Vector<android::Cta5File*>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPNS_8Cta5FileEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPNS_8Cta5FileEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::encryptThread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13encryptThreadEPv(void) {
    ALOGD("_ZN7android13encryptThreadEPv() called");
    return 0;
}

/* Demangled: android::DrmInfo::DrmInfo(int, android::DrmBuffer const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmInfoC2EiRKNS_9DrmBufferERKNS_7String8E(void) {
    ALOGD("_ZN7android7DrmInfoC2EiRKNS_9DrmBufferERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::clearToken(android::DrmInfoRequest const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn10clearTokenEPKNS_14DrmInfoRequestE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn10clearTokenEPKNS_14DrmInfoRequestE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::DrmInfo::indexOfKey(android::String8 const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7DrmInfo10indexOfKeyERKNS_7String8E(void) {
    ALOGD("_ZNK7android7DrmInfo10indexOfKeyERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onGetOriginalMimeType(int, android::String8 const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn21onGetOriginalMimeTypeEiRKNS_7String8Ei(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn21onGetOriginalMimeTypeEiRKNS_7String8Ei() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::cancel(android::DrmInfoRequest const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn6cancelEPKNS_14DrmInfoRequestE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn6cancelEPKNS_14DrmInfoRequestE() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::FileSuffixIterator::operator=(android::DrmSupportInfo::FileSuffixIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfo18FileSuffixIteratoraSERKS1_(void) {
    ALOGD("_ZN7android14DrmSupportInfo18FileSuffixIteratoraSERKS1_() called");
    return 0;
}

/* Exported Object: vtable for android::SessionMap<android::DrmCtaPlugIn::DecryptSession*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10SessionMapIPNS_12DrmCtaPlugIn14DecryptSessionEEE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, char const*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEEE = NULL;

/* Exported Object: vtable for android::DrmEngineBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android13DrmEngineBaseE = NULL;

/* Demangled: android::DrmSupportInfo::operator<(android::DrmSupportInfo const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14DrmSupportInfoltERKS0_(void) {
    ALOGD("_ZNK7android14DrmSupportInfoltERKS0_() called");
    return 0;
}

/* Demangled: android::DrmMetadata::keyIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DrmMetadata11keyIteratorEv(void) {
    ALOGD("_ZN7android11DrmMetadata11keyIteratorEv() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::encrypt(android::DrmInfoRequest const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn7encryptEPKNS_14DrmInfoRequestE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn7encryptEPKNS_14DrmInfoRequestE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, char const*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::FileSuffixIterator::hasNext() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfo18FileSuffixIterator7hasNextEv(void) {
    ALOGD("_ZN7android14DrmSupportInfo18FileSuffixIterator7hasNextEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::Cta5File*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIPNS_8Cta5FileEEE = NULL;

/* Demangled: android::DrmInfo::Iterator::hasNext() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmInfo8Iterator7hasNextEv(void) {
    ALOGD("_ZN7android7DrmInfo8Iterator7hasNextEv() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::MimeTypeIterator::MimeTypeIterator(android::DrmSupportInfo::MimeTypeIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfo16MimeTypeIteratorC1ERKS1_(void) {
    ALOGD("_ZN7android14DrmSupportInfo16MimeTypeIteratorC1ERKS1_() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::DrmCtaPlugIn() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugInC2Ev(void) {
    ALOGD("_ZN7android12DrmCtaPlugInC2Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::Cta5File*>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPNS_8Cta5FileEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIPNS_8Cta5FileEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: vtable for android::DrmMetadata */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11DrmMetadataE = NULL;

/* Exported Object: vtable for android::DrmInfo::KeyIterator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7DrmInfo11KeyIteratorE = NULL;

/* Demangled: android::DrmCtaPlugIn::decryptInfR(android::DrmInfoRequest const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn11decryptInfREPKNS_14DrmInfoRequestE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn11decryptInfREPKNS_14DrmInfoRequestE() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onConvertData(int, int, android::DrmBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn13onConvertDataEiiPKNS_9DrmBufferE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn13onConvertDataEiiPKNS_9DrmBufferE() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onConsumeRights(int, android::sp<android::DecryptHandle>&, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn15onConsumeRightsEiRNS_2spINS_13DecryptHandleEEEib(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn15onConsumeRightsEiRNS_2spINS_13DecryptHandleEEEib() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::setOnInfoListener(int, android::IDrmEngine::OnInfoListener const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase17setOnInfoListenerEiPKNS_10IDrmEngine14OnInfoListenerE(void) {
    ALOGD("_ZN7android13DrmEngineBase17setOnInfoListenerEiPKNS_10IDrmEngine14OnInfoListenerE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::DrmInfoRequest(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmInfoRequestC2EiRKNS_7String8E(void) {
    ALOGD("_ZN7android14DrmInfoRequestC2EiRKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onRemoveAllRights(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn17onRemoveAllRightsEi(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn17onRemoveAllRightsEi() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEEE = NULL;

/* Demangled: android::DrmInfoRequest::Iterator::operator=(android::DrmInfoRequest::Iterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmInfoRequest8IteratoraSERKS1_(void) {
    ALOGD("_ZN7android14DrmInfoRequest8IteratoraSERKS1_() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::isCta5File(android::DrmInfoRequest const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn10isCta5FileEPKNS_14DrmInfoRequestE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn10isCta5FileEPKNS_14DrmInfoRequestE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::Iterator::next() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmInfoRequest8Iterator4nextEv(void) {
    ALOGD("_ZN7android14DrmInfoRequest8Iterator4nextEv() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::isSupportedFileSuffix(android::String8 const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14DrmSupportInfo21isSupportedFileSuffixERKNS_7String8E(void) {
    ALOGD("_ZNK7android14DrmSupportInfo21isSupportedFileSuffixERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onPread(int, android::sp<android::DecryptHandle>&, void*, int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn7onPreadEiRNS_2spINS_13DecryptHandleEEEPvix(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn7onPreadEiRNS_2spINS_13DecryptHandleEEEPvix() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::finalizeDecryptUnit(int, android::sp<android::DecryptHandle>&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase19finalizeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEi(void) {
    ALOGD("_ZN7android13DrmEngineBase19finalizeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEi() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memmove(void) __asm__("__aeabi_memmove");
int fn___aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::getCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14DrmInfoRequest8getCountEv(void) {
    ALOGD("_ZNK7android14DrmInfoRequest8getCountEv() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::~DrmCtaPlugIn() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugInD2Ev(void) {
    ALOGD("_ZN7android12DrmCtaPlugInD2Ev() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::removeRights(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase12removeRightsEiRKNS_7String8E(void) {
    ALOGD("_ZN7android13DrmEngineBase12removeRightsEiRKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::setPlaybackStatus(int, android::sp<android::DecryptHandle>&, int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase17setPlaybackStatusEiRNS_2spINS_13DecryptHandleEEEix(void) {
    ALOGD("_ZN7android13DrmEngineBase17setPlaybackStatusEiRNS_2spINS_13DecryptHandleEEEix() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::openDecryptSession(int, android::sp<android::DecryptHandle>&, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase18openDecryptSessionEiRNS_2spINS_13DecryptHandleEEEPKcS6_(void) {
    ALOGD("_ZN7android13DrmEngineBase18openDecryptSessionEiRNS_2spINS_13DecryptHandleEEEPKcS6_() called");
    return 0;
}

/* Demangled: android::Vector<android::DrmCtaUtil::Listener>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::FileSuffixIterator::FileSuffixIterator(android::DrmSupportInfo::FileSuffixIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfo18FileSuffixIteratorC2ERKS1_(void) {
    ALOGD("_ZN7android14DrmSupportInfo18FileSuffixIteratorC2ERKS1_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::DrmMetadata::get(android::String8 const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11DrmMetadata3getERKNS_7String8E(void) {
    ALOGD("_ZNK7android11DrmMetadata3getERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::MimeTypeIterator::next() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfo16MimeTypeIterator4nextEv(void) {
    ALOGD("_ZN7android14DrmSupportInfo16MimeTypeIterator4nextEv() called");
    return 0;
}

/* Demangled: android::DrmSupportInfo::DrmSupportInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmSupportInfoC1Ev(void) {
    ALOGD("_ZN7android14DrmSupportInfoC1Ev() called");
    return 0;
}

/* Demangled: android::DrmInfo::getMimeType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7DrmInfo11getMimeTypeEv(void) {
    ALOGD("_ZNK7android7DrmInfo11getMimeTypeEv() called");
    return 0;
}

/* Exported Object: android::DrmInfoRequest::ACCOUNT_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14DrmInfoRequest10ACCOUNT_IDE = NULL;

/* Demangled: android::DrmInfoRequest::KeyIterator::KeyIterator(android::DrmInfoRequest::KeyIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmInfoRequest11KeyIteratorC1ERKS1_(void) {
    ALOGD("_ZN7android14DrmInfoRequest11KeyIteratorC1ERKS1_() called");
    return 0;
}

/* Demangled: android::Vector<android::Cta5File*>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPNS_8Cta5FileEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPNS_8Cta5FileEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::DrmMetadata::Iterator::operator=(android::DrmMetadata::Iterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DrmMetadata8IteratoraSERKS1_(void) {
    ALOGD("_ZN7android11DrmMetadata8IteratoraSERKS1_() called");
    return 0;
}

/* Demangled: android::DrmInfo::getInfoType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7DrmInfo11getInfoTypeEv(void) {
    ALOGD("_ZNK7android7DrmInfo11getInfoTypeEv() called");
    return 0;
}

/* Demangled: android::DrmInfo::iterator() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7DrmInfo8iteratorEv(void) {
    ALOGD("_ZNK7android7DrmInfo8iteratorEv() called");
    return 0;
}

/* Demangled: android::DrmMetadata::iterator() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DrmMetadata8iteratorEv(void) {
    ALOGD("_ZN7android11DrmMetadata8iteratorEv() called");
    return 0;
}

/* Demangled: android::DrmInfo::getData() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7DrmInfo7getDataEv(void) {
    ALOGD("_ZNK7android7DrmInfo7getDataEv() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::isTokenValid(android::DrmInfoRequest const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn12isTokenValidEPKNS_14DrmInfoRequestE(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn12isTokenValidEPKNS_14DrmInfoRequestE() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::onGetMetadata(int, android::String8 const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugIn13onGetMetadataEiPKNS_7String8E(void) {
    ALOGD("_ZN7android12DrmCtaPlugIn13onGetMetadataEiPKNS_7String8E() called");
    return 0;
}

/* Demangled: android::DrmCtaPlugIn::~DrmCtaPlugIn() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12DrmCtaPlugInD0Ev(void) {
    ALOGD("_ZN7android12DrmCtaPlugInD0Ev() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::checkRightsStatus(int, android::String8 const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase17checkRightsStatusEiRKNS_7String8Ei(void) {
    ALOGD("_ZN7android13DrmEngineBase17checkRightsStatusEiRKNS_7String8Ei() called");
    return 0;
}

/* Demangled: android::DrmMetadata::Iterator::Iterator(android::DrmMetadata::Iterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DrmMetadata8IteratorC2ERKS1_(void) {
    ALOGD("_ZN7android11DrmMetadata8IteratorC2ERKS1_() called");
    return 0;
}

/* Demangled: android::DrmInfo::keyIterator() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7DrmInfo11keyIteratorEv(void) {
    ALOGD("_ZNK7android7DrmInfo11keyIteratorEv() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::terminate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase9terminateEi(void) {
    ALOGD("_ZN7android13DrmEngineBase9terminateEi() called");
    return 0;
}

/* Demangled: android::Vector<android::Cta5File*>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPNS_8Cta5FileEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPNS_8Cta5FileEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::DrmInfo::KeyIterator::operator=(android::DrmInfo::KeyIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmInfo11KeyIteratoraSERKS1_(void) {
    ALOGD("_ZN7android7DrmInfo11KeyIteratoraSERKS1_() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memmove4(void) __asm__("__aeabi_memmove4");
int fn___aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::DrmEngineBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBaseC2Ev(void) {
    ALOGD("_ZN7android13DrmEngineBaseC2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, char const*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::DrmInfoRequest::Iterator::Iterator(android::DrmInfoRequest::Iterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14DrmInfoRequest8IteratorC2ERKS1_(void) {
    ALOGD("_ZN7android14DrmInfoRequest8IteratorC2ERKS1_() called");
    return 0;
}

/* Demangled: android::DrmEngineBase::getDrmObjectType(int, android::String8 const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DrmEngineBase16getDrmObjectTypeEiRKNS_7String8ES3_(void) {
    ALOGD("_ZN7android13DrmEngineBase16getDrmObjectTypeEiRKNS_7String8ES3_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::DrmInfo::KeyIterator::KeyIterator(android::DrmInfo::KeyIterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmInfo11KeyIteratorC2ERKS1_(void) {
    ALOGD("_ZN7android7DrmInfo11KeyIteratorC2ERKS1_() called");
    return 0;
}

/* Demangled: android::DrmInfo::Iterator::operator=(android::DrmInfo::Iterator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7DrmInfo8IteratoraSERKS1_(void) {
    ALOGD("_ZN7android7DrmInfo8IteratoraSERKS1_() called");
    return 0;
}
