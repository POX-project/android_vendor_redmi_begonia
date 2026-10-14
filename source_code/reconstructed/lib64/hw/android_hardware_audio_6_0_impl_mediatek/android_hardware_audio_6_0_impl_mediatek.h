/*
 * Reverse-Engineered ABI Specification for: android.hardware.audio@6.0-impl-mediatek.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.audio@6.0-impl-mediatek.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_AUDIO_6_0_IMPL_MEDIATEK_H
#define BEGONIA_RE_ANDROID_HARDWARE_AUDIO_6_0_IMPL_MEDIATEK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut11setHwAvSyncEj */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setHwAvSync(unsigned int) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut11setHwAvSyncEj(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device12getAudioPortERKNS1_6common4V6_09AudioPortENSt3__18functionIFvNS2_6ResultES9_EEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::getAudioPort(android::hardware::audio::common::V6_0::AudioPort const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::common::V6_0::AudioPort const&)>) */
int _ZN7android8hardware5audio4V6_014implementation6Device12getAudioPortERKNS1_6common4V6_09AudioPortENSt3__18functionIFvNS2_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn14getAudioSourceENSt3__18functionIFvNS2_6ResultENS1_6common4V6_011AudioSourceEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getAudioSource(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::common::V6_0::AudioSource)>) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn14getAudioSourceENSt3__18functionIFvNS2_6ResultENS1_6common4V6_011AudioSourceEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut16createMmapBufferEiNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::createMmapBuffer(int, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapBufferInfo const&)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut16createMmapBufferEiNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut18getAudioPropertiesENSt3__18functionIFvjjNS1_6common4V6_011AudioFormatEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getAudioProperties(std::__1::function<void (unsigned int, unsigned int, android::hardware::audio::common::V6_0::AudioFormat)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut18getAudioPropertiesENSt3__18functionIFvjjNS1_6common4V6_011AudioFormatEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13setHacEnabledEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setHacEnabled(bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13setHacEnabledEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice16openOutputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_14SourceMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_10IStreamOutEEESC_EEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::openOutputStream(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::SourceMetadata const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IStreamOut> const&, android::hardware::audio::common::V6_0::AudioConfig const&)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice16openOutputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_14SourceMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_10IStreamOutEEESC_EEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18removeDeviceEffectEim */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::removeDeviceEffect(int, unsigned long) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18removeDeviceEffectEim(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn13getBufferSizeEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getBufferSize() */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn13getBufferSizeEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn9setFormatENS1_6common4V6_011AudioFormatE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setFormat(android::hardware::audio::common::V6_0::AudioFormat) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn9setFormatENS1_6common4V6_011AudioFormatE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceC2EP19audio_hw_device_mtk */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::PrimaryDevice(audio_hw_device_mtk*) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceC2EP19audio_hw_device_mtk(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6StreamC2EP12audio_stream */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::Stream(audio_stream*) */
int _ZN7android8hardware5audio4V6_014implementation6StreamC2EP12audio_stream(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn19getSupportedFormatsENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_011AudioFormatEEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getSupportedFormats(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioFormat> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn19getSupportedFormatsENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_011AudioFormatEEEEEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice11getHwAvSyncENSt3__18functionIFvNS2_6ResultEjEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getHwAvSync(std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned int)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice11getHwAvSyncENSt3__18functionIFvNS2_6ResultEjEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn11setHwAvSyncEj */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setHwAvSync(unsigned int) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn11setHwAvSyncEj(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamInD1Ev */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::~StreamIn() */
int _ZN7android8hardware5audio4V6_014implementation8StreamInD1Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOutC1ERKNS_2spINS3_6DeviceEEEP16audio_stream_out */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::StreamOut(android::sp<android::hardware::audio::V6_0::implementation::Device> const&, audio_stream_out*) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOutC1ERKNS_2spINS3_6DeviceEEEP16audio_stream_out(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio4V6_014implementation6StreamD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::Stream::~Stream() */
int _ZTv0_n24_N7android8hardware5audio4V6_014implementation6StreamD1Ev(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15setBtHfpEnabledEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setBtHfpEnabled(bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15setBtHfpEnabledEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE0_N7android8hardware5audio4V6_07IDeviceE */
/* Demangled: construction vtable for android::hardware::audio::V6_0::IDevice-in-vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE0_N7android8hardware5audio4V6_07IDeviceE;

/* Symbol: HIDL_FETCH_IDevicesFactory */
/* Demangled: HIDL_FETCH_IDevicesFactory */
int HIDL_FETCH_IDevicesFactory(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceIN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEEEENS0_6ReturnIvEEPKcT0_ */
/* Demangled: android::hardware::Return<void> android::hardware::audio::V6_0::implementation::DevicesFactory::openDevice<vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IDevice> const&)> >(char const*, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IDevice> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceIN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEEEENS0_6ReturnIvEEPKcT0_(void);

/* Symbol: _ZTVN7android8hardware5audio4V6_014implementation13PrimaryDeviceE */
/* Demangled: vtable for android::hardware::audio::V6_0::implementation::PrimaryDevice */
extern void* _ZTVN7android8hardware5audio4V6_014implementation13PrimaryDeviceE;

/* Symbol: _ZThn8_N7android8hardware5audio4V6_014implementation6StreamD1Ev */
/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Stream::~Stream() */
int _ZThn8_N7android8hardware5audio4V6_014implementation6StreamD1Ev(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio4V6_014implementation9StreamOutD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::StreamOut::~StreamOut() */
int _ZTv0_n24_N7android8hardware5audio4V6_014implementation9StreamOutD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15addDeviceEffectEim */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::addDeviceEffect(int, unsigned long) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15addDeviceEffectEim(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18getInputBufferSizeERKN7android8hardware5audio6common4V6_011AudioConfigENSt3__18functionIFvNS8_4V6_06ResultEmEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getInputBufferSize(android::hardware::audio::common::V6_0::AudioConfig const&, std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned long)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18getInputBufferSizeERKN7android8hardware5audio6common4V6_011AudioConfigENSt3__18functionIFvNS8_4V6_06ResultEmEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device13setMasterMuteEb */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::setMasterMute(bool) */
int _ZN7android8hardware5audio4V6_014implementation6Device13setMasterMuteEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10setMicMuteEb */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setMicMute(bool) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10setMicMuteEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice9initCheckEv */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::initCheck() */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice9initCheckEv(void);

/* Symbol: _ZTTN7android8hardware5audio4V6_014implementation8StreamInE */
/* Demangled: VTT for android::hardware::audio::V6_0::implementation::StreamIn */
extern void* _ZTTN7android8hardware5audio4V6_014implementation8StreamInE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device19openInputStreamImplEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiNS6_11AudioSourceEPSA_ */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::openInputStreamImpl(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::AudioSource, android::hardware::audio::common::V6_0::AudioConfig*) */
int _ZN7android8hardware5audio4V6_014implementation6Device19openInputStreamImplEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiNS6_11AudioSourceEPSA_(void);

/* Symbol: _ZTTN7android8hardware5audio4V6_014implementation14DevicesFactoryE */
/* Demangled: VTT for android::hardware::audio::V6_0::implementation::DevicesFactory */
extern void* _ZTTN7android8hardware5audio4V6_014implementation14DevicesFactoryE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice16updateAudioPatchEiRKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::updateAudioPatch(int, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, int)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice16updateAudioPatchEiRKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice19setBtScoNrecEnabledEb */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setBtScoNrecEnabled(bool) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice19setBtScoNrecEnabledEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice11getHwAvSyncENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getHwAvSync(std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice11getHwAvSyncENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14setScreenStateEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setScreenState(bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14setScreenStateEb(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::~MTKPrimaryDevice() */
int _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD0Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn10setDevicesERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setDevices(android::hardware::hidl_vec<android::hardware::audio::common::V6_0::DeviceAddress> const&) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn10setDevicesERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn24getSupportedChannelMasksENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getSupportedChannelMasks(android::hardware::audio::common::V6_0::AudioFormat, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn24getSupportedChannelMasksENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE(void);

/* Symbol: _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlem */
/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned long) */
int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlem(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getMmapPosition(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapPosition const&)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE(void);

/* Symbol: _ZTVN7android8hardware5audio4V6_014implementation10StreamMmapI16audio_stream_outEE */
/* Demangled: vtable for android::hardware::audio::V6_0::implementation::StreamMmap<audio_stream_out> */
extern void* _ZTVN7android8hardware5audio4V6_014implementation10StreamMmapI16audio_stream_outEE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device18setAudioPortConfigERKNS1_6common4V6_015AudioPortConfigE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::setAudioPortConfig(android::hardware::audio::common::V6_0::AudioPortConfig const&) */
int _ZN7android8hardware5audio4V6_014implementation6Device18setAudioPortConfigERKNS1_6common4V6_015AudioPortConfigE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device7doCloseEv */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::doClose() */
int _ZN7android8hardware5audio4V6_014implementation6Device7doCloseEv(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio4V6_014implementation6DeviceD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::Device::~Device() */
int _ZTv0_n24_N7android8hardware5audio4V6_014implementation6DeviceD0Ev(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhm */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::read(unsigned char*, unsigned long) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhm(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<android::hardware::audio::V6_0::implementation::Device> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZThn8_N7android8hardware5audio4V6_014implementation6DeviceD0Ev */
/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Device::~Device() */
int _ZThn8_N7android8hardware5audio4V6_014implementation6DeviceD0Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream10getDevicesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getDevices(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::DeviceAddress> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation6Stream10getDevicesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream11setHwAvSyncEj */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::setHwAvSync(unsigned int) */
int _ZN7android8hardware5audio4V6_014implementation6Stream11setHwAvSyncEj(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EED2Ev */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::~MessageQueue() */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EED2Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut19getSupportedFormatsENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_011AudioFormatEEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getSupportedFormats(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioFormat> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut19getSupportedFormatsENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_011AudioFormatEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14updateRotationEN7android8hardware5audio4V6_014IPrimaryDevice8RotationE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::updateRotation(android::hardware::audio::V6_0::IPrimaryDevice::Rotation) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14updateRotationEN7android8hardware5audio4V6_014IPrimaryDevice8RotationE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceINS3_6DeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEEEENS0_6ReturnIvEEPKcT0_ */
/* Demangled: android::hardware::Return<void> android::hardware::audio::V6_0::implementation::DevicesFactory::openDevice<android::hardware::audio::V6_0::implementation::Device, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IDevice> const&)> >(char const*, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IDevice> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceINS3_6DeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEEEENS0_6ReturnIvEEPKcT0_(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EED2Ev */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::~MessageQueue() */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EED2Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation10StreamMmapI15audio_stream_inE16createMmapBufferEimNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamMmap<audio_stream_in>::createMmapBuffer(int, unsigned long, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapBufferInfo const&)>) */
int _ZN7android8hardware5audio4V6_014implementation10StreamMmapI15audio_stream_inE16createMmapBufferEimNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device29audioParameterChangedCallbackEPKcPv */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::audioParameterChangedCallback(char const*, void*) */
int _ZN7android8hardware5audio4V6_014implementation6Device29audioParameterChangedCallbackEPKcPv(void);

/* Symbol: _ZThn8_N7android8hardware5audio4V6_014implementation6Device16halGetParametersEPKc */
/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Device::halGetParameters(char const*) */
int _ZThn8_N7android8hardware5audio4V6_014implementation6Device16halGetParametersEPKc(void);

/* Symbol: _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EEC2EmP13native_handlemb */
/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned long, native_handle*, unsigned long, bool) */
int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EEC2EmP13native_handlemb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE0_NS3_17IMTKPrimaryDeviceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice-in-vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE0_NS3_17IMTKPrimaryDeviceE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream16halGetParametersEPKc */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::halGetParameters(char const*) */
int _ZN7android8hardware5audio4V6_014implementation6Stream16halGetParametersEPKc(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut16setEventCallbackERKNS_2spINS2_23IStreamOutEventCallbackEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setEventCallback(android::sp<android::hardware::audio::V6_0::IStreamOutEventCallback> const&) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut16setEventCallbackERKNS_2spINS2_23IStreamOutEventCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio4V6_014implementation8StreamInD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::StreamIn::~StreamIn() */
int _ZTv0_n24_N7android8hardware5audio4V6_014implementation8StreamInD0Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut13getSampleRateEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getSampleRate() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut13getSampleRateEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut27setAudioDescriptionMixLevelEf */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setAudioDescriptionMixLevel(float) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut27setAudioDescriptionMixLevelEf(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation19halToChannelMappingE34audio_microphone_channel_mapping_t */
/* Demangled: android::hardware::audio::V6_0::implementation::halToChannelMapping(audio_microphone_channel_mapping_t) */
int _ZN7android8hardware5audio4V6_014implementation19halToChannelMappingE34audio_microphone_channel_mapping_t(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14DevicesFactory17openPrimaryDeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_14IPrimaryDeviceEEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::DevicesFactory::openPrimaryDevice(std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IPrimaryDevice> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation14DevicesFactory17openPrimaryDeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_14IPrimaryDeviceEEEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13getParametersERKN7android8hardware8hidl_vecINS7_5audio4V6_014ParameterValueEEERKNS8_INS7_11hidl_stringEEENSt3__18functionIFvNSA_6ResultESE_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13getParametersERKN7android8hardware8hidl_vecINS7_5audio4V6_014ParameterValueEEERKNS8_INS7_11hidl_stringEEENSt3__18functionIFvNSA_6ResultESE_EEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device32setAudioParameterChangedCallbackERKNS_2spIN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::setAudioParameterChangedCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback> const&) */
int _ZN7android8hardware5audio4V6_014implementation6Device32setAudioParameterChangedCallbackERKNS_2spIN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14setScreenStateEb */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setScreenState(bool) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14setScreenStateEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut5startEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::start() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut5startEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device14getMicrophonesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_14MicrophoneInfoEEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::getMicrophones(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::MicrophoneInfo> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation6Device14getMicrophonesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_14MicrophoneInfoEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn18getAudioPropertiesENSt3__18functionIFvjjNS1_6common4V6_011AudioFormatEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getAudioProperties(std::__1::function<void (unsigned int, unsigned int, android::hardware::audio::common::V6_0::AudioFormat)>) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn18getAudioPropertiesENSt3__18functionIFvjjNS1_6common4V6_011AudioFormatEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream13getFrameCountEv */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getFrameCount() */
int _ZN7android8hardware5audio4V6_014implementation6Stream13getFrameCountEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10getMicMuteENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getMicMute(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10getMicMuteENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcRKNS1_6common4V6_013DeviceAddressE */
/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::setParam(char const*, android::hardware::audio::common::V6_0::DeviceAddress const&) */
int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcRKNS1_6common4V6_013DeviceAddressE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device17setConnectedStateERKNS1_6common4V6_013DeviceAddressEb */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::setConnectedState(android::hardware::audio::common::V6_0::DeviceAddress const&, bool) */
int _ZN7android8hardware5audio4V6_014implementation6Device17setConnectedStateERKNS1_6common4V6_013DeviceAddressEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn22getCapturePositionImplEP15audio_stream_inPmS7_ */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getCapturePositionImpl(audio_stream_in*, unsigned long*, unsigned long*) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn22getCapturePositionImplEP15audio_stream_inPmS7_(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn7standbyEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::standby() */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn7standbyEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice12getAudioPortERKN7android8hardware5audio6common4V6_09AudioPortENSt3__18functionIFvNS8_4V6_06ResultESD_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getAudioPort(android::hardware::audio::common::V6_0::AudioPort const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::common::V6_0::AudioPort const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice12getAudioPortERKN7android8hardware5audio6common4V6_09AudioPortENSt3__18functionIFvNS8_4V6_06ResultESD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15openInputStreamEiRKN7android8hardware5audio6common4V6_013DeviceAddressERKNSA_11AudioConfigEiRKNSA_12SinkMetadataENSt3__18functionIFvNS8_4V6_06ResultERKNS6_2spINSM_9IStreamInEEESG_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::openInputStream(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::SinkMetadata const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IStreamIn> const&, android::hardware::audio::common::V6_0::AudioConfig const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15openInputStreamEiRKN7android8hardware5audio6common4V6_013DeviceAddressERKNSA_11AudioConfigEiRKNSA_12SinkMetadataENSt3__18functionIFvNS8_4V6_06ResultERKNS6_2spINSM_9IStreamInEEESG_EEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device16halSetParametersEPKc */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::halSetParameters(char const*) */
int _ZN7android8hardware5audio4V6_014implementation6Device16halSetParametersEPKc(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6DeviceD2Ev */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::~Device() */
int _ZN7android8hardware5audio4V6_014implementation6DeviceD2Ev(void);

/* Symbol: _ZTVN7android8hardware5audio4V6_014implementation14DevicesFactoryE */
/* Demangled: vtable for android::hardware::audio::V6_0::implementation::DevicesFactory */
extern void* _ZTVN7android8hardware5audio4V6_014implementation14DevicesFactoryE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice17releaseAudioPatchEi */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::releaseAudioPatch(int) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice17releaseAudioPatchEi(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice24setBtScoHeadsetDebugNameERKNS0_11hidl_stringE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setBtScoHeadsetDebugName(android::hardware::hidl_string const&) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice24setBtScoHeadsetDebugNameERKNS0_11hidl_stringE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13setMasterMuteEb */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setMasterMute(bool) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13setMasterMuteEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6StreamD1Ev */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::~Stream() */
int _ZN7android8hardware5audio4V6_014implementation6StreamD1Ev(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE4readEPS5_m */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::read(android::hardware::audio::V6_0::IStreamOut::WriteCommand*, unsigned long) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE4readEPS5_m(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut17getRenderPositionENSt3__18functionIFvNS2_6ResultEjEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getRenderPosition(std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned int)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut17getRenderPositionENSt3__18functionIFvNS2_6ResultEjEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14ParametersUtil9setParamsERKNS_14AudioParameterE */
/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::setParams(android::AudioParameter const&) */
int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil9setParamsERKNS_14AudioParameterE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceD2Ev */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::~PrimaryDevice() */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceD2Ev(void);

/* Symbol: _ZTVN7android8hardware5audio4V6_014implementation6StreamE */
/* Demangled: vtable for android::hardware::audio::V6_0::implementation::Stream */
extern void* _ZTVN7android8hardware5audio4V6_014implementation6StreamE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn5startEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::start() */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn5startEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut5closeEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::close() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut5closeEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOutD2Ev */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::~StreamOut() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOutD2Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device24createOrUpdateAudioPatchEiRKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_ */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::createOrUpdateAudioPatch(int, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&) */
int _ZN7android8hardware5audio4V6_014implementation6Device24createOrUpdateAudioPatchEiRKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio4V6_014implementation6Device5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZTCN7android8hardware5audio4V6_014implementation6StreamE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::V6_0::implementation::Stream */
extern void* _ZTCN7android8hardware5audio4V6_014implementation6StreamE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlem */
/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned long) */
int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlem(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut17prepareForWritingEjjNSt3__18functionIFvNS2_6ResultERKNS0_12MQDescriptorINS2_10IStreamOut12WriteCommandELNS0_8MQFlavorE1EEERKNS8_IhLSB_1EEERKNS8_INS9_11WriteStatusELSB_1EEERKNS1_6common4V6_010ThreadInfoEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::prepareForWriting(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1> const&, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&, android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1> const&, android::hardware::audio::common::V6_0::ThreadInfo const&)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut17prepareForWritingEjjNSt3__18functionIFvNS2_6ResultERKNS0_12MQDescriptorINS2_10IStreamOut12WriteCommandELNS0_8MQFlavorE1EEERKNS8_IhLSB_1EEERKNS8_INS9_11WriteStatusELSB_1EEERKNS1_6common4V6_010ThreadInfoEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getMmapPosition(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapPosition const&)>) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10setMicMuteEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setMicMute(bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10setMicMuteEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device15addDeviceEffectEim */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::addDeviceEffect(int, unsigned long) */
int _ZN7android8hardware5audio4V6_014implementation6Device15addDeviceEffectEim(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device16closeInputStreamEP15audio_stream_in */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::closeInputStream(audio_stream_in*) */
int _ZN7android8hardware5audio4V6_014implementation6Device16closeInputStreamEP15audio_stream_in(void);

/* Symbol: _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE */
/* Demangled: std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::destroy(std::__1::__tree_node<unsigned int, void*>*) */
int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6DeviceC2EP19audio_hw_device_mtk */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::Device(audio_hw_device_mtk*) */
int _ZN7android8hardware5audio4V6_014implementation6DeviceC2EP19audio_hw_device_mtk(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_ */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::setParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&) */
int _ZN7android8hardware5audio4V6_014implementation6Stream13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn13setSampleRateEj */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setSampleRate(unsigned int) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn13setSampleRateEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceC2EP19audio_hw_device_mtk */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::MTKPrimaryDevice(audio_hw_device_mtk*) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceC2EP19audio_hw_device_mtk(void);

/* Symbol: _ZTVN7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEEE */
/* Demangled: vtable for android::Vector<android::sp<android::hardware::audio::V6_0::implementation::Device> > */
extern void* _ZTVN7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEEE;

/* Symbol: _ZTCN7android8hardware5audio4V6_014implementation13PrimaryDeviceE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::V6_0::implementation::PrimaryDevice */
extern void* _ZTCN7android8hardware5audio4V6_014implementation13PrimaryDeviceE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn5closeEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::close() */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn5closeEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut10getDevicesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getDevices(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::DeviceAddress> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut10getDevicesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15setMasterVolumeEf */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setMasterVolume(float) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15setMasterVolumeEf(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream13analyzeStatusEPKci */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::analyzeStatus(char const*, int) */
int _ZN7android8hardware5audio4V6_014implementation6Stream13analyzeStatusEPKci(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<android::hardware::audio::V6_0::implementation::Device> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14DevicesFactory18loadAudioInterfaceEPKcPP15audio_hw_device */
/* Demangled: android::hardware::audio::V6_0::implementation::DevicesFactory::loadAudioInterface(char const*, audio_hw_device**) */
int _ZN7android8hardware5audio4V6_014implementation14DevicesFactory18loadAudioInterfaceEPKcPP15audio_hw_device(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn20getActiveMicrophonesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_14MicrophoneInfoEEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getActiveMicrophones(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::MicrophoneInfo> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn20getActiveMicrophonesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_14MicrophoneInfoEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device13analyzeStatusEPKciRKNSt3__16vectorIiNS7_9allocatorIiEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::analyzeStatus(char const*, int, std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZN7android8hardware5audio4V6_014implementation6Device13analyzeStatusEPKciRKNSt3__16vectorIiNS7_9allocatorIiEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10setTtyModeENS2_14IPrimaryDevice7TtyModeE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setTtyMode(android::hardware::audio::V6_0::IPrimaryDevice::TtyMode) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10setTtyModeENS2_14IPrimaryDevice7TtyModeE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream9setFormatENS1_6common4V6_011AudioFormatE */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::setFormat(android::hardware::audio::common::V6_0::AudioFormat) */
int _ZN7android8hardware5audio4V6_014implementation6Stream9setFormatENS1_6common4V6_011AudioFormatE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamInD2Ev */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::~StreamIn() */
int _ZN7android8hardware5audio4V6_014implementation8StreamInD2Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut5pauseEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::pause() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut5pauseEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device20supportsAudioPatchesEv */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::supportsAudioPatches() */
int _ZN7android8hardware5audio4V6_014implementation6Device20supportsAudioPatchesEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15setMasterVolumeEf */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setMasterVolume(float) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15setMasterVolumeEf(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream16createMmapBufferEiNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::createMmapBuffer(int, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapBufferInfo const&)>) */
int _ZN7android8hardware5audio4V6_014implementation6Stream16createMmapBufferEiNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice16openOutputStreamEiRKN7android8hardware5audio6common4V6_013DeviceAddressERKNSA_11AudioConfigEiRKNSA_14SourceMetadataENSt3__18functionIFvNS8_4V6_06ResultERKNS6_2spINSM_10IStreamOutEEESG_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::openOutputStream(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::SourceMetadata const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IStreamOut> const&, android::hardware::audio::common::V6_0::AudioConfig const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice16openOutputStreamEiRKN7android8hardware5audio6common4V6_013DeviceAddressERKNSA_11AudioConfigEiRKNSA_14SourceMetadataENSt3__18functionIFvNS8_4V6_06ResultERKNS6_2spINSM_10IStreamOutEEESG_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice20supportsAudioPatchesEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::supportsAudioPatches() */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice20supportsAudioPatchesEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice32setAudioParameterChangedCallbackERKN7android2spINS3_30IAudioParameterChangedCallbackEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setAudioParameterChangedCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice32setAudioParameterChangedCallbackERKN7android2spINS3_30IAudioParameterChangedCallbackEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn9getFormatEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getFormat() */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn9getFormatEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut14getChannelMaskEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getChannelMask() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut14getChannelMaskEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut23getSupportedSampleRatesENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getSupportedSampleRates(android::hardware::audio::common::V6_0::AudioFormat, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut23getSupportedSampleRatesENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice23setupParametersCallbackERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setupParametersCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice23setupParametersCallbackERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::~MTKPrimaryDevice() */
int _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD1Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcb */
/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::setParam(char const*, bool) */
int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream13getSampleRateEv */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getSampleRate() */
int _ZN7android8hardware5audio4V6_014implementation6Stream13getSampleRateEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream7standbyEv */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::standby() */
int _ZN7android8hardware5audio4V6_014implementation6Stream7standbyEv(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EEC2Emb */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::MessageQueue(unsigned long, bool) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EEC2Emb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn22setMicrophoneDirectionENS2_19MicrophoneDirectionE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setMicrophoneDirection(android::hardware::audio::V6_0::MicrophoneDirection) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn22setMicrophoneDirectionENS2_19MicrophoneDirectionE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio4V6_014implementation6DeviceD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::Device::~Device() */
int _ZTv0_n24_N7android8hardware5audio4V6_014implementation6DeviceD1Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14updateRotationENS2_14IPrimaryDevice8RotationE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::updateRotation(android::hardware::audio::V6_0::IPrimaryDevice::Rotation) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14updateRotationENS2_14IPrimaryDevice8RotationE(void);

/* Symbol: _ZTCN7android8hardware5audio4V6_014implementation8StreamInE0_NS2_9IStreamInE */
/* Demangled: construction vtable for android::hardware::audio::V6_0::IStreamIn-in-android::hardware::audio::V6_0::implementation::StreamIn */
extern void* _ZTCN7android8hardware5audio4V6_014implementation8StreamInE0_NS2_9IStreamInE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14ParametersUtil17getParametersImplERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE */
/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::getParametersImpl(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil17getParametersImplERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device34clearAudioParameterChangedCallbackEv */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::clearAudioParameterChangedCallback() */
int _ZN7android8hardware5audio4V6_014implementation6Device34clearAudioParameterChangedCallbackEv(void);

/* Symbol: _ZThn8_N7android8hardware5audio4V6_014implementation6DeviceD1Ev */
/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Device::~Device() */
int _ZThn8_N7android8hardware5audio4V6_014implementation6DeviceD1Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation20deviceAddressFromHalEjPKcPNS1_6common4V6_013DeviceAddressE */
/* Demangled: android::hardware::audio::V6_0::implementation::deviceAddressFromHal(unsigned int, char const*, android::hardware::audio::common::V6_0::DeviceAddress*) */
int _ZN7android8hardware5audio4V6_014implementation20deviceAddressFromHalEjPKcPNS1_6common4V6_013DeviceAddressE(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn23getSupportedSampleRatesENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getSupportedSampleRates(android::hardware::audio::common::V6_0::AudioFormat, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn23getSupportedSampleRatesENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE(void);

/* Symbol: _ZTVN7android8hardware5audio4V6_014implementation10StreamMmapI15audio_stream_inEE */
/* Demangled: vtable for android::hardware::audio::V6_0::implementation::StreamMmap<audio_stream_in> */
extern void* _ZTVN7android8hardware5audio4V6_014implementation10StreamMmapI15audio_stream_inEE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device10getMicMuteENSt3__18functionIFvNS2_6ResultEbEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::getMicMute(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN7android8hardware5audio4V6_014implementation6Device10getMicMuteENSt3__18functionIFvNS2_6ResultEbEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcf */
/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::setParam(char const*, float) */
int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcf(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE5writeEPKS5_m */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::write(android::hardware::audio::V6_0::IStreamOut::WriteStatus const*, unsigned long) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE5writeEPKS5_m(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut20updateSourceMetadataERKNS1_6common4V6_014SourceMetadataE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::updateSourceMetadata(android::hardware::audio::common::V6_0::SourceMetadata const&) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut20updateSourceMetadataERKNS1_6common4V6_014SourceMetadataE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18setAudioPortConfigERKN7android8hardware5audio6common4V6_015AudioPortConfigE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setAudioPortConfig(android::hardware::audio::common::V6_0::AudioPortConfig const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18setAudioPortConfigERKN7android8hardware5audio6common4V6_015AudioPortConfigE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device15openInputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_12SinkMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_9IStreamInEEESC_EEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::openInputStream(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::SinkMetadata const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IStreamIn> const&, android::hardware::audio::common::V6_0::AudioConfig const&)>) */
int _ZN7android8hardware5audio4V6_014implementation6Device15openInputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_12SinkMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_9IStreamInEEESC_EEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device5closeEv */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::close() */
int _ZN7android8hardware5audio4V6_014implementation6Device5closeEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut25setPlaybackRateParametersERKNS2_12PlaybackRateE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setPlaybackRateParameters(android::hardware::audio::V6_0::PlaybackRate const&) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut25setPlaybackRateParametersERKNS2_12PlaybackRateE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device16halGetParametersEPKc */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::halGetParameters(char const*) */
int _ZN7android8hardware5audio4V6_014implementation6Device16halGetParametersEPKc(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceIN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_14IPrimaryDeviceEEEEEEEENS0_6ReturnIvEEPKcT0_ */
/* Demangled: android::hardware::Return<void> android::hardware::audio::V6_0::implementation::DevicesFactory::openDevice<vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IPrimaryDevice> const&)> >(char const*, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IPrimaryDevice> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceIN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_14IPrimaryDeviceEEEEEEEENS0_6ReturnIvEEPKcT0_(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio4V6_014implementation8StreamInD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::StreamIn::~StreamIn() */
int _ZTv0_n24_N7android8hardware5audio4V6_014implementation8StreamInD1Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKci */
/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::setParam(char const*, int) */
int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKci(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn13getSampleRateEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getSampleRate() */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn13getSampleRateEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn9addEffectEm */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::addEffect(unsigned long) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn9addEffectEm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut15setDualMonoModeENS2_12DualMonoModeE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setDualMonoMode(android::hardware::audio::V6_0::DualMonoMode) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut15setDualMonoModeENS2_12DualMonoModeE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15getMasterVolumeENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEfEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getMasterVolume(std::__1::function<void (android::hardware::audio::V6_0::Result, float)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15getMasterVolumeENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEfEEE(void);

/* Symbol: _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EEC2EmP13native_handlemb */
/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned long, native_handle*, unsigned long, bool) */
int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EEC2EmP13native_handlemb(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE4readEPS5_m */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::read(android::hardware::audio::V6_0::IStreamIn::ReadParameters*, unsigned long) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE4readEPS5_m(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice23getBtScoWidebandEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getBtScoWidebandEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice23getBtScoWidebandEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD0Ev */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::~MTKPrimaryDevice() */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD0Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14setBtHfpVolumeEf */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setBtHfpVolume(float) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14setBtHfpVolumeEf(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device16openOutputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_14SourceMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_10IStreamOutEEESC_EEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::openOutputStream(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::SourceMetadata const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IStreamOut> const&, android::hardware::audio::common::V6_0::AudioConfig const&)>) */
int _ZN7android8hardware5audio4V6_014implementation6Device16openOutputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_14SourceMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_10IStreamOutEEESC_EEE(void);

/* Symbol: _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlem */
/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned long) */
int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlem(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn4stopEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::stop() */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn4stopEv(void);

/* Symbol: _ZTCN7android8hardware5audio4V6_014implementation6DeviceE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::V6_0::implementation::Device */
extern void* _ZTCN7android8hardware5audio4V6_014implementation6DeviceE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE */
/* Demangled: vtable for vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice */
extern void* _ZTVN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device18getInputBufferSizeERKNS1_6common4V6_011AudioConfigENSt3__18functionIFvNS2_6ResultEmEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::getInputBufferSize(android::hardware::audio::common::V6_0::AudioConfig const&, std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned long)>) */
int _ZN7android8hardware5audio4V6_014implementation6Device18getInputBufferSizeERKNS1_6common4V6_011AudioConfigENSt3__18functionIFvNS2_6ResultEmEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice17setConnectedStateERKNS1_6common4V6_013DeviceAddressEb */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setConnectedState(android::hardware::audio::common::V6_0::DeviceAddress const&, bool) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice17setConnectedStateERKNS1_6common4V6_013DeviceAddressEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice23setBtScoWidebandEnabledEb */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setBtScoWidebandEnabled(bool) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice23setBtScoWidebandEnabledEb(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut9getFormatEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getFormat() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut9getFormatEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13setMasterMuteEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setMasterMute(bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13setMasterMuteEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device15setMasterVolumeEf */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::setMasterVolume(float) */
int _ZN7android8hardware5audio4V6_014implementation6Device15setMasterVolumeEf(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE10do_compareEPKvS8_(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6StreamD2Ev */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::~Stream() */
int _ZN7android8hardware5audio4V6_014implementation6StreamD2Ev(void);

/* Symbol: _ZTCN7android8hardware5audio4V6_014implementation8StreamInE0_NS2_7IStreamE */
/* Demangled: construction vtable for android::hardware::audio::V6_0::IStream-in-android::hardware::audio::V6_0::implementation::StreamIn */
extern void* _ZTCN7android8hardware5audio4V6_014implementation8StreamInE0_NS2_7IStreamE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13getMasterMuteENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getMasterMute(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13getMasterMuteENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut24getSupportedChannelMasksENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getSupportedChannelMasks(android::hardware::audio::common::V6_0::AudioFormat, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut24getSupportedChannelMasksENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceC1EP19audio_hw_device_mtk */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::PrimaryDevice(audio_hw_device_mtk*) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceC1EP19audio_hw_device_mtk(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut5flushEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::flush() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut5flushEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device10setMicMuteEb */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::setMicMute(bool) */
int _ZN7android8hardware5audio4V6_014implementation6Device10setMicMuteEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device20openOutputStreamImplEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiPSA_ */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::openOutputStreamImpl(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::AudioConfig*) */
int _ZN7android8hardware5audio4V6_014implementation6Device20openOutputStreamImplEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiPSA_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18setBtHfpSampleRateEj */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setBtHfpSampleRate(unsigned int) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18setBtHfpSampleRateEj(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut13clearCallbackEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::clearCallback() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut13clearCallbackEv(void);

/* Symbol: _ZTVN7android8hardware5audio4V6_014implementation6DeviceE */
/* Demangled: vtable for android::hardware::audio::V6_0::implementation::Device */
extern void* _ZTVN7android8hardware5audio4V6_014implementation6DeviceE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10getMicMuteENSt3__18functionIFvNS2_6ResultEbEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getMicMute(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10getMicMuteENSt3__18functionIFvNS2_6ResultEbEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream10setDevicesERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::setDevices(android::hardware::hidl_vec<android::hardware::audio::common::V6_0::DeviceAddress> const&) */
int _ZN7android8hardware5audio4V6_014implementation6Stream10setDevicesERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEE(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EED2Ev */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::~MessageQueue() */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EED2Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18getInputBufferSizeERKNS1_6common4V6_011AudioConfigENSt3__18functionIFvNS2_6ResultEmEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getInputBufferSize(android::hardware::audio::common::V6_0::AudioConfig const&, std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned long)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18getInputBufferSizeERKNS1_6common4V6_011AudioConfigENSt3__18functionIFvNS2_6ResultEmEEE(void);

/* Symbol: _ZTCN7android8hardware5audio4V6_014implementation13PrimaryDeviceE0_NS2_14IPrimaryDeviceE */
/* Demangled: construction vtable for android::hardware::audio::V6_0::IPrimaryDevice-in-android::hardware::audio::V6_0::implementation::PrimaryDevice */
extern void* _ZTCN7android8hardware5audio4V6_014implementation13PrimaryDeviceE0_NS2_14IPrimaryDeviceE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut13asyncCallbackE23stream_callback_event_tPvS6_ */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::asyncCallback(stream_callback_event_t, void*, void*) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut13asyncCallbackE23stream_callback_event_tPvS6_(void);

/* Symbol: _ZTCN7android8hardware5audio4V6_014implementation9StreamOutE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::V6_0::implementation::StreamOut */
extern void* _ZTCN7android8hardware5audio4V6_014implementation9StreamOutE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14setVoiceVolumeEf */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setVoiceVolume(float) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14setVoiceVolumeEf(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8getParamEPKcPb */
/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::getParam(char const*, bool*) */
int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8getParamEPKcPb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn27setMicrophoneFieldDimensionEf */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setMicrophoneFieldDimension(float) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn27setMicrophoneFieldDimensionEf(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut27getPresentationPositionImplEP16audio_stream_outPmPNS2_8TimeSpecE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getPresentationPositionImpl(audio_stream_out*, unsigned long*, android::hardware::audio::V6_0::TimeSpec*) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut27getPresentationPositionImplEP16audio_stream_outPmPNS2_8TimeSpecE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut4stopEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::stop() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut4stopEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device18removeDeviceEffectEim */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::removeDeviceEffect(int, unsigned long) */
int _ZN7android8hardware5audio4V6_014implementation6Device18removeDeviceEffectEim(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE12do_constructEPvm(void);

/* Symbol: _ZTTN7android8hardware5audio4V6_014implementation6DeviceE */
/* Demangled: VTT for android::hardware::audio::V6_0::implementation::Device */
extern void* _ZTTN7android8hardware5audio4V6_014implementation6DeviceE;

/* Symbol: _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EEC2EmP13native_handlemb */
/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned long, native_handle*, unsigned long, bool) */
int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EEC2EmP13native_handlemb(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn18getCapturePositionENSt3__18functionIFvNS2_6ResultEmmEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getCapturePosition(std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned long, unsigned long)>) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn18getCapturePositionENSt3__18functionIFvNS2_6ResultEmmEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE10do_destroyEPvm(void);

/* Symbol: _ZTCN7android8hardware5audio4V6_014implementation13PrimaryDeviceE0_NS2_7IDeviceE */
/* Demangled: construction vtable for android::hardware::audio::V6_0::IDevice-in-android::hardware::audio::V6_0::implementation::PrimaryDevice */
extern void* _ZTCN7android8hardware5audio4V6_014implementation13PrimaryDeviceE0_NS2_7IDeviceE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device17releaseAudioPatchEi */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::releaseAudioPatch(int) */
int _ZN7android8hardware5audio4V6_014implementation6Device17releaseAudioPatchEi(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15addDeviceEffectEim */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::addDeviceEffect(int, unsigned long) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15addDeviceEffectEim(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream4stopEv */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::stop() */
int _ZN7android8hardware5audio4V6_014implementation6Stream4stopEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device9initCheckEv */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::initCheck() */
int _ZN7android8hardware5audio4V6_014implementation6Device9initCheckEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut13setSampleRateEj */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setSampleRate(unsigned int) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut13setSampleRateEj(void);

/* Symbol: _ZTVN7android8hardware5audio4V6_014implementation9StreamOutE */
/* Demangled: vtable for android::hardware::audio::V6_0::implementation::StreamOut */
extern void* _ZTVN7android8hardware5audio4V6_014implementation9StreamOutE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice17setConnectedStateERKN7android8hardware5audio6common4V6_013DeviceAddressEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setConnectedState(android::hardware::audio::common::V6_0::DeviceAddress const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice17setConnectedStateERKN7android8hardware5audio6common4V6_013DeviceAddressEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device16createAudioPatchERKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::createAudioPatch(android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, int)>) */
int _ZN7android8hardware5audio4V6_014implementation6Device16createAudioPatchERKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut25getPlaybackRateParametersENSt3__18functionIFvNS2_6ResultERKNS2_12PlaybackRateEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getPlaybackRateParameters(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::PlaybackRate const&)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut25getPlaybackRateParametersENSt3__18functionIFvNS2_6ResultERKNS2_12PlaybackRateEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut5drainENS2_10AudioDrainE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::drain(android::hardware::audio::V6_0::AudioDrain) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut5drainENS2_10AudioDrainE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10getTtyModeENSt3__18functionIFvN7android8hardware5audio4V6_06ResultENSB_14IPrimaryDevice7TtyModeEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getTtyMode(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::IPrimaryDevice::TtyMode)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10getTtyModeENSt3__18functionIFvN7android8hardware5audio4V6_06ResultENSB_14IPrimaryDevice7TtyModeEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8getParamEPKcPi */
/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::getParam(char const*, int*) */
int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8getParamEPKcPi(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn18updateSinkMetadataERKNS1_6common4V6_012SinkMetadataE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::updateSinkMetadata(android::hardware::audio::common::V6_0::SinkMetadata const&) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn18updateSinkMetadataERKNS1_6common4V6_012SinkMetadataE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut13supportsDrainEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::supportsDrain() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut13supportsDrainEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation30halToMicrophoneCharacteristicsEPNS2_14MicrophoneInfoERK33audio_microphone_characteristic_t */
/* Demangled: android::hardware::audio::V6_0::implementation::halToMicrophoneCharacteristics(android::hardware::audio::V6_0::MicrophoneInfo*, audio_microphone_characteristic_t const&) */
int _ZN7android8hardware5audio4V6_014implementation30halToMicrophoneCharacteristicsEPNS2_14MicrophoneInfoERK33audio_microphone_characteristic_t(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8getParamEPKcPNS_7String8ENS_14AudioParameterE */
/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::getParam(char const*, android::String8*, android::AudioParameter) */
int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8getParamEPKcPNS_7String8ENS_14AudioParameterE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13getHacEnabledENSt3__18functionIFvNS2_6ResultEbEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getHacEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13getHacEnabledENSt3__18functionIFvNS2_6ResultEbEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getMmapPosition(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapPosition const&)>) */
int _ZN7android8hardware5audio4V6_014implementation6Stream15getMmapPositionENSt3__18functionIFvNS2_6ResultERKNS2_12MmapPositionEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamInC2ERKNS_2spINS3_6DeviceEEEP15audio_stream_in */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::StreamIn(android::sp<android::hardware::audio::V6_0::implementation::Device> const&, audio_stream_in*) */
int _ZN7android8hardware5audio4V6_014implementation8StreamInC2ERKNS_2spINS3_6DeviceEEEP15audio_stream_in(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE */
/* Demangled: VTT for vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice */
extern void* _ZTTN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14setVoiceVolumeEf */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setVoiceVolume(float) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14setVoiceVolumeEf(void);

/* Symbol: _ZThn8_N7android8hardware5audio4V6_014implementation6Stream16halSetParametersEPKc */
/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Stream::halSetParameters(char const*) */
int _ZThn8_N7android8hardware5audio4V6_014implementation6Stream16halSetParametersEPKc(void);

/* Symbol: _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlem */
/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned long) */
int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS8_9allocatorISA_EEEEP13native_handlem(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut10setDevicesERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setDevices(android::hardware::hidl_vec<android::hardware::audio::common::V6_0::DeviceAddress> const&) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut10setDevicesERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut11setCallbackERKNS_2spINS2_18IStreamOutCallbackEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setCallback(android::sp<android::hardware::audio::V6_0::IStreamOutCallback> const&) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut11setCallbackERKNS_2spINS2_18IStreamOutCallbackEEE(void);

/* Symbol: _ZTTN7android8hardware5audio4V6_014implementation9StreamOutE */
/* Demangled: VTT for android::hardware::audio::V6_0::implementation::StreamOut */
extern void* _ZTTN7android8hardware5audio4V6_014implementation9StreamOutE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device14setScreenStateEb */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::setScreenState(bool) */
int _ZN7android8hardware5audio4V6_014implementation6Device14setScreenStateEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation10StreamMmapI16audio_stream_outE16createMmapBufferEimNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamMmap<audio_stream_out>::createMmapBuffer(int, unsigned long, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapBufferInfo const&)>) */
int _ZN7android8hardware5audio4V6_014implementation10StreamMmapI16audio_stream_outE16createMmapBufferEimNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn13getFrameCountEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getFrameCount() */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn13getFrameCountEv(void);

/* Symbol: _ZTCN7android8hardware5audio4V6_014implementation8StreamInE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::V6_0::implementation::StreamIn */
extern void* _ZTCN7android8hardware5audio4V6_014implementation8StreamInE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut23getPresentationPositionENSt3__18functionIFvNS2_6ResultEmRKNS2_8TimeSpecEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getPresentationPosition(std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned long, android::hardware::audio::V6_0::TimeSpec const&)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut23getPresentationPositionENSt3__18functionIFvNS2_6ResultEmRKNS2_8TimeSpecEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18setBtHfpSampleRateEj */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setBtHfpSampleRate(unsigned int) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18setBtHfpSampleRateEj(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6DeviceD0Ev */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::~Device() */
int _ZN7android8hardware5audio4V6_014implementation6DeviceD0Ev(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<android::hardware::audio::V6_0::implementation::Device> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE12do_constructEPvm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream18getAudioPropertiesENSt3__18functionIFvjjNS1_6common4V6_011AudioFormatEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getAudioProperties(std::__1::function<void (unsigned int, unsigned int, android::hardware::audio::common::V6_0::AudioFormat)>) */
int _ZN7android8hardware5audio4V6_014implementation6Stream18getAudioPropertiesENSt3__18functionIFvjjNS1_6common4V6_011AudioFormatEEEE(void);

/* Symbol: _ZTTN7android8hardware5audio4V6_014implementation6StreamE */
/* Demangled: VTT for android::hardware::audio::V6_0::implementation::Stream */
extern void* _ZTTN7android8hardware5audio4V6_014implementation6StreamE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation19halToDirectionalityE33audio_microphone_directionality_t */
/* Demangled: android::hardware::audio::V6_0::implementation::halToDirectionality(audio_microphone_directionality_t) */
int _ZN7android8hardware5audio4V6_014implementation19halToDirectionalityE33audio_microphone_directionality_t(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15getMasterVolumeENSt3__18functionIFvNS2_6ResultEfEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getMasterVolume(std::__1::function<void (android::hardware::audio::V6_0::Result, float)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15getMasterVolumeENSt3__18functionIFvNS2_6ResultEfEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn7setGainEf */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setGain(float) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn7setGainEf(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut14setChannelMaskEj */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setChannelMask(unsigned int) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut14setChannelMaskEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice16createAudioPatchERKN7android8hardware8hidl_vecINS7_5audio6common4V6_015AudioPortConfigEEESF_NSt3__18functionIFvNS9_4V6_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::createAudioPatch(android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice16createAudioPatchERKN7android8hardware8hidl_vecINS7_5audio6common4V6_015AudioPortConfigEEESF_NSt3__18functionIFvNS9_4V6_06ResultEiEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device12syncCallbackE34device_parameters_callback_event_tP39audio_hw_device_set_parameters_callbackPv */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::syncCallback(device_parameters_callback_event_t, audio_hw_device_set_parameters_callback*, void*) */
int _ZN7android8hardware5audio4V6_014implementation6Device12syncCallbackE34device_parameters_callback_event_tP39audio_hw_device_set_parameters_callbackPv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceEPKcNSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::DevicesFactory::openDevice(char const*, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IDevice> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceEPKcNSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceD0Ev */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::~PrimaryDevice() */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceD0Ev(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EEC2Emb */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::MessageQueue(unsigned long, bool) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EEC2Emb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_ */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<android::hardware::audio::V6_0::implementation::Device> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream13analyzeStatusEPKciRKNSt3__16vectorIiNS7_9allocatorIiEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::analyzeStatus(char const*, int, std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZN7android8hardware5audio4V6_014implementation6Stream13analyzeStatusEPKciRKNSt3__16vectorIiNS7_9allocatorIiEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOutD0Ev */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::~StreamOut() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOutD0Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice7setModeENS1_6common4V6_09AudioModeE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setMode(android::hardware::audio::common::V6_0::AudioMode) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice7setModeENS1_6common4V6_09AudioModeE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio4V6_014implementation13PrimaryDeviceD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::PrimaryDevice::~PrimaryDevice() */
int _ZTv0_n24_N7android8hardware5audio4V6_014implementation13PrimaryDeviceD0Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut12removeEffectEm */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::removeEffect(unsigned long) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut12removeEffectEm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut22supportsPauseAndResumeENSt3__18functionIFvbbEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::supportsPauseAndResume(std::__1::function<void (bool, bool)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut22supportsPauseAndResumeENSt3__18functionIFvbbEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut9setFormatENS1_6common4V6_011AudioFormatE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setFormat(android::hardware::audio::common::V6_0::AudioFormat) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut9setFormatENS1_6common4V6_011AudioFormatE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15setBtHfpEnabledEb */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setBtHfpEnabled(bool) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15setBtHfpEnabledEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD1Ev */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::~MTKPrimaryDevice() */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD1Ev(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<android::hardware::audio::V6_0::implementation::Device> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice7setModeEN7android8hardware5audio6common4V6_09AudioModeE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setMode(android::hardware::audio::common::V6_0::AudioMode) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice7setModeEN7android8hardware5audio6common4V6_09AudioModeE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream5startEv */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::start() */
int _ZN7android8hardware5audio4V6_014implementation6Stream5startEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14ParametersUtil17setParametersImplERKNS0_8hidl_vecINS2_14ParameterValueEEES9_ */
/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::setParametersImpl(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&) */
int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil17setParametersImplERKNS0_8hidl_vecINS2_14ParameterValueEEES9_(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut13getBufferSizeEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getBufferSize() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut13getBufferSizeEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut15getDualMonoModeENSt3__18functionIFvNS2_6ResultENS2_12DualMonoModeEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getDualMonoMode(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::DualMonoMode)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut15getDualMonoModeENSt3__18functionIFvNS2_6ResultENS2_12DualMonoModeEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::getParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation6Device13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<android::hardware::audio::V6_0::implementation::Device> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_8hardware5audio4V6_014implementation6DeviceEEEE10do_destroyEPvm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13setHacEnabledEb */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setHacEnabled(bool) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13setHacEnabledEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn16createMmapBufferEiNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::createMmapBuffer(int, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::MmapBufferInfo const&)>) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn16createMmapBufferEiNSt3__18functionIFvNS2_6ResultERKNS2_14MmapBufferInfoEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EEC2Emb */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::MessageQueue(unsigned long, bool) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EEC2Emb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device17closeOutputStreamEP16audio_stream_out */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::closeOutputStream(audio_stream_out*) */
int _ZN7android8hardware5audio4V6_014implementation6Device17closeOutputStreamEP16audio_stream_out(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6DeviceC1EP19audio_hw_device_mtk */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::Device(audio_hw_device_mtk*) */
int _ZN7android8hardware5audio4V6_014implementation6DeviceC1EP19audio_hw_device_mtk(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceC1EP19audio_hw_device_mtk */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::MTKPrimaryDevice(audio_hw_device_mtk*) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceC1EP19audio_hw_device_mtk(void);

/* Symbol: _ZTCN7android8hardware5audio4V6_014implementation14DevicesFactoryE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::audio::V6_0::implementation::DevicesFactory */
extern void* _ZTCN7android8hardware5audio4V6_014implementation14DevicesFactoryE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut10getLatencyEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getLatency() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut10getLatencyEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut18asyncEventCallbackE28stream_event_callback_type_tPvS6_ */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::asyncEventCallback(stream_event_callback_type_t, void*, void*) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut18asyncEventCallbackE28stream_event_callback_type_tPvS6_(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamInD0Ev */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::~StreamIn() */
int _ZN7android8hardware5audio4V6_014implementation8StreamInD0Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice23getBtScoWidebandEnabledENSt3__18functionIFvNS2_6ResultEbEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getBtScoWidebandEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice23getBtScoWidebandEnabledENSt3__18functionIFvNS2_6ResultEbEEE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio4V6_014implementation6StreamD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::Stream::~Stream() */
int _ZTv0_n24_N7android8hardware5audio4V6_014implementation6StreamD0Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn12removeEffectEm */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::removeEffect(unsigned long) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn12removeEffectEm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamInC1ERKNS_2spINS3_6DeviceEEEP15audio_stream_in */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::StreamIn(android::sp<android::hardware::audio::V6_0::implementation::Device> const&, audio_stream_in*) */
int _ZN7android8hardware5audio4V6_014implementation8StreamInC1ERKNS_2spINS3_6DeviceEEEP15audio_stream_in(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream12removeEffectEm */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::removeEffect(unsigned long) */
int _ZN7android8hardware5audio4V6_014implementation6Stream12removeEffectEm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream5closeEv */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::close() */
int _ZN7android8hardware5audio4V6_014implementation6Stream5closeEv(void);

/* Symbol: _ZThn8_N7android8hardware5audio4V6_014implementation6StreamD0Ev */
/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Stream::~Stream() */
int _ZThn8_N7android8hardware5audio4V6_014implementation6StreamD0Ev(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE5writeEPKS5_m */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1>::write(android::hardware::audio::V6_0::IStreamIn::ReadStatus const*, unsigned long) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn10ReadStatusELNS0_8MQFlavorE1EE5writeEPKS5_m(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut21getNextWriteTimestampENSt3__18functionIFvNS2_6ResultElEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getNextWriteTimestamp(std::__1::function<void (android::hardware::audio::V6_0::Result, long)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut21getNextWriteTimestampENSt3__18functionIFvNS2_6ResultElEEE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio4V6_014implementation9StreamOutD0Ev */
/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::StreamOut::~StreamOut() */
int _ZTv0_n24_N7android8hardware5audio4V6_014implementation9StreamOutD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio4V6_014implementation6Stream5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut6resumeEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::resume() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut6resumeEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13getHacEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getHacEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13getHacEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14getMicrophonesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_14MicrophoneInfoEEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getMicrophones(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::MicrophoneInfo> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice14getMicrophonesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_14MicrophoneInfoEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream13setSampleRateEj */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::setSampleRate(unsigned int) */
int _ZN7android8hardware5audio4V6_014implementation6Stream13setSampleRateEj(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream14setChannelMaskEj */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::setChannelMask(unsigned int) */
int _ZN7android8hardware5audio4V6_014implementation6Stream14setChannelMaskEj(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream19getSupportedFormatsENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_011AudioFormatEEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getSupportedFormats(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioFormat> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation6Stream19getSupportedFormatsENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_011AudioFormatEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut9setVolumeEff */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setVolume(float, float) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut9setVolumeEff(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Emb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(unsigned long, bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Emb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn17prepareForReadingEjjNSt3__18functionIFvNS2_6ResultERKNS0_12MQDescriptorINS2_9IStreamIn14ReadParametersELNS0_8MQFlavorE1EEERKNS8_IhLSB_1EEERKNS8_INS9_10ReadStatusELSB_1EEERKNS1_6common4V6_010ThreadInfoEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::prepareForReading(unsigned int, unsigned int, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1> const&, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&, android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamIn::ReadStatus, (android::hardware::MQFlavor)1> const&, android::hardware::audio::common::V6_0::ThreadInfo const&)>) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn17prepareForReadingEjjNSt3__18functionIFvNS2_6ResultERKNS0_12MQDescriptorINS2_9IStreamIn14ReadParametersELNS0_8MQFlavorE1EEERKNS8_IhLSB_1EEERKNS8_INS9_10ReadStatusELSB_1EEERKNS1_6common4V6_010ThreadInfoEEEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEEE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10getTtyModeENSt3__18functionIFvNS2_6ResultENS2_14IPrimaryDevice7TtyModeEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getTtyMode(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::IPrimaryDevice::TtyMode)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice10getTtyModeENSt3__18functionIFvNS2_6ResultENS2_14IPrimaryDevice7TtyModeEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice34clearAudioParameterChangedCallbackEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::clearAudioParameterChangedCallback() */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice34clearAudioParameterChangedCallbackEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice19getBtScoNrecEnabledENSt3__18functionIFvNS2_6ResultEbEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getBtScoNrecEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice19getBtScoNrecEnabledENSt3__18functionIFvNS2_6ResultEbEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice5closeEv */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::close() */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice5closeEv(void);

/* Symbol: _ZThn8_N7android8hardware5audio4V6_014implementation6Stream16halGetParametersEPKc */
/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Stream::halGetParameters(char const*) */
int _ZThn8_N7android8hardware5audio4V6_014implementation6Stream16halGetParametersEPKc(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE0_N7android8hardware5audio4V6_014IPrimaryDeviceE */
/* Demangled: construction vtable for android::hardware::audio::V6_0::IPrimaryDevice-in-vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceE0_N7android8hardware5audio4V6_014IPrimaryDeviceE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device16updateAudioPatchEiRKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::updateAudioPatch(int, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, int)>) */
int _ZN7android8hardware5audio4V6_014implementation6Device16updateAudioPatchEiRKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13getMasterMuteENSt3__18functionIFvNS2_6ResultEbEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getMasterMute(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13getMasterMuteENSt3__18functionIFvNS2_6ResultEbEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream24getSupportedChannelMasksENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getSupportedChannelMasks(android::hardware::audio::common::V6_0::AudioFormat, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation6Stream24getSupportedChannelMasksENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut18selectPresentationEii */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::selectPresentation(int, int) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut18selectPresentationEii(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZTVN7android8hardware5audio4V6_014implementation8StreamInE */
/* Demangled: vtable for android::hardware::audio::V6_0::implementation::StreamIn */
extern void* _ZTVN7android8hardware5audio4V6_014implementation8StreamInE;

/* Symbol: _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EEC2EmP13native_handlemb */
/* Demangled: android::hardware::MQDescriptor<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned long, native_handle*, unsigned long, bool) */
int _ZN7android8hardware12MQDescriptorINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EEC2EmP13native_handlemb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice9initCheckEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::initCheck() */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice9initCheckEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15getBtHfpEnabledENSt3__18functionIFvNS2_6ResultEbEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getBtHfpEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15getBtHfpEnabledENSt3__18functionIFvNS2_6ResultEbEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream9getFormatEv */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getFormat() */
int _ZN7android8hardware5audio4V6_014implementation6Stream9getFormatEv(void);

/* Symbol: _ZNSt3__16vectorI21record_track_metadataNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<record_track_metadata, std::__1::allocator<record_track_metadata> >::__push_back_slow_path<record_track_metadata const&>(record_track_metadata const&) */
int _ZNSt3__16vectorI21record_track_metadataNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceERKNS0_11hidl_stringENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::DevicesFactory::openDevice(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IDevice> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation14DevicesFactory10openDeviceERKNS0_11hidl_stringENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_7IDeviceEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut27getAudioDescriptionMixLevelENSt3__18functionIFvNS2_6ResultEfEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getAudioDescriptionMixLevel(std::__1::function<void (android::hardware::audio::V6_0::Result, float)>) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut27getAudioDescriptionMixLevelENSt3__18functionIFvNS2_6ResultEfEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14ParametersUtil9getParamsERKNS_14AudioParameterE */
/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::getParams(android::AudioParameter const&) */
int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil9getParamsERKNS_14AudioParameterE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18setAudioPortConfigERKNS1_6common4V6_015AudioPortConfigE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setAudioPortConfig(android::hardware::audio::common::V6_0::AudioPortConfig const&) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice18setAudioPortConfigERKNS1_6common4V6_015AudioPortConfigE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream14getChannelMaskEv */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getChannelMask() */
int _ZN7android8hardware5audio4V6_014implementation6Stream14getChannelMaskEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut12getFrameSizeEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getFrameSize() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut12getFrameSizeEv(void);

/* Symbol: _ZTCN7android8hardware5audio4V6_014implementation9StreamOutE0_NS2_7IStreamE */
/* Demangled: construction vtable for android::hardware::audio::V6_0::IStream-in-android::hardware::audio::V6_0::implementation::StreamOut */
extern void* _ZTCN7android8hardware5audio4V6_014implementation9StreamOutE0_NS2_7IStreamE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18removeDeviceEffectEim */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::removeDeviceEffect(int, unsigned long) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice18removeDeviceEffectEim(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_ */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::setParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&) */
int _ZN7android8hardware5audio4V6_014implementation6Device13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EmP13native_handlemb */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned long, native_handle*, unsigned long, bool) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EmP13native_handlemb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcS6_ */
/* Demangled: android::hardware::audio::V6_0::implementation::ParametersUtil::setParam(char const*, char const*) */
int _ZN7android8hardware5audio4V6_014implementation14ParametersUtil8setParamEPKcS6_(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn18getInputFramesLostEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getInputFramesLost() */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn18getInputFramesLostEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_ */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::setParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice24setBtScoHeadsetDebugNameERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setBtScoHeadsetDebugName(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice24setBtScoHeadsetDebugNameERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device15getMasterVolumeENSt3__18functionIFvNS2_6ResultEfEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::getMasterVolume(std::__1::function<void (android::hardware::audio::V6_0::Result, float)>) */
int _ZN7android8hardware5audio4V6_014implementation6Device15getMasterVolumeENSt3__18functionIFvNS2_6ResultEfEEE(void);

/* Symbol: _ZThn8_N7android8hardware5audio4V6_014implementation6Device16halSetParametersEPKc */
/* Demangled: non-virtual thunk to android::hardware::audio::V6_0::implementation::Device::halSetParameters(char const*) */
int _ZThn8_N7android8hardware5audio4V6_014implementation6Device16halSetParametersEPKc(void);

/* Symbol: _ZTCN7android8hardware5audio4V6_014implementation14DevicesFactoryE0_NS2_15IDevicesFactoryE */
/* Demangled: construction vtable for android::hardware::audio::V6_0::IDevicesFactory-in-android::hardware::audio::V6_0::implementation::DevicesFactory */
extern void* _ZTCN7android8hardware5audio4V6_014implementation14DevicesFactoryE0_NS2_15IDevicesFactoryE;

/* Symbol: _ZTCN7android8hardware5audio4V6_014implementation6StreamE0_NS2_7IStreamE */
/* Demangled: construction vtable for android::hardware::audio::V6_0::IStream-in-android::hardware::audio::V6_0::implementation::Stream */
extern void* _ZTCN7android8hardware5audio4V6_014implementation6StreamE0_NS2_7IStreamE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn14setChannelMaskEj */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::setChannelMask(unsigned int) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn14setChannelMaskEj(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device11getHwAvSyncENSt3__18functionIFvNS2_6ResultEjEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::getHwAvSync(std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned int)>) */
int _ZN7android8hardware5audio4V6_014implementation6Device11getHwAvSyncENSt3__18functionIFvNS2_6ResultEjEEE(void);

/* Symbol: _ZTTN7android8hardware5audio4V6_014implementation13PrimaryDeviceE */
/* Demangled: VTT for android::hardware::audio::V6_0::implementation::PrimaryDevice */
extern void* _ZTTN7android8hardware5audio4V6_014implementation13PrimaryDeviceE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream16halSetParametersEPKc */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::halSetParameters(char const*) */
int _ZN7android8hardware5audio4V6_014implementation6Stream16halSetParametersEPKc(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn10getDevicesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getDevices(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::DeviceAddress> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn10getDevicesENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS1_6common4V6_013DeviceAddressEEEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOutC2ERKNS_2spINS3_6DeviceEEEP16audio_stream_out */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::StreamOut(android::sp<android::hardware::audio::V6_0::implementation::Device> const&, audio_stream_out*) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOutC2ERKNS_2spINS3_6DeviceEEEP16audio_stream_out(void);

/* Symbol: _ZTCN7android8hardware5audio4V6_014implementation9StreamOutE0_NS2_10IStreamOutE */
/* Demangled: construction vtable for android::hardware::audio::V6_0::IStreamOut-in-android::hardware::audio::V6_0::implementation::StreamOut */
extern void* _ZTCN7android8hardware5audio4V6_014implementation9StreamOutE0_NS2_10IStreamOutE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6DeviceD1Ev */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::~Device() */
int _ZN7android8hardware5audio4V6_014implementation6DeviceD1Ev(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhm */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::write(unsigned char const*, unsigned long) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhm(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EEC2Emb */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteStatus, (android::hardware::MQFlavor)1>::MessageQueue(unsigned long, bool) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut11WriteStatusELNS0_8MQFlavorE1EEC2Emb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice23setBtScoWidebandEnabledEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setBtScoWidebandEnabled(bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice23setBtScoWidebandEnabledEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice20supportsAudioPatchesEv */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::supportsAudioPatches() */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice20supportsAudioPatchesEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream9addEffectEm */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::addEffect(unsigned long) */
int _ZN7android8hardware5audio4V6_014implementation6Stream9addEffectEm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6StreamD0Ev */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::~Stream() */
int _ZN7android8hardware5audio4V6_014implementation6StreamD0Ev(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned long) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15getBtHfpEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getBtHfpEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice15getBtHfpEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice19setBtScoNrecEnabledEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setBtScoNrecEnabled(bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice19setBtScoNrecEnabledEb(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device23setupParametersCallbackERKNS_2spIN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::setupParametersCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback> const&) */
int _ZN7android8hardware5audio4V6_014implementation6Device23setupParametersCallbackERKNS_2spIN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long, effect_interface_s**> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tImPP18effect_interface_sEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_ */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::setParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice13setParametersERKNS0_8hidl_vecINS2_14ParameterValueEEES9_(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceD1Ev */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::~PrimaryDevice() */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDeviceD1Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream13getBufferSizeEv */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getBufferSize() */
int _ZN7android8hardware5audio4V6_014implementation6Stream13getBufferSizeEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut9addEffectEm */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::addEffect(unsigned long) */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut9addEffectEm(void);

/* Symbol: _ZNSt3__16vectorI23playback_track_metadataNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_ */
/* Demangled: void std::__1::vector<playback_track_metadata, std::__1::allocator<playback_track_metadata> >::__push_back_slow_path<playback_track_metadata>(playback_track_metadata&&) */
int _ZNSt3__16vectorI23playback_track_metadataNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10setTtyModeEN7android8hardware5audio4V6_014IPrimaryDevice7TtyModeE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setTtyMode(android::hardware::audio::V6_0::IPrimaryDevice::TtyMode) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice10setTtyModeEN7android8hardware5audio4V6_014IPrimaryDevice7TtyModeE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14setBtHfpVolumeEf */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setBtHfpVolume(float) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14setBtHfpVolumeEf(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice19getBtScoNrecEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getBtScoNrecEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice19getBtScoNrecEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13halToLocationE27audio_microphone_location_t */
/* Demangled: android::hardware::audio::V6_0::implementation::halToLocation(audio_microphone_location_t) */
int _ZN7android8hardware5audio4V6_014implementation13halToLocationE27audio_microphone_location_t(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice16createAudioPatchERKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::createAudioPatch(android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, int)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice16createAudioPatchERKNS0_8hidl_vecINS1_6common4V6_015AudioPortConfigEEESB_NSt3__18functionIFvNS2_6ResultEiEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream23getSupportedSampleRatesENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getSupportedSampleRates(android::hardware::audio::common::V6_0::AudioFormat, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation6Stream23getSupportedSampleRatesENS1_6common4V6_011AudioFormatENSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecIjEEEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn12getFrameSizeEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getFrameSize() */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn12getFrameSizeEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOutD1Ev */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::~StreamOut() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOutD1Ev(void);

/* Symbol: _ZTVN7android8hardware5audio4V6_014implementation14ParametersUtilE */
/* Demangled: vtable for android::hardware::audio::V6_0::implementation::ParametersUtil */
extern void* _ZTVN7android8hardware5audio4V6_014implementation14ParametersUtilE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice12getAudioPortERKNS1_6common4V6_09AudioPortENSt3__18functionIFvNS2_6ResultES9_EEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::getAudioPort(android::hardware::audio::common::V6_0::AudioPort const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::common::V6_0::AudioPort const&)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice12getAudioPortERKNS1_6common4V6_09AudioPortENSt3__18functionIFvNS2_6ResultES9_EEE(void);

/* Symbol: _ZTv0_n24_N7android8hardware5audio4V6_014implementation13PrimaryDeviceD1Ev */
/* Demangled: virtual thunk to android::hardware::audio::V6_0::implementation::PrimaryDevice::~PrimaryDevice() */
int _ZTv0_n24_N7android8hardware5audio4V6_014implementation13PrimaryDeviceD1Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream12getFrameSizeEv */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getFrameSize() */
int _ZN7android8hardware5audio4V6_014implementation6Stream12getFrameSizeEv(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EED2Ev */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamOut::WriteCommand, (android::hardware::MQFlavor)1>::~MessageQueue() */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_010IStreamOut12WriteCommandELNS0_8MQFlavorE1EED2Ev(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut13getFrameCountEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::getFrameCount() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut13getFrameCountEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation9StreamOut7standbyEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamOut::standby() */
int _ZN7android8hardware5audio4V6_014implementation9StreamOut7standbyEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice5closeEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::close() */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice5closeEv(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation18deviceAddressToHalERKNS1_6common4V6_013DeviceAddressE */
/* Demangled: android::hardware::audio::V6_0::implementation::deviceAddressToHal(android::hardware::audio::common::V6_0::DeviceAddress const&) */
int _ZN7android8hardware5audio4V6_014implementation18deviceAddressToHalERKNS1_6common4V6_013DeviceAddressE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Device13getMasterMuteENSt3__18functionIFvNS2_6ResultEbEEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Device::getMasterMute(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN7android8hardware5audio4V6_014implementation6Device13getMasterMuteENSt3__18functionIFvNS2_6ResultEbEEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6StreamC1EP12audio_stream */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::Stream(audio_stream*) */
int _ZN7android8hardware5audio4V6_014implementation6StreamC1EP12audio_stream(void);

/* Symbol: _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::hardware::MessageQueue<android::hardware::audio::V6_0::IStreamIn::ReadParameters, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android8hardware12MessageQueueINS0_5audio4V6_09IStreamIn14ReadParametersELNS0_8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13setParametersERKN7android8hardware8hidl_vecINS7_5audio4V6_014ParameterValueEEESE_ */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::setParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice13setParametersERKN7android8hardware8hidl_vecINS7_5audio4V6_014ParameterValueEEESE_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14getMicrophonesENSt3__18functionIFvN7android8hardware5audio4V6_06ResultERKNS9_8hidl_vecINSB_14MicrophoneInfoEEEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::getMicrophones(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::MicrophoneInfo> const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice14getMicrophonesENSt3__18functionIFvN7android8hardware5audio4V6_06ResultERKNS9_8hidl_vecINSB_14MicrophoneInfoEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice17releaseAudioPatchEi */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::releaseAudioPatch(int) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice17releaseAudioPatchEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD2Ev */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::~MTKPrimaryDevice() */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDeviceD2Ev(void);

/* Symbol: _ZTCN7android8hardware5audio4V6_014implementation6DeviceE0_NS2_7IDeviceE */
/* Demangled: construction vtable for android::hardware::audio::V6_0::IDevice-in-android::hardware::audio::V6_0::implementation::Device */
extern void* _ZTCN7android8hardware5audio4V6_014implementation6DeviceE0_NS2_7IDeviceE;

/* Symbol: _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15openInputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_12SinkMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_9IStreamInEEESC_EEE */
/* Demangled: android::hardware::audio::V6_0::implementation::PrimaryDevice::openInputStream(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::SinkMetadata const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IStreamIn> const&, android::hardware::audio::common::V6_0::AudioConfig const&)>) */
int _ZN7android8hardware5audio4V6_014implementation13PrimaryDevice15openInputStreamEiRKNS1_6common4V6_013DeviceAddressERKNS6_11AudioConfigEiRKNS6_12SinkMetadataENSt3__18functionIFvNS2_6ResultERKNS_2spINS2_9IStreamInEEESC_EEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation6Stream13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE */
/* Demangled: android::hardware::audio::V6_0::implementation::Stream::getParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&)>) */
int _ZN7android8hardware5audio4V6_014implementation6Stream13getParametersERKNS0_8hidl_vecINS2_14ParameterValueEEERKNS5_INS0_11hidl_stringEEENSt3__18functionIFvNS2_6ResultES9_EEE(void);

/* Symbol: _ZN7android8hardware5audio4V6_014implementation8StreamIn14getChannelMaskEv */
/* Demangled: android::hardware::audio::V6_0::implementation::StreamIn::getChannelMask() */
int _ZN7android8hardware5audio4V6_014implementation8StreamIn14getChannelMaskEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice16updateAudioPatchEiRKN7android8hardware8hidl_vecINS7_5audio6common4V6_015AudioPortConfigEEESF_NSt3__18functionIFvNS9_4V6_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::implementation::MTKPrimaryDevice::updateAudioPatch(int, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_114implementation16MTKPrimaryDevice16updateAudioPatchEiRKN7android8hardware8hidl_vecINS7_5audio6common4V6_015AudioPortConfigEEESF_NSt3__18functionIFvNS9_4V6_06ResultEiEEE(void);

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_AUDIO_6_0_IMPL_MEDIATEK_H */
