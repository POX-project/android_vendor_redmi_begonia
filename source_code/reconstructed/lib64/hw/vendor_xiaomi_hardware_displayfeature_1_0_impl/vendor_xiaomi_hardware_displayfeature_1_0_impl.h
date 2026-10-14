/*
 * Reverse-Engineered ABI Specification for: vendor.xiaomi.hardware.displayfeature@1.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.xiaomi.hardware.displayfeature@1.0-impl.so
 */

#ifndef BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_DISPLAYFEATURE_1_0_IMPL_H
#define BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_DISPLAYFEATURE_1_0_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature10callbacks_E */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::callbacks_ */
extern void* _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature10callbacks_E;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11sendMessageEiiRKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::sendMessage(int, int, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11sendMessageEiiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16registerCallbackEiRKN7android2spINS3_23IDisplayFeatureCallbackEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::registerCallback(int, android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16registerCallbackEiRKN7android2spINS3_23IDisplayFeatureCallbackEEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureE */
/* Demangled: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature */
extern void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureE;

/* Symbol: _ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD0Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::~DisplayFeature() */
int _ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD0Ev(void);

/* Symbol: _ZTv0_n24_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD1Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::~DisplayFeature() */
int _ZTv0_n24_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature10setFeatureEiiii */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::setFeature(int, int, int, int) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature10setFeatureEiiii(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11serviceDiedEmRKN7android2wpINS6_4hidl4base4V1_05IBaseEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11serviceDiedEmRKN7android2wpINS6_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature19sendPostProcCommandEii */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::sendPostProcCommand(int, int) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature19sendPostProcCommandEii(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureC1EPK11hw_module_t */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::DisplayFeature(hw_module_t const*) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureC1EPK11hw_module_t(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureE */
/* Demangled: VTT for vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature */
extern void* _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureE;

/* Symbol: _ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11serviceDiedEmRKN7android2wpINS6_4hidl4base4V1_05IBaseEEE */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11serviceDiedEmRKN7android2wpINS6_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: HIDL_FETCH_IDisplayFeature */
/* Demangled: HIDL_FETCH_IDisplayFeature */
int HIDL_FETCH_IDisplayFeature(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature12initDispatchEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::initDispatch() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature12initDispatchEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD0Ev */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::~DisplayFeature() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature15notifyListenersEii */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::notifyListeners(int, int) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature15notifyListenersEii(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD2Ev */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::~DisplayFeature() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD2Ev(void);

/* Symbol: _ZTv0_n24_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD0Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::~DisplayFeature() */
int _ZTv0_n24_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11setFunctionEiiii */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::setFunction(int, int, int, int) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature11setFunctionEiiii(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16initCapabilitiesEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::initCapabilities() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16initCapabilitiesEv(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureE8_N7android8hardware20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureE8_N7android8hardware20hidl_death_recipientE;

/* Symbol: _ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD1Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::~DisplayFeature() */
int _ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureC2EPK11hw_module_t */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::DisplayFeature(hw_module_t const*) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureC2EPK11hw_module_t(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature15callbacks_lock_E */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::callbacks_lock_ */
extern void* _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature15callbacks_lock_E;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16notifyBrightnessEi */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::notifyBrightness(int) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16notifyBrightnessEi(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16sendPanelCommandERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::sendPanelCommand(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature16sendPanelCommandERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature18sendRefreshCommandEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::sendRefreshCommand() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeature18sendRefreshCommandEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD1Ev */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature::~DisplayFeature() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureD1Ev(void);

/* Symbol: _ZN7android2spIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackEED2Ev */
/* Demangled: android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback>::~sp() */
int _ZN7android2spIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackEED2Ev(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureE0_NS3_15IDisplayFeatureE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature-in-vendor::xiaomi::hardware::displayfeature::V1_0::implementation::DisplayFeature */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_014implementation14DisplayFeatureE0_NS3_15IDisplayFeatureE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_DISPLAYFEATURE_1_0_IMPL_H */
