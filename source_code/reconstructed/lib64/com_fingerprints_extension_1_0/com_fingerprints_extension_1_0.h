/*
 * Reverse-Engineered ABI Specification for: com.fingerprints.extension@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: com.fingerprints.extension@1.0.so
 */

#ifndef BEGONIA_RE_COM_FINGERPRINTS_EXTENSION_1_0_H
#define BEGONIA_RE_COM_FINGERPRINTS_EXTENSION_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest10descriptorE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::descriptor */
extern void* _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest10descriptorE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_022IRecalibrationCallbackENS_4hidl4base4V1_05IBaseENS6_25BpHwRecalibrationCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<com::fingerprints::extension::V1_0::IRecalibrationCallback> > android::hardware::details::castInterface<com::fingerprints::extension::V1_0::IRecalibrationCallback, android::hidl::base::V1_0::IBase, com::fingerprints::extension::V1_0::BpHwRecalibrationCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_022IRecalibrationCallbackENS_4hidl4base4V1_05IBaseENS6_25BpHwRecalibrationCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackC2ERKN7android2spINS2_20ICalibrationCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwCalibrationCallback::BnHwCalibrationCallback(android::sp<com::fingerprints::extension::V1_0::ICalibrationCallback> const&) */
int _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackC2ERKN7android2spINS2_20ICalibrationCallbackEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch17_hidl_setAuthModeEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::_hidl_setAuthMode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch17_hidl_setAuthModeEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation15_hidl_isEnabledEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::_hidl_isEnabled(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation15_hidl_isEnabledEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_022IRecalibrationCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::IRecalibrationCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_022IRecalibrationCallbackE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTTN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BnHwSensorTestCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023BsFingerprintSenseTouchC2EN7android2spINS2_22IFingerprintSenseTouchEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintSenseTouch::BsFingerprintSenseTouch(android::sp<com::fingerprints::extension::V1_0::IFingerprintSenseTouch>) */
int _ZN3com12fingerprints9extension4V1_023BsFingerprintSenseTouchC2EN7android2spINS2_22IFingerprintSenseTouchEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch23_hidl_finishCalibrationEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::_hidl_finishCalibration(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch23_hidl_finishCalibrationEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallback13_hidl_onErrorEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwRecalibrationCallback::_hidl_onError(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallback13_hidl_onErrorEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-com::fingerprints::extension::V1_0::BnHwRecalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTTN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BpHwFingerprintEngineering */
extern void* _ZTTN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BnHwFingerprintEngineering */
extern void* _ZTVN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch */
extern void* _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BnHwSensorTestCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackE;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch10descriptorE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::descriptor */
extern void* _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch10descriptorE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BpHwImageInjectionCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackE;

/* Symbol: _ZThn16_N3com12fingerprints9extension4V1_025BpHwRecalibrationCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::onLastStrongRef(void const*) */
int _ZThn16_N3com12fingerprints9extension4V1_025BpHwRecalibrationCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration21setHALInstrumentationEv(void);

/* Symbol: _ZTv0_n40_N3com12fingerprints9extension4V1_024BpHwImageCaptureCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N3com12fingerprints9extension4V1_024BpHwImageCaptureCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator11isUserValidEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::isUserValid(unsigned long) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator11isUserValidEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest13getSensorInfoENSt3__18functionIFvRKNS2_10SensorInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::getSensorInfo(std::__1::function<void (com::fingerprints::extension::V1_0::SensorInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest13getSensorInfoENSt3__18functionIFvRKNS2_10SensorInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback8castFromERKN7android2spIS3_EEb */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::castFrom(android::sp<com::fingerprints::extension::V1_0::IImageCaptureCallback> const&, bool) */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback8castFromERKN7android2spIS3_EEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-com::fingerprints::extension::V1_0::BnHwImageCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_021IImageCaptureCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::IImageCaptureCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_021IImageCaptureCallbackE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025IFingerprintAuthenticatorE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::IFingerprintAuthenticator */
extern void* _ZTCN3com12fingerprints9extension4V1_025IFingerprintAuthenticatorE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_023IFingerprintEngineeringE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::IFingerprintEngineering */
extern void* _ZTVN3com12fingerprints9extension4V1_023IFingerprintEngineeringE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageInjectionCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackE0_N7android8hardware11BpInterfaceINS2_21IImageCaptureCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<com::fingerprints::extension::V1_0::IImageCaptureCallback>-in-com::fingerprints::extension::V1_0::BpHwImageCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackE0_N7android8hardware11BpInterfaceINS2_21IImageCaptureCallbackEEE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_023BsRecalibrationCallbackE0_NS2_22IRecalibrationCallbackE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IRecalibrationCallback-in-com::fingerprints::extension::V1_0::BsRecalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_023BsRecalibrationCallbackE0_NS2_22IRecalibrationCallbackE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_019IVerifyUserCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::IVerifyUserCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_019IVerifyUserCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticator16_hidl_verifyUserEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator::_hidl_verifyUser(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticator16_hidl_verifyUserEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_025IFingerprintAuthenticatorE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::IFingerprintAuthenticator */
extern void* _ZTVN3com12fingerprints9extension4V1_025IFingerprintAuthenticatorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback15onLastStrongRefEPKv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::onLastStrongRef(void const*) */
int _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BsFingerprintSensorTest13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintSensorTest::addOnewayTask(std::__1::function<void ()>) */
int _ZN3com12fingerprints9extension4V1_023BsFingerprintSensorTest13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback7onImageERKNS2_16ImageCaptureDataE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::onImage(com::fingerprints::extension::V1_0::ImageCaptureData const&) */
int _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback7onImageERKNS2_16ImageCaptureDataE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-com::fingerprints::extension::V1_0::BpHwRecalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BpHwRecalibrationCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::BpHwVerifyUserCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN3com12fingerprints9extension4V1_025IFingerprintRecalibrationE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::IFingerprintRecalibration */
extern void* _ZTTN3com12fingerprints9extension4V1_025IFingerprintRecalibrationE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-com::fingerprints::extension::V1_0::BpHwVerifyUserCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackC1ERKN7android2spINS2_23IImageInjectionCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageInjectionCallback::BnHwImageInjectionCallback(android::sp<com::fingerprints::extension::V1_0::IImageInjectionCallback> const&) */
int _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackC1ERKN7android2spINS2_23IImageInjectionCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation15onLastStrongRefEPKv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::onLastStrongRef(void const*) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration14preRecalibrateEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::preRecalibrate() */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration14preRecalibrateEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestD0Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::~BnHwFingerprintSensorTest() */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering21stopImageSubscriptionEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::stopImageSubscription() */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering21stopImageSubscriptionEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestD1Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::~BnHwFingerprintSensorTest() */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallback13_hidl_onImageEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageCaptureCallback::_hidl_onImage(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallback13_hidl_onImageEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BpHwImageCaptureCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_022IRecalibrationCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::IRecalibrationCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_022IRecalibrationCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchC2ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::BpHwFingerprintSenseTouch(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchC2ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestD2Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::~BnHwFingerprintSensorTest() */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestD2Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallback14_hidl_onStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwCalibrationCallback::_hidl_onStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallback14_hidl_onStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-com::fingerprints::extension::V1_0::BpHwCalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback14_hidl_onResultEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS2_16SensorTestResultE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCallback::_hidl_onResult(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, com::fingerprints::extension::V1_0::SensorTestResult const&) */
int _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback14_hidl_onResultEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS2_16SensorTestResultE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_025BnHwFingerprintNavigationD0Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::~BnHwFingerprintNavigation() */
int _ZThn32_N3com12fingerprints9extension4V1_025BnHwFingerprintNavigationD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BsFingerprintRecalibration13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintRecalibration::addOnewayTask(std::__1::function<void ()>) */
int _ZN3com12fingerprints9extension4V1_026BsFingerprintRecalibration13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationD0Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration::~BnHwFingerprintRecalibration() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021writeEmbeddedToParcelERKNS2_16ImageCaptureDataEPN7android8hardware6ParcelEmm */
/* Demangled: com::fingerprints::extension::V1_0::writeEmbeddedToParcel(com::fingerprints::extension::V1_0::ImageCaptureData const&, android::hardware::Parcel*, unsigned long, unsigned long) */
int _ZN3com12fingerprints9extension4V1_021writeEmbeddedToParcelERKNS2_16ImageCaptureDataEPN7android8hardware6ParcelEmm(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_025BnHwFingerprintNavigationD1Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::~BnHwFingerprintNavigation() */
int _ZThn32_N3com12fingerprints9extension4V1_025BnHwFingerprintNavigationD1Ev(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationD1Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration::~BnHwFingerprintRecalibration() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch11setAuthModeENS2_28SenseTouchAuthenticationModeEj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::setAuthMode(com::fingerprints::extension::V1_0::SenseTouchAuthenticationMode, unsigned int) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch11setAuthModeENS2_28SenseTouchAuthenticationModeEj(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_022IFingerprintSensorTestE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::IFingerprintSensorTest */
extern void* _ZTTN3com12fingerprints9extension4V1_022IFingerprintSensorTestE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration17_hidl_recalibrateEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS5_8hidl_vecIhEERKNS4_2spINS2_22IRecalibrationCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::_hidl_recalibrate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&, android::sp<com::fingerprints::extension::V1_0::IRecalibrationCallback> const&) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration17_hidl_recalibrateEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS5_8hidl_vecIhEERKNS4_2spINS2_22IRecalibrationCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::ping() */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback4pingEv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_023IFingerprintCalibrationENS_4hidl4base4V1_05IBaseENS6_26BpHwFingerprintCalibrationEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<com::fingerprints::extension::V1_0::IFingerprintCalibration> > android::hardware::details::castInterface<com::fingerprints::extension::V1_0::IFingerprintCalibration, android::hidl::base::V1_0::IBase, com::fingerprints::extension::V1_0::BpHwFingerprintCalibration>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_023IFingerprintCalibrationENS_4hidl4base4V1_05IBaseENS6_26BpHwFingerprintCalibrationEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_022IFingerprintSenseTouchENS_4hidl4base4V1_05IBaseENS6_25BpHwFingerprintSenseTouchEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<com::fingerprints::extension::V1_0::IFingerprintSenseTouch> > android::hardware::details::castInterface<com::fingerprints::extension::V1_0::IFingerprintSenseTouch, android::hidl::base::V1_0::IBase, com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_022IFingerprintSenseTouchENS_4hidl4base4V1_05IBaseENS6_25BpHwFingerprintSenseTouchEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_022IFingerprintSensorTestE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::IFingerprintSensorTest */
extern void* _ZTVN3com12fingerprints9extension4V1_022IFingerprintSensorTestE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_023IImageInjectionCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::IImageInjectionCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_023IImageInjectionCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-com::fingerprints::extension::V1_0::BnHwCalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTTN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration */
extern void* _ZTTN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationE;

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::ping() */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZThn16_N3com12fingerprints9extension4V1_026BpHwFingerprintCalibration15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::onLastStrongRef(void const*) */
int _ZThn16_N3com12fingerprints9extension4V1_026BpHwFingerprintCalibration15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-com::fingerprints::extension::V1_0::BnHwImageInjectionCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallback14_hidl_onResultEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwVerifyUserCallback::_hidl_onResult(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallback14_hidl_onResultEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestC1ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::BpHwFingerprintSensorTest(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestC1ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackC1ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::BpHwCalibrationCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackC1ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallback10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallback10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE(void);

/* Symbol: _ZThn16_N3com12fingerprints9extension4V1_026BpHwFingerprintEngineering15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::onLastStrongRef(void const*) */
int _ZThn16_N3com12fingerprints9extension4V1_026BpHwFingerprintEngineering15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackC2ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::BpHwImageCaptureCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackC2ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackC1ERKN7android2spINS2_19IVerifyUserCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwVerifyUserCallback::BnHwVerifyUserCallback(android::sp<com::fingerprints::extension::V1_0::IVerifyUserCallback> const&) */
int _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackC1ERKN7android2spINS2_19IVerifyUserCallbackEEE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BpHwVerifyUserCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_019IVerifyUserCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::IVerifyUserCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_019IVerifyUserCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-com::fingerprints::extension::V1_0::BnHwFingerprintEngineering */
extern void* _ZTCN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025IFingerprintRecalibrationE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::IFingerprintRecalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_025IFingerprintRecalibrationE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_023IImageInjectionCallbackENS_4hidl4base4V1_05IBaseENS6_26BpHwImageInjectionCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<com::fingerprints::extension::V1_0::IImageInjectionCallback> > android::hardware::details::castInterface<com::fingerprints::extension::V1_0::IImageInjectionCallback, android::hidl::base::V1_0::IBase, com::fingerprints::extension::V1_0::BpHwImageInjectionCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_023IImageInjectionCallbackENS_4hidl4base4V1_05IBaseENS6_26BpHwImageInjectionCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering13cancelCaptureEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::cancelCapture() */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering13cancelCaptureEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BnHwCalibrationCallback::ping() */
int _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallback4pingEv(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BnHwCalibrationCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackE;

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_023BnHwCalibrationCallbackD0Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwCalibrationCallback::~BnHwCalibrationCallback() */
int _ZThn32_N3com12fingerprints9extension4V1_023BnHwCalibrationCallbackD0Ev(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_023BnHwCalibrationCallbackD1Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwCalibrationCallback::~BnHwCalibrationCallback() */
int _ZThn32_N3com12fingerprints9extension4V1_023BnHwCalibrationCallbackD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-com::fingerprints::extension::V1_0::BnHwFingerprintCalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationE0_N7android8hardware7IBinderE;

/* Symbol: _ZThn16_N3com12fingerprints9extension4V1_025BpHwFingerprintNavigation15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::onLastStrongRef(void const*) */
int _ZThn16_N3com12fingerprints9extension4V1_025BpHwFingerprintNavigation15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest22_hidl_cancelSensorTestEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::_hidl_cancelSensorTest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest22_hidl_cancelSensorTestEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallback10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallback10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_027BsSensorTestCaptureCallbackE0_NS2_26ISensorTestCaptureCallbackE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::ISensorTestCaptureCallback-in-com::fingerprints::extension::V1_0::BsSensorTestCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_027BsSensorTestCaptureCallbackE0_NS2_26ISensorTestCaptureCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback14_hidl_onResultEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEjmmRKNS5_8hidl_vecIhEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::_hidl_onResult(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, unsigned long, unsigned long, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback14_hidl_onResultEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEjmmRKNS5_8hidl_vecIhEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BpHwFingerprintCalibration */
extern void* _ZTVN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest20_hidl_getSensorTestsEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENSt3__18functionIFvRKNS5_8hidl_vecINS2_10SensorTestEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::_hidl_getSensorTests(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_vec<com::fingerprints::extension::V1_0::SensorTest> const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest20_hidl_getSensorTestsEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENSt3__18functionIFvRKNS5_8hidl_vecINS2_10SensorTestEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering19_hidl_cancelCaptureEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::_hidl_cancelCapture(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering19_hidl_cancelCaptureEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest */
extern void* _ZTVN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestE;

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorC1ERKN7android2spINS2_25IFingerprintAuthenticatorEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator::BnHwFingerprintAuthenticator(android::sp<com::fingerprints::extension::V1_0::IFingerprintAuthenticator> const&) */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorC1ERKN7android2spINS2_25IFingerprintAuthenticatorEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-com::fingerprints::extension::V1_0::BnHwFingerprintEngineering */
extern void* _ZTCN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-com::fingerprints::extension::V1_0::BpHwImageCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationE0_NS2_25IFingerprintRecalibrationE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintRecalibration-in-com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationE0_NS2_25IFingerprintRecalibrationE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_026ISensorTestCaptureCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::ISensorTestCaptureCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_026ISensorTestCaptureCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback16_hidl_onAcquiredEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::_hidl_onAcquired(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback16_hidl_onAcquiredEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEj(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchE0_N7android8hardware11BpInterfaceINS2_22IFingerprintSenseTouchEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<com::fingerprints::extension::V1_0::IFingerprintSenseTouch>-in-com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchE0_N7android8hardware11BpInterfaceINS2_22IFingerprintSenseTouchEEE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_021IImageCaptureCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::IImageCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_021IImageCaptureCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_023IFingerprintEngineeringE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::IFingerprintEngineering */
extern void* _ZTCN3com12fingerprints9extension4V1_023IFingerprintEngineeringE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationENS6_25IFingerprintRecalibrationEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IFingerprintRecalibration> android::hardware::details::getServiceInternal<com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration, com::fingerprints::extension::V1_0::IFingerprintRecalibration, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationENS6_25IFingerprintRecalibrationEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_023IImageInjectionCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::IImageInjectionCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_023IImageInjectionCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationC2ERKN7android2spINS2_22IFingerprintNavigationEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::BnHwFingerprintNavigation(android::sp<com::fingerprints::extension::V1_0::IFingerprintNavigation> const&) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationC2ERKN7android2spINS2_22IFingerprintNavigationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-com::fingerprints::extension::V1_0::BnHwSensorTestCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator8castFromERKN7android2spIS3_EEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::castFrom(android::sp<com::fingerprints::extension::V1_0::IFingerprintAuthenticator> const&, bool) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator8castFromERKN7android2spIS3_EEb(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration */
extern void* _ZTVN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering19startImageInjectionERKN7android2spINS2_23IImageInjectionCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::startImageInjection(android::sp<com::fingerprints::extension::V1_0::IImageInjectionCallback> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering19startImageInjectionERKN7android2spINS2_23IImageInjectionCallbackEEE(void);

/* Symbol: _ZTv0_n40_N3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch15onLastStrongRefEPKv */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::onLastStrongRef(void const*) */
int _ZTv0_n40_N3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestC1ERKN7android2spINS2_22IFingerprintSensorTestEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::BnHwFingerprintSensorTest(android::sp<com::fingerprints::extension::V1_0::IFingerprintSensorTest> const&) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestC1ERKN7android2spINS2_22IFingerprintSensorTestEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering20_hidl_setEnrollTokenEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS5_8hidl_vecIhEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::_hidl_setEnrollToken(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering20_hidl_setEnrollTokenEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS5_8hidl_vecIhEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationC2ERKN7android2spINS2_25IFingerprintRecalibrationEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration::BnHwFingerprintRecalibration(android::sp<com::fingerprints::extension::V1_0::IFingerprintRecalibration> const&) */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationC2ERKN7android2spINS2_25IFingerprintRecalibrationEEE(void);

/* Symbol: _ZTv0_n40_N3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration15onLastStrongRefEPKv */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::onLastStrongRef(void const*) */
int _ZTv0_n40_N3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback15onLastStrongRefEPKv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::onLastStrongRef(void const*) */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_023IFingerprintEngineeringENS_4hidl4base4V1_05IBaseENS6_26BpHwFingerprintEngineeringEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<com::fingerprints::extension::V1_0::IFingerprintEngineering> > android::hardware::details::castInterface<com::fingerprints::extension::V1_0::IFingerprintEngineering, android::hidl::base::V1_0::IBase, com::fingerprints::extension::V1_0::BpHwFingerprintEngineering>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_023IFingerprintEngineeringENS_4hidl4base4V1_05IBaseENS6_26BpHwFingerprintEngineeringEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-com::fingerprints::extension::V1_0::BnHwImageInjectionCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BpHwVerifyUserCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorC2ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::BpHwFingerprintAuthenticator(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorC2ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BsFingerprintNavigationC2EN7android2spINS2_22IFingerprintNavigationEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintNavigation::BsFingerprintNavigation(android::sp<com::fingerprints::extension::V1_0::IFingerprintNavigation>) */
int _ZN3com12fingerprints9extension4V1_023BsFingerprintNavigationC2EN7android2spINS2_22IFingerprintNavigationEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022IRecalibrationCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::IRecalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022IRecalibrationCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_024BsFingerprintCalibrationC1EN7android2spINS2_23IFingerprintCalibrationEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintCalibration::BsFingerprintCalibration(android::sp<com::fingerprints::extension::V1_0::IFingerprintCalibration>) */
int _ZN3com12fingerprints9extension4V1_024BsFingerprintCalibrationC1EN7android2spINS2_23IFingerprintCalibrationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationC1ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::BpHwFingerprintNavigation(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationC1ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest19_hidl_cancelCaptureEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::_hidl_cancelCapture(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest19_hidl_cancelCaptureEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackD0Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwImageInjectionCallback::~BnHwImageInjectionCallback() */
int _ZThn32_N3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackD0Ev(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_019ISensorTestCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::ISensorTestCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_019ISensorTestCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::ping() */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackD1Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwImageInjectionCallback::~BnHwImageInjectionCallback() */
int _ZThn32_N3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback8castFromERKN7android2spIS3_EEb */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::castFrom(android::sp<com::fingerprints::extension::V1_0::ISensorTestCallback> const&, bool) */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback8castFromERKN7android2spIS3_EEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallback12_hidl_onHelpEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwVerifyUserCallback::_hidl_onHelp(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallback12_hidl_onHelpEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BsFingerprintSenseTouch13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintSenseTouch::addOnewayTask(std::__1::function<void ()>) */
int _ZN3com12fingerprints9extension4V1_023BsFingerprintSenseTouch13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-com::fingerprints::extension::V1_0::BpHwImageInjectionCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_020BsSensorTestCallbackE0_NS2_19ISensorTestCallbackE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::ISensorTestCallback-in-com::fingerprints::extension::V1_0::BsSensorTestCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_020BsSensorTestCallbackE0_NS2_19ISensorTestCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_021BsCalibrationCallbackC1EN7android2spINS2_20ICalibrationCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsCalibrationCallback::BsCalibrationCallback(android::sp<com::fingerprints::extension::V1_0::ICalibrationCallback>) */
int _ZN3com12fingerprints9extension4V1_021BsCalibrationCallbackC1EN7android2spINS2_20ICalibrationCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallback13_hidl_onErrorEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback::_hidl_onError(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallback13_hidl_onErrorEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration8castFromERKN7android2spIS3_EEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::castFrom(android::sp<com::fingerprints::extension::V1_0::IFingerprintCalibration> const&, bool) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration8castFromERKN7android2spIS3_EEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering27_hidl_stopImageSubscriptionEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::_hidl_stopImageSubscription(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering27_hidl_stopImageSubscriptionEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch */
extern void* _ZTTN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_022BsImageCaptureCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BsImageCaptureCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_022BsImageCaptureCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationE0_N7android8hardware11BpInterfaceINS2_23IFingerprintCalibrationEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<com::fingerprints::extension::V1_0::IFingerprintCalibration>-in-com::fingerprints::extension::V1_0::BpHwFingerprintCalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationE0_N7android8hardware11BpInterfaceINS2_23IFingerprintCalibrationEEE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_024BsFingerprintEngineeringE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BsFingerprintEngineering */
extern void* _ZTVN3com12fingerprints9extension4V1_024BsFingerprintEngineeringE;

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackD0Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwRecalibrationCallback::~BnHwRecalibrationCallback() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackD0Ev(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_019ISensorTestCallbackENS_4hidl4base4V1_05IBaseENS6_22BpHwSensorTestCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<com::fingerprints::extension::V1_0::ISensorTestCallback> > android::hardware::details::castInterface<com::fingerprints::extension::V1_0::ISensorTestCallback, android::hidl::base::V1_0::IBase, com::fingerprints::extension::V1_0::BpHwSensorTestCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_019ISensorTestCallbackENS_4hidl4base4V1_05IBaseENS6_22BpHwSensorTestCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackD1Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwRecalibrationCallback::~BnHwRecalibrationCallback() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwCalibrationCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibration15_hidl_calibrateEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintCalibration::_hidl_calibrate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibration15_hidl_calibrateEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationD0Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration::~BnHwFingerprintRecalibration() */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationD0Ev(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationE0_N7android8hardware11BpInterfaceINS2_25IFingerprintRecalibrationEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<com::fingerprints::extension::V1_0::IFingerprintRecalibration>-in-com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationE0_N7android8hardware11BpInterfaceINS2_25IFingerprintRecalibrationEEE;

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageCaptureCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback8castFromERKN7android2spIS3_EEb */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::castFrom(android::sp<com::fingerprints::extension::V1_0::IImageInjectionCallback> const&, bool) */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback8castFromERKN7android2spIS3_EEb(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering20_hidl_setEnrollTokenEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::_hidl_setEnrollToken(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering20_hidl_setEnrollTokenEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationD1Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration::~BnHwFingerprintRecalibration() */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationD1Ev(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationD2Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration::~BnHwFingerprintRecalibration() */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationD2Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest15onLastStrongRefEPKv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::onLastStrongRef(void const*) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest15onLastStrongRefEPKv(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BnHwVerifyUserCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackENS6_23IImageInjectionCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IImageInjectionCallback> android::hardware::details::getServiceInternal<com::fingerprints::extension::V1_0::BpHwImageInjectionCallback, com::fingerprints::extension::V1_0::IImageInjectionCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackENS6_23IImageInjectionCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback13_hidl_onErrorEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::_hidl_onError(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback13_hidl_onErrorEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEj(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022IFingerprintSenseTouchE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::IFingerprintSenseTouch */
extern void* _ZTCN3com12fingerprints9extension4V1_022IFingerprintSenseTouchE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_021writeEmbeddedToParcelERKNS2_16SensorTestResultEPN7android8hardware6ParcelEmm */
/* Demangled: com::fingerprints::extension::V1_0::writeEmbeddedToParcel(com::fingerprints::extension::V1_0::SensorTestResult const&, android::hardware::Parcel*, unsigned long, unsigned long) */
int _ZN3com12fingerprints9extension4V1_021writeEmbeddedToParcelERKNS2_16SensorTestResultEPN7android8hardware6ParcelEmm(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackD0Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwImageCaptureCallback::~BnHwImageCaptureCallback() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackD0Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback::~BnHwSensorTestCaptureCallback() */
int _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator6cancelEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::cancel() */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator6cancelEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BsFingerprintAuthenticatorE0_NS2_25IFingerprintAuthenticatorE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintAuthenticator-in-com::fingerprints::extension::V1_0::BsFingerprintAuthenticator */
extern void* _ZTCN3com12fingerprints9extension4V1_026BsFingerprintAuthenticatorE0_NS2_25IFingerprintAuthenticatorE;

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackD1Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwImageCaptureCallback::~BnHwImageCaptureCallback() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackD1Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback::~BnHwSensorTestCaptureCallback() */
int _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback13_hidl_onErrorEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::_hidl_onError(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback13_hidl_onErrorEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEj(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackE0_NS2_26ISensorTestCaptureCallbackE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::ISensorTestCaptureCallback-in-com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackE0_NS2_26ISensorTestCaptureCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-com::fingerprints::extension::V1_0::BpHwVerifyUserCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::ping() */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback10descriptorE */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::descriptor */
extern void* _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback10descriptorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackD2Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback::~BnHwSensorTestCaptureCallback() */
int _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackD2Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageInjectionCallback::ping() */
int _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallback4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorD0Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator::~BnHwFingerprintAuthenticator() */
int _ZThn32_N3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorD0Ev(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-com::fingerprints::extension::V1_0::BnHwImageCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback8onResultERKNS2_16SensorTestResultE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCallback::onResult(com::fingerprints::extension::V1_0::SensorTestResult const&) */
int _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback8onResultERKNS2_16SensorTestResultE(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorD1Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator::~BnHwFingerprintAuthenticator() */
int _ZThn32_N3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration11recalibrateERKN7android8hardware8hidl_vecIhEERKNS4_2spINS2_22IRecalibrationCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::recalibrate(android::hardware::hidl_vec<unsigned char> const&, android::sp<com::fingerprints::extension::V1_0::IRecalibrationCallback> const&) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration11recalibrateERKN7android8hardware8hidl_vecIhEERKNS4_2spINS2_22IRecalibrationCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-com::fingerprints::extension::V1_0::BnHwSensorTestCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback8castFromERKN7android2spIS3_EEb */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::castFrom(android::sp<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback> const&, bool) */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback8castFromERKN7android2spIS3_EEb(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator */
extern void* _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN3com12fingerprints9extension4V1_023IFingerprintCalibrationE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::IFingerprintCalibration */
extern void* _ZTTN3com12fingerprints9extension4V1_023IFingerprintCalibrationE;

/* Symbol: _ZTTN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BnHwFingerprintNavigation */
extern void* _ZTTN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackC1ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::BpHwRecalibrationCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackC1ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022readEmbeddedFromParcelERKNS2_16ImageCaptureDataERKN7android8hardware6ParcelEmm */
/* Demangled: com::fingerprints::extension::V1_0::readEmbeddedFromParcel(com::fingerprints::extension::V1_0::ImageCaptureData const&, android::hardware::Parcel const&, unsigned long, unsigned long) */
int _ZN3com12fingerprints9extension4V1_022readEmbeddedFromParcelERKNS2_16ImageCaptureDataERKN7android8hardware6ParcelEmm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::ping() */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback14_hidl_onCancelEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::_hidl_onCancel(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback14_hidl_onCancelEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE(void);

/* Symbol: _ZTv0_n40_N3com12fingerprints9extension4V1_026BpHwImageInjectionCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N3com12fingerprints9extension4V1_026BpHwImageInjectionCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN3com12fingerprints9extension4V1_023IImageInjectionCallbackEvEENS_2spIT_EESA_ */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IImageInjectionCallback> android::hardware::details::wrapPassthrough<com::fingerprints::extension::V1_0::IImageInjectionCallback, void>(android::sp<com::fingerprints::extension::V1_0::IImageInjectionCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN3com12fingerprints9extension4V1_023IImageInjectionCallbackEvEENS_2spIT_EESA_(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-com::fingerprints::extension::V1_0::BnHwFingerprintNavigation */
extern void* _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-com::fingerprints::extension::V1_0::BpHwFingerprintNavigation */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022readEmbeddedFromParcelERKNS2_10SensorTestERKN7android8hardware6ParcelEmm */
/* Demangled: com::fingerprints::extension::V1_0::readEmbeddedFromParcel(com::fingerprints::extension::V1_0::SensorTest const&, android::hardware::Parcel const&, unsigned long, unsigned long) */
int _ZN3com12fingerprints9extension4V1_022readEmbeddedFromParcelERKNS2_10SensorTestERKN7android8hardware6ParcelEmm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::ping() */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback4pingEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_020BsVerifyUserCallbackE0_NS2_19IVerifyUserCallbackE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IVerifyUserCallback-in-com::fingerprints::extension::V1_0::BsVerifyUserCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_020BsVerifyUserCallbackE0_NS2_19IVerifyUserCallbackE;

/* Symbol: _ZTv0_n40_N3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator15onLastStrongRefEPKv */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::onLastStrongRef(void const*) */
int _ZTv0_n40_N3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackD0Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwVerifyUserCallback::~BnHwVerifyUserCallback() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_022IFingerprintSensorTestENS_4hidl4base4V1_05IBaseENS6_25BpHwFingerprintSensorTestEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<com::fingerprints::extension::V1_0::IFingerprintSensorTest> > android::hardware::details::castInterface<com::fingerprints::extension::V1_0::IFingerprintSensorTest, android::hidl::base::V1_0::IBase, com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_022IFingerprintSensorTestENS_4hidl4base4V1_05IBaseENS6_25BpHwFingerprintSensorTestEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback14_hidl_onInjectEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENSt3__18functionIFvRKNS5_8hidl_vecIhEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::_hidl_onInject(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback14_hidl_onInjectEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENSt3__18functionIFvRKNS5_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackC2ERKN7android2spINS2_19ISensorTestCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCallback::BnHwSensorTestCallback(android::sp<com::fingerprints::extension::V1_0::ISensorTestCallback> const&) */
int _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackC2ERKN7android2spINS2_19ISensorTestCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_027BsSensorTestCaptureCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsSensorTestCaptureCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN3com12fingerprints9extension4V1_027BsSensorTestCaptureCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackD1Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwVerifyUserCallback::~BnHwVerifyUserCallback() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackD1Ev(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-com::fingerprints::extension::V1_0::BnHwFingerprintCalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZThn16_N3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::onLastStrongRef(void const*) */
int _ZThn16_N3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest15onLastStrongRefEPKv(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackD0Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwVerifyUserCallback::~BnHwVerifyUserCallback() */
int _ZThn32_N3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_020ICalibrationCallbackENS_4hidl4base4V1_05IBaseENS6_23BpHwCalibrationCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<com::fingerprints::extension::V1_0::ICalibrationCallback> > android::hardware::details::castInterface<com::fingerprints::extension::V1_0::ICalibrationCallback, android::hidl::base::V1_0::IBase, com::fingerprints::extension::V1_0::BpHwCalibrationCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_020ICalibrationCallbackENS_4hidl4base4V1_05IBaseENS6_23BpHwCalibrationCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallback16_hidl_onAcquiredEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback::_hidl_onAcquired(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallback16_hidl_onAcquiredEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackE;

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackD1Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwVerifyUserCallback::~BnHwVerifyUserCallback() */
int _ZThn32_N3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackD1Ev(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-com::fingerprints::extension::V1_0::BnHwCalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackE0_N7android8hardware11BpInterfaceINS2_22IRecalibrationCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<com::fingerprints::extension::V1_0::IRecalibrationCallback>-in-com::fingerprints::extension::V1_0::BpHwRecalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackE0_N7android8hardware11BpInterfaceINS2_22IRecalibrationCallbackEEE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback15onLastStrongRefEPKv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCallback::onLastStrongRef(void const*) */
int _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BnHwVerifyUserCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::ping() */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch17_hidl_isSupportedEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::_hidl_isSupported(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch17_hidl_isSupportedEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BsImageCaptureCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsImageCaptureCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN3com12fingerprints9extension4V1_022BsImageCaptureCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackC2ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCallback::BpHwSensorTestCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackC2ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringD0Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::~BnHwFingerprintEngineering() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::ping() */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest4pingEv(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestD0Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::~BnHwFingerprintSensorTest() */
int _ZThn32_N3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator21setHALInstrumentationEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::BpHwFingerprintCalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringD1Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::~BnHwFingerprintEngineering() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringD1Ev(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_025IFingerprintRecalibrationE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::IFingerprintRecalibration */
extern void* _ZTVN3com12fingerprints9extension4V1_025IFingerprintRecalibrationE;

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestD1Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::~BnHwFingerprintSensorTest() */
int _ZThn32_N3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback13_hidl_onErrorEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEi */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::_hidl_onError(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback13_hidl_onErrorEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEi(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BpHwCalibrationCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_025IFingerprintAuthenticatorENS_4hidl4base4V1_05IBaseENS6_28BpHwFingerprintAuthenticatorEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<com::fingerprints::extension::V1_0::IFingerprintAuthenticator> > android::hardware::details::castInterface<com::fingerprints::extension::V1_0::IFingerprintAuthenticator, android::hidl::base::V1_0::IBase, com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_025IFingerprintAuthenticatorENS_4hidl4base4V1_05IBaseENS6_28BpHwFingerprintAuthenticatorEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-com::fingerprints::extension::V1_0::BpHwCalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_023BsFingerprintNavigationE0_NS2_22IFingerprintNavigationE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintNavigation-in-com::fingerprints::extension::V1_0::BsFingerprintNavigation */
extern void* _ZTCN3com12fingerprints9extension4V1_023BsFingerprintNavigationE0_NS2_22IFingerprintNavigationE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::ping() */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticator17_hidl_isUserValidEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator::_hidl_isUserValid(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticator17_hidl_isUserValidEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BsFingerprintRecalibrationC2EN7android2spINS2_25IFingerprintRecalibrationEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintRecalibration::BsFingerprintRecalibration(android::sp<com::fingerprints::extension::V1_0::IFingerprintRecalibration>) */
int _ZN3com12fingerprints9extension4V1_026BsFingerprintRecalibrationC2EN7android2spINS2_25IFingerprintRecalibrationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020BsVerifyUserCallbackC1EN7android2spINS2_19IVerifyUserCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsVerifyUserCallback::BsVerifyUserCallback(android::sp<com::fingerprints::extension::V1_0::IVerifyUserCallback>) */
int _ZN3com12fingerprints9extension4V1_020BsVerifyUserCallbackC1EN7android2spINS2_19IVerifyUserCallbackEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_023BsFingerprintSenseTouchE0_NS2_22IFingerprintSenseTouchE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintSenseTouch-in-com::fingerprints::extension::V1_0::BsFingerprintSenseTouch */
extern void* _ZTCN3com12fingerprints9extension4V1_023BsFingerprintSenseTouchE0_NS2_22IFingerprintSenseTouchE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest13_hidl_captureEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::_hidl_capture(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest13_hidl_captureEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator */
extern void* _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering18stopImageInjectionEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::stopImageInjection() */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering18stopImageInjectionEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BsImageCaptureCallbackC2EN7android2spINS2_21IImageCaptureCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsImageCaptureCallback::BsImageCaptureCallback(android::sp<com::fingerprints::extension::V1_0::IImageCaptureCallback>) */
int _ZN3com12fingerprints9extension4V1_022BsImageCaptureCallbackC2EN7android2spINS2_21IImageCaptureCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackC1ERKN7android2spINS2_26ISensorTestCaptureCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback::BnHwSensorTestCaptureCallback(android::sp<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback> const&) */
int _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackC1ERKN7android2spINS2_26ISensorTestCaptureCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering8castFromERKN7android2spIS3_EEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::castFrom(android::sp<com::fingerprints::extension::V1_0::IFingerprintEngineering> const&, bool) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering8castFromERKN7android2spIS3_EEb(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringE0_NS2_23IFingerprintEngineeringE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintEngineering-in-com::fingerprints::extension::V1_0::BpHwFingerprintEngineering */
extern void* _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringE0_NS2_23IFingerprintEngineeringE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BsImageCaptureCallbackE0_NS2_21IImageCaptureCallbackE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IImageCaptureCallback-in-com::fingerprints::extension::V1_0::BsImageCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BsImageCaptureCallbackE0_NS2_21IImageCaptureCallbackE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticator12_hidl_cancelEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator::_hidl_cancel(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticator12_hidl_cancelEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackD0Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwRecalibrationCallback::~BnHwRecalibrationCallback() */
int _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallback10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwVerifyUserCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallback10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE(void);

/* Symbol: _ZThn16_N3com12fingerprints9extension4V1_023BpHwCalibrationCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BpHwCalibrationCallback::onLastStrongRef(void const*) */
int _ZThn16_N3com12fingerprints9extension4V1_023BpHwCalibrationCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware10fromBinderIN3com12fingerprints9extension4V1_021IImageCaptureCallbackENS5_24BpHwImageCaptureCallbackENS5_24BnHwImageCaptureCallbackEEENS_2spIT_EERKNS9_INS0_7IBinderEEE */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IImageCaptureCallback> android::hardware::fromBinder<com::fingerprints::extension::V1_0::IImageCaptureCallback, com::fingerprints::extension::V1_0::BpHwImageCaptureCallback, com::fingerprints::extension::V1_0::BnHwImageCaptureCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN3com12fingerprints9extension4V1_021IImageCaptureCallbackENS5_24BpHwImageCaptureCallbackENS5_24BnHwImageCaptureCallbackEEENS_2spIT_EERKNS9_INS0_7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackD1Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwRecalibrationCallback::~BnHwRecalibrationCallback() */
int _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback10onAcquiredEj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::onAcquired(unsigned int) */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback10onAcquiredEj(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch8getForceEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::getForce() */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch8getForceEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021writeEmbeddedToParcelERKNS2_15SensorTestInputEPN7android8hardware6ParcelEmm */
/* Demangled: com::fingerprints::extension::V1_0::writeEmbeddedToParcel(com::fingerprints::extension::V1_0::SensorTestInput const&, android::hardware::Parcel*, unsigned long, unsigned long) */
int _ZN3com12fingerprints9extension4V1_021writeEmbeddedToParcelERKNS2_15SensorTestInputEPN7android8hardware6ParcelEmm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestC2ERKN7android2spINS2_22IFingerprintSensorTestEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::BnHwFingerprintSensorTest(android::sp<com::fingerprints::extension::V1_0::IFingerprintSensorTest> const&) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestC2ERKN7android2spINS2_22IFingerprintSensorTestEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackD2Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwRecalibrationCallback::~BnHwRecalibrationCallback() */
int _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackD2Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackC1ERKN7android2spINS2_20ICalibrationCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwCalibrationCallback::BnHwCalibrationCallback(android::sp<com::fingerprints::extension::V1_0::ICalibrationCallback> const&) */
int _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackC1ERKN7android2spINS2_20ICalibrationCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibration10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintCalibration::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibration10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackC1ERKN7android2spINS2_21IImageCaptureCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageCaptureCallback::BnHwImageCaptureCallback(android::sp<com::fingerprints::extension::V1_0::IImageCaptureCallback> const&) */
int _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackC1ERKN7android2spINS2_21IImageCaptureCallbackEEE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_024BsFingerprintEngineering13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintEngineering::addOnewayTask(std::__1::function<void ()>) */
int _ZN3com12fingerprints9extension4V1_024BsFingerprintEngineering13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN3com12fingerprints9extension4V1_023IImageInjectionCallbackENS5_26BpHwImageInjectionCallbackENS5_26BnHwImageInjectionCallbackEEENS_2spIT_EERKNS9_INS0_7IBinderEEE */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IImageInjectionCallback> android::hardware::fromBinder<com::fingerprints::extension::V1_0::IImageInjectionCallback, com::fingerprints::extension::V1_0::BpHwImageInjectionCallback, com::fingerprints::extension::V1_0::BnHwImageInjectionCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN3com12fingerprints9extension4V1_023IImageInjectionCallbackENS5_26BpHwImageInjectionCallbackENS5_26BnHwImageInjectionCallbackEEENS_2spIT_EERKNS9_INS0_7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BsImageInjectionCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsImageInjectionCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN3com12fingerprints9extension4V1_024BsImageInjectionCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTv0_n40_N3com12fingerprints9extension4V1_025BpHwRecalibrationCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N3com12fingerprints9extension4V1_025BpHwRecalibrationCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackD0Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwImageCaptureCallback::~BnHwImageCaptureCallback() */
int _ZThn32_N3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020BsSensorTestCallbackC1EN7android2spINS2_19ISensorTestCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsSensorTestCallback::BsSensorTestCallback(android::sp<com::fingerprints::extension::V1_0::ISensorTestCallback>) */
int _ZN3com12fingerprints9extension4V1_020BsSensorTestCallbackC1EN7android2spINS2_19ISensorTestCallbackEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-com::fingerprints::extension::V1_0::BpHwFingerprintCalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTTN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BnHwFingerprintEngineering */
extern void* _ZTTN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023BsFingerprintSenseTouchC1EN7android2spINS2_22IFingerprintSenseTouchEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintSenseTouch::BsFingerprintSenseTouch(android::sp<com::fingerprints::extension::V1_0::IFingerprintSenseTouch>) */
int _ZN3com12fingerprints9extension4V1_023BsFingerprintSenseTouchC1EN7android2spINS2_22IFingerprintSenseTouchEEE(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackD1Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwImageCaptureCallback::~BnHwImageCaptureCallback() */
int _ZThn32_N3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackD1Ev(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BnHwCalibrationCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BnHwImageCaptureCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackENS6_26ISensorTestCaptureCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback> android::hardware::details::getServiceInternal<com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback, com::fingerprints::extension::V1_0::ISensorTestCaptureCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackENS6_26ISensorTestCaptureCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb(void);

/* Symbol: _ZTv0_n40_N3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering19_hidl_cancelCaptureEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::_hidl_cancelCapture(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering19_hidl_cancelCaptureEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BpHwImageInjectionCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BnHwImageInjectionCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationENS6_22IFingerprintNavigationEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IFingerprintNavigation> android::hardware::details::getServiceInternal<com::fingerprints::extension::V1_0::BpHwFingerprintNavigation, com::fingerprints::extension::V1_0::IFingerprintNavigation, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationENS6_22IFingerprintNavigationEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigation10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigation10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch17finishCalibrationEjj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::finishCalibration(unsigned int, unsigned int) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch17finishCalibrationEjj(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest13_hidl_captureEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS4_2spINS2_26ISensorTestCaptureCallbackEEEbb */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::_hidl_capture(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback> const&, bool, bool) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest13_hidl_captureEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS4_2spINS2_26ISensorTestCaptureCallbackEEEbb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest19_hidl_runSensorTestEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::_hidl_runSensorTest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest19_hidl_runSensorTestEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback8onStatusEjbjjj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::onStatus(unsigned int, bool, unsigned int, unsigned int, unsigned int) */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback8onStatusEjbjjj(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-com::fingerprints::extension::V1_0::BnHwRecalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackE0_NS2_20ICalibrationCallbackE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::ICalibrationCallback-in-com::fingerprints::extension::V1_0::BpHwCalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackE0_NS2_20ICalibrationCallbackE;

/* Symbol: _ZTTN3com12fingerprints9extension4V1_020ICalibrationCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::ICalibrationCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_020ICalibrationCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator */
extern void* _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_023BsFingerprintSensorTestE0_NS2_22IFingerprintSensorTestE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintSensorTest-in-com::fingerprints::extension::V1_0::BsFingerprintSensorTest */
extern void* _ZTCN3com12fingerprints9extension4V1_023BsFingerprintSensorTestE0_NS2_22IFingerprintSensorTestE;

/* Symbol: _ZTTN3com12fingerprints9extension4V1_021IImageCaptureCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::IImageCaptureCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_021IImageCaptureCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackC2ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::BpHwVerifyUserCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackC2ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_026BsFingerprintAuthenticatorE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BsFingerprintAuthenticator */
extern void* _ZTVN3com12fingerprints9extension4V1_026BsFingerprintAuthenticatorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback10descriptorE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::descriptor */
extern void* _ZN3com12fingerprints9extension4V1_019ISensorTestCallback10descriptorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_023IImageInjectionCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::IImageInjectionCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_023IImageInjectionCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator21setHALInstrumentationEv(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN3com12fingerprints9extension4V1_019IVerifyUserCallbackEvEENS_2spIT_EESA_ */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IVerifyUserCallback> android::hardware::details::wrapPassthrough<com::fingerprints::extension::V1_0::IVerifyUserCallback, void>(android::sp<com::fingerprints::extension::V1_0::IVerifyUserCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN3com12fingerprints9extension4V1_019IVerifyUserCallbackEvEENS_2spIT_EESA_(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationC2ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::BpHwFingerprintCalibration(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationC2ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_024BsFingerprintEngineeringE0_NS2_23IFingerprintEngineeringE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintEngineering-in-com::fingerprints::extension::V1_0::BsFingerprintEngineering */
extern void* _ZTCN3com12fingerprints9extension4V1_024BsFingerprintEngineeringE0_NS2_23IFingerprintEngineeringE;

/* Symbol: _ZTv0_n40_N3com12fingerprints9extension4V1_025BpHwFingerprintNavigation15onLastStrongRefEPKv */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::onLastStrongRef(void const*) */
int _ZTv0_n40_N3com12fingerprints9extension4V1_025BpHwFingerprintNavigation15onLastStrongRefEPKv(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_019IVerifyUserCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::IVerifyUserCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_019IVerifyUserCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration21notifySyspropsChangedEv(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationD0Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintCalibration::~BnHwFingerprintCalibration() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering12startCaptureERKN7android2spINS2_21IImageCaptureCallbackEEEj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::startCapture(android::sp<com::fingerprints::extension::V1_0::IImageCaptureCallback> const&, unsigned int) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering12startCaptureERKN7android2spINS2_21IImageCaptureCallbackEEEj(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation19setNavigationConfigERKNS2_16NavigationConfigE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::setNavigationConfig(com::fingerprints::extension::V1_0::NavigationConfig const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation19setNavigationConfigERKNS2_16NavigationConfigE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback8castFromERKN7android2spIS3_EEb */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::castFrom(android::sp<com::fingerprints::extension::V1_0::IVerifyUserCallback> const&, bool) */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback8castFromERKN7android2spIS3_EEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback14_hidl_onStatusEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEi */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::_hidl_onStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback14_hidl_onStatusEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEi(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationD1Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintCalibration::~BnHwFingerprintCalibration() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringC1ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::BpHwFingerprintEngineering(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringC1ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation8castFromERKN7android2spIS3_EEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::castFrom(android::sp<com::fingerprints::extension::V1_0::IFingerprintNavigation> const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation8castFromERKN7android2spIS3_EEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_027BsSensorTestCaptureCallbackC1EN7android2spINS2_26ISensorTestCaptureCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsSensorTestCaptureCallback::BsSensorTestCaptureCallback(android::sp<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback>) */
int _ZN3com12fingerprints9extension4V1_027BsSensorTestCaptureCallbackC1EN7android2spINS2_26ISensorTestCaptureCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigation15_hidl_isEnabledEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::_hidl_isEnabled(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigation15_hidl_isEnabledEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback8onInjectENSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::onInject(std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback8onInjectENSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorE0_N7android8hardware11BpInterfaceINS2_25IFingerprintAuthenticatorEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<com::fingerprints::extension::V1_0::IFingerprintAuthenticator>-in-com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator */
extern void* _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorE0_N7android8hardware11BpInterfaceINS2_25IFingerprintAuthenticatorEEE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest19_hidl_cancelCaptureEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::_hidl_cancelCapture(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest19_hidl_cancelCaptureEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest19_hidl_getSensorInfoEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENSt3__18functionIFvRKNS2_10SensorInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::_hidl_getSensorInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (com::fingerprints::extension::V1_0::SensorInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest19_hidl_getSensorInfoEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENSt3__18functionIFvRKNS2_10SensorInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::ping() */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-com::fingerprints::extension::V1_0::BpHwFingerprintCalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackD0Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageCaptureCallback::~BnHwImageCaptureCallback() */
int _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::ping() */
int _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwRecalibrationCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_027BsSensorTestCaptureCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BsSensorTestCaptureCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_027BsSensorTestCaptureCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackD1Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageCaptureCallback::~BnHwImageCaptureCallback() */
int _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackD1Ev(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_026ISensorTestCaptureCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::ISensorTestCaptureCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_026ISensorTestCaptureCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation10descriptorE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::descriptor */
extern void* _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation10descriptorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023BsFingerprintSensorTestC2EN7android2spINS2_22IFingerprintSensorTestEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintSensorTest::BsFingerprintSensorTest(android::sp<com::fingerprints::extension::V1_0::IFingerprintSensorTest>) */
int _ZN3com12fingerprints9extension4V1_023BsFingerprintSensorTestC2EN7android2spINS2_22IFingerprintSensorTestEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackD2Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageCaptureCallback::~BnHwImageCaptureCallback() */
int _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackD2Ev(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-com::fingerprints::extension::V1_0::BnHwImageInjectionCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-com::fingerprints::extension::V1_0::BpHwSensorTestCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwVerifyUserCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation9isEnabledEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::isEnabled() */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation9isEnabledEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration10descriptorE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::descriptor */
extern void* _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration10descriptorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN7android8hardware10fromBinderIN3com12fingerprints9extension4V1_022IRecalibrationCallbackENS5_25BpHwRecalibrationCallbackENS5_25BnHwRecalibrationCallbackEEENS_2spIT_EERKNS9_INS0_7IBinderEEE */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IRecalibrationCallback> android::hardware::fromBinder<com::fingerprints::extension::V1_0::IRecalibrationCallback, com::fingerprints::extension::V1_0::BpHwRecalibrationCallback, com::fingerprints::extension::V1_0::BnHwRecalibrationCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN3com12fingerprints9extension4V1_022IRecalibrationCallbackENS5_25BpHwRecalibrationCallbackENS5_25BnHwRecalibrationCallbackEEENS_2spIT_EERKNS9_INS0_7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackC2ERKN7android2spINS2_26ISensorTestCaptureCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback::BnHwSensorTestCaptureCallback(android::sp<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback> const&) */
int _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackC2ERKN7android2spINS2_26ISensorTestCaptureCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback10descriptorE */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::descriptor */
extern void* _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback10descriptorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch16_hidl_readConfigEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENSt3__18functionIFvRKNS2_16SenseTouchConfigEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::_hidl_readConfig(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (com::fingerprints::extension::V1_0::SenseTouchConfig const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch16_hidl_readConfigEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENSt3__18functionIFvRKNS2_16SenseTouchConfigEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering18getEnrollChallengeEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::getEnrollChallenge() */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering18getEnrollChallengeEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackC1ERKN7android2spINS2_19ISensorTestCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCallback::BnHwSensorTestCallback(android::sp<com::fingerprints::extension::V1_0::ISensorTestCallback> const&) */
int _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackC1ERKN7android2spINS2_19ISensorTestCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator12_hidl_cancelEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::_hidl_cancel(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator12_hidl_cancelEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration15onLastStrongRefEPKv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::onLastStrongRef(void const*) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCallback::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback15onLastStrongRefEPKv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::onLastStrongRef(void const*) */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibration20_hidl_preRecalibrateEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration::_hidl_preRecalibrate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibration20_hidl_preRecalibrateEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback::ping() */
int _ZN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallback4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering15onLastStrongRefEPKv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::onLastStrongRef(void const*) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackC1ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::BpHwImageInjectionCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackC1ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZThn16_N3com12fingerprints9extension4V1_022BpHwSensorTestCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BpHwSensorTestCallback::onLastStrongRef(void const*) */
int _ZThn16_N3com12fingerprints9extension4V1_022BpHwSensorTestCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigation12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigation12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch17_hidl_isSupportedEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::_hidl_isSupported(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch17_hidl_isSupportedEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback13_hidl_onImageEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS2_16ImageCaptureDataE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::_hidl_onImage(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, com::fingerprints::extension::V1_0::ImageCaptureData const&) */
int _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback13_hidl_onImageEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS2_16ImageCaptureDataE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering28_hidl_startImageSubscriptionEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::_hidl_startImageSubscription(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering28_hidl_startImageSubscriptionEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BsFingerprintNavigationC1EN7android2spINS2_22IFingerprintNavigationEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintNavigation::BsFingerprintNavigation(android::sp<com::fingerprints::extension::V1_0::IFingerprintNavigation>) */
int _ZN3com12fingerprints9extension4V1_023BsFingerprintNavigationC1EN7android2spINS2_22IFingerprintNavigationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020BsSensorTestCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsSensorTestCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN3com12fingerprints9extension4V1_020BsSensorTestCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_022BnHwSensorTestCallbackD0Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwSensorTestCallback::~BnHwSensorTestCallback() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_022BnHwSensorTestCallbackD0Ev(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator */
extern void* _ZTCN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTTN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BpHwFingerprintCalibration */
extern void* _ZTTN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BnHwFingerprintCalibration */
extern void* _ZTVN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationE;

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN3com12fingerprints9extension4V1_022IRecalibrationCallbackEvEENS_2spIT_EESA_ */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IRecalibrationCallback> android::hardware::details::wrapPassthrough<com::fingerprints::extension::V1_0::IRecalibrationCallback, void>(android::sp<com::fingerprints::extension::V1_0::IRecalibrationCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN3com12fingerprints9extension4V1_022IRecalibrationCallbackEvEENS_2spIT_EESA_(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_022BnHwSensorTestCallbackD1Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwSensorTestCallback::~BnHwSensorTestCallback() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_022BnHwSensorTestCallbackD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::ping() */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering4pingEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_022BnHwSensorTestCallbackD0Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwSensorTestCallback::~BnHwSensorTestCallback() */
int _ZThn32_N3com12fingerprints9extension4V1_022BnHwSensorTestCallbackD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackD0Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwCalibrationCallback::~BnHwCalibrationCallback() */
int _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_022BnHwSensorTestCallbackD1Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwSensorTestCallback::~BnHwSensorTestCallback() */
int _ZThn32_N3com12fingerprints9extension4V1_022BnHwSensorTestCallbackD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackD1Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwCalibrationCallback::~BnHwCalibrationCallback() */
int _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering14setEnrollTokenERKN7android8hardware8hidl_vecIhEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::setEnrollToken(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering14setEnrollTokenERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationC1ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::BpHwFingerprintRecalibration(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationC1ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackD0Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageInjectionCallback::~BnHwImageInjectionCallback() */
int _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackD2Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwCalibrationCallback::~BnHwCalibrationCallback() */
int _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackD2Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-com::fingerprints::extension::V1_0::BpHwFingerprintEngineering */
extern void* _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackD1Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageInjectionCallback::~BnHwImageInjectionCallback() */
int _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorC2ERKN7android2spINS2_25IFingerprintAuthenticatorEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator::BnHwFingerprintAuthenticator(android::sp<com::fingerprints::extension::V1_0::IFingerprintAuthenticator> const&) */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorC2ERKN7android2spINS2_25IFingerprintAuthenticatorEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationE0_N7android8hardware11BpInterfaceINS2_22IFingerprintNavigationEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<com::fingerprints::extension::V1_0::IFingerprintNavigation>-in-com::fingerprints::extension::V1_0::BpHwFingerprintNavigation */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationE0_N7android8hardware11BpInterfaceINS2_22IFingerprintNavigationEEE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackD2Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageInjectionCallback::~BnHwImageInjectionCallback() */
int _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackD2Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackENS6_19ISensorTestCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::ISensorTestCallback> android::hardware::details::getServiceInternal<com::fingerprints::extension::V1_0::BpHwSensorTestCallback, com::fingerprints::extension::V1_0::ISensorTestCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackENS6_19ISensorTestCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator */
extern void* _ZTCN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorE0_N7android8hardware7IBinderE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_023IFingerprintCalibrationE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::IFingerprintCalibration */
extern void* _ZTVN3com12fingerprints9extension4V1_023IFingerprintCalibrationE;

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN3com12fingerprints9extension4V1_021IImageCaptureCallbackEvEENS_2spIT_EESA_ */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IImageCaptureCallback> android::hardware::details::wrapPassthrough<com::fingerprints::extension::V1_0::IImageCaptureCallback, void>(android::sp<com::fingerprints::extension::V1_0::IImageCaptureCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN3com12fingerprints9extension4V1_021IImageCaptureCallbackEvEENS_2spIT_EESA_(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BpHwFingerprintNavigation */
extern void* _ZTTN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationE;

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationD0Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration::~BnHwFingerprintRecalibration() */
int _ZThn32_N3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::ping() */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering4pingEv(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationD1Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration::~BnHwFingerprintRecalibration() */
int _ZThn32_N3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationD1Ev(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch */
extern void* _ZTTN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch */
extern void* _ZTVN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest14getSensorTestsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS2_10SensorTestEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::getSensorTests(std::__1::function<void (android::hardware::hidl_vec<com::fingerprints::extension::V1_0::SensorTest> const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest14getSensorTestsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS2_10SensorTestEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackC1ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::BpHwSensorTestCaptureCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackC1ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BsRecalibrationCallbackC2EN7android2spINS2_22IRecalibrationCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsRecalibrationCallback::BsRecalibrationCallback(android::sp<com::fingerprints::extension::V1_0::IRecalibrationCallback>) */
int _ZN3com12fingerprints9extension4V1_023BsRecalibrationCallbackC2EN7android2spINS2_22IRecalibrationCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration15_hidl_calibrateEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS4_2spINS2_20ICalibrationCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::_hidl_calibrate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<com::fingerprints::extension::V1_0::ICalibrationCallback> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration15_hidl_calibrateEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS4_2spINS2_20ICalibrationCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackE0_NS2_22IRecalibrationCallbackE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IRecalibrationCallback-in-com::fingerprints::extension::V1_0::BpHwRecalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackE0_NS2_22IRecalibrationCallbackE;

/* Symbol: _ZTTN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BnHwRecalibrationCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration9calibrateERKN7android2spINS2_20ICalibrationCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::calibrate(android::sp<com::fingerprints::extension::V1_0::ICalibrationCallback> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration9calibrateERKN7android2spINS2_20ICalibrationCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchC1ERKN7android2spINS2_22IFingerprintSenseTouchEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::BnHwFingerprintSenseTouch(android::sp<com::fingerprints::extension::V1_0::IFingerprintSenseTouch> const&) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchC1ERKN7android2spINS2_22IFingerprintSenseTouchEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationC2ERKN7android2spINS2_23IFingerprintCalibrationEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintCalibration::BnHwFingerprintCalibration(android::sp<com::fingerprints::extension::V1_0::IFingerprintCalibration> const&) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationC2ERKN7android2spINS2_23IFingerprintCalibrationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering25_hidl_startImageInjectionEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS4_2spINS2_23IImageInjectionCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::_hidl_startImageInjection(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<com::fingerprints::extension::V1_0::IImageInjectionCallback> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering25_hidl_startImageInjectionEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS4_2spINS2_23IImageInjectionCallbackEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::ping() */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation25_hidl_setNavigationConfigEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS2_16NavigationConfigE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::_hidl_setNavigationConfig(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, com::fingerprints::extension::V1_0::NavigationConfig const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation25_hidl_setNavigationConfigEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS2_16NavigationConfigE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest13cancelCaptureEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::cancelCapture() */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest13cancelCaptureEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::ping() */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigation25_hidl_getNavigationConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::_hidl_getNavigationConfig(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigation25_hidl_getNavigationConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibration12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibration12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallback14_hidl_onResultEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCallback::_hidl_onResult(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallback14_hidl_onResultEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringC2ERKN7android2spINS2_23IFingerprintEngineeringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::BnHwFingerprintEngineering(android::sp<com::fingerprints::extension::V1_0::IFingerprintEngineering> const&) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringC2ERKN7android2spINS2_23IFingerprintEngineeringEEE(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringD0Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::~BnHwFingerprintEngineering() */
int _ZThn32_N3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCallback::ping() */
int _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallback4pingEv(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringD1Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::~BnHwFingerprintEngineering() */
int _ZThn32_N3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticator10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticator10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE(void);

/* Symbol: _ZThn16_N3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::onLastStrongRef(void const*) */
int _ZThn16_N3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration15onLastStrongRefEPKv(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BpHwCalibrationCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackE;

/* Symbol: _ZTv0_n40_N3com12fingerprints9extension4V1_026BpHwFingerprintCalibration15onLastStrongRefEPKv */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::onLastStrongRef(void const*) */
int _ZTv0_n40_N3com12fingerprints9extension4V1_026BpHwFingerprintCalibration15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigation4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::ping() */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigation4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BsImageCaptureCallbackC1EN7android2spINS2_21IImageCaptureCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsImageCaptureCallback::BsImageCaptureCallback(android::sp<com::fingerprints::extension::V1_0::IImageCaptureCallback>) */
int _ZN3com12fingerprints9extension4V1_022BsImageCaptureCallbackC1EN7android2spINS2_21IImageCaptureCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021BsCalibrationCallbackC2EN7android2spINS2_20ICalibrationCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsCalibrationCallback::BsCalibrationCallback(android::sp<com::fingerprints::extension::V1_0::ICalibrationCallback>) */
int _ZN3com12fingerprints9extension4V1_021BsCalibrationCallbackC2EN7android2spINS2_20ICalibrationCallbackEEE(void);

/* Symbol: _ZTv0_n40_N3com12fingerprints9extension4V1_026BpHwFingerprintEngineering15onLastStrongRefEPKv */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::onLastStrongRef(void const*) */
int _ZTv0_n40_N3com12fingerprints9extension4V1_026BpHwFingerprintEngineering15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::BpHwFingerprintNavigation */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BnHwFingerprintNavigation */
extern void* _ZTVN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationE;

/* Symbol: _ZN3com12fingerprints9extension4V1_024BsImageInjectionCallbackC1EN7android2spINS2_23IImageInjectionCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsImageInjectionCallback::BsImageInjectionCallback(android::sp<com::fingerprints::extension::V1_0::IImageInjectionCallback>) */
int _ZN3com12fingerprints9extension4V1_024BsImageInjectionCallbackC1EN7android2spINS2_23IImageInjectionCallbackEEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_024BsImageInjectionCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BsImageInjectionCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_024BsImageInjectionCallbackE;

/* Symbol: _ZTv0_n40_N3com12fingerprints9extension4V1_022BpHwSensorTestCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BpHwSensorTestCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N3com12fingerprints9extension4V1_022BpHwSensorTestCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZThn16_N3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::onLastStrongRef(void const*) */
int _ZThn16_N3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_021BsCalibrationCallbackE0_NS2_20ICalibrationCallbackE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::ICalibrationCallback-in-com::fingerprints::extension::V1_0::BsCalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_021BsCalibrationCallbackE0_NS2_20ICalibrationCallbackE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch */
extern void* _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchE0_N7android8hardware7IBinderE;

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackD0Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwRecalibrationCallback::~BnHwRecalibrationCallback() */
int _ZThn32_N3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackENS6_20ICalibrationCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::ICalibrationCallback> android::hardware::details::getServiceInternal<com::fingerprints::extension::V1_0::BpHwCalibrationCallback, com::fingerprints::extension::V1_0::ICalibrationCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackENS6_20ICalibrationCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering12getBuildInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::getBuildInfo(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering12getBuildInfoENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackD1Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwRecalibrationCallback::~BnHwRecalibrationCallback() */
int _ZThn32_N3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackD1Ev(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackD0Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback::~BnHwSensorTestCaptureCallback() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation19_hidl_setNavigationEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEb */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::_hidl_setNavigation(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, bool) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation19_hidl_setNavigationEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackD1Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback::~BnHwSensorTestCaptureCallback() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BsFingerprintAuthenticatorC2EN7android2spINS2_25IFingerprintAuthenticatorEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintAuthenticator::BsFingerprintAuthenticator(android::sp<com::fingerprints::extension::V1_0::IFingerprintAuthenticator>) */
int _ZN3com12fingerprints9extension4V1_026BsFingerprintAuthenticatorC2EN7android2spINS2_25IFingerprintAuthenticatorEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticator12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticator12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestC2ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::BpHwFingerprintSensorTest(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestC2ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackC2ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::BpHwCalibrationCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackC2ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration10descriptorE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::descriptor */
extern void* _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration10descriptorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering18_hidl_getBuildInfoEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENSt3__18functionIFvRKNS5_11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::_hidl_getBuildInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering18_hidl_getBuildInfoEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENSt3__18functionIFvRKNS5_11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering19_hidl_getSensorSizeEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::_hidl_getSensorSize(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering19_hidl_getSensorSizeEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-com::fingerprints::extension::V1_0::BnHwVerifyUserCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback10descriptorE */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::descriptor */
extern void* _ZN3com12fingerprints9extension4V1_020ICalibrationCallback10descriptorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest */
extern void* _ZTTN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallback10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwCalibrationCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallback10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorENS6_25IFingerprintAuthenticatorEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IFingerprintAuthenticator> android::hardware::details::getServiceInternal<com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator, com::fingerprints::extension::V1_0::IFingerprintAuthenticator, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorENS6_25IFingerprintAuthenticatorEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb(void);

/* Symbol: _ZN7android8hardware10fromBinderIN3com12fingerprints9extension4V1_026ISensorTestCaptureCallbackENS5_29BpHwSensorTestCaptureCallbackENS5_29BnHwSensorTestCaptureCallbackEEENS_2spIT_EERKNS9_INS0_7IBinderEEE */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback> android::hardware::fromBinder<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback, com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback, com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN3com12fingerprints9extension4V1_026ISensorTestCaptureCallbackENS5_29BpHwSensorTestCaptureCallbackENS5_29BnHwSensorTestCaptureCallbackEEENS_2spIT_EERKNS9_INS0_7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::ping() */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallback10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageInjectionCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallback10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator10descriptorE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::descriptor */
extern void* _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator10descriptorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_024BsFingerprintCalibrationC2EN7android2spINS2_23IFingerprintCalibrationEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintCalibration::BsFingerprintCalibration(android::sp<com::fingerprints::extension::V1_0::IFingerprintCalibration>) */
int _ZN3com12fingerprints9extension4V1_024BsFingerprintCalibrationC2EN7android2spINS2_23IFingerprintCalibrationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchC1ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::BpHwFingerprintSenseTouch(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchC1ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback10descriptorE */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::descriptor */
extern void* _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback10descriptorE;

/* Symbol: _ZTTN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator */
extern void* _ZTTN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::ping() */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback4pingEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::BpHwImageInjectionCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering18_hidl_getBuildInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::_hidl_getBuildInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering18_hidl_getBuildInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BpHwImageCaptureCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_026ISensorTestCaptureCallbackENS_4hidl4base4V1_05IBaseENS6_29BpHwSensorTestCaptureCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback> > android::hardware::details::castInterface<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback, android::hidl::base::V1_0::IBase, com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_026ISensorTestCaptureCallbackENS_4hidl4base4V1_05IBaseENS6_29BpHwSensorTestCaptureCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZTv0_n40_N3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest15onLastStrongRefEPKv */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::onLastStrongRef(void const*) */
int _ZTv0_n40_N3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020BsVerifyUserCallbackC2EN7android2spINS2_19IVerifyUserCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsVerifyUserCallback::BsVerifyUserCallback(android::sp<com::fingerprints::extension::V1_0::IVerifyUserCallback>) */
int _ZN3com12fingerprints9extension4V1_020BsVerifyUserCallbackC2EN7android2spINS2_19IVerifyUserCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::ping() */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibration12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintCalibration::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibration12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BsFingerprintEngineeringC1EN7android2spINS2_23IFingerprintEngineeringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintEngineering::BsFingerprintEngineering(android::sp<com::fingerprints::extension::V1_0::IFingerprintEngineering>) */
int _ZN3com12fingerprints9extension4V1_024BsFingerprintEngineeringC1EN7android2spINS2_23IFingerprintEngineeringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering22startImageSubscriptionERKN7android2spINS2_21IImageCaptureCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::startImageSubscription(android::sp<com::fingerprints::extension::V1_0::IImageCaptureCallback> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering22startImageSubscriptionERKN7android2spINS2_21IImageCaptureCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::ping() */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback15onLastStrongRefEPKv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::onLastStrongRef(void const*) */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BnHwRecalibrationCallback::ping() */
int _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallback4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch11isSupportedEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::isSupported() */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch11isSupportedEv(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_023BsFingerprintNavigationE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BsFingerprintNavigation */
extern void* _ZTVN3com12fingerprints9extension4V1_023BsFingerprintNavigationE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback7onErrorEj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::onError(unsigned int) */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback7onErrorEj(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BnHwVerifyUserCallback::ping() */
int _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallback4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback6onHelpEj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::onHelp(unsigned int) */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback6onHelpEj(void);

/* Symbol: _ZN7android8hardware10fromBinderIN3com12fingerprints9extension4V1_020ICalibrationCallbackENS5_23BpHwCalibrationCallbackENS5_23BnHwCalibrationCallbackEEENS_2spIT_EERKNS9_INS0_7IBinderEEE */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::ICalibrationCallback> android::hardware::fromBinder<com::fingerprints::extension::V1_0::ICalibrationCallback, com::fingerprints::extension::V1_0::BpHwCalibrationCallback, com::fingerprints::extension::V1_0::BnHwCalibrationCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN3com12fingerprints9extension4V1_020ICalibrationCallbackENS5_23BpHwCalibrationCallbackENS5_23BnHwCalibrationCallbackEEENS_2spIT_EERKNS9_INS0_7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackC1ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::BpHwImageCaptureCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackC1ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration20_hidl_preRecalibrateEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::_hidl_preRecalibrate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration20_hidl_preRecalibrateEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_023BsFingerprintSenseTouchE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BsFingerprintSenseTouch */
extern void* _ZTVN3com12fingerprints9extension4V1_023BsFingerprintSenseTouchE;

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback8onCancelEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::onCancel() */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback8onCancelEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorE0_NS2_25IFingerprintAuthenticatorE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintAuthenticator-in-com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator */
extern void* _ZTCN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorE0_NS2_25IFingerprintAuthenticatorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_026BsFingerprintRecalibrationE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BsFingerprintRecalibration */
extern void* _ZTVN3com12fingerprints9extension4V1_026BsFingerprintRecalibrationE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::ping() */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackD0Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwVerifyUserCallback::~BnHwVerifyUserCallback() */
int _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021BsCalibrationCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsCalibrationCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN3com12fingerprints9extension4V1_021BsCalibrationCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationD0Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintCalibration::~BnHwFingerprintCalibration() */
int _ZThn32_N3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibration12_hidl_cancelEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration::_hidl_cancel(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibration12_hidl_cancelEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackD1Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwVerifyUserCallback::~BnHwVerifyUserCallback() */
int _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZThn16_N3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::onLastStrongRef(void const*) */
int _ZThn16_N3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator15onLastStrongRefEPKv(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationD1Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintCalibration::~BnHwFingerprintCalibration() */
int _ZThn32_N3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration8castFromERKN7android2spIS3_EEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::castFrom(android::sp<com::fingerprints::extension::V1_0::IFingerprintRecalibration> const&, bool) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration8castFromERKN7android2spIS3_EEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackD2Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwVerifyUserCallback::~BnHwVerifyUserCallback() */
int _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackD2Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering10descriptorE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::descriptor */
extern void* _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering10descriptorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackC1ERKN7android2spINS2_22IRecalibrationCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwRecalibrationCallback::BnHwRecalibrationCallback(android::sp<com::fingerprints::extension::V1_0::IRecalibrationCallback> const&) */
int _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackC1ERKN7android2spINS2_22IRecalibrationCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering19_hidl_getSensorSizeEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENSt3__18functionIFvRKNS2_10SensorSizeEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::_hidl_getSensorSize(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (com::fingerprints::extension::V1_0::SensorSize const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering19_hidl_getSensorSizeEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENSt3__18functionIFvRKNS2_10SensorSizeEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation13setNavigationEb */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::setNavigation(bool) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation13setNavigationEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackC2ERKN7android2spINS2_23IImageInjectionCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageInjectionCallback::BnHwImageInjectionCallback(android::sp<com::fingerprints::extension::V1_0::IImageInjectionCallback> const&) */
int _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackC2ERKN7android2spINS2_23IImageInjectionCallbackEEE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BnHwImageInjectionCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::ping() */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020BsSensorTestCallbackC2EN7android2spINS2_19ISensorTestCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsSensorTestCallback::BsSensorTestCallback(android::sp<com::fingerprints::extension::V1_0::ISensorTestCallback>) */
int _ZN3com12fingerprints9extension4V1_020BsSensorTestCallbackC2EN7android2spINS2_19ISensorTestCallbackEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_019ISensorTestCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::ISensorTestCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_019ISensorTestCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationC2ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::BpHwFingerprintNavigation(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationC2ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest */
extern void* _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackE0_NS2_19ISensorTestCallbackE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::ISensorTestCallback-in-com::fingerprints::extension::V1_0::BpHwSensorTestCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackE0_NS2_19ISensorTestCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration6cancelEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::cancel() */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration6cancelEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::BpHwSensorTestCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026ISensorTestCaptureCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::ISensorTestCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_026ISensorTestCaptureCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_024BsFingerprintCalibrationE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BsFingerprintCalibration */
extern void* _ZTVN3com12fingerprints9extension4V1_024BsFingerprintCalibrationE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering18_hidl_startCaptureEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS4_2spINS2_21IImageCaptureCallbackEEEj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::_hidl_startCapture(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<com::fingerprints::extension::V1_0::IImageCaptureCallback> const&, unsigned int) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering18_hidl_startCaptureEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS4_2spINS2_21IImageCaptureCallbackEEEj(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchD0Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::~BnHwFingerprintSenseTouch() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchD0Ev(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator */
extern void* _ZTVN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchD1Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::~BnHwFingerprintSenseTouch() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering27_hidl_stopImageSubscriptionEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::_hidl_stopImageSubscription(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering27_hidl_stopImageSubscriptionEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::ping() */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest7captureERKN7android2spINS2_26ISensorTestCaptureCallbackEEEbb */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::capture(android::sp<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback> const&, bool, bool) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest7captureERKN7android2spINS2_26ISensorTestCaptureCallbackEEEbb(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackE0_N7android8hardware11BpInterfaceINS2_19ISensorTestCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<com::fingerprints::extension::V1_0::ISensorTestCallback>-in-com::fingerprints::extension::V1_0::BpHwSensorTestCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackE0_N7android8hardware11BpInterfaceINS2_19ISensorTestCallbackEEE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-com::fingerprints::extension::V1_0::BnHwFingerprintCalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_020BsSensorTestCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BsSensorTestCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_020BsSensorTestCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback8onResultEjmmRKN7android8hardware8hidl_vecIhEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::onResult(unsigned int, unsigned long, unsigned long, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback8onResultEjmmRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-com::fingerprints::extension::V1_0::BpHwFingerprintNavigation */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestE0_N7android8hardware11BpInterfaceINS2_22IFingerprintSensorTestEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<com::fingerprints::extension::V1_0::IFingerprintSensorTest>-in-com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestE0_N7android8hardware11BpInterfaceINS2_22IFingerprintSensorTestEEE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackE0_NS2_23IImageInjectionCallbackE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IImageInjectionCallback-in-com::fingerprints::extension::V1_0::BpHwImageInjectionCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackE0_NS2_23IImageInjectionCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallback10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwRecalibrationCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallback10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation25_hidl_getNavigationConfigEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENSt3__18functionIFvRKNS2_16NavigationConfigEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::_hidl_getNavigationConfig(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (com::fingerprints::extension::V1_0::NavigationConfig const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation25_hidl_getNavigationConfigEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENSt3__18functionIFvRKNS2_16NavigationConfigEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_025IFingerprintRecalibrationENS_4hidl4base4V1_05IBaseENS6_28BpHwFingerprintRecalibrationEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<com::fingerprints::extension::V1_0::IFingerprintRecalibration> > android::hardware::details::castInterface<com::fingerprints::extension::V1_0::IFingerprintRecalibration, android::hidl::base::V1_0::IBase, com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_025IFingerprintRecalibrationENS_4hidl4base4V1_05IBaseENS6_28BpHwFingerprintRecalibrationEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackE0_N7android8hardware11BpInterfaceINS2_19IVerifyUserCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<com::fingerprints::extension::V1_0::IVerifyUserCallback>-in-com::fingerprints::extension::V1_0::BpHwVerifyUserCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackE0_N7android8hardware11BpInterfaceINS2_19IVerifyUserCallbackEEE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchC2ERKN7android2spINS2_22IFingerprintSenseTouchEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::BnHwFingerprintSenseTouch(android::sp<com::fingerprints::extension::V1_0::IFingerprintSenseTouch> const&) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchC2ERKN7android2spINS2_22IFingerprintSenseTouchEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_024BsImageInjectionCallbackE0_NS2_23IImageInjectionCallbackE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IImageInjectionCallback-in-com::fingerprints::extension::V1_0::BsImageInjectionCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_024BsImageInjectionCallbackE0_NS2_23IImageInjectionCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest20_hidl_getSensorTestsEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::_hidl_getSensorTests(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest20_hidl_getSensorTestsEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback12_hidl_onHelpEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::_hidl_onHelp(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback12_hidl_onHelpEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEj(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch16_hidl_readConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::_hidl_readConfig(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch16_hidl_readConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_022IFingerprintSenseTouchE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::IFingerprintSenseTouch */
extern void* _ZTTN3com12fingerprints9extension4V1_022IFingerprintSenseTouchE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator10verifyUserERKN7android2spINS2_19IVerifyUserCallbackEEERKNS4_8hardware8hidl_vecIhEESE_SE_ */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::verifyUser(android::sp<com::fingerprints::extension::V1_0::IVerifyUserCallback> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator10verifyUserERKN7android2spINS2_19IVerifyUserCallbackEEERKNS4_8hardware8hidl_vecIhEESE_SE_(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-com::fingerprints::extension::V1_0::BnHwSensorTestCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorC1ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::BpHwFingerprintAuthenticator(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorC1ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering24_hidl_stopImageInjectionEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::_hidl_stopImageInjection(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering24_hidl_stopImageInjectionEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN3com12fingerprints9extension4V1_019ISensorTestCallbackEvEENS_2spIT_EESA_ */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::ISensorTestCallback> android::hardware::details::wrapPassthrough<com::fingerprints::extension::V1_0::ISensorTestCallback, void>(android::sp<com::fingerprints::extension::V1_0::ISensorTestCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN3com12fingerprints9extension4V1_019ISensorTestCallbackEvEENS_2spIT_EESA_(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticator4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator::ping() */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticator4pingEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationE0_NS2_23IFingerprintCalibrationE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintCalibration-in-com::fingerprints::extension::V1_0::BpHwFingerprintCalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationE0_NS2_23IFingerprintCalibrationE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::BpHwFingerprintEngineering */
extern void* _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023BsFingerprintNavigation13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintNavigation::addOnewayTask(std::__1::function<void ()>) */
int _ZN3com12fingerprints9extension4V1_023BsFingerprintNavigation13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BsFingerprintRecalibrationC1EN7android2spINS2_25IFingerprintRecalibrationEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintRecalibration::BsFingerprintRecalibration(android::sp<com::fingerprints::extension::V1_0::IFingerprintRecalibration>) */
int _ZN3com12fingerprints9extension4V1_026BsFingerprintRecalibrationC1EN7android2spINS2_25IFingerprintRecalibrationEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackE0_N7android8hardware11BpInterfaceINS2_26ISensorTestCaptureCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback>-in-com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackE0_N7android8hardware11BpInterfaceINS2_26ISensorTestCaptureCallbackEEE;

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::ping() */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator4pingEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_024BsFingerprintCalibrationE0_NS2_23IFingerprintCalibrationE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintCalibration-in-com::fingerprints::extension::V1_0::BsFingerprintCalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_024BsFingerprintCalibrationE0_NS2_23IFingerprintCalibrationE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BpHwFingerprintEngineering */
extern void* _ZTVN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-com::fingerprints::extension::V1_0::BpHwImageInjectionCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZTv0_n40_N3com12fingerprints9extension4V1_023BpHwCalibrationCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BpHwCalibrationCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N3com12fingerprints9extension4V1_023BpHwCalibrationCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_022IFingerprintNavigationENS_4hidl4base4V1_05IBaseENS6_25BpHwFingerprintNavigationEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<com::fingerprints::extension::V1_0::IFingerprintNavigation> > android::hardware::details::castInterface<com::fingerprints::extension::V1_0::IFingerprintNavigation, android::hidl::base::V1_0::IBase, com::fingerprints::extension::V1_0::BpHwFingerprintNavigation>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_022IFingerprintNavigationENS_4hidl4base4V1_05IBaseENS6_25BpHwFingerprintNavigationEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest16cancelSensorTestEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::cancelSensorTest() */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest16cancelSensorTestEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022IFingerprintSensorTestE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::IFingerprintSensorTest */
extern void* _ZTCN3com12fingerprints9extension4V1_022IFingerprintSensorTestE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackC2ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::BpHwRecalibrationCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackC2ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackE0_NS2_19IVerifyUserCallbackE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IVerifyUserCallback-in-com::fingerprints::extension::V1_0::BpHwVerifyUserCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackE0_NS2_19IVerifyUserCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering13getSensorSizeENSt3__18functionIFvRKNS2_10SensorSizeEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::getSensorSize(std::__1::function<void (com::fingerprints::extension::V1_0::SensorSize const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering13getSensorSizeENSt3__18functionIFvRKNS2_10SensorSizeEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BsFingerprintRecalibrationE0_NS2_25IFingerprintRecalibrationE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintRecalibration-in-com::fingerprints::extension::V1_0::BsFingerprintRecalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_026BsFingerprintRecalibrationE0_NS2_25IFingerprintRecalibrationE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest8castFromERKN7android2spIS3_EEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::castFrom(android::sp<com::fingerprints::extension::V1_0::IFingerprintSensorTest> const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest8castFromERKN7android2spIS3_EEb(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackE0_NS2_21IImageCaptureCallbackE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IImageCaptureCallback-in-com::fingerprints::extension::V1_0::BpHwImageCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackE0_NS2_21IImageCaptureCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback8castFromERKN7android2spIS3_EEb */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::castFrom(android::sp<com::fingerprints::extension::V1_0::ICalibrationCallback> const&, bool) */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback8castFromERKN7android2spIS3_EEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallback13_hidl_onErrorEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwCalibrationCallback::_hidl_onError(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_023BnHwCalibrationCallback13_hidl_onErrorEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_020ICalibrationCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::ICalibrationCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_020ICalibrationCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCallback::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::ping() */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback4pingEv(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BpHwRecalibrationCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::ping() */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback4pingEv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_019IVerifyUserCallbackENS_4hidl4base4V1_05IBaseENS6_22BpHwVerifyUserCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<com::fingerprints::extension::V1_0::IVerifyUserCallback> > android::hardware::details::castInterface<com::fingerprints::extension::V1_0::IVerifyUserCallback, android::hidl::base::V1_0::IBase, com::fingerprints::extension::V1_0::BpHwVerifyUserCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_019IVerifyUserCallbackENS_4hidl4base4V1_05IBaseENS6_22BpHwVerifyUserCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_022IFingerprintNavigationE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::IFingerprintNavigation */
extern void* _ZTTN3com12fingerprints9extension4V1_022IFingerprintNavigationE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest */
extern void* _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_021IImageCaptureCallbackENS_4hidl4base4V1_05IBaseENS6_24BpHwImageCaptureCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<com::fingerprints::extension::V1_0::IImageCaptureCallback> > android::hardware::details::castInterface<com::fingerprints::extension::V1_0::IImageCaptureCallback, android::hidl::base::V1_0::IBase, com::fingerprints::extension::V1_0::BpHwImageCaptureCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN3com12fingerprints9extension4V1_021IImageCaptureCallbackENS_4hidl4base4V1_05IBaseENS6_24BpHwImageCaptureCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZThn16_N3com12fingerprints9extension4V1_024BpHwImageCaptureCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::onLastStrongRef(void const*) */
int _ZThn16_N3com12fingerprints9extension4V1_024BpHwImageCaptureCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022readEmbeddedFromParcelERKNS2_16SensorTestResultERKN7android8hardware6ParcelEmm */
/* Demangled: com::fingerprints::extension::V1_0::readEmbeddedFromParcel(com::fingerprints::extension::V1_0::SensorTestResult const&, android::hardware::Parcel const&, unsigned long, unsigned long) */
int _ZN3com12fingerprints9extension4V1_022readEmbeddedFromParcelERKNS2_16SensorTestResultERKN7android8hardware6ParcelEmm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_023BnHwCalibrationCallbackD0Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwCalibrationCallback::~BnHwCalibrationCallback() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_023BnHwCalibrationCallbackD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BnHwFingerprintCalibration */
extern void* _ZTTN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationE;

/* Symbol: _ZTVN3com12fingerprints9extension4V1_022IFingerprintNavigationE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::IFingerprintNavigation */
extern void* _ZTVN3com12fingerprints9extension4V1_022IFingerprintNavigationE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_023BnHwCalibrationCallbackD1Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwCalibrationCallback::~BnHwCalibrationCallback() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_023BnHwCalibrationCallbackD1Ev(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_022IFingerprintSenseTouchE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::IFingerprintSenseTouch */
extern void* _ZTVN3com12fingerprints9extension4V1_022IFingerprintSenseTouchE;

/* Symbol: _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackC2ERKN7android2spINS2_21IImageCaptureCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageCaptureCallback::BnHwImageCaptureCallback(android::sp<com::fingerprints::extension::V1_0::IImageCaptureCallback> const&) */
int _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackC2ERKN7android2spINS2_21IImageCaptureCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BsFingerprintAuthenticator13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintAuthenticator::addOnewayTask(std::__1::function<void ()>) */
int _ZN3com12fingerprints9extension4V1_026BsFingerprintAuthenticator13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator17_hidl_isUserValidEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::_hidl_isUserValid(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator17_hidl_isUserValidEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEm(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorD0Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator::~BnHwFingerprintAuthenticator() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationE0_NS2_22IFingerprintNavigationE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintNavigation-in-com::fingerprints::extension::V1_0::BpHwFingerprintNavigation */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationE0_NS2_22IFingerprintNavigationE;

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorD1Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator::~BnHwFingerprintAuthenticator() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch15onLastStrongRefEPKv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::onLastStrongRef(void const*) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwFingerprintNavigationD0Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::~BnHwFingerprintNavigation() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwFingerprintNavigationD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BsFingerprintSensorTestC1EN7android2spINS2_22IFingerprintSensorTestEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintSensorTest::BsFingerprintSensorTest(android::sp<com::fingerprints::extension::V1_0::IFingerprintSensorTest>) */
int _ZN3com12fingerprints9extension4V1_023BsFingerprintSensorTestC1EN7android2spINS2_22IFingerprintSensorTestEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest19_hidl_runSensorTestEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS4_2spINS2_19ISensorTestCallbackEEERKNS2_10SensorTestERKNS2_15SensorTestInputE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::_hidl_runSensorTest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<com::fingerprints::extension::V1_0::ISensorTestCallback> const&, com::fingerprints::extension::V1_0::SensorTest const&, com::fingerprints::extension::V1_0::SensorTestInput const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest19_hidl_runSensorTestEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS4_2spINS2_19ISensorTestCallbackEEERKNS2_10SensorTestERKNS2_15SensorTestInputE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN3com12fingerprints9extension4V1_026ISensorTestCaptureCallbackEvEENS_2spIT_EESA_ */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback> android::hardware::details::wrapPassthrough<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback, void>(android::sp<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN3com12fingerprints9extension4V1_026ISensorTestCaptureCallbackEvEENS_2spIT_EESA_(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-com::fingerprints::extension::V1_0::BpHwImageCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCallback::ping() */
int _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback4pingEv(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwFingerprintNavigationD1Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::~BnHwFingerprintNavigation() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwFingerprintNavigationD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_023IFingerprintCalibrationE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::IFingerprintCalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_023IFingerprintCalibrationE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_021BsCalibrationCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BsCalibrationCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_021BsCalibrationCallbackE;

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN3com12fingerprints9extension4V1_020ICalibrationCallbackEvEENS_2spIT_EESA_ */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::ICalibrationCallback> android::hardware::details::wrapPassthrough<com::fingerprints::extension::V1_0::ICalibrationCallback, void>(android::sp<com::fingerprints::extension::V1_0::ICalibrationCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN3com12fingerprints9extension4V1_020ICalibrationCallbackEvEENS_2spIT_EESA_(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallback14_hidl_onCancelEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageInjectionCallback::_hidl_onCancel(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallback14_hidl_onCancelEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BsRecalibrationCallbackC1EN7android2spINS2_22IRecalibrationCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsRecalibrationCallback::BsRecalibrationCallback(android::sp<com::fingerprints::extension::V1_0::IRecalibrationCallback>) */
int _ZN3com12fingerprints9extension4V1_023BsRecalibrationCallbackC1EN7android2spINS2_22IRecalibrationCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZThn16_N3com12fingerprints9extension4V1_022BpHwVerifyUserCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::onLastStrongRef(void const*) */
int _ZThn16_N3com12fingerprints9extension4V1_022BpHwVerifyUserCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_023IFingerprintEngineeringE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::IFingerprintEngineering */
extern void* _ZTTN3com12fingerprints9extension4V1_023IFingerprintEngineeringE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchD0Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::~BnHwFingerprintSenseTouch() */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::ping() */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigation19_hidl_setNavigationEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::_hidl_setNavigation(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigation19_hidl_setNavigationEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BpHwFingerprintNavigation */
extern void* _ZTVN3com12fingerprints9extension4V1_025BpHwFingerprintNavigationE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchD1Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::~BnHwFingerprintSenseTouch() */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_025IFingerprintAuthenticatorE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::IFingerprintAuthenticator */
extern void* _ZTTN3com12fingerprints9extension4V1_025IFingerprintAuthenticatorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering18_hidl_startCaptureEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::_hidl_startCapture(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering18_hidl_startCaptureEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchD2Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::~BnHwFingerprintSenseTouch() */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchD2Ev(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch */
extern void* _ZTVN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackE0_N7android8hardware11BpInterfaceINS2_20ICalibrationCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<com::fingerprints::extension::V1_0::ICalibrationCallback>-in-com::fingerprints::extension::V1_0::BpHwCalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackE0_N7android8hardware11BpInterfaceINS2_20ICalibrationCallbackEEE;

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibration17_hidl_recalibrateEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration::_hidl_recalibrate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibration17_hidl_recalibrateEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BnHwRecalibrationCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback8onStatusEi */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::onStatus(int) */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback8onStatusEi(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator */
extern void* _ZTCN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringENS6_23IFingerprintEngineeringEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IFingerprintEngineering> android::hardware::details::getServiceInternal<com::fingerprints::extension::V1_0::BpHwFingerprintEngineering, com::fingerprints::extension::V1_0::IFingerprintEngineering, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringENS6_23IFingerprintEngineeringEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022IFingerprintNavigationE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::IFingerprintNavigation */
extern void* _ZTCN3com12fingerprints9extension4V1_022IFingerprintNavigationE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationC1ERKN7android2spINS2_25IFingerprintRecalibrationEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration::BnHwFingerprintRecalibration(android::sp<com::fingerprints::extension::V1_0::IFingerprintRecalibration> const&) */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationC1ERKN7android2spINS2_25IFingerprintRecalibrationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-com::fingerprints::extension::V1_0::BnHwRecalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringE0_N7android8hardware11BpInterfaceINS2_23IFingerprintEngineeringEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<com::fingerprints::extension::V1_0::IFingerprintEngineering>-in-com::fingerprints::extension::V1_0::BpHwFingerprintEngineering */
extern void* _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringE0_N7android8hardware11BpInterfaceINS2_23IFingerprintEngineeringEEE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackC1ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCallback::BpHwSensorTestCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackC1ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022readEmbeddedFromParcelERKNS2_15SensorTestInputERKN7android8hardware6ParcelEmm */
/* Demangled: com::fingerprints::extension::V1_0::readEmbeddedFromParcel(com::fingerprints::extension::V1_0::SensorTestInput const&, android::hardware::Parcel const&, unsigned long, unsigned long) */
int _ZN3com12fingerprints9extension4V1_022readEmbeddedFromParcelERKNS2_15SensorTestInputERKN7android8hardware6ParcelEmm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest19_hidl_getSensorInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::_hidl_getSensorInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTest19_hidl_getSensorInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZThn16_N3com12fingerprints9extension4V1_026BpHwImageInjectionCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::onLastStrongRef(void const*) */
int _ZThn16_N3com12fingerprints9extension4V1_026BpHwImageInjectionCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering21setHALInstrumentationEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-com::fingerprints::extension::V1_0::BnHwFingerprintNavigation */
extern void* _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback7onErrorEj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::onError(unsigned int) */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback7onErrorEj(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback10descriptorE */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::descriptor */
extern void* _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback10descriptorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallback10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageCaptureCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallback10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BnHwImageCaptureCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback7onErrorEi */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::onError(int) */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback7onErrorEi(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering24_hidl_stopImageInjectionEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::_hidl_stopImageInjection(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering24_hidl_stopImageInjectionEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest22_hidl_cancelSensorTestEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::_hidl_cancelSensorTest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest22_hidl_cancelSensorTestEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest */
extern void* _ZTTN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackC2ERKN7android2spINS2_22IRecalibrationCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwRecalibrationCallback::BnHwRecalibrationCallback(android::sp<com::fingerprints::extension::V1_0::IRecalibrationCallback> const&) */
int _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallbackC2ERKN7android2spINS2_22IRecalibrationCallbackEEE(void);

/* Symbol: _ZThn16_N3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::onLastStrongRef(void const*) */
int _ZThn16_N3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-com::fingerprints::extension::V1_0::BnHwCalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_023BnHwCalibrationCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringD0Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::~BnHwFingerprintEngineering() */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::ping() */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchE0_NS2_22IFingerprintSenseTouchE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintSenseTouch-in-com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchE0_NS2_22IFingerprintSenseTouchE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackD0Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCallback::~BnHwSensorTestCallback() */
int _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackD0Ev(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_019ISensorTestCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::ISensorTestCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_019ISensorTestCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringD1Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::~BnHwFingerprintEngineering() */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering24_hidl_getEnrollChallengeEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::_hidl_getEnrollChallenge(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering24_hidl_getEnrollChallengeEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021writeEmbeddedToParcelERKNS2_10SensorInfoEPN7android8hardware6ParcelEmm */
/* Demangled: com::fingerprints::extension::V1_0::writeEmbeddedToParcel(com::fingerprints::extension::V1_0::SensorInfo const&, android::hardware::Parcel*, unsigned long, unsigned long) */
int _ZN3com12fingerprints9extension4V1_021writeEmbeddedToParcelERKNS2_10SensorInfoEPN7android8hardware6ParcelEmm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackD1Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCallback::~BnHwSensorTestCallback() */
int _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-com::fingerprints::extension::V1_0::BnHwVerifyUserCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTTN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator */
extern void* _ZTTN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringD2Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::~BnHwFingerprintEngineering() */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringD2Ev(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-com::fingerprints::extension::V1_0::BpHwFingerprintEngineering */
extern void* _ZTCN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackD2Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCallback::~BnHwSensorTestCallback() */
int _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallbackD2Ev(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-com::fingerprints::extension::V1_0::BpHwSensorTestCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationENS6_23IFingerprintCalibrationEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IFingerprintCalibration> android::hardware::details::getServiceInternal<com::fingerprints::extension::V1_0::BpHwFingerprintCalibration, com::fingerprints::extension::V1_0::IFingerprintCalibration, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationENS6_23IFingerprintCalibrationEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration */
extern void* _ZTTN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback14_hidl_onStatusEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEjbjjj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::_hidl_onStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, bool, unsigned int, unsigned int, unsigned int) */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback14_hidl_onStatusEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEjbjjj(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch14_hidl_getForceEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::_hidl_getForce(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch14_hidl_getForceEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021writeEmbeddedToParcelERKNS2_10SensorTestEPN7android8hardware6ParcelEmm */
/* Demangled: com::fingerprints::extension::V1_0::writeEmbeddedToParcel(com::fingerprints::extension::V1_0::SensorTest const&, android::hardware::Parcel*, unsigned long, unsigned long) */
int _ZN3com12fingerprints9extension4V1_021writeEmbeddedToParcelERKNS2_10SensorTestEPN7android8hardware6ParcelEmm(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest */
extern void* _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback15onLastStrongRefEPKv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::onLastStrongRef(void const*) */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-com::fingerprints::extension::V1_0::BnHwVerifyUserCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackENS6_19IVerifyUserCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IVerifyUserCallback> android::hardware::details::getServiceInternal<com::fingerprints::extension::V1_0::BpHwVerifyUserCallback, com::fingerprints::extension::V1_0::IVerifyUserCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackENS6_19IVerifyUserCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator16_hidl_verifyUserEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS4_2spINS2_19IVerifyUserCallbackEEERKNS5_8hidl_vecIhEESJ_SJ_ */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::_hidl_verifyUser(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<com::fingerprints::extension::V1_0::IVerifyUserCallback> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator16_hidl_verifyUserEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS4_2spINS2_19IVerifyUserCallbackEEERKNS5_8hidl_vecIhEESJ_SJ_(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigation25_hidl_setNavigationConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::_hidl_setNavigationConfig(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigation25_hidl_setNavigationConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackD0Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback::~BnHwSensorTestCaptureCallback() */
int _ZThn32_N3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackD0Ev(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-com::fingerprints::extension::V1_0::BnHwImageCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_024BnHwImageCaptureCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackD1Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwSensorTestCaptureCallback::~BnHwSensorTestCaptureCallback() */
int _ZThn32_N3com12fingerprints9extension4V1_029BnHwSensorTestCaptureCallbackD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::ping() */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringC2ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::BpHwFingerprintEngineering(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineeringC2ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch8castFromERKN7android2spIS3_EEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSenseTouch::castFrom(android::sp<com::fingerprints::extension::V1_0::IFingerprintSenseTouch> const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSenseTouch8castFromERKN7android2spIS3_EEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallback14_hidl_onInjectEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageInjectionCallback::_hidl_onInject(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwImageInjectionCallback14_hidl_onInjectEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackC2ERKN7android2spINS2_19IVerifyUserCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwVerifyUserCallback::BnHwVerifyUserCallback(android::sp<com::fingerprints::extension::V1_0::IVerifyUserCallback> const&) */
int _ZN3com12fingerprints9extension4V1_022BnHwVerifyUserCallbackC2ERKN7android2spINS2_19IVerifyUserCallbackEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch */
extern void* _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::IImageInjectionCallback::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_023IImageInjectionCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_023BsRecalibrationCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BsRecalibrationCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_023BsRecalibrationCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch17_hidl_setAuthModeEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENS2_28SenseTouchAuthenticationModeEj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::_hidl_setAuthMode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, com::fingerprints::extension::V1_0::SenseTouchAuthenticationMode, unsigned int) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch17_hidl_setAuthModeEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorENS2_28SenseTouchAuthenticationModeEj(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallback4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BnHwImageCaptureCallback::ping() */
int _ZN3com12fingerprints9extension4V1_024BnHwImageCaptureCallback4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest */
extern void* _ZTVN3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation13tryGetServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration15onLastStrongRefEPKv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::onLastStrongRef(void const*) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTTN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackE */
/* Demangled: VTT for com::fingerprints::extension::V1_0::BpHwSensorTestCallback */
extern void* _ZTTN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering24_hidl_getEnrollChallengeEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::_hidl_getEnrollChallenge(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering24_hidl_getEnrollChallengeEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022readEmbeddedFromParcelERKNS2_10SensorInfoERKN7android8hardware6ParcelEmm */
/* Demangled: com::fingerprints::extension::V1_0::readEmbeddedFromParcel(com::fingerprints::extension::V1_0::SensorInfo const&, android::hardware::Parcel const&, unsigned long, unsigned long) */
int _ZN3com12fingerprints9extension4V1_022readEmbeddedFromParcelERKNS2_10SensorInfoERKN7android8hardware6ParcelEmm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageCaptureCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN3com12fingerprints9extension4V1_024BpHwImageCaptureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_022BpHwSensorTestCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorD0Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator::~BnHwFingerprintAuthenticator() */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::ping() */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration4pingEv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestE0_NS2_22IFingerprintSensorTestE */
/* Demangled: construction vtable for com::fingerprints::extension::V1_0::IFingerprintSensorTest-in-com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestE0_NS2_22IFingerprintSensorTestE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BpHwSensorTestCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_022BpHwSensorTestCallbackE;

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorD1Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator::~BnHwFingerprintAuthenticator() */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchENS6_22IFingerprintSenseTouchEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IFingerprintSenseTouch> android::hardware::details::getServiceInternal<com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch, com::fingerprints::extension::V1_0::IFingerprintSenseTouch, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchENS6_22IFingerprintSenseTouchEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackC1ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::BpHwVerifyUserCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallbackC1ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorD2Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintAuthenticator::~BnHwFingerprintAuthenticator() */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintAuthenticatorD2Ev(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator */
extern void* _ZTVN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticatorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationD0Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::~BnHwFingerprintNavigation() */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibration4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration::ping() */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibration4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BsRecalibrationCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsRecalibrationCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN3com12fingerprints9extension4V1_023BsRecalibrationCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationD1Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::~BnHwFingerprintNavigation() */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch14_hidl_getForceEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::_hidl_getForce(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouch14_hidl_getForceEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestENS6_22IFingerprintSensorTestEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IFingerprintSensorTest> android::hardware::details::getServiceInternal<com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest, com::fingerprints::extension::V1_0::IFingerprintSensorTest, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTestENS6_22IFingerprintSensorTestEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationD2Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::~BnHwFingerprintNavigation() */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationD2Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation19getNavigationConfigENSt3__18functionIFvRKNS2_16NavigationConfigEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::getNavigationConfig(std::__1::function<void (com::fingerprints::extension::V1_0::NavigationConfig const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation19getNavigationConfigENSt3__18functionIFvRKNS2_16NavigationConfigEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::ping() */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration4pingEv(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration */
extern void* _ZTVN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationC1ERKN7android2spINS2_23IFingerprintCalibrationEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintCalibration::BnHwFingerprintCalibration(android::sp<com::fingerprints::extension::V1_0::IFingerprintCalibration> const&) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationC1ERKN7android2spINS2_23IFingerprintCalibrationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationC1ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::BpHwFingerprintCalibration(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibrationC1ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-com::fingerprints::extension::V1_0::BnHwFingerprintEngineering */
extern void* _ZTCN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationE0_N7android8hardware7IBinderE;

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest13runSensorTestERKN7android2spINS2_19ISensorTestCallbackEEERKNS2_10SensorTestERKNS2_15SensorTestInputE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSensorTest::runSensorTest(android::sp<com::fingerprints::extension::V1_0::ISensorTestCallback> const&, com::fingerprints::extension::V1_0::SensorTest const&, com::fingerprints::extension::V1_0::SensorTestInput const&) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSensorTest13runSensorTestERKN7android2spINS2_19ISensorTestCallbackEEERKNS2_10SensorTestERKNS2_15SensorTestInputE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::BpHwRecalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback10getServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BsFingerprintCalibration13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintCalibration::addOnewayTask(std::__1::function<void ()>) */
int _ZN3com12fingerprints9extension4V1_024BsFingerprintCalibration13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintEngineering::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintEngineering24registerForNotificationsERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2spINSD_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestD0Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::~BnHwFingerprintSensorTest() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibration4pingEv */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintCalibration::ping() */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibration4pingEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintNavigation::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintNavigation11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration12_hidl_cancelEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::_hidl_cancel(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibration12_hidl_cancelEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch10readConfigENSt3__18functionIFvRKNS2_16SenseTouchConfigEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::readConfig(std::__1::function<void (com::fingerprints::extension::V1_0::SenseTouchConfig const&)>) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch10readConfigENSt3__18functionIFvRKNS2_16SenseTouchConfigEEEE(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestD1Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintSensorTest::~BnHwFingerprintSensorTest() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_025BnHwFingerprintSensorTestD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackC2ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwImageInjectionCallback::BpHwImageInjectionCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackC2ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_027BsSensorTestCaptureCallbackC2EN7android2spINS2_26ISensorTestCaptureCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsSensorTestCaptureCallback::BsSensorTestCaptureCallback(android::sp<com::fingerprints::extension::V1_0::ISensorTestCaptureCallback>) */
int _ZN3com12fingerprints9extension4V1_027BsSensorTestCaptureCallbackC2EN7android2spINS2_26ISensorTestCaptureCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_022BpHwVerifyUserCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator15onLastStrongRefEPKv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintAuthenticator::onLastStrongRef(void const*) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintAuthenticator15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering28_hidl_startImageSubscriptionEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS4_2spINS2_21IImageCaptureCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintEngineering::_hidl_startImageSubscription(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<com::fingerprints::extension::V1_0::IImageCaptureCallback> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintEngineering28_hidl_startImageSubscriptionEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorERKNS4_2spINS2_21IImageCaptureCallbackEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintRecalibration::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintRecalibration14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackD0Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwImageInjectionCallback::~BnHwImageInjectionCallback() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationD0Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintCalibration::~BnHwFingerprintCalibration() */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationD0Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringC1ERKN7android2spINS2_23IFingerprintEngineeringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::BnHwFingerprintEngineering(android::sp<com::fingerprints::extension::V1_0::IFingerprintEngineering> const&) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineeringC1ERKN7android2spINS2_23IFingerprintEngineeringEEE(void);

/* Symbol: _ZTv0_n24_N3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackD1Ev */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BnHwImageInjectionCallback::~BnHwImageInjectionCallback() */
int _ZTv0_n24_N3com12fingerprints9extension4V1_026BnHwImageInjectionCallbackD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationD1Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintCalibration::~BnHwFingerprintCalibration() */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback8castFromERKN7android2spIS3_EEb */
/* Demangled: com::fingerprints::extension::V1_0::IRecalibrationCallback::castFrom(android::sp<com::fingerprints::extension::V1_0::IRecalibrationCallback> const&, bool) */
int _ZN3com12fingerprints9extension4V1_022IRecalibrationCallback8castFromERKN7android2spIS3_EEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_020BsVerifyUserCallbackE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BsVerifyUserCallback */
extern void* _ZTVN3com12fingerprints9extension4V1_020BsVerifyUserCallbackE;

/* Symbol: _ZTv0_n40_N3com12fingerprints9extension4V1_022BpHwVerifyUserCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to com::fingerprints::extension::V1_0::BpHwVerifyUserCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N3com12fingerprints9extension4V1_022BpHwVerifyUserCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::BpHwCalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_023BpHwCalibrationCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationD2Ev */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintCalibration::~BnHwFingerprintCalibration() */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintCalibrationD2Ev(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-com::fingerprints::extension::V1_0::BnHwFingerprintNavigation */
extern void* _ZTCN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::BpHwImageCaptureCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback21notifySyspropsChangedEv */
/* Demangled: com::fingerprints::extension::V1_0::IVerifyUserCallback::notifySyspropsChanged() */
int _ZN3com12fingerprints9extension4V1_019IVerifyUserCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwCalibrationCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_023BpHwCalibrationCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback8castFromERKN7android2spINS4_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_019ISensorTestCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_019ISensorTestCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationC2ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintRecalibration::BpHwFingerprintRecalibration(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_028BpHwFingerprintRecalibrationC2ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration */
extern void* _ZTCN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibrationE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020ICalibrationCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE */
/* Demangled: com::fingerprints::extension::V1_0::ICalibrationCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN3com12fingerprints9extension4V1_020ICalibrationCallback5debugERKN7android8hardware11hidl_handleERKNS5_8hidl_vecINS5_11hidl_stringEEE(void);

/* Symbol: _ZTVN3com12fingerprints9extension4V1_023BsFingerprintSensorTestE */
/* Demangled: vtable for com::fingerprints::extension::V1_0::BsFingerprintSensorTest */
extern void* _ZTVN3com12fingerprints9extension4V1_023BsFingerprintSensorTestE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback15onLastStrongRefEPKv */
/* Demangled: com::fingerprints::extension::V1_0::BpHwRecalibrationCallback::onLastStrongRef(void const*) */
int _ZN3com12fingerprints9extension4V1_025BpHwRecalibrationCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN7android8hardware10fromBinderIN3com12fingerprints9extension4V1_019IVerifyUserCallbackENS5_22BpHwVerifyUserCallbackENS5_22BnHwVerifyUserCallbackEEENS_2spIT_EERKNS9_INS0_7IBinderEEE */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IVerifyUserCallback> android::hardware::fromBinder<com::fingerprints::extension::V1_0::IVerifyUserCallback, com::fingerprints::extension::V1_0::BpHwVerifyUserCallback, com::fingerprints::extension::V1_0::BnHwVerifyUserCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN3com12fingerprints9extension4V1_019IVerifyUserCallbackENS5_22BpHwVerifyUserCallbackENS5_22BnHwVerifyUserCallbackEEENS_2spIT_EERKNS9_INS0_7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch23_hidl_finishCalibrationEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEjj */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch::_hidl_finishCalibration(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, unsigned int) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouch23_hidl_finishCalibrationEPN7android8hardware10IInterfaceEPNS5_7details16HidlInstrumentorEjj(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchD0Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::~BnHwFingerprintSenseTouch() */
int _ZThn32_N3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchD0Ev(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_020ICalibrationCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::ICalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_020ICalibrationCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibration10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintRecalibration::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_028BnHwFingerprintRecalibration10onTransactEjRKN7android8hardware6ParcelEPS6_jNSt3__18functionIFvRS6_EEE(void);

/* Symbol: _ZThn32_N3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchD1Ev */
/* Demangled: non-virtual thunk to com::fingerprints::extension::V1_0::BnHwFingerprintSenseTouch::~BnHwFingerprintSenseTouch() */
int _ZThn32_N3com12fingerprints9extension4V1_025BnHwFingerprintSenseTouchD1Ev(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintCalibration::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3com12fingerprints9extension4V1_023IFingerprintCalibration17registerAsServiceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BsFingerprintEngineeringC2EN7android2spINS2_23IFingerprintEngineeringEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintEngineering::BsFingerprintEngineering(android::sp<com::fingerprints::extension::V1_0::IFingerprintEngineering>) */
int _ZN3com12fingerprints9extension4V1_024BsFingerprintEngineeringC2EN7android2spINS2_23IFingerprintEngineeringEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationC1ERKN7android2spINS2_22IFingerprintNavigationEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintNavigation::BnHwFingerprintNavigation(android::sp<com::fingerprints::extension::V1_0::IFingerprintNavigation> const&) */
int _ZN3com12fingerprints9extension4V1_025BnHwFingerprintNavigationC1ERKN7android2spINS2_22IFingerprintNavigationEEE(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-com::fingerprints::extension::V1_0::BpHwFingerprintSenseTouch */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwFingerprintSenseTouchE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware10fromBinderIN3com12fingerprints9extension4V1_019ISensorTestCallbackENS5_22BpHwSensorTestCallbackENS5_22BnHwSensorTestCallbackEEENS_2spIT_EERKNS9_INS0_7IBinderEEE */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::ISensorTestCallback> android::hardware::fromBinder<com::fingerprints::extension::V1_0::ISensorTestCallback, com::fingerprints::extension::V1_0::BpHwSensorTestCallback, com::fingerprints::extension::V1_0::BnHwSensorTestCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN3com12fingerprints9extension4V1_019ISensorTestCallbackENS5_22BpHwSensorTestCallbackENS5_22BnHwSensorTestCallbackEEENS_2spIT_EERKNS9_INS0_7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IImageCaptureCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN3com12fingerprints9extension4V1_021IImageCaptureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_024BsImageInjectionCallbackC2EN7android2spINS2_23IImageInjectionCallbackEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsImageInjectionCallback::BsImageInjectionCallback(android::sp<com::fingerprints::extension::V1_0::IImageInjectionCallback>) */
int _ZN3com12fingerprints9extension4V1_024BsImageInjectionCallbackC2EN7android2spINS2_23IImageInjectionCallbackEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintNavigation::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN3com12fingerprints9extension4V1_025BpHwFingerprintNavigation11linkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackC2ERKN7android2spINS4_8hardware7IBinderEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwSensorTestCaptureCallback::BpHwSensorTestCaptureCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN3com12fingerprints9extension4V1_029BpHwSensorTestCaptureCallbackC2ERKN7android2spINS4_8hardware7IBinderEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_020BsVerifyUserCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsVerifyUserCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN3com12fingerprints9extension4V1_020BsVerifyUserCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE */
/* Demangled: com::fingerprints::extension::V1_0::BpHwFingerprintCalibration::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN3com12fingerprints9extension4V1_026BpHwFingerprintCalibration13unlinkToDeathERKN7android2spINS4_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering25_hidl_startImageInjectionEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwFingerprintEngineering::_hidl_startImageInjection(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_026BnHwFingerprintEngineering25_hidl_startImageInjectionEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackENS6_21IImageCaptureCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IImageCaptureCallback> android::hardware::details::getServiceInternal<com::fingerprints::extension::V1_0::BpHwImageCaptureCallback, com::fingerprints::extension::V1_0::IImageCaptureCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_024BpHwImageCaptureCallbackENS6_21IImageCaptureCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwSensorTestCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN3com12fingerprints9extension4V1_022BnHwSensorTestCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintAuthenticator::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN3com12fingerprints9extension4V1_025IFingerprintAuthenticator14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026BsFingerprintAuthenticatorC1EN7android2spINS2_25IFingerprintAuthenticatorEEE */
/* Demangled: com::fingerprints::extension::V1_0::BsFingerprintAuthenticator::BsFingerprintAuthenticator(android::sp<com::fingerprints::extension::V1_0::IFingerprintAuthenticator>) */
int _ZN3com12fingerprints9extension4V1_026BsFingerprintAuthenticatorC1EN7android2spINS2_25IFingerprintAuthenticatorEEE(void);

/* Symbol: _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback10descriptorE */
/* Demangled: com::fingerprints::extension::V1_0::ISensorTestCaptureCallback::descriptor */
extern void* _ZN3com12fingerprints9extension4V1_026ISensorTestCaptureCallback10descriptorE;

/* Symbol: _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest21setHALInstrumentationEv */
/* Demangled: com::fingerprints::extension::V1_0::IFingerprintSensorTest::setHALInstrumentation() */
int _ZN3com12fingerprints9extension4V1_022IFingerprintSensorTest21setHALInstrumentationEv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackENS6_22IRecalibrationCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb */
/* Demangled: android::sp<com::fingerprints::extension::V1_0::IRecalibrationCallback> android::hardware::details::getServiceInternal<com::fingerprints::extension::V1_0::BpHwRecalibrationCallback, com::fingerprints::extension::V1_0::IRecalibrationCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackENS6_22IRecalibrationCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSC_11char_traitsIcEENSC_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-com::fingerprints::extension::V1_0::BpHwRecalibrationCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_025BpHwRecalibrationCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTCN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackE0_N7android8hardware11BpInterfaceINS2_23IImageInjectionCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<com::fingerprints::extension::V1_0::IImageInjectionCallback>-in-com::fingerprints::extension::V1_0::BpHwImageInjectionCallback */
extern void* _ZTCN3com12fingerprints9extension4V1_026BpHwImageInjectionCallbackE0_N7android8hardware11BpInterfaceINS2_23IImageInjectionCallbackEEE;

/* Symbol: _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallback14_hidl_onStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE */
/* Demangled: com::fingerprints::extension::V1_0::BnHwRecalibrationCallback::_hidl_onStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN3com12fingerprints9extension4V1_025BnHwRecalibrationCallback14_hidl_onStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS4_8hardware6ParcelEPSB_NSt3__18functionIFvRSB_EEE(void);

__END_DECLS

#endif /* BEGONIA_RE_COM_FINGERPRINTS_EXTENSION_1_0_H */
