/*
 * Reverse-Engineered ABI Specification for: android.hardware.bluetooth.audio@2.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.bluetooth.audio@2.0-impl.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_BLUETOOTH_AUDIO_2_0_IMPL_H
#define BEGONIA_RE_ANDROID_HARDWARE_BLUETOOTH_AUDIO_2_0_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider10endSessionEv */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider::endSession() */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider10endSessionEv(void);

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider13streamStartedENS3_6StatusE */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider::streamStarted(android::hardware::bluetooth::audio::V2_0::Status) */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider13streamStartedENS3_6StatusE(void);

/* Symbol: _ZTCN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderE0_NS4_22BluetoothAudioProviderE */
/* Demangled: construction vtable for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider-in-android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider */
extern void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderE0_NS4_22BluetoothAudioProviderE;

/* Symbol: _ZTCN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderE0_NS3_23IBluetoothAudioProviderE */
/* Demangled: construction vtable for android::hardware::bluetooth::audio::V2_0::IBluetoothAudioProvider-in-android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider */
extern void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderE0_NS3_23IBluetoothAudioProviderE;

/* Symbol: _ZTCN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderE0_NS4_22BluetoothAudioProviderE */
/* Demangled: construction vtable for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider-in-android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider */
extern void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderE0_NS4_22BluetoothAudioProviderE;

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTVN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactoryE */
/* Demangled: vtable for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory */
extern void* _ZTVN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactoryE;

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Emb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(unsigned long, bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Emb(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned long) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem(void);

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider15streamSuspendedENS3_6StatusE */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider::streamSuspended(android::hardware::bluetooth::audio::V2_0::Status) */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider15streamSuspendedENS3_6StatusE(void);

/* Symbol: _ZTVN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderE */
/* Demangled: vtable for android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider */
extern void* _ZTVN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderE;

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProvider7isValidERKNS3_11SessionTypeE */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider::isValid(android::hardware::bluetooth::audio::V2_0::SessionType const&) */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProvider7isValidERKNS3_11SessionTypeE(void);

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProvider14onSessionReadyENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider::onSessionReady(std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProvider14onSessionReadyENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZTVN7android8hardware9bluetooth5audio4V2_014implementation28BluetoothAudioDeathRecipientE */
/* Demangled: vtable for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioDeathRecipient */
extern void* _ZTVN7android8hardware9bluetooth5audio4V2_014implementation28BluetoothAudioDeathRecipientE;

/* Symbol: _ZTCN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider */
extern void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider::startSession(android::sp<android::hardware::bluetooth::audio::V2_0::IBluetoothAudioPort> const&, android::hardware::bluetooth::audio::V2_0::AudioConfiguration const&, std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZTCN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider */
extern void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderE */
/* Demangled: VTT for android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider */
extern void* _ZTTN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderE;

/* Symbol: _ZTTN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderE */
/* Demangled: VTT for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider */
extern void* _ZTTN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderE;

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider::startSession(android::sp<android::hardware::bluetooth::audio::V2_0::IBluetoothAudioPort> const&, android::hardware::bluetooth::audio::V2_0::AudioConfiguration const&, std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory12openProviderENS3_11SessionTypeENSt3__18functionIFvNS3_6StatusERKNS_2spINS3_23IBluetoothAudioProviderEEEEEE */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory::openProvider(android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::sp<android::hardware::bluetooth::audio::V2_0::IBluetoothAudioProvider> const&)>) */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory12openProviderENS3_11SessionTypeENSt3__18functionIFvNS3_6StatusERKNS_2spINS3_23IBluetoothAudioProviderEEEEEE(void);

/* Symbol: _ZTVN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderE */
/* Demangled: vtable for android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider */
extern void* _ZTVN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderE;

/* Symbol: _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void);

/* Symbol: _ZTCN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactoryE0_NS3_31IBluetoothAudioProvidersFactoryE */
/* Demangled: construction vtable for android::hardware::bluetooth::audio::V2_0::IBluetoothAudioProvidersFactory-in-android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory */
extern void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactoryE0_NS3_31IBluetoothAudioProvidersFactoryE;

/* Symbol: _ZTTN7android8hardware9bluetooth5audio4V2_014implementation28BluetoothAudioDeathRecipientE */
/* Demangled: VTT for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioDeathRecipient */
extern void* _ZTTN7android8hardware9bluetooth5audio4V2_014implementation28BluetoothAudioDeathRecipientE;

/* Symbol: _ZTCN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider */
extern void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory31a2dp_offload_provider_instance_E */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory::a2dp_offload_provider_instance_ */
extern void* _ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory31a2dp_offload_provider_instance_E;

/* Symbol: _ZTTN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderE */
/* Demangled: VTT for android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider */
extern void* _ZTTN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderE;

/* Symbol: _ZTTN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactoryE */
/* Demangled: VTT for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory */
extern void* _ZTTN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactoryE;

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderC2Ev */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider::BluetoothAudioProvider() */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderC2Ev(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: _ZTVN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderE */
/* Demangled: vtable for android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider */
extern void* _ZTVN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderE;

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory23getProviderCapabilitiesENS3_11SessionTypeENSt3__18functionIFvRKNS0_8hidl_vecINS3_17AudioCapabilitiesEEEEEE */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory::getProviderCapabilities(android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::function<void (android::hardware::hidl_vec<android::hardware::bluetooth::audio::V2_0::AudioCapabilities> const&)>) */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory23getProviderCapabilitiesENS3_11SessionTypeENSt3__18functionIFvRKNS0_8hidl_vecINS3_17AudioCapabilitiesEEEEEE(void);

/* Symbol: _ZTCN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider */
extern void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProvider14onSessionReadyENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider::onSessionReady(std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProvider14onSessionReadyENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderC1Ev */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider::A2dpSoftwareAudioProvider() */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderC1Ev(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZTTN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderE */
/* Demangled: VTT for android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider */
extern void* _ZTTN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderE;

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTVN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderE */
/* Demangled: vtable for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider */
extern void* _ZTVN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderE;

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProvider7isValidERKNS3_11SessionTypeE */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider::isValid(android::hardware::bluetooth::audio::V2_0::SessionType const&) */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProvider7isValidERKNS3_11SessionTypeE(void);

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory30hearing_aid_provider_instance_E */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory::hearing_aid_provider_instance_ */
extern void* _ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory30hearing_aid_provider_instance_E;

/* Symbol: _ZTCN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactoryE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory */
extern void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactoryE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderC2Ev */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider::A2dpSoftwareAudioProvider() */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderC2Ev(void);

/* Symbol: _ZTCN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderE0_NS3_23IBluetoothAudioProviderE */
/* Demangled: construction vtable for android::hardware::bluetooth::audio::V2_0::IBluetoothAudioProvider-in-android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider */
extern void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderE0_NS3_23IBluetoothAudioProviderE;

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderC1Ev */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider::HearingAidAudioProvider() */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderC1Ev(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider::startSession(android::sp<android::hardware::bluetooth::audio::V2_0::IBluetoothAudioPort> const&, android::hardware::bluetooth::audio::V2_0::AudioConfiguration const&, std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderC1Ev */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider::A2dpOffloadAudioProvider() */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderC1Ev(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProvider14onSessionReadyENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider::onSessionReady(std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProvider14onSessionReadyENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZTCN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderE0_NS3_23IBluetoothAudioProviderE */
/* Demangled: construction vtable for android::hardware::bluetooth::audio::V2_0::IBluetoothAudioProvider-in-android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider */
extern void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderE0_NS3_23IBluetoothAudioProviderE;

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderC2Ev */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::HearingAidAudioProvider::HearingAidAudioProvider() */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation23HearingAidAudioProviderC2Ev(void);

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory32a2dp_software_provider_instance_E */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvidersFactory::a2dp_software_provider_instance_ */
extern void* _ZN7android8hardware9bluetooth5audio4V2_014implementation30BluetoothAudioProvidersFactory32a2dp_software_provider_instance_E;

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider::startSession(android::sp<android::hardware::bluetooth::audio::V2_0::IBluetoothAudioPort> const&, android::hardware::bluetooth::audio::V2_0::AudioConfiguration const&, std::__1::function<void (android::hardware::bluetooth::audio::V2_0::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProvider12startSessionERKNS_2spINS3_19IBluetoothAudioPortEEERKNS3_18AudioConfigurationENSt3__18functionIFvNS3_6StatusERKNS0_12MQDescriptorIhLNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderC2Ev */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider::A2dpOffloadAudioProvider() */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProviderC2Ev(void);

/* Symbol: HIDL_FETCH_IBluetoothAudioProvidersFactory */
/* Demangled: HIDL_FETCH_IBluetoothAudioProvidersFactory */
int HIDL_FETCH_IBluetoothAudioProvidersFactory(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation28BluetoothAudioDeathRecipient11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioDeathRecipient::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation28BluetoothAudioDeathRecipient11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EmP13native_handlemb */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned long, native_handle*, unsigned long, bool) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EmP13native_handlemb(void);

/* Symbol: _ZTCN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderE0_NS4_22BluetoothAudioProviderE */
/* Demangled: construction vtable for android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider-in-android::hardware::bluetooth::audio::V2_0::implementation::A2dpSoftwareAudioProvider */
extern void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation25A2dpSoftwareAudioProviderE0_NS4_22BluetoothAudioProviderE;

/* Symbol: _ZTCN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderE0_NS3_23IBluetoothAudioProviderE */
/* Demangled: construction vtable for android::hardware::bluetooth::audio::V2_0::IBluetoothAudioProvider-in-android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioProvider */
extern void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation22BluetoothAudioProviderE0_NS3_23IBluetoothAudioProviderE;

/* Symbol: _ZTCN7android8hardware9bluetooth5audio4V2_014implementation28BluetoothAudioDeathRecipientE0_NS0_20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-android::hardware::bluetooth::audio::V2_0::implementation::BluetoothAudioDeathRecipient */
extern void* _ZTCN7android8hardware9bluetooth5audio4V2_014implementation28BluetoothAudioDeathRecipientE0_NS0_20hidl_death_recipientE;

/* Symbol: _ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProvider7isValidERKNS3_11SessionTypeE */
/* Demangled: android::hardware::bluetooth::audio::V2_0::implementation::A2dpOffloadAudioProvider::isValid(android::hardware::bluetooth::audio::V2_0::SessionType const&) */
int _ZN7android8hardware9bluetooth5audio4V2_014implementation24A2dpOffloadAudioProvider7isValidERKNS3_11SessionTypeE(void);

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_BLUETOOTH_AUDIO_2_0_IMPL_H */
