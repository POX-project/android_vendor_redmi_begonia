/*
 * Reverse-Engineered ABI Specification for: libmtkcam_device3.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_device3.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_DEVICE3_H
#define BEGONIA_RE_LIBMTKCAM_DEVICE3_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IAppStreamManager::PhysicalResult> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTv0_n24_N5NSCam17CameraDevice3ImplD0Ev */
/* Demangled: virtual thunk to NSCam::CameraDevice3Impl::~CameraDevice3Impl() */
int _ZTv0_n24_N5NSCam17CameraDevice3ImplD0Ev(void);

/* Symbol: _ZNK5NSCam2v324CameraDevice3SessionImpl23getSafeAppStreamManagerEv */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::getSafeAppStreamManager() const */
int _ZNK5NSCam2v324CameraDevice3SessionImpl23getSafeAppStreamManagerEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: end */
/* Demangled: end */
extern void* end;

/* Symbol: _ZTCN5NSCam17CameraDevice3ImplE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-NSCam::CameraDevice3Impl */
extern void* _ZTCN5NSCam17CameraDevice3ImplE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN5NSCam17CameraDevice3ImplE */
/* Demangled: VTT for NSCam::CameraDevice3Impl */
extern void* _ZTTN5NSCam17CameraDevice3ImplE;

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl29getCaptureResultMetadataQueueENSt3__18functionIFvRKN7android8hardware12MQDescriptorIhLNS5_8MQFlavorE1EEEEEE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::getCaptureResultMetadataQueue(std::__1::function<void (android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN5NSCam2v324CameraDevice3SessionImpl29getCaptureResultMetadataQueueENSt3__18functionIFvRKN7android8hardware12MQDescriptorIhLNS5_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam2v324CameraDevice3SessionImplD1Ev */
/* Demangled: non-virtual thunk to NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
int _ZThn8_N5NSCam2v324CameraDevice3SessionImplD1Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam17CameraDevice3Impl10MyDebuggeeENS_9allocatorIS3_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::CameraDevice3Impl::MyDebuggee, std::__1::allocator<NSCam::CameraDevice3Impl::MyDebuggee> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam17CameraDevice3Impl10MyDebuggeeENS_9allocatorIS3_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl19tryRunCommandLockedElPKcNSt3__18functionIFvvEEE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::tryRunCommandLocked(long, char const*, std::__1::function<void ()>) */
int _ZN5NSCam2v324CameraDevice3SessionImpl19tryRunCommandLockedElPKcNSt3__18functionIFvvEEE(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl9dumpStateERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam2v324CameraDevice3SessionImpl9dumpStateERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: __fe_getround */
/* Demangled: __fe_getround */
int __fe_getround(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl11serviceDiedEmRKN7android2wpINS2_4hidl4base4V1_05IBaseEEE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN5NSCam2v324CameraDevice3SessionImpl11serviceDiedEmRKN7android2wpINS2_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model17UserRequestParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::UserRequestParams, std::__1::allocator<NSCam::v3::pipeline::model::UserRequestParams> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model17UserRequestParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEEE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIllEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, long> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIllEEEE;

/* Symbol: __floatditf */
/* Demangled: __floatditf */
int __floatditf(void);

/* Symbol: _ZN5NSCam17CameraDevice3ImplC2EPNS_20ICameraDeviceManagerEPNS_17IMetadataProviderEPKcii */
/* Demangled: NSCam::CameraDevice3Impl::CameraDevice3Impl(NSCam::ICameraDeviceManager*, NSCam::IMetadataProvider*, char const*, int, int) */
int _ZN5NSCam17CameraDevice3ImplC2EPNS_20ICameraDeviceManagerEPNS_17IMetadataProviderEPKcii(void);

/* Symbol: _ZNSt3__16vectorIN7android7String8ENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<android::String8, std::__1::allocator<android::String8> >::__push_back_slow_path<android::String8>(android::String8&&) */
int _ZNSt3__16vectorIN7android7String8ENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIlJNS_4pairIllEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, long>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, long>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, long>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, long>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, long> > >::__emplace_unique_key_args<long, std::__1::pair<long, long> >(long const&, std::__1::pair<long, long>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIlJNS_4pairIllEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEE;

/* Symbol: _ZThn16_N5NSCam2v324CameraDevice3SessionImplD0Ev */
/* Demangled: non-virtual thunk to NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
int _ZThn16_N5NSCam2v324CameraDevice3SessionImplD0Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam17CameraDevice3Impl10MyDebuggeeENS_9allocatorIS3_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::CameraDevice3Impl::MyDebuggee, std::__1::allocator<NSCam::CameraDevice3Impl::MyDebuggee> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam17CameraDevice3Impl10MyDebuggeeENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: __unordtf2 */
/* Demangled: __unordtf2 */
int __unordtf2(void);

/* Symbol: createVirtualCameraDevice */
/* Demangled: createVirtualCameraDevice */
int createVirtualCameraDevice(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl12onOpenLockedERKN7android2spINS2_8hardware6camera6device4V3_421ICameraDeviceCallbackEEE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::onOpenLocked(android::sp<android::hardware::camera::device::V3_4::ICameraDeviceCallback> const&) */
int _ZN5NSCam2v324CameraDevice3SessionImpl12onOpenLockedERKN7android2spINS2_8hardware6camera6device4V3_421ICameraDeviceCallbackEEE(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23UserConfigurationParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::UserConfigurationParams, std::__1::allocator<NSCam::v3::pipeline::model::UserConfigurationParams> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23UserConfigurationParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTCN5NSCam2v324CameraDevice3SessionImplE0_N7android8hardware6camera6device4V3_220ICameraDeviceSessionE */
/* Demangled: construction vtable for android::hardware::camera::device::V3_2::ICameraDeviceSession-in-NSCam::v3::CameraDevice3SessionImpl */
extern void* _ZTCN5NSCam2v324CameraDevice3SessionImplE0_N7android8hardware6camera6device4V3_220ICameraDeviceSessionE;

/* Symbol: _ZTVN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerE */
/* Demangled: vtable for NSCam::v3::CameraDevice3SessionImpl::CommandHandler */
extern void* _ZTVN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam20ICameraDeviceManager14IVirtualDevice4InfoENS_9allocatorIS4_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::ICameraDeviceManager::IVirtualDevice::Info, std::__1::allocator<NSCam::ICameraDeviceManager::IVirtualDevice::Info> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam20ICameraDeviceManager14IVirtualDevice4InfoENS_9allocatorIS4_EEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IAppStreamManager::PhysicalResult> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<android::LogPrinter, std::__1::allocator<android::LogPrinter> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEEE;

/* Symbol: _ZN5NSCam17CameraDevice3ImplD2Ev */
/* Demangled: NSCam::CameraDevice3Impl::~CameraDevice3Impl() */
int _ZN5NSCam17CameraDevice3ImplD2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::__emplace_unique_key_args<long, std::__1::pair<long, android::sp<NSCam::v3::IImageStreamBuffer> > >(long const&, std::__1::pair<long, android::sp<NSCam::v3::IImageStreamBuffer> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::LogPrinter, std::__1::allocator<android::LogPrinter> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23UserConfigurationParamsENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::UserConfigurationParams, std::__1::allocator<NSCam::v3::pipeline::model::UserConfigurationParams> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23UserConfigurationParamsENS_9allocatorIS5_EEEE;

/* Symbol: _ZThn8_N5NSCam2v324CameraDevice3SessionImplD0Ev */
/* Demangled: non-virtual thunk to NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
int _ZThn8_N5NSCam2v324CameraDevice3SessionImplD0Ev(void);

/* Symbol: __subtf3 */
/* Demangled: __subtf3 */
int __subtf3(void);

/* Symbol: createCameraDevice3Session */
/* Demangled: createCameraDevice3Session */
int createCameraDevice3Session(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl5closeEv */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::close() */
int _ZN5NSCam2v324CameraDevice3SessionImpl5closeEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__emplace_unique_key_args<long, std::__1::pair<long, android::sp<NSCam::v3::IMetaStreamInfo> > >(long const&, std::__1::pair<long, android::sp<NSCam::v3::IMetaStreamInfo> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTTN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerE */
/* Demangled: VTT for NSCam::v3::CameraDevice3SessionImpl::CommandHandler */
extern void* _ZTTN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerE;

/* Symbol: _ZTVN5NSCam17CameraDevice3ImplE */
/* Demangled: vtable for NSCam::CameraDevice3Impl */
extern void* _ZTVN5NSCam17CameraDevice3ImplE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<long, std::__1::pair<long, android::sp<NSCam::v3::IImageStreamInfo> > >(long const&, std::__1::pair<long, android::sp<NSCam::v3::IImageStreamInfo> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::EventLogPrinter, std::__1::allocator<NSCam::EventLogPrinter> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::LogPrinter, std::__1::allocator<android::LogPrinter> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZTCN5NSCam2v324CameraDevice3SessionImplE0_N7android8hardware6camera6device4V3_320ICameraDeviceSessionE */
/* Demangled: construction vtable for android::hardware::camera::device::V3_3::ICameraDeviceSession-in-NSCam::v3::CameraDevice3SessionImpl */
extern void* _ZTCN5NSCam2v324CameraDevice3SessionImplE0_N7android8hardware6camera6device4V3_320ICameraDeviceSessionE;

/* Symbol: _ZTCN5NSCam2v324CameraDevice3SessionImplE0_NS_21ICameraDevice3SessionE */
/* Demangled: construction vtable for NSCam::ICameraDevice3Session-in-NSCam::v3::CameraDevice3SessionImpl */
extern void* _ZTCN5NSCam2v324CameraDevice3SessionImplE0_NS_21ICameraDevice3SessionE;

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImplC1ERKNS_21ICameraDevice3Session12CreationInfoE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CameraDevice3SessionImpl(NSCam::ICameraDevice3Session::CreationInfo const&) */
int _ZN5NSCam2v324CameraDevice3SessionImplC1ERKNS_21ICameraDevice3Session12CreationInfoE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, long>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, long>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, long>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, long> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE8__rehashEm(void);

/* Symbol: __lttf2 */
/* Demangled: __lttf2 */
int __lttf2(void);

/* Symbol: __getf2 */
/* Demangled: __getf2 */
int __getf2(void);

/* Symbol: __gttf2 */
/* Demangled: __gttf2 */
int __gttf2(void);

/* Symbol: __letf2 */
/* Demangled: __letf2 */
int __letf2(void);

/* Symbol: _ZN5NSCam17CameraDevice3Impl24getCameraCharacteristicsENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS4_8hidl_vecIhEEEEE */
/* Demangled: NSCam::CameraDevice3Impl::getCameraCharacteristics(std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN5NSCam17CameraDevice3Impl24getCameraCharacteristicsENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS4_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN5NSCam17CameraDevice3Impl9dumpStateERKN7android8hardware11hidl_handleE */
/* Demangled: NSCam::CameraDevice3Impl::dumpState(android::hardware::hidl_handle const&) */
int _ZN5NSCam17CameraDevice3Impl9dumpStateERKN7android8hardware11hidl_handleE(void);

/* Symbol: _ZThn8_N5NSCam17CameraDevice3ImplD1Ev */
/* Demangled: non-virtual thunk to NSCam::CameraDevice3Impl::~CameraDevice3Impl() */
int _ZThn8_N5NSCam17CameraDevice3ImplD1Ev(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerC2Ei */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CommandHandler::CommandHandler(int) */
int _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerC2Ei(void);

/* Symbol: _ZTVN5NSCam2v320DisplayIdleDelayUtilE */
/* Demangled: vtable for NSCam::v3::DisplayIdleDelayUtil */
extern void* _ZTVN5NSCam2v320DisplayIdleDelayUtilE;

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _Z29getCameraDevice3DebugLogLevelv */
/* Demangled: getCameraDevice3DebugLogLevel() */
int _Z29getCameraDevice3DebugLogLevelv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam20ICameraDeviceManager14IVirtualDevice4InfoENS_9allocatorIS4_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::ICameraDeviceManager::IVirtualDevice::Info, std::__1::allocator<NSCam::ICameraDeviceManager::IVirtualDevice::Info> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam20ICameraDeviceManager14IVirtualDevice4InfoENS_9allocatorIS4_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK5NSCam2v324CameraDevice3SessionImpl14CommandHandler5printERN7android7PrinterE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CommandHandler::print(android::Printer&) const */
int _ZNK5NSCam2v324CameraDevice3SessionImpl14CommandHandler5printERN7android7PrinterE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IAppStreamManager::PhysicalResult> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, long>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, long>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, long>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, long> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE6rehashEm(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZTCN5NSCam2v324CameraDevice3SessionImplE0_N7android8hardware6camera6device4V3_420ICameraDeviceSessionE */
/* Demangled: construction vtable for android::hardware::camera::device::V3_4::ICameraDeviceSession-in-NSCam::v3::CameraDevice3SessionImpl */
extern void* _ZTCN5NSCam2v324CameraDevice3SessionImplE0_N7android8hardware6camera6device4V3_420ICameraDeviceSessionE;

/* Symbol: _ZN5NSCam17CameraDevice3ImplD1Ev */
/* Demangled: NSCam::CameraDevice3Impl::~CameraDevice3Impl() */
int _ZN5NSCam17CameraDevice3ImplD1Ev(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler18requestExitAndWaitEl */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CommandHandler::requestExitAndWait(long) */
int _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler18requestExitAndWaitEl(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam17CameraDevice3Impl10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE */
/* Demangled: NSCam::CameraDevice3Impl::MyDebuggee::debug(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam17CameraDevice3Impl10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE(void);

/* Symbol: _ZN5NSCam17CameraDevice3Impl4openERKN7android2spINS1_8hardware6camera6device4V3_221ICameraDeviceCallbackEEENSt3__18functionIFvNS4_6common4V1_06StatusERKNS2_INS6_20ICameraDeviceSessionEEEEEE */
/* Demangled: NSCam::CameraDevice3Impl::open(android::sp<android::hardware::camera::device::V3_2::ICameraDeviceCallback> const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::sp<android::hardware::camera::device::V3_2::ICameraDeviceSession> const&)>) */
int _ZN5NSCam17CameraDevice3Impl4openERKN7android2spINS1_8hardware6camera6device4V3_221ICameraDeviceCallbackEEENSt3__18functionIFvNS4_6common4V1_06StatusERKNS2_INS6_20ICameraDeviceSessionEEEEEE(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl23onProcessCaptureRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEERKNS4_INS6_4V3_211BufferCacheEEERj */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::onProcessCaptureRequest(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::CaptureRequest> const&, android::hardware::hidl_vec<android::hardware::camera::device::V3_2::BufferCache> const&, unsigned int&) */
int _ZN5NSCam2v324CameraDevice3SessionImpl23onProcessCaptureRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEERKNS4_INS6_4V3_211BufferCacheEEERj(void);

/* Symbol: _ZTTN5NSCam2v324CameraDevice3SessionImplE */
/* Demangled: VTT for NSCam::v3::CameraDevice3SessionImpl */
extern void* _ZTTN5NSCam2v324CameraDevice3SessionImplE;

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl24onConfigureStreamsLockedERKNS0_26WrappedStreamConfigurationERNS0_29WrappedHalStreamConfigurationE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::onConfigureStreamsLocked(NSCam::v3::WrappedStreamConfiguration const&, NSCam::v3::WrappedHalStreamConfiguration&) */
int _ZN5NSCam2v324CameraDevice3SessionImpl24onConfigureStreamsLockedERKNS0_26WrappedStreamConfigurationERNS0_29WrappedHalStreamConfigurationE(void);

/* Symbol: _ZNK5NSCam2v324CameraDevice3SessionImpl20getSafePipelineModelEv */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::getSafePipelineModel() const */
int _ZNK5NSCam2v324CameraDevice3SessionImpl20getSafePipelineModelEv(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN5NSCam17CameraDevice3Impl10initializeERKN7android2spINS_21ICameraDevice3SessionEEE */
/* Demangled: NSCam::CameraDevice3Impl::initialize(android::sp<NSCam::ICameraDevice3Session> const&) */
int _ZN5NSCam17CameraDevice3Impl10initializeERKN7android2spINS_21ICameraDevice3SessionEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::EventLogPrinter, std::__1::allocator<NSCam::EventLogPrinter> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTCN5NSCam2v324CameraDevice3SessionImplE8_NS0_8pipeline5model22IPipelineModelCallbackE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::IPipelineModelCallback-in-NSCam::v3::CameraDevice3SessionImpl */
extern void* _ZTCN5NSCam2v324CameraDevice3SessionImplE8_NS0_8pipeline5model22IPipelineModelCallbackE;

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _Z21mapToHidlCameraStatusi */
/* Demangled: mapToHidlCameraStatus(int) */
int _Z21mapToHidlCameraStatusi(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler3addEPKcNSt3__18functionIFvvEEE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CommandHandler::add(char const*, std::__1::function<void ()>) */
int _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler3addEPKcNSt3__18functionIFvvEEE(void);

/* Symbol: _ZTCN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::v3::CameraDevice3SessionImpl::CommandHandler */
extern void* _ZTCN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerE0_N7android6ThreadE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam20ICameraDeviceManager14IVirtualDevice4InfoENS_9allocatorIS4_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::ICameraDeviceManager::IVirtualDevice::Info, std::__1::allocator<NSCam::ICameraDeviceManager::IVirtualDevice::Info> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam20ICameraDeviceManager14IVirtualDevice4InfoENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::EventLogPrinter, std::__1::allocator<NSCam::EventLogPrinter> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEEE;

/* Symbol: _ZThn8_N5NSCam17CameraDevice3ImplD0Ev */
/* Demangled: non-virtual thunk to NSCam::CameraDevice3Impl::~CameraDevice3Impl() */
int _ZThn8_N5NSCam17CameraDevice3ImplD0Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE5clearEv */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::clear() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE5clearEv(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEEE;

/* Symbol: _ZTVN5NSCam2v317IAppStreamManager14PhysicalResultE */
/* Demangled: vtable for NSCam::v3::IAppStreamManager::PhysicalResult */
extern void* _ZTVN5NSCam2v317IAppStreamManager14PhysicalResultE;

/* Symbol: _ZTVN7android6VectorIN5NSCam2v317IAppStreamManager7RequestEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::IAppStreamManager::Request> */
extern void* _ZTVN7android6VectorIN5NSCam2v317IAppStreamManager7RequestEEE;

/* Symbol: _ZN5NSCam17CameraDevice3Impl5debugERKN7android8hardware11hidl_handleERKNS2_8hidl_vecINS2_11hidl_stringEEE */
/* Demangled: NSCam::CameraDevice3Impl::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN5NSCam17CameraDevice3Impl5debugERKN7android8hardware11hidl_handleERKNS2_8hidl_vecINS2_11hidl_stringEEE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam17CameraDevice3Impl10MyDebuggeeENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::CameraDevice3Impl::MyDebuggee, std::__1::allocator<NSCam::CameraDevice3Impl::MyDebuggee> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam17CameraDevice3Impl10MyDebuggeeENS_9allocatorIS3_EEEE;

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerC1Ei */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CommandHandler::CommandHandler(int) */
int _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerC1Ei(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImplD2Ev */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
int _ZN5NSCam2v324CameraDevice3SessionImplD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam17CameraDevice3ImplC1EPNS_20ICameraDeviceManagerEPNS_17IMetadataProviderEPKcii */
/* Demangled: NSCam::CameraDevice3Impl::CameraDevice3Impl(NSCam::ICameraDeviceManager*, NSCam::IMetadataProvider*, char const*, int, int) */
int _ZN5NSCam17CameraDevice3ImplC1EPNS_20ICameraDeviceManagerEPNS_17IMetadataProviderEPKcii(void);

/* Symbol: _ZN5NSCam17CameraDevice3Impl15getResourceCostENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS7_18CameraResourceCostEEEE */
/* Demangled: NSCam::CameraDevice3Impl::getResourceCost(std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::camera::common::V1_0::CameraResourceCost const&)>) */
int _ZN5NSCam17CameraDevice3Impl15getResourceCostENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS7_18CameraResourceCostEEEE(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl25processCaptureRequest_3_4ERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEERKNS4_INS6_4V3_211BufferCacheEEENSt3__18functionIFvNS5_6common4V1_06StatusEjEEE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::processCaptureRequest_3_4(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::CaptureRequest> const&, android::hardware::hidl_vec<android::hardware::camera::device::V3_2::BufferCache> const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, unsigned int)>) */
int _ZN5NSCam2v324CameraDevice3SessionImpl25processCaptureRequest_3_4ERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEERKNS4_INS6_4V3_211BufferCacheEEENSt3__18functionIFvNS5_6common4V1_06StatusEjEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE8do_splatEPvPKvm(void);

/* Symbol: _ZThn8_NK5NSCam17CameraDevice3Impl22getDeviceInterfaceBaseERN7android2spINS1_4hidl4base4V1_05IBaseEEE */
/* Demangled: non-virtual thunk to NSCam::CameraDevice3Impl::getDeviceInterfaceBase(android::sp<android::hidl::base::V1_0::IBase>&) const */
int _ZThn8_NK5NSCam17CameraDevice3Impl22getDeviceInterfaceBaseERN7android2spINS1_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZTCN5NSCam2v324CameraDevice3SessionImplE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-NSCam::v3::CameraDevice3SessionImpl */
extern void* _ZTCN5NSCam2v324CameraDevice3SessionImplE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN5NSCam15EventLogPrinterE */
/* Demangled: vtable for NSCam::EventLogPrinter */
extern void* _ZTVN5NSCam15EventLogPrinterE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEEE;

/* Symbol: _ZThn16_N5NSCam2v324CameraDevice3SessionImpl11serviceDiedEmRKN7android2wpINS2_4hidl4base4V1_05IBaseEEE */
/* Demangled: non-virtual thunk to NSCam::v3::CameraDevice3SessionImpl::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZThn16_N5NSCam2v324CameraDevice3SessionImpl11serviceDiedEmRKN7android2wpINS2_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZThn8_N5NSCam2v324CameraDevice3SessionImpl14onFrameUpdatedERKNS0_8pipeline5model18UserOnFrameUpdatedE */
/* Demangled: non-virtual thunk to NSCam::v3::CameraDevice3SessionImpl::onFrameUpdated(NSCam::v3::pipeline::model::UserOnFrameUpdated const&) */
int _ZThn8_N5NSCam2v324CameraDevice3SessionImpl14onFrameUpdatedERKNS0_8pipeline5model18UserOnFrameUpdatedE(void);

/* Symbol: __cmptf2 */
/* Demangled: __cmptf2 */
int __cmptf2(void);

/* Symbol: __fe_raise_inexact */
/* Demangled: __fe_raise_inexact */
int __fe_raise_inexact(void);

/* Symbol: _ZN5NSCam17CameraDevice3ImplD0Ev */
/* Demangled: NSCam::CameraDevice3Impl::~CameraDevice3Impl() */
int _ZN5NSCam17CameraDevice3ImplD0Ev(void);

/* Symbol: _ZNK5NSCam17CameraDevice3Impl22getDeviceInterfaceBaseERN7android2spINS1_4hidl4base4V1_05IBaseEEE */
/* Demangled: NSCam::CameraDevice3Impl::getDeviceInterfaceBase(android::sp<android::hidl::base::V1_0::IBase>&) const */
int _ZNK5NSCam17CameraDevice3Impl22getDeviceInterfaceBaseERN7android2spINS1_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl21processCaptureRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_214CaptureRequestEEERKNS4_INS7_11BufferCacheEEENSt3__18functionIFvNS5_6common4V1_06StatusEjEEE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::processCaptureRequest(android::hardware::hidl_vec<android::hardware::camera::device::V3_2::CaptureRequest> const&, android::hardware::hidl_vec<android::hardware::camera::device::V3_2::BufferCache> const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, unsigned int)>) */
int _ZN5NSCam2v324CameraDevice3SessionImpl21processCaptureRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_214CaptureRequestEEERKNS4_INS7_11BufferCacheEEENSt3__18functionIFvNS5_6common4V1_06StatusEjEEE(void);

/* Symbol: __multf3 */
/* Demangled: __multf3 */
int __multf3(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZTCN5NSCam17CameraDevice3ImplE8_NS_20ICameraDeviceManager14IVirtualDeviceE */
/* Demangled: construction vtable for NSCam::ICameraDeviceManager::IVirtualDevice-in-NSCam::CameraDevice3Impl */
extern void* _ZTCN5NSCam17CameraDevice3ImplE8_NS_20ICameraDeviceManager14IVirtualDeviceE;

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl20configureStreams_3_4ERKN7android8hardware6camera6device4V3_419StreamConfigurationENSt3__18functionIFvNS4_6common4V1_06StatusERKNS6_22HalStreamConfigurationEEEE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::configureStreams_3_4(android::hardware::camera::device::V3_4::StreamConfiguration const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::camera::device::V3_4::HalStreamConfiguration const&)>) */
int _ZN5NSCam2v324CameraDevice3SessionImpl20configureStreams_3_4ERKN7android8hardware6camera6device4V3_419StreamConfigurationENSt3__18functionIFvNS4_6common4V1_06StatusERKNS6_22HalStreamConfigurationEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IAppStreamManager::PhysicalResult> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IAppStreamManager::PhysicalResult> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE12do_constructEPvm(void);

/* Symbol: _ZTCN5NSCam17CameraDevice3ImplE0_N7android8hardware6camera6device4V3_213ICameraDeviceE */
/* Demangled: construction vtable for android::hardware::camera::device::V3_2::ICameraDevice-in-NSCam::CameraDevice3Impl */
extern void* _ZTCN5NSCam17CameraDevice3ImplE0_N7android8hardware6camera6device4V3_213ICameraDeviceE;

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl4openERKN7android2spINS2_8hardware6camera6device4V3_421ICameraDeviceCallbackEEE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::open(android::sp<android::hardware::camera::device::V3_4::ICameraDeviceCallback> const&) */
int _ZN5NSCam2v324CameraDevice3SessionImpl4openERKN7android2spINS2_8hardware6camera6device4V3_421ICameraDeviceCallbackEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23UserConfigurationParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::UserConfigurationParams, std::__1::allocator<NSCam::v3::pipeline::model::UserConfigurationParams> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23UserConfigurationParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > >::__emplace_unique_key_args<long, std::__1::pair<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >(long const&, std::__1::pair<long, android::sp<NSCam::v3::IMetaStreamBuffer> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZTv0_n24_N5NSCam2v324CameraDevice3SessionImplD1Ev */
/* Demangled: virtual thunk to NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
int _ZTv0_n24_N5NSCam2v324CameraDevice3SessionImplD1Ev(void);

/* Symbol: __eqtf2 */
/* Demangled: __eqtf2 */
int __eqtf2(void);

/* Symbol: __netf2 */
/* Demangled: __netf2 */
int __netf2(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl12flushAndWaitEv */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::flushAndWait() */
int _ZN5NSCam2v324CameraDevice3SessionImpl12flushAndWaitEv(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl20configureStreams_3_3ERKN7android8hardware6camera6device4V3_219StreamConfigurationENSt3__18functionIFvNS4_6common4V1_06StatusERKNS5_4V3_322HalStreamConfigurationEEEE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::configureStreams_3_3(android::hardware::camera::device::V3_2::StreamConfiguration const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::camera::device::V3_3::HalStreamConfiguration const&)>) */
int _ZN5NSCam2v324CameraDevice3SessionImpl20configureStreams_3_3ERKN7android8hardware6camera6device4V3_219StreamConfigurationENSt3__18functionIFvNS4_6common4V1_06StatusERKNS5_4V3_322HalStreamConfigurationEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm(void);

/* Symbol: _ZTCN5NSCam2v324CameraDevice3SessionImplE16_N7android8hardware20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-NSCam::v3::CameraDevice3SessionImpl */
extern void* _ZTCN5NSCam2v324CameraDevice3SessionImplE16_N7android8hardware20hidl_death_recipientE;

/* Symbol: _ZN5NSCam17CameraDevice3Impl12setTorchModeEN7android8hardware6camera6common4V1_09TorchModeE */
/* Demangled: NSCam::CameraDevice3Impl::setTorchMode(android::hardware::camera::common::V1_0::TorchMode) */
int _ZN5NSCam17CameraDevice3Impl12setTorchModeEN7android8hardware6camera6common4V1_09TorchModeE(void);

/* Symbol: _ZThn8_NK5NSCam17CameraDevice3Impl13getDeviceInfoEv */
/* Demangled: non-virtual thunk to NSCam::CameraDevice3Impl::getDeviceInfo() const */
int _ZThn8_NK5NSCam17CameraDevice3Impl13getDeviceInfoEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl5flushEv */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::flush() */
int _ZN5NSCam2v324CameraDevice3SessionImpl5flushEv(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImplD1Ev */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
int _ZN5NSCam2v324CameraDevice3SessionImplD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZTVN5NSCam2v324CameraDevice3SessionImplE */
/* Demangled: vtable for NSCam::v3::CameraDevice3SessionImpl */
extern void* _ZTVN5NSCam2v324CameraDevice3SessionImplE;

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl30getCaptureRequestMetadataQueueENSt3__18functionIFvRKN7android8hardware12MQDescriptorIhLNS5_8MQFlavorE1EEEEEE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::getCaptureRequestMetadataQueue(std::__1::function<void (android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN5NSCam2v324CameraDevice3SessionImpl30getCaptureRequestMetadataQueueENSt3__18functionIFvRKN7android8hardware12MQDescriptorIhLNS5_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE12do_constructEPvm(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::v3::IAppStreamManager::PhysicalResult> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEEE;

/* Symbol: _ZTv0_n24_N5NSCam17CameraDevice3ImplD1Ev */
/* Demangled: virtual thunk to NSCam::CameraDevice3Impl::~CameraDevice3Impl() */
int _ZTv0_n24_N5NSCam17CameraDevice3ImplD1Ev(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl16enableRequestingEv */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::enableRequesting() */
int _ZN5NSCam2v324CameraDevice3SessionImpl16enableRequestingEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE5clearEv */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, long>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, long>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, long>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, long> > >::clear() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE5clearEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm(void);

/* Symbol: __addtf3 */
/* Demangled: __addtf3 */
int __addtf3(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl16configureStreamsERKN7android8hardware6camera6device4V3_219StreamConfigurationENSt3__18functionIFvNS4_6common4V1_06StatusERKNS6_22HalStreamConfigurationEEEE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::configureStreams(android::hardware::camera::device::V3_2::StreamConfiguration const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::camera::device::V3_2::HalStreamConfiguration const&)>) */
int _ZN5NSCam2v324CameraDevice3SessionImpl16configureStreamsERKN7android8hardware6camera6device4V3_219StreamConfigurationENSt3__18functionIFvNS4_6common4V1_06StatusERKNS6_22HalStreamConfigurationEEEE(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl31constructDefaultRequestSettingsEN7android8hardware6camera6device4V3_215RequestTemplateENSt3__18functionIFvNS4_6common4V1_06StatusERKNS3_8hidl_vecIhEEEEE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::constructDefaultRequestSettings(android::hardware::camera::device::V3_2::RequestTemplate, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN5NSCam2v324CameraDevice3SessionImpl31constructDefaultRequestSettingsEN7android8hardware6camera6device4V3_215RequestTemplateENSt3__18functionIFvNS4_6common4V1_06StatusERKNS3_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImplC2ERKNS_21ICameraDevice3Session12CreationInfoE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CameraDevice3SessionImpl(NSCam::ICameraDevice3Session::CreationInfo const&) */
int _ZN5NSCam2v324CameraDevice3SessionImplC2ERKNS_21ICameraDevice3Session12CreationInfoE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_compareEPKvS5_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_destroyEPvm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model17UserRequestParamsENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::UserRequestParams, std::__1::allocator<NSCam::v3::pipeline::model::UserRequestParams> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model17UserRequestParamsENS_9allocatorIS5_EEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl13onFlushLockedEv */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::onFlushLocked() */
int _ZN5NSCam2v324CameraDevice3SessionImpl13onFlushLockedEv(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler8waitDoneEPvl */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CommandHandler::waitDone(void*, long) */
int _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler8waitDoneEPvl(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl26handleCommandFailureLockedEi */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::handleCommandFailureLocked(int) */
int _ZN5NSCam2v324CameraDevice3SessionImpl26handleCommandFailureLockedEi(void);

/* Symbol: _ZNK5NSCam17CameraDevice3Impl13getDeviceInfoEv */
/* Demangled: NSCam::CameraDevice3Impl::getDeviceInfo() const */
int _ZNK5NSCam17CameraDevice3Impl13getDeviceInfoEv(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl13onCloseLockedEv */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::onCloseLocked() */
int _ZN5NSCam2v324CameraDevice3SessionImpl13onCloseLockedEv(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler10threadLoopEv */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CommandHandler::threadLoop() */
int _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler10threadLoopEv(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl14onFrameUpdatedERKNS0_8pipeline5model18UserOnFrameUpdatedE */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::onFrameUpdated(NSCam::v3::pipeline::model::UserOnFrameUpdated const&) */
int _ZN5NSCam2v324CameraDevice3SessionImpl14onFrameUpdatedERKNS0_8pipeline5model18UserOnFrameUpdatedE(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl23waitUntilOpenDoneLockedEv */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::waitUntilOpenDoneLocked() */
int _ZN5NSCam2v324CameraDevice3SessionImpl23waitUntilOpenDoneLockedEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE5clearEv */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> > > >::clear() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE5clearEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model17UserRequestParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::UserRequestParams, std::__1::allocator<NSCam::v3::pipeline::model::UserRequestParams> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model17UserRequestParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IAppStreamManager::PhysicalResult> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZThn16_N5NSCam2v324CameraDevice3SessionImplD1Ev */
/* Demangled: non-virtual thunk to NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
int _ZThn16_N5NSCam2v324CameraDevice3SessionImplD1Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam2v324CameraDevice3SessionImplD0Ev */
/* Demangled: virtual thunk to NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
int _ZTv0_n24_N5NSCam2v324CameraDevice3SessionImplD0Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam17CameraDevice3Impl10MyDebuggee5mNameE */
/* Demangled: NSCam::CameraDevice3Impl::MyDebuggee::mName */
extern void* _ZN5NSCam17CameraDevice3Impl10MyDebuggee5mNameE;

/* Symbol: _ZTVN5NSCam17CameraDevice3Impl10MyDebuggeeE */
/* Demangled: vtable for NSCam::CameraDevice3Impl::MyDebuggee */
extern void* _ZTVN5NSCam17CameraDevice3Impl10MyDebuggeeE;

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImpl17disableRequestingEv */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::disableRequesting() */
int _ZN5NSCam2v324CameraDevice3SessionImpl17disableRequestingEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam17CameraDevice3Impl5debugERN7android7PrinterERKNSt3__16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEE */
/* Demangled: NSCam::CameraDevice3Impl::debug(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam17CameraDevice3Impl5debugERN7android7PrinterERKNSt3__16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEE(void);

/* Symbol: _ZN5NSCam2v324CameraDevice3SessionImplD0Ev */
/* Demangled: NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
int _ZN5NSCam2v324CameraDevice3SessionImplD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_DEVICE3_H */
