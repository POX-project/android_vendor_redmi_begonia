/*
 * Reverse-Engineered ABI Specification for: android.hardware.vibrator@1.0-impl-mediatek.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.vibrator@1.0-impl-mediatek.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_VIBRATOR_1_0_IMPL_MEDIATEK_H
#define BEGONIA_RE_ANDROID_HARDWARE_VIBRATOR_1_0_IMPL_MEDIATEK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: HIDL_FETCH_IVibrator */
/* Demangled: HIDL_FETCH_IVibrator */
int HIDL_FETCH_IVibrator(void);

/* Symbol: _ZN7android8hardware8vibrator4V1_014implementation8Vibrator12setAmplitudeEh */
/* Demangled: android::hardware::vibrator::V1_0::implementation::Vibrator::setAmplitude(unsigned char) */
int _ZN7android8hardware8vibrator4V1_014implementation8Vibrator12setAmplitudeEh(void);

/* Symbol: _ZN7android8hardware8vibrator4V1_014implementation8VibratorC2EP15vibrator_device */
/* Demangled: android::hardware::vibrator::V1_0::implementation::Vibrator::Vibrator(vibrator_device*) */
int _ZN7android8hardware8vibrator4V1_014implementation8VibratorC2EP15vibrator_device(void);

/* Symbol: _ZTCN7android8hardware8vibrator4V1_014implementation8VibratorE0_NS2_9IVibratorE */
/* Demangled: construction vtable for android::hardware::vibrator::V1_0::IVibrator-in-android::hardware::vibrator::V1_0::implementation::Vibrator */
extern void* _ZTCN7android8hardware8vibrator4V1_014implementation8VibratorE0_NS2_9IVibratorE;

/* Symbol: _ZTCN7android8hardware8vibrator4V1_014implementation8VibratorE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::vibrator::V1_0::implementation::Vibrator */
extern void* _ZTCN7android8hardware8vibrator4V1_014implementation8VibratorE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware8vibrator4V1_014implementation8Vibrator24supportsAmplitudeControlEv */
/* Demangled: android::hardware::vibrator::V1_0::implementation::Vibrator::supportsAmplitudeControl() */
int _ZN7android8hardware8vibrator4V1_014implementation8Vibrator24supportsAmplitudeControlEv(void);

/* Symbol: _ZN7android8hardware8vibrator4V1_014implementation8Vibrator3offEv */
/* Demangled: android::hardware::vibrator::V1_0::implementation::Vibrator::off() */
int _ZN7android8hardware8vibrator4V1_014implementation8Vibrator3offEv(void);

/* Symbol: _ZN7android8hardware8vibrator4V1_014implementation8Vibrator7performENS2_6EffectENS2_14EffectStrengthENSt3__18functionIFvNS2_6StatusEjEEE */
/* Demangled: android::hardware::vibrator::V1_0::implementation::Vibrator::perform(android::hardware::vibrator::V1_0::Effect, android::hardware::vibrator::V1_0::EffectStrength, std::__1::function<void (android::hardware::vibrator::V1_0::Status, unsigned int)>) */
int _ZN7android8hardware8vibrator4V1_014implementation8Vibrator7performENS2_6EffectENS2_14EffectStrengthENSt3__18functionIFvNS2_6StatusEjEEE(void);

/* Symbol: _ZTVN7android8hardware8vibrator4V1_014implementation8VibratorE */
/* Demangled: vtable for android::hardware::vibrator::V1_0::implementation::Vibrator */
extern void* _ZTVN7android8hardware8vibrator4V1_014implementation8VibratorE;

/* Symbol: _ZN7android8hardware8vibrator4V1_014implementation8Vibrator2onEj */
/* Demangled: android::hardware::vibrator::V1_0::implementation::Vibrator::on(unsigned int) */
int _ZN7android8hardware8vibrator4V1_014implementation8Vibrator2onEj(void);

/* Symbol: _ZN7android8hardware8vibrator4V1_014implementation8VibratorC1EP15vibrator_device */
/* Demangled: android::hardware::vibrator::V1_0::implementation::Vibrator::Vibrator(vibrator_device*) */
int _ZN7android8hardware8vibrator4V1_014implementation8VibratorC1EP15vibrator_device(void);

/* Symbol: _ZNKSt3__18functionIFvN7android8hardware8vibrator4V1_06StatusEjEEclES5_j */
/* Demangled: std::__1::function<void (android::hardware::vibrator::V1_0::Status, unsigned int)>::operator()(android::hardware::vibrator::V1_0::Status, unsigned int) const */
int _ZNKSt3__18functionIFvN7android8hardware8vibrator4V1_06StatusEjEEclES5_j(void);

/* Symbol: _ZTTN7android8hardware8vibrator4V1_014implementation8VibratorE */
/* Demangled: VTT for android::hardware::vibrator::V1_0::implementation::Vibrator */
extern void* _ZTTN7android8hardware8vibrator4V1_014implementation8VibratorE;

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_VIBRATOR_1_0_IMPL_MEDIATEK_H */
