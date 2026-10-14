/*
 * Reverse-Engineered Source for: libmtkcam_3rdparty.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_3rdparty"

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
#include "libmtkcam_3rdparty.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::get_capture_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&, NSCam::v3::pipeline::policy::scenariomgr::CaptureScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr20get_capture_scenarioERiRNS3_16ScenarioFeaturesERNS3_21CaptureScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr20get_capture_scenarioERiRNS3_16ScenarioFeaturesERNS3_21CaptureScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::get_streaming_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&, NSCam::v3::pipeline::policy::scenariomgr::StreamingScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr22get_streaming_scenarioERiRNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr22get_streaming_scenarioERiRNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::sensorcontrol::decistion_sensor_control(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut&, NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamIn const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy13sensorcontrol24decistion_sensor_controlERNS3_21SensorControlParamOutERKNS3_20SensorControlParamInE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy13sensorcontrol24decistion_sensor_controlERNS3_21SensorControlParamOutERKNS3_20SensorControlParamInE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::evdecision::createEvDecisionInstance(NSCam::v3::pipeline::policy::evdecision::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy10evdecision24createEvDecisionInstanceERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy10evdecision24createEvDecisionInstanceERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision, std::__1::allocator<NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision, std::__1::allocator<NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision, std::__1::allocator<NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;
