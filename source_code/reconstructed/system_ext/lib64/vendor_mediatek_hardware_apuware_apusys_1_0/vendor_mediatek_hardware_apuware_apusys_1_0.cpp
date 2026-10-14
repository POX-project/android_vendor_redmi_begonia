/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.apuware.apusys@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_apuware_apusys_1_0"

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
#include "vendor_mediatek_hardware_apuware_apusys_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::_hidl_runCmd(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys12_hidl_runCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys12_hidl_runCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::_hidl_memAlloc4(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys15_hidl_memAlloc4EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys15_hidl_memAlloc4EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::BnHwNeuronApusys(android::sp<vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysC1ERKN7android2spINS4_13INeuronApusysEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysC1ERKN7android2spINS4_13INeuronApusysEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::BpHwNeuronApusys(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusysC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusysC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BsNeuronApusys::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_014BsNeuronApusys13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_014BsNeuronApusys13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::_hidl_memAlloc1(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys15_hidl_memAlloc1EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys15_hidl_memAlloc1EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BsNeuronApusys::BsNeuronApusys(android::sp<vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_014BsNeuronApusysC1EN7android2spINS4_13INeuronApusysEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_014BsNeuronApusysC1EN7android2spINS4_13INeuronApusysEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::memAlloc1(int, unsigned long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_MEMINFO_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys9memAlloc1EimNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys9memAlloc1EimNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BsNeuronApusys::BsNeuronApusys(android::sp<vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_014BsNeuronApusysC2EN7android2spINS4_13INeuronApusysEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_014BsNeuronApusysC2EN7android2spINS4_13INeuronApusysEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::_hidl_memSync(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys13_hidl_memSyncEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys13_hidl_memSyncEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::_hidl_getDeviceNum(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys18_hidl_getDeviceNumEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys18_hidl_getDeviceNumEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::_hidl_runCmd(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys12_hidl_runCmdEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys12_hidl_runCmdEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::memInvalidate(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys13memInvalidateEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys13memInvalidateEii() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusysE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::~BnHwNeuronApusys() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::~BnHwNeuronApusys() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::getDeviceNum(int, vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_DEVICE_E_HD, std::__1::function<void (bool, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys12getDeviceNumEiNS4_18APUSYS_DEVICE_E_HDENSt3__18functionIFvbiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys12getDeviceNumEiNS4_18APUSYS_DEVICE_E_HDENSt3__18functionIFvbiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::memAlloc3(int, unsigned long, unsigned int, unsigned int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_MEMINFO_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys9memAlloc3EimjjNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys9memAlloc3EimjjNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::apuware::apusys::V1_0::BsNeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7apuware6apusys4V1_014BsNeuronApusysE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::_hidl_memAlloc2(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys15_hidl_memAlloc2EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys15_hidl_memAlloc2EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::~BnHwNeuronApusys() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::castFrom(android::sp<vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::memUnImport(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys11memUnImportEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys11memUnImportEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::BpHwNeuronApusys(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusysC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusysC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::_hidl_memFree(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys13_hidl_memFreeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys13_hidl_memFreeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::_hidl_createInstance(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, std::__1::function<void (bool, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys20_hidl_createInstanceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringENSt3__18functionIFvbiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys20_hidl_createInstanceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringENSt3__18functionIFvbiEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::_hidl_memImport(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys15_hidl_memImportEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys15_hidl_memImportEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::_hidl_deleteInstance(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys20_hidl_deleteInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys20_hidl_deleteInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::_hidl_memSync(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys13_hidl_memSyncEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys13_hidl_memSyncEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::_hidl_memImport(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_handle const&, unsigned int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_MEMINFO_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15_hidl_memImportEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiRKNS7_11hidl_handleEjNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15_hidl_memImportEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiRKNS7_11hidl_handleEjNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::_hidl_memUnImport(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys17_hidl_memUnImportEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys17_hidl_memUnImportEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::_hidl_deleteInstance(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys20_hidl_deleteInstanceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys20_hidl_deleteInstanceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusysE8_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusysE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::BnHwNeuronApusys(android::sp<vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysC2ERKN7android2spINS4_13INeuronApusysEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysC2ERKN7android2spINS4_13INeuronApusysEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::_hidl_memAlloc4(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long, unsigned int, unsigned int, vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_USER_MEM_E_HD, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_MEMINFO_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15_hidl_memAlloc4EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEimjjNS4_20APUSYS_USER_MEM_E_HDENSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15_hidl_memAlloc4EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEimjjNS4_20APUSYS_USER_MEM_E_HDENSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::_hidl_memInvalidate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys19_hidl_memInvalidateEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys19_hidl_memInvalidateEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::_hidl_memInvalidate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys19_hidl_memInvalidateEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys19_hidl_memInvalidateEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys, vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusysENS8_13INeuronApusysEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusysENS8_13INeuronApusysEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::deleteInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys14deleteInstanceEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys14deleteInstanceEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::~BnHwNeuronApusys() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::~BnHwNeuronApusys() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysD0Ev() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::_hidl_memAlloc1(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_MEMINFO_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15_hidl_memAlloc1EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEimNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15_hidl_memAlloc1EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEimNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::memFree(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys7memFreeEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys7memFreeEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_MEMINFO_HD const&, android::hardware::Parcel*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_021writeEmbeddedToParcelERKNS4_17APUSYS_MEMINFO_HDEPN7android8hardware6ParcelEmm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_021writeEmbeddedToParcelERKNS4_17APUSYS_MEMINFO_HDEPN7android8hardware6ParcelEmm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_MEMINFO_HD const&, android::hardware::Parcel const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_022readEmbeddedFromParcelERKNS4_17APUSYS_MEMINFO_HDERKN7android8hardware6ParcelEmm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_022readEmbeddedFromParcelERKNS4_17APUSYS_MEMINFO_HDERKN7android8hardware6ParcelEmm() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusysE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusysE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::~BnHwNeuronApusys() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::memAlloc2(int, unsigned long, unsigned int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_MEMINFO_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys9memAlloc2EimjNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys9memAlloc2EimjNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys>-in-vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusysE0_N7android8hardware11BpInterfaceINS4_13INeuronApusysEEE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::_hidl_memAlloc3(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long, unsigned int, unsigned int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_MEMINFO_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15_hidl_memAlloc3EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEimjjNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15_hidl_memAlloc3EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEimjjNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusysE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::_hidl_memUnImport(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys17_hidl_memUnImportEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys17_hidl_memUnImportEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::memImport(int, android::hardware::hidl_handle const&, unsigned int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_MEMINFO_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys9memImportEiRKN7android8hardware11hidl_handleEjNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys9memImportEiRKN7android8hardware11hidl_handleEjNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusysE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::~BnHwNeuronApusys() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::memSync(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys7memSyncEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys7memSyncEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::memAlloc4(int, unsigned long, unsigned int, unsigned int, vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_USER_MEM_E_HD, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_MEMINFO_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys9memAlloc4EimjjNS4_20APUSYS_USER_MEM_E_HDENSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys9memAlloc4EimjjNS4_20APUSYS_USER_MEM_E_HDENSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::_hidl_memAlloc3(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys15_hidl_memAlloc3EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys15_hidl_memAlloc3EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::_hidl_memAlloc2(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long, unsigned int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_MEMINFO_HD const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15_hidl_memAlloc2EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEimjNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys15_hidl_memAlloc2EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEimjNSt3__18functionIFvbRKNS4_17APUSYS_MEMINFO_HDEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::_hidl_getDeviceNum(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, vendor::mediatek::hardware::apuware::apusys::V1_0::APUSYS_DEVICE_E_HD, std::__1::function<void (bool, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys18_hidl_getDeviceNumEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNS4_18APUSYS_DEVICE_E_HDENSt3__18functionIFvbiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys18_hidl_getDeviceNumEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNS4_18APUSYS_DEVICE_E_HDENSt3__18functionIFvbiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::runCmd(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys6runCmdEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys6runCmdEii() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::_hidl_createInstance(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys20_hidl_createInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys20_hidl_createInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys> > android::hardware::details::castInterface<vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusysENS_4hidl4base4V1_05IBaseENS8_16BpHwNeuronApusysEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusysENS_4hidl4base4V1_05IBaseENS8_16BpHwNeuronApusysEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusysE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys::_hidl_memFree(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys13_hidl_memFreeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusys13_hidl_memFreeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys-in-vendor::mediatek::hardware::apuware::apusys::V1_0::BsNeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware6apusys4V1_014BsNeuronApusysE0_NS4_13INeuronApusysE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys-in-vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusysE0_NS4_13INeuronApusysE = NULL;

/* Demangled: vendor::mediatek::hardware::apuware::apusys::V1_0::BpHwNeuronApusys::createInstance(android::hardware::hidl_string const&, std::__1::function<void (bool, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys14createInstanceERKN7android8hardware11hidl_stringENSt3__18functionIFvbiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware6apusys4V1_016BpHwNeuronApusys14createInstanceERKN7android8hardware11hidl_stringENSt3__18functionIFvbiEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::apuware::apusys::V1_0::BnHwNeuronApusys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware6apusys4V1_016BnHwNeuronApusysE0_N7android8hardware7IBinderE = NULL;
