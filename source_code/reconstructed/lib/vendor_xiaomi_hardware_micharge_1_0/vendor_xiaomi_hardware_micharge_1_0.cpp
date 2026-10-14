/*
 * Reverse-Engineered Source for: vendor.xiaomi.hardware.micharge@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_xiaomi_hardware_micharge_1_0"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "vendor_xiaomi_hardware_micharge_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BsMiCharge::BsMiCharge(android::sp<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_010BsMiChargeC1EN7android2spINS3_9IMiChargeEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_010BsMiChargeC1EN7android2spINS3_9IMiChargeEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryIbat(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getBatteryIbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getBatteryIbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setBtTransferStartState(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23setBtTransferStartStateERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23setBtTransferStartStateERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getWirelessReverseStatus(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge24getWirelessReverseStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge24getWirelessReverseStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setBtState(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge10setBtStateERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge10setBtStateERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryChargeFull(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryChargeFullEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryChargeFullEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getWlsPowerMax(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getWlsPowerMaxEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getWlsPowerMaxEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getQuickChargeType(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge24_hidl_getQuickChargeTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge24_hidl_getQuickChargeTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setInputSuspendState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_setInputSuspendStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_setInputSuspendStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setBtTransferStartState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge29_hidl_setBtTransferStartStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge29_hidl_setBtTransferStartStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setBtState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16_hidl_setBtStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16_hidl_setBtStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getNightChargingState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27_hidl_getNightChargingStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27_hidl_getNightChargingStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryVbat(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getBatteryVbatEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getBatteryVbatEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getSocDecimal(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getSocDecimalEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getSocDecimalEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getQuickChargeType(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge18getQuickChargeTypeENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge18getQuickChargeTypeENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getFastChargeModeStatus(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23getFastChargeModeStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23getFastChargeModeStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryChargeFull(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryChargeFullEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryChargeFullEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getPdApdoMax(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge12getPdApdoMaxENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge12getPdApdoMaxENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getUsbVoltage(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getUsbVoltageEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getUsbVoltageEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryThermaLevel(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21getBatteryThermaLevelENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21getBatteryThermaLevelENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryCapacity(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge18getBatteryCapacityENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge18getBatteryCapacityENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryCapacity(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge24_hidl_getBatteryCapacityEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge24_hidl_getBatteryCapacityEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryCycleCount(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryCycleCountEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryCycleCountEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getTxAdapt(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge10getTxAdaptENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge10getTxAdaptENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setBtTransferStartState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge29_hidl_setBtTransferStartStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge29_hidl_setBtTransferStartStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryCapacity(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge24_hidl_getBatteryCapacityEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge24_hidl_getBatteryCapacityEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getNightChargingState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge27_hidl_getNightChargingStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge27_hidl_getNightChargingStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge4pingEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryTbat(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getBatteryTbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getBatteryTbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getFastChargeModeStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge29_hidl_getFastChargeModeStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge29_hidl_getFastChargeModeStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryAuthentic(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge25_hidl_getBatteryAuthenticEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge25_hidl_getBatteryAuthenticEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getPdAuthentication(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge25_hidl_getPdAuthenticationEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge25_hidl_getPdAuthenticationEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_isWirelessChargingSupported(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge33_hidl_isWirelessChargingSupportedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge33_hidl_isWirelessChargingSupportedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryIbat(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getBatteryIbatEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getBatteryIbatEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getWirelessChargingStatus(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge25getWirelessChargingStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge25getWirelessChargingStatusENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getWirelessChargingStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge31_hidl_getWirelessChargingStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge31_hidl_getWirelessChargingStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::~BnHwMiCharge() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryTbat(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getBatteryTbatEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getBatteryTbatEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getInputSuspendState(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getInputSuspendStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getInputSuspendStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::~BnHwMiCharge() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD0Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getSocDecimalRate(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge17getSocDecimalRateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge17getSocDecimalRateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryChargeFull(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryChargeFullENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryChargeFullENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getSocDecimalRate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23_hidl_getSocDecimalRateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23_hidl_getSocDecimalRateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::~BnHwMiCharge() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BsMiCharge::BsMiCharge(android::sp<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_010BsMiChargeC2EN7android2spINS3_9IMiChargeEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_010BsMiChargeC2EN7android2spINS3_9IMiChargeEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getUsbVoltage(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getUsbVoltageEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getUsbVoltageEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryResistance(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryResistanceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryResistanceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setCoolModeState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge22_hidl_setCoolModeStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge22_hidl_setCoolModeStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge, vendor::xiaomi::hardware::micharge::V1_0::IMiCharge, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeENS7_9IMiChargeEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeENS7_9IMiChargeEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::BnHwMiCharge(android::sp<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeC2ERKN7android2spINS3_9IMiChargeEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeC2ERKN7android2spINS3_9IMiChargeEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getPdAuthentication(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge25_hidl_getPdAuthenticationEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge25_hidl_getPdAuthenticationEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getWirelessReverseStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge30_hidl_getWirelessReverseStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge30_hidl_getWirelessReverseStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::isBatteryLifeFunctionSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge30isBatteryLifeFunctionSupportedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge30isBatteryLifeFunctionSupportedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryResistance(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryResistanceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryResistanceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setRxCr(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge7setRxCrERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge7setRxCrERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getSocDecimalRate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge23_hidl_getSocDecimalRateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge23_hidl_getSocDecimalRateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getUsbVoltage(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getUsbVoltageENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getUsbVoltageENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setWlsTxSpeed(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13setWlsTxSpeedERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13setWlsTxSpeedERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getCoolModeState(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16getCoolModeStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16getCoolModeStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryAuthentic(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19getBatteryAuthenticENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19getBatteryAuthenticENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryAuthentic(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge25_hidl_getBatteryAuthenticEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge25_hidl_getBatteryAuthenticEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setWirelessChargingEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26setWirelessChargingEnabledEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26setWirelessChargingEnabledEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryThermaLevel(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27_hidl_getBatteryThermaLevelEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27_hidl_getBatteryThermaLevelEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBtTransferStartState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge29_hidl_getBtTransferStartStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge29_hidl_getBtTransferStartStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::micharge::V1_0::BsMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware8micharge4V1_010BsMiChargeE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setCoolModeState(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16setCoolModeStateERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16setCoolModeStateERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setWirelessChargingEnabled(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge32_hidl_setWirelessChargingEnabledEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge32_hidl_setWirelessChargingEnabledEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getWlsPowerMax(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getWlsPowerMaxENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getWlsPowerMaxENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setInputSuspendState(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20setInputSuspendStateERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20setInputSuspendStateERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getInputSuspendState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getInputSuspendStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getInputSuspendStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge> > android::hardware::details::castInterface<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware8micharge4V1_09IMiChargeENS_4hidl4base4V1_05IBaseENS7_12BpHwMiChargeEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware8micharge4V1_09IMiChargeENS_4hidl4base4V1_05IBaseENS7_12BpHwMiChargeEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::micharge::V1_0::IMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware8micharge4V1_09IMiChargeE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::micharge::V1_0::IMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware8micharge4V1_09IMiChargeE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryChargeType(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryChargeTypeENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryChargeTypeENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryCycleCount(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryCycleCountEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryCycleCountEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getPdAuthentication(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19getPdAuthenticationENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19getPdAuthenticationENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::BpHwMiCharge(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryTbat(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getBatteryTbatEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getBatteryTbatEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setNightChargingState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27_hidl_setNightChargingStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27_hidl_setNightChargingStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setWlsTxSpeed(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_setWlsTxSpeedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_setWlsTxSpeedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getWirelessReverseStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge30_hidl_getWirelessReverseStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge30_hidl_getWirelessReverseStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::micharge::V1_0::IMiCharge-in-vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE0_NS3_9IMiChargeE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatterySoh(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getBatterySohENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getBatterySohENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setWlsTxSpeed(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_setWlsTxSpeedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_setWlsTxSpeedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryChargeType(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryChargeTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getBatteryChargeTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getWlsPowerMax(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getWlsPowerMaxEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getWlsPowerMaxEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryChargeType(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryChargeTypeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_getBatteryChargeTypeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::micharge::V1_0::IMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_09IMiChargeE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryThermaLevel(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge27_hidl_getBatteryThermaLevelEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge27_hidl_getBatteryThermaLevelEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::~BnHwMiCharge() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD0Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setWirelessChargingEnabled(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge32_hidl_setWirelessChargingEnabledEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge32_hidl_setWirelessChargingEnabledEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatteryVbat(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getBatteryVbatEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20_hidl_getBatteryVbatEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_isBatteryLifeFunctionSupported(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge36_hidl_isBatteryLifeFunctionSupportedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge36_hidl_isBatteryLifeFunctionSupportedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::~BnHwMiCharge() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getUsbCurrent(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getUsbCurrentEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getUsbCurrentEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryResistance(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryResistanceENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryResistanceENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::micharge::V1_0::IMiCharge-in-vendor::xiaomi::hardware::micharge::V1_0::BsMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_010BsMiChargeE0_NS3_9IMiChargeE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setInputSuspendState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_setInputSuspendStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge26_hidl_setInputSuspendStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getSocDecimal(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getSocDecimalEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getSocDecimalEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatterySoh(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getBatterySohEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getBatterySohEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge>-in-vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE0_N7android8hardware11BpInterfaceINS3_9IMiChargeEEE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_isBatteryLifeFunctionSupported(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge36_hidl_isBatteryLifeFunctionSupportedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge36_hidl_isBatteryLifeFunctionSupportedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_setRxCr(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13_hidl_setRxCrEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13_hidl_setRxCrEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getPdApdoMax(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge18_hidl_getPdApdoMaxEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge18_hidl_getPdApdoMaxEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getCoolModeState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge22_hidl_getCoolModeStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge22_hidl_getCoolModeStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setNightChargingState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge27_hidl_setNightChargingStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge27_hidl_setNightChargingStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBtTransferStartState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge29_hidl_getBtTransferStartStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge29_hidl_getBtTransferStartStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getQuickChargeType(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge24_hidl_getQuickChargeTypeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge24_hidl_getQuickChargeTypeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getUsbCurrent(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getUsbCurrentEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge19_hidl_getUsbCurrentEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setCoolModeState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge22_hidl_setCoolModeStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge22_hidl_setCoolModeStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getInputSuspendState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getInputSuspendStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge26_hidl_getInputSuspendStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::isWirelessChargingSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27isWirelessChargingSupportedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge27isWirelessChargingSupportedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::castFrom(android::sp<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getSocDecimal(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getSocDecimalENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getSocDecimalENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getPdApdoMax(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge18_hidl_getPdApdoMaxEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge18_hidl_getPdApdoMaxEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setBtState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge16_hidl_setBtStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge16_hidl_setBtStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getNightChargingState(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21getNightChargingStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21getNightChargingStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::BpHwMiCharge(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getBatterySoh(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getBatterySohEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge19_hidl_getBatterySohEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getCoolModeState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge22_hidl_getCoolModeStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge22_hidl_getCoolModeStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::BnHwMiCharge(android::sp<vendor::xiaomi::hardware::micharge::V1_0::IMiCharge> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeC1ERKN7android2spINS3_9IMiChargeEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeC1ERKN7android2spINS3_9IMiChargeEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getUsbCurrent(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getUsbCurrentENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge13getUsbCurrentENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BsMiCharge::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_010BsMiCharge13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_010BsMiCharge13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_setRxCr(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge13_hidl_setRxCrEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge13_hidl_setRxCrEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getBatteryIbat(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getBatteryIbatEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge20_hidl_getBatteryIbatEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getWirelessChargingStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge31_hidl_getWirelessChargingStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge31_hidl_getWirelessChargingStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::~BnHwMiCharge() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD2Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::setNightChargingState(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21setNightChargingStateERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge21setNightChargingStateERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: vendor::xiaomi::hardware::micharge::V1_0::IMiCharge::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6xiaomi8hardware8micharge4V1_09IMiCharge10descriptorE = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::~BnHwMiCharge() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD1Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware8micharge4V1_012BnHwMiChargeD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getFastChargeModeStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge29_hidl_getFastChargeModeStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge29_hidl_getFastChargeModeStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBtTransferStartState(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23getBtTransferStartStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge23getBtTransferStartStateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BnHwMiCharge::_hidl_getTxAdapt(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge16_hidl_getTxAdaptEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BnHwMiCharge16_hidl_getTxAdaptEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_getTxAdapt(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16_hidl_getTxAdaptEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge16_hidl_getTxAdaptEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryCycleCount(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryCycleCountENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge20getBatteryCycleCountENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::_hidl_isWirelessChargingSupported(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge33_hidl_isWirelessChargingSupportedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge33_hidl_isWirelessChargingSupportedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiChargeE = NULL;

/* Demangled: vendor::xiaomi::hardware::micharge::V1_0::BpHwMiCharge::getBatteryVbat(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getBatteryVbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware8micharge4V1_012BpHwMiCharge14getBatteryVbatENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}
