/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.keymaster_attestation@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.keymaster_attestation@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_KEYMASTER_ATTESTATION_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_KEYMASTER_ATTESTATION_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice4pingEv */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::ping() */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice */
extern void* _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceE0_N7android8hardware11BpInterfaceINS3_16IKeymasterDeviceEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice>-in-vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice */
extern void* _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceE0_N7android8hardware11BpInterfaceINS3_16IKeymasterDeviceEEE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice::~BnHwKeymasterDevice() */
int _ZThn20_N6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice21setHALInstrumentationEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceE */
/* Demangled: VTT for vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice */
extern void* _ZTTN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDeviceE */
/* Demangled: vtable for vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice */
extern void* _ZTVN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDevice22_hidl_attestKeyInstallEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice::_hidl_attestKeyInstall(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDevice22_hidl_attestKeyInstallEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDevice4pingEv */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice::ping() */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDevice4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceD0Ev */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice::~BnHwKeymasterDevice() */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDeviceE */
/* Demangled: VTT for vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice */
extern void* _ZTTN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDeviceE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice::~BnHwKeymasterDevice() */
int _ZTv0_n12_N6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice22_hidl_attestKeyInstallEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::_hidl_attestKeyInstall(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice22_hidl_attestKeyInstallEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_017BsKeymasterDeviceE0_NS3_16IKeymasterDeviceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice-in-vendor::mediatek::hardware::keymaster_attestation::V1_0::BsKeymasterDevice */
extern void* _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_017BsKeymasterDeviceE0_NS3_16IKeymasterDeviceE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice::~BnHwKeymasterDevice() */
int _ZThn20_N6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::castFrom(android::sp<vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice> const&, bool) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDevice10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDevice10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice */
extern void* _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_017BsKeymasterDeviceC1EN7android2spINS3_16IKeymasterDeviceEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BsKeymasterDevice::BsKeymasterDevice(android::sp<vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice>) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_017BsKeymasterDeviceC1EN7android2spINS3_16IKeymasterDeviceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice16attestKeyInstallERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::attestKeyInstall(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice16attestKeyInstallERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice */
extern void* _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDeviceENS_4hidl4base4V1_05IBaseENS7_19BpHwKeymasterDeviceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice> > android::hardware::details::castInterface<vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDeviceENS_4hidl4base4V1_05IBaseENS7_19BpHwKeymasterDeviceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice */
extern void* _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceD1Ev */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice::~BnHwKeymasterDevice() */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice21notifySyspropsChangedEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceE0_NS3_16IKeymasterDeviceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice-in-vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice */
extern void* _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceE0_NS3_16IKeymasterDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceC2ERKN7android2spINS3_16IKeymasterDeviceEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice::BnHwKeymasterDevice(android::sp<vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice> const&) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceC2ERKN7android2spINS3_16IKeymasterDeviceEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceE */
/* Demangled: vtable for vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice */
extern void* _ZTVN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice4pingEv */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::ping() */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceC1ERKN7android2spINS3_16IKeymasterDeviceEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice::BnHwKeymasterDevice(android::sp<vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice> const&) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceC1ERKN7android2spINS3_16IKeymasterDeviceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::BpHwKeymasterDevice(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceENS7_16IKeymasterDeviceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice, vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceENS7_16IKeymasterDeviceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice */
extern void* _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceE */
/* Demangled: VTT for vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice */
extern void* _ZTTN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware21keymaster_attestation4V1_017BsKeymasterDeviceE */
/* Demangled: vtable for vendor::mediatek::hardware::keymaster_attestation::V1_0::BsKeymasterDevice */
extern void* _ZTVN6vendor8mediatek8hardware21keymaster_attestation4V1_017BsKeymasterDeviceE;

/* Symbol: _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice */
extern void* _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice10descriptorE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::descriptor */
extern void* _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::BpHwKeymasterDevice(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_017BsKeymasterDeviceC2EN7android2spINS3_16IKeymasterDeviceEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BsKeymasterDevice::BsKeymasterDevice(android::sp<vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice>) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_017BsKeymasterDeviceC2EN7android2spINS3_16IKeymasterDeviceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceD2Ev */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice::~BnHwKeymasterDevice() */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceD2Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDeviceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice */
extern void* _ZTCN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDeviceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceE */
/* Demangled: vtable for vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice */
extern void* _ZTVN6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDeviceE;

/* Symbol: _ZThn8_N6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::IKeymasterDevice::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_016IKeymasterDevice13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::keymaster_attestation::V1_0::BnHwKeymasterDevice::~BnHwKeymasterDevice() */
int _ZTv0_n12_N6vendor8mediatek8hardware21keymaster_attestation4V1_019BnHwKeymasterDeviceD0Ev(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::keymaster_attestation::V1_0::BpHwKeymasterDevice::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware21keymaster_attestation4V1_019BpHwKeymasterDevice15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_017BsKeymasterDevice13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::keymaster_attestation::V1_0::BsKeymasterDevice::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware21keymaster_attestation4V1_017BsKeymasterDevice13addOnewayTaskENSt3__18functionIFvvEEE(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_KEYMASTER_ATTESTATION_1_0_H */
