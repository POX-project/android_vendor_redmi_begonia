/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.netdagent@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_netdagent_1_0"

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
#include "vendor_mediatek_hardware_netdagent_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::netdagent::V1_0::INetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9netdagent4V1_010INetdagentE = NULL;

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BsNetdagent::BsNetdagent(android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagentC2EN7android2spINS3_10INetdagentEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagentC2EN7android2spINS3_10INetdagentEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::BnHwNetdagent(android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentC1ERKN7android2spINS3_10INetdagentEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentC1ERKN7android2spINS3_10INetdagentEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::netdagent::V1_0::INetdagent>-in-vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE0_N7android8hardware11BpInterfaceINS3_10INetdagentEEE = NULL;

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::~BnHwNetdagent() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::netdagent::V1_0::INetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_010INetdagentE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::netdagent::V1_0::INetdagent-in-vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE0_NS3_10INetdagentE = NULL;

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BsNetdagent::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagent13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagent13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::_hidl_dispatchNetdagentCmd(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent26_hidl_dispatchNetdagentCmdEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent26_hidl_dispatchNetdagentCmdEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::~BnHwNetdagent() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::BpHwNetdagent(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE = NULL;

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::~BnHwNetdagent() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent, vendor::mediatek::hardware::netdagent::V1_0::INetdagent, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentENS7_10INetdagentEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentENS7_10INetdagentEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::dispatchNetdagentCmd(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent20dispatchNetdagentCmdERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent20dispatchNetdagentCmdERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::~BnHwNetdagent() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::_hidl_dispatchNetdagentCmd(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent26_hidl_dispatchNetdagentCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent26_hidl_dispatchNetdagentCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::~BnHwNetdagent() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent> > android::hardware::details::castInterface<vendor::mediatek::hardware::netdagent::V1_0::INetdagent, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9netdagent4V1_010INetdagentENS_4hidl4base4V1_05IBaseENS7_13BpHwNetdagentEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9netdagent4V1_010INetdagentENS_4hidl4base4V1_05IBaseENS7_13BpHwNetdagentEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::netdagent::V1_0::INetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9netdagent4V1_010INetdagentE = NULL;

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BsNetdagent::BsNetdagent(android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagentC1EN7android2spINS3_10INetdagentEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagentC1EN7android2spINS3_10INetdagentEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::BnHwNetdagent(android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentC2ERKN7android2spINS3_10INetdagentEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentC2ERKN7android2spINS3_10INetdagentEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentE0_N7android8hardware7IBinderE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::~BnHwNetdagent() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::castFrom(android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::BpHwNetdagent(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::netdagent::V1_0::INetdagent-in-vendor::mediatek::hardware::netdagent::V1_0::BsNetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagentE0_NS3_10INetdagentE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::netdagent::V1_0::BsNetdagent */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagentE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::~BnHwNetdagent() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD0Ev() called");
    return 0;
}
