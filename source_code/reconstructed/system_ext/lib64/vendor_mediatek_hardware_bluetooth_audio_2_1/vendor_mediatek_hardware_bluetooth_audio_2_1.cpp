/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.bluetooth.audio@2.1.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_bluetooth_audio_2_1"

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
#include "vendor_mediatek_hardware_bluetooth_audio_2_1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider, void>(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderEvEENS_2spIT_EESC_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderEvEENS_2spIT_EESC_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE8_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_union::~hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::ldacConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::~BnHwBluetoothAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::~Capabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::~BnHwBluetoothAudioPort() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::BpHwBluetoothAudioProvidersFactory(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_union::~hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aacConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigERKNS4_13AacParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigERKNS4_13AacParametersE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPortE0_NS4_19IBluetoothAudioPortE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider, vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderENS8_23IBluetoothAudioProviderEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderENS8_23IBluetoothAudioProviderEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aptxCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesERKNS4_14AptxParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesERKNS4_14AptxParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::lhdcCapabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::BnHwBluetoothAudioProvidersFactory(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryC2ERKN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryC2ERKN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesaSEOS6_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesaSEOS6_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE0_N7android8hardware11BpInterfaceINS4_19IBluetoothAudioPortEEE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::~BnHwBluetoothAudioPort() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::pcmConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigEONS4_13PcmParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigEONS4_13PcmParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificaSEOS6_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificaSEOS6_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::BpHwBluetoothAudioPort(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvider::BsBluetoothAudioProvider(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProviderC2EN7android2spINS4_23IBluetoothAudioProviderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProviderC2EN7android2spINS4_23IBluetoothAudioProviderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::AudioCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC2EOS5_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC2EOS5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aacCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesEONS4_13AacParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesEONS4_13AacParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::ldacConfig() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::~BnHwBluetoothAudioProvidersFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::getProviderCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::function<void (android::hardware::hidl_vec<vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory23getProviderCapabilitiesENS4_11SessionTypeENSt3__18functionIFvRKN7android8hardware8hidl_vecINS4_17AudioCapabilitiesEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory23getProviderCapabilitiesENS4_11SessionTypeENSt3__18functionIFvRKN7android8hardware8hidl_vecINS4_17AudioCapabilitiesEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::pcmCapabilities() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::_hidl_updateMetadata(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort20_hidl_updateMetadataEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort20_hidl_updateMetadataEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::~AudioConfiguration() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_union::~hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::_hidl_enterGameMode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider19_hidl_enterGameModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEh(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider19_hidl_enterGameModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEh() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_destructUnion() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration18hidl_destructUnionEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration18hidl_destructUnionEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::lhdcConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigEONS4_14LhdcParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigEONS4_14LhdcParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_union::~hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactoryE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aacCapabilities() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::~BnHwBluetoothAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProviderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::~AudioCapabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesaSERKS5_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesaSERKS5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::~Capabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificaSERKS6_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificaSERKS6_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactoryE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::ldacConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigERKNS4_14LdacParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigERKNS4_14LdacParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvidersFactory::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactory13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactory13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE = NULL;

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::sbcCapabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::lhdcConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigERKNS4_14LhdcParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigERKNS4_14LhdcParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort4pingEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> android::hardware::fromBinder<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort, vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort, vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortENS7_22BpHwBluetoothAudioPortENS7_22BnHwBluetoothAudioPortEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortENS7_22BpHwBluetoothAudioPortENS7_22BnHwBluetoothAudioPortEEENS_2spIT_EERKNSB_INS0_7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE0_NS4_23IBluetoothAudioProviderE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::codecCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesEONS4_17CodecCapabilitiesE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesEONS4_17CodecCapabilitiesE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::codecConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigEONS4_18CodecConfigurationE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigEONS4_18CodecConfigurationE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::AudioConfiguration(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC2ERKS5_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC2ERKS5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_union::hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE0_NS4_19IBluetoothAudioPortE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::_hidl_getPresentationPosition(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, unsigned long, unsigned long, vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort29_hidl_getPresentationPositionEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvNS4_6StatusEmmRKNS4_8TimeSpecEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort29_hidl_getPresentationPositionEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvNS4_6StatusEmmRKNS4_8TimeSpecEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProviderE0_NS4_23IBluetoothAudioProviderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_union::hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesaSERKS6_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesaSERKS6_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::AudioConfiguration(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC2EOS5_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC2EOS5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::_hidl_streamStarted(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider19_hidl_streamStartedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider19_hidl_streamStartedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::~BnHwBluetoothAudioProvidersFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aptxConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigERKNS4_14AptxParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigERKNS4_14AptxParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::_hidl_suspendStream(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort19_hidl_suspendStreamEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort19_hidl_suspendStreamEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> > android::hardware::details::castInterface<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortENS_4hidl4base4V1_05IBaseENS8_22BpHwBluetoothAudioPortEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortENS_4hidl4base4V1_05IBaseENS8_22BpHwBluetoothAudioPortEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort, vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortENS8_19IBluetoothAudioPortEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortENS8_19IBluetoothAudioPortEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::streamSuspended(vendor::mediatek::hardware::bluetooth::audio::V2_1::Status) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15streamSuspendedENS4_6StatusE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15streamSuspendedENS4_6StatusE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::_hidl_getProviderCapabilities(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory29_hidl_getProviderCapabilitiesEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory29_hidl_getProviderCapabilitiesEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE0_NS4_31IBluetoothAudioProvidersFactoryE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aptxConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::_hidl_updateMetadata(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::audio::common::V5_0::SourceMetadata const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort20_hidl_updateMetadataEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_5audio6common4V5_014SourceMetadataE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort20_hidl_updateMetadataEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_5audio6common4V5_014SourceMetadataE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::BpHwBluetoothAudioPort(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::_hidl_enterGameMode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort19_hidl_enterGameModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEh(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort19_hidl_enterGameModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEh() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::_hidl_openProvider(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory18_hidl_openProviderEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_11SessionTypeENSt3__18functionIFvNS4_6StatusERKNS6_2spINS4_23IBluetoothAudioProviderEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory18_hidl_openProviderEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_11SessionTypeENSt3__18functionIFvNS4_6StatusERKNS6_2spINS4_23IBluetoothAudioProviderEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory>-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE0_N7android8hardware11BpInterfaceINS4_31IBluetoothAudioProvidersFactoryEEE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::~BnHwBluetoothAudioPort() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::~BnHwBluetoothAudioProvidersFactory() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_union::~hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aacCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesERKNS4_13AacParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesERKNS4_13AacParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::AudioConfiguration() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::stopStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort10stopStreamEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort10stopStreamEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory> > android::hardware::details::castInterface<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactoryENS_4hidl4base4V1_05IBaseENS8_34BpHwBluetoothAudioProvidersFactoryEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactoryENS_4hidl4base4V1_05IBaseENS8_34BpHwBluetoothAudioProvidersFactoryEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::~AudioCapabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_destructUnion() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities18hidl_destructUnionEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities18hidl_destructUnionEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::_hidl_getPresentationPosition(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort29_hidl_getPresentationPositionEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort29_hidl_getPresentationPositionEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_union::hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::sbcConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aptxConfig() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::_hidl_startStream(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort17_hidl_startStreamEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort17_hidl_startStreamEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvidersFactory::BsBluetoothAudioProvidersFactory(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactoryC1EN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactoryC1EN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::AudioCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC1EOS5_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC1EOS5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::castFrom(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_union::hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::~CodecSpecific() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::pcmConfig() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::BnHwBluetoothAudioPort(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortC1ERKN7android2spINS4_19IBluetoothAudioPortEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortC1ERKN7android2spINS4_19IBluetoothAudioPortEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::_hidl_streamSuspended(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider21_hidl_streamSuspendedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider21_hidl_streamSuspendedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::ldacCapabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::Capabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_union::hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::~BnHwBluetoothAudioProvidersFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::_hidl_startSession(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> const&, vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&, std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider18_hidl_startSessionEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS7_12MQDescriptorIhLNS7_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider18_hidl_startSessionEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS7_12MQDescriptorIhLNS7_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::getDiscriminator() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific16getDiscriminatorEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific16getDiscriminatorEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::Capabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC2EOS6_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC2EOS6_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPortE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::castFrom(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactoryE0_NS4_31IBluetoothAudioProvidersFactoryE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::lhdcCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesERKNS4_14LhdcParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesERKNS4_14LhdcParametersE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::~BnHwBluetoothAudioPort() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::~BnHwBluetoothAudioProvidersFactory() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::pcmCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesEONS4_13PcmParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesEONS4_13PcmParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::BpHwBluetoothAudioProvider(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::~BnHwBluetoothAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::AudioConfiguration() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aacConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::codecCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesERKNS4_17CodecCapabilitiesE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesERKNS4_17CodecCapabilitiesE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::lhdcCapabilities() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::BnHwBluetoothAudioProvidersFactory(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryC1ERKN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryC1ERKN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_union::hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationaSERKS5_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationaSERKS5_() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::BnHwBluetoothAudioProvider(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderC2ERKN7android2spINS4_23IBluetoothAudioProviderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderC2ERKN7android2spINS4_23IBluetoothAudioProviderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::_hidl_endSession(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider16_hidl_endSessionEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider16_hidl_endSessionEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::pcmConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_union::hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::AudioConfiguration(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC1EOS5_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC1EOS5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioPort::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPort13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPort13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::_hidl_streamStarted(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::bluetooth::audio::V2_1::Status) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider19_hidl_streamStartedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_6StatusE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider19_hidl_streamStartedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_6StatusE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::pcmCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesERKNS4_13PcmParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesERKNS4_13PcmParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::~CodecSpecific() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioPort::BsBluetoothAudioPort(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPortC1EN7android2spINS4_19IBluetoothAudioPortEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPortC1EN7android2spINS4_19IBluetoothAudioPortEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::AudioCapabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::ldacCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesEONS4_14LdacParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesEONS4_14LdacParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::Capabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::sbcConfig() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::updateMetadata(android::hardware::audio::common::V5_0::SourceMetadata const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort14updateMetadataERKN7android8hardware5audio6common4V5_014SourceMetadataE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort14updateMetadataERKN7android8hardware5audio6common4V5_014SourceMetadataE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::AudioCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC1ERKS5_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC1ERKS5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aacCapabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::CodecSpecific(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC1ERKS6_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC1ERKS6_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::_hidl_stopStream(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort16_hidl_stopStreamEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort16_hidl_stopStreamEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> android::hardware::fromBinder<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider, vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider, vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderENS7_26BpHwBluetoothAudioProviderENS7_26BnHwBluetoothAudioProviderEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderENS7_26BpHwBluetoothAudioProviderENS7_26BnHwBluetoothAudioProviderEEENS_2spIT_EERKNSB_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::_hidl_startStream(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort17_hidl_startStreamEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort17_hidl_startStreamEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::streamStarted(vendor::mediatek::hardware::bluetooth::audio::V2_1::Status) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider13streamStartedENS4_6StatusE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider13streamStartedENS4_6StatusE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory, vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryENS8_31IBluetoothAudioProvidersFactoryEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryENS8_31IBluetoothAudioProvidersFactoryEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::sbcCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesERKNS4_13SbcParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesERKNS4_13SbcParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::CodecSpecific(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC2EOS6_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC2EOS6_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE0_N7android8hardware11BpInterfaceINS4_23IBluetoothAudioProviderEEE = NULL;

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aptxCapabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::Capabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC1ERKS6_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC1ERKS6_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::_hidl_streamSuspended(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::bluetooth::audio::V2_1::Status) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider21_hidl_streamSuspendedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_6StatusE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider21_hidl_streamSuspendedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_6StatusE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::_hidl_endSession(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider16_hidl_endSessionEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider16_hidl_endSessionEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::~BnHwBluetoothAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aacConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigEONS4_13AacParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigEONS4_13AacParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::getDiscriminator() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities16getDiscriminatorEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities16getDiscriminatorEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesaSEOS5_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesaSEOS5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::sbcConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigEONS4_13SbcParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigEONS4_13SbcParametersE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::~BnHwBluetoothAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::~BnHwBluetoothAudioProvidersFactory() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::~BnHwBluetoothAudioPort() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::startStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort11startStreamEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort11startStreamEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvider::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProvider13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProvider13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::BpHwBluetoothAudioProvider(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::_hidl_getProviderCapabilities(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::function<void (android::hardware::hidl_vec<vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory29_hidl_getProviderCapabilitiesEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_11SessionTypeENSt3__18functionIFvRKNS7_8hidl_vecINS4_17AudioCapabilitiesEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory29_hidl_getProviderCapabilitiesEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_11SessionTypeENSt3__18functionIFvRKNS7_8hidl_vecINS4_17AudioCapabilitiesEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_union::hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aacConfig() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::lhdcCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesEONS4_14LhdcParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesEONS4_14LhdcParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aptxConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigEONS4_14AptxParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigEONS4_14AptxParametersE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::AudioCapabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::codecConfig() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigEv() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> > android::hardware::details::castInterface<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderENS_4hidl4base4V1_05IBaseENS8_26BpHwBluetoothAudioProviderEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderENS_4hidl4base4V1_05IBaseENS8_26BpHwBluetoothAudioProviderEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::castFrom(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::Capabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC1EOS6_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC1EOS6_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::sbcConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigERKNS4_13SbcParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigERKNS4_13SbcParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::_hidl_startSession(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider18_hidl_startSessionEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider18_hidl_startSessionEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvider::BsBluetoothAudioProvider(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProviderC1EN7android2spINS4_23IBluetoothAudioProviderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProviderC1EN7android2spINS4_23IBluetoothAudioProviderEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort, void>(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortEvEENS_2spIT_EESC_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortEvEENS_2spIT_EESC_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::codecConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigERKNS4_18CodecConfigurationE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigERKNS4_18CodecConfigurationE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::CodecSpecific() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::BnHwBluetoothAudioProvider(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderC1ERKN7android2spINS4_23IBluetoothAudioProviderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderC1ERKN7android2spINS4_23IBluetoothAudioProviderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::lhdcConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::getDiscriminator() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration16getDiscriminatorEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration16getDiscriminatorEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::_hidl_suspendStream(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort19_hidl_suspendStreamEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort19_hidl_suspendStreamEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::BnHwBluetoothAudioPort(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortC2ERKN7android2spINS4_19IBluetoothAudioPortEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortC2ERKN7android2spINS4_19IBluetoothAudioPortEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::ldacCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesERKNS4_14LdacParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesERKNS4_14LdacParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::suspendStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort13suspendStreamEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort13suspendStreamEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::endSession() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider10endSessionEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider10endSessionEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::codecCapabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::enterGameMode(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort13enterGameModeEh(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort13enterGameModeEh() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::BpHwBluetoothAudioProvidersFactory(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactoryE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::codecConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationaSEOS5_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationaSEOS5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_union::~hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::codecCapabilities() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::getPresentationPosition(std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, unsigned long, unsigned long, vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort23getPresentationPositionENSt3__18functionIFvNS4_6StatusEmmRKNS4_8TimeSpecEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort23getPresentationPositionENSt3__18functionIFvNS4_6StatusEmmRKNS4_8TimeSpecEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::~BnHwBluetoothAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::~BnHwBluetoothAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::~BnHwBluetoothAudioProvidersFactory() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_destructUnion() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities18hidl_destructUnionEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities18hidl_destructUnionEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::lhdcConfig() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::_hidl_enterGameMode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort19_hidl_enterGameModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort19_hidl_enterGameModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::~BnHwBluetoothAudioPort() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_union::~hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::ldacCapabilities() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::pcmConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigERKNS4_13PcmParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigERKNS4_13PcmParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::enterGameMode(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider13enterGameModeEh(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider13enterGameModeEh() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::AudioCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC2ERKS5_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC2ERKS5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::CodecSpecific(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC2ERKS6_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC2ERKS6_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::startSession(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> const&, vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&, std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider12startSessionERKN7android2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS6_8hardware12MQDescriptorIhLNSI_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider12startSessionERKN7android2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS6_8hardware12MQDescriptorIhLNSI_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::pcmCapabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::CodecSpecific(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC1EOS6_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC1EOS6_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::~BnHwBluetoothAudioPort() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::AudioConfiguration(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC1ERKS5_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC1ERKS5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::ldacConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigEONS4_14LdacParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigEONS4_14LdacParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::_hidl_stopStream(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort16_hidl_stopStreamEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort16_hidl_stopStreamEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::sbcCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesEONS4_13SbcParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesEONS4_13SbcParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aptxCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesEONS4_14AptxParametersE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesEONS4_14AptxParametersE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_destructUnion() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific18hidl_destructUnionEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific18hidl_destructUnionEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::CodecSpecific() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::sbcCapabilities() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvidersFactory::BsBluetoothAudioProvidersFactory(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactoryC2EN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactoryC2EN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::Capabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC2ERKS6_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC2ERKS6_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::~AudioConfiguration() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioPort::BsBluetoothAudioPort(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPortC2EN7android2spINS4_19IBluetoothAudioPortEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPortC2EN7android2spINS4_19IBluetoothAudioPortEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::openProvider(vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory12openProviderENS4_11SessionTypeENSt3__18functionIFvNS4_6StatusERKN7android2spINS4_23IBluetoothAudioProviderEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory12openProviderENS4_11SessionTypeENSt3__18functionIFvNS4_6StatusERKN7android2spINS4_23IBluetoothAudioProviderEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aptxCapabilities() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::_hidl_enterGameMode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider19_hidl_enterGameModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider19_hidl_enterGameModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_union::~hidl_union() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::getDiscriminator() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16getDiscriminatorEv(void) {
    ALOGD("_ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16getDiscriminatorEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::_hidl_openProvider(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory18_hidl_openProviderEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory18_hidl_openProviderEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactoryE = NULL;
