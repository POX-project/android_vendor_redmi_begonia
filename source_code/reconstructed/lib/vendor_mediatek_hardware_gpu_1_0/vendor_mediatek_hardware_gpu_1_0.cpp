/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.gpu@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_gpu_1_0"

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
#include "vendor_mediatek_hardware_gpu_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::ged_destroy(vendor::mediatek::hardware::gpu::V1_0::GED_HIDL_HANDLE const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt11ged_destroyERKNS3_15GED_HIDL_HANDLEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt11ged_destroyERKNS3_15GED_HIDL_HANDLEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::gralloc_extra_perform_uint64(android::hardware::hidl_handle const&, vendor::mediatek::hardware::gpu::V1_0::GRALLOC_EXTRA_ATTRIBUTE_PERFORM, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt28gralloc_extra_perform_uint64ERKN7android8hardware11hidl_handleENS3_31GRALLOC_EXTRA_ATTRIBUTE_PERFORMEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt28gralloc_extra_perform_uint64ERKN7android8hardware11hidl_handleENS3_31GRALLOC_EXTRA_ATTRIBUTE_PERFORMEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::gralloc_extra_query(android::hardware::hidl_handle const&, vendor::mediatek::hardware::gpu::V1_0::GRALLOC_EXTRA_ATTRIBUTE_QUERY, std::__1::function<void (int, android::hardware::hidl_handle const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt19gralloc_extra_queryERKN7android8hardware11hidl_handleENS3_29GRALLOC_EXTRA_ATTRIBUTE_QUERYENSt3__18functionIFviS9_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt19gralloc_extra_queryERKN7android8hardware11hidl_handleENS3_29GRALLOC_EXTRA_ATTRIBUTE_QUERYENSt3__18functionIFviS9_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_ged_kpi_queue_buffer_tag(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long long, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt30_hidl_ged_kpi_queue_buffer_tagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEyiij(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt30_hidl_ged_kpi_queue_buffer_tagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEyiij() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback::BnHwGraphicExtCallback(android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackC2ERKN7android2spINS3_19IGraphicExtCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackC2ERKN7android2spINS3_19IGraphicExtCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::gpu::V1_0::ge_ion_debug_t const&, android::hardware::Parcel*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_021writeEmbeddedToParcelERKNS3_14ge_ion_debug_tEPN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_021writeEmbeddedToParcelERKNS3_14ge_ion_debug_tEPN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback> android::hardware::fromBinder<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback, vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback, vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallbackENS6_22BpHwGraphicExtCallbackENS6_22BnHwGraphicExtCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallbackENS6_22BpHwGraphicExtCallbackENS6_22BnHwGraphicExtCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_ged_is_gpu_need_vsync_calibration(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::gpu::V1_0::GED_HIDL_ERROR_TAG, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt39_hidl_ged_is_gpu_need_vsync_calibrationEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_18GED_HIDL_ERROR_TAGEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt39_hidl_ged_is_gpu_need_vsync_calibrationEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_18GED_HIDL_ERROR_TAGEjEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback::~BnHwGraphicExtCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::ged_kpi_acquire_buffer_tag(unsigned long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt26ged_kpi_acquire_buffer_tagEyj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt26ged_kpi_acquire_buffer_tagEyj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_gralloc_extra_perform_ion_debug(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_handle const&, vendor::mediatek::hardware::gpu::V1_0::GRALLOC_EXTRA_ATTRIBUTE_PERFORM, vendor::mediatek::hardware::gpu::V1_0::ge_ion_debug_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt37_hidl_gralloc_extra_perform_ion_debugEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_handleENS3_31GRALLOC_EXTRA_ATTRIBUTE_PERFORMERKNS3_14ge_ion_debug_tE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt37_hidl_gralloc_extra_perform_ion_debugEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_handleENS3_31GRALLOC_EXTRA_ATTRIBUTE_PERFORMERKNS3_14ge_ion_debug_tE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::BpHwGraphicExtCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExtE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::BpHwGraphicExt(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExtC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExtC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::~BnHwGraphicExt() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_ged_kpi_buffer_connect(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt28_hidl_ged_kpi_buffer_connectEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt28_hidl_ged_kpi_buffer_connectEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_gralloc_extra_perform_ion_debug(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt37_hidl_gralloc_extra_perform_ion_debugEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt37_hidl_gralloc_extra_perform_ion_debugEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::sendVsyncOffsetFunc(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback19sendVsyncOffsetFuncEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback19sendVsyncOffsetFuncEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExt> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt, vendor::mediatek::hardware::gpu::V1_0::IGraphicExt, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExtENS7_11IGraphicExtEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExtENS7_11IGraphicExtEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::gpu::V1_0::BsGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3gpu4V1_012BsGraphicExtE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::~BnHwGraphicExt() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::ged_vsync_calibration(vendor::mediatek::hardware::gpu::V1_0::GED_HIDL_HANDLE const&, int, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt21ged_vsync_calibrationERKNS3_15GED_HIDL_HANDLEEiy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt21ged_vsync_calibrationERKNS3_15GED_HIDL_HANDLEEiy() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::gpu::V1_0::IGraphicExt>-in-vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExtE0_N7android8hardware11BpInterfaceINS3_11IGraphicExtEEE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BsGraphicExtCallback::BsGraphicExtCallback(android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_020BsGraphicExtCallbackC1EN7android2spINS3_19IGraphicExtCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_020BsGraphicExtCallbackC1EN7android2spINS3_19IGraphicExtCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallbackE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback::~BnHwGraphicExtCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_ged_kpi_create(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt20_hidl_ged_kpi_createEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt20_hidl_ged_kpi_createEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::ged_kpi_queue_buffer_tag(unsigned long long, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt24ged_kpi_queue_buffer_tagEyiij(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt24ged_kpi_queue_buffer_tagEyiij() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::setupSendVsyncOffsetFuncCallback(android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt32setupSendVsyncOffsetFuncCallbackERKN7android2spINS3_19IGraphicExtCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt32setupSendVsyncOffsetFuncCallbackERKN7android2spINS3_19IGraphicExtCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback, void>(android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallbackEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallbackEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback, vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallbackENS7_19IGraphicExtCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallbackENS7_19IGraphicExtCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::ged_kpi_buffer_disconnect(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt25ged_kpi_buffer_disconnectEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt25ged_kpi_buffer_disconnectEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExt> > android::hardware::details::castInterface<vendor::mediatek::hardware::gpu::V1_0::IGraphicExt, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3gpu4V1_011IGraphicExtENS_4hidl4base4V1_05IBaseENS7_14BpHwGraphicExtEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3gpu4V1_011IGraphicExtENS_4hidl4base4V1_05IBaseENS7_14BpHwGraphicExtEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_ged_destroy(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt17_hidl_ged_destroyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt17_hidl_ged_destroyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::castFrom(android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BsGraphicExtCallback::BsGraphicExtCallback(android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_020BsGraphicExtCallbackC2EN7android2spINS3_19IGraphicExtCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_020BsGraphicExtCallbackC2EN7android2spINS3_19IGraphicExtCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback>-in-vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallbackE0_N7android8hardware11BpInterfaceINS3_19IGraphicExtCallbackEEE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::gpu::V1_0::BsGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3gpu4V1_020BsGraphicExtCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_ged_kpi_queue_buffer_tag(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt30_hidl_ged_kpi_queue_buffer_tagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt30_hidl_ged_kpi_queue_buffer_tagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback-in-vendor::mediatek::hardware::gpu::V1_0::BsGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_020BsGraphicExtCallbackE0_NS3_19IGraphicExtCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::gpu::V1_0::IGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_011IGraphicExtE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BsGraphicExtCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_020BsGraphicExtCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_020BsGraphicExtCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_gralloc_extra_perform(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_handle const&, vendor::mediatek::hardware::gpu::V1_0::GRALLOC_EXTRA_ATTRIBUTE_PERFORM, android::hardware::hidl_handle const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt27_hidl_gralloc_extra_performEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_handleENS3_31GRALLOC_EXTRA_ATTRIBUTE_PERFORMESE_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt27_hidl_gralloc_extra_performEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_handleENS3_31GRALLOC_EXTRA_ATTRIBUTE_PERFORMESE_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::BnHwGraphicExt(android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExt> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtC1ERKN7android2spINS3_11IGraphicExtEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtC1ERKN7android2spINS3_11IGraphicExtEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::~BnHwGraphicExt() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExtE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback::~BnHwGraphicExtCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::BpHwGraphicExtCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallbackENS_4hidl4base4V1_05IBaseENS7_22BpHwGraphicExtCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallbackENS_4hidl4base4V1_05IBaseENS7_22BpHwGraphicExtCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback10descriptorE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExtE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_ged_vsync_calibration(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt27_hidl_ged_vsync_calibrationEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt27_hidl_ged_vsync_calibrationEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::BnHwGraphicExt(android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExt> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtC2ERKN7android2spINS3_11IGraphicExtEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtC2ERKN7android2spINS3_11IGraphicExtEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_ged_kpi_dequeue_buffer_tag(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long long, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt32_hidl_ged_kpi_dequeue_buffer_tagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEyij(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt32_hidl_ged_kpi_dequeue_buffer_tagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEyij() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::gralloc_extra_perform(android::hardware::hidl_handle const&, vendor::mediatek::hardware::gpu::V1_0::GRALLOC_EXTRA_ATTRIBUTE_PERFORM, android::hardware::hidl_handle const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt21gralloc_extra_performERKN7android8hardware11hidl_handleENS3_31GRALLOC_EXTRA_ATTRIBUTE_PERFORMES9_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt21gralloc_extra_performERKN7android8hardware11hidl_handleENS3_31GRALLOC_EXTRA_ATTRIBUTE_PERFORMES9_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_ged_kpi_buffer_connect(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long long, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt28_hidl_ged_kpi_buffer_connectEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEyii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt28_hidl_ged_kpi_buffer_connectEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEyii() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_setupSendVsyncOffsetFuncCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt38_hidl_setupSendVsyncOffsetFuncCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt38_hidl_setupSendVsyncOffsetFuncCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_ged_kpi_create(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt20_hidl_ged_kpi_createEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt20_hidl_ged_kpi_createEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEy() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::gpu::V1_0::IGraphicExt-in-vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExtE0_NS3_11IGraphicExtE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::gpu::V1_0::IGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3gpu4V1_011IGraphicExtE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::castFrom(android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExt> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BsGraphicExt::BsGraphicExt(android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExt>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_012BsGraphicExtC2EN7android2spINS3_11IGraphicExtEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_012BsGraphicExtC2EN7android2spINS3_11IGraphicExtEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExtE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback::_hidl_sendVsyncOffsetFunc(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallback25_hidl_sendVsyncOffsetFuncEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallback25_hidl_sendVsyncOffsetFuncEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback-in-vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallbackE0_NS3_19IGraphicExtCallbackE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_ged_kpi_acquire_buffer_tag(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt32_hidl_ged_kpi_acquire_buffer_tagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEyj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt32_hidl_ged_kpi_acquire_buffer_tagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEyj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_gralloc_extra_perform_uint64(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_handle const&, vendor::mediatek::hardware::gpu::V1_0::GRALLOC_EXTRA_ATTRIBUTE_PERFORM, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt34_hidl_gralloc_extra_perform_uint64EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_handleENS3_31GRALLOC_EXTRA_ATTRIBUTE_PERFORMEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt34_hidl_gralloc_extra_perform_uint64EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_handleENS3_31GRALLOC_EXTRA_ATTRIBUTE_PERFORMEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_ged_kpi_dequeue_buffer_tag(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt32_hidl_ged_kpi_dequeue_buffer_tagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt32_hidl_ged_kpi_dequeue_buffer_tagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_gralloc_extra_perform_uint64(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt34_hidl_gralloc_extra_perform_uint64EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt34_hidl_gralloc_extra_perform_uint64EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExtE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback::BnHwGraphicExtCallback(android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackC1ERKN7android2spINS3_19IGraphicExtCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackC1ERKN7android2spINS3_19IGraphicExtCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_gralloc_extra_query(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt25_hidl_gralloc_extra_queryEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt25_hidl_gralloc_extra_queryEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::gralloc_extra_perform_ion_debug(android::hardware::hidl_handle const&, vendor::mediatek::hardware::gpu::V1_0::GRALLOC_EXTRA_ATTRIBUTE_PERFORM, vendor::mediatek::hardware::gpu::V1_0::ge_ion_debug_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt31gralloc_extra_perform_ion_debugERKN7android8hardware11hidl_handleENS3_31GRALLOC_EXTRA_ATTRIBUTE_PERFORMERKNS3_14ge_ion_debug_tE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt31gralloc_extra_perform_ion_debugERKN7android8hardware11hidl_handleENS3_31GRALLOC_EXTRA_ATTRIBUTE_PERFORMERKNS3_14ge_ion_debug_tE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_setupSendVsyncOffsetFuncCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt38_hidl_setupSendVsyncOffsetFuncCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_19IGraphicExtCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt38_hidl_setupSendVsyncOffsetFuncCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_19IGraphicExtCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_ged_create(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::gpu::V1_0::GED_HIDL_ERROR_TAG, vendor::mediatek::hardware::gpu::V1_0::GED_HIDL_HANDLE const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt16_hidl_ged_createEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_18GED_HIDL_ERROR_TAGERKNS3_15GED_HIDL_HANDLEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt16_hidl_ged_createEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_18GED_HIDL_ERROR_TAGERKNS3_15GED_HIDL_HANDLEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_ged_destroy(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::gpu::V1_0::GED_HIDL_HANDLE const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt17_hidl_ged_destroyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_15GED_HIDL_HANDLEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt17_hidl_ged_destroyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_15GED_HIDL_HANDLEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::gpu::V1_0::IGraphicExt-in-vendor::mediatek::hardware::gpu::V1_0::BsGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_012BsGraphicExtE0_NS3_11IGraphicExtE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback::~BnHwGraphicExtCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackD1Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::gpu::V1_0::IGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3gpu4V1_011IGraphicExtE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallbackE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_ged_kpi_acquire_buffer_tag(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt32_hidl_ged_kpi_acquire_buffer_tagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt32_hidl_ged_kpi_acquire_buffer_tagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::ged_kpi_create(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt14ged_kpi_createEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt14ged_kpi_createEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::_hidl_sendVsyncOffsetFunc(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback25_hidl_sendVsyncOffsetFuncEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback25_hidl_sendVsyncOffsetFuncEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_ged_kpi_destroy(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt21_hidl_ged_kpi_destroyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt21_hidl_ged_kpi_destroyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::~BnHwGraphicExt() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_ged_kpi_buffer_disconnect(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt31_hidl_ged_kpi_buffer_disconnectEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt31_hidl_ged_kpi_buffer_disconnectEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::gpu::V1_0::ge_ion_debug_t const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022readEmbeddedFromParcelERKNS3_14ge_ion_debug_tERKN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022readEmbeddedFromParcelERKNS3_14ge_ion_debug_tERKN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::BpHwGraphicExt(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExtC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExtC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_ged_is_gpu_need_vsync_calibration(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt39_hidl_ged_is_gpu_need_vsync_calibrationEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt39_hidl_ged_is_gpu_need_vsync_calibrationEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::ged_kpi_buffer_connect(unsigned long long, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt22ged_kpi_buffer_connectEyii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt22ged_kpi_buffer_connectEyii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::ged_kpi_dequeue_buffer_tag(unsigned long long, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt26ged_kpi_dequeue_buffer_tagEyij(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt26ged_kpi_dequeue_buffer_tagEyij() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_ged_kpi_destroy(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt21_hidl_ged_kpi_destroyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt21_hidl_ged_kpi_destroyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_gralloc_extra_query(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_handle const&, vendor::mediatek::hardware::gpu::V1_0::GRALLOC_EXTRA_ATTRIBUTE_QUERY, std::__1::function<void (int, android::hardware::hidl_handle const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt25_hidl_gralloc_extra_queryEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_handleENS3_29GRALLOC_EXTRA_ATTRIBUTE_QUERYENSt3__18functionIFviSE_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt25_hidl_gralloc_extra_queryEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_handleENS3_29GRALLOC_EXTRA_ATTRIBUTE_QUERYENSt3__18functionIFviSE_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::ged_is_gpu_need_vsync_calibration(std::__1::function<void (vendor::mediatek::hardware::gpu::V1_0::GED_HIDL_ERROR_TAG, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt33ged_is_gpu_need_vsync_calibrationENSt3__18functionIFvNS3_18GED_HIDL_ERROR_TAGEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt33ged_is_gpu_need_vsync_calibrationENSt3__18functionIFvNS3_18GED_HIDL_ERROR_TAGEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback::~BnHwGraphicExtCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback::~BnHwGraphicExtCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_gralloc_extra_perform(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt27_hidl_gralloc_extra_performEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt27_hidl_gralloc_extra_performEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_ged_vsync_calibration(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::gpu::V1_0::GED_HIDL_HANDLE const&, int, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt27_hidl_ged_vsync_calibrationEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_15GED_HIDL_HANDLEEiy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt27_hidl_ged_vsync_calibrationEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_15GED_HIDL_HANDLEEiy() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::_hidl_ged_create(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt16_hidl_ged_createEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt16_hidl_ged_createEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::~BnHwGraphicExt() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BsGraphicExt::BsGraphicExt(android::sp<vendor::mediatek::hardware::gpu::V1_0::IGraphicExt>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_012BsGraphicExtC1EN7android2spINS3_11IGraphicExtEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_012BsGraphicExtC1EN7android2spINS3_11IGraphicExtEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExt::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_011IGraphicExt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BsGraphicExt::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_012BsGraphicExt13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_012BsGraphicExt13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::~BnHwGraphicExt() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExtCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_022BpHwGraphicExtCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExtCallback::~BnHwGraphicExtCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware3gpu4V1_022BnHwGraphicExtCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExt4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::ged_create(std::__1::function<void (vendor::mediatek::hardware::gpu::V1_0::GED_HIDL_ERROR_TAG, vendor::mediatek::hardware::gpu::V1_0::GED_HIDL_HANDLE const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt10ged_createENSt3__18functionIFvNS3_18GED_HIDL_ERROR_TAGERKNS3_15GED_HIDL_HANDLEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt10ged_createENSt3__18functionIFvNS3_18GED_HIDL_ERROR_TAGERKNS3_15GED_HIDL_HANDLEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::ged_kpi_destroy(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt15ged_kpi_destroyEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt15ged_kpi_destroyEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::BpHwGraphicExt::_hidl_ged_kpi_buffer_disconnect(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt31_hidl_ged_kpi_buffer_disconnectEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_014BpHwGraphicExt31_hidl_ged_kpi_buffer_disconnectEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEy() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::gpu::V1_0::BnHwGraphicExt::~BnHwGraphicExt() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware3gpu4V1_014BnHwGraphicExtD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::gpu::V1_0::IGraphicExtCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3gpu4V1_019IGraphicExtCallback4pingEv() called");
    return 0;
}
