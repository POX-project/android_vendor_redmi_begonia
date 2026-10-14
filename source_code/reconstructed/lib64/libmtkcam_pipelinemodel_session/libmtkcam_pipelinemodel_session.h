/*
 * Reverse-Engineered ABI Specification for: libmtkcam_pipelinemodel_session.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_pipelinemodel_session.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_PIPELINEMODEL_SESSION_H
#define BEGONIA_RE_LIBMTKCAM_PIPELINEMODEL_SESSION_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZTTN5NSCam2v38pipeline5model24PipelineModelSessionSMVRE */
/* Demangled: VTT for NSCam::v3::pipeline::model::PipelineModelSessionSMVR */
extern void* _ZTTN5NSCam2v38pipeline5model24PipelineModelSessionSMVRE;

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4CellC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::PipelineModelSession4Cell(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4CellC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZThn160_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
int _ZThn160_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE */
/* Demangled: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern void* _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE;

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::makeInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model20InputZslConfigParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslConfigParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslConfigParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslConfigParams> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model20InputZslConfigParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE0_NS2_24PipelineModelSessionBaseE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBase-in-NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern void* _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE0_NS2_24PipelineModelSessionBaseE;

/* Symbol: _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVRC1ERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::PipelineModelSessionSMVR(NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVRC1ERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4CellD2Ev */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4CellD2Ev(void);

/* Symbol: _ZTVN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE */
/* Demangled: vtable for NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern void* _ZTVN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE;

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev(void);

/* Symbol: _ZTVN5NSCam2v38pipeline5model24PipelineModelSessionSMVRE */
/* Demangled: vtable for NSCam::v3::pipeline::model::PipelineModelSessionSMVR */
extern void* _ZTVN5NSCam2v38pipeline5model24PipelineModelSessionSMVRE;

/* Symbol: _ZTv0_n112_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
int _ZTv0_n112_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::PipelineModelSessionStreaming(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell20waitUntilNodeDrainedElN7android2spINS0_17NSPipelineContext16IPipelineContextEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::waitUntilNodeDrained(long, android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell20waitUntilNodeDrainedElN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE6rehashEm(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_ */
/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, true>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam18configure_multicamEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::configure_multicam() */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam18configure_multicamEv(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EEclEOjOlSC_ */
/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&> >, bool (unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&)>::operator()(unsigned int&&, long&&, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
int _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EEclEOjOlSC_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy13SensorSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::v3::pipeline::policy::SensorSetting, std::__1::allocator<NSCam::v3::pipeline::policy::SensorSetting> >::__push_back_slow_path<NSCam::v3::pipeline::policy::SensorSetting const&>(NSCam::v3::pipeline::policy::SensorSetting const&) */
int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy13SensorSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming10beginFlushEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::beginFlush() */
int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming10beginFlushEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic16onConfig_CaptureEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onConfig_Capture() */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic16onConfig_CaptureEv(void);

/* Symbol: _ZTVN5NSCam2v33SetIlEE */
/* Demangled: vtable for NSCam::v3::Set<long> */
extern void* _ZTVN5NSCam2v33SetIlEE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_4pairIKlS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet> > >::__emplace_unique_key_args<long, std::__1::pair<long const, NSCam::v3::NSPipelineContext::IOMapSet> const&>(long const&, std::__1::pair<long const, NSCam::v3::NSPipelineContext::IOMapSet> const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_4pairIKlS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR20configureDVFSControlEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::configureDVFSControl() */
int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR20configureDVFSControlEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic20configureDVFSControlEjj */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::configureDVFSControl(unsigned int, unsigned int) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic20configureDVFSControlEjj(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model25PipelineModelSessionBasicE0_NS2_21IPipelineModelSessionE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::IPipelineModelSession-in-NSCam::v3::pipeline::model::PipelineModelSessionBasic */
extern void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSessionBasicE0_NS2_21IPipelineModelSessionE;

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault22createZslCfgStreamInfoEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::createZslCfgStreamInfo() */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault22createZslCfgStreamInfoEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev(void);

/* Symbol: _ZTTN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE */
/* Demangled: VTT for NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern void* _ZTTN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE16__construct_nodeIJRiRSB_EEENS_10unique_ptrINS_11__hash_nodeISC_PvEENS_22__hash_node_destructorINS9_IST_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::__construct_node<int&, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >&>(int&, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE16__construct_nodeIJRiRSB_EEENS_10unique_ptrINS_11__hash_nodeISC_PvEENS_22__hash_node_destructorINS9_IST_EEEEEEDpOT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault34convertRequestResultToFrameBuilderEjRKNS1_6policy15pipelinesetting19RequestResultParamsERKNS2_25PipelineModelSessionBasic21ProcessEvaluatedFrameE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::convertRequestResultToFrameBuilder(unsigned int, NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams const&, NSCam::v3::pipeline::model::PipelineModelSessionBasic::ProcessEvaluatedFrame const&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault34convertRequestResultToFrameBuilderEjRKNS1_6policy15pipelinesetting19RequestResultParamsERKNS2_25PipelineModelSessionBasic21ProcessEvaluatedFrameE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsERKNS3_13ExtCtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::PipelineModelSessionDefault(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&, NSCam::v3::pipeline::model::PipelineModelSessionDefault::ExtCtorParams const&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsERKNS3_13ExtCtorParamsE(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE0_NS2_21IPipelineModelSessionE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::IPipelineModelSession-in-NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE0_NS2_21IPipelineModelSessionE;

/* Symbol: _ZThn160_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
int _ZThn160_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE0_NS2_25PipelineModelSessionBasicE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBasic-in-NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern void* _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE0_NS2_25PipelineModelSessionBasicE;

/* Symbol: _ZTCN5NSCam2v38pipeline5model25PipelineModelSessionBasicE160_NS0_17NSPipelineContext16DataCallbackBaseE */
/* Demangled: construction vtable for NSCam::v3::NSPipelineContext::DataCallbackBase-in-NSCam::v3::pipeline::model::PipelineModelSessionBasic */
extern void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSessionBasicE160_NS0_17NSPipelineContext16DataCallbackBaseE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR12makeInstanceERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::makeInstance(NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR12makeInstanceERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault16onConfig_CaptureEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::onConfig_Capture() */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault16onConfig_CaptureEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::PipelineModelSessionDefault(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell9doCaptureENSt3__110shared_ptrINS1_6policy15pipelinesetting19RequestOutputParamsEEENS5_INS2_16ParsedAppRequestEEENS5_INS_9IMetadataEEEj */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::doCapture(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell9doCaptureENSt3__110shared_ptrINS1_6policy15pipelinesetting19RequestOutputParamsEEENS5_INS2_16ParsedAppRequestEEENS5_INS_9IMetadataEEEj(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21MulticamZoomProcessorENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::MulticamZoomProcessor*, std::__1::default_delete<NSCam::v3::pipeline::model::MulticamZoomProcessor>, std::__1::allocator<NSCam::v3::pipeline::model::MulticamZoomProcessor> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21MulticamZoomProcessorENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic25onRequest_ReconfigurationERNSt3__110shared_ptrINS3_11ConfigInfo2EEERKNS1_6policy15pipelinesetting19RequestOutputParamsERKNS5_INS2_16ParsedAppRequestEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onRequest_Reconfiguration(std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2>&, NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic25onRequest_ReconfigurationERNSt3__110shared_ptrINS3_11ConfigInfo2EEERKNS1_6policy15pipelinesetting19RequestOutputParamsERKNS5_INS2_16ParsedAppRequestEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsEEENS_9allocatorIS7_EEE6assignIPS7_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS7_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_ */
/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsEEENS_9allocatorIS7_EEE6assignIPS7_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS7_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_ */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsEEENS_9allocatorIS7_EEE6assignIPS7_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS7_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEEE;

/* Symbol: _ZThn8_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
int _ZThn8_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy25PipelineUserConfigurationENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::PipelineUserConfiguration, std::__1::allocator<NSCam::v3::pipeline::policy::PipelineUserConfiguration> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy25PipelineUserConfigurationENS_9allocatorIS5_EEEE;

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase20updateFrameTimestampEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultEl */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBase::updateFrameTimestamp(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&, long) */
int _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase20updateFrameTimestampEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultEl(void);

/* Symbol: _ZTv0_n40_N5NSCam2v38pipeline5model25PipelineModelSessionBasic21onNextCaptureCallBackEjlji */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionBasic::onNextCaptureCallBack(unsigned int, long, unsigned int, int) */
int _ZTv0_n40_N5NSCam2v38pipeline5model25PipelineModelSessionBasic21onNextCaptureCallBackEjlji(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_ */
/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long const&>(long const&) */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell26waitUntilP2DrainedAndFlushEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::waitUntilP2DrainedAndFlush(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell26waitUntilP2DrainedAndFlushEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell9configureEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::configure() */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell9configureEv(void);

/* Symbol: _ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE7__cloneEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*> >, bool ()>::__clone() const */
int _ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE7destroyEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*> >, bool ()>::destroy() */
int _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE7destroyEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic16onRequest_EndingERKNS1_6policy15pipelinesetting19RequestOutputParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onRequest_Ending(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic16onRequest_EndingERKNS1_6policy15pipelinesetting19RequestOutputParamsE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault8endFlushEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::endFlush() */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault8endFlushEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4CellC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::PipelineModelSession4Cell(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4CellC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy19ParsedSMVRBatchInfoENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedSMVRBatchInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedSMVRBatchInfo> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy19ParsedSMVRBatchInfoENS_9allocatorIS5_EEEE;

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEEaSERKS3_ */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::operator=(std::__1::vector<bool, std::__1::allocator<bool> > const&) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEEaSERKS3_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming28waitUntilNodeDrainedAndFlushEl */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::waitUntilNodeDrainedAndFlush(long) */
int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming28waitUntilNodeDrainedAndFlushEl(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTTN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE */
/* Demangled: VTT for NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern void* _ZTTN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic32onConfig_BuildingPipelineContextEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onConfig_BuildingPipelineContext() */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic32onConfig_BuildingPipelineContextEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::MSize, std::__1::allocator<NSCam::MSize> >::__push_back_slow_path<NSCam::MSize const&>(NSCam::MSize const&) */
int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZThn8_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
int _ZThn8_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::PipelineModelSessionStreaming(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE0_NS2_24PipelineModelSessionBaseE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBase-in-NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern void* _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE0_NS2_24PipelineModelSessionBaseE;

/* Symbol: _ZTTN5NSCam2v38pipeline5model24PipelineModelSessionBaseE */
/* Demangled: VTT for NSCam::v3::pipeline::model::PipelineModelSessionBase */
extern void* _ZTTN5NSCam2v38pipeline5model24PipelineModelSessionBaseE;

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext8IOMapSetE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::IOMapSet */
extern void* _ZTVN5NSCam2v317NSPipelineContext8IOMapSetE;

/* Symbol: _ZTv0_n40_N5NSCam2v38pipeline5model27PipelineModelSessionDefault21onNextCaptureCallBackEjlji */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::onNextCaptureCallBack(unsigned int, long, unsigned int, int) */
int _ZTv0_n40_N5NSCam2v38pipeline5model27PipelineModelSessionDefault21onNextCaptureCallBackEjlji(void);

/* Symbol: _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE7destroyEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&> >, bool (unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&)>::destroy() */
int _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE7destroyEv(void);

/* Symbol: _ZTv0_n24_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
int _ZTv0_n24_N5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRiRS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<int, int&, android::sp<NSCam::v3::IImageStreamInfo>&>(int const&, int&, android::sp<NSCam::v3::IImageStreamInfo>&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRiRS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTVN5NSCam2v38pipeline5model24PipelineModelSessionBaseE */
/* Demangled: vtable for NSCam::v3::pipeline::model::PipelineModelSessionBase */
extern void* _ZTVN5NSCam2v38pipeline5model24PipelineModelSessionBaseE;

/* Symbol: _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE0_NS2_27PipelineModelSessionDefaultE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionDefault-in-NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern void* _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE0_NS2_27PipelineModelSessionDefaultE;

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic15onConfig_EndingEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onConfig_Ending() */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic15onConfig_EndingEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault10beginFlushEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::beginFlush() */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault10beginFlushEv(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::NSPipelineContext::IOMap> */
extern void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEEE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_ */
/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell30waitUntilP2JpegDrainedAndFlushEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::waitUntilP2JpegDrainedAndFlush(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell30waitUntilP2JpegDrainedAndFlushEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy25PipelineUserConfigurationENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::PipelineUserConfiguration, std::__1::allocator<NSCam::v3::pipeline::policy::PipelineUserConfiguration> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy25PipelineUserConfigurationENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38pipeline5model18IScenarioControlV311SensorParamENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::v3::pipeline::model::IScenarioControlV3::SensorParam, std::__1::allocator<NSCam::v3::pipeline::model::IScenarioControlV3::SensorParam> >::__push_back_slow_path<NSCam::v3::pipeline::model::IScenarioControlV3::SensorParam const&>(NSCam::v3::pipeline::model::IScenarioControlV3::SensorParam const&) */
int _ZNSt3__16vectorIN5NSCam2v38pipeline5model18IScenarioControlV311SensorParamENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE0_NS2_24PipelineModelSessionBaseE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBase-in-NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern void* _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE0_NS2_24PipelineModelSessionBaseE;

/* Symbol: _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE0_NS2_25PipelineModelSessionBasicE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBasic-in-NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern void* _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE0_NS2_25PipelineModelSessionBasicE;

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21MulticamZoomProcessorENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::MulticamZoomProcessor*, std::__1::default_delete<NSCam::v3::pipeline::model::MulticamZoomProcessor>, std::__1::allocator<NSCam::v3::pipeline::model::MulticamZoomProcessor> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21MulticamZoomProcessorENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, long>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, long>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, long>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, long> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault22processReconfigurationERKNS1_6policy15pipelinesetting19RequestOutputParamsERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::processReconfiguration(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2>&, unsigned int) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault22processReconfigurationERKNS1_6policy15pipelinesetting19RequestOutputParamsERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE6rehashEm(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model24PipelineModelSessionSMVRE0_NS2_24PipelineModelSessionBaseE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBase-in-NSCam::v3::pipeline::model::PipelineModelSessionSMVR */
extern void* _ZTCN5NSCam2v38pipeline5model24PipelineModelSessionSMVRE0_NS2_24PipelineModelSessionBaseE;

/* Symbol: _ZTVNSt3__122__deferred_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEEE */
/* Demangled: vtable for std::__1::__deferred_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> > */
extern void* _ZTVNSt3__122__deferred_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEEE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::PipelineModelSessionDefault(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVRC2ERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::PipelineModelSessionSMVR(NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVRC2ERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZThn8_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
int _ZThn8_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev(void);

/* Symbol: _ZThn160_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
int _ZThn160_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic21onNextCaptureCallBackEjlji */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onNextCaptureCallBack(unsigned int, long, unsigned int, int) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic21onNextCaptureCallBackEjlji(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model25PipelineModelSessionBasicE0_NS2_24PipelineModelSessionBaseE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBase-in-NSCam::v3::pipeline::model::PipelineModelSessionBasic */
extern void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSessionBasicE0_NS2_24PipelineModelSessionBaseE;

/* Symbol: _ZTv0_n112_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
int _ZTv0_n112_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming26waitUntilP2DrainedAndFlushEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::waitUntilP2DrainedAndFlush() */
int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming26waitUntilP2DrainedAndFlushEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_compareEPKvSF_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_compareEPKvSF_(void);

/* Symbol: _ZThn8_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
int _ZThn8_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev(void);

/* Symbol: _ZTv0_n112_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
int _ZTv0_n112_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault15getZslProcessorEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::getZslProcessor() */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault15getZslProcessorEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault12submitZslReqERKNS1_6policy15pipelinesetting19RequestOutputParamsERKN7android2spINS0_17NSPipelineContext16IPipelineContextEEERj */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::submitZslReq(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&, android::sp<NSCam::v3::NSPipelineContext::IPipelineContext> const&, unsigned int&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault12submitZslReqERKNS1_6policy15pipelinesetting19RequestOutputParamsERKN7android2spINS0_17NSPipelineContext16IPipelineContextEEERj(void);

/* Symbol: _ZTCN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_15IMetaStreamInfoEEE0_NS0_14IStreamInfoSet4IMapIS4_EE */
/* Demangled: construction vtable for NSCam::v3::IStreamInfoSet::IMap<NSCam::v3::IMetaStreamInfo>-in-NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IMetaStreamInfo> */
extern void* _ZTCN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_15IMetaStreamInfoEEE0_NS0_14IStreamInfoSet4IMapIS4_EE;

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model28IPipelineModelSessionFactory26createPipelineModelSessionERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::model::IPipelineModelSessionFactory::createPipelineModelSession(NSCam::v3::pipeline::model::IPipelineModelSessionFactory::CreationParams const&) */
int _ZN5NSCam2v38pipeline5model28IPipelineModelSessionFactory26createPipelineModelSessionERKNS3_14CreationParamsE(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model24PipelineModelSessionBaseE0_NS2_21IPipelineModelSessionE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::IPipelineModelSession-in-NSCam::v3::pipeline::model::PipelineModelSessionBase */
extern void* _ZTCN5NSCam2v38pipeline5model24PipelineModelSessionBaseE0_NS2_21IPipelineModelSessionE;

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault9configZSLERNSt3__110shared_ptrINS2_21OutputZslConfigParamsEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::configZSL(std::__1::shared_ptr<NSCam::v3::pipeline::model::OutputZslConfigParams>&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault9configZSLERNSt3__110shared_ptrINS2_21OutputZslConfigParamsEEE(void);

/* Symbol: _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_ */
/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, true>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, true, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb1EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic21processEvaluatedFrameERKNS3_21ProcessEvaluatedFrameE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::processEvaluatedFrame(NSCam::v3::pipeline::model::PipelineModelSessionBasic::ProcessEvaluatedFrame const&) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic21processEvaluatedFrameERKNS3_21ProcessEvaluatedFrameE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault18flushZslPendingReqERKN7android2spINS0_17NSPipelineContext16IPipelineContextEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::flushZslPendingReq(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext> const&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault18flushZslPendingReqERKN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell20waitUntilCaptureDoneEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::waitUntilCaptureDone() */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell20waitUntilCaptureDoneEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming22processReconfigurationERKNS1_6policy15pipelinesetting19RequestOutputParamsERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::processReconfiguration(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2>&, unsigned int) */
int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming22processReconfigurationERKNS1_6policy15pipelinesetting19RequestOutputParamsERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj(void);

/* Symbol: _ZN5NSCam2v38pipeline5model23MultiCamMetadataUtility23filterResultByResultKeyEiRKNS_9IMetadataERS4_ */
/* Demangled: NSCam::v3::pipeline::model::MultiCamMetadataUtility::filterResultByResultKey(int, NSCam::IMetadata const&, NSCam::IMetadata&) */
int _ZN5NSCam2v38pipeline5model23MultiCamMetadataUtility23filterResultByResultKeyEiRKNS_9IMetadataERS4_(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, long>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, long>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, long>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, long> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE8__rehashEm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIlE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<long>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE0_NS2_25PipelineModelSessionBasicE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBasic-in-NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern void* _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE0_NS2_25PipelineModelSessionBasicE;

/* Symbol: _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase8endFlushEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBase::endFlush() */
int _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase8endFlushEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBase::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic13onConfig_DVFSEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onConfig_DVFS() */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic13onConfig_DVFSEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic38onConfig_BeforeBuildingPipelineContextEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onConfig_BeforeBuildingPipelineContext() */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic38onConfig_BeforeBuildingPipelineContextEv(void);

/* Symbol: _ZThn160_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
int _ZThn160_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev(void);

/* Symbol: _ZNSt3__16vectorINS_6futureIiEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::future<int>, std::__1::allocator<std::__1::future<int> > >::__push_back_slow_path<std::__1::future<int> >(std::__1::future<int>&&) */
int _ZNSt3__16vectorINS_6futureIiEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZTVN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE */
/* Demangled: vtable for NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern void* _ZTVN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE;

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault32updateBeforeBuildPipelineContextEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::updateBeforeBuildPipelineContext() */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault32updateBeforeBuildPipelineContextEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model20InputZslConfigParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslConfigParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslConfigParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslConfigParams> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model20InputZslConfigParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model24PipelineModelSessionSMVR11ConfigInfo2ENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::PipelineModelSessionSMVR::ConfigInfo2, std::__1::allocator<NSCam::v3::pipeline::model::PipelineModelSessionSMVR::ConfigInfo2> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model24PipelineModelSessionSMVR11ConfigInfo2ENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZThn8_N5NSCam2v38pipeline5model24PipelineModelSessionSMVR11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionSMVR::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
int _ZThn8_N5NSCam2v38pipeline5model24PipelineModelSessionSMVR11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell8endFlushEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::endFlush() */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell8endFlushEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam14getMasterCamIdERKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::getMasterCamId(NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam14getMasterCamIdERKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void);

/* Symbol: _ZNSt3__113__assoc_stateIiE4moveEv */
/* Demangled: std::__1::__assoc_state<int>::move() */
int _ZNSt3__113__assoc_stateIiE4moveEv(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*> >, bool ()>::destroy_deallocate() */
int _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE18destroy_deallocateEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell28processReconfiguration_4cellENSt3__110shared_ptrINS1_6policy15pipelinesetting19RequestOutputParamsEEERNS5_INS2_25PipelineModelSessionBasic11ConfigInfo2EEERKNS5_INS2_16ParsedAppRequestEEENS5_INS_9IMetadataEEEj */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::processReconfiguration_4cell(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2>&, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell28processReconfiguration_4cellENSt3__110shared_ptrINS1_6policy15pipelinesetting19RequestOutputParamsEEERNS5_INS2_25PipelineModelSessionBasic11ConfigInfo2EEERKNS5_INS2_16ParsedAppRequestEEENS5_INS_9IMetadataEEEj(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell30waitUntilP1NodeDrainedAndFlushEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::waitUntilP1NodeDrainedAndFlush(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell30waitUntilP1NodeDrainedAndFlushEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE0_NS2_25PipelineModelSessionBasicE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBasic-in-NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE0_NS2_25PipelineModelSessionBasicE;

/* Symbol: _ZTv0_n24_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
int _ZTv0_n24_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model21MulticamZoomProcessorD1Ev */
/* Demangled: NSCam::v3::pipeline::model::MulticamZoomProcessor::~MulticamZoomProcessor() */
int _ZN5NSCam2v38pipeline5model21MulticamZoomProcessorD1Ev(void);

/* Symbol: _ZTVNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EEE */
/* Demangled: vtable for std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&> >, bool (unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&)> */
extern void* _ZTVNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm(void);

/* Symbol: _ZTv0_n24_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
int _ZTv0_n24_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam15configure_vsdofEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::configure_vsdof() */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam15configure_vsdofEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<long, long const&, android::sp<NSCam::v3::IImageStreamInfo> const&>(long const&, long const&, android::sp<NSCam::v3::IImageStreamInfo> const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21InputZslRequestParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslRequestParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslRequestParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslRequestParams> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21InputZslRequestParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic20onConfig_ConfigInfo2Ev */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onConfig_ConfigInfo2() */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic20onConfig_ConfigInfo2Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic25onRequest_EvaluateRequestERNS1_6policy15pipelinesetting19RequestOutputParamsERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEERKNS9_INS3_11ConfigInfo2EEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onRequest_EvaluateRequest(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams&, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> const&) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic25onRequest_EvaluateRequestERNS1_6policy15pipelinesetting19RequestOutputParamsERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEERKNS9_INS3_11ConfigInfo2EEE(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_ */
/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long>(long&&) */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_(void);

/* Symbol: _ZThn8_N5NSCam2v38pipeline5model25PipelineModelSession4Cell11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
int _ZThn8_N5NSCam2v38pipeline5model25PipelineModelSession4Cell11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming21processReconfigStreamERKNS1_6policy15pipelinesetting19RequestOutputParamsERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::processReconfigStream(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2>&, unsigned int) */
int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming21processReconfigStreamERKNS1_6policy15pipelinesetting19RequestOutputParamsERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj(void);

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam9configureEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::configure() */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam9configureEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEEE */
/* Demangled: vtable for std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*> >, bool ()> */
extern void* _ZTVNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE160_NS0_17NSPipelineContext13IDataCallbackE */
/* Demangled: construction vtable for NSCam::v3::NSPipelineContext::IDataCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern void* _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE160_NS0_17NSPipelineContext13IDataCallbackE;

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell22waitUntilP1NodeDrainedEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::waitUntilP1NodeDrained(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell22waitUntilP1NodeDrainedEN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::makeInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedDualCamInfoENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedDualCamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedDualCamInfo> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedDualCamInfoENS_9allocatorIS5_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::makeInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model16ParsedAppRequestENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::ParsedAppRequest, std::__1::allocator<NSCam::v3::pipeline::model::ParsedAppRequest> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model16ParsedAppRequestENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model24PipelineModelSessionBaseE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE */
/* Demangled: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionBase */
extern void* _ZTCN5NSCam2v38pipeline5model24PipelineModelSessionBaseE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2ENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2, std::__1::allocator<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2ENS_9allocatorIS6_EEEE;

/* Symbol: _ZTCN5NSCam2v38pipeline5model24PipelineModelSessionSMVRE0_NS2_21IPipelineModelSessionE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::IPipelineModelSession-in-NSCam::v3::pipeline::model::PipelineModelSessionSMVR */
extern void* _ZTCN5NSCam2v38pipeline5model24PipelineModelSessionSMVRE0_NS2_21IPipelineModelSessionE;

/* Symbol: _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINSB_6policy15pipelinesetting19RequestOutputParamsEEENSE_INSC_16ParsedAppRequestEEENSE_INS9_9IMetadataEEEjEJPSD_SI_SK_SM_jEEEEEFvvEPSR_EEEEEPvSW_ */
/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> >::*)(), std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> >*> >(void*) */
int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINSB_6policy15pipelinesetting19RequestOutputParamsEEENSE_INSC_16ParsedAppRequestEEENSE_INS9_9IMetadataEEEjEJPSD_SI_SK_SM_jEEEEEFvvEPSR_EEEEEPvSW_(void);

/* Symbol: _ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEEENS_6futureIT_EEOT0_ */
/* Demangled: std::__1::future<int> std::__1::__make_async_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> >(std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int>&&) */
int _ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEEENS_6futureIT_EEOT0_(void);

/* Symbol: _ZTv0_n112_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
int _ZTv0_n112_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam23configure_multicam_zoomEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::configure_multicam_zoom() */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam23configure_multicam_zoomEv(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE0_NS2_21IPipelineModelSessionE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::IPipelineModelSession-in-NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern void* _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE0_NS2_21IPipelineModelSessionE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21InputZslRequestParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslRequestParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslRequestParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslRequestParams> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21InputZslRequestParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeISA_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeISA_PvEEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model21MulticamZoomProcessorC1ENSt3__110shared_ptrINS1_6policy15pipelinesetting22IPipelineSettingPolicyEEE */
/* Demangled: NSCam::v3::pipeline::model::MulticamZoomProcessor::MulticamZoomProcessor(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::IPipelineSettingPolicy>) */
int _ZN5NSCam2v38pipeline5model21MulticamZoomProcessorC1ENSt3__110shared_ptrINS1_6policy15pipelinesetting22IPipelineSettingPolicyEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE6rehashEm(void);

/* Symbol: _ZNK5NSCam2v38pipeline5model27PipelineModelSessionDefault25getCurrentPipelineContextEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::getCurrentPipelineContext() const */
int _ZNK5NSCam2v38pipeline5model27PipelineModelSessionDefault25getCurrentPipelineContextEv(void);

/* Symbol: _ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE7__cloneEPNS0_6__baseISU_EE */
/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&> >, bool (unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&)>::__clone(std::__1::__function::__base<bool (unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&)>*) const */
int _ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE7__cloneEPNS0_6__baseISU_EE(void);

/* Symbol: _ZNK7android6VectorIlE7do_copyEPvPKvm */
/* Demangled: android::Vector<long>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS6_EEEEENSK_INS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result> > >::__emplace_unique_key_args<int, std::__1::pair<int const, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result> >(int const&, std::__1::pair<int const, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS6_EEEEENSK_INS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTv0_n24_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
int _ZTv0_n24_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR9configureEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::configure() */
int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR9configureEv(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model24PipelineModelSessionSMVRE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE */
/* Demangled: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionSMVR */
extern void* _ZTCN5NSCam2v38pipeline5model24PipelineModelSessionSMVRE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model24PipelineModelSessionSMVR11ConfigInfo2ENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::PipelineModelSessionSMVR::ConfigInfo2, std::__1::allocator<NSCam::v3::pipeline::model::PipelineModelSessionSMVR::ConfigInfo2> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model24PipelineModelSessionSMVR11ConfigInfo2ENS_9allocatorIS6_EEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v317NSPipelineContext13IFrameBuilderEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> const&>(std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> const&) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v317NSPipelineContext13IFrameBuilderEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZTVN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE */
/* Demangled: vtable for NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern void* _ZTVN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE;

/* Symbol: _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEE9__executeEv */
/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> >::__execute() */
int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEE9__executeEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >::__push_back_slow_path<android::sp<NSCam::v3::IMetaStreamBuffer> const&>(android::sp<NSCam::v3::IMetaStreamBuffer> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault24configureCaptureInFlightEii */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::configureCaptureInFlight(int, int) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault24configureCaptureInFlightEii(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingD2Ev */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE0_NS2_21IPipelineModelSessionE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::IPipelineModelSession-in-NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern void* _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE0_NS2_21IPipelineModelSessionE;

/* Symbol: _ZThn8_N5NSCam2v38pipeline5model27PipelineModelSessionDefault11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
int _ZThn8_N5NSCam2v38pipeline5model27PipelineModelSessionDefault11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam32updateBeforeBuildPipelineContextEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::updateBeforeBuildPipelineContext() */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam32updateBeforeBuildPipelineContextEv(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasicC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::PipelineModelSessionBasic(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasicC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZNK5NSCam2v38pipeline5model27PipelineModelSessionDefault22getAppRaw16ReprocessorEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::getAppRaw16Reprocessor() const */
int _ZNK5NSCam2v38pipeline5model27PipelineModelSessionDefault22getAppRaw16ReprocessorEv(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE0_NS2_24PipelineModelSessionBaseE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionBase-in-NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE0_NS2_24PipelineModelSessionBaseE;

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model16ParsedAppRequestEEENS_9allocatorIS7_EEE24__emplace_back_slow_pathIJRS7_EEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> > >::__emplace_back_slow_path<std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>&>(std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>&) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model16ParsedAppRequestEEENS_9allocatorIS7_EEE24__emplace_back_slow_pathIJRS7_EEEvDpOT_(void);

/* Symbol: _ZNK7android6VectorIlE10do_destroyEPvm */
/* Demangled: android::Vector<long>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIlE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__15asyncIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS3_6policy15pipelinesetting19RequestOutputParamsEEENS6_INS4_16ParsedAppRequestEEENS6_INS1_9IMetadataEEEjEJPS5_RSA_RKSC_RSE_RjEEENS_6futureINS_11__invoke_ofINS_5decayIT_E4typeEJDpNSP_IT0_E4typeEEE4typeEEENS_6launchEOSQ_DpOST_ */
/* Demangled: std::__1::future<std::__1::__invoke_of<std::__1::decay<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int)>::type, std::__1::decay<NSCam::v3::pipeline::model::PipelineModelSession4Cell*>::type, std::__1::decay<std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>&>::type, std::__1::decay<std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&>::type, std::__1::decay<std::__1::shared_ptr<NSCam::IMetadata>&>::type, std::__1::decay<unsigned int&>::type>::type> std::__1::async<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>&, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&, std::__1::shared_ptr<NSCam::IMetadata>&, unsigned int&>(std::__1::launch, int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*&&)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*&&, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>&, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&, std::__1::shared_ptr<NSCam::IMetadata>&, unsigned int&) */
int _ZNSt3__15asyncIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS3_6policy15pipelinesetting19RequestOutputParamsEEENS6_INS4_16ParsedAppRequestEEENS6_INS1_9IMetadataEEEjEJPS5_RSA_RKSC_RSE_RjEEENS_6futureINS_11__invoke_ofINS_5decayIT_E4typeEJDpNSP_IT0_E4typeEEE4typeEEENS_6launchEOSQ_DpOST_(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE160_NS0_17NSPipelineContext13IDataCallbackE */
/* Demangled: construction vtable for NSCam::v3::NSPipelineContext::IDataCallback-in-NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE160_NS0_17NSPipelineContext13IDataCallbackE;

/* Symbol: _ZThn160_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
int _ZThn160_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev(void);

/* Symbol: _ZNSt3__16vectorIPN5NSCam10IHalSensorENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::IHalSensor*, std::__1::allocator<NSCam::IHalSensor*> >::__push_back_slow_path<NSCam::IHalSensor* const&>(NSCam::IHalSensor* const&) */
int _ZNSt3__16vectorIPN5NSCam10IHalSensorENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >::__push_back_slow_path<android::sp<NSCam::v3::IImageStreamInfo> const&>(android::sp<NSCam::v3::IImageStreamInfo> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4CellD1Ev(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE */
/* Demangled: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern void* _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE;

/* Symbol: _ZTv0_n112_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
int _ZTv0_n112_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault23enqueZslBuildFrameParamEjPKNS1_6policy15pipelinesetting19RequestResultParamsERKNSt3__110shared_ptrINS0_17NSPipelineContext13IFrameBuilderEEERKN7android2spINSB_16IPipelineContextEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::enqueZslBuildFrameParam(unsigned int, NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams const*, std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> const&, android::sp<NSCam::v3::NSPipelineContext::IPipelineContext> const&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault23enqueZslBuildFrameParamEjPKNS1_6policy15pipelinesetting19RequestResultParamsERKNSt3__110shared_ptrINS0_17NSPipelineContext13IFrameBuilderEEERKN7android2spINSB_16IPipelineContextEEE(void);

/* Symbol: _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControlE */
/* Demangled: vtable for NSCam::v3::Utils::SimpleStreamInfoSetControl */
extern void* _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControlE;

/* Symbol: _ZNSt3__127__make_deferred_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEEENS_6futureIT_EEOT0_ */
/* Demangled: std::__1::future<int> std::__1::__make_deferred_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> >(std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int>&&) */
int _ZNSt3__127__make_deferred_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEEENS_6futureIT_EEOT0_(void);

/* Symbol: _ZThn160_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
int _ZThn160_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::PipelineModelSessionMultiCam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedSMVRBatchInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedSMVRBatchInfo> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy22ParsedAppConfigurationENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppConfiguration, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppConfiguration> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy22ParsedAppConfigurationENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault20updateFrameTimestampEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultEl */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::updateFrameTimestamp(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&, long) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault20updateFrameTimestampEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultEl(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault23onProcessEvaluatedFrameERjRKNS2_25PipelineModelSessionBasic21ProcessEvaluatedFrameE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::onProcessEvaluatedFrame(unsigned int&, NSCam::v3::pipeline::model::PipelineModelSessionBasic::ProcessEvaluatedFrame const&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault23onProcessEvaluatedFrameERjRKNS2_25PipelineModelSessionBasic21ProcessEvaluatedFrameE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault31tryHandleAppRaw16ReprocessFrameERKNS3_37TryHandleAppRaw16ReprocessFrameParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::tryHandleAppRaw16ReprocessFrame(NSCam::v3::pipeline::model::PipelineModelSessionDefault::TryHandleAppRaw16ReprocessFrameParams const&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault31tryHandleAppRaw16ReprocessFrameERKNS3_37TryHandleAppRaw16ReprocessFrameParamsE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::makeInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v38pipeline5model25PipelineModelSessionBasic21getCurrentConfigInfo2Ev */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::getCurrentConfigInfo2() const */
int _ZNK5NSCam2v38pipeline5model25PipelineModelSessionBasic21getCurrentConfigInfo2Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model20InputZslConfigParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslConfigParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslConfigParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslConfigParams> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model20InputZslConfigParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEEE;

/* Symbol: _ZNK5NSCam2v38pipeline5model24PipelineModelSessionSMVR25getCurrentPipelineContextEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::getCurrentPipelineContext() const */
int _ZNK5NSCam2v38pipeline5model24PipelineModelSessionSMVR25getCurrentPipelineContextEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam20updateFrame_multicamEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::updateFrame_multicam(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam20updateFrame_multicamEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model16ParsedAppRequestENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::ParsedAppRequest, std::__1::allocator<NSCam::v3::pipeline::model::ParsedAppRequest> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model16ParsedAppRequestENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault25getCaptureInFlightRequestEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::getCaptureInFlightRequest() */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault25getCaptureInFlightRequestEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> const&>(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> const&) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void);

/* Symbol: _ZTTN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE */
/* Demangled: VTT for NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern void* _ZTTN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE;

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell28waitUntilNodeDrainedAndFlushElN7android2spINS0_17NSPipelineContext16IPipelineContextEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::waitUntilNodeDrainedAndFlush(long, android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell28waitUntilNodeDrainedAndFlushElN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedDualCamInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedDualCamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedDualCamInfo> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedDualCamInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase10beginFlushEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBase::beginFlush() */
int _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase10beginFlushEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault21onNextCaptureCallBackEjlji */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::onNextCaptureCallBack(unsigned int, long, unsigned int, int) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault21onNextCaptureCallBackEjlji(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR16submitOneRequestERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::submitOneRequest(std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&) */
int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR16submitOneRequestERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy25PipelineUserConfigurationENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::PipelineUserConfiguration, std::__1::allocator<NSCam::v3::pipeline::policy::PipelineUserConfiguration> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy25PipelineUserConfigurationENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic32onConfig_AppImageStreamMaxBufNumEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onConfig_AppImageStreamMaxBufNum() */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic32onConfig_AppImageStreamMaxBufNumEv(void);

/* Symbol: _ZThn8_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
int _ZThn8_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model21MulticamZoomProcessor10sendNotifyEjj */
/* Demangled: NSCam::v3::pipeline::model::MulticamZoomProcessor::sendNotify(unsigned int, unsigned int) */
int _ZN5NSCam2v38pipeline5model21MulticamZoomProcessor10sendNotifyEjj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE7__cloneEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&> >, bool (unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&)>::__clone() const */
int _ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE7__cloneEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEED2Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic16submitOneRequestERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::submitOneRequest(std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic16submitOneRequestERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic9configureEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::configure() */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic9configureEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE6rehashEm(void);

/* Symbol: _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_15IMetaStreamInfoEEE */
/* Demangled: vtable for NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IMetaStreamInfo> */
extern void* _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_15IMetaStreamInfoEEE;

/* Symbol: _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE160_NS0_17NSPipelineContext16DataCallbackBaseE */
/* Demangled: construction vtable for NSCam::v3::NSPipelineContext::DataCallbackBase-in-NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE160_NS0_17NSPipelineContext16DataCallbackBaseE;

/* Symbol: end */
/* Demangled: end */
extern void* end;

/* Symbol: _ZTVN5NSCam2v38pipeline5model25PipelineModelSessionBasicE */
/* Demangled: vtable for NSCam::v3::pipeline::model::PipelineModelSessionBasic */
extern void* _ZTVN5NSCam2v38pipeline5model25PipelineModelSessionBasicE;

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21MulticamZoomProcessorENS_14default_deleteIS5_EENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::MulticamZoomProcessor*, std::__1::default_delete<NSCam::v3::pipeline::model::MulticamZoomProcessor>, std::__1::allocator<NSCam::v3::pipeline::model::MulticamZoomProcessor> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21MulticamZoomProcessorENS_14default_deleteIS5_EENS_9allocatorIS5_EEEE;

/* Symbol: _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::NSPipelineContext::NodeEdge> */
extern void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEEE;

/* Symbol: _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE160_NS0_17NSPipelineContext16DataCallbackBaseE */
/* Demangled: construction vtable for NSCam::v3::NSPipelineContext::DataCallbackBase-in-NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern void* _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE160_NS0_17NSPipelineContext16DataCallbackBaseE;

/* Symbol: _ZN5NSCam2v38pipeline5model21MulticamZoomProcessorC2ENSt3__110shared_ptrINS1_6policy15pipelinesetting22IPipelineSettingPolicyEEE */
/* Demangled: NSCam::v3::pipeline::model::MulticamZoomProcessor::MulticamZoomProcessor(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::IPipelineSettingPolicy>) */
int _ZN5NSCam2v38pipeline5model21MulticamZoomProcessorC2ENSt3__110shared_ptrINS1_6policy15pipelinesetting22IPipelineSettingPolicyEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault38onConfig_BeforeBuildingPipelineContextEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::onConfig_BeforeBuildingPipelineContext() */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault38onConfig_BeforeBuildingPipelineContextEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_ */
/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_ */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_(void);

/* Symbol: _ZTVN5NSCam2v38pipeline5model25PipelineModelSession4CellE */
/* Demangled: vtable for NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern void* _ZTVN5NSCam2v38pipeline5model25PipelineModelSession4CellE;

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam27setSensorSyncToSensorDriverEb */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::setSensorSyncToSensorDriver(bool) */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam27setSensorSyncToSensorDriverEb(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE160_NS0_17NSPipelineContext16DataCallbackBaseE */
/* Demangled: construction vtable for NSCam::v3::NSPipelineContext::DataCallbackBase-in-NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern void* _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE160_NS0_17NSPipelineContext16DataCallbackBaseE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy22ParsedAppConfigurationENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppConfiguration, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppConfiguration> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy22ParsedAppConfigurationENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic5printERN7android7PrinterERKNS3_11ConfigInfo2E */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::print(android::Printer&, NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2 const&) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic5printERN7android7PrinterERKNS3_11ConfigInfo2E(void);

/* Symbol: _ZThn8_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
int _ZThn8_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase21determineTimestampSOFElRKN7android6VectorINS4_2spINS0_17IMetaStreamBufferEEEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBase::determineTimestampSOF(long, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > const&) */
int _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase21determineTimestampSOFElRKN7android6VectorINS4_2spINS0_17IMetaStreamBufferEEEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault9configureEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::configure() */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault9configureEv(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE */
/* Demangled: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern void* _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2ENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2, std::__1::allocator<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2ENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam19evaluatePreviewSizeERNS_5MSizeE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::evaluatePreviewSize(NSCam::MSize&) */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam19evaluatePreviewSizeERNS_5MSizeE(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE160_NS0_17NSPipelineContext13IDataCallbackE */
/* Demangled: construction vtable for NSCam::v3::NSPipelineContext::IDataCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern void* _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE160_NS0_17NSPipelineContext13IDataCallbackE;

/* Symbol: _ZTv0_n24_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSession4Cell::~PipelineModelSession4Cell() */
int _ZTv0_n24_N5NSCam2v38pipeline5model25PipelineModelSession4CellD0Ev(void);

/* Symbol: _ZThn8_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
int _ZThn8_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZThn160_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
int _ZThn160_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm(void);

/* Symbol: _ZTv0_n112_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
int _ZTv0_n112_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE6rehashEm(void);

/* Symbol: _ZTv0_n112_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
int _ZTv0_n112_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD1Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2ENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2, std::__1::allocator<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2ENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEE16__on_zero_sharedEv */
/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> >::__on_zero_shared() */
int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__122__deferred_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEE9__executeEv */
/* Demangled: std::__1::__deferred_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> >::__execute() */
int _ZNSt3__122__deferred_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEE9__executeEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam25updateFrame_multicam_zoomEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::updateFrame_multicam_zoom(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam25updateFrame_multicam_zoomEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model16ParsedAppRequestEEENS_9allocatorIS7_EEE7reserveEm */
/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> > >::reserve(unsigned long) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model16ParsedAppRequestEEENS_9allocatorIS7_EEE7reserveEm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model16ParsedAppRequestENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::ParsedAppRequest, std::__1::allocator<NSCam::v3::pipeline::model::ParsedAppRequest> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model16ParsedAppRequestENS_9allocatorIS5_EEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE7__cloneEPNS0_6__baseISE_EE */
/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*> >, bool ()>::__clone(std::__1::__function::__base<bool ()>*) const */
int _ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEE7__cloneEPNS0_6__baseISE_EE(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext11NodeEdgeSetE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::NodeEdgeSet */
extern void* _ZTVN5NSCam2v317NSPipelineContext11NodeEdgeSetE;

/* Symbol: _ZTCN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_16IImageStreamInfoEEE0_NS0_14IStreamInfoSet4IMapIS4_EE */
/* Demangled: construction vtable for NSCam::v3::IStreamInfoSet::IMap<NSCam::v3::IImageStreamInfo>-in-NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IImageStreamInfo> */
extern void* _ZTCN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_16IImageStreamInfoEEE0_NS0_14IStreamInfoSet4IMapIS4_EE;

/* Symbol: _ZThn160_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
int _ZThn160_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD1Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell10beginFlushEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::beginFlush() */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell10beginFlushEv(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE0_NS2_27PipelineModelSessionDefaultE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionDefault-in-NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE0_NS2_27PipelineModelSessionDefaultE;

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm(void);

/* Symbol: _ZThn8_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
int _ZThn8_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault25onRequest_ReconfigurationERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEERKNS1_6policy15pipelinesetting19RequestOutputParamsERKNS5_INS2_16ParsedAppRequestEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::onRequest_Reconfiguration(std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2>&, NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault25onRequest_ReconfigurationERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEERKNS1_6policy15pipelinesetting19RequestOutputParamsERKNS5_INS2_16ParsedAppRequestEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault33prepareForSubmittingPipelineFrameEN7android2spINS0_14IPipelineFrameEEEjRKNS1_6policy15pipelinesetting19RequestResultParamsERKNS9_19RequestOutputParamsENSt3__110shared_ptrINS_9IMetadataEEENSH_INS2_16ParsedAppRequestEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::prepareForSubmittingPipelineFrame(android::sp<NSCam::v3::IPipelineFrame>, unsigned int, NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams const&, NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams const&, std::__1::shared_ptr<NSCam::IMetadata>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault33prepareForSubmittingPipelineFrameEN7android2spINS0_14IPipelineFrameEEEjRKNS1_6policy15pipelinesetting19RequestResultParamsERKNS9_19RequestOutputParamsENSt3__110shared_ptrINS_9IMetadataEEENSH_INS2_16ParsedAppRequestEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell21processReconfigStreamERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::processReconfigStream(std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2>&, unsigned int) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell21processReconfigStreamERNSt3__110shared_ptrINS2_25PipelineModelSessionBasic11ConfigInfo2EEEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIjJNS_4pairIjS9_EEEEENSN_INS_15__hash_iteratorIPNS_11__hash_nodeISA_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> > > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> > >(unsigned int const&, std::__1::pair<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model25PipelineModelSessionBasic11ConfigInfo2EEEEENS_22__unordered_map_hasherIjSA_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSA_NS_8equal_toIjEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIjJNS_4pairIjS9_EEEEENSN_INS_15__hash_iteratorIPNS_11__hash_nodeISA_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD2Ev */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD2Ev(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model25PipelineModelSessionBasicE160_NS0_17NSPipelineContext13IDataCallbackE */
/* Demangled: construction vtable for NSCam::v3::NSPipelineContext::IDataCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionBasic */
extern void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSessionBasicE160_NS0_17NSPipelineContext13IDataCallbackE;

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedDualCamInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedDualCamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedDualCamInfo> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedDualCamInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK7android6VectorIlE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<long>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIlEE */
/* Demangled: vtable for android::Vector<long> */
extern void* _ZTVN7android6VectorIlEE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&>(unsigned int const&, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE */
/* Demangled: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback-in-NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSession4CellE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v330IPipelineBufferSetFrameControl12IAppCallback6ResultEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model24PipelineModelSessionSMVR11ConfigInfo2ENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::PipelineModelSessionSMVR::ConfigInfo2, std::__1::allocator<NSCam::v3::pipeline::model::PipelineModelSessionSMVR::ConfigInfo2> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model24PipelineModelSessionSMVR11ConfigInfo2ENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model21MulticamZoomProcessorD2Ev */
/* Demangled: NSCam::v3::pipeline::model::MulticamZoomProcessor::~MulticamZoomProcessor() */
int _ZN5NSCam2v38pipeline5model21MulticamZoomProcessorD2Ev(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams> const&>(std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams> const&) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb1ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb1ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb1ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam19prepareSensorObjectEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::prepareSensorObject() */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam19prepareSensorObjectEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsERKNS3_13ExtCtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::PipelineModelSessionDefault(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&, NSCam::v3::pipeline::model::PipelineModelSessionDefault::ExtCtorParams const&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsERKNS3_13ExtCtorParamsE(void);

/* Symbol: _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_16IImageStreamInfoEEE */
/* Demangled: vtable for NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IImageStreamInfo> */
extern void* _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_16IImageStreamInfoEEE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEEE;

/* Symbol: _ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv */
/* Demangled: std::__1::__assoc_state<int>::__on_zero_shared() */
int _ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE160_NS0_17NSPipelineContext13IDataCallbackE */
/* Demangled: construction vtable for NSCam::v3::NSPipelineContext::IDataCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern void* _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE160_NS0_17NSPipelineContext13IDataCallbackE;

/* Symbol: _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase13submitRequestERKNSt3__16vectorINS4_10shared_ptrINS2_17UserRequestParamsEEENS4_9allocatorIS8_EEEERj */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBase::submitRequest(std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::model::UserRequestParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::model::UserRequestParams> > > const&, unsigned int&) */
int _ZN5NSCam2v38pipeline5model24PipelineModelSessionBase13submitRequestERKNSt3__16vectorINS4_10shared_ptrINS2_17UserRequestParamsEEENS4_9allocatorIS8_EEEERj(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21InputZslRequestParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::model::InputZslRequestParams*, std::__1::default_delete<NSCam::v3::pipeline::model::InputZslRequestParams>, std::__1::allocator<NSCam::v3::pipeline::model::InputZslRequestParams> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline5model21InputZslRequestParamsENS_14default_deleteIS5_EENS_9allocatorIS5_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault15getRootsStreamsERNSt3__16vectorIlNS4_9allocatorIlEEEEPKNS1_6policy15pipelinesetting19RequestResultParamsEb */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::getRootsStreams(std::__1::vector<long, std::__1::allocator<long> >&, NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams const*, bool) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault15getRootsStreamsERNSt3__16vectorIlNS4_9allocatorIlEEEEPKNS1_6policy15pipelinesetting19RequestResultParamsEb(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE0_NS2_21IPipelineModelSessionE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::IPipelineModelSession-in-NSCam::v3::pipeline::model::PipelineModelSessionStreaming */
extern void* _ZTCN5NSCam2v38pipeline5model29PipelineModelSessionStreamingE0_NS2_21IPipelineModelSessionE;

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::PipelineModelSessionMultiCam(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsE(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model25PipelineModelSessionBasicE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE */
/* Demangled: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback-in-NSCam::v3::pipeline::model::PipelineModelSessionBasic */
extern void* _ZTCN5NSCam2v38pipeline5model25PipelineModelSessionBasicE8_NS0_30IPipelineBufferSetFrameControl12IAppCallbackE;

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell11flushP1nodeERN7android2spINS0_17NSPipelineContext16IPipelineContextEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::flushP1node(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>&) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell11flushP1nodeERN7android2spINS0_17NSPipelineContext16IPipelineContextEEE(void);

/* Symbol: _ZTVNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEEE */
/* Demangled: vtable for std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::v3::pipeline::model::PipelineModelSession4Cell::*)(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int), NSCam::v3::pipeline::model::PipelineModelSession4Cell*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams>, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int> > */
extern void* _ZTVNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam2v38pipeline5model25PipelineModelSession4CellEFiNS_10shared_ptrINS4_6policy15pipelinesetting19RequestOutputParamsEEENS7_INS5_16ParsedAppRequestEEENS7_INS2_9IMetadataEEEjEJPS6_SB_SD_SF_jEEEEE;

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEEclEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*> >, bool ()>::operator()() */
int _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbvEJPS7_EEENS_9allocatorISB_EEFbvEEclEv(void);

/* Symbol: _ZThn8_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCam11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE */
/* Demangled: non-virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
int _ZThn8_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCam11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_4pairIKlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<long, std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamInfo> > const&>(long const&, std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamInfo> > const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_4pairIKlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTv0_n24_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
int _ZTv0_n24_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedSMVRBatchInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedSMVRBatchInfo> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTv0_n24_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
int _ZTv0_n24_N5NSCam2v38pipeline5model27PipelineModelSessionDefaultD0Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell16submitOneRequestERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::submitOneRequest(std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell16submitOneRequestERKNSt3__110shared_ptrINS2_16ParsedAppRequestEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR13submitRequestERKNSt3__16vectorINS4_10shared_ptrINS2_17UserRequestParamsEEENS4_9allocatorIS8_EEEERj */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionSMVR::submitRequest(std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::model::UserRequestParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::model::UserRequestParams> > > const&, unsigned int&) */
int _ZN5NSCam2v38pipeline5model24PipelineModelSessionSMVR13submitRequestERKNSt3__16vectorINS4_10shared_ptrINS2_17UserRequestParamsEEENS4_9allocatorIS8_EEEERj(void);

/* Symbol: _ZN5NSCam2v38pipeline5model24PipelineModelSessionBaseC2EOKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS3_10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBase::PipelineModelSessionBase(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model24PipelineModelSessionBaseC2EOKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS3_10CtorParamsE(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSession4Cell::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSession4Cell11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE;

/* Symbol: _ZNK7android6VectorIlE8do_splatEPvPKvm */
/* Demangled: android::Vector<long>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsERKNS3_13ExtCtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::makeInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::PipelineModelSessionBase::CtorParams const&, NSCam::v3::pipeline::model::PipelineModelSessionDefault::ExtCtorParams const&) */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefault12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_24PipelineModelSessionBase10CtorParamsERKNS3_13ExtCtorParamsE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_ */
/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamInfo> >, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEEEEvT_SR_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic31onRequest_ProcessEvaluatedFrameERKNSt3__110shared_ptrINS1_6policy15pipelinesetting19RequestOutputParamsEEERKNS5_INS2_16ParsedAppRequestEEERKNS5_INS3_11ConfigInfo2EEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionBasic::onRequest_ProcessEvaluatedFrame(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams> const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::ParsedAppRequest> const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::PipelineModelSessionBasic::ConfigInfo2> const&) */
int _ZN5NSCam2v38pipeline5model25PipelineModelSessionBasic31onRequest_ProcessEvaluatedFrameERKNSt3__110shared_ptrINS1_6policy15pipelinesetting19RequestOutputParamsEEERKNS5_INS2_16ParsedAppRequestEEERKNS5_INS3_11ConfigInfo2EEE(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::*)(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&), NSCam::v3::pipeline::model::PipelineModelSessionMultiCam*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, std::__1::placeholders::__ph<3> const&> >, bool (unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamEFbjlRKNS4_30IPipelineBufferSetFrameControl12IAppCallback6ResultEEJPS7_RKNS_12placeholders4__phILi1EEERKNSH_ILi2EEERKNSH_ILi3EEEEEENS_9allocatorISR_EEFbjlSC_EE18destroy_deallocateEv(void);

/* Symbol: _ZTTN5NSCam2v38pipeline5model25PipelineModelSessionBasicE */
/* Demangled: VTT for NSCam::v3::pipeline::model::PipelineModelSessionBasic */
extern void* _ZTTN5NSCam2v38pipeline5model25PipelineModelSessionBasicE;

/* Symbol: _ZTv0_n112_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionStreaming::~PipelineModelSessionStreaming() */
int _ZTv0_n112_N5NSCam2v38pipeline5model29PipelineModelSessionStreamingD0Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::updateFrame(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
int _ZN5NSCam2v38pipeline5model28PipelineModelSessionMultiCam11updateFrameEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void);

/* Symbol: _ZNK7android6VectorIlE12do_constructEPvm */
/* Demangled: android::Vector<long>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIlE12do_constructEPvm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsENS_9allocatorIS6_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultD2Ev */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionDefault::~PipelineModelSessionDefault() */
int _ZN5NSCam2v38pipeline5model27PipelineModelSessionDefaultD2Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming30waitUntilP1NodeDrainedAndFlushEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelSessionStreaming::waitUntilP1NodeDrainedAndFlush() */
int _ZN5NSCam2v38pipeline5model29PipelineModelSessionStreaming30waitUntilP1NodeDrainedAndFlushEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy22ParsedAppConfigurationENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppConfiguration, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppConfiguration> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy22ParsedAppConfigurationENS_9allocatorIS5_EEEE;

/* Symbol: _ZTTN5NSCam2v38pipeline5model25PipelineModelSession4CellE */
/* Demangled: VTT for NSCam::v3::pipeline::model::PipelineModelSession4Cell */
extern void* _ZTTN5NSCam2v38pipeline5model25PipelineModelSession4CellE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRKNS_4pairIKjS5_EEJEEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISQ_EEEEEEmOT_DpOT0_ */
/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__construct_node_hash<std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&>(unsigned long, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRKNS_4pairIKjS5_EEJEEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISQ_EEEEEEmOT_DpOT0_(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE0_NS2_27PipelineModelSessionDefaultE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::PipelineModelSessionDefault-in-NSCam::v3::pipeline::model::PipelineModelSessionMultiCam */
extern void* _ZTCN5NSCam2v38pipeline5model28PipelineModelSessionMultiCamE0_NS2_27PipelineModelSessionDefaultE;

/* Symbol: _ZTv0_n24_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::PipelineModelSessionMultiCam::~PipelineModelSessionMultiCam() */
int _ZTv0_n24_N5NSCam2v38pipeline5model28PipelineModelSessionMultiCamD0Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS2_PvEEEEEEvT_SL_ */
/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<long, long>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, long>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, long>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, long> > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, long>, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, long>, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, long>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIllEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS2_PvEEEEEEvT_SL_(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE160_NS0_17NSPipelineContext16DataCallbackBaseE */
/* Demangled: construction vtable for NSCam::v3::NSPipelineContext::DataCallbackBase-in-NSCam::v3::pipeline::model::PipelineModelSessionDefault */
extern void* _ZTCN5NSCam2v38pipeline5model27PipelineModelSessionDefaultE160_NS0_17NSPipelineContext16DataCallbackBaseE;

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_PIPELINEMODEL_SESSION_H */
