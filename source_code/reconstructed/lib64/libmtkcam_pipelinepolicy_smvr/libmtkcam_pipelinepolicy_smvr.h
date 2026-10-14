/*
 * Reverse-Engineered ABI Specification for: libmtkcam_pipelinepolicy-smvr.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_pipelinepolicy-smvr.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_PIPELINEPOLICY_SMVR_H
#define BEGONIA_RE_LIBMTKCAM_PIPELINEPOLICY_SMVR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatch15evaluateRequestERKNS3_21EvaluateRequestParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch::evaluateRequest(NSCam::v3::pipeline::policy::requestmetadata::EvaluateRequestParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatch15evaluateRequestERKNS3_21EvaluateRequestParamsE(void);

/* Symbol: _ZN38RequestSettingPolicyMediator_SMVRBatch15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE */
/* Demangled: RequestSettingPolicyMediator_SMVRBatch::evaluateRequest(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams&, NSCam::v3::pipeline::policy::pipelinesetting::RequestInputParams const&) */
int _ZN38RequestSettingPolicyMediator_SMVRBatch15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEEE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata36makePolicy_RequestMetadata_SMVRBatchERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::makePolicy_RequestMetadata_SMVRBatch(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata36makePolicy_RequestMetadata_SMVRBatchERKNS3_14CreationParamsE(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIlE12do_constructEPvm */
/* Demangled: android::Vector<long>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIlE12do_constructEPvm(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::MSize, std::__1::allocator<NSCam::MSize> >::__push_back_slow_path<NSCam::MSize>(NSCam::MSize&&) */
int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceI38RequestSettingPolicyMediator_SMVRBatchNS_9allocatorIS1_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_SMVRBatch, std::__1::allocator<RequestSettingPolicyMediator_SMVRBatch> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceI38RequestSettingPolicyMediator_SMVRBatchNS_9allocatorIS1_EEEE;

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy13SensorSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::v3::pipeline::policy::SensorSetting, std::__1::allocator<NSCam::v3::pipeline::policy::SensorSetting> >::__push_back_slow_path<NSCam::v3::pipeline::policy::SensorSetting const&>(NSCam::v3::pipeline::policy::SensorSetting const&) */
int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy13SensorSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchC1ERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch::RequestMetadataPolicy_SMVRBatch(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchC1ERKNS3_14CreationParamsE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchC2ERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch::RequestMetadataPolicy_SMVRBatch(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchC2ERKNS3_14CreationParamsE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v33SetIlEE */
/* Demangled: vtable for NSCam::v3::Set<long> */
extern void* _ZTVN5NSCam2v33SetIlEE;

/* Symbol: _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::NSPipelineContext::NodeEdge> */
extern void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEEE;

/* Symbol: _ZTVN7android6VectorIlEE */
/* Demangled: vtable for android::Vector<long> */
extern void* _ZTVN7android6VectorIlEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy43makePolicy_Configuration_SensorSetting_SMVREv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_SensorSetting_SMVR() */
int _ZN5NSCam2v38pipeline6policy43makePolicy_Configuration_SensorSetting_SMVREv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy43makePolicy_Configuration_StreamInfo_P1_SMVREv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_StreamInfo_P1_SMVR() */
int _ZN5NSCam2v38pipeline6policy43makePolicy_Configuration_StreamInfo_P1_SMVREv(void);

/* Symbol: _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN38RequestSettingPolicyMediator_SMVRBatchC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE */
/* Demangled: RequestSettingPolicyMediator_SMVRBatch::RequestSettingPolicyMediator_SMVRBatch(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
int _ZN38RequestSettingPolicyMediator_SMVRBatchC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIlE10do_destroyEPvm */
/* Demangled: android::Vector<long>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIlE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI38RequestSettingPolicyMediator_SMVRBatchNS_9allocatorIS1_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_SMVRBatch, std::__1::allocator<RequestSettingPolicyMediator_SMVRBatch> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceI38RequestSettingPolicyMediator_SMVRBatchNS_9allocatorIS1_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTVN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchE */
/* Demangled: vtable for NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch */
extern void* _ZTVN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchE;

/* Symbol: _ZN38RequestSettingPolicyMediator_SMVRBatchC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE */
/* Demangled: RequestSettingPolicyMediator_SMVRBatch::RequestSettingPolicyMediator_SMVRBatch(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
int _ZN38RequestSettingPolicyMediator_SMVRBatchC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTV38RequestSettingPolicyMediator_SMVRBatch */
/* Demangled: vtable for RequestSettingPolicyMediator_SMVRBatch */
extern void* _ZTV38RequestSettingPolicyMediator_SMVRBatch;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchENS_9allocatorIS6_EEEE;

/* Symbol: _Z42makeRequestSettingPolicyMediator_SMVRBatchRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE */
/* Demangled: makeRequestSettingPolicyMediator_SMVRBatch(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
int _Z42makeRequestSettingPolicyMediator_SMVRBatchRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIlE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<long>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIlE8do_splatEPvPKvm */
/* Demangled: android::Vector<long>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI38RequestSettingPolicyMediator_SMVRBatchNS_9allocatorIS1_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_SMVRBatch, std::__1::allocator<RequestSettingPolicyMediator_SMVRBatch> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceI38RequestSettingPolicyMediator_SMVRBatchNS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext11NodeEdgeSetE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::NodeEdgeSet */
extern void* _ZTVN5NSCam2v317NSPipelineContext11NodeEdgeSetE;

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_ */
/* Demangled: void std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::__push_back_slow_path<unsigned long>(unsigned long&&) */
int _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm(void);

/* Symbol: end */
/* Demangled: end */
extern void* end;

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy19ParsedStreamInfo_P1ENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::v3::pipeline::policy::ParsedStreamInfo_P1, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedStreamInfo_P1> >::__push_back_slow_path<NSCam::v3::pipeline::policy::ParsedStreamInfo_P1>(NSCam::v3::pipeline::policy::ParsedStreamInfo_P1&&) */
int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy19ParsedStreamInfo_P1ENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy48makePolicy_Configuration_SensorSetting_SMVRBatchEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_SensorSetting_SMVRBatch() */
int _ZN5NSCam2v38pipeline6policy48makePolicy_Configuration_SensorSetting_SMVRBatchEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy48makePolicy_Configuration_StreamInfo_P1_SMVRBatchEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_StreamInfo_P1_SMVRBatch() */
int _ZN5NSCam2v38pipeline6policy48makePolicy_Configuration_StreamInfo_P1_SMVRBatchEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIlE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<long>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::IMetadata> >(std::__1::shared_ptr<NSCam::IMetadata>&&) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::NSPipelineContext::IOMap> */
extern void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEEE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_SMVRBatch> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_SMVRBatchENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIlE7do_copyEPvPKvm */
/* Demangled: android::Vector<long>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE7do_copyEPvPKvm(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_PIPELINEPOLICY_SMVR_H */
