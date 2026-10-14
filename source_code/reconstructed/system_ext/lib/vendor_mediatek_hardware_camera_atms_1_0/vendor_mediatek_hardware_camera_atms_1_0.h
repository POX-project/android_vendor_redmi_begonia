/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.camera.atms@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.camera.atms@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_ATMS_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_ATMS_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs */
extern void* _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMs4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs::ping() */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMs4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsC2ERKN7android2spINS4_5IATMsEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs::BnHwATMs(android::sp<vendor::mediatek::hardware::camera::atms::V1_0::IATMs> const&) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsC2ERKN7android2spINS4_5IATMsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs15set_atms_factorERKN7android8hardware11hidl_stringESA_ */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::set_atms_factor(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs15set_atms_factorERKN7android8hardware11hidl_stringESA_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsE0_N7android8hardware11BpInterfaceINS4_5IATMsEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::atms::V1_0::IATMs>-in-vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs */
extern void* _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsE0_N7android8hardware11BpInterfaceINS4_5IATMsEEE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs */
extern void* _ZTVN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs::~BnHwATMs() */
int _ZThn20_N6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4atms4V1_06BsATMsE0_NS4_5IATMsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::atms::V1_0::IATMs-in-vendor::mediatek::hardware::camera::atms::V1_0::BsATMs */
extern void* _ZTCN6vendor8mediatek8hardware6camera4atms4V1_06BsATMsE0_NS4_5IATMsE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsC1ERKN7android2spINS4_5IATMsEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs::BnHwATMs(android::sp<vendor::mediatek::hardware::camera::atms::V1_0::IATMs> const&) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsC1ERKN7android2spINS4_5IATMsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera4atms4V1_05IATMsENS_4hidl4base4V1_05IBaseENS8_8BpHwATMsEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::atms::V1_0::IATMs> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::atms::V1_0::IATMs, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera4atms4V1_05IATMsENS_4hidl4base4V1_05IBaseENS8_8BpHwATMsEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsENS8_5IATMsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::atms::V1_0::IATMs> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs, vendor::mediatek::hardware::camera::atms::V1_0::IATMs, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsENS8_5IATMsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs21_hidl_get_atms_factorEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringENSt3__18functionIFvSF_EEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::_hidl_get_atms_factor(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs21_hidl_get_atms_factorEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringENSt3__18functionIFvSF_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs */
extern void* _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs */
extern void* _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs */
extern void* _ZTTN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZThn8_N6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::ping() */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs4pingEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs */
extern void* _ZTVN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs10descriptorE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::descriptor */
extern void* _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_06BsATMsC2EN7android2spINS4_5IATMsEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BsATMs::BsATMs(android::sp<vendor::mediatek::hardware::camera::atms::V1_0::IATMs>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_06BsATMsC2EN7android2spINS4_5IATMsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsD1Ev */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs::~BnHwATMs() */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::BpHwATMs(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs::~BnHwATMs() */
int _ZTv0_n12_N6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMs21_hidl_get_atms_factorEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs::_hidl_get_atms_factor(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMs21_hidl_get_atms_factorEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs15get_atms_factorERKN7android8hardware11hidl_stringENSt3__18functionIFvSA_EEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::get_atms_factor(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs15get_atms_factorERKN7android8hardware11hidl_stringENSt3__18functionIFvSA_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera4atms4V1_05IATMsE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::atms::V1_0::IATMs */
extern void* _ZTVN6vendor8mediatek8hardware6camera4atms4V1_05IATMsE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::castFrom(android::sp<vendor::mediatek::hardware::camera::atms::V1_0::IATMs> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_06BsATMs13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BsATMs::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_06BsATMs13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_06BsATMsC1EN7android2spINS4_5IATMsEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BsATMs::BsATMs(android::sp<vendor::mediatek::hardware::camera::atms::V1_0::IATMs>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_06BsATMsC1EN7android2spINS4_5IATMsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs */
extern void* _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs::~BnHwATMs() */
int _ZThn20_N6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::ping() */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs4pingEv(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4atms4V1_05IATMsE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::atms::V1_0::IATMs */
extern void* _ZTCN6vendor8mediatek8hardware6camera4atms4V1_05IATMsE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsE0_NS4_5IATMsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::atms::V1_0::IATMs-in-vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs */
extern void* _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsE0_NS4_5IATMsE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs */
extern void* _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs */
extern void* _ZTCN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera4atms4V1_06BsATMsE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::atms::V1_0::BsATMs */
extern void* _ZTVN6vendor8mediatek8hardware6camera4atms4V1_06BsATMsE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs21_hidl_set_atms_factorEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringESF_ */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::_hidl_set_atms_factor(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs21_hidl_set_atms_factorEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringESF_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera4atms4V1_05IATMsE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::atms::V1_0::IATMs */
extern void* _ZTTN6vendor8mediatek8hardware6camera4atms4V1_05IATMsE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMs10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMs10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsD2Ev */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs::~BnHwATMs() */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs::~BnHwATMs() */
int _ZTv0_n12_N6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsD1Ev(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMs21_hidl_set_atms_factorEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs::_hidl_set_atms_factor(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMs21_hidl_set_atms_factorEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMs14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::IATMs::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_05IATMs21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsD0Ev */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BnHwATMs::~BnHwATMs() */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BnHwATMsD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs::BpHwATMs(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::atms::V1_0::BpHwATMs */
extern void* _ZTTN6vendor8mediatek8hardware6camera4atms4V1_08BpHwATMsE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_ATMS_1_0_H */
