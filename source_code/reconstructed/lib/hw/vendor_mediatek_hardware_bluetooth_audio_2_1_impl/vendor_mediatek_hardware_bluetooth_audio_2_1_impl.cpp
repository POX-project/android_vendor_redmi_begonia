/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.bluetooth.audio@2.1-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_bluetooth_audio_2_1_impl"

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
#include "vendor_mediatek_hardware_bluetooth_audio_2_1_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpOffloadAudioProvider::A2dpOffloadAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation24A2dpOffloadAudioProviderC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation24A2dpOffloadAudioProviderC1Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProviderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpOffloadAudioProvider::isValid(vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation24A2dpOffloadAudioProvider7isValidERKNS4_11SessionTypeE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation24A2dpOffloadAudioProvider7isValidERKNS4_11SessionTypeE() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation28BluetoothAudioDeathRecipientE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpOffloadAudioProvider::onSessionReady(std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation24A2dpOffloadAudioProvider14onSessionReadyENSt3__18functionIFvNS4_6StatusERKN7android8hardware12MQDescriptorIhLNSB_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation24A2dpOffloadAudioProvider14onSessionReadyENSt3__18functionIFvNS4_6StatusERKN7android8hardware12MQDescriptorIhLNSB_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpOffloadAudioProvider::A2dpOffloadAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation24A2dpOffloadAudioProviderC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation24A2dpOffloadAudioProviderC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpOffloadAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation24A2dpOffloadAudioProviderE0_NS4_23IBluetoothAudioProviderE = NULL;

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpSoftwareAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation25A2dpSoftwareAudioProviderE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation30BluetoothAudioProvidersFactoryE = NULL;

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioDeathRecipient::serviceDied(unsigned long long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation28BluetoothAudioDeathRecipient11serviceDiedEyRKN7android2wpINS7_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation28BluetoothAudioDeathRecipient11serviceDiedEyRKN7android2wpINS7_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned int, native_handle*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EjP13native_handlejb(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EjP13native_handlejb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::HearingAidAudioProvider::HearingAidAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation23HearingAidAudioProviderC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation23HearingAidAudioProviderC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvidersFactory::openProvider(vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation30BluetoothAudioProvidersFactory12openProviderENS4_11SessionTypeENSt3__18functionIFvNS4_6StatusERKN7android2spINS4_23IBluetoothAudioProviderEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation30BluetoothAudioProvidersFactory12openProviderENS4_11SessionTypeENSt3__18functionIFvNS4_6StatusERKN7android2spINS4_23IBluetoothAudioProviderEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation28BluetoothAudioDeathRecipientE0_N7android8hardware20hidl_death_recipientE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvider-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpSoftwareAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation25A2dpSoftwareAudioProviderE0_NS5_22BluetoothAudioProviderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvidersFactory::getProviderCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::function<void (android::hardware::hidl_vec<vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation30BluetoothAudioProvidersFactory23getProviderCapabilitiesENS4_11SessionTypeENSt3__18functionIFvRKN7android8hardware8hidl_vecINS4_17AudioCapabilitiesEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation30BluetoothAudioProvidersFactory23getProviderCapabilitiesENS4_11SessionTypeENSt3__18functionIFvRKN7android8hardware8hidl_vecINS4_17AudioCapabilitiesEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvider::endSession() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProvider10endSessionEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProvider10endSessionEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvider::enterGameMode(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProvider13enterGameModeEh(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProvider13enterGameModeEh() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Ejb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Ejb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::HearingAidAudioProvider::HearingAidAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation23HearingAidAudioProviderC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation23HearingAidAudioProviderC2Ev() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvidersFactory::hearing_aid_provider_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation30BluetoothAudioProvidersFactory30hearing_aid_provider_instance_E = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation30BluetoothAudioProvidersFactoryE0_NS4_31IBluetoothAudioProvidersFactoryE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::HearingAidAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation23HearingAidAudioProviderE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProviderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpSoftwareAudioProvider::onSessionReady(std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation25A2dpSoftwareAudioProvider14onSessionReadyENSt3__18functionIFvNS4_6StatusERKN7android8hardware12MQDescriptorIhLNSB_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation25A2dpSoftwareAudioProvider14onSessionReadyENSt3__18functionIFvNS4_6StatusERKN7android8hardware12MQDescriptorIhLNSB_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpSoftwareAudioProvider::A2dpSoftwareAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation25A2dpSoftwareAudioProviderC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation25A2dpSoftwareAudioProviderC1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation30BluetoothAudioProvidersFactoryE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvider::streamSuspended(vendor::mediatek::hardware::bluetooth::audio::V2_1::Status) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProvider15streamSuspendedENS4_6StatusE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProvider15streamSuspendedENS4_6StatusE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvider-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpOffloadAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation24A2dpOffloadAudioProviderE0_NS5_22BluetoothAudioProviderE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProviderE0_NS4_23IBluetoothAudioProviderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpSoftwareAudioProvider::A2dpSoftwareAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation25A2dpSoftwareAudioProviderC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation25A2dpSoftwareAudioProviderC2Ev() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpSoftwareAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation25A2dpSoftwareAudioProviderE0_NS4_23IBluetoothAudioProviderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::HearingAidAudioProvider::startSession(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> const&, vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&, std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation23HearingAidAudioProvider12startSessionERKN7android2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS7_8hardware12MQDescriptorIhLNSJ_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation23HearingAidAudioProvider12startSessionERKN7android2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS7_8hardware12MQDescriptorIhLNSJ_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::HearingAidAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation23HearingAidAudioProviderE0_NS4_23IBluetoothAudioProviderE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation30BluetoothAudioProvidersFactoryE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpSoftwareAudioProvider::startSession(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> const&, vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&, std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation25A2dpSoftwareAudioProvider12startSessionERKN7android2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS7_8hardware12MQDescriptorIhLNSJ_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation25A2dpSoftwareAudioProvider12startSessionERKN7android2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS7_8hardware12MQDescriptorIhLNSJ_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvider-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::HearingAidAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation23HearingAidAudioProviderE0_NS5_22BluetoothAudioProviderE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvider::streamStarted(vendor::mediatek::hardware::bluetooth::audio::V2_1::Status) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProvider13streamStartedENS4_6StatusE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProvider13streamStartedENS4_6StatusE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpSoftwareAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation25A2dpSoftwareAudioProviderE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::HearingAidAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation23HearingAidAudioProviderE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvider::startSession(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> const&, vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&, std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProvider12startSessionERKN7android2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS7_8hardware12MQDescriptorIhLNSJ_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProvider12startSessionERKN7android2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS7_8hardware12MQDescriptorIhLNSJ_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpOffloadAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation24A2dpOffloadAudioProviderE = NULL;

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpOffloadAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation24A2dpOffloadAudioProviderE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpSoftwareAudioProvider::isValid(vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation25A2dpSoftwareAudioProvider7isValidERKNS4_11SessionTypeE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation25A2dpSoftwareAudioProvider7isValidERKNS4_11SessionTypeE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::HearingAidAudioProvider::onSessionReady(std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation23HearingAidAudioProvider14onSessionReadyENSt3__18functionIFvNS4_6StatusERKN7android8hardware12MQDescriptorIhLNSB_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation23HearingAidAudioProvider14onSessionReadyENSt3__18functionIFvNS4_6StatusERKN7android8hardware12MQDescriptorIhLNSB_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::HearingAidAudioProvider::isValid(vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation23HearingAidAudioProvider7isValidERKNS4_11SessionTypeE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation23HearingAidAudioProvider7isValidERKNS4_11SessionTypeE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvidersFactory::a2dp_software_provider_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation30BluetoothAudioProvidersFactory32a2dp_software_provider_instance_E = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpOffloadAudioProvider::startSession(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> const&, vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&, std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation24A2dpOffloadAudioProvider12startSessionERKN7android2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS7_8hardware12MQDescriptorIhLNSJ_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation24A2dpOffloadAudioProvider12startSessionERKN7android2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS7_8hardware12MQDescriptorIhLNSJ_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpSoftwareAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation25A2dpSoftwareAudioProviderE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::HearingAidAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation23HearingAidAudioProviderE = NULL;

/* Demangled: HIDL_FETCH_IBluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IBluetoothAudioProvidersFactory(void) {
    ALOGD("HIDL_FETCH_IBluetoothAudioProvidersFactory() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::A2dpOffloadAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation24A2dpOffloadAudioProviderE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation28BluetoothAudioDeathRecipientE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProviderE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvidersFactory::a2dp_offload_provider_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation30BluetoothAudioProvidersFactory31a2dp_offload_provider_instance_E = NULL;

/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::implementation::BluetoothAudioProvider::BluetoothAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProviderC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9bluetooth5audio4V2_114implementation22BluetoothAudioProviderC2Ev() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej() called");
    return 0;
}
