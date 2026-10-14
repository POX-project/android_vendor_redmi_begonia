/*
 * Reverse-Engineered Source for: android.hardware.audio@6.0-impl-mediatek.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "android_hardware_audio_6_0_impl_mediatek"

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
#include "android_hardware_audio_6_0_impl_mediatek.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device5closeEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::V6_0::implementation::Device */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio4V6_014implementation6DeviceE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getSampleRate() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut13getSampleRateEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut13getSampleRateEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::resume() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut6resumeEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut6resumeEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getHwAvSync(std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice11getHwAvSyncENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice11getHwAvSyncENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEjEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::closeInputStream(audio_stream_in*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device16closeInputStreamEP15audio_stream_in(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device16closeInputStreamEP15audio_stream_in() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::setAudioPortConfig(android::hardware::audio::common::V6_0::AudioPortConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device18setAudioPortConfigERKNS1_6common4V6_015AudioPortConfigE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device18setAudioPortConfigERKNS1_6common4V6_015AudioPortConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getHacEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13getHacEnabledENSt3__18functionIFvNS2_6ResultEbEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13getHacEnabledENSt3__18functionIFvNS2_6ResultEbEEE() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned int, native_handle*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EEC2EjP13native_handlejb(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EEC2EjP13native_handlejb() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<record_track_metadata, std::__1::allocator<record_track_metadata>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<record_track_metadata>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI21record_track_metadataRNS_9allocatorIS1_EEEC2EjjS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferI21record_track_metadataRNS_9allocatorIS1_EEEC2EjjS4_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::drain(android::hardware::audio::V6_0::AudioDrain) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut5drainENS2_10AudioDrainE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut5drainENS2_10AudioDrainE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setBtHfpEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15setBtHfpEnabledEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15setBtHfpEnabledEb() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::audioParameterChangedCallback(char const*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device29audioParameterChangedCallbackEPKcPv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device29audioParameterChangedCallbackEPKcPv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setMicrophoneDirection(android::hardware::audio::V6_0::MicrophoneDirection) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn22setMicrophoneDirectionENS2_19MicrophoneDirectionE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn22setMicrophoneDirectionENS2_19MicrophoneDirectionE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::commitRead(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE10commitReadEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE10commitReadEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getFrameCount() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut13getFrameCountEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut13getFrameCountEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut5flushEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut5flushEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::setParametersImpl(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil17setParametersImplERKNS0_8hidl_vecINS2_14ParameterValueEEES9_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14ParametersUtil17setParametersImplERKNS0_8hidl_vecINS2_14ParameterValueEEES9_() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::V6_0::implementation::Device */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio4V6_014implementation6DeviceE = NULL;

/* Demangled: android::hardware::audio::V6_0::implementation::DevicesFactory::openDevice(char const*, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IDevice> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceEPKcNSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceEPKcNSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::MessageQueue(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EEC2Ejb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EEC2Ejb() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Ejb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Ejb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getBtScoWidebandEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice23getBtScoWidebandEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice23getBtScoWidebandEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::updateAudioPatch(int, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device16updateAudioPatchEiRKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device16updateAudioPatchEiRKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::getParam(char const*, android::String8*, android::AudioParameter) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8getParamEPKcPNS_7String8ENS_14AudioParameterE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14ParametersUtil8getParamEPKcPNS_7String8ENS_14AudioParameterE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setBtScoHeadsetDebugName(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice24setBtScoHeadsetDebugNameERKNS0_11hidl_stringE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice24setBtScoHeadsetDebugNameERKNS0_11hidl_stringE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::PrimaryDevice(audio_hw_device_mtk*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceC1EP19audio_hw_device_mtk(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceC1EP19audio_hw_device_mtk() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::audio::V6_0::implementation::StreamMmap<audio_stream_in> >::sp(android::hardware::audio::V6_0::implementation::StreamMmap<audio_stream_in>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5audio4V6_014implementation10StreamMmapI15audio_stream_inEEEC2EPS7_(void) {
    ALOGD("_ZN7android2spINS_8hardware5audio4V6_014implementation10StreamMmapI15audio_stream_inEEEC2EPS7_() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::V6_0::implementation::StreamMmap<audio_stream_in> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio4V6_014implementation10StreamMmapI15audio_stream_inEE = NULL;

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setVoiceVolume(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14setVoiceVolumeEf(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14setVoiceVolumeEf() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::removeDeviceEffect(int, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18removeDeviceEffectEiy(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18removeDeviceEffectEiy() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::removeEffect(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream12removeEffectEy(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream12removeEffectEy() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::getMicrophones(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::MicrophoneInfo> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device14getMicrophonesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_14MicrophoneInfoEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device14getMicrophonesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_14MicrophoneInfoEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::halToLocation(audio_microphone_location_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13halToLocationE27audio_microphone_location_t(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13halToLocationE27audio_microphone_location_t() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::setMicMute(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device10setMicMuteEb(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device10setMicMuteEb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::getMasterVolume(std::__1::function<void (android::hardware::audio::V6_0::Result, float)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device15getMasterVolumeENSt3__18functionIFvNS2_6ResultEfEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device15getMasterVolumeENSt3__18functionIFvNS2_6ResultEfEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::updateSinkMetadata(android::hardware::audio::common::V6_0::SinkMetadata const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn18updateSinkMetadataERKNS1_6common4V6_012SinkMetadataE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn18updateSinkMetadataERKNS1_6common4V6_012SinkMetadataE() called");
    return 0;
}

/* Demangled: void std::__1::vector<record_track_metadata, std::__1::allocator<record_track_metadata> >::__push_back_slow_path<record_track_metadata const&>(record_track_metadata const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI21record_track_metadataNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI21record_track_metadataNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::clearCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut13clearCallbackEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut13clearCallbackEv() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::V6_0::implementation::StreamOut */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio4V6_014implementation9StreamOutE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::~MTKPrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getAudioPort(android::hardware::audio::common::V6_0::AudioPort const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::common::V6_0::AudioPort const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice12getAudioPortERKNS1_6common4V6_09AudioPortENSt3__18functionIFvNS2_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice12getAudioPortERKNS1_6common4V6_09AudioPortENSt3__18functionIFvNS2_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::StreamOut(android::sp<android::hardware::audio::V6_0::implementation::Device> const&, audio_stream_out*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOutC1ERKNS_2spINS3_6DeviceEEEP16audio_stream_out(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOutC1ERKNS_2spINS3_6DeviceEEEP16audio_stream_out() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getFrameSize() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream12getFrameSizeEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream12getFrameSizeEv() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::audio::V6_0::IStreamOutCallback>::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5audio4V6_018IStreamOutCallbackEE5clearEv(void) {
    ALOGD("_ZN7android2spINS_8hardware5audio4V6_018IStreamOutCallbackEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::vector<playback_track_metadata, std::__1::allocator<playback_track_metadata> >::__swap_out_circular_buffer(std::__1::__split_buffer<playback_track_metadata, std::__1::allocator<playback_track_metadata>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI23playback_track_metadataNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI23playback_track_metadataNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getTtyMode(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::IPrimaryDevice::TtyMode)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10getTtyModeENSt3__18functionIFvNS2_6ResultENS2_14IPrimaryDevice7TtyModeEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10getTtyModeENSt3__18functionIFvNS2_6ResultENS2_14IPrimaryDevice7TtyModeEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::updateRotation(android::hardware::audio::V6_0::IPrimaryDevice::Rotation) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14updateRotationENS2_14IPrimaryDevice8RotationE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14updateRotationENS2_14IPrimaryDevice8RotationE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getSupportedSampleRates(android::hardware::audio::common::V6_0::AudioFormat, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn23getSupportedSampleRatesENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn23getSupportedSampleRatesENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<playback_track_metadata, std::__1::allocator<playback_track_metadata> >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI23playback_track_metadataNS_9allocatorIS1_EEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorI23playback_track_metadataNS_9allocatorIS1_EEE7reserveEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::~MessageQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setupParametersCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice23setupParametersCallbackERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice23setupParametersCallbackERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::~PrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setHwAvSync(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn11setHwAvSyncEj(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn11setHwAvSyncEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::~StreamOut() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOutD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOutD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::analyzeStatus(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream13analyzeStatusEPKci(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream13analyzeStatusEPKci() called");
    return 0;
}

/* Demangled: android::hardware::Return<void> android::hardware::audio::V6_0::implementation::DevicesFactory::openDevice<android::hardware::audio::V6_0::implementation::Device, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IDevice> const&)> >(char const*, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IDevice> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceINS3_6DeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEEEENS0_6ReturnIvEEPKcT0_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceINS3_6DeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEEEENS0_6ReturnIvEEPKcT0_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::setHwAvSync(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream11setHwAvSyncEj(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream11setHwAvSyncEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getChannelMask() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream14getChannelMaskEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream14getChannelMaskEv() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::~MQDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getAudioDescriptionMixLevel(std::__1::function<void (android::hardware::audio::V6_0::Result, float)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut27getAudioDescriptionMixLevelENSt3__18functionIFvNS2_6ResultEfEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut27getAudioDescriptionMixLevelENSt3__18functionIFvNS2_6ResultEfEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::initCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice9initCheckEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice9initCheckEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::start() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream5startEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream5startEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::~StreamIn() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamInD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamInD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::write(android::hardware::audio::V6_0::IStreamIn::ReadStatus const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE5writeEPKS5_j(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE5writeEPKS5_j() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::start() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut5startEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut5startEv() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::V6_0::implementation::StreamOut */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio4V6_014implementation9StreamOutE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE = NULL;

/* Demangled: android::hardware::audio::V6_0::implementation::deviceAddressToHal(android::hardware::audio::common::V6_0::DeviceAddress const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation18deviceAddressToHalERKNS1_6common4V6_013DeviceAddressE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation18deviceAddressToHalERKNS1_6common4V6_013DeviceAddressE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::getMasterMute(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device13getMasterMuteENSt3__18functionIFvNS2_6ResultEbEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device13getMasterMuteENSt3__18functionIFvNS2_6ResultEbEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::openOutputStream(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::SourceMetadata const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IStreamOut> const&, android::hardware::audio::common::V6_0::AudioConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device16openOutputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_14SourceMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_10IStreamOutEEESC_EEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device16openOutputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_14SourceMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_10IStreamOutEEESC_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getChannelMask() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut14getChannelMaskEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut14getChannelMaskEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setConnectedState(android::hardware::audio::common::V6_0::DeviceAddress const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice17setConnectedStateERKN7android8hardware5audio6common4V6_013DeviceAddressEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice17setConnectedStateERKN7android8hardware5audio6common4V6_013DeviceAddressEb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getBtScoNrecEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice19getBtScoNrecEnabledENSt3__18functionIFvNS2_6ResultEbEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice19getBtScoNrecEnabledENSt3__18functionIFvNS2_6ResultEbEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setDevices(android::hardware::hidl_vec<android::hardware::audio::common::V6_0::DeviceAddress> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn10setDevicesERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn10setDevicesERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::unmapGrantorDescr(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE17unmapGrantorDescrEPvj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE17unmapGrantorDescrEPvj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getAudioPort(android::hardware::audio::common::V6_0::AudioPort const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::common::V6_0::AudioPort const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice12getAudioPortERKN7android8hardware5audio6common4V6_09AudioPortENSt3__18functionIFvNS8_4V6_06ResultESD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice12getAudioPortERKN7android8hardware5audio6common4V6_09AudioPortENSt3__18functionIFvNS8_4V6_06ResultESD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setBtScoNrecEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice19setBtScoNrecEnabledEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice19setBtScoNrecEnabledEb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::setFormat(android::hardware::audio::common::V6_0::AudioFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream9setFormatENS1_6common4V6_011AudioFormatE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream9setFormatENS1_6common4V6_011AudioFormatE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::~Stream() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6StreamD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6StreamD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::standby() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn7standbyEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn7standbyEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::halGetParameters(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device16halGetParametersEPKc(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device16halGetParametersEPKc() called");
    return 0;
}

/* Demangled: std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::common::V6_0::AudioSource)>::operator()(android::hardware::audio::V6_0::Result, android::hardware::audio::common::V6_0::AudioSource) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultENS3_6common4V6_011AudioSourceEEEclES5_S8_(void) {
    ALOGD("_ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultENS3_6common4V6_011AudioSourceEEEclES5_S8_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::addEffect(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn9addEffectEy(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn9addEffectEy() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::hardware::audio::V6_0::implementation::Device> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::PrimaryDevice(audio_hw_device_mtk*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceC2EP19audio_hw_device_mtk(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceC2EP19audio_hw_device_mtk() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getFormat() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream9getFormatEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream9getFormatEv() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::hardware::audio::V6_0::implementation::Device> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::initCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice9initCheckEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice9initCheckEv() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::MessageQueue(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EEC2Ejb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EEC2Ejb() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setTtyMode(android::hardware::audio::V6_0::IPrimaryDevice::TtyMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10setTtyModeENS2_14IPrimaryDevice7TtyModeE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10setTtyModeENS2_14IPrimaryDevice7TtyModeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getPresentationPosition(std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned long long, android::hardware::audio::V6_0::TimeSpec const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut23getPresentationPositionENSt3__18functionIFvNS2_6ResultEyRKNS2_8TimeSpecEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut23getPresentationPositionENSt3__18functionIFvNS2_6ResultEyRKNS2_8TimeSpecEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::StreamIn(android::sp<android::hardware::audio::V6_0::implementation::Device> const&, audio_stream_in*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamInC1ERKNS_2spINS3_6DeviceEEEP15audio_stream_in(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamInC1ERKNS_2spINS3_6DeviceEEEP15audio_stream_in() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::hardware::audio::V6_0::implementation::Device> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setHacEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13setHacEnabledEb(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13setHacEnabledEb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::removeEffect(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut12removeEffectEy(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut12removeEffectEy() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::setConnectedState(android::hardware::audio::common::V6_0::DeviceAddress const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device17setConnectedStateERKNS1_6common4V6_013DeviceAddressEb(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device17setConnectedStateERKNS1_6common4V6_013DeviceAddressEb() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::hardware::audio::V6_0::implementation::Device> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::setParam(char const*, android::hardware::audio::common::V6_0::DeviceAddress const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcRKNS1_6common4V6_013DeviceAddressE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcRKNS1_6common4V6_013DeviceAddressE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::~Device() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6DeviceD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6DeviceD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::Device::~Device() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android8hardware5audio4V6_014implementation6DeviceD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android8hardware5audio4V6_014implementation6DeviceD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::createMmapBuffer(int, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapBufferInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut16createMmapBufferEiNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut16createMmapBufferEiNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setConnectedState(android::hardware::audio::common::V6_0::DeviceAddress const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice17setConnectedStateERKNS1_6common4V6_013DeviceAddressEb(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice17setConnectedStateERKNS1_6common4V6_013DeviceAddressEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setAudioParameterChangedCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice32setAudioParameterChangedCallbackERKN7android2spINS3_30IAudioParameterChangedCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice32setAudioParameterChangedCallbackERKN7android2spINS3_30IAudioParameterChangedCallbackEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::~MTKPrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD1Ev() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::clearAudioParameterChangedCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device34clearAudioParameterChangedCallbackEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device34clearAudioParameterChangedCallbackEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getHwAvSync(std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice11getHwAvSyncENSt3__18functionIFvNS2_6ResultEjEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice11getHwAvSyncENSt3__18functionIFvNS2_6ResultEjEEE() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::Stream::~Stream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android8hardware5audio4V6_014implementation6StreamD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android8hardware5audio4V6_014implementation6StreamD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::V6_0::implementation::StreamIn */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio4V6_014implementation8StreamInE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setPlaybackRateParameters(android::hardware::audio::V6_0::PlaybackRate const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut25setPlaybackRateParametersERKNS2_12PlaybackRateE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut25setPlaybackRateParametersERKNS2_12PlaybackRateE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::clearAudioParameterChangedCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice34clearAudioParameterChangedCallbackEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice34clearAudioParameterChangedCallbackEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::removeDeviceEffect(int, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device18removeDeviceEffectEiy(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device18removeDeviceEffectEiy() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setMode(android::hardware::audio::common::V6_0::AudioMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice7setModeENS1_6common4V6_09AudioModeE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice7setModeENS1_6common4V6_09AudioModeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::prepareForReading(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1> const&, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&, android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1> const&, android::hardware::audio::common::V6_0::ThreadInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn17prepareForReadingEjjNSt3__18functionIFvNS2_6ResultERKNS0_12MQDescriptorINS2_9IStreamIn14ReadParametersELNS0_8MQFlavorE1EEERKNS8_IhLSB_1EEERKNS8_INS9_10ReadStatusELSB_1EEERKNS1_6common4V6_010ThreadInfoEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn17prepareForReadingEjjNSt3__18functionIFvNS2_6ResultERKNS0_12MQDescriptorINS2_9IStreamIn14ReadParametersELNS0_8MQFlavorE1EEERKNS8_IhLSB_1EEERKNS8_INS9_10ReadStatusELSB_1EEERKNS1_6common4V6_010ThreadInfoEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setCallback(android::sp<android::hardware::audio::V6_0::IStreamOutCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut11setCallbackERKNS_2spINS2_18IStreamOutCallbackEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut11setCallbackERKNS_2spINS2_18IStreamOutCallbackEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getFrameSize() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut12getFrameSizeEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut12getFrameSizeEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE = NULL;

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::StreamOut::~StreamOut() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android8hardware5audio4V6_014implementation9StreamOutD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android8hardware5audio4V6_014implementation9StreamOutD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::halSetParameters(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device16halSetParametersEPKc(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device16halSetParametersEPKc() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::setAudioParameterChangedCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device32setAudioParameterChangedCallbackERKNS_2spIN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device32setAudioParameterChangedCallbackERKNS_2spIN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::V6_0::IDevice-in-android::hardware::audio::V6_0::implementation::Device */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio4V6_014implementation6DeviceE0_NS2_7IDeviceE = NULL;

/* Demangled: std::__1::vector<record_track_metadata, std::__1::allocator<record_track_metadata> >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI21record_track_metadataNS_9allocatorIS1_EEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorI21record_track_metadataNS_9allocatorIS1_EEE7reserveEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::updateAudioPatch(int, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice16updateAudioPatchEiRKN7android8hardware8hidl_vecINS7_5audio6common4V6_015AudioPortConfigEEESF_NSt3__18functionIFvNS9_4V6_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice16updateAudioPatchEiRKN7android8hardware8hidl_vecINS7_5audio6common4V6_015AudioPortConfigEEESF_NSt3__18functionIFvNS9_4V6_06ResultEiEEE() called");
    return 0;
}

/* Demangled: std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>::operator()(android::hardware::audio::V6_0::Result, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEclES5_b(void) {
    ALOGD("_ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEclES5_b() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::V6_0::implementation::DevicesFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio4V6_014implementation14DevicesFactoryE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getTtyMode(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::IPrimaryDevice::TtyMode)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10getTtyModeENSt3__18functionIFvN7android8hardware5audio4V6_06ResultENSB_14IPrimaryDevice7TtyModeEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10getTtyModeENSt3__18functionIFvN7android8hardware5audio4V6_06ResultENSB_14IPrimaryDevice7TtyModeEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setBtScoHeadsetDebugName(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice24setBtScoHeadsetDebugNameERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice24setBtScoHeadsetDebugNameERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::~MessageQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setMicrophoneFieldDimension(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn27setMicrophoneFieldDimensionEf(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn27setMicrophoneFieldDimensionEf() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getPresentationPositionImpl(audio_stream_out*, unsigned long long*, android::hardware::audio::V6_0::TimeSpec*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut27getPresentationPositionImplEP16audio_stream_outPyPNS2_8TimeSpecE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut27getPresentationPositionImplEP16audio_stream_outPyPNS2_8TimeSpecE() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setChannelMask(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn14setChannelMaskEj(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn14setChannelMaskEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getSupportedChannelMasks(android::hardware::audio::common::V6_0::AudioFormat, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn24getSupportedChannelMasksENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn24getSupportedChannelMasksENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE() called");
    return 0;
}

/* Demangled: std::__1::function<void (bool, bool)>::operator()(bool, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvbbEEclEbb(void) {
    ALOGD("_ZNKSt3__18functionIFvbbEEclEbb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::setParam(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcb(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::setSampleRate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream13setSampleRateEj(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream13setSampleRateEj() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::audio::V6_0::IStreamOut>& android::sp<android::hardware::audio::V6_0::IStreamOut>::operator=<android::hardware::audio::V6_0::implementation::StreamOut>(android::hardware::audio::V6_0::implementation::StreamOut*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5audio4V6_010IStreamOutEEaSINS3_14implementation9StreamOutEEERS5_PT_(void) {
    ALOGD("_ZN7android2spINS_8hardware5audio4V6_010IStreamOutEEaSINS3_14implementation9StreamOutEEERS5_PT_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setAudioPortConfig(android::hardware::audio::common::V6_0::AudioPortConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18setAudioPortConfigERKNS1_6common4V6_015AudioPortConfigE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18setAudioPortConfigERKNS1_6common4V6_015AudioPortConfigE() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2Ev(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getMicrophones(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::MicrophoneInfo> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14getMicrophonesENSt3__18functionIFvN7android8hardware5audio4V6_06ResultERKNS9_8hidl_vecINSB_14MicrophoneInfoEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14getMicrophonesENSt3__18functionIFvN7android8hardware5audio4V6_06ResultERKNS9_8hidl_vecINSB_14MicrophoneInfoEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::Stream(audio_stream*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6StreamC1EP12audio_stream(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6StreamC1EP12audio_stream() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::~MQDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getBufferSize() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn13getBufferSizeEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn13getBufferSizeEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setSampleRate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn13setSampleRateEj(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn13setSampleRateEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getActiveMicrophones(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::MicrophoneInfo> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn20getActiveMicrophonesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_14MicrophoneInfoEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn20getActiveMicrophonesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_14MicrophoneInfoEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn4stopEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn4stopEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setMasterVolume(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15setMasterVolumeEf(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15setMasterVolumeEf() called");
    return 0;
}

/* Exported Object: android::hardware::details::hidl_enum_values<android::hardware::audio::V6_0::MicrophoneDirection, void> */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware7details16hidl_enum_valuesINS0_5audio4V6_019MicrophoneDirectionEvEE = NULL;

/* Demangled: android::sp<android::hardware::audio::V6_0::IStreamOutCallback>::operator=(android::sp<android::hardware::audio::V6_0::IStreamOutCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5audio4V6_018IStreamOutCallbackEEaSERKS5_(void) {
    ALOGD("_ZN7android2spINS_8hardware5audio4V6_018IStreamOutCallbackEEaSERKS5_() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::read(unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::hardware::audio::V6_0::implementation::Device> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::setParam(char const*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcf(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcf() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getBtHfpEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15getBtHfpEnabledENSt3__18functionIFvNS2_6ResultEbEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15getBtHfpEnabledENSt3__18functionIFvNS2_6ResultEbEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setBtScoNrecEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice19setBtScoNrecEnabledEb(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice19setBtScoNrecEnabledEb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getSampleRate() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn13getSampleRateEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn13getSampleRateEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setBtScoWidebandEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice23setBtScoWidebandEnabledEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice23setBtScoWidebandEnabledEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::~MTKPrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::updateAudioPatch(int, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice16updateAudioPatchEiRKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice16updateAudioPatchEiRKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getSupportedFormats(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioFormat> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream19getSupportedFormatsENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_011AudioFormatEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream19getSupportedFormatsENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_011AudioFormatEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn5closeEv() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::~MQDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getSupportedChannelMasks(android::hardware::audio::common::V6_0::AudioFormat, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut24getSupportedChannelMasksENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut24getSupportedChannelMasksENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::analyzeStatus(char const*, int, std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream13analyzeStatusEPKciRKNSt3__16vectorIiNS7_9allocatorIiEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream13analyzeStatusEPKciRKNSt3__16vectorIiNS7_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setDualMonoMode(android::hardware::audio::V6_0::DualMonoMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut15setDualMonoModeENS2_12DualMonoModeE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut15setDualMonoModeENS2_12DualMonoModeE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::setParam(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKci(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKci() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::V6_0::implementation::PrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio4V6_014implementation13PrimaryDeviceE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned int, native_handle*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EEC2EjP13native_handlejb(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EEC2EjP13native_handlejb() called");
    return 0;
}

/* Demangled: std::__1::function<void (android::hardware::audio::V6_0::Result, float)>::operator()(android::hardware::audio::V6_0::Result, float) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultEfEEclES5_f(void) {
    ALOGD("_ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultEfEEclES5_f() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::setParam(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcS6_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcS6_() called");
    return 0;
}

/* Demangled: std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::destroy(std::__1::__tree_node<unsigned int, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE(void) {
    ALOGD("_ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::MQDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EEC2Ev(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EEC2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::openInputStream(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::SinkMetadata const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IStreamIn> const&, android::hardware::audio::common::V6_0::AudioConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15openInputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_12SinkMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_9IStreamInEEESC_EEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15openInputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_12SinkMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_9IStreamInEEESC_EEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::updateRotation(android::hardware::audio::V6_0::IPrimaryDevice::Rotation) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14updateRotationEN7android8hardware5audio4V6_014IPrimaryDevice8RotationE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14updateRotationEN7android8hardware5audio4V6_014IPrimaryDevice8RotationE() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getBtScoWidebandEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice23getBtScoWidebandEnabledENSt3__18functionIFvNS2_6ResultEbEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice23getBtScoWidebandEnabledENSt3__18functionIFvNS2_6ResultEbEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::~PrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getSupportedFormats(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioFormat> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn19getSupportedFormatsENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_011AudioFormatEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn19getSupportedFormatsENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_011AudioFormatEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::MemTransaction::copyTo(android::hardware::audio::V6_0::IStreamIn::ReadStatus const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE14MemTransaction6copyToEPKS5_jj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE14MemTransaction6copyToEPKS5_jj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setAudioDescriptionMixLevel(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut27setAudioDescriptionMixLevelEf(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut27setAudioDescriptionMixLevelEf() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setBtHfpEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15setBtHfpEnabledEb(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15setBtHfpEnabledEb() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::write(android::hardware::audio::V6_0::IStreamOut::WriteStatus const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE5writeEPKS5_j(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE5writeEPKS5_j() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getPlaybackRateParameters(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::PlaybackRate const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut25getPlaybackRateParametersENSt3__18functionIFvNS2_6ResultERKNS2_12PlaybackRateEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut25getPlaybackRateParametersENSt3__18functionIFvNS2_6ResultERKNS2_12PlaybackRateEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getMicMute(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10getMicMuteENSt3__18functionIFvNS2_6ResultEbEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10getMicMuteENSt3__18functionIFvNS2_6ResultEbEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice5closeEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::halGetParameters(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream16halGetParametersEPKc(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream16halGetParametersEPKc() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::unmapGrantorDescr(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE17unmapGrantorDescrEPvj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE17unmapGrantorDescrEPvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::~StreamIn() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamInD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamInD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::unmapGrantorDescr(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE17unmapGrantorDescrEPvj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE17unmapGrantorDescrEPvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::selectPresentation(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut18selectPresentationEii(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut18selectPresentationEii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::V6_0::IStream-in-android::hardware::audio::V6_0::implementation::Stream */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio4V6_014implementation6StreamE0_NS2_7IStreamE = NULL;

/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::StreamIn::~StreamIn() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android8hardware5audio4V6_014implementation8StreamInD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android8hardware5audio4V6_014implementation8StreamInD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getMasterMute(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13getMasterMuteENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13getMasterMuteENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getMasterVolume(std::__1::function<void (android::hardware::audio::V6_0::Result, float)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15getMasterVolumeENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEfEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15getMasterVolumeENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEfEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback>::operator=(android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackEEaSERKS7_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackEEaSERKS7_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getInputBufferSize(android::hardware::audio::common::V6_0::AudioConfig const&, std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned long long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18getInputBufferSizeERKNS1_6common4V6_011AudioConfigENSt3__18functionIFvNS2_6ResultEyEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18getInputBufferSizeERKNS1_6common4V6_011AudioConfigENSt3__18functionIFvNS2_6ResultEyEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getSupportedSampleRates(android::hardware::audio::common::V6_0::AudioFormat, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream23getSupportedSampleRatesENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream23getSupportedSampleRatesENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::V6_0::implementation::StreamIn */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio4V6_014implementation8StreamInE = NULL;

/* Demangled: std::__1::function<void (android::hardware::audio::V6_0::Result, long long)>::operator()(android::hardware::audio::V6_0::Result, long long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultExEEclES5_x(void) {
    ALOGD("_ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultExEEclES5_x() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::createAudioPatch(android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice16createAudioPatchERKN7android8hardware8hidl_vecINS7_5audio6common4V6_015AudioPortConfigEEESF_NSt3__18functionIFvNS9_4V6_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice16createAudioPatchERKN7android8hardware8hidl_vecINS7_5audio6common4V6_015AudioPortConfigEEESF_NSt3__18functionIFvNS9_4V6_06ResultEiEEE() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: std::__1::function<void (android::hardware::audio::V6_0::Result, int)>::operator()(android::hardware::audio::V6_0::Result, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultEiEEclES5_i(void) {
    ALOGD("_ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultEiEEclES5_i() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::setParams(android::AudioParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil9setParamsERKNS_14AudioParameterE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14ParametersUtil9setParamsERKNS_14AudioParameterE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getMicMute(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10getMicMuteENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10getMicMuteENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setVoiceVolume(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14setVoiceVolumeEf(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14setVoiceVolumeEf() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setMasterMute(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13setMasterMuteEb(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13setMasterMuteEb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::analyzeStatus(char const*, int, std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device13analyzeStatusEPKciRKNSt3__16vectorIiNS7_9allocatorIiEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device13analyzeStatusEPKciRKNSt3__16vectorIiNS7_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned long long)>::operator()(android::hardware::audio::V6_0::Result, unsigned long long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultEyEEclES5_y(void) {
    ALOGD("_ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultEyEEclES5_y() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::V6_0::implementation::Device */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio4V6_014implementation6DeviceE = NULL;

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getDualMonoMode(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::DualMonoMode)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut15getDualMonoModeENSt3__18functionIFvNS2_6ResultENS2_12DualMonoModeEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut15getDualMonoModeENSt3__18functionIFvNS2_6ResultENS2_12DualMonoModeEEEE() called");
    return 0;
}

/* Demangled: std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned int)>::operator()(android::hardware::audio::V6_0::Result, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultEjEEclES5_j(void) {
    ALOGD("_ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultEjEEclES5_j() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: android::hardware::Return<void> android::hardware::audio::V6_0::implementation::DevicesFactory::openDevice<vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IDevice> const&)> >(char const*, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IDevice> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceIN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEEEENS0_6ReturnIvEEPKcT0_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceIN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEEEENS0_6ReturnIvEEPKcT0_() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::unmapGrantorDescr(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE17unmapGrantorDescrEPvj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE17unmapGrantorDescrEPvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::prepareForWriting(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1> const&, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&, android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1> const&, android::hardware::audio::common::V6_0::ThreadInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut17prepareForWritingEjjNSt3__18functionIFvNS2_6ResultERKNS0_12MQDescriptorINS2_10IStreamOut12WriteCommandELNS0_8MQFlavorE1EEERKNS8_IhLSB_1EEERKNS8_INS9_11WriteStatusELSB_1EEERKNS1_6common4V6_010ThreadInfoEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut17prepareForWritingEjjNSt3__18functionIFvNS2_6ResultERKNS0_12MQDescriptorINS2_10IStreamOut12WriteCommandELNS0_8MQFlavorE1EEERKNS8_IhLSB_1EEERKNS8_INS9_11WriteStatusELSB_1EEERKNS1_6common4V6_010ThreadInfoEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getSupportedSampleRates(android::hardware::audio::common::V6_0::AudioFormat, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut23getSupportedSampleRatesENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut23getSupportedSampleRatesENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::V6_0::IPrimaryDevice-in-vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE0_N7android8hardware5audio4V6_014IPrimaryDeviceE = NULL;

/* Demangled: android::hardware::audio::V6_0::implementation::Device::Device(audio_hw_device_mtk*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6DeviceC1EP19audio_hw_device_mtk(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6DeviceC1EP19audio_hw_device_mtk() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getMasterVolume(std::__1::function<void (android::hardware::audio::V6_0::Result, float)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15getMasterVolumeENSt3__18functionIFvNS2_6ResultEfEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15getMasterVolumeENSt3__18functionIFvNS2_6ResultEfEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setBtScoWidebandEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice23setBtScoWidebandEnabledEb(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice23setBtScoWidebandEnabledEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::V6_0::IStream-in-android::hardware::audio::V6_0::implementation::StreamIn */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio4V6_014implementation8StreamInE0_NS2_7IStreamE = NULL;

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlej(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlej() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getSupportedChannelMasks(android::hardware::audio::common::V6_0::AudioFormat, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream24getSupportedChannelMasksENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream24getSupportedChannelMasksENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream4stopEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream4stopEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::releaseAudioPatch(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device17releaseAudioPatchEi(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device17releaseAudioPatchEi() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: android::hardware::Return<void> android::hardware::audio::V6_0::implementation::DevicesFactory::openDevice<vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IPrimaryDevice> const&)> >(char const*, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IPrimaryDevice> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceIN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_14IPrimaryDeviceEEEEEEEENS0_6ReturnIvEEPKcT0_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceIN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_14IPrimaryDeviceEEEEEEEENS0_6ReturnIvEEPKcT0_() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MemTransaction::copyTo(unsigned char const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE14MemTransaction6copyToEPKhjj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE14MemTransaction6copyToEPKhjj() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::V6_0::implementation::StreamOut */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio4V6_014implementation9StreamOutE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::audio::V6_0::implementation::Device::~Device() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6DeviceD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6DeviceD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setEventCallback(android::sp<android::hardware::audio::V6_0::IStreamOutEventCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut16setEventCallbackERKNS_2spINS2_23IStreamOutEventCallbackEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut16setEventCallbackERKNS_2spINS2_23IStreamOutEventCallbackEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::openInputStreamImpl(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::AudioSource, android::hardware::audio::common::V6_0::AudioConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device19openInputStreamImplEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiNS6_11AudioSourceEPSA_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device19openInputStreamImplEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiNS6_11AudioSourceEPSA_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::V6_0::IPrimaryDevice-in-android::hardware::audio::V6_0::implementation::PrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio4V6_014implementation13PrimaryDeviceE0_NS2_14IPrimaryDeviceE = NULL;

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::halSetParameters(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream16halSetParametersEPKc(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream16halSetParametersEPKc() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::audio::V6_0::implementation::Stream>::sp(android::hardware::audio::V6_0::implementation::Stream*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5audio4V6_014implementation6StreamEEC2EPS5_(void) {
    ALOGD("_ZN7android2spINS_8hardware5audio4V6_014implementation6StreamEEC2EPS5_() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned int, native_handle*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EEC2EjP13native_handlejb(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EEC2EjP13native_handlejb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::standby() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut7standbyEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut7standbyEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::~MTKPrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setMicMute(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10setMicMuteEb(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10setMicMuteEb() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlej(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlej() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlej(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlej() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::MessageQueue(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EEC2Ejb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EEC2Ejb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getMmapPosition(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapPosition const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::addEffect(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut9addEffectEy(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut9addEffectEy() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::~StreamOut() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOutD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOutD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::getHwAvSync(std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device11getHwAvSyncENSt3__18functionIFvNS2_6ResultEjEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device11getHwAvSyncENSt3__18functionIFvNS2_6ResultEjEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getHacEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13getHacEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13getHacEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setScreenState(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14setScreenStateEb(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14setScreenStateEb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamMmap<audio_stream_in>::getMmapPosition(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapPosition const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation10StreamMmapI15audio_stream_inE15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation10StreamMmapI15audio_stream_inE15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::~MessageQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setMasterVolume(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15setMasterVolumeEf(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15setMasterVolumeEf() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getInputBufferSize(android::hardware::audio::common::V6_0::AudioConfig const&, std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned long long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18getInputBufferSizeERKN7android8hardware5audio6common4V6_011AudioConfigENSt3__18functionIFvNS8_4V6_06ResultEyEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18getInputBufferSizeERKN7android8hardware5audio6common4V6_011AudioConfigENSt3__18functionIFvNS8_4V6_06ResultEyEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Device::halGetParameters(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N7android8hardware5audio4V6_014implementation6Device16halGetParametersEPKc(void) {
    ALOGD("_ZThn4_N7android8hardware5audio4V6_014implementation6Device16halGetParametersEPKc() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::V6_0::IStream-in-android::hardware::audio::V6_0::implementation::StreamOut */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio4V6_014implementation9StreamOutE0_NS2_7IStreamE = NULL;

/* Demangled: android::hardware::audio::V6_0::implementation::Device::syncCallback(device_parameters_callback_event_t, audio_hw_device_set_parameters_callback*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device12syncCallbackE34device_parameters_callback_event_tP39audio_hw_device_set_parameters_callbackPv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device12syncCallbackE34device_parameters_callback_event_tP39audio_hw_device_set_parameters_callbackPv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::createAudioPatch(android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device16createAudioPatchERKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device16createAudioPatchERKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::createOrUpdateAudioPatch(int, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device24createOrUpdateAudioPatchEiRKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device24createOrUpdateAudioPatchEiRKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::PrimaryDevice::~PrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android8hardware5audio4V6_014implementation13PrimaryDeviceD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android8hardware5audio4V6_014implementation13PrimaryDeviceD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::setChannelMask(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream14setChannelMaskEj(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream14setChannelMaskEj() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned int, native_handle*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EjP13native_handlejb(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EjP13native_handlejb() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::MemTransaction::copyTo(android::hardware::audio::V6_0::IStreamOut::WriteStatus const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE14MemTransaction6copyToEPKS5_jj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE14MemTransaction6copyToEPKS5_jj() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::V6_0::IDevice-in-vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE0_N7android8hardware5audio4V6_07IDeviceE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE = NULL;

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getMicrophones(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::MicrophoneInfo> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14getMicrophonesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_14MicrophoneInfoEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14getMicrophonesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_14MicrophoneInfoEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::setParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamMmap<audio_stream_in>::createMmapBuffer(int, unsigned int, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapBufferInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation10StreamMmapI15audio_stream_inE16createMmapBufferEijNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation10StreamMmapI15audio_stream_inE16createMmapBufferEijNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getDevices(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::DeviceAddress> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut10getDevicesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut10getDevicesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::setMasterVolume(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device15setMasterVolumeEf(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device15setMasterVolumeEf() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::releaseAudioPatch(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice17releaseAudioPatchEi(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice17releaseAudioPatchEi() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getMmapPosition(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapPosition const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::read(android::hardware::audio::V6_0::IStreamOut::WriteCommand*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE4readEPS5_j(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE4readEPS5_j() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::supportsAudioPatches() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice20supportsAudioPatchesEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice20supportsAudioPatchesEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::~Stream() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6StreamD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6StreamD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::write(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::doClose() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device7doCloseEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device7doCloseEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<android::hardware::audio::V6_0::implementation::Device> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEEE = NULL;

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::unmapGrantorDescr(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE17unmapGrantorDescrEPvj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE17unmapGrantorDescrEPvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setSampleRate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut13setSampleRateEj(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut13setSampleRateEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getFormat() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut9getFormatEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut9getFormatEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getBtScoNrecEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice19getBtScoNrecEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice19getBtScoNrecEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback>::operator=(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackEEaSERKS7_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackEEaSERKS7_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::supportsAudioPatches() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device20supportsAudioPatchesEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device20supportsAudioPatchesEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::MTKPrimaryDevice(audio_hw_device_mtk*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceC1EP19audio_hw_device_mtk(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceC1EP19audio_hw_device_mtk() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getInputFramesLost() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn18getInputFramesLostEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn18getInputFramesLostEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::StreamIn(android::sp<android::hardware::audio::V6_0::implementation::Device> const&, audio_stream_in*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamInC2ERKNS_2spINS3_6DeviceEEEP15audio_stream_in(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamInC2ERKNS_2spINS3_6DeviceEEEP15audio_stream_in() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::audio::V6_0::implementation::StreamMmap<audio_stream_out> >::sp(android::hardware::audio::V6_0::implementation::StreamMmap<audio_stream_out>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5audio4V6_014implementation10StreamMmapI16audio_stream_outEEEC2EPS7_(void) {
    ALOGD("_ZN7android2spINS_8hardware5audio4V6_014implementation10StreamMmapI16audio_stream_outEEEC2EPS7_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13setParametersERKN7android8hardware8hidl_vecINS7_5audio4V6_014ParameterValueEEESE_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13setParametersERKN7android8hardware8hidl_vecINS7_5audio4V6_014ParameterValueEEESE_() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::V6_0::implementation::ParametersUtil */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio4V6_014implementation14ParametersUtilE = NULL;

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getCapturePositionImpl(audio_stream_in*, unsigned long long*, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn22getCapturePositionImplEP15audio_stream_inPyS7_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn22getCapturePositionImplEP15audio_stream_inPyS7_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getFormat() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn9getFormatEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn9getFormatEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setDevices(android::hardware::hidl_vec<android::hardware::audio::common::V6_0::DeviceAddress> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut10setDevicesERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut10setDevicesERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEE() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::MQDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EEC2Ev(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EEC2Ev() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::addDeviceEffect(int, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15addDeviceEffectEiy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15addDeviceEffectEiy() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::halToChannelMapping(audio_microphone_channel_mapping_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation19halToChannelMappingE34audio_microphone_channel_mapping_t(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation19halToChannelMappingE34audio_microphone_channel_mapping_t() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::openInputStream(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::SinkMetadata const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IStreamIn> const&, android::hardware::audio::common::V6_0::AudioConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device15openInputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_12SinkMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_9IStreamInEEESC_EEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device15openInputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_12SinkMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_9IStreamInEEESC_EEE() called");
    return 0;
}

/* Demangled: std::__1::function<void (unsigned int, unsigned int, android::hardware::audio::common::V6_0::AudioFormat)>::operator()(unsigned int, unsigned int, android::hardware::audio::common::V6_0::AudioFormat) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvjjN7android8hardware5audio6common4V6_011AudioFormatEEEclEjjS6_(void) {
    ALOGD("_ZNKSt3__18functionIFvjjN7android8hardware5audio6common4V6_011AudioFormatEEEclEjjS6_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setGain(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn7setGainEf(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn7setGainEf() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::V6_0::implementation::DevicesFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio4V6_014implementation14DevicesFactoryE = NULL;

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::createMmapBuffer(int, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapBufferInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn16createMmapBufferEiNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn16createMmapBufferEiNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getRenderPosition(std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut17getRenderPositionENSt3__18functionIFvNS2_6ResultEjEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut17getRenderPositionENSt3__18functionIFvNS2_6ResultEjEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getBtHfpEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15getBtHfpEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15getBtHfpEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::initCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device9initCheckEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device9initCheckEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Device::~Device() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N7android8hardware5audio4V6_014implementation6DeviceD1Ev(void) {
    ALOGD("_ZThn4_N7android8hardware5audio4V6_014implementation6DeviceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setMode(android::hardware::audio::common::V6_0::AudioMode) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice7setModeEN7android8hardware5audio6common4V6_09AudioModeE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice7setModeEN7android8hardware5audio6common4V6_09AudioModeE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getCapturePosition(std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned long long, unsigned long long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn18getCapturePositionENSt3__18functionIFvNS2_6ResultEyyEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn18getCapturePositionENSt3__18functionIFvNS2_6ResultEyyEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<record_track_metadata, std::__1::allocator<record_track_metadata> >::__swap_out_circular_buffer(std::__1::__split_buffer<record_track_metadata, std::__1::allocator<record_track_metadata>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI21record_track_metadataNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI21record_track_metadataNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<playback_track_metadata, std::__1::allocator<playback_track_metadata>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<playback_track_metadata>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI23playback_track_metadataRNS_9allocatorIS1_EEEC2EjjS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferI23playback_track_metadataRNS_9allocatorIS1_EEEC2EjjS4_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::openOutputStream(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::SourceMetadata const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IStreamOut> const&, android::hardware::audio::common::V6_0::AudioConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice16openOutputStreamEiRKN7android8hardware5audio6common4V6_013DeviceAddressERKNSA_11AudioConfigEiRKNSA_14SourceMetadataENSt3__18functionIFvNS8_4V6_06ResultERKNS6_2spINSM_10IStreamOutEEESG_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice16openOutputStreamEiRKN7android8hardware5audio6common4V6_013DeviceAddressERKNSA_11AudioConfigEiRKNSA_14SourceMetadataENSt3__18functionIFvNS8_4V6_06ResultERKNS6_2spINSM_10IStreamOutEEESG_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::Device(audio_hw_device_mtk*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6DeviceC2EP19audio_hw_device_mtk(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6DeviceC2EP19audio_hw_device_mtk() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Device::halSetParameters(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N7android8hardware5audio4V6_014implementation6Device16halSetParametersEPKc(void) {
    ALOGD("_ZThn4_N7android8hardware5audio4V6_014implementation6Device16halSetParametersEPKc() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Stream::~Stream() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N7android8hardware5audio4V6_014implementation6StreamD1Ev(void) {
    ALOGD("_ZThn4_N7android8hardware5audio4V6_014implementation6StreamD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::releaseAudioPatch(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice17releaseAudioPatchEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice17releaseAudioPatchEi() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice-in-vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE0_NS3_17IMTKPrimaryDeviceE = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::V6_0::implementation::DevicesFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio4V6_014implementation14DevicesFactoryE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for android::hardware::audio::V6_0::implementation::Stream */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio4V6_014implementation6StreamE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::supportsAudioPatches() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice20supportsAudioPatchesEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice20supportsAudioPatchesEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::setParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::V6_0::IDevicesFactory-in-android::hardware::audio::V6_0::implementation::DevicesFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio4V6_014implementation14DevicesFactoryE0_NS2_15IDevicesFactoryE = NULL;

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut4stopEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut4stopEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setHacEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13setHacEnabledEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13setHacEnabledEb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::getMicMute(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device10getMicMuteENSt3__18functionIFvNS2_6ResultEbEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device10getMicMuteENSt3__18functionIFvNS2_6ResultEbEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getBufferSize() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream13getBufferSizeEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream13getBufferSizeEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::V6_0::implementation::Stream */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio4V6_014implementation6StreamE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned int, native_handle*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EEC2EjP13native_handlejb(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EEC2EjP13native_handlejb() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::commitRead(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE10commitReadEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE10commitReadEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setMicMute(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10setMicMuteEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10setMicMuteEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::openInputStream(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::SinkMetadata const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IStreamIn> const&, android::hardware::audio::common::V6_0::AudioConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15openInputStreamEiRKN7android8hardware5audio6common4V6_013DeviceAddressERKNSA_11AudioConfigEiRKNSA_12SinkMetadataENSt3__18functionIFvNS8_4V6_06ResultERKNS6_2spINSM_9IStreamInEEESG_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15openInputStreamEiRKN7android8hardware5audio6common4V6_013DeviceAddressERKNSA_11AudioConfigEiRKNSA_12SinkMetadataENSt3__18functionIFvNS8_4V6_06ResultERKNS6_2spINSM_9IStreamInEEESG_EEE() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice>::operator=(vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceEEaSEPS7_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceEEaSEPS7_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setBtHfpSampleRate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18setBtHfpSampleRateEj(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18setBtHfpSampleRateEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getAudioProperties(std::__1::function<void (unsigned int, unsigned int, android::hardware::audio::common::V6_0::AudioFormat)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn18getAudioPropertiesENSt3__18functionIFvjjNS1_6common4V6_011AudioFormatEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn18getAudioPropertiesENSt3__18functionIFvjjNS1_6common4V6_011AudioFormatEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getSupportedFormats(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioFormat> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut19getSupportedFormatsENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_011AudioFormatEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut19getSupportedFormatsENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_011AudioFormatEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::pause() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut5pauseEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut5pauseEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getSampleRate() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream13getSampleRateEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream13getSampleRateEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::standby() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream7standbyEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream7standbyEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::audio::V6_0::implementation::Device>::sp(android::hardware::audio::V6_0::implementation::Device*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5audio4V6_014implementation6DeviceEEC2EPS5_(void) {
    ALOGD("_ZN7android2spINS_8hardware5audio4V6_014implementation6DeviceEEC2EPS5_() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::audio::V6_0::implementation::Device>::operator=(android::hardware::audio::V6_0::implementation::Device*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5audio4V6_014implementation6DeviceEEaSEPS5_(void) {
    ALOGD("_ZN7android2spINS_8hardware5audio4V6_014implementation6DeviceEEaSEPS5_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::~StreamIn() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamInD0Ev(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamInD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::supportsDrain() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut13supportsDrainEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut13supportsDrainEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::halToDirectionality(audio_microphone_directionality_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation19halToDirectionalityE33audio_microphone_directionality_t(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation19halToDirectionalityE33audio_microphone_directionality_t() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::setMasterMute(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device13setMasterMuteEb(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device13setMasterMuteEb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::setupParametersCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device23setupParametersCallbackERKNS_2spIN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device23setupParametersCallbackERKNS_2spIN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getFrameCount() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream13getFrameCountEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream13getFrameCountEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::removeEffect(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn12removeEffectEy(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn12removeEffectEy() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::V6_0::implementation::StreamIn */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio4V6_014implementation8StreamInE = NULL;

/* Demangled: android::sp<android::hardware::audio::V6_0::IStreamOutEventCallback>::operator=(android::sp<android::hardware::audio::V6_0::IStreamOutEventCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5audio4V6_023IStreamOutEventCallbackEEaSERKS5_(void) {
    ALOGD("_ZN7android2spINS_8hardware5audio4V6_023IStreamOutEventCallbackEEaSERKS5_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setFormat(android::hardware::audio::common::V6_0::AudioFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut9setFormatENS1_6common4V6_011AudioFormatE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut9setFormatENS1_6common4V6_011AudioFormatE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::addDeviceEffect(int, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device15addDeviceEffectEiy(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device15addDeviceEffectEiy() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::StreamIn::~StreamIn() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android8hardware5audio4V6_014implementation8StreamInD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android8hardware5audio4V6_014implementation8StreamInD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::DevicesFactory::openPrimaryDevice(std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IPrimaryDevice> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14DevicesFactory17openPrimaryDeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_14IPrimaryDeviceEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14DevicesFactory17openPrimaryDeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_14IPrimaryDeviceEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getFrameCount() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn13getFrameCountEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn13getFrameCountEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::start() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn5startEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn5startEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::V6_0::IStreamIn-in-android::hardware::audio::V6_0::implementation::StreamIn */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio4V6_014implementation8StreamInE0_NS2_9IStreamInE = NULL;

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream5closeEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::halToMicrophoneCharacteristics(android::hardware::audio::V6_0::MicrophoneInfo*, audio_microphone_characteristic_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation30halToMicrophoneCharacteristicsEPNS2_14MicrophoneInfoERK33audio_microphone_characteristic_t(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation30halToMicrophoneCharacteristicsEPNS2_14MicrophoneInfoERK33audio_microphone_characteristic_t() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::addEffect(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream9addEffectEy(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream9addEffectEy() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getFrameSize() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn12getFrameSizeEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn12getFrameSizeEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::supportsPauseAndResume(std::__1::function<void (bool, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut22supportsPauseAndResumeENSt3__18functionIFvbbEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut22supportsPauseAndResumeENSt3__18functionIFvbbEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setTtyMode(android::hardware::audio::V6_0::IPrimaryDevice::TtyMode) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10setTtyModeEN7android8hardware5audio4V6_014IPrimaryDevice7TtyModeE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10setTtyModeEN7android8hardware5audio4V6_014IPrimaryDevice7TtyModeE() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::audio::V6_0::IStreamIn>& android::sp<android::hardware::audio::V6_0::IStreamIn>::operator=<android::hardware::audio::V6_0::implementation::StreamIn>(android::hardware::audio::V6_0::implementation::StreamIn*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware5audio4V6_09IStreamInEEaSINS3_14implementation8StreamInEEERS5_PT_(void) {
    ALOGD("_ZN7android2spINS_8hardware5audio4V6_09IStreamInEEaSINS3_14implementation8StreamInEEERS5_PT_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getAudioProperties(std::__1::function<void (unsigned int, unsigned int, android::hardware::audio::common::V6_0::AudioFormat)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream18getAudioPropertiesENSt3__18functionIFvjjNS1_6common4V6_011AudioFormatEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream18getAudioPropertiesENSt3__18functionIFvjjNS1_6common4V6_011AudioFormatEEEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::MemTransaction::copyFrom(android::hardware::audio::V6_0::IStreamIn::ReadParameters*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE14MemTransaction8copyFromEPS5_jj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE14MemTransaction8copyFromEPS5_jj() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::read(android::hardware::audio::V6_0::IStreamIn::ReadParameters*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE4readEPS5_j(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE4readEPS5_j() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getDevices(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::DeviceAddress> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn10getDevicesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn10getDevicesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getMmapPosition(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapPosition const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut5closeEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut5closeEv() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::audio::V6_0::implementation::PrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware5audio4V6_014implementation13PrimaryDeviceE = NULL;

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::~MessageQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::MTKPrimaryDevice(audio_hw_device_mtk*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceC2EP19audio_hw_device_mtk(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceC2EP19audio_hw_device_mtk() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::~MTKPrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::DevicesFactory::loadAudioInterface(char const*, audio_hw_device**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14DevicesFactory18loadAudioInterfaceEPKcPP15audio_hw_device(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14DevicesFactory18loadAudioInterfaceEPKcPP15audio_hw_device() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getDevices(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::DeviceAddress> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream10getDevicesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream10getDevicesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::getParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::getParam(char const*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8getParamEPKcPb(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14ParametersUtil8getParamEPKcPb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::getInputBufferSize(android::hardware::audio::common::V6_0::AudioConfig const&, std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned long long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device18getInputBufferSizeERKNS1_6common4V6_011AudioConfigENSt3__18functionIFvNS2_6ResultEyEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device18getInputBufferSizeERKNS1_6common4V6_011AudioConfigENSt3__18functionIFvNS2_6ResultEyEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::V6_0::IDevice-in-android::hardware::audio::V6_0::implementation::PrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio4V6_014implementation13PrimaryDeviceE0_NS2_7IDeviceE = NULL;

/* Demangled: android::hardware::audio::V6_0::implementation::Device::closeOutputStream(audio_stream_out*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device17closeOutputStreamEP16audio_stream_out(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device17closeOutputStreamEP16audio_stream_out() called");
    return 0;
}

/* Demangled: std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::IPrimaryDevice::TtyMode)>::operator()(android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::IPrimaryDevice::TtyMode) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultENS4_14IPrimaryDevice7TtyModeEEEclES5_S7_(void) {
    ALOGD("_ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultENS4_14IPrimaryDevice7TtyModeEEEclES5_S7_() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Stream::halGetParameters(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N7android8hardware5audio4V6_014implementation6Stream16halGetParametersEPKc(void) {
    ALOGD("_ZThn4_N7android8hardware5audio4V6_014implementation6Stream16halGetParametersEPKc() called");
    return 0;
}

/* Demangled: std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::DualMonoMode)>::operator()(android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::DualMonoMode) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultENS4_12DualMonoModeEEEclES5_S6_(void) {
    ALOGD("_ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultENS4_12DualMonoModeEEEclES5_S6_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::~PrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::~MQDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::~StreamOut() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOutD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOutD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getMasterMute(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13getMasterMuteENSt3__18functionIFvNS2_6ResultEbEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13getMasterMuteENSt3__18functionIFvNS2_6ResultEbEEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setAudioPortConfig(android::hardware::audio::common::V6_0::AudioPortConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18setAudioPortConfigERKN7android8hardware5audio6common4V6_015AudioPortConfigE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18setAudioPortConfigERKN7android8hardware5audio6common4V6_015AudioPortConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::DevicesFactory::openDevice(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IDevice> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceERKNS0_11hidl_stringENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceERKNS0_11hidl_stringENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::createAudioPatch(android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice16createAudioPatchERKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice16createAudioPatchERKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::V6_0::implementation::Stream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio4V6_014implementation6StreamE = NULL;

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::MQDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EEC2Ev(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EEC2Ev() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlej(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlej() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getNextWriteTimestamp(std::__1::function<void (android::hardware::audio::V6_0::Result, long long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut21getNextWriteTimestampENSt3__18functionIFvNS2_6ResultExEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut21getNextWriteTimestampENSt3__18functionIFvNS2_6ResultExEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::deviceAddressFromHal(unsigned int, char const*, android::hardware::audio::common::V6_0::DeviceAddress*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation20deviceAddressFromHalEjPKcPNS1_6common4V6_013DeviceAddressE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation20deviceAddressFromHalEjPKcPNS1_6common4V6_013DeviceAddressE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::getParam(char const*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8getParamEPKcPi(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14ParametersUtil8getParamEPKcPi() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::setScreenState(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device14setScreenStateEb(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device14setScreenStateEb() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::removeDeviceEffect(int, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18removeDeviceEffectEiy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18removeDeviceEffectEiy() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::PrimaryDevice::~PrimaryDevice() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android8hardware5audio4V6_014implementation13PrimaryDeviceD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android8hardware5audio4V6_014implementation13PrimaryDeviceD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::setDevices(android::hardware::hidl_vec<android::hardware::audio::common::V6_0::DeviceAddress> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream10setDevicesERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream10setDevicesERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getAudioSource(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::common::V6_0::AudioSource)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn14getAudioSourceENSt3__18functionIFvNS2_6ResultENS1_6common4V6_011AudioSourceEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn14getAudioSourceENSt3__18functionIFvNS2_6ResultENS1_6common4V6_011AudioSourceEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamMmap<audio_stream_out>::getMmapPosition(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapPosition const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation10StreamMmapI16audio_stream_outE15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation10StreamMmapI16audio_stream_outE15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setHwAvSync(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut11setHwAvSyncEj(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut11setHwAvSyncEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::asyncCallback(stream_callback_event_t, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut13asyncCallbackE23stream_callback_event_tPvS6_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut13asyncCallbackE23stream_callback_event_tPvS6_() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IDevicesFactory */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IDevicesFactory(void) {
    ALOGD("HIDL_FETCH_IDevicesFactory() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getChannelMask() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn14getChannelMaskEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn14getChannelMaskEv() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::MQDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EEC2Ev(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EEC2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::V6_0::implementation::StreamMmap<audio_stream_out> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio4V6_014implementation10StreamMmapI16audio_stream_outEE = NULL;

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13getParametersERKN7android8hardware8hidl_vecINS7_5audio4V6_014ParameterValueEEERKNS8_INS7_11hidl_stringEEENSt3__18functionIFvNSA_6ResultESE_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13getParametersERKN7android8hardware8hidl_vecINS7_5audio4V6_014ParameterValueEEERKNS8_INS7_11hidl_stringEEENSt3__18functionIFvNSA_6ResultESE_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::getParams(android::AudioParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil9getParamsERKNS_14AudioParameterE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14ParametersUtil9getParamsERKNS_14AudioParameterE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::addDeviceEffect(int, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15addDeviceEffectEiy(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15addDeviceEffectEiy() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::openOutputStream(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::SourceMetadata const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IStreamOut> const&, android::hardware::audio::common::V6_0::AudioConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice16openOutputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_14SourceMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_10IStreamOutEEESC_EEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice16openOutputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_14SourceMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_10IStreamOutEEESC_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::~Stream() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6StreamD1Ev(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6StreamD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::~MQDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::MessageQueue(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EEC2Ejb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EEC2Ejb() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::getAudioPort(android::hardware::audio::common::V6_0::AudioPort const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::common::V6_0::AudioPort const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device12getAudioPortERKNS1_6common4V6_09AudioPortENSt3__18functionIFvNS2_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device12getAudioPortERKNS1_6common4V6_09AudioPortENSt3__18functionIFvNS2_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::close() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice5closeEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice5closeEv() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setFormat(android::hardware::audio::common::V6_0::AudioFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation8StreamIn9setFormatENS1_6common4V6_011AudioFormatE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation8StreamIn9setFormatENS1_6common4V6_011AudioFormatE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MemTransaction::copyFrom(unsigned char*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE14MemTransaction8copyFromEPhjj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE14MemTransaction8copyFromEPhjj() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Stream::halSetParameters(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N7android8hardware5audio4V6_014implementation6Stream16halSetParametersEPKc(void) {
    ALOGD("_ZThn4_N7android8hardware5audio4V6_014implementation6Stream16halSetParametersEPKc() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::updateSourceMetadata(android::hardware::audio::common::V6_0::SourceMetadata const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut20updateSourceMetadataERKNS1_6common4V6_014SourceMetadataE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut20updateSourceMetadataERKNS1_6common4V6_014SourceMetadataE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setBtHfpVolume(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14setBtHfpVolumeEf(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14setBtHfpVolumeEf() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::audio::V6_0::IStreamOut-in-android::hardware::audio::V6_0::implementation::StreamOut */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware5audio4V6_014implementation9StreamOutE0_NS2_10IStreamOutE = NULL;

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamMmap<audio_stream_out>::createMmapBuffer(int, unsigned int, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapBufferInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation10StreamMmapI16audio_stream_outE16createMmapBufferEijNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation10StreamMmapI16audio_stream_outE16createMmapBufferEijNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setMasterMute(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13setMasterMuteEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13setMasterMuteEb() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Device::~Device() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N7android8hardware5audio4V6_014implementation6DeviceD0Ev(void) {
    ALOGD("_ZThn4_N7android8hardware5audio4V6_014implementation6DeviceD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::~Device() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6DeviceD2Ev(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6DeviceD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::Device::~Device() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android8hardware5audio4V6_014implementation6DeviceD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android8hardware5audio4V6_014implementation6DeviceD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::createMmapBuffer(int, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapBufferInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Stream16createMmapBufferEiNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Stream16createMmapBufferEiNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::MemTransaction::copyFrom(android::hardware::audio::V6_0::IStreamOut::WriteCommand*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE14MemTransaction8copyFromEPS5_jj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE14MemTransaction8copyFromEPS5_jj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::hardware::audio::V6_0::implementation::Device> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Stream::~Stream() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N7android8hardware5audio4V6_014implementation6StreamD0Ev(void) {
    ALOGD("_ZThn4_N7android8hardware5audio4V6_014implementation6StreamD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::audio::V6_0::implementation::PrimaryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware5audio4V6_014implementation13PrimaryDeviceE = NULL;

/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::Stream::~Stream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android8hardware5audio4V6_014implementation6StreamD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android8hardware5audio4V6_014implementation6StreamD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getAudioProperties(std::__1::function<void (unsigned int, unsigned int, android::hardware::audio::common::V6_0::AudioFormat)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut18getAudioPropertiesENSt3__18functionIFvjjNS1_6common4V6_011AudioFormatEEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut18getAudioPropertiesENSt3__18functionIFvjjNS1_6common4V6_011AudioFormatEEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setVolume(float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut9setVolumeEff(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut9setVolumeEff() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::StreamOut(android::sp<android::hardware::audio::V6_0::implementation::Device> const&, audio_stream_out*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOutC2ERKNS_2spINS3_6DeviceEEEP16audio_stream_out(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOutC2ERKNS_2spINS3_6DeviceEEEP16audio_stream_out() called");
    return 0;
}

/* Demangled: std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned long long, android::hardware::audio::V6_0::TimeSpec const&)>::operator()(android::hardware::audio::V6_0::Result, unsigned long long, android::hardware::audio::V6_0::TimeSpec const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultEyRKNS4_8TimeSpecEEEclES5_yS8_(void) {
    ALOGD("_ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultEyRKNS4_8TimeSpecEEEclES5_yS8_() called");
    return 0;
}

/* Demangled: void std::__1::vector<playback_track_metadata, std::__1::allocator<playback_track_metadata> >::__push_back_slow_path<playback_track_metadata>(playback_track_metadata&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI23playback_track_metadataNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI23playback_track_metadataNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::getParametersImpl(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil17getParametersImplERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation14ParametersUtil17getParametersImplERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getLatency() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut10getLatencyEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut10getLatencyEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getBufferSize() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut13getBufferSizeEv(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut13getBufferSizeEv() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setChannelMask(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut14setChannelMaskEj(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut14setChannelMaskEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setBtHfpVolume(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14setBtHfpVolumeEf(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14setBtHfpVolumeEf() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setScreenState(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14setScreenStateEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14setScreenStateEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setBtHfpSampleRate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18setBtHfpSampleRateEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18setBtHfpSampleRateEj() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Device::openOutputStreamImpl(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::AudioConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6Device20openOutputStreamImplEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiPSA_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6Device20openOutputStreamImplEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiPSA_() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation13PrimaryDevice5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::Stream::Stream(audio_stream*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation6StreamC2EP12audio_stream(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation6StreamC2EP12audio_stream() called");
    return 0;
}

/* Demangled: std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned long long, unsigned long long)>::operator()(android::hardware::audio::V6_0::Result, unsigned long long, unsigned long long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultEyyEEclES5_yy(void) {
    ALOGD("_ZNKSt3__18functionIFvN7android8hardware5audio4V6_06ResultEyyEEclES5_yy() called");
    return 0;
}

/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::asyncEventCallback(stream_event_callback_type_t, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio4V6_014implementation9StreamOut18asyncEventCallbackE28stream_event_callback_type_tPvS6_(void) {
    ALOGD("_ZN7android8hardware5audio4V6_014implementation9StreamOut18asyncEventCallbackE28stream_event_callback_type_tPvS6_() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::StreamOut::~StreamOut() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android8hardware5audio4V6_014implementation9StreamOutD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android8hardware5audio4V6_014implementation9StreamOutD1Ev() called");
    return 0;
}
