/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.camera.frhandler@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.camera.frhandler@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_FRHANDLER_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_FRHANDLER_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::castFrom(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallbackC2EN7android2spINS4_17IFRClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRClientCallback::BsFRClientCallback(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallbackC2EN7android2spINS4_17IFRClientCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::ping() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback4pingEv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackENS8_17IFRClientCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback, vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackENS8_17IFRClientCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler19_hidl_deleteFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_deleteFeature(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler19_hidl_deleteFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler19startCompareFeatureERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::startCompareFeature(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler19startCompareFeatureERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler13deleteFeatureERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::deleteFeature(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler13deleteFeatureERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler4initEiRKN7android2spINS4_17IFRClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::init(int, android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler4initEiRKN7android2spINS4_17IFRClientCallbackEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::castFrom(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::BpHwFRHandler(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandlerE0_NS4_10IFRHandlerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRHandler */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandlerE0_NS4_10IFRHandlerE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_021writeEmbeddedToParcelERKNS4_9FRCbParamEPN7android8hardware6ParcelEmm */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::camera::frhandler::V1_0::FRCbParam const&, android::hardware::Parcel*, unsigned long, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_021writeEmbeddedToParcelERKNS4_9FRCbParamEPN7android8hardware6ParcelEmm(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::~BnHwFRClientCallback() */
int _ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD1Ev(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::~BnHwFRClientCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler24_hidl_stopCompareFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_stopCompareFeature(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler24_hidl_stopCompareFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15onLastStrongRefEPKv(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::~BnHwFRHandler() */
int _ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallbackC1EN7android2spINS4_17IFRClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRClientCallback::BsFRClientCallback(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallbackC1EN7android2spINS4_17IFRClientCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::~BnHwFRClientCallback() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler22_hidl_startSaveFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_startSaveFeature(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler22_hidl_startSaveFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRClientCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12_hidl_uninitEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_uninit(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12_hidl_uninitEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandlerE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRHandler */
extern void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandlerE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler16registerCallbackERKN7android2spINS4_17IFRClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::registerCallback(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler16registerCallbackERKN7android2spINS4_17IFRClientCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler18stopCompareFeatureEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::stopCompareFeature() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler18stopCompareFeatureEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler25_hidl_startCompareFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_startCompareFeature(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler25_hidl_startCompareFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::BpHwFRHandler(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler24_hidl_stopCompareFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_stopCompareFeature(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler24_hidl_stopCompareFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler16getFRImageFormatENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS9_8hidl_vecINS4_13FRImageFormatEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::getFRImageFormat(std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<vendor::mediatek::hardware::camera::frhandler::V1_0::FRImageFormat> const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler16getFRImageFormatENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS9_8hidl_vecINS4_13FRImageFormatEEEEEE(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallbackE0_NS4_17IFRClientCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallbackE0_NS4_17IFRClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler21setHALInstrumentationEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler */
extern void* _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback */
extern void* _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandlerC2EN7android2spINS4_10IFRHandlerEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRHandler::BsFRHandler(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandlerC2EN7android2spINS4_10IFRHandlerEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler */
extern void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackENS_4hidl4base4V1_05IBaseENS8_20BpHwFRClientCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackENS_4hidl4base4V1_05IBaseENS8_20BpHwFRClientCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::~BnHwFRClientCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::ping() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler4pingEv(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackENS7_20BpHwFRClientCallbackENS7_20BnHwFRClientCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> android::hardware::fromBinder<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback, vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback, vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackENS7_20BpHwFRClientCallbackENS7_20BnHwFRClientCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_022readEmbeddedFromParcelERKNS4_9FRCbParamERKN7android8hardware6ParcelEmm */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::camera::frhandler::V1_0::FRCbParam const&, android::hardware::Parcel const&, unsigned long, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_022readEmbeddedFromParcelERKNS4_9FRCbParamERKN7android8hardware6ParcelEmm(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_17IFRClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_registerCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_17IFRClientCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE0_NS4_10IFRHandlerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE0_NS4_10IFRHandlerE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::ping() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::~BnHwFRClientCallback() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback18onFRClientCallbackEiiRKNS4_9FRCbParamE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::onFRClientCallback(int, int, vendor::mediatek::hardware::camera::frhandler::V1_0::FRCbParam const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback18onFRClientCallbackEiiRKNS4_9FRCbParamE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback24_hidl_onFRClientCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiiRKNS4_9FRCbParamE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::_hidl_onFRClientCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, vendor::mediatek::hardware::camera::frhandler::V1_0::FRCbParam const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback24_hidl_onFRClientCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiiRKNS4_9FRCbParamE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandlerC1EN7android2spINS4_10IFRHandlerEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRHandler::BsFRHandler(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandlerC1EN7android2spINS4_10IFRHandlerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackC1ERKN7android2spINS4_17IFRClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::BnHwFRClientCallback(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackC1ERKN7android2spINS4_17IFRClientCallbackEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback */
extern void* _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerC1ERKN7android2spINS4_10IFRHandlerEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::BnHwFRHandler(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerC1ERKN7android2spINS4_10IFRHandlerEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandlerE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler */
extern void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandlerE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE0_NS4_17IFRClientCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE0_NS4_17IFRClientCallbackE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandlerE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandlerE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler10descriptorE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::descriptor */
extern void* _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD0Ev */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::~BnHwFRHandler() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD0Ev(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::~BnHwFRHandler() */
int _ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRClientCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback */
extern void* _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler16startSaveFeatureERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::startSaveFeature(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler16startSaveFeatureERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler21_hidl_stopSaveFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_stopSaveFeature(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler21_hidl_stopSaveFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler22_hidl_startSaveFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_startSaveFeature(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler22_hidl_startSaveFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::~BnHwFRClientCallback() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler12_hidl_uninitEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_uninit(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler12_hidl_uninitEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler22_hidl_getFRImageFormatEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvNS7_6camera6common4V1_06StatusERKNS7_8hidl_vecINS4_13FRImageFormatEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_getFRImageFormat(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<vendor::mediatek::hardware::camera::frhandler::V1_0::FRImageFormat> const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler22_hidl_getFRImageFormatEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvNS7_6camera6common4V1_06StatusERKNS7_8hidl_vecINS4_13FRImageFormatEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback24_hidl_onFRClientCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::_hidl_onFRClientCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback24_hidl_onFRClientCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::ping() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler18_hidl_simCbRequestEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiiRKNS4_9FRCbParamE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_simCbRequest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, vendor::mediatek::hardware::camera::frhandler::V1_0::FRCbParam const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler18_hidl_simCbRequestEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiiRKNS4_9FRCbParamE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandlerE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler */
extern void* _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandlerE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler10_hidl_initEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiRKNS6_2spINS4_17IFRClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_init(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler10_hidl_initEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiRKNS6_2spINS4_17IFRClientCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_registerCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::BpHwFRClientCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler10_hidl_initEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_init(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler10_hidl_initEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD1Ev */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::~BnHwFRHandler() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler6uninitEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::uninit() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler6uninitEv(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::~BnHwFRHandler() */
int _ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackC2ERKN7android2spINS4_17IFRClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::BnHwFRClientCallback(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackC2ERKN7android2spINS4_17IFRClientCallbackEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::ping() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE0_N7android8hardware11BpInterfaceINS4_10IFRHandlerEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler>-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE0_N7android8hardware11BpInterfaceINS4_10IFRHandlerEEE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12setPowerModeEi */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::setPowerMode(int) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12setPowerModeEi(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerC2ERKN7android2spINS4_10IFRHandlerEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::BnHwFRHandler(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerC2ERKN7android2spINS4_10IFRHandlerEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler */
extern void* _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::BpHwFRClientCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler */
extern void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE0_N7android8hardware11BpInterfaceINS4_17IFRClientCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback>-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE0_N7android8hardware11BpInterfaceINS4_17IFRClientCallbackEEE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler21_hidl_stopSaveFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_stopSaveFeature(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler21_hidl_stopSaveFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler22_hidl_getFRImageFormatEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_getFRImageFormat(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler22_hidl_getFRImageFormatEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler25_hidl_startCompareFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_startCompareFeature(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler25_hidl_startCompareFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandlerENS_4hidl4base4V1_05IBaseENS8_13BpHwFRHandlerEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandlerENS_4hidl4base4V1_05IBaseENS8_13BpHwFRHandlerEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback, void>(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackEvEENS_2spIT_EESC_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler */
extern void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler18_hidl_setPowerModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_setPowerMode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler18_hidl_setPowerModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15stopSaveFeatureEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::stopSaveFeature() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15stopSaveFeatureEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler18_hidl_simCbRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_simCbRequest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler18_hidl_simCbRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD2Ev */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::~BnHwFRHandler() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler19_hidl_deleteFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_deleteFeature(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler19_hidl_deleteFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::ping() */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback4pingEv(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::~BnHwFRClientCallback() */
int _ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD0Ev(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::~BnHwFRHandler() */
int _ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD0Ev(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler18_hidl_setPowerModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_setPowerMode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler18_hidl_setPowerModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandler13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRHandler::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandler13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12simCbRequestEiiRKNS4_9FRCbParamE */
/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::simCbRequest(int, int, vendor::mediatek::hardware::camera::frhandler::V1_0::FRCbParam const&) */
int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12simCbRequestEiiRKNS4_9FRCbParamE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerENS8_10IFRHandlerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler, vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerENS8_10IFRHandlerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_FRHANDLER_1_0_H */
