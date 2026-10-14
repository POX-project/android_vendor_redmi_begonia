/*
 * Reverse-Engineered Source for: libmtkcam_pipelinepolicy-smvr.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_pipelinepolicy_smvr"

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
#include "libmtkcam_pipelinepolicy_smvr.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch::evaluateRequest(NSCam::v3::pipeline::policy::requestmetadata::EvaluateRequestParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatch15evaluateRequestERKNS3_21EvaluateRequestParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatch15evaluateRequestERKNS3_21EvaluateRequestParamsE() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_SMVRBatch::evaluateRequest(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams&, NSCam::v3::pipeline::policy::pipelinesetting::RequestInputParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN38RequestSettingPolicyMediator_SMVRBatch15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE(void) {
    ALOGD("_ZN38RequestSettingPolicyMediator_SMVRBatch15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::makePolicy_RequestMetadata_SMVRBatch(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata36makePolicy_RequestMetadata_SMVRBatchERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata36makePolicy_RequestMetadata_SMVRBatchERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIlE12do_constructEPvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::MSize, std::__1::allocator<NSCam::MSize> >::__push_back_slow_path<NSCam::MSize>(NSCam::MSize&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_SMVRBatch, std::__1::allocator<RequestSettingPolicyMediator_SMVRBatch> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceI38RequestSettingPolicyMediator_SMVRBatchNS_9allocatorIS1_EEEE = NULL;

/* Demangled: void std::__1::vector<NSCam::v3::pipeline::policy::SensorSetting, std::__1::allocator<NSCam::v3::pipeline::policy::SensorSetting> >::__push_back_slow_path<NSCam::v3::pipeline::policy::SensorSetting const&>(NSCam::v3::pipeline::policy::SensorSetting const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy13SensorSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline6policy13SensorSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch::RequestMetadataPolicy_SMVRBatch(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchC1ERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchC1ERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch::RequestMetadataPolicy_SMVRBatch(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchC2ERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchC2ERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Set<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v33SetIlEE = NULL;

/* Exported Object: vtable for android::Vector<NSCam::v3::NSPipelineContext::NodeEdge> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEEE = NULL;

/* Exported Object: vtable for android::Vector<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIlEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_SensorSetting_SMVR() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy43makePolicy_Configuration_SensorSetting_SMVREv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy43makePolicy_Configuration_SensorSetting_SMVREv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_StreamInfo_P1_SMVR() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy43makePolicy_Configuration_StreamInfo_P1_SMVREv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy43makePolicy_Configuration_StreamInfo_P1_SMVREv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_SMVRBatch::RequestSettingPolicyMediator_SMVRBatch(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN38RequestSettingPolicyMediator_SMVRBatchC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void) {
    ALOGD("_ZN38RequestSettingPolicyMediator_SMVRBatchC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIlE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_SMVRBatch, std::__1::allocator<RequestSettingPolicyMediator_SMVRBatch> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI38RequestSettingPolicyMediator_SMVRBatchNS_9allocatorIS1_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI38RequestSettingPolicyMediator_SMVRBatchNS_9allocatorIS1_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchE = NULL;

/* Demangled: RequestSettingPolicyMediator_SMVRBatch::RequestSettingPolicyMediator_SMVRBatch(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN38RequestSettingPolicyMediator_SMVRBatchC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void) {
    ALOGD("_ZN38RequestSettingPolicyMediator_SMVRBatchC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for RequestSettingPolicyMediator_SMVRBatch */
extern "C" __attribute__((visibility("default"))) void* _ZTV38RequestSettingPolicyMediator_SMVRBatch = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchENS_9allocatorIS6_EEEE = NULL;

/* Demangled: makeRequestSettingPolicyMediator_SMVRBatch(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _Z42makeRequestSettingPolicyMediator_SMVRBatchRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void) {
    ALOGD("_Z42makeRequestSettingPolicyMediator_SMVRBatchRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_SMVRBatch, std::__1::allocator<RequestSettingPolicyMediator_SMVRBatch> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI38RequestSettingPolicyMediator_SMVRBatchNS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI38RequestSettingPolicyMediator_SMVRBatchNS_9allocatorIS1_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::NodeEdgeSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext11NodeEdgeSetE = NULL;

/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: void std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::__push_back_slow_path<unsigned long>(unsigned long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Demangled: void std::__1::vector<NSCam::v3::pipeline::policy::ParsedStreamInfo_P1, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedStreamInfo_P1> >::__push_back_slow_path<NSCam::v3::pipeline::policy::ParsedStreamInfo_P1>(NSCam::v3::pipeline::policy::ParsedStreamInfo_P1&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy19ParsedStreamInfo_P1ENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline6policy19ParsedStreamInfo_P1ENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_SensorSetting_SMVRBatch() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy48makePolicy_Configuration_SensorSetting_SMVRBatchEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy48makePolicy_Configuration_SensorSetting_SMVRBatchEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_StreamInfo_P1_SMVRBatch() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy48makePolicy_Configuration_StreamInfo_P1_SMVRBatchEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy48makePolicy_Configuration_StreamInfo_P1_SMVRBatchEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::IMetadata> >(std::__1::shared_ptr<NSCam::IMetadata>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::NSPipelineContext::IOMap> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEEE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE7do_copyEPvPKvm() called");
    return 0;
}
