/*
 * Reverse-Engineered Source for: vendor.dolby.hardware.dms@2.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_dolby_hardware_dms_2_0_impl"

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
#include "vendor_dolby_hardware_dms_2_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::DmsCallbacks::onDapParamUpdate(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacks16onDapParamUpdateERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacks16onDapParamUpdateERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::dolby::hardware::dms::V2_0::IDmsCallbacks-in-vendor::dolby::hardware::dms::V2_0::implementation::DmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacksE0_NS3_13IDmsCallbacksE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms10onFirstRefEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms10onFirstRefEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getActiveDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15getActiveDeviceEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15getActiveDeviceEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getStoredParams(bool, int, std::__1::function<void (bool, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15getStoredParamsEbiNSt3__18functionIFvbRKN7android8hardware8hidl_vecIiEERKNSA_INS3_34KeyValue_AudioDevice_DapParamCacheEEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15getStoredParamsEbiNSt3__18functionIFvbRKN7android8hardware8hidl_vecIiEERKNSA_INS3_34KeyValue_AudioDevice_DapParamCacheEEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::unregisterClient(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms16unregisterClientERKN7android2spINS3_13IDmsCallbacksEEEij(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms16unregisterClientERKN7android2spINS3_13IDmsCallbacksEEEij() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::registerVqeCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms19registerVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms19registerVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::unregisterDecCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms21unregisterDecCallbackERKN7android2spINS3_13IDecCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms21unregisterDecCallbackERKN7android2spINS3_13IDecCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::setSelectedTuningDevice(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms23setSelectedTuningDeviceEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms23setSelectedTuningDeviceEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::~DecCallbackDeathRecipient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD1Ev(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD1Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getIntParam(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11getIntParamEj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11getIntParamEj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::setActiveDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15setActiveDeviceEj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15setActiveDeviceEj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getAvailableTuningDevicesLen(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms28getAvailableTuningDevicesLenEi(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms28getAvailableTuningDevicesLenEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<vendor::dolby::hardware::dms::V2_0::KeyValue_DapParameterId_ValueCache, std::__1::allocator<vendor::dolby::hardware::dms::V2_0::KeyValue_DapParameterId_ValueCache> >::__emplace_back_slow_path<vendor::dolby::hardware::dms::V2_0::KeyValue_DapParameterId_ValueCache&>(vendor::dolby::hardware::dms::V2_0::KeyValue_DapParameterId_ValueCache&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6vendor5dolby8hardware3dms4V2_034KeyValue_DapParameterId_ValueCacheENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN6vendor5dolby8hardware3dms4V2_034KeyValue_DapParameterId_ValueCacheENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::dolby::hardware::dms::V2_0::implementation::Dms */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor5dolby8hardware3dms4V2_014implementation3DmsE = NULL;

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::implementation::Dms */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_014implementation3DmsE = NULL;

/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::~DecCallbackDeathRecipient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::implementation::Dms::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N6vendor5dolby8hardware3dms4V2_014implementation3Dms10onFirstRefEv(void) {
    ALOGD("_ZTv0_n32_N6vendor5dolby8hardware3dms4V2_014implementation3Dms10onFirstRefEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::unregisterVqeCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms21unregisterVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms21unregisterVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getDapParam(android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11getDapParamERKN7android8hardware8hidl_vecIhEENSt3__18functionIFviSB_EEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11getDapParamERKN7android8hardware8hidl_vecIhEENSt3__18functionIFviSB_EEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::setIntParam(unsigned int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11setIntParamEjl(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11setIntParamEjl() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getChannelCount() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15getChannelCountEv(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15getChannelCountEv() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getSelectedTuningDevice(int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms23getSelectedTuningDeviceEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms23getSelectedTuningDeviceEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::~DecCallbackDeathRecipient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD0Ev(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::setDapParam(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11setDapParamERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11setDapParamERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::DecCallbackDeathRecipient(android::sp<vendor::dolby::hardware::dms::V2_0::implementation::Dms>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientC1EN7android2spIS5_EE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientC1EN7android2spIS5_EE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::~DecCallbackDeathRecipient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD0Ev() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipient11serviceDiedEmRKN7android2wpINS7_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipient11serviceDiedEmRKN7android2wpINS7_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: VTT for vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::implementation::DmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacksE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::setIntParams(android::hardware::hidl_vec<unsigned int> const&, android::hardware::hidl_vec<long> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms12setIntParamsERKN7android8hardware8hidl_vecIjEERKNS8_IlEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms12setIntParamsERKN7android8hardware8hidl_vecIjEERKNS8_IlEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::registerClient(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms14registerClientERKN7android2spINS3_13IDmsCallbacksEEEij(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms14registerClientERKN7android2spINS3_13IDmsCallbacksEEEij() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::registerDecCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms19registerDecCallbackERKN7android2spINS3_13IDecCallbacksEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms19registerDecCallbackERKN7android2spINS3_13IDecCallbacksEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientE0_N7android8hardware20hidl_death_recipientE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::setChannelCount(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15setChannelCountEj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15setChannelCountEj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::DecCallbackDeathRecipient(android::sp<vendor::dolby::hardware::dms::V2_0::implementation::Dms>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientC2EN7android2spIS5_EE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientC2EN7android2spIS5_EE() called");
    return 0;
}

/* Demangled: void std::__1::vector<vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache, std::__1::allocator<vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache> >::__emplace_back_slow_path<vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache&>(vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6vendor5dolby8hardware3dms4V2_034KeyValue_AudioDevice_DapParamCacheENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN6vendor5dolby8hardware3dms4V2_034KeyValue_AudioDevice_DapParamCacheENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::dolby::hardware::dms::V2_0::implementation::DmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getProfileName(int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms14getProfileNameEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms14getProfileNameEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getAvailableTuningDevices(int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25getAvailableTuningDevicesEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25getAvailableTuningDevicesEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::dolby::hardware::dms::V2_0::IDms-in-vendor::dolby::hardware::dms::V2_0::implementation::Dms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_014implementation3DmsE0_NS3_4IDmsE = NULL;

/* Exported Object: vtable for vendor::dolby::hardware::dms::V2_0::implementation::DmsCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacksE = NULL;

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getIntParams(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::hidl_vec<long> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms12getIntParamsERKN7android8hardware8hidl_vecIjEENSt3__18functionIFvRKNS8_IlEEEEE(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms12getIntParamsERKN7android8hardware8hidl_vecIjEENSt3__18functionIFvRKNS8_IlEEEEE() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::notifyAudioTrackChange(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms22notifyAudioTrackChangeEjjjjjjj(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms22notifyAudioTrackChangeEjjjjjjj() called");
    return 0;
}

/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::~DecCallbackDeathRecipient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD2Ev(void) {
    ALOGD("_ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::implementation::Dms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor5dolby8hardware3dms4V2_014implementation3DmsE0_N7android4hidl4base4V1_05IBaseE = NULL;
