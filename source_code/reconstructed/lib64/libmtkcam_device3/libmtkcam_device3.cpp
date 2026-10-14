/*
 * Reverse-Engineered Source for: libmtkcam_device3.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_device3"

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
#include "libmtkcam_device3.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IAppStreamManager::PhysicalResult> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::CameraDevice3Impl::~CameraDevice3Impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam17CameraDevice3ImplD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam17CameraDevice3ImplD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::getSafeAppStreamManager() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v324CameraDevice3SessionImpl23getSafeAppStreamManagerEv(void) {
    ALOGD("_ZNK5NSCam2v324CameraDevice3SessionImpl23getSafeAppStreamManagerEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-NSCam::CameraDevice3Impl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam17CameraDevice3ImplE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for NSCam::CameraDevice3Impl */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam17CameraDevice3ImplE = NULL;

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::getCaptureResultMetadataQueue(std::__1::function<void (android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl29getCaptureResultMetadataQueueENSt3__18functionIFvRKN7android8hardware12MQDescriptorIhLNS5_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl29getCaptureResultMetadataQueueENSt3__18functionIFvRKN7android8hardware12MQDescriptorIhLNS5_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v324CameraDevice3SessionImplD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam2v324CameraDevice3SessionImplD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::CameraDevice3Impl::MyDebuggee, std::__1::allocator<NSCam::CameraDevice3Impl::MyDebuggee> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam17CameraDevice3Impl10MyDebuggeeENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam17CameraDevice3Impl10MyDebuggeeENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::tryRunCommandLocked(long, char const*, std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl19tryRunCommandLockedElPKcNSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl19tryRunCommandLockedElPKcNSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl9dumpStateERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl9dumpStateERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: __fe_getround */
extern "C" __attribute__((visibility("default"))) int __fe_getround(void) {
    ALOGD("__fe_getround() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl11serviceDiedEmRKN7android2wpINS2_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl11serviceDiedEmRKN7android2wpINS2_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::UserRequestParams, std::__1::allocator<NSCam::v3::pipeline::model::UserRequestParams> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model17UserRequestParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model17UserRequestParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEEE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, long> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIllEEEE = NULL;

/* Demangled: __floatditf */
extern "C" __attribute__((visibility("default"))) int __floatditf(void) {
    ALOGD("__floatditf() called");
    return 0;
}

/* Demangled: NSCam::CameraDevice3Impl::CameraDevice3Impl(NSCam::ICameraDeviceManager*, NSCam::IMetadataProvider*, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17CameraDevice3ImplC2EPNS_20ICameraDeviceManagerEPNS_17IMetadataProviderEPKcii(void) {
    ALOGD("_ZN5NSCam17CameraDevice3ImplC2EPNS_20ICameraDeviceManagerEPNS_17IMetadataProviderEPKcii() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::String8, std::__1::allocator<android::String8> >::__push_back_slow_path<android::String8>(android::String8&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android7String8ENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android7String8ENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, long>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, long>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, long>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, long>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, long> > >::__emplace_unique_key_args<long, std::__1::pair<long, long> >(long const&, std::__1::pair<long, long>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIlJNS_4pairIllEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIlJNS_4pairIllEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam2v324CameraDevice3SessionImplD0Ev(void) {
    ALOGD("_ZThn16_N5NSCam2v324CameraDevice3SessionImplD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::CameraDevice3Impl::MyDebuggee, std::__1::allocator<NSCam::CameraDevice3Impl::MyDebuggee> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam17CameraDevice3Impl10MyDebuggeeENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam17CameraDevice3Impl10MyDebuggeeENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: __unordtf2 */
extern "C" __attribute__((visibility("default"))) int __unordtf2(void) {
    ALOGD("__unordtf2() called");
    return 0;
}

/* Demangled: createVirtualCameraDevice */
extern "C" __attribute__((visibility("default"))) int createVirtualCameraDevice(void) {
    ALOGD("createVirtualCameraDevice() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::onOpenLocked(android::sp<android::hardware::camera::device::V3_4::ICameraDeviceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl12onOpenLockedERKN7android2spINS2_8hardware6camera6device4V3_421ICameraDeviceCallbackEEE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl12onOpenLockedERKN7android2spINS2_8hardware6camera6device4V3_421ICameraDeviceCallbackEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::UserConfigurationParams, std::__1::allocator<NSCam::v3::pipeline::model::UserConfigurationParams> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23UserConfigurationParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23UserConfigurationParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::camera::device::V3_2::ICameraDeviceSession-in-NSCam::v3::CameraDevice3SessionImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v324CameraDevice3SessionImplE0_N7android8hardware6camera6device4V3_220ICameraDeviceSessionE = NULL;

/* Exported Object: vtable for NSCam::v3::CameraDevice3SessionImpl::CommandHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::ICameraDeviceManager::IVirtualDevice::Info, std::__1::allocator<NSCam::ICameraDeviceManager::IVirtualDevice::Info> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam20ICameraDeviceManager14IVirtualDevice4InfoENS_9allocatorIS4_EEEE = NULL;

/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IAppStreamManager::PhysicalResult> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<android::LogPrinter, std::__1::allocator<android::LogPrinter> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEEE = NULL;

/* Demangled: NSCam::CameraDevice3Impl::~CameraDevice3Impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17CameraDevice3ImplD2Ev(void) {
    ALOGD("_ZN5NSCam17CameraDevice3ImplD2Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::__emplace_unique_key_args<long, std::__1::pair<long, android::sp<NSCam::v3::IImageStreamBuffer> > >(long const&, std::__1::pair<long, android::sp<NSCam::v3::IImageStreamBuffer> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::LogPrinter, std::__1::allocator<android::LogPrinter> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::UserConfigurationParams, std::__1::allocator<NSCam::v3::pipeline::model::UserConfigurationParams> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23UserConfigurationParamsENS_9allocatorIS5_EEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v324CameraDevice3SessionImplD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam2v324CameraDevice3SessionImplD0Ev() called");
    return 0;
}

/* Demangled: __subtf3 */
extern "C" __attribute__((visibility("default"))) int __subtf3(void) {
    ALOGD("__subtf3() called");
    return 0;
}

/* Demangled: createCameraDevice3Session */
extern "C" __attribute__((visibility("default"))) int createCameraDevice3Session(void) {
    ALOGD("createCameraDevice3Session() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::close() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl5closeEv(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl5closeEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__emplace_unique_key_args<long, std::__1::pair<long, android::sp<NSCam::v3::IMetaStreamInfo> > >(long const&, std::__1::pair<long, android::sp<NSCam::v3::IMetaStreamInfo> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::CameraDevice3SessionImpl::CommandHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerE = NULL;

/* Exported Object: vtable for NSCam::CameraDevice3Impl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam17CameraDevice3ImplE = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<long, std::__1::pair<long, android::sp<NSCam::v3::IImageStreamInfo> > >(long const&, std::__1::pair<long, android::sp<NSCam::v3::IImageStreamInfo> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::EventLogPrinter, std::__1::allocator<NSCam::EventLogPrinter> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::LogPrinter, std::__1::allocator<android::LogPrinter> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android10LogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::camera::device::V3_3::ICameraDeviceSession-in-NSCam::v3::CameraDevice3SessionImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v324CameraDevice3SessionImplE0_N7android8hardware6camera6device4V3_320ICameraDeviceSessionE = NULL;

/* Exported Object: construction vtable for NSCam::ICameraDevice3Session-in-NSCam::v3::CameraDevice3SessionImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v324CameraDevice3SessionImplE0_NS_21ICameraDevice3SessionE = NULL;

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CameraDevice3SessionImpl(NSCam::ICameraDevice3Session::CreationInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImplC1ERKNS_21ICameraDevice3Session12CreationInfoE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImplC1ERKNS_21ICameraDevice3Session12CreationInfoE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, long>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, long>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, long>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, long> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: __lttf2 */
extern "C" __attribute__((visibility("default"))) int __lttf2(void) {
    ALOGD("__lttf2() called");
    return 0;
}

/* Demangled: __getf2 */
extern "C" __attribute__((visibility("default"))) int __getf2(void) {
    ALOGD("__getf2() called");
    return 0;
}

/* Demangled: __gttf2 */
extern "C" __attribute__((visibility("default"))) int __gttf2(void) {
    ALOGD("__gttf2() called");
    return 0;
}

/* Demangled: __letf2 */
extern "C" __attribute__((visibility("default"))) int __letf2(void) {
    ALOGD("__letf2() called");
    return 0;
}

/* Demangled: NSCam::CameraDevice3Impl::getCameraCharacteristics(std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17CameraDevice3Impl24getCameraCharacteristicsENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS4_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN5NSCam17CameraDevice3Impl24getCameraCharacteristicsENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS4_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: NSCam::CameraDevice3Impl::dumpState(android::hardware::hidl_handle const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17CameraDevice3Impl9dumpStateERKN7android8hardware11hidl_handleE(void) {
    ALOGD("_ZN5NSCam17CameraDevice3Impl9dumpStateERKN7android8hardware11hidl_handleE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::CameraDevice3Impl::~CameraDevice3Impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam17CameraDevice3ImplD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam17CameraDevice3ImplD1Ev() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CommandHandler::CommandHandler(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerC2Ei(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerC2Ei() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::DisplayIdleDelayUtil */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v320DisplayIdleDelayUtilE = NULL;

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: getCameraDevice3DebugLogLevel() */
extern "C" __attribute__((visibility("default"))) int _Z29getCameraDevice3DebugLogLevelv(void) {
    ALOGD("_Z29getCameraDevice3DebugLogLevelv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::ICameraDeviceManager::IVirtualDevice::Info, std::__1::allocator<NSCam::ICameraDeviceManager::IVirtualDevice::Info> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam20ICameraDeviceManager14IVirtualDevice4InfoENS_9allocatorIS4_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam20ICameraDeviceManager14IVirtualDevice4InfoENS_9allocatorIS4_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CommandHandler::print(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v324CameraDevice3SessionImpl14CommandHandler5printERN7android7PrinterE(void) {
    ALOGD("_ZNK5NSCam2v324CameraDevice3SessionImpl14CommandHandler5printERN7android7PrinterE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IAppStreamManager::PhysicalResult> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, long>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, long>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, long>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, long> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::camera::device::V3_4::ICameraDeviceSession-in-NSCam::v3::CameraDevice3SessionImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v324CameraDevice3SessionImplE0_N7android8hardware6camera6device4V3_420ICameraDeviceSessionE = NULL;

/* Demangled: NSCam::CameraDevice3Impl::~CameraDevice3Impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17CameraDevice3ImplD1Ev(void) {
    ALOGD("_ZN5NSCam17CameraDevice3ImplD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CommandHandler::requestExitAndWait(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler18requestExitAndWaitEl(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler18requestExitAndWaitEl() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::CameraDevice3Impl::MyDebuggee::debug(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17CameraDevice3Impl10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE(void) {
    ALOGD("_ZN5NSCam17CameraDevice3Impl10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE() called");
    return 0;
}

/* Demangled: NSCam::CameraDevice3Impl::open(android::sp<android::hardware::camera::device::V3_2::ICameraDeviceCallback> const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::sp<android::hardware::camera::device::V3_2::ICameraDeviceSession> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17CameraDevice3Impl4openERKN7android2spINS1_8hardware6camera6device4V3_221ICameraDeviceCallbackEEENSt3__18functionIFvNS4_6common4V1_06StatusERKNS2_INS6_20ICameraDeviceSessionEEEEEE(void) {
    ALOGD("_ZN5NSCam17CameraDevice3Impl4openERKN7android2spINS1_8hardware6camera6device4V3_221ICameraDeviceCallbackEEENSt3__18functionIFvNS4_6common4V1_06StatusERKNS2_INS6_20ICameraDeviceSessionEEEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::onProcessCaptureRequest(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::CaptureRequest> const&, android::hardware::hidl_vec<android::hardware::camera::device::V3_2::BufferCache> const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl23onProcessCaptureRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEERKNS4_INS6_4V3_211BufferCacheEEERj(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl23onProcessCaptureRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEERKNS4_INS6_4V3_211BufferCacheEEERj() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::CameraDevice3SessionImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v324CameraDevice3SessionImplE = NULL;

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::onConfigureStreamsLocked(NSCam::v3::WrappedStreamConfiguration const&, NSCam::v3::WrappedHalStreamConfiguration&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl24onConfigureStreamsLockedERKNS0_26WrappedStreamConfigurationERNS0_29WrappedHalStreamConfigurationE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl24onConfigureStreamsLockedERKNS0_26WrappedStreamConfigurationERNS0_29WrappedHalStreamConfigurationE() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::getSafePipelineModel() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v324CameraDevice3SessionImpl20getSafePipelineModelEv(void) {
    ALOGD("_ZNK5NSCam2v324CameraDevice3SessionImpl20getSafePipelineModelEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: NSCam::CameraDevice3Impl::initialize(android::sp<NSCam::ICameraDevice3Session> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17CameraDevice3Impl10initializeERKN7android2spINS_21ICameraDevice3SessionEEE(void) {
    ALOGD("_ZN5NSCam17CameraDevice3Impl10initializeERKN7android2spINS_21ICameraDevice3SessionEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::EventLogPrinter, std::__1::allocator<NSCam::EventLogPrinter> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::IPipelineModelCallback-in-NSCam::v3::CameraDevice3SessionImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v324CameraDevice3SessionImplE8_NS0_8pipeline5model22IPipelineModelCallbackE = NULL;

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: mapToHidlCameraStatus(int) */
extern "C" __attribute__((visibility("default"))) int _Z21mapToHidlCameraStatusi(void) {
    ALOGD("_Z21mapToHidlCameraStatusi() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CommandHandler::add(char const*, std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler3addEPKcNSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler3addEPKcNSt3__18functionIFvvEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-NSCam::v3::CameraDevice3SessionImpl::CommandHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerE0_N7android6ThreadE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::ICameraDeviceManager::IVirtualDevice::Info, std::__1::allocator<NSCam::ICameraDeviceManager::IVirtualDevice::Info> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam20ICameraDeviceManager14IVirtualDevice4InfoENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam20ICameraDeviceManager14IVirtualDevice4InfoENS_9allocatorIS4_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::EventLogPrinter, std::__1::allocator<NSCam::EventLogPrinter> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::CameraDevice3Impl::~CameraDevice3Impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam17CameraDevice3ImplD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam17CameraDevice3ImplD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE5clearEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEEE = NULL;

/* Exported Object: vtable for NSCam::v3::IAppStreamManager::PhysicalResult */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317IAppStreamManager14PhysicalResultE = NULL;

/* Exported Object: vtable for android::Vector<NSCam::v3::IAppStreamManager::Request> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v317IAppStreamManager7RequestEEE = NULL;

/* Demangled: NSCam::CameraDevice3Impl::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17CameraDevice3Impl5debugERKN7android8hardware11hidl_handleERKNS2_8hidl_vecINS2_11hidl_stringEEE(void) {
    ALOGD("_ZN5NSCam17CameraDevice3Impl5debugERKN7android8hardware11hidl_handleERKNS2_8hidl_vecINS2_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::CameraDevice3Impl::MyDebuggee, std::__1::allocator<NSCam::CameraDevice3Impl::MyDebuggee> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam17CameraDevice3Impl10MyDebuggeeENS_9allocatorIS3_EEEE = NULL;

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CommandHandler::CommandHandler(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerC1Ei(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandlerC1Ei() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImplD2Ev(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImplD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::CameraDevice3Impl::CameraDevice3Impl(NSCam::ICameraDeviceManager*, NSCam::IMetadataProvider*, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17CameraDevice3ImplC1EPNS_20ICameraDeviceManagerEPNS_17IMetadataProviderEPKcii(void) {
    ALOGD("_ZN5NSCam17CameraDevice3ImplC1EPNS_20ICameraDeviceManagerEPNS_17IMetadataProviderEPKcii() called");
    return 0;
}

/* Demangled: NSCam::CameraDevice3Impl::getResourceCost(std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::camera::common::V1_0::CameraResourceCost const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17CameraDevice3Impl15getResourceCostENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS7_18CameraResourceCostEEEE(void) {
    ALOGD("_ZN5NSCam17CameraDevice3Impl15getResourceCostENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS7_18CameraResourceCostEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::processCaptureRequest_3_4(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::CaptureRequest> const&, android::hardware::hidl_vec<android::hardware::camera::device::V3_2::BufferCache> const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl25processCaptureRequest_3_4ERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEERKNS4_INS6_4V3_211BufferCacheEEENSt3__18functionIFvNS5_6common4V1_06StatusEjEEE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl25processCaptureRequest_3_4ERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEERKNS4_INS6_4V3_211BufferCacheEEENSt3__18functionIFvNS5_6common4V1_06StatusEjEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::CameraDevice3Impl::getDeviceInterfaceBase(android::sp<android::hidl::base::V1_0::IBase>&) const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK5NSCam17CameraDevice3Impl22getDeviceInterfaceBaseERN7android2spINS1_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZThn8_NK5NSCam17CameraDevice3Impl22getDeviceInterfaceBaseERN7android2spINS1_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-NSCam::v3::CameraDevice3SessionImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v324CameraDevice3SessionImplE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for NSCam::EventLogPrinter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam15EventLogPrinterE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::v3::CameraDevice3SessionImpl::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam2v324CameraDevice3SessionImpl11serviceDiedEmRKN7android2wpINS2_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZThn16_N5NSCam2v324CameraDevice3SessionImpl11serviceDiedEmRKN7android2wpINS2_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::CameraDevice3SessionImpl::onFrameUpdated(NSCam::v3::pipeline::model::UserOnFrameUpdated const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v324CameraDevice3SessionImpl14onFrameUpdatedERKNS0_8pipeline5model18UserOnFrameUpdatedE(void) {
    ALOGD("_ZThn8_N5NSCam2v324CameraDevice3SessionImpl14onFrameUpdatedERKNS0_8pipeline5model18UserOnFrameUpdatedE() called");
    return 0;
}

/* Demangled: __cmptf2 */
extern "C" __attribute__((visibility("default"))) int __cmptf2(void) {
    ALOGD("__cmptf2() called");
    return 0;
}

/* Demangled: __fe_raise_inexact */
extern "C" __attribute__((visibility("default"))) int __fe_raise_inexact(void) {
    ALOGD("__fe_raise_inexact() called");
    return 0;
}

/* Demangled: NSCam::CameraDevice3Impl::~CameraDevice3Impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17CameraDevice3ImplD0Ev(void) {
    ALOGD("_ZN5NSCam17CameraDevice3ImplD0Ev() called");
    return 0;
}

/* Demangled: NSCam::CameraDevice3Impl::getDeviceInterfaceBase(android::sp<android::hidl::base::V1_0::IBase>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam17CameraDevice3Impl22getDeviceInterfaceBaseERN7android2spINS1_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZNK5NSCam17CameraDevice3Impl22getDeviceInterfaceBaseERN7android2spINS1_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::processCaptureRequest(android::hardware::hidl_vec<android::hardware::camera::device::V3_2::CaptureRequest> const&, android::hardware::hidl_vec<android::hardware::camera::device::V3_2::BufferCache> const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl21processCaptureRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_214CaptureRequestEEERKNS4_INS7_11BufferCacheEEENSt3__18functionIFvNS5_6common4V1_06StatusEjEEE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl21processCaptureRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_214CaptureRequestEEERKNS4_INS7_11BufferCacheEEENSt3__18functionIFvNS5_6common4V1_06StatusEjEEE() called");
    return 0;
}

/* Demangled: __multf3 */
extern "C" __attribute__((visibility("default"))) int __multf3(void) {
    ALOGD("__multf3() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: construction vtable for NSCam::ICameraDeviceManager::IVirtualDevice-in-NSCam::CameraDevice3Impl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam17CameraDevice3ImplE8_NS_20ICameraDeviceManager14IVirtualDeviceE = NULL;

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::configureStreams_3_4(android::hardware::camera::device::V3_4::StreamConfiguration const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::camera::device::V3_4::HalStreamConfiguration const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl20configureStreams_3_4ERKN7android8hardware6camera6device4V3_419StreamConfigurationENSt3__18functionIFvNS4_6common4V1_06StatusERKNS6_22HalStreamConfigurationEEEE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl20configureStreams_3_4ERKN7android8hardware6camera6device4V3_419StreamConfigurationENSt3__18functionIFvNS4_6common4V1_06StatusERKNS6_22HalStreamConfigurationEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IAppStreamManager::PhysicalResult> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IAppStreamManager::PhysicalResult> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::camera::device::V3_2::ICameraDevice-in-NSCam::CameraDevice3Impl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam17CameraDevice3ImplE0_N7android8hardware6camera6device4V3_213ICameraDeviceE = NULL;

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::open(android::sp<android::hardware::camera::device::V3_4::ICameraDeviceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl4openERKN7android2spINS2_8hardware6camera6device4V3_421ICameraDeviceCallbackEEE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl4openERKN7android2spINS2_8hardware6camera6device4V3_421ICameraDeviceCallbackEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::UserConfigurationParams, std::__1::allocator<NSCam::v3::pipeline::model::UserConfigurationParams> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23UserConfigurationParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23UserConfigurationParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > >::__emplace_unique_key_args<long, std::__1::pair<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >(long const&, std::__1::pair<long, android::sp<NSCam::v3::IMetaStreamBuffer> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJNS_4pairIlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v324CameraDevice3SessionImplD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v324CameraDevice3SessionImplD1Ev() called");
    return 0;
}

/* Demangled: __eqtf2 */
extern "C" __attribute__((visibility("default"))) int __eqtf2(void) {
    ALOGD("__eqtf2() called");
    return 0;
}

/* Demangled: __netf2 */
extern "C" __attribute__((visibility("default"))) int __netf2(void) {
    ALOGD("__netf2() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::flushAndWait() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl12flushAndWaitEv(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl12flushAndWaitEv() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::configureStreams_3_3(android::hardware::camera::device::V3_2::StreamConfiguration const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::camera::device::V3_3::HalStreamConfiguration const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl20configureStreams_3_3ERKN7android8hardware6camera6device4V3_219StreamConfigurationENSt3__18functionIFvNS4_6common4V1_06StatusERKNS5_4V3_322HalStreamConfigurationEEEE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl20configureStreams_3_3ERKN7android8hardware6camera6device4V3_219StreamConfigurationENSt3__18functionIFvNS4_6common4V1_06StatusERKNS5_4V3_322HalStreamConfigurationEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-NSCam::v3::CameraDevice3SessionImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v324CameraDevice3SessionImplE16_N7android8hardware20hidl_death_recipientE = NULL;

/* Demangled: NSCam::CameraDevice3Impl::setTorchMode(android::hardware::camera::common::V1_0::TorchMode) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17CameraDevice3Impl12setTorchModeEN7android8hardware6camera6common4V1_09TorchModeE(void) {
    ALOGD("_ZN5NSCam17CameraDevice3Impl12setTorchModeEN7android8hardware6camera6common4V1_09TorchModeE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::CameraDevice3Impl::getDeviceInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK5NSCam17CameraDevice3Impl13getDeviceInfoEv(void) {
    ALOGD("_ZThn8_NK5NSCam17CameraDevice3Impl13getDeviceInfoEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl5flushEv(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl5flushEv() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImplD1Ev(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImplD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::CameraDevice3SessionImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v324CameraDevice3SessionImplE = NULL;

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::getCaptureRequestMetadataQueue(std::__1::function<void (android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl30getCaptureRequestMetadataQueueENSt3__18functionIFvRKN7android8hardware12MQDescriptorIhLNS5_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl30getCaptureRequestMetadataQueueENSt3__18functionIFvRKN7android8hardware12MQDescriptorIhLNS5_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<NSCam::v3::IAppStreamManager::PhysicalResult> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEEE = NULL;

/* Demangled: virtual thunk to NSCam::CameraDevice3Impl::~CameraDevice3Impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam17CameraDevice3ImplD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam17CameraDevice3ImplD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::enableRequesting() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl16enableRequestingEv(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl16enableRequestingEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, long>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, long>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, long>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, long> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE5clearEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: __addtf3 */
extern "C" __attribute__((visibility("default"))) int __addtf3(void) {
    ALOGD("__addtf3() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::configureStreams(android::hardware::camera::device::V3_2::StreamConfiguration const&, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::camera::device::V3_2::HalStreamConfiguration const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl16configureStreamsERKN7android8hardware6camera6device4V3_219StreamConfigurationENSt3__18functionIFvNS4_6common4V1_06StatusERKNS6_22HalStreamConfigurationEEEE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl16configureStreamsERKN7android8hardware6camera6device4V3_219StreamConfigurationENSt3__18functionIFvNS4_6common4V1_06StatusERKNS6_22HalStreamConfigurationEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::constructDefaultRequestSettings(android::hardware::camera::device::V3_2::RequestTemplate, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl31constructDefaultRequestSettingsEN7android8hardware6camera6device4V3_215RequestTemplateENSt3__18functionIFvNS4_6common4V1_06StatusERKNS3_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl31constructDefaultRequestSettingsEN7android8hardware6camera6device4V3_215RequestTemplateENSt3__18functionIFvNS4_6common4V1_06StatusERKNS3_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CameraDevice3SessionImpl(NSCam::ICameraDevice3Session::CreationInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImplC2ERKNS_21ICameraDevice3Session12CreationInfoE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImplC2ERKNS_21ICameraDevice3Session12CreationInfoE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::UserRequestParams, std::__1::allocator<NSCam::v3::pipeline::model::UserRequestParams> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model17UserRequestParamsENS_9allocatorIS5_EEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::onFlushLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl13onFlushLockedEv(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl13onFlushLockedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CommandHandler::waitDone(void*, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler8waitDoneEPvl(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler8waitDoneEPvl() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::handleCommandFailureLocked(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl26handleCommandFailureLockedEi(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl26handleCommandFailureLockedEi() called");
    return 0;
}

/* Demangled: NSCam::CameraDevice3Impl::getDeviceInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam17CameraDevice3Impl13getDeviceInfoEv(void) {
    ALOGD("_ZNK5NSCam17CameraDevice3Impl13getDeviceInfoEv() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::onCloseLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl13onCloseLockedEv(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl13onCloseLockedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::CommandHandler::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler10threadLoopEv(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl14CommandHandler10threadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::onFrameUpdated(NSCam::v3::pipeline::model::UserOnFrameUpdated const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl14onFrameUpdatedERKNS0_8pipeline5model18UserOnFrameUpdatedE(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl14onFrameUpdatedERKNS0_8pipeline5model18UserOnFrameUpdatedE() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::waitUntilOpenDoneLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl23waitUntilOpenDoneLockedEv(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl23waitUntilOpenDoneLockedEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> > > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::UserRequestParams, std::__1::allocator<NSCam::v3::pipeline::model::UserRequestParams> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model17UserRequestParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model17UserRequestParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IAppStreamManager::PhysicalResult> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IAppStreamManager14PhysicalResultEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam2v324CameraDevice3SessionImplD1Ev(void) {
    ALOGD("_ZThn16_N5NSCam2v324CameraDevice3SessionImplD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v324CameraDevice3SessionImplD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v324CameraDevice3SessionImplD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: NSCam::CameraDevice3Impl::MyDebuggee::mName */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam17CameraDevice3Impl10MyDebuggee5mNameE = NULL;

/* Exported Object: vtable for NSCam::CameraDevice3Impl::MyDebuggee */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam17CameraDevice3Impl10MyDebuggeeE = NULL;

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::disableRequesting() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImpl17disableRequestingEv(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImpl17disableRequestingEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::CameraDevice3Impl::debug(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam17CameraDevice3Impl5debugERN7android7PrinterERKNSt3__16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEE(void) {
    ALOGD("_ZN5NSCam17CameraDevice3Impl5debugERN7android7PrinterERKNSt3__16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::CameraDevice3SessionImpl::~CameraDevice3SessionImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v324CameraDevice3SessionImplD0Ev(void) {
    ALOGD("_ZN5NSCam2v324CameraDevice3SessionImplD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm() called");
    return 0;
}
