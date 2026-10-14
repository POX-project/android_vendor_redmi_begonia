/*
 * Reverse-Engineered Source for: libmtkcam_pipelinemodel_adapter.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_pipelinemodel_adapter"

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
#include "libmtkcam_pipelinemodel_adapter.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::v3::pipeline::model::IHal3AAdapter::create(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model13IHal3AAdapter6createEiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model13IHal3AAdapter6createEiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__assoc_state<bool>::move() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__assoc_stateIbE4moveEv(void) {
    ALOGD("_ZNSt3__113__assoc_stateIbE4moveEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::model::HalDeviceAdapter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline5model16HalDeviceAdapterE = NULL;

/* Exported Object: vtable for Hal3AAdapter */
extern "C" __attribute__((visibility("default"))) void* _ZTV12Hal3AAdapter = NULL;

/* Demangled: NSCam::v3::pipeline::model::IHalDeviceAdapter::create(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17IHalDeviceAdapter6createEi(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17IHalDeviceAdapter6createEi() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::pipeline::model::HalDeviceAdapter>::operator=(NSCam::v3::pipeline::model::HalDeviceAdapter*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v38pipeline5model16HalDeviceAdapterEEaSEPS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v38pipeline5model16HalDeviceAdapterEEaSEPS5_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::pipeline::model::IHal3AAdapter>, std::__1::allocator<android::sp<NSCam::v3::pipeline::model::IHal3AAdapter> > >::__push_back_slow_path<android::sp<NSCam::v3::pipeline::model::IHal3AAdapter> >(android::sp<NSCam::v3::pipeline::model::IHal3AAdapter>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v38pipeline5model13IHal3AAdapterEEENS_9allocatorIS8_EEE21__push_back_slow_pathIS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v38pipeline5model13IHal3AAdapterEEENS_9allocatorIS8_EEE21__push_back_slow_pathIS8_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::IHalSensor*, std::__1::allocator<NSCam::IHalSensor*> >::__push_back_slow_path<NSCam::IHalSensor* const&>(NSCam::IHalSensor* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam10IHalSensorENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam10IHalSensorENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}
