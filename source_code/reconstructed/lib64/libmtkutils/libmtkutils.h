/*
 * Reverse-Engineered ABI Specification for: libmtkutils.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkutils.so
 */

#ifndef BEGONIA_RE_LIBMTKUTILS_H
#define BEGONIA_RE_LIBMTKUTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android16SortedVectorImpl5mergeERKS0_ */
/* Demangled: android::SortedVectorImpl::merge(android::SortedVectorImpl const&) */
int _ZN7android16SortedVectorImpl5mergeERKS0_(void);

/* Symbol: _ZN7android6Parcel4Blob7releaseEv */
/* Demangled: android::Parcel::Blob::release() */
int _ZN7android6Parcel4Blob7releaseEv(void);

/* Symbol: _ZNK7android6Parcel15readFloatVectorEPNSt3__110unique_ptrINS1_6vectorIfNS1_9allocatorIfEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::readFloatVector(std::__1::unique_ptr<std::__1::vector<float, std::__1::allocator<float> >, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float> > > >*) const */
int _ZNK7android6Parcel15readFloatVectorEPNSt3__110unique_ptrINS1_6vectorIfNS1_9allocatorIfEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZN7android9StopWatch3lapEv */
/* Demangled: android::StopWatch::lap() */
int _ZN7android9StopWatch3lapEv(void);

/* Symbol: _ZN7android10VectorImplC2ERKS0_ */
/* Demangled: android::VectorImpl::VectorImpl(android::VectorImpl const&) */
int _ZN7android10VectorImplC2ERKS0_(void);

/* Symbol: _ZN7android6ParcelC2Ev */
/* Demangled: android::Parcel::Parcel() */
int _ZN7android6ParcelC2Ev(void);

/* Symbol: _ZNK7android6Parcel10readIntPtrEPl */
/* Demangled: android::Parcel::readIntPtr(long*) const */
int _ZNK7android6Parcel10readIntPtrEPl(void);

/* Symbol: __ubsan_handle_pointer_overflow_minimal_abort */
/* Demangled: __ubsan_handle_pointer_overflow_minimal_abort */
int __ubsan_handle_pointer_overflow_minimal_abort(void);

/* Symbol: _ZNK7android8String1610startsWithERKS0_ */
/* Demangled: android::String16::startsWith(android::String16 const&) const */
int _ZNK7android8String1610startsWithERKS0_(void);

/* Symbol: _ZN7android7String8C2ERKS0_ */
/* Demangled: android::String8::String8(android::String8 const&) */
int _ZN7android7String8C2ERKS0_(void);

/* Symbol: _ZNK7android6Parcel23readNullableTypedVectorIlEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E */
/* Demangled: int android::Parcel::readNullableTypedVector<long>(std::__1::unique_ptr<std::__1::vector<long, std::__1::allocator<long> >, std::__1::default_delete<std::__1::vector<long, std::__1::allocator<long> > > >*, int (android::Parcel::*)(long*) const) const */
int _ZNK7android6Parcel23readNullableTypedVectorIlEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E(void);

/* Symbol: _ZN7android10VectorImplD2Ev */
/* Demangled: android::VectorImpl::~VectorImpl() */
int _ZN7android10VectorImplD2Ev(void);

/* Symbol: _ZNK7android9CallStack3logEPKc19android_LogPriorityS2_ */
/* Demangled: android::CallStack::log(char const*, android_LogPriority, char const*) const */
int _ZNK7android9CallStack3logEPKc19android_LogPriorityS2_(void);

/* Symbol: _ZNK7android12SharedBuffer7acquireEv */
/* Demangled: android::SharedBuffer::acquire() const */
int _ZNK7android12SharedBuffer7acquireEv(void);

/* Symbol: _ZN7android8String16C1EPKcm */
/* Demangled: android::String16::String16(char const*, unsigned long) */
int _ZN7android8String16C1EPKcm(void);

/* Symbol: __ubsan_handle_negate_overflow_minimal_abort */
/* Demangled: __ubsan_handle_negate_overflow_minimal_abort */
int __ubsan_handle_negate_overflow_minimal_abort(void);

/* Symbol: _ZN7android6Parcel16writeInt32VectorERKNSt3__16vectorIiNS1_9allocatorIiEEEE */
/* Demangled: android::Parcel::writeInt32Vector(std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZN7android6Parcel16writeInt32VectorERKNSt3__16vectorIiNS1_9allocatorIiEEEE(void);

/* Symbol: _ZNSt3__16vectorIDsNS_9allocatorIDsEEE8__appendEm */
/* Demangled: std::__1::vector<char16_t, std::__1::allocator<char16_t> >::__append(unsigned long) */
int _ZNSt3__16vectorIDsNS_9allocatorIDsEEE8__appendEm(void);

/* Symbol: _ZN7android9CallStackD2Ev */
/* Demangled: android::CallStack::~CallStack() */
int _ZN7android9CallStackD2Ev(void);

/* Symbol: _ZN7android7String8C1ERKNS_8String16E */
/* Demangled: android::String8::String8(android::String16 const&) */
int _ZN7android7String8C1ERKNS_8String16E(void);

/* Symbol: _ZNK7android9CallStack8toStringEPKc */
/* Demangled: android::CallStack::toString(char const*) const */
int _ZNK7android9CallStack8toStringEPKc(void);

/* Symbol: _ZNK7android12SharedBuffer11attemptEditEv */
/* Demangled: android::SharedBuffer::attemptEdit() const */
int _ZNK7android12SharedBuffer11attemptEditEv(void);

/* Symbol: _ZN7android7String810lockBufferEm */
/* Demangled: android::String8::lockBuffer(unsigned long) */
int _ZN7android7String810lockBufferEm(void);

/* Symbol: _ZNK7android7String88walkPathEPS0_ */
/* Demangled: android::String8::walkPath(android::String8*) const */
int _ZNK7android7String88walkPathEPS0_(void);

/* Symbol: utf8_to_utf32_length */
/* Demangled: utf8_to_utf32_length */
int utf8_to_utf32_length(void);

/* Symbol: _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::BlobCache::CacheEntry>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android6Parcel12writeAlignedImEEiT_ */
/* Demangled: int android::Parcel::writeAligned<unsigned long>(unsigned long) */
int _ZN7android6Parcel12writeAlignedImEEiT_(void);

/* Symbol: _ZN7android6Parcel15writeByteVectorERKNSt3__110unique_ptrINS1_6vectorIhNS1_9allocatorIhEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::writeByteVector(std::__1::unique_ptr<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::default_delete<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > > const&) */
int _ZN7android6Parcel15writeByteVectorERKNSt3__110unique_ptrINS1_6vectorIhNS1_9allocatorIhEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_9BlobCache10CacheEntryEEE */
/* Demangled: vtable for android::SortedVector<android::BlobCache::CacheEntry> */
extern void* _ZTVN7android12SortedVectorINS_9BlobCache10CacheEntryEEE;

/* Symbol: _ZN7android18WeakMessageHandlerD0Ev */
/* Demangled: android::WeakMessageHandler::~WeakMessageHandler() */
int _ZN7android18WeakMessageHandlerD0Ev(void);

/* Symbol: _ZN7android20SimpleLooperCallbackD2Ev */
/* Demangled: android::SimpleLooperCallback::~SimpleLooperCallback() */
int _ZN7android20SimpleLooperCallbackD2Ev(void);

/* Symbol: _ZTTN7android18WeakMessageHandlerE */
/* Demangled: VTT for android::WeakMessageHandler */
extern void* _ZTTN7android18WeakMessageHandlerE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android9CallStackC1Ev */
/* Demangled: android::CallStack::CallStack() */
int _ZN7android9CallStackC1Ev(void);

/* Symbol: _ZNK7android7RefBase12weakref_type12getWeakCountEv */
/* Demangled: android::RefBase::weakref_type::getWeakCount() const */
int _ZNK7android7RefBase12weakref_type12getWeakCountEv(void);

/* Symbol: _ZNK7android6Parcel21unsafeReadTypedVectorIllEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E */
/* Demangled: int android::Parcel::unsafeReadTypedVector<long, long>(std::__1::vector<long, std::__1::allocator<long> >*, int (android::Parcel::*)(long*) const) const */
int _ZNK7android6Parcel21unsafeReadTypedVectorIllEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android6Parcel10appendFromEPKS0_mm */
/* Demangled: android::Parcel::appendFrom(android::Parcel const*, unsigned long, unsigned long) */
int _ZN7android6Parcel10appendFromEPKS0_mm(void);

/* Symbol: _ZN7android6Parcel12writeAlignedIlEEiT_ */
/* Demangled: int android::Parcel::writeAligned<long>(long) */
int _ZN7android6Parcel12writeAlignedIlEEiT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::BlobCache::CacheEntry>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android16ProcessCallStack4sizeEv */
/* Demangled: android::ProcessCallStack::size() const */
int _ZNK7android16ProcessCallStack4sizeEv(void);

/* Symbol: _ZN7android19JenkinsHashMixBytesEjPKhm */
/* Demangled: android::JenkinsHashMixBytes(unsigned int, unsigned char const*, unsigned long) */
int _ZN7android19JenkinsHashMixBytesEjPKhm(void);

/* Symbol: _ZN7android7String86appendEPKc */
/* Demangled: android::String8::append(char const*) */
int _ZN7android7String86appendEPKc(void);

/* Symbol: _ZNK7android12SharedBuffer4editEv */
/* Demangled: android::SharedBuffer::edit() const */
int _ZNK7android12SharedBuffer4editEv(void);

/* Symbol: _ZNK7android7String811getBasePathEv */
/* Demangled: android::String8::getBasePath() const */
int _ZNK7android7String811getBasePathEv(void);

/* Symbol: _ZNK7android7String816getPathExtensionEv */
/* Demangled: android::String8::getPathExtension() const */
int _ZNK7android7String816getPathExtensionEv(void);

/* Symbol: _ZNK7android6Parcel14readByteVectorEPNSt3__16vectorIaNS1_9allocatorIaEEEE */
/* Demangled: android::Parcel::readByteVector(std::__1::vector<signed char, std::__1::allocator<signed char> >*) const */
int _ZNK7android6Parcel14readByteVectorEPNSt3__16vectorIaNS1_9allocatorIaEEEE(void);

/* Symbol: _ZNK7android9BlobCache7flattenEPvm */
/* Demangled: android::BlobCache::flatten(void*, unsigned long) const */
int _ZNK7android9BlobCache7flattenEPvm(void);

/* Symbol: _ZN7android6Looper12pushResponseEiRKNS0_7RequestE */
/* Demangled: android::Looper::pushResponse(int, android::Looper::Request const&) */
int _ZN7android6Looper12pushResponseEiRKNS0_7RequestE(void);

/* Symbol: _ZNK7android6Thread6getTidEv */
/* Demangled: android::Thread::getTid() const */
int _ZNK7android6Thread6getTidEv(void);

/* Symbol: _ZN7android6Parcel10writeInt32Ei */
/* Demangled: android::Parcel::writeInt32(int) */
int _ZN7android6Parcel10writeInt32Ei(void);

/* Symbol: _ZNK7android6Parcel23readNullableTypedVectorINSt3__110unique_ptrINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_14default_deleteIS9_EEEEEEiPNS3_INS2_6vectorIT_NS7_ISE_EEEENSA_ISG_EEEEMS0_KFiPSE_E */
/* Demangled: int android::Parcel::readNullableTypedVector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >(std::__1::unique_ptr<std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >, std::__1::default_delete<std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > > > >*, int (android::Parcel::*)(std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) const) const */
int _ZNK7android6Parcel23readNullableTypedVectorINSt3__110unique_ptrINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_14default_deleteIS9_EEEEEEiPNS3_INS2_6vectorIT_NS7_ISE_EEEENSA_ISG_EEEEMS0_KFiPSE_E(void);

/* Symbol: _ZNK7android16ProcessCallStack13printInternalERNS_7PrinterES2_ */
/* Demangled: android::ProcessCallStack::printInternal(android::Printer&, android::Printer&) const */
int _ZNK7android16ProcessCallStack13printInternalERNS_7PrinterES2_(void);

/* Symbol: _ZN7android17terminate_string8Ev */
/* Demangled: android::terminate_string8() */
int _ZN7android17terminate_string8Ev(void);

/* Symbol: _ZN7android6Parcel16writeInt32VectorERKNSt3__110unique_ptrINS1_6vectorIiNS1_9allocatorIiEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::writeInt32Vector(std::__1::unique_ptr<std::__1::vector<int, std::__1::allocator<int> >, std::__1::default_delete<std::__1::vector<int, std::__1::allocator<int> > > > const&) */
int _ZN7android6Parcel16writeInt32VectorERKNSt3__110unique_ptrINS1_6vectorIiNS1_9allocatorIiEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZN7android9BlobCache10CacheEntryC1ERKNS_2spINS0_4BlobEEES6_ */
/* Demangled: android::BlobCache::CacheEntry::CacheEntry(android::sp<android::BlobCache::Blob> const&, android::sp<android::BlobCache::Blob> const&) */
int _ZN7android9BlobCache10CacheEntryC1ERKNS_2spINS0_4BlobEEES6_(void);

/* Symbol: _ZN7android6Looper26scheduleEpollRebuildLockedEv */
/* Demangled: android::Looper::scheduleEpollRebuildLocked() */
int _ZN7android6Looper26scheduleEpollRebuildLockedEv(void);

/* Symbol: _ZNK7android6VectorINS_6Looper8ResponseEE12do_constructEPvm */
/* Demangled: android::Vector<android::Looper::Response>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_6Looper8ResponseEE12do_constructEPvm(void);

/* Symbol: _ZNK7android16ProcessCallStack8toStringEPKc */
/* Demangled: android::ProcessCallStack::toString(char const*) const */
int _ZNK7android16ProcessCallStack8toStringEPKc(void);

/* Symbol: _ZTVN7android13PrefixPrinterE */
/* Demangled: vtable for android::PrefixPrinter */
extern void* _ZTVN7android13PrefixPrinterE;

/* Symbol: utf32_to_utf8_length */
/* Demangled: utf32_to_utf8_length */
int utf32_to_utf8_length(void);

/* Symbol: strnlen16 */
/* Demangled: strnlen16 */
int strnlen16(void);

/* Symbol: _ZN7android10VectorImpl11setCapacityEm */
/* Demangled: android::VectorImpl::setCapacity(unsigned long) */
int _ZN7android10VectorImpl11setCapacityEm(void);

/* Symbol: _ZN7android6Parcel12writePointerEm */
/* Demangled: android::Parcel::writePointer(unsigned long) */
int _ZN7android6Parcel12writePointerEm(void);

/* Symbol: _ZN7android7String85setToEPKcm */
/* Demangled: android::String8::setTo(char const*, unsigned long) */
int _ZN7android7String85setToEPKcm(void);

/* Symbol: strncpy16 */
/* Demangled: strncpy16 */
int strncpy16(void);

/* Symbol: _ZTVN7android10VectorImplE */
/* Demangled: vtable for android::VectorImpl */
extern void* _ZTVN7android10VectorImplE;

/* Symbol: _ZN7android6Parcel7setDataEPKhm */
/* Demangled: android::Parcel::setData(unsigned char const*, unsigned long) */
int _ZN7android6Parcel7setDataEPKhm(void);

/* Symbol: _ZNK7android6VectorINS_6Looper8ResponseEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::Looper::Response>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_6Looper8ResponseEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android7String8D1Ev */
/* Demangled: android::String8::~String8() */
int _ZN7android7String8D1Ev(void);

/* Symbol: _ZNK7android7RefBase12weakref_type9printRefsEv */
/* Demangled: android::RefBase::weakref_type::printRefs() const */
int _ZNK7android7RefBase12weakref_type9printRefsEv(void);

/* Symbol: _ZN7android7String87toUpperEv */
/* Demangled: android::String8::toUpper() */
int _ZN7android7String87toUpperEv(void);

/* Symbol: _ZN7android20SimpleLooperCallback11handleEventEiiPv */
/* Demangled: android::SimpleLooperCallback::handleEvent(int, int, void*) */
int _ZN7android20SimpleLooperCallback11handleEventEiiPv(void);

/* Symbol: _ZN7android20SimpleLooperCallbackC1EPFiiiPvE */
/* Demangled: android::SimpleLooperCallback::SimpleLooperCallback(int (*)(int, int, void*)) */
int _ZN7android20SimpleLooperCallbackC1EPFiiiPvE(void);

/* Symbol: _ZN7android6Looper7prepareEi */
/* Demangled: android::Looper::prepare(int) */
int _ZN7android6Looper7prepareEi(void);

/* Symbol: __ubsan_handle_cfi_check_fail_minimal_abort */
/* Demangled: __ubsan_handle_cfi_check_fail_minimal_abort */
int __ubsan_handle_cfi_check_fail_minimal_abort(void);

