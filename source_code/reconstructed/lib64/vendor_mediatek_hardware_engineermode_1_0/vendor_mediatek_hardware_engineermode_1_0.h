/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.engineermode@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.engineermode@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_ENGINEERMODE_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_ENGINEERMODE_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback::~BnHwEmCallback() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd18_hidl_setEmUsbTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setEmUsbType(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd18_hidl_setEmUsbTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd22_hidl_btEndNoSigRxTestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_btEndNoSigRxTest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd22_hidl_btEndNoSigRxTestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdC1ERKN7android2spINS3_4IEmdEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::BnHwEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmd> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdC1ERKN7android2spINS3_4IEmdEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd10descriptorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::descriptor */
extern void* _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd30_hidl_sendToServerWithCallBackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_sendToServerWithCallBack(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd30_hidl_sendToServerWithCallBackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd13btPollingStopEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::btPollingStop() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd13btPollingStopEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14setImsTestModeERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setImsTestMode(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14setImsTestModeERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback::~BnHwEmCallback() */
int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd25_hidl_setOmxCoreLogEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setOmxCoreLogEnable(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd25_hidl_setOmxCoreLogEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::BpHwEmd(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22_hidl_setVolteMalPctidEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setVolteMalPctid(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22_hidl_setVolteMalPctidEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmd> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd8btUninitEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::btUninit() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd8btUninitEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdE0_N7android8hardware11BpInterfaceINS3_4IEmdEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::engineermode::V1_0::IEmd>-in-vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdE0_N7android8hardware11BpInterfaceINS3_4IEmdEEE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_05BsEmd13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BsEmd::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_05BsEmd13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd21_hidl_setSvpLogEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setSvpLogEnable(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd21_hidl_setSvpLogEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdD2Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::~BnHwEmd() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14btPollingStartEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::btPollingStart() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14btPollingStartEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd16setDisableC2kCapERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setDisableC2kCap(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd16setDisableC2kCapERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd36_hidl_setRadioCapabilitySwitchEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setRadioCapabilitySwitchEnable(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd36_hidl_setRadioCapabilitySwitchEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd11setCallbackERKN7android2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd11setCallbackERKN7android2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback, void>(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackEvEENS_2spIT_EESB_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14setDsbpSupportERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setDsbpSupport(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14setDsbpSupportERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd25_hidl_setOmxVdecLogEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setOmxVdecLogEnable(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd25_hidl_setOmxVdecLogEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd30setRadioCapabilitySwitchEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setRadioCapabilitySwitchEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd30setRadioCapabilitySwitchEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd28_hidl_btIsBLEEnhancedSupportEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_btIsBLEEnhancedSupport(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd28_hidl_btIsBLEEnhancedSupportEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd33_hidl_getFilePathListWithCallBackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_getFilePathListWithCallBack(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd33_hidl_getFilePathListWithCallBackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14setWcnCoreDumpERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setWcnCoreDump(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14setWcnCoreDumpERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd15setUsbOtgSwitchERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setUsbOtgSwitch(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd15setUsbOtgSwitchERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackC1ERKN7android2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback::BnHwEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackC1ERKN7android2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmCallback */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd16_hidl_setUsbPortEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setUsbPort(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd16_hidl_setUsbPortEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd16btIsComboSupportEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::btIsComboSupport() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd16btIsComboSupportEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd27_hidl_setModemWarningEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setModemWarningEnable(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd27_hidl_setModemWarningEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd25_hidl_setOmxVdecLogEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setOmxVdecLogEnable(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd25_hidl_setOmxVdecLogEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_setImsTestModeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setImsTestMode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_setImsTestModeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdENS7_4IEmdEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmd> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd, vendor::mediatek::hardware::engineermode::V1_0::IEmd, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdENS7_4IEmdEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackE0_N7android8hardware11BpInterfaceINS3_11IEmCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback>-in-vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackE0_N7android8hardware11BpInterfaceINS3_11IEmCallbackEEE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd18_hidl_setBypassDisEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setBypassDis(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd18_hidl_setBypassDisEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd15setMdResetDelayERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setMdResetDelay(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd15setMdResetDelayERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd22_hidl_setVolteMalPctidEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setVolteMalPctid(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd22_hidl_setVolteMalPctidEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14btStartRelayerEii */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::btStartRelayer(int, int) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14btStartRelayerEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd24_hidl_setTestSimCardTypeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setTestSimCardType(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd24_hidl_setTestSimCardTypeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd28_hidl_btIsBLEEnhancedSupportEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_btIsBLEEnhancedSupport(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd28_hidl_btIsBLEEnhancedSupportEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackENS6_14BpHwEmCallbackENS6_14BnHwEmCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> android::hardware::fromBinder<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback, vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback, vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackENS6_14BpHwEmCallbackENS6_14BnHwEmCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14genMdLogFilterERKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::genMdLogFilter(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14genMdLogFilterERKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_btPollingStartEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_btPollingStart(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_btPollingStartEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd21setHALInstrumentationEv(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::~BnHwEmd() */
int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd19_hidl_btPollingStopEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_btPollingStop(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd19_hidl_btPollingStopEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback::~BnHwEmCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14_hidl_btUninitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_btUninit(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14_hidl_btUninitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd15setSvpLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setSvpLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd15setSvpLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14_hidl_btDoTestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiiiii */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_btDoTest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int, int, int, int, int) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14_hidl_btDoTestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd21_hidl_setMdResetDelayEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setMdResetDelay(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd21_hidl_setMdResetDelayEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22setVencDriverLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setVencDriverLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22setVencDriverLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd27getFilePathListWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::getFilePathListWithCallBack(android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd27getFilePathListWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_012BsEmCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_0::BsEmCallback */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_012BsEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd19setOmxVencLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setOmxVencLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd19setOmxVencLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd7setMomsERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setMoms(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd7setMomsERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::~BnHwEmd() */
int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackC2ERKN7android2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback::BnHwEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackC2ERKN7android2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::BpHwEmCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_btStartRelayerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_btStartRelayer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_btStartRelayerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd21_hidl_setUsbOtgSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setUsbOtgSwitch(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd21_hidl_setUsbOtgSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_btPollingStartEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_btPollingStart(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_btPollingStartEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_setWcnCoreDumpEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setWcnCoreDump(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_setWcnCoreDumpEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd16btEndNoSigRxTestENSt3__18functionIFvRKN7android8hardware8hidl_vecIiEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::btEndNoSigRxTest(std::__1::function<void (android::hardware::hidl_vec<int> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd16btEndNoSigRxTestENSt3__18functionIFvRKN7android8hardware8hidl_vecIiEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd17_hidl_setCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd17_hidl_setCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_05BsEmdC1EN7android2spINS3_4IEmdEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BsEmd::BsEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmd>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_05BsEmdC1EN7android2spINS3_4IEmdEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_btIsBLESupportEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_btIsBLESupport(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_btIsBLESupportEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd21_hidl_setMdResetDelayEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setMdResetDelay(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd21_hidl_setMdResetDelayEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14btIsBLESupportEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::btIsBLESupport() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14btIsBLESupportEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd21_hidl_setSvpLogEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setSvpLogEnable(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd21_hidl_setSvpLogEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_04IEmdE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_0::IEmd */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_04IEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd28_hidl_setVdecDriverLogEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setVdecDriverLogEnable(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd28_hidl_setVdecDriverLogEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd23_hidl_setPreferGprsModeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setPreferGprsMode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd23_hidl_setPreferGprsModeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback::~BnHwEmCallback() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd23_hidl_setPreferGprsModeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setPreferGprsMode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd23_hidl_setPreferGprsModeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::BpHwEmd(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd16_hidl_setUsbPortEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setUsbPort(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd16_hidl_setUsbPortEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_btIsBLESupportEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_btIsBLESupport(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_btIsBLESupportEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd21_hidl_btHciCommandRunEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEENSt3__18functionIFvSF_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_btHciCommandRun(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd21_hidl_btHciCommandRunEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEENSt3__18functionIFvSF_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd25_hidl_setOmxVencLogEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setOmxVencLogEnable(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd25_hidl_setOmxVencLogEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd18_hidl_setSmsFormatEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setSmsFormat(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd18_hidl_setSmsFormatEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd19_hidl_btStopRelayerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_btStopRelayer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd19_hidl_btStopRelayerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd19setOmxCoreLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setOmxCoreLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd19setOmxCoreLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_05BsEmdE0_NS3_4IEmdE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmd-in-vendor::mediatek::hardware::engineermode::V1_0::BsEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_05BsEmdE0_NS3_4IEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd19_hidl_setEmUsbValueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setEmUsbValue(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd19_hidl_setEmUsbValueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_setCtIREngModeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setCtIREngMode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_setCtIREngModeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22_hidl_btIsComboSupportEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_btIsComboSupport(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22_hidl_btIsComboSupportEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd8btDoTestEiiiiiii */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::btDoTest(int, int, int, int, int, int, int) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd8btDoTestEiiiiiii(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_05BsEmdE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_0::BsEmd */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_05BsEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_012BsEmCallbackC1EN7android2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BsEmCallback::BsEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_012BsEmCallbackC1EN7android2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd19_hidl_btStopRelayerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_btStopRelayer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd19_hidl_btStopRelayerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdD1Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::~BnHwEmd() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_setCtIREngModeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setCtIREngMode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_setCtIREngModeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_genMdLogFilterEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_ */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_genMdLogFilter(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_genMdLogFilterEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd24sendToServerWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::sendToServerWithCallBack(android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd24sendToServerWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback::~BnHwEmCallback() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackD2Ev(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd28_hidl_setVdecDriverLogEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setVdecDriverLogEnable(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd28_hidl_setVdecDriverLogEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_012BsEmCallbackC2EN7android2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BsEmCallback::BsEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_012BsEmCallbackC2EN7android2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd18_hidl_setBypassDisEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setBypassDis(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd18_hidl_setBypassDisEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd24_hidl_setTestSimCardTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setTestSimCardType(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd24_hidl_setTestSimCardTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd16setVolteMalPctidERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setVolteMalPctid(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd16setVolteMalPctidERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22_hidl_setDisableC2kCapEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setDisableC2kCap(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22_hidl_setDisableC2kCapEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22setVdecDriverLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setVdecDriverLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22setVdecDriverLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd22_hidl_clearItemsforRscEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_clearItemsforRsc(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd22_hidl_clearItemsforRscEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22_hidl_clearItemsforRscEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_clearItemsforRsc(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22_hidl_clearItemsforRscEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd28_hidl_setVencDriverLogEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setVencDriverLogEnable(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd28_hidl_setVencDriverLogEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::BpHwEmCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback::~BnHwEmCallback() */
int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd18_hidl_setSmsFormatEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setSmsFormat(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd18_hidl_setSmsFormatEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd12sendToServerERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::sendToServer(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd12sendToServerERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd14_hidl_btUninitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_btUninit(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd14_hidl_btUninitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd18_hidl_sendToServerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_sendToServer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd18_hidl_sendToServerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd17_hidl_setBypassEnEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setBypassEn(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd17_hidl_setBypassEnEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd17setPreferGprsModeERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setPreferGprsMode(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd17setPreferGprsModeERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd14_hidl_btDoTestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_btDoTest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd14_hidl_btDoTestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_setWcnCoreDumpEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setWcnCoreDump(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_setWcnCoreDumpEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd13setEmUsbValueERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setEmUsbValue(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd13setEmUsbValueERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd15btHciCommandRunERKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::btHciCommandRun(android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd15btHciCommandRunERKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallback22_hidl_callbackToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback::_hidl_callbackToClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallback22_hidl_callbackToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd19_hidl_setEmUsbValueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setEmUsbValue(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd19_hidl_setEmUsbValueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_0::IEmCallback */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd18_hidl_sendToServerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_sendToServer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd18_hidl_sendToServerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd12setEmUsbTypeERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setEmUsbType(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd12setEmUsbTypeERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd19setOmxVdecLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setOmxVdecLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd19setOmxVdecLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_012BsEmCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BsEmCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_012BsEmCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackENS_4hidl4base4V1_05IBaseENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackENS_4hidl4base4V1_05IBaseENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd22_hidl_setDisableC2kCapEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setDisableC2kCap(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd22_hidl_setDisableC2kCapEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd18setTestSimCardTypeERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setTestSimCardType(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd18setTestSimCardTypeERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd21notifySyspropsChangedEv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_04IEmdENS_4hidl4base4V1_05IBaseENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmd> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_0::IEmd, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_04IEmdENS_4hidl4base4V1_05IBaseENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdE0_NS3_4IEmdE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmd-in-vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdE0_NS3_4IEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback22_hidl_callbackToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::_hidl_callbackToClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback22_hidl_callbackToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_setDsbpSupportEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setDsbpSupport(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_setDsbpSupportEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_setImsTestModeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setImsTestMode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_setImsTestModeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14setCtIREngModeERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setCtIREngMode(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd14setCtIREngModeERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd16setBypassServiceERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setBypassService(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd16setBypassServiceERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd12setSmsFormatERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setSmsFormat(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd12setSmsFormatERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd13_hidl_setMomsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setMoms(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd13_hidl_setMomsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_012BsEmCallbackE0_NS3_11IEmCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_0::BsEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_012BsEmCallbackE0_NS3_11IEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd21_hidl_btHciCommandRunEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_btHciCommandRun(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd21_hidl_btHciCommandRunEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd22_hidl_btIsComboSupportEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_btIsComboSupport(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd22_hidl_btIsComboSupportEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd11setBypassEnERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setBypassEn(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd11setBypassEnERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd27_hidl_setModemWarningEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setModemWarningEnable(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd27_hidl_setModemWarningEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd16clearItemsforRscEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::clearItemsforRsc() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd16clearItemsforRscEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_btStartRelayerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_btStartRelayer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_btStartRelayerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd10setUsbPortERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setUsbPort(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd10setUsbPortERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::~BnHwEmd() */
int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmCallback::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_011IEmCallback8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_genMdLogFilterEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_genMdLogFilter(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd20_hidl_genMdLogFilterEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd25_hidl_setOmxVencLogEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setOmxVencLogEnable(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd25_hidl_setOmxVencLogEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdC2ERKN7android2spINS3_4IEmdEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::BnHwEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmd> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdC2ERKN7android2spINS3_4IEmdEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_0::BnHwEmCallback::~BnHwEmCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_014BnHwEmCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd21_hidl_setUsbOtgSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setUsbOtgSwitch(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd21_hidl_setUsbOtgSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd22_hidl_setBypassServiceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setBypassService(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd22_hidl_setBypassServiceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd30_hidl_sendToServerWithCallBackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_sendToServerWithCallBack(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd30_hidl_sendToServerWithCallBackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd33_hidl_getFilePathListWithCallBackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_getFilePathListWithCallBack(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd33_hidl_getFilePathListWithCallBackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd17_hidl_setBypassEnEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setBypassEn(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd17_hidl_setBypassEnEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd24_hidl_btStartNoSigRxTestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiii */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_btStartNoSigRxTest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int, int) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd24_hidl_btStartNoSigRxTestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackENS7_11IEmCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback, vendor::mediatek::hardware::engineermode::V1_0::IEmCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackENS7_11IEmCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_05BsEmdC2EN7android2spINS3_4IEmdEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BsEmd::BsEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmd>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_05BsEmdC2EN7android2spINS3_4IEmdEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackE0_NS3_11IEmCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackE0_NS3_11IEmCallbackE;

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd18_hidl_setEmUsbTypeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setEmUsbType(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd18_hidl_setEmUsbTypeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::~BnHwEmd() */
int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd25_hidl_setOmxCoreLogEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setOmxCoreLogEnable(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd25_hidl_setOmxCoreLogEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd12setBypassDisERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setBypassDis(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd12setBypassDisERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd13_hidl_setMomsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setMoms(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd13_hidl_setMomsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_04IEmdE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_0::IEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_04IEmdE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback16callbackToClientERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmCallback::callbackToClient(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_014BpHwEmCallback16callbackToClientERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_0::IEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd12_hidl_btInitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_btInit(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd12_hidl_btInitEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd19_hidl_btPollingStopEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_btPollingStop(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd19_hidl_btPollingStopEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22_hidl_btEndNoSigRxTestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_8hidl_vecIiEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_btEndNoSigRxTest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_vec<int> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22_hidl_btEndNoSigRxTestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_8hidl_vecIiEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd21setModemWarningEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::setModemWarningEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd21setModemWarningEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd17_hidl_setCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd17_hidl_setCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd28_hidl_setVencDriverLogEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_setVencDriverLogEnable(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd28_hidl_setVencDriverLogEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdD0Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::~BnHwEmd() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmdD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd12_hidl_btInitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_btInit(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd12_hidl_btInitEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd13btStopRelayerEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::btStopRelayer() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd13btStopRelayerEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_setDsbpSupportEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setDsbpSupport(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd20_hidl_setDsbpSupportEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22btIsBLEEnhancedSupportEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::btIsBLEEnhancedSupport() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22btIsBLEEnhancedSupportEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd6btInitEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::btInit() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd6btInitEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::IEmd::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_04IEmd4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd24_hidl_btStartNoSigRxTestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BnHwEmd::_hidl_btStartNoSigRxTest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BnHwEmd24_hidl_btStartNoSigRxTestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd18btStartNoSigRxTestEiiii */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::btStartNoSigRxTest(int, int, int, int) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd18btStartNoSigRxTestEiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22_hidl_setBypassServiceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setBypassService(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd22_hidl_setBypassServiceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd36_hidl_setRadioCapabilitySwitchEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_0::BpHwEmd::_hidl_setRadioCapabilitySwitchEnable(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_07BpHwEmd36_hidl_setRadioCapabilitySwitchEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_04IEmdE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmd */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_04IEmdE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_ENGINEERMODE_1_0_H */
