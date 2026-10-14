/*
 * Reverse-Engineered ABI Specification for: libpowerhalwrap_vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libpowerhalwrap_vendor.so
 */

#ifndef BEGONIA_RE_LIBPOWERHALWRAP_VENDOR_H
#define BEGONIA_RE_LIBPOWERHALWRAP_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: PowerHal_TouchBoost */
/* Demangled: PowerHal_TouchBoost */
int PowerHal_TouchBoost(void);

/* Symbol: PowerHal_Wrap_querySysInfo */
/* Demangled: PowerHal_Wrap_querySysInfo */
int PowerHal_Wrap_querySysInfo(void);

/* Symbol: _ZN7android24GraphicsLowLatencyHelper12setTouchHintEi */
/* Demangled: android::GraphicsLowLatencyHelper::setTouchHint(int) */
int _ZN7android24GraphicsLowLatencyHelper12setTouchHintEi(void);

/* Symbol: _ZN7android2spI19PowerDeathRecipientED2Ev */
/* Demangled: android::sp<PowerDeathRecipient>::~sp() */
int _ZN7android2spI19PowerDeathRecipientED2Ev(void);

/* Symbol: _ZTV19PowerDeathRecipient */
/* Demangled: vtable for PowerDeathRecipient */
extern void* _ZTV19PowerDeathRecipient;

/* Symbol: PowerHal_Wrap_scnConfig */
/* Demangled: PowerHal_Wrap_scnConfig */
int PowerHal_Wrap_scnConfig(void);

/* Symbol: PowerHal_Wrap_scnReg */
/* Demangled: PowerHal_Wrap_scnReg */
int PowerHal_Wrap_scnReg(void);

/* Symbol: PowerHal_Wrap_notifyAppState */
/* Demangled: PowerHal_Wrap_notifyAppState */
int PowerHal_Wrap_notifyAppState(void);

/* Symbol: PowerHal_Wrap_scnEnable */
/* Demangled: PowerHal_Wrap_scnEnable */
int PowerHal_Wrap_scnEnable(void);

/* Symbol: _ZZN7android24GraphicsLowLatencyHelper11getInstanceEvE7s_mutex */
/* Demangled: android::GraphicsLowLatencyHelper::getInstance()::s_mutex */
extern void* _ZZN7android24GraphicsLowLatencyHelper11getInstanceEvE7s_mutex;

/* Symbol: PowerHal_Wrap_mtkPowerHint */
/* Demangled: PowerHal_Wrap_mtkPowerHint */
int PowerHal_Wrap_mtkPowerHint(void);

/* Symbol: PowerHal_Wrap_scnUltraCfg */
/* Demangled: PowerHal_Wrap_scnUltraCfg */
int PowerHal_Wrap_scnUltraCfg(void);

/* Symbol: _ZN7android2spI19PowerDeathRecipientEaSEPS1_ */
/* Demangled: android::sp<PowerDeathRecipient>::operator=(PowerDeathRecipient*) */
int _ZN7android2spI19PowerDeathRecipientEaSEPS1_(void);

/* Symbol: _ZN7android24GraphicsLowLatencyHelper22initSfBinderCallLockedEv */
/* Demangled: android::GraphicsLowLatencyHelper::initSfBinderCallLocked() */
int _ZN7android24GraphicsLowLatencyHelper22initSfBinderCallLockedEv(void);

/* Symbol: PowerHal_Wrap_scnUnreg */
/* Demangled: PowerHal_Wrap_scnUnreg */
int PowerHal_Wrap_scnUnreg(void);

/* Symbol: PowerHal_Wrap_setSysInfoAsync */
/* Demangled: PowerHal_Wrap_setSysInfoAsync */
int PowerHal_Wrap_setSysInfoAsync(void);

/* Symbol: _ZN7android24GraphicsLowLatencyHelperC1Ev */
/* Demangled: android::GraphicsLowLatencyHelper::GraphicsLowLatencyHelper() */
int _ZN7android24GraphicsLowLatencyHelperC1Ev(void);

