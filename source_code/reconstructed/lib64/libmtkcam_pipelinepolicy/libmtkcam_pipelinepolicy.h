/*
 * Reverse-Engineered ABI Specification for: libmtkcam_pipelinepolicy.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_pipelinepolicy.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_PIPELINEPOLICY_H
#define BEGONIA_RE_LIBMTKCAM_PIPELINEPOLICY_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI35ConfigSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<ConfigSettingPolicyMediator_Default, std::__1::allocator<ConfigSettingPolicyMediator_Default> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceI35ConfigSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamD2Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::~RequestSensorControlPolicy_Multicam() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamD2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm(void);

/* Symbol: _ZN42RequestSettingPolicyMediator_Multicam_Zoom24getSensorIndexBySensorIdEjRj */
/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::getSensorIndexBySensorId(unsigned int, unsigned int&) */
int _ZN42RequestSettingPolicyMediator_Multicam_Zoom24getSensorIndexBySensorIdEjRj(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet> > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam5MRectENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::MRect, std::__1::allocator<NSCam::MRect> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam5MRectENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN36RequestSettingPolicyMediator_DefaultC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE */
/* Demangled: RequestSettingPolicyMediator_Default::RequestSettingPolicyMediator_Default(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
int _ZN36RequestSettingPolicyMediator_DefaultC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::NSPipelineContext::NodeEdge> */
extern void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEEE;

/* Symbol: _ZTVN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplE */
/* Demangled: vtable for NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl */
extern void* _ZTVN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplE;

/* Symbol: _ZN42RequestSettingPolicyMediator_Multicam_Zoom15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE */
/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::evaluateRequest(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams&, NSCam::v3::pipeline::policy::pipelinesetting::RequestInputParams const&) */
int _ZN42RequestSettingPolicyMediator_Multicam_Zoom15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorD2Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior::~MetadataBehavior() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorD2Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam22sendPolicyDataCallbackEmmm */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::sendPolicyDataCallback(unsigned long, unsigned long, unsigned long) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam22sendPolicyDataCallbackEmmm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11SensorStateEEENS_22__unordered_map_hasherIjS9_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS9_NS_8equal_toIjEELb1EEENS_9allocatorIS9_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11SensorStateEEENS_22__unordered_map_hasherIjS9_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS9_NS_8equal_toIjEELb1EEENS_9allocatorIS9_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperENS_14default_deleteIS6_EENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper*, std::__1::default_delete<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper>, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperENS_14default_deleteIS6_EENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo, std::__1::allocator<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoENS_9allocatorIS6_EEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext8IOMapSetE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::IOMapSet */
extern void* _ZTVN5NSCam2v317NSPipelineContext8IOMapSetE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior17getSensorCropRectEiRKNS3_16BehaviorUserDataERNS_5MRectE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior::getSensorCropRect(int, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&, NSCam::MRect&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior17getSensorCropRectEiRKNS3_16BehaviorUserDataERNS_5MRectE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorD2Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior::~SensorCropBehavior() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorD2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorENS_9allocatorIS6_EEEE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI36RequestSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_Default, std::__1::allocator<RequestSettingPolicyMediator_Default> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceI36RequestSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _Z46makeRequestSettingPolicyMediator_Multicam_ZoomRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE */
/* Demangled: makeRequestSettingPolicyMediator_Multicam_Zoom(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
int _Z46makeRequestSettingPolicyMediator_Multicam_ZoomRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertD1Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DomainConvert::~DomainConvert() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertD1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN6NS3Av314DualZoomInfo_TEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN6NS3Av314DualZoomInfo_TEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder15queryBaseBufNumEPKc */
/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::queryBaseBufNum(char const*) */
int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder15queryBaseBufNumEPKc(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertC2ERNSt3__16vectorIiNS5_9allocatorIiEEEERNS6_IjNS7_IjEEEE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DomainConvert::DomainConvert(std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertC2ERNSt3__16vectorIiNS5_9allocatorIiEEEERNS6_IjNS7_IjEEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerC2ERKNSt3__16vectorIiNS5_9allocatorIiEEEEjj */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorStateManager(std::__1::vector<int, std::__1::allocator<int> > const&, unsigned int, unsigned int) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerC2ERKNSt3__16vectorIiNS5_9allocatorIiEEEEjj(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy44makePolicy_Configuration_SensorSetting_4CellEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_SensorSetting_4Cell() */
int _ZN5NSCam2v38pipeline6policy44makePolicy_Configuration_SensorSetting_4CellEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void);

/* Symbol: _ZTV32RequestSettingPolicyMediator_PDE */
/* Demangled: vtable for RequestSettingPolicyMediator_PDE */
extern void* _ZTV32RequestSettingPolicyMediator_PDE;

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorD2Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior::~FrameSyncBehavior() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorD2Ev(void);

/* Symbol: _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorE */
/* Demangled: vtable for NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior */
extern void* _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI35ConfigSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<ConfigSettingPolicyMediator_Default, std::__1::allocator<ConfigSettingPolicyMediator_Default> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceI35ConfigSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode> > >::__emplace_unique_key_args<NSCam::v3::pipeline::policy::eMode, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode&&>, std::__1::tuple<> >(NSCam::v3::pipeline::policy::eMode const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy11P1HwSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::v3::pipeline::policy::P1HwSetting, std::__1::allocator<NSCam::v3::pipeline::policy::P1HwSetting> >::__push_back_slow_path<NSCam::v3::pipeline::policy::P1HwSetting const&>(NSCam::v3::pipeline::policy::P1HwSetting const&) */
int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy11P1HwSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject6updateEv */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::update() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject6updateEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper23updatePhysicalSensorFovEiRNSt3__110shared_ptrINS_6MSizeFEEERNS_9IMetadataE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::updatePhysicalSensorFov(int, std::__1::shared_ptr<NSCam::MSizeF>&, NSCam::IMetadata&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper23updatePhysicalSensorFovEiRNSt3__110shared_ptrINS_6MSizeFEEERNS_9IMetadataE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN6NS3Av314DualZoomInfo_TEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN6NS3Av314DualZoomInfo_TEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN6NS3Av36IHal3AEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, std::__1::shared_ptr<NS3Av3::IHal3A> > >(int const&, std::__1::pair<int const, std::__1::shared_ptr<NS3Av3::IHal3A> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN6NS3Av36IHal3AEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN36RequestSettingPolicyMediator_Default15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE */
/* Demangled: RequestSettingPolicyMediator_Default::evaluateRequest(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams&, NSCam::v3::pipeline::policy::pipelinesetting::RequestInputParams const&) */
int _ZN36RequestSettingPolicyMediator_Default15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> const&>(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> const&) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceI36RequestSettingPolicyMediator_DefaultNS_9allocatorIS1_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_Default, std::__1::allocator<RequestSettingPolicyMediator_Default> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceI36RequestSettingPolicyMediator_DefaultNS_9allocatorIS1_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam9get3ADataEiRNSt3__110shared_ptrINS2_13sensorcontrol17SensorControlInfoEEE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::get3AData(int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo>&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam9get3ADataEiRNSt3__110shared_ptrINS2_13sensorcontrol17SensorControlInfoEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy12SensorParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::SensorParams, std::__1::allocator<NSCam::v3::pipeline::policy::SensorParams> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy12SensorParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_Default15evaluateRequestERKNS3_21EvaluateRequestParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default::evaluateRequest(NSCam::v3::pipeline::policy::requestmetadata::EvaluateRequestParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_Default15evaluateRequestERKNS3_21EvaluateRequestParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpC2ERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump::RequestMetadataPolicy_DebugDump(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpC2ERKNS3_14CreationParamsE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectENS_14default_deleteIS6_EENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject*, std::__1::default_delete<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject>, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectENS_14default_deleteIS6_EENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _Z36makeRequestSettingPolicyMediator_PDERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE */
/* Demangled: makeRequestSettingPolicyMediator_PDE(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
int _Z36makeRequestSettingPolicyMediator_PDERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultC1ERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default::RequestMetadataPolicy_Default(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultC1ERKNS3_14CreationParamsE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN42RequestSettingPolicyMediator_Multicam_Zoom19updateFeaturePolicyENSt3__110shared_ptrIN5NSCam2v38pipeline6policy14featuresetting21IFeatureSettingPolicyEEERNS6_19RequestOutputParamsERNS6_18RequestInputParamsEj */
/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::updateFeaturePolicy(std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy>, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams&, unsigned int) */
int _ZN42RequestSettingPolicyMediator_Multicam_Zoom19updateFeaturePolicyENSt3__110shared_ptrIN5NSCam2v38pipeline6policy14featuresetting21IFeatureSettingPolicyEEERNS6_19RequestOutputParamsERNS6_18RequestInputParamsEj(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder14queryMinBufNumEPKc */
/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::queryMinBufNum(char const*) */
int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder14queryMinBufNumEPKc(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager25selectNeedOfflineFromListERNS3_23ParsedSensorStateResultERNSt3__113unordered_mapIjNS2_13sensorcontrol12SensorStatusENS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjSA_EEEEEERKNS7_6vectorIjNSF_IjEEEERj */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::selectNeedOfflineFromList(NSCam::v3::pipeline::policy::requestsensorcontrol::ParsedSensorStateResult&, std::__1::unordered_map<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&, unsigned int&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager25selectNeedOfflineFromListERNS3_23ParsedSensorStateResultERNSt3__113unordered_mapIjNS2_13sensorcontrol12SensorStatusENS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjSA_EEEEEERKNS7_6vectorIjNSF_IjEEEERj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::hash<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy34makePolicy_IOMap_NonP2Node_HalJpegENSt3__18functionIFiRKNS2_5iomap19RequestOutputParamsERKNS5_18RequestInputParamsEEEE */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_IOMap_NonP2Node_HalJpeg(std::__1::function<int (NSCam::v3::pipeline::policy::iomap::RequestOutputParams const&, NSCam::v3::pipeline::policy::iomap::RequestInputParams const&)>) */
int _ZN5NSCam2v38pipeline6policy34makePolicy_IOMap_NonP2Node_HalJpegENSt3__18functionIFiRKNS2_5iomap19RequestOutputParamsERKNS5_18RequestInputParamsEEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorE */
/* Demangled: vtable for NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior */
extern void* _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamENS_9allocatorIS6_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorD2Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior::~IspBehavior() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorD2Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior::update(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy43makePolicy_P2NodeDecision_AppRaw16ReprocessENSt3__18functionIFiRNS2_14p2nodedecision19RequestOutputParamsERKNS5_18RequestInputParamsEEEE */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_P2NodeDecision_AppRaw16Reprocess(std::__1::function<int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>) */
int _ZN5NSCam2v38pipeline6policy43makePolicy_P2NodeDecision_AppRaw16ReprocessENSt3__18functionIFiRNS2_14p2nodedecision19RequestOutputParamsERKNS5_18RequestInputParamsEEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7NSCamHW16simplifiedMatrixEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7NSCamHW16simplifiedMatrixEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerD2Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::~SensorStateManager() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerD2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::NSPipelineContext::IOMap> */
extern void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEEE;

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> const&>(std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> const&) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam6MSizeFEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam6MSizeFEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> >(unsigned int const&, std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder9kIsLowRamE */
/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::kIsLowRam */
extern void* _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder9kIsLowRamE;

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerC1Ei */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::SensorControllerBehaviorManager(int) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerC1Ei(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamC1ERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::RequestSensorControlPolicy_Multicam(NSCam::v3::pipeline::policy::requestsensorcontrol::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamC1ERKNS3_14CreationParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Lcso_DefaultEim */
/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Lcso_Default(int, unsigned long) */
int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Lcso_DefaultEim(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectC2ERKNSt3__16vectorIiNS5_9allocatorIiEEEE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::Hal3AObject(std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectC2ERKNSt3__16vectorIiNS5_9allocatorIiEEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectD2Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::~Hal3AObject() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectD2Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperD1Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::~DeviceInfoHelper() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperD1Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager6updateERKNS2_13sensorcontrol21SensorControlParamOutERNS3_23ParsedSensorStateResultE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::update(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut const&, NSCam::v3::pipeline::policy::requestsensorcontrol::ParsedSensorStateResult&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager6updateERKNS2_13sensorcontrol21SensorControlParamOutERNS3_23ParsedSensorStateResultE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam15evaluateRequestERNS3_19RequestOutputParamsERKNS3_18RequestInputParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::evaluateRequest(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::RequestInputParams const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam15evaluateRequestERNS3_19RequestOutputParamsERKNS3_18RequestInputParamsE(void);

/* Symbol: _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorE */
/* Demangled: vtable for NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior */
extern void* _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorE;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata34makePolicy_RequestMetadata_HalJpegERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::makePolicy_RequestMetadata_HalJpeg(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata34makePolicy_RequestMetadata_HalJpegERKNS3_14CreationParamsE(void);

/* Symbol: _ZNK5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager20getSensorOnlineStateEj */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::getSensorOnlineState(unsigned int) const */
int _ZNK5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager20getSensorOnlineStateEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, std::__1::shared_ptr<NSCam::IMetadata> > >(int const&, std::__1::pair<int const, std::__1::shared_ptr<NSCam::IMetadata> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _Z40makeRequestSettingPolicyMediator_DefaultRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE */
/* Demangled: makeRequestSettingPolicyMediator_Default(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
int _Z40makeRequestSettingPolicyMediator_DefaultRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI36RequestSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_Default, std::__1::allocator<RequestSettingPolicyMediator_Default> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceI36RequestSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy33makePolicy_P2NodeDecision_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_P2NodeDecision_Default() */
int _ZN5NSCam2v38pipeline6policy33makePolicy_P2NodeDecision_DefaultEv(void);

/* Symbol: _ZTVN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultE */
/* Demangled: vtable for NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default */
extern void* _ZTVN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultE;

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamD0Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::~RequestSensorControlPolicy_Multicam() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamD0Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam5MRectEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::MRect>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::MRect> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::MRect> >(unsigned int const&, std::__1::pair<unsigned int const, NSCam::MRect>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam5MRectEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJRKS6_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode> > >::__emplace_unique_key_args<NSCam::v3::pipeline::policy::eMode, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode const&>, std::__1::tuple<> >(NSCam::v3::pipeline::policy::eMode const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJRKS6_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager24updateOnlineSensorResultERNS3_23ParsedSensorStateResultERKNSt3__113unordered_mapIjNS2_13sensorcontrol12SensorStatusENS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjSA_EEEEEE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::updateOnlineSensorResult(NSCam::v3::pipeline::policy::requestsensorcontrol::ParsedSensorStateResult&, std::__1::unordered_map<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > > const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager24updateOnlineSensorResultERNS3_23ParsedSensorStateResultERKNSt3__113unordered_mapIjNS2_13sensorcontrol12SensorStatusENS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjSA_EEEEEE(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEmRKj */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__append(unsigned long, unsigned int const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEmRKj(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperENS_14default_deleteIS6_EENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper*, std::__1::default_delete<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper>, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperENS_14default_deleteIS6_EENS_9allocatorIS6_EEEE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultENS_9allocatorIS6_EEEE;

/* Symbol: _ZNK5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11getMasterIdEv */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::getMasterId() const */
int _ZNK5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11getMasterIdEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rrzo_DefaultEmRKNS2_11P1HwSettingE */
/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Rrzo_Default(unsigned long, NSCam::v3::pipeline::policy::P1HwSetting const&) */
int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rrzo_DefaultEmRKNS2_11P1HwSettingE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorD0Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior::~MetadataBehavior() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v33SetIlEE */
/* Demangled: vtable for NSCam::v3::Set<long> */
extern void* _ZTVN5NSCam2v33SetIlEE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceI32RequestSettingPolicyMediator_PDENS_9allocatorIS1_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_PDE, std::__1::allocator<RequestSettingPolicyMediator_PDE> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceI32RequestSettingPolicyMediator_PDENS_9allocatorIS1_EEEE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorD0Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior::~SensorCropBehavior() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorD0Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >::__emplace_unique_key_args<int, std::__1::pair<int const, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> >(int const&, std::__1::pair<int const, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS9_EEEEENSN_INS_15__hash_iteratorIPNS_11__hash_nodeISA_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> > >(int const&, std::__1::pair<int const, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS9_EEEEENSN_INS_15__hash_iteratorIPNS_11__hash_nodeISA_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata34makePolicy_RequestMetadata_DefaultERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::makePolicy_RequestMetadata_Default(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata34makePolicy_RequestMetadata_DefaultERKNS3_14CreationParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperC2ERKNSt3__16vectorIiNS5_9allocatorIiEEEE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::DeviceInfoHelper(std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperC2ERKNSt3__16vectorIiNS5_9allocatorIiEEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager16switchSensorDoneEv */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::switchSensorDone() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager16switchSensorDoneEv(void);

/* Symbol: _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorE */
/* Demangled: vtable for NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior */
extern void* _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorE;

/* Symbol: _ZNK7android6VectorIlE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<long>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegE */
/* Demangled: vtable for NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg */
extern void* _ZTVN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl15evaluateRequestERNS3_19RequestOutputParamsERKNS3_18RequestInputParamsE */
/* Demangled: NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::evaluateRequest(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams&, NSCam::v3::pipeline::policy::pipelinesetting::RequestInputParams const&) */
int _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl15evaluateRequestERNS3_19RequestOutputParamsERKNS3_18RequestInputParamsE(void);

/* Symbol: _ZN36RequestSettingPolicyMediator_DefaultC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE */
/* Demangled: RequestSettingPolicyMediator_Default::RequestSettingPolicyMediator_Default(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
int _ZN36RequestSettingPolicyMediator_DefaultC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_ */
/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long const&>(long const&) */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJRKS6_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting> > >::__emplace_unique_key_args<NSCam::v3::pipeline::policy::eMode, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode const&>, std::__1::tuple<> >(NSCam::v3::pipeline::policy::eMode const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJRKS6_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager19isSensorSwitchGoingEv */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::isSensorSwitchGoing() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager19isSensorSwitchGoingEv(void);

/* Symbol: _ZNK5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager14getSensorStateEj */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::getSensorState(unsigned int) const */
int _ZNK5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager14getSensorStateEj(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorD2Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior::~Sync3ABehavior() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorD2Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper25getPhysicalSensorFullSizeEiRNS_5MSizeE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::getPhysicalSensorFullSize(int, NSCam::MSize&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper25getPhysicalSensorFullSizeEiRNS_5MSizeE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorD0Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior::~FrameSyncBehavior() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorD0Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11SensorStateEEENS_22__unordered_map_hasherIjS9_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS9_NS_8equal_toIjEELb1EEENS_9allocatorIS9_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11SensorStateEEENS_22__unordered_map_hasherIjS9_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS9_NS_8equal_toIjEELb1EEENS_9allocatorIS9_EEE6rehashEm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam5MRectENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::MRect, std::__1::allocator<NSCam::MRect> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam5MRectENS_9allocatorIS2_EEEE;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy23P1MetaStreamInfoBuilder27setP1HalMetaControl_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::P1MetaStreamInfoBuilder::setP1HalMetaControl_Default() */
int _ZN5NSCam2v38pipeline6policy23P1MetaStreamInfoBuilder27setP1HalMetaControl_DefaultEv(void);

/* Symbol: _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_ */
/* Demangled: void std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::__push_back_slow_path<unsigned long>(unsigned long&&) */
int _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy60makePolicy_Configuration_AppImageStreamInfoMaxBufNum_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_AppImageStreamInfoMaxBufNum_Default() */
int _ZN5NSCam2v38pipeline6policy60makePolicy_Configuration_AppImageStreamInfoMaxBufNum_DefaultEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&), std::__1::allocator<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>, int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E18destroy_deallocateEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy34makePolicy_IOMap_NonP2Node_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_IOMap_NonP2Node_Default() */
int _ZN5NSCam2v38pipeline6policy34makePolicy_IOMap_NonP2Node_DefaultEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_ */
/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE */
/* Demangled: std::__1::__function::__func<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&), std::__1::allocator<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>, int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>::__clone(std::__1::__function::__base<int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>*) const */
int _ZNKSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam13getSensorDataEiRNSt3__110shared_ptrINS2_13sensorcontrol17SensorControlInfoEEE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::getSensorData(int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo>&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam13getSensorDataEiRNSt3__110shared_ptrINS2_13sensorcontrol17SensorControlInfoEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam5MRectEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::MRect> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam5MRectEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo, std::__1::allocator<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy32makePolicy_IOMap_P2Node_multicamEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_IOMap_P2Node_multicam() */
int _ZN5NSCam2v38pipeline6policy32makePolicy_IOMap_P2Node_multicamEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultC2ERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default::RequestMetadataPolicy_Default(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultC2ERKNS3_14CreationParamsE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy12SensorParamsENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::SensorParams, std::__1::allocator<NSCam::v3::pipeline::policy::SensorParams> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy12SensorParamsENS_9allocatorIS5_EEEE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7NSCamHW16simplifiedMatrixEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix> > >::__emplace_unique_key_args<int, std::__1::pair<int const, NSCamHW::simplifiedMatrix> >(int const&, std::__1::pair<int const, NSCamHW::simplifiedMatrix>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7NSCamHW16simplifiedMatrixEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam6MSizeFEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, std::__1::shared_ptr<NSCam::MSizeF> > >(int const&, std::__1::pair<int const, std::__1::shared_ptr<NSCam::MSizeF> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam6MSizeFEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN35ConfigSettingPolicyMediator_DefaultC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE */
/* Demangled: ConfigSettingPolicyMediator_Default::ConfigSettingPolicyMediator_Default(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
int _ZN35ConfigSettingPolicyMediator_DefaultC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorENS_9allocatorIS6_EEEE;

/* Symbol: _ZNK7android6VectorIlE7do_copyEPvPKvm */
/* Demangled: android::Vector<long>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE7do_copyEPvPKvm(void);

/* Symbol: _ZN42RequestSettingPolicyMediator_Multicam_ZoomC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE */
/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::RequestSettingPolicyMediator_Multicam_Zoom(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
int _ZN42RequestSettingPolicyMediator_Multicam_ZoomC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy46makePolicy_Configuration_SensorSetting_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_SensorSetting_Default() */
int _ZN5NSCam2v38pipeline6policy46makePolicy_Configuration_SensorSetting_DefaultEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy49makePolicy_Configuration_StreamInfo_NonP1_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_StreamInfo_NonP1_Default() */
int _ZN5NSCam2v38pipeline6policy49makePolicy_Configuration_StreamInfo_NonP1_DefaultEv(void);

/* Symbol: _ZN32RequestSettingPolicyMediator_PDEC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE */
/* Demangled: RequestSettingPolicyMediator_PDE::RequestSettingPolicyMediator_PDE(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
int _ZN32RequestSettingPolicyMediator_PDEC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Imgo_DefaultEmRKNS2_11P1HwSettingE */
/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Imgo_Default(unsigned long, NSCam::v3::pipeline::policy::P1HwSetting const&) */
int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Imgo_DefaultEmRKNS2_11P1HwSettingE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertD2Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DomainConvert::~DomainConvert() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertD2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder22setP1ScaledYuv_DefaultERKNS2_11P1HwSettingE */
/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1ScaledYuv_Default(NSCam::v3::pipeline::policy::P1HwSetting const&) */
int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder22setP1ScaledYuv_DefaultERKNS2_11P1HwSettingE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy50makePolicy_Configuration_StreamInfo_NonP1_MulticamEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_StreamInfo_NonP1_Multicam() */
int _ZN5NSCam2v38pipeline6policy50makePolicy_Configuration_StreamInfo_NonP1_MulticamEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegENS_9allocatorIS6_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorD0Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior::~IspBehavior() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorD0Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam17getDecisionResultERNS2_13sensorcontrol21SensorControlParamOutERNS5_20SensorControlParamInE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::getDecisionResult(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut&, NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamIn&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam17getDecisionResultERNS2_13sensorcontrol21SensorControlParamOutERNS5_20SensorControlParamInE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_ */
/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rrzo_DefaultERKNS2_11P1HwSettingE */
/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Rrzo_Default(NSCam::v3::pipeline::policy::P1HwSetting const&) */
int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rrzo_DefaultERKNS2_11P1HwSettingE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe8SEN_INFOENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::SEN_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::SEN_INFO> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::SEN_INFO const&>(NSCam::NSIoPipe::NSCamIOPipe::SEN_INFO const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe8SEN_INFOENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCam::MRect>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::MRect> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior20updateMasterSlaveTagERKNS3_16BehaviorUserDataERNS_9IMetadata6IEntryE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior::updateMasterSlaveTag(NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&, NSCam::IMetadata::IEntry&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior20updateMasterSlaveTagERKNS3_16BehaviorUserDataERNS_9IMetadata6IEntryE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16SensorStaticInfoENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::SensorStaticInfo, std::__1::allocator<NSCam::SensorStaticInfo> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16SensorStaticInfoENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo, std::__1::allocator<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorENS_9allocatorIS6_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager14setSensorStateERjNS4_15SensorStateTypeE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::setSensorState(unsigned int&, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorStateType) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager14setSensorStateERjNS4_15SensorStateTypeE(void);

/* Symbol: _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorE */
/* Demangled: vtable for NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior */
extern void* _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorE;

/* Symbol: _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplC1ERKNS4_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::PipelineSettingPolicyImpl(NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplC1ERKNS4_14CreationParamsE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::hash<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy19ParsedStreamInfo_P1ENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::v3::pipeline::policy::ParsedStreamInfo_P1, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedStreamInfo_P1> >::__push_back_slow_path<NSCam::v3::pipeline::policy::ParsedStreamInfo_P1>(NSCam::v3::pipeline::policy::ParsedStreamInfo_P1&&) */
int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy19ParsedStreamInfo_P1ENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy49makePolicy_Configuration_StreamInfo_NonP1_HalJpegENSt3__18functionIFiRKNS2_37Configuration_StreamInfo_NonP1_ParamsEEEE */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_StreamInfo_NonP1_HalJpeg(std::__1::function<int (NSCam::v3::pipeline::policy::Configuration_StreamInfo_NonP1_Params const&)>) */
int _ZN5NSCam2v38pipeline6policy49makePolicy_Configuration_StreamInfo_NonP1_HalJpegENSt3__18functionIFiRKNS2_37Configuration_StreamInfo_NonP1_ParamsEEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvert20buildTransformMatrixERNSt3__16vectorIiNS5_9allocatorIiEEEERNS6_IjNS7_IjEEEE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DomainConvert::buildTransformMatrix(std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvert20buildTransformMatrixERNSt3__16vectorIiNS5_9allocatorIiEEEERNS6_IjNS7_IjEEEE(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRKjJRS5_EEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISO_EEEEEEmOT_DpOT0_ */
/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__construct_node_hash<unsigned int const&, std::__1::vector<long, std::__1::allocator<long> >&>(unsigned long, unsigned int const&, std::__1::vector<long, std::__1::allocator<long> >&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRKjJRS5_EEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISO_EEEEEEmOT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRjRS5_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__emplace_unique_key_args<unsigned int, unsigned int&, std::__1::vector<long, std::__1::allocator<long> >&>(unsigned int const&, unsigned int&, std::__1::vector<long, std::__1::allocator<long> >&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRjRS5_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior::update(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy10kModeNamesE */
/* Demangled: NSCam::v3::pipeline::policy::kModeNames */
extern void* _ZN5NSCam2v38pipeline6policy10kModeNamesE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI32RequestSettingPolicyMediator_PDENS_9allocatorIS1_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_PDE, std::__1::allocator<RequestSettingPolicyMediator_PDE> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceI32RequestSettingPolicyMediator_PDENS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTV42RequestSettingPolicyMediator_Multicam_Zoom */
/* Demangled: vtable for RequestSettingPolicyMediator_Multicam_Zoom */
extern void* _ZTV42RequestSettingPolicyMediator_Multicam_Zoom;

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned long) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager8BEHAVIORENS_10shared_ptrINS6_25ISensorControllerBehaviorEEEEENS_22__unordered_map_hasherIS8_SC_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SC_NS_8equal_toIS8_EELb1EEENS_9allocatorISC_EEE25__emplace_unique_key_argsIS8_JNS_4pairIKS8_SB_EEEEENSP_INS_15__hash_iteratorIPNS_11__hash_nodeISC_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::hash<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::equal_to<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> > > >::__emplace_unique_key_args<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::pair<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR const, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> > >(NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR const&, std::__1::pair<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR const, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager8BEHAVIORENS_10shared_ptrINS6_25ISensorControllerBehaviorEEEEENS_22__unordered_map_hasherIS8_SC_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SC_NS_8equal_toIS8_EELb1EEENS_9allocatorISC_EEE25__emplace_unique_key_argsIS8_JNS_4pairIKS8_SB_EEEEENSP_INS_15__hash_iteratorIPNS_11__hash_nodeISC_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN6NS3Av314DualZoomInfo_TEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T> > >::__emplace_unique_key_args<int, std::__1::pair<int const, NS3Av3::DualZoomInfo_T> >(int const&, std::__1::pair<int const, NS3Av3::DualZoomInfo_T>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN6NS3Av314DualZoomInfo_TEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy42makePolicy_Configuration_P1DmaNeed_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_P1DmaNeed_Default() */
int _ZN5NSCam2v38pipeline6policy42makePolicy_Configuration_P1DmaNeed_DefaultEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior23setSensorCropToMetadataEiRNS3_19RequestOutputParamsERNS_5MRectE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior::setSensorCropToMetadata(int, NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::MRect&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior23setSensorCropToMetadataEiRNS3_19RequestOutputParamsERNS_5MRectE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI42RequestSettingPolicyMediator_Multicam_ZoomNS_9allocatorIS1_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_Multicam_Zoom, std::__1::allocator<RequestSettingPolicyMediator_Multicam_Zoom> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceI42RequestSettingPolicyMediator_Multicam_ZoomNS_9allocatorIS1_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS5_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > >(unsigned int const&, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS5_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&), std::__1::allocator<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>, int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>::destroy() */
int _ZNSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E7destroyEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJRKlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet> > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long const&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJRKlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, std::__1::shared_ptr<NSCam::SensorStaticInfo> > >(int const&, std::__1::pair<int const, std::__1::shared_ptr<NSCam::SensorStaticInfo> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam6MSizeFENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::MSizeF, std::__1::allocator<NSCam::MSizeF> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam6MSizeFENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpeg15evaluateRequestERKNS3_21EvaluateRequestParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg::evaluateRequest(NSCam::v3::pipeline::policy::requestmetadata::EvaluateRequestParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpeg15evaluateRequestERKNS3_21EvaluateRequestParamsE(void);

/* Symbol: _ZN42RequestSettingPolicyMediator_Multicam_Zoom17updateSlavePolicyEjRN5NSCam2v38pipeline6policy14featuresetting18RequestInputParamsEjRNSt3__113unordered_mapIjNS4_19RequestOutputParamsENS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjS9_EEEEEE */
/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::updateSlavePolicy(unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams&, unsigned int, std::__1::unordered_map<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams> > >&) */
int _ZN42RequestSettingPolicyMediator_Multicam_Zoom17updateSlavePolicyEjRN5NSCam2v38pipeline6policy14featuresetting18RequestInputParamsEjRNSt3__113unordered_mapIjNS4_19RequestOutputParamsENS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjS9_EEEEEE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE8__appendEmRKS5_ */
/* Demangled: std::__1::vector<NSCam::v3::pipeline::policy::BoostControl, std::__1::allocator<NSCam::v3::pipeline::policy::BoostControl> >::__append(unsigned long, NSCam::v3::pipeline::policy::BoostControl const&) */
int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE8__appendEmRKS5_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceI42RequestSettingPolicyMediator_Multicam_ZoomNS_9allocatorIS1_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_Multicam_Zoom, std::__1::allocator<RequestSettingPolicyMediator_Multicam_Zoom> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceI42RequestSettingPolicyMediator_Multicam_ZoomNS_9allocatorIS1_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy39makePolicy_CaptureStreamUpdater_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_CaptureStreamUpdater_Default() */
int _ZN5NSCam2v38pipeline6policy39makePolicy_CaptureStreamUpdater_DefaultEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCamHW::HwInfoHelper, std::__1::allocator<NSCamHW::HwInfoHelper> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegC1ERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg::RequestMetadataPolicy_HalJpeg(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegC1ERKNS3_14CreationParamsE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN6NS3Av36IHal3AEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN6NS3Av36IHal3AEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectENS_14default_deleteIS6_EENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject*, std::__1::default_delete<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject>, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectENS_14default_deleteIS6_EENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline6policy12SensorParamsEEEEENS_19__map_value_compareIjS9_NS_4lessIjEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::SensorParams> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::SensorParams> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::SensorParams> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::SensorParams> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline6policy12SensorParamsEEEEENS_19__map_value_compareIjS9_NS_4lessIjEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy57makePolicy_Configuration_AppImageStreamInfoMaxBufNum_SMVREv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_AppImageStreamInfoMaxBufNum_SMVR() */
int _ZN5NSCam2v38pipeline6policy57makePolicy_Configuration_AppImageStreamInfoMaxBufNum_SMVREv(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::IMetadata> >(std::__1::shared_ptr<NSCam::IMetadata>&&) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRiRS3_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCam::MRect>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::MRect> > >::__emplace_unique_key_args<int, int&, NSCam::MRect&>(int const&, int&, NSCam::MRect&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRiRS3_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior::update(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager18setSwitchGoingFlagEb */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::setSwitchGoingFlag(bool) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager18setSwitchGoingFlagEb(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN6NS3Av36IHal3AEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN6NS3Av36IHal3AEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceI35ConfigSettingPolicyMediator_DefaultNS_9allocatorIS1_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<ConfigSettingPolicyMediator_Default, std::__1::allocator<ConfigSettingPolicyMediator_Default> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceI35ConfigSettingPolicyMediator_DefaultNS_9allocatorIS1_EEEE;

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE8__appendEmRKS4_ */
/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata> > >::__append(unsigned long, std::__1::shared_ptr<NSCam::IMetadata> const&) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE8__appendEmRKS4_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::hash<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE6rehashEm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpENS_9allocatorIS6_EEEE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorENS_9allocatorIS6_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerC2Ei */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::SensorControllerBehaviorManager(int) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerC2Ei(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, std::__1::shared_ptr<NSCam::MRect> > >(int const&, std::__1::pair<int const, std::__1::shared_ptr<NSCam::MRect> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting> > >::__emplace_unique_key_args<NSCam::v3::pipeline::policy::eMode, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode&&>, std::__1::tuple<> >(NSCam::v3::pipeline::policy::eMode const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorD0Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior::~Sync3ABehavior() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorD0Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperD2Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::~DeviceInfoHelper() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperD2Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerD1Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::~SensorControllerBehaviorManager() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerD1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager8BEHAVIORENS_10shared_ptrINS6_25ISensorControllerBehaviorEEEEENS_22__unordered_map_hasherIS8_SC_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SC_NS_8equal_toIS8_EELb1EEENS_9allocatorISC_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::hash<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::equal_to<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager8BEHAVIORENS_10shared_ptrINS6_25ISensorControllerBehaviorEEEEENS_22__unordered_map_hasherIS8_SC_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SC_NS_8equal_toIS8_EELb1EEENS_9allocatorISC_EEE8__rehashEm(void);

/* Symbol: _ZNK7android6VectorIlE10do_destroyEPvm */
/* Demangled: android::Vector<long>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIlE10do_destroyEPvm(void);

/* Symbol: _ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSERKS4_ */
/* Demangled: android::sp<NSCam::v3::IImageStreamInfo>::operator=(android::sp<NSCam::v3::IImageStreamInfo> const&) */
int _ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSERKS4_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_ */
/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long>(long&&) */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__push_back_slow_path<NSCam::BufPlane const&>(NSCam::BufPlane const&) */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamD1Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::~RequestSensorControlPolicy_Multicam() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamD1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam5MRectEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::MRect> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam5MRectEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16SensorStaticInfoENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::SensorStaticInfo, std::__1::allocator<NSCam::SensorStaticInfo> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16SensorStaticInfoENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy50makePolicy_Configuration_PipelineNodesNeed_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_PipelineNodesNeed_Default() */
int _ZN5NSCam2v38pipeline6policy50makePolicy_Configuration_PipelineNodesNeed_DefaultEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy12SensorParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::SensorParams, std::__1::allocator<NSCam::v3::pipeline::policy::SensorParams> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy12SensorParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::hash<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof> > >::__emplace_unique_key_args<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode_vsdof&&>, std::__1::tuple<> >(NSCam::v3::pipeline::policy::eMode_vsdof const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode_vsdof&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__push_back_slow_path<NSCam::BufPlane>(NSCam::BufPlane&&) */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZTVN5NSCam2v38pipeline6policy15requestmetadata39RequestMetadataPolicy_AppRaw16ReprocessE */
/* Demangled: vtable for NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_AppRaw16Reprocess */
extern void* _ZTVN5NSCam2v38pipeline6policy15requestmetadata39RequestMetadataPolicy_AppRaw16ReprocessE;

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvert17convertToTgDomainEiRNS_5MRectES6_ */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DomainConvert::convertToTgDomain(int, NSCam::MRect&, NSCam::MRect&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvert17convertToTgDomainEiRNS_5MRectES6_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::update(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam6MSizeFENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::MSizeF, std::__1::allocator<NSCam::MSizeF> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam6MSizeFENS_9allocatorIS2_EEEE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIjJRKjPNS5_5Utils14MetaStreamInfoEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__emplace_unique_key_args<unsigned int, unsigned int const&, NSCam::v3::Utils::MetaStreamInfo*>(unsigned int const&, unsigned int const&, NSCam::v3::Utils::MetaStreamInfo*&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIjJRKjPNS5_5Utils14MetaStreamInfoEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDump15evaluateRequestERKNS3_21EvaluateRequestParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump::evaluateRequest(NSCam::v3::pipeline::policy::requestmetadata::EvaluateRequestParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDump15evaluateRequestERKNS3_21EvaluateRequestParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior16updateSensorCropERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior::updateSensorCrop(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior16updateSensorCropERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::MSize, std::__1::allocator<NSCam::MSize> >::__push_back_slow_path<NSCam::MSize const&>(NSCam::MSize const&) */
int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::hash<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting> > >::__emplace_unique_key_args<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode_vsdof&&>, std::__1::tuple<> >(NSCam::v3::pipeline::policy::eMode_vsdof const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode_vsdof&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorD1Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior::~MetadataBehavior() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorD1Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI42RequestSettingPolicyMediator_Multicam_ZoomNS_9allocatorIS1_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_Multicam_Zoom, std::__1::allocator<RequestSettingPolicyMediator_Multicam_Zoom> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceI42RequestSettingPolicyMediator_Multicam_ZoomNS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorD1Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior::~SensorCropBehavior() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorD1Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject13is2ASyncReadyEi */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::is2ASyncReady(int) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject13is2ASyncReadyEi(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplC2ERKNS4_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::PipelineSettingPolicyImpl(NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplC2ERKNS4_14CreationParamsE(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol45makePolicy_RequestSensorControl_Multicam_ZoomERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::makePolicy_RequestSensorControl_Multicam_Zoom(NSCam::v3::pipeline::policy::requestsensorcontrol::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol45makePolicy_RequestSensorControl_Multicam_ZoomERKNS3_14CreationParamsE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11SensorStateEEENS_22__unordered_map_hasherIjS9_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS9_NS_8equal_toIjEELb1EEENS_9allocatorIS9_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS8_EEEEENSM_INS_15__hash_iteratorIPNS_11__hash_nodeIS9_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState> >(unsigned int const&, std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11SensorStateEEENS_22__unordered_map_hasherIjS9_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS9_NS_8equal_toIjEELb1EEENS_9allocatorIS9_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS8_EEEEENSM_INS_15__hash_iteratorIPNS_11__hash_nodeIS9_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN35ConfigSettingPolicyMediator_DefaultC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE */
/* Demangled: ConfigSettingPolicyMediator_Default::ConfigSettingPolicyMediator_Default(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
int _ZN35ConfigSettingPolicyMediator_DefaultC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Lcso_DefaultEi */
/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Lcso_Default(int) */
int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Lcso_DefaultEi(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder18setP1FDYuv_DefaultERKNS2_11P1HwSettingE */
/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1FDYuv_Default(NSCam::v3::pipeline::policy::P1HwSetting const&) */
int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder18setP1FDYuv_DefaultERKNS2_11P1HwSettingE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE21__emplace_unique_implIJRKiPNS5_5Utils14MetaStreamInfoEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__emplace_unique_impl<int const&, NSCam::v3::Utils::MetaStreamInfo*>(int const&, NSCam::v3::Utils::MetaStreamInfo*&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE21__emplace_unique_implIJRKiPNS5_5Utils14MetaStreamInfoEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy45makePolicy_Configuration_P1HwSetting_multicamEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_P1HwSetting_multicam() */
int _ZN5NSCam2v38pipeline6policy45makePolicy_Configuration_P1HwSetting_multicamEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&), std::__1::allocator<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>, int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E7__cloneEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy27makePolicy_Topology_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Topology_Default() */
int _ZN5NSCam2v38pipeline6policy27makePolicy_Topology_DefaultEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior15insertSync3ATagEibbRNS3_19RequestOutputParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior::insertSync3ATag(int, bool, bool, NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior15insertSync3ATagEibbRNS3_19RequestOutputParamsE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectENS_14default_deleteIS6_EENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject*, std::__1::default_delete<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject>, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectENS_14default_deleteIS6_EENS_9allocatorIS6_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl21evaluateConfigurationERNS3_25ConfigurationOutputParamsERKNS3_24ConfigurationInputParamsE */
/* Demangled: NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::evaluateConfiguration(NSCam::v3::pipeline::policy::pipelinesetting::ConfigurationOutputParams&, NSCam::v3::pipeline::policy::pipelinesetting::ConfigurationInputParams const&) */
int _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl21evaluateConfigurationERNS3_25ConfigurationOutputParamsERKNS3_24ConfigurationInputParamsE(void);

/* Symbol: _ZN42RequestSettingPolicyMediator_Multicam_ZoomC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE */
/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::RequestSettingPolicyMediator_Multicam_Zoom(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
int _ZN42RequestSettingPolicyMediator_Multicam_ZoomC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy50makePolicy_Configuration_PipelineNodesNeed_HalJpegENSt3__18functionIFiRKNS2_38Configuration_PipelineNodesNeed_ParamsEEEE */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_PipelineNodesNeed_HalJpeg(std::__1::function<int (NSCam::v3::pipeline::policy::Configuration_PipelineNodesNeed_Params const&)>) */
int _ZN5NSCam2v38pipeline6policy50makePolicy_Configuration_PipelineNodesNeed_HalJpegENSt3__18functionIFiRKNS2_38Configuration_PipelineNodesNeed_ParamsEEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRjJRS5_EEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISN_EEEEEEmOT_DpOT0_ */
/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__construct_node_hash<unsigned int&, std::__1::vector<long, std::__1::allocator<long> >&>(unsigned long, unsigned int&, std::__1::vector<long, std::__1::allocator<long> >&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRjJRS5_EEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISN_EEEEEEmOT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorD1Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior::~FrameSyncBehavior() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorD1Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy23P1MetaStreamInfoBuilder27setP1AppMetaDynamic_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::P1MetaStreamInfoBuilder::setP1AppMetaDynamic_Default() */
int _ZN5NSCam2v38pipeline6policy23P1MetaStreamInfoBuilder27setP1AppMetaDynamic_DefaultEv(void);

/* Symbol: _ZTVN5NSCam2v38pipeline6policy23P1MetaStreamInfoBuilderE */
/* Demangled: vtable for NSCam::v3::pipeline::policy::P1MetaStreamInfoBuilder */
extern void* _ZTVN5NSCam2v38pipeline6policy23P1MetaStreamInfoBuilderE;

/* Symbol: end */
/* Demangled: end */
extern void* end;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN32RequestSettingPolicyMediator_PDEC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE */
/* Demangled: RequestSettingPolicyMediator_PDE::RequestSettingPolicyMediator_PDE(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
int _ZN32RequestSettingPolicyMediator_PDEC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void);

/* Symbol: _ZTVN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpE */
/* Demangled: vtable for NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump */
extern void* _ZTVN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpE;

/* Symbol: _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl22sendPolicyDataCallbackENS3_10PolicyTypeEmmm */
/* Demangled: NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::sendPolicyDataCallback(NSCam::v3::pipeline::policy::pipelinesetting::PolicyType, unsigned long, unsigned long, unsigned long) */
int _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl22sendPolicyDataCallbackENS3_10PolicyTypeEmmm(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void);

/* Symbol: _ZN32RequestSettingPolicyMediator_PDE15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE */
/* Demangled: RequestSettingPolicyMediator_PDE::evaluateRequest(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams&, NSCam::v3::pipeline::policy::pipelinesetting::RequestInputParams const&) */
int _ZN32RequestSettingPolicyMediator_PDE15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI32RequestSettingPolicyMediator_PDENS_9allocatorIS1_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_PDE, std::__1::allocator<RequestSettingPolicyMediator_PDE> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceI32RequestSettingPolicyMediator_PDENS_9allocatorIS1_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Imgo_DefaultERKNS2_11P1HwSettingE */
/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Imgo_Default(NSCam::v3::pipeline::policy::P1HwSetting const&) */
int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Imgo_DefaultERKNS2_11P1HwSettingE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy44makePolicy_Configuration_SensorSetting_VsdofEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_SensorSetting_Vsdof() */
int _ZN5NSCam2v38pipeline6policy44makePolicy_Configuration_SensorSetting_VsdofEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> > > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy35makePolicy_Request_Topology_HalJpegENSt3__18functionIFiRNS2_8topology19RequestOutputParamsERKNS5_18RequestInputParamsEEEE */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Request_Topology_HalJpeg(std::__1::function<int (NSCam::v3::pipeline::policy::topology::RequestOutputParams&, NSCam::v3::pipeline::policy::topology::RequestInputParams const&)>) */
int _ZN5NSCam2v38pipeline6policy35makePolicy_Request_Topology_HalJpegENSt3__18functionIFiRNS2_8topology19RequestOutputParamsERKNS5_18RequestInputParamsEEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject12isAFSyncDoneEi */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::isAFSyncDone(int) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject12isAFSyncDoneEi(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior::update(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehavior22setFrameSyncToMetadataEiRNS3_19RequestOutputParamsEi */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior::setFrameSyncToMetadata(int, NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, int) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehavior22setFrameSyncToMetadataEiRNS3_19RequestOutputParamsEi(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE8__rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIlE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<long>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rsso_DefaultEmRKNS2_11P1HwSettingE */
/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Rsso_Default(unsigned long, NSCam::v3::pipeline::policy::P1HwSetting const&) */
int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rsso_DefaultEmRKNS2_11P1HwSettingE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam13getPolicyDataERNS2_13sensorcontrol20SensorControlParamInERKNS3_18RequestInputParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::getPolicyData(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamIn&, NSCam::v3::pipeline::policy::requestsensorcontrol::RequestInputParams const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam13getPolicyDataERNS2_13sensorcontrol20SensorControlParamInERKNS3_18RequestInputParamsE(void);

/* Symbol: _ZTV35ConfigSettingPolicyMediator_Default */
/* Demangled: vtable for ConfigSettingPolicyMediator_Default */
extern void* _ZTV35ConfigSettingPolicyMediator_Default;

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy51makePolicy_Configuration_PipelineNodesNeed_multicamEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_PipelineNodesNeed_multicam() */
int _ZN5NSCam2v38pipeline6policy51makePolicy_Configuration_PipelineNodesNeed_multicamEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEE(void);

/* Symbol: _ZN42RequestSettingPolicyMediator_Multicam_Zoom33updateSensorModeToOutFeatureParamERN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEjj */
/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::updateSensorModeToOutFeatureParam(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams&, unsigned int, unsigned int) */
int _ZN42RequestSettingPolicyMediator_Multicam_Zoom33updateSensorModeToOutFeatureParamERN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEjj(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy16p1DmaOutputQueryERbS3_S3_PKNS2_23StreamingFeatureSettingE */
/* Demangled: NSCam::v3::pipeline::policy::p1DmaOutputQuery(bool&, bool&, bool&, NSCam::v3::pipeline::policy::StreamingFeatureSetting const*) */
int _ZN5NSCam2v38pipeline6policy16p1DmaOutputQueryERbS3_S3_PKNS2_23StreamingFeatureSettingE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegC2ERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg::RequestMetadataPolicy_HalJpeg(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegC2ERKNS3_14CreationParamsE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam5MRectENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::MRect, std::__1::allocator<NSCam::MRect> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam5MRectENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl39decideConfiguredAppImageStreamMaxBufNumEPNS2_24ParsedAppImageStreamInfoEPKNS2_23StreamingFeatureSettingEPKNS2_21CaptureFeatureSettingE */
/* Demangled: NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::decideConfiguredAppImageStreamMaxBufNum(NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo*, NSCam::v3::pipeline::policy::StreamingFeatureSetting const*, NSCam::v3::pipeline::policy::CaptureFeatureSetting const*) */
int _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl39decideConfiguredAppImageStreamMaxBufNumEPNS2_24ParsedAppImageStreamInfoEPKNS2_23StreamingFeatureSettingEPKNS2_21CaptureFeatureSettingE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&), std::__1::allocator<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>, int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)> */
extern void* _ZTVNSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_EE;

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_Default17evaluateP1YuvCropERKNS3_21EvaluateRequestParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default::evaluateP1YuvCrop(NSCam::v3::pipeline::policy::requestmetadata::EvaluateRequestParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_Default17evaluateP1YuvCropERKNS3_21EvaluateRequestParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata44makePolicy_RequestMetadata_AppRaw16ReprocessERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::makePolicy_RequestMetadata_AppRaw16Reprocess(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata44makePolicy_RequestMetadata_AppRaw16ReprocessERKNS3_14CreationParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam15updateCacheDataERNS2_13sensorcontrol21SensorControlParamOutE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::updateCacheData(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam15updateCacheDataERNS2_13sensorcontrol21SensorControlParamOutE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZN35ConfigSettingPolicyMediator_Default21evaluateConfigurationERN5NSCam2v38pipeline6policy15pipelinesetting25ConfigurationOutputParamsERKNS4_24ConfigurationInputParamsE */
/* Demangled: ConfigSettingPolicyMediator_Default::evaluateConfiguration(NSCam::v3::pipeline::policy::pipelinesetting::ConfigurationOutputParams&, NSCam::v3::pipeline::policy::pipelinesetting::ConfigurationInputParams const&) */
int _ZN35ConfigSettingPolicyMediator_Default21evaluateConfigurationERN5NSCam2v38pipeline6policy15pipelinesetting25ConfigurationOutputParamsERKNS4_24ConfigurationInputParamsE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::MSize, std::__1::allocator<NSCam::MSize> >::__push_back_slow_path<NSCam::MSize>(NSCam::MSize&&) */
int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy23P1MetaStreamInfoBuilder27setP1HalMetaDynamic_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::P1MetaStreamInfoBuilder::setP1HalMetaDynamic_Default() */
int _ZN5NSCam2v38pipeline6policy23P1MetaStreamInfoBuilder27setP1HalMetaDynamic_DefaultEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior::update(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTVN7android6VectorIlEE */
/* Demangled: vtable for android::Vector<long> */
extern void* _ZTVN7android6VectorIlEE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy13gP1NodeIdListE */
/* Demangled: NSCam::v3::pipeline::policy::gP1NodeIdList */
extern void* _ZN5NSCam2v38pipeline6policy13gP1NodeIdListE;

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorD1Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior::~IspBehavior() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorD1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> > > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN42RequestSettingPolicyMediator_Multicam_Zoom35updateBoostControlToOutFeatureParamERN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsENS3_12BoostControlEj */
/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::updateBoostControlToOutFeatureParam(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams&, NSCam::v3::pipeline::policy::BoostControl, unsigned int) */
int _ZN42RequestSettingPolicyMediator_Multicam_Zoom35updateBoostControlToOutFeatureParamERN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsENS3_12BoostControlEj(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy44makePolicy_Configuration_P1HwSetting_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_P1HwSetting_Default() */
int _ZN5NSCam2v38pipeline6policy44makePolicy_Configuration_P1HwSetting_DefaultEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCamHW::HwInfoHelper, std::__1::allocator<NSCamHW::HwInfoHelper> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerC1ERKNSt3__16vectorIiNS5_9allocatorIiEEEEjj */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorStateManager(std::__1::vector<int, std::__1::allocator<int> > const&, unsigned int, unsigned int) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerC1ERKNSt3__16vectorIiNS5_9allocatorIiEEEEjj(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerD1Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::~SensorStateManager() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerD1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams> >(unsigned int const&, std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy43makePolicy_Configuration_P1DmaNeed_MultiCamEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_P1DmaNeed_MultiCam() */
int _ZN5NSCam2v38pipeline6policy43makePolicy_Configuration_P1DmaNeed_MultiCamEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper28getPhysicalSensorActiveArrayEiRNS_5MRectE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::getPhysicalSensorActiveArray(int, NSCam::MRect&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper28getPhysicalSensorActiveArrayEiRNS_5MRectE(void);

/* Symbol: _ZN42RequestSettingPolicyMediator_Multicam_Zoom19combineFeatureParamERN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsERNSt3__113unordered_mapIjS5_NS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjS5_EEEEEE */
/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::combineFeatureParam(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams&, std::__1::unordered_map<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams> > >&) */
int _ZN42RequestSettingPolicyMediator_Multicam_Zoom19combineFeatureParamERN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsERNSt3__113unordered_mapIjS5_NS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjS5_EEEEEE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_EclES8_SB_ */
/* Demangled: std::__1::__function::__func<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&), std::__1::allocator<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>, int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>::operator()(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&) */
int _ZNSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_EclES8_SB_(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata36makePolicy_RequestMetadata_DebugDumpERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::makePolicy_RequestMetadata_DebugDump(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata36makePolicy_RequestMetadata_DebugDumpERKNS3_14CreationParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectD1Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::~Hal3AObject() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectD1Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectC1ERKNSt3__16vectorIiNS5_9allocatorIiEEEE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::Hal3AObject(std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectC1ERKNSt3__16vectorIiNS5_9allocatorIiEEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam22dumpSensorControlParamERNS2_13sensorcontrol21SensorControlParamOutERNS5_20SensorControlParamInERKNS3_18RequestInputParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::dumpSensorControlParam(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut&, NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamIn&, NSCam::v3::pipeline::policy::requestsensorcontrol::RequestInputParams const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam22dumpSensorControlParamERNS2_13sensorcontrol21SensorControlParamOutERNS5_20SensorControlParamInERKNS3_18RequestInputParamsE(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIS8_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> >(std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams>&&) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIS8_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy13SensorSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::v3::pipeline::policy::SensorSetting, std::__1::allocator<NSCam::v3::pipeline::policy::SensorSetting> >::__push_back_slow_path<NSCam::v3::pipeline::policy::SensorSetting const&>(NSCam::v3::pipeline::policy::SensorSetting const&) */
int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy13SensorSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject8isAFDoneEi */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::isAFDone(int) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject8isAFDoneEi(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager8BEHAVIORENS_10shared_ptrINS6_25ISensorControllerBehaviorEEEEENS_22__unordered_map_hasherIS8_SC_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SC_NS_8equal_toIS8_EELb1EEENS_9allocatorISC_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::hash<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::equal_to<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager8BEHAVIORENS_10shared_ptrINS6_25ISensorControllerBehaviorEEEEENS_22__unordered_map_hasherIS8_SC_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SC_NS_8equal_toIS8_EELb1EEENS_9allocatorISC_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior23insertMasterSlaveIdListEiRNS3_19RequestOutputParamsERNS_9IMetadata6IEntryE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior::insertMasterSlaveIdList(int, NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::IMetadata::IEntry&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior23insertMasterSlaveIdListEiRNS3_19RequestOutputParamsERNS_9IMetadata6IEntryE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamC2ERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::RequestSensorControlPolicy_Multicam(NSCam::v3::pipeline::policy::requestsensorcontrol::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamC2ERKNS3_14CreationParamsE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::hash<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE6rehashEm(void);

/* Symbol: _ZNK7android6VectorIlE8do_splatEPvPKvm */
/* Demangled: android::Vector<long>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy16kModeNames_vsdofE */
/* Demangled: NSCam::v3::pipeline::policy::kModeNames_vsdof */
extern void* _ZN5NSCam2v38pipeline6policy16kModeNames_vsdofE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata39RequestMetadataPolicy_AppRaw16ReprocessENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_AppRaw16Reprocess, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_AppRaw16Reprocess> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata39RequestMetadataPolicy_AppRaw16ReprocessENS_9allocatorIS6_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper20getPhysicalSensorFovEiRfS5_ */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::getPhysicalSensorFov(int, float&, float&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper20getPhysicalSensorFovEiRfS5_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rsso_DefaultERKNS2_11P1HwSettingE */
/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Rsso_Default(NSCam::v3::pipeline::policy::P1HwSetting const&) */
int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rsso_DefaultERKNS2_11P1HwSettingE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy31makePolicy_IOMap_P2Node_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_IOMap_P2Node_Default() */
int _ZN5NSCam2v38pipeline6policy31makePolicy_IOMap_P2Node_DefaultEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpC1ERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump::RequestMetadataPolicy_DebugDump(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpC1ERKNS3_14CreationParamsE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::MRect> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager17updateSensorStateERKNS2_13sensorcontrol21SensorControlParamOutERNS3_23ParsedSensorStateResultERNSt3__113unordered_mapIjNS5_12SensorStatusENSB_4hashIjEENSB_8equal_toIjEENSB_9allocatorINSB_4pairIKjSD_EEEEEE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::updateSensorState(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut const&, NSCam::v3::pipeline::policy::requestsensorcontrol::ParsedSensorStateResult&, std::__1::unordered_map<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager17updateSensorStateERKNS2_13sensorcontrol21SensorControlParamOutERNS3_23ParsedSensorStateResultERNSt3__113unordered_mapIjNS5_12SensorStatusENSB_4hashIjEENSB_8equal_toIjEENSB_9allocatorINSB_4pairIKjSD_EEEEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam6MSizeFENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::MSizeF, std::__1::allocator<NSCam::MSizeF> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam6MSizeFENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNK7android6VectorIlE12do_constructEPvm */
/* Demangled: android::Vector<long>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIlE12do_constructEPvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCamHW::HwInfoHelper, std::__1::allocator<NSCamHW::HwInfoHelper> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy60makePolicy_Configuration_PipelineNodesNeed_AppRaw16ReprocessEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_PipelineNodesNeed_AppRaw16Reprocess() */
int _ZN5NSCam2v38pipeline6policy60makePolicy_Configuration_PipelineNodesNeed_AppRaw16ReprocessEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy49makePolicy_Configuration_PipelineTopology_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_PipelineTopology_Default() */
int _ZN5NSCam2v38pipeline6policy49makePolicy_Configuration_PipelineTopology_DefaultEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void);

/* Symbol: _ZN42RequestSettingPolicyMediator_Multicam_Zoom25updateRequestResultParamsERNSt3__110shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEES9_j */
/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::updateRequestResultParams(std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams>&, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams>&, unsigned int) */
int _ZN42RequestSettingPolicyMediator_Multicam_Zoom25updateRequestResultParamsERNSt3__110shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEES9_j(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7NSCamHW16simplifiedMatrixEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7NSCamHW16simplifiedMatrixEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void);

/* Symbol: _ZTVN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilderE */
/* Demangled: vtable for NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder */
extern void* _ZTVN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilderE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRKjRS5_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__emplace_unique_key_args<unsigned int, unsigned int const&, std::__1::vector<long, std::__1::allocator<long> >&>(unsigned int const&, unsigned int const&, std::__1::vector<long, std::__1::allocator<long> >&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRKjRS5_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _Z39makeConfigSettingPolicyMediator_DefaultRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE */
/* Demangled: makeConfigSettingPolicyMediator_Default(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
int _Z39makeConfigSettingPolicyMediator_DefaultRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam13IHwInfoHelperEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::IHwInfoHelper>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam13IHwInfoHelperEED2Ev(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext11NodeEdgeSetE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::NodeEdgeSet */
extern void* _ZTVN5NSCam2v317NSPipelineContext11NodeEdgeSetE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder11toBufPlanesEmiRKNS_5MSizeE */
/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::toBufPlanes(unsigned long, int, NSCam::MSize const&) */
int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder11toBufPlanesEmiRKNS_5MSizeE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy27makePolicy_FDIntent_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_FDIntent_Default() */
int _ZN5NSCam2v38pipeline6policy27makePolicy_FDIntent_DefaultEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy28makePolicy_Topology_MulticamEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Topology_Multicam() */
int _ZN5NSCam2v38pipeline6policy28makePolicy_Topology_MulticamEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject8getAEIsoEi */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::getAEIso(int) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject8getAEIsoEi(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperC1ERKNSt3__16vectorIiNS5_9allocatorIiEEEE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::DeviceInfoHelper(std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperC1ERKNSt3__16vectorIiNS5_9allocatorIiEEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam6MSizeFEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam6MSizeFEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperENS_14default_deleteIS6_EENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper*, std::__1::default_delete<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper>, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperENS_14default_deleteIS6_EENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTV36RequestSettingPolicyMediator_Default */
/* Demangled: vtable for RequestSettingPolicyMediator_Default */
extern void* _ZTV36RequestSettingPolicyMediator_Default;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata39RequestMetadataPolicy_AppRaw16ReprocessENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_AppRaw16Reprocess, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_AppRaw16Reprocess> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata39RequestMetadataPolicy_AppRaw16ReprocessENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject11getAELv_x10Ei */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::getAELv_x10(int) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject11getAELv_x10Ei(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorD1Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior::~Sync3ABehavior() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorD1Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerD2Ev */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::~SensorControllerBehaviorManager() */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerD2Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorENS_9allocatorIS6_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy46makePolicy_Configuration_StreamInfo_P1_DefaultEv */
/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_StreamInfo_P1_Default() */
int _ZN5NSCam2v38pipeline6policy46makePolicy_Configuration_StreamInfo_P1_DefaultEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata39RequestMetadataPolicy_AppRaw16ReprocessENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_AppRaw16Reprocess, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_AppRaw16Reprocess> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata39RequestMetadataPolicy_AppRaw16ReprocessENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamE */
/* Demangled: vtable for NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam */
extern void* _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::MRect> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertC1ERNSt3__16vectorIiNS5_9allocatorIiEEEERNS6_IjNS7_IjEEEE */
/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DomainConvert::DomainConvert(std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertC1ERNSt3__16vectorIiNS5_9allocatorIiEEEERNS6_IjNS7_IjEEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE6rehashEm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16SensorStaticInfoENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::SensorStaticInfo, std::__1::allocator<NSCam::SensorStaticInfo> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16SensorStaticInfoENS_9allocatorIS2_EEEE;

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_PIPELINEPOLICY_H */
