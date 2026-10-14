/*
 * Reverse-Engineered Source for: android.hardware.thermal@1.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "android_hardware_thermal_1_0_impl"

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
#include "android_hardware_thermal_1_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::hardware::thermal::V1_0::implementation::Thermal::getCpuUsages(std::__1::function<void (android::hardware::thermal::V1_0::ThermalStatus const&, android::hardware::hidl_vec<android::hardware::thermal::V1_0::CpuUsage> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V1_014implementation7Thermal12getCpuUsagesENSt3__18functionIFvRKNS2_13ThermalStatusERKNS0_8hidl_vecINS2_8CpuUsageEEEEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V1_014implementation7Thermal12getCpuUsagesENSt3__18functionIFvRKNS2_13ThermalStatusERKNS0_8hidl_vecINS2_8CpuUsageEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V1_0::implementation::Thermal::Thermal(thermal_module*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V1_014implementation7ThermalC1EP14thermal_module(void) {
    ALOGD("_ZN7android8hardware7thermal4V1_014implementation7ThermalC1EP14thermal_module() called");
    return 0;
}

/* Demangled: std::__1::vector<temperature_t, std::__1::allocator<temperature_t> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13temperature_tNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorI13temperature_tNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::thermal::V1_0::IThermal-in-android::hardware::thermal::V1_0::implementation::Thermal */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware7thermal4V1_014implementation7ThermalE0_NS2_8IThermalE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::thermal::V1_0::implementation::Thermal */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware7thermal4V1_014implementation7ThermalE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: HIDL_FETCH_IThermal */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IThermal(void) {
    ALOGD("HIDL_FETCH_IThermal() called");
    return 0;
}

/* Demangled: std::__1::vector<cpu_usage_t, std::__1::allocator<cpu_usage_t> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI11cpu_usage_tNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorI11cpu_usage_tNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: std::__1::vector<cooling_device_t, std::__1::allocator<cooling_device_t> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI16cooling_device_tNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorI16cooling_device_tNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::thermal::V1_0::implementation::Thermal */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware7thermal4V1_014implementation7ThermalE = NULL;

/* Exported Object: vtable for android::hardware::thermal::V1_0::implementation::Thermal */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware7thermal4V1_014implementation7ThermalE = NULL;

/* Demangled: android::hardware::thermal::V1_0::implementation::Thermal::getTemperatures(std::__1::function<void (android::hardware::thermal::V1_0::ThermalStatus const&, android::hardware::hidl_vec<android::hardware::thermal::V1_0::Temperature> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V1_014implementation7Thermal15getTemperaturesENSt3__18functionIFvRKNS2_13ThermalStatusERKNS0_8hidl_vecINS2_11TemperatureEEEEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V1_014implementation7Thermal15getTemperaturesENSt3__18functionIFvRKNS2_13ThermalStatusERKNS0_8hidl_vecINS2_11TemperatureEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V1_0::implementation::Thermal::getCoolingDevices(std::__1::function<void (android::hardware::thermal::V1_0::ThermalStatus const&, android::hardware::hidl_vec<android::hardware::thermal::V1_0::CoolingDevice> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V1_014implementation7Thermal17getCoolingDevicesENSt3__18functionIFvRKNS2_13ThermalStatusERKNS0_8hidl_vecINS2_13CoolingDeviceEEEEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V1_014implementation7Thermal17getCoolingDevicesENSt3__18functionIFvRKNS2_13ThermalStatusERKNS0_8hidl_vecINS2_13CoolingDeviceEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V1_0::implementation::Thermal::Thermal(thermal_module*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V1_014implementation7ThermalC2EP14thermal_module(void) {
    ALOGD("_ZN7android8hardware7thermal4V1_014implementation7ThermalC2EP14thermal_module() called");
    return 0;
}
