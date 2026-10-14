/*
 * Reverse-Engineered ABI Specification for: android.hardware.thermal@1.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.thermal@1.0-impl.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_THERMAL_1_0_IMPL_H
#define BEGONIA_RE_ANDROID_HARDWARE_THERMAL_1_0_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android8hardware7thermal4V1_014implementation7Thermal12getCpuUsagesENSt3__18functionIFvRKNS2_13ThermalStatusERKNS0_8hidl_vecINS2_8CpuUsageEEEEEE */
/* Demangled: android::hardware::thermal::V1_0::implementation::Thermal::getCpuUsages(std::__1::function<void (android::hardware::thermal::V1_0::ThermalStatus const&, android::hardware::hidl_vec<android::hardware::thermal::V1_0::CpuUsage> const&)>) */
int _ZN7android8hardware7thermal4V1_014implementation7Thermal12getCpuUsagesENSt3__18functionIFvRKNS2_13ThermalStatusERKNS0_8hidl_vecINS2_8CpuUsageEEEEEE(void);

/* Symbol: _ZN7android8hardware7thermal4V1_014implementation7ThermalC1EP14thermal_module */
/* Demangled: android::hardware::thermal::V1_0::implementation::Thermal::Thermal(thermal_module*) */
int _ZN7android8hardware7thermal4V1_014implementation7ThermalC1EP14thermal_module(void);

/* Symbol: _ZNSt3__16vectorI13temperature_tNS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<temperature_t, std::__1::allocator<temperature_t> >::__append(unsigned int) */
int _ZNSt3__16vectorI13temperature_tNS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: _ZTCN7android8hardware7thermal4V1_014implementation7ThermalE0_NS2_8IThermalE */
/* Demangled: construction vtable for android::hardware::thermal::V1_0::IThermal-in-android::hardware::thermal::V1_0::implementation::Thermal */
extern void* _ZTCN7android8hardware7thermal4V1_014implementation7ThermalE0_NS2_8IThermalE;

/* Symbol: _ZTCN7android8hardware7thermal4V1_014implementation7ThermalE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::thermal::V1_0::implementation::Thermal */
extern void* _ZTCN7android8hardware7thermal4V1_014implementation7ThermalE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: HIDL_FETCH_IThermal */
/* Demangled: HIDL_FETCH_IThermal */
int HIDL_FETCH_IThermal(void);

/* Symbol: _ZNSt3__16vectorI11cpu_usage_tNS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<cpu_usage_t, std::__1::allocator<cpu_usage_t> >::__append(unsigned int) */
int _ZNSt3__16vectorI11cpu_usage_tNS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: _ZNSt3__16vectorI16cooling_device_tNS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<cooling_device_t, std::__1::allocator<cooling_device_t> >::__append(unsigned int) */
int _ZNSt3__16vectorI16cooling_device_tNS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: _ZTTN7android8hardware7thermal4V1_014implementation7ThermalE */
/* Demangled: VTT for android::hardware::thermal::V1_0::implementation::Thermal */
extern void* _ZTTN7android8hardware7thermal4V1_014implementation7ThermalE;

/* Symbol: _ZTVN7android8hardware7thermal4V1_014implementation7ThermalE */
/* Demangled: vtable for android::hardware::thermal::V1_0::implementation::Thermal */
extern void* _ZTVN7android8hardware7thermal4V1_014implementation7ThermalE;

/* Symbol: _ZN7android8hardware7thermal4V1_014implementation7Thermal15getTemperaturesENSt3__18functionIFvRKNS2_13ThermalStatusERKNS0_8hidl_vecINS2_11TemperatureEEEEEE */
/* Demangled: android::hardware::thermal::V1_0::implementation::Thermal::getTemperatures(std::__1::function<void (android::hardware::thermal::V1_0::ThermalStatus const&, android::hardware::hidl_vec<android::hardware::thermal::V1_0::Temperature> const&)>) */
int _ZN7android8hardware7thermal4V1_014implementation7Thermal15getTemperaturesENSt3__18functionIFvRKNS2_13ThermalStatusERKNS0_8hidl_vecINS2_11TemperatureEEEEEE(void);

/* Symbol: _ZN7android8hardware7thermal4V1_014implementation7Thermal17getCoolingDevicesENSt3__18functionIFvRKNS2_13ThermalStatusERKNS0_8hidl_vecINS2_13CoolingDeviceEEEEEE */
/* Demangled: android::hardware::thermal::V1_0::implementation::Thermal::getCoolingDevices(std::__1::function<void (android::hardware::thermal::V1_0::ThermalStatus const&, android::hardware::hidl_vec<android::hardware::thermal::V1_0::CoolingDevice> const&)>) */
int _ZN7android8hardware7thermal4V1_014implementation7Thermal17getCoolingDevicesENSt3__18functionIFvRKNS2_13ThermalStatusERKNS0_8hidl_vecINS2_13CoolingDeviceEEEEEE(void);

/* Symbol: _ZN7android8hardware7thermal4V1_014implementation7ThermalC2EP14thermal_module */
/* Demangled: android::hardware::thermal::V1_0::implementation::Thermal::Thermal(thermal_module*) */
int _ZN7android8hardware7thermal4V1_014implementation7ThermalC2EP14thermal_module(void);

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_THERMAL_1_0_IMPL_H */
