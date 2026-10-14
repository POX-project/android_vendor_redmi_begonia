/*
 * Reverse-Engineered ABI Specification for: android.hardware.ir@1.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.ir@1.0-impl.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_IR_1_0_IMPL_H
#define BEGONIA_RE_ANDROID_HARDWARE_IR_1_0_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: HIDL_FETCH_IConsumerIr */
/* Demangled: HIDL_FETCH_IConsumerIr */
int HIDL_FETCH_IConsumerIr(void);

/* Symbol: _ZN7android8hardware2ir4V1_014implementation10ConsumerIr15getCarrierFreqsENSt3__18functionIFvbRKNS0_8hidl_vecINS2_19ConsumerIrFreqRangeEEEEEE */
/* Demangled: android::hardware::ir::V1_0::implementation::ConsumerIr::getCarrierFreqs(std::__1::function<void (bool, android::hardware::hidl_vec<android::hardware::ir::V1_0::ConsumerIrFreqRange> const&)>) */
int _ZN7android8hardware2ir4V1_014implementation10ConsumerIr15getCarrierFreqsENSt3__18functionIFvbRKNS0_8hidl_vecINS2_19ConsumerIrFreqRangeEEEEEE(void);

/* Symbol: _ZN7android8hardware2ir4V1_014implementation10ConsumerIrC2EP17consumerir_device */
/* Demangled: android::hardware::ir::V1_0::implementation::ConsumerIr::ConsumerIr(consumerir_device*) */
int _ZN7android8hardware2ir4V1_014implementation10ConsumerIrC2EP17consumerir_device(void);

/* Symbol: _ZTCN7android8hardware2ir4V1_014implementation10ConsumerIrE0_NS2_11IConsumerIrE */
/* Demangled: construction vtable for android::hardware::ir::V1_0::IConsumerIr-in-android::hardware::ir::V1_0::implementation::ConsumerIr */
extern void* _ZTCN7android8hardware2ir4V1_014implementation10ConsumerIrE0_NS2_11IConsumerIrE;

/* Symbol: _ZN7android8hardware2ir4V1_014implementation10ConsumerIr8transmitEiRKNS0_8hidl_vecIiEE */
/* Demangled: android::hardware::ir::V1_0::implementation::ConsumerIr::transmit(int, android::hardware::hidl_vec<int> const&) */
int _ZN7android8hardware2ir4V1_014implementation10ConsumerIr8transmitEiRKNS0_8hidl_vecIiEE(void);

/* Symbol: _ZN7android8hardware2ir4V1_014implementation10ConsumerIrC1EP17consumerir_device */
/* Demangled: android::hardware::ir::V1_0::implementation::ConsumerIr::ConsumerIr(consumerir_device*) */
int _ZN7android8hardware2ir4V1_014implementation10ConsumerIrC1EP17consumerir_device(void);

/* Symbol: _ZTCN7android8hardware2ir4V1_014implementation10ConsumerIrE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::ir::V1_0::implementation::ConsumerIr */
extern void* _ZTCN7android8hardware2ir4V1_014implementation10ConsumerIrE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN7android8hardware2ir4V1_014implementation10ConsumerIrE */
/* Demangled: VTT for android::hardware::ir::V1_0::implementation::ConsumerIr */
extern void* _ZTTN7android8hardware2ir4V1_014implementation10ConsumerIrE;

/* Symbol: _ZTVN7android8hardware2ir4V1_014implementation10ConsumerIrE */
/* Demangled: vtable for android::hardware::ir::V1_0::implementation::ConsumerIr */
extern void* _ZTVN7android8hardware2ir4V1_014implementation10ConsumerIrE;

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_IR_1_0_IMPL_H */
