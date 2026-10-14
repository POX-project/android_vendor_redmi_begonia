/*
 * Reverse-Engineered ABI Specification for: libdrmctaplugin.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libdrmctaplugin.so
 */

#ifndef BEGONIA_RE_LIBDRMCTAPLUGIN_H
#define BEGONIA_RE_LIBDRMCTAPLUGIN_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android13DrmEngineBase15removeAllRightsEi */
/* Demangled: android::DrmEngineBase::removeAllRights(int) */
int _ZN7android13DrmEngineBase15removeAllRightsEi(void);

/* Symbol: _ZN7android11DrmMetadata11KeyIteratoraSERKS1_ */
/* Demangled: android::DrmMetadata::KeyIterator::operator=(android::DrmMetadata::KeyIterator const&) */
int _ZN7android11DrmMetadata11KeyIteratoraSERKS1_(void);

/* Symbol: _ZN7android12DrmCtaPlugIn16onProcessDrmInfoEiPKNS_7DrmInfoE */
/* Demangled: android::DrmCtaPlugIn::onProcessDrmInfo(int, android::DrmInfo const*) */
int _ZN7android12DrmCtaPlugIn16onProcessDrmInfoEiPKNS_7DrmInfoE(void);

/* Symbol: _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::DrmCtaUtil::Listener>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE15do_move_forwardEPvPKvj(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int fn___aeabi_memmove8(void) __asm__("__aeabi_memmove8");

/* Symbol: _ZN7android12DrmCtaPlugIn12onInitializeEi */
/* Demangled: android::DrmCtaPlugIn::onInitialize(int) */
int _ZN7android12DrmCtaPlugIn12onInitializeEi(void);

/* Symbol: _ZN7android12DrmCtaPlugIn12onSaveRightsEiRKNS_9DrmRightsERKNS_7String8ES6_ */
/* Demangled: android::DrmCtaPlugIn::onSaveRights(int, android::DrmRights const&, android::String8 const&, android::String8 const&) */
int _ZN7android12DrmCtaPlugIn12onSaveRightsEiRKNS_9DrmRightsERKNS_7String8ES6_(void);

/* Symbol: _ZN7android12DrmCtaPlugIn16onGetConstraintsEiPKNS_7String8Ei */
/* Demangled: android::DrmCtaPlugIn::onGetConstraints(int, android::String8 const*, int) */
int _ZN7android12DrmCtaPlugIn16onGetConstraintsEiPKNS_7String8Ei(void);

/* Symbol: _ZN7android12DrmCtaPlugIn20onOpenConvertSessionEii */
/* Demangled: android::DrmCtaPlugIn::onOpenConvertSession(int, int) */
int _ZN7android12DrmCtaPlugIn20onOpenConvertSessionEii(void);

/* Symbol: _ZN7android13DrmEngineBase7decryptEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferEPPS5_S8_ */
/* Demangled: android::DrmEngineBase::decrypt(int, android::sp<android::DecryptHandle>&, int, android::DrmBuffer const*, android::DrmBuffer**, android::DrmBuffer*) */
int _ZN7android13DrmEngineBase7decryptEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferEPPS5_S8_(void);

