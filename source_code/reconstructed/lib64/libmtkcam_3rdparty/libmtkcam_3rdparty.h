/*
 * Reverse-Engineered ABI Specification for: libmtkcam_3rdparty.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_3rdparty.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_3RDPARTY_H
#define BEGONIA_RE_LIBMTKCAM_3RDPARTY_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr20get_capture_scenarioERiRNS3_16ScenarioFeaturesERNS3_21CaptureScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::get_capture_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&, NSCam::v3::pipeline::policy::scenariomgr::CaptureScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr20get_capture_scenarioERiRNS3_16ScenarioFeaturesERNS3_21CaptureScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr22get_streaming_scenarioERiRNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::get_streaming_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&, NSCam::v3::pipeline::policy::scenariomgr::StreamingScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr22get_streaming_scenarioERiRNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy13sensorcontrol24decistion_sensor_controlERNS3_21SensorControlParamOutERKNS3_20SensorControlParamInE */
/* Demangled: NSCam::v3::pipeline::policy::sensorcontrol::decistion_sensor_control(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut&, NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamIn const&) */
int _ZN5NSCam2v38pipeline6policy13sensorcontrol24decistion_sensor_controlERNS3_21SensorControlParamOutERKNS3_20SensorControlParamInE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy10evdecision24createEvDecisionInstanceERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::evdecision::createEvDecisionInstance(NSCam::v3::pipeline::policy::evdecision::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy10evdecision24createEvDecisionInstanceERKNS3_14CreationParamsE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision, std::__1::allocator<NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: end */
/* Demangled: end */
extern void* end;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision, std::__1::allocator<NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision, std::__1::allocator<NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionENS_9allocatorIS6_EEEE;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_3RDPARTY_H */
