/*
 * Reverse-Engineered Source for: libmtkcam_pipelinemodel_utils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_pipelinemodel_utils"

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
#include "libmtkcam_pipelinemodel_utils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamInfo> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::exitPerfService() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17ScenarioControlV315exitPerfServiceEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17ScenarioControlV315exitPerfServiceEv() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >::__push_back_slow_path<android::sp<NSCam::v3::IMetaStreamBuffer> const&>(android::sp<NSCam::v3::IMetaStreamBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIjE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_9RAW16NodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_9RAW16NodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::makeFrameBuilder(NSCam::v3::pipeline::model::BuildPipelineFrameInputParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model16makeFrameBuilderERKNS2_29BuildPipelineFrameInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model16makeFrameBuilderERKNS2_29BuildPipelineFrameInputParamsE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> > > >::__emplace_unique_key_args<int, int const&, android::sp<NSCam::v3::IImageStreamBuffer> const&>(int const&, int const&, android::sp<NSCam::v3::IImageStreamBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKiRKS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKiRKS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<long, long const&, NSCam::v3::IImageStreamInfo* const&>(long const&, long const&, NSCam::v3::IImageStreamInfo* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKPS6_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKPS6_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSR_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISC_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSR_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISC_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2StreamingNode> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_15P2StreamingNodeEEE = NULL;

/* Exported Object: vtable for NSCam::v3::Set<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v33SetIlEE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6FdNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6FdNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<MMDVFS_QOS_PARAMETER, std::__1::allocator<MMDVFS_QOS_PARAMETER> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI20MMDVFS_QOS_PARAMETERNS_9allocatorIS1_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI20MMDVFS_QOS_PARAMETERNS_9allocatorIS1_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<int, int const&, NSCam::v3::IImageStreamInfo* const&>(int const&, int const&, NSCam::v3::IImageStreamInfo* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKiRKPS6_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKiRKPS6_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > > > >::__construct_node<unsigned long&, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > >&>(unsigned long&, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE16__construct_nodeIJRmRSB_EEENS_10unique_ptrINS_11__hash_nodeISC_PvEENS_22__hash_node_destructorINS9_IST_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE16__construct_nodeIJRmRSB_EEENS_10unique_ptrINS_11__hash_nodeISC_PvEENS_22__hash_node_destructorINS9_IST_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamInfo> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::boostScenario(int, int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17ScenarioControlV313boostScenarioEiil(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17ScenarioControlV313boostScenarioEiil() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::makePipelineFrame(android::sp<NSCam::v3::IPipelineFrame>&, std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> const&, android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17makePipelineFrameERN7android2spINS0_14IPipelineFrameEEERKNSt3__110shared_ptrINS0_17NSPipelineContext13IFrameBuilderEEENS4_INSA_16IPipelineContextEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17makePipelineFrameERN7android2spINS0_14IPipelineFrameEEERKNSt3__110shared_ptrINS0_17NSPipelineContext13IFrameBuilderEEENS4_INSA_16IPipelineContextEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::generateControlHalMetaBuffer(std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >*, NSCam::IMetadata const*, NSCam::v3::IMetaStreamInfo const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28generateControlHalMetaBufferEPNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEEPKNS_9IMetadataEPKNS0_15IMetaStreamInfoE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28generateControlHalMetaBufferEPNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEEPKNS_9IMetadataEPKNS0_15IMetaStreamInfoE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P1Node>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P1Node> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6P1NodeEEENS_9allocatorIS7_EEEE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::checkIfNeedExitBoostCPU(long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17ScenarioControlV323checkIfNeedExitBoostCPUEli(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17ScenarioControlV323checkIfNeedExitBoostCPUEli() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIjEE = NULL;

/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEEEEvT_SJ_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE14__assign_multiINS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEEEEvT_SJ_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::MSize, std::__1::allocator<NSCam::MSize> >::__push_back_slow_path<NSCam::MSize>(NSCam::MSize&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_13P2CaptureNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_13P2CaptureNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: isInStereoMode(int) */
extern "C" __attribute__((visibility("default"))) int _Z14isInStereoModei(void) {
    ALOGD("_Z14isInStereoModei() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >::__push_back_slow_path<android::sp<NSCam::v3::IImageStreamInfo> >(android::sp<NSCam::v3::IImageStreamInfo>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_7PDENodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_7PDENodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<MMDVFS_QOS_PARAMETER, std::__1::allocator<MMDVFS_QOS_PARAMETER> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceI20MMDVFS_QOS_PARAMETERNS_9allocatorIS1_EEEE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::generateControlAppMetaBuffer(std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >*, android::sp<NSCam::v3::IMetaStreamBuffer>, NSCam::IMetadata const*, NSCam::IMetadata const*, NSCam::v3::IMetaStreamInfo const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model28generateControlAppMetaBufferEPNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEES8_PKNS_9IMetadataESF_PKNS0_15IMetaStreamInfoE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model28generateControlAppMetaBufferEPNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEES8_PKNS_9IMetadataESF_PKNS0_15IMetaStreamInfoE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::reconfigureP1ForPipelineContext(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>, NSCam::v3::pipeline::model::BuildPipelineContextInputParams const&, NSCam::v3::pipeline::model::BuildPipelineContextOutputParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model31reconfigureP1ForPipelineContextEN7android2spINS0_17NSPipelineContext16IPipelineContextEEERKNS2_31BuildPipelineContextInputParamsEPNS2_32BuildPipelineContextOutputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model31reconfigureP1ForPipelineContextEN7android2spINS0_17NSPipelineContext16IPipelineContextEEERKNS2_31BuildPipelineContextInputParamsEPNS2_32BuildPipelineContextOutputParamsE() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: isMultiOpen() */
extern "C" __attribute__((visibility("default"))) int _Z11isMultiOpenv(void) {
    ALOGD("_Z11isMultiOpenv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::enterPerfService(NSCam::v3::pipeline::model::IScenarioControlV3::ControlParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17ScenarioControlV316enterPerfServiceERKNS2_18IScenarioControlV312ControlParamE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17ScenarioControlV316enterPerfServiceERKNS2_18IScenarioControlV312ControlParamE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::ParsedAppImageStreamBuffers, std::__1::allocator<NSCam::v3::pipeline::model::ParsedAppImageStreamBuffers> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model27ParsedAppImageStreamBuffersENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model27ParsedAppImageStreamBuffersENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedMetaControl, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedMetaControl> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedMetaControlENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedMetaControlENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIjE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2StreamingNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2StreamingNode> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_15P2StreamingNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_15P2StreamingNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_9RAW16NodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_9RAW16NodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_6FdNodeEEE = NULL;

/* Demangled: mapToBWCProfileV3(int) */
extern "C" __attribute__((visibility("default"))) int _Z17mapToBWCProfileV3i(void) {
    ALOGD("_Z17mapToBWCProfileV3i() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17ScenarioControlV315onLastStrongRefEPKv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17ScenarioControlV315onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::changeBWCProfile(NSCam::v3::pipeline::model::IScenarioControlV3::ControlParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17ScenarioControlV316changeBWCProfileERKNS2_18IScenarioControlV312ControlParamE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17ScenarioControlV316changeBWCProfileERKNS2_18IScenarioControlV312ControlParamE() called");
    return 0;
}

/* Exported Object: gScenarioControlMap */
extern "C" __attribute__((visibility("default"))) void* gScenarioControlMap = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_9RAW16NodeEEENS_9allocatorIS7_EEEE = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::__emplace_unique_key_args<long, long const&, android::sp<NSCam::v3::IImageStreamBuffer> const&>(long const&, long const&, android::sp<NSCam::v3::IImageStreamBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > >::__push_back_slow_path<android::sp<NSCam::v3::IImageStreamBuffer> const&>(android::sp<NSCam::v3::IImageStreamBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::enterScenario(NSCam::v3::pipeline::model::IScenarioControlV3::ControlParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17ScenarioControlV313enterScenarioERKNS2_18IScenarioControlV312ControlParamE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17ScenarioControlV313enterScenarioERKNS2_18IScenarioControlV312ControlParamE() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode> > std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode> >::make_shared<android::sp<NSCam::v3::P2CaptureNode>&>(android::sp<NSCam::v3::P2CaptureNode>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_13P2CaptureNodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_13P2CaptureNodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamInfo> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamInfo> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::buildPipelineFrame(android::sp<NSCam::v3::IPipelineFrame>&, NSCam::v3::pipeline::model::BuildPipelineFrameInputParams const&, android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model18buildPipelineFrameERN7android2spINS0_14IPipelineFrameEEERKNS2_29BuildPipelineFrameInputParamsENS4_INS0_17NSPipelineContext16IPipelineContextEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model18buildPipelineFrameERN7android2spINS0_14IPipelineFrameEEERKNS2_29BuildPipelineFrameInputParamsENS4_INS0_17NSPipelineContext16IPipelineContextEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >::__push_back_slow_path<android::sp<NSCam::v3::IMetaStreamBuffer> >(android::sp<NSCam::v3::IMetaStreamBuffer>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::buildPipelineContext(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>&, NSCam::v3::pipeline::model::BuildPipelineContextInputParams const&, NSCam::v3::pipeline::model::BuildPipelineContextOutputParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model20buildPipelineContextERN7android2spINS0_17NSPipelineContext16IPipelineContextEEERKNS2_31BuildPipelineContextInputParamsEPNS2_32BuildPipelineContextOutputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model20buildPipelineContextERN7android2spINS0_17NSPipelineContext16IPipelineContextEEERKNS2_31BuildPipelineContextInputParamsEPNS2_32BuildPipelineContextOutputParamsE() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIjE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIjE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::exitScenario() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17ScenarioControlV312exitScenarioEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17ScenarioControlV312exitScenarioEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::setQOSParams(std::__1::vector<NSCam::v3::pipeline::model::IScenarioControlV3::SensorParam, std::__1::allocator<NSCam::v3::pipeline::model::IScenarioControlV3::SensorParam> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17ScenarioControlV312setQOSParamsERKNSt3__16vectorINS2_18IScenarioControlV311SensorParamENS4_9allocatorIS7_EEEEb(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17ScenarioControlV312setQOSParamsERKNSt3__16vectorINS2_18IScenarioControlV311SensorParamENS4_9allocatorIS7_EEEEb() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, int>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, int>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, int>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, int> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIliEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIliEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2StreamingNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2StreamingNode> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_15P2StreamingNodeEEENS_9allocatorIS7_EEEE = NULL;

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_8JpegNodeEEE = NULL;

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_8JpegNodeEEENS_9allocatorIS7_EEEE = NULL;

/* Exported Object: vtable for android::Vector<NSCam::v3::NSPipelineContext::IOMap> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::ParsedAppImageStreamBuffers, std::__1::allocator<NSCam::v3::pipeline::model::ParsedAppImageStreamBuffers> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model27ParsedAppImageStreamBuffersENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model27ParsedAppImageStreamBuffersENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedMetaControl, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedMetaControl> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedMetaControlENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedMetaControlENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, android::sp<NSCam::v3::IImageStreamBuffer> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedMetaControl, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedMetaControl> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy17ParsedMetaControlENS_9allocatorIS5_EEEE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2StreamingNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2StreamingNode> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_15P2StreamingNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_15P2StreamingNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamInfo> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_8JpegNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_8JpegNodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_8JpegNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_8JpegNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIlEE = NULL;

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::ScenarioControlV3(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17ScenarioControlV3C1Ei(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17ScenarioControlV3C1Ei() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node> > std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node> >::make_shared<android::sp<NSCam::v3::RAW16Node>&>(android::sp<NSCam::v3::RAW16Node>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_9RAW16NodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_9RAW16NodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_7PDENodeEEENS_9allocatorIS7_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::enterScenario(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17ScenarioControlV313enterScenarioEi(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17ScenarioControlV313enterScenarioEi() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIjE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::checkIfNeedExitBoost(long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17ScenarioControlV320checkIfNeedExitBoostEli(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17ScenarioControlV320checkIfNeedExitBoostEli() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIjE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode> > std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode> >::make_shared<android::sp<NSCam::v3::FdNode>&>(android::sp<NSCam::v3::FdNode>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6FdNodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6FdNodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6FdNodeEEENS_9allocatorIS7_EEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::ParsedAppImageStreamBuffers, std::__1::allocator<NSCam::v3::pipeline::model::ParsedAppImageStreamBuffers> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model27ParsedAppImageStreamBuffersENS_9allocatorIS5_EEEE = NULL;

/* Demangled: std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode> > std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::JpegNode> >::make_shared<android::sp<NSCam::v3::JpegNode>&>(android::sp<NSCam::v3::JpegNode>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_8JpegNodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_8JpegNodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, int>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, int>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, int>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, int> > >::__emplace_unique_key_args<long, std::__1::pair<long const, int> >(long const&, std::__1::pair<long const, int>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIliEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIlJNS_4pairIKliEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIliEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIlJNS_4pairIKliEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ResultUpdateHelper(android::wp<NSCam::v3::pipeline::model::IPipelineModelCallback>&, unsigned int, android::sp<NSCam::v3::IMetaStreamBuffer>, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model18ResultUpdateHelperERN7android2wpINS2_22IPipelineModelCallbackEEEjNS3_2spINS0_17IMetaStreamBufferEEEbb(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model18ResultUpdateHelperERN7android2wpINS2_22IPipelineModelCallbackEEEjNS3_2spINS0_17IMetaStreamBufferEEEbb() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<MMDVFS_QOS_PARAMETER, std::__1::allocator<MMDVFS_QOS_PARAMETER> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI20MMDVFS_QOS_PARAMETERNS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI20MMDVFS_QOS_PARAMETERNS_9allocatorIS1_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamInfo> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamInfo> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_13P2CaptureNodeEEENS_9allocatorIS7_EEEE = NULL;

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::FdNode> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6FdNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6FdNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIlE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_13P2CaptureNodeEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::ScenarioControlV3(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17ScenarioControlV3C2Ei(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17ScenarioControlV3C2Ei() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::pipeline::model::ScenarioControlV3 */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38pipeline5model17ScenarioControlV3E = NULL;

/* Exported Object: vtable for NSCam::v3::pipeline::model::ScenarioControlV3 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline5model17ScenarioControlV3E = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > > > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEED2Ev() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P2CaptureNode> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_13P2CaptureNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_13P2CaptureNodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::RAW16Node> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_9RAW16NodeEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::makePipelineFrame(std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >&, std::__1::vector<std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> > > const&, android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17makePipelineFrameERNSt3__16vectorIN7android2spINS0_14IPipelineFrameEEENS3_9allocatorIS8_EEEERKNS4_INS3_10shared_ptrINS0_17NSPipelineContext13IFrameBuilderEEENS9_ISG_EEEENS6_INSE_16IPipelineContextEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17makePipelineFrameERNSt3__16vectorIN7android2spINS0_14IPipelineFrameEEENS3_9allocatorIS8_EEEERKNS4_INS3_10shared_ptrINS0_17NSPipelineContext13IFrameBuilderEEENS9_ISG_EEEENS6_INSE_16IPipelineContextEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::IOMapSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext8IOMapSetE = NULL;

/* Demangled: NSCam::v3::pipeline::model::IScenarioControlV3::create(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model18IScenarioControlV36createEi(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model18IScenarioControlV36createEi() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<MMDVFS_QOS_PARAMETER>, std::__1::allocator<std::__1::shared_ptr<MMDVFS_QOS_PARAMETER> > >::__push_back_slow_path<std::__1::shared_ptr<MMDVFS_QOS_PARAMETER> const&>(std::__1::shared_ptr<MMDVFS_QOS_PARAMETER> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrI20MMDVFS_QOS_PARAMETEREENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrI20MMDVFS_QOS_PARAMETEREENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy24ParsedAppImageStreamInfoENS_9allocatorIS5_EEEE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P1Node>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P1Node> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6P1NodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6P1NodeEEENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EElEERPNS_15__tree_end_nodeISG_EESH_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EElEERPNS_15__tree_end_nodeISG_EESH_RKT_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::ScenarioControlV3::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam2v38pipeline5model17ScenarioControlV315onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N5NSCam2v38pipeline5model17ScenarioControlV315onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::__construct_node<unsigned long&, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >&>(unsigned long&, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE16__construct_nodeIJRmRSB_EEENS_10unique_ptrINS_11__hash_nodeISC_PvEENS_22__hash_node_destructorINS9_IST_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE16__construct_nodeIJRmRSB_EEENS_10unique_ptrINS_11__hash_nodeISC_PvEENS_22__hash_node_destructorINS9_IST_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIlE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode> > std::__1::shared_ptr<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode> >::make_shared<android::sp<NSCam::v3::PDENode>&>(android::sp<NSCam::v3::PDENode>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_7PDENodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_7PDENodeEEEE11make_sharedIJRN7android2spIS6_EEEEES8_DpOT_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCamHW::HwInfoHelper, std::__1::allocator<NSCamHW::HwInfoHelper> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: gLock */
extern "C" __attribute__((visibility("default"))) void* gLock = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamInfo>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamInfo> > > > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v316IImageStreamInfoEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE6rehashEm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>::operator=(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEaSERKS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEaSERKS5_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_7PDENodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_7PDENodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P1Node> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_6P1NodeEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::IScenarioControlV3-in-NSCam::v3::pipeline::model::ScenarioControlV3 */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model17ScenarioControlV3E0_NS2_18IScenarioControlV3E = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: isDualZoomMode(int) */
extern "C" __attribute__((visibility("default"))) int _Z14isDualZoomModei(void) {
    ALOGD("_Z14isDualZoomModei() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::getCurrentStatus(int&, int&, long&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17ScenarioControlV316getCurrentStatusERiS4_RlS4_(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17ScenarioControlV316getCurrentStatusERiS4_RlS4_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::v3::pipeline::model::ScenarioControlV3> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam2v38pipeline5model17ScenarioControlV3EEEEEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::parseAppRequest(NSCam::v3::pipeline::model::ParsedAppRequest*, NSCam::v3::pipeline::model::UserRequestParams const*, std::__1::shared_ptr<NSCam::v3::pipeline::policy::PipelineUserConfiguration> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model15parseAppRequestEPNS2_16ParsedAppRequestEPKNS2_17UserRequestParamsERKNSt3__110shared_ptrINS1_6policy25PipelineUserConfigurationEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model15parseAppRequestEPNS2_16ParsedAppRequestEPKNS2_17UserRequestParamsERKNSt3__110shared_ptrINS1_6policy25PipelineUserConfigurationEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > > > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS8_EEEEEENS_22__unordered_map_hasherIjSC_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjSC_NS_8equal_toIjEELb1EEENS9_ISC_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P1Node>, std::__1::allocator<NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::P1Node> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6P1NodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS2_6P1NodeEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCamHW::HwInfoHelper, std::__1::allocator<NSCamHW::HwInfoHelper> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEEE = NULL;

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::Vector<long>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCamHW::HwInfoHelper, std::__1::allocator<NSCamHW::HwInfoHelper> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, int>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, int>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, int>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, int> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIliEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIliEENS_22__unordered_map_hasherIlS2_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS2_NS_8equal_toIlEELb1EEENS_9allocatorIS2_EEE6rehashEm() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::IHwInfoHelper::QueryRawTypeSupportParams::CameraInputParams, std::__1::allocator<NSCam::IHwInfoHelper::QueryRawTypeSupportParams::CameraInputParams> >::__push_back_slow_path<NSCam::IHwInfoHelper::QueryRawTypeSupportParams::CameraInputParams>(NSCam::IHwInfoHelper::QueryRawTypeSupportParams::CameraInputParams&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam13IHwInfoHelper25QueryRawTypeSupportParams17CameraInputParamsENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam13IHwInfoHelper25QueryRawTypeSupportParams17CameraInputParamsENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::implementation::NodeOpsActor<NSCam::v3::PDENode> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext14implementation12NodeOpsActorINS0_7PDENodeEEE = NULL;

/* Exported Object: vtable for android::Vector<android::sp<NSCam::v3::IImageStreamInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam2v316IImageStreamInfoEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ScenarioControlV3::boostCPUFreq(int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17ScenarioControlV312boostCPUFreqEil(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17ScenarioControlV312boostCPUFreqEil() called");
    return 0;
}
