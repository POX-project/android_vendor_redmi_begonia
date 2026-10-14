/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.camera.bgservice@1.1.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_camera_bgservice_1_1"

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
#include "vendor_mediatek_hardware_camera_bgservice_1_1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::BpHwBGService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BsEventCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::onCompleted_1_1(int, int, unsigned int, long long, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onCompleted_1_1Eiijxii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onCompleted_1_1Eiijxii() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BsBGService::BsBGService(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGServiceC1EN7android2spINS4_10IBGServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGServiceC1EN7android2spINS4_10IBGServiceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService-in-vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceE0_NS3_4V1_010IBGServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::~BnHwEventCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback, vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback, vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback>(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackENS7_4V1_014IEventCallbackENS8_17BpHwEventCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackENS7_4V1_014IEventCallbackENS8_17BpHwEventCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::BnHwBGService(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceC1ERKN7android2spINS4_10IBGServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceC1ERKN7android2spINS4_10IBGServiceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::BnHwBGService(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceC2ERKN7android2spINS4_10IBGServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceC2ERKN7android2spINS4_10IBGServiceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BsEventCallback::BsEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallbackC2EN7android2spINS4_14IEventCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallbackC2EN7android2spINS4_14IEventCallbackEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackENS_4hidl4base4V1_05IBaseENS8_17BpHwEventCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackENS_4hidl4base4V1_05IBaseENS8_17BpHwEventCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::setEventCallback(int, android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService16setEventCallbackEiRKN7android2spINS3_4V1_014IEventCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService16setEventCallbackEiRKN7android2spINS3_4V1_014IEventCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::BpHwEventCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService4pingEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback, void>(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackEvEENS_2spIT_EESC_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackEvEENS_2spIT_EESC_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback>-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE0_N7android8hardware11BpInterfaceINS4_14IEventCallbackEEE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> android::hardware::fromBinder<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback, vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback, vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackENS7_17BpHwEventCallbackENS7_17BnHwEventCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackENS7_17BpHwEventCallbackENS7_17BnHwEventCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::~BnHwEventCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::~BnHwEventCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BsBGService::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGService13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGService13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::BsBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGServiceE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::_hidl_setEventCallback_1_1(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService26_hidl_setEventCallback_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService26_hidl_setEventCallback_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BsBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGServiceE0_NS4_10IBGServiceE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::BnHwEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackC2ERKN7android2spINS4_14IEventCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackC2ERKN7android2spINS4_14IEventCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE0_NS4_14IEventCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::BpHwEventCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE0_NS3_4V1_014IEventCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::setEventCallback_1_1(int, android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService20setEventCallback_1_1EiRKN7android2spINS4_14IEventCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService20setEventCallback_1_1EiRKN7android2spINS4_14IEventCallbackEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback, void>(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackEvEENS_2spIT_EESC_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackEvEENS_2spIT_EESC_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService>-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE0_N7android8hardware11BpInterfaceINS4_10IBGServiceEEE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::~BnHwBGService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD0Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService15onLastStrongRefEPKv() called");
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

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::~BnHwBGService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::~BnHwEventCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback-in-vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackE0_NS3_4V1_014IEventCallbackE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::~BnHwEventCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::BnHwEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackC1ERKN7android2spINS4_14IEventCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackC1ERKN7android2spINS4_14IEventCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::~BnHwEventCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::BsEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback10descriptorE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService, vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService, vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService>(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceENS7_4V1_010IBGServiceENS8_13BpHwBGServiceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceENS7_4V1_010IBGServiceENS8_13BpHwBGServiceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb() called");
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

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE4_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::~BnHwBGService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::~BnHwBGService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::castFrom(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::onCompleted(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback11onCompletedEiij(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback11onCompletedEiij() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BsBGService::BsBGService(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGServiceC2EN7android2spINS4_10IBGServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGServiceC2EN7android2spINS4_10IBGServiceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackE0_N7android8hardware7IBinderE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE0_NS4_10IBGServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BsEventCallback::BsEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallbackC1EN7android2spINS4_14IEventCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallbackC1EN7android2spINS4_14IEventCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::BpHwBGService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::~BnHwBGService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::~BnHwEventCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::castFrom(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService8castFromERKN7android2spINS3_4V1_010IBGServiceEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService8castFromERKN7android2spINS3_4V1_010IBGServiceEEEb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BsEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallbackE0_NS4_14IEventCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::castFrom(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::_hidl_onCompleted_1_1(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback21_hidl_onCompleted_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback21_hidl_onCompleted_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::castFrom(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback8castFromERKN7android2spINS3_4V1_014IEventCallbackEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback8castFromERKN7android2spINS3_4V1_014IEventCallbackEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::~BnHwBGService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceENS_4hidl4base4V1_05IBaseENS8_13BpHwBGServiceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceENS_4hidl4base4V1_05IBaseENS8_13BpHwBGServiceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService, vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceENS8_10IBGServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceENS8_10IBGServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::~BnHwBGService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::_hidl_onCompleted_1_1(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, unsigned int, long long, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback21_hidl_onCompleted_1_1EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiijxii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback21_hidl_onCompleted_1_1EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiijxii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::_hidl_setEventCallback_1_1(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService26_hidl_setEventCallback_1_1EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiRKNS6_2spINS4_14IEventCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService26_hidl_setEventCallback_1_1EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiRKNS6_2spINS4_14IEventCallbackEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE0_NS3_4V1_010IBGServiceE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback, vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackENS8_14IEventCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackENS8_14IEventCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}
