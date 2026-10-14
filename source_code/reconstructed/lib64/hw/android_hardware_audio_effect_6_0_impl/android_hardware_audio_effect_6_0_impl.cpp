/*
 * Reverse-Engineered Source for: android.hardware.audio.effect@6.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "android_hardware_audio_effect_6_0_impl"

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
#include "android_hardware_audio_effect_6_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: vtable for android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::VisualizerEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectC2EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectC2EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect5resetEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect5resetEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect14setAudioSourceENS1_6common4V6_011AudioSourceE() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::~BassBoostEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect4initEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect4initEv() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::effect::V6_0::implementation::VisualizerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::~BassBoostEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE() called");
    return 0;
}

/* Demangled: android::Singleton<android::AudioBufferManager>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_18AudioBufferManagerEED1Ev(void) {
    ALOGD("_ZN7android9SingletonINS_18AudioBufferManagerEED1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EffectsFactory::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect12setParameterERKNS0_8hidl_vecIhEES9_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect12setParameterERKNS0_8hidl_vecIhEES9_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setEchoDelay(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12setEchoDelayEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12setEchoDelayEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Exported Object: android::hardware::audio::effect::V6_0::implementation::Effect::sContextCallFunction */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware5audio6effect4V6_014implementation6Effect20sContextCallFunctionE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setLatency(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect10setLatencyEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect10setLatencyEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect12setAudioModeENS1_6common4V6_09AudioModeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect12setAudioModeENS1_6common4V6_09AudioModeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect17setProcessBuffersERKNS3_11AudioBufferES8_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setLimiterEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect17setLimiterEnabledEb(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect17setLimiterEnabledEb() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect5resetEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect5resetEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect4initEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect4initEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::~DownmixEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::analyzeStatus(char const*, char const*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect13analyzeStatusEPKcS7_S7_i(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect13analyzeStatusEPKcS7_S7_i() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getReflectionsLevel(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19getReflectionsLevelENSt3__18functionIFvNS3_6ResultEsEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19getReflectionsLevelENSt3__18functionIFvNS3_6ResultEsEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::~VirtualizerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect7offloadERKNS3_22EffectOffloadParameterE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect7offloadERKNS3_22EffectOffloadParameterE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sendCommand(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect11sendCommandEiPKc(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect11sendCommandEiPKc() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sendCommandReturningData(int, char const*, unsigned int, void*, unsigned int*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect24sendCommandReturningDataEiPKcjPvPjS8_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect24sendCommandReturningDataEiPKcjPvPjS8_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EffectsFactory::getAllDescriptors(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectDescriptor> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory17getAllDescriptorsENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_16EffectDescriptorEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory17getAllDescriptorsENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_16EffectDescriptorEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IEqualizerEffect-in-android::hardware::audio::effect::V6_0::implementation::EqualizerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectE0_NS3_16IEqualizerEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setTargetLevel(short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14setTargetLevelEs(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14setTargetLevelEs() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setInputDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect14setInputDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect14setInputDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::EnvironmentalReverbEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectC1EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectC1EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::~LoudnessEnhancerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect4initEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect4initEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getType(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IDownmixEffect::Type)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7getTypeENSt3__18functionIFvNS3_6ResultENS3_14IDownmixEffect4TypeEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7getTypeENSt3__18functionIFvNS3_6ResultENS3_14IDownmixEffect4TypeEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setReflectionsLevel(short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19setReflectionsLevelEs(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19setReflectionsLevelEs() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::VirtualizerEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectC2EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectC2EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper::~AudioBufferWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7disableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7disableEv() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::effect::V6_0::implementation::DownmixEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio6effect4V6_014implementation13DownmixEffectE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::EffectsFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation14EffectsFactoryE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectE0_NS3_7IEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12setAudioModeENS1_6common4V6_09AudioModeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12setAudioModeENS1_6common4V6_09AudioModeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::propertiesToHal(android::hardware::audio::effect::V6_0::IEqualizerEffect::AllProperties const&, s_equalizer_settings**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect15propertiesToHalERKNS3_16IEqualizerEffect13AllPropertiesEPP20s_equalizer_settings(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect15propertiesToHalERKNS3_16IEqualizerEffect13AllPropertiesEPP20s_equalizer_settings() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getTargetLevel(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14getTargetLevelENSt3__18functionIFvNS3_6ResultEsEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14getTargetLevelENSt3__18functionIFvNS3_6ResultEsEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IEffectsFactory-in-android::hardware::audio::effect::V6_0::implementation::EffectsFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation14EffectsFactoryE0_NS3_15IEffectsFactoryE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect4initEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect4initEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setBandLevel(unsigned short, short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12setBandLevelEts(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12setBandLevelEts() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Exported Object: android::hardware::audio::effect::V6_0::implementation::Effect::sContextResultOfCommand */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware5audio6effect4V6_014implementation6Effect23sContextResultOfCommandE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sendCommandReturningStatusAndData(int, char const*, unsigned int, void*, unsigned int*, void*, unsigned int, std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect33sendCommandReturningStatusAndDataEiPKcjPvPjS8_jNSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect33sendCommandReturningStatusAndDataEiPKcjPvPjS8_jNSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setAllProperties(android::hardware::audio::effect::V6_0::IEqualizerEffect::AllProperties const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16setAllPropertiesERKNS3_16IEqualizerEffect13AllPropertiesE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16setAllPropertiesERKNS3_16IEqualizerEffect13AllPropertiesE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7disableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7disableEv() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::audio::effect::V6_0::IEffect>::sp<android::hardware::audio::effect::V6_0::implementation::VisualizerEffect>(android::hardware::audio::effect::V6_0::implementation::VisualizerEffect*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation16VisualizerEffectEEEPT_(void) {
    ALOGD("_ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation16VisualizerEffectEEEPT_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::~LoudnessEnhancerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect5closeEv() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::~VisualizerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::~Effect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6EffectD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6EffectD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect7disableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect7disableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setPreset(android::hardware::audio::effect::V6_0::IPresetReverbEffect::Preset) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9setPresetENS3_19IPresetReverbEffect6PresetE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9setPresetENS3_19IPresetReverbEffect6PresetE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::~VirtualizerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IVisualizerEffect-in-android::hardware::audio::effect::V6_0::implementation::VisualizerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectE0_NS3_17IVisualizerEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::AutomaticGainControlEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectC1EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectC1EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setDecayTime(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setDecayTimeEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setDecayTimeEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getReverbLevel(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14getReverbLevelENSt3__18functionIFvNS3_6ResultEsEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14getReverbLevelENSt3__18functionIFvNS3_6ResultEsEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::EqualizerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectE0_NS3_7IEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setDiffusion(short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setDiffusionEs(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setDiffusionEs() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getAllProperties(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IEnvironmentalReverbEffect::AllProperties const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_26IEnvironmentalReverbEffect13AllPropertiesEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_26IEnvironmentalReverbEffect13AllPropertiesEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::INoiseSuppressionEffect-in-android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectE0_NS3_23INoiseSuppressionEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect12setAudioModeENS1_6common4V6_09AudioModeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect12setAudioModeENS1_6common4V6_09AudioModeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect5resetEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect5resetEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::~EnvironmentalReverbEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect7offloadERKNS3_22EffectOffloadParameterE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect7offloadERKNS3_22EffectOffloadParameterE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect12setAudioModeENS1_6common4V6_09AudioModeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect12setAudioModeENS1_6common4V6_09AudioModeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect5closeEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect7disableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect7disableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect7disableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect7disableEv() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::~EnvironmentalReverbEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sendCommandReturningStatus(int, char const*, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect26sendCommandReturningStatusEiPKcjPv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect26sendCommandReturningStatusEiPKcjPv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getSupportedConfigsImpl(unsigned int, unsigned int, unsigned int, std::__1::function<void (unsigned int, void*)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect23getSupportedConfigsImplEjjjNSt3__18functionIFvjPvEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect23getSupportedConfigsImplEjjjNSt3__18functionIFvjPvEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::~AcousticEchoCancelerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setReverbLevel(short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setReverbLevelEs(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setReverbLevelEs() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::~PresetReverbEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect12setParameterERKNS0_8hidl_vecIhEES9_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect12setParameterERKNS0_8hidl_vecIhEES9_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect17setProcessBuffersERKNS3_11AudioBufferES8_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IEffectsFactory */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IEffectsFactory(void) {
    ALOGD("HIDL_FETCH_IEffectsFactory() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect7offloadERKNS3_22EffectOffloadParameterE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect7offloadERKNS3_22EffectOffloadParameterE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getNumBands(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect11getNumBandsENSt3__18functionIFvNS3_6ResultEtEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect11getNumBandsENSt3__18functionIFvNS3_6ResultEtEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect5resetEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect5resetEv() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::~EqualizerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectE0_NS3_7IEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::forceVirtualizationMode(android::hardware::audio::common::V6_0::AudioDevice) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect23forceVirtualizationModeENS1_6common4V6_011AudioDeviceE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect23forceVirtualizationModeENS1_6common4V6_011AudioDeviceE() called");
    return 0;
}

/* Demangled: android::Singleton<android::AudioBufferManager>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_18AudioBufferManagerEEC1Ev(void) {
    ALOGD("_ZN7android9SingletonINS_18AudioBufferManagerEEC1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect5resetEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect5resetEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setDecayHfRatio(short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15setDecayHfRatioEs(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15setDecayHfRatioEs() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::~EqualizerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::NoiseSuppressionEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectC1EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectC1EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect6enableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect6enableEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::ILoudnessEnhancerEffect-in-android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectE0_NS3_23ILoudnessEnhancerEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getPreset(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IPresetReverbEffect::Preset)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9getPresetENSt3__18functionIFvNS3_6ResultENS3_19IPresetReverbEffect6PresetEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9getPresetENSt3__18functionIFvNS3_6ResultENS3_19IPresetReverbEffect6PresetEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect17setProcessBuffersERKNS3_11AudioBufferES8_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEEE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12setAudioModeENS1_6common4V6_09AudioModeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12setAudioModeENS1_6common4V6_09AudioModeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect7disableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect7disableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::~AutomaticGainControlEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::LoudnessEnhancerEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectC1EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectC1EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getBypass(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9getBypassENSt3__18functionIFvNS3_6ResultEbEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9getBypassENSt3__18functionIFvNS3_6ResultEbEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getCurrentPreset(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16getCurrentPresetENSt3__18functionIFvNS3_6ResultEtEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16getCurrentPresetENSt3__18functionIFvNS3_6ResultEtEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getCurrentConfigImpl(unsigned int, unsigned int, std::__1::function<void (void*)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect20getCurrentConfigImplEjjNSt3__18functionIFvPvEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect20getCurrentConfigImplEjjNSt3__18functionIFvPvEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EffectsFactory::dispatchEffectInstanceCreation(effect_descriptor_s const&, effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory30dispatchEffectInstanceCreationERK19effect_descriptor_sPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory30dispatchEffectInstanceCreationERK19effect_descriptor_sPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect4initEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect4initEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setStrength(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect11setStrengthEt(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect11setStrengthEt() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect17setProcessBuffersERKNS3_11AudioBufferES8_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect12setAudioModeENS1_6common4V6_09AudioModeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect12setAudioModeENS1_6common4V6_09AudioModeE() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::~NoiseSuppressionEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD0Ev() called");
    return 0;
}

/* Demangled: android::Singleton<android::AudioBufferManager>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_18AudioBufferManagerEE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonINS_18AudioBufferManagerEE11hasInstanceEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getPresetNames(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect14getPresetNamesENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS0_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect14getPresetNamesENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS0_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect5resetEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect5resetEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::VisualizerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectE0_NS3_7IEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect7disableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect7disableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect6enableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect6enableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getBandLevel(unsigned short, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12getBandLevelEtNSt3__18functionIFvNS3_6ResultEsEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12getBandLevelEtNSt3__18functionIFvNS3_6ResultEsEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setMeasurementMode(android::hardware::audio::effect::V6_0::IVisualizerEffect::MeasurementMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect18setMeasurementModeENS3_17IVisualizerEffect15MeasurementModeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect18setMeasurementModeENS3_17IVisualizerEffect15MeasurementModeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getDecayTime(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getDecayTimeENSt3__18functionIFvNS3_6ResultEjEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getDecayTimeENSt3__18functionIFvNS3_6ResultEjEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect5resetEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect5resetEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect5closeEv() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::~PresetReverbEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect7disableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect7disableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getReflectionsDelay(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19getReflectionsDelayENSt3__18functionIFvNS3_6ResultEjEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19getReflectionsDelayENSt3__18functionIFvNS3_6ResultEjEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setInputDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect14setInputDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect14setInputDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::propertiesToHal(android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::AllProperties const&, s_ns_settings*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect15propertiesToHalERKNS3_23INoiseSuppressionEffect13AllPropertiesEP13s_ns_settings(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect15propertiesToHalERKNS3_23INoiseSuppressionEffect13AllPropertiesEP13s_ns_settings() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect6enableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect6enableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::speakerAnglesFromHal(int const*, unsigned int, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::IVirtualizerEffect::SpeakerAngle>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20speakerAnglesFromHalEPKijRNS0_8hidl_vecINS3_18IVirtualizerEffect12SpeakerAngleEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20speakerAnglesFromHalEPKijRNS0_8hidl_vecINS3_18IVirtualizerEffect12SpeakerAngleEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::~AcousticEchoCancelerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectE0_NS3_7IEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect12setParameterERKNS0_8hidl_vecIhEES9_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect12setParameterERKNS0_8hidl_vecIhEES9_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getVirtualSpeakerAngles(unsigned int, android::hardware::audio::common::V6_0::AudioDevice, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::IVirtualizerEffect::SpeakerAngle> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect23getVirtualSpeakerAnglesEjNS1_6common4V6_011AudioDeviceENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_18IVirtualizerEffect12SpeakerAngleEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect23getVirtualSpeakerAnglesEjNS1_6common4V6_011AudioDeviceENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_18IVirtualizerEffect12SpeakerAngleEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect12setParameterERKNS0_8hidl_vecIhEES9_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect12setParameterERKNS0_8hidl_vecIhEES9_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setDensity(short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect10setDensityEs(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect10setDensityEs() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::~NoiseSuppressionEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IVirtualizerEffect-in-android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectE0_NS3_18IVirtualizerEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getScalingMode(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IVisualizerEffect::ScalingMode)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14getScalingModeENSt3__18functionIFvNS3_6ResultENS3_17IVisualizerEffect11ScalingModeEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14getScalingModeENSt3__18functionIFvNS3_6ResultENS3_17IVisualizerEffect11ScalingModeEEEE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::effect::V6_0::implementation::VisualizerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect5closeEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper::AudioBufferWrapper(android::hardware::audio::effect::V6_0::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperC1ERKNS3_11AudioBufferE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperC1ERKNS3_11AudioBufferE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::effect::V6_0::implementation::DownmixEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio6effect4V6_014implementation13DownmixEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect6enableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect6enableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getCaptureSize(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14getCaptureSizeENSt3__18functionIFvNS3_6ResultEtEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14getCaptureSizeENSt3__18functionIFvNS3_6ResultEtEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect5resetEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect5resetEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect7disableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect7disableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::measure(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IVisualizerEffect::Measurement const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7measureENSt3__18functionIFvNS3_6ResultERKNS3_17IVisualizerEffect11MeasurementEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7measureENSt3__18functionIFvNS3_6ResultERKNS3_17IVisualizerEffect11MeasurementEEEE() called");
    return 0;
}

/* Demangled: android::Singleton<android::AudioBufferManager>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_18AudioBufferManagerEE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonINS_18AudioBufferManagerEE11getInstanceEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::DownmixEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectC1EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectC1EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getBandForFrequency(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect19getBandForFrequencyEjNSt3__18functionIFvNS3_6ResultEtEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect19getBandForFrequencyEjNSt3__18functionIFvNS3_6ResultEtEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::~VisualizerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::uuidToString(audio_uuid_s const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation12uuidToStringERK12audio_uuid_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation12uuidToStringERK12audio_uuid_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::~Effect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6EffectD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6EffectD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getBandFrequencyRange(unsigned short, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect21getBandFrequencyRangeEtNSt3__18functionIFvNS3_6ResultEjjEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect21getBandFrequencyRangeEtNSt3__18functionIFvNS3_6ResultEjjEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::effectConfigToHal(android::hardware::audio::effect::V6_0::EffectConfig const&, effect_config_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect17effectConfigToHalERKNS3_12EffectConfigEP15effect_config_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect17effectConfigToHalERKNS3_12EffectConfigEP15effect_config_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect5closeEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getSuppressionType(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::Type)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect18getSuppressionTypeENSt3__18functionIFvNS3_6ResultENS3_23INoiseSuppressionEffect4TypeEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect18getSuppressionTypeENSt3__18functionIFvNS3_6ResultENS3_23INoiseSuppressionEffect4TypeEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::effectAuxChannelsConfigFromHal(channel_config_s const&, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect30effectAuxChannelsConfigFromHalERK16channel_config_sPNS3_23EffectAuxChannelsConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect30effectAuxChannelsConfigFromHalERK16channel_config_sPNS3_23EffectAuxChannelsConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::Effect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6EffectC2EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6EffectC2EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect12setAudioModeENS1_6common4V6_09AudioModeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect12setAudioModeENS1_6common4V6_09AudioModeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::~EnvironmentalReverbEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectE0_NS3_7IEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::propertiesFromHal(s_equalizer_settings const&, android::hardware::audio::effect::V6_0::IEqualizerEffect::AllProperties*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect17propertiesFromHalERK20s_equalizer_settingsPNS3_16IEqualizerEffect13AllPropertiesE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect17propertiesFromHalERK20s_equalizer_settingsPNS3_16IEqualizerEffect13AllPropertiesE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect6enableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect6enableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect9setDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect9setDeviceEj() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::Effect::~Effect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation6EffectD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation6EffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setParameterERKNS0_8hidl_vecIhEES9_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setParameterERKNS0_8hidl_vecIhEES9_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect9setDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect9setDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setRoomLevel(short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setRoomLevelEs(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setRoomLevelEs() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getReverbDelay(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14getReverbDelayENSt3__18functionIFvNS3_6ResultEjEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14getReverbDelayENSt3__18functionIFvNS3_6ResultEjEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::BassBoostEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectC1EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectC1EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::analyzeCommandStatus(char const*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect20analyzeCommandStatusEPKcS7_i(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect20analyzeCommandStatusEPKcS7_i() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12setParameterERKNS0_8hidl_vecIhEES9_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12setParameterERKNS0_8hidl_vecIhEES9_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect5resetEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect5resetEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect12setAudioModeENS1_6common4V6_09AudioModeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect12setAudioModeENS1_6common4V6_09AudioModeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::isLimiterEnabled(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16isLimiterEnabledENSt3__18functionIFvNS3_6ResultEbEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16isLimiterEnabledENSt3__18functionIFvNS3_6ResultEbEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getAllProperties(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IAutomaticGainControlEffect::AllProperties const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_27IAutomaticGainControlEffect13AllPropertiesEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_27IAutomaticGainControlEffect13AllPropertiesEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::effectConfigFromHal(effect_config_s const&, android::hardware::audio::effect::V6_0::EffectConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect19effectConfigFromHalERK15effect_config_sPNS3_12EffectConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect19effectConfigFromHalERK15effect_config_sPNS3_12EffectConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE() called");
    return 0;
}

/* Demangled: android::AudioBufferManager::wrap(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::sp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18AudioBufferManager4wrapERKNS_8hardware5audio6effect4V6_011AudioBufferEPNS_2spINS4_14implementation18AudioBufferWrapperEEE(void) {
    ALOGD("_ZN7android18AudioBufferManager4wrapERKNS_8hardware5audio6effect4V6_011AudioBufferEPNS_2spINS4_14implementation18AudioBufferWrapperEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1>::write(android::hardware::audio::effect::V6_0::Result const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EE5writeEPKS5_m(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EE5writeEPKS5_m() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EffectsFactory::debugDump(android::hardware::hidl_handle const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory9debugDumpERKNS0_11hidl_handleE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory9debugDumpERKNS0_11hidl_handleE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setSuppressionType(android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::Type) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect18setSuppressionTypeENS3_23INoiseSuppressionEffect4TypeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect18setSuppressionTypeENS3_23INoiseSuppressionEffect4TypeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9setDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9setDeviceEj() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::~BassBoostEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect6enableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect6enableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getParameterImpl(unsigned int, void const*, unsigned int, unsigned int, std::__1::function<void (unsigned int, void const*)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect16getParameterImplEjPKvjjNSt3__18functionIFvjS7_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect16getParameterImplEjPKvjjNSt3__18functionIFvjS7_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::~BassBoostEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setReverbDelay(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setReverbDelayEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setReverbDelayEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::~EqualizerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE10do_compareEPKvSD_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE10do_compareEPKvSD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setAudioModeENS1_6common4V6_09AudioModeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12setAudioModeENS1_6common4V6_09AudioModeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setInputDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect14setInputDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect14setInputDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::~AutomaticGainControlEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::effectAuxChannelsConfigToHal(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&, channel_config_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect28effectAuxChannelsConfigToHalERKNS3_23EffectAuxChannelsConfigEP16channel_config_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect28effectAuxChannelsConfigToHalERKNS3_23EffectAuxChannelsConfigEP16channel_config_s() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect4initEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect4initEv() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect5closeEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::EnvironmentalReverbEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectC2EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectC2EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::AcousticEchoCancelerEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectC1EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectC1EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::audio::effect::V6_0::IEffect>::sp<android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect>(android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation22NoiseSuppressionEffectEEEPT_(void) {
    ALOGD("_ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation22NoiseSuppressionEffectEEEPT_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect17setProcessBuffersERKNS3_11AudioBufferES8_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::~DownmixEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::PresetReverbEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectC1EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectC1EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect5resetEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect5resetEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IPresetReverbEffect-in-android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectE0_NS3_19IPresetReverbEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper::AudioBufferWrapper(android::hardware::audio::effect::V6_0::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperC2ERKNS3_11AudioBufferE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperC2ERKNS3_11AudioBufferE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect6enableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect6enableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setCurrentPreset(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16setCurrentPresetEt(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16setCurrentPresetEt() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getSuppressionLevel(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::Level)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect19getSuppressionLevelENSt3__18functionIFvNS3_6ResultENS3_23INoiseSuppressionEffect5LevelEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect19getSuppressionLevelENSt3__18functionIFvNS3_6ResultENS3_23INoiseSuppressionEffect5LevelEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::capture(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7captureENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7captureENSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::AudioBufferManager::removeEntry(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18AudioBufferManager11removeEntryEm(void) {
    ALOGD("_ZN7android18AudioBufferManager11removeEntryEm() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::Effect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation6EffectE0_NS3_7IEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setAudioSourceENS1_6common4V6_011AudioSourceE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setReflectionsDelay(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19setReflectionsDelayEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect19setReflectionsDelayEj() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::~LoudnessEnhancerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect17setProcessBuffersERKNS3_11AudioBufferES8_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14setAudioSourceENS1_6common4V6_011AudioSourceE() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::audio::effect::V6_0::IEffect>::sp<android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect>(android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation17VirtualizerEffectEEEPT_(void) {
    ALOGD("_ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation17VirtualizerEffectEEEPT_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setRoomHfLevel(short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setRoomHfLevelEs(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setRoomHfLevelEs() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper::~AudioBufferWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sendCommandReturningData(int, char const*, unsigned int*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect24sendCommandReturningDataEiPKcPjPv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect24sendCommandReturningDataEiPKcPjPv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EffectsFactory::createEffectImpl(android::hardware::audio::common::V6_0::Uuid const&, int, int, int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::sp<android::hardware::audio::effect::V6_0::IEffect> const&, unsigned long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory16createEffectImplERKNS1_6common4V6_04UuidEiiiNSt3__18functionIFvNS3_6ResultERKNS_2spINS3_7IEffectEEEmEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory16createEffectImplERKNS1_6common4V6_04UuidEiiiNSt3__18functionIFvNS3_6ResultERKNS_2spINS3_7IEffectEEEmEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setParameterImpl(unsigned int, void const*, unsigned int, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect16setParameterImplEjPKvjS7_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect16setParameterImplEjPKvjS7_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::propertiesFromHal(s_agc_settings const&, android::hardware::audio::effect::V6_0::IAutomaticGainControlEffect::AllProperties*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect17propertiesFromHalERK14s_agc_settingsPNS3_27IAutomaticGainControlEffect13AllPropertiesE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect17propertiesFromHalERK14s_agc_settingsPNS3_27IAutomaticGainControlEffect13AllPropertiesE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned long, native_handle*, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EEC2EmP13native_handlemb(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EEC2EmP13native_handlemb() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getDensity(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect10getDensityENSt3__18functionIFvNS3_6ResultEsEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect10getDensityENSt3__18functionIFvNS3_6ResultEsEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect5resetEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect5resetEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::Effect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation6EffectE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect4initEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect4initEv() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1>::MessageQueue(unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EEC2Emb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EEC2Emb() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect4initEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect4initEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect5closeEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setInputDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14setInputDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect14setInputDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::AutomaticGainControlEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectC2EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectC2EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect5closeEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect12setParameterERKNS0_8hidl_vecIhEES9_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect12setParameterERKNS0_8hidl_vecIhEES9_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::DownmixEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectC2EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectC2EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::~LoudnessEnhancerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::~AutomaticGainControlEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::DownmixEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation13DownmixEffectE0_NS3_7IEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::~VisualizerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IDownmixEffect-in-android::hardware::audio::effect::V6_0::implementation::DownmixEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation13DownmixEffectE0_NS3_14IDownmixEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::~VirtualizerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect17setProcessBuffersERKNS3_11AudioBufferES8_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect12setParameterERKNS0_8hidl_vecIhEES9_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect12setParameterERKNS0_8hidl_vecIhEES9_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect4initEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect4initEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect17setProcessBuffersERKNS3_11AudioBufferES8_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect9setDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect9setDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setAllProperties(android::hardware::audio::effect::V6_0::IEnvironmentalReverbEffect::AllProperties const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16setAllPropertiesERKNS3_26IEnvironmentalReverbEffect13AllPropertiesE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16setAllPropertiesERKNS3_26IEnvironmentalReverbEffect13AllPropertiesE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect17setProcessBuffersERKNS3_11AudioBufferES8_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect7offloadERKNS3_22EffectOffloadParameterE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect7offloadERKNS3_22EffectOffloadParameterE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect5closeEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectE0_NS3_7IEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getConfigImpl(int, char const*, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect13getConfigImplEiPKcNSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect13getConfigImplEiPKcNSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getRoomHfLevel(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14getRoomHfLevelENSt3__18functionIFvNS3_6ResultEsEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14getRoomHfLevelENSt3__18functionIFvNS3_6ResultEsEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setInputDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect14setInputDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect14setInputDeviceEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getDiffusion(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getDiffusionENSt3__18functionIFvNS3_6ResultEsEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getDiffusionENSt3__18functionIFvNS3_6ResultEsEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect5closeEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getStrength(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect11getStrengthENSt3__18functionIFvNS3_6ResultEtEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect11getStrengthENSt3__18functionIFvNS3_6ResultEtEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::DownmixEffect::~DownmixEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation13DownmixEffectD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation13DownmixEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect9setDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect9setDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect17setProcessBuffersERKNS3_11AudioBufferES8_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect17setProcessBuffersERKNS3_11AudioBufferES8_() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::~EnvironmentalReverbEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect7offloadERKNS3_22EffectOffloadParameterE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect7offloadERKNS3_22EffectOffloadParameterE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getLatency(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect10getLatencyENSt3__18functionIFvNS3_6ResultEjEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect10getLatencyENSt3__18functionIFvNS3_6ResultEjEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getAllProperties(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IEqualizerEffect::AllProperties const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_16IEqualizerEffect13AllPropertiesEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_16IEqualizerEffect13AllPropertiesEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect9setDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect9setDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::NoiseSuppressionEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectC2EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectC2EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setInputDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect14setInputDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect14setInputDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setScalingMode(android::hardware::audio::effect::V6_0::IVisualizerEffect::ScalingMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setScalingModeENS3_17IVisualizerEffect11ScalingModeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setScalingModeENS3_17IVisualizerEffect11ScalingModeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::~AcousticEchoCancelerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::audio::effect::V6_0::IEffect>::sp<android::hardware::audio::effect::V6_0::implementation::Effect>(android::hardware::audio::effect::V6_0::implementation::Effect*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation6EffectEEEPT_(void) {
    ALOGD("_ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation6EffectEEEPT_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setInputDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setInputDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect14setInputDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::~PresetReverbEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD0Ev() called");
    return 0;
}

/* Exported Object: android::Singleton<android::AudioBufferManager>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonINS_18AudioBufferManagerEE5sLockE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::LoudnessEnhancerEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectC2EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectC2EPP18effect_interface_s() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectE0_NS3_7IEffectE = NULL;

/* Exported Object: vtable for android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::~BassBoostEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IBassBoostEffect-in-android::hardware::audio::effect::V6_0::implementation::BassBoostEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectE0_NS3_16IBassBoostEffectE = NULL;

/* Demangled: android::Singleton<android::AudioBufferManager>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_18AudioBufferManagerEED2Ev(void) {
    ALOGD("_ZN7android9SingletonINS_18AudioBufferManagerEED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect5closeEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setStrength(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect11setStrengthEt(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect11setStrengthEt() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect7offloadERKNS3_22EffectOffloadParameterE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect7offloadERKNS3_22EffectOffloadParameterE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::VisualizerEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectC1EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectC1EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getTargetGain(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect13getTargetGainENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect13getTargetGainENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::VisualizerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect7offloadERKNS3_22EffectOffloadParameterE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect7offloadERKNS3_22EffectOffloadParameterE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect24volumeChangeNotificationERKNS0_8hidl_vecIjEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::effectBufferConfigFromHal(buffer_config_s const&, android::hardware::audio::effect::V6_0::EffectBufferConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect25effectBufferConfigFromHalERK15buffer_config_sPNS3_18EffectBufferConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect25effectBufferConfigFromHalERK15buffer_config_sPNS3_18EffectBufferConfigE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::effect::V6_0::implementation::EffectsFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio6effect4V6_014implementation14EffectsFactoryE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect14setAudioSourceENS1_6common4V6_011AudioSourceE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getAllProperties(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::AllProperties const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_23INoiseSuppressionEffect13AllPropertiesEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16getAllPropertiesENSt3__18functionIFvNS3_6ResultERKNS3_23INoiseSuppressionEffect13AllPropertiesEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::propertiesFromHal(s_ns_settings const&, android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::AllProperties*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect17propertiesFromHalERK13s_ns_settingsPNS3_23INoiseSuppressionEffect13AllPropertiesE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect17propertiesFromHalERK13s_ns_settingsPNS3_23INoiseSuppressionEffect13AllPropertiesE() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectE = NULL;

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::~VirtualizerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7offloadERKNS3_22EffectOffloadParameterE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect7offloadERKNS3_22EffectOffloadParameterE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::DownmixEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation13DownmixEffectE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::effectBufferConfigToHal(android::hardware::audio::effect::V6_0::EffectBufferConfig const&, buffer_config_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect23effectBufferConfigToHalERKNS3_18EffectBufferConfigEP15buffer_config_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect23effectBufferConfigToHalERKNS3_18EffectBufferConfigEP15buffer_config_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect6enableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect6enableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setBypass(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9setBypassEb(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9setBypassEb() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setInputDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect14setInputDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect14setInputDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::~PresetReverbEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12setParameterERKNS0_8hidl_vecIhEES9_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12setParameterERKNS0_8hidl_vecIhEES9_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapper4initEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapper4initEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper::~AudioBufferWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18AudioBufferWrapperD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect4initEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect4initEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect7offloadERKNS3_22EffectOffloadParameterE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect7offloadERKNS3_22EffectOffloadParameterE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect6enableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect6enableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sendCommand(int, char const*, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect11sendCommandEiPKcjPv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect11sendCommandEiPKcjPv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setInputDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect14setInputDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect14setInputDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::EqualizerEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectC1EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectC1EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getDecayHfRatio(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15getDecayHfRatioENSt3__18functionIFvNS3_6ResultEsEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15getDecayHfRatioENSt3__18functionIFvNS3_6ResultEsEEE() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect17setProcessBuffersERKNS3_11AudioBufferES8_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::~NoiseSuppressionEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD0Ev() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setProcessBuffers(android::hardware::audio::effect::V6_0::AudioBuffer const&, android::hardware::audio::effect::V6_0::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect17setProcessBuffersERKNS3_11AudioBufferES8_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect17setProcessBuffersERKNS3_11AudioBufferES8_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::parameterToHal(unsigned int, void const*, unsigned int, void const**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect14parameterToHalEjPKvjPS7_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect14parameterToHalEjPKvjPS7_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EffectsFactory::createEffect(android::hardware::audio::common::V6_0::Uuid const&, int, int, int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::sp<android::hardware::audio::effect::V6_0::IEffect> const&, unsigned long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory12createEffectERKNS1_6common4V6_04UuidEiiiNSt3__18functionIFvNS3_6ResultERKNS_2spINS3_7IEffectEEEmEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory12createEffectERKNS1_6common4V6_04UuidEiiiNSt3__18functionIFvNS3_6ResultERKNS_2spINS3_7IEffectEEEmEEE() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::effect::V6_0::implementation::EqualizerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect12setParameterERKNS0_8hidl_vecIhEES9_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect12setParameterERKNS0_8hidl_vecIhEES9_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect7disableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect7disableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect14setAudioSourceENS1_6common4V6_011AudioSourceE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectE0_NS3_7IEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::~VisualizerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::~Effect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6EffectD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6EffectD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::effect::V6_0::implementation::Effect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio6effect4V6_014implementation6EffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::~VirtualizerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::BassBoostEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectC2EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectC2EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect9getConfigENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect5closeEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::~EnvironmentalReverbEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::effect::V6_0::implementation::EqualizerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectE = NULL;

/* Exported Object: VTT for android::hardware::audio::effect::V6_0::implementation::BassBoostEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect14setAudioSourceENS1_6common4V6_011AudioSourceE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect14setAudioSourceENS1_6common4V6_011AudioSourceE() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::Effect::~Effect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation6EffectD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation6EffectD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IEnvironmentalReverbEffect-in-android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffectE0_NS3_26IEnvironmentalReverbEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getLevelRange(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short, short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect13getLevelRangeENSt3__18functionIFvNS3_6ResultEssEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect13getLevelRangeENSt3__18functionIFvNS3_6ResultEssEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect7offloadERKNS3_22EffectOffloadParameterE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect7offloadERKNS3_22EffectOffloadParameterE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect7disableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect7disableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getEchoDelay(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12getEchoDelayENSt3__18functionIFvNS3_6ResultEjEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12getEchoDelayENSt3__18functionIFvNS3_6ResultEjEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect7offloadERKNS3_22EffectOffloadParameterE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect7offloadERKNS3_22EffectOffloadParameterE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setSuppressionLevel(android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::Level) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect19setSuppressionLevelENS3_23INoiseSuppressionEffect5LevelE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect19setSuppressionLevelENS3_23INoiseSuppressionEffect5LevelE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setInputDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setInputDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setInputDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::setDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect9setDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect9setDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setInputDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect14setInputDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect14setInputDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::~AcousticEchoCancelerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::effectDescriptorFromHal(effect_descriptor_s const&, android::hardware::audio::effect::V6_0::EffectDescriptor*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation23effectDescriptorFromHalERK19effect_descriptor_sPNS3_16EffectDescriptorE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation23effectDescriptorFromHalERK19effect_descriptor_sPNS3_16EffectDescriptorE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect14setAudioSourceENS1_6common4V6_011AudioSourceE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect4initEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect4initEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::~PresetReverbEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectD2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::effect::V6_0::implementation::BassBoostEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setInputDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect14setInputDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect14setInputDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect12setParameterERKNS0_8hidl_vecIhEES9_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect12setParameterERKNS0_8hidl_vecIhEES9_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getStrength(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect11getStrengthENSt3__18functionIFvNS3_6ResultEtEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect11getStrengthENSt3__18functionIFvNS3_6ResultEtEEE() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::~EqualizerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::AcousticEchoCancelerEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectC2EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectC2EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::Singleton<android::AudioBufferManager>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_18AudioBufferManagerEEC2Ev(void) {
    ALOGD("_ZN7android9SingletonINS_18AudioBufferManagerEEC2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getBandCenterFrequency(unsigned short, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect22getBandCenterFrequencyEtNSt3__18functionIFvNS3_6ResultEjEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect22getBandCenterFrequencyEtNSt3__18functionIFvNS3_6ResultEjEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::~EqualizerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IEffect-in-android::hardware::audio::effect::V6_0::implementation::BassBoostEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectE0_NS3_7IEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::PresetReverbEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectC2EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffectC2EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setCompGain(short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect11setCompGainEs(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect11setCompGainEs() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect9setDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect9setDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::isStrengthSupported(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect19isStrengthSupportedENSt3__18functionIFvNS3_6ResultEbEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect19isStrengthSupportedENSt3__18functionIFvNS3_6ResultEbEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::propertiesFromHal(s_reverb_settings const&, android::hardware::audio::effect::V6_0::IEnvironmentalReverbEffect::AllProperties*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect17propertiesFromHalERK17s_reverb_settingsPNS3_26IEnvironmentalReverbEffect13AllPropertiesE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect17propertiesFromHalERK17s_reverb_settingsPNS3_26IEnvironmentalReverbEffect13AllPropertiesE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect5resetEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect5resetEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::~AutomaticGainControlEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect6enableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect6enableEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IAcousticEchoCancelerEffect-in-android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectE0_NS3_27IAcousticEchoCancelerEffectE = NULL;

/* Exported Object: construction vtable for android::hardware::audio::effect::V6_0::IAutomaticGainControlEffect-in-android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectE0_NS3_27IAutomaticGainControlEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setConfigReverse(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect16setConfigReverseERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getMeasurementMode(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::IVisualizerEffect::MeasurementMode)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect18getMeasurementModeENSt3__18functionIFvNS3_6ResultENS3_17IVisualizerEffect15MeasurementModeEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect18getMeasurementModeENSt3__18functionIFvNS3_6ResultENS3_17IVisualizerEffect15MeasurementModeEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setType(android::hardware::audio::effect::V6_0::IDownmixEffect::Type) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7setTypeENS3_14IDownmixEffect4TypeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7setTypeENS3_14IDownmixEffect4TypeE() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::~NoiseSuppressionEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::~DownmixEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffectD0Ev() called");
    return 0;
}

/* Exported Object: android::hardware::audio::effect::V6_0::implementation::Effect::sContextCallToCommand */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware5audio6effect4V6_014implementation6Effect21sContextCallToCommandE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getVirtualizationMode(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::common::V6_0::AudioDevice)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect21getVirtualizationModeENSt3__18functionIFvNS3_6ResultENS1_6common4V6_011AudioDeviceEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect21getVirtualizationModeENSt3__18functionIFvNS3_6ResultENS1_6common4V6_011AudioDeviceEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setAudioSource(android::hardware::audio::common::V6_0::AudioSource) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect14setAudioSourceENS1_6common4V6_011AudioSourceE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEEE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect12setAudioModeENS1_6common4V6_09AudioModeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect12setAudioModeENS1_6common4V6_09AudioModeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getCompGain(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect11getCompGainENSt3__18functionIFvNS3_6ResultEsEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect11getCompGainENSt3__18functionIFvNS3_6ResultEsEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::sendCommandReturningStatus(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect26sendCommandReturningStatusEiPKc(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect26sendCommandReturningStatusEiPKc() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setAllProperties(android::hardware::audio::effect::V6_0::IAutomaticGainControlEffect::AllProperties const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16setAllPropertiesERKNS3_27IAutomaticGainControlEffect13AllPropertiesE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16setAllPropertiesERKNS3_27IAutomaticGainControlEffect13AllPropertiesE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::effectOffloadParamToHal(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&, effect_offload_param_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect23effectOffloadParamToHalERKNS3_22EffectOffloadParameterEP22effect_offload_param_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect23effectOffloadParamToHalERKNS3_22EffectOffloadParameterEP22effect_offload_param_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::VirtualizerEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectC1EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffectC1EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::~AcousticEchoCancelerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffectD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::setCurrentConfigForFeature(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect26setCurrentConfigForFeatureEjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1>::~MessageQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EffectsFactory::getDescriptor(android::hardware::audio::common::V6_0::Uuid const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory13getDescriptorERKNS1_6common4V6_04UuidENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation14EffectsFactory13getDescriptorERKNS1_6common4V6_04UuidENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::EqualizerEffect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectC2EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectC2EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::offload(android::hardware::audio::effect::V6_0::EffectOffloadParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7offloadERKNS3_22EffectOffloadParameterE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect7offloadERKNS3_22EffectOffloadParameterE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect9setDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect9setDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::~NoiseSuppressionEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect6enableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect6enableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect6enableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect6enableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect4initEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect4initEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getDescriptor(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectDescriptor const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect13getDescriptorENSt3__18functionIFvNS3_6ResultERKNS3_16EffectDescriptorEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getAuxChannelsConfig(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect20getAuxChannelsConfigENSt3__18functionIFvNS3_6ResultERKNS3_23EffectAuxChannelsConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setAllProperties(android::hardware::audio::effect::V6_0::INoiseSuppressionEffect::AllProperties const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16setAllPropertiesERKNS3_23INoiseSuppressionEffect13AllPropertiesE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect16setAllPropertiesERKNS3_23INoiseSuppressionEffect13AllPropertiesE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::getParameter(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect12getParameterERKNS0_8hidl_vecIhEEjNSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::setDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect9setDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect9setDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::~LoudnessEnhancerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect::command(unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffect7commandEjRKNS0_8hidl_vecIhEEjNSt3__18functionIFviS9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VirtualizerEffect::isStrengthSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect19isStrengthSupportedEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation17VirtualizerEffect19isStrengthSupportedEv() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::~AutomaticGainControlEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffectD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::BassBoostEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation15BassBoostEffectE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EqualizerEffect::getSupportedAuxChannelsConfigs(unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15EqualizerEffect30getSupportedAuxChannelsConfigsEjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecINS3_23EffectAuxChannelsConfigEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::~VisualizerEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffectD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::BassBoostEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation15BassBoostEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setAuxChannelsConfig(android::hardware::audio::effect::V6_0::EffectAuxChannelsConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect20setAuxChannelsConfigERKNS3_23EffectAuxChannelsConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect12setAudioModeENS1_6common4V6_09AudioModeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect12setAudioModeENS1_6common4V6_09AudioModeE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, android::wp<android::hardware::audio::effect::V6_0::implementation::AudioBufferWrapper> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tImNS_2wpINS_8hardware5audio6effect4V6_014implementation18AudioBufferWrapperEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::propertiesToHal(android::hardware::audio::effect::V6_0::IAutomaticGainControlEffect::AllProperties const&, s_agc_settings*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect15propertiesToHalERKNS3_27IAutomaticGainControlEffect13AllPropertiesEP14s_agc_settings(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect15propertiesToHalERKNS3_27IAutomaticGainControlEffect13AllPropertiesEP14s_agc_settings() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::volumeChangeNotification(android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect24volumeChangeNotificationERKNS0_8hidl_vecIjEE() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlem(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio6effect4V6_06ResultELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlem() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::effect::V6_0::implementation::Effect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio6effect4V6_014implementation6EffectE = NULL;

/* Demangled: android::sp<android::hardware::audio::effect::V6_0::IEffect>::sp<android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect>(android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation18PresetReverbEffectEEEPT_(void) {
    ALOGD("_ZN7android2spINS_8hardware5audio6effect4V6_07IEffectEEC2INS4_14implementation18PresetReverbEffectEEEPT_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::setDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect9setDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect9setDeviceEj() called");
    return 0;
}

/* Exported Object: android::Singleton<android::AudioBufferManager>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonINS_18AudioBufferManagerEE9sInstanceE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AutomaticGainControlEffect::setParameter(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect12setParameterERKNS0_8hidl_vecIhEES9_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AutomaticGainControlEffect12setParameterERKNS0_8hidl_vecIhEES9_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::setAudioMode(android::hardware::audio::common::V6_0::AudioMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect12setAudioModeENS1_6common4V6_09AudioModeE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect12setAudioModeENS1_6common4V6_09AudioModeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::setCaptureSize(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setCaptureSizeEt(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect14setCaptureSizeEt() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect7disableEv(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect7disableEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::AcousticEchoCancelerEffect::prepareForProcessing(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::effect::V6_0::Result, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation26AcousticEchoCancelerEffect20prepareForProcessingENSt3__18functionIFvNS3_6ResultERKNS0_12MQDescriptorIS8_LNS0_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::getConfigReverse(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::audio::effect::V6_0::EffectConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect16getConfigReverseENSt3__18functionIFvNS3_6ResultERKNS3_12EffectConfigEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::propertiesToHal(android::hardware::audio::effect::V6_0::IEnvironmentalReverbEffect::AllProperties const&, s_reverb_settings*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15propertiesToHalERKNS3_26IEnvironmentalReverbEffect13AllPropertiesEP17s_reverb_settings(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect15propertiesToHalERKNS3_26IEnvironmentalReverbEffect13AllPropertiesEP17s_reverb_settings() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::effect::V6_0::implementation::EqualizerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio6effect4V6_014implementation15EqualizerEffectE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffectE = NULL;

/* Exported Object: vtable for android::hardware::audio::effect::V6_0::implementation::NoiseSuppressionEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio6effect4V6_014implementation22NoiseSuppressionEffectE = NULL;

/* Demangled: android::hardware::audio::effect::V6_0::implementation::VisualizerEffect::getSupportedConfigsForFeature(unsigned int, unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, unsigned int, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation16VisualizerEffect29getSupportedConfigsForFeatureEjjjNSt3__18functionIFvNS3_6ResultEjRKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::Effect(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6EffectC1EPP18effect_interface_s(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6EffectC1EPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::DownmixEffect::getCurrentConfigForFeature(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation13DownmixEffect26getCurrentConfigForFeatureEjjNSt3__18functionIFvNS3_6ResultERKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::effect::V6_0::implementation::DownmixEffect::~DownmixEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation13DownmixEffectD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware5audio6effect4V6_014implementation13DownmixEffectD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::Effect::setConfigImpl(int, char const*, android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation6Effect13setConfigImplEiPKcRKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESF_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation6Effect13setConfigImplEiPKcRKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESF_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::getRoomLevel(std::__1::function<void (android::hardware::audio::effect::V6_0::Result, short)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getRoomLevelENSt3__18functionIFvNS3_6ResultEsEEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect12getRoomLevelENSt3__18functionIFvNS3_6ResultEsEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::EnvironmentalReverbEffect::setDevice(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9setDeviceEj(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation25EnvironmentalReverbEffect9setDeviceEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setTargetGain(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect13setTargetGainEi(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect13setTargetGainEi() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::LoudnessEnhancerEffect::setConfig(android::hardware::audio::effect::V6_0::EffectConfig const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&, android::sp<android::hardware::audio::effect::V6_0::IEffectBufferProviderCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation22LoudnessEnhancerEffect9setConfigERKNS3_12EffectConfigERKNS_2spINS3_29IEffectBufferProviderCallbackEEESD_() called");
    return 0;
}

/* Demangled: android::hardware::audio::effect::V6_0::implementation::PresetReverbEffect::setAndGetVolume(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::audio::effect::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio6effect4V6_014implementation18PresetReverbEffect15setAndGetVolumeERKNS0_8hidl_vecIjEENSt3__18functionIFvNS3_6ResultES9_EEE() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::effect::V6_0::implementation::EffectsFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio6effect4V6_014implementation14EffectsFactoryE = NULL;
