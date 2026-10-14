/*
 * Reverse-Engineered Source for: vendor.dolby.hardware.dms@2.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_dolby_hardware_dms_2_0"

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
#include "vendor_dolby_hardware_dms_2_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwDms::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor5dolby8hardware3dms4V2_07BpHwDms15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor5dolby8hardware3dms4V2_07BpHwDms15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks10descriptorE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::~BnHwVqeCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD1Ev(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD1Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getProfileName(int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms14getProfileNameEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms14getProfileNameEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_setIntParams(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned int> const&, android::hardware::hidl_vec<long long> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms18_hidl_setIntParamsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIjEERKNSC_IxEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms18_hidl_setIntParamsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIjEERKNSC_IxEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::unregisterVqeCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21unregisterVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21unregisterVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::~BnHwDmsCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD0Ev(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD0Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::~BnHwVqeCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD0Ev(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD0Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_setChannelCount(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_setChannelCountEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_setChannelCountEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> android::hardware::details::wrapPassthrough<vendor::dolby::hardware::dms::V2_0::IDecCallbacks, void>(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor5dolby8hardware3dms4V2_013IDecCallbacksEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor5dolby8hardware3dms4V2_013IDecCallbacksEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::BnHwDms(android::sp<vendor::dolby::hardware::dms::V2_0::IDms> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsC2ERKN7android2spINS3_4IDmsEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsC2ERKN7android2spINS3_4IDmsEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDecCallbacks::BsDecCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014BsDecCallbacksC2EN7android2spINS3_13IDecCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014BsDecCallbacksC2EN7android2spINS3_13IDecCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getStoredParams(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_getStoredParamsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_getStoredParamsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDmsCallbacks::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacks13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacks13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> > android::hardware::details::castInterface<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks, android::hidl::base::V1_0::IBase, vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksENS_4hidl4base4V1_05IBaseENS7_16BpHwDmsCallbacksEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksENS_4hidl4base4V1_05IBaseENS7_16BpHwDmsCallbacksEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksE = NULL;

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::IVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> android::hardware::details::wrapPassthrough<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks, void>(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_setIntParam(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_setIntParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjx(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_setIntParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjx() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getStoredParams(bool, int, std::__1::function<void (bool, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15getStoredParamsEbiNSt3__18functionIFvbRKN7android8hardware8hidl_vecIiEERKNS9_INS3_34KeyValue_AudioDevice_DapParamCacheEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15getStoredParamsEbiNSt3__18functionIFvbRKN7android8hardware8hidl_vecIiEERKNS9_INS3_34KeyValue_AudioDevice_DapParamCacheEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::setChannelCount(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15setChannelCountEj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15setChannelCountEj() called");
    return 0;
}

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::writeEmbeddedToParcel(vendor::dolby::hardware::dms::V2_0::KeyValue_DapParameterId_ValueCache const&, android::hardware::Parcel*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_34KeyValue_DapParameterId_ValueCacheEPN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_34KeyValue_DapParameterId_ValueCacheEPN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_setSelectedTuningDevice(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms29_hidl_setSelectedTuningDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms29_hidl_setSelectedTuningDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::~BnHwDms() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsD2Ev(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsD2Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::registerClient(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms14registerClientERKN7android2spINS3_13IDmsCallbacksEEEij(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms14registerClientERKN7android2spINS3_13IDmsCallbacksEEEij() called");
    return 0;
}

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::IDms */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_04IDmsE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::castFrom(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::BpHwDecCallbacks(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::BnHwDmsCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksC1ERKN7android2spINS3_13IDmsCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksC1ERKN7android2spINS3_13IDmsCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BsVqeCallbacks::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacks13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacks13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::~BnHwDms() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsD1Ev(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsD1Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::registerDecCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms19registerDecCallbackERKN7android2spINS3_13IDecCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms19registerDecCallbackERKN7android2spINS3_13IDecCallbacksEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::BpHwDms */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_07BpHwDmsE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getIntParams(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::hidl_vec<long long> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12getIntParamsERKN7android8hardware8hidl_vecIjEENSt3__18functionIFvRKNS7_IxEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12getIntParamsERKN7android8hardware8hidl_vecIjEENSt3__18functionIFvRKNS7_IxEEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> android::hardware::fromBinder<vendor::dolby::hardware::dms::V2_0::IDecCallbacks, vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks, vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor5dolby8hardware3dms4V2_013IDecCallbacksENS6_16BpHwDecCallbacksENS6_16BnHwDecCallbacksEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor5dolby8hardware3dms4V2_013IDecCallbacksENS6_16BpHwDecCallbacksENS6_16BnHwDecCallbacksEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDms::~BnHwDms() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD1Ev(void) {
    ALOGD("_ZThn20_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD1Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks4pingEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE = NULL;

/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> android::hardware::details::getServiceInternal<vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks, vendor::dolby::hardware::dms::V2_0::IVqeCallbacks, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksENS7_13IVqeCallbacksEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksENS7_13IVqeCallbacksEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getAvailableTuningDevicesLen(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms34_hidl_getAvailableTuningDevicesLenEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms34_hidl_getAvailableTuningDevicesLenEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::~BnHwDms() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsD0Ev(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsD0Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> android::hardware::details::getServiceInternal<vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks, vendor::dolby::hardware::dms::V2_0::IDmsCallbacks, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksENS7_13IDmsCallbacksEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksENS7_13IDmsCallbacksEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDms::~BnHwDms() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD0Ev(void) {
    ALOGD("_ZThn20_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD0Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::~BnHwDecCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD1Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::registerVqeCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms19registerVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms19registerVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::notifyAudioTrackChange(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms22notifyAudioTrackChangeEjjjjjjj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms22notifyAudioTrackChangeEjjjjjjj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::dolby::hardware::dms::V2_0::IVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksE = NULL;

/* Exported Object: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks10descriptorE = NULL;

/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> android::hardware::fromBinder<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks, vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks, vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksENS6_16BpHwVqeCallbacksENS6_16BnHwVqeCallbacksEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksENS6_16BpHwVqeCallbacksENS6_16BnHwVqeCallbacksEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::readEmbeddedFromParcel(vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_34KeyValue_AudioDevice_DapParamCacheERKN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_34KeyValue_AudioDevice_DapParamCacheERKN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms4pingEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms4pingEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks4pingEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks4pingEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::onDecChanged(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks12onDecChangedEj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks12onDecChangedEj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::~BnHwDecCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD0Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::BnHwDms(android::sp<vendor::dolby::hardware::dms::V2_0::IDms> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsC1ERKN7android2spINS3_4IDmsEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsC1ERKN7android2spINS3_4IDmsEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::_hidl_onAudioTrackChange(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks24_hidl_onAudioTrackChangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks24_hidl_onAudioTrackChangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::BpHwDmsCallbacks(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BsVqeCallbacks::BsVqeCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacksC2EN7android2spINS3_13IVqeCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacksC2EN7android2spINS3_13IVqeCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getChannelCount(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_getChannelCountEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_getChannelCountEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::setIntParams(android::hardware::hidl_vec<unsigned int> const&, android::hardware::hidl_vec<long long> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12setIntParamsERKN7android8hardware8hidl_vecIjEERKNS7_IxEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12setIntParamsERKN7android8hardware8hidl_vecIjEERKNS7_IxEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getIntParam(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_getIntParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_getIntParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getActiveDevice(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_getActiveDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_getActiveDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_notifyAudioTrackChange(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms28_hidl_notifyAudioTrackChangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjjjjjjj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms28_hidl_notifyAudioTrackChangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjjjjjjj() called");
    return 0;
}

/* Exported Object: VTT for vendor::dolby::hardware::dms::V2_0::IDms */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor5dolby8hardware3dms4V2_04IDmsE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_registerVqeCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms25_hidl_registerVqeCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms25_hidl_registerVqeCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::BnHwDecCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksC2ERKN7android2spINS3_13IDecCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksC2ERKN7android2spINS3_13IDecCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDecCallbacks::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014BsDecCallbacks13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014BsDecCallbacks13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks4pingEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::IDms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_04IDmsE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getChannelCount() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15getChannelCountEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15getChannelCountEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::dolby::hardware::dms::V2_0::BpHwDms */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor5dolby8hardware3dms4V2_07BpHwDmsE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::_hidl_onDapParamUpdate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks22_hidl_onDapParamUpdateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks22_hidl_onDapParamUpdateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getIntParam(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_getIntParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_getIntParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwDms::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor5dolby8hardware3dms4V2_07BpHwDms15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor5dolby8hardware3dms4V2_07BpHwDms15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDecCallbacks::BsDecCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014BsDecCallbacksC1EN7android2spINS3_13IDecCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014BsDecCallbacksC1EN7android2spINS3_13IDecCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::readEmbeddedFromParcel(vendor::dolby::hardware::dms::V2_0::KeyValue_DapParameterId_ValueCache const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_34KeyValue_DapParameterId_ValueCacheERKN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_34KeyValue_DapParameterId_ValueCacheERKN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getProfileName(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms20_hidl_getProfileNameEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms20_hidl_getProfileNameEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BsVqeCallbacks::BsVqeCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacksC1EN7android2spINS3_13IVqeCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacksC1EN7android2spINS3_13IVqeCallbacksEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::dolby::hardware::dms::V2_0::IVqeCallbacks-in-vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE0_NS3_13IVqeCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks4pingEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks4pingEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::BnHwVqeCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksC1ERKN7android2spINS3_13IVqeCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksC1ERKN7android2spINS3_13IVqeCallbacksEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::BsVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms4pingEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms4pingEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::unregisterClient(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms16unregisterClientERKN7android2spINS3_13IDmsCallbacksEEEij(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms16unregisterClientERKN7android2spINS3_13IDmsCallbacksEEEij() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::BpHwDmsCallbacks(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::dolby::hardware::dms::V2_0::IDecCallbacks-in-vendor::dolby::hardware::dms::V2_0::BsDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_014BsDecCallbacksE0_NS3_13IDecCallbacksE = NULL;

/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks4pingEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks4pingEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksE = NULL;

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::IDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_013IDecCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::dolby::hardware::dms::V2_0::IVqeCallbacks-in-vendor::dolby::hardware::dms::V2_0::BsVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacksE0_NS3_13IVqeCallbacksE = NULL;

/* Exported Object: VTT for vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_unregisterVqeCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms27_hidl_unregisterVqeCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms27_hidl_unregisterVqeCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::setDapParam(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11setDapParamERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11setDapParamERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::readEmbeddedFromParcel(vendor::dolby::hardware::dms::V2_0::ValueCache const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_10ValueCacheERKN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_10ValueCacheERKN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Exported Object: VTT for vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksE = NULL;

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::IDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks4pingEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks4pingEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Exported Object: vendor::dolby::hardware::dms::V2_0::IDms::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor5dolby8hardware3dms4V2_04IDms10descriptorE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getIntParams(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::hidl_vec<long long> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms18_hidl_getIntParamsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIjEENSt3__18functionIFvRKNSC_IxEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms18_hidl_getIntParamsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIjEENSt3__18functionIFvRKNSC_IxEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_registerDecCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms25_hidl_registerDecCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms25_hidl_registerDecCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::dolby::hardware::dms::V2_0::IDms>-in-vendor::dolby::hardware::dms::V2_0::BpHwDms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_07BpHwDmsE0_N7android8hardware11BpInterfaceINS3_4IDmsEEE = NULL;

/* Exported Object: VTT for vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE = NULL;

/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::~BnHwDmsCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::~BnHwDecCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD1Ev(void) {
    ALOGD("_ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD1Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> android::hardware::details::wrapPassthrough<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks, void>(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::dolby::hardware::dms::V2_0::BpHwDms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_07BpHwDmsE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::~BnHwVqeCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> > android::hardware::details::castInterface<vendor::dolby::hardware::dms::V2_0::IDecCallbacks, android::hidl::base::V1_0::IBase, vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_013IDecCallbacksENS_4hidl4base4V1_05IBaseENS7_16BpHwDecCallbacksEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_013IDecCallbacksENS_4hidl4base4V1_05IBaseENS7_16BpHwDecCallbacksEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::~BnHwDmsCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD0Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::_hidl_onAudioTrackChange(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks24_hidl_onAudioTrackChangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjjjjjjj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks24_hidl_onAudioTrackChangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjjjjjjj() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::~BnHwDecCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD0Ev(void) {
    ALOGD("_ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD0Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getDapParam(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_getDapParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_getDapParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_setSelectedTuningDevice(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms29_hidl_setSelectedTuningDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms29_hidl_setSelectedTuningDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::dolby::hardware::dms::V2_0::IDecCallbacks-in-vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE0_NS3_13IDecCallbacksE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::dolby::hardware::dms::V2_0::BpHwDms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_07BpHwDmsE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::~BnHwVqeCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD0Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::_hidl_onDecChanged(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks18_hidl_onDecChangedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks18_hidl_onDecChangedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getIntParams(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms18_hidl_getIntParamsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms18_hidl_getIntParamsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getAvailableTuningDevices(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms31_hidl_getAvailableTuningDevicesEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms31_hidl_getAvailableTuningDevicesEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks4pingEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks4pingEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDms::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_05BsDms13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_05BsDms13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::dolby::hardware::dms::V2_0::IDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor5dolby8hardware3dms4V2_013IDecCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::_hidl_onDapParamUpdate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks22_hidl_onDapParamUpdateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks22_hidl_onDapParamUpdateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_setIntParam(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_setIntParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_setIntParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::setActiveDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15setActiveDeviceEj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15setActiveDeviceEj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_setChannelCount(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_setChannelCountEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_setChannelCountEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms4pingEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms4pingEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::BpHwDms(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDmsC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDmsC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDmsCallbacks::BsDmsCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacksC2EN7android2spINS3_13IDmsCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacksC2EN7android2spINS3_13IDmsCallbacksEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::dolby::hardware::dms::V2_0::IDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::IDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_013IDecCallbacksE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::BnHwDmsCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksC2ERKN7android2spINS3_13IDmsCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksC2ERKN7android2spINS3_13IDmsCallbacksEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks4pingEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks4pingEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::~BnHwDecCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD2Ev(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD2Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::writeEmbeddedToParcel(vendor::dolby::hardware::dms::V2_0::DapParamCache const&, android::hardware::Parcel*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_13DapParamCacheEPN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_13DapParamCacheEPN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_setActiveDevice(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_setActiveDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_setActiveDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwDms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_07BnHwDmsE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getSelectedTuningDevice(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms29_hidl_getSelectedTuningDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms29_hidl_getSelectedTuningDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getStoredParams(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, bool, int, std::__1::function<void (bool, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_getStoredParamsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEbiNSt3__18functionIFvbRKNS6_8hidl_vecIiEERKNSE_INS3_34KeyValue_AudioDevice_DapParamCacheEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_getStoredParamsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEbiNSt3__18functionIFvbRKNS6_8hidl_vecIiEERKNSE_INS3_34KeyValue_AudioDevice_DapParamCacheEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_unregisterDecCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms27_hidl_unregisterDecCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms27_hidl_unregisterDecCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::onDapParamUpdate(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks16onDapParamUpdateERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks16onDapParamUpdateERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::IDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::~BnHwDecCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD1Ev(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD1Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::readEmbeddedFromParcel(vendor::dolby::hardware::dms::V2_0::DapParamCache const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_13DapParamCacheERKN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_13DapParamCacheERKN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_registerClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms20_hidl_registerClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDmsCallbacksEEEij(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms20_hidl_registerClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDmsCallbacksEEEij() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::~BnHwDecCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD0Ev(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::dolby::hardware::dms::V2_0::IDecCallbacks>-in-vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE0_N7android8hardware11BpInterfaceINS3_13IDecCallbacksEEE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDms::BsDms(android::sp<vendor::dolby::hardware::dms::V2_0::IDms>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_05BsDmsC2EN7android2spINS3_4IDmsEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_05BsDmsC2EN7android2spINS3_4IDmsEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_unregisterDecCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms27_hidl_unregisterDecCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDecCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms27_hidl_unregisterDecCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDecCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::IVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::writeEmbeddedToParcel(vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache const&, android::hardware::Parcel*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_34KeyValue_AudioDevice_DapParamCacheEPN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_34KeyValue_AudioDevice_DapParamCacheEPN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_setActiveDevice(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_setActiveDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_setActiveDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_registerVqeCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms25_hidl_registerVqeCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IVqeCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms25_hidl_registerVqeCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IVqeCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getAvailableTuningDevices(int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms25getAvailableTuningDevicesEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms25getAvailableTuningDevicesEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::dolby::hardware::dms::V2_0::IDmsCallbacks-in-vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE0_NS3_13IDmsCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getActiveDevice(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_getActiveDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_getActiveDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::BnHwVqeCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksC2ERKN7android2spINS3_13IVqeCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksC2ERKN7android2spINS3_13IVqeCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> android::hardware::details::getServiceInternal<vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks, vendor::dolby::hardware::dms::V2_0::IDecCallbacks, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksENS7_13IDecCallbacksEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksENS7_13IDecCallbacksEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_setIntParams(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms18_hidl_setIntParamsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms18_hidl_setIntParamsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::BnHwDms */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_07BnHwDmsE = NULL;

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_notifyAudioTrackChange(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms28_hidl_notifyAudioTrackChangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms28_hidl_notifyAudioTrackChangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getDapParam(android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11getDapParamERKN7android8hardware8hidl_vecIhEENSt3__18functionIFviSA_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11getDapParamERKN7android8hardware8hidl_vecIhEENSt3__18functionIFviSA_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getChannelCount(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_getChannelCountEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_getChannelCountEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getAvailableTuningDevicesLen(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms34_hidl_getAvailableTuningDevicesLenEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms34_hidl_getAvailableTuningDevicesLenEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::castFrom(android::sp<vendor::dolby::hardware::dms::V2_0::IDms> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getAvailableTuningDevices(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms31_hidl_getAvailableTuningDevicesEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms31_hidl_getAvailableTuningDevicesEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwDms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_07BnHwDmsE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::BpHwDms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_07BpHwDmsE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_unregisterClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms22_hidl_unregisterClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms22_hidl_unregisterClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getIntParam(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11getIntParamEj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11getIntParamEj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_setDapParam(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_setDapParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_setDapParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::setSelectedTuningDevice(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms23setSelectedTuningDeviceEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms23setSelectedTuningDeviceEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_unregisterVqeCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms27_hidl_unregisterVqeCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IVqeCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms27_hidl_unregisterVqeCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IVqeCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::BpHwDms(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDmsC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDmsC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::dolby::hardware::dms::V2_0::IDmsCallbacks-in-vendor::dolby::hardware::dms::V2_0::BsDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacksE0_NS3_13IDmsCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::BpHwVqeCallbacks(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_setDapParam(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_setDapParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_setDapParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksE0_N7android8hardware7IBinderE = NULL;

/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::~BnHwDmsCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD1Ev(void) {
    ALOGD("_ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD1Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks4pingEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks4pingEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::onAudioTrackChange(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks18onAudioTrackChangeEjjjjjjj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks18onAudioTrackChangeEjjjjjjj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::BnHwDecCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksC1ERKN7android2spINS3_13IDecCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksC1ERKN7android2spINS3_13IDecCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDms::BsDms(android::sp<vendor::dolby::hardware::dms::V2_0::IDms>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_05BsDmsC1EN7android2spINS3_4IDmsEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_05BsDmsC1EN7android2spINS3_4IDmsEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_unregisterClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms22_hidl_unregisterClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDmsCallbacksEEEij(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms22_hidl_unregisterClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDmsCallbacksEEEij() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getSelectedTuningDevice(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms29_hidl_getSelectedTuningDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms29_hidl_getSelectedTuningDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getSelectedTuningDevice(int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms23getSelectedTuningDeviceEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms23getSelectedTuningDeviceEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::BsDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacksE = NULL;

/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::~BnHwVqeCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD1Ev(void) {
    ALOGD("_ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD1Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::castFrom(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::setIntParam(unsigned int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11setIntParamEjx(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11setIntParamEjx() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getActiveDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15getActiveDeviceEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15getActiveDeviceEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_registerDecCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms25_hidl_registerDecCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDecCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms25_hidl_registerDecCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDecCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getAvailableTuningDevicesLen(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms28getAvailableTuningDevicesLenEi(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms28getAvailableTuningDevicesLenEi() called");
    return 0;
}

/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IDms> android::hardware::details::getServiceInternal<vendor::dolby::hardware::dms::V2_0::BpHwDms, vendor::dolby::hardware::dms::V2_0::IDms, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_07BpHwDmsENS7_4IDmsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_07BpHwDmsENS7_4IDmsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::~BnHwDmsCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD0Ev(void) {
    ALOGD("_ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD0Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_04IDms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_04IDms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getDapParam(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_getDapParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEENSt3__18functionIFviSF_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_getDapParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEENSt3__18functionIFviSF_EEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDms::~BnHwDms() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD1Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::_hidl_onDecChanged(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks18_hidl_onDecChangedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks18_hidl_onDecChangedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj() called");
    return 0;
}

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::BsDms */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_05BsDmsE = NULL;

/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::~BnHwVqeCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD0Ev(void) {
    ALOGD("_ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks>-in-vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE0_N7android8hardware11BpInterfaceINS3_13IDmsCallbacksEEE = NULL;

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDms::~BnHwDms() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::dolby::hardware::dms::V2_0::BnHwDms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_07BnHwDmsE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::writeEmbeddedToParcel(vendor::dolby::hardware::dms::V2_0::ValueCache const&, android::hardware::Parcel*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_10ValueCacheEPN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_10ValueCacheEPN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::castFrom(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> > android::hardware::details::castInterface<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks, android::hidl::base::V1_0::IBase, vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksENS_4hidl4base4V1_05IBaseENS7_16BpHwVqeCallbacksEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksENS_4hidl4base4V1_05IBaseENS7_16BpHwVqeCallbacksEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getProfileName(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms20_hidl_getProfileNameEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms20_hidl_getProfileNameEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> android::hardware::fromBinder<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks, vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks, vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksENS6_16BpHwDmsCallbacksENS6_16BnHwDmsCallbacksEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksENS6_16BpHwDmsCallbacksENS6_16BnHwDmsCallbacksEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks>-in-vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE0_N7android8hardware11BpInterfaceINS3_13IVqeCallbacksEEE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::unregisterDecCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21unregisterDecCallbackERKN7android2spINS3_13IDecCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21unregisterDecCallbackERKN7android2spINS3_13IDecCallbacksEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::dolby::hardware::dms::V2_0::IDms-in-vendor::dolby::hardware::dms::V2_0::BpHwDms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_07BpHwDmsE0_NS3_4IDmsE = NULL;

/* Exported Object: VTT for vendor::dolby::hardware::dms::V2_0::BnHwDms */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor5dolby8hardware3dms4V2_07BnHwDmsE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::~BnHwDmsCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD2Ev(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD2Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks10descriptorE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDmsCallbacks::BsDmsCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacksC1EN7android2spINS3_13IDmsCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacksC1EN7android2spINS3_13IDmsCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::BpHwDecCallbacks(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_registerClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms20_hidl_registerClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_07BnHwDms20_hidl_registerClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::dolby::hardware::dms::V2_0::IDms> > android::hardware::details::castInterface<vendor::dolby::hardware::dms::V2_0::IDms, android::hidl::base::V1_0::IBase, vendor::dolby::hardware::dms::V2_0::BpHwDms>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_04IDmsENS_4hidl4base4V1_05IBaseENS7_7BpHwDmsEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_04IDmsENS_4hidl4base4V1_05IBaseENS7_7BpHwDmsEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::~BnHwVqeCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD2Ev(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD2Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::dolby::hardware::dms::V2_0::IDms-in-vendor::dolby::hardware::dms::V2_0::BsDms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_05BsDmsE0_NS3_4IDmsE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::~BnHwDmsCallbacks() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD1Ev(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD1Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::BpHwVqeCallbacks(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::BsDecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_014BsDecCallbacksE = NULL;