/* Symbol: _ZN7android16SortedVectorImplD0Ev */
/* Demangled: android::SortedVectorImpl::~SortedVectorImpl() */
int _ZN7android16SortedVectorImplD0Ev(void);

/* Symbol: _ZN7android6Parcel12writeAlignedIjEEiT_ */
/* Demangled: int android::Parcel::writeAligned<unsigned int>(unsigned int) */
int _ZN7android6Parcel12writeAlignedIjEEiT_(void);

/* Symbol: _ZN7android6Parcel14releaseObjectsEv */
/* Demangled: android::Parcel::releaseObjects() */
int _ZN7android6Parcel14releaseObjectsEv(void);

/* Symbol: _ZNK7android6Parcel11readPointerEPm */
/* Demangled: android::Parcel::readPointer(unsigned long*) const */
int _ZNK7android6Parcel11readPointerEPm(void);

/* Symbol: _ZNK7android6Parcel14readBoolVectorEPNSt3__110unique_ptrINS1_6vectorIbNS1_9allocatorIbEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::readBoolVector(std::__1::unique_ptr<std::__1::vector<bool, std::__1::allocator<bool> >, std::__1::default_delete<std::__1::vector<bool, std::__1::allocator<bool> > > >*) const */
int _ZNK7android6Parcel14readBoolVectorEPNSt3__110unique_ptrINS1_6vectorIbNS1_9allocatorIbEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZNK7android6Parcel8readCharEv */
/* Demangled: android::Parcel::readChar() const */
int _ZNK7android6Parcel8readCharEv(void);

/* Symbol: androidGetThreadId */
/* Demangled: androidGetThreadId */
int androidGetThreadId(void);

/* Symbol: _ZN7android9BlobCache4BlobD1Ev */
/* Demangled: android::BlobCache::Blob::~Blob() */
int _ZN7android9BlobCache4BlobD1Ev(void);

/* Symbol: _ZNK7android9BlobCache10CacheEntry6getKeyEv */
/* Demangled: android::BlobCache::CacheEntry::getKey() const */
int _ZNK7android9BlobCache10CacheEntry6getKeyEv(void);

/* Symbol: _ZN7android9StopWatchD2Ev */
/* Demangled: android::StopWatch::~StopWatch() */
int _ZN7android9StopWatchD2Ev(void);

/* Symbol: toMillisecondTimeoutDelay */
/* Demangled: toMillisecondTimeoutDelay */
int toMillisecondTimeoutDelay(void);

/* Symbol: _ZNK7android6Parcel17getOpenAshmemSizeEv */
/* Demangled: android::Parcel::getOpenAshmemSize() const */
int _ZNK7android6Parcel17getOpenAshmemSizeEv(void);

/* Symbol: _ZN7android15elapsedRealtimeEv */
/* Demangled: android::elapsedRealtime() */
int _ZN7android15elapsedRealtimeEv(void);

/* Symbol: _ZNK7android6Parcel12readString16Ev */
/* Demangled: android::Parcel::readString16() const */
int _ZNK7android6Parcel12readString16Ev(void);

/* Symbol: _ZNK7android6Parcel14readByteVectorEPNSt3__110unique_ptrINS1_6vectorIaNS1_9allocatorIaEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::readByteVector(std::__1::unique_ptr<std::__1::vector<signed char, std::__1::allocator<signed char> >, std::__1::default_delete<std::__1::vector<signed char, std::__1::allocator<signed char> > > >*) const */
int _ZNK7android6Parcel14readByteVectorEPNSt3__110unique_ptrINS1_6vectorIaNS1_9allocatorIaEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZN7android16ProcessCallStackC2ERKS0_ */
/* Demangled: android::ProcessCallStack::ProcessCallStack(android::ProcessCallStack const&) */
int _ZN7android16ProcessCallStackC2ERKS0_(void);

/* Symbol: _ZN7android8String165setToERKS0_ */
/* Demangled: android::String16::setTo(android::String16 const&) */
int _ZN7android8String165setToERKS0_(void);

/* Symbol: _ZN7android8String16C1EPKDsm */
/* Demangled: android::String16::String16(char16_t const*, unsigned long) */
int _ZN7android8String16C1EPKDsm(void);

/* Symbol: _ZN7android6Thread11_threadLoopEPv */
/* Demangled: android::Thread::_threadLoop(void*) */
int _ZN7android6Thread11_threadLoopEPv(void);

/* Symbol: _ZN7android6Parcel11writeDoubleEd */
/* Demangled: android::Parcel::writeDouble(double) */
int _ZN7android6Parcel11writeDoubleEd(void);

/* Symbol: _ZN7android6Parcel12writeAlignedIiEEiT_ */
/* Demangled: int android::Parcel::writeAligned<int>(int) */
int _ZN7android6Parcel12writeAlignedIiEEiT_(void);

/* Symbol: _ZNK7android6Parcel19readString16InplaceEPm */
/* Demangled: android::Parcel::readString16Inplace(unsigned long*) const */
int _ZNK7android6Parcel19readString16InplaceEPm(void);

/* Symbol: _ZTTN7android20SimpleLooperCallbackE */
/* Demangled: VTT for android::SimpleLooperCallback */
extern void* _ZTTN7android20SimpleLooperCallbackE;

/* Symbol: strlen32 */
/* Demangled: strlen32 */
int strlen32(void);

/* Symbol: _ZN7android6ThreadD2Ev */
/* Demangled: android::Thread::~Thread() */
int _ZN7android6ThreadD2Ev(void);

/* Symbol: _ZNK7android6Parcel21unsafeReadTypedVectorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES8_EEiPNS2_6vectorIT_NS6_ISA_EEEEMS0_KFiPT0_E */
/* Demangled: int android::Parcel::unsafeReadTypedVector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*, int (android::Parcel::*)(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const) const */
int _ZNK7android6Parcel21unsafeReadTypedVectorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES8_EEiPNS2_6vectorIT_NS6_ISA_EEEEMS0_KFiPT0_E(void);

/* Symbol: _ZN7android10VectorImpl8insertAtEPKvmm */
/* Demangled: android::VectorImpl::insertAt(void const*, unsigned long, unsigned long) */
int _ZN7android10VectorImpl8insertAtEPKvmm(void);

/* Symbol: _ZNK7android6Parcel15readInt64VectorEPNSt3__110unique_ptrINS1_6vectorIlNS1_9allocatorIlEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::readInt64Vector(std::__1::unique_ptr<std::__1::vector<long, std::__1::allocator<long> >, std::__1::default_delete<std::__1::vector<long, std::__1::allocator<long> > > >*) const */
int _ZNK7android6Parcel15readInt64VectorEPNSt3__110unique_ptrINS1_6vectorIlNS1_9allocatorIlEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZTVN7android20SimpleLooperCallbackE */
/* Demangled: vtable for android::SimpleLooperCallback */
extern void* _ZTVN7android20SimpleLooperCallbackE;

/* Symbol: __ubsan_handle_add_overflow_minimal */
/* Demangled: __ubsan_handle_add_overflow_minimal */
int __ubsan_handle_add_overflow_minimal(void);

/* Symbol: _ZN7android7PrinterD1Ev */
/* Demangled: android::Printer::~Printer() */
int _ZN7android7PrinterD1Ev(void);

/* Symbol: androidCreateThreadEtc */
/* Demangled: androidCreateThreadEtc */
int androidCreateThreadEtc(void);

/* Symbol: _ZN7android6Parcel11setDataSizeEm */
/* Demangled: android::Parcel::setDataSize(unsigned long) */
int _ZN7android6Parcel11setDataSizeEm(void);

/* Symbol: _ZNK7android6Parcel10errorCheckEv */
/* Demangled: android::Parcel::errorCheck() const */
int _ZNK7android6Parcel10errorCheckEv(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE8__appendEm */
/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__append(unsigned long) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE8__appendEm(void);

/* Symbol: _ZNK7android9BlobCache10CacheEntryltERKS1_ */
/* Demangled: android::BlobCache::CacheEntry::operator<(android::BlobCache::CacheEntry const&) const */
int _ZNK7android9BlobCache10CacheEntryltERKS1_(void);

/* Symbol: _ZN7android7RefBaseD1Ev */
/* Demangled: android::RefBase::~RefBase() */
int _ZN7android7RefBaseD1Ev(void);

/* Symbol: _ZN7android25gDarwinCantLoadAllObjectsE */
/* Demangled: android::gDarwinCantLoadAllObjects */
extern void* _ZN7android25gDarwinCantLoadAllObjectsE;

/* Symbol: _ZN7android8String16C2EPKDs */
/* Demangled: android::String16::String16(char16_t const*) */
int _ZN7android8String16C2EPKDs(void);

/* Symbol: _ZN7android6Parcel28writeUtf8VectorAsUtf16VectorERKNSt3__110unique_ptrINS1_6vectorINS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS9_EEEENS7_ISC_EEEENSA_ISE_EEEE */
/* Demangled: android::Parcel::writeUtf8VectorAsUtf16Vector(std::__1::unique_ptr<std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >, std::__1::default_delete<std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > > > > const&) */
int _ZN7android6Parcel28writeUtf8VectorAsUtf16VectorERKNSt3__110unique_ptrINS1_6vectorINS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS9_EEEENS7_ISC_EEEENSA_ISE_EEEE(void);

/* Symbol: _ZN7android9BlobCache5cleanEv */
/* Demangled: android::BlobCache::clean() */
int _ZN7android9BlobCache5cleanEv(void);

/* Symbol: _ZN7android7String87toUpperEmm */
/* Demangled: android::String8::toUpper(unsigned long, unsigned long) */
int _ZN7android7String87toUpperEmm(void);

/* Symbol: _ZN7android6Parcel4BlobD1Ev */
/* Demangled: android::Parcel::Blob::~Blob() */
int _ZN7android6Parcel4BlobD1Ev(void);

/* Symbol: _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_ */
/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void);

/* Symbol: _ZN7android7RefBase15onLastStrongRefEPKv */
/* Demangled: android::RefBase::onLastStrongRef(void const*) */
int _ZN7android7RefBase15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android19initialize_string16Ev */
/* Demangled: android::initialize_string16() */
int _ZN7android19initialize_string16Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::BlobCache::CacheEntry>::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE10do_destroyEPvm(void);

/* Symbol: _ZN7android6LooperC1Eb */
/* Demangled: android::Looper::Looper(bool) */
int _ZN7android6LooperC1Eb(void);

/* Symbol: _ZNK7android6Parcel10readUint32Ev */
/* Demangled: android::Parcel::readUint32() const */
int _ZNK7android6Parcel10readUint32Ev(void);

/* Symbol: _ZN7android9BlobCache10CacheEntryC1Ev */
/* Demangled: android::BlobCache::CacheEntry::CacheEntry() */
int _ZN7android9BlobCache10CacheEntryC1Ev(void);

/* Symbol: __ubsan_handle_function_type_mismatch_minimal */
/* Demangled: __ubsan_handle_function_type_mismatch_minimal */
int __ubsan_handle_function_type_mismatch_minimal(void);

/* Symbol: _ZNK7android6Parcel29readUtf8VectorFromUtf16VectorEPNSt3__110unique_ptrINS1_6vectorINS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS9_EEEENS7_ISC_EEEENSA_ISE_EEEE */
/* Demangled: android::Parcel::readUtf8VectorFromUtf16Vector(std::__1::unique_ptr<std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >, std::__1::default_delete<std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > > > >*) const */
int _ZNK7android6Parcel29readUtf8VectorFromUtf16VectorEPNSt3__110unique_ptrINS1_6vectorINS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS9_EEEENS7_ISC_EEEENSA_ISE_EEEE(void);

/* Symbol: _ZN7android6Looper6awokenEv */
/* Demangled: android::Looper::awoken() */
int _ZN7android6Looper6awokenEv(void);

/* Symbol: __ubsan_handle_missing_return_minimal */
/* Demangled: __ubsan_handle_missing_return_minimal */
int __ubsan_handle_missing_return_minimal(void);

/* Symbol: _ZN7android10VectorImpl5clearEv */
/* Demangled: android::VectorImpl::clear() */
int _ZN7android10VectorImpl5clearEv(void);

/* Symbol: systemTime */
/* Demangled: systemTime */
int systemTime(void);

/* Symbol: _ZN7android6Parcel18getGlobalAllocSizeEv */
/* Demangled: android::Parcel::getGlobalAllocSize() */
int _ZN7android6Parcel18getGlobalAllocSizeEv(void);

/* Symbol: _ZN7android6Parcel28writeUtf8VectorAsUtf16VectorERKNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE */
/* Demangled: android::Parcel::writeUtf8VectorAsUtf16Vector(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN7android6Parcel28writeUtf8VectorAsUtf16VectorERKNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE(void);

/* Symbol: _ZN7android6Parcel9writeByteEa */
/* Demangled: android::Parcel::writeByte(signed char) */
int _ZN7android6Parcel9writeByteEa(void);

/* Symbol: _ZN7android6ParcelD2Ev */
/* Demangled: android::Parcel::~Parcel() */
int _ZN7android6ParcelD2Ev(void);

/* Symbol: _ZNK7android6Parcel23readNullableTypedVectorIiEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E */
/* Demangled: int android::Parcel::readNullableTypedVector<int>(std::__1::unique_ptr<std::__1::vector<int, std::__1::allocator<int> >, std::__1::default_delete<std::__1::vector<int, std::__1::allocator<int> > > >*, int (android::Parcel::*)(int*) const) const */
int _ZNK7android6Parcel23readNullableTypedVectorIiEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E(void);

/* Symbol: _ZTv0_n24_N7android18WeakMessageHandlerD1Ev */
/* Demangled: virtual thunk to android::WeakMessageHandler::~WeakMessageHandler() */
int _ZTv0_n24_N7android18WeakMessageHandlerD1Ev(void);

/* Symbol: _ZN7android7String813appendFormatVEPKcSt9__va_list */
/* Demangled: android::String8::appendFormatV(char const*, std::__va_list) */
int _ZN7android7String813appendFormatVEPKcSt9__va_list(void);

/* Symbol: _ZN7android10VectorImpl12appendVectorERKS0_ */
/* Demangled: android::VectorImpl::appendVector(android::VectorImpl const&) */
int _ZN7android10VectorImpl12appendVectorERKS0_(void);

/* Symbol: _ZN7android6Parcel12writeAlignedIfEEiT_ */
/* Demangled: int android::Parcel::writeAligned<float>(float) */
int _ZN7android6Parcel12writeAlignedIfEEiT_(void);

/* Symbol: _ZN7android7String85clearEv */
/* Demangled: android::String8::clear() */
int _ZN7android7String85clearEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_destroyEPvm(void);

/* Symbol: __ubsan_handle_nonnull_arg_minimal_abort */
/* Demangled: __ubsan_handle_nonnull_arg_minimal_abort */
int __ubsan_handle_nonnull_arg_minimal_abort(void);

/* Symbol: _ZN7android9StopWatch5resetEv */
/* Demangled: android::StopWatch::reset() */
int _ZN7android9StopWatch5resetEv(void);

/* Symbol: _ZN7android6ParcelC1Ev */
/* Demangled: android::Parcel::Parcel() */
int _ZN7android6ParcelC1Ev(void);

/* Symbol: _ZNK7android7String810getPathDirEv */
/* Demangled: android::String8::getPathDir() const */
int _ZNK7android7String810getPathDirEv(void);

/* Symbol: _ZN7android16SortedVectorImpl3addEPKv */
/* Demangled: android::SortedVectorImpl::add(void const*) */
int _ZN7android16SortedVectorImpl3addEPKv(void);

/* Symbol: _ZNK7android6Parcel11readInplaceEm */
/* Demangled: android::Parcel::readInplace(unsigned long) const */
int _ZNK7android6Parcel11readInplaceEm(void);

/* Symbol: _ZN7android6Looper8removeFdEi */
/* Demangled: android::Looper::removeFd(int) */
int _ZN7android6Looper8removeFdEi(void);

/* Symbol: _ZTVN7android6VectorINS_6Looper8ResponseEEE */
/* Demangled: vtable for android::Vector<android::Looper::Response> */
extern void* _ZTVN7android6VectorINS_6Looper8ResponseEEE;

/* Symbol: _ZTVN7android12NativeHandleE */
/* Demangled: vtable for android::NativeHandle */
extern void* _ZTVN7android12NativeHandleE;

/* Symbol: utf8_to_utf32 */
/* Demangled: utf8_to_utf32 */
int utf8_to_utf32(void);

/* Symbol: __ubsan_handle_out_of_bounds_minimal */
/* Demangled: __ubsan_handle_out_of_bounds_minimal */
int __ubsan_handle_out_of_bounds_minimal(void);

/* Symbol: _ZNK7android9CallStack5printERNS_7PrinterE */
/* Demangled: android::CallStack::print(android::Printer&) const */
int _ZNK7android9CallStack5printERNS_7PrinterE(void);

