/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.power@2.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_power_2_0"

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
#include "vendor_mediatek_hardware_power_2_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BsPower::BsPower(android::sp<vendor::mediatek::hardware::power::V2_0::IPower>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_07BsPowerC1EN7android2spINS3_6IPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_07BsPowerC1EN7android2spINS3_6IPowerEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::power::V2_0::BnHwPower::~BnHwPower() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware5power4V2_09BnHwPowerD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware5power4V2_09BnHwPowerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::scnEnable(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower9scnEnableEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower9scnEnableEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::scnDisable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower10scnDisableEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower10scnDisableEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::powerHintAsync(android::hardware::power::V1_0::PowerHint, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower14powerHintAsyncEN7android8hardware5power4V1_09PowerHintEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower14powerHintAsyncEN7android8hardware5power4V1_09PowerHintEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::powerHint(android::hardware::power::V1_0::PowerHint, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower9powerHintEN7android8hardware5power4V1_09PowerHintEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower9powerHintEN7android8hardware5power4V1_09PowerHintEi() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::power::V2_0::BnHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5power4V2_09BnHwPowerE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::power::V2_0::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5power4V2_09BpHwPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::power::V2_0::BnHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5power4V2_09BnHwPowerE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::power::V2_0::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5power4V2_09BpHwPowerE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::power::V2_0::BnHwPower::~BnHwPower() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware5power4V2_09BnHwPowerD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware5power4V2_09BnHwPowerD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::scnUltraCfg(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower11scnUltraCfgEiiiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower11scnUltraCfgEiiiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::notifyAppState(android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, vendor::mediatek::hardware::power::V2_0::MtkActState) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower14notifyAppStateERKN7android8hardware11hidl_stringES9_iNS3_11MtkActStateE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower14notifyAppStateERKN7android8hardware11hidl_stringES9_iNS3_11MtkActStateE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::power::V2_0::BnHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_09BnHwPowerE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::power::V2_0::BpHwPower::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware5power4V2_09BpHwPower15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware5power4V2_09BpHwPower15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::_hidl_mtkCusPowerHint(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower21_hidl_mtkCusPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower21_hidl_mtkCusPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::power::V2_0::BnHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_09BnHwPowerE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::~BnHwPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPowerD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPowerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::scnUnreg(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower8scnUnregEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower8scnUnregEi() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::power::V2_0::IPower>-in-vendor::mediatek::hardware::power::V2_0::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_09BpHwPowerE0_N7android8hardware11BpInterfaceINS3_6IPowerEEE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::power::V2_0::IPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5power4V2_06IPowerE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::power::V2_0::BnHwPower::~BnHwPower() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware5power4V2_09BnHwPowerD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware5power4V2_09BnHwPowerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::_hidl_scnEnable(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPower15_hidl_scnEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPower15_hidl_scnEnableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::_hidl_mtkPowerHint(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::power::V2_0::MtkPowerHint, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower18_hidl_mtkPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_12MtkPowerHintEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower18_hidl_mtkPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_12MtkPowerHintEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::BpHwPower(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPowerC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPowerC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::power::V2_0::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_09BpHwPowerE8_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: vendor::mediatek::hardware::power::V2_0::IPower::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware5power4V2_06IPower10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPower10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPower10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::_hidl_mtkCusPowerHint(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPower21_hidl_mtkCusPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPower21_hidl_mtkCusPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::mtkPowerHint(vendor::mediatek::hardware::power::V2_0::MtkPowerHint, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower12mtkPowerHintENS3_12MtkPowerHintEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower12mtkPowerHintENS3_12MtkPowerHintEi() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::castFrom(android::sp<android::hardware::power::V1_0::IPower> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower8castFromERKN7android2spINS5_8hardware5power4V1_06IPowerEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower8castFromERKN7android2spINS5_8hardware5power4V1_06IPowerEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::~BnHwPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPowerD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPowerD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::scnConfig(int, vendor::mediatek::hardware::power::V2_0::MtkPowerCmd, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower9scnConfigEiNS3_11MtkPowerCmdEiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower9scnConfigEiNS3_11MtkPowerCmdEiiii() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::power::V2_0::IPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::power::V2_0::IPower, android::hardware::power::V1_0::IPower, vendor::mediatek::hardware::power::V2_0::BpHwPower>(android::sp<android::hardware::power::V1_0::IPower>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_06IPowerENS0_5power4V1_06IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_06IPowerENS0_5power4V1_06IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::power::V2_0::BsPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5power4V2_07BsPowerE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::power::V2_0::BnHwPower::~BnHwPower() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware5power4V2_09BnHwPowerD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware5power4V2_09BnHwPowerD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::setFeature(android::hardware::power::V1_0::Feature, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower10setFeatureEN7android8hardware5power4V1_07FeatureEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower10setFeatureEN7android8hardware5power4V1_07FeatureEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::_hidl_querySysInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::power::V2_0::MtkQueryCmd, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower18_hidl_querySysInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_11MtkQueryCmdEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower18_hidl_querySysInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_11MtkQueryCmdEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::BpHwPower(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPowerC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPowerC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::_hidl_scnUltraCfg(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower17_hidl_scnUltraCfgEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower17_hidl_scnUltraCfgEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::scnReg() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower6scnRegEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower6scnRegEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::castFrom(android::sp<vendor::mediatek::hardware::power::V2_0::IPower> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::_hidl_scnUltraCfg(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPower17_hidl_scnUltraCfgEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPower17_hidl_scnUltraCfgEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::BnHwPower(android::sp<vendor::mediatek::hardware::power::V2_0::IPower> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPowerC1ERKN7android2spINS3_6IPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPowerC1ERKN7android2spINS3_6IPowerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::_hidl_scnReg(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPower12_hidl_scnRegEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPower12_hidl_scnRegEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::~BnHwPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPowerD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPowerD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::mtkCusPowerHint(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower15mtkCusPowerHintEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower15mtkCusPowerHintEii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::power::V1_1::IPower-in-vendor::mediatek::hardware::power::V2_0::IPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_06IPowerE0_N7android8hardware5power4V1_16IPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::castFrom(android::sp<android::hardware::power::V1_2::IPower> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower8castFromERKN7android2spINS5_8hardware5power4V1_26IPowerEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower8castFromERKN7android2spINS5_8hardware5power4V1_26IPowerEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::_hidl_mtkPowerHint(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPower18_hidl_mtkPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPower18_hidl_mtkPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::_hidl_scnReg(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower12_hidl_scnRegEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower12_hidl_scnRegEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::power::V2_0::IPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::power::V2_0::IPower, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::power::V2_0::BpHwPower>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_06IPowerENS_4hidl4base4V1_05IBaseENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_06IPowerENS_4hidl4base4V1_05IBaseENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::_hidl_scnDisable(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPower16_hidl_scnDisableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPower16_hidl_scnDisableEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::_hidl_notifyAppState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPower20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPower20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::getSubsystemLowPowerStats(std::__1::function<void (android::hardware::hidl_vec<android::hardware::power::V1_1::PowerStateSubsystem> const&, android::hardware::power::V1_0::Status)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower25getSubsystemLowPowerStatsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_5power4V1_119PowerStateSubsystemEEENSA_4V1_06StatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower25getSubsystemLowPowerStatsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_5power4V1_119PowerStateSubsystemEEENSA_4V1_06StatusEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::power::V2_0::IPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::power::V2_0::IPower, android::hardware::power::V1_1::IPower, vendor::mediatek::hardware::power::V2_0::BpHwPower>(android::sp<android::hardware::power::V1_1::IPower>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_06IPowerENS0_5power4V1_16IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_06IPowerENS0_5power4V1_16IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::power::V2_0::IPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_06IPowerE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::power::V1_0::IPower-in-vendor::mediatek::hardware::power::V2_0::IPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_06IPowerE0_N7android8hardware5power4V1_06IPowerE = NULL;

