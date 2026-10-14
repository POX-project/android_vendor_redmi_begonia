/*
 * Reverse-Engineered ABI Specification for: android.hardware.memtrack@1.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.memtrack@1.0-impl.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_MEMTRACK_1_0_IMPL_H
#define BEGONIA_RE_ANDROID_HARDWARE_MEMTRACK_1_0_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android8hardware8memtrack4V1_014implementation8Memtrack9getMemoryEiNS2_12MemtrackTypeENSt3__18functionIFvNS2_14MemtrackStatusERKNS0_8hidl_vecINS2_14MemtrackRecordEEEEEE */
/* Demangled: android::hardware::memtrack::V1_0::implementation::Memtrack::getMemory(int, android::hardware::memtrack::V1_0::MemtrackType, std::__1::function<void (android::hardware::memtrack::V1_0::MemtrackStatus, android::hardware::hidl_vec<android::hardware::memtrack::V1_0::MemtrackRecord> const&)>) */
int _ZN7android8hardware8memtrack4V1_014implementation8Memtrack9getMemoryEiNS2_12MemtrackTypeENSt3__18functionIFvNS2_14MemtrackStatusERKNS0_8hidl_vecINS2_14MemtrackRecordEEEEEE(void);

/* Symbol: _ZN7android8hardware8memtrack4V1_014implementation8MemtrackC1EPK15memtrack_module */
/* Demangled: android::hardware::memtrack::V1_0::implementation::Memtrack::Memtrack(memtrack_module const*) */
int _ZN7android8hardware8memtrack4V1_014implementation8MemtrackC1EPK15memtrack_module(void);

/* Symbol: _ZN7android8hardware8memtrack4V1_014implementation8MemtrackC2EPK15memtrack_module */
/* Demangled: android::hardware::memtrack::V1_0::implementation::Memtrack::Memtrack(memtrack_module const*) */
int _ZN7android8hardware8memtrack4V1_014implementation8MemtrackC2EPK15memtrack_module(void);

/* Symbol: _ZN7android8hardware8memtrack4V1_014implementation8MemtrackD0Ev */
/* Demangled: android::hardware::memtrack::V1_0::implementation::Memtrack::~Memtrack() */
int _ZN7android8hardware8memtrack4V1_014implementation8MemtrackD0Ev(void);

/* Symbol: _ZN7android8hardware8memtrack4V1_014implementation8MemtrackD1Ev */
/* Demangled: android::hardware::memtrack::V1_0::implementation::Memtrack::~Memtrack() */
int _ZN7android8hardware8memtrack4V1_014implementation8MemtrackD1Ev(void);

/* Symbol: _ZN7android8hardware8memtrack4V1_014implementation8MemtrackD2Ev */
/* Demangled: android::hardware::memtrack::V1_0::implementation::Memtrack::~Memtrack() */
int _ZN7android8hardware8memtrack4V1_014implementation8MemtrackD2Ev(void);

/* Symbol: _ZTCN7android8hardware8memtrack4V1_014implementation8MemtrackE0_NS2_9IMemtrackE */
/* Demangled: construction vtable for android::hardware::memtrack::V1_0::IMemtrack-in-android::hardware::memtrack::V1_0::implementation::Memtrack */
extern void* _ZTCN7android8hardware8memtrack4V1_014implementation8MemtrackE0_NS2_9IMemtrackE;

/* Symbol: _ZTVN7android8hardware8memtrack4V1_014implementation8MemtrackE */
/* Demangled: vtable for android::hardware::memtrack::V1_0::implementation::Memtrack */
extern void* _ZTVN7android8hardware8memtrack4V1_014implementation8MemtrackE;

/* Symbol: _ZTv0_n12_N7android8hardware8memtrack4V1_014implementation8MemtrackD0Ev */
/* Demangled: virtual thunk to android::hardware::memtrack::V1_0::implementation::Memtrack::~Memtrack() */
int _ZTv0_n12_N7android8hardware8memtrack4V1_014implementation8MemtrackD0Ev(void);

/* Symbol: _ZTv0_n12_N7android8hardware8memtrack4V1_014implementation8MemtrackD1Ev */
/* Demangled: virtual thunk to android::hardware::memtrack::V1_0::implementation::Memtrack::~Memtrack() */
int _ZTv0_n12_N7android8hardware8memtrack4V1_014implementation8MemtrackD1Ev(void);

/* Symbol: HIDL_FETCH_IMemtrack */
/* Demangled: HIDL_FETCH_IMemtrack */
int HIDL_FETCH_IMemtrack(void);

/* Symbol: _ZTCN7android8hardware8memtrack4V1_014implementation8MemtrackE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::memtrack::V1_0::implementation::Memtrack */
extern void* _ZTCN7android8hardware8memtrack4V1_014implementation8MemtrackE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN7android8hardware8memtrack4V1_014implementation8MemtrackE */
/* Demangled: VTT for android::hardware::memtrack::V1_0::implementation::Memtrack */
extern void* _ZTTN7android8hardware8memtrack4V1_014implementation8MemtrackE;

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_MEMTRACK_1_0_IMPL_H */