/* Symbol: _ZN7android2spINS_7IBinderEEaSEOS2_ */
/* Demangled: android::sp<android::IBinder>::operator=(android::sp<android::IBinder>&&) */
int _ZN7android2spINS_7IBinderEEaSEOS2_(void);

/* Symbol: _ZN7android2spINS_7IBinderEEaSEPS1_ */
/* Demangled: android::sp<android::IBinder>::operator=(android::IBinder*) */
int _ZN7android2spINS_7IBinderEEaSEPS1_(void);

/* Symbol: _ZN7android24GraphicsLowLatencyHelper17loadObjectListApiEv */
/* Demangled: android::GraphicsLowLatencyHelper::loadObjectListApi() */
int _ZN7android24GraphicsLowLatencyHelper17loadObjectListApiEv(void);

/* Symbol: _ZN7android24GraphicsLowLatencyHelper18clearObjectListApiEv */
/* Demangled: android::GraphicsLowLatencyHelper::clearObjectListApi() */
int _ZN7android24GraphicsLowLatencyHelper18clearObjectListApiEv(void);

/* Symbol: _ZN7android24GraphicsLowLatencyHelperC2Ev */
/* Demangled: android::GraphicsLowLatencyHelper::GraphicsLowLatencyHelper() */
int _ZN7android24GraphicsLowLatencyHelperC2Ev(void);

/* Symbol: _ZN7android24GraphicsLowLatencyHelperD1Ev */
/* Demangled: android::GraphicsLowLatencyHelper::~GraphicsLowLatencyHelper() */
int _ZN7android24GraphicsLowLatencyHelperD1Ev(void);

/* Symbol: PowerHal_Wrap_mtkCusPowerHint */
/* Demangled: PowerHal_Wrap_mtkCusPowerHint */
int PowerHal_Wrap_mtkCusPowerHint(void);

/* Symbol: PowerHal_Wrap_setSysInfo */
/* Demangled: PowerHal_Wrap_setSysInfo */
int PowerHal_Wrap_setSysInfo(void);

/* Symbol: _ZZN7android24GraphicsLowLatencyHelper11getInstanceEvE10s_instance */
/* Demangled: android::GraphicsLowLatencyHelper::getInstance()::s_instance */
extern void* _ZZN7android24GraphicsLowLatencyHelper11getInstanceEvE10s_instance;

/* Symbol: _ZN7android24GraphicsLowLatencyHelperD2Ev */
/* Demangled: android::GraphicsLowLatencyHelper::~GraphicsLowLatencyHelper() */
int _ZN7android24GraphicsLowLatencyHelperD2Ev(void);

/* Symbol: PowerHal_Wrap_scnDisable */
/* Demangled: PowerHal_Wrap_scnDisable */
int PowerHal_Wrap_scnDisable(void);

/* Symbol: _ZGVZN7android24GraphicsLowLatencyHelper11getInstanceEvE7s_mutex */
/* Demangled: guard variable for android::GraphicsLowLatencyHelper::getInstance()::s_mutex */
extern void* _ZGVZN7android24GraphicsLowLatencyHelper11getInstanceEvE7s_mutex;

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerEED2Ev */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower>::~sp() */
int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerEED2Ev(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerEEaSEOS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower>::operator=(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower>&&) */
int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerEEaSEOS7_(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerEEaSEPS6_ */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower>::operator=(vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower*) */
int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerEEaSEPS6_(void);

/* Symbol: _ZN7android24GraphicsLowLatencyHelper27updateFailInfo4InitSfLockedEv */
/* Demangled: android::GraphicsLowLatencyHelper::updateFailInfo4InitSfLocked() */
int _ZN7android24GraphicsLowLatencyHelper27updateFailInfo4InitSfLockedEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBPOWERHALWRAP_VENDOR_H */