/* Symbol: _ZNK7android7RefBase14getStrongCountEv */
/* Demangled: android::RefBase::getStrongCount() const */
int _ZNK7android7RefBase14getStrongCountEv(void);

/* Symbol: _ZN7android10VectorImplD1Ev */
/* Demangled: android::VectorImpl::~VectorImpl() */
int _ZN7android10VectorImplD1Ev(void);

/* Symbol: strcmp16 */
/* Demangled: strcmp16 */
int strcmp16(void);

/* Symbol: _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android9CallStackD1Ev */
/* Demangled: android::CallStack::~CallStack() */
int _ZN7android9CallStackD1Ev(void);

/* Symbol: _ZN7android7String8C1ENS0_13StaticLinkageE */
/* Demangled: android::String8::String8(android::String8::StaticLinkage) */
int _ZN7android7String8C1ENS0_13StaticLinkageE(void);

/* Symbol: _ZN7android6Parcel10writeInt64El */
/* Demangled: android::Parcel::writeInt64(long) */
int _ZN7android6Parcel10writeInt64El(void);

/* Symbol: _ZN7android6Parcel12writeAlignedIdEEiT_ */
/* Demangled: int android::Parcel::writeAligned<double>(double) */
int _ZN7android6Parcel12writeAlignedIdEEiT_(void);

/* Symbol: _ZN7android12NativeHandleC1EP13native_handleb */
/* Demangled: android::NativeHandle::NativeHandle(native_handle*, bool) */
int _ZN7android12NativeHandleC1EP13native_handleb(void);

/* Symbol: _ZNK7android8String168findLastEDs */
/* Demangled: android::String16::findLast(char16_t) const */
int _ZNK7android8String168findLastEDs(void);

/* Symbol: _ZN7android15LinearTransform6reduceImEEvPT_S3_ */
/* Demangled: void android::LinearTransform::reduce<unsigned long>(unsigned long*, unsigned long*) */
int _ZN7android15LinearTransform6reduceImEEvPT_S3_(void);

/* Symbol: _ZN7android10VectorImpl15release_storageEv */
/* Demangled: android::VectorImpl::release_storage() */
int _ZN7android10VectorImpl15release_storageEv(void);

/* Symbol: _ZN7android20SimpleLooperCallbackD1Ev */
/* Demangled: android::SimpleLooperCallback::~SimpleLooperCallback() */
int _ZN7android20SimpleLooperCallbackD1Ev(void);

/* Symbol: _ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEE */
/* Demangled: android::Looper::removeMessages(android::sp<android::MessageHandler> const&) */
int _ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEE(void);

/* Symbol: _ZTCN7android18WeakMessageHandlerE0_NS_14MessageHandlerE */
/* Demangled: construction vtable for android::MessageHandler-in-android::WeakMessageHandler */
extern void* _ZTCN7android18WeakMessageHandlerE0_NS_14MessageHandlerE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE7do_copyEPvPKvm(void);

/* Symbol: __ubsan_handle_nullability_arg_minimal_abort */
/* Demangled: __ubsan_handle_nullability_arg_minimal_abort */
int __ubsan_handle_nullability_arg_minimal_abort(void);

/* Symbol: _ZNK7android12SharedBuffer10editResizeEm */
/* Demangled: android::SharedBuffer::editResize(unsigned long) const */
int _ZNK7android12SharedBuffer10editResizeEm(void);

/* Symbol: _ZNK7android6Parcel16readDoubleVectorEPNSt3__110unique_ptrINS1_6vectorIdNS1_9allocatorIdEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::readDoubleVector(std::__1::unique_ptr<std::__1::vector<double, std::__1::allocator<double> >, std::__1::default_delete<std::__1::vector<double, std::__1::allocator<double> > > >*) const */
int _ZNK7android6Parcel16readDoubleVectorEPNSt3__110unique_ptrINS1_6vectorIdNS1_9allocatorIdEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZN7android6LooperD2Ev */
/* Demangled: android::Looper::~Looper() */
int _ZN7android6LooperD2Ev(void);

/* Symbol: _ZNK7android6VectorINS_6Looper8ResponseEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::Looper::Response>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_6Looper8ResponseEE16do_move_backwardEPvPKvm(void);

/* Symbol: __ubsan_handle_cfi_check_fail_minimal */
/* Demangled: __ubsan_handle_cfi_check_fail_minimal */
int __ubsan_handle_cfi_check_fail_minimal(void);

/* Symbol: _ZN7android12NativeHandleD2Ev */
/* Demangled: android::NativeHandle::~NativeHandle() */
int _ZN7android12NativeHandleD2Ev(void);

/* Symbol: strzcmp16 */
/* Demangled: strzcmp16 */
int strzcmp16(void);

/* Symbol: _ZN7android10VectorImpl13insertArrayAtEPKvmm */
/* Demangled: android::VectorImpl::insertArrayAt(void const*, unsigned long, unsigned long) */
int _ZN7android10VectorImpl13insertArrayAtEPKvmm(void);

/* Symbol: _ZN7android10VectorImpl9replaceAtEm */
/* Demangled: android::VectorImpl::replaceAt(unsigned long) */
int _ZN7android10VectorImpl9replaceAtEm(void);

/* Symbol: _ZNK7android6Parcel8readBoolEv */
/* Demangled: android::Parcel::readBool() const */
int _ZNK7android6Parcel8readBoolEv(void);

/* Symbol: _ZN7android6Parcel14freeDataNoInitEv */
/* Demangled: android::Parcel::freeDataNoInit() */
int _ZN7android6Parcel14freeDataNoInitEv(void);

/* Symbol: _ZN7android9BlobCache10CacheEntryC1ERKS1_ */
/* Demangled: android::BlobCache::CacheEntry::CacheEntry(android::BlobCache::CacheEntry const&) */
int _ZN7android9BlobCache10CacheEntryC1ERKS1_(void);

/* Symbol: _ZNK7android9BlobCache4Blob7getSizeEv */
/* Demangled: android::BlobCache::Blob::getSize() const */
int _ZNK7android9BlobCache4Blob7getSizeEv(void);

/* Symbol: _ZN7android6Looper12getForThreadEv */
/* Demangled: android::Looper::getForThread() */
int _ZN7android6Looper12getForThreadEv(void);

/* Symbol: _ZN7android10VectorImplaSERKS0_ */
/* Demangled: android::VectorImpl::operator=(android::VectorImpl const&) */
int _ZN7android10VectorImplaSERKS0_(void);

/* Symbol: _ZN7android16SortedVectorImplC2Emj */
/* Demangled: android::SortedVectorImpl::SortedVectorImpl(unsigned long, unsigned int) */
int _ZN7android16SortedVectorImplC2Emj(void);

/* Symbol: _ZNK7android16SortedVectorImpl7orderOfEPKv */
/* Demangled: android::SortedVectorImpl::orderOf(void const*) const */
int _ZNK7android16SortedVectorImpl7orderOfEPKv(void);

/* Symbol: _ZN7android6Parcel16writeFloatVectorERKNSt3__16vectorIfNS1_9allocatorIfEEEE */
/* Demangled: android::Parcel::writeFloatVector(std::__1::vector<float, std::__1::allocator<float> > const&) */
int _ZN7android6Parcel16writeFloatVectorERKNSt3__16vectorIfNS1_9allocatorIfEEEE(void);

/* Symbol: _ZN7android6Parcel16writeUtf8AsUtf16ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: android::Parcel::writeUtf8AsUtf16(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android6Parcel16writeUtf8AsUtf16ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN7android13PrefixPrinterC2ERNS_7PrinterEPKc */
/* Demangled: android::PrefixPrinter::PrefixPrinter(android::Printer&, char const*) */
int _ZN7android13PrefixPrinterC2ERNS_7PrinterEPKc(void);

/* Symbol: _ZNK7android7String86lengthEv */
/* Demangled: android::String8::length() const */
int _ZNK7android7String86lengthEv(void);

/* Symbol: androidCreateThread */
/* Demangled: androidCreateThread */
int androidCreateThread(void);

/* Symbol: __ubsan_handle_divrem_overflow_minimal_abort */
/* Demangled: __ubsan_handle_divrem_overflow_minimal_abort */
int __ubsan_handle_divrem_overflow_minimal_abort(void);

/* Symbol: _ZNK7android16ProcessCallStack4dumpEiiPKc */
/* Demangled: android::ProcessCallStack::dump(int, int, char const*) const */
int _ZNK7android16ProcessCallStack4dumpEiiPKc(void);

/* Symbol: _ZN7android7RefBase11renameRefIdEPNS0_12weakref_typeEPKvS4_ */
/* Demangled: android::RefBase::renameRefId(android::RefBase::weakref_type*, void const*, void const*) */
int _ZN7android7RefBase11renameRefIdEPNS0_12weakref_typeEPKvS4_(void);

/* Symbol: _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_ */
/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, true>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void);

/* Symbol: __ubsan_handle_pointer_overflow_minimal */
/* Demangled: __ubsan_handle_pointer_overflow_minimal */
int __ubsan_handle_pointer_overflow_minimal(void);

/* Symbol: _ZN7android17JenkinsHashWhitenEj */
/* Demangled: android::JenkinsHashWhiten(unsigned int) */
int _ZN7android17JenkinsHashWhitenEj(void);

/* Symbol: _ZN7android8String16C2Ev */
/* Demangled: android::String16::String16() */
int _ZN7android8String16C2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android7String8C1ERKS0_ */
/* Demangled: android::String8::String8(android::String8 const&) */
int _ZN7android7String8C1ERKS0_(void);

/* Symbol: _ZN7android8String16C1ERKS0_mm */
/* Demangled: android::String16::String16(android::String16 const&, unsigned long, unsigned long) */
int _ZN7android8String16C1ERKS0_mm(void);

/* Symbol: _ZN7android6Parcel11finishWriteEm */
/* Demangled: android::Parcel::finishWrite(unsigned long) */
int _ZN7android6Parcel11finishWriteEm(void);

/* Symbol: _ZNK7android6Parcel17readUtf8FromUtf16EPNSt3__110unique_ptrINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS8_EEEE */
/* Demangled: android::Parcel::readUtf8FromUtf16(std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) const */
int _ZNK7android6Parcel17readUtf8FromUtf16EPNSt3__110unique_ptrINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS8_EEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::BlobCache::CacheEntry>::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE12do_constructEPvm(void);

/* Symbol: _ZN7android7String89removeAllEPKc */
/* Demangled: android::String8::removeAll(char const*) */
int _ZN7android7String89removeAllEPKc(void);

/* Symbol: _ZNK7android6Parcel17readUtf8FromUtf16EPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: android::Parcel::readUtf8FromUtf16(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
int _ZNK7android6Parcel17readUtf8FromUtf16EPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::BlobCache::CacheEntry>::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE10do_compareEPKvS5_(void);

/* Symbol: _ZTVN7android18WeakMessageHandlerE */
/* Demangled: vtable for android::WeakMessageHandler */
extern void* _ZTVN7android18WeakMessageHandlerE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE10do_compareEPKvS7_(void);

/* Symbol: _ZN7android8String166appendEPKDsm */
/* Demangled: android::String16::append(char16_t const*, unsigned long) */
int _ZN7android8String166appendEPKDsm(void);

/* Symbol: _ZN7android16ProcessCallStack5clearEv */
/* Demangled: android::ProcessCallStack::clear() */
int _ZN7android16ProcessCallStack5clearEv(void);

/* Symbol: _ZNK7android15LinearTransform18doReverseTransformElPl */
/* Demangled: android::LinearTransform::doReverseTransform(long, long*) const */
int _ZNK7android15LinearTransform18doReverseTransformElPl(void);

/* Symbol: _ZNK7android9StopWatch11elapsedTimeEv */
/* Demangled: android::StopWatch::elapsedTime() const */
int _ZNK7android9StopWatch11elapsedTimeEv(void);

/* Symbol: _ZN7android7String811setPathNameEPKc */
/* Demangled: android::String8::setPathName(char const*) */
int _ZN7android7String811setPathNameEPKc(void);

/* Symbol: _ZN7android8String16C2ERKNS_7String8E */
/* Demangled: android::String16::String16(android::String8 const&) */
int _ZN7android8String16C2ERKNS_7String8E(void);

/* Symbol: _ZN7android6Parcel13writeString16ERKNS_8String16E */
/* Demangled: android::Parcel::writeString16(android::String16 const&) */
int _ZN7android6Parcel13writeString16ERKNS_8String16E(void);

/* Symbol: _ZN7android6Parcel9writeCharEDs */
/* Demangled: android::Parcel::writeChar(char16_t) */
int _ZN7android6Parcel9writeCharEDs(void);

/* Symbol: _ZNK7android6Parcel15readInt32VectorEPNSt3__110unique_ptrINS1_6vectorIiNS1_9allocatorIiEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::readInt32Vector(std::__1::unique_ptr<std::__1::vector<int, std::__1::allocator<int> >, std::__1::default_delete<std::__1::vector<int, std::__1::allocator<int> > > >*) const */
int _ZNK7android6Parcel15readInt32VectorEPNSt3__110unique_ptrINS1_6vectorIiNS1_9allocatorIiEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZNK7android6Parcel21unsafeReadTypedVectorIddEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E */
/* Demangled: int android::Parcel::unsafeReadTypedVector<double, double>(std::__1::vector<double, std::__1::allocator<double> >*, int (android::Parcel::*)(double*) const) const */
int _ZNK7android6Parcel21unsafeReadTypedVectorIddEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E(void);

/* Symbol: _ZN7android9BlobCache3getEPKvmPvm */
/* Demangled: android::BlobCache::get(void const*, unsigned long, void*, unsigned long) */
int _ZN7android9BlobCache3getEPKvmPvm(void);

/* Symbol: _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android7RefBase9incStrongEPKv */
/* Demangled: android::RefBase::incStrong(void const*) const */
int _ZNK7android7RefBase9incStrongEPKv(void);

/* Symbol: _ZN7android7String8C2ERKNS_8String16E */
/* Demangled: android::String8::String8(android::String16 const&) */
int _ZN7android7String8C2ERKNS_8String16E(void);

