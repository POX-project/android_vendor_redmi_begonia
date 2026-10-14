/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.mdmonitor@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.mdmonitor@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MDMONITOR_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MDMONITOR_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService */
extern void* _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceE;

/* Symbol: _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService */
extern void* _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService */
extern void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorServiceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService */
extern void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService */
extern void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::ping() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback4pingEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService11sendMCPDataERKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::sendMCPData(android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService11sendMCPDataERKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE0_N7android8hardware11BpInterfaceINS3_17IMDMonitorServiceEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService>-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE0_N7android8hardware11BpInterfaceINS3_17IMDMonitorServiceEEE;

/* Symbol: _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorService */
extern void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorClientCallback */
extern void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService26_hidl_registerTrapCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::_hidl_registerTrapCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService26_hidl_registerTrapCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceC1ERKN7android2spINS3_17IMDMonitorServiceEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::BnHwMDMonitorService(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceC1ERKN7android2spINS3_17IMDMonitorServiceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceENS7_17IMDMonitorServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService, vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceENS7_17IMDMonitorServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback */
extern void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::~BnHwMDMonitorService() */
int _ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::~BnHwMDMonitorClientCallback() */
int _ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorServiceC1EN7android2spINS3_17IMDMonitorServiceEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorService::BsMDMonitorService(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorServiceC1EN7android2spINS3_17IMDMonitorServiceEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback17_hidl_MCPReceiverEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::_hidl_MCPReceiver(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback17_hidl_MCPReceiverEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback */
extern void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService17_hidl_sendMCPDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEENSt3__18functionIFvSF_EEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::_hidl_sendMCPData(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService17_hidl_sendMCPDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEENSt3__18functionIFvSF_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::~BnHwMDMonitorClientCallback() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::~BnHwMDMonitorClientCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::castFrom(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService> const&, bool) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::~BnHwMDMonitorService() */
int _ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorServiceENS_4hidl4base4V1_05IBaseENS7_20BpHwMDMonitorServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService> > android::hardware::details::castInterface<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorServiceENS_4hidl4base4V1_05IBaseENS7_20BpHwMDMonitorServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD0Ev */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::~BnHwMDMonitorService() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService4pingEv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::ping() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceC2ERKN7android2spINS3_17IMDMonitorServiceEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::BnHwMDMonitorService(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceC2ERKN7android2spINS3_17IMDMonitorServiceEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallbackC1EN7android2spINS3_24IMDMonitorClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorClientCallback::BsMDMonitorClientCallback(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallbackC1EN7android2spINS3_24IMDMonitorClientCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::BpHwMDMonitorClientCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback */
extern void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService4pingEv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::ping() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService4pingEv(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback, void>(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackEvEENS_2spIT_EESB_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::castFrom(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::ping() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback4pingEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback */
extern void* _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15onLastStrongRefEPKv(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService */
extern void* _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorServiceE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::~BnHwMDMonitorService() */
int _ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback */
extern void* _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::BpHwMDMonitorService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService4pingEv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::ping() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackC1ERKN7android2spINS3_24IMDMonitorClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::BnHwMDMonitorClientCallback(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackC1ERKN7android2spINS3_24IMDMonitorClientCallbackEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackENS7_24IMDMonitorClientCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback, vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackENS7_24IMDMonitorClientCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE0_NS3_24IMDMonitorClientCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE0_NS3_24IMDMonitorClientCallbackE;

/* Symbol: _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback */
extern void* _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::~BnHwMDMonitorClientCallback() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorServiceC2EN7android2spINS3_17IMDMonitorServiceEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorService::BsMDMonitorService(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorServiceC2EN7android2spINS3_17IMDMonitorServiceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService21_hidl_getModemBinDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::_hidl_getModemBinData(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService21_hidl_getModemBinDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback17_hidl_MCPReceiverEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::_hidl_MCPReceiver(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback17_hidl_MCPReceiverEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackC2ERKN7android2spINS3_24IMDMonitorClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::BnHwMDMonitorClientCallback(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackC2ERKN7android2spINS3_24IMDMonitorClientCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallbackE0_NS3_24IMDMonitorClientCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback-in-vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallbackE0_NS3_24IMDMonitorClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD2Ev */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::~BnHwMDMonitorService() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService20registerTrapCallbackERKN7android8hardware11hidl_stringERKNS5_2spINS3_24IMDMonitorClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::registerTrapCallback(android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService20registerTrapCallbackERKN7android8hardware11hidl_stringERKNS5_2spINS3_24IMDMonitorClientCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::ping() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorService13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorService::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorService13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService26_hidl_registerTrapCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_24IMDMonitorClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::_hidl_registerTrapCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService26_hidl_registerTrapCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_24IMDMonitorClientCallbackEEE(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15getModemBinDataENS3_15MtkModemBinTypeEjjNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::getModemBinData(vendor::mediatek::hardware::mdmonitor::V1_0::MtkModemBinType, unsigned int, unsigned int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15getModemBinDataENS3_15MtkModemBinTypeEjjNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorClientCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackENS6_27BpHwMDMonitorClientCallbackENS6_27BnHwMDMonitorClientCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> android::hardware::fromBinder<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback, vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback, vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackENS6_27BpHwMDMonitorClientCallbackENS6_27BnHwMDMonitorClientCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback11MCPReceiverERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::MCPReceiver(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback11MCPReceiverERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService21_hidl_getModemBinDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_15MtkModemBinTypeEjjNSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::_hidl_getModemBinData(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::mdmonitor::V1_0::MtkModemBinType, unsigned int, unsigned int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService21_hidl_getModemBinDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_15MtkModemBinTypeEjjNSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::BpHwMDMonitorService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::~BnHwMDMonitorClientCallback() */
int _ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService17_hidl_sendMCPDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::_hidl_sendMCPData(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService17_hidl_sendMCPDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService10descriptorE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::descriptor */
extern void* _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService10descriptorE;

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorServiceE0_NS3_17IMDMonitorServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService-in-vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorService */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorServiceE0_NS3_17IMDMonitorServiceE;

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE0_N7android8hardware11BpInterfaceINS3_24IMDMonitorClientCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback>-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE0_N7android8hardware11BpInterfaceINS3_24IMDMonitorClientCallbackEEE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallbackC2EN7android2spINS3_24IMDMonitorClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorClientCallback::BsMDMonitorClientCallback(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback>) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallbackC2EN7android2spINS3_24IMDMonitorClientCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::BpHwMDMonitorClientCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::~BnHwMDMonitorClientCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD1Ev(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::~BnHwMDMonitorService() */
int _ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::~BnHwMDMonitorClientCallback() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD0Ev(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackENS_4hidl4base4V1_05IBaseENS7_27BpHwMDMonitorClientCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackENS_4hidl4base4V1_05IBaseENS7_27BpHwMDMonitorClientCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD1Ev */
/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::~BnHwMDMonitorService() */
int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE0_NS3_17IMDMonitorServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService */
extern void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE0_NS3_17IMDMonitorServiceE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MDMONITOR_1_0_H */
