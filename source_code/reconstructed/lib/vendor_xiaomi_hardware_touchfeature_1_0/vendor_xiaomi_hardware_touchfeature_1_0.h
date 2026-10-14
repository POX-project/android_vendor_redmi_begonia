/*
 * Reverse-Engineered ABI Specification for: vendor.xiaomi.hardware.touchfeature@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.xiaomi.hardware.touchfeature@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_TOUCHFEATURE_1_0_H
#define BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_TOUCHFEATURE_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature21_hidl_getModeCurValueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::_hidl_getModeCurValue(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature21_hidl_getModeCurValueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeatureE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature */
extern void* _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeatureE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureE */
/* Demangled: VTT for vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature */
extern void* _ZTTN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureE;

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature15getModeMaxValueEi */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::getModeMaxValue(int) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature15getModeMaxValueEi(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature18_hidl_getModeValueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_8hidl_vecIiEEEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::_hidl_getModeValue(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (android::hardware::hidl_vec<int> const&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature18_hidl_getModeValueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_8hidl_vecIiEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature21notifySyspropsChangedEv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureENS7_13ITouchFeatureEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature, vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureENS7_13ITouchFeatureEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature21_hidl_getModeMinValueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::_hidl_getModeMinValue(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature21_hidl_getModeMinValueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature4pingEv */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::ping() */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature4pingEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureD1Ev */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::~BnHwTouchFeature() */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature21_hidl_getModeMaxValueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::_hidl_getModeMaxValue(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature21_hidl_getModeMaxValueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature21_hidl_getModeMaxValueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::_hidl_getModeMaxValue(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature21_hidl_getModeMaxValueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature19getModeDefaultValueEi */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::getModeDefaultValue(int) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature19getModeDefaultValueEi(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureE */
/* Demangled: vtable for vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature */
extern void* _ZTVN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureE;

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureD1Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::~BnHwTouchFeature() */
int _ZTv0_n12_N6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureD1Ev(void);

/* Symbol: _ZTv0_n20_N6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::BpHwTouchFeature(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature */
extern void* _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureD0Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::~BnHwTouchFeature() */
int _ZThn20_N6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature25_hidl_getModeDefaultValueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::_hidl_getModeDefaultValue(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature25_hidl_getModeDefaultValueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware12touchfeature4V1_014BsTouchFeatureE */
/* Demangled: vtable for vendor::xiaomi::hardware::touchfeature::V1_0::BsTouchFeature */
extern void* _ZTVN6vendor6xiaomi8hardware12touchfeature4V1_014BsTouchFeatureE;

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature4pingEv */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::ping() */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature15getModeMinValueEi */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::getModeMinValue(int) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature15getModeMinValueEi(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature21_hidl_getModeCurValueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::_hidl_getModeCurValue(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature21_hidl_getModeCurValueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature4pingEv */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::ping() */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature18_hidl_setModeValueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::_hidl_setModeValue(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature18_hidl_setModeValueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature */
extern void* _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature21_hidl_getModeMinValueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::_hidl_getModeMinValue(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature21_hidl_getModeMinValueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature */
extern void* _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeatureE */
/* Demangled: vtable for vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature */
extern void* _ZTVN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeatureE;

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeatureENS_4hidl4base4V1_05IBaseENS7_16BpHwTouchFeatureEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature> > android::hardware::details::castInterface<vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeatureENS_4hidl4base4V1_05IBaseENS7_16BpHwTouchFeatureEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature */
extern void* _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureE */
/* Demangled: vtable for vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature */
extern void* _ZTVN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureE;

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_014BsTouchFeatureC2EN7android2spINS3_13ITouchFeatureEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BsTouchFeature::BsTouchFeature(android::sp<vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_014BsTouchFeatureC2EN7android2spINS3_13ITouchFeatureEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature */
extern void* _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureD2Ev */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::~BnHwTouchFeature() */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureD2Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature15onLastStrongRefEPKv */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::onLastStrongRef(void const*) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature9modeResetEi */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::modeReset(int) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature9modeResetEi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureE0_NS3_13ITouchFeatureE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature-in-vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature */
extern void* _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureE0_NS3_13ITouchFeatureE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature */
extern void* _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature15getModeCurValueEi */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::getModeCurValue(int) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature15getModeCurValueEi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_014BsTouchFeature13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BsTouchFeature::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_014BsTouchFeature13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::BpHwTouchFeature(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_014BsTouchFeatureE0_NS3_13ITouchFeatureE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature-in-vendor::xiaomi::hardware::touchfeature::V1_0::BsTouchFeature */
extern void* _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_014BsTouchFeatureE0_NS3_13ITouchFeatureE;

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureD1Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::~BnHwTouchFeature() */
int _ZThn20_N6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature10descriptorE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::descriptor */
extern void* _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature10descriptorE;

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature15_hidl_modeResetEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::_hidl_modeReset(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature15_hidl_modeResetEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature25_hidl_getModeDefaultValueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::_hidl_getModeDefaultValue(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature25_hidl_getModeDefaultValueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeatureE */
/* Demangled: VTT for vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature */
extern void* _ZTTN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeatureE;

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature18_hidl_setModeValueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::_hidl_setModeValue(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature18_hidl_setModeValueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature21setHALInstrumentationEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureE0_N7android8hardware11BpInterfaceINS3_13ITouchFeatureEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature>-in-vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature */
extern void* _ZTCN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureE0_N7android8hardware11BpInterfaceINS3_13ITouchFeatureEEE;

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::castFrom(android::sp<vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature> const&, bool) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_014BsTouchFeatureC1EN7android2spINS3_13ITouchFeatureEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BsTouchFeature::BsTouchFeature(android::sp<vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_014BsTouchFeatureC1EN7android2spINS3_13ITouchFeatureEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureD0Ev */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::~BnHwTouchFeature() */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureD0Ev(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureE */
/* Demangled: VTT for vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature */
extern void* _ZTTN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeatureE;

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureC1ERKN7android2spINS3_13ITouchFeatureEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::BnHwTouchFeature(android::sp<vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature> const&) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureC1ERKN7android2spINS3_13ITouchFeatureEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureD0Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::~BnHwTouchFeature() */
int _ZTv0_n12_N6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature18_hidl_getModeValueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::_hidl_getModeValue(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeature18_hidl_getModeValueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureC2ERKN7android2spINS3_13ITouchFeatureEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BnHwTouchFeature::BnHwTouchFeature(android::sp<vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature> const&) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BnHwTouchFeatureC2ERKN7android2spINS3_13ITouchFeatureEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature12getModeValueEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIiEEEEE */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::getModeValue(int, std::__1::function<void (android::hardware::hidl_vec<int> const&)>) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature12getModeValueEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIiEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature12setModeValueEii */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::setModeValue(int, int) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature12setModeValueEii(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZThn8_N6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::ITouchFeature::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_013ITouchFeature10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature15_hidl_modeResetEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::xiaomi::hardware::touchfeature::V1_0::BpHwTouchFeature::_hidl_modeReset(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor6xiaomi8hardware12touchfeature4V1_016BpHwTouchFeature15_hidl_modeResetEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_TOUCHFEATURE_1_0_H */