/* Symbol: _ZNK7android6Parcel10readUint64Ev */
/* Demangled: android::Parcel::readUint64() const */
int _ZNK7android6Parcel10readUint64Ev(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE8__appendEm */
/* Demangled: std::__1::vector<long, std::__1::allocator<long> >::__append(unsigned long) */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE8__appendEm(void);

/* Symbol: _ZN7android9BlobCache4BlobD0Ev */
/* Demangled: android::BlobCache::Blob::~Blob() */
int _ZN7android9BlobCache4BlobD0Ev(void);

/* Symbol: _ZN7android6Looper18rebuildEpollLockedEv */
/* Demangled: android::Looper::rebuildEpollLocked() */
int _ZN7android6Looper18rebuildEpollLockedEv(void);

/* Symbol: _ZNK7android7RefBase9decStrongEPKv */
/* Demangled: android::RefBase::decStrong(void const*) const */
int _ZNK7android7RefBase9decStrongEPKv(void);

/* Symbol: _ZN7android9StopWatchD1Ev */
/* Demangled: android::StopWatch::~StopWatch() */
int _ZN7android9StopWatchD1Ev(void);

/* Symbol: _ZNK7android7String814getUtf32LengthEv */
/* Demangled: android::String8::getUtf32Length() const */
int _ZNK7android7String814getUtf32LengthEv(void);

/* Symbol: _ZNK7android6Looper9isPollingEv */
/* Demangled: android::Looper::isPolling() const */
int _ZNK7android6Looper9isPollingEv(void);

/* Symbol: _ZN7android7String85setToEPKc */
/* Demangled: android::String8::setTo(char const*) */
int _ZN7android7String85setToEPKc(void);

/* Symbol: _ZNK7android7String811getPathLeafEv */
/* Demangled: android::String8::getPathLeaf() const */
int _ZNK7android7String811getPathLeafEv(void);

/* Symbol: _ZN7android6Parcel10writeFloatEf */
/* Demangled: android::Parcel::writeFloat(float) */
int _ZN7android6Parcel10writeFloatEf(void);

/* Symbol: _ZNSt3__113__fill_n_trueINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE */
/* Demangled: void std::__1::__fill_n_true<std::__1::vector<bool, std::__1::allocator<bool> > >(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::vector<bool, std::__1::allocator<bool> >::size_type) */
int _ZNSt3__113__fill_n_trueINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE(void);

/* Symbol: __ubsan_handle_float_cast_overflow_minimal_abort */
/* Demangled: __ubsan_handle_float_cast_overflow_minimal_abort */
int __ubsan_handle_float_cast_overflow_minimal_abort(void);

/* Symbol: _ZN7android12SharedBuffer5allocEm */
/* Demangled: android::SharedBuffer::alloc(unsigned long) */
int _ZN7android12SharedBuffer5allocEm(void);

/* Symbol: _ZN7android18WeakMessageHandlerC1ERKNS_2wpINS_14MessageHandlerEEE */
/* Demangled: android::WeakMessageHandler::WeakMessageHandler(android::wp<android::MessageHandler> const&) */
int _ZN7android18WeakMessageHandlerC1ERKNS_2wpINS_14MessageHandlerEEE(void);

/* Symbol: _ZN7android7String8C2EPKDim */
/* Demangled: android::String8::String8(char32_t const*, unsigned long) */
int _ZN7android7String8C2EPKDim(void);

/* Symbol: _ZN7android6ThreadD1Ev */
/* Demangled: android::Thread::~Thread() */
int _ZN7android6ThreadD1Ev(void);

/* Symbol: _ZNK7android6Parcel8dataSizeEv */
/* Demangled: android::Parcel::dataSize() const */
int _ZNK7android6Parcel8dataSizeEv(void);

/* Symbol: _ZN7android6Looper18sendMessageDelayedElRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE */
/* Demangled: android::Looper::sendMessageDelayed(long, android::sp<android::MessageHandler> const&, android::Message const&) */
int _ZN7android6Looper18sendMessageDelayedElRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE(void);

/* Symbol: __ubsan_handle_mul_overflow_minimal_abort */
/* Demangled: __ubsan_handle_mul_overflow_minimal_abort */
int __ubsan_handle_mul_overflow_minimal_abort(void);

/* Symbol: utf32_from_utf8_at */
/* Demangled: utf32_from_utf8_at */
int utf32_from_utf8_at(void);

/* Symbol: _ZN7android8String166removeEmm */
/* Demangled: android::String16::remove(unsigned long, unsigned long) */
int _ZN7android8String166removeEmm(void);

/* Symbol: _ZN7android18WeakMessageHandlerC2ERKNS_2wpINS_14MessageHandlerEEE */
/* Demangled: android::WeakMessageHandler::WeakMessageHandler(android::wp<android::MessageHandler> const&) */
int _ZN7android18WeakMessageHandlerC2ERKNS_2wpINS_14MessageHandlerEEE(void);

/* Symbol: _ZN7android7RefBase12weakref_type14attemptIncWeakEPKv */
/* Demangled: android::RefBase::weakref_type::attemptIncWeak(void const*) */
int _ZN7android7RefBase12weakref_type14attemptIncWeakEPKv(void);

/* Symbol: _ZN7android7String85setToERKS0_ */
/* Demangled: android::String8::setTo(android::String8 const&) */
int _ZN7android7String85setToERKS0_(void);

/* Symbol: _ZN7android8String16C2ERKS0_ */
/* Demangled: android::String16::String16(android::String16 const&) */
int _ZN7android8String16C2ERKS0_(void);

/* Symbol: _ZN7android10VectorImpl11appendArrayEPKvm */
/* Demangled: android::VectorImpl::appendArray(void const*, unsigned long) */
int _ZN7android10VectorImpl11appendArrayEPKvm(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEm */
/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__append(unsigned long) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEm(void);

/* Symbol: _ZN7android6Looper12setForThreadERKNS_2spIS0_EE */
/* Demangled: android::Looper::setForThread(android::sp<android::Looper> const&) */
int _ZN7android6Looper12setForThreadERKNS_2spIS0_EE(void);

/* Symbol: _ZN7android7RefBase20extendObjectLifetimeEi */
/* Demangled: android::RefBase::extendObjectLifetime(int) */
int _ZN7android7RefBase20extendObjectLifetimeEi(void);

/* Symbol: _ZNK7android6Parcel9readInt32EPi */
/* Demangled: android::Parcel::readInt32(int*) const */
int _ZNK7android6Parcel9readInt32EPi(void);

/* Symbol: _ZN7android6Looper8pollOnceEiPiS1_PPv */
/* Demangled: android::Looper::pollOnce(int, int*, int*, void**) */
int _ZN7android6Looper8pollOnceEiPiS1_PPv(void);

/* Symbol: _ZN7android13PrefixPrinterC1ERNS_7PrinterEPKc */
/* Demangled: android::PrefixPrinter::PrefixPrinter(android::Printer&, char const*) */
int _ZN7android13PrefixPrinterC1ERNS_7PrinterEPKc(void);

/* Symbol: _ZN7android7PrinterD0Ev */
/* Demangled: android::Printer::~Printer() */
int _ZN7android7PrinterD0Ev(void);

/* Symbol: androidSetCreateThreadFunc */
/* Demangled: androidSetCreateThreadFunc */
int androidSetCreateThreadFunc(void);

/* Symbol: _ZN7android6Parcel15writeInt32ArrayEmPKi */
/* Demangled: android::Parcel::writeInt32Array(unsigned long, int const*) */
int _ZN7android6Parcel15writeInt32ArrayEmPKi(void);

/* Symbol: _ZNK7android6Parcel23readNullableTypedVectorIfEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E */
/* Demangled: int android::Parcel::readNullableTypedVector<float>(std::__1::unique_ptr<std::__1::vector<float, std::__1::allocator<float> >, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float> > > >*, int (android::Parcel::*)(float*) const) const */
int _ZNK7android6Parcel23readNullableTypedVectorIfEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E(void);

/* Symbol: _ZN7android7RefBaseD0Ev */
/* Demangled: android::RefBase::~RefBase() */
int _ZN7android7RefBaseD0Ev(void);

/* Symbol: _ZN7android8String166insertEmPKDs */
/* Demangled: android::String16::insert(unsigned long, char16_t const*) */
int _ZN7android8String166insertEmPKDs(void);

/* Symbol: utf8_to_utf16_length */
/* Demangled: utf8_to_utf16_length */
int utf8_to_utf16_length(void);

/* Symbol: _ZN7android6Parcel15writeByteVectorERKNSt3__16vectorIhNS1_9allocatorIhEEEE */
/* Demangled: android::Parcel::writeByteVector(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
int _ZN7android6Parcel15writeByteVectorERKNSt3__16vectorIhNS1_9allocatorIhEEEE(void);

/* Symbol: _ZN7android9BlobCache10CacheEntryC2ERKNS_2spINS0_4BlobEEES6_ */
/* Demangled: android::BlobCache::CacheEntry::CacheEntry(android::sp<android::BlobCache::Blob> const&, android::sp<android::BlobCache::Blob> const&) */
int _ZN7android9BlobCache10CacheEntryC2ERKNS_2spINS0_4BlobEEES6_(void);

/* Symbol: _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE10do_destroyEPvm */
/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE10do_destroyEPvm(void);

/* Symbol: _ZTCN7android20SimpleLooperCallbackE0_NS_14LooperCallbackE */
/* Demangled: construction vtable for android::LooperCallback-in-android::SimpleLooperCallback */
extern void* _ZTCN7android20SimpleLooperCallbackE0_NS_14LooperCallbackE;

/* Symbol: _ZNK7android7String814find_extensionEv */
/* Demangled: android::String8::find_extension() const */
int _ZNK7android7String814find_extensionEv(void);

/* Symbol: _ZNK7android6Parcel9readFloatEPf */
/* Demangled: android::Parcel::readFloat(float*) const */
int _ZNK7android6Parcel9readFloatEPf(void);

/* Symbol: _ZN7android9BlobCacheC2Emmm */
/* Demangled: android::BlobCache::BlobCache(unsigned long, unsigned long, unsigned long) */
int _ZN7android9BlobCacheC2Emmm(void);

/* Symbol: _ZTVN7android9BlobCache4BlobE */
/* Demangled: vtable for android::BlobCache::Blob */
extern void* _ZTVN7android9BlobCache4BlobE;

/* Symbol: _ZN7android14String8PrinterC2EPNS_7String8EPKc */
/* Demangled: android::String8Printer::String8Printer(android::String8*, char const*) */
int _ZN7android14String8PrinterC2EPNS_7String8EPKc(void);

/* Symbol: _ZNK7android8String1610startsWithEPKDs */
/* Demangled: android::String16::startsWith(char16_t const*) const */
int _ZNK7android8String1610startsWithEPKDs(void);

/* Symbol: _ZNK7android6Parcel8readCharEPDs */
/* Demangled: android::Parcel::readChar(char16_t*) const */
int _ZNK7android6Parcel8readCharEPDs(void);

/* Symbol: _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android7RefBase12weakref_type7incWeakEPKv */
/* Demangled: android::RefBase::weakref_type::incWeak(void const*) */
int _ZN7android7RefBase12weakref_type7incWeakEPKv(void);

/* Symbol: _ZN7android7String8C2EPKDsm */
/* Demangled: android::String8::String8(char16_t const*, unsigned long) */
int _ZN7android7String8C2EPKDsm(void);

/* Symbol: _ZN7android8String16C1ERKNS_7String8E */
/* Demangled: android::String16::String16(android::String8 const&) */
int _ZN7android8String16C1ERKNS_7String8E(void);

/* Symbol: _ZNSt3__16vectorIdNS_9allocatorIdEEE8__appendEm */
/* Demangled: std::__1::vector<double, std::__1::allocator<double> >::__append(unsigned long) */
int _ZNSt3__16vectorIdNS_9allocatorIdEEE8__appendEm(void);

/* Symbol: __ubsan_handle_nullability_arg_minimal */
/* Demangled: __ubsan_handle_nullability_arg_minimal */
int __ubsan_handle_nullability_arg_minimal(void);

/* Symbol: _ZN7android8String1610replaceAllEDsDs */
/* Demangled: android::String16::replaceAll(char16_t, char16_t) */
int _ZN7android8String1610replaceAllEDsDs(void);

/* Symbol: androidCreateRawThreadEtc */
/* Demangled: androidCreateRawThreadEtc */
int androidCreateRawThreadEtc(void);

/* Symbol: _ZNK7android10VectorImpl8capacityEv */
/* Demangled: android::VectorImpl::capacity() const */
int _ZNK7android10VectorImpl8capacityEv(void);

/* Symbol: _ZN7android6ParcelD1Ev */
/* Demangled: android::Parcel::~Parcel() */
int _ZN7android6ParcelD1Ev(void);

/* Symbol: _ZNSt3__114__fill_n_falseINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE */
/* Demangled: void std::__1::__fill_n_false<std::__1::vector<bool, std::__1::allocator<bool> > >(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::vector<bool, std::__1::allocator<bool> >::size_type) */
int _ZNSt3__114__fill_n_falseINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE(void);

/* Symbol: _ZTv0_n24_N7android18WeakMessageHandlerD0Ev */
/* Demangled: virtual thunk to android::WeakMessageHandler::~WeakMessageHandler() */
int _ZTv0_n24_N7android18WeakMessageHandlerD0Ev(void);

/* Symbol: _ZN7android16ProcessCallStackC2Ev */
/* Demangled: android::ProcessCallStack::ProcessCallStack() */
int _ZN7android16ProcessCallStackC2Ev(void);

/* Symbol: _ZN7android6Thread3runEPKcim */
/* Demangled: android::Thread::run(char const*, int, unsigned long) */
int _ZN7android6Thread3runEPKcim(void);

/* Symbol: _ZN7android6Parcel13writeUnpaddedEPKvm */
/* Demangled: android::Parcel::writeUnpadded(void const*, unsigned long) */
int _ZN7android6Parcel13writeUnpaddedEPKvm(void);

/* Symbol: _ZN7android9BlobCacheC1Emmm */
/* Demangled: android::BlobCache::BlobCache(unsigned long, unsigned long, unsigned long) */
int _ZN7android9BlobCacheC1Emmm(void);

/* Symbol: _ZN7android8String16C2EPKc */
/* Demangled: android::String16::String16(char const*) */
int _ZN7android8String16C2EPKc(void);

/* Symbol: _ZN7android6Thread11requestExitEv */
/* Demangled: android::Thread::requestExit() */
int _ZN7android6Thread11requestExitEv(void);

/* Symbol: _ZN7android6Parcel15writeByteVectorERKNSt3__110unique_ptrINS1_6vectorIaNS1_9allocatorIaEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::writeByteVector(std::__1::unique_ptr<std::__1::vector<signed char, std::__1::allocator<signed char> >, std::__1::default_delete<std::__1::vector<signed char, std::__1::allocator<signed char> > > > const&) */
int _ZN7android6Parcel15writeByteVectorERKNSt3__110unique_ptrINS1_6vectorIaNS1_9allocatorIaEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZTVN7android6LooperE */
/* Demangled: vtable for android::Looper */
extern void* _ZTVN7android6LooperE;

/* Symbol: __ubsan_handle_nullability_return_minimal */
/* Demangled: __ubsan_handle_nullability_return_minimal */
int __ubsan_handle_nullability_return_minimal(void);

/* Symbol: _ZN7android6Thread10readyToRunEv */
/* Demangled: android::Thread::readyToRun() */
int _ZN7android6Thread10readyToRunEv(void);

/* Symbol: _ZN7android6Parcel13writeString16EPKDsm */
/* Demangled: android::Parcel::writeString16(char16_t const*, unsigned long) */
int _ZN7android6Parcel13writeString16EPKDsm(void);

/* Symbol: _ZN7android9BlobCache3setEPKvmS2_m */
/* Demangled: android::BlobCache::set(void const*, unsigned long, void const*, unsigned long) */
int _ZN7android9BlobCache3setEPKvmS2_m(void);

/* Symbol: _ZN7android6Looper5addFdEiiiRKNS_2spINS_14LooperCallbackEEEPv */
/* Demangled: android::Looper::addFd(int, int, int, android::sp<android::LooperCallback> const&, void*) */
int _ZN7android6Looper5addFdEiiiRKNS_2spINS_14LooperCallbackEEEPv(void);

/* Symbol: _ZN7android7String811real_appendEPKcm */
/* Demangled: android::String8::real_append(char const*, unsigned long) */
int _ZN7android7String811real_appendEPKcm(void);

/* Symbol: _ZNK7android6Thread9isRunningEv */
/* Demangled: android::Thread::isRunning() const */
int _ZNK7android6Thread9isRunningEv(void);

/* Symbol: _ZNK7android6Parcel11readCStringEv */
/* Demangled: android::Parcel::readCString() const */
int _ZNK7android6Parcel11readCStringEv(void);

/* Symbol: _ZN7android16ProcessCallStack6updateEv */
/* Demangled: android::ProcessCallStack::update() */
int _ZN7android16ProcessCallStack6updateEv(void);

/* Symbol: strnlen32 */
/* Demangled: strnlen32 */
int strnlen32(void);

/* Symbol: _ZN7android10VectorImpl14insertVectorAtERKS0_m */
/* Demangled: android::VectorImpl::insertVectorAt(android::VectorImpl const&, unsigned long) */
int _ZN7android10VectorImpl14insertVectorAtERKS0_m(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE10do_destroyEPvm(void);

/* Symbol: __ubsan_handle_function_type_mismatch_minimal_abort */
/* Demangled: __ubsan_handle_function_type_mismatch_minimal_abort */
int __ubsan_handle_function_type_mismatch_minimal_abort(void);

/* Symbol: _ZN7android7String811setPathNameEPKcm */
/* Demangled: android::String8::setPathName(char const*, unsigned long) */
int _ZN7android7String811setPathNameEPKcm(void);

/* Symbol: _ZN7android8String16C1EPKc */
/* Demangled: android::String16::String16(char const*) */
int _ZN7android8String16C1EPKc(void);

/* Symbol: _ZN7android10VectorImplD0Ev */
/* Demangled: android::VectorImpl::~VectorImpl() */
int _ZN7android10VectorImplD0Ev(void);

/* Symbol: _ZN7android6Parcel16writeInt64VectorERKNSt3__16vectorIlNS1_9allocatorIlEEEE */
/* Demangled: android::Parcel::writeInt64Vector(std::__1::vector<long, std::__1::allocator<long> > const&) */
int _ZN7android6Parcel16writeInt64VectorERKNSt3__16vectorIlNS1_9allocatorIlEEEE(void);

/* Symbol: _ZN7android10LogPrinter8printRawEPKc */
/* Demangled: android::LogPrinter::printRaw(char const*) */
int _ZN7android10LogPrinter8printRawEPKc(void);

/* Symbol: _ZN7android8String16C2EPKcm */
/* Demangled: android::String16::String16(char const*, unsigned long) */
int _ZN7android8String16C2EPKcm(void);

/* Symbol: _ZNK7android9StopWatch4nameEv */
/* Demangled: android::StopWatch::name() const */
int _ZNK7android9StopWatch4nameEv(void);

/* Symbol: androidGetThreadPriority */
/* Demangled: androidGetThreadPriority */
int androidGetThreadPriority(void);

/* Symbol: _ZN7android10VectorImpl3addEv */
/* Demangled: android::VectorImpl::add() */
int _ZN7android10VectorImpl3addEv(void);

/* Symbol: __ubsan_handle_nonnull_return_minimal */
/* Demangled: __ubsan_handle_nonnull_return_minimal */
int __ubsan_handle_nonnull_return_minimal(void);

/* Symbol: _ZN7android7String8C2EPKDi */
/* Demangled: android::String8::String8(char32_t const*) */
int _ZN7android7String8C2EPKDi(void);

/* Symbol: _ZN7android6Thread4joinEv */
/* Demangled: android::Thread::join() */
int _ZN7android6Thread4joinEv(void);

/* Symbol: _ZN7android18WeakMessageHandler13handleMessageERKNS_7MessageE */
/* Demangled: android::WeakMessageHandler::handleMessage(android::Message const&) */
int _ZN7android18WeakMessageHandler13handleMessageERKNS_7MessageE(void);

/* Symbol: _ZN7android20SimpleLooperCallbackD0Ev */
/* Demangled: android::SimpleLooperCallback::~SimpleLooperCallback() */
int _ZN7android20SimpleLooperCallbackD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android14String8PrinterC1EPNS_7String8EPKc */
/* Demangled: android::String8Printer::String8Printer(android::String8*, char const*) */
int _ZN7android14String8PrinterC1EPNS_7String8EPKc(void);

/* Symbol: utf16_to_utf8 */
/* Demangled: utf16_to_utf8 */
int utf16_to_utf8(void);

/* Symbol: _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::BlobCache::CacheEntry>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_6Looper8ResponseEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::Looper::Response>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_6Looper8ResponseEE8do_splatEPvPKvm(void);

/* Symbol: __ubsan_handle_invalid_builtin_minimal_abort */
/* Demangled: __ubsan_handle_invalid_builtin_minimal_abort */
int __ubsan_handle_invalid_builtin_minimal_abort(void);

/* Symbol: __ubsan_handle_load_invalid_value_minimal_abort */
/* Demangled: __ubsan_handle_load_invalid_value_minimal_abort */
int __ubsan_handle_load_invalid_value_minimal_abort(void);

/* Symbol: __ubsan_handle_vla_bound_not_positive_minimal */
/* Demangled: __ubsan_handle_vla_bound_not_positive_minimal */
int __ubsan_handle_vla_bound_not_positive_minimal(void);

/* Symbol: _ZN7android13PrefixPrinter9printLineEPKc */
/* Demangled: android::PrefixPrinter::printLine(char const*) */
int _ZN7android13PrefixPrinter9printLineEPKc(void);

/* Symbol: _ZNK7android6Parcel21unsafeReadTypedVectorIffEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E */
/* Demangled: int android::Parcel::unsafeReadTypedVector<float, float>(std::__1::vector<float, std::__1::allocator<float> >*, int (android::Parcel::*)(float*) const) const */
int _ZNK7android6Parcel21unsafeReadTypedVectorIffEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E(void);

/* Symbol: _ZNK7android6Parcel23readNullableTypedVectorIDsEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E */
/* Demangled: int android::Parcel::readNullableTypedVector<char16_t>(std::__1::unique_ptr<std::__1::vector<char16_t, std::__1::allocator<char16_t> >, std::__1::default_delete<std::__1::vector<char16_t, std::__1::allocator<char16_t> > > >*, int (android::Parcel::*)(char16_t*) const) const */
int _ZNK7android6Parcel23readNullableTypedVectorIDsEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E(void);

/* Symbol: _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::BlobCache::CacheEntry>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_9BlobCache10CacheEntryEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android6LooperD1Ev */
/* Demangled: android::Looper::~Looper() */
int _ZN7android6LooperD1Ev(void);

/* Symbol: _ZN7android12NativeHandleD1Ev */
/* Demangled: android::NativeHandle::~NativeHandle() */
int _ZN7android12NativeHandleD1Ev(void);

/* Symbol: _ZN7android10VectorImpl3popEv */
/* Demangled: android::VectorImpl::pop() */
int _ZN7android10VectorImpl3popEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android9CallStack4dumpEiiPKc */
/* Demangled: android::CallStack::dump(int, int, char const*) const */
int _ZNK7android9CallStack4dumpEiiPKc(void);

/* Symbol: _ZN7android7String8C1EPKDi */
/* Demangled: android::String8::String8(char32_t const*) */
int _ZN7android7String8C1EPKDi(void);

/* Symbol: _ZN7android8String166insertEmPKDsm */
/* Demangled: android::String16::insert(unsigned long, char16_t const*, unsigned long) */
int _ZN7android8String166insertEmPKDsm(void);

/* Symbol: _ZN7android8String16D2Ev */
/* Demangled: android::String16::~String16() */
int _ZN7android8String16D2Ev(void);

/* Symbol: _ZNK7android6Parcel14readCharVectorEPNSt3__110unique_ptrINS1_6vectorIDsNS1_9allocatorIDsEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::readCharVector(std::__1::unique_ptr<std::__1::vector<char16_t, std::__1::allocator<char16_t> >, std::__1::default_delete<std::__1::vector<char16_t, std::__1::allocator<char16_t> > > >*) const */
int _ZNK7android6Parcel14readCharVectorEPNSt3__110unique_ptrINS1_6vectorIDsNS1_9allocatorIDsEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZNK7android6Parcel21unsafeReadTypedVectorIiiEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E */
/* Demangled: int android::Parcel::unsafeReadTypedVector<int, int>(std::__1::vector<int, std::__1::allocator<int> >*, int (android::Parcel::*)(int*) const) const */
int _ZNK7android6Parcel21unsafeReadTypedVectorIiiEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E(void);

/* Symbol: _ZNK7android6Parcel23readNullableTypedVectorIdEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E */
/* Demangled: int android::Parcel::readNullableTypedVector<double>(std::__1::unique_ptr<std::__1::vector<double, std::__1::allocator<double> >, std::__1::default_delete<std::__1::vector<double, std::__1::allocator<double> > > >*, int (android::Parcel::*)(double*) const) const */
int _ZNK7android6Parcel23readNullableTypedVectorIdEEiPNSt3__110unique_ptrINS2_6vectorIT_NS2_9allocatorIS5_EEEENS2_14default_deleteIS8_EEEEMS0_KFiPS5_E(void);

/* Symbol: _ZN7android9BlobCache4BlobC2EPKvmb */
/* Demangled: android::BlobCache::Blob::Blob(void const*, unsigned long, bool) */
int _ZN7android9BlobCache4BlobC2EPKvmb(void);

/* Symbol: utf8_to_utf16_n */
/* Demangled: utf8_to_utf16_n */
int utf8_to_utf16_n(void);

/* Symbol: _ZN7android10VectorImpl16editItemLocationEm */
/* Demangled: android::VectorImpl::editItemLocation(unsigned long) */
int _ZN7android10VectorImpl16editItemLocationEm(void);

/* Symbol: _ZN7android6Parcel8freeDataEv */
/* Demangled: android::Parcel::freeData() */
int _ZN7android6Parcel8freeDataEv(void);

/* Symbol: _ZNK7android6Parcel14readCharVectorEPNSt3__16vectorIDsNS1_9allocatorIDsEEEE */
/* Demangled: android::Parcel::readCharVector(std::__1::vector<char16_t, std::__1::allocator<char16_t> >*) const */
int _ZNK7android6Parcel14readCharVectorEPNSt3__16vectorIDsNS1_9allocatorIDsEEEE(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZN7android19elapsedRealtimeNanoEv */
/* Demangled: android::elapsedRealtimeNano() */
int _ZN7android19elapsedRealtimeNanoEv(void);

/* Symbol: __ubsan_handle_alignment_assumption_minimal_abort */
/* Demangled: __ubsan_handle_alignment_assumption_minimal_abort */
int __ubsan_handle_alignment_assumption_minimal_abort(void);

/* Symbol: _ZNK7android6Parcel15readInt64VectorEPNSt3__16vectorIlNS1_9allocatorIlEEEE */
/* Demangled: android::Parcel::readInt64Vector(std::__1::vector<long, std::__1::allocator<long> >*) const */
int _ZNK7android6Parcel15readInt64VectorEPNSt3__16vectorIlNS1_9allocatorIlEEEE(void);

/* Symbol: _ZNK7android6VectorINS_6Looper8ResponseEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::Looper::Response>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_6Looper8ResponseEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android10LogPrinterC1EPKc19android_LogPriorityS2_b */
/* Demangled: android::LogPrinter::LogPrinter(char const*, android_LogPriority, char const*, bool) */
int _ZN7android10LogPrinterC1EPKc19android_LogPriorityS2_b(void);

/* Symbol: _ZN7android8String165setToEPKDsm */
/* Demangled: android::String16::setTo(char16_t const*, unsigned long) */
int _ZN7android8String165setToEPKDsm(void);

/* Symbol: _ZN7android8String16C1Ev */
/* Demangled: android::String16::String16() */
int _ZN7android8String16C1Ev(void);

/* Symbol: _ZN7android6Parcel17writeDoubleVectorERKNSt3__16vectorIdNS1_9allocatorIdEEEE */
/* Demangled: android::Parcel::writeDoubleVector(std::__1::vector<double, std::__1::allocator<double> > const&) */
int _ZN7android6Parcel17writeDoubleVectorERKNSt3__16vectorIdNS1_9allocatorIdEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE8do_splatEPvPKvm(void);

/* Symbol: __ubsan_handle_builtin_unreachable_minimal */
/* Demangled: __ubsan_handle_builtin_unreachable_minimal */
int __ubsan_handle_builtin_unreachable_minimal(void);

/* Symbol: __ubsan_handle_nullability_return_minimal_abort */
/* Demangled: __ubsan_handle_nullability_return_minimal_abort */
int __ubsan_handle_nullability_return_minimal_abort(void);

/* Symbol: __ubsan_handle_type_mismatch_minimal */
/* Demangled: __ubsan_handle_type_mismatch_minimal */
int __ubsan_handle_type_mismatch_minimal(void);

/* Symbol: _ZN7android7RefBase12weakref_type7trackMeEbb */
/* Demangled: android::RefBase::weakref_type::trackMe(bool, bool) */
int _ZN7android7RefBase12weakref_type7trackMeEbb(void);

/* Symbol: _ZN7android18WeakMessageHandlerD2Ev */
/* Demangled: android::WeakMessageHandler::~WeakMessageHandler() */
int _ZN7android18WeakMessageHandlerD2Ev(void);

/* Symbol: _ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEEi */
/* Demangled: android::Looper::removeMessages(android::sp<android::MessageHandler> const&, int) */
int _ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEEi(void);

/* Symbol: _ZN7android10VectorImplC2Emj */
/* Demangled: android::VectorImpl::VectorImpl(unsigned long, unsigned int) */
int _ZN7android10VectorImplC2Emj(void);

/* Symbol: _ZN7android7String8C2EPKDs */
/* Demangled: android::String8::String8(char16_t const*) */
int _ZN7android7String8C2EPKDs(void);

/* Symbol: _ZN7android15LinearTransform6reduceIjEEvPT_S3_ */
/* Demangled: void android::LinearTransform::reduce<unsigned int>(unsigned int*, unsigned int*) */
int _ZN7android15LinearTransform6reduceIjEEvPT_S3_(void);

/* Symbol: _ZN7android7RefBase13onLastWeakRefEPKv */
/* Demangled: android::RefBase::onLastWeakRef(void const*) */
int _ZN7android7RefBase13onLastWeakRefEPKv(void);

/* Symbol: _ZN7android9StopWatchC1EPKcij */
/* Demangled: android::StopWatch::StopWatch(char const*, int, unsigned int) */
int _ZN7android9StopWatchC1EPKcij(void);

/* Symbol: __ubsan_handle_implicit_conversion_minimal_abort */
/* Demangled: __ubsan_handle_implicit_conversion_minimal_abort */
int __ubsan_handle_implicit_conversion_minimal_abort(void);

/* Symbol: _ZNK7android6Parcel15readInt32VectorEPNSt3__16vectorIiNS1_9allocatorIiEEEE */
/* Demangled: android::Parcel::readInt32Vector(std::__1::vector<int, std::__1::allocator<int> >*) const */
int _ZNK7android6Parcel15readInt32VectorEPNSt3__16vectorIiNS1_9allocatorIiEEEE(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned long) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm(void);

/* Symbol: _ZNK7android6Looper20getAllowNonCallbacksEv */
/* Demangled: android::Looper::getAllowNonCallbacks() const */
int _ZNK7android6Looper20getAllowNonCallbacksEv(void);

/* Symbol: _ZNK7android12SharedBuffer7releaseEj */
/* Demangled: android::SharedBuffer::release(unsigned int) const */
int _ZNK7android12SharedBuffer7releaseEj(void);

/* Symbol: _ZN7android7RefBase12weakref_type7decWeakEPKv */
/* Demangled: android::RefBase::weakref_type::decWeak(void const*) */
int _ZN7android7RefBase12weakref_type7decWeakEPKv(void);

/* Symbol: utf32_to_utf8 */
/* Demangled: utf32_to_utf8 */
int utf32_to_utf8(void);

/* Symbol: strncmp16 */
/* Demangled: strncmp16 */
int strncmp16(void);

/* Symbol: _ZTv0_n24_N7android6ThreadD1Ev */
/* Demangled: virtual thunk to android::Thread::~Thread() */
int _ZTv0_n24_N7android6ThreadD1Ev(void);

/* Symbol: _ZN7android10VectorImpl3addEPKv */
/* Demangled: android::VectorImpl::add(void const*) */
int _ZN7android10VectorImpl3addEPKv(void);

/* Symbol: _ZNK7android6Parcel15setDataPositionEm */
/* Demangled: android::Parcel::setDataPosition(unsigned long) const */
int _ZNK7android6Parcel15setDataPositionEm(void);

/* Symbol: _ZTVN7android9BlobCacheE */
/* Demangled: vtable for android::BlobCache */
extern void* _ZTVN7android9BlobCacheE;

/* Symbol: __ubsan_handle_divrem_overflow_minimal */
/* Demangled: __ubsan_handle_divrem_overflow_minimal */
int __ubsan_handle_divrem_overflow_minimal(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm(void);

/* Symbol: __ubsan_handle_sub_overflow_minimal_abort */
/* Demangled: __ubsan_handle_sub_overflow_minimal_abort */
int __ubsan_handle_sub_overflow_minimal_abort(void);

/* Symbol: _ZN7android7String8C1EPKDs */
/* Demangled: android::String8::String8(char16_t const*) */
int _ZN7android7String8C1EPKDs(void);

/* Symbol: _ZNK7android9BlobCache4Blob7getDataEv */
/* Demangled: android::BlobCache::Blob::getData() const */
int _ZNK7android9BlobCache4Blob7getDataEv(void);

/* Symbol: __ubsan_handle_mul_overflow_minimal */
/* Demangled: __ubsan_handle_mul_overflow_minimal */
int __ubsan_handle_mul_overflow_minimal(void);

/* Symbol: _ZN7android7String812unlockBufferEm */
/* Demangled: android::String8::unlockBuffer(unsigned long) */
int _ZN7android7String812unlockBufferEm(void);

/* Symbol: _ZNK7android7String84findEPKcm */
/* Demangled: android::String8::find(char const*, unsigned long) const */
int _ZNK7android7String84findEPKcm(void);

/* Symbol: _ZNK7android8String168containsEPKDs */
/* Demangled: android::String16::contains(char16_t const*) const */
int _ZNK7android8String168containsEPKDs(void);

/* Symbol: _ZN7android20JenkinsHashMixShortsEjPKtm */
/* Demangled: android::JenkinsHashMixShorts(unsigned int, unsigned short const*, unsigned long) */
int _ZN7android20JenkinsHashMixShortsEjPKtm(void);

/* Symbol: _ZN7android7String87toLowerEmm */
/* Demangled: android::String8::toLower(unsigned long, unsigned long) */
int _ZN7android7String87toLowerEmm(void);

/* Symbol: utf16_to_utf8_length */
/* Demangled: utf16_to_utf8_length */
int utf16_to_utf8_length(void);

/* Symbol: _ZN7android10VectorImpl9replaceAtEPKvm */
/* Demangled: android::VectorImpl::replaceAt(void const*, unsigned long) */
int _ZN7android10VectorImpl9replaceAtEPKvm(void);

/* Symbol: _ZN7android6Parcel14writeByteArrayEmPKh */
/* Demangled: android::Parcel::writeByteArray(unsigned long, unsigned char const*) */
int _ZN7android6Parcel14writeByteArrayEmPKh(void);

/* Symbol: _ZNK7android6Parcel10readUint32EPj */
/* Demangled: android::Parcel::readUint32(unsigned int*) const */
int _ZNK7android6Parcel10readUint32EPj(void);

/* Symbol: _ZNK7android6Looper7Request13initEventItemEP11epoll_event */
/* Demangled: android::Looper::Request::initEventItem(epoll_event*) const */
int _ZNK7android6Looper7Request13initEventItemEP11epoll_event(void);

/* Symbol: __ubsan_handle_nonnull_return_minimal_abort */
/* Demangled: __ubsan_handle_nonnull_return_minimal_abort */
int __ubsan_handle_nonnull_return_minimal_abort(void);

/* Symbol: _ZNK7android7String810getUtf32AtEmPm */
/* Demangled: android::String8::getUtf32At(unsigned long, unsigned long*) const */
int _ZNK7android7String810getUtf32AtEmPm(void);

/* Symbol: _ZN7android6ThreadD0Ev */
/* Demangled: android::Thread::~Thread() */
int _ZN7android6ThreadD0Ev(void);

/* Symbol: _ZNK7android16SortedVectorImpl13_indexOrderOfEPKvPm */
/* Demangled: android::SortedVectorImpl::_indexOrderOf(void const*, unsigned long*) const */
int _ZNK7android16SortedVectorImpl13_indexOrderOfEPKvPm(void);

/* Symbol: _ZN7android6Parcel15setDataCapacityEm */
/* Demangled: android::Parcel::setDataCapacity(unsigned long) */
int _ZN7android6Parcel15setDataCapacityEm(void);

/* Symbol: _ZN7android7RefBase12weakref_type16attemptIncStrongEPKv */
/* Demangled: android::RefBase::weakref_type::attemptIncStrong(void const*) */
int _ZN7android7RefBase12weakref_type16attemptIncStrongEPKv(void);

/* Symbol: _ZN7android8String16C1ENS0_13StaticLinkageE */
/* Demangled: android::String16::String16(android::String16::StaticLinkage) */
int _ZN7android8String16C1ENS0_13StaticLinkageE(void);

/* Symbol: _ZNK7android9BlobCache11isCleanableEv */
/* Demangled: android::BlobCache::isCleanable() const */
int _ZNK7android9BlobCache11isCleanableEv(void);

/* Symbol: _ZTVN7android6VectorINS_6Looper15MessageEnvelopeEEE */
/* Demangled: vtable for android::Vector<android::Looper::MessageEnvelope> */
extern void* _ZTVN7android6VectorINS_6Looper15MessageEnvelopeEEE;

/* Symbol: _ZN7android18terminate_string16Ev */
/* Demangled: android::terminate_string16() */
int _ZN7android18terminate_string16Ev(void);

/* Symbol: _ZNK7android6Parcel10readDoubleEv */
/* Demangled: android::Parcel::readDouble() const */
int _ZNK7android6Parcel10readDoubleEv(void);

/* Symbol: _ZNK7android6Parcel17getBlobAshmemSizeEv */
/* Demangled: android::Parcel::getBlobAshmemSize() const */
int _ZNK7android6Parcel17getBlobAshmemSizeEv(void);

/* Symbol: _ZN7android6Parcel15writeByteVectorERKNSt3__16vectorIaNS1_9allocatorIaEEEE */
/* Demangled: android::Parcel::writeByteVector(std::__1::vector<signed char, std::__1::allocator<signed char> > const&) */
int _ZN7android6Parcel15writeByteVectorERKNSt3__16vectorIaNS1_9allocatorIaEEEE(void);

/* Symbol: _ZNK7android6Parcel11readPointerEv */
/* Demangled: android::Parcel::readPointer() const */
int _ZNK7android6Parcel11readPointerEv(void);

/* Symbol: _ZNK7android6Parcel4dataEv */
/* Demangled: android::Parcel::data() const */
int _ZNK7android6Parcel4dataEv(void);

/* Symbol: __ubsan_handle_implicit_conversion_minimal */
/* Demangled: __ubsan_handle_implicit_conversion_minimal */
int __ubsan_handle_implicit_conversion_minimal(void);

/* Symbol: _ZN7android16SortedVectorImplD2Ev */
/* Demangled: android::SortedVectorImpl::~SortedVectorImpl() */
int _ZN7android16SortedVectorImplD2Ev(void);

/* Symbol: _ZNK7android6Parcel14readBoolVectorEPNSt3__16vectorIbNS1_9allocatorIbEEEE */
/* Demangled: android::Parcel::readBoolVector(std::__1::vector<bool, std::__1::allocator<bool> >*) const */
int _ZNK7android6Parcel14readBoolVectorEPNSt3__16vectorIbNS1_9allocatorIbEEEE(void);

/* Symbol: _ZN7android14String8Printer9printLineEPKc */
/* Demangled: android::String8Printer::printLine(char const*) */
int _ZN7android14String8Printer9printLineEPKc(void);

/* Symbol: _ZN7android12SharedBuffer7deallocEPKS0_ */
/* Demangled: android::SharedBuffer::dealloc(android::SharedBuffer const*) */
int _ZN7android12SharedBuffer7deallocEPKS0_(void);

/* Symbol: _ZTVN7android16SortedVectorImplE */
/* Demangled: vtable for android::SortedVectorImpl */
extern void* _ZTVN7android16SortedVectorImplE;

/* Symbol: _ZN7android7RefBase20onIncStrongAttemptedEjPKv */
/* Demangled: android::RefBase::onIncStrongAttempted(unsigned int, void const*) */
int _ZN7android7RefBase20onIncStrongAttemptedEjPKv(void);

/* Symbol: utf8_length */
/* Demangled: utf8_length */
int utf8_length(void);

/* Symbol: _ZN7android12uptimeMillisEv */
/* Demangled: android::uptimeMillis() */
int _ZN7android12uptimeMillisEv(void);

/* Symbol: _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE12do_constructEPvm */
/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE12do_constructEPvm(void);

/* Symbol: _ZN7android16ProcessCallStackD2Ev */
/* Demangled: android::ProcessCallStack::~ProcessCallStack() */
int _ZN7android16ProcessCallStackD2Ev(void);

/* Symbol: _ZN7android7RefBase10renameRefsEmRKNS_16ReferenceRenamerE */
/* Demangled: android::RefBase::renameRefs(unsigned long, android::ReferenceRenamer const&) */
int _ZN7android7RefBase10renameRefsEmRKNS_16ReferenceRenamerE(void);

/* Symbol: _ZN7android7String812unlockBufferEv */
/* Demangled: android::String8::unlockBuffer() */
int _ZN7android7String812unlockBufferEv(void);

/* Symbol: _ZN7android7String8C2Ev */
/* Demangled: android::String8::String8() */
int _ZN7android7String8C2Ev(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEm */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__append(unsigned long) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEm(void);

/* Symbol: _ZN7android10VectorImpl5_growEmm */
/* Demangled: android::VectorImpl::_grow(unsigned long, unsigned long) */
int _ZN7android10VectorImpl5_growEmm(void);

/* Symbol: _ZN7android10VectorImpl4sortEPFiPKvS2_PvES3_ */
/* Demangled: android::VectorImpl::sort(int (*)(void const*, void const*, void*), void*) */
int _ZN7android10VectorImpl4sortEPFiPKvS2_PvES3_(void);

/* Symbol: _ZN7android6Parcel5writeEPKvm */
/* Demangled: android::Parcel::write(void const*, unsigned long) */
int _ZN7android6Parcel5writeEPKvm(void);

/* Symbol: _ZNK7android6Parcel9readInt32Ev */
/* Demangled: android::Parcel::readInt32() const */
int _ZNK7android6Parcel9readInt32Ev(void);

/* Symbol: _ZN7android20SimpleLooperCallbackC2EPFiiiPvE */
/* Demangled: android::SimpleLooperCallback::SimpleLooperCallback(int (*)(int, int, void*)) */
int _ZN7android20SimpleLooperCallbackC2EPFiiiPvE(void);

/* Symbol: _ZNK7android6VectorINS_6Looper8ResponseEE10do_destroyEPvm */
/* Demangled: android::Vector<android::Looper::Response>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_6Looper8ResponseEE10do_destroyEPvm(void);

/* Symbol: _ZN7android7String8C2EPKc */
/* Demangled: android::String8::String8(char const*) */
int _ZN7android7String8C2EPKc(void);

/* Symbol: _ZN7android6Looper17sendMessageAtTimeElRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE */
/* Demangled: android::Looper::sendMessageAtTime(long, android::sp<android::MessageHandler> const&, android::Message const&) */
int _ZN7android6Looper17sendMessageAtTimeElRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE(void);

/* Symbol: _ZN7android16ProcessCallStackC1Ev */
/* Demangled: android::ProcessCallStack::ProcessCallStack() */
int _ZN7android16ProcessCallStackC1Ev(void);

/* Symbol: _ZN7android9CallStack6updateEii */
/* Demangled: android::CallStack::update(int, int) */
int _ZN7android9CallStack6updateEii(void);

/* Symbol: _ZTVN7android14String8PrinterE */
/* Demangled: vtable for android::String8Printer */
extern void* _ZTVN7android14String8PrinterE;

/* Symbol: androidSetThreadName */
/* Demangled: androidSetThreadName */
int androidSetThreadName(void);

/* Symbol: _ZN7android10VectorImpl4pushEPKv */
/* Demangled: android::VectorImpl::push(void const*) */
int _ZN7android10VectorImpl4pushEPKv(void);

/* Symbol: _ZNK7android10VectorImpl12itemLocationEm */
/* Demangled: android::VectorImpl::itemLocation(unsigned long) const */
int _ZNK7android10VectorImpl12itemLocationEm(void);

/* Symbol: _ZNK7android6Parcel8readByteEv */
/* Demangled: android::Parcel::readByte() const */
int _ZNK7android6Parcel8readByteEv(void);

/* Symbol: _ZN7android9BlobCache11blob_randomEv */
/* Demangled: android::BlobCache::blob_random() */
int _ZN7android9BlobCache11blob_randomEv(void);

/* Symbol: __ubsan_handle_sub_overflow_minimal */
/* Demangled: __ubsan_handle_sub_overflow_minimal */
int __ubsan_handle_sub_overflow_minimal(void);

/* Symbol: _ZN7android7RefBase11renameRefIdEPS0_PKvS3_ */
/* Demangled: android::RefBase::renameRefId(android::RefBase*, void const*, void const*) */
int _ZN7android7RefBase11renameRefIdEPS0_PKvS3_(void);

/* Symbol: __ubsan_handle_load_invalid_value_minimal */
/* Demangled: __ubsan_handle_load_invalid_value_minimal */
int __ubsan_handle_load_invalid_value_minimal(void);

/* Symbol: __ubsan_handle_type_mismatch_minimal_abort */
/* Demangled: __ubsan_handle_type_mismatch_minimal_abort */
int __ubsan_handle_type_mismatch_minimal_abort(void);

/* Symbol: _ZN7android12NativeHandleC2EP13native_handleb */
/* Demangled: android::NativeHandle::NativeHandle(native_handle*, bool) */
int _ZN7android12NativeHandleC2EP13native_handleb(void);

/* Symbol: _ZTVN7android7RefBaseE */
/* Demangled: vtable for android::RefBase */
extern void* _ZTVN7android7RefBaseE;

/* Symbol: _ZN7android7String8C1EPKDim */
/* Demangled: android::String8::String8(char32_t const*, unsigned long) */
int _ZN7android7String8C1EPKDim(void);

/* Symbol: _ZN7android8String16C1EPKDs */
/* Demangled: android::String16::String16(char16_t const*) */
int _ZN7android8String16C1EPKDs(void);

/* Symbol: _ZN7android7String8C1EPKc */
/* Demangled: android::String8::String8(char const*) */
int _ZN7android7String8C1EPKc(void);

/* Symbol: _ZN7android18initialize_string8Ev */
/* Demangled: android::initialize_string8() */
int _ZN7android18initialize_string8Ev(void);

/* Symbol: _ZTv0_n24_N7android20SimpleLooperCallbackD1Ev */
/* Demangled: virtual thunk to android::SimpleLooperCallback::~SimpleLooperCallback() */
int _ZTv0_n24_N7android20SimpleLooperCallbackD1Ev(void);

/* Symbol: _ZN7android8String16C1ERKS0_ */
/* Demangled: android::String16::String16(android::String16 const&) */
int _ZN7android8String16C1ERKS0_(void);

/* Symbol: _ZNK7android16SortedVectorImpl7indexOfEPKv */
/* Demangled: android::SortedVectorImpl::indexOf(void const*) const */
int _ZNK7android16SortedVectorImpl7indexOfEPKv(void);

/* Symbol: _ZN7android6Parcel15writeCharVectorERKNSt3__110unique_ptrINS1_6vectorIDsNS1_9allocatorIDsEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::writeCharVector(std::__1::unique_ptr<std::__1::vector<char16_t, std::__1::allocator<char16_t> >, std::__1::default_delete<std::__1::vector<char16_t, std::__1::allocator<char16_t> > > > const&) */
int _ZN7android6Parcel15writeCharVectorERKNSt3__110unique_ptrINS1_6vectorIDsNS1_9allocatorIDsEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZNK7android6Parcel14readByteVectorEPNSt3__110unique_ptrINS1_6vectorIhNS1_9allocatorIhEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::readByteVector(std::__1::unique_ptr<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::default_delete<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > >*) const */
int _ZNK7android6Parcel14readByteVectorEPNSt3__110unique_ptrINS1_6vectorIhNS1_9allocatorIhEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZNK7android6Parcel21unsafeReadTypedVectorIDsDsEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E */
/* Demangled: int android::Parcel::unsafeReadTypedVector<char16_t, char16_t>(std::__1::vector<char16_t, std::__1::allocator<char16_t> >*, int (android::Parcel::*)(char16_t*) const) const */
int _ZNK7android6Parcel21unsafeReadTypedVectorIDsDsEEiPNSt3__16vectorIT_NS2_9allocatorIS4_EEEEMS0_KFiPT0_E(void);

/* Symbol: _ZN7android6Looper5addFdEiiiPFiiiPvES1_ */
/* Demangled: android::Looper::addFd(int, int, int, int (*)(int, int, void*), void*) */
int _ZN7android6Looper5addFdEiiiPFiiiPvES1_(void);

/* Symbol: _ZNK7android16ProcessCallStack3logEPKc19android_LogPriorityS2_ */
/* Demangled: android::ProcessCallStack::log(char const*, android_LogPriority, char const*) const */
int _ZNK7android16ProcessCallStack3logEPKc19android_LogPriorityS2_(void);

/* Symbol: __ubsan_handle_out_of_bounds_minimal_abort */
/* Demangled: __ubsan_handle_out_of_bounds_minimal_abort */
int __ubsan_handle_out_of_bounds_minimal_abort(void);

/* Symbol: _ZN7android7PrinterC2Ev */
/* Demangled: android::Printer::Printer() */
int _ZN7android7PrinterC2Ev(void);

/* Symbol: _ZTVN7android6ThreadE */
/* Demangled: vtable for android::Thread */
extern void* _ZTVN7android6ThreadE;

/* Symbol: _ZN7android10VectorImpl13editArrayImplEv */
/* Demangled: android::VectorImpl::editArrayImpl() */
int _ZN7android10VectorImpl13editArrayImplEv(void);

/* Symbol: _ZN7android6Parcel17writeDoubleVectorERKNSt3__110unique_ptrINS1_6vectorIdNS1_9allocatorIdEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::writeDoubleVector(std::__1::unique_ptr<std::__1::vector<double, std::__1::allocator<double> >, std::__1::default_delete<std::__1::vector<double, std::__1::allocator<double> > > > const&) */
int _ZN7android6Parcel17writeDoubleVectorERKNSt3__110unique_ptrINS1_6vectorIdNS1_9allocatorIdEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZNK7android6Parcel10readIntPtrEv */
/* Demangled: android::Parcel::readIntPtr() const */
int _ZNK7android6Parcel10readIntPtrEv(void);

/* Symbol: _ZNK7android6Parcel15readFloatVectorEPNSt3__16vectorIfNS1_9allocatorIfEEEE */
/* Demangled: android::Parcel::readFloatVector(std::__1::vector<float, std::__1::allocator<float> >*) const */
int _ZNK7android6Parcel15readFloatVectorEPNSt3__16vectorIfNS1_9allocatorIfEEEE(void);

/* Symbol: _ZN7android7RefBaseC2Ev */
/* Demangled: android::RefBase::RefBase() */
int _ZN7android7RefBaseC2Ev(void);

/* Symbol: _ZN7android6Parcel4BlobC2Ev */
/* Demangled: android::Parcel::Blob::Blob() */
int _ZN7android6Parcel4BlobC2Ev(void);

/* Symbol: _ZN7android15LinearTransform6reduceEPiPj */
/* Demangled: android::LinearTransform::reduce(int*, unsigned int*) */
int _ZN7android15LinearTransform6reduceEPiPj(void);

/* Symbol: _ZNK7android7RefBase14forceIncStrongEPKv */
/* Demangled: android::RefBase::forceIncStrong(void const*) const */
int _ZNK7android7RefBase14forceIncStrongEPKv(void);

/* Symbol: _ZNK7android7String88getUtf32EPDi */
/* Demangled: android::String8::getUtf32(char32_t*) const */
int _ZNK7android7String88getUtf32EPDi(void);

/* Symbol: _ZN7android16SortedVectorImplC2ERKNS_10VectorImplE */
/* Demangled: android::SortedVectorImpl::SortedVectorImpl(android::VectorImpl const&) */
int _ZN7android16SortedVectorImplC2ERKNS_10VectorImplE(void);

/* Symbol: _ZN7android6Parcel11writeUint32Ej */
/* Demangled: android::Parcel::writeUint32(unsigned int) */
int _ZN7android6Parcel11writeUint32Ej(void);

/* Symbol: _ZN7android6Parcel8setErrorEi */
/* Demangled: android::Parcel::setError(int) */
int _ZN7android6Parcel8setErrorEi(void);

/* Symbol: _ZN7android9BlobCache10CacheEntry8setValueERKNS_2spINS0_4BlobEEE */
/* Demangled: android::BlobCache::CacheEntry::setValue(android::sp<android::BlobCache::Blob> const&) */
int _ZN7android9BlobCache10CacheEntry8setValueERKNS_2spINS0_4BlobEEE(void);

/* Symbol: _ZTVN7android7PrinterE */
/* Demangled: vtable for android::Printer */
extern void* _ZTVN7android7PrinterE;

/* Symbol: _ZNK7android8String164sizeEv */
/* Demangled: android::String16::size() const */
int _ZNK7android8String164sizeEv(void);

/* Symbol: _ZN7android6Parcel9initStateEv */
/* Demangled: android::Parcel::initState() */
int _ZN7android6Parcel9initStateEv(void);

/* Symbol: _ZNK7android6Parcel9readInt64EPl */
/* Demangled: android::Parcel::readInt64(long*) const */
int _ZNK7android6Parcel9readInt64EPl(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEEE;

/* Symbol: _ZN7android7String8C1EPKDsm */
/* Demangled: android::String8::String8(char16_t const*, unsigned long) */
int _ZN7android7String8C1EPKDsm(void);

/* Symbol: _ZN7android16SortedVectorImpl6removeEPKv */
/* Demangled: android::SortedVectorImpl::remove(void const*) */
int _ZN7android16SortedVectorImpl6removeEPKv(void);

/* Symbol: _ZN7android6Parcel12writeCStringEPKc */
/* Demangled: android::Parcel::writeCString(char const*) */
int _ZN7android6Parcel12writeCStringEPKc(void);

/* Symbol: _ZN7android6Parcel12writeInplaceEm */
/* Demangled: android::Parcel::writeInplace(unsigned long) */
int _ZN7android6Parcel12writeInplaceEm(void);

/* Symbol: _ZN7android9StopWatchC2EPKcij */
/* Demangled: android::StopWatch::StopWatch(char const*, int, unsigned int) */
int _ZN7android9StopWatchC2EPKcij(void);

/* Symbol: strlen16 */
/* Demangled: strlen16 */
int strlen16(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_14default_deleteIS7_EEEENS5_ISA_EEE8__appendEm */
/* Demangled: std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >::__append(unsigned long) */
int _ZNSt3__16vectorINS_10unique_ptrINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_14default_deleteIS7_EEEENS5_ISA_EEE8__appendEm(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE6resizeEmb */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::resize(unsigned long, bool) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE6resizeEmb(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned long) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm(void);

/* Symbol: _ZN7android6LooperD0Ev */
/* Demangled: android::Looper::~Looper() */
int _ZN7android6LooperD0Ev(void);

/* Symbol: __ubsan_handle_vla_bound_not_positive_minimal_abort */
/* Demangled: __ubsan_handle_vla_bound_not_positive_minimal_abort */
int __ubsan_handle_vla_bound_not_positive_minimal_abort(void);

/* Symbol: _ZN7android12NativeHandleD0Ev */
/* Demangled: android::NativeHandle::~NativeHandle() */
int _ZN7android12NativeHandleD0Ev(void);

/* Symbol: _ZN7android7String85setToEPKDim */
/* Demangled: android::String8::setTo(char32_t const*, unsigned long) */
int _ZN7android7String85setToEPKDim(void);

/* Symbol: strcpy16 */
/* Demangled: strcpy16 */
int strcpy16(void);

/* Symbol: strstr16 */
/* Demangled: strstr16 */
int strstr16(void);

/* Symbol: _ZNK7android6Parcel8readBoolEPb */
/* Demangled: android::Parcel::readBool(bool*) const */
int _ZNK7android6Parcel8readBoolEPb(void);

/* Symbol: __ubsan_handle_negate_overflow_minimal */
/* Demangled: __ubsan_handle_negate_overflow_minimal */
int __ubsan_handle_negate_overflow_minimal(void);

/* Symbol: _ZN7android7Printer15printFormatLineEPKcz */
/* Demangled: android::Printer::printFormatLine(char const*, ...) */
int _ZN7android7Printer15printFormatLineEPKcz(void);

/* Symbol: _ZN7android8String16D1Ev */
/* Demangled: android::String16::~String16() */
int _ZN7android8String16D1Ev(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android7String86appendEPKcm */
/* Demangled: android::String8::append(char const*, unsigned long) */
int _ZN7android7String86appendEPKcm(void);

/* Symbol: _ZN7android6Looper16threadDestructorEPv */
/* Demangled: android::Looper::threadDestructor(void*) */
int _ZN7android6Looper16threadDestructorEPv(void);

/* Symbol: _ZN7android23gDarwinIsReallyAnnoyingE */
/* Demangled: android::gDarwinIsReallyAnnoying */
extern void* _ZN7android23gDarwinIsReallyAnnoyingE;

/* Symbol: _ZN7android8String169makeLowerEv */
/* Demangled: android::String16::makeLower() */
int _ZN7android8String169makeLowerEv(void);

/* Symbol: _ZN7android6Parcel6removeEmm */
/* Demangled: android::Parcel::remove(unsigned long, unsigned long) */
int _ZN7android6Parcel6removeEmm(void);

/* Symbol: __ubsan_handle_nonnull_arg_minimal */
/* Demangled: __ubsan_handle_nonnull_arg_minimal */
int __ubsan_handle_nonnull_arg_minimal(void);

/* Symbol: _ZN7android7RefBase10onFirstRefEv */
/* Demangled: android::RefBase::onFirstRef() */
int _ZN7android7RefBase10onFirstRefEv(void);

/* Symbol: _ZN7android10VectorImpl4sortEPFiPKvS2_E */
/* Demangled: android::VectorImpl::sort(int (*)(void const*, void const*)) */
int _ZN7android10VectorImpl4sortEPFiPKvS2_E(void);

/* Symbol: _ZN7android9BlobCache10CacheEntryaSERKS1_ */
/* Demangled: android::BlobCache::CacheEntry::operator=(android::BlobCache::CacheEntry const&) */
int _ZN7android9BlobCache10CacheEntryaSERKS1_(void);

/* Symbol: _ZNK7android9BlobCache4BlobltERKS1_ */
/* Demangled: android::BlobCache::Blob::operator<(android::BlobCache::Blob const&) const */
int _ZNK7android9BlobCache4BlobltERKS1_(void);

/* Symbol: _ZN7android9CallStackC2EPKci */
/* Demangled: android::CallStack::CallStack(char const*, int) */
int _ZN7android9CallStackC2EPKci(void);

/* Symbol: _ZN7android9FdPrinterC1EijPKc */
/* Demangled: android::FdPrinter::FdPrinter(int, unsigned int, char const*) */
int _ZN7android9FdPrinterC1EijPKc(void);

/* Symbol: __ubsan_handle_shift_out_of_bounds_minimal_abort */
/* Demangled: __ubsan_handle_shift_out_of_bounds_minimal_abort */
int __ubsan_handle_shift_out_of_bounds_minimal_abort(void);

/* Symbol: _ZN7android7String86appendERKS0_ */
/* Demangled: android::String8::append(android::String8 const&) */
int _ZN7android7String86appendERKS0_(void);

/* Symbol: _ZN7android7String87toLowerEv */
/* Demangled: android::String8::toLower() */
int _ZN7android7String87toLowerEv(void);

/* Symbol: _ZN7android8String16C2ENS0_13StaticLinkageE */
/* Demangled: android::String16::String16(android::String16::StaticLinkage) */
int _ZN7android8String16C2ENS0_13StaticLinkageE(void);

/* Symbol: _ZN7android18WeakMessageHandlerD1Ev */
/* Demangled: android::WeakMessageHandler::~WeakMessageHandler() */
int _ZN7android18WeakMessageHandlerD1Ev(void);

/* Symbol: __ubsan_handle_add_overflow_minimal_abort */
/* Demangled: __ubsan_handle_add_overflow_minimal_abort */
int __ubsan_handle_add_overflow_minimal_abort(void);

/* Symbol: _ZNK7android7RefBase12weakref_type7refBaseEv */
/* Demangled: android::RefBase::weakref_type::refBase() const */
int _ZNK7android7RefBase12weakref_type7refBaseEv(void);

/* Symbol: _ZN7android6ThreadC2Eb */
/* Demangled: android::Thread::Thread(bool) */
int _ZN7android6ThreadC2Eb(void);

/* Symbol: _ZN7android6Parcel15writeCharVectorERKNSt3__16vectorIDsNS1_9allocatorIDsEEEE */
/* Demangled: android::Parcel::writeCharVector(std::__1::vector<char16_t, std::__1::allocator<char16_t> > const&) */
int _ZN7android6Parcel15writeCharVectorERKNSt3__16vectorIDsNS1_9allocatorIDsEEEE(void);

/* Symbol: _ZN7android9BlobCache9unflattenEPKvm */
/* Demangled: android::BlobCache::unflatten(void const*, unsigned long) */
int _ZN7android9BlobCache9unflattenEPKvm(void);

/* Symbol: _ZN7android6Looper8removeFdEii */
/* Demangled: android::Looper::removeFd(int, int) */
int _ZN7android6Looper8removeFdEii(void);

/* Symbol: _ZN7android9CallStackC2Ev */
/* Demangled: android::CallStack::CallStack() */
int _ZN7android9CallStackC2Ev(void);

/* Symbol: _ZN7android12NativeHandle6createEP13native_handleb */
/* Demangled: android::NativeHandle::create(native_handle*, bool) */
int _ZN7android12NativeHandle6createEP13native_handleb(void);

/* Symbol: _ZN7android7String85setToEPKDsm */
/* Demangled: android::String8::setTo(char16_t const*, unsigned long) */
int _ZN7android7String85setToEPKDsm(void);

/* Symbol: _ZN7android8String16C2EPKDsm */
/* Demangled: android::String16::String16(char16_t const*, unsigned long) */
int _ZN7android8String16C2EPKDsm(void);

/* Symbol: _ZN7android6Parcel9writeBoolEb */
/* Demangled: android::Parcel::writeBool(bool) */
int _ZN7android6Parcel9writeBoolEb(void);

/* Symbol: _ZN7android9CallStackC1EPKci */
/* Demangled: android::CallStack::CallStack(char const*, int) */
int _ZN7android9CallStackC1EPKci(void);

/* Symbol: _ZN7android10LogPrinterC2EPKc19android_LogPriorityS2_b */
/* Demangled: android::LogPrinter::LogPrinter(char const*, android_LogPriority, char const*, bool) */
int _ZN7android10LogPrinterC2EPKc19android_LogPriorityS2_b(void);

/* Symbol: _ZNK7android7RefBase10createWeakEPKv */
/* Demangled: android::RefBase::createWeak(void const*) const */
int _ZNK7android7RefBase10createWeakEPKv(void);

/* Symbol: _ZN7android7String816convertToResPathEv */
/* Demangled: android::String8::convertToResPath() */
int _ZN7android7String816convertToResPathEv(void);

/* Symbol: _ZN7android8String165setToERKS0_mm */
/* Demangled: android::String16::setTo(android::String16 const&, unsigned long, unsigned long) */
int _ZN7android8String165setToERKS0_mm(void);

/* Symbol: _ZN7android10VectorImpl4pushEv */
/* Demangled: android::VectorImpl::push() */
int _ZN7android10VectorImpl4pushEv(void);

/* Symbol: _ZTVN7android6VectorINS_7String8EEE */
/* Demangled: vtable for android::Vector<android::String8> */
extern void* _ZTVN7android6VectorINS_7String8EEE;

/* Symbol: _ZTv0_n24_N7android6ThreadD0Ev */
/* Demangled: virtual thunk to android::Thread::~Thread() */
int _ZTv0_n24_N7android6ThreadD0Ev(void);

/* Symbol: _ZN7android6Thread18requestExitAndWaitEv */
/* Demangled: android::Thread::requestExitAndWait() */
int _ZN7android6Thread18requestExitAndWaitEv(void);

/* Symbol: _ZN7android6Parcel14acquireObjectsEv */
/* Demangled: android::Parcel::acquireObjects() */
int _ZN7android6Parcel14acquireObjectsEv(void);

/* Symbol: _ZN7android6Parcel16writeFloatVectorERKNSt3__110unique_ptrINS1_6vectorIfNS1_9allocatorIfEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::writeFloatVector(std::__1::unique_ptr<std::__1::vector<float, std::__1::allocator<float> >, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float> > > > const&) */
int _ZN7android6Parcel16writeFloatVectorERKNSt3__110unique_ptrINS1_6vectorIfNS1_9allocatorIfEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZNK7android6Parcel9readInt64Ev */
/* Demangled: android::Parcel::readInt64() const */
int _ZNK7android6Parcel9readInt64Ev(void);

/* Symbol: _ZNSt3__16vectorIaNS_9allocatorIaEEE8__appendEm */
/* Demangled: std::__1::vector<signed char, std::__1::allocator<signed char> >::__append(unsigned long) */
int _ZNSt3__16vectorIaNS_9allocatorIaEEE8__appendEm(void);

/* Symbol: _ZTVN7android10LogPrinterE */
/* Demangled: vtable for android::LogPrinter */
extern void* _ZTVN7android10LogPrinterE;

/* Symbol: _ZN7android10VectorImpl6resizeEm */
/* Demangled: android::VectorImpl::resize(unsigned long) */
int _ZN7android10VectorImpl6resizeEm(void);

/* Symbol: _ZN7android6Looper7pollAllEiPiS1_PPv */
/* Demangled: android::Looper::pollAll(int, int*, int*, void**) */
int _ZN7android6Looper7pollAllEiPiS1_PPv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_compareEPKvS7_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::ProcessCallStack::ThreadInfo> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_16ProcessCallStack10ThreadInfoEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6Parcel14readByteVectorEPNSt3__16vectorIhNS1_9allocatorIhEEEE */
/* Demangled: android::Parcel::readByteVector(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >*) const */
int _ZNK7android6Parcel14readByteVectorEPNSt3__16vectorIhNS1_9allocatorIhEEEE(void);

/* Symbol: _ZNK7android8String169findFirstEDs */
/* Demangled: android::String16::findFirst(char16_t) const */
int _ZNK7android8String169findFirstEDs(void);

/* Symbol: _ZNK7android6Thread11exitPendingEv */
/* Demangled: android::Thread::exitPending() const */
int _ZNK7android6Thread11exitPendingEv(void);

/* Symbol: __ubsan_handle_alignment_assumption_minimal */
/* Demangled: __ubsan_handle_alignment_assumption_minimal */
int __ubsan_handle_alignment_assumption_minimal(void);

/* Symbol: utf8_to_utf16 */
/* Demangled: utf8_to_utf16 */
int utf8_to_utf16(void);

/* Symbol: _ZN7android6Parcel15writeBoolVectorERKNSt3__110unique_ptrINS1_6vectorIbNS1_9allocatorIbEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::writeBoolVector(std::__1::unique_ptr<std::__1::vector<bool, std::__1::allocator<bool> >, std::__1::default_delete<std::__1::vector<bool, std::__1::allocator<bool> > > > const&) */
int _ZN7android6Parcel15writeBoolVectorERKNSt3__110unique_ptrINS1_6vectorIbNS1_9allocatorIbEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZNK7android6Parcel29readUtf8VectorFromUtf16VectorEPNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE */
/* Demangled: android::Parcel::readUtf8VectorFromUtf16Vector(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) const */
int _ZNK7android6Parcel29readUtf8VectorFromUtf16VectorEPNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE(void);

/* Symbol: _ZNSt3__113__vector_baseINS_10unique_ptrINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_14default_deleteIS7_EEEENS5_ISA_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_10unique_ptrINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_14default_deleteIS7_EEEENS5_ISA_EEED2Ev(void);

/* Symbol: _ZN7android9FdPrinter9printLineEPKc */
/* Demangled: android::FdPrinter::printLine(char const*) */
int _ZN7android9FdPrinter9printLineEPKc(void);

/* Symbol: _ZN7android8String165setToEPKDs */
/* Demangled: android::String16::setTo(char16_t const*) */
int _ZN7android8String165setToEPKDs(void);

/* Symbol: strzcmp16_h_n */
/* Demangled: strzcmp16_h_n */
int strzcmp16_h_n(void);

/* Symbol: _ZNK7android6Parcel9dataAvailEv */
/* Demangled: android::Parcel::dataAvail() const */
int _ZNK7android6Parcel9dataAvailEv(void);

/* Symbol: _ZN7android9BlobCache4BlobC1EPKvmb */
/* Demangled: android::BlobCache::Blob::Blob(void const*, unsigned long, bool) */
int _ZN7android9BlobCache4BlobC1EPKvmb(void);

/* Symbol: _ZN7android7String8D2Ev */
/* Demangled: android::String8::~String8() */
int _ZN7android7String8D2Ev(void);

/* Symbol: _ZN7android6Parcel16writeInt64VectorERKNSt3__110unique_ptrINS1_6vectorIlNS1_9allocatorIlEEEENS1_14default_deleteIS6_EEEE */
/* Demangled: android::Parcel::writeInt64Vector(std::__1::unique_ptr<std::__1::vector<long, std::__1::allocator<long> >, std::__1::default_delete<std::__1::vector<long, std::__1::allocator<long> > > > const&) */
int _ZN7android6Parcel16writeInt64VectorERKNSt3__110unique_ptrINS1_6vectorIlNS1_9allocatorIlEEEENS1_14default_deleteIS6_EEEE(void);

/* Symbol: _ZNK7android9BlobCache16getFlattenedSizeEv */
/* Demangled: android::BlobCache::getFlattenedSize() const */
int _ZNK7android9BlobCache16getFlattenedSizeEv(void);

/* Symbol: _ZN7android10VectorImpl7_shrinkEmm */
/* Demangled: android::VectorImpl::_shrink(unsigned long, unsigned long) */
int _ZN7android10VectorImpl7_shrinkEmm(void);

/* Symbol: _ZN7android16SortedVectorImplD1Ev */
/* Demangled: android::SortedVectorImpl::~SortedVectorImpl() */
int _ZN7android16SortedVectorImplD1Ev(void);

/* Symbol: _ZN7android6Parcel4Blob4initEiPvmb */
/* Demangled: android::Parcel::Blob::init(int, void*, unsigned long, bool) */
int _ZN7android6Parcel4Blob4initEiPvmb(void);

/* Symbol: _ZNK7android6Parcel8readByteEPa */
/* Demangled: android::Parcel::readByte(signed char*) const */
int _ZNK7android6Parcel8readByteEPa(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE12do_constructEPvm(void);

/* Symbol: _ZN7android10VectorImpl8insertAtEmm */
/* Demangled: android::VectorImpl::insertAt(unsigned long, unsigned long) */
int _ZN7android10VectorImpl8insertAtEmm(void);

/* Symbol: _ZN7android6Parcel13continueWriteEm */
/* Demangled: android::Parcel::continueWrite(unsigned long) */
int _ZN7android6Parcel13continueWriteEm(void);

/* Symbol: _ZN7android6Parcel16writeUtf8AsUtf16ERKNSt3__110unique_ptrINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS8_EEEE */
/* Demangled: android::Parcel::writeUtf8AsUtf16(std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN7android6Parcel16writeUtf8AsUtf16ERKNSt3__110unique_ptrINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_14default_deleteIS8_EEEE(void);

/* Symbol: _ZN7android9BlobCache4BlobD2Ev */
/* Demangled: android::BlobCache::Blob::~Blob() */
int _ZN7android9BlobCache4BlobD2Ev(void);

/* Symbol: __ubsan_handle_invalid_builtin_minimal */
/* Demangled: __ubsan_handle_invalid_builtin_minimal */
int __ubsan_handle_invalid_builtin_minimal(void);

/* Symbol: _ZNK7android12SharedBuffer5resetEm */
/* Demangled: android::SharedBuffer::reset(unsigned long) const */
int _ZNK7android12SharedBuffer5resetEm(void);

/* Symbol: _ZN7android7String8C2EPKcm */
/* Demangled: android::String8::String8(char const*, unsigned long) */
int _ZN7android7String8C2EPKcm(void);

/* Symbol: _ZN7android16ProcessCallStackD1Ev */
/* Demangled: android::ProcessCallStack::~ProcessCallStack() */
int _ZN7android16ProcessCallStackD1Ev(void);

/* Symbol: __ubsan_handle_float_cast_overflow_minimal */
/* Demangled: __ubsan_handle_float_cast_overflow_minimal */
int __ubsan_handle_float_cast_overflow_minimal(void);

/* Symbol: _ZN7android7String8C1Ev */
/* Demangled: android::String8::String8() */
int _ZN7android7String8C1Ev(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android6Parcel15writeBoolVectorERKNSt3__16vectorIbNS1_9allocatorIbEEEE */
/* Demangled: android::Parcel::writeBoolVector(std::__1::vector<bool, std::__1::allocator<bool> > const&) */
int _ZN7android6Parcel15writeBoolVectorERKNSt3__16vectorIbNS1_9allocatorIbEEEE(void);

/* Symbol: _ZNK7android6Parcel21unsafeReadTypedVectorINSt3__110unique_ptrINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_14default_deleteIS9_EEEESC_EEiPNS2_6vectorIT_NS7_ISE_EEEEMS0_KFiPT0_E */
/* Demangled: int android::Parcel::unsafeReadTypedVector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >(std::__1::vector<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::allocator<std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >*, int (android::Parcel::*)(std::__1::unique_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::default_delete<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) const) const */
int _ZNK7android6Parcel21unsafeReadTypedVectorINSt3__110unique_ptrINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_14default_deleteIS9_EEEESC_EEiPNS2_6vectorIT_NS7_ISE_EEEEMS0_KFiPT0_E(void);

/* Symbol: _ZNK7android6Parcel7objectsEv */
/* Demangled: android::Parcel::objects() const */
int _ZNK7android6Parcel7objectsEv(void);

/* Symbol: _ZN7android10LogPrinter9printLineEPKc */
/* Demangled: android::LogPrinter::printLine(char const*) */
int _ZN7android10LogPrinter9printLineEPKc(void);

/* Symbol: _ZN7android7String812appendFormatEPKcz */
/* Demangled: android::String8::appendFormat(char const*, ...) */
int _ZN7android7String812appendFormatEPKcz(void);

/* Symbol: _ZN7android7String86formatEPKcz */
/* Demangled: android::String8::format(char const*, ...) */
int _ZN7android7String86formatEPKcz(void);

/* Symbol: _ZNK7android6Parcel10readDoubleEPd */
/* Demangled: android::Parcel::readDouble(double*) const */
int _ZNK7android6Parcel10readDoubleEPd(void);

/* Symbol: _ZNK7android6Parcel12dataCapacityEv */
/* Demangled: android::Parcel::dataCapacity() const */
int _ZNK7android6Parcel12dataCapacityEv(void);

/* Symbol: _ZNK7android15LinearTransform18doForwardTransformElPl */
/* Demangled: android::LinearTransform::doForwardTransform(long, long*) const */
int _ZNK7android15LinearTransform18doForwardTransformElPl(void);

/* Symbol: _ZTTN7android6ThreadE */
/* Demangled: VTT for android::Thread */
extern void* _ZTTN7android6ThreadE;

/* Symbol: _ZN7android6Parcel19getGlobalAllocCountEv */
/* Demangled: android::Parcel::getGlobalAllocCount() */
int _ZN7android6Parcel19getGlobalAllocCountEv(void);

/* Symbol: _ZN7android6Looper10initTLSKeyEv */
/* Demangled: android::Looper::initTLSKey() */
int _ZN7android6Looper10initTLSKeyEv(void);

/* Symbol: _ZN7android6Looper4wakeEv */
/* Demangled: android::Looper::wake() */
int _ZN7android6Looper4wakeEv(void);

/* Symbol: _ZNK7android16ProcessCallStack5printERNS_7PrinterE */
/* Demangled: android::ProcessCallStack::print(android::Printer&) const */
int _ZNK7android16ProcessCallStack5printERNS_7PrinterE(void);

/* Symbol: _ZTVN7android9FdPrinterE */
/* Demangled: vtable for android::FdPrinter */
extern void* _ZTVN7android9FdPrinterE;

/* Symbol: _ZN7android7String8C1EPKcm */
/* Demangled: android::String8::String8(char const*, unsigned long) */
int _ZN7android7String8C1EPKcm(void);

/* Symbol: _ZN7android10VectorImpl13removeItemsAtEmm */
/* Demangled: android::VectorImpl::removeItemsAt(unsigned long, unsigned long) */
int _ZN7android10VectorImpl13removeItemsAtEmm(void);

/* Symbol: _ZN7android6Parcel8growDataEm */
/* Demangled: android::Parcel::growData(unsigned long) */
int _ZN7android6Parcel8growDataEm(void);

/* Symbol: _ZN7android7String87formatVEPKcSt9__va_list */
/* Demangled: android::String8::formatV(char const*, std::__va_list) */
int _ZN7android7String87formatVEPKcSt9__va_list(void);

/* Symbol: _ZN7android8String166appendERKS0_ */
/* Demangled: android::String16::append(android::String16 const&) */
int _ZN7android8String166appendERKS0_(void);

/* Symbol: _ZN7android6Parcel11writeUint64Em */
/* Demangled: android::Parcel::writeUint64(unsigned long) */
int _ZN7android6Parcel11writeUint64Em(void);

/* Symbol: _ZNK7android7RefBase11getWeakRefsEv */
/* Demangled: android::RefBase::getWeakRefs() const */
int _ZNK7android7RefBase11getWeakRefsEv(void);

/* Symbol: _ZN7android16SortedVectorImpl5mergeERKNS_10VectorImplE */
/* Demangled: android::SortedVectorImpl::merge(android::VectorImpl const&) */
int _ZN7android16SortedVectorImpl5mergeERKNS_10VectorImplE(void);

/* Symbol: _ZN7android7PrinterD2Ev */
/* Demangled: android::Printer::~Printer() */
int _ZN7android7PrinterD2Ev(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE10do_destroyEPvm */
/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE10do_destroyEPvm(void);

/* Symbol: _ZN7android6Parcel4Blob5clearEv */
/* Demangled: android::Parcel::Blob::clear() */
int _ZN7android6Parcel4Blob5clearEv(void);

/* Symbol: _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_ */
/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void);

/* Symbol: _ZN7android6Looper9pollInnerEi */
/* Demangled: android::Looper::pollInner(int) */
int _ZN7android6Looper9pollInnerEi(void);

/* Symbol: _ZN7android7RefBaseD2Ev */
/* Demangled: android::RefBase::~RefBase() */
int _ZN7android7RefBaseD2Ev(void);

/* Symbol: _ZN7android7String8C2ENS0_13StaticLinkageE */
/* Demangled: android::String8::String8(android::String8::StaticLinkage) */
int _ZN7android7String8C2ENS0_13StaticLinkageE(void);

/* Symbol: _ZN7android6Parcel4BlobD2Ev */
/* Demangled: android::Parcel::Blob::~Blob() */
int _ZN7android6Parcel4BlobD2Ev(void);

/* Symbol: _ZTv0_n24_N7android20SimpleLooperCallbackD0Ev */
/* Demangled: virtual thunk to android::SimpleLooperCallback::~SimpleLooperCallback() */
int _ZTv0_n24_N7android20SimpleLooperCallbackD0Ev(void);

/* Symbol: _ZN7android16SortedVectorImplaSERKS0_ */
/* Demangled: android::SortedVectorImpl::operator=(android::SortedVectorImpl const&) */
int _ZN7android16SortedVectorImplaSERKS0_(void);

/* Symbol: _ZNK7android10VectorImpl8itemSizeEv */
/* Demangled: android::VectorImpl::itemSize() const */
int _ZNK7android10VectorImpl8itemSizeEv(void);

/* Symbol: _ZN7android6Parcel12restartWriteEm */
/* Demangled: android::Parcel::restartWrite(unsigned long) */
int _ZN7android6Parcel12restartWriteEm(void);

/* Symbol: _ZN7android6LooperC2Eb */
/* Demangled: android::Looper::Looper(bool) */
int _ZN7android6LooperC2Eb(void);

/* Symbol: _ZN7android16ProcessCallStackC1ERKS0_ */
/* Demangled: android::ProcessCallStack::ProcessCallStack(android::ProcessCallStack const&) */
int _ZN7android16ProcessCallStackC1ERKS0_(void);

/* Symbol: __ubsan_handle_shift_out_of_bounds_minimal */
/* Demangled: __ubsan_handle_shift_out_of_bounds_minimal */
int __ubsan_handle_shift_out_of_bounds_minimal(void);

/* Symbol: _ZNK7android6Parcel10readUint64EPm */
/* Demangled: android::Parcel::readUint64(unsigned long*) const */
int _ZNK7android6Parcel10readUint64EPm(void);

/* Symbol: _ZN7android9BlobCache10CacheEntryC2Ev */
/* Demangled: android::BlobCache::CacheEntry::CacheEntry() */
int _ZN7android9BlobCache10CacheEntryC2Ev(void);

/* Symbol: _ZNK7android9BlobCache10CacheEntry8getValueEv */
/* Demangled: android::BlobCache::CacheEntry::getValue() const */
int _ZNK7android9BlobCache10CacheEntry8getValueEv(void);

/* Symbol: _ZN7android6Looper11sendMessageERKNS_2spINS_14MessageHandlerEEERKNS_7MessageE */
/* Demangled: android::Looper::sendMessage(android::sp<android::MessageHandler> const&, android::Message const&) */
int _ZN7android6Looper11sendMessageERKNS_2spINS_14MessageHandlerEEERKNS_7MessageE(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE12do_constructEPvm */
/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE12do_constructEPvm(void);

/* Symbol: _ZN7android7RefBaseC1Ev */
/* Demangled: android::RefBase::RefBase() */
int _ZN7android7RefBaseC1Ev(void);

/* Symbol: _ZNK7android6Parcel12objectsCountEv */
/* Demangled: android::Parcel::objectsCount() const */
int _ZNK7android6Parcel12objectsCountEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android10VectorImpl13finish_vectorEv */
/* Demangled: android::VectorImpl::finish_vector() */
int _ZN7android10VectorImpl13finish_vectorEv(void);

/* Symbol: _ZN7android8String16C2ERKS0_mm */
/* Demangled: android::String16::String16(android::String16 const&, unsigned long, unsigned long) */
int _ZN7android8String16C2ERKS0_mm(void);

/* Symbol: _Z24androidCreateThreadGetIDPFiPvES_PS_ */
/* Demangled: androidCreateThreadGetID(int (*)(void*), void*, void**) */
int _Z24androidCreateThreadGetIDPFiPvES_PS_(void);

/* Symbol: androidSetThreadPriority */
/* Demangled: androidSetThreadPriority */
int androidSetThreadPriority(void);

/* Symbol: _ZN7android6Parcel4BlobC1Ev */
/* Demangled: android::Parcel::Blob::Blob() */
int _ZN7android6Parcel4BlobC1Ev(void);

/* Symbol: _ZNK7android6Parcel4readEPvm */
/* Demangled: android::Parcel::read(void*, unsigned long) const */
int _ZNK7android6Parcel4readEPvm(void);

/* Symbol: _ZN7android9FdPrinterC2EijPKc */
/* Demangled: android::FdPrinter::FdPrinter(int, unsigned int, char const*) */
int _ZN7android9FdPrinterC2EijPKc(void);

/* Symbol: utf8_to_utf16_no_null_terminator */
/* Demangled: utf8_to_utf16_no_null_terminator */
int utf8_to_utf16_no_null_terminator(void);

/* Symbol: _ZNK7android6Parcel12dataPositionEv */
/* Demangled: android::Parcel::dataPosition() const */
int _ZNK7android6Parcel12dataPositionEv(void);

/* Symbol: _ZNK7android6Parcel9readFloatEv */
/* Demangled: android::Parcel::readFloat() const */
int _ZNK7android6Parcel9readFloatEv(void);

/* Symbol: _ZN7android9BlobCache10CacheEntryC2ERKS1_ */
/* Demangled: android::BlobCache::CacheEntry::CacheEntry(android::BlobCache::CacheEntry const&) */
int _ZN7android9BlobCache10CacheEntryC2ERKS1_(void);

/* Symbol: _ZN7android7String810appendPathEPKc */
/* Demangled: android::String8::appendPath(char const*) */
int _ZN7android7String810appendPathEPKc(void);

/* Symbol: _ZNK7android6Parcel16readDoubleVectorEPNSt3__16vectorIdNS1_9allocatorIdEEEE */
/* Demangled: android::Parcel::readDoubleVector(std::__1::vector<double, std::__1::allocator<double> >*) const */
int _ZNK7android6Parcel16readDoubleVectorEPNSt3__16vectorIdNS1_9allocatorIdEEEE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKUTILS_H */
