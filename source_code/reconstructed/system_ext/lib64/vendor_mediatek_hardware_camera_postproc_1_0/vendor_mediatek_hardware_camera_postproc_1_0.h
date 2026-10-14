/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.camera.postproc@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.camera.postproc@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_POSTPROC_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_POSTPROC_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDeviceC1EN7android2spINS4_11IPostDeviceEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BsPostDevice::BsPostDevice(android::sp<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice>) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDeviceC1EN7android2spINS4_11IPostDeviceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDeviceE0_NS4_11IPostDeviceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice-in-vendor::mediatek::hardware::camera::postproc::V1_0::BsPostDevice */
extern void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDeviceE0_NS4_11IPostDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice10doChromaNRERKNS4_13ChromaNRParamE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::doChromaNR(vendor::mediatek::hardware::camera::postproc::V1_0::ChromaNRParam const&) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice10doChromaNRERKNS4_13ChromaNRParamE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice */
extern void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::~BnHwPostDevice() */
int _ZThn32_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::castFrom(android::sp<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice10descriptorE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::descriptor */
extern void* _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::ping() */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice */
extern void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_021writeEmbeddedToParcelERKNS4_13ChromaNRParamEPN7android8hardware6ParcelEmm */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::camera::postproc::V1_0::ChromaNRParam const&, android::hardware::Parcel*, unsigned long, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_021writeEmbeddedToParcelERKNS4_13ChromaNRParamEPN7android8hardware6ParcelEmm(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceENS8_11IPostDeviceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice, vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceENS8_11IPostDeviceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDevice13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BsPostDevice::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDevice13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceC2ERKN7android2spINS4_11IPostDeviceEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::BnHwPostDevice(android::sp<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice> const&) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceC2ERKN7android2spINS4_11IPostDeviceEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice */
extern void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDeviceE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::postproc::V1_0::BsPostDevice */
extern void* _ZTVN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD1Ev */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::~BnHwPostDevice() */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::~BnHwPostDevice() */
int _ZTv0_n24_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice16_hidl_doChromaNREPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::_hidl_doChromaNR(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice16_hidl_doChromaNREPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::ping() */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice */
extern void* _ZTTN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceC1ERKN7android2spINS4_11IPostDeviceEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::BnHwPostDevice(android::sp<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice> const&) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceC1ERKN7android2spINS4_11IPostDeviceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_022readEmbeddedFromParcelERKNS4_13ChromaNRParamERKN7android8hardware6ParcelEmm */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::camera::postproc::V1_0::ChromaNRParam const&, android::hardware::Parcel const&, unsigned long, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_022readEmbeddedFromParcelERKNS4_13ChromaNRParamERKN7android8hardware6ParcelEmm(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDeviceENS_4hidl4base4V1_05IBaseENS8_14BpHwPostDeviceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDeviceENS_4hidl4base4V1_05IBaseENS8_14BpHwPostDeviceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice */
extern void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::BpHwPostDevice(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice */
extern void* _ZTTN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice21setHALInstrumentationEv(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::~BnHwPostDevice() */
int _ZThn32_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDeviceC2EN7android2spINS4_11IPostDeviceEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BsPostDevice::BsPostDevice(android::sp<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice>) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDeviceC2EN7android2spINS4_11IPostDeviceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE0_N7android8hardware11BpInterfaceINS4_11IPostDeviceEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice>-in-vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice */
extern void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE0_N7android8hardware11BpInterfaceINS4_11IPostDeviceEEE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE0_NS4_11IPostDeviceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice-in-vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice */
extern void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE0_NS4_11IPostDeviceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice */
extern void* _ZTVN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceE;

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice */
extern void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD2Ev */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::~BnHwPostDevice() */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD2Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice */
extern void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice */
extern void* _ZTVN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice16_hidl_doChromaNREPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS4_13ChromaNRParamE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::_hidl_doChromaNR(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::camera::postproc::V1_0::ChromaNRParam const&) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice16_hidl_doChromaNREPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS4_13ChromaNRParamE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice21notifySyspropsChangedEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDeviceE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice */
extern void* _ZTVN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD0Ev */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::~BnHwPostDevice() */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::ping() */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice4pingEv(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::~BnHwPostDevice() */
int _ZTv0_n24_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::BpHwPostDevice(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDeviceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice */
extern void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDeviceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDeviceE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice */
extern void* _ZTTN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDeviceE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_POSTPROC_1_0_H */