/* Symbol: _ZNK7android11DrmMetadata8getCountEv */
/* Demangled: android::DrmMetadata::getCount() const */
int _ZNK7android11DrmMetadata8getCountEv(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTVN7android14DrmInfoRequestE */
/* Demangled: vtable for android::DrmInfoRequest */
extern void* _ZTVN7android14DrmInfoRequestE;

/* Symbol: _ZNK7android14DrmSupportInfo14getDescriptionEv */
/* Demangled: android::DrmSupportInfo::getDescription() const */
int _ZNK7android14DrmSupportInfo14getDescriptionEv(void);

/* Symbol: _ZN7android11DrmMetadata11KeyIterator7hasNextEv */
/* Demangled: android::DrmMetadata::KeyIterator::hasNext() */
int _ZN7android11DrmMetadata11KeyIterator7hasNextEv(void);

/* Symbol: _ZN7android12DrmCtaPlugIn17sJavaAPIListenersE */
/* Demangled: android::DrmCtaPlugIn::sJavaAPIListeners */
extern void* _ZN7android12DrmCtaPlugIn17sJavaAPIListenersE;

/* Symbol: _ZN7android13DrmEngineBaseD2Ev */
/* Demangled: android::DrmEngineBase::~DrmEngineBase() */
int _ZN7android13DrmEngineBaseD2Ev(void);

/* Symbol: _ZN7android14DrmSupportInfo14setDescriptionERKNS_7String8E */
/* Demangled: android::DrmSupportInfo::setDescription(android::String8 const&) */
int _ZN7android14DrmSupportInfo14setDescriptionERKNS_7String8E(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, char const*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE10do_compareEPKvS8_(void);

/* Symbol: _ZN7android7DrmInfo3putERKNS_7String8ES3_ */
/* Demangled: android::DrmInfo::put(android::String8 const&, android::String8 const&) */
int _ZN7android7DrmInfo3putERKNS_7String8ES3_(void);

/* Symbol: _ZTVN7android7DrmInfoE */
/* Demangled: vtable for android::DrmInfo */
extern void* _ZTVN7android7DrmInfoE;

/* Symbol: _ZN7android13DrmEngineBase11getMetadataEiPKNS_7String8E */
/* Demangled: android::DrmEngineBase::getMetadata(int, android::String8 const*) */
int _ZN7android13DrmEngineBase11getMetadataEiPKNS_7String8E(void);

/* Symbol: _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::DrmCtaUtil::Listener>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE7do_copyEPvPKvj(void);

/* Symbol: _ZTVN7android14DrmInfoRequest11KeyIteratorE */
/* Demangled: vtable for android::DrmInfoRequest::KeyIterator */
extern void* _ZTVN7android14DrmInfoRequest11KeyIteratorE;

/* Symbol: _ZTVN7android14DrmInfoRequest8IteratorE */
/* Demangled: vtable for android::DrmInfoRequest::Iterator */
extern void* _ZTVN7android14DrmInfoRequest8IteratorE;

/* Symbol: _ZN7android14DrmSupportInfo18FileSuffixIteratorC1ERKS1_ */
/* Demangled: android::DrmSupportInfo::FileSuffixIterator::FileSuffixIterator(android::DrmSupportInfo::FileSuffixIterator const&) */
int _ZN7android14DrmSupportInfo18FileSuffixIteratorC1ERKS1_(void);

/* Symbol: _ZN7android13DrmEngineBase14getSupportInfoEi */
/* Demangled: android::DrmEngineBase::getSupportInfo(int) */
int _ZN7android13DrmEngineBase14getSupportInfoEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj(void);

/* Symbol: _ZTVN7android12DrmCtaPlugInE */
/* Demangled: vtable for android::DrmCtaPlugIn */
extern void* _ZTVN7android12DrmCtaPlugInE;

/* Symbol: _ZTVN7android7DrmInfo8IteratorE */
/* Demangled: vtable for android::DrmInfo::Iterator */
extern void* _ZTVN7android7DrmInfo8IteratorE;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int fn___aeabi_memcpy4(void) __asm__("__aeabi_memcpy4");

/* Symbol: _ZN7android12DrmCtaPlugIn11onCanHandleEiRKNS_7String8E */
/* Demangled: android::DrmCtaPlugIn::onCanHandle(int, android::String8 const&) */
int _ZN7android12DrmCtaPlugIn11onCanHandleEiRKNS_7String8E(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorINS_7String8EEE */
/* Demangled: vtable for android::Vector<android::String8> */
extern void* _ZTVN7android6VectorINS_7String8EEE;

/* Symbol: _ZN7android13DrmEngineBase14getConstraintsEiPKNS_7String8Ei */
/* Demangled: android::DrmEngineBase::getConstraints(int, android::String8 const*, int) */
int _ZN7android13DrmEngineBase14getConstraintsEiPKNS_7String8Ei(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android13DrmEngineBaseD0Ev */
/* Demangled: android::DrmEngineBase::~DrmEngineBase() */
int _ZN7android13DrmEngineBaseD0Ev(void);

/* Symbol: _ZN7android7DrmInfo11KeyIterator7hasNextEv */
/* Demangled: android::DrmInfo::KeyIterator::hasNext() */
int _ZN7android7DrmInfo11KeyIterator7hasNextEv(void);

/* Symbol: _ZN7android7DrmInfo8IteratorC2ERKS1_ */
/* Demangled: android::DrmInfo::Iterator::Iterator(android::DrmInfo::Iterator const&) */
int _ZN7android7DrmInfo8IteratorC2ERKS1_(void);

/* Symbol: _ZTVN7android14DrmSupportInfo18FileSuffixIteratorE */
/* Demangled: vtable for android::DrmSupportInfo::FileSuffixIterator */
extern void* _ZTVN7android14DrmSupportInfo18FileSuffixIteratorE;

/* Symbol: _ZN7android13DrmEngineBase5preadEiRNS_2spINS_13DecryptHandleEEEPvix */
/* Demangled: android::DrmEngineBase::pread(int, android::sp<android::DecryptHandle>&, void*, int, long long) */
int _ZN7android13DrmEngineBase5preadEiRNS_2spINS_13DecryptHandleEEEPvix(void);

/* Symbol: _ZTVN7android6VectorINS_10DrmCtaUtil8ListenerEEE */
/* Demangled: vtable for android::Vector<android::DrmCtaUtil::Listener> */
extern void* _ZTVN7android6VectorINS_10DrmCtaUtil8ListenerEEE;

/* Symbol: _ZN7android11DrmMetadata11KeyIteratorC2ERKS1_ */
/* Demangled: android::DrmMetadata::KeyIterator::KeyIterator(android::DrmMetadata::KeyIterator const&) */
int _ZN7android11DrmMetadata11KeyIteratorC2ERKS1_(void);

/* Symbol: _ZN7android14DrmInfoRequest8Iterator7hasNextEv */
/* Demangled: android::DrmInfoRequest::Iterator::hasNext() */
int _ZN7android14DrmInfoRequest8Iterator7hasNextEv(void);

/* Symbol: _ZN7android14DrmSupportInfoaSERKS0_ */
/* Demangled: android::DrmSupportInfo::operator=(android::DrmSupportInfo const&) */
int _ZN7android14DrmSupportInfoaSERKS0_(void);

/* Symbol: _ZN7android12DrmCtaPlugIn19createDecryptThreadEv */
/* Demangled: android::DrmCtaPlugIn::createDecryptThread() */
int _ZN7android12DrmCtaPlugIn19createDecryptThreadEv(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int fn___aeabi_memcpy(void) __asm__("__aeabi_memcpy");

/* Symbol: _ZNK7android6VectorINS_7String8EE12do_constructEPvj */
/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE12do_constructEPvj(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int fn___aeabi_memcpy8(void) __asm__("__aeabi_memcpy8");

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* obj___bss_start __asm__("__bss_start");

/* Symbol: destroy */
/* Demangled: destroy */
int destroy(void);

/* Symbol: _ZN7android14DrmSupportInfoC2ERKS0_ */
/* Demangled: android::DrmSupportInfo::DrmSupportInfo(android::DrmSupportInfo const&) */
int _ZN7android14DrmSupportInfoC2ERKS0_(void);

/* Symbol: _ZN7android13DrmEngineBase14validateActionEiRKNS_7String8EiRKNS_17ActionDescriptionE */
/* Demangled: android::DrmEngineBase::validateAction(int, android::String8 const&, int, android::ActionDescription const&) */
int _ZN7android13DrmEngineBase14validateActionEiRKNS_7String8EiRKNS_17ActionDescriptionE(void);

/* Symbol: _ZN7android13DrmEngineBase18openDecryptSessionEiRNS_2spINS_13DecryptHandleEEEixxPKc */
/* Demangled: android::DrmEngineBase::openDecryptSession(int, android::sp<android::DecryptHandle>&, int, long long, long long, char const*) */
int _ZN7android13DrmEngineBase18openDecryptSessionEiRNS_2spINS_13DecryptHandleEEEixxPKc(void);

/* Symbol: _ZN7android13DrmEngineBase21initializeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferE */
/* Demangled: android::DrmEngineBase::initializeDecryptUnit(int, android::sp<android::DecryptHandle>&, int, android::DrmBuffer const*) */
int _ZN7android13DrmEngineBase21initializeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferE(void);

/* Symbol: _ZN7android7DrmInfoC1EiRKNS_9DrmBufferERKNS_7String8E */
/* Demangled: android::DrmInfo::DrmInfo(int, android::DrmBuffer const&, android::String8 const&) */
int _ZN7android7DrmInfoC1EiRKNS_9DrmBufferERKNS_7String8E(void);

/* Symbol: _ZNK7android11DrmMetadata14getAsByteArrayEPKNS_7String8E */
/* Demangled: android::DrmMetadata::getAsByteArray(android::String8 const*) const */
int _ZNK7android11DrmMetadata14getAsByteArrayEPKNS_7String8E(void);

/* Symbol: _ZN7android14DrmInfoRequest8IteratorC1ERKS1_ */
/* Demangled: android::DrmInfoRequest::Iterator::Iterator(android::DrmInfoRequest::Iterator const&) */
int _ZN7android14DrmInfoRequest8IteratorC1ERKS1_(void);

/* Symbol: _ZN7android14DrmInfoRequestC1EiRKNS_7String8E */
/* Demangled: android::DrmInfoRequest::DrmInfoRequest(int, android::String8 const&) */
int _ZN7android14DrmInfoRequestC1EiRKNS_7String8E(void);

/* Symbol: _ZN7android14DrmSupportInfo16MimeTypeIterator7hasNextEv */
/* Demangled: android::DrmSupportInfo::MimeTypeIterator::hasNext() */
int _ZN7android14DrmSupportInfo16MimeTypeIterator7hasNextEv(void);

/* Symbol: _ZN7android12DrmCtaPlugIn16onValidateActionEiRKNS_7String8EiRKNS_17ActionDescriptionE */
/* Demangled: android::DrmCtaPlugIn::onValidateAction(int, android::String8 const&, int, android::ActionDescription const&) */
int _ZN7android12DrmCtaPlugIn16onValidateActionEiRKNS_7String8EiRKNS_17ActionDescriptionE(void);

/* Symbol: _ZN7android12DrmCtaPlugIn6setKeyEPKNS_14DrmInfoRequestE */
/* Demangled: android::DrmCtaPlugIn::setKey(android::DrmInfoRequest const*) */
int _ZN7android12DrmCtaPlugIn6setKeyEPKNS_14DrmInfoRequestE(void);

/* Symbol: _ZN7android12DrmCtaPlugIn19onCheckRightsStatusEiRKNS_7String8Ei */
/* Demangled: android::DrmCtaPlugIn::onCheckRightsStatus(int, android::String8 const&, int) */
int _ZN7android12DrmCtaPlugIn19onCheckRightsStatusEiRKNS_7String8Ei(void);

/* Symbol: _ZN7android12DrmCtaPlugIn19onSetPlaybackStatusEiRNS_2spINS_13DecryptHandleEEEix */
/* Demangled: android::DrmCtaPlugIn::onSetPlaybackStatus(int, android::sp<android::DecryptHandle>&, int, long long) */
int _ZN7android12DrmCtaPlugIn19onSetPlaybackStatusEiRNS_2spINS_13DecryptHandleEEEix(void);

/* Symbol: _ZN7android12DrmCtaPlugIn21onCloseConvertSessionEii */
/* Demangled: android::DrmCtaPlugIn::onCloseConvertSession(int, int) */
int _ZN7android12DrmCtaPlugIn21onCloseConvertSessionEii(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android7DrmInfo8getCountEv */
/* Demangled: android::DrmInfo::getCount() const */
int _ZNK7android7DrmInfo8getCountEv(void);

/* Symbol: _ZN7android12DrmCtaPlugIn19onSetOnInfoListenerEiPKNS_10IDrmEngine14OnInfoListenerE */
/* Demangled: android::DrmCtaPlugIn::onSetOnInfoListener(int, android::IDrmEngine::OnInfoListener const*) */
int _ZN7android12DrmCtaPlugIn19onSetOnInfoListenerEiPKNS_10IDrmEngine14OnInfoListenerE(void);

/* Symbol: _ZN7android12DrmCtaPlugIn21onFinalizeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEi */
/* Demangled: android::DrmCtaPlugIn::onFinalizeDecryptUnit(int, android::sp<android::DecryptHandle>&, int) */
int _ZN7android12DrmCtaPlugIn21onFinalizeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEi(void);

/* Symbol: _ZN7android11DrmMetadata3putEPKNS_7String8EPKc */
/* Demangled: android::DrmMetadata::put(android::String8 const*, char const*) */
int _ZN7android11DrmMetadata3putEPKNS_7String8EPKc(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android12DrmCtaPlugIn21onCloseDecryptSessionEiRNS_2spINS_13DecryptHandleEEE */
/* Demangled: android::DrmCtaPlugIn::onCloseDecryptSession(int, android::sp<android::DecryptHandle>&) */
int _ZN7android12DrmCtaPlugIn21onCloseDecryptSessionEiRNS_2spINS_13DecryptHandleEEE(void);

/* Symbol: _ZN7android12DrmCtaPlugInC1Ev */
/* Demangled: android::DrmCtaPlugIn::DrmCtaPlugIn() */
int _ZN7android12DrmCtaPlugInC1Ev(void);

/* Symbol: _ZN7android14DrmInfoRequest11KeyIterator7hasNextEv */
/* Demangled: android::DrmInfoRequest::KeyIterator::hasNext() */
int _ZN7android14DrmInfoRequest11KeyIterator7hasNextEv(void);

/* Symbol: _ZN7android14DrmInfoRequest3putERKNS_7String8ES3_ */
/* Demangled: android::DrmInfoRequest::put(android::String8 const&, android::String8 const&) */
int _ZN7android14DrmInfoRequest3putERKNS_7String8ES3_(void);

/* Symbol: _ZNK7android14DrmSupportInfoeqERKS0_ */
/* Demangled: android::DrmSupportInfo::operator==(android::DrmSupportInfo const&) const */
int _ZNK7android14DrmSupportInfoeqERKS0_(void);

/* Symbol: _ZNK7android14DrmInfoRequest3getERKNS_7String8E */
/* Demangled: android::DrmInfoRequest::get(android::String8 const&) const */
int _ZNK7android14DrmInfoRequest3getERKNS_7String8E(void);

/* Symbol: _ZTVN7android11DrmMetadata11KeyIteratorE */
/* Demangled: vtable for android::DrmMetadata::KeyIterator */
extern void* _ZTVN7android11DrmMetadata11KeyIteratorE;

/* Symbol: _ZN7android14DrmSupportInfo16MimeTypeIteratoraSERKS1_ */
/* Demangled: android::DrmSupportInfo::MimeTypeIterator::operator=(android::DrmSupportInfo::MimeTypeIterator const&) */
int _ZN7android14DrmSupportInfo16MimeTypeIteratoraSERKS1_(void);

/* Symbol: _ZTVN7android14DrmSupportInfoE */
/* Demangled: vtable for android::DrmSupportInfo */
extern void* _ZTVN7android14DrmSupportInfoE;

/* Symbol: _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::DrmCtaUtil::Listener>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android11DrmMetadata8IteratorC1ERKS1_ */
/* Demangled: android::DrmMetadata::Iterator::Iterator(android::DrmMetadata::Iterator const&) */
int _ZN7android11DrmMetadata8IteratorC1ERKS1_(void);

/* Symbol: _ZN7android11DrmMetadata8Iterator7hasNextEv */
/* Demangled: android::DrmMetadata::Iterator::hasNext() */
int _ZN7android11DrmMetadata8Iterator7hasNextEv(void);

/* Symbol: _ZNK7android11DrmMetadata8getValueEPKNS_7String8E */
/* Demangled: android::DrmMetadata::getValue(android::String8 const*) const */
int _ZNK7android11DrmMetadata8getValueEPKNS_7String8E(void);

/* Symbol: _ZN7android14DrmSupportInfoC2Ev */
/* Demangled: android::DrmSupportInfo::DrmSupportInfo() */
int _ZN7android14DrmSupportInfoC2Ev(void);

/* Symbol: _ZTVN7android14DrmSupportInfo16MimeTypeIteratorE */
/* Demangled: vtable for android::DrmSupportInfo::MimeTypeIterator */
extern void* _ZTVN7android14DrmSupportInfo16MimeTypeIteratorE;

/* Symbol: _ZN7android12DrmCtaPlugIn16onGetSupportInfoEi */
/* Demangled: android::DrmCtaPlugIn::onGetSupportInfo(int) */
int _ZN7android12DrmCtaPlugIn16onGetSupportInfoEi(void);

/* Symbol: _ZN7android12DrmCtaPlugIn9onDecryptEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferEPPS5_S8_ */
/* Demangled: android::DrmCtaPlugIn::onDecrypt(int, android::sp<android::DecryptHandle>&, int, android::DrmBuffer const*, android::DrmBuffer**, android::DrmBuffer*) */
int _ZN7android12DrmCtaPlugIn9onDecryptEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferEPPS5_S8_(void);

/* Symbol: _ZN7android14DrmSupportInfo13addFileSuffixERKNS_7String8E */
/* Demangled: android::DrmSupportInfo::addFileSuffix(android::String8 const&) */
int _ZN7android14DrmSupportInfo13addFileSuffixERKNS_7String8E(void);

/* Symbol: _ZN7android2spINS_13DecryptHandleEEaSEPS1_ */
/* Demangled: android::sp<android::DecryptHandle>::operator=(android::DecryptHandle*) */
int _ZN7android2spINS_13DecryptHandleEEaSEPS1_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android11DrmMetadata11KeyIterator4nextEv */
/* Demangled: android::DrmMetadata::KeyIterator::next() */
int _ZN7android11DrmMetadata11KeyIterator4nextEv(void);

/* Symbol: create */
/* Demangled: create */
int create(void);

/* Symbol: _ZN7android7DrmInfo11KeyIteratorC1ERKS1_ */
/* Demangled: android::DrmInfo::KeyIterator::KeyIterator(android::DrmInfo::KeyIterator const&) */
int _ZN7android7DrmInfo11KeyIteratorC1ERKS1_(void);

/* Symbol: _ZN7android12DrmCtaPlugInD1Ev */
/* Demangled: android::DrmCtaPlugIn::~DrmCtaPlugIn() */
int _ZN7android12DrmCtaPlugInD1Ev(void);

/* Symbol: _ZN7android13DrmEngineBase13consumeRightsEiRNS_2spINS_13DecryptHandleEEEib */
/* Demangled: android::DrmEngineBase::consumeRights(int, android::sp<android::DecryptHandle>&, int, bool) */
int _ZN7android13DrmEngineBase13consumeRightsEiRNS_2spINS_13DecryptHandleEEEib(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE10do_destroyEPvj */
/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE10do_destroyEPvj(void);

/* Symbol: _ZN7android12DrmCtaPlugIn19createEncryptThreadEv */
/* Demangled: android::DrmCtaPlugIn::createEncryptThread() */
int _ZN7android12DrmCtaPlugIn19createEncryptThreadEv(void);

/* Symbol: _ZN7android13DrmEngineBase10saveRightsEiRKNS_9DrmRightsERKNS_7String8ES6_ */
/* Demangled: android::DrmEngineBase::saveRights(int, android::DrmRights const&, android::String8 const&, android::String8 const&) */
int _ZN7android13DrmEngineBase10saveRightsEiRKNS_9DrmRightsERKNS_7String8ES6_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, char const*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIPNS_8Cta5FileEE12do_constructEPvj */
/* Demangled: android::Vector<android::Cta5File*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_8Cta5FileEE12do_constructEPvj(void);

/* Symbol: _ZN7android7DrmInfo8IteratorC1ERKS1_ */
/* Demangled: android::DrmInfo::Iterator::Iterator(android::DrmInfo::Iterator const&) */
int _ZN7android7DrmInfo8IteratorC1ERKS1_(void);

/* Symbol: _ZN7android13DrmEngineBase19getOriginalMimeTypeEiRKNS_7String8Ei */
/* Demangled: android::DrmEngineBase::getOriginalMimeType(int, android::String8 const&, int) */
int _ZN7android13DrmEngineBase19getOriginalMimeTypeEiRKNS_7String8Ei(void);

/* Symbol: _ZN7android11DrmMetadata11KeyIteratorC1ERKS1_ */
/* Demangled: android::DrmMetadata::KeyIterator::KeyIterator(android::DrmMetadata::KeyIterator const&) */
int _ZN7android11DrmMetadata11KeyIteratorC1ERKS1_(void);

/* Symbol: _ZN7android12DrmCtaPlugIn11onTerminateEi */
/* Demangled: android::DrmCtaPlugIn::onTerminate(int) */
int _ZN7android12DrmCtaPlugIn11onTerminateEi(void);

/* Symbol: _ZN7android12DrmCtaPlugIn20onOpenDecryptSessionEiRNS_2spINS_13DecryptHandleEEEixx */
/* Demangled: android::DrmCtaPlugIn::onOpenDecryptSession(int, android::sp<android::DecryptHandle>&, int, long long, long long) */
int _ZN7android12DrmCtaPlugIn20onOpenDecryptSessionEiRNS_2spINS_13DecryptHandleEEEixx(void);

/* Symbol: _ZN7android13DrmEngineBase18openConvertSessionEii */
/* Demangled: android::DrmEngineBase::openConvertSession(int, int) */
int _ZN7android13DrmEngineBase18openConvertSessionEii(void);

/* Symbol: _ZN7android13DrmEngineBase18openDecryptSessionEiRNS_2spINS_13DecryptHandleEEERKNS_9DrmBufferERKNS_7String8E */
/* Demangled: android::DrmEngineBase::openDecryptSession(int, android::sp<android::DecryptHandle>&, android::DrmBuffer const&, android::String8 const&) */
int _ZN7android13DrmEngineBase18openDecryptSessionEiRNS_2spINS_13DecryptHandleEEERKNS_9DrmBufferERKNS_7String8E(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, char const*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE12do_constructEPvj(void);

/* Symbol: _ZN7android14DrmInfoRequest11KeyIteratoraSERKS1_ */
/* Demangled: android::DrmInfoRequest::KeyIterator::operator=(android::DrmInfoRequest::KeyIterator const&) */
int _ZN7android14DrmInfoRequest11KeyIteratoraSERKS1_(void);

/* Symbol: _ZN7android12DrmCtaPlugIn20onOpenDecryptSessionEiRNS_2spINS_13DecryptHandleEEEPKc */
/* Demangled: android::DrmCtaPlugIn::onOpenDecryptSession(int, android::sp<android::DecryptHandle>&, char const*) */
int _ZN7android12DrmCtaPlugIn20onOpenDecryptSessionEiRNS_2spINS_13DecryptHandleEEEPKc(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, char const*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE10do_compareEPKvS8_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android14DrmInfoRequest8iteratorEv */
/* Demangled: android::DrmInfoRequest::iterator() const */
int _ZNK7android14DrmInfoRequest8iteratorEv(void);

/* Symbol: _ZN7android14DrmSupportInfo16MimeTypeIteratorC2ERKS1_ */
/* Demangled: android::DrmSupportInfo::MimeTypeIterator::MimeTypeIterator(android::DrmSupportInfo::MimeTypeIterator const&) */
int _ZN7android14DrmSupportInfo16MimeTypeIteratorC2ERKS1_(void);

/* Symbol: _ZNK7android14DrmSupportInfo19isSupportedMimeTypeERKNS_7String8E */
/* Demangled: android::DrmSupportInfo::isSupportedMimeType(android::String8 const&) const */
int _ZNK7android14DrmSupportInfo19isSupportedMimeTypeERKNS_7String8E(void);

/* Symbol: _ZN7android12DrmCtaPlugIn23onInitializeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferE */
/* Demangled: android::DrmCtaPlugIn::onInitializeDecryptUnit(int, android::sp<android::DecryptHandle>&, int, android::DrmBuffer const*) */
int _ZN7android12DrmCtaPlugIn23onInitializeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEiPKNS_9DrmBufferE(void);

/* Symbol: _ZN7android14DrmInfoRequest11KeyIteratorC2ERKS1_ */
/* Demangled: android::DrmInfoRequest::KeyIterator::KeyIterator(android::DrmInfoRequest::KeyIterator const&) */
int _ZN7android14DrmInfoRequest11KeyIteratorC2ERKS1_(void);

/* Symbol: _ZN7android14DrmSupportInfo18FileSuffixIterator4nextEv */
/* Demangled: android::DrmSupportInfo::FileSuffixIterator::next() */
int _ZN7android14DrmSupportInfo18FileSuffixIterator4nextEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, char const*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIPNS_8Cta5FileEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::Cta5File*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_8Cta5FileEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android14DrmInfoRequest11KeyIterator4nextEv */
/* Demangled: android::DrmInfoRequest::KeyIterator::next() */
int _ZN7android14DrmInfoRequest11KeyIterator4nextEv(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN7android12DrmCtaPlugIn18onGetDrmObjectTypeEiRKNS_7String8ES3_ */
/* Demangled: android::DrmCtaPlugIn::onGetDrmObjectType(int, android::String8 const&, android::String8 const&) */
int _ZN7android12DrmCtaPlugIn18onGetDrmObjectTypeEiRKNS_7String8ES3_(void);

/* Symbol: _ZNK7android14DrmInfoRequest11getMimeTypeEv */
/* Demangled: android::DrmInfoRequest::getMimeType() const */
int _ZNK7android14DrmInfoRequest11getMimeTypeEv(void);

/* Symbol: _ZN7android12DrmCtaPlugIn14onRemoveRightsEiRKNS_7String8E */
/* Demangled: android::DrmCtaPlugIn::onRemoveRights(int, android::String8 const&) */
int _ZN7android12DrmCtaPlugIn14onRemoveRightsEiRKNS_7String8E(void);

/* Symbol: _ZNK7android14DrmInfoRequest11getInfoTypeEv */
/* Demangled: android::DrmInfoRequest::getInfoType() const */
int _ZNK7android14DrmInfoRequest11getInfoTypeEv(void);

/* Symbol: _ZN7android7DrmInfo11KeyIterator4nextEv */
/* Demangled: android::DrmInfo::KeyIterator::next() */
int _ZN7android7DrmInfo11KeyIterator4nextEv(void);

/* Symbol: _ZN7android7DrmInfo8Iterator4nextEv */
/* Demangled: android::DrmInfo::Iterator::next() */
int _ZN7android7DrmInfo8Iterator4nextEv(void);

/* Symbol: _ZN7android12DrmCtaPlugIn11getProgressEPKNS_14DrmInfoRequestE */
/* Demangled: android::DrmCtaPlugIn::getProgress(android::DrmInfoRequest const*) */
int _ZN7android12DrmCtaPlugIn11getProgressEPKNS_14DrmInfoRequestE(void);

/* Symbol: _ZN7android12DrmCtaPlugIn8getTokenEPKNS_14DrmInfoRequestE */
/* Demangled: android::DrmCtaPlugIn::getToken(android::DrmInfoRequest const*) */
int _ZN7android12DrmCtaPlugIn8getTokenEPKNS_14DrmInfoRequestE(void);

/* Symbol: _ZN7android13DrmEngineBase11convertDataEiiPKNS_9DrmBufferE */
/* Demangled: android::DrmEngineBase::convertData(int, int, android::DrmBuffer const*) */
int _ZN7android13DrmEngineBase11convertDataEiiPKNS_9DrmBufferE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android14DrmSupportInfo18getFileSuffixCountEv */
/* Demangled: android::DrmSupportInfo::getFileSuffixCount() const */
int _ZNK7android14DrmSupportInfo18getFileSuffixCountEv(void);

/* Symbol: _ZN7android13DrmEngineBase10initializeEi */
/* Demangled: android::DrmEngineBase::initialize(int) */
int _ZN7android13DrmEngineBase10initializeEi(void);

/* Symbol: _ZN7android13DrmEngineBase19closeConvertSessionEii */
/* Demangled: android::DrmEngineBase::closeConvertSession(int, int) */
int _ZN7android13DrmEngineBase19closeConvertSessionEii(void);

/* Symbol: _ZN7android13DrmEngineBase19closeDecryptSessionEiRNS_2spINS_13DecryptHandleEEE */
/* Demangled: android::DrmEngineBase::closeDecryptSession(int, android::sp<android::DecryptHandle>&) */
int _ZN7android13DrmEngineBase19closeDecryptSessionEiRNS_2spINS_13DecryptHandleEEE(void);

/* Symbol: _ZN7android13DrmEngineBase9canHandleEiRKNS_7String8E */
/* Demangled: android::DrmEngineBase::canHandle(int, android::String8 const&) */
int _ZN7android13DrmEngineBase9canHandleEiRKNS_7String8E(void);

/* Symbol: _ZN7android11DrmMetadata8Iterator4nextEv */
/* Demangled: android::DrmMetadata::Iterator::next() */
int _ZN7android11DrmMetadata8Iterator4nextEv(void);

/* Symbol: _ZTVN7android11DrmMetadata8IteratorE */
/* Demangled: vtable for android::DrmMetadata::Iterator */
extern void* _ZTVN7android11DrmMetadata8IteratorE;

/* Symbol: _ZNK7android14DrmInfoRequest11keyIteratorEv */
/* Demangled: android::DrmInfoRequest::keyIterator() const */
int _ZNK7android14DrmInfoRequest11keyIteratorEv(void);

/* Symbol: _ZN7android14DrmSupportInfo19getMimeTypeIteratorEv */
/* Demangled: android::DrmSupportInfo::getMimeTypeIterator() */
int _ZN7android14DrmSupportInfo19getMimeTypeIteratorEv(void);

/* Symbol: _ZNK7android14DrmSupportInfo16getMimeTypeCountEv */
/* Demangled: android::DrmSupportInfo::getMimeTypeCount() const */
int _ZNK7android14DrmSupportInfo16getMimeTypeCountEv(void);

/* Symbol: _ZN7android13DrmEngineBase14acquireDrmInfoEiPKNS_14DrmInfoRequestE */
/* Demangled: android::DrmEngineBase::acquireDrmInfo(int, android::DrmInfoRequest const*) */
int _ZN7android13DrmEngineBase14acquireDrmInfoEiPKNS_14DrmInfoRequestE(void);

/* Symbol: _ZN7android13decryptThreadEPv */
/* Demangled: android::decryptThread(void*) */
int _ZN7android13decryptThreadEPv(void);

/* Symbol: _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::DrmCtaUtil::Listener>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE;

/* Symbol: _ZNK7android7DrmInfo3getERKNS_7String8E */
/* Demangled: android::DrmInfo::get(android::String8 const&) const */
int _ZNK7android7DrmInfo3getERKNS_7String8E(void);

/* Symbol: _ZN7android14DrmInfoRequest15SUBSCRIPTION_IDE */
/* Demangled: android::DrmInfoRequest::SUBSCRIPTION_ID */
extern void* _ZN7android14DrmInfoRequest15SUBSCRIPTION_IDE;

/* Symbol: _ZN7android14DrmSupportInfo21getFileSuffixIteratorEv */
/* Demangled: android::DrmSupportInfo::getFileSuffixIterator() */
int _ZN7android14DrmSupportInfo21getFileSuffixIteratorEv(void);

/* Symbol: _ZN7android14DrmSupportInfoC1ERKS0_ */
/* Demangled: android::DrmSupportInfo::DrmSupportInfo(android::DrmSupportInfo const&) */
int _ZN7android14DrmSupportInfoC1ERKS0_(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN7android12DrmCtaPlugIn9ChangeKeyEPKNS_14DrmInfoRequestE */
/* Demangled: android::DrmCtaPlugIn::ChangeKey(android::DrmInfoRequest const*) */
int _ZN7android12DrmCtaPlugIn9ChangeKeyEPKNS_14DrmInfoRequestE(void);

/* Symbol: _ZN7android13DrmEngineBase14processDrmInfoEiPKNS_7DrmInfoE */
/* Demangled: android::DrmEngineBase::processDrmInfo(int, android::DrmInfo const*) */
int _ZN7android13DrmEngineBase14processDrmInfoEiPKNS_7DrmInfoE(void);

/* Symbol: _ZN7android13DrmEngineBaseD1Ev */
/* Demangled: android::DrmEngineBase::~DrmEngineBase() */
int _ZN7android13DrmEngineBaseD1Ev(void);

/* Symbol: _ZN7android12DrmCtaPlugIn16onAcquireDrmInfoEiPKNS_14DrmInfoRequestE */
/* Demangled: android::DrmCtaPlugIn::onAcquireDrmInfo(int, android::DrmInfoRequest const*) */
int _ZN7android12DrmCtaPlugIn16onAcquireDrmInfoEiPKNS_14DrmInfoRequestE(void);

/* Symbol: _ZN7android14DrmSupportInfo11addMimeTypeERKNS_7String8E */
/* Demangled: android::DrmSupportInfo::addMimeType(android::String8 const&) */
int _ZN7android14DrmSupportInfo11addMimeTypeERKNS_7String8E(void);

/* Symbol: _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE12do_constructEPvj */
/* Demangled: android::Vector<android::DrmCtaUtil::Listener>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE12do_constructEPvj(void);

/* Symbol: _ZNK7android6VectorIPNS_8Cta5FileEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::Cta5File*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_8Cta5FileEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android13encryptThreadEPv */
/* Demangled: android::encryptThread(void*) */
int _ZN7android13encryptThreadEPv(void);

/* Symbol: _ZN7android7DrmInfoC2EiRKNS_9DrmBufferERKNS_7String8E */
/* Demangled: android::DrmInfo::DrmInfo(int, android::DrmBuffer const&, android::String8 const&) */
int _ZN7android7DrmInfoC2EiRKNS_9DrmBufferERKNS_7String8E(void);

/* Symbol: _ZN7android12DrmCtaPlugIn10clearTokenEPKNS_14DrmInfoRequestE */
/* Demangled: android::DrmCtaPlugIn::clearToken(android::DrmInfoRequest const*) */
int _ZN7android12DrmCtaPlugIn10clearTokenEPKNS_14DrmInfoRequestE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE12do_constructEPvj(void);

/* Symbol: _ZNK7android7DrmInfo10indexOfKeyERKNS_7String8E */
/* Demangled: android::DrmInfo::indexOfKey(android::String8 const&) const */
int _ZNK7android7DrmInfo10indexOfKeyERKNS_7String8E(void);

/* Symbol: _ZN7android12DrmCtaPlugIn21onGetOriginalMimeTypeEiRKNS_7String8Ei */
/* Demangled: android::DrmCtaPlugIn::onGetOriginalMimeType(int, android::String8 const&, int) */
int _ZN7android12DrmCtaPlugIn21onGetOriginalMimeTypeEiRKNS_7String8Ei(void);

/* Symbol: _ZN7android12DrmCtaPlugIn6cancelEPKNS_14DrmInfoRequestE */
/* Demangled: android::DrmCtaPlugIn::cancel(android::DrmInfoRequest const*) */
int _ZN7android12DrmCtaPlugIn6cancelEPKNS_14DrmInfoRequestE(void);

/* Symbol: _ZN7android14DrmSupportInfo18FileSuffixIteratoraSERKS1_ */
/* Demangled: android::DrmSupportInfo::FileSuffixIterator::operator=(android::DrmSupportInfo::FileSuffixIterator const&) */
int _ZN7android14DrmSupportInfo18FileSuffixIteratoraSERKS1_(void);

/* Symbol: _ZTVN7android10SessionMapIPNS_12DrmCtaPlugIn14DecryptSessionEEE */
/* Demangled: vtable for android::SessionMap<android::DrmCtaPlugIn::DecryptSession*> */
extern void* _ZTVN7android10SessionMapIPNS_12DrmCtaPlugIn14DecryptSessionEEE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, char const*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEEE;

/* Symbol: _ZTVN7android13DrmEngineBaseE */
/* Demangled: vtable for android::DrmEngineBase */
extern void* _ZTVN7android13DrmEngineBaseE;

/* Symbol: _ZNK7android14DrmSupportInfoltERKS0_ */
/* Demangled: android::DrmSupportInfo::operator<(android::DrmSupportInfo const&) const */
int _ZNK7android14DrmSupportInfoltERKS0_(void);

/* Symbol: _ZN7android11DrmMetadata11keyIteratorEv */
/* Demangled: android::DrmMetadata::keyIterator() */
int _ZN7android11DrmMetadata11keyIteratorEv(void);

/* Symbol: _ZN7android12DrmCtaPlugIn7encryptEPKNS_14DrmInfoRequestE */
/* Demangled: android::DrmCtaPlugIn::encrypt(android::DrmInfoRequest const*) */
int _ZN7android12DrmCtaPlugIn7encryptEPKNS_14DrmInfoRequestE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, char const*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android14DrmSupportInfo18FileSuffixIterator7hasNextEv */
/* Demangled: android::DrmSupportInfo::FileSuffixIterator::hasNext() */
int _ZN7android14DrmSupportInfo18FileSuffixIterator7hasNextEv(void);

/* Symbol: _ZTVN7android6VectorIPNS_8Cta5FileEEE */
/* Demangled: vtable for android::Vector<android::Cta5File*> */
extern void* _ZTVN7android6VectorIPNS_8Cta5FileEEE;

/* Symbol: _ZN7android7DrmInfo8Iterator7hasNextEv */
/* Demangled: android::DrmInfo::Iterator::hasNext() */
int _ZN7android7DrmInfo8Iterator7hasNextEv(void);

/* Symbol: _ZN7android14DrmSupportInfo16MimeTypeIteratorC1ERKS1_ */
/* Demangled: android::DrmSupportInfo::MimeTypeIterator::MimeTypeIterator(android::DrmSupportInfo::MimeTypeIterator const&) */
int _ZN7android14DrmSupportInfo16MimeTypeIteratorC1ERKS1_(void);

/* Symbol: _ZN7android12DrmCtaPlugInC2Ev */
/* Demangled: android::DrmCtaPlugIn::DrmCtaPlugIn() */
int _ZN7android12DrmCtaPlugInC2Ev(void);

/* Symbol: _ZNK7android6VectorIPNS_8Cta5FileEE10do_destroyEPvj */
/* Demangled: android::Vector<android::Cta5File*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_8Cta5FileEE10do_destroyEPvj(void);

/* Symbol: _ZTVN7android11DrmMetadataE */
/* Demangled: vtable for android::DrmMetadata */
extern void* _ZTVN7android11DrmMetadataE;

/* Symbol: _ZTVN7android7DrmInfo11KeyIteratorE */
/* Demangled: vtable for android::DrmInfo::KeyIterator */
extern void* _ZTVN7android7DrmInfo11KeyIteratorE;

/* Symbol: _ZN7android12DrmCtaPlugIn11decryptInfREPKNS_14DrmInfoRequestE */
/* Demangled: android::DrmCtaPlugIn::decryptInfR(android::DrmInfoRequest const*) */
int _ZN7android12DrmCtaPlugIn11decryptInfREPKNS_14DrmInfoRequestE(void);

/* Symbol: _ZN7android12DrmCtaPlugIn13onConvertDataEiiPKNS_9DrmBufferE */
/* Demangled: android::DrmCtaPlugIn::onConvertData(int, int, android::DrmBuffer const*) */
int _ZN7android12DrmCtaPlugIn13onConvertDataEiiPKNS_9DrmBufferE(void);

/* Symbol: _ZN7android12DrmCtaPlugIn15onConsumeRightsEiRNS_2spINS_13DecryptHandleEEEib */
/* Demangled: android::DrmCtaPlugIn::onConsumeRights(int, android::sp<android::DecryptHandle>&, int, bool) */
int _ZN7android12DrmCtaPlugIn15onConsumeRightsEiRNS_2spINS_13DecryptHandleEEEib(void);

/* Symbol: _ZN7android13DrmEngineBase17setOnInfoListenerEiPKNS_10IDrmEngine14OnInfoListenerE */
/* Demangled: android::DrmEngineBase::setOnInfoListener(int, android::IDrmEngine::OnInfoListener const*) */
int _ZN7android13DrmEngineBase17setOnInfoListenerEiPKNS_10IDrmEngine14OnInfoListenerE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android14DrmInfoRequestC2EiRKNS_7String8E */
/* Demangled: android::DrmInfoRequest::DrmInfoRequest(int, android::String8 const&) */
int _ZN7android14DrmInfoRequestC2EiRKNS_7String8E(void);

/* Symbol: _ZN7android12DrmCtaPlugIn17onRemoveAllRightsEi */
/* Demangled: android::DrmCtaPlugIn::onRemoveAllRights(int) */
int _ZN7android12DrmCtaPlugIn17onRemoveAllRightsEi(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::DrmCtaPlugIn::DecryptSession*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPNS_12DrmCtaPlugIn14DecryptSessionEEEEE;

/* Symbol: _ZN7android14DrmInfoRequest8IteratoraSERKS1_ */
/* Demangled: android::DrmInfoRequest::Iterator::operator=(android::DrmInfoRequest::Iterator const&) */
int _ZN7android14DrmInfoRequest8IteratoraSERKS1_(void);

/* Symbol: _ZN7android12DrmCtaPlugIn10isCta5FileEPKNS_14DrmInfoRequestE */
/* Demangled: android::DrmCtaPlugIn::isCta5File(android::DrmInfoRequest const*) */
int _ZN7android12DrmCtaPlugIn10isCta5FileEPKNS_14DrmInfoRequestE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj(void);

/* Symbol: _ZN7android14DrmInfoRequest8Iterator4nextEv */
/* Demangled: android::DrmInfoRequest::Iterator::next() */
int _ZN7android14DrmInfoRequest8Iterator4nextEv(void);

/* Symbol: _ZNK7android14DrmSupportInfo21isSupportedFileSuffixERKNS_7String8E */
/* Demangled: android::DrmSupportInfo::isSupportedFileSuffix(android::String8 const&) const */
int _ZNK7android14DrmSupportInfo21isSupportedFileSuffixERKNS_7String8E(void);

/* Symbol: _ZN7android12DrmCtaPlugIn7onPreadEiRNS_2spINS_13DecryptHandleEEEPvix */
/* Demangled: android::DrmCtaPlugIn::onPread(int, android::sp<android::DecryptHandle>&, void*, int, long long) */
int _ZN7android12DrmCtaPlugIn7onPreadEiRNS_2spINS_13DecryptHandleEEEPvix(void);

/* Symbol: _ZN7android13DrmEngineBase19finalizeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEi */
/* Demangled: android::DrmEngineBase::finalizeDecryptUnit(int, android::sp<android::DecryptHandle>&, int) */
int _ZN7android13DrmEngineBase19finalizeDecryptUnitEiRNS_2spINS_13DecryptHandleEEEi(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int fn___aeabi_memmove(void) __asm__("__aeabi_memmove");

/* Symbol: _ZNK7android14DrmInfoRequest8getCountEv */
/* Demangled: android::DrmInfoRequest::getCount() const */
int _ZNK7android14DrmInfoRequest8getCountEv(void);

/* Symbol: _ZN7android12DrmCtaPlugInD2Ev */
/* Demangled: android::DrmCtaPlugIn::~DrmCtaPlugIn() */
int _ZN7android12DrmCtaPlugInD2Ev(void);

/* Symbol: _ZN7android13DrmEngineBase12removeRightsEiRKNS_7String8E */
/* Demangled: android::DrmEngineBase::removeRights(int, android::String8 const&) */
int _ZN7android13DrmEngineBase12removeRightsEiRKNS_7String8E(void);

/* Symbol: _ZN7android13DrmEngineBase17setPlaybackStatusEiRNS_2spINS_13DecryptHandleEEEix */
/* Demangled: android::DrmEngineBase::setPlaybackStatus(int, android::sp<android::DecryptHandle>&, int, long long) */
int _ZN7android13DrmEngineBase17setPlaybackStatusEiRNS_2spINS_13DecryptHandleEEEix(void);

/* Symbol: _ZN7android13DrmEngineBase18openDecryptSessionEiRNS_2spINS_13DecryptHandleEEEPKcS6_ */
/* Demangled: android::DrmEngineBase::openDecryptSession(int, android::sp<android::DecryptHandle>&, char const*, char const*) */
int _ZN7android13DrmEngineBase18openDecryptSessionEiRNS_2spINS_13DecryptHandleEEEPKcS6_(void);

/* Symbol: _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE10do_destroyEPvj */
/* Demangled: android::Vector<android::DrmCtaUtil::Listener>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_10DrmCtaUtil8ListenerEE10do_destroyEPvj(void);

/* Symbol: _ZN7android14DrmSupportInfo18FileSuffixIteratorC2ERKS1_ */
/* Demangled: android::DrmSupportInfo::FileSuffixIterator::FileSuffixIterator(android::DrmSupportInfo::FileSuffixIterator const&) */
int _ZN7android14DrmSupportInfo18FileSuffixIteratorC2ERKS1_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android11DrmMetadata3getERKNS_7String8E */
/* Demangled: android::DrmMetadata::get(android::String8 const&) const */
int _ZNK7android11DrmMetadata3getERKNS_7String8E(void);

/* Symbol: _ZN7android14DrmSupportInfo16MimeTypeIterator4nextEv */
/* Demangled: android::DrmSupportInfo::MimeTypeIterator::next() */
int _ZN7android14DrmSupportInfo16MimeTypeIterator4nextEv(void);

/* Symbol: _ZN7android14DrmSupportInfoC1Ev */
/* Demangled: android::DrmSupportInfo::DrmSupportInfo() */
int _ZN7android14DrmSupportInfoC1Ev(void);

/* Symbol: _ZNK7android7DrmInfo11getMimeTypeEv */
/* Demangled: android::DrmInfo::getMimeType() const */
int _ZNK7android7DrmInfo11getMimeTypeEv(void);

/* Symbol: _ZN7android14DrmInfoRequest10ACCOUNT_IDE */
/* Demangled: android::DrmInfoRequest::ACCOUNT_ID */
extern void* _ZN7android14DrmInfoRequest10ACCOUNT_IDE;

/* Symbol: _ZN7android14DrmInfoRequest11KeyIteratorC1ERKS1_ */
/* Demangled: android::DrmInfoRequest::KeyIterator::KeyIterator(android::DrmInfoRequest::KeyIterator const&) */
int _ZN7android14DrmInfoRequest11KeyIteratorC1ERKS1_(void);

/* Symbol: _ZNK7android6VectorIPNS_8Cta5FileEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::Cta5File*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_8Cta5FileEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android11DrmMetadata8IteratoraSERKS1_ */
/* Demangled: android::DrmMetadata::Iterator::operator=(android::DrmMetadata::Iterator const&) */
int _ZN7android11DrmMetadata8IteratoraSERKS1_(void);

/* Symbol: _ZNK7android7DrmInfo11getInfoTypeEv */
/* Demangled: android::DrmInfo::getInfoType() const */
int _ZNK7android7DrmInfo11getInfoTypeEv(void);

/* Symbol: _ZNK7android7DrmInfo8iteratorEv */
/* Demangled: android::DrmInfo::iterator() const */
int _ZNK7android7DrmInfo8iteratorEv(void);

/* Symbol: _ZN7android11DrmMetadata8iteratorEv */
/* Demangled: android::DrmMetadata::iterator() */
int _ZN7android11DrmMetadata8iteratorEv(void);

/* Symbol: _ZNK7android7DrmInfo7getDataEv */
/* Demangled: android::DrmInfo::getData() const */
int _ZNK7android7DrmInfo7getDataEv(void);

/* Symbol: _ZN7android12DrmCtaPlugIn12isTokenValidEPKNS_14DrmInfoRequestE */
/* Demangled: android::DrmCtaPlugIn::isTokenValid(android::DrmInfoRequest const*) */
int _ZN7android12DrmCtaPlugIn12isTokenValidEPKNS_14DrmInfoRequestE(void);

/* Symbol: _ZN7android12DrmCtaPlugIn13onGetMetadataEiPKNS_7String8E */
/* Demangled: android::DrmCtaPlugIn::onGetMetadata(int, android::String8 const*) */
int _ZN7android12DrmCtaPlugIn13onGetMetadataEiPKNS_7String8E(void);

/* Symbol: _ZN7android12DrmCtaPlugInD0Ev */
/* Demangled: android::DrmCtaPlugIn::~DrmCtaPlugIn() */
int _ZN7android12DrmCtaPlugInD0Ev(void);

/* Symbol: _ZN7android13DrmEngineBase17checkRightsStatusEiRKNS_7String8Ei */
/* Demangled: android::DrmEngineBase::checkRightsStatus(int, android::String8 const&, int) */
int _ZN7android13DrmEngineBase17checkRightsStatusEiRKNS_7String8Ei(void);

/* Symbol: _ZN7android11DrmMetadata8IteratorC2ERKS1_ */
/* Demangled: android::DrmMetadata::Iterator::Iterator(android::DrmMetadata::Iterator const&) */
int _ZN7android11DrmMetadata8IteratorC2ERKS1_(void);

/* Symbol: _ZNK7android7DrmInfo11keyIteratorEv */
/* Demangled: android::DrmInfo::keyIterator() const */
int _ZNK7android7DrmInfo11keyIteratorEv(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android13DrmEngineBase9terminateEi */
/* Demangled: android::DrmEngineBase::terminate(int) */
int _ZN7android13DrmEngineBase9terminateEi(void);

/* Symbol: _ZNK7android6VectorIPNS_8Cta5FileEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::Cta5File*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_8Cta5FileEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android7DrmInfo11KeyIteratoraSERKS1_ */
/* Demangled: android::DrmInfo::KeyIterator::operator=(android::DrmInfo::KeyIterator const&) */
int _ZN7android7DrmInfo11KeyIteratoraSERKS1_(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int fn___aeabi_memmove4(void) __asm__("__aeabi_memmove4");

/* Symbol: _ZN7android13DrmEngineBaseC2Ev */
/* Demangled: android::DrmEngineBase::DrmEngineBase() */
int _ZN7android13DrmEngineBaseC2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, char const*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPKcEEE10do_destroyEPvj(void);

/* Symbol: _ZN7android14DrmInfoRequest8IteratorC2ERKS1_ */
/* Demangled: android::DrmInfoRequest::Iterator::Iterator(android::DrmInfoRequest::Iterator const&) */
int _ZN7android14DrmInfoRequest8IteratorC2ERKS1_(void);

/* Symbol: _ZN7android13DrmEngineBase16getDrmObjectTypeEiRKNS_7String8ES3_ */
/* Demangled: android::DrmEngineBase::getDrmObjectType(int, android::String8 const&, android::String8 const&) */
int _ZN7android13DrmEngineBase16getDrmObjectTypeEiRKNS_7String8ES3_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android7DrmInfo11KeyIteratorC2ERKS1_ */
/* Demangled: android::DrmInfo::KeyIterator::KeyIterator(android::DrmInfo::KeyIterator const&) */
int _ZN7android7DrmInfo11KeyIteratorC2ERKS1_(void);

/* Symbol: _ZN7android7DrmInfo8IteratoraSERKS1_ */
/* Demangled: android::DrmInfo::Iterator::operator=(android::DrmInfo::Iterator const&) */
int _ZN7android7DrmInfo8IteratoraSERKS1_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBDRMCTAPLUGIN_H */
