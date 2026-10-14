/*
 * Reverse-Engineered Source for: libmtkutils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkutils"

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
#include "libmtkutils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::SortedVectorImpl::merge(android::SortedVectorImpl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImpl5mergeERKS0_(void) {
    ALOGD("_ZN7android16SortedVectorImpl5mergeERKS0_() called");
    return 0;
}

/* Demangled: android::Parcel::Blob::release() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel4Blob7releaseEv(void) {
    ALOGD("_ZN7android6Parcel4Blob7releaseEv() called");
    return 0;
}

/* Demangled: android::Parcel::readFloatVector(std::__1::unique_ptr<std::__1::vector<float, std::__1::allocator<float> >, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float> > > >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel15readFloatVectorEPNSt3__110unique_ptrINS1_6vectorIfNS1_9allocatorIfEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZNK7android6Parcel15readFloatVectorEPNSt3__110unique_ptrINS1_6vectorIfNS1_9allocatorIfEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: android::StopWatch::lap() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9StopWatch3lapEv(void) {
    ALOGD("_ZN7android9StopWatch3lapEv() called");
    return 0;
}

/* Demangled: android::VectorImpl::VectorImpl(android::VectorImpl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImplC2ERKS0_(void) {
    ALOGD("_ZN7android10VectorImplC2ERKS0_() called");
    return 0;
}

/* Demangled: android::Parcel::Parcel() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6ParcelC2Ev(void) {
    ALOGD("_ZN7android6ParcelC2Ev() called");
    return 0;
}

/* Demangled: android::Parcel::readIntPtr(long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel10readIntPtrEPl(void) {
    ALOGD("_ZNK7android6Parcel10readIntPtrEPl() called");
    return 0;
}

/* Demangled: __ubsan_handle_pointer_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_pointer_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_pointer_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: android::String16::startsWith(android::String16 const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8String1610startsWithERKS0_(void) {
    ALOGD("_ZNK7android8String1610startsWithERKS0_() called");
    return 0;
}

/* Demangled: android::String8::String8(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2ERKS0_(void) {
    ALOGD("_ZN7android7String8C2ERKS0_() called");
    return 0;
}

/* Demangled: int android::Parcel::readNullableTypedVector<long>(std::__1::unique_ptr<std::__1::vector<long, std::__1::allocator<long> >, std::__1::default_delete<std::__1::vector<long, std::__1::allocator<long> > > >*, int (android::Parcel::*)(long*) const) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel23readNullableTypedVectorIlEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E(void) {
    ALOGD("_ZNK7android6Parcel23readNullableTypedVectorIlEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E() called");
    return 0;
}

/* Demangled: android::VectorImpl::~VectorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImplD2Ev(void) {
    ALOGD("_ZN7android10VectorImplD2Ev() called");
    return 0;
}

/* Demangled: android::CallStack::log(char const*, android_LogPriority, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9CallStack3logEPKc19android_LogPriorityS2_(void) {
    ALOGD("_ZNK7android9CallStack3logEPKc19android_LogPriorityS2_() called");
    return 0;
}

/* Demangled: android::SharedBuffer::acquire() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SharedBuffer7acquireEv(void) {
    ALOGD("_ZNK7android12SharedBuffer7acquireEv() called");
    return 0;
}

/* Demangled: android::String16::String16(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1EPKcm(void) {
    ALOGD("_ZN7android8String16C1EPKcm() called");
    return 0;
}

/* Demangled: __ubsan_handle_negate_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_negate_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_negate_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: android::Parcel::writeInt32Vector(std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel16writeInt32VectorERKNSt3__16vectorIiNS1_9allocatorIiEEEE(void) {
    ALOGD("_ZN7android6Parcel16writeInt32VectorERKNSt3__16vectorIiNS1_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<char16_t, std::__1::allocator<char16_t> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIDsNS_9allocatorIDsEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIDsNS_9allocatorIDsEEE8__appendEm() called");
    return 0;
}

/* Demangled: android::CallStack::~CallStack() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CallStackD2Ev(void) {
    ALOGD("_ZN7android9CallStackD2Ev() called");
    return 0;
}

/* Demangled: android::String8::String8(android::String16 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1ERKNS_8String16E(void) {
    ALOGD("_ZN7android7String8C1ERKNS_8String16E() called");
    return 0;
}

/* Demangled: android::CallStack::toString(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9CallStack8toStringEPKc(void) {
    ALOGD("_ZNK7android9CallStack8toStringEPKc() called");
    return 0;
}

/* Demangled: android::SharedBuffer::attemptEdit() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SharedBuffer11attemptEditEv(void) {
    ALOGD("_ZNK7android12SharedBuffer11attemptEditEv() called");
    return 0;
}

/* Demangled: android::String8::lockBuffer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String810lockBufferEm(void) {
    ALOGD("_ZN7android7String810lockBufferEm() called");
    return 0;
}

/* Demangled: android::String8::walkPath(android::String8*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String88walkPathEPS0_(void) {
    ALOGD("_ZNK7android7String88walkPathEPS0_() called");
    return 0;
}

/* Demangled: utf8_to_utf32_length */
extern "C" __attribute__((visibility("default"))) int utf8_to_utf32_length(void) {
    ALOGD("utf8_to_utf32_length() called");
    return 0;
}

/* Demangled: android::SortedVector<android::BlobCache::CacheEntry>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: int android::Parcel::writeAligned<unsigned long>(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel12writeAlignedImEEiT_(void) {
    ALOGD("_ZN7android6Parcel12writeAlignedImEEiT_() called");
    return 0;
}

/* Demangled: android::Parcel::writeByteVector(std::__1::unique_ptr<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::default_delete<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel15writeByteVectorERKNSt3__110unique_ptrINS1_6vectorIhNS1_9allocatorIhEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZN7android6Parcel15writeByteVectorERKNSt3__110unique_ptrINS1_6vectorIhNS1_9allocatorIhEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::BlobCache::CacheEntry> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_9BlobCache10CacheEntryEEE = NULL;

/* Demangled: android::WeakMessageHandler::~WeakMessageHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18WeakMessageHandlerD0Ev(void) {
    ALOGD("_ZN7android18WeakMessageHandlerD0Ev() called");
    return 0;
}

/* Demangled: android::SimpleLooperCallback::~SimpleLooperCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20SimpleLooperCallbackD2Ev(void) {
    ALOGD("_ZN7android20SimpleLooperCallbackD2Ev() called");
    return 0;
}

/* Exported Object: VTT for android::WeakMessageHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android18WeakMessageHandlerE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::CallStack::CallStack() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CallStackC1Ev(void) {
    ALOGD("_ZN7android9CallStackC1Ev() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::getWeakCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase12weakref_type12getWeakCountEv(void) {
    ALOGD("_ZNK7android7RefBase12weakref_type12getWeakCountEv() called");
    return 0;
}

/* Demangled: int android::Parcel::unsafeReadTypedVector<long, long>(std::__1::vector<long, std::__1::allocator<long> >*, int (android::Parcel::*)(long*) const) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel21unsafeReadTypedVectorIllEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E(void) {
    ALOGD("_ZNK7android6Parcel21unsafeReadTypedVectorIllEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Parcel::appendFrom(android::Parcel const*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel10appendFromEPKS0_mm(void) {
    ALOGD("_ZN7android6Parcel10appendFromEPKS0_mm() called");
    return 0;
}

/* Demangled: int android::Parcel::writeAligned<long>(long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel12writeAlignedIlEEiT_(void) {
    ALOGD("_ZN7android6Parcel12writeAlignedIlEEiT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::BlobCache::CacheEntry>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::ProcessCallStack::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16ProcessCallStack4sizeEv(void) {
    ALOGD("_ZNK7android16ProcessCallStack4sizeEv() called");
    return 0;
}

/* Demangled: android::JenkinsHashMixBytes(unsigned int, unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19JenkinsHashMixBytesEjPKhm(void) {
    ALOGD("_ZN7android19JenkinsHashMixBytesEjPKhm() called");
    return 0;
}

/* Demangled: android::String8::append(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String86appendEPKc(void) {
    ALOGD("_ZN7android7String86appendEPKc() called");
    return 0;
}

/* Demangled: android::SharedBuffer::edit() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SharedBuffer4editEv(void) {
    ALOGD("_ZNK7android12SharedBuffer4editEv() called");
    return 0;
}

/* Demangled: android::String8::getBasePath() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String811getBasePathEv(void) {
    ALOGD("_ZNK7android7String811getBasePathEv() called");
    return 0;
}

/* Demangled: android::String8::getPathExtension() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String816getPathExtensionEv(void) {
    ALOGD("_ZNK7android7String816getPathExtensionEv() called");
    return 0;
}

/* Demangled: android::Parcel::readByteVector(std::__1::vector<signed char, std::__1::allocator<signed char> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel14readByteVectorEPNSt3__16vectorIaNS1_9allocatorIaEEEE(void) {
    ALOGD("_ZNK7android6Parcel14readByteVectorEPNSt3__16vectorIaNS1_9allocatorIaEEEE() called");
    return 0;
}

/* Demangled: android::BlobCache::flatten(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9BlobCache7flattenEPvm(void) {
    ALOGD("_ZNK7android9BlobCache7flattenEPvm() called");
    return 0;
}

/* Demangled: android::Looper::pushResponse(int, android::Looper::Request const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper12pushResponseEiRKNS0_7RequestE(void) {
    ALOGD("_ZN7android6Looper12pushResponseEiRKNS0_7RequestE() called");
    return 0;
}

/* Demangled: android::Thread::getTid() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Thread6getTidEv(void) {
    ALOGD("_ZNK7android6Thread6getTidEv() called");
    return 0;
}

/* Demangled: android::Parcel::writeInt32(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel10writeInt32Ei(void) {
    ALOGD("_ZN7android6Parcel10writeInt32Ei() called");
    return 0;
}

/* Demangled: int android::Parcel::readNullableTypedVector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >(std::__1::unique_ptr<std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >, std::__1::default_delete<std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > > > >*, int (android::Parcel::*)(std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) const) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel23readNullableTypedVectorINSt3__110unique_ptrINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_14default_deleteIS9_EEEEEEiPNS3_INS2_6vectorIT_NS7_ISE_EEEENSA_ISG_EEEEMS0_KFiPSE_E(void) {
    ALOGD("_ZNK7android6Parcel23readNullableTypedVectorINSt3__110unique_ptrINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_14default_deleteIS9_EEEEEEiPNS3_INS2_6vectorIT_NS7_ISE_EEEENSA_ISG_EEEEMS0_KFiPSE_E() called");
    return 0;
}

/* Demangled: android::ProcessCallStack::printInternal(android::Printer&, android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16ProcessCallStack13printInternalERNS_7PrinterES2_(void) {
    ALOGD("_ZNK7android16ProcessCallStack13printInternalERNS_7PrinterES2_() called");
    return 0;
}

/* Demangled: android::terminate_string8() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17terminate_string8Ev(void) {
    ALOGD("_ZN7android17terminate_string8Ev() called");
    return 0;
}

/* Demangled: android::Parcel::writeInt32Vector(std::__1::unique_ptr<std::__1::vector<int, std::__1::allocator<int> >, std::__1::default_delete<std::__1::vector<int, std::__1::allocator<int> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel16writeInt32VectorERKNSt3__110unique_ptrINS1_6vectorIiNS1_9allocatorIiEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZN7android6Parcel16writeInt32VectorERKNSt3__110unique_ptrINS1_6vectorIiNS1_9allocatorIiEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: android::BlobCache::CacheEntry::CacheEntry(android::sp<android::BlobCache::Blob> const&, android::sp<android::BlobCache::Blob> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache10CacheEntryC1ERKNS_2spINS0_4BlobEEES6_(void) {
    ALOGD("_ZN7android9BlobCache10CacheEntryC1ERKNS_2spINS0_4BlobEEES6_() called");
    return 0;
}

/* Demangled: android::Looper::scheduleEpollRebuildLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper26scheduleEpollRebuildLockedEv(void) {
    ALOGD("_ZN7android6Looper26scheduleEpollRebuildLockedEv() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::Response>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper8ResponseEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper8ResponseEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::ProcessCallStack::toString(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16ProcessCallStack8toStringEPKc(void) {
    ALOGD("_ZNK7android16ProcessCallStack8toStringEPKc() called");
    return 0;
}

/* Exported Object: vtable for android::PrefixPrinter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android13PrefixPrinterE = NULL;

/* Demangled: utf32_to_utf8_length */
extern "C" __attribute__((visibility("default"))) int utf32_to_utf8_length(void) {
    ALOGD("utf32_to_utf8_length() called");
    return 0;
}

/* Demangled: strnlen16 */
extern "C" __attribute__((visibility("default"))) int strnlen16(void) {
    ALOGD("strnlen16() called");
    return 0;
}

/* Demangled: android::VectorImpl::setCapacity(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl11setCapacityEm(void) {
    ALOGD("_ZN7android10VectorImpl11setCapacityEm() called");
    return 0;
}

/* Demangled: android::Parcel::writePointer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel12writePointerEm(void) {
    ALOGD("_ZN7android6Parcel12writePointerEm() called");
    return 0;
}

/* Demangled: android::String8::setTo(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String85setToEPKcm(void) {
    ALOGD("_ZN7android7String85setToEPKcm() called");
    return 0;
}

/* Demangled: strncpy16 */
extern "C" __attribute__((visibility("default"))) int strncpy16(void) {
    ALOGD("strncpy16() called");
    return 0;
}

/* Exported Object: vtable for android::VectorImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10VectorImplE = NULL;

/* Demangled: android::Parcel::setData(unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel7setDataEPKhm(void) {
    ALOGD("_ZN7android6Parcel7setDataEPKhm() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::Response>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper8ResponseEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper8ResponseEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::String8::~String8() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8D1Ev(void) {
    ALOGD("_ZN7android7String8D1Ev() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::printRefs() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase12weakref_type9printRefsEv(void) {
    ALOGD("_ZNK7android7RefBase12weakref_type9printRefsEv() called");
    return 0;
}

/* Demangled: android::String8::toUpper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String87toUpperEv(void) {
    ALOGD("_ZN7android7String87toUpperEv() called");
    return 0;
}

/* Demangled: android::SimpleLooperCallback::handleEvent(int, int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20SimpleLooperCallback11handleEventEiiPv(void) {
    ALOGD("_ZN7android20SimpleLooperCallback11handleEventEiiPv() called");
    return 0;
}

/* Demangled: android::SimpleLooperCallback::SimpleLooperCallback(int (*)(int, int, void*)) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20SimpleLooperCallbackC1EPFiiiPvE(void) {
    ALOGD("_ZN7android20SimpleLooperCallbackC1EPFiiiPvE() called");
    return 0;
}

/* Demangled: android::Looper::prepare(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper7prepareEi(void) {
    ALOGD("_ZN7android6Looper7prepareEi() called");
    return 0;
}

/* Demangled: __ubsan_handle_cfi_check_fail_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_cfi_check_fail_minimal_abort(void) {
    ALOGD("__ubsan_handle_cfi_check_fail_minimal_abort() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::~SortedVectorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImplD0Ev(void) {
    ALOGD("_ZN7android16SortedVectorImplD0Ev() called");
    return 0;
}

/* Demangled: int android::Parcel::writeAligned<unsigned int>(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel12writeAlignedIjEEiT_(void) {
    ALOGD("_ZN7android6Parcel12writeAlignedIjEEiT_() called");
    return 0;
}

/* Demangled: android::Parcel::releaseObjects() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel14releaseObjectsEv(void) {
    ALOGD("_ZN7android6Parcel14releaseObjectsEv() called");
    return 0;
}

/* Demangled: android::Parcel::readPointer(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel11readPointerEPm(void) {
    ALOGD("_ZNK7android6Parcel11readPointerEPm() called");
    return 0;
}

/* Demangled: android::Parcel::readBoolVector(std::__1::unique_ptr<std::__1::vector<bool, std::__1::allocator<bool> >, std::__1::default_delete<std::__1::vector<bool, std::__1::allocator<bool> > > >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel14readBoolVectorEPNSt3__110unique_ptrINS1_6vectorIbNS1_9allocatorIbEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZNK7android6Parcel14readBoolVectorEPNSt3__110unique_ptrINS1_6vectorIbNS1_9allocatorIbEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: android::Parcel::readChar() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel8readCharEv(void) {
    ALOGD("_ZNK7android6Parcel8readCharEv() called");
    return 0;
}

/* Demangled: androidGetThreadId */
extern "C" __attribute__((visibility("default"))) int androidGetThreadId(void) {
    ALOGD("androidGetThreadId() called");
    return 0;
}

/* Demangled: android::BlobCache::Blob::~Blob() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache4BlobD1Ev(void) {
    ALOGD("_ZN7android9BlobCache4BlobD1Ev() called");
    return 0;
}

/* Demangled: android::BlobCache::CacheEntry::getKey() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9BlobCache10CacheEntry6getKeyEv(void) {
    ALOGD("_ZNK7android9BlobCache10CacheEntry6getKeyEv() called");
    return 0;
}

/* Demangled: android::StopWatch::~StopWatch() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9StopWatchD2Ev(void) {
    ALOGD("_ZN7android9StopWatchD2Ev() called");
    return 0;
}

/* Demangled: toMillisecondTimeoutDelay */
extern "C" __attribute__((visibility("default"))) int toMillisecondTimeoutDelay(void) {
    ALOGD("toMillisecondTimeoutDelay() called");
    return 0;
}

/* Demangled: android::Parcel::getOpenAshmemSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel17getOpenAshmemSizeEv(void) {
    ALOGD("_ZNK7android6Parcel17getOpenAshmemSizeEv() called");
    return 0;
}

/* Demangled: android::elapsedRealtime() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15elapsedRealtimeEv(void) {
    ALOGD("_ZN7android15elapsedRealtimeEv() called");
    return 0;
}

/* Demangled: android::Parcel::readString16() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel12readString16Ev(void) {
    ALOGD("_ZNK7android6Parcel12readString16Ev() called");
    return 0;
}

/* Demangled: android::Parcel::readByteVector(std::__1::unique_ptr<std::__1::vector<signed char, std::__1::allocator<signed char> >, std::__1::default_delete<std::__1::vector<signed char, std::__1::allocator<signed char> > > >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel14readByteVectorEPNSt3__110unique_ptrINS1_6vectorIaNS1_9allocatorIaEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZNK7android6Parcel14readByteVectorEPNSt3__110unique_ptrINS1_6vectorIaNS1_9allocatorIaEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: android::ProcessCallStack::ProcessCallStack(android::ProcessCallStack const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ProcessCallStackC2ERKS0_(void) {
    ALOGD("_ZN7android16ProcessCallStackC2ERKS0_() called");
    return 0;
}

/* Demangled: android::String16::setTo(android::String16 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String165setToERKS0_(void) {
    ALOGD("_ZN7android8String165setToERKS0_() called");
    return 0;
}

/* Demangled: android::String16::String16(char16_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1EPKDsm(void) {
    ALOGD("_ZN7android8String16C1EPKDsm() called");
    return 0;
}

/* Demangled: android::Thread::_threadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Thread11_threadLoopEPv(void) {
    ALOGD("_ZN7android6Thread11_threadLoopEPv() called");
    return 0;
}

/* Demangled: android::Parcel::writeDouble(double) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel11writeDoubleEd(void) {
    ALOGD("_ZN7android6Parcel11writeDoubleEd() called");
    return 0;
}

/* Demangled: int android::Parcel::writeAligned<int>(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel12writeAlignedIiEEiT_(void) {
    ALOGD("_ZN7android6Parcel12writeAlignedIiEEiT_() called");
    return 0;
}

/* Demangled: android::Parcel::readString16Inplace(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel19readString16InplaceEPm(void) {
    ALOGD("_ZNK7android6Parcel19readString16InplaceEPm() called");
    return 0;
}

/* Exported Object: VTT for android::SimpleLooperCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android20SimpleLooperCallbackE = NULL;

/* Demangled: strlen32 */
extern "C" __attribute__((visibility("default"))) int strlen32(void) {
    ALOGD("strlen32() called");
    return 0;
}

/* Demangled: android::Thread::~Thread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6ThreadD2Ev(void) {
    ALOGD("_ZN7android6ThreadD2Ev() called");
    return 0;
}

/* Demangled: int android::Parcel::unsafeReadTypedVector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*, int (android::Parcel::*)(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel21unsafeReadTypedVectorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES8_EEiPNS2_6vectorIT_NS6_ISA_EEEEMS0_KFiPT0_E(void) {
    ALOGD("_ZNK7android6Parcel21unsafeReadTypedVectorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES8_EEiPNS2_6vectorIT_NS6_ISA_EEEEMS0_KFiPT0_E() called");
    return 0;
}

/* Demangled: android::VectorImpl::insertAt(void const*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl8insertAtEPKvmm(void) {
    ALOGD("_ZN7android10VectorImpl8insertAtEPKvmm() called");
    return 0;
}

/* Demangled: android::Parcel::readInt64Vector(std::__1::unique_ptr<std::__1::vector<long, std::__1::allocator<long> >, std::__1::default_delete<std::__1::vector<long, std::__1::allocator<long> > > >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel15readInt64VectorEPNSt3__110unique_ptrINS1_6vectorIlNS1_9allocatorIlEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZNK7android6Parcel15readInt64VectorEPNSt3__110unique_ptrINS1_6vectorIlNS1_9allocatorIlEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Exported Object: vtable for android::SimpleLooperCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android20SimpleLooperCallbackE = NULL;

/* Demangled: __ubsan_handle_add_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_add_overflow_minimal(void) {
    ALOGD("__ubsan_handle_add_overflow_minimal() called");
    return 0;
}

/* Demangled: android::Printer::~Printer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7PrinterD1Ev(void) {
    ALOGD("_ZN7android7PrinterD1Ev() called");
    return 0;
}

/* Demangled: androidCreateThreadEtc */
extern "C" __attribute__((visibility("default"))) int androidCreateThreadEtc(void) {
    ALOGD("androidCreateThreadEtc() called");
    return 0;
}

/* Demangled: android::Parcel::setDataSize(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel11setDataSizeEm(void) {
    ALOGD("_ZN7android6Parcel11setDataSizeEm() called");
    return 0;
}

/* Demangled: android::Parcel::errorCheck() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel10errorCheckEv(void) {
    ALOGD("_ZNK7android6Parcel10errorCheckEv() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE8__appendEm() called");
    return 0;
}

/* Demangled: android::BlobCache::CacheEntry::operator<(android::BlobCache::CacheEntry const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9BlobCache10CacheEntryltERKS1_(void) {
    ALOGD("_ZNK7android9BlobCache10CacheEntryltERKS1_() called");
    return 0;
}

/* Demangled: android::RefBase::~RefBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBaseD1Ev(void) {
    ALOGD("_ZN7android7RefBaseD1Ev() called");
    return 0;
}

/* Exported Object: android::gDarwinCantLoadAllObjects */
extern "C" __attribute__((visibility("default"))) void* _ZN7android25gDarwinCantLoadAllObjectsE = NULL;

/* Demangled: android::String16::String16(char16_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2EPKDs(void) {
    ALOGD("_ZN7android8String16C2EPKDs() called");
    return 0;
}

/* Demangled: android::Parcel::writeUtf8VectorAsUtf16Vector(std::__1::unique_ptr<std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >, std::__1::default_delete<std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel28writeUtf8VectorAsUtf16VectorERKNSt3__110unique_ptrINS1_6vectorINS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS9_EEEENS7_ISC_EEEENSA_ISE_EEEE(void) {
    ALOGD("_ZN7android6Parcel28writeUtf8VectorAsUtf16VectorERKNSt3__110unique_ptrINS1_6vectorINS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS9_EEEENS7_ISC_EEEENSA_ISE_EEEE() called");
    return 0;
}

/* Demangled: android::BlobCache::clean() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache5cleanEv(void) {
    ALOGD("_ZN7android9BlobCache5cleanEv() called");
    return 0;
}

/* Demangled: android::String8::toUpper(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String87toUpperEmm(void) {
    ALOGD("_ZN7android7String87toUpperEmm() called");
    return 0;
}

/* Demangled: android::Parcel::Blob::~Blob() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel4BlobD1Ev(void) {
    ALOGD("_ZN7android6Parcel4BlobD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: android::RefBase::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase15onLastStrongRefEPKv(void) {
    ALOGD("_ZN7android7RefBase15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::initialize_string16() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19initialize_string16Ev(void) {
    ALOGD("_ZN7android19initialize_string16Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::BlobCache::CacheEntry>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Looper::Looper(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6LooperC1Eb(void) {
    ALOGD("_ZN7android6LooperC1Eb() called");
    return 0;
}

/* Demangled: android::Parcel::readUint32() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel10readUint32Ev(void) {
    ALOGD("_ZNK7android6Parcel10readUint32Ev() called");
    return 0;
}

/* Demangled: android::BlobCache::CacheEntry::CacheEntry() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache10CacheEntryC1Ev(void) {
    ALOGD("_ZN7android9BlobCache10CacheEntryC1Ev() called");
    return 0;
}

/* Demangled: __ubsan_handle_function_type_mismatch_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_function_type_mismatch_minimal(void) {
    ALOGD("__ubsan_handle_function_type_mismatch_minimal() called");
    return 0;
}

/* Demangled: android::Parcel::readUtf8VectorFromUtf16Vector(std::__1::unique_ptr<std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >, std::__1::default_delete<std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > > > >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel29readUtf8VectorFromUtf16VectorEPNSt3__110unique_ptrINS1_6vectorINS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS9_EEEENS7_ISC_EEEENSA_ISE_EEEE(void) {
    ALOGD("_ZNK7android6Parcel29readUtf8VectorFromUtf16VectorEPNSt3__110unique_ptrINS1_6vectorINS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS9_EEEENS7_ISC_EEEENSA_ISE_EEEE() called");
    return 0;
}

/* Demangled: android::Looper::awoken() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper6awokenEv(void) {
    ALOGD("_ZN7android6Looper6awokenEv() called");
    return 0;
}

/* Demangled: __ubsan_handle_missing_return_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_missing_return_minimal(void) {
    ALOGD("__ubsan_handle_missing_return_minimal() called");
    return 0;
}

/* Demangled: android::VectorImpl::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl5clearEv(void) {
    ALOGD("_ZN7android10VectorImpl5clearEv() called");
    return 0;
}

/* Demangled: systemTime */
extern "C" __attribute__((visibility("default"))) int systemTime(void) {
    ALOGD("systemTime() called");
    return 0;
}

/* Demangled: android::Parcel::getGlobalAllocSize() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel18getGlobalAllocSizeEv(void) {
    ALOGD("_ZN7android6Parcel18getGlobalAllocSizeEv() called");
    return 0;
}

/* Demangled: android::Parcel::writeUtf8VectorAsUtf16Vector(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel28writeUtf8VectorAsUtf16VectorERKNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE(void) {
    ALOGD("_ZN7android6Parcel28writeUtf8VectorAsUtf16VectorERKNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE() called");
    return 0;
}

/* Demangled: android::Parcel::writeByte(signed char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel9writeByteEa(void) {
    ALOGD("_ZN7android6Parcel9writeByteEa() called");
    return 0;
}

/* Demangled: android::Parcel::~Parcel() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6ParcelD2Ev(void) {
    ALOGD("_ZN7android6ParcelD2Ev() called");
    return 0;
}

/* Demangled: int android::Parcel::readNullableTypedVector<int>(std::__1::unique_ptr<std::__1::vector<int, std::__1::allocator<int> >, std::__1::default_delete<std::__1::vector<int, std::__1::allocator<int> > > >*, int (android::Parcel::*)(int*) const) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel23readNullableTypedVectorIiEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E(void) {
    ALOGD("_ZNK7android6Parcel23readNullableTypedVectorIiEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E() called");
    return 0;
}

/* Demangled: virtual thunk to android::WeakMessageHandler::~WeakMessageHandler() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android18WeakMessageHandlerD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android18WeakMessageHandlerD1Ev() called");
    return 0;
}

/* Demangled: android::String8::appendFormatV(char const*, std::__va_list) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String813appendFormatVEPKcSt9__va_list(void) {
    ALOGD("_ZN7android7String813appendFormatVEPKcSt9__va_list() called");
    return 0;
}

/* Demangled: android::VectorImpl::appendVector(android::VectorImpl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl12appendVectorERKS0_(void) {
    ALOGD("_ZN7android10VectorImpl12appendVectorERKS0_() called");
    return 0;
}

/* Demangled: int android::Parcel::writeAligned<float>(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel12writeAlignedIfEEiT_(void) {
    ALOGD("_ZN7android6Parcel12writeAlignedIfEEiT_() called");
    return 0;
}

/* Demangled: android::String8::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String85clearEv(void) {
    ALOGD("_ZN7android7String85clearEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_nonnull_arg_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_arg_minimal_abort(void) {
    ALOGD("__ubsan_handle_nonnull_arg_minimal_abort() called");
    return 0;
}

/* Demangled: android::StopWatch::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9StopWatch5resetEv(void) {
    ALOGD("_ZN7android9StopWatch5resetEv() called");
    return 0;
}

/* Demangled: android::Parcel::Parcel() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6ParcelC1Ev(void) {
    ALOGD("_ZN7android6ParcelC1Ev() called");
    return 0;
}

/* Demangled: android::String8::getPathDir() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String810getPathDirEv(void) {
    ALOGD("_ZNK7android7String810getPathDirEv() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::add(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImpl3addEPKv(void) {
    ALOGD("_ZN7android16SortedVectorImpl3addEPKv() called");
    return 0;
}

/* Demangled: android::Parcel::readInplace(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel11readInplaceEm(void) {
    ALOGD("_ZNK7android6Parcel11readInplaceEm() called");
    return 0;
}

/* Demangled: android::Looper::removeFd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper8removeFdEi(void) {
    ALOGD("_ZN7android6Looper8removeFdEi() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::Looper::Response> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_6Looper8ResponseEEE = NULL;

/* Exported Object: vtable for android::NativeHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12NativeHandleE = NULL;

/* Demangled: utf8_to_utf32 */
extern "C" __attribute__((visibility("default"))) int utf8_to_utf32(void) {
    ALOGD("utf8_to_utf32() called");
    return 0;
}

/* Demangled: __ubsan_handle_out_of_bounds_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_out_of_bounds_minimal(void) {
    ALOGD("__ubsan_handle_out_of_bounds_minimal() called");
    return 0;
}

/* Demangled: android::CallStack::print(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9CallStack5printERNS_7PrinterE(void) {
    ALOGD("_ZNK7android9CallStack5printERNS_7PrinterE() called");
    return 0;
}

/* Demangled: android::RefBase::getStrongCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase14getStrongCountEv(void) {
    ALOGD("_ZNK7android7RefBase14getStrongCountEv() called");
    return 0;
}

/* Demangled: android::VectorImpl::~VectorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImplD1Ev(void) {
    ALOGD("_ZN7android10VectorImplD1Ev() called");
    return 0;
}

/* Demangled: strcmp16 */
extern "C" __attribute__((visibility("default"))) int strcmp16(void) {
    ALOGD("strcmp16() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper15MessageEnvelopeEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::CallStack::~CallStack() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CallStackD1Ev(void) {
    ALOGD("_ZN7android9CallStackD1Ev() called");
    return 0;
}

/* Demangled: android::String8::String8(android::String8::StaticLinkage) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1ENS0_13StaticLinkageE(void) {
    ALOGD("_ZN7android7String8C1ENS0_13StaticLinkageE() called");
    return 0;
}

/* Demangled: android::Parcel::writeInt64(long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel10writeInt64El(void) {
    ALOGD("_ZN7android6Parcel10writeInt64El() called");
    return 0;
}

/* Demangled: int android::Parcel::writeAligned<double>(double) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel12writeAlignedIdEEiT_(void) {
    ALOGD("_ZN7android6Parcel12writeAlignedIdEEiT_() called");
    return 0;
}

/* Demangled: android::NativeHandle::NativeHandle(native_handle*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12NativeHandleC1EP13native_handleb(void) {
    ALOGD("_ZN7android12NativeHandleC1EP13native_handleb() called");
    return 0;
}

/* Demangled: android::String16::findLast(char16_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8String168findLastEDs(void) {
    ALOGD("_ZNK7android8String168findLastEDs() called");
    return 0;
}

/* Demangled: void android::LinearTransform::reduce<unsigned long>(unsigned long*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15LinearTransform6reduceImEEvPT_S3_(void) {
    ALOGD("_ZN7android15LinearTransform6reduceImEEvPT_S3_() called");
    return 0;
}

/* Demangled: android::VectorImpl::release_storage() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl15release_storageEv(void) {
    ALOGD("_ZN7android10VectorImpl15release_storageEv() called");
    return 0;
}

/* Demangled: android::SimpleLooperCallback::~SimpleLooperCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20SimpleLooperCallbackD1Ev(void) {
    ALOGD("_ZN7android20SimpleLooperCallbackD1Ev() called");
    return 0;
}

/* Demangled: android::Looper::removeMessages(android::sp<android::MessageHandler> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEE(void) {
    ALOGD("_ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::MessageHandler-in-android::WeakMessageHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android18WeakMessageHandlerE0_NS_14MessageHandlerE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_nullability_arg_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_arg_minimal_abort(void) {
    ALOGD("__ubsan_handle_nullability_arg_minimal_abort() called");
    return 0;
}

/* Demangled: android::SharedBuffer::editResize(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SharedBuffer10editResizeEm(void) {
    ALOGD("_ZNK7android12SharedBuffer10editResizeEm() called");
    return 0;
}

/* Demangled: android::Parcel::readDoubleVector(std::__1::unique_ptr<std::__1::vector<double, std::__1::allocator<double> >, std::__1::default_delete<std::__1::vector<double, std::__1::allocator<double> > > >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel16readDoubleVectorEPNSt3__110unique_ptrINS1_6vectorIdNS1_9allocatorIdEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZNK7android6Parcel16readDoubleVectorEPNSt3__110unique_ptrINS1_6vectorIdNS1_9allocatorIdEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: android::Looper::~Looper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6LooperD2Ev(void) {
    ALOGD("_ZN7android6LooperD2Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::Response>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper8ResponseEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper8ResponseEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_cfi_check_fail_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_cfi_check_fail_minimal(void) {
    ALOGD("__ubsan_handle_cfi_check_fail_minimal() called");
    return 0;
}

/* Demangled: android::NativeHandle::~NativeHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12NativeHandleD2Ev(void) {
    ALOGD("_ZN7android12NativeHandleD2Ev() called");
    return 0;
}

/* Demangled: strzcmp16 */
extern "C" __attribute__((visibility("default"))) int strzcmp16(void) {
    ALOGD("strzcmp16() called");
    return 0;
}

/* Demangled: android::VectorImpl::insertArrayAt(void const*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl13insertArrayAtEPKvmm(void) {
    ALOGD("_ZN7android10VectorImpl13insertArrayAtEPKvmm() called");
    return 0;
}

/* Demangled: android::VectorImpl::replaceAt(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl9replaceAtEm(void) {
    ALOGD("_ZN7android10VectorImpl9replaceAtEm() called");
    return 0;
}

/* Demangled: android::Parcel::readBool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel8readBoolEv(void) {
    ALOGD("_ZNK7android6Parcel8readBoolEv() called");
    return 0;
}

/* Demangled: android::Parcel::freeDataNoInit() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel14freeDataNoInitEv(void) {
    ALOGD("_ZN7android6Parcel14freeDataNoInitEv() called");
    return 0;
}

/* Demangled: android::BlobCache::CacheEntry::CacheEntry(android::BlobCache::CacheEntry const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache10CacheEntryC1ERKS1_(void) {
    ALOGD("_ZN7android9BlobCache10CacheEntryC1ERKS1_() called");
    return 0;
}

/* Demangled: android::BlobCache::Blob::getSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9BlobCache4Blob7getSizeEv(void) {
    ALOGD("_ZNK7android9BlobCache4Blob7getSizeEv() called");
    return 0;
}

/* Demangled: android::Looper::getForThread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper12getForThreadEv(void) {
    ALOGD("_ZN7android6Looper12getForThreadEv() called");
    return 0;
}

/* Demangled: android::VectorImpl::operator=(android::VectorImpl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImplaSERKS0_(void) {
    ALOGD("_ZN7android10VectorImplaSERKS0_() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::SortedVectorImpl(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImplC2Emj(void) {
    ALOGD("_ZN7android16SortedVectorImplC2Emj() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::orderOf(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16SortedVectorImpl7orderOfEPKv(void) {
    ALOGD("_ZNK7android16SortedVectorImpl7orderOfEPKv() called");
    return 0;
}

/* Demangled: android::Parcel::writeFloatVector(std::__1::vector<float, std::__1::allocator<float> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel16writeFloatVectorERKNSt3__16vectorIfNS1_9allocatorIfEEEE(void) {
    ALOGD("_ZN7android6Parcel16writeFloatVectorERKNSt3__16vectorIfNS1_9allocatorIfEEEE() called");
    return 0;
}

/* Demangled: android::Parcel::writeUtf8AsUtf16(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel16writeUtf8AsUtf16ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android6Parcel16writeUtf8AsUtf16ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::PrefixPrinter::PrefixPrinter(android::Printer&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13PrefixPrinterC2ERNS_7PrinterEPKc(void) {
    ALOGD("_ZN7android13PrefixPrinterC2ERNS_7PrinterEPKc() called");
    return 0;
}

/* Demangled: android::String8::length() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String86lengthEv(void) {
    ALOGD("_ZNK7android7String86lengthEv() called");
    return 0;
}

/* Demangled: androidCreateThread */
extern "C" __attribute__((visibility("default"))) int androidCreateThread(void) {
    ALOGD("androidCreateThread() called");
    return 0;
}

/* Demangled: __ubsan_handle_divrem_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_divrem_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_divrem_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: android::ProcessCallStack::dump(int, int, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16ProcessCallStack4dumpEiiPKc(void) {
    ALOGD("_ZNK7android16ProcessCallStack4dumpEiiPKc() called");
    return 0;
}

/* Demangled: android::RefBase::renameRefId(android::RefBase::weakref_type*, void const*, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase11renameRefIdEPNS0_12weakref_typeEPKvS4_(void) {
    ALOGD("_ZN7android7RefBase11renameRefIdEPNS0_12weakref_typeEPKvS4_() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, true>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: __ubsan_handle_pointer_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_pointer_overflow_minimal(void) {
    ALOGD("__ubsan_handle_pointer_overflow_minimal() called");
    return 0;
}

/* Demangled: android::JenkinsHashWhiten(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17JenkinsHashWhitenEj(void) {
    ALOGD("_ZN7android17JenkinsHashWhitenEj() called");
    return 0;
}

/* Demangled: android::String16::String16() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2Ev(void) {
    ALOGD("_ZN7android8String16C2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::String8::String8(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1ERKS0_(void) {
    ALOGD("_ZN7android7String8C1ERKS0_() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String16 const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1ERKS0_mm(void) {
    ALOGD("_ZN7android8String16C1ERKS0_mm() called");
    return 0;
}

/* Demangled: android::Parcel::finishWrite(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel11finishWriteEm(void) {
    ALOGD("_ZN7android6Parcel11finishWriteEm() called");
    return 0;
}

/* Demangled: android::Parcel::readUtf8FromUtf16(std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel17readUtf8FromUtf16EPNSt3__110unique_ptrINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS8_EEEE(void) {
    ALOGD("_ZNK7android6Parcel17readUtf8FromUtf16EPNSt3__110unique_ptrINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS8_EEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::BlobCache::CacheEntry>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::String8::removeAll(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String89removeAllEPKc(void) {
    ALOGD("_ZN7android7String89removeAllEPKc() called");
    return 0;
}

/* Demangled: android::Parcel::readUtf8FromUtf16(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel17readUtf8FromUtf16EPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZNK7android6Parcel17readUtf8FromUtf16EPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::BlobCache::CacheEntry>::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE10do_compareEPKvS5_() called");
    return 0;
}

/* Exported Object: vtable for android::WeakMessageHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android18WeakMessageHandlerE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE10do_compareEPKvS7_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE10do_compareEPKvS7_() called");
    return 0;
}

/* Demangled: android::String16::append(char16_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String166appendEPKDsm(void) {
    ALOGD("_ZN7android8String166appendEPKDsm() called");
    return 0;
}

/* Demangled: android::ProcessCallStack::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ProcessCallStack5clearEv(void) {
    ALOGD("_ZN7android16ProcessCallStack5clearEv() called");
    return 0;
}

/* Demangled: android::LinearTransform::doReverseTransform(long, long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android15LinearTransform18doReverseTransformElPl(void) {
    ALOGD("_ZNK7android15LinearTransform18doReverseTransformElPl() called");
    return 0;
}

/* Demangled: android::StopWatch::elapsedTime() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9StopWatch11elapsedTimeEv(void) {
    ALOGD("_ZNK7android9StopWatch11elapsedTimeEv() called");
    return 0;
}

/* Demangled: android::String8::setPathName(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String811setPathNameEPKc(void) {
    ALOGD("_ZN7android7String811setPathNameEPKc() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2ERKNS_7String8E(void) {
    ALOGD("_ZN7android8String16C2ERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::Parcel::writeString16(android::String16 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel13writeString16ERKNS_8String16E(void) {
    ALOGD("_ZN7android6Parcel13writeString16ERKNS_8String16E() called");
    return 0;
}

/* Demangled: android::Parcel::writeChar(char16_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel9writeCharEDs(void) {
    ALOGD("_ZN7android6Parcel9writeCharEDs() called");
    return 0;
}

/* Demangled: android::Parcel::readInt32Vector(std::__1::unique_ptr<std::__1::vector<int, std::__1::allocator<int> >, std::__1::default_delete<std::__1::vector<int, std::__1::allocator<int> > > >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel15readInt32VectorEPNSt3__110unique_ptrINS1_6vectorIiNS1_9allocatorIiEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZNK7android6Parcel15readInt32VectorEPNSt3__110unique_ptrINS1_6vectorIiNS1_9allocatorIiEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: int android::Parcel::unsafeReadTypedVector<double, double>(std::__1::vector<double, std::__1::allocator<double> >*, int (android::Parcel::*)(double*) const) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel21unsafeReadTypedVectorIddEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E(void) {
    ALOGD("_ZNK7android6Parcel21unsafeReadTypedVectorIddEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E() called");
    return 0;
}

/* Demangled: android::BlobCache::get(void const*, unsigned long, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache3getEPKvmPvm(void) {
    ALOGD("_ZN7android9BlobCache3getEPKvmPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper15MessageEnvelopeEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::RefBase::incStrong(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase9incStrongEPKv(void) {
    ALOGD("_ZNK7android7RefBase9incStrongEPKv() called");
    return 0;
}

/* Demangled: android::String8::String8(android::String16 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2ERKNS_8String16E(void) {
    ALOGD("_ZN7android7String8C2ERKNS_8String16E() called");
    return 0;
}

/* Demangled: android::Parcel::readUint64() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel10readUint64Ev(void) {
    ALOGD("_ZNK7android6Parcel10readUint64Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<long, std::__1::allocator<long> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE8__appendEm() called");
    return 0;
}

/* Demangled: android::BlobCache::Blob::~Blob() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache4BlobD0Ev(void) {
    ALOGD("_ZN7android9BlobCache4BlobD0Ev() called");
    return 0;
}

/* Demangled: android::Looper::rebuildEpollLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper18rebuildEpollLockedEv(void) {
    ALOGD("_ZN7android6Looper18rebuildEpollLockedEv() called");
    return 0;
}

/* Demangled: android::RefBase::decStrong(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase9decStrongEPKv(void) {
    ALOGD("_ZNK7android7RefBase9decStrongEPKv() called");
    return 0;
}

/* Demangled: android::StopWatch::~StopWatch() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9StopWatchD1Ev(void) {
    ALOGD("_ZN7android9StopWatchD1Ev() called");
    return 0;
}

/* Demangled: android::String8::getUtf32Length() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String814getUtf32LengthEv(void) {
    ALOGD("_ZNK7android7String814getUtf32LengthEv() called");
    return 0;
}

/* Demangled: android::Looper::isPolling() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Looper9isPollingEv(void) {
    ALOGD("_ZNK7android6Looper9isPollingEv() called");
    return 0;
}

/* Demangled: android::String8::setTo(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String85setToEPKc(void) {
    ALOGD("_ZN7android7String85setToEPKc() called");
    return 0;
}

/* Demangled: android::String8::getPathLeaf() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String811getPathLeafEv(void) {
    ALOGD("_ZNK7android7String811getPathLeafEv() called");
    return 0;
}

/* Demangled: android::Parcel::writeFloat(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel10writeFloatEf(void) {
    ALOGD("_ZN7android6Parcel10writeFloatEf() called");
    return 0;
}

/* Demangled: void std::__1::__fill_n_true<std::__1::vector<bool, std::__1::allocator<bool> > >(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::vector<bool, std::__1::allocator<bool> >::size_type) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__fill_n_trueINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE(void) {
    ALOGD("_ZNSt3__113__fill_n_trueINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE() called");
    return 0;
}

/* Demangled: __ubsan_handle_float_cast_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_float_cast_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_float_cast_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: android::SharedBuffer::alloc(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12SharedBuffer5allocEm(void) {
    ALOGD("_ZN7android12SharedBuffer5allocEm() called");
    return 0;
}

/* Demangled: android::WeakMessageHandler::WeakMessageHandler(android::wp<android::MessageHandler> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18WeakMessageHandlerC1ERKNS_2wpINS_14MessageHandlerEEE(void) {
    ALOGD("_ZN7android18WeakMessageHandlerC1ERKNS_2wpINS_14MessageHandlerEEE() called");
    return 0;
}

/* Demangled: android::String8::String8(char32_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2EPKDim(void) {
    ALOGD("_ZN7android7String8C2EPKDim() called");
    return 0;
}

/* Demangled: android::Thread::~Thread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6ThreadD1Ev(void) {
    ALOGD("_ZN7android6ThreadD1Ev() called");
    return 0;
}

/* Demangled: android::Parcel::dataSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel8dataSizeEv(void) {
    ALOGD("_ZNK7android6Parcel8dataSizeEv() called");
    return 0;
}

/* Demangled: android::Looper::sendMessageDelayed(long, android::sp<android::MessageHandler> const&, android::Message const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper18sendMessageDelayedElRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE(void) {
    ALOGD("_ZN7android6Looper18sendMessageDelayedElRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE() called");
    return 0;
}

/* Demangled: __ubsan_handle_mul_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_mul_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_mul_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: utf32_from_utf8_at */
extern "C" __attribute__((visibility("default"))) int utf32_from_utf8_at(void) {
    ALOGD("utf32_from_utf8_at() called");
    return 0;
}

/* Demangled: android::String16::remove(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String166removeEmm(void) {
    ALOGD("_ZN7android8String166removeEmm() called");
    return 0;
}

/* Demangled: android::WeakMessageHandler::WeakMessageHandler(android::wp<android::MessageHandler> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18WeakMessageHandlerC2ERKNS_2wpINS_14MessageHandlerEEE(void) {
    ALOGD("_ZN7android18WeakMessageHandlerC2ERKNS_2wpINS_14MessageHandlerEEE() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::attemptIncWeak(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase12weakref_type14attemptIncWeakEPKv(void) {
    ALOGD("_ZN7android7RefBase12weakref_type14attemptIncWeakEPKv() called");
    return 0;
}

/* Demangled: android::String8::setTo(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String85setToERKS0_(void) {
    ALOGD("_ZN7android7String85setToERKS0_() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String16 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2ERKS0_(void) {
    ALOGD("_ZN7android8String16C2ERKS0_() called");
    return 0;
}

/* Demangled: android::VectorImpl::appendArray(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl11appendArrayEPKvm(void) {
    ALOGD("_ZN7android10VectorImpl11appendArrayEPKvm() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEm() called");
    return 0;
}

/* Demangled: android::Looper::setForThread(android::sp<android::Looper> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper12setForThreadERKNS_2spIS0_EE(void) {
    ALOGD("_ZN7android6Looper12setForThreadERKNS_2spIS0_EE() called");
    return 0;
}

/* Demangled: android::RefBase::extendObjectLifetime(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase20extendObjectLifetimeEi(void) {
    ALOGD("_ZN7android7RefBase20extendObjectLifetimeEi() called");
    return 0;
}

/* Demangled: android::Parcel::readInt32(int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel9readInt32EPi(void) {
    ALOGD("_ZNK7android6Parcel9readInt32EPi() called");
    return 0;
}

/* Demangled: android::Looper::pollOnce(int, int*, int*, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper8pollOnceEiPiS1_PPv(void) {
    ALOGD("_ZN7android6Looper8pollOnceEiPiS1_PPv() called");
    return 0;
}

/* Demangled: android::PrefixPrinter::PrefixPrinter(android::Printer&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13PrefixPrinterC1ERNS_7PrinterEPKc(void) {
    ALOGD("_ZN7android13PrefixPrinterC1ERNS_7PrinterEPKc() called");
    return 0;
}

/* Demangled: android::Printer::~Printer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7PrinterD0Ev(void) {
    ALOGD("_ZN7android7PrinterD0Ev() called");
    return 0;
}

/* Demangled: androidSetCreateThreadFunc */
extern "C" __attribute__((visibility("default"))) int androidSetCreateThreadFunc(void) {
    ALOGD("androidSetCreateThreadFunc() called");
    return 0;
}

/* Demangled: android::Parcel::writeInt32Array(unsigned long, int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel15writeInt32ArrayEmPKi(void) {
    ALOGD("_ZN7android6Parcel15writeInt32ArrayEmPKi() called");
    return 0;
}

/* Demangled: int android::Parcel::readNullableTypedVector<float>(std::__1::unique_ptr<std::__1::vector<float, std::__1::allocator<float> >, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float> > > >*, int (android::Parcel::*)(float*) const) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel23readNullableTypedVectorIfEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E(void) {
    ALOGD("_ZNK7android6Parcel23readNullableTypedVectorIfEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E() called");
    return 0;
}

/* Demangled: android::RefBase::~RefBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBaseD0Ev(void) {
    ALOGD("_ZN7android7RefBaseD0Ev() called");
    return 0;
}

/* Demangled: android::String16::insert(unsigned long, char16_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String166insertEmPKDs(void) {
    ALOGD("_ZN7android8String166insertEmPKDs() called");
    return 0;
}

/* Demangled: utf8_to_utf16_length */
extern "C" __attribute__((visibility("default"))) int utf8_to_utf16_length(void) {
    ALOGD("utf8_to_utf16_length() called");
    return 0;
}

/* Demangled: android::Parcel::writeByteVector(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel15writeByteVectorERKNSt3__16vectorIhNS1_9allocatorIhEEEE(void) {
    ALOGD("_ZN7android6Parcel15writeByteVectorERKNSt3__16vectorIhNS1_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: android::BlobCache::CacheEntry::CacheEntry(android::sp<android::BlobCache::Blob> const&, android::sp<android::BlobCache::Blob> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache10CacheEntryC2ERKNS_2spINS0_4BlobEEES6_(void) {
    ALOGD("_ZN7android9BlobCache10CacheEntryC2ERKNS_2spINS0_4BlobEEES6_() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper15MessageEnvelopeEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for android::LooperCallback-in-android::SimpleLooperCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android20SimpleLooperCallbackE0_NS_14LooperCallbackE = NULL;

/* Demangled: android::String8::find_extension() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String814find_extensionEv(void) {
    ALOGD("_ZNK7android7String814find_extensionEv() called");
    return 0;
}

/* Demangled: android::Parcel::readFloat(float*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel9readFloatEPf(void) {
    ALOGD("_ZNK7android6Parcel9readFloatEPf() called");
    return 0;
}

/* Demangled: android::BlobCache::BlobCache(unsigned long, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCacheC2Emmm(void) {
    ALOGD("_ZN7android9BlobCacheC2Emmm() called");
    return 0;
}

/* Exported Object: vtable for android::BlobCache::Blob */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android9BlobCache4BlobE = NULL;

/* Demangled: android::String8Printer::String8Printer(android::String8*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14String8PrinterC2EPNS_7String8EPKc(void) {
    ALOGD("_ZN7android14String8PrinterC2EPNS_7String8EPKc() called");
    return 0;
}

/* Demangled: android::String16::startsWith(char16_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8String1610startsWithEPKDs(void) {
    ALOGD("_ZNK7android8String1610startsWithEPKDs() called");
    return 0;
}

/* Demangled: android::Parcel::readChar(char16_t*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel8readCharEPDs(void) {
    ALOGD("_ZNK7android6Parcel8readCharEPDs() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper15MessageEnvelopeEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::incWeak(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase12weakref_type7incWeakEPKv(void) {
    ALOGD("_ZN7android7RefBase12weakref_type7incWeakEPKv() called");
    return 0;
}

/* Demangled: android::String8::String8(char16_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2EPKDsm(void) {
    ALOGD("_ZN7android7String8C2EPKDsm() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1ERKNS_7String8E(void) {
    ALOGD("_ZN7android8String16C1ERKNS_7String8E() called");
    return 0;
}

/* Demangled: std::__1::vector<double, std::__1::allocator<double> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIdNS_9allocatorIdEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIdNS_9allocatorIdEEE8__appendEm() called");
    return 0;
}

/* Demangled: __ubsan_handle_nullability_arg_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_arg_minimal(void) {
    ALOGD("__ubsan_handle_nullability_arg_minimal() called");
    return 0;
}

/* Demangled: android::String16::replaceAll(char16_t, char16_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String1610replaceAllEDsDs(void) {
    ALOGD("_ZN7android8String1610replaceAllEDsDs() called");
    return 0;
}

/* Demangled: androidCreateRawThreadEtc */
extern "C" __attribute__((visibility("default"))) int androidCreateRawThreadEtc(void) {
    ALOGD("androidCreateRawThreadEtc() called");
    return 0;
}

/* Demangled: android::VectorImpl::capacity() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android10VectorImpl8capacityEv(void) {
    ALOGD("_ZNK7android10VectorImpl8capacityEv() called");
    return 0;
}

/* Demangled: android::Parcel::~Parcel() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6ParcelD1Ev(void) {
    ALOGD("_ZN7android6ParcelD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::__fill_n_false<std::__1::vector<bool, std::__1::allocator<bool> > >(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::vector<bool, std::__1::allocator<bool> >::size_type) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__fill_n_falseINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE(void) {
    ALOGD("_ZNSt3__114__fill_n_falseINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE() called");
    return 0;
}

/* Demangled: virtual thunk to android::WeakMessageHandler::~WeakMessageHandler() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android18WeakMessageHandlerD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android18WeakMessageHandlerD0Ev() called");
    return 0;
}

/* Demangled: android::ProcessCallStack::ProcessCallStack() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ProcessCallStackC2Ev(void) {
    ALOGD("_ZN7android16ProcessCallStackC2Ev() called");
    return 0;
}

/* Demangled: android::Thread::run(char const*, int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Thread3runEPKcim(void) {
    ALOGD("_ZN7android6Thread3runEPKcim() called");
    return 0;
}

/* Demangled: android::Parcel::writeUnpadded(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel13writeUnpaddedEPKvm(void) {
    ALOGD("_ZN7android6Parcel13writeUnpaddedEPKvm() called");
    return 0;
}

/* Demangled: android::BlobCache::BlobCache(unsigned long, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCacheC1Emmm(void) {
    ALOGD("_ZN7android9BlobCacheC1Emmm() called");
    return 0;
}

/* Demangled: android::String16::String16(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2EPKc(void) {
    ALOGD("_ZN7android8String16C2EPKc() called");
    return 0;
}

/* Demangled: android::Thread::requestExit() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Thread11requestExitEv(void) {
    ALOGD("_ZN7android6Thread11requestExitEv() called");
    return 0;
}

/* Demangled: android::Parcel::writeByteVector(std::__1::unique_ptr<std::__1::vector<signed char, std::__1::allocator<signed char> >, std::__1::default_delete<std::__1::vector<signed char, std::__1::allocator<signed char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel15writeByteVectorERKNSt3__110unique_ptrINS1_6vectorIaNS1_9allocatorIaEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZN7android6Parcel15writeByteVectorERKNSt3__110unique_ptrINS1_6vectorIaNS1_9allocatorIaEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Exported Object: vtable for android::Looper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6LooperE = NULL;

/* Demangled: __ubsan_handle_nullability_return_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_return_minimal(void) {
    ALOGD("__ubsan_handle_nullability_return_minimal() called");
    return 0;
}

/* Demangled: android::Thread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Thread10readyToRunEv(void) {
    ALOGD("_ZN7android6Thread10readyToRunEv() called");
    return 0;
}

/* Demangled: android::Parcel::writeString16(char16_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel13writeString16EPKDsm(void) {
    ALOGD("_ZN7android6Parcel13writeString16EPKDsm() called");
    return 0;
}

/* Demangled: android::BlobCache::set(void const*, unsigned long, void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache3setEPKvmS2_m(void) {
    ALOGD("_ZN7android9BlobCache3setEPKvmS2_m() called");
    return 0;
}

/* Demangled: android::Looper::addFd(int, int, int, android::sp<android::LooperCallback> const&, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper5addFdEiiiRKNS_2spINS_14LooperCallbackEEEPv(void) {
    ALOGD("_ZN7android6Looper5addFdEiiiRKNS_2spINS_14LooperCallbackEEEPv() called");
    return 0;
}

/* Demangled: android::String8::real_append(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String811real_appendEPKcm(void) {
    ALOGD("_ZN7android7String811real_appendEPKcm() called");
    return 0;
}

/* Demangled: android::Thread::isRunning() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Thread9isRunningEv(void) {
    ALOGD("_ZNK7android6Thread9isRunningEv() called");
    return 0;
}

/* Demangled: android::Parcel::readCString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel11readCStringEv(void) {
    ALOGD("_ZNK7android6Parcel11readCStringEv() called");
    return 0;
}

/* Demangled: android::ProcessCallStack::update() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ProcessCallStack6updateEv(void) {
    ALOGD("_ZN7android16ProcessCallStack6updateEv() called");
    return 0;
}

/* Demangled: strnlen32 */
extern "C" __attribute__((visibility("default"))) int strnlen32(void) {
    ALOGD("strnlen32() called");
    return 0;
}

/* Demangled: android::VectorImpl::insertVectorAt(android::VectorImpl const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl14insertVectorAtERKS0_m(void) {
    ALOGD("_ZN7android10VectorImpl14insertVectorAtERKS0_m() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_function_type_mismatch_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_function_type_mismatch_minimal_abort(void) {
    ALOGD("__ubsan_handle_function_type_mismatch_minimal_abort() called");
    return 0;
}

/* Demangled: android::String8::setPathName(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String811setPathNameEPKcm(void) {
    ALOGD("_ZN7android7String811setPathNameEPKcm() called");
    return 0;
}

/* Demangled: android::String16::String16(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1EPKc(void) {
    ALOGD("_ZN7android8String16C1EPKc() called");
    return 0;
}

/* Demangled: android::VectorImpl::~VectorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImplD0Ev(void) {
    ALOGD("_ZN7android10VectorImplD0Ev() called");
    return 0;
}

/* Demangled: android::Parcel::writeInt64Vector(std::__1::vector<long, std::__1::allocator<long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel16writeInt64VectorERKNSt3__16vectorIlNS1_9allocatorIlEEEE(void) {
    ALOGD("_ZN7android6Parcel16writeInt64VectorERKNSt3__16vectorIlNS1_9allocatorIlEEEE() called");
    return 0;
}

/* Demangled: android::LogPrinter::printRaw(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10LogPrinter8printRawEPKc(void) {
    ALOGD("_ZN7android10LogPrinter8printRawEPKc() called");
    return 0;
}

/* Demangled: android::String16::String16(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2EPKcm(void) {
    ALOGD("_ZN7android8String16C2EPKcm() called");
    return 0;
}

/* Demangled: android::StopWatch::name() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9StopWatch4nameEv(void) {
    ALOGD("_ZNK7android9StopWatch4nameEv() called");
    return 0;
}

/* Demangled: androidGetThreadPriority */
extern "C" __attribute__((visibility("default"))) int androidGetThreadPriority(void) {
    ALOGD("androidGetThreadPriority() called");
    return 0;
}

/* Demangled: android::VectorImpl::add() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl3addEv(void) {
    ALOGD("_ZN7android10VectorImpl3addEv() called");
    return 0;
}

/* Demangled: __ubsan_handle_nonnull_return_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_return_minimal(void) {
    ALOGD("__ubsan_handle_nonnull_return_minimal() called");
    return 0;
}

/* Demangled: android::String8::String8(char32_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2EPKDi(void) {
    ALOGD("_ZN7android7String8C2EPKDi() called");
    return 0;
}

/* Demangled: android::Thread::join() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Thread4joinEv(void) {
    ALOGD("_ZN7android6Thread4joinEv() called");
    return 0;
}

/* Demangled: android::WeakMessageHandler::handleMessage(android::Message const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18WeakMessageHandler13handleMessageERKNS_7MessageE(void) {
    ALOGD("_ZN7android18WeakMessageHandler13handleMessageERKNS_7MessageE() called");
    return 0;
}

/* Demangled: android::SimpleLooperCallback::~SimpleLooperCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20SimpleLooperCallbackD0Ev(void) {
    ALOGD("_ZN7android20SimpleLooperCallbackD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::String8Printer::String8Printer(android::String8*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14String8PrinterC1EPNS_7String8EPKc(void) {
    ALOGD("_ZN7android14String8PrinterC1EPNS_7String8EPKc() called");
    return 0;
}

/* Demangled: utf16_to_utf8 */
extern "C" __attribute__((visibility("default"))) int utf16_to_utf8(void) {
    ALOGD("utf16_to_utf8() called");
    return 0;
}

/* Demangled: android::SortedVector<android::BlobCache::CacheEntry>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::Response>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper8ResponseEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper8ResponseEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_invalid_builtin_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_invalid_builtin_minimal_abort(void) {
    ALOGD("__ubsan_handle_invalid_builtin_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_load_invalid_value_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_load_invalid_value_minimal_abort(void) {
    ALOGD("__ubsan_handle_load_invalid_value_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_vla_bound_not_positive_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_vla_bound_not_positive_minimal(void) {
    ALOGD("__ubsan_handle_vla_bound_not_positive_minimal() called");
    return 0;
}

/* Demangled: android::PrefixPrinter::printLine(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13PrefixPrinter9printLineEPKc(void) {
    ALOGD("_ZN7android13PrefixPrinter9printLineEPKc() called");
    return 0;
}

/* Demangled: int android::Parcel::unsafeReadTypedVector<float, float>(std::__1::vector<float, std::__1::allocator<float> >*, int (android::Parcel::*)(float*) const) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel21unsafeReadTypedVectorIffEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E(void) {
    ALOGD("_ZNK7android6Parcel21unsafeReadTypedVectorIffEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E() called");
    return 0;
}

/* Demangled: int android::Parcel::readNullableTypedVector<char16_t>(std::__1::unique_ptr<std::__1::vector<char16_t, std::__1::allocator<char16_t> >, std::__1::default_delete<std::__1::vector<char16_t, std::__1::allocator<char16_t> > > >*, int (android::Parcel::*)(char16_t*) const) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel23readNullableTypedVectorIDsEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E(void) {
    ALOGD("_ZNK7android6Parcel23readNullableTypedVectorIDsEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E() called");
    return 0;
}

/* Demangled: android::SortedVector<android::BlobCache::CacheEntry>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Looper::~Looper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6LooperD1Ev(void) {
    ALOGD("_ZN7android6LooperD1Ev() called");
    return 0;
}

/* Demangled: android::NativeHandle::~NativeHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12NativeHandleD1Ev(void) {
    ALOGD("_ZN7android12NativeHandleD1Ev() called");
    return 0;
}

/* Demangled: android::VectorImpl::pop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl3popEv(void) {
    ALOGD("_ZN7android10VectorImpl3popEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::CallStack::dump(int, int, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9CallStack4dumpEiiPKc(void) {
    ALOGD("_ZNK7android9CallStack4dumpEiiPKc() called");
    return 0;
}

/* Demangled: android::String8::String8(char32_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1EPKDi(void) {
    ALOGD("_ZN7android7String8C1EPKDi() called");
    return 0;
}

/* Demangled: android::String16::insert(unsigned long, char16_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String166insertEmPKDsm(void) {
    ALOGD("_ZN7android8String166insertEmPKDsm() called");
    return 0;
}

/* Demangled: android::String16::~String16() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16D2Ev(void) {
    ALOGD("_ZN7android8String16D2Ev() called");
    return 0;
}

/* Demangled: android::Parcel::readCharVector(std::__1::unique_ptr<std::__1::vector<char16_t, std::__1::allocator<char16_t> >, std::__1::default_delete<std::__1::vector<char16_t, std::__1::allocator<char16_t> > > >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel14readCharVectorEPNSt3__110unique_ptrINS1_6vectorIDsNS1_9allocatorIDsEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZNK7android6Parcel14readCharVectorEPNSt3__110unique_ptrINS1_6vectorIDsNS1_9allocatorIDsEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: int android::Parcel::unsafeReadTypedVector<int, int>(std::__1::vector<int, std::__1::allocator<int> >*, int (android::Parcel::*)(int*) const) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel21unsafeReadTypedVectorIiiEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E(void) {
    ALOGD("_ZNK7android6Parcel21unsafeReadTypedVectorIiiEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E() called");
    return 0;
}

/* Demangled: int android::Parcel::readNullableTypedVector<double>(std::__1::unique_ptr<std::__1::vector<double, std::__1::allocator<double> >, std::__1::default_delete<std::__1::vector<double, std::__1::allocator<double> > > >*, int (android::Parcel::*)(double*) const) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel23readNullableTypedVectorIdEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E(void) {
    ALOGD("_ZNK7android6Parcel23readNullableTypedVectorIdEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E() called");
    return 0;
}

/* Demangled: android::BlobCache::Blob::Blob(void const*, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache4BlobC2EPKvmb(void) {
    ALOGD("_ZN7android9BlobCache4BlobC2EPKvmb() called");
    return 0;
}

/* Demangled: utf8_to_utf16_n */
extern "C" __attribute__((visibility("default"))) int utf8_to_utf16_n(void) {
    ALOGD("utf8_to_utf16_n() called");
    return 0;
}

/* Demangled: android::VectorImpl::editItemLocation(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl16editItemLocationEm(void) {
    ALOGD("_ZN7android10VectorImpl16editItemLocationEm() called");
    return 0;
}

/* Demangled: android::Parcel::freeData() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel8freeDataEv(void) {
    ALOGD("_ZN7android6Parcel8freeDataEv() called");
    return 0;
}

/* Demangled: android::Parcel::readCharVector(std::__1::vector<char16_t, std::__1::allocator<char16_t> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel14readCharVectorEPNSt3__16vectorIDsNS1_9allocatorIDsEEEE(void) {
    ALOGD("_ZNK7android6Parcel14readCharVectorEPNSt3__16vectorIDsNS1_9allocatorIDsEEEE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: android::elapsedRealtimeNano() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19elapsedRealtimeNanoEv(void) {
    ALOGD("_ZN7android19elapsedRealtimeNanoEv() called");
    return 0;
}

/* Demangled: __ubsan_handle_alignment_assumption_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_alignment_assumption_minimal_abort(void) {
    ALOGD("__ubsan_handle_alignment_assumption_minimal_abort() called");
    return 0;
}

/* Demangled: android::Parcel::readInt64Vector(std::__1::vector<long, std::__1::allocator<long> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel15readInt64VectorEPNSt3__16vectorIlNS1_9allocatorIlEEEE(void) {
    ALOGD("_ZNK7android6Parcel15readInt64VectorEPNSt3__16vectorIlNS1_9allocatorIlEEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::Response>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper8ResponseEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper8ResponseEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::LogPrinter::LogPrinter(char const*, android_LogPriority, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10LogPrinterC1EPKc19android_LogPriorityS2_b(void) {
    ALOGD("_ZN7android10LogPrinterC1EPKc19android_LogPriorityS2_b() called");
    return 0;
}

/* Demangled: android::String16::setTo(char16_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String165setToEPKDsm(void) {
    ALOGD("_ZN7android8String165setToEPKDsm() called");
    return 0;
}

/* Demangled: android::String16::String16() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1Ev(void) {
    ALOGD("_ZN7android8String16C1Ev() called");
    return 0;
}

/* Demangled: android::Parcel::writeDoubleVector(std::__1::vector<double, std::__1::allocator<double> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel17writeDoubleVectorERKNSt3__16vectorIdNS1_9allocatorIdEEEE(void) {
    ALOGD("_ZN7android6Parcel17writeDoubleVectorERKNSt3__16vectorIdNS1_9allocatorIdEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_builtin_unreachable_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_builtin_unreachable_minimal(void) {
    ALOGD("__ubsan_handle_builtin_unreachable_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_nullability_return_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nullability_return_minimal_abort(void) {
    ALOGD("__ubsan_handle_nullability_return_minimal_abort() called");
    return 0;
}

/* Demangled: __ubsan_handle_type_mismatch_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_type_mismatch_minimal(void) {
    ALOGD("__ubsan_handle_type_mismatch_minimal() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::trackMe(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase12weakref_type7trackMeEbb(void) {
    ALOGD("_ZN7android7RefBase12weakref_type7trackMeEbb() called");
    return 0;
}

/* Demangled: android::WeakMessageHandler::~WeakMessageHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18WeakMessageHandlerD2Ev(void) {
    ALOGD("_ZN7android18WeakMessageHandlerD2Ev() called");
    return 0;
}

/* Demangled: android::Looper::removeMessages(android::sp<android::MessageHandler> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEEi(void) {
    ALOGD("_ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEEi() called");
    return 0;
}

/* Demangled: android::VectorImpl::VectorImpl(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImplC2Emj(void) {
    ALOGD("_ZN7android10VectorImplC2Emj() called");
    return 0;
}

/* Demangled: android::String8::String8(char16_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2EPKDs(void) {
    ALOGD("_ZN7android7String8C2EPKDs() called");
    return 0;
}

/* Demangled: void android::LinearTransform::reduce<unsigned int>(unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15LinearTransform6reduceIjEEvPT_S3_(void) {
    ALOGD("_ZN7android15LinearTransform6reduceIjEEvPT_S3_() called");
    return 0;
}

/* Demangled: android::RefBase::onLastWeakRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase13onLastWeakRefEPKv(void) {
    ALOGD("_ZN7android7RefBase13onLastWeakRefEPKv() called");
    return 0;
}

/* Demangled: android::StopWatch::StopWatch(char const*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9StopWatchC1EPKcij(void) {
    ALOGD("_ZN7android9StopWatchC1EPKcij() called");
    return 0;
}

/* Demangled: __ubsan_handle_implicit_conversion_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_implicit_conversion_minimal_abort(void) {
    ALOGD("__ubsan_handle_implicit_conversion_minimal_abort() called");
    return 0;
}

/* Demangled: android::Parcel::readInt32Vector(std::__1::vector<int, std::__1::allocator<int> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel15readInt32VectorEPNSt3__16vectorIiNS1_9allocatorIiEEEE(void) {
    ALOGD("_ZNK7android6Parcel15readInt32VectorEPNSt3__16vectorIiNS1_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm() called");
    return 0;
}

/* Demangled: android::Looper::getAllowNonCallbacks() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Looper20getAllowNonCallbacksEv(void) {
    ALOGD("_ZNK7android6Looper20getAllowNonCallbacksEv() called");
    return 0;
}

/* Demangled: android::SharedBuffer::release(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SharedBuffer7releaseEj(void) {
    ALOGD("_ZNK7android12SharedBuffer7releaseEj() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::decWeak(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase12weakref_type7decWeakEPKv(void) {
    ALOGD("_ZN7android7RefBase12weakref_type7decWeakEPKv() called");
    return 0;
}

/* Demangled: utf32_to_utf8 */
extern "C" __attribute__((visibility("default"))) int utf32_to_utf8(void) {
    ALOGD("utf32_to_utf8() called");
    return 0;
}

/* Demangled: strncmp16 */
extern "C" __attribute__((visibility("default"))) int strncmp16(void) {
    ALOGD("strncmp16() called");
    return 0;
}

/* Demangled: virtual thunk to android::Thread::~Thread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android6ThreadD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android6ThreadD1Ev() called");
    return 0;
}

/* Demangled: android::VectorImpl::add(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl3addEPKv(void) {
    ALOGD("_ZN7android10VectorImpl3addEPKv() called");
    return 0;
}

/* Demangled: android::Parcel::setDataPosition(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel15setDataPositionEm(void) {
    ALOGD("_ZNK7android6Parcel15setDataPositionEm() called");
    return 0;
}

/* Exported Object: vtable for android::BlobCache */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android9BlobCacheE = NULL;

/* Demangled: __ubsan_handle_divrem_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_divrem_overflow_minimal(void) {
    ALOGD("__ubsan_handle_divrem_overflow_minimal() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: __ubsan_handle_sub_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_sub_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_sub_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: android::String8::String8(char16_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1EPKDs(void) {
    ALOGD("_ZN7android7String8C1EPKDs() called");
    return 0;
}

/* Demangled: android::BlobCache::Blob::getData() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9BlobCache4Blob7getDataEv(void) {
    ALOGD("_ZNK7android9BlobCache4Blob7getDataEv() called");
    return 0;
}

/* Demangled: __ubsan_handle_mul_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_mul_overflow_minimal(void) {
    ALOGD("__ubsan_handle_mul_overflow_minimal() called");
    return 0;
}

/* Demangled: android::String8::unlockBuffer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String812unlockBufferEm(void) {
    ALOGD("_ZN7android7String812unlockBufferEm() called");
    return 0;
}

/* Demangled: android::String8::find(char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String84findEPKcm(void) {
    ALOGD("_ZNK7android7String84findEPKcm() called");
    return 0;
}

/* Demangled: android::String16::contains(char16_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8String168containsEPKDs(void) {
    ALOGD("_ZNK7android8String168containsEPKDs() called");
    return 0;
}

/* Demangled: android::JenkinsHashMixShorts(unsigned int, unsigned short const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20JenkinsHashMixShortsEjPKtm(void) {
    ALOGD("_ZN7android20JenkinsHashMixShortsEjPKtm() called");
    return 0;
}

/* Demangled: android::String8::toLower(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String87toLowerEmm(void) {
    ALOGD("_ZN7android7String87toLowerEmm() called");
    return 0;
}

/* Demangled: utf16_to_utf8_length */
extern "C" __attribute__((visibility("default"))) int utf16_to_utf8_length(void) {
    ALOGD("utf16_to_utf8_length() called");
    return 0;
}

/* Demangled: android::VectorImpl::replaceAt(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl9replaceAtEPKvm(void) {
    ALOGD("_ZN7android10VectorImpl9replaceAtEPKvm() called");
    return 0;
}

/* Demangled: android::Parcel::writeByteArray(unsigned long, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel14writeByteArrayEmPKh(void) {
    ALOGD("_ZN7android6Parcel14writeByteArrayEmPKh() called");
    return 0;
}

/* Demangled: android::Parcel::readUint32(unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel10readUint32EPj(void) {
    ALOGD("_ZNK7android6Parcel10readUint32EPj() called");
    return 0;
}

/* Demangled: android::Looper::Request::initEventItem(epoll_event*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Looper7Request13initEventItemEP11epoll_event(void) {
    ALOGD("_ZNK7android6Looper7Request13initEventItemEP11epoll_event() called");
    return 0;
}

/* Demangled: __ubsan_handle_nonnull_return_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_return_minimal_abort(void) {
    ALOGD("__ubsan_handle_nonnull_return_minimal_abort() called");
    return 0;
}

/* Demangled: android::String8::getUtf32At(unsigned long, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String810getUtf32AtEmPm(void) {
    ALOGD("_ZNK7android7String810getUtf32AtEmPm() called");
    return 0;
}

/* Demangled: android::Thread::~Thread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6ThreadD0Ev(void) {
    ALOGD("_ZN7android6ThreadD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::_indexOrderOf(void const*, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16SortedVectorImpl13_indexOrderOfEPKvPm(void) {
    ALOGD("_ZNK7android16SortedVectorImpl13_indexOrderOfEPKvPm() called");
    return 0;
}

/* Demangled: android::Parcel::setDataCapacity(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel15setDataCapacityEm(void) {
    ALOGD("_ZN7android6Parcel15setDataCapacityEm() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::attemptIncStrong(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase12weakref_type16attemptIncStrongEPKv(void) {
    ALOGD("_ZN7android7RefBase12weakref_type16attemptIncStrongEPKv() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String16::StaticLinkage) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1ENS0_13StaticLinkageE(void) {
    ALOGD("_ZN7android8String16C1ENS0_13StaticLinkageE() called");
    return 0;
}

/* Demangled: android::BlobCache::isCleanable() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9BlobCache11isCleanableEv(void) {
    ALOGD("_ZNK7android9BlobCache11isCleanableEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::Looper::MessageEnvelope> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_6Looper15MessageEnvelopeEEE = NULL;

/* Demangled: android::terminate_string16() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18terminate_string16Ev(void) {
    ALOGD("_ZN7android18terminate_string16Ev() called");
    return 0;
}

/* Demangled: android::Parcel::readDouble() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel10readDoubleEv(void) {
    ALOGD("_ZNK7android6Parcel10readDoubleEv() called");
    return 0;
}

/* Demangled: android::Parcel::getBlobAshmemSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel17getBlobAshmemSizeEv(void) {
    ALOGD("_ZNK7android6Parcel17getBlobAshmemSizeEv() called");
    return 0;
}

/* Demangled: android::Parcel::writeByteVector(std::__1::vector<signed char, std::__1::allocator<signed char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel15writeByteVectorERKNSt3__16vectorIaNS1_9allocatorIaEEEE(void) {
    ALOGD("_ZN7android6Parcel15writeByteVectorERKNSt3__16vectorIaNS1_9allocatorIaEEEE() called");
    return 0;
}

/* Demangled: android::Parcel::readPointer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel11readPointerEv(void) {
    ALOGD("_ZNK7android6Parcel11readPointerEv() called");
    return 0;
}

/* Demangled: android::Parcel::data() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel4dataEv(void) {
    ALOGD("_ZNK7android6Parcel4dataEv() called");
    return 0;
}

/* Demangled: __ubsan_handle_implicit_conversion_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_implicit_conversion_minimal(void) {
    ALOGD("__ubsan_handle_implicit_conversion_minimal() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::~SortedVectorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImplD2Ev(void) {
    ALOGD("_ZN7android16SortedVectorImplD2Ev() called");
    return 0;
}

/* Demangled: android::Parcel::readBoolVector(std::__1::vector<bool, std::__1::allocator<bool> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel14readBoolVectorEPNSt3__16vectorIbNS1_9allocatorIbEEEE(void) {
    ALOGD("_ZNK7android6Parcel14readBoolVectorEPNSt3__16vectorIbNS1_9allocatorIbEEEE() called");
    return 0;
}

/* Demangled: android::String8Printer::printLine(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14String8Printer9printLineEPKc(void) {
    ALOGD("_ZN7android14String8Printer9printLineEPKc() called");
    return 0;
}

/* Demangled: android::SharedBuffer::dealloc(android::SharedBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12SharedBuffer7deallocEPKS0_(void) {
    ALOGD("_ZN7android12SharedBuffer7deallocEPKS0_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVectorImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16SortedVectorImplE = NULL;

/* Demangled: android::RefBase::onIncStrongAttempted(unsigned int, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase20onIncStrongAttemptedEjPKv(void) {
    ALOGD("_ZN7android7RefBase20onIncStrongAttemptedEjPKv() called");
    return 0;
}

/* Demangled: utf8_length */
extern "C" __attribute__((visibility("default"))) int utf8_length(void) {
    ALOGD("utf8_length() called");
    return 0;
}

/* Demangled: android::uptimeMillis() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12uptimeMillisEv(void) {
    ALOGD("_ZN7android12uptimeMillisEv() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper15MessageEnvelopeEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::ProcessCallStack::~ProcessCallStack() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ProcessCallStackD2Ev(void) {
    ALOGD("_ZN7android16ProcessCallStackD2Ev() called");
    return 0;
}

/* Demangled: android::RefBase::renameRefs(unsigned long, android::ReferenceRenamer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase10renameRefsEmRKNS_16ReferenceRenamerE(void) {
    ALOGD("_ZN7android7RefBase10renameRefsEmRKNS_16ReferenceRenamerE() called");
    return 0;
}

/* Demangled: android::String8::unlockBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String812unlockBufferEv(void) {
    ALOGD("_ZN7android7String812unlockBufferEv() called");
    return 0;
}

/* Demangled: android::String8::String8() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2Ev(void) {
    ALOGD("_ZN7android7String8C2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEm() called");
    return 0;
}

/* Demangled: android::VectorImpl::_grow(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl5_growEmm(void) {
    ALOGD("_ZN7android10VectorImpl5_growEmm() called");
    return 0;
}

/* Demangled: android::VectorImpl::sort(int (*)(void const*, void const*, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl4sortEPFiPKvS2_PvES3_(void) {
    ALOGD("_ZN7android10VectorImpl4sortEPFiPKvS2_PvES3_() called");
    return 0;
}

/* Demangled: android::Parcel::write(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel5writeEPKvm(void) {
    ALOGD("_ZN7android6Parcel5writeEPKvm() called");
    return 0;
}

/* Demangled: android::Parcel::readInt32() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel9readInt32Ev(void) {
    ALOGD("_ZNK7android6Parcel9readInt32Ev() called");
    return 0;
}

/* Demangled: android::SimpleLooperCallback::SimpleLooperCallback(int (*)(int, int, void*)) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20SimpleLooperCallbackC2EPFiiiPvE(void) {
    ALOGD("_ZN7android20SimpleLooperCallbackC2EPFiiiPvE() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::Response>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper8ResponseEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper8ResponseEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::String8::String8(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2EPKc(void) {
    ALOGD("_ZN7android7String8C2EPKc() called");
    return 0;
}

/* Demangled: android::Looper::sendMessageAtTime(long, android::sp<android::MessageHandler> const&, android::Message const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper17sendMessageAtTimeElRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE(void) {
    ALOGD("_ZN7android6Looper17sendMessageAtTimeElRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE() called");
    return 0;
}

/* Demangled: android::ProcessCallStack::ProcessCallStack() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ProcessCallStackC1Ev(void) {
    ALOGD("_ZN7android16ProcessCallStackC1Ev() called");
    return 0;
}

/* Demangled: android::CallStack::update(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CallStack6updateEii(void) {
    ALOGD("_ZN7android9CallStack6updateEii() called");
    return 0;
}

/* Exported Object: vtable for android::String8Printer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14String8PrinterE = NULL;

/* Demangled: androidSetThreadName */
extern "C" __attribute__((visibility("default"))) int androidSetThreadName(void) {
    ALOGD("androidSetThreadName() called");
    return 0;
}

/* Demangled: android::VectorImpl::push(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl4pushEPKv(void) {
    ALOGD("_ZN7android10VectorImpl4pushEPKv() called");
    return 0;
}

/* Demangled: android::VectorImpl::itemLocation(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android10VectorImpl12itemLocationEm(void) {
    ALOGD("_ZNK7android10VectorImpl12itemLocationEm() called");
    return 0;
}

/* Demangled: android::Parcel::readByte() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel8readByteEv(void) {
    ALOGD("_ZNK7android6Parcel8readByteEv() called");
    return 0;
}

/* Demangled: android::BlobCache::blob_random() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache11blob_randomEv(void) {
    ALOGD("_ZN7android9BlobCache11blob_randomEv() called");
    return 0;
}

/* Demangled: __ubsan_handle_sub_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_sub_overflow_minimal(void) {
    ALOGD("__ubsan_handle_sub_overflow_minimal() called");
    return 0;
}

/* Demangled: android::RefBase::renameRefId(android::RefBase*, void const*, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase11renameRefIdEPS0_PKvS3_(void) {
    ALOGD("_ZN7android7RefBase11renameRefIdEPS0_PKvS3_() called");
    return 0;
}

/* Demangled: __ubsan_handle_load_invalid_value_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_load_invalid_value_minimal(void) {
    ALOGD("__ubsan_handle_load_invalid_value_minimal() called");
    return 0;
}

/* Demangled: __ubsan_handle_type_mismatch_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_type_mismatch_minimal_abort(void) {
    ALOGD("__ubsan_handle_type_mismatch_minimal_abort() called");
    return 0;
}

/* Demangled: android::NativeHandle::NativeHandle(native_handle*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12NativeHandleC2EP13native_handleb(void) {
    ALOGD("_ZN7android12NativeHandleC2EP13native_handleb() called");
    return 0;
}

/* Exported Object: vtable for android::RefBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7RefBaseE = NULL;

/* Demangled: android::String8::String8(char32_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1EPKDim(void) {
    ALOGD("_ZN7android7String8C1EPKDim() called");
    return 0;
}

/* Demangled: android::String16::String16(char16_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1EPKDs(void) {
    ALOGD("_ZN7android8String16C1EPKDs() called");
    return 0;
}

/* Demangled: android::String8::String8(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1EPKc(void) {
    ALOGD("_ZN7android7String8C1EPKc() called");
    return 0;
}

/* Demangled: android::initialize_string8() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18initialize_string8Ev(void) {
    ALOGD("_ZN7android18initialize_string8Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::SimpleLooperCallback::~SimpleLooperCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android20SimpleLooperCallbackD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android20SimpleLooperCallbackD1Ev() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String16 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1ERKS0_(void) {
    ALOGD("_ZN7android8String16C1ERKS0_() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::indexOf(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16SortedVectorImpl7indexOfEPKv(void) {
    ALOGD("_ZNK7android16SortedVectorImpl7indexOfEPKv() called");
    return 0;
}

/* Demangled: android::Parcel::writeCharVector(std::__1::unique_ptr<std::__1::vector<char16_t, std::__1::allocator<char16_t> >, std::__1::default_delete<std::__1::vector<char16_t, std::__1::allocator<char16_t> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel15writeCharVectorERKNSt3__110unique_ptrINS1_6vectorIDsNS1_9allocatorIDsEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZN7android6Parcel15writeCharVectorERKNSt3__110unique_ptrINS1_6vectorIDsNS1_9allocatorIDsEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: android::Parcel::readByteVector(std::__1::unique_ptr<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::default_delete<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel14readByteVectorEPNSt3__110unique_ptrINS1_6vectorIhNS1_9allocatorIhEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZNK7android6Parcel14readByteVectorEPNSt3__110unique_ptrINS1_6vectorIhNS1_9allocatorIhEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: int android::Parcel::unsafeReadTypedVector<char16_t, char16_t>(std::__1::vector<char16_t, std::__1::allocator<char16_t> >*, int (android::Parcel::*)(char16_t*) const) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel21unsafeReadTypedVectorIDsDsEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E(void) {
    ALOGD("_ZNK7android6Parcel21unsafeReadTypedVectorIDsDsEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E() called");
    return 0;
}

/* Demangled: android::Looper::addFd(int, int, int, int (*)(int, int, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper5addFdEiiiPFiiiPvES1_(void) {
    ALOGD("_ZN7android6Looper5addFdEiiiPFiiiPvES1_() called");
    return 0;
}

/* Demangled: android::ProcessCallStack::log(char const*, android_LogPriority, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16ProcessCallStack3logEPKc19android_LogPriorityS2_(void) {
    ALOGD("_ZNK7android16ProcessCallStack3logEPKc19android_LogPriorityS2_() called");
    return 0;
}

/* Demangled: __ubsan_handle_out_of_bounds_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_out_of_bounds_minimal_abort(void) {
    ALOGD("__ubsan_handle_out_of_bounds_minimal_abort() called");
    return 0;
}

/* Demangled: android::Printer::Printer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7PrinterC2Ev(void) {
    ALOGD("_ZN7android7PrinterC2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Thread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6ThreadE = NULL;

/* Demangled: android::VectorImpl::editArrayImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl13editArrayImplEv(void) {
    ALOGD("_ZN7android10VectorImpl13editArrayImplEv() called");
    return 0;
}

/* Demangled: android::Parcel::writeDoubleVector(std::__1::unique_ptr<std::__1::vector<double, std::__1::allocator<double> >, std::__1::default_delete<std::__1::vector<double, std::__1::allocator<double> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel17writeDoubleVectorERKNSt3__110unique_ptrINS1_6vectorIdNS1_9allocatorIdEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZN7android6Parcel17writeDoubleVectorERKNSt3__110unique_ptrINS1_6vectorIdNS1_9allocatorIdEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: android::Parcel::readIntPtr() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel10readIntPtrEv(void) {
    ALOGD("_ZNK7android6Parcel10readIntPtrEv() called");
    return 0;
}

/* Demangled: android::Parcel::readFloatVector(std::__1::vector<float, std::__1::allocator<float> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel15readFloatVectorEPNSt3__16vectorIfNS1_9allocatorIfEEEE(void) {
    ALOGD("_ZNK7android6Parcel15readFloatVectorEPNSt3__16vectorIfNS1_9allocatorIfEEEE() called");
    return 0;
}

/* Demangled: android::RefBase::RefBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBaseC2Ev(void) {
    ALOGD("_ZN7android7RefBaseC2Ev() called");
    return 0;
}

/* Demangled: android::Parcel::Blob::Blob() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel4BlobC2Ev(void) {
    ALOGD("_ZN7android6Parcel4BlobC2Ev() called");
    return 0;
}

/* Demangled: android::LinearTransform::reduce(int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15LinearTransform6reduceEPiPj(void) {
    ALOGD("_ZN7android15LinearTransform6reduceEPiPj() called");
    return 0;
}

/* Demangled: android::RefBase::forceIncStrong(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase14forceIncStrongEPKv(void) {
    ALOGD("_ZNK7android7RefBase14forceIncStrongEPKv() called");
    return 0;
}

/* Demangled: android::String8::getUtf32(char32_t*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String88getUtf32EPDi(void) {
    ALOGD("_ZNK7android7String88getUtf32EPDi() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::SortedVectorImpl(android::VectorImpl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImplC2ERKNS_10VectorImplE(void) {
    ALOGD("_ZN7android16SortedVectorImplC2ERKNS_10VectorImplE() called");
    return 0;
}

/* Demangled: android::Parcel::writeUint32(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel11writeUint32Ej(void) {
    ALOGD("_ZN7android6Parcel11writeUint32Ej() called");
    return 0;
}

/* Demangled: android::Parcel::setError(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel8setErrorEi(void) {
    ALOGD("_ZN7android6Parcel8setErrorEi() called");
    return 0;
}

/* Demangled: android::BlobCache::CacheEntry::setValue(android::sp<android::BlobCache::Blob> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache10CacheEntry8setValueERKNS_2spINS0_4BlobEEE(void) {
    ALOGD("_ZN7android9BlobCache10CacheEntry8setValueERKNS_2spINS0_4BlobEEE() called");
    return 0;
}

/* Exported Object: vtable for android::Printer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7PrinterE = NULL;

/* Demangled: android::String16::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8String164sizeEv(void) {
    ALOGD("_ZNK7android8String164sizeEv() called");
    return 0;
}

/* Demangled: android::Parcel::initState() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel9initStateEv(void) {
    ALOGD("_ZN7android6Parcel9initStateEv() called");
    return 0;
}

/* Demangled: android::Parcel::readInt64(long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel9readInt64EPl(void) {
    ALOGD("_ZNK7android6Parcel9readInt64EPl() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEEE = NULL;

/* Demangled: android::String8::String8(char16_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1EPKDsm(void) {
    ALOGD("_ZN7android7String8C1EPKDsm() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::remove(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImpl6removeEPKv(void) {
    ALOGD("_ZN7android16SortedVectorImpl6removeEPKv() called");
    return 0;
}

/* Demangled: android::Parcel::writeCString(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel12writeCStringEPKc(void) {
    ALOGD("_ZN7android6Parcel12writeCStringEPKc() called");
    return 0;
}

/* Demangled: android::Parcel::writeInplace(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel12writeInplaceEm(void) {
    ALOGD("_ZN7android6Parcel12writeInplaceEm() called");
    return 0;
}

/* Demangled: android::StopWatch::StopWatch(char const*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9StopWatchC2EPKcij(void) {
    ALOGD("_ZN7android9StopWatchC2EPKcij() called");
    return 0;
}

/* Demangled: strlen16 */
extern "C" __attribute__((visibility("default"))) int strlen16(void) {
    ALOGD("strlen16() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_14default_deleteIS7_EEEENS5_ISA_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_14default_deleteIS7_EEEENS5_ISA_EEE8__appendEm() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::resize(unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE6resizeEmb(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE6resizeEmb() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm() called");
    return 0;
}

/* Demangled: android::Looper::~Looper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6LooperD0Ev(void) {
    ALOGD("_ZN7android6LooperD0Ev() called");
    return 0;
}

/* Demangled: __ubsan_handle_vla_bound_not_positive_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_vla_bound_not_positive_minimal_abort(void) {
    ALOGD("__ubsan_handle_vla_bound_not_positive_minimal_abort() called");
    return 0;
}

/* Demangled: android::NativeHandle::~NativeHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12NativeHandleD0Ev(void) {
    ALOGD("_ZN7android12NativeHandleD0Ev() called");
    return 0;
}

/* Demangled: android::String8::setTo(char32_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String85setToEPKDim(void) {
    ALOGD("_ZN7android7String85setToEPKDim() called");
    return 0;
}

/* Demangled: strcpy16 */
extern "C" __attribute__((visibility("default"))) int strcpy16(void) {
    ALOGD("strcpy16() called");
    return 0;
}

/* Demangled: strstr16 */
extern "C" __attribute__((visibility("default"))) int strstr16(void) {
    ALOGD("strstr16() called");
    return 0;
}

/* Demangled: android::Parcel::readBool(bool*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel8readBoolEPb(void) {
    ALOGD("_ZNK7android6Parcel8readBoolEPb() called");
    return 0;
}

/* Demangled: __ubsan_handle_negate_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_negate_overflow_minimal(void) {
    ALOGD("__ubsan_handle_negate_overflow_minimal() called");
    return 0;
}

/* Demangled: android::Printer::printFormatLine(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7Printer15printFormatLineEPKcz(void) {
    ALOGD("_ZN7android7Printer15printFormatLineEPKcz() called");
    return 0;
}

/* Demangled: android::String16::~String16() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16D1Ev(void) {
    ALOGD("_ZN7android8String16D1Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::String8::append(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String86appendEPKcm(void) {
    ALOGD("_ZN7android7String86appendEPKcm() called");
    return 0;
}

/* Demangled: android::Looper::threadDestructor(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper16threadDestructorEPv(void) {
    ALOGD("_ZN7android6Looper16threadDestructorEPv() called");
    return 0;
}

/* Exported Object: android::gDarwinIsReallyAnnoying */
extern "C" __attribute__((visibility("default"))) void* _ZN7android23gDarwinIsReallyAnnoyingE = NULL;

/* Demangled: android::String16::makeLower() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String169makeLowerEv(void) {
    ALOGD("_ZN7android8String169makeLowerEv() called");
    return 0;
}

/* Demangled: android::Parcel::remove(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel6removeEmm(void) {
    ALOGD("_ZN7android6Parcel6removeEmm() called");
    return 0;
}

/* Demangled: __ubsan_handle_nonnull_arg_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_nonnull_arg_minimal(void) {
    ALOGD("__ubsan_handle_nonnull_arg_minimal() called");
    return 0;
}

/* Demangled: android::RefBase::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase10onFirstRefEv(void) {
    ALOGD("_ZN7android7RefBase10onFirstRefEv() called");
    return 0;
}

/* Demangled: android::VectorImpl::sort(int (*)(void const*, void const*)) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl4sortEPFiPKvS2_E(void) {
    ALOGD("_ZN7android10VectorImpl4sortEPFiPKvS2_E() called");
    return 0;
}

/* Demangled: android::BlobCache::CacheEntry::operator=(android::BlobCache::CacheEntry const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache10CacheEntryaSERKS1_(void) {
    ALOGD("_ZN7android9BlobCache10CacheEntryaSERKS1_() called");
    return 0;
}

/* Demangled: android::BlobCache::Blob::operator<(android::BlobCache::Blob const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9BlobCache4BlobltERKS1_(void) {
    ALOGD("_ZNK7android9BlobCache4BlobltERKS1_() called");
    return 0;
}

/* Demangled: android::CallStack::CallStack(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CallStackC2EPKci(void) {
    ALOGD("_ZN7android9CallStackC2EPKci() called");
    return 0;
}

/* Demangled: android::FdPrinter::FdPrinter(int, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FdPrinterC1EijPKc(void) {
    ALOGD("_ZN7android9FdPrinterC1EijPKc() called");
    return 0;
}

/* Demangled: __ubsan_handle_shift_out_of_bounds_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_shift_out_of_bounds_minimal_abort(void) {
    ALOGD("__ubsan_handle_shift_out_of_bounds_minimal_abort() called");
    return 0;
}

/* Demangled: android::String8::append(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String86appendERKS0_(void) {
    ALOGD("_ZN7android7String86appendERKS0_() called");
    return 0;
}

/* Demangled: android::String8::toLower() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String87toLowerEv(void) {
    ALOGD("_ZN7android7String87toLowerEv() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String16::StaticLinkage) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2ENS0_13StaticLinkageE(void) {
    ALOGD("_ZN7android8String16C2ENS0_13StaticLinkageE() called");
    return 0;
}

/* Demangled: android::WeakMessageHandler::~WeakMessageHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18WeakMessageHandlerD1Ev(void) {
    ALOGD("_ZN7android18WeakMessageHandlerD1Ev() called");
    return 0;
}

/* Demangled: __ubsan_handle_add_overflow_minimal_abort */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_add_overflow_minimal_abort(void) {
    ALOGD("__ubsan_handle_add_overflow_minimal_abort() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::refBase() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase12weakref_type7refBaseEv(void) {
    ALOGD("_ZNK7android7RefBase12weakref_type7refBaseEv() called");
    return 0;
}

/* Demangled: android::Thread::Thread(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6ThreadC2Eb(void) {
    ALOGD("_ZN7android6ThreadC2Eb() called");
    return 0;
}

/* Demangled: android::Parcel::writeCharVector(std::__1::vector<char16_t, std::__1::allocator<char16_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel15writeCharVectorERKNSt3__16vectorIDsNS1_9allocatorIDsEEEE(void) {
    ALOGD("_ZN7android6Parcel15writeCharVectorERKNSt3__16vectorIDsNS1_9allocatorIDsEEEE() called");
    return 0;
}

/* Demangled: android::BlobCache::unflatten(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache9unflattenEPKvm(void) {
    ALOGD("_ZN7android9BlobCache9unflattenEPKvm() called");
    return 0;
}

/* Demangled: android::Looper::removeFd(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper8removeFdEii(void) {
    ALOGD("_ZN7android6Looper8removeFdEii() called");
    return 0;
}

/* Demangled: android::CallStack::CallStack() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CallStackC2Ev(void) {
    ALOGD("_ZN7android9CallStackC2Ev() called");
    return 0;
}

/* Demangled: android::NativeHandle::create(native_handle*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12NativeHandle6createEP13native_handleb(void) {
    ALOGD("_ZN7android12NativeHandle6createEP13native_handleb() called");
    return 0;
}

/* Demangled: android::String8::setTo(char16_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String85setToEPKDsm(void) {
    ALOGD("_ZN7android7String85setToEPKDsm() called");
    return 0;
}

/* Demangled: android::String16::String16(char16_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2EPKDsm(void) {
    ALOGD("_ZN7android8String16C2EPKDsm() called");
    return 0;
}

/* Demangled: android::Parcel::writeBool(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel9writeBoolEb(void) {
    ALOGD("_ZN7android6Parcel9writeBoolEb() called");
    return 0;
}

/* Demangled: android::CallStack::CallStack(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9CallStackC1EPKci(void) {
    ALOGD("_ZN7android9CallStackC1EPKci() called");
    return 0;
}

/* Demangled: android::LogPrinter::LogPrinter(char const*, android_LogPriority, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10LogPrinterC2EPKc19android_LogPriorityS2_b(void) {
    ALOGD("_ZN7android10LogPrinterC2EPKc19android_LogPriorityS2_b() called");
    return 0;
}

/* Demangled: android::RefBase::createWeak(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase10createWeakEPKv(void) {
    ALOGD("_ZNK7android7RefBase10createWeakEPKv() called");
    return 0;
}

/* Demangled: android::String8::convertToResPath() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String816convertToResPathEv(void) {
    ALOGD("_ZN7android7String816convertToResPathEv() called");
    return 0;
}

/* Demangled: android::String16::setTo(android::String16 const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String165setToERKS0_mm(void) {
    ALOGD("_ZN7android8String165setToERKS0_mm() called");
    return 0;
}

/* Demangled: android::VectorImpl::push() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl4pushEv(void) {
    ALOGD("_ZN7android10VectorImpl4pushEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::String8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_7String8EEE = NULL;

/* Demangled: virtual thunk to android::Thread::~Thread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android6ThreadD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android6ThreadD0Ev() called");
    return 0;
}

/* Demangled: android::Thread::requestExitAndWait() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Thread18requestExitAndWaitEv(void) {
    ALOGD("_ZN7android6Thread18requestExitAndWaitEv() called");
    return 0;
}

/* Demangled: android::Parcel::acquireObjects() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel14acquireObjectsEv(void) {
    ALOGD("_ZN7android6Parcel14acquireObjectsEv() called");
    return 0;
}

/* Demangled: android::Parcel::writeFloatVector(std::__1::unique_ptr<std::__1::vector<float, std::__1::allocator<float> >, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel16writeFloatVectorERKNSt3__110unique_ptrINS1_6vectorIfNS1_9allocatorIfEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZN7android6Parcel16writeFloatVectorERKNSt3__110unique_ptrINS1_6vectorIfNS1_9allocatorIfEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: android::Parcel::readInt64() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel9readInt64Ev(void) {
    ALOGD("_ZNK7android6Parcel9readInt64Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<signed char, std::__1::allocator<signed char> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIaNS_9allocatorIaEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIaNS_9allocatorIaEEE8__appendEm() called");
    return 0;
}

/* Exported Object: vtable for android::LogPrinter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10LogPrinterE = NULL;

/* Demangled: android::VectorImpl::resize(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl6resizeEm(void) {
    ALOGD("_ZN7android10VectorImpl6resizeEm() called");
    return 0;
}

/* Demangled: android::Looper::pollAll(int, int*, int*, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper7pollAllEiPiS1_PPv(void) {
    ALOGD("_ZN7android6Looper7pollAllEiPiS1_PPv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_compareEPKvS7_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_compareEPKvS7_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Parcel::readByteVector(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel14readByteVectorEPNSt3__16vectorIhNS1_9allocatorIhEEEE(void) {
    ALOGD("_ZNK7android6Parcel14readByteVectorEPNSt3__16vectorIhNS1_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: android::String16::findFirst(char16_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8String169findFirstEDs(void) {
    ALOGD("_ZNK7android8String169findFirstEDs() called");
    return 0;
}

/* Demangled: android::Thread::exitPending() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Thread11exitPendingEv(void) {
    ALOGD("_ZNK7android6Thread11exitPendingEv() called");
    return 0;
}

/* Demangled: __ubsan_handle_alignment_assumption_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_alignment_assumption_minimal(void) {
    ALOGD("__ubsan_handle_alignment_assumption_minimal() called");
    return 0;
}

/* Demangled: utf8_to_utf16 */
extern "C" __attribute__((visibility("default"))) int utf8_to_utf16(void) {
    ALOGD("utf8_to_utf16() called");
    return 0;
}

/* Demangled: android::Parcel::writeBoolVector(std::__1::unique_ptr<std::__1::vector<bool, std::__1::allocator<bool> >, std::__1::default_delete<std::__1::vector<bool, std::__1::allocator<bool> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel15writeBoolVectorERKNSt3__110unique_ptrINS1_6vectorIbNS1_9allocatorIbEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZN7android6Parcel15writeBoolVectorERKNSt3__110unique_ptrINS1_6vectorIbNS1_9allocatorIbEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: android::Parcel::readUtf8VectorFromUtf16Vector(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel29readUtf8VectorFromUtf16VectorEPNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE(void) {
    ALOGD("_ZNK7android6Parcel29readUtf8VectorFromUtf16VectorEPNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_10unique_ptrINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_14default_deleteIS7_EEEENS5_ISA_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_10unique_ptrINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_14default_deleteIS7_EEEENS5_ISA_EEED2Ev() called");
    return 0;
}

/* Demangled: android::FdPrinter::printLine(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FdPrinter9printLineEPKc(void) {
    ALOGD("_ZN7android9FdPrinter9printLineEPKc() called");
    return 0;
}

/* Demangled: android::String16::setTo(char16_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String165setToEPKDs(void) {
    ALOGD("_ZN7android8String165setToEPKDs() called");
    return 0;
}

/* Demangled: strzcmp16_h_n */
extern "C" __attribute__((visibility("default"))) int strzcmp16_h_n(void) {
    ALOGD("strzcmp16_h_n() called");
    return 0;
}

/* Demangled: android::Parcel::dataAvail() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel9dataAvailEv(void) {
    ALOGD("_ZNK7android6Parcel9dataAvailEv() called");
    return 0;
}

/* Demangled: android::BlobCache::Blob::Blob(void const*, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache4BlobC1EPKvmb(void) {
    ALOGD("_ZN7android9BlobCache4BlobC1EPKvmb() called");
    return 0;
}

/* Demangled: android::String8::~String8() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8D2Ev(void) {
    ALOGD("_ZN7android7String8D2Ev() called");
    return 0;
}

/* Demangled: android::Parcel::writeInt64Vector(std::__1::unique_ptr<std::__1::vector<long, std::__1::allocator<long> >, std::__1::default_delete<std::__1::vector<long, std::__1::allocator<long> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel16writeInt64VectorERKNSt3__110unique_ptrINS1_6vectorIlNS1_9allocatorIlEEEENS1_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZN7android6Parcel16writeInt64VectorERKNSt3__110unique_ptrINS1_6vectorIlNS1_9allocatorIlEEEENS1_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: android::BlobCache::getFlattenedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9BlobCache16getFlattenedSizeEv(void) {
    ALOGD("_ZNK7android9BlobCache16getFlattenedSizeEv() called");
    return 0;
}

/* Demangled: android::VectorImpl::_shrink(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl7_shrinkEmm(void) {
    ALOGD("_ZN7android10VectorImpl7_shrinkEmm() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::~SortedVectorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImplD1Ev(void) {
    ALOGD("_ZN7android16SortedVectorImplD1Ev() called");
    return 0;
}

/* Demangled: android::Parcel::Blob::init(int, void*, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel4Blob4initEiPvmb(void) {
    ALOGD("_ZN7android6Parcel4Blob4initEiPvmb() called");
    return 0;
}

/* Demangled: android::Parcel::readByte(signed char*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel8readByteEPa(void) {
    ALOGD("_ZNK7android6Parcel8readByteEPa() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::VectorImpl::insertAt(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl8insertAtEmm(void) {
    ALOGD("_ZN7android10VectorImpl8insertAtEmm() called");
    return 0;
}

/* Demangled: android::Parcel::continueWrite(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel13continueWriteEm(void) {
    ALOGD("_ZN7android6Parcel13continueWriteEm() called");
    return 0;
}

/* Demangled: android::Parcel::writeUtf8AsUtf16(std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel16writeUtf8AsUtf16ERKNSt3__110unique_ptrINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS8_EEEE(void) {
    ALOGD("_ZN7android6Parcel16writeUtf8AsUtf16ERKNSt3__110unique_ptrINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS8_EEEE() called");
    return 0;
}

/* Demangled: android::BlobCache::Blob::~Blob() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache4BlobD2Ev(void) {
    ALOGD("_ZN7android9BlobCache4BlobD2Ev() called");
    return 0;
}

/* Demangled: __ubsan_handle_invalid_builtin_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_invalid_builtin_minimal(void) {
    ALOGD("__ubsan_handle_invalid_builtin_minimal() called");
    return 0;
}

/* Demangled: android::SharedBuffer::reset(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SharedBuffer5resetEm(void) {
    ALOGD("_ZNK7android12SharedBuffer5resetEm() called");
    return 0;
}

/* Demangled: android::String8::String8(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2EPKcm(void) {
    ALOGD("_ZN7android7String8C2EPKcm() called");
    return 0;
}

/* Demangled: android::ProcessCallStack::~ProcessCallStack() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ProcessCallStackD1Ev(void) {
    ALOGD("_ZN7android16ProcessCallStackD1Ev() called");
    return 0;
}

/* Demangled: __ubsan_handle_float_cast_overflow_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_float_cast_overflow_minimal(void) {
    ALOGD("__ubsan_handle_float_cast_overflow_minimal() called");
    return 0;
}

/* Demangled: android::String8::String8() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1Ev(void) {
    ALOGD("_ZN7android7String8C1Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Parcel::writeBoolVector(std::__1::vector<bool, std::__1::allocator<bool> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel15writeBoolVectorERKNSt3__16vectorIbNS1_9allocatorIbEEEE(void) {
    ALOGD("_ZN7android6Parcel15writeBoolVectorERKNSt3__16vectorIbNS1_9allocatorIbEEEE() called");
    return 0;
}

/* Demangled: int android::Parcel::unsafeReadTypedVector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >(std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >*, int (android::Parcel::*)(std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) const) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel21unsafeReadTypedVectorINSt3__110unique_ptrINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_14default_deleteIS9_EEEESC_EEiPNS2_6vectorIT_NS7_ISE_EEEEMS0_KFiPT0_E(void) {
    ALOGD("_ZNK7android6Parcel21unsafeReadTypedVectorINSt3__110unique_ptrINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_14default_deleteIS9_EEEESC_EEiPNS2_6vectorIT_NS7_ISE_EEEEMS0_KFiPT0_E() called");
    return 0;
}

/* Demangled: android::Parcel::objects() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel7objectsEv(void) {
    ALOGD("_ZNK7android6Parcel7objectsEv() called");
    return 0;
}

/* Demangled: android::LogPrinter::printLine(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10LogPrinter9printLineEPKc(void) {
    ALOGD("_ZN7android10LogPrinter9printLineEPKc() called");
    return 0;
}

/* Demangled: android::String8::appendFormat(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String812appendFormatEPKcz(void) {
    ALOGD("_ZN7android7String812appendFormatEPKcz() called");
    return 0;
}

/* Demangled: android::String8::format(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String86formatEPKcz(void) {
    ALOGD("_ZN7android7String86formatEPKcz() called");
    return 0;
}

/* Demangled: android::Parcel::readDouble(double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel10readDoubleEPd(void) {
    ALOGD("_ZNK7android6Parcel10readDoubleEPd() called");
    return 0;
}

/* Demangled: android::Parcel::dataCapacity() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel12dataCapacityEv(void) {
    ALOGD("_ZNK7android6Parcel12dataCapacityEv() called");
    return 0;
}

/* Demangled: android::LinearTransform::doForwardTransform(long, long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android15LinearTransform18doForwardTransformElPl(void) {
    ALOGD("_ZNK7android15LinearTransform18doForwardTransformElPl() called");
    return 0;
}

/* Exported Object: VTT for android::Thread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android6ThreadE = NULL;

/* Demangled: android::Parcel::getGlobalAllocCount() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel19getGlobalAllocCountEv(void) {
    ALOGD("_ZN7android6Parcel19getGlobalAllocCountEv() called");
    return 0;
}

/* Demangled: android::Looper::initTLSKey() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper10initTLSKeyEv(void) {
    ALOGD("_ZN7android6Looper10initTLSKeyEv() called");
    return 0;
}

/* Demangled: android::Looper::wake() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper4wakeEv(void) {
    ALOGD("_ZN7android6Looper4wakeEv() called");
    return 0;
}

/* Demangled: android::ProcessCallStack::print(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16ProcessCallStack5printERNS_7PrinterE(void) {
    ALOGD("_ZNK7android16ProcessCallStack5printERNS_7PrinterE() called");
    return 0;
}

/* Exported Object: vtable for android::FdPrinter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android9FdPrinterE = NULL;

/* Demangled: android::String8::String8(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1EPKcm(void) {
    ALOGD("_ZN7android7String8C1EPKcm() called");
    return 0;
}

/* Demangled: android::VectorImpl::removeItemsAt(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl13removeItemsAtEmm(void) {
    ALOGD("_ZN7android10VectorImpl13removeItemsAtEmm() called");
    return 0;
}

/* Demangled: android::Parcel::growData(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel8growDataEm(void) {
    ALOGD("_ZN7android6Parcel8growDataEm() called");
    return 0;
}

/* Demangled: android::String8::formatV(char const*, std::__va_list) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String87formatVEPKcSt9__va_list(void) {
    ALOGD("_ZN7android7String87formatVEPKcSt9__va_list() called");
    return 0;
}

/* Demangled: android::String16::append(android::String16 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String166appendERKS0_(void) {
    ALOGD("_ZN7android8String166appendERKS0_() called");
    return 0;
}

/* Demangled: android::Parcel::writeUint64(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel11writeUint64Em(void) {
    ALOGD("_ZN7android6Parcel11writeUint64Em() called");
    return 0;
}

/* Demangled: android::RefBase::getWeakRefs() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase11getWeakRefsEv(void) {
    ALOGD("_ZNK7android7RefBase11getWeakRefsEv() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::merge(android::VectorImpl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImpl5mergeERKNS_10VectorImplE(void) {
    ALOGD("_ZN7android16SortedVectorImpl5mergeERKNS_10VectorImplE() called");
    return 0;
}

/* Demangled: android::Printer::~Printer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7PrinterD2Ev(void) {
    ALOGD("_ZN7android7PrinterD2Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Parcel::Blob::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel4Blob5clearEv(void) {
    ALOGD("_ZN7android6Parcel4Blob5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: android::Looper::pollInner(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper9pollInnerEi(void) {
    ALOGD("_ZN7android6Looper9pollInnerEi() called");
    return 0;
}

/* Demangled: android::RefBase::~RefBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBaseD2Ev(void) {
    ALOGD("_ZN7android7RefBaseD2Ev() called");
    return 0;
}

/* Demangled: android::String8::String8(android::String8::StaticLinkage) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2ENS0_13StaticLinkageE(void) {
    ALOGD("_ZN7android7String8C2ENS0_13StaticLinkageE() called");
    return 0;
}

/* Demangled: android::Parcel::Blob::~Blob() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel4BlobD2Ev(void) {
    ALOGD("_ZN7android6Parcel4BlobD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::SimpleLooperCallback::~SimpleLooperCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android20SimpleLooperCallbackD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android20SimpleLooperCallbackD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::operator=(android::SortedVectorImpl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImplaSERKS0_(void) {
    ALOGD("_ZN7android16SortedVectorImplaSERKS0_() called");
    return 0;
}

/* Demangled: android::VectorImpl::itemSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android10VectorImpl8itemSizeEv(void) {
    ALOGD("_ZNK7android10VectorImpl8itemSizeEv() called");
    return 0;
}

/* Demangled: android::Parcel::restartWrite(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel12restartWriteEm(void) {
    ALOGD("_ZN7android6Parcel12restartWriteEm() called");
    return 0;
}

/* Demangled: android::Looper::Looper(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6LooperC2Eb(void) {
    ALOGD("_ZN7android6LooperC2Eb() called");
    return 0;
}

/* Demangled: android::ProcessCallStack::ProcessCallStack(android::ProcessCallStack const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ProcessCallStackC1ERKS0_(void) {
    ALOGD("_ZN7android16ProcessCallStackC1ERKS0_() called");
    return 0;
}

/* Demangled: __ubsan_handle_shift_out_of_bounds_minimal */
extern "C" __attribute__((visibility("default"))) int __ubsan_handle_shift_out_of_bounds_minimal(void) {
    ALOGD("__ubsan_handle_shift_out_of_bounds_minimal() called");
    return 0;
}

/* Demangled: android::Parcel::readUint64(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel10readUint64EPm(void) {
    ALOGD("_ZNK7android6Parcel10readUint64EPm() called");
    return 0;
}

/* Demangled: android::BlobCache::CacheEntry::CacheEntry() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache10CacheEntryC2Ev(void) {
    ALOGD("_ZN7android9BlobCache10CacheEntryC2Ev() called");
    return 0;
}

/* Demangled: android::BlobCache::CacheEntry::getValue() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9BlobCache10CacheEntry8getValueEv(void) {
    ALOGD("_ZNK7android9BlobCache10CacheEntry8getValueEv() called");
    return 0;
}

/* Demangled: android::Looper::sendMessage(android::sp<android::MessageHandler> const&, android::Message const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper11sendMessageERKNS_2spINS_14MessageHandlerEEERKNS_7MessageE(void) {
    ALOGD("_ZN7android6Looper11sendMessageERKNS_2spINS_14MessageHandlerEEERKNS_7MessageE() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::RefBase::RefBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBaseC1Ev(void) {
    ALOGD("_ZN7android7RefBaseC1Ev() called");
    return 0;
}

/* Demangled: android::Parcel::objectsCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel12objectsCountEv(void) {
    ALOGD("_ZNK7android6Parcel12objectsCountEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper15MessageEnvelopeEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::VectorImpl::finish_vector() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl13finish_vectorEv(void) {
    ALOGD("_ZN7android10VectorImpl13finish_vectorEv() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String16 const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2ERKS0_mm(void) {
    ALOGD("_ZN7android8String16C2ERKS0_mm() called");
    return 0;
}

/* Demangled: androidCreateThreadGetID(int (*)(void*), void*, void**) */
extern "C" __attribute__((visibility("default"))) int _Z24androidCreateThreadGetIDPFiPvES_PS_(void) {
    ALOGD("_Z24androidCreateThreadGetIDPFiPvES_PS_() called");
    return 0;
}

/* Demangled: androidSetThreadPriority */
extern "C" __attribute__((visibility("default"))) int androidSetThreadPriority(void) {
    ALOGD("androidSetThreadPriority() called");
    return 0;
}

/* Demangled: android::Parcel::Blob::Blob() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Parcel4BlobC1Ev(void) {
    ALOGD("_ZN7android6Parcel4BlobC1Ev() called");
    return 0;
}

/* Demangled: android::Parcel::read(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel4readEPvm(void) {
    ALOGD("_ZNK7android6Parcel4readEPvm() called");
    return 0;
}

/* Demangled: android::FdPrinter::FdPrinter(int, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FdPrinterC2EijPKc(void) {
    ALOGD("_ZN7android9FdPrinterC2EijPKc() called");
    return 0;
}

/* Demangled: utf8_to_utf16_no_null_terminator */
extern "C" __attribute__((visibility("default"))) int utf8_to_utf16_no_null_terminator(void) {
    ALOGD("utf8_to_utf16_no_null_terminator() called");
    return 0;
}

/* Demangled: android::Parcel::dataPosition() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel12dataPositionEv(void) {
    ALOGD("_ZNK7android6Parcel12dataPositionEv() called");
    return 0;
}

/* Demangled: android::Parcel::readFloat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel9readFloatEv(void) {
    ALOGD("_ZNK7android6Parcel9readFloatEv() called");
    return 0;
}

/* Demangled: android::BlobCache::CacheEntry::CacheEntry(android::BlobCache::CacheEntry const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9BlobCache10CacheEntryC2ERKS1_(void) {
    ALOGD("_ZN7android9BlobCache10CacheEntryC2ERKS1_() called");
    return 0;
}

/* Demangled: android::String8::appendPath(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String810appendPathEPKc(void) {
    ALOGD("_ZN7android7String810appendPathEPKc() called");
    return 0;
}

/* Demangled: android::Parcel::readDoubleVector(std::__1::vector<double, std::__1::allocator<double> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Parcel16readDoubleVectorEPNSt3__16vectorIdNS1_9allocatorIdEEEE(void) {
    ALOGD("_ZNK7android6Parcel16readDoubleVectorEPNSt3__16vectorIdNS1_9allocatorIdEEEE() called");
    return 0;
}
