/*
 * Reverse-Engineered Source for: libmtkcam_pipelinemodel_zsl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_pipelinemodel_zsl"

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
#include "libmtkcam_pipelinemodel_zsl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::prepareMeta(std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > const&, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > const&, android::DefaultKeyedVector<long, android::sp<NSCam::v3::IMetaStreamBuffer> > const&, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >&, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor11prepareMetaERKNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS4_9allocatorIS9_EEEESE_RKNS6_18DefaultKeyedVectorIlS9_EERSC_SJ_(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor11prepareMetaERKNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS4_9allocatorIS9_EEEESE_RKNS6_18DefaultKeyedVectorIlS9_EERSC_SJ_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::isFameSyncOkBuffer(android::DefaultKeyedVector<long, android::sp<NSCam::v3::IMetaStreamBuffer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor18isFameSyncOkBufferERKN7android18DefaultKeyedVectorIlNS4_2spINS0_17IMetaStreamBufferEEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor18isFameSyncOkBufferERKN7android18DefaultKeyedVectorIlNS4_2spINS0_17IMetaStreamBufferEEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::dumpInputZslRequestParams(std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslRequestParams> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor25dumpInputZslRequestParamsERKNSt3__110shared_ptrINS2_21InputZslRequestParamsEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor25dumpInputZslRequestParamsERKNSt3__110shared_ptrINS2_21InputZslRequestParamsEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::debug(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor5debugERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor5debugERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::OutputNonZslFlowRequest> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::OutputNonZslFlowRequest> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::OutputNonZslFlowRequest> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::OutputNonZslFlowRequest> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model23OutputNonZslFlowRequestEEEEENS_19__map_value_compareIjS9_NS_4lessIjEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model23OutputNonZslFlowRequestEEEEENS_19__map_value_compareIjS9_NS_4lessIjEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ISelector::SelectorOutputParams, std::__1::allocator<NSCam::v3::pipeline::policy::ISelector::SelectorOutputParams> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy9ISelector20SelectorOutputParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy9ISelector20SelectorOutputParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<unsigned char, long>, std::__1::allocator<std::__1::pair<unsigned char, long> > >::__emplace_back_slow_path<unsigned char, long&>(unsigned char&&, long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIhlEENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJhRlEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIhlEENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJhRlEEEvDpOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<int, long>, std::__1::allocator<std::__1::pair<int, long> > >::__emplace_back_slow_path<int, long&>(int&&, long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIilEENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJiRlEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIilEENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJiRlEEEvDpOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::model::ZslProcessor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline5model12ZslProcessorE = NULL;

/* Demangled: android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v323IHistoryBufferContainer11BufferSet_TEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v323IHistoryBufferContainer11BufferSet_TEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<unsigned long>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorImE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorImE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::isAfOkBuffer(android::DefaultKeyedVector<long, android::sp<NSCam::v3::IMetaStreamBuffer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor12isAfOkBufferERKN7android18DefaultKeyedVectorIlNS4_2spINS0_17IMetaStreamBufferEEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor12isAfOkBufferERKN7android18DefaultKeyedVectorIlNS4_2spINS0_17IMetaStreamBufferEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::ZslProcessor::MyDebuggee, std::__1::allocator<NSCam::v3::pipeline::model::ZslProcessor::MyDebuggee> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model12ZslProcessor10MyDebuggeeENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model12ZslProcessor10MyDebuggeeENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::OutputNonZslFlowRequest, std::__1::allocator<NSCam::v3::pipeline::model::OutputNonZslFlowRequest> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23OutputNonZslFlowRequestENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23OutputNonZslFlowRequestENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams> const&>(std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::hasPendingZslRequest() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38pipeline5model12ZslProcessor20hasPendingZslRequestEv(void) {
    ALOGD("_ZNK5NSCam2v38pipeline5model12ZslProcessor20hasPendingZslRequestEv() called");
    return 0;
}

/* Demangled: android::Vector<unsigned long>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorImE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorImE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, std::__1::pair<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslRequestParams> const, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000l> > > > >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::pair<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslRequestParams> const, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000l> > > > >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::pair<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslRequestParams> const, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000l> > > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::pair<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslRequestParams> const, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000l> > > > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjNS_4pairIKNS_10shared_ptrIN5NSCam2v38pipeline5model21InputZslRequestParamsEEENS_6chrono10time_pointINSB_12system_clockENSB_8durationIxNS_5ratioILl1ELl1000000EEEEEEEEEEENS_19__map_value_compareIjSK_NS_4lessIjEELb1EEENS_9allocatorISK_EEE7destroyEPNS_11__tree_nodeISK_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjNS_4pairIKNS_10shared_ptrIN5NSCam2v38pipeline5model21InputZslRequestParamsEEENS_6chrono10time_pointINSB_12system_clockENSB_8durationIxNS_5ratioILl1ELl1000000EEEEEEEEEEENS_19__map_value_compareIjSK_NS_4lessIjEELb1EEENS_9allocatorISK_EEE7destroyEPNS_11__tree_nodeISK_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T, std::__1::allocator<NSCam::v3::IHistoryBufferContainer::BufferSet_T> >::__push_back_slow_path<NSCam::v3::IHistoryBufferContainer::BufferSet_T const&>(NSCam::v3::IHistoryBufferContainer::BufferSet_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v323IHistoryBufferContainer11BufferSet_TENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v323IHistoryBufferContainer11BufferSet_TENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::ZslProcessor::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam2v38pipeline5model12ZslProcessor15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N5NSCam2v38pipeline5model12ZslProcessor15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::destroy(std::__1::__tree_node<unsigned int, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE(void) {
    ALOGD("_ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::IZslProcessor::createInstance(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model13IZslProcessor14createInstanceEiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model13IZslProcessor14createInstanceEiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::Utils::HalImageStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v35Utils20HalImageStreamBufferEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v35Utils20HalImageStreamBufferEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > >::__emplace_unique_key_args<long, long const&, android::sp<NSCam::v3::IMetaStreamBuffer> const&>(long const&, long const&, android::sp<NSCam::v3::IMetaStreamBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKS7_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::OutputZslConfigParams, std::__1::allocator<NSCam::v3::pipeline::model::OutputZslConfigParams> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model21OutputZslConfigParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model21OutputZslConfigParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v323IHistoryBufferContainer11BufferSet_TEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v323IHistoryBufferContainer11BufferSet_TEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, std::__1::pair<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslRequestParams> const, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000l> > > > >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::pair<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslRequestParams> const, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000l> > > > >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::pair<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslRequestParams> const, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000l> > > > > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, std::__1::pair<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslRequestParams> const, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000l> > > > >, std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::pair<std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslRequestParams> const, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000l> > > > >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjNS_4pairIKNS_10shared_ptrIN5NSCam2v38pipeline5model21InputZslRequestParamsEEENS_6chrono10time_pointINSB_12system_clockENSB_8durationIxNS_5ratioILl1ELl1000000EEEEEEEEEEENS_19__map_value_compareIjSK_NS_4lessIjEELb1EEENS_9allocatorISK_EEE5eraseENS_21__tree_const_iteratorISK_PNS_11__tree_nodeISK_PvEElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjNS_4pairIKNS_10shared_ptrIN5NSCam2v38pipeline5model21InputZslRequestParamsEEENS_6chrono10time_pointINSB_12system_clockENSB_8durationIxNS_5ratioILl1ELl1000000EEEEEEEEEEENS_19__map_value_compareIjSK_NS_4lessIjEELb1EEENS_9allocatorISK_EEE5eraseENS_21__tree_const_iteratorISK_PNS_11__tree_nodeISK_PvEElEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::pipeline::model::ZslProcessor::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam2v38pipeline5model12ZslProcessor10onFirstRefEv(void) {
    ALOGD("_ZTv0_n32_N5NSCam2v38pipeline5model12ZslProcessor10onFirstRefEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::MyDebuggee::debug(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS8_12basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEENSD_ISF_EEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS8_12basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEENSD_ISF_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::configure(std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslConfigParams> const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::OutputZslConfigParams>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor9configureERKNSt3__110shared_ptrINS2_20InputZslConfigParamsEEERNS5_INS2_21OutputZslConfigParamsEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor9configureERKNSt3__110shared_ptrINS2_20InputZslConfigParamsEEERNS5_INS2_21OutputZslConfigParamsEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::OutputZslFlowRequest> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::OutputZslFlowRequest> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::OutputZslFlowRequest> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::OutputZslFlowRequest> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model20OutputZslFlowRequestEEEEENS_19__map_value_compareIjS9_NS_4lessIjEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline5model20OutputZslFlowRequestEEEEENS_19__map_value_compareIjS9_NS_4lessIjEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE = NULL;

/* Exported Object: NSCam::v3::pipeline::model::ZslProcessor::MyDebuggee::mName */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam2v38pipeline5model12ZslProcessor10MyDebuggee5mNameE = NULL;

