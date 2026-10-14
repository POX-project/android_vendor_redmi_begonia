/*
 * Reverse-Engineered ABI Specification for: android.hardware.audio.effect@6.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.audio.effect@6.0-impl.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_AUDIO_EFFECT_6_0_IMPL_H
#define BEGONIA_RE_ANDROID_HARDWARE_AUDIO_EFFECT_6_0_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZTVN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectE */
/* Demangled: vtable for android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect */
extern void* _ZTVN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void);

/* Symbol: _ZTTN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectE */
/* Demangled: VTT for android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect */
extern void* _ZTTN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectC2EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::VisualizerEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectC2EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect5resetEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::reset() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect5resetEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect14setAudioSourceENS1_6common4V6_011AudioSourceE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::~BassBoostEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect4initEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::init() */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect4initEv(void);

/* Symbol: _ZTTN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectE */
/* Demangled: VTT for android::hardware::audio::effect::V6_0::implementation::VisualizerEffect */
extern void* _ZTTN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD1Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::~BassBoostEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void);

/* Symbol: _ZN7android9SingletonINS_18AudioBufferManagerEED1Ev */
/* Demangled: android::Singleton<android::AudioBufferManager>::~Singleton() */
int _ZN7android9SingletonINS_18AudioBufferManagerEED1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EffectsFactory::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect12setParameterERKNS0_8hidl_vecIhEES9_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect12setParameterERKNS0_8hidl_vecIhEES9_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12setEchoDelayEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setEchoDelay(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12setEchoDelayEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect20sContextCallFunctionE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sContextCallFunction */
extern void* _ZN7android8hardware5audio6effect4V6_014implementation6Effect20sContextCallFunctionE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect10setLatencyEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setLatency(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect10setLatencyEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect12setAudioModeENS1_6common4V6_09AudioModeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect12setAudioModeENS1_6common4V6_09AudioModeE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect17setProcessBuffersERKNS3_11AudioBufferES8_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect17setLimiterEnabledEb */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setLimiterEnabled(bool) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect17setLimiterEnabledEb(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect5resetEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::reset() */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect5resetEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect4initEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::init() */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect4initEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectD2Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::~DownmixEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectD2Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect13analyzeStatusEPKcS7_S7_i */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::analyzeStatus(char const*, char const*, char const*, int) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect13analyzeStatusEPKcS7_S7_i(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19getReflectionsLevelENSt3__18functionIFvNS3_6ResultEsEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getReflectionsLevel(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19getReflectionsLevelENSt3__18functionIFvNS3_6ResultEsEEE(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::~VirtualizerEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void);

/* Symbol: _ZTTN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectE */
/* Demangled: VTT for android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect */
extern void* _ZTTN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect7offloadERKNS3_22EffectOffloadParameterE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect7offloadERKNS3_22EffectOffloadParameterE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect11sendCommandEiPKc */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sendCommand(int, char const*) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect11sendCommandEiPKc(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect24sendCommandReturningDataEiPKcjPvPjS8_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sendCommandReturningData(int, char const*, unsigned int, void*, unsigned int*, void*) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect24sendCommandReturningDataEiPKcjPvPjS8_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory17getAllDescriptorsENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_16EffectDescriptorEEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EffectsFactory::getAllDescriptors(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectDescriptor> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory17getAllDescriptorsENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_16EffectDescriptorEEEEEE(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectE0_NS3_16IEqualizerEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IEqualizerEffect-in-android::hardware::audio::effect::V6_0::implementation::EqualizerEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectE0_NS3_16IEqualizerEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14setTargetLevelEs */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setTargetLevel(short) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14setTargetLevelEs(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect14setInputDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setInputDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect14setInputDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectC1EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::EnvironmentalReverbEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectC1EPP18effect_interface_s(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::~LoudnessEnhancerEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect4initEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::init() */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect4initEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7getTypeENSt3__18functionIFvNS3_6ResultENS3_14IDownmixEffect4TypeEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getType(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IDownmixEffect::Type)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7getTypeENSt3__18functionIFvNS3_6ResultENS3_14IDownmixEffect4TypeEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19setReflectionsLevelEs */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setReflectionsLevel(short) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19setReflectionsLevelEs(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectC2EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::VirtualizerEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectC2EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperD1Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper::~AudioBufferWrapper() */
int _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7disableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::disable() */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7disableEv(void);

/* Symbol: _ZTTN7android8hardware5audio6effect4V6_014implementation13DownmixEffectE */
/* Demangled: VTT for android::hardware::audio::effect::V6_0::implementation::DownmixEffect */
extern void* _ZTTN7android8hardware5audio6effect4V6_014implementation13DownmixEffectE;

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation14EffectsFactoryE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::EffectsFactory */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation14EffectsFactoryE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectE0_NS3_7IEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectE0_NS3_7IEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12setAudioModeENS1_6common4V6_09AudioModeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12setAudioModeENS1_6common4V6_09AudioModeE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect15propertiesToHalERKNS3_16IEqualizerEffect13AllPropertiesEPP20s_equalizer_settings */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::propertiesToHal(android::hardware::audio::effect::V6_0::IEqualizerEffect::AllProperties const&, s_equalizer_settings**) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect15propertiesToHalERKNS3_16IEqualizerEffect13AllPropertiesEPP20s_equalizer_settings(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14getTargetLevelENSt3__18functionIFvNS3_6ResultEsEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getTargetLevel(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14getTargetLevelENSt3__18functionIFvNS3_6ResultEsEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation14EffectsFactoryE0_NS3_15IEffectsFactoryE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IEffectsFactory-in-android::hardware::audio::effect::V6_0::implementation::EffectsFactory */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation14EffectsFactoryE0_NS3_15IEffectsFactoryE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect4initEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::init() */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect4initEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12setBandLevelEts */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setBandLevel(unsigned short, short) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12setBandLevelEts(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect23sContextResultOfCommandE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sContextResultOfCommand */
extern void* _ZN7android8hardware5audio6effect4V6_014implementation6Effect23sContextResultOfCommandE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect33sendCommandReturningStatusAndDataEiPKcjPvPjS8_jNSt3__18functionIFvvEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sendCommandReturningStatusAndData(int, char const*, unsigned int, void*, unsigned int*, void*, unsigned int, std::__1::function<void ()>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect33sendCommandReturningStatusAndDataEiPKcjPvPjS8_jNSt3__18functionIFvvEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16setAllPropertiesERKNS3_16IEqualizerEffect13AllPropertiesE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setAllProperties(android::hardware::audio::effect::V6_0::IEqualizerEffect::AllProperties const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16setAllPropertiesERKNS3_16IEqualizerEffect13AllPropertiesE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7disableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::disable() */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7disableEv(void);

/* Symbol: _ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation16VisualizerEffectEEEPT_ */
/* Demangled: android::sp<android::hardware::audio::effect::V6_0::IEffect>::sp<android::hardware::audio::effect::V6_0::implementation::VisualizerEffect>(android::hardware::audio::effect::V6_0::implementation::VisualizerEffect*) */
int _ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation16VisualizerEffectEEEPT_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD2Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::~LoudnessEnhancerEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD2Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect5closeEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::close() */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect5closeEv(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::~VisualizerEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6EffectD0Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::~Effect() */
int _ZN7android8hardware5audio6effect4V6_014implementation6EffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect7disableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::disable() */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect7disableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9setPresetENS3_19IPresetReverbEffect6PresetE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setPreset(android::hardware::audio::effect::V6_0::IPresetReverbEffect::Preset) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9setPresetENS3_19IPresetReverbEffect6PresetE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD1Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::~VirtualizerEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD1Ev(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectE0_NS3_17IVisualizerEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IVisualizerEffect-in-android::hardware::audio::effect::V6_0::implementation::VisualizerEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectE0_NS3_17IVisualizerEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectC1EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::AutomaticGainControlEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectC1EPP18effect_interface_s(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE10do_destroyEPvm(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setDecayTimeEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setDecayTime(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setDecayTimeEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14getReverbLevelENSt3__18functionIFvNS3_6ResultEsEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getReverbLevel(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14getReverbLevelENSt3__18functionIFvNS3_6ResultEsEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectE0_NS3_7IEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::EqualizerEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectE0_NS3_7IEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setDiffusionEs */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setDiffusion(short) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setDiffusionEs(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_26IEnvironmentalReverbEffect13AllPropertiesEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getAllProperties(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IEnvironmentalReverbEffect::AllProperties const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_26IEnvironmentalReverbEffect13AllPropertiesEEEE(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectE0_NS3_23INoiseSuppressionEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::INoiseSuppressionEffect-in-android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectE0_NS3_23INoiseSuppressionEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect12setAudioModeENS1_6common4V6_09AudioModeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect12setAudioModeENS1_6common4V6_09AudioModeE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect5resetEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::reset() */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect5resetEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD0Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::~EnvironmentalReverbEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect7offloadERKNS3_22EffectOffloadParameterE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect7offloadERKNS3_22EffectOffloadParameterE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect12setAudioModeENS1_6common4V6_09AudioModeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect12setAudioModeENS1_6common4V6_09AudioModeE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect5closeEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::close() */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect5closeEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect7disableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::disable() */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect7disableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect7disableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::disable() */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect7disableEv(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::~EnvironmentalReverbEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect26sendCommandReturningStatusEiPKcjPv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sendCommandReturningStatus(int, char const*, unsigned int, void*) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect26sendCommandReturningStatusEiPKcjPv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect23getSupportedConfigsImplEjjjNSt3__18functionIFvjPvEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getSupportedConfigsImpl(unsigned int, unsigned int, unsigned int, std::__1::function<void (unsigned int, void*)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect23getSupportedConfigsImplEjjjNSt3__18functionIFvjPvEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD1Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::~AcousticEchoCancelerEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setReverbLevelEs */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setReverbLevel(short) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setReverbLevelEs(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD1Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::~PresetReverbEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD1Ev(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect12setParameterERKNS0_8hidl_vecIhEES9_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect12setParameterERKNS0_8hidl_vecIhEES9_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect17setProcessBuffersERKNS3_11AudioBufferES8_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: HIDL_FETCH_IEffectsFactory */
/* Demangled: HIDL_FETCH_IEffectsFactory */
int HIDL_FETCH_IEffectsFactory(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect7offloadERKNS3_22EffectOffloadParameterE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect7offloadERKNS3_22EffectOffloadParameterE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect11getNumBandsENSt3__18functionIFvNS3_6ResultEtEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getNumBands(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect11getNumBandsENSt3__18functionIFvNS3_6ResultEtEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect5resetEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::reset() */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect5resetEv(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::~EqualizerEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD0Ev(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectE0_NS3_7IEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectE0_NS3_7IEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect23forceVirtualizationModeENS1_6common4V6_011AudioDeviceE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::forceVirtualizationMode(android::hardware::audio::common::V6_0::AudioDevice) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect23forceVirtualizationModeENS1_6common4V6_011AudioDeviceE(void);

/* Symbol: _ZN7android9SingletonINS_18AudioBufferManagerEEC1Ev */
/* Demangled: android::Singleton<android::AudioBufferManager>::Singleton() */
int _ZN7android9SingletonINS_18AudioBufferManagerEEC1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect5resetEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::reset() */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect5resetEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15setDecayHfRatioEs */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setDecayHfRatio(short) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15setDecayHfRatioEs(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD0Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::~EqualizerEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectC1EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::NoiseSuppressionEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectC1EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect6enableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::enable() */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect6enableEv(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectE0_NS3_23ILoudnessEnhancerEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::ILoudnessEnhancerEffect-in-android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectE0_NS3_23ILoudnessEnhancerEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9getPresetENSt3__18functionIFvNS3_6ResultENS3_19IPresetReverbEffect6PresetEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getPreset(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IPresetReverbEffect::Preset)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9getPresetENSt3__18functionIFvNS3_6ResultENS3_19IPresetReverbEffect6PresetEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect17setProcessBuffersERKNS3_11AudioBufferES8_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEEE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12setAudioModeENS1_6common4V6_09AudioModeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12setAudioModeENS1_6common4V6_09AudioModeE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect7disableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::disable() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect7disableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD0Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::~AutomaticGainControlEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectC1EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::LoudnessEnhancerEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectC1EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9getBypassENSt3__18functionIFvNS3_6ResultEbEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getBypass(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, bool)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9getBypassENSt3__18functionIFvNS3_6ResultEbEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16getCurrentPresetENSt3__18functionIFvNS3_6ResultEtEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getCurrentPreset(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16getCurrentPresetENSt3__18functionIFvNS3_6ResultEtEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect20getCurrentConfigImplEjjNSt3__18functionIFvPvEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getCurrentConfigImpl(unsigned int, unsigned int, std::__1::function<void (void*)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect20getCurrentConfigImplEjjNSt3__18functionIFvPvEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory30dispatchEffectInstanceCreationERK19effect_descriptor_sPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EffectsFactory::dispatchEffectInstanceCreation(effect_descriptor_s const&, effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory30dispatchEffectInstanceCreationERK19effect_descriptor_sPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect4initEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::init() */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect4initEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect11setStrengthEt */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setStrength(unsigned short) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect11setStrengthEt(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect17setProcessBuffersERKNS3_11AudioBufferES8_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect12setAudioModeENS1_6common4V6_09AudioModeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect12setAudioModeENS1_6common4V6_09AudioModeE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::~NoiseSuppressionEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD0Ev(void);

/* Symbol: _ZN7android9SingletonINS_18AudioBufferManagerEE11hasInstanceEv */
/* Demangled: android::Singleton<android::AudioBufferManager>::hasInstance() */
int _ZN7android9SingletonINS_18AudioBufferManagerEE11hasInstanceEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect14getPresetNamesENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS0_11hidl_stringEEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getPresetNames(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect14getPresetNamesENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS0_11hidl_stringEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect5resetEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::reset() */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect5resetEv(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectE0_NS3_7IEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::VisualizerEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectE0_NS3_7IEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect7disableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::disable() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect7disableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect6enableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::enable() */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect6enableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12getBandLevelEtNSt3__18functionIFvNS3_6ResultEsEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getBandLevel(unsigned short, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12getBandLevelEtNSt3__18functionIFvNS3_6ResultEsEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect18setMeasurementModeENS3_17IVisualizerEffect15MeasurementModeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setMeasurementMode(android::hardware::audio::effect::V6_0::IVisualizerEffect::MeasurementMode) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect18setMeasurementModeENS3_17IVisualizerEffect15MeasurementModeE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getDecayTimeENSt3__18functionIFvNS3_6ResultEjEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getDecayTime(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getDecayTimeENSt3__18functionIFvNS3_6ResultEjEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect5resetEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::reset() */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect5resetEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect5closeEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::close() */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect5closeEv(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::~PresetReverbEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect7disableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::disable() */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect7disableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19getReflectionsDelayENSt3__18functionIFvNS3_6ResultEjEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getReflectionsDelay(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19getReflectionsDelayENSt3__18functionIFvNS3_6ResultEjEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect14setInputDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setInputDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect14setInputDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect15propertiesToHalERKNS3_23INoiseSuppressionEffect13AllPropertiesEP13s_ns_settings */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::propertiesToHal(android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::AllProperties const&, s_ns_settings*) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect15propertiesToHalERKNS3_23INoiseSuppressionEffect13AllPropertiesEP13s_ns_settings(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect6enableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::enable() */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect6enableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20speakerAnglesFromHalEPKijRNS0_8hidl_vecINS3_18IVirtualizerEffect12SpeakerAngleEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::speakerAnglesFromHal(int const*, unsigned int, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::IVirtualizerEffect::SpeakerAngle>&) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20speakerAnglesFromHalEPKijRNS0_8hidl_vecINS3_18IVirtualizerEffect12SpeakerAngleEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::~AcousticEchoCancelerEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD0Ev(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectE0_NS3_7IEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectE0_NS3_7IEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect12setParameterERKNS0_8hidl_vecIhEES9_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect12setParameterERKNS0_8hidl_vecIhEES9_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect23getVirtualSpeakerAnglesEjNS1_6common4V6_011AudioDeviceENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_18IVirtualizerEffect12SpeakerAngleEEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getVirtualSpeakerAngles(unsigned int, android::hardware::audio::common::V6_0::AudioDevice, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::IVirtualizerEffect::SpeakerAngle> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect23getVirtualSpeakerAnglesEjNS1_6common4V6_011AudioDeviceENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_18IVirtualizerEffect12SpeakerAngleEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect12setParameterERKNS0_8hidl_vecIhEES9_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect12setParameterERKNS0_8hidl_vecIhEES9_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect10setDensityEs */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setDensity(short) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect10setDensityEs(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD1Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::~NoiseSuppressionEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectE0_NS3_18IVirtualizerEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IVirtualizerEffect-in-android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectE0_NS3_18IVirtualizerEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14getScalingModeENSt3__18functionIFvNS3_6ResultENS3_17IVisualizerEffect11ScalingModeEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getScalingMode(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IVisualizerEffect::ScalingMode)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14getScalingModeENSt3__18functionIFvNS3_6ResultENS3_17IVisualizerEffect11ScalingModeEEEE(void);

/* Symbol: _ZTVN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectE */
/* Demangled: vtable for android::hardware::audio::effect::V6_0::implementation::VisualizerEffect */
extern void* _ZTVN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect5closeEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::close() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect5closeEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZTTN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectE */
/* Demangled: VTT for android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect */
extern void* _ZTTN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperC1ERKNS3_11AudioBufferE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper::AudioBufferWrapper(android::hardware::audio::effect::V6_0::AudioBuffer const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperC1ERKNS3_11AudioBufferE(void);

/* Symbol: _ZTVN7android8hardware5audio6effect4V6_014implementation13DownmixEffectE */
/* Demangled: vtable for android::hardware::audio::effect::V6_0::implementation::DownmixEffect */
extern void* _ZTVN7android8hardware5audio6effect4V6_014implementation13DownmixEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect6enableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::enable() */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect6enableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14getCaptureSizeENSt3__18functionIFvNS3_6ResultEtEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getCaptureSize(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14getCaptureSizeENSt3__18functionIFvNS3_6ResultEtEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect5resetEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::reset() */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect5resetEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect7disableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::disable() */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect7disableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7measureENSt3__18functionIFvNS3_6ResultERKNS3_17IVisualizerEffect11MeasurementEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::measure(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IVisualizerEffect::Measurement const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7measureENSt3__18functionIFvNS3_6ResultERKNS3_17IVisualizerEffect11MeasurementEEEE(void);

/* Symbol: _ZN7android9SingletonINS_18AudioBufferManagerEE11getInstanceEv */
/* Demangled: android::Singleton<android::AudioBufferManager>::getInstance() */
int _ZN7android9SingletonINS_18AudioBufferManagerEE11getInstanceEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectC1EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::DownmixEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectC1EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect19getBandForFrequencyEjNSt3__18functionIFvNS3_6ResultEtEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getBandForFrequency(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect19getBandForFrequencyEjNSt3__18functionIFvNS3_6ResultEtEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD1Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::~VisualizerEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation12uuidToStringERK12audio_uuid_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::uuidToString(audio_uuid_s const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation12uuidToStringERK12audio_uuid_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6EffectD2Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::~Effect() */
int _ZN7android8hardware5audio6effect4V6_014implementation6EffectD2Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect21getBandFrequencyRangeEtNSt3__18functionIFvNS3_6ResultEjjEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getBandFrequencyRange(unsigned short, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, unsigned int)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect21getBandFrequencyRangeEtNSt3__18functionIFvNS3_6ResultEjjEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect17effectConfigToHalERKNS3_12EffectConfigEP15effect_config_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::effectConfigToHal(android::hardware::audio::effect::V6_0::EffectConfig const&, effect_config_s*) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect17effectConfigToHalERKNS3_12EffectConfigEP15effect_config_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect5closeEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::close() */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect5closeEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect18getSuppressionTypeENSt3__18functionIFvNS3_6ResultENS3_23INoiseSuppressionEffect4TypeEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getSuppressionType(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::Type)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect18getSuppressionTypeENSt3__18functionIFvNS3_6ResultENS3_23INoiseSuppressionEffect4TypeEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect30effectAuxChannelsConfigFromHalERK16channel_config_sPNS3_23EffectAuxChannelsConfigE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::effectAuxChannelsConfigFromHal(channel_config_s const&, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig*) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect30effectAuxChannelsConfigFromHalERK16channel_config_sPNS3_23EffectAuxChannelsConfigE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6EffectC2EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::Effect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation6EffectC2EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect12setAudioModeENS1_6common4V6_09AudioModeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect12setAudioModeENS1_6common4V6_09AudioModeE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD2Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::~EnvironmentalReverbEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD2Ev(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectE0_NS3_7IEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectE0_NS3_7IEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect17propertiesFromHalERK20s_equalizer_settingsPNS3_16IEqualizerEffect13AllPropertiesE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::propertiesFromHal(s_equalizer_settings const&, android::hardware::audio::effect::V6_0::IEqualizerEffect::AllProperties*) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect17propertiesFromHalERK20s_equalizer_settingsPNS3_16IEqualizerEffect13AllPropertiesE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect6enableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::enable() */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect6enableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect9setDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect9setDeviceEj(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation6EffectD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::Effect::~Effect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation6EffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setParameterERKNS0_8hidl_vecIhEES9_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setParameterERKNS0_8hidl_vecIhEES9_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect9setDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect9setDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setRoomLevelEs */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setRoomLevel(short) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setRoomLevelEs(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14getReverbDelayENSt3__18functionIFvNS3_6ResultEjEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getReverbDelay(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14getReverbDelayENSt3__18functionIFvNS3_6ResultEjEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectC1EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::BassBoostEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectC1EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect20analyzeCommandStatusEPKcS7_i */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::analyzeCommandStatus(char const*, char const*, int) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect20analyzeCommandStatusEPKcS7_i(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12setParameterERKNS0_8hidl_vecIhEES9_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12setParameterERKNS0_8hidl_vecIhEES9_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect5resetEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::reset() */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect5resetEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect12setAudioModeENS1_6common4V6_09AudioModeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect12setAudioModeENS1_6common4V6_09AudioModeE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16isLimiterEnabledENSt3__18functionIFvNS3_6ResultEbEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::isLimiterEnabled(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, bool)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16isLimiterEnabledENSt3__18functionIFvNS3_6ResultEbEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_27IAutomaticGainControlEffect13AllPropertiesEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getAllProperties(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IAutomaticGainControlEffect::AllProperties const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_27IAutomaticGainControlEffect13AllPropertiesEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect19effectConfigFromHalERK15effect_config_sPNS3_12EffectConfigE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::effectConfigFromHal(effect_config_s const&, android::hardware::audio::effect::V6_0::EffectConfig*) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect19effectConfigFromHalERK15effect_config_sPNS3_12EffectConfigE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void);

/* Symbol: _ZN7android18AudioBufferManager4wrapERKNS_8hardware5audio6effect4V6_011AudioBufferEPNS_2spINS4_14implementation18AudioBufferWrapperEEE */
/* Demangled: android::AudioBufferManager::wrap(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::sp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper>*) */
int _ZN7android18AudioBufferManager4wrapERKNS_8hardware5audio6effect4V6_011AudioBufferEPNS_2spINS4_14implementation18AudioBufferWrapperEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EE5writeEPKS5_m */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1>::write(android::hardware::audio::effect::V6_0::Result const*, unsigned long) */
int _ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EE5writeEPKS5_m(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory9debugDumpERKNS0_11hidl_handleE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EffectsFactory::debugDump(android::hardware::hidl_handle const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory9debugDumpERKNS0_11hidl_handleE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect18setSuppressionTypeENS3_23INoiseSuppressionEffect4TypeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setSuppressionType(android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::Type) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect18setSuppressionTypeENS3_23INoiseSuppressionEffect4TypeE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9setDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9setDeviceEj(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::~BassBoostEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE10do_compareEPKvS8_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect6enableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::enable() */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect6enableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect16getParameterImplEjPKvjjNSt3__18functionIFvjS7_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getParameterImpl(unsigned int, void const*, unsigned int, unsigned int, std::__1::function<void (unsigned int, void const*)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect16getParameterImplEjPKvjjNSt3__18functionIFvjS7_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD0Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::~BassBoostEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setReverbDelayEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setReverbDelay(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setReverbDelayEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD2Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::~EqualizerEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE10do_compareEPKvSD_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE10do_compareEPKvSD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setAudioModeENS1_6common4V6_09AudioModeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setAudioModeENS1_6common4V6_09AudioModeE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect14setInputDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setInputDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect14setInputDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZTVN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectE */
/* Demangled: vtable for android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect */
extern void* _ZTVN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD2Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::~AutomaticGainControlEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD2Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect28effectAuxChannelsConfigToHalERKNS3_23EffectAuxChannelsConfigEP16channel_config_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::effectAuxChannelsConfigToHal(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&, channel_config_s*) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect28effectAuxChannelsConfigToHalERKNS3_23EffectAuxChannelsConfigEP16channel_config_s(void);

/* Symbol: _ZTVN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectE */
/* Demangled: vtable for android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect */
extern void* _ZTVN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect4initEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::init() */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect4initEv(void);

/* Symbol: _ZTTN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectE */
/* Demangled: VTT for android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect */
extern void* _ZTTN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect5closeEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::close() */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect5closeEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectC2EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::EnvironmentalReverbEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectC2EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectC1EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::AcousticEchoCancelerEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectC1EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void);

/* Symbol: _ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation22NoiseSuppressionEffectEEEPT_ */
/* Demangled: android::sp<android::hardware::audio::effect::V6_0::IEffect>::sp<android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect>(android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect*) */
int _ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation22NoiseSuppressionEffectEEEPT_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect17setProcessBuffersERKNS3_11AudioBufferES8_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectD1Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::~DownmixEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectC1EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::PresetReverbEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectC1EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect5resetEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::reset() */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect5resetEv(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectE0_NS3_19IPresetReverbEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IPresetReverbEffect-in-android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectE0_NS3_19IPresetReverbEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperC2ERKNS3_11AudioBufferE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper::AudioBufferWrapper(android::hardware::audio::effect::V6_0::AudioBuffer const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperC2ERKNS3_11AudioBufferE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect6enableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::enable() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect6enableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16setCurrentPresetEt */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setCurrentPreset(unsigned short) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16setCurrentPresetEt(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect19getSuppressionLevelENSt3__18functionIFvNS3_6ResultENS3_23INoiseSuppressionEffect5LevelEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getSuppressionLevel(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::Level)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect19getSuppressionLevelENSt3__18functionIFvNS3_6ResultENS3_23INoiseSuppressionEffect5LevelEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7captureENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::capture(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7captureENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android18AudioBufferManager11removeEntryEm */
/* Demangled: android::AudioBufferManager::removeEntry(unsigned long) */
int _ZN7android18AudioBufferManager11removeEntryEm(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation6EffectE0_NS3_7IEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::Effect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation6EffectE0_NS3_7IEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setAudioSourceENS1_6common4V6_011AudioSourceE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19setReflectionsDelayEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setReflectionsDelay(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19setReflectionsDelayEj(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::~LoudnessEnhancerEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect17setProcessBuffersERKNS3_11AudioBufferES8_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14setAudioSourceENS1_6common4V6_011AudioSourceE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void);

/* Symbol: _ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation17VirtualizerEffectEEEPT_ */
/* Demangled: android::sp<android::hardware::audio::effect::V6_0::IEffect>::sp<android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect>(android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect*) */
int _ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation17VirtualizerEffectEEEPT_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setRoomHfLevelEs */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setRoomHfLevel(short) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setRoomHfLevelEs(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperD0Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper::~AudioBufferWrapper() */
int _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect24sendCommandReturningDataEiPKcPjPv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sendCommandReturningData(int, char const*, unsigned int*, void*) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect24sendCommandReturningDataEiPKcPjPv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory16createEffectImplERKNS1_6common4V6_04UuidEiiiNSt3__18functionIFvNS3_6ResultERKNS_2spINS3_7IEffectEEEmEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EffectsFactory::createEffectImpl(android::hardware::audio::common::V6_0::Uuid const&, int, int, int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::sp<android::hardware::audio::effect::V6_0::IEffect> const&, unsigned long)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory16createEffectImplERKNS1_6common4V6_04UuidEiiiNSt3__18functionIFvNS3_6ResultERKNS_2spINS3_7IEffectEEEmEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect16setParameterImplEjPKvjS7_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setParameterImpl(unsigned int, void const*, unsigned int, void const*) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect16setParameterImplEjPKvjS7_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect17propertiesFromHalERK14s_agc_settingsPNS3_27IAutomaticGainControlEffect13AllPropertiesE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::propertiesFromHal(s_agc_settings const&, android::hardware::audio::effect::V6_0::IAutomaticGainControlEffect::AllProperties*) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect17propertiesFromHalERK14s_agc_settingsPNS3_27IAutomaticGainControlEffect13AllPropertiesE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void);

/* Symbol: _ZN7android8hardware12MQDescriptorINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EEC2EmP13native_handlemb */
/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned long, native_handle*, unsigned long, bool) */
int _ZN7android8hardware12MQDescriptorINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EEC2EmP13native_handlemb(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect10getDensityENSt3__18functionIFvNS3_6ResultEsEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getDensity(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect10getDensityENSt3__18functionIFvNS3_6ResultEsEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect5resetEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::reset() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect5resetEv(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation6EffectE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::Effect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation6EffectE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect4initEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::init() */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect4initEv(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EEC2Emb */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1>::MessageQueue(unsigned long, bool) */
int _ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EEC2Emb(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect4initEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::init() */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect4initEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect5closeEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::close() */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect5closeEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14setInputDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setInputDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14setInputDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectC2EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::AutomaticGainControlEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectC2EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect5closeEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::close() */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect5closeEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect12setParameterERKNS0_8hidl_vecIhEES9_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect12setParameterERKNS0_8hidl_vecIhEES9_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectC2EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::DownmixEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectC2EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD1Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::~LoudnessEnhancerEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::~AutomaticGainControlEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD1Ev(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation13DownmixEffectE0_NS3_7IEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::DownmixEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation13DownmixEffectE0_NS3_7IEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::~VisualizerEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD0Ev(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation13DownmixEffectE0_NS3_14IDownmixEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IDownmixEffect-in-android::hardware::audio::effect::V6_0::implementation::DownmixEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation13DownmixEffectE0_NS3_14IDownmixEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD0Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::~VirtualizerEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect17setProcessBuffersERKNS3_11AudioBufferES8_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect12setParameterERKNS0_8hidl_vecIhEES9_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect12setParameterERKNS0_8hidl_vecIhEES9_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect4initEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::init() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect4initEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect17setProcessBuffersERKNS3_11AudioBufferES8_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect9setDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect9setDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16setAllPropertiesERKNS3_26IEnvironmentalReverbEffect13AllPropertiesE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setAllProperties(android::hardware::audio::effect::V6_0::IEnvironmentalReverbEffect::AllProperties const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16setAllPropertiesERKNS3_26IEnvironmentalReverbEffect13AllPropertiesE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect17setProcessBuffersERKNS3_11AudioBufferES8_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectE */
/* Demangled: vtable for android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect */
extern void* _ZTVN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect7offloadERKNS3_22EffectOffloadParameterE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect7offloadERKNS3_22EffectOffloadParameterE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect5closeEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::close() */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect5closeEv(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectE0_NS3_7IEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectE0_NS3_7IEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect13getConfigImplEiPKcNSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getConfigImpl(int, char const*, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect13getConfigImplEiPKcNSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14getRoomHfLevelENSt3__18functionIFvNS3_6ResultEsEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getRoomHfLevel(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14getRoomHfLevelENSt3__18functionIFvNS3_6ResultEsEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect14setInputDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setInputDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect14setInputDeviceEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getDiffusionENSt3__18functionIFvNS3_6ResultEsEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getDiffusion(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getDiffusionENSt3__18functionIFvNS3_6ResultEsEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect5closeEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::close() */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect5closeEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect11getStrengthENSt3__18functionIFvNS3_6ResultEtEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getStrength(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect11getStrengthENSt3__18functionIFvNS3_6ResultEtEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation13DownmixEffectD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::DownmixEffect::~DownmixEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation13DownmixEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect9setDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect9setDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect17setProcessBuffersERKNS3_11AudioBufferES8_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect17setProcessBuffersERKNS3_11AudioBufferES8_(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::~EnvironmentalReverbEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect7offloadERKNS3_22EffectOffloadParameterE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect7offloadERKNS3_22EffectOffloadParameterE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect10getLatencyENSt3__18functionIFvNS3_6ResultEjEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getLatency(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect10getLatencyENSt3__18functionIFvNS3_6ResultEjEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_16IEqualizerEffect13AllPropertiesEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getAllProperties(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IEqualizerEffect::AllProperties const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_16IEqualizerEffect13AllPropertiesEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect9setDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect9setDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectC2EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::NoiseSuppressionEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectC2EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect14setInputDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setInputDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect14setInputDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setScalingModeENS3_17IVisualizerEffect11ScalingModeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setScalingMode(android::hardware::audio::effect::V6_0::IVisualizerEffect::ScalingMode) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setScalingModeENS3_17IVisualizerEffect11ScalingModeE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD0Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::~AcousticEchoCancelerEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation6EffectEEEPT_ */
/* Demangled: android::sp<android::hardware::audio::effect::V6_0::IEffect>::sp<android::hardware::audio::effect::V6_0::implementation::Effect>(android::hardware::audio::effect::V6_0::implementation::Effect*) */
int _ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation6EffectEEEPT_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setInputDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setInputDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setInputDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD0Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::~PresetReverbEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD0Ev(void);

/* Symbol: _ZN7android9SingletonINS_18AudioBufferManagerEE5sLockE */
/* Demangled: android::Singleton<android::AudioBufferManager>::sLock */
extern void* _ZN7android9SingletonINS_18AudioBufferManagerEE5sLockE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectC2EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::LoudnessEnhancerEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectC2EPP18effect_interface_s(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectE0_NS3_7IEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectE0_NS3_7IEffectE;

/* Symbol: _ZTVN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectE */
/* Demangled: vtable for android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect */
extern void* _ZTVN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD2Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::~BassBoostEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD2Ev(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectE0_NS3_16IBassBoostEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IBassBoostEffect-in-android::hardware::audio::effect::V6_0::implementation::BassBoostEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectE0_NS3_16IBassBoostEffectE;

/* Symbol: _ZN7android9SingletonINS_18AudioBufferManagerEED2Ev */
/* Demangled: android::Singleton<android::AudioBufferManager>::~Singleton() */
int _ZN7android9SingletonINS_18AudioBufferManagerEED2Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect5closeEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::close() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect5closeEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect11setStrengthEt */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setStrength(unsigned short) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect11setStrengthEt(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect7offloadERKNS3_22EffectOffloadParameterE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect7offloadERKNS3_22EffectOffloadParameterE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectC1EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::VisualizerEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectC1EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect13getTargetGainENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getTargetGain(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, int)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect13getTargetGainENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::VisualizerEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperE */
/* Demangled: vtable for android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper */
extern void* _ZTVN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect7offloadERKNS3_22EffectOffloadParameterE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect7offloadERKNS3_22EffectOffloadParameterE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect24volumeChangeNotificationERKNS0_8hidl_vecIjEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect25effectBufferConfigFromHalERK15buffer_config_sPNS3_18EffectBufferConfigE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::effectBufferConfigFromHal(buffer_config_s const&, android::hardware::audio::effect::V6_0::EffectBufferConfig*) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect25effectBufferConfigFromHalERK15buffer_config_sPNS3_18EffectBufferConfigE(void);

/* Symbol: _ZTVN7android8hardware5audio6effect4V6_014implementation14EffectsFactoryE */
/* Demangled: vtable for android::hardware::audio::effect::V6_0::implementation::EffectsFactory */
extern void* _ZTVN7android8hardware5audio6effect4V6_014implementation14EffectsFactoryE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect14setAudioSourceENS1_6common4V6_011AudioSourceE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_23INoiseSuppressionEffect13AllPropertiesEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getAllProperties(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::AllProperties const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_23INoiseSuppressionEffect13AllPropertiesEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect17propertiesFromHalERK13s_ns_settingsPNS3_23INoiseSuppressionEffect13AllPropertiesE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::propertiesFromHal(s_ns_settings const&, android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::AllProperties*) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect17propertiesFromHalERK13s_ns_settingsPNS3_23INoiseSuppressionEffect13AllPropertiesE(void);

/* Symbol: _ZTTN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectE */
/* Demangled: VTT for android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect */
extern void* _ZTTN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectE;

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::~VirtualizerEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7offloadERKNS3_22EffectOffloadParameterE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7offloadERKNS3_22EffectOffloadParameterE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation13DownmixEffectE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::DownmixEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation13DownmixEffectE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect23effectBufferConfigToHalERKNS3_18EffectBufferConfigEP15buffer_config_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::effectBufferConfigToHal(android::hardware::audio::effect::V6_0::EffectBufferConfig const&, buffer_config_s*) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect23effectBufferConfigToHalERKNS3_18EffectBufferConfigEP15buffer_config_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect6enableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::enable() */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect6enableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9setBypassEb */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setBypass(bool) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9setBypassEb(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect14setInputDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setInputDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect14setInputDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::~PresetReverbEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12setParameterERKNS0_8hidl_vecIhEES9_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12setParameterERKNS0_8hidl_vecIhEES9_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapper4initEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper::init() */
int _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapper4initEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperD2Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper::~AudioBufferWrapper() */
int _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperD2Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect4initEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::init() */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect4initEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect7offloadERKNS3_22EffectOffloadParameterE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect7offloadERKNS3_22EffectOffloadParameterE(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect6enableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::enable() */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect6enableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect11sendCommandEiPKcjPv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sendCommand(int, char const*, unsigned int, void*) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect11sendCommandEiPKcjPv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect14setInputDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setInputDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect14setInputDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectC1EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::EqualizerEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectC1EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15getDecayHfRatioENSt3__18functionIFvNS3_6ResultEsEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getDecayHfRatio(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15getDecayHfRatioENSt3__18functionIFvNS3_6ResultEsEEE(void);

/* Symbol: _ZTTN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectE */
/* Demangled: VTT for android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect */
extern void* _ZTTN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect17setProcessBuffersERKNS3_11AudioBufferES8_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD0Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::~NoiseSuppressionEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD0Ev(void);

/* Symbol: _ZTTN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectE */
/* Demangled: VTT for android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect */
extern void* _ZTTN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect17setProcessBuffersERKNS3_11AudioBufferES8_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect14parameterToHalEjPKvjPS7_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::parameterToHal(unsigned int, void const*, unsigned int, void const**) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect14parameterToHalEjPKvjPS7_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory12createEffectERKNS1_6common4V6_04UuidEiiiNSt3__18functionIFvNS3_6ResultERKNS_2spINS3_7IEffectEEEmEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EffectsFactory::createEffect(android::hardware::audio::common::V6_0::Uuid const&, int, int, int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::sp<android::hardware::audio::effect::V6_0::IEffect> const&, unsigned long)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory12createEffectERKNS1_6common4V6_04UuidEiiiNSt3__18functionIFvNS3_6ResultERKNS_2spINS3_7IEffectEEEmEEE(void);

/* Symbol: _ZTTN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectE */
/* Demangled: VTT for android::hardware::audio::effect::V6_0::implementation::EqualizerEffect */
extern void* _ZTTN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect12setParameterERKNS0_8hidl_vecIhEES9_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect12setParameterERKNS0_8hidl_vecIhEES9_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect7disableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::disable() */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect7disableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect14setAudioSourceENS1_6common4V6_011AudioSourceE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectE0_NS3_7IEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectE0_NS3_7IEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD0Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::~VisualizerEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6EffectD1Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::~Effect() */
int _ZN7android8hardware5audio6effect4V6_014implementation6EffectD1Ev(void);

/* Symbol: _ZTVN7android8hardware5audio6effect4V6_014implementation6EffectE */
/* Demangled: vtable for android::hardware::audio::effect::V6_0::implementation::Effect */
extern void* _ZTVN7android8hardware5audio6effect4V6_014implementation6EffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD2Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::~VirtualizerEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD2Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectC2EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::BassBoostEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectC2EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect5closeEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::close() */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect5closeEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD1Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::~EnvironmentalReverbEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD1Ev(void);

/* Symbol: _ZTVN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectE */
/* Demangled: vtable for android::hardware::audio::effect::V6_0::implementation::EqualizerEffect */
extern void* _ZTVN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectE;

/* Symbol: _ZTTN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectE */
/* Demangled: VTT for android::hardware::audio::effect::V6_0::implementation::BassBoostEffect */
extern void* _ZTTN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect14setAudioSourceENS1_6common4V6_011AudioSourceE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect14setAudioSourceENS1_6common4V6_011AudioSourceE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation6EffectD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::Effect::~Effect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation6EffectD0Ev(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectE0_NS3_26IEnvironmentalReverbEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IEnvironmentalReverbEffect-in-android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectE0_NS3_26IEnvironmentalReverbEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect13getLevelRangeENSt3__18functionIFvNS3_6ResultEssEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getLevelRange(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short, short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect13getLevelRangeENSt3__18functionIFvNS3_6ResultEssEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect7offloadERKNS3_22EffectOffloadParameterE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect7offloadERKNS3_22EffectOffloadParameterE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect7disableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::disable() */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect7disableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12getEchoDelayENSt3__18functionIFvNS3_6ResultEjEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getEchoDelay(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12getEchoDelayENSt3__18functionIFvNS3_6ResultEjEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect7offloadERKNS3_22EffectOffloadParameterE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect7offloadERKNS3_22EffectOffloadParameterE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect19setSuppressionLevelENS3_23INoiseSuppressionEffect5LevelE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setSuppressionLevel(android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::Level) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect19setSuppressionLevelENS3_23INoiseSuppressionEffect5LevelE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setInputDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setInputDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setInputDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect9setDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect9setDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect14setInputDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setInputDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect14setInputDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD2Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::~AcousticEchoCancelerEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD2Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation23effectDescriptorFromHalERK19effect_descriptor_sPNS3_16EffectDescriptorE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::effectDescriptorFromHal(effect_descriptor_s const&, android::hardware::audio::effect::V6_0::EffectDescriptor*) */
int _ZN7android8hardware5audio6effect4V6_014implementation23effectDescriptorFromHalERK19effect_descriptor_sPNS3_16EffectDescriptorE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect14setAudioSourceENS1_6common4V6_011AudioSourceE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect4initEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::init() */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect4initEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD2Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::~PresetReverbEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD2Ev(void);

/* Symbol: _ZTVN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectE */
/* Demangled: vtable for android::hardware::audio::effect::V6_0::implementation::BassBoostEffect */
extern void* _ZTVN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect14setInputDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setInputDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect14setInputDeviceEj(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect12setParameterERKNS0_8hidl_vecIhEES9_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect12setParameterERKNS0_8hidl_vecIhEES9_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect11getStrengthENSt3__18functionIFvNS3_6ResultEtEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getStrength(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect11getStrengthENSt3__18functionIFvNS3_6ResultEtEEE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::~EqualizerEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectC2EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::AcousticEchoCancelerEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectC2EPP18effect_interface_s(void);

/* Symbol: _ZN7android9SingletonINS_18AudioBufferManagerEEC2Ev */
/* Demangled: android::Singleton<android::AudioBufferManager>::Singleton() */
int _ZN7android9SingletonINS_18AudioBufferManagerEEC2Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect22getBandCenterFrequencyEtNSt3__18functionIFvNS3_6ResultEjEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getBandCenterFrequency(unsigned short, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect22getBandCenterFrequencyEtNSt3__18functionIFvNS3_6ResultEjEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD1Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::~EqualizerEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectE0_NS3_7IEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::BassBoostEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectE0_NS3_7IEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectC2EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::PresetReverbEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectC2EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect11setCompGainEs */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setCompGain(short) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect11setCompGainEs(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect9setDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect9setDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect19isStrengthSupportedENSt3__18functionIFvNS3_6ResultEbEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::isStrengthSupported(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, bool)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect19isStrengthSupportedENSt3__18functionIFvNS3_6ResultEbEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect17propertiesFromHalERK17s_reverb_settingsPNS3_26IEnvironmentalReverbEffect13AllPropertiesE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::propertiesFromHal(s_reverb_settings const&, android::hardware::audio::effect::V6_0::IEnvironmentalReverbEffect::AllProperties*) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect17propertiesFromHalERK17s_reverb_settingsPNS3_26IEnvironmentalReverbEffect13AllPropertiesE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect5resetEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::reset() */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect5resetEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD1Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::~AutomaticGainControlEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect6enableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::enable() */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect6enableEv(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectE0_NS3_27IAcousticEchoCancelerEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IAcousticEchoCancelerEffect-in-android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectE0_NS3_27IAcousticEchoCancelerEffectE;

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectE0_NS3_27IAutomaticGainControlEffectE */
/* Demangled: construction vtable for android::hardware::audio::effect::V6_0::IAutomaticGainControlEffect-in-android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectE0_NS3_27IAutomaticGainControlEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect18getMeasurementModeENSt3__18functionIFvNS3_6ResultENS3_17IVisualizerEffect15MeasurementModeEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getMeasurementMode(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IVisualizerEffect::MeasurementMode)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect18getMeasurementModeENSt3__18functionIFvNS3_6ResultENS3_17IVisualizerEffect15MeasurementModeEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7setTypeENS3_14IDownmixEffect4TypeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setType(android::hardware::audio::effect::V6_0::IDownmixEffect::Type) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7setTypeENS3_14IDownmixEffect4TypeE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::~NoiseSuppressionEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD1Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectD0Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::~DownmixEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect21sContextCallToCommandE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sContextCallToCommand */
extern void* _ZN7android8hardware5audio6effect4V6_014implementation6Effect21sContextCallToCommandE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect21getVirtualizationModeENSt3__18functionIFvNS3_6ResultENS1_6common4V6_011AudioDeviceEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getVirtualizationMode(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::common::V6_0::AudioDevice)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect21getVirtualizationModeENSt3__18functionIFvNS3_6ResultENS1_6common4V6_011AudioDeviceEEEE(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEEE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect12setAudioModeENS1_6common4V6_09AudioModeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect12setAudioModeENS1_6common4V6_09AudioModeE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect11getCompGainENSt3__18functionIFvNS3_6ResultEsEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getCompGain(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect11getCompGainENSt3__18functionIFvNS3_6ResultEsEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect26sendCommandReturningStatusEiPKc */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sendCommandReturningStatus(int, char const*) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect26sendCommandReturningStatusEiPKc(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16setAllPropertiesERKNS3_27IAutomaticGainControlEffect13AllPropertiesE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setAllProperties(android::hardware::audio::effect::V6_0::IAutomaticGainControlEffect::AllProperties const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16setAllPropertiesERKNS3_27IAutomaticGainControlEffect13AllPropertiesE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect23effectOffloadParamToHalERKNS3_22EffectOffloadParameterEP22effect_offload_param_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::effectOffloadParamToHal(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&, effect_offload_param_s*) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect23effectOffloadParamToHalERKNS3_22EffectOffloadParameterEP22effect_offload_param_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectC1EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::VirtualizerEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectC1EPP18effect_interface_s(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::~AcousticEchoCancelerEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EED2Ev */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1>::~MessageQueue() */
int _ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE12do_constructEPvm(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory13getDescriptorERKNS1_6common4V6_04UuidENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EffectsFactory::getDescriptor(android::hardware::audio::common::V6_0::Uuid const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory13getDescriptorERKNS1_6common4V6_04UuidENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectC2EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::EqualizerEffect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectC2EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7offloadERKNS3_22EffectOffloadParameterE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7offloadERKNS3_22EffectOffloadParameterE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect9setDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect9setDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD2Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::~NoiseSuppressionEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD2Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect6enableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::enable() */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect6enableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect6enableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::enable() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect6enableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect4initEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::init() */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect4initEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16setAllPropertiesERKNS3_23INoiseSuppressionEffect13AllPropertiesE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setAllProperties(android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::AllProperties const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16setAllPropertiesERKNS3_23INoiseSuppressionEffect13AllPropertiesE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect9setDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect9setDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD0Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::~LoudnessEnhancerEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect19isStrengthSupportedEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::isStrengthSupported() */
int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect19isStrengthSupportedEv(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::~AutomaticGainControlEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD0Ev(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::BassBoostEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD2Ev */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::~VisualizerEffect() */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD2Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect12setAudioModeENS1_6common4V6_09AudioModeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect12setAudioModeENS1_6common4V6_09AudioModeE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect15propertiesToHalERKNS3_27IAutomaticGainControlEffect13AllPropertiesEP14s_agc_settings */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::propertiesToHal(android::hardware::audio::effect::V6_0::IAutomaticGainControlEffect::AllProperties const&, s_agc_settings*) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect15propertiesToHalERKNS3_27IAutomaticGainControlEffect13AllPropertiesEP14s_agc_settings(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void);

/* Symbol: _ZN7android8hardware12MQDescriptorINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlem */
/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned long) */
int _ZN7android8hardware12MQDescriptorINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlem(void);

/* Symbol: _ZTTN7android8hardware5audio6effect4V6_014implementation6EffectE */
/* Demangled: VTT for android::hardware::audio::effect::V6_0::implementation::Effect */
extern void* _ZTTN7android8hardware5audio6effect4V6_014implementation6EffectE;

/* Symbol: _ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation18PresetReverbEffectEEEPT_ */
/* Demangled: android::sp<android::hardware::audio::effect::V6_0::IEffect>::sp<android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect>(android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect*) */
int _ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation18PresetReverbEffectEEEPT_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect9setDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect9setDeviceEj(void);

/* Symbol: _ZN7android9SingletonINS_18AudioBufferManagerEE9sInstanceE */
/* Demangled: android::Singleton<android::AudioBufferManager>::sInstance */
extern void* _ZN7android9SingletonINS_18AudioBufferManagerEE9sInstanceE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect12setParameterERKNS0_8hidl_vecIhEES9_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect12setParameterERKNS0_8hidl_vecIhEES9_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect12setAudioModeENS1_6common4V6_09AudioModeE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect12setAudioModeENS1_6common4V6_09AudioModeE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setCaptureSizeEt */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setCaptureSize(unsigned short) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setCaptureSizeEt(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect7disableEv */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::disable() */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect7disableEv(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15propertiesToHalERKNS3_26IEnvironmentalReverbEffect13AllPropertiesEP17s_reverb_settings */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::propertiesToHal(android::hardware::audio::effect::V6_0::IEnvironmentalReverbEffect::AllProperties const&, s_reverb_settings*) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15propertiesToHalERKNS3_26IEnvironmentalReverbEffect13AllPropertiesEP17s_reverb_settings(void);

/* Symbol: _ZTCN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::EqualizerEffect */
extern void* _ZTCN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectE */
/* Demangled: vtable for android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect */
extern void* _ZTVN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectE;

/* Symbol: _ZTVN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectE */
/* Demangled: vtable for android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect */
extern void* _ZTVN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectE;

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6EffectC1EPP18effect_interface_s */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::Effect(effect_interface_s**) */
int _ZN7android8hardware5audio6effect4V6_014implementation6EffectC1EPP18effect_interface_s(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation13DownmixEffectD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::DownmixEffect::~DownmixEffect() */
int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation13DownmixEffectD0Ev(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation6Effect13setConfigImplEiPKcRKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESF_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setConfigImpl(int, char const*, android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation6Effect13setConfigImplEiPKcRKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESF_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getRoomLevelENSt3__18functionIFvNS3_6ResultEsEEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getRoomLevel(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getRoomLevelENSt3__18functionIFvNS3_6ResultEsEEE(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9setDeviceEj */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setDevice(unsigned int) */
int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9setDeviceEj(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect13setTargetGainEi */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setTargetGain(int) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect13setTargetGainEi(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_ */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void);

/* Symbol: _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE */
/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void);

/* Symbol: _ZTTN7android8hardware5audio6effect4V6_014implementation14EffectsFactoryE */
/* Demangled: VTT for android::hardware::audio::effect::V6_0::implementation::EffectsFactory */
extern void* _ZTTN7android8hardware5audio6effect4V6_014implementation14EffectsFactoryE;

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_AUDIO_EFFECT_6_0_IMPL_H */
