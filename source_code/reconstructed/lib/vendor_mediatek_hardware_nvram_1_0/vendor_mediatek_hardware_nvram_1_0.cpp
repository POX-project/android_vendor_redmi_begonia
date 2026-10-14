/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.nvram@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_nvram_1_0"

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
#include "vendor_mediatek_hardware_nvram_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: vendor::mediatek::hardware::nvram::V1_0::INvram::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware5nvram4V1_06INvram10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::_hidl_readFileByName(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram20_hidl_readFileByNameEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram20_hidl_readFileByNameEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::BnHwNvram(android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramC2ERKN7android2spINS3_6INvramEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramC2ERKN7android2spINS3_6INvramEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::nvram::V1_0::INvram */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5nvram4V1_06INvramE = NULL;

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::~BnHwNvram() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::~BnHwNvram() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware5nvram4V1_09BpHwNvram15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware5nvram4V1_09BpHwNvram15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::_hidl_writeFileByNamevec(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram24_hidl_writeFileByNamevecEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringEjRKNS6_8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram24_hidl_writeFileByNamevecEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringEjRKNS6_8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::nvram::V1_0::INvram-in-vendor::mediatek::hardware::nvram::V1_0::BsNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5nvram4V1_07BsNvramE0_NS3_6INvramE = NULL;

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BsNvram::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_07BsNvram13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_07BsNvram13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::~BnHwNvram() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::BpHwNvram(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::nvram::V1_0::BpHwNvram, vendor::mediatek::hardware::nvram::V1_0::INvram, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramENS7_6INvramEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramENS7_6INvramEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::nvram::V1_0::BnHwNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramE = NULL;

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::writeFileByNamevec(android::hardware::hidl_string const&, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram18writeFileByNamevecERKN7android8hardware11hidl_stringEjRKNS6_8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram18writeFileByNamevecERKN7android8hardware11hidl_stringEjRKNS6_8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::nvram::V1_0::BnHwNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BsNvram::BsNvram(android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_07BsNvramC2EN7android2spINS3_6INvramEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_07BsNvramC2EN7android2spINS3_6INvramEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::nvram::V1_0::BpHwNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::~BnHwNvram() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::nvram::V1_0::INvram-in-vendor::mediatek::hardware::nvram::V1_0::BpHwNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE0_NS3_6INvramE = NULL;

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::_hidl_readFileByName(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, unsigned int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram20_hidl_readFileByNameEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringEjNSt3__18functionIFvSE_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram20_hidl_readFileByNameEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringEjNSt3__18functionIFvSE_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::nvram::V1_0::BpHwNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE4_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::nvram::V1_0::BpHwNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::nvram::V1_0::BnHwNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::nvram::V1_0::INvram */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5nvram4V1_06INvramE = NULL;

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::BnHwNvram(android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramC1ERKN7android2spINS3_6INvramEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramC1ERKN7android2spINS3_6INvramEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::nvram::V1_0::BsNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5nvram4V1_07BsNvramE = NULL;

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::~BnHwNvram() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::nvram::V1_0::INvram */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5nvram4V1_06INvramE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::nvram::V1_0::INvram>-in-vendor::mediatek::hardware::nvram::V1_0::BpHwNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE0_N7android8hardware11BpInterfaceINS3_6INvramEEE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::~BnHwNvram() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::_hidl_writeFileByNamevec(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram24_hidl_writeFileByNamevecEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram24_hidl_writeFileByNamevecEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::readFileByName(android::hardware::hidl_string const&, unsigned int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram14readFileByNameERKN7android8hardware11hidl_stringEjNSt3__18functionIFvS9_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram14readFileByNameERKN7android8hardware11hidl_stringEjNSt3__18functionIFvS9_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::BpHwNvram(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::nvram::V1_0::BpHwNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::nvram::V1_0::BnHwNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramE = NULL;

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::nvram::V1_0::BnHwNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5nvram4V1_09BnHwNvramE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BnHwNvram4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_09BpHwNvram19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::nvram::V1_0::BpHwNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5nvram4V1_09BpHwNvramE = NULL;

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::INvram::castFrom(android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_06INvram8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_06INvram8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nvram::V1_0::BsNvram::BsNvram(android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5nvram4V1_07BsNvramC1EN7android2spINS3_6INvramEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5nvram4V1_07BsNvramC1EN7android2spINS3_6INvramEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram> > android::hardware::details::castInterface<vendor::mediatek::hardware::nvram::V1_0::INvram, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::nvram::V1_0::BpHwNvram>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5nvram4V1_06INvramENS_4hidl4base4V1_05IBaseENS7_9BpHwNvramEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5nvram4V1_06INvramENS_4hidl4base4V1_05IBaseENS7_9BpHwNvramEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::nvram::V1_0::BnHwNvram::~BnHwNvram() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware5nvram4V1_09BnHwNvramD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::nvram::V1_0::BpHwNvram::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware5nvram4V1_09BpHwNvram15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware5nvram4V1_09BpHwNvram15onLastStrongRefEPKv() called");
    return 0;
}
