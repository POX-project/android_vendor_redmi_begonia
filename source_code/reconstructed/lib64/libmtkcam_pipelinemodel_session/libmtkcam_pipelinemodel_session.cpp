/*
 * Reverse-Engineered Source for: libmtkcam_pipelinemodel_session.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_pipelinemodel_session"

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
#include "libmtkcam_pipelinemodel_session.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::pipeline::model::PipelineModelSessionSMVR */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38pipeline5model24PipelineModelSessionSMVRE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::PipelineModelSession4Cell(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4CellC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4CellC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
extern "C" __attribute__((visibility("default"))) int _ZThn160_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev(void) {
    ALOGD("_ZThn160_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::makeInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslConfigParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslConfigParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslConfigParams> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model20InputZslConfigParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model20InputZslConfigParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBase-in-NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE0_NS2_24PipelineModelSessionBaseE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::PipelineModelSessionSMVR(NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVRC1ERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVRC1ERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4CellD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4CellD2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::model::PipelineModelSessionSMVR */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline5model24PipelineModelSessionSMVRE = NULL;

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev(void) {
    ALOGD("_ZTv0_n112_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::PipelineModelSessionStreaming(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::waitUntilNodeDrained(long, android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell20waitUntilNodeDrainedElN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell20waitUntilNodeDrainedElN7android2spINS0_17NSPipelineContext16IPipelineContextEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE6rehashEm() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, true>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::configure_multicam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam18configure_multicamEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam18configure_multicamEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&> >, bool (unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&)>::operator()(unsigned int&&, long&&, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EEclEOjOlSC_(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EEclEOjOlSC_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::v3::pipeline::policy::SensorSetting, std::__1::allocator<NSCam::v3::pipeline::policy::SensorSetting> >::__push_back_slow_path<NSCam::v3::pipeline::policy::SensorSetting const&>(NSCam::v3::pipeline::policy::SensorSetting const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy13SensorSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline6policy13SensorSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::beginFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming10beginFlushEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming10beginFlushEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onConfig_Capture() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic16onConfig_CaptureEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic16onConfig_CaptureEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Set<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v33SetIlEE = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet> > >::__emplace_unique_key_args<long, std::__1::pair<long const, NSCam::v3::NSPipelineContext::IOMapSet> const&>(long const&, std::__1::pair<long const, NSCam::v3::NSPipelineContext::IOMapSet> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_4pairIKlS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_4pairIKlS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::configureDVFSControl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR20configureDVFSControlEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR20configureDVFSControlEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::configureDVFSControl(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic20configureDVFSControlEjj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic20configureDVFSControlEjj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::IPipelineModelSession-in-NSCam::v3::pipeline::model::PipelineModelSessionBasic */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSessionBasicE0_NS2_21IPipelineModelSessionE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::createZslCfgStreamInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault22createZslCfgStreamInfoEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault22createZslCfgStreamInfoEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE = NULL;

/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::__construct_node<int&, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >&>(int&, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE16__construct_nodeIJRiRSB_EEENS_10unique_ptrINS_11__hash_nodeISC_PvEENS_22__hash_node_destructorINS9_IST_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE16__construct_nodeIJRiRSB_EEENS_10unique_ptrINS_11__hash_nodeISC_PvEENS_22__hash_node_destructorINS9_IST_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::convertRequestResultToFrameBuilder(unsigned int, NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams const&, NSCam::v3::pipeline::model::PipelineModelSessionBasic::ProcessEvaluatedFrame const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault34convertRequestResultToFrameBuilderEjRKNS1_6policy15pipelinesetting19RequestResultParamsERKNS2_25PipelineModelSessionBasic21ProcessEvaluatedFrameE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault34convertRequestResultToFrameBuilderEjRKNS1_6policy15pipelinesetting19RequestResultParamsERKNS2_25PipelineModelSessionBasic21ProcessEvaluatedFrameE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::PipelineModelSessionDefault(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&, NSCam::v3::pipeline::model::PipelineModelSessionDefault::ExtCtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsERKNS3_13ExtCtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsERKNS3_13ExtCtorParamsE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::IPipelineModelSession-in-NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE0_NS2_21IPipelineModelSessionE = NULL;

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
extern "C" __attribute__((visibility("default"))) int _ZThn160_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev(void) {
    ALOGD("_ZThn160_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBasic-in-NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE0_NS2_25PipelineModelSessionBasicE = NULL;

/* Exported Object: construction vtable for NSCam::v3::NSPipelineContext::DataCallbackBase-in-NSCam::v3::pipeline::model::PipelineModelSessionBasic */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSessionBasicE160_NS0_17NSPipelineContext16DataCallbackBaseE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::makeInstance(NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR12makeInstanceERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR12makeInstanceERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::onConfig_Capture() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault16onConfig_CaptureEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault16onConfig_CaptureEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::PipelineModelSessionDefault(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::doCapture(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell9doCaptureENSt3__110shared_ptrINS1_6policy15pipelinesetting19RequestOutputParamsEEENS5_INS2_16ParsedAppRequestEEENS5_INS_9IMetadataEEEj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell9doCaptureENSt3__110shared_ptrINS1_6policy15pipelinesetting19RequestOutputParamsEEENS5_INS2_16ParsedAppRequestEEENS5_INS_9IMetadataEEEj() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::MulticamZoomProcessor*, std::__1::default_delete<NSCam::v3::pipeline::model::MulticamZoomProcessor>, std::__1::allocator<NSCam::v3::pipeline::model::MulticamZoomProcessor> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21MulticamZoomProcessorENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21MulticamZoomProcessorENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onRequest_Reconfiguration(std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2>&, NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic25onRequest_ReconfigurationERNSt3__110shared_ptrINS3_11ConfigInfo2EEERKNS1_6policy15pipelinesetting19RequestOutputParamsERKNS5_INS2_16ParsedAppRequestEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic25onRequest_ReconfigurationERNSt3__110shared_ptrINS3_11ConfigInfo2EEERKNS1_6policy15pipelinesetting19RequestOutputParamsERKNS5_INS2_16ParsedAppRequestEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsEEENS_9allocatorIS7_EEE6assignIPS7_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS7_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsEEENS_9allocatorIS7_EEE6assignIPS7_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS7_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsEEENS_9allocatorIS7_EEE6assignIPS7_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS7_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::PipelineUserConfiguration, std::__1::allocator<NSCam::v3::pipeline::policy::PipelineUserConfiguration> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy25PipelineUserConfigurationENS_9allocatorIS5_EEEE = NULL;

/* Exported Object: vtable for android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBase::updateFrameTimestamp(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase20updateFrameTimestampEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultEl(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model24PipelineModelSessionBase20updateFrameTimestampEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultEl() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionBasic::onNextCaptureCallBack(unsigned int, long, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam2v38pipeline5model25PipelineModelSessionBasic21onNextCaptureCallBackEjlji(void) {
    ALOGD("_ZTv0_n40_N5NSCam2v38pipeline5model25PipelineModelSessionBasic21onNextCaptureCallBackEjlji() called");
    return 0;
}

/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long const&>(long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::waitUntilP2DrainedAndFlush(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell26waitUntilP2DrainedAndFlushEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell26waitUntilP2DrainedAndFlushEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::configure() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell9configureEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell9configureEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*> >, bool ()>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*> >, bool ()>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE7destroyEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onRequest_Ending(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic16onRequest_EndingERKNS1_6policy15pipelinesetting19RequestOutputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic16onRequest_EndingERKNS1_6policy15pipelinesetting19RequestOutputParamsE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::endFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault8endFlushEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault8endFlushEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::PipelineModelSession4Cell(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4CellC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4CellC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedSMVRBatchInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedSMVRBatchInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy19ParsedSMVRBatchInfoENS_9allocatorIS5_EEEE = NULL;

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::operator=(std::__1::vector<bool, std::__1::allocator<bool> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEEaSERKS3_(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEEaSERKS3_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::waitUntilNodeDrainedAndFlush(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming28waitUntilNodeDrainedAndFlushEl(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming28waitUntilNodeDrainedAndFlushEl() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onConfig_BuildingPipelineContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic32onConfig_BuildingPipelineContextEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic32onConfig_BuildingPipelineContextEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::MSize, std::__1::allocator<NSCam::MSize> >::__push_back_slow_path<NSCam::MSize const&>(NSCam::MSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::PipelineModelSessionStreaming(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBase-in-NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE0_NS2_24PipelineModelSessionBaseE = NULL;

/* Exported Object: VTT for NSCam::v3::pipeline::model::PipelineModelSessionBase */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38pipeline5model24PipelineModelSessionBaseE = NULL;

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::IOMapSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext8IOMapSetE = NULL;

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::onNextCaptureCallBack(unsigned int, long, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam2v38pipeline5model27PipelineModelSessionDefault21onNextCaptureCallBackEjlji(void) {
    ALOGD("_ZTv0_n40_N5NSCam2v38pipeline5model27PipelineModelSessionDefault21onNextCaptureCallBackEjlji() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&> >, bool (unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE7destroyEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<int, int&, android::sp<NSCam::v3::IImageStreamInfo>&>(int const&, int&, android::sp<NSCam::v3::IImageStreamInfo>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRiRS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRiRS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::model::PipelineModelSessionBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline5model24PipelineModelSessionBaseE = NULL;

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionDefault-in-NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE0_NS2_27PipelineModelSessionDefaultE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onConfig_Ending() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic15onConfig_EndingEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic15onConfig_EndingEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::beginFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault10beginFlushEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault10beginFlushEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::NSPipelineContext::IOMap> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEEE = NULL;

/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::waitUntilP2JpegDrainedAndFlush(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell30waitUntilP2JpegDrainedAndFlushEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell30waitUntilP2JpegDrainedAndFlushEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::PipelineUserConfiguration, std::__1::allocator<NSCam::v3::pipeline::policy::PipelineUserConfiguration> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy25PipelineUserConfigurationENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy25PipelineUserConfigurationENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::v3::pipeline::model::IScenarioControlV3::SensorParam, std::__1::allocator<NSCam::v3::pipeline::model::IScenarioControlV3::SensorParam> >::__push_back_slow_path<NSCam::v3::pipeline::model::IScenarioControlV3::SensorParam const&>(NSCam::v3::pipeline::model::IScenarioControlV3::SensorParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline5model18IScenarioControlV311SensorParamENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline5model18IScenarioControlV311SensorParamENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBase-in-NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE0_NS2_24PipelineModelSessionBaseE = NULL;

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBasic-in-NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE0_NS2_25PipelineModelSessionBasicE = NULL;

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::MulticamZoomProcessor*, std::__1::default_delete<NSCam::v3::pipeline::model::MulticamZoomProcessor>, std::__1::allocator<NSCam::v3::pipeline::model::MulticamZoomProcessor> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21MulticamZoomProcessorENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21MulticamZoomProcessorENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, long>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, long>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, long>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, long> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::processReconfiguration(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2>&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault22processReconfigurationERKNS1_6policy15pipelinesetting19RequestOutputParamsERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault22processReconfigurationERKNS1_6policy15pipelinesetting19RequestOutputParamsERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE6rehashEm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBase-in-NSCam::v3::pipeline::model::PipelineModelSessionSMVR */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model24PipelineModelSessionSMVRE0_NS2_24PipelineModelSessionBaseE = NULL;

/* Exported Object: vtable for std::__1::__deferred_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__122__deferred_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::PipelineModelSessionDefault(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::PipelineModelSessionSMVR(NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVRC2ERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVRC2ERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
extern "C" __attribute__((visibility("default"))) int _ZThn160_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev(void) {
    ALOGD("_ZThn160_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onNextCaptureCallBack(unsigned int, long, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic21onNextCaptureCallBackEjlji(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic21onNextCaptureCallBackEjlji() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBase-in-NSCam::v3::pipeline::model::PipelineModelSessionBasic */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSessionBasicE0_NS2_24PipelineModelSessionBaseE = NULL;

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev(void) {
    ALOGD("_ZTv0_n112_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::waitUntilP2DrainedAndFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming26waitUntilP2DrainedAndFlushEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming26waitUntilP2DrainedAndFlushEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_compareEPKvSF_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_compareEPKvSF_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev(void) {
    ALOGD("_ZTv0_n112_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::getZslProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault15getZslProcessorEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault15getZslProcessorEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::submitZslReq(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&, android::sp<NSCam::v3::NSPipelineContext::IPipelineContext> const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault12submitZslReqERKNS1_6policy15pipelinesetting19RequestOutputParamsERKN7android2spINS0_17NSPipelineContext16IPipelineContextEEERj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault12submitZslReqERKNS1_6policy15pipelinesetting19RequestOutputParamsERKN7android2spINS0_17NSPipelineContext16IPipelineContextEEERj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IStreamInfoSet::IMap<NSCam::v3::IMetaStreamInfo>-in-NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IMetaStreamInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_15IMetaStreamInfoEEE0_NS0_14IStreamInfoSet4IMapIS4_EE = NULL;

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::IPipelineModelSessionFactory::createPipelineModelSession(NSCam::v3::pipeline::model::IPipelineModelSessionFactory::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28IPipelineModelSessionFactory26createPipelineModelSessionERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28IPipelineModelSessionFactory26createPipelineModelSessionERKNS3_14CreationParamsE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::IPipelineModelSession-in-NSCam::v3::pipeline::model::PipelineModelSessionBase */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model24PipelineModelSessionBaseE0_NS2_21IPipelineModelSessionE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::configZSL(std::__1::shared_ptr<NSCam::v3::pipeline::model::OutputZslConfigParams>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault9configZSLERNSt3__110shared_ptrINS2_21OutputZslConfigParamsEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault9configZSLERNSt3__110shared_ptrINS2_21OutputZslConfigParamsEEE() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, true>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::processEvaluatedFrame(NSCam::v3::pipeline::model::PipelineModelSessionBasic::ProcessEvaluatedFrame const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic21processEvaluatedFrameERKNS3_21ProcessEvaluatedFrameE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic21processEvaluatedFrameERKNS3_21ProcessEvaluatedFrameE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::flushZslPendingReq(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault18flushZslPendingReqERKN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault18flushZslPendingReqERKN7android2spINS0_17NSPipelineContext16IPipelineContextEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::waitUntilCaptureDone() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell20waitUntilCaptureDoneEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell20waitUntilCaptureDoneEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::processReconfiguration(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2>&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming22processReconfigurationERKNS1_6policy15pipelinesetting19RequestOutputParamsERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming22processReconfigurationERKNS1_6policy15pipelinesetting19RequestOutputParamsERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::MultiCamMetadataUtility::filterResultByResultKey(int, NSCam::IMetadata const&, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model23MultiCamMetadataUtility23filterResultByResultKeyEiRKNS_9IMetadataERS4_(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model23MultiCamMetadataUtility23filterResultByResultKeyEiRKNS_9IMetadataERS4_() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, long>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, long>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, long>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, long> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBasic-in-NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE0_NS2_25PipelineModelSessionBasicE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBase::endFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase8endFlushEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model24PipelineModelSessionBase8endFlushEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBase::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model24PipelineModelSessionBase9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onConfig_DVFS() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic13onConfig_DVFSEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic13onConfig_DVFSEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onConfig_BeforeBuildingPipelineContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic38onConfig_BeforeBuildingPipelineContextEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic38onConfig_BeforeBuildingPipelineContextEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
extern "C" __attribute__((visibility("default"))) int _ZThn160_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev(void) {
    ALOGD("_ZThn160_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::future<int>, std::__1::allocator<std::__1::future<int> > >::__push_back_slow_path<std::__1::future<int> >(std::__1::future<int>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_6futureIiEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_6futureIiEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::updateBeforeBuildPipelineContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault32updateBeforeBuildPipelineContextEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault32updateBeforeBuildPipelineContextEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslConfigParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslConfigParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslConfigParams> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model20InputZslConfigParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model20InputZslConfigParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::PipelineModelSessionSMVR::ConfigInfo2, std::__1::allocator<NSCam::v3::pipeline::model::PipelineModelSessionSMVR::ConfigInfo2> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model24PipelineModelSessionSMVR11ConfigInfo2ENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model24PipelineModelSessionSMVR11ConfigInfo2ENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionSMVR::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v38pipeline5model24PipelineModelSessionSMVR11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void) {
    ALOGD("_ZThn8_N5NSCam2v38pipeline5model24PipelineModelSessionSMVR11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::endFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell8endFlushEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell8endFlushEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::getMasterCamId(NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam14getMasterCamIdERKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam14getMasterCamIdERKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE() called");
    return 0;
}

/* Demangled: std::__1::__assoc_state<int>::move() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__assoc_stateIiE4moveEv(void) {
    ALOGD("_ZNSt3__113__assoc_stateIiE4moveEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*> >, bool ()>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::processReconfiguration_4cell(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2>&, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell28processReconfiguration_4cellENSt3__110shared_ptrINS1_6policy15pipelinesetting19RequestOutputParamsEEERNS5_INS2_25PipelineModelSessionBasic11ConfigInfo2EEERKNS5_INS2_16ParsedAppRequestEEENS5_INS_9IMetadataEEEj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell28processReconfiguration_4cellENSt3__110shared_ptrINS1_6policy15pipelinesetting19RequestOutputParamsEEERNS5_INS2_25PipelineModelSessionBasic11ConfigInfo2EEERKNS5_INS2_16ParsedAppRequestEEENS5_INS_9IMetadataEEEj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::waitUntilP1NodeDrainedAndFlush(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell30waitUntilP1NodeDrainedAndFlushEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell30waitUntilP1NodeDrainedAndFlushEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBasic-in-NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE0_NS2_25PipelineModelSessionBasicE = NULL;

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::MulticamZoomProcessor::~MulticamZoomProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model21MulticamZoomProcessorD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model21MulticamZoomProcessorD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&> >, bool (unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::configure_vsdof() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam15configure_vsdofEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam15configure_vsdofEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<long, long const&, android::sp<NSCam::v3::IImageStreamInfo> const&>(long const&, long const&, android::sp<NSCam::v3::IImageStreamInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslRequestParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslRequestParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslRequestParams> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21InputZslRequestParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21InputZslRequestParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onConfig_ConfigInfo2() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic20onConfig_ConfigInfo2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic20onConfig_ConfigInfo2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onRequest_EvaluateRequest(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams&, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic25onRequest_EvaluateRequestERNS1_6policy15pipelinesetting19RequestOutputParamsERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEERKNS9_INS3_11ConfigInfo2EEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic25onRequest_EvaluateRequestERNS1_6policy15pipelinesetting19RequestOutputParamsERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEERKNS9_INS3_11ConfigInfo2EEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long>(long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v38pipeline5model25PipelineModelSession4Cell11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void) {
    ALOGD("_ZThn8_N5NSCam2v38pipeline5model25PipelineModelSession4Cell11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::processReconfigStream(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2>&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming21processReconfigStreamERKNS1_6policy15pipelinesetting19RequestOutputParamsERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming21processReconfigStreamERKNS1_6policy15pipelinesetting19RequestOutputParamsERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::configure() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam9configureEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam9configureEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*> >, bool ()> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::NSPipelineContext::IDataCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE160_NS0_17NSPipelineContext13IDataCallbackE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::waitUntilP1NodeDrained(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell22waitUntilP1NodeDrainedEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell22waitUntilP1NodeDrainedEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::makeInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedDualCamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedDualCamInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedDualCamInfoENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::makeInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::ParsedAppRequest, std::__1::allocator<NSCam::v3::pipeline::model::ParsedAppRequest> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model16ParsedAppRequestENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model16ParsedAppRequestENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionBase */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model24PipelineModelSessionBaseE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2, std::__1::allocator<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2ENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::IPipelineModelSession-in-NSCam::v3::pipeline::model::PipelineModelSessionSMVR */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model24PipelineModelSessionSMVRE0_NS2_21IPipelineModelSessionE = NULL;

/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> >::*)(), std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> >*> >(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINSB_6policy15pipelinesetting19RequestOutputParamsEEENSE_INSC_16ParsedAppRequestEEENSE_INS9_9IMetadataEEEjEJPSD_SI_SK_SM_jEEEEEFvvEPSR_EEEEEPvSW_(void) {
    ALOGD("_ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINSB_6policy15pipelinesetting19RequestOutputParamsEEENSE_INSC_16ParsedAppRequestEEENSE_INS9_9IMetadataEEEjEJPSD_SI_SK_SM_jEEEEEFvvEPSR_EEEEEPvSW_() called");
    return 0;
}

/* Demangled: std::__1::future<int> std::__1::__make_async_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> >(std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEEENS_6futureIT_EEOT0_(void) {
    ALOGD("_ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEEENS_6futureIT_EEOT0_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev(void) {
    ALOGD("_ZTv0_n112_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::configure_multicam_zoom() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam23configure_multicam_zoomEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam23configure_multicam_zoomEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::IPipelineModelSession-in-NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE0_NS2_21IPipelineModelSessionE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslRequestParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslRequestParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslRequestParams> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21InputZslRequestParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21InputZslRequestParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeISA_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeISA_PvEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::MulticamZoomProcessor::MulticamZoomProcessor(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::IPipelineSettingPolicy>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model21MulticamZoomProcessorC1ENSt3__110shared_ptrINS1_6policy15pipelinesetting22IPipelineSettingPolicyEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model21MulticamZoomProcessorC1ENSt3__110shared_ptrINS1_6policy15pipelinesetting22IPipelineSettingPolicyEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::getCurrentPipelineContext() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38pipeline5model27PipelineModelSessionDefault25getCurrentPipelineContextEv(void) {
    ALOGD("_ZNK5NSCam2v38pipeline5model27PipelineModelSessionDefault25getCurrentPipelineContextEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&> >, bool (unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&)>::__clone(std::__1::__function::__base<bool (unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE7__cloneEPNS0_6__baseISU_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE7__cloneEPNS0_6__baseISU_EE() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result> > >::__emplace_unique_key_args<int, std::__1::pair<int const, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result> >(int const&, std::__1::pair<int const, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS6_EEEEENSK_INS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS6_EEEEENSK_INS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::configure() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR9configureEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR9configureEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionSMVR */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model24PipelineModelSessionSMVRE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::PipelineModelSessionSMVR::ConfigInfo2, std::__1::allocator<NSCam::v3::pipeline::model::PipelineModelSessionSMVR::ConfigInfo2> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model24PipelineModelSessionSMVR11ConfigInfo2ENS_9allocatorIS6_EEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> const&>(std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v317NSPipelineContext13IFrameBuilderEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v317NSPipelineContext13IFrameBuilderEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE = NULL;

/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> >::__execute() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEE9__executeEv(void) {
    ALOGD("_ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEE9__executeEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >::__push_back_slow_path<android::sp<NSCam::v3::IMetaStreamBuffer> const&>(android::sp<NSCam::v3::IMetaStreamBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::configureCaptureInFlight(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault24configureCaptureInFlightEii(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault24configureCaptureInFlightEii() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::IPipelineModelSession-in-NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE0_NS2_21IPipelineModelSessionE = NULL;

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v38pipeline5model27PipelineModelSessionDefault11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void) {
    ALOGD("_ZThn8_N5NSCam2v38pipeline5model27PipelineModelSessionDefault11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::updateBeforeBuildPipelineContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam32updateBeforeBuildPipelineContextEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam32updateBeforeBuildPipelineContextEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::PipelineModelSessionBasic(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasicC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasicC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::getAppRaw16Reprocessor() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38pipeline5model27PipelineModelSessionDefault22getAppRaw16ReprocessorEv(void) {
    ALOGD("_ZNK5NSCam2v38pipeline5model27PipelineModelSessionDefault22getAppRaw16ReprocessorEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBase-in-NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE0_NS2_24PipelineModelSessionBaseE = NULL;

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> > >::__emplace_back_slow_path<std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>&>(std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model16ParsedAppRequestEEENS_9allocatorIS7_EEE24__emplace_back_slow_pathIJRS7_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model16ParsedAppRequestEEENS_9allocatorIS7_EEE24__emplace_back_slow_pathIJRS7_EEEvDpOT_() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIlE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::future<std::__1::__invoke_of<std::__1::decay<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int)>::type, std::__1::decay<NSCam::v3::pipeline::model::PipelineModelSession4Cell*>::type, std::__1::decay<std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>&>::type, std::__1::decay<std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&>::type, std::__1::decay<std::__1::shared_ptr<NSCam::IMetadata>&>::type, std::__1::decay<unsigned int&>::type>::type> std::__1::async<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>&, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&, std::__1::shared_ptr<NSCam::IMetadata>&, unsigned int&>(std::__1::launch, int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*&&)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*&&, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>&, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&, std::__1::shared_ptr<NSCam::IMetadata>&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15asyncIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS3_6policy15pipelinesetting19RequestOutputParamsEEENS6_INS4_16ParsedAppRequestEEENS6_INS1_9IMetadataEEEjEJPS5_RSA_RKSC_RSE_RjEEENS_6futureINS_11__invoke_ofINS_5decayIT_E4typeEJDpNSP_IT0_E4typeEEE4typeEEENS_6launchEOSQ_DpOST_(void) {
    ALOGD("_ZNSt3__15asyncIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS3_6policy15pipelinesetting19RequestOutputParamsEEENS6_INS4_16ParsedAppRequestEEENS6_INS1_9IMetadataEEEjEJPS5_RSA_RKSC_RSE_RjEEENS_6futureINS_11__invoke_ofINS_5decayIT_E4typeEJDpNSP_IT0_E4typeEEE4typeEEENS_6launchEOSQ_DpOST_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::NSPipelineContext::IDataCallback-in-NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE160_NS0_17NSPipelineContext13IDataCallbackE = NULL;

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
extern "C" __attribute__((visibility("default"))) int _ZThn160_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev(void) {
    ALOGD("_ZThn160_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::IHalSensor*, std::__1::allocator<NSCam::IHalSensor*> >::__push_back_slow_path<NSCam::IHalSensor* const&>(NSCam::IHalSensor* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam10IHalSensorENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam10IHalSensorENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >::__push_back_slow_path<android::sp<NSCam::v3::IImageStreamInfo> const&>(android::sp<NSCam::v3::IImageStreamInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE = NULL;

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev(void) {
    ALOGD("_ZTv0_n112_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::enqueZslBuildFrameParam(unsigned int, NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams const*, std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> const&, android::sp<NSCam::v3::NSPipelineContext::IPipelineContext> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault23enqueZslBuildFrameParamEjPKNS1_6policy15pipelinesetting19RequestResultParamsERKNSt3__110shared_ptrINS0_17NSPipelineContext13IFrameBuilderEEERKN7android2spINSB_16IPipelineContextEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault23enqueZslBuildFrameParamEjPKNS1_6policy15pipelinesetting19RequestResultParamsERKNSt3__110shared_ptrINS0_17NSPipelineContext13IFrameBuilderEEERKN7android2spINSB_16IPipelineContextEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::SimpleStreamInfoSetControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControlE = NULL;

/* Demangled: std::__1::future<int> std::__1::__make_deferred_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> >(std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__make_deferred_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEEENS_6futureIT_EEOT0_(void) {
    ALOGD("_ZNSt3__127__make_deferred_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEEENS_6futureIT_EEOT0_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
extern "C" __attribute__((visibility("default"))) int _ZThn160_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev(void) {
    ALOGD("_ZThn160_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::PipelineModelSessionMultiCam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedSMVRBatchInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedSMVRBatchInfo> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppConfiguration, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppConfiguration> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy22ParsedAppConfigurationENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy22ParsedAppConfigurationENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::updateFrameTimestamp(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault20updateFrameTimestampEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultEl(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault20updateFrameTimestampEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultEl() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::onProcessEvaluatedFrame(unsigned int&, NSCam::v3::pipeline::model::PipelineModelSessionBasic::ProcessEvaluatedFrame const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault23onProcessEvaluatedFrameERjRKNS2_25PipelineModelSessionBasic21ProcessEvaluatedFrameE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault23onProcessEvaluatedFrameERjRKNS2_25PipelineModelSessionBasic21ProcessEvaluatedFrameE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::tryHandleAppRaw16ReprocessFrame(NSCam::v3::pipeline::model::PipelineModelSessionDefault::TryHandleAppRaw16ReprocessFrameParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault31tryHandleAppRaw16ReprocessFrameERKNS3_37TryHandleAppRaw16ReprocessFrameParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault31tryHandleAppRaw16ReprocessFrameERKNS3_37TryHandleAppRaw16ReprocessFrameParamsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::makeInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::getCurrentConfigInfo2() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38pipeline5model25PipelineModelSessionBasic21getCurrentConfigInfo2Ev(void) {
    ALOGD("_ZNK5NSCam2v38pipeline5model25PipelineModelSessionBasic21getCurrentConfigInfo2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslConfigParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslConfigParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslConfigParams> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model20InputZslConfigParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::getCurrentPipelineContext() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38pipeline5model24PipelineModelSessionSMVR25getCurrentPipelineContextEv(void) {
    ALOGD("_ZNK5NSCam2v38pipeline5model24PipelineModelSessionSMVR25getCurrentPipelineContextEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::updateFrame_multicam(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam20updateFrame_multicamEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam20updateFrame_multicamEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::ParsedAppRequest, std::__1::allocator<NSCam::v3::pipeline::model::ParsedAppRequest> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model16ParsedAppRequestENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model16ParsedAppRequestENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::getCaptureInFlightRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault25getCaptureInFlightRequestEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault25getCaptureInFlightRequestEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> const&>(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::waitUntilNodeDrainedAndFlush(long, android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell28waitUntilNodeDrainedAndFlushElN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell28waitUntilNodeDrainedAndFlushElN7android2spINS0_17NSPipelineContext16IPipelineContextEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedDualCamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedDualCamInfo> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedDualCamInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedDualCamInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBase::beginFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase10beginFlushEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model24PipelineModelSessionBase10beginFlushEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::onNextCaptureCallBack(unsigned int, long, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault21onNextCaptureCallBackEjlji(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault21onNextCaptureCallBackEjlji() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::submitOneRequest(std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR16submitOneRequestERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR16submitOneRequestERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::PipelineUserConfiguration, std::__1::allocator<NSCam::v3::pipeline::policy::PipelineUserConfiguration> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy25PipelineUserConfigurationENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy25PipelineUserConfigurationENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onConfig_AppImageStreamMaxBufNum() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic32onConfig_AppImageStreamMaxBufNumEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic32onConfig_AppImageStreamMaxBufNumEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::MulticamZoomProcessor::sendNotify(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model21MulticamZoomProcessor10sendNotifyEjj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model21MulticamZoomProcessor10sendNotifyEjj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&> >, bool (unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::submitOneRequest(std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic16submitOneRequestERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic16submitOneRequestERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::configure() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic9configureEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic9configureEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE6rehashEm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IMetaStreamInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_15IMetaStreamInfoEEE = NULL;

/* Exported Object: construction vtable for NSCam::v3::NSPipelineContext::DataCallbackBase-in-NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE160_NS0_17NSPipelineContext16DataCallbackBaseE = NULL;

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Exported Object: vtable for NSCam::v3::pipeline::model::PipelineModelSessionBasic */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline5model25PipelineModelSessionBasicE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::MulticamZoomProcessor*, std::__1::default_delete<NSCam::v3::pipeline::model::MulticamZoomProcessor>, std::__1::allocator<NSCam::v3::pipeline::model::MulticamZoomProcessor> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21MulticamZoomProcessorENS_14default_deleteIS5_EENS_9allocatorIS5_EEEE = NULL;

/* Exported Object: vtable for android::Vector<NSCam::v3::NSPipelineContext::NodeEdge> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEEE = NULL;

/* Exported Object: construction vtable for NSCam::v3::NSPipelineContext::DataCallbackBase-in-NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE160_NS0_17NSPipelineContext16DataCallbackBaseE = NULL;

/* Demangled: NSCam::v3::pipeline::model::MulticamZoomProcessor::MulticamZoomProcessor(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::IPipelineSettingPolicy>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model21MulticamZoomProcessorC2ENSt3__110shared_ptrINS1_6policy15pipelinesetting22IPipelineSettingPolicyEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model21MulticamZoomProcessorC2ENSt3__110shared_ptrINS1_6policy15pipelinesetting22IPipelineSettingPolicyEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::onConfig_BeforeBuildingPipelineContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault38onConfig_BeforeBuildingPipelineContextEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault38onConfig_BeforeBuildingPipelineContextEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline5model25PipelineModelSession4CellE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::setSensorSyncToSensorDriver(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam27setSensorSyncToSensorDriverEb(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam27setSensorSyncToSensorDriverEb() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::NSPipelineContext::DataCallbackBase-in-NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE160_NS0_17NSPipelineContext16DataCallbackBaseE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppConfiguration, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppConfiguration> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy22ParsedAppConfigurationENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy22ParsedAppConfigurationENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::print(android::Printer&, NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic5printERN7android7PrinterERKNS3_11ConfigInfo2E(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic5printERN7android7PrinterERKNS3_11ConfigInfo2E() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBase::determineTimestampSOF(long, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase21determineTimestampSOFElRKN7android6VectorINS4_2spINS0_17IMetaStreamBufferEEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model24PipelineModelSessionBase21determineTimestampSOFElRKN7android6VectorINS4_2spINS0_17IMetaStreamBufferEEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::configure() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault9configureEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault9configureEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2, std::__1::allocator<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2ENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2ENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::evaluatePreviewSize(NSCam::MSize&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam19evaluatePreviewSizeERNS_5MSizeE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam19evaluatePreviewSizeERNS_5MSizeE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::NSPipelineContext::IDataCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE160_NS0_17NSPipelineContext13IDataCallbackE = NULL;

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
extern "C" __attribute__((visibility("default"))) int _ZThn160_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev(void) {
    ALOGD("_ZThn160_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev(void) {
    ALOGD("_ZTv0_n112_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE6rehashEm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev(void) {
    ALOGD("_ZTv0_n112_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2, std::__1::allocator<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2ENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2ENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__deferred_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> >::__execute() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__122__deferred_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEE9__executeEv(void) {
    ALOGD("_ZNSt3__122__deferred_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEE9__executeEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::updateFrame_multicam_zoom(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam25updateFrame_multicam_zoomEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam25updateFrame_multicam_zoomEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> > >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model16ParsedAppRequestEEENS_9allocatorIS7_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model16ParsedAppRequestEEENS_9allocatorIS7_EEE7reserveEm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::ParsedAppRequest, std::__1::allocator<NSCam::v3::pipeline::model::ParsedAppRequest> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model16ParsedAppRequestENS_9allocatorIS5_EEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*> >, bool ()>::__clone(std::__1::__function::__base<bool ()>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE7__cloneEPNS0_6__baseISE_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE7__cloneEPNS0_6__baseISE_EE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::NodeEdgeSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext11NodeEdgeSetE = NULL;

/* Exported Object: construction vtable for NSCam::v3::IStreamInfoSet::IMap<NSCam::v3::IImageStreamInfo>-in-NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IImageStreamInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_16IImageStreamInfoEEE0_NS0_14IStreamInfoSet4IMapIS4_EE = NULL;

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
extern "C" __attribute__((visibility("default"))) int _ZThn160_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev(void) {
    ALOGD("_ZThn160_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::beginFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell10beginFlushEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell10beginFlushEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionDefault-in-NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE0_NS2_27PipelineModelSessionDefaultE = NULL;

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::onRequest_Reconfiguration(std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2>&, NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault25onRequest_ReconfigurationERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEERKNS1_6policy15pipelinesetting19RequestOutputParamsERKNS5_INS2_16ParsedAppRequestEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault25onRequest_ReconfigurationERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEERKNS1_6policy15pipelinesetting19RequestOutputParamsERKNS5_INS2_16ParsedAppRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::prepareForSubmittingPipelineFrame(android::sp<NSCam::v3::IPipelineFrame>, unsigned int, NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams const&, NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&, std::__1::shared_ptr<NSCam::IMetadata>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault33prepareForSubmittingPipelineFrameEN7android2spINS0_14IPipelineFrameEEEjRKNS1_6policy15pipelinesetting19RequestResultParamsERKNS9_19RequestOutputParamsENSt3__110shared_ptrINS_9IMetadataEEENSH_INS2_16ParsedAppRequestEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault33prepareForSubmittingPipelineFrameEN7android2spINS0_14IPipelineFrameEEEjRKNS1_6policy15pipelinesetting19RequestResultParamsERKNS9_19RequestOutputParamsENSt3__110shared_ptrINS_9IMetadataEEENSH_INS2_16ParsedAppRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::processReconfigStream(std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2>&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell21processReconfigStreamERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell21processReconfigStreamERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> > > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> > >(unsigned int const&, std::__1::pair<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIjJNS_4pairIjS9_EEEEENSN_INS_15__hash_iteratorIPNS_11__hash_nodeISA_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIjJNS_4pairIjS9_EEEEENSN_INS_15__hash_iteratorIPNS_11__hash_nodeISA_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::NSPipelineContext::IDataCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionBasic */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSessionBasicE160_NS0_17NSPipelineContext13IDataCallbackE = NULL;

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedDualCamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedDualCamInfo> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedDualCamInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedDualCamInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIlEE = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&>(unsigned int const&, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback-in-NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::PipelineModelSessionSMVR::ConfigInfo2, std::__1::allocator<NSCam::v3::pipeline::model::PipelineModelSessionSMVR::ConfigInfo2> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model24PipelineModelSessionSMVR11ConfigInfo2ENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model24PipelineModelSessionSMVR11ConfigInfo2ENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::MulticamZoomProcessor::~MulticamZoomProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model21MulticamZoomProcessorD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model21MulticamZoomProcessorD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams> const&>(std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb1ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb1ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb1ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::prepareSensorObject() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam19prepareSensorObjectEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam19prepareSensorObjectEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::PipelineModelSessionDefault(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&, NSCam::v3::pipeline::model::PipelineModelSessionDefault::ExtCtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsERKNS3_13ExtCtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsERKNS3_13ExtCtorParamsE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IImageStreamInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_16IImageStreamInfoEEE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEEE = NULL;

/* Demangled: std::__1::__assoc_state<int>::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::NSPipelineContext::IDataCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE160_NS0_17NSPipelineContext13IDataCallbackE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBase::submitRequest(std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::model::UserRequestParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::model::UserRequestParams> > > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase13submitRequestERKNSt3__16vectorINS4_10shared_ptrINS2_17UserRequestParamsEEENS4_9allocatorIS8_EEEERj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model24PipelineModelSessionBase13submitRequestERKNSt3__16vectorINS4_10shared_ptrINS2_17UserRequestParamsEEENS4_9allocatorIS8_EEEERj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslRequestParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslRequestParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslRequestParams> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21InputZslRequestParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::getRootsStreams(std::__1::vector<long, std::__1::allocator<long> >&, NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault15getRootsStreamsERNSt3__16vectorIlNS4_9allocatorIlEEEEPKNS1_6policy15pipelinesetting19RequestResultParamsEb(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault15getRootsStreamsERNSt3__16vectorIlNS4_9allocatorIlEEEEPKNS1_6policy15pipelinesetting19RequestResultParamsEb() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::IPipelineModelSession-in-NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE0_NS2_21IPipelineModelSessionE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::PipelineModelSessionMultiCam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionBasic */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSessionBasicE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::flushP1node(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell11flushP1nodeERN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell11flushP1nodeERN7android2spINS0_17NSPipelineContext16IPipelineContextEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEEE = NULL;

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*> >, bool ()>::operator()() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEEclEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEEclEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCam11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void) {
    ALOGD("_ZThn8_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCam11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<long, std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamInfo> > const&>(long const&, std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_4pairIKlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_4pairIKlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedSMVRBatchInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedSMVRBatchInfo> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::submitOneRequest(std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell16submitOneRequestERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell16submitOneRequestERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::submitRequest(std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::model::UserRequestParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::model::UserRequestParams> > > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR13submitRequestERKNSt3__16vectorINS4_10shared_ptrINS2_17UserRequestParamsEEENS4_9allocatorIS8_EEEERj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR13submitRequestERKNSt3__16vectorINS4_10shared_ptrINS2_17UserRequestParamsEEENS4_9allocatorIS8_EEEERj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBase::PipelineModelSessionBase(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model24PipelineModelSessionBaseC2EOKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS3_10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model24PipelineModelSessionBaseC2EOKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS3_10CtorParamsE() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE = NULL;

/* Demangled: android::Vector<long>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::makeInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&, NSCam::v3::pipeline::model::PipelineModelSessionDefault::ExtCtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsERKNS3_13ExtCtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsERKNS3_13ExtCtorParamsE() called");
    return 0;
}

/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onRequest_ProcessEvaluatedFrame(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams> const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic31onRequest_ProcessEvaluatedFrameERKNSt3__110shared_ptrINS1_6policy15pipelinesetting19RequestOutputParamsEEERKNS5_INS2_16ParsedAppRequestEEERKNS5_INS3_11ConfigInfo2EEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic31onRequest_ProcessEvaluatedFrameERKNSt3__110shared_ptrINS1_6policy15pipelinesetting19RequestOutputParamsEEERKNS5_INS2_16ParsedAppRequestEEERKNS5_INS3_11ConfigInfo2EEE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&> >, bool (unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::pipeline::model::PipelineModelSessionBasic */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38pipeline5model25PipelineModelSessionBasicE = NULL;

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev(void) {
    ALOGD("_ZTv0_n112_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIlE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultD2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::waitUntilP1NodeDrainedAndFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming30waitUntilP1NodeDrainedAndFlushEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming30waitUntilP1NodeDrainedAndFlushEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppConfiguration, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppConfiguration> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy22ParsedAppConfigurationENS_9allocatorIS5_EEEE = NULL;

/* Exported Object: VTT for NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38pipeline5model25PipelineModelSession4CellE = NULL;

/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__construct_node_hash<std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&>(unsigned long, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRKNS_4pairIKjS5_EEJEEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISQ_EEEEEEmOT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRKNS_4pairIKjS5_EEJEEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISQ_EEEEEEmOT_DpOT0_() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionDefault-in-NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE0_NS2_27PipelineModelSessionDefaultE = NULL;

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<long, long>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, long>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, long>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, long> > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, long>, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, long>, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, long>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS2_PvEEEEEEvT_SL_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS2_PvEEEEEEvT_SL_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::NSPipelineContext::DataCallbackBase-in-NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE160_NS0_17NSPipelineContext16DataCallbackBaseE = NULL;
