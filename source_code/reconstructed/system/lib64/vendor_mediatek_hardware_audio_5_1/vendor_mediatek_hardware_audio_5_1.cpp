/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.audio@5.1.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_audio_5_1"

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
#include "vendor_mediatek_hardware_audio_5_1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::openOutputStream(int, android::hardware::audio::common::V5_0::DeviceAddress const&, android::hardware::audio::common::V5_0::AudioConfig const&, int, android::hardware::audio::common::V5_0::SourceMetadata const&, std::__1::function<void (android::hardware::audio::V5_0::Result, android::sp<android::hardware::audio::V5_0::IStreamOut> const&, android::hardware::audio::common::V5_0::AudioConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice16openOutputStreamEiRKN7android8hardware5audio6common4V5_013DeviceAddressERKNS9_11AudioConfigEiRKNS9_14SourceMetadataENSt3__18functionIFvNS7_4V5_06ResultERKNS5_2spINSL_10IStreamOutEEESF_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice16openOutputStreamEiRKN7android8hardware5audio6common4V5_013DeviceAddressERKNS9_11AudioConfigEiRKNS9_14SourceMetadataENSt3__18functionIFvNS7_4V5_06ResultERKNS5_2spINSL_10IStreamOutEEESF_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice::~BnHwMTKPrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceD1Ev() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::audio::V5_0::IStreamOut> android::hardware::details::wrapPassthrough<android::hardware::audio::V5_0::IStreamOut, void>(android::sp<android::hardware::audio::V5_0::IStreamOut>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughINS0_5audio4V5_010IStreamOutEvEENS_2spIT_EES8_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughINS0_5audio4V5_010IStreamOutEvEENS_2spIT_EES8_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback::~BnHwMTKPrimaryDeviceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback::~BnHwMTKPrimaryDeviceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackD2Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback, vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallbackENS7_25IMTKPrimaryDeviceCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallbackENS7_25IMTKPrimaryDeviceCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback::BpHwAudioParameterChangedCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::getMasterVolume(std::__1::function<void (android::hardware::audio::V5_0::Result, float)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice15getMasterVolumeENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEfEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice15getMasterVolumeENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEfEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::releaseAudioPatch(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice17releaseAudioPatchEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice17releaseAudioPatchEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::getBtScoNrecEnabled(std::__1::function<void (android::hardware::audio::V5_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice19getBtScoNrecEnabledENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice19getBtScoNrecEnabledENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEbEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice4pingEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback::~BnHwAudioParameterChangedCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDeviceE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback::~BnHwAudioParameterChangedCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::V5_0::IDevice-in-vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDeviceE0_N7android8hardware5audio4V5_07IDeviceE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDeviceE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallbackE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setMode(android::hardware::audio::common::V5_0::AudioMode) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice7setModeEN7android8hardware5audio6common4V5_09AudioModeE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice7setModeEN7android8hardware5audio6common4V5_09AudioModeE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback>-in-vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallbackE0_N7android8hardware11BpInterfaceINS3_30IAudioParameterChangedCallbackEEE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::clearAudioParameterChangedCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice34clearAudioParameterChangedCallbackEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice34clearAudioParameterChangedCallbackEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback::BpHwMTKPrimaryDeviceCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice::~BnHwMTKPrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::getInputBufferSize(android::hardware::audio::common::V5_0::AudioConfig const&, std::__1::function<void (android::hardware::audio::V5_0::Result, unsigned long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice18getInputBufferSizeERKN7android8hardware5audio6common4V5_011AudioConfigENSt3__18functionIFvNS7_4V5_06ResultEmEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice18getInputBufferSizeERKN7android8hardware5audio6common4V5_011AudioConfigENSt3__18functionIFvNS7_4V5_06ResultEmEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice, vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDeviceENS7_17IMTKPrimaryDeviceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDeviceENS7_17IMTKPrimaryDeviceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BsMTKPrimaryDevice::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_118BsMTKPrimaryDevice13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_118BsMTKPrimaryDevice13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setHacEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice13setHacEnabledEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice13setHacEnabledEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::updateRotation(android::hardware::audio::V5_0::IPrimaryDevice::Rotation) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice14updateRotationEN7android8hardware5audio4V5_014IPrimaryDevice8RotationE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice14updateRotationEN7android8hardware5audio4V5_014IPrimaryDevice8RotationE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setAudioParameterChangedCallback(android::sp<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice32setAudioParameterChangedCallbackERKN7android2spINS3_30IAudioParameterChangedCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice32setAudioParameterChangedCallbackERKN7android2spINS3_30IAudioParameterChangedCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback::_hidl_setParametersCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::SetParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback27_hidl_setParametersCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_25IMTKPrimaryDeviceCallback13SetParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback27_hidl_setParametersCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_25IMTKPrimaryDeviceCallback13SetParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BsMTKPrimaryDeviceCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_126BsMTKPrimaryDeviceCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_126BsMTKPrimaryDeviceCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback::BnHwMTKPrimaryDeviceCallback(android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackC1ERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackC1ERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback4pingEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback, void>(android::sp<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallbackEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallbackEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback::_hidl_setParametersCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallback27_hidl_setParametersCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallback27_hidl_setParametersCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice::_hidl_setAudioParameterChangedCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDevice38_hidl_setAudioParameterChangedCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDevice38_hidl_setAudioParameterChangedCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice::_hidl_clearAudioParameterChangedCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDevice40_hidl_clearAudioParameterChangedCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDevice40_hidl_clearAudioParameterChangedCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::getMicrophones(std::__1::function<void (android::hardware::audio::V5_0::Result, android::hardware::hidl_vec<android::hardware::audio::V5_0::MicrophoneInfo> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice14getMicrophonesENSt3__18functionIFvN7android8hardware5audio4V5_06ResultERKNS8_8hidl_vecINSA_14MicrophoneInfoEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice14getMicrophonesENSt3__18functionIFvN7android8hardware5audio4V5_06ResultERKNS8_8hidl_vecINSA_14MicrophoneInfoEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setBtScoWidebandEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice23setBtScoWidebandEnabledEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice23setBtScoWidebandEnabledEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setMasterVolume(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice15setMasterVolumeEf(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice15setMasterVolumeEf() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setParameters(android::hardware::hidl_vec<android::hardware::audio::V5_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V5_0::ParameterValue> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice13setParametersERKN7android8hardware8hidl_vecINS6_5audio4V5_014ParameterValueEEESD_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice13setParametersERKN7android8hardware8hidl_vecINS6_5audio4V5_014ParameterValueEEESD_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::getTtyMode(std::__1::function<void (android::hardware::audio::V5_0::Result, android::hardware::audio::V5_0::IPrimaryDevice::TtyMode)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice10getTtyModeENSt3__18functionIFvN7android8hardware5audio4V5_06ResultENSA_14IPrimaryDevice7TtyModeEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice10getTtyModeENSt3__18functionIFvN7android8hardware5audio4V5_06ResultENSA_14IPrimaryDevice7TtyModeEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallbackE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::getMicMute(std::__1::function<void (android::hardware::audio::V5_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice10getMicMuteENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice10getMicMuteENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEbEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice::_hidl_setupParametersCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDevice29_hidl_setupParametersCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDevice29_hidl_setupParametersCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::createAudioPatch(android::hardware::hidl_vec<android::hardware::audio::common::V5_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V5_0::AudioPortConfig> const&, std::__1::function<void (android::hardware::audio::V5_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice16createAudioPatchERKN7android8hardware8hidl_vecINS6_5audio6common4V5_015AudioPortConfigEEESE_NSt3__18functionIFvNS8_4V5_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice16createAudioPatchERKN7android8hardware8hidl_vecINS6_5audio6common4V5_015AudioPortConfigEEESE_NSt3__18functionIFvNS8_4V5_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setBtScoHeadsetDebugName(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice24setBtScoHeadsetDebugNameERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice24setBtScoHeadsetDebugNameERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::_hidl_setAudioParameterChangedCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice38_hidl_setAudioParameterChangedCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_30IAudioParameterChangedCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice38_hidl_setAudioParameterChangedCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_30IAudioParameterChangedCallbackEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback10descriptorE = NULL;

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::getMasterMute(std::__1::function<void (android::hardware::audio::V5_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice13getMasterMuteENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice13getMasterMuteENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEbEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback::~BnHwMTKPrimaryDeviceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDeviceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDeviceE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback> android::hardware::fromBinder<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback, vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback, vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallbackENS6_28BpHwMTKPrimaryDeviceCallbackENS6_28BnHwMTKPrimaryDeviceCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallbackENS6_28BpHwMTKPrimaryDeviceCallbackENS6_28BnHwMTKPrimaryDeviceCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDevice10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDevice10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDeviceE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BsMTKPrimaryDevice::BsMTKPrimaryDevice(android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_118BsMTKPrimaryDeviceC2EN7android2spINS3_17IMTKPrimaryDeviceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_118BsMTKPrimaryDeviceC2EN7android2spINS3_17IMTKPrimaryDeviceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setBtHfpEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice15setBtHfpEnabledEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice15setBtHfpEnabledEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallbackENS_4hidl4base4V1_05IBaseENS7_28BpHwMTKPrimaryDeviceCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallbackENS_4hidl4base4V1_05IBaseENS7_28BpHwMTKPrimaryDeviceCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback::~BnHwAudioParameterChangedCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setVoiceVolume(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice14setVoiceVolumeEf(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice14setVoiceVolumeEf() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::BpHwMTKPrimaryDevice(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDeviceC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDeviceC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::audio::V5_1::BsMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5audio4V5_118BsMTKPrimaryDeviceE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallbackE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback::setParametersCallback(vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::SetParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback21setParametersCallbackERKNS3_25IMTKPrimaryDeviceCallback13SetParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback21setParametersCallbackERKNS3_25IMTKPrimaryDeviceCallback13SetParametersE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback::~BnHwMTKPrimaryDeviceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BsAudioParameterChangedCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_131BsAudioParameterChangedCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_131BsAudioParameterChangedCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback::BnHwAudioParameterChangedCallback(android::sp<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackC2ERKN7android2spINS3_30IAudioParameterChangedCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackC2ERKN7android2spINS3_30IAudioParameterChangedCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::castFrom(android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback>-in-vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallbackE0_N7android8hardware11BpInterfaceINS3_25IMTKPrimaryDeviceCallbackEEE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback::BnHwAudioParameterChangedCallback(android::sp<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackC1ERKN7android2spINS3_30IAudioParameterChangedCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackC1ERKN7android2spINS3_30IAudioParameterChangedCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::castFrom(android::sp<android::hardware::audio::V5_0::IPrimaryDevice> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice8castFromERKN7android2spINS5_8hardware5audio4V5_014IPrimaryDeviceEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice8castFromERKN7android2spINS5_8hardware5audio4V5_014IPrimaryDeviceEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::getBtHfpEnabled(std::__1::function<void (android::hardware::audio::V5_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice15getBtHfpEnabledENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice15getBtHfpEnabledENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEbEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice::~BnHwMTKPrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setScreenState(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice14setScreenStateEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice14setScreenStateEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice::BnHwMTKPrimaryDevice(android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceC2ERKN7android2spINS3_17IMTKPrimaryDeviceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceC2ERKN7android2spINS3_17IMTKPrimaryDeviceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice::~BnHwMTKPrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice::~BnHwMTKPrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::V5_0::IPrimaryDevice-in-vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDeviceE0_N7android8hardware5audio4V5_014IPrimaryDeviceE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback::~BnHwMTKPrimaryDeviceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback::BpHwAudioParameterChangedCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::getHwAvSync(std::__1::function<void (android::hardware::audio::V5_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice11getHwAvSyncENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice11getHwAvSyncENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::initCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice9initCheckEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice9initCheckEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallbackENS_4hidl4base4V1_05IBaseENS7_33BpHwAudioParameterChangedCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallbackENS_4hidl4base4V1_05IBaseENS7_33BpHwAudioParameterChangedCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback::~BnHwAudioParameterChangedCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::castFrom(android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallbackE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback::~BnHwAudioParameterChangedCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::castFrom(android::sp<android::hardware::audio::V5_0::IDevice> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice8castFromERKN7android2spINS5_8hardware5audio4V5_07IDeviceEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice8castFromERKN7android2spINS5_8hardware5audio4V5_07IDeviceEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BsMTKPrimaryDeviceCallback::BsMTKPrimaryDeviceCallback(android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_126BsMTKPrimaryDeviceCallbackC2EN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_126BsMTKPrimaryDeviceCallbackC2EN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallbackE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback::_hidl_audioParameterChangedCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback35_hidl_audioParameterChangedCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback35_hidl_audioParameterChangedCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback-in-vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallbackE0_NS3_30IAudioParameterChangedCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::supportsAudioPatches() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice20supportsAudioPatchesEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice20supportsAudioPatchesEv() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice> > android::hardware::details::castInterface<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice, android::hardware::audio::V5_0::IDevice, vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice>(android::sp<android::hardware::audio::V5_0::IDevice>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDeviceENS0_5audio4V5_07IDeviceENS7_20BpHwMTKPrimaryDeviceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDeviceENS0_5audio4V5_07IDeviceENS7_20BpHwMTKPrimaryDeviceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice>-in-vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDeviceE0_N7android8hardware11BpInterfaceINS3_17IMTKPrimaryDeviceEEE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice::~BnHwMTKPrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback::BpHwMTKPrimaryDeviceCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackE = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::castFrom(android::sp<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::getHacEnabled(std::__1::function<void (android::hardware::audio::V5_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice13getHacEnabledENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice13getHacEnabledENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEbEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice> > android::hardware::details::castInterface<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDeviceENS_4hidl4base4V1_05IBaseENS7_20BpHwMTKPrimaryDeviceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDeviceENS_4hidl4base4V1_05IBaseENS7_20BpHwMTKPrimaryDeviceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setConnectedState(android::hardware::audio::common::V5_0::DeviceAddress const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice17setConnectedStateERKN7android8hardware5audio6common4V5_013DeviceAddressEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice17setConnectedStateERKN7android8hardware5audio6common4V5_013DeviceAddressEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::V5_0::IDevice-in-vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDeviceE0_N7android8hardware5audio4V5_07IDeviceE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback-in-vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallbackE0_NS3_25IMTKPrimaryDeviceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallback4pingEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback> android::hardware::fromBinder<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback, vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback, vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallbackENS6_33BpHwAudioParameterChangedCallbackENS6_33BnHwAudioParameterChangedCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallbackENS6_33BpHwAudioParameterChangedCallbackENS6_33BnHwAudioParameterChangedCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setupParametersCallback(android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice23setupParametersCallbackERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice23setupParametersCallbackERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice> > android::hardware::details::castInterface<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice, android::hardware::audio::V5_0::IPrimaryDevice, vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice>(android::sp<android::hardware::audio::V5_0::IPrimaryDevice>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDeviceENS0_5audio4V5_014IPrimaryDeviceENS7_20BpHwMTKPrimaryDeviceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDeviceENS0_5audio4V5_014IPrimaryDeviceENS7_20BpHwMTKPrimaryDeviceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BsMTKPrimaryDeviceCallback::BsMTKPrimaryDeviceCallback(android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_126BsMTKPrimaryDeviceCallbackC1EN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_126BsMTKPrimaryDeviceCallbackC1EN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback::_hidl_audioParameterChangedCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallback35_hidl_audioParameterChangedCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallback35_hidl_audioParameterChangedCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback-in-vendor::mediatek::hardware::audio::V5_1::BsAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_131BsAudioParameterChangedCallbackE0_NS3_30IAudioParameterChangedCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setMasterMute(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice13setMasterMuteEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice13setMasterMuteEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::openInputStream(int, android::hardware::audio::common::V5_0::DeviceAddress const&, android::hardware::audio::common::V5_0::AudioConfig const&, int, android::hardware::audio::common::V5_0::SinkMetadata const&, std::__1::function<void (android::hardware::audio::V5_0::Result, android::sp<android::hardware::audio::V5_0::IStreamIn> const&, android::hardware::audio::common::V5_0::AudioConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice15openInputStreamEiRKN7android8hardware5audio6common4V5_013DeviceAddressERKNS9_11AudioConfigEiRKNS9_12SinkMetadataENSt3__18functionIFvNS7_4V5_06ResultERKNS5_2spINSL_9IStreamInEEESF_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice15openInputStreamEiRKN7android8hardware5audio6common4V5_013DeviceAddressERKNS9_11AudioConfigEiRKNS9_12SinkMetadataENSt3__18functionIFvNS7_4V5_06ResultERKNS5_2spINSL_9IStreamInEEESF_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setBtHfpSampleRate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice18setBtHfpSampleRateEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice18setBtHfpSampleRateEj() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback, void>(android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallbackEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallbackEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BsAudioParameterChangedCallback::BsAudioParameterChangedCallback(android::sp<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_131BsAudioParameterChangedCallbackC1EN7android2spINS3_30IAudioParameterChangedCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_131BsAudioParameterChangedCallbackC1EN7android2spINS3_30IAudioParameterChangedCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDevice4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDevice4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice-in-vendor::mediatek::hardware::audio::V5_1::BsMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_118BsMTKPrimaryDeviceE0_NS3_17IMTKPrimaryDeviceE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDevice24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::_hidl_clearAudioParameterChangedCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice40_hidl_clearAudioParameterChangedCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice40_hidl_clearAudioParameterChangedCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setTtyMode(android::hardware::audio::V5_0::IPrimaryDevice::TtyMode) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice10setTtyModeEN7android8hardware5audio4V5_014IPrimaryDevice7TtyModeE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice10setTtyModeEN7android8hardware5audio4V5_014IPrimaryDevice7TtyModeE() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::audio::V5_0::IStreamIn> android::hardware::details::wrapPassthrough<android::hardware::audio::V5_0::IStreamIn, void>(android::sp<android::hardware::audio::V5_0::IStreamIn>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughINS0_5audio4V5_09IStreamInEvEENS_2spIT_EES8_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughINS0_5audio4V5_09IStreamInEvEENS_2spIT_EES8_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback-in-vendor::mediatek::hardware::audio::V5_1::BsMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_126BsMTKPrimaryDeviceCallbackE0_NS3_25IMTKPrimaryDeviceCallbackE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback::~BnHwMTKPrimaryDeviceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::getBtScoWidebandEnabled(std::__1::function<void (android::hardware::audio::V5_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice23getBtScoWidebandEnabledENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice23getBtScoWidebandEnabledENSt3__18functionIFvN7android8hardware5audio4V5_06ResultEbEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::_hidl_setupParametersCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice29_hidl_setupParametersCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_25IMTKPrimaryDeviceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice29_hidl_setupParametersCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_25IMTKPrimaryDeviceCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice-in-vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDeviceE0_NS3_17IMTKPrimaryDeviceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback::audioParameterChangedCallback(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback29audioParameterChangedCallbackERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallback29audioParameterChangedCallbackERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDeviceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::audio::V5_1::BpHwAudioParameterChangedCallback, vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallbackENS7_30IAudioParameterChangedCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5audio4V5_133BpHwAudioParameterChangedCallbackENS7_30IAudioParameterChangedCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BsMTKPrimaryDevice::BsMTKPrimaryDevice(android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_118BsMTKPrimaryDeviceC1EN7android2spINS3_17IMTKPrimaryDeviceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_118BsMTKPrimaryDeviceC1EN7android2spINS3_17IMTKPrimaryDeviceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_117IMTKPrimaryDeviceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback::BnHwMTKPrimaryDeviceCallback(android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackC2ERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackC2ERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setBtHfpVolume(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice14setBtHfpVolumeEf(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice14setBtHfpVolumeEf() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setAudioPortConfig(android::hardware::audio::common::V5_0::AudioPortConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice18setAudioPortConfigERKN7android8hardware5audio6common4V5_015AudioPortConfigE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice18setAudioPortConfigERKN7android8hardware5audio6common4V5_015AudioPortConfigE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback::~BnHwAudioParameterChangedCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback::~BnHwAudioParameterChangedCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackD2Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::audio::V5_1::BsAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5audio4V5_131BsAudioParameterChangedCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setBtScoNrecEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice19setBtScoNrecEnabledEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice19setBtScoNrecEnabledEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::BpHwMTKPrimaryDevice(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDeviceC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDeviceC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_130IAudioParameterChangedCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::getAudioPort(android::hardware::audio::common::V5_0::AudioPort const&, std::__1::function<void (android::hardware::audio::V5_0::Result, android::hardware::audio::common::V5_0::AudioPort const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice12getAudioPortERKN7android8hardware5audio6common4V5_09AudioPortENSt3__18functionIFvNS7_4V5_06ResultESC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice12getAudioPortERKN7android8hardware5audio6common4V5_09AudioPortENSt3__18functionIFvNS7_4V5_06ResultESC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::audio::V5_1::BsMTKPrimaryDeviceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5audio4V5_126BsMTKPrimaryDeviceCallbackE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::getParameters(android::hardware::hidl_vec<android::hardware::audio::V5_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V5_0::Result, android::hardware::hidl_vec<android::hardware::audio::V5_0::ParameterValue> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice13getParametersERKN7android8hardware8hidl_vecINS6_5audio4V5_014ParameterValueEEERKNS7_INS6_11hidl_stringEEENSt3__18functionIFvNS9_6ResultESD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice13getParametersERKN7android8hardware8hidl_vecINS6_5audio4V5_014ParameterValueEEERKNS7_INS6_11hidl_stringEEENSt3__18functionIFvNS9_6ResultESD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDeviceCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_125IMTKPrimaryDeviceCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDeviceCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BpHwMTKPrimaryDeviceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback::~BnHwMTKPrimaryDeviceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice::BnHwMTKPrimaryDevice(android::sp<vendor::mediatek::hardware::audio::V5_1::IMTKPrimaryDevice> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceC1ERKN7android2spINS3_17IMTKPrimaryDeviceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceC1ERKN7android2spINS3_17IMTKPrimaryDeviceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::V5_0::IPrimaryDevice-in-vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDeviceE0_N7android8hardware5audio4V5_014IPrimaryDeviceE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDeviceE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDevice::~BnHwMTKPrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware5audio4V5_120BnHwMTKPrimaryDeviceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BnHwMTKPrimaryDeviceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_128BnHwMTKPrimaryDeviceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BsAudioParameterChangedCallback::BsAudioParameterChangedCallback(android::sp<vendor::mediatek::hardware::audio::V5_1::IAudioParameterChangedCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_131BsAudioParameterChangedCallbackC2EN7android2spINS3_30IAudioParameterChangedCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_131BsAudioParameterChangedCallbackC2EN7android2spINS3_30IAudioParameterChangedCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::audio::V5_1::BnHwAudioParameterChangedCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V5_133BnHwAudioParameterChangedCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V5_1::BpHwMTKPrimaryDevice::setMicMute(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice10setMicMuteEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V5_120BpHwMTKPrimaryDevice10setMicMuteEb() called");
    return 0;
}
