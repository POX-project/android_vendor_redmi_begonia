/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.modemdbfilter@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_modemdbfilter_1_0"

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
#include "vendor_mediatek_hardware_modemdbfilter_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::~BnHwFileDataCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback, void>(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::~BnHwCopyDBFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::BpHwCopyDBFilter(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BsCopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilterE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback, vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackENS7_17IFileDataCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackENS7_17IFileDataCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::~BnHwFileDataCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::getFileData(android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter11getFileDataERKN7android8hardware11hidl_stringERKNS5_2spINS3_17IFileDataCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter11getFileDataERKN7android8hardware11hidl_stringERKNS5_2spINS3_17IFileDataCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsCopyDBFilter::BsCopyDBFilter(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilterC2EN7android2spINS3_13ICopyDBFilterEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilterC2EN7android2spINS3_13ICopyDBFilterEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackE = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter> > android::hardware::details::castInterface<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilterENS_4hidl4base4V1_05IBaseENS7_16BpHwCopyDBFilterEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilterENS_4hidl4base4V1_05IBaseENS7_16BpHwCopyDBFilterEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::~BnHwFileListCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter>-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE0_N7android8hardware11BpInterfaceINS3_13ICopyDBFilterEEE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::castFrom(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilterE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::~BnHwFileDataCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE0_NS3_17IFileDataCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::_hidl_getFileListAndSize(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter24_hidl_getFileListAndSizeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter24_hidl_getFileListAndSizeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileDataCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::~BnHwCopyDBFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::BpHwCopyDBFilter(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::BnHwFileDataCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackC2ERKN7android2spINS3_17IFileDataCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackC2ERKN7android2spINS3_17IFileDataCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::~BnHwFileDataCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::BnHwFileListCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackC1ERKN7android2spINS3_17IFileListCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackC1ERKN7android2spINS3_17IFileListCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilterE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::_hidl_sendFileFDToClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback24_hidl_sendFileFDToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback24_hidl_sendFileFDToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallbackE0_NS3_17IFileDataCallbackE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::castFrom(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE0_NS3_17IFileListCallbackE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::~BnHwCopyDBFilter() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback4pingEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::BnHwCopyDBFilter(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterC1ERKN7android2spINS3_13ICopyDBFilterEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterC1ERKN7android2spINS3_13ICopyDBFilterEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback4pingEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::_hidl_sendFileListToClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback26_hidl_sendFileListToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback26_hidl_sendFileListToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::~BnHwFileDataCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::~BnHwFileDataCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallbackE0_NS3_17IFileListCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::~BnHwCopyDBFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD0Ev() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback10descriptorE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilterE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackE = NULL;

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::BpHwFileListCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback10descriptorE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::~BnHwCopyDBFilter() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::_hidl_sendFileListToClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback26_hidl_sendFileListToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallback26_hidl_sendFileListToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::~BnHwFileListCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::~BnHwCopyDBFilter() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::_hidl_sendFileFDToClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_handle const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback24_hidl_sendFileFDToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_handleE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback24_hidl_sendFileFDToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_handleE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::_hidl_getFileData(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter17_hidl_getFileDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilter17_hidl_getFileDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::castFrom(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::~BnHwFileListCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::BnHwCopyDBFilter(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterC2ERKN7android2spINS3_13ICopyDBFilterEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterC2ERKN7android2spINS3_13ICopyDBFilterEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::_hidl_getFileData(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter17_hidl_getFileDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_17IFileDataCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter17_hidl_getFileDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_17IFileDataCallbackEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::~BnHwFileDataCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE0_NS3_13ICopyDBFilterE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackENS_4hidl4base4V1_05IBaseENS7_20BpHwFileDataCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackENS_4hidl4base4V1_05IBaseENS7_20BpHwFileDataCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback>-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE0_N7android8hardware11BpInterfaceINS3_17IFileListCallbackEEE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::BpHwFileListCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BsCopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilterE0_NS3_13ICopyDBFilterE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileDataCallback::BsFileDataCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallbackC2EN7android2spINS3_17IFileDataCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallbackC2EN7android2spINS3_17IFileDataCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::sendFileListToClient(android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback20sendFileListToClientERKN7android8hardware8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback20sendFileListToClientERKN7android8hardware8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsCopyDBFilter::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilter13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilter13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileListCallback::BsFileListCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallbackC2EN7android2spINS3_17IFileListCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallbackC2EN7android2spINS3_17IFileListCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::BnHwFileListCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackC2ERKN7android2spINS3_17IFileListCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackC2ERKN7android2spINS3_17IFileListCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> android::hardware::fromBinder<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback, vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback, vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackENS6_20BpHwFileListCallbackENS6_20BnHwFileListCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackENS6_20BpHwFileListCallbackENS6_20BnHwFileListCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback, void>(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::BpHwFileDataCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::~BnHwFileListCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterE0_N7android8hardware7IBinderE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter::~BnHwCopyDBFilter() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback, vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackENS7_17IFileListCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallbackENS7_17IFileListCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::_hidl_getFileListAndSize(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter24_hidl_getFileListAndSizeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_17IFileListCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter24_hidl_getFileListAndSizeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_17IFileListCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::BnHwFileDataCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackC1ERKN7android2spINS3_17IFileDataCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackC1ERKN7android2spINS3_17IFileDataCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::sendFileFDToClient(android::hardware::hidl_handle const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback18sendFileFDToClientERKN7android8hardware11hidl_handleE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback18sendFileFDToClientERKN7android8hardware11hidl_handleE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::~BnHwFileListCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD0Ev() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter10descriptorE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwCopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware13modemdbfilter4V1_016BnHwCopyDBFilterE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackENS_4hidl4base4V1_05IBaseENS7_20BpHwFileListCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallbackENS_4hidl4base4V1_05IBaseENS7_20BpHwFileListCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileDataCallback::BsFileDataCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallbackC1EN7android2spINS3_17IFileDataCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileDataCallbackC1EN7android2spINS3_17IFileDataCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback>-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE0_N7android8hardware11BpInterfaceINS3_17IFileDataCallbackEEE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter, vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterENS7_13ICopyDBFilterEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilterENS7_13ICopyDBFilterEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileListCallback4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileListCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallbackE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileDataCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileListCallback::BsFileListCallback(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallbackC1EN7android2spINS3_17IFileListCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallbackC1EN7android2spINS3_17IFileListCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwCopyDBFilter::getFileListAndSize(android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileListCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter18getFileListAndSizeERKN7android8hardware11hidl_stringERKNS5_2spINS3_17IFileListCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_016BpHwCopyDBFilter18getFileListAndSizeERKN7android8hardware11hidl_stringERKNS5_2spINS3_17IFileListCallbackEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback::BpHwFileDataCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileDataCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback> android::hardware::fromBinder<vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback, vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileDataCallback, vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileDataCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackENS6_20BpHwFileDataCallbackENS6_20BnHwFileDataCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallbackENS6_20BpHwFileDataCallbackENS6_20BnHwFileDataCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::IFileDataCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_017IFileDataCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::~BnHwFileListCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsCopyDBFilter::BsCopyDBFilter(android::sp<vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilterC1EN7android2spINS3_13ICopyDBFilterEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_014BsCopyDBFilterC1EN7android2spINS3_13ICopyDBFilterEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::modemdbfilter::V1_0::BnHwFileListCallback::~BnHwFileListCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware13modemdbfilter4V1_020BnHwFileListCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::ICopyDBFilter::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_013ICopyDBFilter11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BsFileListCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_018BsFileListCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::modemdbfilter::V1_0::BpHwFileListCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware13modemdbfilter4V1_020BpHwFileListCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}
