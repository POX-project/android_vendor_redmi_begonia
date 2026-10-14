/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.engineermode@1.2.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.engineermode@1.2.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_ENGINEERMODE_1_2_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_ENGINEERMODE_1_2_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd18_hidl_isNfcSupportEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::_hidl_isNfcSupport(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd18_hidl_isNfcSupportEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_212BsEmCallbackE0_NS3_11IEmCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_2::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_2::BsEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_212BsEmCallbackE0_NS3_11IEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmd10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmd10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd12setBypassDisERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setBypassDis(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd12setBypassDisERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd16clearItemsforRscEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::clearItemsforRsc() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd16clearItemsforRscEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback::~BnHwEmCallback() */
int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14btPollingStartEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::btPollingStart() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14btPollingStartEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14setWcnCoreDumpERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setWcnCoreDump(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14setWcnCoreDumpERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd::~BnHwEmd() */
int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackE;

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_25BsEmdC2EN7android2spINS3_4IEmdEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BsEmd::BsEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmd>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_25BsEmdC2EN7android2spINS3_4IEmdEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmd18_hidl_isNfcSupportEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd::_hidl_isNfcSupport(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmd18_hidl_isNfcSupportEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd15setUsbOtgSwitchERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setUsbOtgSwitch(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd15setUsbOtgSwitchERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd18btStartNoSigRxTestEiiii */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::btStartNoSigRxTest(int, int, int, int) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd18btStartNoSigRxTestEiiii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE0_NS2_4V1_14IEmdE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_1::IEmd-in-vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE0_NS2_4V1_14IEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14setCtIREngModeERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setCtIREngMode(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14setCtIREngModeERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::BpHwEmCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd13setEmUsbValueERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setEmUsbValue(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd13setEmUsbValueERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd8castFromERKN7android2spINS2_4V1_14IEmdEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmd> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd8castFromERKN7android2spINS2_4V1_14IEmdEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd17setPreferGprsModeERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setPreferGprsMode(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd17setPreferGprsModeERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback::~BnHwEmCallback() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd12sendToServerERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::sendToServer(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd12sendToServerERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14setEmConfigureERKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setEmConfigure(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14setEmConfigureERKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback8castFromERKN7android2spINS2_4V1_011IEmCallbackEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback8castFromERKN7android2spINS2_4V1_011IEmCallbackEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_25BsEmdC1EN7android2spINS3_4IEmdEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BsEmd::BsEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmd>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_25BsEmdC1EN7android2spINS3_4IEmdEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::BpHwEmd(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback, void>(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackEvEENS_2spIT_EESB_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback16callbackToClientERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::callbackToClient(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback16callbackToClientERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd16setVolteMalPctidERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setVolteMalPctid(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd16setVolteMalPctidERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback8castFromERKN7android2spINS2_4V1_111IEmCallbackEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback8castFromERKN7android2spINS2_4V1_111IEmCallbackEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_2::IEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd12setEmUsbTypeERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setEmUsbType(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd12setEmUsbTypeERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE;

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_2::IEmCallback */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackE;

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_25BsEmdE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_2::BsEmd */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_25BsEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackC2ERKN7android2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback::BnHwEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackC2ERKN7android2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd22btIsBLEEnhancedSupportEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::btIsBLEEnhancedSupport() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd22btIsBLEEnhancedSupportEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_25BsEmd13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BsEmd::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_25BsEmd13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd::~BnHwEmd() */
int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdD0Ev(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdD1Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd::~BnHwEmd() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd12isNfcSupportEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::isNfcSupport() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd12isNfcSupportEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd8btUninitEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::btUninit() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd8btUninitEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE0_NS3_4IEmdE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_2::IEmd-in-vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE0_NS3_4IEmdE;

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd13btStopRelayerEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::btStopRelayer() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd13btStopRelayerEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd16isGauge30SupportEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::isGauge30Support() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd16isGauge30SupportEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd18setTestSimCardTypeERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setTestSimCardType(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd18setTestSimCardTypeERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackENS7_11IEmCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback, vendor::mediatek::hardware::engineermode::V1_2::IEmCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackENS7_11IEmCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackE0_NS2_4V1_111IEmCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_1::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_2::IEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackE0_NS2_4V1_111IEmCallbackE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd11setCallbackERKN7android2spINS2_4V1_011IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd11setCallbackERKN7android2spINS2_4V1_011IEmCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14btIsBLESupportEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::btIsBLESupport() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14btIsBLESupportEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd7setMomsERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setMoms(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd7setMomsERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::BpHwEmd(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmd> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmd19_hidl_btIsEmSupportEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd::_hidl_btIsEmSupport(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmd19_hidl_btIsEmSupportEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_212BsEmCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BsEmCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_212BsEmCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback::~BnHwEmCallback() */
int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdC1ERKN7android2spINS3_4IEmdEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd::BnHwEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmd> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdC1ERKN7android2spINS3_4IEmdEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_24IEmdE0_NS2_4V1_04IEmdE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmd-in-vendor::mediatek::hardware::engineermode::V1_2::IEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_24IEmdE0_NS2_4V1_04IEmdE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd::~BnHwEmd() */
int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_212BsEmCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_2::BsEmCallback */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_212BsEmCallbackE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback::~BnHwEmCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd13btPollingStopEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::btPollingStop() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd13btPollingStopEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd15btHciCommandRunERKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::btHciCommandRun(android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd15btHciCommandRunERKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd15setSvpLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setSvpLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd15setSvpLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_24IEmdE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_2::IEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_24IEmdE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14setImsTestModeERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setImsTestMode(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14setImsTestModeERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd19setOmxVdecLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setOmxVdecLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd19setOmxVdecLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd24sendToServerWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS2_4V1_011IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::sendToServerWithCallBack(android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd24sendToServerWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS2_4V1_011IEmCallbackEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackENS6_4V1_011IEmCallbackENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_2::IEmCallback, vendor::mediatek::hardware::engineermode::V1_0::IEmCallback, vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback>(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackENS6_4V1_011IEmCallbackENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd22setVdecDriverLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setVdecDriverLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd22setVdecDriverLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd27getFilePathListWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS2_4V1_011IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::getFilePathListWithCallBack(android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd27getFilePathListWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS2_4V1_011IEmCallbackEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_24IEmdENS6_4V1_14IEmdENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmd> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_2::IEmd, vendor::mediatek::hardware::engineermode::V1_1::IEmd, vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd>(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmd>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_24IEmdENS6_4V1_14IEmdENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_24IEmdE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_2::IEmd */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_24IEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackENS6_4V1_111IEmCallbackENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_2::IEmCallback, vendor::mediatek::hardware::engineermode::V1_1::IEmCallback, vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback>(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmCallback>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackENS6_4V1_111IEmCallbackENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd22_hidl_isGauge30SupportEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::_hidl_isGauge30Support(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd22_hidl_isGauge30SupportEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd16setBypassServiceERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setBypassService(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd16setBypassServiceERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback::~BnHwEmCallback() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackD0Ev(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackENS_4hidl4base4V1_05IBaseENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_2::IEmCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackENS_4hidl4base4V1_05IBaseENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackE0_NS2_4V1_011IEmCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_2::IEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackE0_NS2_4V1_011IEmCallbackE;

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE0_NS3_11IEmCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_2::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE0_NS3_11IEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_212BsEmCallbackC1EN7android2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BsEmCallback::BsEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmCallback>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_212BsEmCallbackC1EN7android2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd15setMdResetDelayERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setMdResetDelay(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd15setMdResetDelayERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackC1ERKN7android2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback::BnHwEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmCallback> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackC1ERKN7android2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14genMdLogFilterERKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::genMdLogFilter(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14genMdLogFilterERKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd19setOmxCoreLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setOmxCoreLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd19setOmxCoreLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_24IEmdENS6_4V1_04IEmdENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmd> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_2::IEmd, vendor::mediatek::hardware::engineermode::V1_0::IEmd, vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd>(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmd>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_24IEmdENS6_4V1_04IEmdENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_24IEmdE0_NS2_4V1_14IEmdE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_1::IEmd-in-vendor::mediatek::hardware::engineermode::V1_2::IEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_24IEmdE0_NS2_4V1_14IEmdE;

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd15onLastStrongRefEPKv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_2::IEmCallback */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_211IEmCallbackE;

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE0_N7android8hardware11BpInterfaceINS3_4IEmdEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::engineermode::V1_2::IEmd>-in-vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE0_N7android8hardware11BpInterfaceINS3_4IEmdEEE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd10setUsbPortERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setUsbPort(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd10setUsbPortERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd16btEndNoSigRxTestENSt3__18functionIFvRKN7android8hardware8hidl_vecIiEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::btEndNoSigRxTest(std::__1::function<void (android::hardware::hidl_vec<int> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd16btEndNoSigRxTestENSt3__18functionIFvRKN7android8hardware8hidl_vecIiEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd19setOmxVencLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setOmxVencLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd19setOmxVencLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd6btInitEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::btInit() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd6btInitEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_25BsEmdE0_NS3_4IEmdE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_2::IEmd-in-vendor::mediatek::hardware::engineermode::V1_2::BsEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_25BsEmdE0_NS3_4IEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback::~BnHwEmCallback() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd13btIsEmSupportEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::btIsEmSupport() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd13btIsEmSupportEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd21notifySyspropsChangedEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdE */
/* Demangled: VTT for vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd */
extern void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmd4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmd4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE0_NS2_4V1_111IEmCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_1::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE0_NS2_4V1_111IEmCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd30setRadioCapabilitySwitchEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setRadioCapabilitySwitchEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd30setRadioCapabilitySwitchEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdENS7_4IEmdEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmd> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd, vendor::mediatek::hardware::engineermode::V1_2::IEmd, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdENS7_4IEmdEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd10descriptorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::descriptor */
extern void* _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmd22_hidl_isGauge30SupportEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd::_hidl_isGauge30Support(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmd22_hidl_isGauge30SupportEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdD0Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd::~BnHwEmd() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14setDsbpSupportERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setDsbpSupport(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14setDsbpSupportERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd21setModemWarningEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setModemWarningEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd21setModemWarningEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd22setVencDriverLogEnableERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setVencDriverLogEnable(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd22setVencDriverLogEnableERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd11setBypassEnERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setBypassEn(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd11setBypassEnERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd16setDisableC2kCapERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setDisableC2kCap(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd16setDisableC2kCapERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd8btDoTestEiiiiiii */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::btDoTest(int, int, int, int, int, int, int) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd8btDoTestEiiiiiii(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE0_N7android8hardware11BpInterfaceINS3_11IEmCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::engineermode::V1_2::IEmCallback>-in-vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE0_N7android8hardware11BpInterfaceINS3_11IEmCallbackEEE;

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE;

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_211IEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::BpHwEmCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_24IEmdENS_4hidl4base4V1_05IBaseENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmd> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_2::IEmd, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_24IEmdENS_4hidl4base4V1_05IBaseENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd::~BnHwEmd() */
int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd8castFromERKN7android2spINS2_4V1_04IEmdEEEb */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmd> const&, bool) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd8castFromERKN7android2spINS2_4V1_04IEmdEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdD2Ev */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd::~BnHwEmd() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd4pingEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::ping() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_212BsEmCallbackC2EN7android2spINS3_11IEmCallbackEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BsEmCallback::BsEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmCallback>) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_212BsEmCallbackC2EN7android2spINS3_11IEmCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd16btIsComboSupportEv */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::btIsComboSupport() */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd16btIsComboSupportEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14btStartRelayerEii */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::btStartRelayer(int, int) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd14btStartRelayerEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE0_NS2_4V1_04IEmdE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmd-in-vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmdE0_NS2_4V1_04IEmdE;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE0_NS2_4V1_011IEmCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_2::BpHwEmCallback */
extern void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_214BpHwEmCallbackE0_NS2_4V1_011IEmCallbackE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_2::BnHwEmCallback::~BnHwEmCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_214BnHwEmCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd19_hidl_btIsEmSupportEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::_hidl_btIsEmSupport(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd19_hidl_btIsEmSupportEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::IEmd::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_24IEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdC2ERKN7android2spINS3_4IEmdEEE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BnHwEmd::BnHwEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmd> const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BnHwEmdC2ERKN7android2spINS3_4IEmdEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd12setSmsFormatERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::engineermode::V1_2::BpHwEmd::setSmsFormat(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware12engineermode4V1_27BpHwEmd12setSmsFormatERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware12engineermode4V1_24IEmdE */
/* Demangled: vtable for vendor::mediatek::hardware::engineermode::V1_2::IEmd */
extern void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_24IEmdE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_ENGINEERMODE_1_2_H */
