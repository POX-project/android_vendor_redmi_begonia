/*
 * Reverse-Engineered ABI Specification for: vendor.xiaomi.hardware.displayfeature@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.xiaomi.hardware.displayfeature@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_DISPLAYFEATURE_1_0_H
#define BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_DISPLAYFEATURE_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature10setFeatureEiiii */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::setFeature(int, int, int, int) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature10setFeatureEiiii(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature22_hidl_sendPanelCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_sendPanelCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature22_hidl_sendPanelCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeatureENS_4hidl4base4V1_05IBaseENS7_18BpHwDisplayFeatureEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature> > android::hardware::details::castInterface<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeatureENS_4hidl4base4V1_05IBaseENS7_18BpHwDisplayFeatureEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::castFrom(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> const&, bool) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature22_hidl_notifyBrightnessEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_notifyBrightness(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature22_hidl_notifyBrightnessEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE */
/* Demangled: VTT for vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature */
extern void* _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE */
/* Demangled: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback */
extern void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature17_hidl_sendMessageEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_sendMessage(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature17_hidl_sendMessageEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature17_hidl_setFunctionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiii */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_setFunction(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int, int) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature17_hidl_setFunctionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiii(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature25_hidl_sendPostProcCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_sendPostProcCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature25_hidl_sendPostProcCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback4pingEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::ping() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback4pingEv(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallbackE0_NS3_23IDisplayFeatureCallbackE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback-in-vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeatureCallback */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallbackE0_NS3_23IDisplayFeatureCallbackE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureE */
/* Demangled: VTT for vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature */
extern void* _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallbackC2EN7android2spINS3_23IDisplayFeatureCallbackEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeatureCallback::BsDisplayFeatureCallback(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallbackC2EN7android2spINS3_23IDisplayFeatureCallbackEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallbackC1EN7android2spINS3_23IDisplayFeatureCallbackEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeatureCallback::BsDisplayFeatureCallback(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallbackC1EN7android2spINS3_23IDisplayFeatureCallbackEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE0_N7android8hardware11BpInterfaceINS3_15IDisplayFeatureEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature>-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE0_N7android8hardware11BpInterfaceINS3_15IDisplayFeatureEEE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature16_hidl_setFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_setFeature(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature16_hidl_setFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16notifyBrightnessEi */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::notifyBrightness(int) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16notifyBrightnessEi(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeatureE */
/* Demangled: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeature */
extern void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeatureE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature19sendPostProcCommandEii */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::sendPostProcCommand(int, int) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature19sendPostProcCommandEii(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature24_hidl_sendRefreshCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_sendRefreshCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature24_hidl_sendRefreshCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeatureC2EN7android2spINS3_15IDisplayFeatureEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeature::BsDisplayFeature(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeatureC2EN7android2spINS3_15IDisplayFeatureEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD2Ev */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::~BnHwDisplayFeature() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD2Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16registerCallbackEiRKN7android2spINS3_23IDisplayFeatureCallbackEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::registerCallback(int, android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16registerCallbackEiRKN7android2spINS3_23IDisplayFeatureCallbackEEE(void);

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD1Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::~BnHwDisplayFeature() */
int _ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::BpHwDisplayFeature(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeatureE */
/* Demangled: VTT for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature */
extern void* _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeatureE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE0_NS3_23IDisplayFeatureCallbackE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE0_NS3_23IDisplayFeatureCallbackE;

/* Symbol: _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackE */
/* Demangled: VTT for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback */
extern void* _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeatureC1EN7android2spINS3_15IDisplayFeatureEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeature::BsDisplayFeature(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeatureC1EN7android2spINS3_15IDisplayFeatureEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD1Ev */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::~BnHwDisplayFeature() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::BpHwDisplayFeatureCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeatureE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeatureE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD0Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::~BnHwDisplayFeature() */
int _ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD0Ev(void);

/* Symbol: _ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackENS6_26BpHwDisplayFeatureCallbackENS6_26BnHwDisplayFeatureCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> android::hardware::fromBinder<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback, vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback, vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackENS6_26BpHwDisplayFeatureCallbackENS6_26BnHwDisplayFeatureCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD1Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::~BnHwDisplayFeature() */
int _ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD2Ev */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::~BnHwDisplayFeatureCallback() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD2Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackE */
/* Demangled: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback */
extern void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD0Ev */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::~BnHwDisplayFeature() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD0Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::~BnHwDisplayFeature() */
int _ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackC2ERKN7android2spINS3_23IDisplayFeatureCallbackEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::BnHwDisplayFeatureCallback(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackC2ERKN7android2spINS3_23IDisplayFeatureCallbackEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD1Ev */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::~BnHwDisplayFeatureCallback() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature22_hidl_sendPanelCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_sendPanelCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature22_hidl_sendPanelCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature4pingEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::ping() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureC1ERKN7android2spINS3_15IDisplayFeatureEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::BnHwDisplayFeature(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureC1ERKN7android2spINS3_15IDisplayFeatureEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature22_hidl_notifyBrightnessEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_notifyBrightness(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature22_hidl_notifyBrightnessEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback25displayfeatureInfoChangedEii */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::displayfeatureInfoChanged(int, int) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback25displayfeatureInfoChangedEii(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE0_N7android8hardware11BpInterfaceINS3_23IDisplayFeatureCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback>-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE0_N7android8hardware11BpInterfaceINS3_23IDisplayFeatureCallbackEEE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeatureCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackC1ERKN7android2spINS3_23IDisplayFeatureCallbackEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::BnHwDisplayFeatureCallback(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackC1ERKN7android2spINS3_23IDisplayFeatureCallbackEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD0Ev */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::~BnHwDisplayFeatureCallback() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_registerCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback4pingEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::ping() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback4pingEv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackENS7_23IDisplayFeatureCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback, vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackENS7_23IDisplayFeatureCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::castFrom(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature> const&, bool) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16sendPanelCommandERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::sendPanelCommand(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16sendPanelCommandERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback10descriptorE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::descriptor */
extern void* _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback10descriptorE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback4pingEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::ping() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback4pingEv(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE */
/* Demangled: VTT for vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback */
extern void* _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS5_2spINS3_23IDisplayFeatureCallbackEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_registerCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS5_2spINS3_23IDisplayFeatureCallbackEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature11sendMessageEiiRKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::sendMessage(int, int, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature11sendMessageEiiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::BpHwDisplayFeature(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> android::hardware::details::wrapPassthrough<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback, void>(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackEvEENS_2spIT_EESB_(void);

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::~BnHwDisplayFeatureCallback() */
int _ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature17_hidl_setFunctionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_setFunction(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature17_hidl_setFunctionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::BpHwDisplayFeatureCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature24_hidl_sendRefreshCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_sendRefreshCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature24_hidl_sendRefreshCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackE */
/* Demangled: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback */
extern void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackE;

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::~BnHwDisplayFeatureCallback() */
int _ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature11setFunctionEiiii */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::setFunction(int, int, int, int) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature11setFunctionEiiii(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE0_NS3_15IDisplayFeatureE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE0_NS3_15IDisplayFeatureE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackENS_4hidl4base4V1_05IBaseENS7_26BpHwDisplayFeatureCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> > android::hardware::details::castInterface<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackENS_4hidl4base4V1_05IBaseENS7_26BpHwDisplayFeatureCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature4pingEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::ping() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature4pingEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE */
/* Demangled: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature */
extern void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE;

/* Symbol: _ZTv0_n20_N6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureC2ERKN7android2spINS3_15IDisplayFeatureEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::BnHwDisplayFeature(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureC2ERKN7android2spINS3_15IDisplayFeatureEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeatureE0_NS3_15IDisplayFeatureE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature-in-vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeature */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeatureE0_NS3_15IDisplayFeatureE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureENS7_15IDisplayFeatureEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature, vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureENS7_15IDisplayFeatureEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureE */
/* Demangled: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature */
extern void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackE */
/* Demangled: VTT for vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback */
extern void* _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackE;

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD1Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::~BnHwDisplayFeatureCallback() */
int _ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature25_hidl_sendPostProcCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_sendPostProcCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature25_hidl_sendPostProcCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback31_hidl_displayfeatureInfoChangedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::_hidl_displayfeatureInfoChanged(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback31_hidl_displayfeatureInfoChangedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback31_hidl_displayfeatureInfoChangedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::_hidl_displayfeatureInfoChanged(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback31_hidl_displayfeatureInfoChangedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeature13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeature::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeature13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature15onLastStrongRefEPKv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::onLastStrongRef(void const*) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16_hidl_setFeatureEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiii */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_setFeature(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int, int) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16_hidl_setFeatureEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiii(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature21setHALInstrumentationEv(void);

/* Symbol: _ZTv0_n20_N6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature10descriptorE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::descriptor */
extern void* _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature10descriptorE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature18sendRefreshCommandEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::sendRefreshCommand() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature18sendRefreshCommandEv(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeatureE */
/* Demangled: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature */
extern void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeatureE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD0Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::~BnHwDisplayFeatureCallback() */
int _ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallbackE */
/* Demangled: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeatureCallback */
extern void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallbackE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature4pingEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::ping() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature4pingEv(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback */
extern void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature17_hidl_sendMessageEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_sendMessage(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature17_hidl_sendMessageEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback15onLastStrongRefEPKv */
/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::onLastStrongRef(void const*) */
int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback15onLastStrongRefEPKv(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_DISPLAYFEATURE_1_0_H */