/* Demangled: android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v323IHistoryBufferContainer11BufferSet_TEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v323IHistoryBufferContainer11BufferSet_TEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ISelector::SelectorOutputParams, std::__1::allocator<NSCam::v3::pipeline::policy::ISelector::SelectorOutputParams> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy9ISelector20SelectorOutputParamsENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::checkQuality(android::DefaultKeyedVector<long, android::sp<NSCam::v3::IMetaStreamBuffer> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor12checkQualityERKN7android18DefaultKeyedVectorIlNS4_2spINS0_17IMetaStreamBufferEEEEEi(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor12checkQualityERKN7android18DefaultKeyedVectorIlNS4_2spINS0_17IMetaStreamBufferEEEEEi() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::onFrameUpdated(unsigned int, long, NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback::Result const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor14onFrameUpdatedEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor14onFrameUpdatedEjlRKNS0_30IPipelineBufferSetFrameControl12IAppCallback6ResultE() called");
    return 0;
}

/* Demangled: android::Vector<unsigned long>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorImE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorImE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::Utils::HalImageStreamBuffer> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v35Utils20HalImageStreamBufferEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v35Utils20HalImageStreamBufferEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::__emplace_unique_key_args<long, std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamBuffer> > const&>(long const&, std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamBuffer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_4pairIKlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_4pairIKlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::Utils::HalImageStreamBuffer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v35Utils20HalImageStreamBufferEEEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v35Utils20HalImageStreamBufferEEEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy19ParsedStreamInfo_P1ENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy19ParsedStreamInfo_P1ENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline6policy19ParsedStreamInfo_P1ENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::OutputZslFlowRequest, std::__1::allocator<NSCam::v3::pipeline::model::OutputZslFlowRequest> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model20OutputZslFlowRequestENS_9allocatorIS5_EEEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ISelector::SelectorInputParams, std::__1::allocator<NSCam::v3::pipeline::policy::ISelector::SelectorInputParams> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy9ISelector19SelectorInputParamsENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::buildFrame_Locked(std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslRequestParams>, NSCam::v3::pipeline::model::ZslProcessor::SelectResult_T&, std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor17buildFrame_LockedENSt3__110shared_ptrINS2_21InputZslRequestParamsEEERNS3_14SelectResult_TERNS4_6vectorIN7android2spINS0_14IPipelineFrameEEENS4_9allocatorISE_EEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor17buildFrame_LockedENSt3__110shared_ptrINS2_21InputZslRequestParamsEEERNS3_14SelectResult_TERNS4_6vectorIN7android2spINS0_14IPipelineFrameEEENS4_9allocatorISE_EEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v323IHistoryBufferContainer11BufferSet_TEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v323IHistoryBufferContainer11BufferSet_TEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamBuffer> > > >::__emplace_unique_key_args<long, long const&, android::sp<NSCam::v3::Utils::HalImageStreamBuffer> const&>(long const&, long const&, android::sp<NSCam::v3::Utils::HalImageStreamBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKNS3_INS5_5Utils20HalImageStreamBufferEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v318IImageStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKlRKNS3_INS5_5Utils20HalImageStreamBufferEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::pipeline::model::ZslProcessor */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38pipeline5model12ZslProcessorE = NULL;

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::isAeOkBuffer(android::DefaultKeyedVector<long, android::sp<NSCam::v3::IMetaStreamBuffer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor12isAeOkBufferERKN7android18DefaultKeyedVectorIlNS4_2spINS0_17IMetaStreamBufferEEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor12isAeOkBufferERKN7android18DefaultKeyedVectorIlNS4_2spINS0_17IMetaStreamBufferEEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::isPDProcessRawBuffer(android::DefaultKeyedVector<long, android::sp<NSCam::v3::IMetaStreamBuffer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor20isPDProcessRawBufferERKN7android18DefaultKeyedVectorIlNS4_2spINS0_17IMetaStreamBufferEEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor20isPDProcessRawBufferERKN7android18DefaultKeyedVectorIlNS4_2spINS0_17IMetaStreamBufferEEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::getStreamBufferProvider() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38pipeline5model12ZslProcessor23getStreamBufferProviderEv(void) {
    ALOGD("_ZNK5NSCam2v38pipeline5model12ZslProcessor23getStreamBufferProviderEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::OutputNonZslFlowRequest, std::__1::allocator<NSCam::v3::pipeline::model::OutputNonZslFlowRequest> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23OutputNonZslFlowRequestENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::selectBufByTimeStamp(android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T> const&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000l> > > const&, long, unsigned long&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor20selectBufByTimeStampERKN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEERKNSt3__16chrono10time_pointINSC_12system_clockENSC_8durationIxNSB_5ratioILl1ELl1000000EEEEEEElRm(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor20selectBufByTimeStampERKN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEERKNSt3__16chrono10time_pointINSC_12system_clockENSC_8durationIxNSB_5ratioILl1ELl1000000EEEEEEElRm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::submitZslRequest(std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslRequestParams> const&, std::__1::shared_ptr<NSCam::v3::pipeline::model::OutputZslRequestParams>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor16submitZslRequestERKNSt3__110shared_ptrINS2_21InputZslRequestParamsEEERNS5_INS2_22OutputZslRequestParamsEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor16submitZslRequestERKNSt3__110shared_ptrINS2_21InputZslRequestParamsEEERNS5_INS2_22OutputZslRequestParamsEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: android::Vector<unsigned long>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorImE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorImE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::OutputZslConfigParams, std::__1::allocator<NSCam::v3::pipeline::model::OutputZslConfigParams> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model21OutputZslConfigParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model21OutputZslConfigParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ISelector::SelectorInputParams, std::__1::allocator<NSCam::v3::pipeline::policy::ISelector::SelectorInputParams> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy9ISelector19SelectorInputParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy9ISelector19SelectorInputParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::IZslProcessor-in-NSCam::v3::pipeline::model::ZslProcessor */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model12ZslProcessorE0_NS2_13IZslProcessorE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, long>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, long>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, long> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, long>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjlEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjlEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >::__push_back_slow_path<android::sp<NSCam::v3::IMetaStreamBuffer> const&>(android::sp<NSCam::v3::IMetaStreamBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::ZslProcessor(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessorC2EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessorC2EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ISelector::SelectorOutputParams, std::__1::allocator<NSCam::v3::pipeline::policy::ISelector::SelectorOutputParams> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy9ISelector20SelectorOutputParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy9ISelector20SelectorOutputParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor15onLastStrongRefEPKv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, std::__1::pair<std::__1::unordered_map<long, android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IMetaStreamBuffer> > > >, std::__1::unordered_map<long, android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamBuffer> > > > > >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::pair<std::__1::unordered_map<long, android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IMetaStreamBuffer> > > >, std::__1::unordered_map<long, android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamBuffer> > > > > >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::pair<std::__1::unordered_map<long, android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IMetaStreamBuffer> > > >, std::__1::unordered_map<long, android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamBuffer> > > > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::pair<std::__1::unordered_map<long, android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IMetaStreamBuffer> > > >, std::__1::unordered_map<long, android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamBuffer> > > > > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjNS_4pairINS_13unordered_mapIlN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_4hashIlEENS_8equal_toIlEENS_9allocatorINS2_IKlS9_EEEEEENS3_IlNS5_INS7_18IImageStreamBufferEEESB_SD_NSE_INS2_ISF_SK_EEEEEEEEEENS_19__map_value_compareIjSP_NS_4lessIjEELb1EEENSE_ISP_EEE7destroyEPNS_11__tree_nodeISP_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjNS_4pairINS_13unordered_mapIlN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_4hashIlEENS_8equal_toIlEENS_9allocatorINS2_IKlS9_EEEEEENS3_IlNS5_INS7_18IImageStreamBufferEEESB_SD_NSE_INS2_ISF_SK_EEEEEEEEEENS_19__map_value_compareIjSP_NS_4lessIjEELb1EEENSE_ISP_EEE7destroyEPNS_11__tree_nodeISP_PvEE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v323IHistoryBufferContainer11BufferSet_TEEE = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor10onFirstRefEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor10onFirstRefEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > >::__emplace_unique_key_args<long, std::__1::pair<long const, android::sp<NSCam::v3::IMetaStreamBuffer> > const&>(long const&, std::__1::pair<long const, android::sp<NSCam::v3::IMetaStreamBuffer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_4pairIKlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v317IMetaStreamBufferEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_4pairIKlS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::model::ZslProcessor::MyDebuggee */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline5model12ZslProcessor10MyDebuggeeE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::OutputZslConfigParams, std::__1::allocator<NSCam::v3::pipeline::model::OutputZslConfigParams> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model21OutputZslConfigParamsENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::ZslProcessor(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessorC1EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessorC1EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::selectBuf_Locked(unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::model::InputZslRequestParams>, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000l> > > const&, NSCam::v3::pipeline::model::ZslProcessor::SelectResult_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor16selectBuf_LockedEjNSt3__110shared_ptrINS2_21InputZslRequestParamsEEERKNS4_6chrono10time_pointINS8_12system_clockENS8_8durationIxNS4_5ratioILl1ELl1000000EEEEEEERNS3_14SelectResult_TE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor16selectBuf_LockedEjNSt3__110shared_ptrINS2_21InputZslRequestParamsEEERKNS4_6chrono10time_pointINS8_12system_clockENS8_8durationIxNS4_5ratioILl1ELl1000000EEEEEEERNS3_14SelectResult_TE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::print(android::Printer&, NSCam::v3::pipeline::model::InputZslRequestParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor5printERN7android7PrinterERKNS2_21InputZslRequestParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor5printERN7android7PrinterERKNS2_21InputZslRequestParamsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::Utils::HalImageStreamBuffer> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v35Utils20HalImageStreamBufferEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v35Utils20HalImageStreamBufferEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v323IHistoryBufferContainer11BufferSet_TEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v323IHistoryBufferContainer11BufferSet_TEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<unsigned long>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorImE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorImE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor4dumpEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor4dumpEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::OutputZslFlowRequest, std::__1::allocator<NSCam::v3::pipeline::model::OutputZslFlowRequest> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model20OutputZslFlowRequestENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model20OutputZslFlowRequestENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::getTimeStamp(android::DefaultKeyedVector<long, android::sp<NSCam::v3::IMetaStreamBuffer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor12getTimeStampERKN7android18DefaultKeyedVectorIlNS4_2spINS0_17IMetaStreamBufferEEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor12getTimeStampERKN7android18DefaultKeyedVectorIlNS4_2spINS0_17IMetaStreamBufferEEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::OutputZslRequestParams, std::__1::allocator<NSCam::v3::pipeline::model::OutputZslRequestParams> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model22OutputZslRequestParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model22OutputZslRequestParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, std::__1::pair<std::__1::unordered_map<long, android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IMetaStreamBuffer> > > >, std::__1::unordered_map<long, android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamBuffer> > > > > >, std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::pair<std::__1::unordered_map<long, android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IMetaStreamBuffer> > > >, std::__1::unordered_map<long, android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamBuffer> > > > > >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, std::__1::pair<std::__1::unordered_map<long, android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IMetaStreamBuffer> > > >, std::__1::unordered_map<long, android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamBuffer> > > > > >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::pair<std::__1::unordered_map<long, android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IMetaStreamBuffer> > > >, std::__1::unordered_map<long, android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamBuffer> > > > > >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::pair<std::__1::unordered_map<long, android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IMetaStreamBuffer> > > >, std::__1::unordered_map<long, android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamBuffer> > > > > > > >::__emplace_unique_key_args<unsigned int, unsigned int const&, std::__1::pair<std::__1::unordered_map<long, android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IMetaStreamBuffer> > > >, std::__1::unordered_map<long, android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamBuffer> > > > > >(unsigned int const&, unsigned int const&, std::__1::pair<std::__1::unordered_map<long, android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IMetaStreamBuffer> > > >, std::__1::unordered_map<long, android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<long const, android::sp<NSCam::v3::IImageStreamBuffer> > > > >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjNS_4pairINS_13unordered_mapIlN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_4hashIlEENS_8equal_toIlEENS_9allocatorINS2_IKlS9_EEEEEENS3_IlNS5_INS7_18IImageStreamBufferEEESB_SD_NSE_INS2_ISF_SK_EEEEEEEEEENS_19__map_value_compareIjSP_NS_4lessIjEELb1EEENSE_ISP_EEE25__emplace_unique_key_argsIjJRKjSO_EEENS2_INS_15__tree_iteratorISP_PNS_11__tree_nodeISP_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjNS_4pairINS_13unordered_mapIlN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_4hashIlEENS_8equal_toIlEENS_9allocatorINS2_IKlS9_EEEEEENS3_IlNS5_INS7_18IImageStreamBufferEEESB_SD_NSE_INS2_ISF_SK_EEEEEEEEEENS_19__map_value_compareIjSP_NS_4lessIjEELb1EEENSE_ISP_EEE25__emplace_unique_key_argsIjJRKjSO_EEENS2_INS_15__tree_iteratorISP_PNS_11__tree_nodeISP_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::OutputZslRequestParams, std::__1::allocator<NSCam::v3::pipeline::model::OutputZslRequestParams> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model22OutputZslRequestParamsENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::appendToP1OutAppMeta(std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > const&, android::sp<NSCam::v3::IMetaStreamBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor20appendToP1OutAppMetaERKNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS4_9allocatorIS9_EEEERS9_(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor20appendToP1OutAppMetaERKNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS4_9allocatorIS9_EEEERS9_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::flush(std::__1::shared_ptr<NSCam::v3::pipeline::model::OutputZslRequestParams>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor5flushERNSt3__110shared_ptrINS2_22OutputZslRequestParamsEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor5flushERNSt3__110shared_ptrINS2_22OutputZslRequestParamsEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::Utils::HalImageStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v35Utils20HalImageStreamBufferEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v35Utils20HalImageStreamBufferEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::OutputNonZslFlowRequest, std::__1::allocator<NSCam::v3::pipeline::model::OutputNonZslFlowRequest> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23OutputNonZslFlowRequestENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model23OutputNonZslFlowRequestENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::print(android::Printer&, NSCam::v3::pipeline::model::InputZslBuildPipelineFrameParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor5printERN7android7PrinterERKNS2_32InputZslBuildPipelineFrameParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor5printERN7android7PrinterERKNS2_32InputZslBuildPipelineFrameParamsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::Utils::HalImageStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v35Utils20HalImageStreamBufferEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v35Utils20HalImageStreamBufferEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: std::__1::__tree<long, std::__1::less<long>, std::__1::allocator<long> >::destroy(std::__1::__tree_node<long, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIlNS_4lessIlEENS_9allocatorIlEEE7destroyEPNS_11__tree_nodeIlPvEE(void) {
    ALOGD("_ZNSt3__16__treeIlNS_4lessIlEENS_9allocatorIlEEE7destroyEPNS_11__tree_nodeIlPvEE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsEEENS_9allocatorIS7_EEE6assignIPS7_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS7_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsEEENS_9allocatorIS7_EEE6assignIPS7_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS7_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline5model32InputZslBuildPipelineFrameParamsEEENS_9allocatorIS7_EEE6assignIPS7_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS7_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::Utils::HalImageStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v35Utils20HalImageStreamBufferEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v35Utils20HalImageStreamBufferEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::ISelector::SelectorInputParams, std::__1::allocator<NSCam::v3::pipeline::policy::ISelector::SelectorInputParams> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy9ISelector19SelectorInputParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy9ISelector19SelectorInputParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<unsigned long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorImEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::dumpPending() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor11dumpPendingEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor11dumpPendingEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::prepareHalImg(android::DefaultKeyedVector<long, android::sp<NSCam::v3::Utils::HalImageStreamBuffer> > const&, std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor13prepareHalImgERKN7android18DefaultKeyedVectorIlNS4_2spINS0_5Utils20HalImageStreamBufferEEEEERNSt3__16vectorINS6_INS0_18IImageStreamBufferEEENSD_9allocatorISG_EEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor13prepareHalImgERKN7android18DefaultKeyedVectorIlNS4_2spINS0_5Utils20HalImageStreamBufferEEEEERNSt3__16vectorINS6_INS0_18IImageStreamBufferEEENSD_9allocatorISG_EEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v323IHistoryBufferContainer11BufferSet_TEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v323IHistoryBufferContainer11BufferSet_TEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::ZslProcessor::MyDebuggee, std::__1::allocator<NSCam::v3::pipeline::model::ZslProcessor::MyDebuggee> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model12ZslProcessor10MyDebuggeeENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model12ZslProcessor10MyDebuggeeENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::OutputZslFlowRequest, std::__1::allocator<NSCam::v3::pipeline::model::OutputZslFlowRequest> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model20OutputZslFlowRequestENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model20OutputZslFlowRequestENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::callBackShutter(unsigned int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor15callBackShutterEjl(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor15callBackShutterEjl() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::registerFrame(unsigned int, bool, std::__1::pair<bool, std::__1::vector<long, std::__1::allocator<long> > > const&, std::__1::pair<bool, std::__1::vector<long, std::__1::allocator<long> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor13registerFrameEjbRKNSt3__14pairIbNS4_6vectorIlNS4_9allocatorIlEEEEEESC_(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor13registerFrameEjbRKNSt3__14pairIbNS4_6vectorIlNS4_9allocatorIlEEEEEESC_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >::__push_back_slow_path<android::sp<NSCam::v3::IPipelineFrame> const&>(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IImageStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IImageStreamBuffer> > >::__push_back_slow_path<android::sp<NSCam::v3::IImageStreamBuffer> const&>(android::sp<NSCam::v3::IImageStreamBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::Utils::HalImageStreamBuffer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v35Utils20HalImageStreamBufferEEEEEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::ZslProcessor::appendToP1OutHalMeta(android::sp<NSCam::v3::IMetaStreamBuffer>&, android::sp<NSCam::v3::IMetaStreamInfo>&, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > const&, android::sp<NSCam::v3::IMetaStreamBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model12ZslProcessor20appendToP1OutHalMetaERN7android2spINS0_17IMetaStreamBufferEEERNS5_INS0_15IMetaStreamInfoEEERKNSt3__16vectorIS7_NSC_9allocatorIS7_EEEES8_(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model12ZslProcessor20appendToP1OutHalMetaERN7android2spINS0_17IMetaStreamBufferEEERNS5_INS0_15IMetaStreamInfoEEERKNSt3__16vectorIS7_NSC_9allocatorIS7_EEEES8_() called");
    return 0;
}

/* Demangled: android::Vector<unsigned long>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorImE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorImE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::OutputZslRequestParams, std::__1::allocator<NSCam::v3::pipeline::model::OutputZslRequestParams> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model22OutputZslRequestParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model22OutputZslRequestParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::model::ZslProcessor::MyDebuggee, std::__1::allocator<NSCam::v3::pipeline::model::ZslProcessor::MyDebuggee> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline5model12ZslProcessor10MyDebuggeeENS_9allocatorIS6_EEEE = NULL;
