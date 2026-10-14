/*
 * Reverse-Engineered Source for: libmtkcam_pipelinepolicy.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_pipelinepolicy"

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
#include "libmtkcam_pipelinepolicy.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: std::__1::__shared_ptr_emplace<ConfigSettingPolicyMediator_Default, std::__1::allocator<ConfigSettingPolicyMediator_Default> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI35ConfigSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI35ConfigSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::~RequestSensorControlPolicy_Multicam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::getSensorIndexBySensorId(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN42RequestSettingPolicyMediator_Multicam_Zoom24getSensorIndexBySensorIdEjRj(void) {
    ALOGD("_ZN42RequestSettingPolicyMediator_Multicam_Zoom24getSensorIndexBySensorIdEjRj() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet> > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::MRect, std::__1::allocator<NSCam::MRect> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam5MRectENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam5MRectENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_Default::RequestSettingPolicyMediator_Default(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN36RequestSettingPolicyMediator_DefaultC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void) {
    ALOGD("_ZN36RequestSettingPolicyMediator_DefaultC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::NSPipelineContext::NodeEdge> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEEE = NULL;

/* Exported Object: vtable for NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplE = NULL;

/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::evaluateRequest(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams&, NSCam::v3::pipeline::policy::pipelinesetting::RequestInputParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN42RequestSettingPolicyMediator_Multicam_Zoom15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE(void) {
    ALOGD("_ZN42RequestSettingPolicyMediator_Multicam_Zoom15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior::~MetadataBehavior() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorD2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::sendPolicyDataCallback(unsigned long, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam22sendPolicyDataCallbackEmmm(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam22sendPolicyDataCallbackEmmm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11SensorStateEEENS_22__unordered_map_hasherIjS9_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS9_NS_8equal_toIjEELb1EEENS_9allocatorIS9_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11SensorStateEEENS_22__unordered_map_hasherIjS9_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS9_NS_8equal_toIjEELb1EEENS_9allocatorIS9_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper*, std::__1::default_delete<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper>, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperENS_14default_deleteIS6_EENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperENS_14default_deleteIS6_EENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo, std::__1::allocator<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoENS_9allocatorIS6_EEEE = NULL;

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::IOMapSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext8IOMapSetE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior::getSensorCropRect(int, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&, NSCam::MRect&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior17getSensorCropRectEiRKNS3_16BehaviorUserDataERNS_5MRectE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior17getSensorCropRectEiRKNS3_16BehaviorUserDataERNS_5MRectE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior::~SensorCropBehavior() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorENS_9allocatorIS6_EEEE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_Default, std::__1::allocator<RequestSettingPolicyMediator_Default> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI36RequestSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI36RequestSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: makeRequestSettingPolicyMediator_Multicam_Zoom(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _Z46makeRequestSettingPolicyMediator_Multicam_ZoomRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void) {
    ALOGD("_Z46makeRequestSettingPolicyMediator_Multicam_ZoomRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DomainConvert::~DomainConvert() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN6NS3Av314DualZoomInfo_TEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN6NS3Av314DualZoomInfo_TEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::queryBaseBufNum(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder15queryBaseBufNumEPKc(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder15queryBaseBufNumEPKc() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DomainConvert::DomainConvert(std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertC2ERNSt3__16vectorIiNS5_9allocatorIiEEEERNS6_IjNS7_IjEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertC2ERNSt3__16vectorIiNS5_9allocatorIiEEEERNS6_IjNS7_IjEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorStateManager(std::__1::vector<int, std::__1::allocator<int> > const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerC2ERKNSt3__16vectorIiNS5_9allocatorIiEEEEjj(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerC2ERKNSt3__16vectorIiNS5_9allocatorIiEEEEjj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_SensorSetting_4Cell() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy44makePolicy_Configuration_SensorSetting_4CellEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy44makePolicy_Configuration_SensorSetting_4CellEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_() called");
    return 0;
}

/* Exported Object: vtable for RequestSettingPolicyMediator_PDE */
extern "C" __attribute__((visibility("default"))) void* _ZTV32RequestSettingPolicyMediator_PDE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior::~FrameSyncBehavior() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorD2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<ConfigSettingPolicyMediator_Default, std::__1::allocator<ConfigSettingPolicyMediator_Default> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI35ConfigSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI35ConfigSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode> > >::__emplace_unique_key_args<NSCam::v3::pipeline::policy::eMode, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode&&>, std::__1::tuple<> >(NSCam::v3::pipeline::policy::eMode const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::v3::pipeline::policy::P1HwSetting, std::__1::allocator<NSCam::v3::pipeline::policy::P1HwSetting> >::__push_back_slow_path<NSCam::v3::pipeline::policy::P1HwSetting const&>(NSCam::v3::pipeline::policy::P1HwSetting const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy11P1HwSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline6policy11P1HwSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::update() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject6updateEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject6updateEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::updatePhysicalSensorFov(int, std::__1::shared_ptr<NSCam::MSizeF>&, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper23updatePhysicalSensorFovEiRNSt3__110shared_ptrINS_6MSizeFEEERNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper23updatePhysicalSensorFovEiRNSt3__110shared_ptrINS_6MSizeFEEERNS_9IMetadataE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN6NS3Av314DualZoomInfo_TEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN6NS3Av314DualZoomInfo_TEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, std::__1::shared_ptr<NS3Av3::IHal3A> > >(int const&, std::__1::pair<int const, std::__1::shared_ptr<NS3Av3::IHal3A> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN6NS3Av36IHal3AEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN6NS3Av36IHal3AEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_Default::evaluateRequest(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams&, NSCam::v3::pipeline::policy::pipelinesetting::RequestInputParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN36RequestSettingPolicyMediator_Default15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE(void) {
    ALOGD("_ZN36RequestSettingPolicyMediator_Default15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> const&>(std::__1::shared_ptr<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_Default, std::__1::allocator<RequestSettingPolicyMediator_Default> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceI36RequestSettingPolicyMediator_DefaultNS_9allocatorIS1_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::get3AData(int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam9get3ADataEiRNSt3__110shared_ptrINS2_13sensorcontrol17SensorControlInfoEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam9get3ADataEiRNSt3__110shared_ptrINS2_13sensorcontrol17SensorControlInfoEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::SensorParams, std::__1::allocator<NSCam::v3::pipeline::policy::SensorParams> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy12SensorParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy12SensorParamsENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default::evaluateRequest(NSCam::v3::pipeline::policy::requestmetadata::EvaluateRequestParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_Default15evaluateRequestERKNS3_21EvaluateRequestParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_Default15evaluateRequestERKNS3_21EvaluateRequestParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump::RequestMetadataPolicy_DebugDump(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpC2ERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpC2ERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject*, std::__1::default_delete<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject>, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectENS_14default_deleteIS6_EENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectENS_14default_deleteIS6_EENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: makeRequestSettingPolicyMediator_PDE(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _Z36makeRequestSettingPolicyMediator_PDERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void) {
    ALOGD("_Z36makeRequestSettingPolicyMediator_PDERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default::RequestMetadataPolicy_Default(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultC1ERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultC1ERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::updateFeaturePolicy(std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::IFeatureSettingPolicy>, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN42RequestSettingPolicyMediator_Multicam_Zoom19updateFeaturePolicyENSt3__110shared_ptrIN5NSCam2v38pipeline6policy14featuresetting21IFeatureSettingPolicyEEERNS6_19RequestOutputParamsERNS6_18RequestInputParamsEj(void) {
    ALOGD("_ZN42RequestSettingPolicyMediator_Multicam_Zoom19updateFeaturePolicyENSt3__110shared_ptrIN5NSCam2v38pipeline6policy14featuresetting21IFeatureSettingPolicyEEERNS6_19RequestOutputParamsERNS6_18RequestInputParamsEj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::queryMinBufNum(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder14queryMinBufNumEPKc(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder14queryMinBufNumEPKc() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::selectNeedOfflineFromList(NSCam::v3::pipeline::policy::requestsensorcontrol::ParsedSensorStateResult&, std::__1::unordered_map<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager25selectNeedOfflineFromListERNS3_23ParsedSensorStateResultERNSt3__113unordered_mapIjNS2_13sensorcontrol12SensorStatusENS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjSA_EEEEEERKNS7_6vectorIjNSF_IjEEEERj(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager25selectNeedOfflineFromListERNS3_23ParsedSensorStateResultERNSt3__113unordered_mapIjNS2_13sensorcontrol12SensorStatusENS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjSA_EEEEEERKNS7_6vectorIjNSF_IjEEEERj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::hash<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_IOMap_NonP2Node_HalJpeg(std::__1::function<int (NSCam::v3::pipeline::policy::iomap::RequestOutputParams const&, NSCam::v3::pipeline::policy::iomap::RequestInputParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy34makePolicy_IOMap_NonP2Node_HalJpegENSt3__18functionIFiRKNS2_5iomap19RequestOutputParamsERKNS5_18RequestInputParamsEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy34makePolicy_IOMap_NonP2Node_HalJpegENSt3__18functionIFiRKNS2_5iomap19RequestOutputParamsERKNS5_18RequestInputParamsEEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior::~IspBehavior() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorD2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior::update(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_P2NodeDecision_AppRaw16Reprocess(std::__1::function<int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy43makePolicy_P2NodeDecision_AppRaw16ReprocessENSt3__18functionIFiRNS2_14p2nodedecision19RequestOutputParamsERKNS5_18RequestInputParamsEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy43makePolicy_P2NodeDecision_AppRaw16ReprocessENSt3__18functionIFiRNS2_14p2nodedecision19RequestOutputParamsERKNS5_18RequestInputParamsEEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7NSCamHW16simplifiedMatrixEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7NSCamHW16simplifiedMatrixEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::~SensorStateManager() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::NSPipelineContext::IOMap> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEEE = NULL;

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> const&>(std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam6MSizeFEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam6MSizeFEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> >(unsigned int const&, std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Exported Object: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::kIsLowRam */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder9kIsLowRamE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::SensorControllerBehaviorManager(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerC1Ei(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerC1Ei() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::RequestSensorControlPolicy_Multicam(NSCam::v3::pipeline::policy::requestsensorcontrol::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamC1ERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamC1ERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Lcso_Default(int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Lcso_DefaultEim(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Lcso_DefaultEim() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::Hal3AObject(std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectC2ERKNSt3__16vectorIiNS5_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectC2ERKNSt3__16vectorIiNS5_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::~Hal3AObject() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectD2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::~DeviceInfoHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::update(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut const&, NSCam::v3::pipeline::policy::requestsensorcontrol::ParsedSensorStateResult&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager6updateERKNS2_13sensorcontrol21SensorControlParamOutERNS3_23ParsedSensorStateResultE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager6updateERKNS2_13sensorcontrol21SensorControlParamOutERNS3_23ParsedSensorStateResultE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::evaluateRequest(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::RequestInputParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam15evaluateRequestERNS3_19RequestOutputParamsERKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam15evaluateRequestERNS3_19RequestOutputParamsERKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorE = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::makePolicy_RequestMetadata_HalJpeg(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata34makePolicy_RequestMetadata_HalJpegERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata34makePolicy_RequestMetadata_HalJpegERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::getSensorOnlineState(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager20getSensorOnlineStateEj(void) {
    ALOGD("_ZNK5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager20getSensorOnlineStateEj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::IMetadata> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, std::__1::shared_ptr<NSCam::IMetadata> > >(int const&, std::__1::pair<int const, std::__1::shared_ptr<NSCam::IMetadata> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: makeRequestSettingPolicyMediator_Default(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _Z40makeRequestSettingPolicyMediator_DefaultRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void) {
    ALOGD("_Z40makeRequestSettingPolicyMediator_DefaultRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_Default, std::__1::allocator<RequestSettingPolicyMediator_Default> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI36RequestSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI36RequestSettingPolicyMediator_DefaultNS_9allocatorIS1_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_P2NodeDecision_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy33makePolicy_P2NodeDecision_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy33makePolicy_P2NodeDecision_DefaultEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::~RequestSensorControlPolicy_Multicam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamD0Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamD0Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::MRect>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::MRect> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::MRect> >(unsigned int const&, std::__1::pair<unsigned int const, NSCam::MRect>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam5MRectEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam5MRectEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode> > >::__emplace_unique_key_args<NSCam::v3::pipeline::policy::eMode, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode const&>, std::__1::tuple<> >(NSCam::v3::pipeline::policy::eMode const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJRKS6_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJRKS6_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::updateOnlineSensorResult(NSCam::v3::pipeline::policy::requestsensorcontrol::ParsedSensorStateResult&, std::__1::unordered_map<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager24updateOnlineSensorResultERNS3_23ParsedSensorStateResultERKNSt3__113unordered_mapIjNS2_13sensorcontrol12SensorStatusENS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjSA_EEEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager24updateOnlineSensorResultERNS3_23ParsedSensorStateResultERKNSt3__113unordered_mapIjNS2_13sensorcontrol12SensorStatusENS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjSA_EEEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__append(unsigned long, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEmRKj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEmRKj() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper*, std::__1::default_delete<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper>, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperENS_14default_deleteIS6_EENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::getMasterId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11getMasterIdEv(void) {
    ALOGD("_ZNK5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11getMasterIdEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Rrzo_Default(unsigned long, NSCam::v3::pipeline::policy::P1HwSetting const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rrzo_DefaultEmRKNS2_11P1HwSettingE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rrzo_DefaultEmRKNS2_11P1HwSettingE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior::~MetadataBehavior() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorD0Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Set<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v33SetIlEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_PDE, std::__1::allocator<RequestSettingPolicyMediator_PDE> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceI32RequestSettingPolicyMediator_PDENS_9allocatorIS1_EEEE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior::~SensorCropBehavior() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorD0Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorD0Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >::__emplace_unique_key_args<int, std::__1::pair<int const, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> >(int const&, std::__1::pair<int const, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> > >(int const&, std::__1::pair<int const, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS9_EEEEENSN_INS_15__hash_iteratorIPNS_11__hash_nodeISA_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS9_EEEEENSN_INS_15__hash_iteratorIPNS_11__hash_nodeISA_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::makePolicy_RequestMetadata_Default(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata34makePolicy_RequestMetadata_DefaultERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata34makePolicy_RequestMetadata_DefaultERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::DeviceInfoHelper(std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperC2ERKNSt3__16vectorIiNS5_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperC2ERKNSt3__16vectorIiNS5_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::switchSensorDone() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager16switchSensorDoneEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager16switchSensorDoneEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorE = NULL;

/* Demangled: android::Vector<long>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::evaluateRequest(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams&, NSCam::v3::pipeline::policy::pipelinesetting::RequestInputParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl15evaluateRequestERNS3_19RequestOutputParamsERKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl15evaluateRequestERNS3_19RequestOutputParamsERKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_Default::RequestSettingPolicyMediator_Default(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN36RequestSettingPolicyMediator_DefaultC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void) {
    ALOGD("_ZN36RequestSettingPolicyMediator_DefaultC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long const&>(long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting> > >::__emplace_unique_key_args<NSCam::v3::pipeline::policy::eMode, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode const&>, std::__1::tuple<> >(NSCam::v3::pipeline::policy::eMode const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJRKS6_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJRKS6_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::isSensorSwitchGoing() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager19isSensorSwitchGoingEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager19isSensorSwitchGoingEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::getSensorState(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager14getSensorStateEj(void) {
    ALOGD("_ZNK5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager14getSensorStateEj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior::~Sync3ABehavior() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorD2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::getPhysicalSensorFullSize(int, NSCam::MSize&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper25getPhysicalSensorFullSizeEiRNS_5MSizeE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper25getPhysicalSensorFullSizeEiRNS_5MSizeE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior::~FrameSyncBehavior() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorD0Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11SensorStateEEENS_22__unordered_map_hasherIjS9_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS9_NS_8equal_toIjEELb1EEENS_9allocatorIS9_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11SensorStateEEENS_22__unordered_map_hasherIjS9_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS9_NS_8equal_toIjEELb1EEENS_9allocatorIS9_EEE6rehashEm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::MRect, std::__1::allocator<NSCam::MRect> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam5MRectENS_9allocatorIS2_EEEE = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::P1MetaStreamInfoBuilder::setP1HalMetaControl_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy23P1MetaStreamInfoBuilder27setP1HalMetaControl_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy23P1MetaStreamInfoBuilder27setP1HalMetaControl_DefaultEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::__push_back_slow_path<unsigned long>(unsigned long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_AppImageStreamInfoMaxBufNum_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy60makePolicy_Configuration_AppImageStreamInfoMaxBufNum_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy60makePolicy_Configuration_AppImageStreamInfoMaxBufNum_DefaultEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&), std::__1::allocator<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>, int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_IOMap_NonP2Node_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy34makePolicy_IOMap_NonP2Node_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy34makePolicy_IOMap_NonP2Node_DefaultEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&), std::__1::allocator<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>, int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>::__clone(std::__1::__function::__base<int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::getSensorData(int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam13getSensorDataEiRNSt3__110shared_ptrINS2_13sensorcontrol17SensorControlInfoEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam13getSensorDataEiRNSt3__110shared_ptrINS2_13sensorcontrol17SensorControlInfoEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::MRect> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam5MRectEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam5MRectEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo, std::__1::allocator<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_IOMap_P2Node_multicam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy32makePolicy_IOMap_P2Node_multicamEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy32makePolicy_IOMap_P2Node_multicamEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default::RequestMetadataPolicy_Default(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultC2ERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultC2ERKNS3_14CreationParamsE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::SensorParams, std::__1::allocator<NSCam::v3::pipeline::policy::SensorParams> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy12SensorParamsENS_9allocatorIS5_EEEE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix> > >::__emplace_unique_key_args<int, std::__1::pair<int const, NSCamHW::simplifiedMatrix> >(int const&, std::__1::pair<int const, NSCamHW::simplifiedMatrix>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7NSCamHW16simplifiedMatrixEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7NSCamHW16simplifiedMatrixEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, std::__1::shared_ptr<NSCam::MSizeF> > >(int const&, std::__1::pair<int const, std::__1::shared_ptr<NSCam::MSizeF> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam6MSizeFEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam6MSizeFEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: ConfigSettingPolicyMediator_Default::ConfigSettingPolicyMediator_Default(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN35ConfigSettingPolicyMediator_DefaultC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void) {
    ALOGD("_ZN35ConfigSettingPolicyMediator_DefaultC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorENS_9allocatorIS6_EEEE = NULL;

/* Demangled: android::Vector<long>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::RequestSettingPolicyMediator_Multicam_Zoom(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN42RequestSettingPolicyMediator_Multicam_ZoomC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void) {
    ALOGD("_ZN42RequestSettingPolicyMediator_Multicam_ZoomC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_SensorSetting_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy46makePolicy_Configuration_SensorSetting_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy46makePolicy_Configuration_SensorSetting_DefaultEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_StreamInfo_NonP1_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy49makePolicy_Configuration_StreamInfo_NonP1_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy49makePolicy_Configuration_StreamInfo_NonP1_DefaultEv() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_PDE::RequestSettingPolicyMediator_PDE(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN32RequestSettingPolicyMediator_PDEC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void) {
    ALOGD("_ZN32RequestSettingPolicyMediator_PDEC1ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Imgo_Default(unsigned long, NSCam::v3::pipeline::policy::P1HwSetting const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Imgo_DefaultEmRKNS2_11P1HwSettingE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Imgo_DefaultEmRKNS2_11P1HwSettingE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DomainConvert::~DomainConvert() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1ScaledYuv_Default(NSCam::v3::pipeline::policy::P1HwSetting const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder22setP1ScaledYuv_DefaultERKNS2_11P1HwSettingE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder22setP1ScaledYuv_DefaultERKNS2_11P1HwSettingE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_StreamInfo_NonP1_Multicam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy50makePolicy_Configuration_StreamInfo_NonP1_MulticamEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy50makePolicy_Configuration_StreamInfo_NonP1_MulticamEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior::~IspBehavior() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorD0Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::getDecisionResult(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut&, NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamIn&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam17getDecisionResultERNS2_13sensorcontrol21SensorControlParamOutERNS5_20SensorControlParamInE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam17getDecisionResultERNS2_13sensorcontrol21SensorControlParamOutERNS5_20SensorControlParamInE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Rrzo_Default(NSCam::v3::pipeline::policy::P1HwSetting const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rrzo_DefaultERKNS2_11P1HwSettingE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rrzo_DefaultERKNS2_11P1HwSettingE() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::SEN_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::SEN_INFO> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::SEN_INFO const&>(NSCam::NSIoPipe::NSCamIOPipe::SEN_INFO const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe8SEN_INFOENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe8SEN_INFOENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCam::MRect>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::MRect> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior::updateMasterSlaveTag(NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&, NSCam::IMetadata::IEntry&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior20updateMasterSlaveTagERKNS3_16BehaviorUserDataERNS_9IMetadata6IEntryE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior20updateMasterSlaveTagERKNS3_16BehaviorUserDataERNS_9IMetadata6IEntryE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::SensorStaticInfo, std::__1::allocator<NSCam::SensorStaticInfo> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16SensorStaticInfoENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16SensorStaticInfoENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo, std::__1::allocator<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::setSensorState(unsigned int&, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorStateType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager14setSensorStateERjNS4_15SensorStateTypeE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager14setSensorStateERjNS4_15SensorStateTypeE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::PipelineSettingPolicyImpl(NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplC1ERKNS4_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplC1ERKNS4_14CreationParamsE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::hash<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::v3::pipeline::policy::ParsedStreamInfo_P1, std::__1::allocator<NSCam::v3::pipeline::policy::ParsedStreamInfo_P1> >::__push_back_slow_path<NSCam::v3::pipeline::policy::ParsedStreamInfo_P1>(NSCam::v3::pipeline::policy::ParsedStreamInfo_P1&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy19ParsedStreamInfo_P1ENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline6policy19ParsedStreamInfo_P1ENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_StreamInfo_NonP1_HalJpeg(std::__1::function<int (NSCam::v3::pipeline::policy::Configuration_StreamInfo_NonP1_Params const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy49makePolicy_Configuration_StreamInfo_NonP1_HalJpegENSt3__18functionIFiRKNS2_37Configuration_StreamInfo_NonP1_ParamsEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy49makePolicy_Configuration_StreamInfo_NonP1_HalJpegENSt3__18functionIFiRKNS2_37Configuration_StreamInfo_NonP1_ParamsEEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_DefaultENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DomainConvert::buildTransformMatrix(std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvert20buildTransformMatrixERNSt3__16vectorIiNS5_9allocatorIiEEEERNS6_IjNS7_IjEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvert20buildTransformMatrixERNSt3__16vectorIiNS5_9allocatorIiEEEERNS6_IjNS7_IjEEEE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__construct_node_hash<unsigned int const&, std::__1::vector<long, std::__1::allocator<long> >&>(unsigned long, unsigned int const&, std::__1::vector<long, std::__1::allocator<long> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRKjJRS5_EEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISO_EEEEEEmOT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRKjJRS5_EEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISO_EEEEEEmOT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__emplace_unique_key_args<unsigned int, unsigned int&, std::__1::vector<long, std::__1::allocator<long> >&>(unsigned int const&, unsigned int&, std::__1::vector<long, std::__1::allocator<long> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRjRS5_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRjRS5_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior::update(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: NSCam::v3::pipeline::policy::kModeNames */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam2v38pipeline6policy10kModeNamesE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_PDE, std::__1::allocator<RequestSettingPolicyMediator_PDE> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI32RequestSettingPolicyMediator_PDENS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI32RequestSettingPolicyMediator_PDENS_9allocatorIS1_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for RequestSettingPolicyMediator_Multicam_Zoom */
extern "C" __attribute__((visibility("default"))) void* _ZTV42RequestSettingPolicyMediator_Multicam_Zoom = NULL;

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::hash<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::equal_to<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> > > >::__emplace_unique_key_args<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::pair<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR const, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> > >(NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR const&, std::__1::pair<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR const, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager8BEHAVIORENS_10shared_ptrINS6_25ISensorControllerBehaviorEEEEENS_22__unordered_map_hasherIS8_SC_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SC_NS_8equal_toIS8_EELb1EEENS_9allocatorISC_EEE25__emplace_unique_key_argsIS8_JNS_4pairIKS8_SB_EEEEENSP_INS_15__hash_iteratorIPNS_11__hash_nodeISC_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager8BEHAVIORENS_10shared_ptrINS6_25ISensorControllerBehaviorEEEEENS_22__unordered_map_hasherIS8_SC_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SC_NS_8equal_toIS8_EELb1EEENS_9allocatorISC_EEE25__emplace_unique_key_argsIS8_JNS_4pairIKS8_SB_EEEEENSP_INS_15__hash_iteratorIPNS_11__hash_nodeISC_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NS3Av3::DualZoomInfo_T> > >::__emplace_unique_key_args<int, std::__1::pair<int const, NS3Av3::DualZoomInfo_T> >(int const&, std::__1::pair<int const, NS3Av3::DualZoomInfo_T>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN6NS3Av314DualZoomInfo_TEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN6NS3Av314DualZoomInfo_TEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_P1DmaNeed_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy42makePolicy_Configuration_P1DmaNeed_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy42makePolicy_Configuration_P1DmaNeed_DefaultEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior::setSensorCropToMetadata(int, NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::MRect&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior23setSensorCropToMetadataEiRNS3_19RequestOutputParamsERNS_5MRectE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior23setSensorCropToMetadataEiRNS3_19RequestOutputParamsERNS_5MRectE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_Multicam_Zoom, std::__1::allocator<RequestSettingPolicyMediator_Multicam_Zoom> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI42RequestSettingPolicyMediator_Multicam_ZoomNS_9allocatorIS1_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI42RequestSettingPolicyMediator_Multicam_ZoomNS_9allocatorIS1_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > >(unsigned int const&, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS5_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS5_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&), std::__1::allocator<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>, int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet>, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, NSCam::v3::NSPipelineContext::IOMapSet> > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long const&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJRKlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN5NSCam2v317NSPipelineContext8IOMapSetEEENS_22__unordered_map_hasherIlS6_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS6_NS_8equal_toIlEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJRKlEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, std::__1::shared_ptr<NSCam::SensorStaticInfo> > >(int const&, std::__1::pair<int const, std::__1::shared_ptr<NSCam::SensorStaticInfo> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::MSizeF, std::__1::allocator<NSCam::MSizeF> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam6MSizeFENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam6MSizeFENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg::evaluateRequest(NSCam::v3::pipeline::policy::requestmetadata::EvaluateRequestParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpeg15evaluateRequestERKNS3_21EvaluateRequestParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpeg15evaluateRequestERKNS3_21EvaluateRequestParamsE() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::updateSlavePolicy(unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams&, unsigned int, std::__1::unordered_map<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN42RequestSettingPolicyMediator_Multicam_Zoom17updateSlavePolicyEjRN5NSCam2v38pipeline6policy14featuresetting18RequestInputParamsEjRNSt3__113unordered_mapIjNS4_19RequestOutputParamsENS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjS9_EEEEEE(void) {
    ALOGD("_ZN42RequestSettingPolicyMediator_Multicam_Zoom17updateSlavePolicyEjRN5NSCam2v38pipeline6policy14featuresetting18RequestInputParamsEjRNSt3__113unordered_mapIjNS4_19RequestOutputParamsENS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjS9_EEEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::v3::pipeline::policy::BoostControl, std::__1::allocator<NSCam::v3::pipeline::policy::BoostControl> >::__append(unsigned long, NSCam::v3::pipeline::policy::BoostControl const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE8__appendEmRKS5_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE8__appendEmRKS5_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_Multicam_Zoom, std::__1::allocator<RequestSettingPolicyMediator_Multicam_Zoom> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceI42RequestSettingPolicyMediator_Multicam_ZoomNS_9allocatorIS1_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_CaptureStreamUpdater_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy39makePolicy_CaptureStreamUpdater_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy39makePolicy_CaptureStreamUpdater_DefaultEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCamHW::HwInfoHelper, std::__1::allocator<NSCamHW::HwInfoHelper> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg::RequestMetadataPolicy_HalJpeg(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegC1ERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegC1ERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN6NS3Av36IHal3AEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN6NS3Av36IHal3AEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject*, std::__1::default_delete<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject>, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectENS_14default_deleteIS6_EENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectENS_14default_deleteIS6_EENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__emplace_unique_key_args<long, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>, std::__1::tuple<> >(long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIlJRKNS_21piecewise_construct_tENS_5tupleIJOlEEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::SensorParams> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::SensorParams> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::SensorParams> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::SensorParams> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline6policy12SensorParamsEEEEENS_19__map_value_compareIjS9_NS_4lessIjEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjNS_10shared_ptrIN5NSCam2v38pipeline6policy12SensorParamsEEEEENS_19__map_value_compareIjS9_NS_4lessIjEELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_AppImageStreamInfoMaxBufNum_SMVR() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy57makePolicy_Configuration_AppImageStreamInfoMaxBufNum_SMVREv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy57makePolicy_Configuration_AppImageStreamInfoMaxBufNum_SMVREv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::IMetadata> >(std::__1::shared_ptr<NSCam::IMetadata>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCam::MRect>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::MRect> > >::__emplace_unique_key_args<int, int&, NSCam::MRect&>(int const&, int&, NSCam::MRect&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRiRS3_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRiRS3_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior::update(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::setSwitchGoingFlag(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager18setSwitchGoingFlagEb(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager18setSwitchGoingFlagEb() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NS3Av3::IHal3A> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN6NS3Av36IHal3AEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN6NS3Av36IHal3AEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<ConfigSettingPolicyMediator_Default, std::__1::allocator<ConfigSettingPolicyMediator_Default> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceI35ConfigSettingPolicyMediator_DefaultNS_9allocatorIS1_EEEE = NULL;

/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata> > >::__append(unsigned long, std::__1::shared_ptr<NSCam::IMetadata> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE8__appendEmRKS4_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE8__appendEmRKS4_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::hash<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE6rehashEm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::SensorControllerBehaviorManager(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerC2Ei(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerC2Ei() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, std::__1::shared_ptr<NSCam::MRect> > >(int const&, std::__1::pair<int const, std::__1::shared_ptr<NSCam::MRect> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::SensorSetting> > >::__emplace_unique_key_args<NSCam::v3::pipeline::policy::eMode, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode&&>, std::__1::tuple<> >(NSCam::v3::pipeline::policy::eMode const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior::~Sync3ABehavior() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorD0Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::~DeviceInfoHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperD2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::~SensorControllerBehaviorManager() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::hash<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::equal_to<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager8BEHAVIORENS_10shared_ptrINS6_25ISensorControllerBehaviorEEEEENS_22__unordered_map_hasherIS8_SC_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SC_NS_8equal_toIS8_EELb1EEENS_9allocatorISC_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager8BEHAVIORENS_10shared_ptrINS6_25ISensorControllerBehaviorEEEEENS_22__unordered_map_hasherIS8_SC_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SC_NS_8equal_toIS8_EELb1EEENS_9allocatorISC_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIlE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IImageStreamInfo>::operator=(android::sp<NSCam::v3::IImageStreamInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSERKS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSERKS4_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long>(long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__push_back_slow_path<NSCam::BufPlane const&>(NSCam::BufPlane const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::~RequestSensorControlPolicy_Multicam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::MRect>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::MRect> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam5MRectEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam5MRectEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::SensorStaticInfo, std::__1::allocator<NSCam::SensorStaticInfo> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16SensorStaticInfoENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16SensorStaticInfoENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_PipelineNodesNeed_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy50makePolicy_Configuration_PipelineNodesNeed_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy50makePolicy_Configuration_PipelineNodesNeed_DefaultEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::SensorParams, std::__1::allocator<NSCam::v3::pipeline::policy::SensorParams> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy12SensorParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy12SensorParamsENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::hash<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof> > >::__emplace_unique_key_args<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode_vsdof&&>, std::__1::tuple<> >(NSCam::v3::pipeline::policy::eMode_vsdof const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode_vsdof&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__push_back_slow_path<NSCam::BufPlane>(NSCam::BufPlane&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_AppRaw16Reprocess */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy15requestmetadata39RequestMetadataPolicy_AppRaw16ReprocessE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DomainConvert::convertToTgDomain(int, NSCam::MRect&, NSCam::MRect&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvert17convertToTgDomainEiRNS_5MRectES6_(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvert17convertToTgDomainEiRNS_5MRectES6_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::update(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::MSizeF, std::__1::allocator<NSCam::MSizeF> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam6MSizeFENS_9allocatorIS2_EEEE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::__unordered_map_hasher<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::hash<long>, true>, std::__1::__unordered_map_equal<long, std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> >, std::__1::equal_to<long>, true>, std::__1::allocator<std::__1::__hash_value_type<long, android::sp<NSCam::v3::IImageStreamInfo> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIlN7android2spIN5NSCam2v316IImageStreamInfoEEEEENS_22__unordered_map_hasherIlS8_NS_4hashIlEELb1EEENS_21__unordered_map_equalIlS8_NS_8equal_toIlEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__emplace_unique_key_args<unsigned int, unsigned int const&, NSCam::v3::Utils::MetaStreamInfo*>(unsigned int const&, unsigned int const&, NSCam::v3::Utils::MetaStreamInfo*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIjJRKjPNS5_5Utils14MetaStreamInfoEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIjJRKjPNS5_5Utils14MetaStreamInfoEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump::evaluateRequest(NSCam::v3::pipeline::policy::requestmetadata::EvaluateRequestParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDump15evaluateRequestERKNS3_21EvaluateRequestParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDump15evaluateRequestERKNS3_21EvaluateRequestParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior::updateSensorCrop(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior16updateSensorCropERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehavior16updateSensorCropERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::MSize, std::__1::allocator<NSCam::MSize> >::__push_back_slow_path<NSCam::MSize const&>(NSCam::MSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::hash<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::SensorSetting> > >::__emplace_unique_key_args<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode_vsdof&&>, std::__1::tuple<> >(NSCam::v3::pipeline::policy::eMode_vsdof const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::v3::pipeline::policy::eMode_vsdof&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofENS5_13SensorSettingEEENS_22__unordered_map_hasherIS6_S8_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S8_NS_8equal_toIS6_EELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIS6_JRKNS_21piecewise_construct_tENS_5tupleIJOS6_EEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior::~MetadataBehavior() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_Multicam_Zoom, std::__1::allocator<RequestSettingPolicyMediator_Multicam_Zoom> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI42RequestSettingPolicyMediator_Multicam_ZoomNS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI42RequestSettingPolicyMediator_Multicam_ZoomNS_9allocatorIS1_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior::~SensorCropBehavior() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::is2ASyncReady(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject13is2ASyncReadyEi(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject13is2ASyncReadyEi() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::PipelineSettingPolicyImpl(NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplC2ERKNS4_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImplC2ERKNS4_14CreationParamsE() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::makePolicy_RequestSensorControl_Multicam_Zoom(NSCam::v3::pipeline::policy::requestsensorcontrol::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol45makePolicy_RequestSensorControl_Multicam_ZoomERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol45makePolicy_RequestSensorControl_Multicam_ZoomERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState> >(unsigned int const&, std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorState>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11SensorStateEEENS_22__unordered_map_hasherIjS9_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS9_NS_8equal_toIjEELb1EEENS_9allocatorIS9_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS8_EEEEENSM_INS_15__hash_iteratorIPNS_11__hash_nodeIS9_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager11SensorStateEEENS_22__unordered_map_hasherIjS9_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS9_NS_8equal_toIjEELb1EEENS_9allocatorIS9_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS8_EEEEENSM_INS_15__hash_iteratorIPNS_11__hash_nodeIS9_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: ConfigSettingPolicyMediator_Default::ConfigSettingPolicyMediator_Default(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN35ConfigSettingPolicyMediator_DefaultC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void) {
    ALOGD("_ZN35ConfigSettingPolicyMediator_DefaultC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Lcso_Default(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Lcso_DefaultEi(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Lcso_DefaultEi() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1FDYuv_Default(NSCam::v3::pipeline::policy::P1HwSetting const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder18setP1FDYuv_DefaultERKNS2_11P1HwSettingE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder18setP1FDYuv_DefaultERKNS2_11P1HwSettingE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> > > >::__emplace_unique_impl<int const&, NSCam::v3::Utils::MetaStreamInfo*>(int const&, NSCam::v3::Utils::MetaStreamInfo*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE21__emplace_unique_implIJRKiPNS5_5Utils14MetaStreamInfoEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE21__emplace_unique_implIJRKiPNS5_5Utils14MetaStreamInfoEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEEDpOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_P1HwSetting_multicam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy45makePolicy_Configuration_P1HwSetting_multicamEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy45makePolicy_Configuration_P1HwSetting_multicamEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&), std::__1::allocator<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>, int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_E7__cloneEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Topology_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy27makePolicy_Topology_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy27makePolicy_Topology_DefaultEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior::insertSync3ATag(int, bool, bool, NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior15insertSync3ATagEibbRNS3_19RequestOutputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior15insertSync3ATagEibbRNS3_19RequestOutputParamsE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject*, std::__1::default_delete<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject>, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectENS_14default_deleteIS6_EENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::evaluateConfiguration(NSCam::v3::pipeline::policy::pipelinesetting::ConfigurationOutputParams&, NSCam::v3::pipeline::policy::pipelinesetting::ConfigurationInputParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl21evaluateConfigurationERNS3_25ConfigurationOutputParamsERKNS3_24ConfigurationInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl21evaluateConfigurationERNS3_25ConfigurationOutputParamsERKNS3_24ConfigurationInputParamsE() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::RequestSettingPolicyMediator_Multicam_Zoom(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN42RequestSettingPolicyMediator_Multicam_ZoomC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void) {
    ALOGD("_ZN42RequestSettingPolicyMediator_Multicam_ZoomC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_PipelineNodesNeed_HalJpeg(std::__1::function<int (NSCam::v3::pipeline::policy::Configuration_PipelineNodesNeed_Params const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy50makePolicy_Configuration_PipelineNodesNeed_HalJpegENSt3__18functionIFiRKNS2_38Configuration_PipelineNodesNeed_ParamsEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy50makePolicy_Configuration_PipelineNodesNeed_HalJpegENSt3__18functionIFiRKNS2_38Configuration_PipelineNodesNeed_ParamsEEEE() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__construct_node_hash<unsigned int&, std::__1::vector<long, std::__1::allocator<long> >&>(unsigned long, unsigned int&, std::__1::vector<long, std::__1::allocator<long> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRjJRS5_EEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISN_EEEEEEmOT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRjJRS5_EEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISN_EEEEEEmOT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior::~FrameSyncBehavior() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::P1MetaStreamInfoBuilder::setP1AppMetaDynamic_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy23P1MetaStreamInfoBuilder27setP1AppMetaDynamic_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy23P1MetaStreamInfoBuilder27setP1AppMetaDynamic_DefaultEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::policy::P1MetaStreamInfoBuilder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy23P1MetaStreamInfoBuilderE = NULL;

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_PDE::RequestSettingPolicyMediator_PDE(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN32RequestSettingPolicyMediator_PDEC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void) {
    ALOGD("_ZN32RequestSettingPolicyMediator_PDEC2ERKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::sendPolicyDataCallback(NSCam::v3::pipeline::policy::pipelinesetting::PolicyType, unsigned long, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl22sendPolicyDataCallbackENS3_10PolicyTypeEmmm(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl22sendPolicyDataCallbackENS3_10PolicyTypeEmmm() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_PDE::evaluateRequest(NSCam::v3::pipeline::policy::pipelinesetting::RequestOutputParams&, NSCam::v3::pipeline::policy::pipelinesetting::RequestInputParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN32RequestSettingPolicyMediator_PDE15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE(void) {
    ALOGD("_ZN32RequestSettingPolicyMediator_PDE15evaluateRequestERN5NSCam2v38pipeline6policy15pipelinesetting19RequestOutputParamsERKNS4_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<RequestSettingPolicyMediator_PDE, std::__1::allocator<RequestSettingPolicyMediator_PDE> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI32RequestSettingPolicyMediator_PDENS_9allocatorIS1_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI32RequestSettingPolicyMediator_PDENS_9allocatorIS1_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Imgo_Default(NSCam::v3::pipeline::policy::P1HwSetting const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Imgo_DefaultERKNS2_11P1HwSettingE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Imgo_DefaultERKNS2_11P1HwSettingE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_SensorSetting_Vsdof() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy44makePolicy_Configuration_SensorSetting_VsdofEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy44makePolicy_Configuration_SensorSetting_VsdofEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> > > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Request_Topology_HalJpeg(std::__1::function<int (NSCam::v3::pipeline::policy::topology::RequestOutputParams&, NSCam::v3::pipeline::policy::topology::RequestInputParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy35makePolicy_Request_Topology_HalJpegENSt3__18functionIFiRNS2_8topology19RequestOutputParamsERKNS5_18RequestInputParamsEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy35makePolicy_Request_Topology_HalJpegENSt3__18functionIFiRNS2_8topology19RequestOutputParamsERKNS5_18RequestInputParamsEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::isAFSyncDone(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject12isAFSyncDoneEi(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject12isAFSyncDoneEi() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior::update(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior::setFrameSyncToMetadata(int, NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehavior22setFrameSyncToMetadataEiRNS3_19RequestOutputParamsEi(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehavior22setFrameSyncToMetadataEiRNS3_19RequestOutputParamsEi() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::FrameSyncBehavior> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol17FrameSyncBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Rsso_Default(unsigned long, NSCam::v3::pipeline::policy::P1HwSetting const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rsso_DefaultEmRKNS2_11P1HwSettingE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rsso_DefaultEmRKNS2_11P1HwSettingE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::getPolicyData(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamIn&, NSCam::v3::pipeline::policy::requestsensorcontrol::RequestInputParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam13getPolicyDataERNS2_13sensorcontrol20SensorControlParamInERKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam13getPolicyDataERNS2_13sensorcontrol20SensorControlParamInERKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Exported Object: vtable for ConfigSettingPolicyMediator_Default */
extern "C" __attribute__((visibility("default"))) void* _ZTV35ConfigSettingPolicyMediator_Default = NULL;

/* Demangled: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_PipelineNodesNeed_multicam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy51makePolicy_Configuration_PipelineNodesNeed_multicamEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy51makePolicy_Configuration_PipelineNodesNeed_multicamEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEE() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::updateSensorModeToOutFeatureParam(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN42RequestSettingPolicyMediator_Multicam_Zoom33updateSensorModeToOutFeatureParamERN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEjj(void) {
    ALOGD("_ZN42RequestSettingPolicyMediator_Multicam_Zoom33updateSensorModeToOutFeatureParamERN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEjj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::p1DmaOutputQuery(bool&, bool&, bool&, NSCam::v3::pipeline::policy::StreamingFeatureSetting const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy16p1DmaOutputQueryERbS3_S3_PKNS2_23StreamingFeatureSettingE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy16p1DmaOutputQueryERbS3_S3_PKNS2_23StreamingFeatureSettingE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_HalJpeg::RequestMetadataPolicy_HalJpeg(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegC2ERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_HalJpegC2ERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::MRect, std::__1::allocator<NSCam::MRect> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam5MRectENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam5MRectENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::pipelinesetting::PipelineSettingPolicyImpl::decideConfiguredAppImageStreamMaxBufNum(NSCam::v3::pipeline::policy::ParsedAppImageStreamInfo*, NSCam::v3::pipeline::policy::StreamingFeatureSetting const*, NSCam::v3::pipeline::policy::CaptureFeatureSetting const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl39decideConfiguredAppImageStreamMaxBufNumEPNS2_24ParsedAppImageStreamInfoEPKNS2_23StreamingFeatureSettingEPKNS2_21CaptureFeatureSettingE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15pipelinesetting25PipelineSettingPolicyImpl39decideConfiguredAppImageStreamMaxBufNumEPNS2_24ParsedAppImageStreamInfoEPKNS2_23StreamingFeatureSettingEPKNS2_21CaptureFeatureSettingE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&), std::__1::allocator<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>, int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_EE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_Default::evaluateP1YuvCrop(NSCam::v3::pipeline::policy::requestmetadata::EvaluateRequestParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_Default17evaluateP1YuvCropERKNS3_21EvaluateRequestParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata29RequestMetadataPolicy_Default17evaluateP1YuvCropERKNS3_21EvaluateRequestParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::makePolicy_RequestMetadata_AppRaw16Reprocess(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata44makePolicy_RequestMetadata_AppRaw16ReprocessERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata44makePolicy_RequestMetadata_AppRaw16ReprocessERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::updateCacheData(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam15updateCacheDataERNS2_13sensorcontrol21SensorControlParamOutE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam15updateCacheDataERNS2_13sensorcontrol21SensorControlParamOutE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy13sensorcontrol12SensorStatusEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: ConfigSettingPolicyMediator_Default::evaluateConfiguration(NSCam::v3::pipeline::policy::pipelinesetting::ConfigurationOutputParams&, NSCam::v3::pipeline::policy::pipelinesetting::ConfigurationInputParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN35ConfigSettingPolicyMediator_Default21evaluateConfigurationERN5NSCam2v38pipeline6policy15pipelinesetting25ConfigurationOutputParamsERKNS4_24ConfigurationInputParamsE(void) {
    ALOGD("_ZN35ConfigSettingPolicyMediator_Default21evaluateConfigurationERN5NSCam2v38pipeline6policy15pipelinesetting25ConfigurationOutputParamsERKNS4_24ConfigurationInputParamsE() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::MSize, std::__1::allocator<NSCam::MSize> >::__push_back_slow_path<NSCam::MSize>(NSCam::MSize&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5MSizeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::P1MetaStreamInfoBuilder::setP1HalMetaDynamic_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy23P1MetaStreamInfoBuilder27setP1HalMetaDynamic_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy23P1MetaStreamInfoBuilder27setP1HalMetaDynamic_DefaultEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior::update(NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::v3::pipeline::policy::requestsensorcontrol::BehaviorUserData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior6updateERNS3_19RequestOutputParamsERKNS3_16BehaviorUserDataE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIlEE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::sp<NSCam::v3::IMetaStreamInfo> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN7android2spIN5NSCam2v315IMetaStreamInfoEEEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Exported Object: NSCam::v3::pipeline::policy::gP1NodeIdList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam2v38pipeline6policy13gP1NodeIdListE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior::~IspBehavior() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorD1Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::SensorStaticInfo> > > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam16SensorStaticInfoEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::updateBoostControlToOutFeatureParam(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams&, NSCam::v3::pipeline::policy::BoostControl, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN42RequestSettingPolicyMediator_Multicam_Zoom35updateBoostControlToOutFeatureParamERN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsENS3_12BoostControlEj(void) {
    ALOGD("_ZN42RequestSettingPolicyMediator_Multicam_Zoom35updateBoostControlToOutFeatureParamERN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsENS3_12BoostControlEj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_P1HwSetting_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy44makePolicy_Configuration_P1HwSetting_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy44makePolicy_Configuration_P1HwSetting_DefaultEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCamHW::HwInfoHelper, std::__1::allocator<NSCamHW::HwInfoHelper> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::SensorStateManager(std::__1::vector<int, std::__1::allocator<int> > const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerC1ERKNSt3__16vectorIiNS5_9allocatorIiEEEEjj(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerC1ERKNSt3__16vectorIiNS5_9allocatorIiEEEEjj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::~SensorStateManager() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManagerD1Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams> >(unsigned int const&, std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsEEENS_22__unordered_map_hasherIjS8_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS8_NS_8equal_toIjEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_P1DmaNeed_MultiCam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy43makePolicy_Configuration_P1DmaNeed_MultiCamEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy43makePolicy_Configuration_P1DmaNeed_MultiCamEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::getPhysicalSensorActiveArray(int, NSCam::MRect&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper28getPhysicalSensorActiveArrayEiRNS_5MRectE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper28getPhysicalSensorActiveArrayEiRNS_5MRectE() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::combineFeatureParam(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams&, std::__1::unordered_map<unsigned int, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN42RequestSettingPolicyMediator_Multicam_Zoom19combineFeatureParamERN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsERNSt3__113unordered_mapIjS5_NS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjS5_EEEEEE(void) {
    ALOGD("_ZN42RequestSettingPolicyMediator_Multicam_Zoom19combineFeatureParamERN5NSCam2v38pipeline6policy14featuresetting19RequestOutputParamsERNSt3__113unordered_mapIjS5_NS7_4hashIjEENS7_8equal_toIjEENS7_9allocatorINS7_4pairIKjS5_EEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&), std::__1::allocator<int (*)(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>, int (NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&)>::operator()(NSCam::v3::pipeline::policy::p2nodedecision::RequestOutputParams&, NSCam::v3::pipeline::policy::p2nodedecision::RequestInputParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_EclES8_SB_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiRN5NSCam2v38pipeline6policy14p2nodedecision19RequestOutputParamsERKNS6_18RequestInputParamsEENS_9allocatorISD_EESC_EclES8_SB_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::makePolicy_RequestMetadata_DebugDump(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata36makePolicy_RequestMetadata_DebugDumpERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata36makePolicy_RequestMetadata_DebugDumpERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::~Hal3AObject() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::Hal3AObject(std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectC1ERKNSt3__16vectorIiNS5_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObjectC1ERKNSt3__16vectorIiNS5_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::dumpSensorControlParam(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut&, NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamIn&, NSCam::v3::pipeline::policy::requestsensorcontrol::RequestInputParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam22dumpSensorControlParamERNS2_13sensorcontrol21SensorControlParamOutERNS5_20SensorControlParamInERKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_Multicam22dumpSensorControlParamERNS2_13sensorcontrol21SensorControlParamOutERNS5_20SensorControlParamInERKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> >(std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIS8_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::v3::pipeline::policy::SensorSetting, std::__1::allocator<NSCam::v3::pipeline::policy::SensorSetting> >::__push_back_slow_path<NSCam::v3::pipeline::policy::SensorSetting const&>(NSCam::v3::pipeline::policy::SensorSetting const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy13SensorSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline6policy13SensorSettingENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::isAFDone(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject8isAFDoneEi(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject8isAFDoneEi() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::hash<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> >, std::__1::equal_to<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::BEHAVIOR, std::__1::shared_ptr<NSCam::v3::pipeline::policy::requestsensorcontrol::ISensorControllerBehavior> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager8BEHAVIORENS_10shared_ptrINS6_25ISensorControllerBehaviorEEEEENS_22__unordered_map_hasherIS8_SC_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SC_NS_8equal_toIS8_EELb1EEENS_9allocatorISC_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManager8BEHAVIORENS_10shared_ptrINS6_25ISensorControllerBehaviorEEEEENS_22__unordered_map_hasherIS8_SC_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SC_NS_8equal_toIS8_EELb1EEENS_9allocatorISC_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior::insertMasterSlaveIdList(int, NSCam::v3::pipeline::policy::requestsensorcontrol::RequestOutputParams&, NSCam::IMetadata::IEntry&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior23insertMasterSlaveIdListEiRNS3_19RequestOutputParamsERNS_9IMetadata6IEntryE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehavior23insertMasterSlaveIdListEiRNS3_19RequestOutputParamsERNS_9IMetadata6IEntryE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam::RequestSensorControlPolicy_Multicam(NSCam::v3::pipeline::policy::requestsensorcontrol::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamC2ERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamC2ERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::SensorCropBehavior> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorCropBehaviorENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::hash<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode_vsdof, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode_vsdof>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode_vsdof, NSCam::v3::pipeline::policy::eMode_vsdof> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy11eMode_vsdofES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE6rehashEm() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: NSCam::v3::pipeline::policy::kModeNames_vsdof */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam2v38pipeline6policy16kModeNames_vsdofE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_AppRaw16Reprocess, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_AppRaw16Reprocess> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata39RequestMetadataPolicy_AppRaw16ReprocessENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::getPhysicalSensorFov(int, float&, float&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper20getPhysicalSensorFovEiRfS5_(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelper20getPhysicalSensorFovEiRfS5_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::setP1Rsso_Default(NSCam::v3::pipeline::policy::P1HwSetting const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rsso_DefaultERKNS2_11P1HwSettingE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder17setP1Rsso_DefaultERKNS2_11P1HwSettingE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_IOMap_P2Node_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy31makePolicy_IOMap_P2Node_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy31makePolicy_IOMap_P2Node_DefaultEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_DebugDump::RequestMetadataPolicy_DebugDump(NSCam::v3::pipeline::policy::requestmetadata::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpC1ERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy15requestmetadata31RequestMetadataPolicy_DebugDumpC1ERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::MRect> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorStateManager::updateSensorState(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut const&, NSCam::v3::pipeline::policy::requestsensorcontrol::ParsedSensorStateResult&, std::__1::unordered_map<unsigned int, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::v3::pipeline::policy::sensorcontrol::SensorStatus> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager17updateSensorStateERKNS2_13sensorcontrol21SensorControlParamOutERNS3_23ParsedSensorStateResultERNSt3__113unordered_mapIjNS5_12SensorStatusENSB_4hashIjEENSB_8equal_toIjEENSB_9allocatorINSB_4pairIKjSD_EEEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol18SensorStateManager17updateSensorStateERKNS2_13sensorcontrol21SensorControlParamOutERNS3_23ParsedSensorStateResultERNSt3__113unordered_mapIjNS5_12SensorStatusENSB_4hashIjEENSB_8equal_toIjEENSB_9allocatorINSB_4pairIKjSD_EEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::MSizeF, std::__1::allocator<NSCam::MSizeF> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam6MSizeFENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam6MSizeFENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIlE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCamHW::HwInfoHelper, std::__1::allocator<NSCamHW::HwInfoHelper> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7NSCamHW12HwInfoHelperENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_PipelineNodesNeed_AppRaw16Reprocess() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy60makePolicy_Configuration_PipelineNodesNeed_AppRaw16ReprocessEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy60makePolicy_Configuration_PipelineNodesNeed_AppRaw16ReprocessEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_PipelineTopology_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy49makePolicy_Configuration_PipelineTopology_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy49makePolicy_Configuration_PipelineTopology_DefaultEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MRect> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam5MRectEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: RequestSettingPolicyMediator_Multicam_Zoom::updateRequestResultParams(std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams>&, std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams>&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN42RequestSettingPolicyMediator_Multicam_Zoom25updateRequestResultParamsERNSt3__110shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEES9_j(void) {
    ALOGD("_ZN42RequestSettingPolicyMediator_Multicam_Zoom25updateRequestResultParamsERNSt3__110shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEES9_j() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCamHW::simplifiedMatrix> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7NSCamHW16simplifiedMatrixEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN7NSCamHW16simplifiedMatrixEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilderE = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__emplace_unique_key_args<unsigned int, unsigned int const&, std::__1::vector<long, std::__1::allocator<long> >&>(unsigned int const&, unsigned int const&, std::__1::vector<long, std::__1::allocator<long> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRKjRS5_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRKjRS5_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: makeConfigSettingPolicyMediator_Default(NSCam::v3::pipeline::policy::pipelinesetting::MediatorCreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _Z39makeConfigSettingPolicyMediator_DefaultRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE(void) {
    ALOGD("_Z39makeConfigSettingPolicyMediator_DefaultRKN5NSCam2v38pipeline6policy15pipelinesetting22MediatorCreationParamsE() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::IHwInfoHelper>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam13IHwInfoHelperEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam13IHwInfoHelperEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::NodeEdgeSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext11NodeEdgeSetE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::__unordered_map_hasher<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::hash<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::__unordered_map_equal<NSCam::v3::pipeline::policy::eMode, std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode>, std::__1::equal_to<NSCam::v3::pipeline::policy::eMode>, true>, std::__1::allocator<std::__1::__hash_value_type<NSCam::v3::pipeline::policy::eMode, NSCam::v3::pipeline::policy::eMode> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN5NSCam2v38pipeline6policy5eModeES6_EENS_22__unordered_map_hasherIS6_S7_NS_4hashIS6_EELb1EEENS_21__unordered_map_equalIS6_S7_NS_8equal_toIS6_EELb1EEENS_9allocatorIS7_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::P1ImageStreamInfoBuilder::toBufPlanes(unsigned long, int, NSCam::MSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder11toBufPlanesEmiRKNS_5MSizeE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy24P1ImageStreamInfoBuilder11toBufPlanesEmiRKNS_5MSizeE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_FDIntent_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy27makePolicy_FDIntent_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy27makePolicy_FDIntent_DefaultEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Topology_Multicam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy28makePolicy_Topology_MulticamEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy28makePolicy_Topology_MulticamEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::getAEIso(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject8getAEIsoEi(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject8getAEIsoEi() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper::DeviceInfoHelper(std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperC1ERKNSt3__16vectorIiNS5_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperC1ERKNSt3__16vectorIiNS5_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::MSizeF> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam6MSizeFEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam6MSizeFEEEEENS_22__unordered_map_hasherIiS6_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS6_NS_8equal_toIiEELb1EEENS_9allocatorIS6_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::MetadataBehavior> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol16MetadataBehaviorENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper*, std::__1::default_delete<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper>, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::DeviceInfoHelper> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperENS_14default_deleteIS6_EENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam2v38pipeline6policy20requestsensorcontrol16DeviceInfoHelperENS_14default_deleteIS6_EENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for RequestSettingPolicyMediator_Default */
extern "C" __attribute__((visibility("default"))) void* _ZTV36RequestSettingPolicyMediator_Default = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_AppRaw16Reprocess, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_AppRaw16Reprocess> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata39RequestMetadataPolicy_AppRaw16ReprocessENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata39RequestMetadataPolicy_AppRaw16ReprocessENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::pipelinesetting::RequestResultParams> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15pipelinesetting19RequestResultParamsENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Hal3AObject::getAELv_x10(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject11getAELv_x10Ei(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol11Hal3AObject11getAELv_x10Ei() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::Sync3ABehavior::~Sync3ABehavior() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol14Sync3ABehaviorD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::SensorControllerBehaviorManager::~SensorControllerBehaviorManager() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol31SensorControllerBehaviorManagerD2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior, std::__1::allocator<NSCam::v3::pipeline::policy::requestsensorcontrol::IspBehavior> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20requestsensorcontrol11IspBehaviorENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::makePolicy_Configuration_StreamInfo_P1_Default() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy46makePolicy_Configuration_StreamInfo_P1_DefaultEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy46makePolicy_Configuration_StreamInfo_P1_DefaultEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_AppRaw16Reprocess, std::__1::allocator<NSCam::v3::pipeline::policy::requestmetadata::RequestMetadataPolicy_AppRaw16Reprocess> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata39RequestMetadataPolicy_AppRaw16ReprocessENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy15requestmetadata39RequestMetadataPolicy_AppRaw16ReprocessENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::policy::requestsensorcontrol::RequestSensorControlPolicy_Multicam */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy20requestsensorcontrol35RequestSensorControlPolicy_MulticamE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::MRect>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::MRect> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam5MRectEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::requestsensorcontrol::DomainConvert::DomainConvert(std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertC1ERNSt3__16vectorIiNS5_9allocatorIiEEEERNS6_IjNS7_IjEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20requestsensorcontrol13DomainConvertC1ERNSt3__16vectorIiNS5_9allocatorIiEEEERNS6_IjNS7_IjEEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlInfo> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol17SensorControlInfoEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE6rehashEm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::SensorStaticInfo, std::__1::allocator<NSCam::SensorStaticInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16SensorStaticInfoENS_9allocatorIS2_EEEE = NULL;
