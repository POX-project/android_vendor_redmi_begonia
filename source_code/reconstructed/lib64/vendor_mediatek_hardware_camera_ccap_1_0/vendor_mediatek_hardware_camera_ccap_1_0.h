/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.camera.ccap@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.camera.ccap@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_CCAP_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_CCAP_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControlC2EN7android2spINS4_12ICCAPControlEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BsCCAPControl::BsCCAPControl(android::sp<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControlC2EN7android2spINS4_12ICCAPControlEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl23_hidl_intf_ccap_atci_opEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::_hidl_intf_ccap_atci_op(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl23_hidl_intf_ccap_atci_opEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15intf_ccap_constERKN7android8hardware11hidl_memoryE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::intf_ccap_const(android::hardware::hidl_memory const&) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15intf_ccap_constERKN7android8hardware11hidl_memoryE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl22_hidl_intf_ccap_adb_opEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::_hidl_intf_ccap_adb_op(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl22_hidl_intf_ccap_adb_opEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD1Ev */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::~BnHwCCAPControl() */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE0_NS4_12ICCAPControlE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl-in-vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl */
extern void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE0_NS4_12ICCAPControlE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl */
extern void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControlE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl */
extern void* _ZTVN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControlE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControlE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl */
extern void* _ZTTN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControlE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl10descriptorE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::descriptor */
extern void* _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD0Ev */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::~BnHwCCAPControl() */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::BpHwCCAPControl(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl */
extern void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl22_hidl_intf_ccap_adb_opEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::_hidl_intf_ccap_adb_op(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl22_hidl_intf_ccap_adb_opEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlC1ERKN7android2spINS4_12ICCAPControlEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::BnHwCCAPControl(android::sp<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl> const&) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlC1ERKN7android2spINS4_12ICCAPControlEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl17intf_ccap_atci_opERKN7android8hardware11hidl_memoryESA_i */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::intf_ccap_atci_op(android::hardware::hidl_memory const&, android::hardware::hidl_memory const&, int) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl17intf_ccap_atci_opERKN7android8hardware11hidl_memoryESA_i(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl23_hidl_intf_ccap_atci_opEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_memoryESF_i */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::_hidl_intf_ccap_atci_op(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_memory const&, android::hardware::hidl_memory const&, int) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl23_hidl_intf_ccap_atci_opEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_memoryESF_i(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::ping() */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl14intf_ccap_initEv */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::intf_ccap_init() */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl14intf_ccap_initEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl21_hidl_intf_ccap_constEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_memoryE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::_hidl_intf_ccap_const(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_memory const&) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl21_hidl_intf_ccap_constEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_memoryE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl */
extern void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE0_N7android8hardware11BpInterfaceINS4_12ICCAPControlEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl>-in-vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl */
extern void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE0_N7android8hardware11BpInterfaceINS4_12ICCAPControlEEE;

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl */
extern void* _ZTTN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl */
extern void* _ZTVN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::~BnHwCCAPControl() */
int _ZThn32_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl20_hidl_intf_ccap_initEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::_hidl_intf_ccap_init(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl20_hidl_intf_ccap_initEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl */
extern void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl */
extern void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControlENS_4hidl4base4V1_05IBaseENS8_15BpHwCCAPControlEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControlENS_4hidl4base4V1_05IBaseENS8_15BpHwCCAPControlEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControlE0_NS4_12ICCAPControlE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl-in-vendor::mediatek::hardware::camera::ccap::V1_0::BsCCAPControl */
extern void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControlE0_NS4_12ICCAPControlE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::~BnHwCCAPControl() */
int _ZTv0_n24_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD1Ev(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControl13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BsCCAPControl::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControl13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl16intf_ccap_adb_opEv */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::intf_ccap_adb_op() */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl16intf_ccap_adb_opEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::BpHwCCAPControl(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::~BnHwCCAPControl() */
int _ZThn32_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlC2ERKN7android2spINS4_12ICCAPControlEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::BnHwCCAPControl(android::sp<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl> const&) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlC2ERKN7android2spINS4_12ICCAPControlEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl */
extern void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl21setHALInstrumentationEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl */
extern void* _ZTVN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::~BnHwCCAPControl() */
int _ZTv0_n24_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControlE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::ccap::V1_0::BsCCAPControl */
extern void* _ZTVN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControlE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::castFrom(android::sp<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl21_hidl_intf_ccap_constEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::_hidl_intf_ccap_const(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl21_hidl_intf_ccap_constEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::ping() */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControlC1EN7android2spINS4_12ICCAPControlEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BsCCAPControl::BsCCAPControl(android::sp<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControlC1EN7android2spINS4_12ICCAPControlEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl */
extern void* _ZTTN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlENS8_12ICCAPControlEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl, vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlENS8_12ICCAPControlEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD2Ev */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::~BnHwCCAPControl() */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::ping() */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControlE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl */
extern void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControlE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl20_hidl_intf_ccap_initEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::_hidl_intf_ccap_init(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl20_hidl_intf_ccap_initEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_CCAP_1_0_H */
