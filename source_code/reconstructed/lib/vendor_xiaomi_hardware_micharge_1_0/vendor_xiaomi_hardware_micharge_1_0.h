/*
 * Reverse-Engineered ABI Specification for: vendor.xiaomi.hardware.micharge@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.xiaomi.hardware.micharge@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MICHARGE_1_0_H
#define BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MICHARGE_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_010BsMiChargeC1EN7android2spINS3_9IMiChargeEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BsMiCharge::BsMiCharge(android::sp<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_010BsMiChargeC1EN7android2spINS3_9IMiChargeEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getBatteryIbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryIbat(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getBatteryIbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23setBtTransferStartStateERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setBtTransferStartState(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23setBtTransferStartStateERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge24getWirelessReverseStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getWirelessReverseStatus(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge24getWirelessReverseStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge */
extern void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge10setBtStateERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setBtState(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge10setBtStateERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryChargeFullEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryChargeFull(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryChargeFullEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getWlsPowerMaxEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getWlsPowerMax(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getWlsPowerMaxEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge24_hidl_getQuickChargeTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getQuickChargeType(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge24_hidl_getQuickChargeTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_setInputSuspendStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setInputSuspendState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_setInputSuspendStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge29_hidl_setBtTransferStartStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setBtTransferStartState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge29_hidl_setBtTransferStartStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16_hidl_setBtStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setBtState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16_hidl_setBtStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27_hidl_getNightChargingStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getNightChargingState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27_hidl_getNightChargingStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE */
/* Demangled: vtable for vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge */
extern void* _ZTVN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE;

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getBatteryVbatEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryVbat(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getBatteryVbatEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getSocDecimalEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getSocDecimal(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getSocDecimalEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge21notifySyspropsChangedEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge18getQuickChargeTypeENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getQuickChargeType(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge18getQuickChargeTypeENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23getFastChargeModeStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getFastChargeModeStatus(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23getFastChargeModeStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryChargeFullEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryChargeFull(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryChargeFullEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge12getPdApdoMaxENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getPdApdoMax(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge12getPdApdoMaxENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getUsbVoltageEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getUsbVoltage(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getUsbVoltageEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21getBatteryThermaLevelENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryThermaLevel(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21getBatteryThermaLevelENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge18getBatteryCapacityENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryCapacity(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge18getBatteryCapacityENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge24_hidl_getBatteryCapacityEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryCapacity(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge24_hidl_getBatteryCapacityEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryCycleCountEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryCycleCount(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryCycleCountEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge10getTxAdaptENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getTxAdapt(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge10getTxAdaptENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge29_hidl_setBtTransferStartStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setBtTransferStartState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge29_hidl_setBtTransferStartStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge24_hidl_getBatteryCapacityEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryCapacity(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge24_hidl_getBatteryCapacityEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge27_hidl_getNightChargingStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getNightChargingState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge27_hidl_getNightChargingStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge4pingEv */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::ping() */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge4pingEv(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeE */
/* Demangled: VTT for vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge */
extern void* _ZTTN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeE;

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getBatteryTbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryTbat(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getBatteryTbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge29_hidl_getFastChargeModeStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getFastChargeModeStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge29_hidl_getFastChargeModeStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge */
extern void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge */
extern void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge25_hidl_getBatteryAuthenticEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryAuthentic(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge25_hidl_getBatteryAuthenticEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge25_hidl_getPdAuthenticationEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getPdAuthentication(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge25_hidl_getPdAuthenticationEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge33_hidl_isWirelessChargingSupportedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_isWirelessChargingSupported(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge33_hidl_isWirelessChargingSupportedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getBatteryIbatEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryIbat(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getBatteryIbatEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge25getWirelessChargingStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getWirelessChargingStatus(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge25getWirelessChargingStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge31_hidl_getWirelessChargingStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getWirelessChargingStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge31_hidl_getWirelessChargingStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge4pingEv */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::ping() */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge4pingEv(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge */
extern void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD1Ev */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::~BnHwMiCharge() */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getBatteryTbatEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryTbat(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getBatteryTbatEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getInputSuspendStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getInputSuspendState(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getInputSuspendStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD0Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::~BnHwMiCharge() */
int _ZThn20_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge17getSocDecimalRateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getSocDecimalRate(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge17getSocDecimalRateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryChargeFullENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryChargeFull(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryChargeFullENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23_hidl_getSocDecimalRateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getSocDecimalRate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23_hidl_getSocDecimalRateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeE */
/* Demangled: vtable for vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge */
extern void* _ZTVN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeE;

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD1Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::~BnHwMiCharge() */
int _ZTv0_n12_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_010BsMiChargeC2EN7android2spINS3_9IMiChargeEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BsMiCharge::BsMiCharge(android::sp<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_010BsMiChargeC2EN7android2spINS3_9IMiChargeEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getUsbVoltageEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getUsbVoltage(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getUsbVoltageEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryResistanceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryResistance(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryResistanceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge22_hidl_setCoolModeStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setCoolModeState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge22_hidl_setCoolModeStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeENS7_9IMiChargeEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge, vendor::xiaomi::hardware::micharge::V1_0::IMiCharge, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeENS7_9IMiChargeEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeC2ERKN7android2spINS3_9IMiChargeEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::BnHwMiCharge(android::sp<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge> const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeC2ERKN7android2spINS3_9IMiChargeEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge25_hidl_getPdAuthenticationEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getPdAuthentication(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge25_hidl_getPdAuthenticationEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge30_hidl_getWirelessReverseStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getWirelessReverseStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge30_hidl_getWirelessReverseStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge30isBatteryLifeFunctionSupportedEv */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::isBatteryLifeFunctionSupported() */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge30isBatteryLifeFunctionSupportedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryResistanceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryResistance(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryResistanceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge7setRxCrERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setRxCr(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge7setRxCrERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge23_hidl_getSocDecimalRateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getSocDecimalRate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge23_hidl_getSocDecimalRateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getUsbVoltageENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getUsbVoltage(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getUsbVoltageENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13setWlsTxSpeedERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setWlsTxSpeed(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13setWlsTxSpeedERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16getCoolModeStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getCoolModeState(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16getCoolModeStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19getBatteryAuthenticENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryAuthentic(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19getBatteryAuthenticENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge25_hidl_getBatteryAuthenticEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryAuthentic(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge25_hidl_getBatteryAuthenticEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26setWirelessChargingEnabledEb */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setWirelessChargingEnabled(bool) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26setWirelessChargingEnabledEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27_hidl_getBatteryThermaLevelEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryThermaLevel(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27_hidl_getBatteryThermaLevelEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge29_hidl_getBtTransferStartStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBtTransferStartState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge29_hidl_getBtTransferStartStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware8micharge4V1_010BsMiChargeE */
/* Demangled: vtable for vendor::xiaomi::hardware::micharge::V1_0::BsMiCharge */
extern void* _ZTVN6vendor6xiaomi8hardware8micharge4V1_010BsMiChargeE;

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16setCoolModeStateERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setCoolModeState(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16setCoolModeStateERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge32_hidl_setWirelessChargingEnabledEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setWirelessChargingEnabled(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge32_hidl_setWirelessChargingEnabledEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getWlsPowerMaxENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getWlsPowerMax(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getWlsPowerMaxENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20setInputSuspendStateERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setInputSuspendState(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20setInputSuspendStateERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getInputSuspendStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getInputSuspendState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getInputSuspendStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware8micharge4V1_09IMiChargeENS_4hidl4base4V1_05IBaseENS7_12BpHwMiChargeEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge> > android::hardware::details::castInterface<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware8micharge4V1_09IMiChargeENS_4hidl4base4V1_05IBaseENS7_12BpHwMiChargeEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware8micharge4V1_09IMiChargeE */
/* Demangled: VTT for vendor::xiaomi::hardware::micharge::V1_0::IMiCharge */
extern void* _ZTTN6vendor6xiaomi8hardware8micharge4V1_09IMiChargeE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware8micharge4V1_09IMiChargeE */
/* Demangled: vtable for vendor::xiaomi::hardware::micharge::V1_0::IMiCharge */
extern void* _ZTVN6vendor6xiaomi8hardware8micharge4V1_09IMiChargeE;

/* Symbol: _ZTv0_n20_N6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryChargeTypeENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryChargeType(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryChargeTypeENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryCycleCountEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryCycleCount(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryCycleCountEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19getPdAuthenticationENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getPdAuthentication(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19getPdAuthenticationENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::BpHwMiCharge(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getBatteryTbatEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryTbat(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getBatteryTbatEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27_hidl_setNightChargingStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setNightChargingState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27_hidl_setNightChargingStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_setWlsTxSpeedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setWlsTxSpeed(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_setWlsTxSpeedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge30_hidl_getWirelessReverseStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getWirelessReverseStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge30_hidl_getWirelessReverseStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE0_NS3_9IMiChargeE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::micharge::V1_0::IMiCharge-in-vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge */
extern void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE0_NS3_9IMiChargeE;

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getBatterySohENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatterySoh(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getBatterySohENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_setWlsTxSpeedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setWlsTxSpeed(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_setWlsTxSpeedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryChargeTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryChargeType(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryChargeTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getWlsPowerMaxEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getWlsPowerMax(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getWlsPowerMaxEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryChargeTypeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryChargeType(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryChargeTypeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware8micharge4V1_09IMiChargeE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::micharge::V1_0::IMiCharge */
extern void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_09IMiChargeE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge27_hidl_getBatteryThermaLevelEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryThermaLevel(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge27_hidl_getBatteryThermaLevelEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD0Ev */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::~BnHwMiCharge() */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge32_hidl_setWirelessChargingEnabledEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEb */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setWirelessChargingEnabled(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, bool) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge32_hidl_setWirelessChargingEnabledEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getBatteryVbatEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryVbat(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getBatteryVbatEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge36_hidl_isBatteryLifeFunctionSupportedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_isBatteryLifeFunctionSupported(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge36_hidl_isBatteryLifeFunctionSupportedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD0Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::~BnHwMiCharge() */
int _ZTv0_n12_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getUsbCurrentEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getUsbCurrent(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getUsbCurrentEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryResistanceENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryResistance(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryResistanceENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware8micharge4V1_010BsMiChargeE0_NS3_9IMiChargeE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::micharge::V1_0::IMiCharge-in-vendor::xiaomi::hardware::micharge::V1_0::BsMiCharge */
extern void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_010BsMiChargeE0_NS3_9IMiChargeE;

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_setInputSuspendStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setInputSuspendState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_setInputSuspendStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge */
extern void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getSocDecimalEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getSocDecimal(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getSocDecimalEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getBatterySohEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatterySoh(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getBatterySohEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE0_N7android8hardware11BpInterfaceINS3_9IMiChargeEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge>-in-vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge */
extern void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE0_N7android8hardware11BpInterfaceINS3_9IMiChargeEEE;

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge36_hidl_isBatteryLifeFunctionSupportedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_isBatteryLifeFunctionSupported(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge36_hidl_isBatteryLifeFunctionSupportedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13_hidl_setRxCrEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setRxCr(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13_hidl_setRxCrEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge18_hidl_getPdApdoMaxEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getPdApdoMax(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge18_hidl_getPdApdoMaxEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge22_hidl_getCoolModeStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getCoolModeState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge22_hidl_getCoolModeStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge27_hidl_setNightChargingStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setNightChargingState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge27_hidl_setNightChargingStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge29_hidl_getBtTransferStartStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBtTransferStartState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge29_hidl_getBtTransferStartStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge15onLastStrongRefEPKv */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::onLastStrongRef(void const*) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge24_hidl_getQuickChargeTypeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getQuickChargeType(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge24_hidl_getQuickChargeTypeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getUsbCurrentEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getUsbCurrent(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getUsbCurrentEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge22_hidl_setCoolModeStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setCoolModeState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge22_hidl_setCoolModeStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getInputSuspendStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getInputSuspendState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getInputSuspendStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27isWirelessChargingSupportedEv */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::isWirelessChargingSupported() */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27isWirelessChargingSupportedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::castFrom(android::sp<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge> const&, bool) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getSocDecimalENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getSocDecimal(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getSocDecimalENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge18_hidl_getPdApdoMaxEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getPdApdoMax(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge18_hidl_getPdApdoMaxEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge16_hidl_setBtStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setBtState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge16_hidl_setBtStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21getNightChargingStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getNightChargingState(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21getNightChargingStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::BpHwMiCharge(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZThn8_N6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge4pingEv */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::ping() */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getBatterySohEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatterySoh(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getBatterySohEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge22_hidl_getCoolModeStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getCoolModeState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge22_hidl_getCoolModeStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeC1ERKN7android2spINS3_9IMiChargeEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::BnHwMiCharge(android::sp<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge> const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeC1ERKN7android2spINS3_9IMiChargeEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getUsbCurrentENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getUsbCurrent(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getUsbCurrentENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_010BsMiCharge13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BsMiCharge::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_010BsMiCharge13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge13_hidl_setRxCrEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setRxCr(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge13_hidl_setRxCrEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getBatteryIbatEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryIbat(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getBatteryIbatEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge31_hidl_getWirelessChargingStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getWirelessChargingStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge31_hidl_getWirelessChargingStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD2Ev */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::~BnHwMiCharge() */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD2Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21setNightChargingStateERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setNightChargingState(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21setNightChargingStateERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge10descriptorE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::descriptor */
extern void* _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge10descriptorE;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge */
extern void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD1Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::~BnHwMiCharge() */
int _ZThn20_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge29_hidl_getFastChargeModeStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getFastChargeModeStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge29_hidl_getFastChargeModeStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23getBtTransferStartStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBtTransferStartState(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23getBtTransferStartStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge16_hidl_getTxAdaptEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getTxAdapt(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge16_hidl_getTxAdaptEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16_hidl_getTxAdaptEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getTxAdapt(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16_hidl_getTxAdaptEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryCycleCountENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryCycleCount(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryCycleCountENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge33_hidl_isWirelessChargingSupportedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_isWirelessChargingSupported(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge33_hidl_isWirelessChargingSupportedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE */
/* Demangled: VTT for vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge */
extern void* _ZTTN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE;

/* Symbol: _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getBatteryVbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryVbat(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getBatteryVbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MICHARGE_1_0_H */
