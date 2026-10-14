/*
 * Reverse-Engineered ABI Specification for: libmtkcam_pipelinemodel_utils.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_pipelinemodel_utils.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_PIPELINEMODEL_UTILS_H
#define BEGONIA_RE_LIBMTKCAM_PIPELINEMODEL_UTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamInfo> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17ScenarioControlV315exitPerfServiceEv */
/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::exitPerfService() */
int _ZN5NSCam2v38pipeline5model17ScenarioControlV315exitPerfServiceEv(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >::__push_back_slow_path<android::sp<NSCam::v3::IMetaStreamBuffer> const&>(android::sp<NSCam::v3::IMetaStreamBuffer> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZNK7android6VectorIjE12do_constructEPvm */
/* Demangled: android::Vector<unsigned int>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIjE12do_constructEPvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_9RAW16NodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_9RAW16NodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model16makeFrameBuilderERKNS2_29BuildPipelineFrameInputParamsE */
/* Demangled: NSCam::v3::pipeline::model::makeFrameBuilder(NSCam::v3::pipeline::model::BuildPipelineFrameInputParams const&) */
int _ZN5NSCam2v38pipeline5model16makeFrameBuilderERKNS2_29BuildPipelineFrameInputParamsE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKiRKS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> > > >::__emplace_unique_key_args<int, int const&, android::sp<NSCam::v3::IImageStreamBuffer> const&>(int const&, int const&, android::sp<NSCam::v3::IImageStreamBuffer> const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKiRKS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKPS6_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<long, long const&, NSCam::v3::IImageStreamInfo* const&>(long const&, long const&, NSCam::v3::IImageStreamInfo* const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKPS6_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSR_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISC_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSR_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISC_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_15P2StreamingNodeEEE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2StreamingNode> */
extern void* _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_15P2StreamingNodeEEE;

/* Symbol: _ZTVN5NSCam2v33SetIlEE */
/* Demangled: vtable for NSCam::v3::Set<long> */
extern void* _ZTVN5NSCam2v33SetIlEE;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6FdNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6FdNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI20MMDVFS_QOS_PARAMETERNS_9allocatorIS1_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<MMDVFS_QOS_PARAMETER, std::__1::allocator<MMDVFS_QOS_PARAMETER> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceI20MMDVFS_QOS_PARAMETERNS_9allocatorIS1_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKiRKPS6_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<int, int const&, NSCam::v3::IImageStreamInfo* const&>(int const&, int const&, NSCam::v3::IImageStreamInfo* const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKiRKPS6_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE16__construct_nodeIJRmRSB_EEENS_10unique_ptrINS_11__hash_nodeISC_PvEENS_22__hash_node_destructorINS9_IST_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > > > >::__construct_node<unsigned long&, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > >&>(unsigned long&, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > >&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE16__construct_nodeIJRmRSB_EEENS_10unique_ptrINS_11__hash_nodeISC_PvEENS_22__hash_node_destructorINS9_IST_EEEEEEDpOT_(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamInfo> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17ScenarioControlV313boostScenarioEiil */
/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::boostScenario(int, int, long) */
int _ZN5NSCam2v38pipeline5model17ScenarioControlV313boostScenarioEiil(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17makePipelineFrameERN7android2spINS0_14IPipelineFrameEEERKNSt3__110shared_ptrINS0_17NSPipelineContext13IFrameBuilderEEENS4_INSA_16IPipelineContextEEE */
/* Demangled: NSCam::v3::pipeline::model::makePipelineFrame(android::sp<NSCam::v3::IPipelineFrame>&, std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> const&, android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
int _ZN5NSCam2v38pipeline5model17makePipelineFrameERN7android2spINS0_14IPipelineFrameEEERKNSt3__110shared_ptrINS0_17NSPipelineContext13IFrameBuilderEEENS4_INSA_16IPipelineContextEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model28generateControlHalMetaBufferEPNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEEPKNS_9IMetadataEPKNS0_15IMetaStreamInfoE */
/* Demangled: NSCam::v3::pipeline::model::generateControlHalMetaBuffer(std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >*, NSCam::IMetadata const*, NSCam::v3::IMetaStreamInfo const*) */
int _ZN5NSCam2v38pipeline5model28generateControlHalMetaBufferEPNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEEPKNS_9IMetadataEPKNS0_15IMetaStreamInfoE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6P1NodeEEENS_9allocatorIS7_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P1Node>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P1Node> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6P1NodeEEENS_9allocatorIS7_EEEE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model17ScenarioControlV323checkIfNeedExitBoostCPUEli */
/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::checkIfNeedExitBoostCPU(long, int) */
int _ZN5NSCam2v38pipeline5model17ScenarioControlV323checkIfNeedExitBoostCPUEli(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZTVN7android6VectorIjEE */
/* Demangled: vtable for android::Vector<unsigned int> */
extern void* _ZTVN7android6VectorIjEE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEEEEvT_SJ_ */
/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEEEEvT_SJ_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::MSize, std::__1::allocator<NSCam::MSize> >::__push_back_slow_path<NSCam::MSize>(NSCam::MSize&&) */
int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE6rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_13P2CaptureNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_13P2CaptureNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void);

/* Symbol: _Z14isInStereoModei */
/* Demangled: isInStereoMode(int) */
int _Z14isInStereoModei(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >::__push_back_slow_path<android::sp<NSCam::v3::IImageStreamInfo> >(android::sp<NSCam::v3::IImageStreamInfo>&&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_7PDENodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_7PDENodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceI20MMDVFS_QOS_PARAMETERNS_9allocatorIS1_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<MMDVFS_QOS_PARAMETER, std::__1::allocator<MMDVFS_QOS_PARAMETER> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceI20MMDVFS_QOS_PARAMETERNS_9allocatorIS1_EEEE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model28generateControlAppMetaBufferEPNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEES8_PKNS_9IMetadataESF_PKNS0_15IMetaStreamInfoE */
/* Demangled: NSCam::v3::pipeline::model::generateControlAppMetaBuffer(std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >*, android::sp<NSCam::v3::IMetaStreamBuffer>, NSCam::IMetadata const*, NSCam::IMetadata const*, NSCam::v3::IMetaStreamInfo const*) */
int _ZN5NSCam2v38pipeline5model28generateControlAppMetaBufferEPNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEES8_PKNS_9IMetadataESF_PKNS0_15IMetaStreamInfoE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model31reconfigureP1ForPipelineContextEN7android2spINS0_17NSPipelineContext16IPipelineContextEEERKNS2_31BuildPipelineContextInputParamsEPNS2_32BuildPipelineContextOutputParamsE */
/* Demangled: NSCam::v3::pipeline::model::reconfigureP1ForPipelineContext(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>, NSCam::v3::pipeline::model::BuildPipelineContextInputParams const&, NSCam::v3::pipeline::model::BuildPipelineContextOutputParams*) */
int _ZN5NSCam2v38pipeline5model31reconfigureP1ForPipelineContextEN7android2spINS0_17NSPipelineContext16IPipelineContextEEERKNS2_31BuildPipelineContextInputParamsEPNS2_32BuildPipelineContextOutputParamsE(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _Z11isMultiOpenv */
/* Demangled: isMultiOpen() */
int _Z11isMultiOpenv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17ScenarioControlV316enterPerfServiceERKNS2_18IScenarioControlV312ControlParamE */
/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::enterPerfService(NSCam::v3::pipeline::model::IScenarioControlV3::ControlParam const&) */
int _ZN5NSCam2v38pipeline5model17ScenarioControlV316enterPerfServiceERKNS2_18IScenarioControlV312ControlParamE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model27ParsedAppImageStreamBuffersENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::ParsedAppImageStreamBuffers, std::__1::allocator<NSCam::v3::pipeline::model::ParsedAppImageStreamBuffers> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model27ParsedAppImageStreamBuffersENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedMetaControlENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedMetaControl, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedMetaControl> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedMetaControlENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK7android6VectorIjE8do_splatEPvPKvm */
/* Demangled: android::Vector<unsigned int>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIjE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_15P2StreamingNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2StreamingNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2StreamingNode> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_15P2StreamingNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_9RAW16NodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_9RAW16NodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_6FdNodeEEE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode> */
extern void* _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_6FdNodeEEE;

/* Symbol: _Z17mapToBWCProfileV3i */
/* Demangled: mapToBWCProfileV3(int) */
int _Z17mapToBWCProfileV3i(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17ScenarioControlV315onLastStrongRefEPKv */
/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::onLastStrongRef(void const*) */
int _ZN5NSCam2v38pipeline5model17ScenarioControlV315onLastStrongRefEPKv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17ScenarioControlV316changeBWCProfileERKNS2_18IScenarioControlV312ControlParamE */
/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::changeBWCProfile(NSCam::v3::pipeline::model::IScenarioControlV3::ControlParam const&) */
int _ZN5NSCam2v38pipeline5model17ScenarioControlV316changeBWCProfileERKNS2_18IScenarioControlV312ControlParamE(void);

/* Symbol: gScenarioControlMap */
/* Demangled: gScenarioControlMap */
extern void* gScenarioControlMap;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE8__rehashEm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_9RAW16NodeEEENS_9allocatorIS7_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_9RAW16NodeEEENS_9allocatorIS7_EEEE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::__emplace_unique_key_args<long, long const&, android::sp<NSCam::v3::IImageStreamBuffer> const&>(long const&, long const&, android::sp<NSCam::v3::IImageStreamBuffer> const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > >::__push_back_slow_path<android::sp<NSCam::v3::IImageStreamBuffer> const&>(android::sp<NSCam::v3::IImageStreamBuffer> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model17ScenarioControlV313enterScenarioERKNS2_18IScenarioControlV312ControlParamE */
/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::enterScenario(NSCam::v3::pipeline::model::IScenarioControlV3::ControlParam const&) */
int _ZN5NSCam2v38pipeline5model17ScenarioControlV313enterScenarioERKNS2_18IScenarioControlV312ControlParamE(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_13P2CaptureNodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_ */
/* Demangled: std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode> > std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode> >::make_shared<android::sp<NSCam::v3::P2CaptureNode>&>(android::sp<NSCam::v3::P2CaptureNode>&) */
int _ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_13P2CaptureNodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamInfo> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model18buildPipelineFrameERN7android2spINS0_14IPipelineFrameEEERKNS2_29BuildPipelineFrameInputParamsENS4_INS0_17NSPipelineContext16IPipelineContextEEE */
/* Demangled: NSCam::v3::pipeline::model::buildPipelineFrame(android::sp<NSCam::v3::IPipelineFrame>&, NSCam::v3::pipeline::model::BuildPipelineFrameInputParams const&, android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
int _ZN5NSCam2v38pipeline5model18buildPipelineFrameERN7android2spINS0_14IPipelineFrameEEERKNS2_29BuildPipelineFrameInputParamsENS4_INS0_17NSPipelineContext16IPipelineContextEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >::__push_back_slow_path<android::sp<NSCam::v3::IMetaStreamBuffer> >(android::sp<NSCam::v3::IMetaStreamBuffer>&&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model20buildPipelineContextERN7android2spINS0_17NSPipelineContext16IPipelineContextEEERKNS2_31BuildPipelineContextInputParamsEPNS2_32BuildPipelineContextOutputParamsE */
/* Demangled: NSCam::v3::pipeline::model::buildPipelineContext(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>&, NSCam::v3::pipeline::model::BuildPipelineContextInputParams const&, NSCam::v3::pipeline::model::BuildPipelineContextOutputParams*) */
int _ZN5NSCam2v38pipeline5model20buildPipelineContextERN7android2spINS0_17NSPipelineContext16IPipelineContextEEERKNS2_31BuildPipelineContextInputParamsEPNS2_32BuildPipelineContextOutputParamsE(void);

/* Symbol: _ZNK7android6VectorIjE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<unsigned int>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIjE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIjE7do_copyEPvPKvm */
/* Demangled: android::Vector<unsigned int>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIjE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIlE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<long>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17ScenarioControlV312exitScenarioEv */
/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::exitScenario() */
int _ZN5NSCam2v38pipeline5model17ScenarioControlV312exitScenarioEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17ScenarioControlV312setQOSParamsERKNSt3__16vectorINS2_18IScenarioControlV311SensorParamENS4_9allocatorIS7_EEEEb */
/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::setQOSParams(std::__1::vector<NSCam::v3::pipeline::model::IScenarioControlV3::SensorParam, std::__1::allocator<NSCam::v3::pipeline::model::IScenarioControlV3::SensorParam> > const&, bool) */
int _ZN5NSCam2v38pipeline5model17ScenarioControlV312setQOSParamsERKNSt3__16vectorINS2_18IScenarioControlV311SensorParamENS4_9allocatorIS7_EEEEb(void);

/* Symbol: _ZNK7android6VectorIlE8do_splatEPvPKvm */
/* Demangled: android::Vector<long>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIliEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, int>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, int>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, int>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, int> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIliEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_15P2StreamingNodeEEENS_9allocatorIS7_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2StreamingNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2StreamingNode> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_15P2StreamingNodeEEENS_9allocatorIS7_EEEE;

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_8JpegNodeEEE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode> */
extern void* _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_8JpegNodeEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_8JpegNodeEEENS_9allocatorIS7_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_8JpegNodeEEENS_9allocatorIS7_EEEE;

/* Symbol: _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::NSPipelineContext::IOMap> */
extern void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model27ParsedAppImageStreamBuffersENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::ParsedAppImageStreamBuffers, std::__1::allocator<NSCam::v3::pipeline::model::ParsedAppImageStreamBuffers> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model27ParsedAppImageStreamBuffersENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedMetaControlENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedMetaControl, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedMetaControl> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedMetaControlENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedMetaControlENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedMetaControl, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedMetaControl> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedMetaControlENS_9allocatorIS5_EEEE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_15P2StreamingNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2StreamingNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2StreamingNode> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_15P2StreamingNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamInfo> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_8JpegNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_8JpegNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_8JpegNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_8JpegNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVN7android6VectorIlEE */
/* Demangled: vtable for android::Vector<long> */
extern void* _ZTVN7android6VectorIlEE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN5NSCam2v38pipeline5model17ScenarioControlV3C1Ei */
/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::ScenarioControlV3(int) */
int _ZN5NSCam2v38pipeline5model17ScenarioControlV3C1Ei(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_9RAW16NodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_ */
/* Demangled: std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node> > std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node> >::make_shared<android::sp<NSCam::v3::RAW16Node>&>(android::sp<NSCam::v3::RAW16Node>&) */
int _ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_9RAW16NodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_7PDENodeEEENS_9allocatorIS7_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_7PDENodeEEENS_9allocatorIS7_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model17ScenarioControlV313enterScenarioEi */
/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::enterScenario(int) */
int _ZN5NSCam2v38pipeline5model17ScenarioControlV313enterScenarioEi(void);

/* Symbol: _ZNK7android6VectorIjE10do_destroyEPvm */
/* Demangled: android::Vector<unsigned int>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIjE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17ScenarioControlV320checkIfNeedExitBoostEli */
/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::checkIfNeedExitBoost(long, int) */
int _ZN5NSCam2v38pipeline5model17ScenarioControlV320checkIfNeedExitBoostEli(void);

/* Symbol: _ZNK7android6VectorIjE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<unsigned int>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIjE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6FdNodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_ */
/* Demangled: std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode> > std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode> >::make_shared<android::sp<NSCam::v3::FdNode>&>(android::sp<NSCam::v3::FdNode>&) */
int _ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6FdNodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6FdNodeEEENS_9allocatorIS7_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6FdNodeEEENS_9allocatorIS7_EEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEED2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model27ParsedAppImageStreamBuffersENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::ParsedAppImageStreamBuffers, std::__1::allocator<NSCam::v3::pipeline::model::ParsedAppImageStreamBuffers> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model27ParsedAppImageStreamBuffersENS_9allocatorIS5_EEEE;

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_8JpegNodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_ */
/* Demangled: std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode> > std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode> >::make_shared<android::sp<NSCam::v3::JpegNode>&>(android::sp<NSCam::v3::JpegNode>&) */
int _ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_8JpegNodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIliEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIlJNS_4pairIKliEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, int>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, int>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, int>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, int> > >::__emplace_unique_key_args<long, std::__1::pair<long const, int> >(long const&, std::__1::pair<long const, int>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIliEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIlJNS_4pairIKliEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model18ResultUpdateHelperERN7android2wpINS2_22IPipelineModelCallbackEEEjNS3_2spINS0_17IMetaStreamBufferEEEbb */
/* Demangled: NSCam::v3::pipeline::model::ResultUpdateHelper(android::wp<NSCam::v3::pipeline::model::IPipelineModelCallback>&, unsigned int, android::sp<NSCam::v3::IMetaStreamBuffer>, bool, bool) */
int _ZN5NSCam2v38pipeline5model18ResultUpdateHelperERN7android2wpINS2_22IPipelineModelCallbackEEEjNS3_2spINS0_17IMetaStreamBufferEEEbb(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI20MMDVFS_QOS_PARAMETERNS_9allocatorIS1_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<MMDVFS_QOS_PARAMETER, std::__1::allocator<MMDVFS_QOS_PARAMETER> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceI20MMDVFS_QOS_PARAMETERNS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamInfo> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamInfo> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_13P2CaptureNodeEEENS_9allocatorIS7_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_13P2CaptureNodeEEENS_9allocatorIS7_EEEE;

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: end */
/* Demangled: end */
extern void* end;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6FdNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6FdNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZNK7android6VectorIlE10do_destroyEPvm */
/* Demangled: android::Vector<long>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIlE10do_destroyEPvm(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_13P2CaptureNodeEEE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode> */
extern void* _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_13P2CaptureNodeEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17ScenarioControlV3C2Ei */
/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::ScenarioControlV3(int) */
int _ZN5NSCam2v38pipeline5model17ScenarioControlV3C2Ei(void);

/* Symbol: _ZTTN5NSCam2v38pipeline5model17ScenarioControlV3E */
/* Demangled: VTT for NSCam::v3::pipeline::model::ScenarioControlV3 */
extern void* _ZTTN5NSCam2v38pipeline5model17ScenarioControlV3E;

/* Symbol: _ZTVN5NSCam2v38pipeline5model17ScenarioControlV3E */
/* Demangled: vtable for NSCam::v3::pipeline::model::ScenarioControlV3 */
extern void* _ZTVN5NSCam2v38pipeline5model17ScenarioControlV3E;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > > > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEED2Ev(void);

/* Symbol: _ZNK7android6VectorIlE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<long>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_13P2CaptureNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_13P2CaptureNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_9RAW16NodeEEE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node> */
extern void* _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_9RAW16NodeEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model17makePipelineFrameERNSt3__16vectorIN7android2spINS0_14IPipelineFrameEEENS3_9allocatorIS8_EEEERKNS4_INS3_10shared_ptrINS0_17NSPipelineContext13IFrameBuilderEEENS9_ISG_EEEENS6_INSE_16IPipelineContextEEE */
/* Demangled: NSCam::v3::pipeline::model::makePipelineFrame(std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >&, std::__1::vector<std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> > > const&, android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
int _ZN5NSCam2v38pipeline5model17makePipelineFrameERNSt3__16vectorIN7android2spINS0_14IPipelineFrameEEENS3_9allocatorIS8_EEEERKNS4_INS3_10shared_ptrINS0_17NSPipelineContext13IFrameBuilderEEENS9_ISG_EEEENS6_INSE_16IPipelineContextEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext8IOMapSetE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::IOMapSet */
extern void* _ZTVN5NSCam2v317NSPipelineContext8IOMapSetE;

/* Symbol: _ZN5NSCam2v38pipeline5model18IScenarioControlV36createEi */
/* Demangled: NSCam::v3::pipeline::model::IScenarioControlV3::create(int) */
int _ZN5NSCam2v38pipeline5model18IScenarioControlV36createEi(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrI20MMDVFS_QOS_PARAMETEREENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::shared_ptr<MMDVFS_QOS_PARAMETER>, std::__1::allocator<std::__1::shared_ptr<MMDVFS_QOS_PARAMETER> > >::__push_back_slow_path<std::__1::shared_ptr<MMDVFS_QOS_PARAMETER> const&>(std::__1::shared_ptr<MMDVFS_QOS_PARAMETER> const&) */
int _ZNSt3__16vectorINS_10shared_ptrI20MMDVFS_QOS_PARAMETEREENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEEE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6P1NodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P1Node>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P1Node> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6P1NodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EElEERPNS_15__tree_end_nodeISG_EESH_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EElEERPNS_15__tree_end_nodeISG_EESH_RKT_(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZTv0_n40_N5NSCam2v38pipeline5model17ScenarioControlV315onLastStrongRefEPKv */
/* Demangled: virtual thunk to NSCam::v3::pipeline::model::ScenarioControlV3::onLastStrongRef(void const*) */
int _ZTv0_n40_N5NSCam2v38pipeline5model17ScenarioControlV315onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE16__construct_nodeIJRmRSB_EEENS_10unique_ptrINS_11__hash_nodeISC_PvEENS_22__hash_node_destructorINS9_IST_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::__construct_node<unsigned long&, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >&>(unsigned long&, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE16__construct_nodeIJRmRSB_EEENS_10unique_ptrINS_11__hash_nodeISC_PvEENS_22__hash_node_destructorINS9_IST_EEEEEEDpOT_(void);

/* Symbol: _ZNK7android6VectorIlE12do_constructEPvm */
/* Demangled: android::Vector<long>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIlE12do_constructEPvm(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_7PDENodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_ */
/* Demangled: std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode> > std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode> >::make_shared<android::sp<NSCam::v3::PDENode>&>(android::sp<NSCam::v3::PDENode>&) */
int _ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_7PDENodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCamHW::HwInfoHelper, std::__1::allocator<NSCamHW::HwInfoHelper> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm(void);

/* Symbol: gLock */
/* Demangled: gLock */
extern void* gLock;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE6rehashEm(void);

/* Symbol: _ZN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEaSERKS5_ */
/* Demangled: android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>::operator=(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext> const&) */
int _ZN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEaSERKS5_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_7PDENodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_7PDENodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_6P1NodeEEE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P1Node> */
extern void* _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_6P1NodeEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model17ScenarioControlV3E0_NS2_18IScenarioControlV3E */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::IScenarioControlV3-in-NSCam::v3::pipeline::model::ScenarioControlV3 */
extern void* _ZTCN5NSCam2v38pipeline5model17ScenarioControlV3E0_NS2_18IScenarioControlV3E;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm(void);

/* Symbol: _Z14isDualZoomModei */
/* Demangled: isDualZoomMode(int) */
int _Z14isDualZoomModei(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17ScenarioControlV316getCurrentStatusERiS4_RlS4_ */
/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::getCurrentStatus(int&, int&, long&, int&) */
int _ZN5NSCam2v38pipeline5model17ScenarioControlV316getCurrentStatusERiS4_RlS4_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model15parseAppRequestEPNS2_16ParsedAppRequestEPKNS2_17UserRequestParamsERKNSt3__110shared_ptrINS1_6policy25PipelineUserConfigurationEEE */
/* Demangled: NSCam::v3::pipeline::model::parseAppRequest(NSCam::v3::pipeline::model::ParsedAppRequest*, NSCam::v3::pipeline::model::UserRequestParams const*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::PipelineUserConfiguration> const&) */
int _ZN5NSCam2v38pipeline5model15parseAppRequestEPNS2_16ParsedAppRequestEPKNS2_17UserRequestParamsERKNSt3__110shared_ptrINS1_6policy25PipelineUserConfigurationEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6P1NodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P1Node>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P1Node> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6P1NodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCamHW::HwInfoHelper, std::__1::allocator<NSCamHW::HwInfoHelper> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEEE;

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNK7android6VectorIlE7do_copyEPvPKvm */
/* Demangled: android::Vector<long>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCamHW::HwInfoHelper, std::__1::allocator<NSCamHW::HwInfoHelper> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIliEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, int>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, int>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, int>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, int> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIliEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE6rehashEm(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam13IHwInfoHelper25QueryRawTypeSupportParams17CameraInputParamsENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::IHwInfoHelper::QueryRawTypeSupportParams::CameraInputParams, std::__1::allocator<NSCam::IHwInfoHelper::QueryRawTypeSupportParams::CameraInputParams> >::__push_back_slow_path<NSCam::IHwInfoHelper::QueryRawTypeSupportParams::CameraInputParams>(NSCam::IHwInfoHelper::QueryRawTypeSupportParams::CameraInputParams&&) */
int _ZNSt3__16vectorIN5NSCam13IHwInfoHelper25QueryRawTypeSupportParams17CameraInputParamsENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_7PDENodeEEE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode> */
extern void* _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_7PDENodeEEE;

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::v3::IImageStreamInfo> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17ScenarioControlV312boostCPUFreqEil */
/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::boostCPUFreq(int, long) */
int _ZN5NSCam2v38pipeline5model17ScenarioControlV312boostCPUFreqEil(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_PIPELINEMODEL_UTILS_H */