/* Exported Object: construction vtable for android::hardware::power::V1_2::IPower-in-vendor::mediatek::hardware::power::V2_0::IPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_06IPowerE0_N7android8hardware5power4V1_26IPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::_hidl_scnUnreg(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPower14_hidl_scnUnregEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPower14_hidl_scnUnregEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::power::V2_0::IPower> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::power::V2_0::BpHwPower, vendor::mediatek::hardware::power::V2_0::IPower, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5power4V2_09BpHwPowerENS7_6IPowerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5power4V2_09BpHwPowerENS7_6IPowerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::_hidl_scnConfig(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPower15_hidl_scnConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPower15_hidl_scnConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::querySysInfo(vendor::mediatek::hardware::power::V2_0::MtkQueryCmd, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower12querySysInfoENS3_11MtkQueryCmdEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower12querySysInfoENS3_11MtkQueryCmdEi() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::power::V2_0::IPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::power::V2_0::IPower, android::hardware::power::V1_2::IPower, vendor::mediatek::hardware::power::V2_0::BpHwPower>(android::sp<android::hardware::power::V1_2::IPower>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_06IPowerENS0_5power4V1_26IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_06IPowerENS0_5power4V1_26IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::power::V2_0::BnHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_09BnHwPowerE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::power::V2_0::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_09BpHwPowerE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::power::V1_1::IPower-in-vendor::mediatek::hardware::power::V2_0::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_09BpHwPowerE0_N7android8hardware5power4V1_16IPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPower4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPower4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower4pingEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::power::V2_0::IPower */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5power4V2_06IPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::setInteractive(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower14setInteractiveEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower14setInteractiveEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::_hidl_scnConfig(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, vendor::mediatek::hardware::power::V2_0::MtkPowerCmd, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower15_hidl_scnConfigEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNS3_11MtkPowerCmdEiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower15_hidl_scnConfigEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNS3_11MtkPowerCmdEiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::_hidl_scnEnable(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower15_hidl_scnEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower15_hidl_scnEnableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::power::V1_0::IPower-in-vendor::mediatek::hardware::power::V2_0::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_09BpHwPowerE0_N7android8hardware5power4V1_06IPowerE = NULL;

/* Exported Object: construction vtable for android::hardware::power::V1_2::IPower-in-vendor::mediatek::hardware::power::V2_0::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_09BpHwPowerE0_N7android8hardware5power4V1_26IPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::powerHintAsync_1_2(android::hardware::power::V1_2::PowerHint, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower18powerHintAsync_1_2EN7android8hardware5power4V1_29PowerHintEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower18powerHintAsync_1_2EN7android8hardware5power4V1_29PowerHintEi() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::power::V2_0::IPower-in-vendor::mediatek::hardware::power::V2_0::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_09BpHwPowerE0_NS3_6IPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::_hidl_scnDisable(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower16_hidl_scnDisableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower16_hidl_scnDisableEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BsPower::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_07BsPower13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_07BsPower13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BsPower::BsPower(android::sp<vendor::mediatek::hardware::power::V2_0::IPower>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_07BsPowerC2EN7android2spINS3_6IPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_07BsPowerC2EN7android2spINS3_6IPowerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::_hidl_scnUnreg(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower14_hidl_scnUnregEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower14_hidl_scnUnregEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::getPlatformLowPowerStats(std::__1::function<void (android::hardware::hidl_vec<android::hardware::power::V1_0::PowerStatePlatformSleepState> const&, android::hardware::power::V1_0::Status)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower24getPlatformLowPowerStatsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_5power4V1_028PowerStatePlatformSleepStateEEENSB_6StatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower24getPlatformLowPowerStatsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_5power4V1_028PowerStatePlatformSleepStateEEENSB_6StatusEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::power::V2_0::BpHwPower::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware5power4V2_09BpHwPower15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware5power4V2_09BpHwPower15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::_hidl_querySysInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPower18_hidl_querySysInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPower18_hidl_querySysInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BnHwPower::BnHwPower(android::sp<vendor::mediatek::hardware::power::V2_0::IPower> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BnHwPowerC2ERKN7android2spINS3_6IPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BnHwPowerC2ERKN7android2spINS3_6IPowerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::IPower::castFrom(android::sp<android::hardware::power::V1_1::IPower> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_06IPower8castFromERKN7android2spINS5_8hardware5power4V1_16IPowerEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_06IPower8castFromERKN7android2spINS5_8hardware5power4V1_16IPowerEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_0::BpHwPower::_hidl_notifyAppState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, vendor::mediatek::hardware::power::V2_0::MtkActState) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_09BpHwPower20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_iNS3_11MtkActStateE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_09BpHwPower20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_iNS3_11MtkActStateE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::power::V2_0::IPower-in-vendor::mediatek::hardware::power::V2_0::BsPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_07BsPowerE0_NS3_6IPowerE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::power::V2_0::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_09BpHwPowerE0_N7android4hidl4base4V1_05IBaseE = NULL;
