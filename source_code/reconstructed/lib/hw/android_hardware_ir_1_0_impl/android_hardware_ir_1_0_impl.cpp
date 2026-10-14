/*
 * Reverse-Engineered Source for: android.hardware.ir@1.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "android_hardware_ir_1_0_impl"

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
#include "android_hardware_ir_1_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: HIDL_FETCH_IConsumerIr */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IConsumerIr(void) {
    ALOGD("HIDL_FETCH_IConsumerIr() called");
    return 0;
}

/* Demangled: android::hardware::ir::V1_0::implementation::ConsumerIr::getCarrierFreqs(std::__1::function<void (bool, android::hardware::hidl_vec<android::hardware::ir::V1_0::ConsumerIrFreqRange> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware2ir4V1_014implementation10ConsumerIr15getCarrierFreqsENSt3__18functionIFvbRKNS0_8hidl_vecINS2_19ConsumerIrFreqRangeEEEEEE(void) {
    ALOGD("_ZN7android8hardware2ir4V1_014implementation10ConsumerIr15getCarrierFreqsENSt3__18functionIFvbRKNS0_8hidl_vecINS2_19ConsumerIrFreqRangeEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::ir::V1_0::implementation::ConsumerIr::ConsumerIr(consumerir_device*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware2ir4V1_014implementation10ConsumerIrC2EP17consumerir_device(void) {
    ALOGD("_ZN7android8hardware2ir4V1_014implementation10ConsumerIrC2EP17consumerir_device() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::ir::V1_0::IConsumerIr-in-android::hardware::ir::V1_0::implementation::ConsumerIr */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware2ir4V1_014implementation10ConsumerIrE0_NS2_11IConsumerIrE = NULL;

/* Demangled: android::hardware::ir::V1_0::implementation::ConsumerIr::transmit(int, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware2ir4V1_014implementation10ConsumerIr8transmitEiRKNS0_8hidl_vecIiEE(void) {
    ALOGD("_ZN7android8hardware2ir4V1_014implementation10ConsumerIr8transmitEiRKNS0_8hidl_vecIiEE() called");
    return 0;
}

/* Demangled: android::hardware::ir::V1_0::implementation::ConsumerIr::ConsumerIr(consumerir_device*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware2ir4V1_014implementation10ConsumerIrC1EP17consumerir_device(void) {
    ALOGD("_ZN7android8hardware2ir4V1_014implementation10ConsumerIrC1EP17consumerir_device() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::ir::V1_0::implementation::ConsumerIr */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware2ir4V1_014implementation10ConsumerIrE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for android::hardware::ir::V1_0::implementation::ConsumerIr */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware2ir4V1_014implementation10ConsumerIrE = NULL;

/* Exported Object: vtable for android::hardware::ir::V1_0::implementation::ConsumerIr */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware2ir4V1_014implementation10ConsumerIrE = NULL;
