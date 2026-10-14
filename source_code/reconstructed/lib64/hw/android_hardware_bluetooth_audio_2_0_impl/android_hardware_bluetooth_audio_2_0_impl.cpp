/*
 * Reverse-Engineered Source for: android.hardware.bluetooth.audio@2.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "android_hardware_bluetooth_audio_2_0_impl"

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
#include "android_hardware_bluetooth_audio_2_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider::endSession() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider10endSessionEv(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider10endSessionEv() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider::streamStarted(android::hardware::bluetooth::audio::V2_0::Status) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider13streamStartedENS3_6StatusE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider13streamStartedENS3_6StatusE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider-in-android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderE0_NS4_22BluetoothAudioProviderE = NULL;

/* Exported Object: construction vtable for android::hardware::bluetooth::audio::V2_0::IBluetoothAudioProvider-in-android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderE0_NS3_23IBluetoothAudioProviderE = NULL;

/* Exported Object: construction vtable for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider-in-android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderE0_NS4_22BluetoothAudioProviderE = NULL;

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: vtable for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactoryE = NULL;

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Emb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Emb() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider::streamSuspended(android::hardware::bluetooth::audio::V2_0::Status) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider15streamSuspendedENS3_6StatusE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider15streamSuspendedENS3_6StatusE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderE = NULL;

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider::isValid(android::hardware::bluetooth::audio::V2_0::SessionType const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProvider7isValidERKNS3_11SessionTypeE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProvider7isValidERKNS3_11SessionTypeE() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider::onSessionReady(std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProvider14onSessionReadyENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProvider14onSessionReadyENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware9bluetooth5audio4V2_014implementation28BluetoothAudioDeathRecipientE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider::startSession(android::sp<android::hardware::bluetooth::audio::V2_0::IBluetoothAudioPort> const&, android::hardware::bluetooth::audio::V2_0::AudioConfiguration const&, std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderE = NULL;

/* Exported Object: VTT for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderE = NULL;

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider::startSession(android::sp<android::hardware::bluetooth::audio::V2_0::IBluetoothAudioPort> const&, android::hardware::bluetooth::audio::V2_0::AudioConfiguration const&, std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory::openProvider(android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::sp<android::hardware::bluetooth::audio::V2_0::IBluetoothAudioProvider> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory12openProviderENS3_11SessionTypeENSt3__18functionIFvNS3_6StatusERKNS_2spINS3_23IBluetoothAudioProviderEEEEEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory12openProviderENS3_11SessionTypeENSt3__18functionIFvNS3_6StatusERKNS_2spINS3_23IBluetoothAudioProviderEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderE = NULL;

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::bluetooth::audio::V2_0::IBluetoothAudioProvidersFactory-in-android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactoryE0_NS3_31IBluetoothAudioProvidersFactoryE = NULL;

/* Exported Object: VTT for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware9bluetooth5audio4V2_014implementation28BluetoothAudioDeathRecipientE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory::a2dp_offload_provider_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory31a2dp_offload_provider_instance_E = NULL;

/* Exported Object: VTT for android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderE = NULL;

/* Exported Object: VTT for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactoryE = NULL;

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider::BluetoothAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderC2Ev(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderC2Ev() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderE = NULL;

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory::getProviderCapabilities(android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::function<void (android::hardware::hidl_vec<android::hardware::bluetooth::audio::V2_0::AudioCapabilities> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory23getProviderCapabilitiesENS3_11SessionTypeENSt3__18functionIFvRKNS0_8hidl_vecINS3_17AudioCapabilitiesEEEEEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory23getProviderCapabilitiesENS3_11SessionTypeENSt3__18functionIFvRKNS0_8hidl_vecINS3_17AudioCapabilitiesEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider::onSessionReady(std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProvider14onSessionReadyENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProvider14onSessionReadyENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider::A2dpSoftwareAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderC1Ev(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderC1Ev() called");
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

/* Exported Object: VTT for android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderE = NULL;

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: vtable for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderE = NULL;

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider::isValid(android::hardware::bluetooth::audio::V2_0::SessionType const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProvider7isValidERKNS3_11SessionTypeE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProvider7isValidERKNS3_11SessionTypeE() called");
    return 0;
}

/* Exported Object: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory::hearing_aid_provider_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory30hearing_aid_provider_instance_E = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactoryE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider::A2dpSoftwareAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderC2Ev(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::bluetooth::audio::V2_0::IBluetoothAudioProvider-in-android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderE0_NS3_23IBluetoothAudioProviderE = NULL;

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider::HearingAidAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderC1Ev(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderC1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider::startSession(android::sp<android::hardware::bluetooth::audio::V2_0::IBluetoothAudioPort> const&, android::hardware::bluetooth::audio::V2_0::AudioConfiguration const&, std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider::A2dpOffloadAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderC1Ev(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderC1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider::onSessionReady(std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProvider14onSessionReadyENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProvider14onSessionReadyENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::bluetooth::audio::V2_0::IBluetoothAudioProvider-in-android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderE0_NS3_23IBluetoothAudioProviderE = NULL;

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider::HearingAidAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderC2Ev(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderC2Ev() called");
    return 0;
}

/* Exported Object: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory::a2dp_software_provider_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory32a2dp_software_provider_instance_E = NULL;

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider::startSession(android::sp<android::hardware::bluetooth::audio::V2_0::IBluetoothAudioPort> const&, android::hardware::bluetooth::audio::V2_0::AudioConfiguration const&, std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider::A2dpOffloadAudioProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderC2Ev(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderC2Ev() called");
    return 0;
}

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

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioDeathRecipient::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation28BluetoothAudioDeathRecipient11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation28BluetoothAudioDeathRecipient11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned long, native_handle*, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EmP13native_handlemb(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EmP13native_handlemb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider-in-android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderE0_NS4_22BluetoothAudioProviderE = NULL;

/* Exported Object: construction vtable for android::hardware::bluetooth::audio::V2_0::IBluetoothAudioProvider-in-android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderE0_NS3_23IBluetoothAudioProviderE = NULL;

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation28BluetoothAudioDeathRecipientE0_NS0_20hidl_death_recipientE = NULL;

/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider::isValid(android::hardware::bluetooth::audio::V2_0::SessionType const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProvider7isValidERKNS3_11SessionTypeE(void) {
    ALOGD("_ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProvider7isValidERKNS3_11SessionTypeE() called");
    return 0;
}
