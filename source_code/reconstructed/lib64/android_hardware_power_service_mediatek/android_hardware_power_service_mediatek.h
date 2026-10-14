/*
 * Reverse-Engineered ABI Specification for: android.hardware.power-service-mediatek.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.power-service-mediatek.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_POWER_SERVICE_MEDIATEK_H
#define BEGONIA_RE_ANDROID_HARDWARE_POWER_SERVICE_MEDIATEK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN4aidl7android8hardware5power4impl8mediatek5PowerD2Ev */
/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::~Power() */
int _ZN4aidl7android8hardware5power4impl8mediatek5PowerD2Ev(void);

/* Symbol: libpowerhal_wrap_LockAcq */
/* Demangled: libpowerhal_wrap_LockAcq */
int libpowerhal_wrap_LockAcq(void);

/* Symbol: _ZGVN4aidl7android8hardware5power6IPower4hashE */
/* Demangled: guard variable for aidl::android::hardware::power::IPower::hash */
extern void* _ZGVN4aidl7android8hardware5power6IPower4hashE;

/* Symbol: _ZN4aidl7android8hardware5power4impl8mediatek5Power7setModeENS2_4ModeEb */
/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::setMode(aidl::android::hardware::power::Mode, bool) */
int _ZN4aidl7android8hardware5power4impl8mediatek5Power7setModeENS2_4ModeEb(void);

/* Symbol: _ZN4aidl7android8hardware5power4impl8mediatek5PowerD1Ev */
/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::~Power() */
int _ZN4aidl7android8hardware5power4impl8mediatek5PowerD1Ev(void);

/* Symbol: _ZTVN4aidl7android8hardware5power4impl8mediatek5PowerE */
/* Demangled: vtable for aidl::android::hardware::power::impl::mediatek::Power */
extern void* _ZTVN4aidl7android8hardware5power4impl8mediatek5PowerE;

/* Symbol: libpowerhal_wrap_CusLockHint */
/* Demangled: libpowerhal_wrap_CusLockHint */
int libpowerhal_wrap_CusLockHint(void);

/* Symbol: libpowerhal_wrap_Init */
/* Demangled: libpowerhal_wrap_Init */
int libpowerhal_wrap_Init(void);

/* Symbol: libpowerhal_wrap_UserScnRestoreAll */
/* Demangled: libpowerhal_wrap_UserScnRestoreAll */
int libpowerhal_wrap_UserScnRestoreAll(void);

/* Symbol: _ZN4aidl7android8hardware5power4impl8mediatek5Power8setBoostENS2_5BoostEi */
/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::setBoost(aidl::android::hardware::power::Boost, int) */
int _ZN4aidl7android8hardware5power4impl8mediatek5Power8setBoostENS2_5BoostEi(void);

/* Symbol: _ZN4aidl7android8hardware5power4impl8mediatek5PowerD0Ev */
/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::~Power() */
int _ZN4aidl7android8hardware5power4impl8mediatek5PowerD0Ev(void);

/* Symbol: libpowerhal_wrap_NotifyAppState */
/* Demangled: libpowerhal_wrap_NotifyAppState */
int libpowerhal_wrap_NotifyAppState(void);

/* Symbol: _ZN3ndk12BnCInterfaceIN4aidl7android8hardware5power6IPowerEE8asBinderEv */
/* Demangled: ndk::BnCInterface<aidl::android::hardware::power::IPower>::asBinder() */
int _ZN3ndk12BnCInterfaceIN4aidl7android8hardware5power6IPowerEE8asBinderEv(void);

/* Symbol: _ZN4aidl7android8hardware5power4impl8mediatek5Power16isBoostSupportedENS2_5BoostEPb */
/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::isBoostSupported(aidl::android::hardware::power::Boost, bool*) */
int _ZN4aidl7android8hardware5power4impl8mediatek5Power16isBoostSupportedENS2_5BoostEPb(void);

/* Symbol: _ZN4aidl7android8hardware5power4impl8mediatek5PowerC2Ev */
/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::Power() */
int _ZN4aidl7android8hardware5power4impl8mediatek5PowerC2Ev(void);

/* Symbol: libpowerhal_wrap_UserScnDisableAll */
/* Demangled: libpowerhal_wrap_UserScnDisableAll */
int libpowerhal_wrap_UserScnDisableAll(void);

/* Symbol: libpowerhal_wrap_SetSysInfo */
/* Demangled: libpowerhal_wrap_SetSysInfo */
int libpowerhal_wrap_SetSysInfo(void);

/* Symbol: libpowerhal_wrap_UserGetCapability */
/* Demangled: libpowerhal_wrap_UserGetCapability */
int libpowerhal_wrap_UserGetCapability(void);

/* Symbol: _ZN4aidl7android8hardware5power4impl8mediatek5Power15isModeSupportedENS2_4ModeEPb */
/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::isModeSupported(aidl::android::hardware::power::Mode, bool*) */
int _ZN4aidl7android8hardware5power4impl8mediatek5Power15isModeSupportedENS2_4ModeEPb(void);

/* Symbol: _ZN4aidl7android8hardware5power4impl8mediatek5PowerC1Ev */
/* Demangled: aidl::android::hardware::power::impl::mediatek::Power::Power() */
int _ZN4aidl7android8hardware5power4impl8mediatek5PowerC1Ev(void);

/* Symbol: _ZN4aidl7android8hardware5power6IPower4hashE */
/* Demangled: aidl::android::hardware::power::IPower::hash */
extern void* _ZN4aidl7android8hardware5power6IPower4hashE;

/* Symbol: libpowerhal_wrap_LockRel */
/* Demangled: libpowerhal_wrap_LockRel */
int libpowerhal_wrap_LockRel(void);

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_POWER_SERVICE_MEDIATEK_H */
