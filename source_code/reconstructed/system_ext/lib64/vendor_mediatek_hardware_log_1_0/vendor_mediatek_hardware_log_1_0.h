/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.log@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.log@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_LOG_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_LOG_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BnHwLog17_hidl_setCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::_hidl_setCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLog17_hidl_setCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog21notifySyspropsChangedEv(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware3log4V1_012ILogCallbackENS6_15BpHwLogCallbackENS6_15BnHwLogCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> android::hardware::fromBinder<vendor::mediatek::hardware::log::V1_0::ILogCallback, vendor::mediatek::hardware::log::V1_0::BpHwLogCallback, vendor::mediatek::hardware::log::V1_0::BnHwLogCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware3log4V1_012ILogCallbackENS6_15BpHwLogCallbackENS6_15BnHwLogCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackC1ERKN7android2spINS3_12ILogCallbackEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::BnHwLogCallback(android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackC1ERKN7android2spINS3_12ILogCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::~BnHwLogCallback() */
int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::log::V1_0::BpHwLogCallback */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::castFrom(android::sp<vendor::mediatek::hardware::log::V1_0::ILog> const&, bool) */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog17_hidl_setCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_12ILogCallbackEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::_hidl_setCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog17_hidl_setCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_12ILogCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BnHwLog18_hidl_sendToServerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::_hidl_sendToServer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLog18_hidl_sendToServerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::ping() */
int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_05BsLogC1EN7android2spINS3_4ILogEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BsLog::BsLog(android::sp<vendor::mediatek::hardware::log::V1_0::ILog>) */
int _ZN6vendor8mediatek8hardware3log4V1_05BsLogC1EN7android2spINS3_4ILogEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_07BpHwLogE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::log::V1_0::BpHwLog */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_07BpHwLogE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware3log4V1_07BnHwLogD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLog::~BnHwLog() */
int _ZTv0_n24_N6vendor8mediatek8hardware3log4V1_07BnHwLogD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE0_N7android8hardware11BpInterfaceINS3_12ILogCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::log::V1_0::ILogCallback>-in-vendor::mediatek::hardware::log::V1_0::BpHwLogCallback */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE0_N7android8hardware11BpInterfaceINS3_12ILogCallbackEEE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3log4V1_07BpHwLogENS7_4ILogEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::log::V1_0::ILog> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::log::V1_0::BpHwLog, vendor::mediatek::hardware::log::V1_0::ILog, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3log4V1_07BpHwLogENS7_4ILogEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::log::V1_0::BpHwLogCallback */
extern void* _ZTTN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_07BpHwLogE0_NS3_4ILogE */
/* Demangled: construction vtable for vendor::mediatek::hardware::log::V1_0::ILog-in-vendor::mediatek::hardware::log::V1_0::BpHwLog */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_07BpHwLogE0_NS3_4ILogE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::~BnHwLogCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_05BsLogC2EN7android2spINS3_4ILogEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BsLog::BsLog(android::sp<vendor::mediatek::hardware::log::V1_0::ILog>) */
int _ZN6vendor8mediatek8hardware3log4V1_05BsLogC2EN7android2spINS3_4ILogEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware3log4V1_07BpHwLog15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::log::V1_0::BpHwLog::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware3log4V1_07BpHwLog15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::log::V1_0::BpHwLogCallback */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::BpHwLogCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BnHwLogD1Ev */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::~BnHwLog() */
int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLogD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog11setCallbackERKN7android2spINS3_12ILogCallbackEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::setCallback(android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog11setCallbackERKN7android2spINS3_12ILogCallbackEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware3log4V1_07BnHwLogD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLog::~BnHwLog() */
int _ZThn32_N6vendor8mediatek8hardware3log4V1_07BnHwLogD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::log::V1_0::BnHwLogCallback */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::log::V1_0::BnHwLogCallback */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_07BpHwLogE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::log::V1_0::BpHwLog */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_07BpHwLogE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware3log4V1_07BnHwLogE */
/* Demangled: VTT for vendor::mediatek::hardware::log::V1_0::BnHwLog */
extern void* _ZTTN6vendor8mediatek8hardware3log4V1_07BnHwLogE;

/* Symbol: _ZTVN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::log::V1_0::BnHwLogCallback */
extern void* _ZTVN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::~BnHwLogCallback() */
int _ZThn32_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog10descriptorE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::descriptor */
extern void* _ZN6vendor8mediatek8hardware3log4V1_04ILog10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackC2ERKN7android2spINS3_12ILogCallbackEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::BnHwLogCallback(android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackC2ERKN7android2spINS3_12ILogCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_012ILogCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::log::V1_0::ILogCallback */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_012ILogCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_05BsLog13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BsLog::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware3log4V1_05BsLog13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3log4V1_07BnHwLogE */
/* Demangled: vtable for vendor::mediatek::hardware::log::V1_0::BnHwLog */
extern void* _ZTVN6vendor8mediatek8hardware3log4V1_07BnHwLogE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackENS7_12ILogCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::log::V1_0::BpHwLogCallback, vendor::mediatek::hardware::log::V1_0::ILogCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackENS7_12ILogCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_05BsLogE0_NS3_4ILogE */
/* Demangled: construction vtable for vendor::mediatek::hardware::log::V1_0::ILog-in-vendor::mediatek::hardware::log::V1_0::BsLog */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_05BsLogE0_NS3_4ILogE;

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware3log4V1_012ILogCallbackEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::log::V1_0::ILogCallback, void>(android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware3log4V1_012ILogCallbackEvEENS_2spIT_EESB_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::ping() */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::~BnHwLogCallback() */
int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_07BpHwLogE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::log::V1_0::BpHwLog */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_07BpHwLogE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware3log4V1_05BsLogE */
/* Demangled: vtable for vendor::mediatek::hardware::log::V1_0::BsLog */
extern void* _ZTVN6vendor8mediatek8hardware3log4V1_05BsLogE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BnHwLogC2ERKN7android2spINS3_4ILogEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::BnHwLog(android::sp<vendor::mediatek::hardware::log::V1_0::ILog> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLogC2ERKN7android2spINS3_4ILogEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3log4V1_04ILogENS_4hidl4base4V1_05IBaseENS7_7BpHwLogEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::log::V1_0::ILog> > android::hardware::details::castInterface<vendor::mediatek::hardware::log::V1_0::ILog, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::log::V1_0::BpHwLog>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3log4V1_04ILogENS_4hidl4base4V1_05IBaseENS7_7BpHwLogEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::castFrom(android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_013BsLogCallbackC1EN7android2spINS3_12ILogCallbackEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BsLogCallback::BsLogCallback(android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback>) */
int _ZN6vendor8mediatek8hardware3log4V1_013BsLogCallbackC1EN7android2spINS3_12ILogCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BnHwLog10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLog10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware3log4V1_07BnHwLogD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLog::~BnHwLog() */
int _ZTv0_n24_N6vendor8mediatek8hardware3log4V1_07BnHwLogD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_013BsLogCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BsLogCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware3log4V1_013BsLogCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::log::V1_0::BpHwLogCallback */
extern void* _ZTVN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLogC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::BpHwLog(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLogC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3log4V1_04ILogE */
/* Demangled: vtable for vendor::mediatek::hardware::log::V1_0::ILog */
extern void* _ZTVN6vendor8mediatek8hardware3log4V1_04ILogE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback16callbackToClientERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::callbackToClient(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback16callbackToClientERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3log4V1_012ILogCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::log::V1_0::ILogCallback */
extern void* _ZTVN6vendor8mediatek8hardware3log4V1_012ILogCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3log4V1_07BpHwLogE */
/* Demangled: vtable for vendor::mediatek::hardware::log::V1_0::BpHwLog */
extern void* _ZTVN6vendor8mediatek8hardware3log4V1_07BpHwLogE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::~BnHwLogCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_07BnHwLogE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::log::V1_0::BnHwLog */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_07BnHwLogE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3log4V1_012ILogCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::log::V1_0::ILogCallback */
extern void* _ZTTN6vendor8mediatek8hardware3log4V1_012ILogCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BnHwLogC1ERKN7android2spINS3_4ILogEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::BnHwLog(android::sp<vendor::mediatek::hardware::log::V1_0::ILog> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLogC1ERKN7android2spINS3_4ILogEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BnHwLogD0Ev */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::~BnHwLog() */
int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLogD0Ev(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware3log4V1_07BnHwLogD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLog::~BnHwLog() */
int _ZThn32_N6vendor8mediatek8hardware3log4V1_07BnHwLogD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog4pingEv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::ping() */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog4pingEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3log4V1_07BpHwLogE */
/* Demangled: VTT for vendor::mediatek::hardware::log::V1_0::BpHwLog */
extern void* _ZTTN6vendor8mediatek8hardware3log4V1_07BpHwLogE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware3log4V1_015BpHwLogCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware3log4V1_015BpHwLogCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_07BnHwLogE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::log::V1_0::BnHwLog */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_07BnHwLogE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_07BpHwLogE0_N7android8hardware11BpInterfaceINS3_4ILogEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::log::V1_0::ILog>-in-vendor::mediatek::hardware::log::V1_0::BpHwLog */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_07BpHwLogE0_N7android8hardware11BpInterfaceINS3_4ILogEEE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback22_hidl_callbackToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::_hidl_callbackToClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback22_hidl_callbackToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::log::V1_0::BnHwLogCallback */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::log::V1_0::BpHwLogCallback */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BnHwLog4pingEv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::ping() */
int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLog4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog4pingEv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::ping() */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::BpHwLogCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_013BsLogCallbackE0_NS3_12ILogCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::log::V1_0::ILogCallback-in-vendor::mediatek::hardware::log::V1_0::BsLogCallback */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_013BsLogCallbackE0_NS3_12ILogCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback22_hidl_callbackToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::_hidl_callbackToClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback22_hidl_callbackToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::~BnHwLogCallback() */
int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD0Ev(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware3log4V1_015BpHwLogCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware3log4V1_015BpHwLogCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog18_hidl_sendToServerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::_hidl_sendToServer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog18_hidl_sendToServerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3log4V1_04ILogE */
/* Demangled: VTT for vendor::mediatek::hardware::log::V1_0::ILog */
extern void* _ZTTN6vendor8mediatek8hardware3log4V1_04ILogE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog21setHALInstrumentationEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3log4V1_013BsLogCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::log::V1_0::BsLogCallback */
extern void* _ZTVN6vendor8mediatek8hardware3log4V1_013BsLogCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BnHwLog12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLog12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_04ILogE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::log::V1_0::ILog */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_04ILogE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_013BsLogCallbackC2EN7android2spINS3_12ILogCallbackEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BsLogCallback::BsLogCallback(android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback>) */
int _ZN6vendor8mediatek8hardware3log4V1_013BsLogCallbackC2EN7android2spINS3_12ILogCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE0_NS3_12ILogCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::log::V1_0::ILogCallback-in-vendor::mediatek::hardware::log::V1_0::BpHwLogCallback */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE0_NS3_12ILogCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BnHwLogD2Ev */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::~BnHwLog() */
int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLogD2Ev(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware3log4V1_07BpHwLog15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::log::V1_0::BpHwLog::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware3log4V1_07BpHwLog15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::ping() */
int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback4pingEv(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::~BnHwLogCallback() */
int _ZThn32_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog12sendToServerERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::sendToServer(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog12sendToServerERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_07BpHwLogC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::BpHwLog(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLogC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::log::V1_0::BnHwLogCallback */
extern void* _ZTTN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware3log4V1_04ILog14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3log4V1_04ILog14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3log4V1_07BnHwLogE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::log::V1_0::BnHwLog */
extern void* _ZTCN6vendor8mediatek8hardware3log4V1_07BnHwLogE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3log4V1_012ILogCallbackENS_4hidl4base4V1_05IBaseENS7_15BpHwLogCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::log::V1_0::ILogCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::log::V1_0::BpHwLogCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3log4V1_012ILogCallbackENS_4hidl4base4V1_05IBaseENS7_15BpHwLogCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_LOG_1_0_H */
