/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.apuware.utils@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.apuware.utils@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_APUWARE_UTILS_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_APUWARE_UTILS_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtils28_hidl_acquirePerformanceLockEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils::_hidl_acquirePerformanceLock(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtils28_hidl_acquirePerformanceLockEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils4pingEv */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::ping() */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsENS8_13IApuwareUtilsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils, vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsENS8_13IApuwareUtilsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils */
extern void* _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils4pingEv */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::ping() */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils13queryHwConfigENSt3__18functionIFvbRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::queryHwConfig(std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils13queryHwConfigENSt3__18functionIFvbRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_014BsApuwareUtilsE0_NS4_13IApuwareUtilsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils-in-vendor::mediatek::hardware::apuware::utils::V1_0::BsApuwareUtils */
extern void* _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_014BsApuwareUtilsE0_NS4_13IApuwareUtilsE;

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils */
extern void* _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtils12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtils12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils19_hidl_queryHwConfigEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvbRKNS7_11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::_hidl_queryHwConfig(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils19_hidl_queryHwConfigEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvbRKNS7_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils28_hidl_releasePerformanceLockEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::_hidl_releasePerformanceLock(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils28_hidl_releasePerformanceLockEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtils19_hidl_queryHwConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils::_hidl_queryHwConfig(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtils19_hidl_queryHwConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsE */
/* Demangled: vtable for vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils */
extern void* _ZTVN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils */
extern void* _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_014BsApuwareUtilsC1EN7android2spINS4_13IApuwareUtilsEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BsApuwareUtils::BsApuwareUtils(android::sp<vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_014BsApuwareUtilsC1EN7android2spINS4_13IApuwareUtilsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware7apuware5utils4V1_014BsApuwareUtilsE */
/* Demangled: vtable for vendor::mediatek::hardware::apuware::utils::V1_0::BsApuwareUtils */
extern void* _ZTVN6vendor8mediatek8hardware7apuware5utils4V1_014BsApuwareUtilsE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils21notifySyspropsChangedEv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsENS_4hidl4base4V1_05IBaseENS8_16BpHwApuwareUtilsEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils> > android::hardware::details::castInterface<vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsENS_4hidl4base4V1_05IBaseENS8_16BpHwApuwareUtilsEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsE0_NS4_13IApuwareUtilsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils-in-vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils */
extern void* _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsE0_NS4_13IApuwareUtilsE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils10descriptorE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::descriptor */
extern void* _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils22acquirePerformanceLockEiNS4_21PERFORMANCE_MODE_E_HDEj */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::acquirePerformanceLock(int, vendor::mediatek::hardware::apuware::utils::V1_0::PERFORMANCE_MODE_E_HD, unsigned int) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils22acquirePerformanceLockEiNS4_21PERFORMANCE_MODE_E_HDEj(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsE */
/* Demangled: VTT for vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils */
extern void* _ZTTN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsE;

/* Symbol: _ZTVN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsE */
/* Demangled: vtable for vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils */
extern void* _ZTVN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils21notifySyspropsChangedEv(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils */
extern void* _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsE */
/* Demangled: VTT for vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils */
extern void* _ZTTN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsD2Ev */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils::~BnHwApuwareUtils() */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils22releasePerformanceLockEi */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::releasePerformanceLock(int) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils22releasePerformanceLockEi(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils */
extern void* _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_014BsApuwareUtils13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BsApuwareUtils::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_014BsApuwareUtils13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_014BsApuwareUtilsC2EN7android2spINS4_13IApuwareUtilsEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BsApuwareUtils::BsApuwareUtils(android::sp<vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_014BsApuwareUtilsC2EN7android2spINS4_13IApuwareUtilsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtils10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtils10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::BpHwApuwareUtils(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils28_hidl_acquirePerformanceLockEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNS4_21PERFORMANCE_MODE_E_HDEj */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::_hidl_acquirePerformanceLock(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, vendor::mediatek::hardware::apuware::utils::V1_0::PERFORMANCE_MODE_E_HD, unsigned int) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils28_hidl_acquirePerformanceLockEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNS4_21PERFORMANCE_MODE_E_HDEj(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils::~BnHwApuwareUtils() */
int _ZTv0_n12_N6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsD1Ev(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtils4pingEv */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils::ping() */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtils4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsD1Ev */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils::~BnHwApuwareUtils() */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils */
extern void* _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils::~BnHwApuwareUtils() */
int _ZThn20_N6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::castFrom(android::sp<vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils> const&, bool) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsC2ERKN7android2spINS4_13IApuwareUtilsEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils::BnHwApuwareUtils(android::sp<vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils> const&) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsC2ERKN7android2spINS4_13IApuwareUtilsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils::~BnHwApuwareUtils() */
int _ZTv0_n12_N6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtils10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsD0Ev */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils::~BnHwApuwareUtils() */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsD0Ev(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsE */
/* Demangled: vtable for vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils */
extern void* _ZTVN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils::~BnHwApuwareUtils() */
int _ZThn20_N6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtils28_hidl_releasePerformanceLockEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils::_hidl_releasePerformanceLock(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtils28_hidl_releasePerformanceLockEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsC1ERKN7android2spINS4_13IApuwareUtilsEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BnHwApuwareUtils::BnHwApuwareUtils(android::sp<vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils> const&) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BnHwApuwareUtilsC1ERKN7android2spINS4_13IApuwareUtilsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::BpHwApuwareUtils(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZThn8_N6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtils15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils */
extern void* _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsE0_N7android8hardware11BpInterfaceINS4_13IApuwareUtilsEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils>-in-vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils */
extern void* _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsE0_N7android8hardware11BpInterfaceINS4_13IApuwareUtilsEEE;

/* Symbol: _ZTTN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsE */
/* Demangled: VTT for vendor::mediatek::hardware::apuware::utils::V1_0::BpHwApuwareUtils */
extern void* _ZTTN6vendor8mediatek8hardware7apuware5utils4V1_016BpHwApuwareUtilsE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_APUWARE_UTILS_1_0_H */
