/*
 * Reverse-Engineered Source for: vendor.xiaomi.hardware.misys@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_xiaomi_hardware_misys_1_0"

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
#include "vendor_xiaomi_hardware_misys_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::misys::V1_0::BsMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware5misys4V1_07BsMiSysE = NULL;

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::_hidl_MiSysWriteFile(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, unsigned int, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys20_hidl_MiSysWriteFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_SE_jh(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys20_hidl_MiSysWriteFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_SE_jh() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::BpHwMiSys(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::~BnHwMiSys() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD1Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BsMiSys::BsMiSys(android::sp<vendor::xiaomi::hardware::misys::V1_0::IMiSys>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_07BsMiSysC2EN7android2spINS3_6IMiSysEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_07BsMiSysC2EN7android2spINS3_6IMiSysEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::_hidl_MiSysWriteFile(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys20_hidl_MiSysWriteFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys20_hidl_MiSysWriteFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::writeEmbeddedToParcel(vendor::xiaomi::hardware::misys::V1_0::IReadResult const&, android::hardware::Parcel*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_021writeEmbeddedToParcelERKNS3_11IReadResultEPN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_021writeEmbeddedToParcelERKNS3_11IReadResultEPN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::~BnHwMiSys() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::BnHwMiSys(android::sp<vendor::xiaomi::hardware::misys::V1_0::IMiSys> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysC1ERKN7android2spINS3_6IMiSysEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysC1ERKN7android2spINS3_6IMiSysEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::_hidl_EraseFileOrDirectory(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys26_hidl_EraseFileOrDirectoryEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys26_hidl_EraseFileOrDirectoryEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::BnHwMiSys(android::sp<vendor::xiaomi::hardware::misys::V1_0::IMiSys> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysC2ERKN7android2spINS3_6IMiSysEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysC2ERKN7android2spINS3_6IMiSysEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::readEmbeddedFromParcel(vendor::xiaomi::hardware::misys::V1_0::IReadResult const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_022readEmbeddedFromParcelERKNS3_11IReadResultERKN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_022readEmbeddedFromParcelERKNS3_11IReadResultERKN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Exported Object: vendor::xiaomi::hardware::misys::V1_0::IMiSys::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys10descriptorE = NULL;

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::~BnHwMiSys() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD0Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::DirListFiles(android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V1_0::IFileListResult const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys12DirListFilesERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS3_15IFileListResultEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys12DirListFilesERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS3_15IFileListResultEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::MiSysReadFile(android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V1_0::IReadResult const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys13MiSysReadFileERKN7android8hardware11hidl_stringES9_NSt3__18functionIFvRKNS3_11IReadResultEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys13MiSysReadFileERKN7android8hardware11hidl_stringES9_NSt3__18functionIFvRKNS3_11IReadResultEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::MiSysWriteFile(android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_string const&, unsigned int, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys14MiSysWriteFileERKN7android8hardware11hidl_stringES9_S9_jh(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys14MiSysWriteFileERKN7android8hardware11hidl_stringES9_S9_jh() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE4_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE = NULL;

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::misys::V1_0::IMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware5misys4V1_06IMiSysE = NULL;

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::writeEmbeddedToParcel(vendor::xiaomi::hardware::misys::V1_0::IFileListResult const&, android::hardware::Parcel*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_021writeEmbeddedToParcelERKNS3_15IFileListResultEPN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_021writeEmbeddedToParcelERKNS3_15IFileListResultEPN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BsMiSys::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_07BsMiSys13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_07BsMiSys13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysE = NULL;

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::readEmbeddedFromParcel(vendor::xiaomi::hardware::misys::V1_0::IFileInfo const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_022readEmbeddedFromParcelERKNS3_9IFileInfoERKN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_022readEmbeddedFromParcelERKNS3_9IFileInfoERKN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::EraseFileOrDirectory(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys20EraseFileOrDirectoryERKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys20EraseFileOrDirectoryERKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::_hidl_MiSysReadFile(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys19_hidl_MiSysReadFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys19_hidl_MiSysReadFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysE0_N7android8hardware7IBinderE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::castFrom(android::sp<vendor::xiaomi::hardware::misys::V1_0::IMiSys> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BsMiSys::BsMiSys(android::sp<vendor::xiaomi::hardware::misys::V1_0::IMiSys>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_07BsMiSysC1EN7android2spINS3_6IMiSysEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_07BsMiSysC1EN7android2spINS3_6IMiSysEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::~BnHwMiSys() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::_hidl_DirListFiles(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys18_hidl_DirListFilesEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys18_hidl_DirListFilesEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::_hidl_DirListFiles(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V1_0::IFileListResult const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys18_hidl_DirListFilesEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvRKNS3_15IFileListResultEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys18_hidl_DirListFilesEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvRKNS3_15IFileListResultEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::misys::V1_0::IMiSys> > android::hardware::details::castInterface<vendor::xiaomi::hardware::misys::V1_0::IMiSys, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware5misys4V1_06IMiSysENS_4hidl4base4V1_05IBaseENS7_9BpHwMiSysEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware5misys4V1_06IMiSysENS_4hidl4base4V1_05IBaseENS7_9BpHwMiSysEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::misys::V1_0::IMiSys-in-vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE0_NS3_6IMiSysE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::~BnHwMiSys() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD0Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::_hidl_EraseFileOrDirectory(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys26_hidl_EraseFileOrDirectoryEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys26_hidl_EraseFileOrDirectoryEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::_hidl_MiSysReadFile(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::xiaomi::hardware::misys::V1_0::IReadResult const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys19_hidl_MiSysReadFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_NSt3__18functionIFvRKNS3_11IReadResultEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys19_hidl_MiSysReadFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_NSt3__18functionIFvRKNS3_11IReadResultEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::misys::V1_0::IMiSys-in-vendor::xiaomi::hardware::misys::V1_0::BsMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware5misys4V1_07BsMiSysE0_NS3_6IMiSysE = NULL;

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::~BnHwMiSys() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::readEmbeddedFromParcel(vendor::xiaomi::hardware::misys::V1_0::IFileListResult const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_022readEmbeddedFromParcelERKNS3_15IFileListResultERKN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_022readEmbeddedFromParcelERKNS3_15IFileListResultERKN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE = NULL;

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::IMiSys::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_06IMiSys8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::BpHwMiSys(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::misys::V1_0::IMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware5misys4V1_06IMiSysE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysE = NULL;

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSys4pingEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::misys::V1_0::IMiSys> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys, vendor::xiaomi::hardware::misys::V1_0::IMiSys, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysENS7_6IMiSysEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysENS7_6IMiSysEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSys4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::BnHwMiSys::~BnHwMiSys() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_09BnHwMiSysD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::misys::V1_0::IMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware5misys4V1_06IMiSysE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::misys::V1_0::IMiSys>-in-vendor::xiaomi::hardware::misys::V1_0::BpHwMiSys */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware5misys4V1_09BpHwMiSysE0_N7android8hardware11BpInterfaceINS3_6IMiSysEEE = NULL;

/* Demangled: vendor::xiaomi::hardware::misys::V1_0::writeEmbeddedToParcel(vendor::xiaomi::hardware::misys::V1_0::IFileInfo const&, android::hardware::Parcel*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware5misys4V1_021writeEmbeddedToParcelERKNS3_9IFileInfoEPN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware5misys4V1_021writeEmbeddedToParcelERKNS3_9IFileInfoEPN7android8hardware6ParcelEjj() called");
    return 0;
}
