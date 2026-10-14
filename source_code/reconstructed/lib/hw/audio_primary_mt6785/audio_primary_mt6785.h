/*
 * Reverse-Engineered ABI Specification for: audio.primary.mt6785.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: audio.primary.mt6785.so
 */

#ifndef BEGONIA_RE_AUDIO_PRIMARY_MT6785_H
#define BEGONIA_RE_AUDIO_PRIMARY_MT6785_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: _ZN7android22AudioMTKGainController10setAMPGainEPvii */
/* Demangled: android::AudioMTKGainController::setAMPGain(void*, int, int) */
int _ZN7android22AudioMTKGainController10setAMPGainEPvii(void);

/* Symbol: _ZN7android22AudioMTKGainController13setStreamMuteEib */
/* Demangled: android::AudioMTKGainController::setStreamMute(int, bool) */
int _ZN7android22AudioMTKGainController13setStreamMuteEib(void);

/* Symbol: _ZN7android16GetMicDeviceModeEj */
/* Demangled: android::GetMicDeviceMode(unsigned int) */
int _ZN7android16GetMicDeviceModeEj(void);

/* Symbol: createMTKAudioDataClient */
/* Demangled: createMTKAudioDataClient */
int createMTKAudioDataClient(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController18getStreamWriteRateEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::getStreamWriteRate(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController18getStreamWriteRateEPNS_9USBStreamE(void);

/* Symbol: _ZN7android24getAudioCompFltCustParamENS_18AudioCompFltType_tEP30_AUDIO_ACF_CUSTOM_PARAM_STRUCTPKc */
/* Demangled: android::getAudioCompFltCustParam(android::AudioCompFltType_t, _AUDIO_ACF_CUSTOM_PARAM_STRUCT*, char const*) */
int _ZN7android24getAudioCompFltCustParamENS_18AudioCompFltType_tEP30_AUDIO_ACF_CUSTOM_PARAM_STRUCTPKc(void);

/* Symbol: _ZN7android16UpdateWaveHeaderEP7__sFILEj14audio_format_ttj */
/* Demangled: android::UpdateWaveHeader(__sFILE*, unsigned int, audio_format_t, unsigned short, unsigned int) */
int _ZN7android16UpdateWaveHeaderEP7__sFILEj14audio_format_ttj(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController12updateVolumeEv */
/* Demangled: android::AudioALSASpeechPhoneCallController::updateVolume() */
int _ZN7android34AudioALSASpeechPhoneCallController12updateVolumeEv(void);

/* Symbol: _ZN7android21AudioALSAFMController11getFmVolumeEv */
/* Demangled: android::AudioALSAFMController::getFmVolume() */
int _ZN7android21AudioALSAFMController11getFmVolumeEv(void);

/* Symbol: _ZN7android24keypcmPlaybackDspprimaryE */
/* Demangled: android::keypcmPlaybackDspprimary */
extern void* _ZN7android24keypcmPlaybackDspprimaryE;

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBaseD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::~AudioALSACaptureDataProviderEchoRefBase() */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBaseD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamOut*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android18AudioVIBSPKControl24UniqueAudioVIBSPKControlE */
/* Demangled: android::AudioVIBSPKControl::UniqueAudioVIBSPKControl */
extern void* _ZN7android18AudioVIBSPKControl24UniqueAudioVIBSPKControlE;

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase16createMmapBufferEiP22audio_mmap_buffer_info */
/* Demangled: android::AudioALSAPlaybackHandlerBase::createMmapBuffer(int, audio_mmap_buffer_info*) */
int _ZN7android28AudioALSAPlaybackHandlerBase16createMmapBufferEiP22audio_mmap_buffer_info(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload13process_writeEv */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::process_write() */
int _ZN7android31AudioALSAPlaybackHandlerOffload13process_writeEv(void);

/* Symbol: _ZN7android13GetSystemTimeEb */
/* Demangled: android::GetSystemTime(bool) */
int _ZN7android13GetSystemTimeEb(void);

/* Symbol: _ZN7android17RingBuf_copyEmptyEPNS_7RingBufES1_ */
/* Demangled: android::RingBuf_copyEmpty(android::RingBuf*, android::RingBuf*) */
int _ZN7android17RingBuf_copyEmptyEPNS_7RingBufES1_(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE10do_destroyEPvj */
/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE10do_destroyEPvj(void);

/* Symbol: _ZN7android17AudioALSAStreamIn10getStandbyEv */
/* Demangled: android::AudioALSAStreamIn::getStandby() */
int _ZN7android17AudioALSAStreamIn10getStandbyEv(void);

/* Symbol: _ZN7android15keypcmPlayback5E */
/* Demangled: android::keypcmPlayback5 */
extern void* _ZN7android15keypcmPlayback5E;

/* Symbol: _ZN7android11streaminSpkE */
/* Demangled: android::streaminSpk */
extern void* _ZN7android11streaminSpkE;

/* Symbol: _ZN7android23CVSDLoopbackResetBufferEv */
/* Demangled: android::CVSDLoopbackResetBuffer() */
int _ZN7android23CVSDLoopbackResetBufferEv(void);

/* Symbol: _ZN7android8SPELayer14BypassDLBufferEv */
/* Demangled: android::SPELayer::BypassDLBuffer() */
int _ZN7android8SPELayer14BypassDLBufferEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase15ClosePCMDumpDspEh */
/* Demangled: android::AudioALSACaptureDataProviderBase::ClosePCMDumpDsp(unsigned char) */
int _ZN7android32AudioALSACaptureDataProviderBase15ClosePCMDumpDspEh(void);

/* Symbol: _ZN7android17deleteMtkAudioSrcEPNS_15MtkAudioSrcBaseE */
/* Demangled: android::deleteMtkAudioSrc(android::MtkAudioSrcBase*) */
int _ZN7android17deleteMtkAudioSrcEPNS_15MtkAudioSrcBaseE(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsb14getDeviceParamEPNS_9USBStreamE */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::getDeviceParam(android::USBStream*) */
int _ZN7android27AudioALSAPlaybackHandlerUsb14getDeviceParamEPNS_9USBStreamE(void);

/* Symbol: _ZN7android24setAudioCompFltCustParamENS_18AudioCompFltType_tEP30_AUDIO_ACF_CUSTOM_PARAM_STRUCT */
/* Demangled: android::setAudioCompFltCustParam(android::AudioCompFltType_t, _AUDIO_ACF_CUSTOM_PARAM_STRUCT*) */
int _ZN7android24setAudioCompFltCustParamENS_18AudioCompFltType_tEP30_AUDIO_ACF_CUSTOM_PARAM_STRUCT(void);

/* Symbol: _ZN7android17SpeechDriverDummy19SetAcousticLoopbackEb */
/* Demangled: android::SpeechDriverDummy::SetAcousticLoopback(bool) */
int _ZN7android17SpeechDriverDummy19SetAcousticLoopbackEb(void);

/* Symbol: _ZN7android22AudioALSAStreamManager18routingInputDeviceEPNS_17AudioALSAStreamInEjj */
/* Demangled: android::AudioALSAStreamManager::routingInputDevice(android::AudioALSAStreamIn*, unsigned int, unsigned int) */
int _ZN7android22AudioALSAStreamManager18routingInputDeviceEPNS_17AudioALSAStreamInEjj(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp17closeDspPcmDriverEv */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::closeDspPcmDriver() */
int _ZN7android27AudioALSAPlaybackHandlerDsp17closeDspPcmDriverEv(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController20getVoiceWakeUpEnableEv */
/* Demangled: android::AudioALSAVoiceWakeUpController::getVoiceWakeUpEnable() */
int _ZN7android30AudioALSAVoiceWakeUpController20getVoiceWakeUpEnableEv(void);

/* Symbol: audio_fmt_conv_hal_init */
/* Demangled: audio_fmt_conv_hal_init */
int audio_fmt_conv_hal_init(void);

/* Symbol: _ZN7android15LoopbackManagerD2Ev */
/* Demangled: android::LoopbackManager::~LoopbackManager() */
int _ZN7android15LoopbackManagerD2Ev(void);

/* Symbol: _ZN7android16AudioALSANLECtrl16allocateResourceEv */
/* Demangled: android::AudioALSANLECtrl::allocateResource() */
int _ZN7android16AudioALSANLECtrl16allocateResourceEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager22phoneCallUpdatePhoneIdENS_10phone_id_tE */
/* Demangled: android::AudioALSAStreamManager::phoneCallUpdatePhoneId(android::phone_id_t) */
int _ZN7android22AudioALSAStreamManager22phoneCallUpdatePhoneIdENS_10phone_id_tE(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient22CheckDynamicSpeechMaskEv */
/* Demangled: android::AudioALSACaptureDataClient::CheckDynamicSpeechMask() */
int _ZN7android26AudioALSACaptureDataClient22CheckDynamicSpeechMaskEv(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderBTSCO4openEv */
/* Demangled: android::AudioALSACaptureDataProviderBTSCO::open() */
int _ZN7android33AudioALSACaptureDataProviderBTSCO4openEv(void);

/* Symbol: _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMICD2Ev */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerEarphonePMIC::~AudioALSACodecDeviceOutSpeakerEarphonePMIC() */
int _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMICD2Ev(void);

/* Symbol: _ZN7android27AudioALSALoopbackController12SetApBTCodecEb */
/* Demangled: android::AudioALSALoopbackController::SetApBTCodec(bool) */
int _ZN7android27AudioALSALoopbackController12SetApBTCodecEb(void);

/* Symbol: _ZN7android12AudioFtmBase13LouderSPKTestEcc */
/* Demangled: android::AudioFtmBase::LouderSPKTest(char, char) */
int _ZN7android12AudioFtmBase13LouderSPKTestEcc(void);

/* Symbol: _ZN7android17AudioALSAHardware12getAudioPortEP10audio_port */
/* Demangled: android::AudioALSAHardware::getAudioPort(audio_port*) */
int _ZN7android17AudioALSAHardware12getAudioPortEP10audio_port(void);

/* Symbol: _ZN7android22AudioALSAStreamManager22SetACFPreviewParameterEPvi */
/* Demangled: android::AudioALSAStreamManager::SetACFPreviewParameter(void*, int) */
int _ZN7android22AudioALSAStreamManager22SetACFPreviewParameterEPvi(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP13BGSoundConfigEhh */
/* Demangled: android::SpeechDriverOpenDSP::BGSoundConfig(unsigned char, unsigned char) */
int _ZN7android19SpeechDriverOpenDSP13BGSoundConfigEhh(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP24SetModemSideSamplingRateEt */
/* Demangled: android::SpeechDriverOpenDSP::SetModemSideSamplingRate(unsigned short) */
int _ZN7android19SpeechDriverOpenDSP24SetModemSideSamplingRateEt(void);

/* Symbol: _ZN7android23SpeechPcmMixerBGSPlayer15mPcmMixerUlGainE */
/* Demangled: android::SpeechPcmMixerBGSPlayer::mPcmMixerUlGain */
extern void* _ZN7android23SpeechPcmMixerBGSPlayer15mPcmMixerUlGainE;

/* Symbol: _ZTv0_n12_N7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadD0Ev */
/* Demangled: virtual thunk to android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread::~AudioBTCVSDLoopbackRxThread() */
int _ZTv0_n12_N7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadD0Ev(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallControllerD2Ev */
/* Demangled: android::AudioUSBPhoneCallController::~AudioUSBPhoneCallController() */
int _ZN7android27AudioUSBPhoneCallControllerD2Ev(void);

/* Symbol: _ZN7android14keypcmCapture2E */
/* Demangled: android::keypcmCapture2 */
extern void* _ZN7android14keypcmCapture2E;

/* Symbol: _ZN7android20RingBuf_copyToLinearEPcPNS_7RingBufEi */
/* Demangled: android::RingBuf_copyToLinear(char*, android::RingBuf*, int) */
int _ZN7android20RingBuf_copyToLinearEPcPNS_7RingBufEi(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceDLD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoiceDL::~AudioALSACaptureDataProviderVoiceDL() */
int _ZN7android35AudioALSACaptureDataProviderVoiceDLD0Ev(void);

/* Symbol: _ZTVN7android31AudioALSACaptureDataProviderUsbE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderUsb */
extern void* _ZTVN7android31AudioALSACaptureDataProviderUsbE;

/* Symbol: audio_hal_con_thread_start */
/* Demangled: audio_hal_con_thread_start */
int audio_hal_con_thread_start(void);

/* Symbol: _ZN7android19keypcmBTCVSDCaptureE */
/* Demangled: android::keypcmBTCVSDCapture */
extern void* _ZN7android19keypcmBTCVSDCaptureE;

/* Symbol: _ZNSt3__112__deque_baseINS_7__stateIcEENS_9allocatorIS2_EEE5clearEv */
/* Demangled: std::__1::__deque_base<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::clear() */
int _ZNSt3__112__deque_baseINS_7__stateIcEENS_9allocatorIS2_EEE5clearEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase30provideCaptureDataToAllClientsEj */
/* Demangled: android::AudioALSACaptureDataProviderBase::provideCaptureDataToAllClients(unsigned int) */
int _ZN7android32AudioALSACaptureDataProviderBase30provideCaptureDataToAllClientsEj(void);

/* Symbol: _ZN7android18SpeechDriverNormal17updateFeatureMaskENS_17SpeechFeatureTypeEb */
/* Demangled: android::SpeechDriverNormal::updateFeatureMask(android::SpeechFeatureType, bool) */
int _ZN7android18SpeechDriverNormal17updateFeatureMaskENS_17SpeechFeatureTypeEb(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_ */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::vector(std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_(void);

/* Symbol: _ZN7android18SpeechDriverNormal26processModemControlMessageEPNS_9sph_msg_tE */
/* Demangled: android::SpeechDriverNormal::processModemControlMessage(android::sph_msg_t*) */
int _ZN7android18SpeechDriverNormal26processModemControlMessageEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android18streaminSpk_proptyE */
/* Demangled: android::streaminSpk_propty */
extern void* _ZN7android18streaminSpk_proptyE;

/* Symbol: _ZN7android12AudioFtmBase12EarphoneTestEc */
/* Demangled: android::AudioFtmBase::EarphoneTest(char) */
int _ZN7android12AudioFtmBase12EarphoneTestEc(void);

/* Symbol: _ZN7android21MisoundScenarioToModeEi */
/* Demangled: android::MisoundScenarioToMode(int) */
int _ZN7android21MisoundScenarioToModeEi(void);

/* Symbol: _ZNKSt3__112regex_traitsIcE18__lookup_classnameIPKcEEtT_S5_bc */
/* Demangled: unsigned short std::__1::regex_traits<char>::__lookup_classname<char const*>(char const*, char const*, bool, char) const */
int _ZNKSt3__112regex_traitsIcE18__lookup_classnameIPKcEEtT_S5_bc(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp12openDspHwPcmEv */
/* Demangled: android::AudioALSACaptureDataProviderDsp::openDspHwPcm() */
int _ZN7android31AudioALSACaptureDataProviderDsp12openDspHwPcmEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase20processDmaMsgWrapperEP9ipi_msg_tPvjS3_ */
/* Demangled: android::AudioALSACaptureDataProviderBase::processDmaMsgWrapper(ipi_msg_t*, void*, unsigned int, void*) */
int _ZN7android32AudioALSACaptureDataProviderBase20processDmaMsgWrapperEP9ipi_msg_tPvjS3_(void);

/* Symbol: _ZN7android8SPELayer11GetDMNRParaENS_8SPE_MODEEPs */
/* Demangled: android::SPELayer::GetDMNRPara(android::SPE_MODE, short*) */
int _ZN7android8SPELayer11GetDMNRParaENS_8SPE_MODEEPs(void);

/* Symbol: _ZN7android16AudioALSANLECtrlD1Ev */
/* Demangled: android::AudioALSANLECtrl::~AudioALSANLECtrl() */
int _ZN7android16AudioALSANLECtrlD1Ev(void);

/* Symbol: __floatundisf */
/* Demangled: __floatundisf */
int __floatundisf(void);

/* Symbol: _ZN7android22AudioMTKGainController16SetDigitalHwGainEjjj */
/* Demangled: android::AudioMTKGainController::SetDigitalHwGain(unsigned int, unsigned int, unsigned int) */
int _ZN7android22AudioMTKGainController16SetDigitalHwGainEjjj(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderBTSCO11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderBTSCO::getInstance() */
int _ZN7android33AudioALSACaptureDataProviderBTSCO11getInstanceEv(void);

/* Symbol: _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadC1Ev */
/* Demangled: android::AudioALSALoopbackController::AudioMTKLoopbackThread::AudioMTKLoopbackThread() */
int _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadC1Ev(void);

/* Symbol: _ZN7android18AudioVIBSPKControl13setParametersEiiii */
/* Demangled: android::AudioVIBSPKControl::setParameters(int, int, int, int) */
int _ZN7android18AudioVIBSPKControl13setParametersEiiii(void);

/* Symbol: _ZTSSt9exception */
/* Demangled: typeinfo name for std::exception */
extern void* _ZTSSt9exception;

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload4openEv */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::open() */
int _ZN7android31AudioALSAPlaybackHandlerOffload4openEv(void);

/* Symbol: _ZN7android22AudioALSADataProcessorC1Ev */
/* Demangled: android::AudioALSADataProcessor::AudioALSADataProcessor() */
int _ZN7android22AudioALSADataProcessorC1Ev(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase21get_task_pcmdump_infoEjjPPv */
/* Demangled: android::AudioALSACaptureDataProviderBase::get_task_pcmdump_info(unsigned int, unsigned int, void**) */
int _ZN7android32AudioALSACaptureDataProviderBase21get_task_pcmdump_infoEjjPPv(void);

/* Symbol: audio_dsp_controller_deinit */
/* Demangled: audio_dsp_controller_deinit */
int audio_dsp_controller_deinit(void);

/* Symbol: _ZN7android18SpeechPcmMixerBaseC2Ev */
/* Demangled: android::SpeechPcmMixerBase::SpeechPcmMixerBase() */
int _ZN7android18SpeechPcmMixerBaseC2Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager12SetVCEEnableEb */
/* Demangled: android::AudioALSAStreamManager::SetVCEEnable(bool) */
int _ZN7android22AudioALSAStreamManager12SetVCEEnableEb(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerBTCVSDC2EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerBTCVSD::AudioALSAPlaybackHandlerBTCVSD(stream_attribute_t const*) */
int _ZN7android30AudioALSAPlaybackHandlerBTCVSDC2EPK18stream_attribute_t(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsb5closeEv */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::close() */
int _ZN7android27AudioALSAPlaybackHandlerUsb5closeEv(void);

/* Symbol: _ZTVN7android26AudioALSACaptureHandlerTDME */
/* Demangled: vtable for android::AudioALSACaptureHandlerTDM */
extern void* _ZTVN7android26AudioALSACaptureHandlerTDME;

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSD18readDataFromBTCVSDEPvPbP8timespec */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::readDataFromBTCVSD(void*, bool*, timespec*) */
int _ZN7android34AudioALSACaptureDataProviderBTCVSD18readDataFromBTCVSDEPvPbP8timespec(void);

/* Symbol: _ZN7android21AudioDspStreamManager16getDspA2DPEnableEv */
/* Demangled: android::AudioDspStreamManager::getDspA2DPEnable() */
int _ZN7android21AudioDspStreamManager16getDspA2DPEnableEv(void);

/* Symbol: _ZN7android18SpeechPcmMixerBase20CreatePcmMixerBufferEjjij */
/* Demangled: android::SpeechPcmMixerBase::CreatePcmMixerBuffer(unsigned int, unsigned int, int, unsigned int) */
int _ZN7android18SpeechPcmMixerBase20CreatePcmMixerBufferEjjij(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP12setParameterEPKc */
/* Demangled: android::SpeechDriverOpenDSP::setParameter(char const*) */
int _ZN7android19SpeechDriverOpenDSP12setParameterEPKc(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP9BGSoundOnEv */
/* Demangled: android::SpeechDriverOpenDSP::BGSoundOn() */
int _ZN7android19SpeechDriverOpenDSP9BGSoundOnEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase16initBitConverterEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::initBitConverter() */
int _ZN7android28AudioALSAPlaybackHandlerBase16initBitConverterEv(void);

/* Symbol: _ZN7android23AudioMTKHeadSetMessager16Get_headset_infoEv */
/* Demangled: android::AudioMTKHeadSetMessager::Get_headset_info() */
int _ZN7android23AudioMTKHeadSetMessager16Get_headset_infoEv(void);

/* Symbol: _ZN7android19SpeechShareMemGen95C1Ev */
/* Demangled: android::SpeechShareMemGen95::SpeechShareMemGen95() */
int _ZN7android19SpeechShareMemGen95C1Ev(void);

/* Symbol: _ZN7android15AudioPreProcess27set_preprocessor_echo_delayEPP18effect_interface_si */
/* Demangled: android::AudioPreProcess::set_preprocessor_echo_delay(effect_interface_s**, int) */
int _ZN7android15AudioPreProcess27set_preprocessor_echo_delayEPP18effect_interface_si(void);

/* Symbol: _ZN7android21AudioDspStreamManager23HasLowLatencyCaptureDspEv */
/* Demangled: android::AudioDspStreamManager::HasLowLatencyCaptureDsp() */
int _ZN7android21AudioDspStreamManager23HasLowLatencyCaptureDspEv(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpControllerD0Ev */
/* Demangled: android::AudioALSAVoiceWakeUpController::~AudioALSAVoiceWakeUpController() */
int _ZN7android30AudioALSAVoiceWakeUpControllerD0Ev(void);

/* Symbol: _ZN7android22AudioMTKGainController12setANCEnableEb */
/* Demangled: android::AudioMTKGainController::setANCEnable(bool) */
int _ZN7android22AudioMTKGainController12setANCEnableEb(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController7routingEjj */
/* Demangled: android::AudioALSASpeechPhoneCallController::routing(unsigned int, unsigned int) */
int _ZN7android34AudioALSASpeechPhoneCallController7routingEjj(void);

/* Symbol: _ZN7android8SPELayer14GetLatencyTimeEv */
/* Demangled: android::SPELayer::GetLatencyTime() */
int _ZN7android8SPELayer14GetLatencyTimeEv(void);

/* Symbol: _ZN7android17AudioALSAHardware15isGameSoundfxOnEv */
/* Demangled: android::AudioALSAHardware::isGameSoundfxOn() */
int _ZN7android17AudioALSAHardware15isGameSoundfxOnEv(void);

/* Symbol: _ZNKSt3__120regex_token_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEeqERKS7_ */
/* Demangled: std::__1::regex_token_iterator<std::__1::__wrap_iter<char const*>, char, std::__1::regex_traits<char> >::operator==(std::__1::regex_token_iterator<std::__1::__wrap_iter<char const*>, char, std::__1::regex_traits<char> > const&) const */
int _ZNKSt3__120regex_token_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEeqERKS7_(void);

/* Symbol: new_adsp_rlock */
/* Demangled: new_adsp_rlock */
int new_adsp_rlock(void);

/* Symbol: _ZN7android17AudioALSAStreamIn27updateDeviceConnectionStateEjb */
/* Demangled: android::AudioALSAStreamIn::updateDeviceConnectionState(unsigned int, bool) */
int _ZN7android17AudioALSAStreamIn27updateDeviceConnectionStateEjb(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP13SetSpeechModeEjj */
/* Demangled: android::SpeechDriverOpenDSP::SetSpeechMode(unsigned int, unsigned int) */
int _ZN7android19SpeechDriverOpenDSP13SetSpeechModeEjj(void);

/* Symbol: _ZNK7android6VectorIPNS_19DeviceCtlDescriptorEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::DeviceCtlDescriptor*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_19DeviceCtlDescriptorEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController15throttleControlEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::throttleControl(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController15throttleControlEPNS_9USBStreamE(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer5closeEv */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::close() */
int _ZN7android29AudioALSAPlaybackHandlerMixer5closeEv(void);

/* Symbol: _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE20__add_front_capacityEv */
/* Demangled: std::__1::deque<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::__add_front_capacity() */
int _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE20__add_front_capacityEv(void);

/* Symbol: _ZTVNSt3__120__bracket_expressionIcNS_12regex_traitsIcEEEE */
/* Demangled: vtable for std::__1::__bracket_expression<char, std::__1::regex_traits<char> > */
extern void* _ZTVNSt3__120__bracket_expressionIcNS_12regex_traitsIcEEEE;

/* Symbol: audio_pool_buf_formatter_init */
/* Demangled: audio_pool_buf_formatter_init */
int audio_pool_buf_formatter_init(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase14closePcmDriverEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::closePcmDriver() */
int _ZN7android28AudioALSAPlaybackHandlerBase14closePcmDriverEv(void);

/* Symbol: _ZN7android8SPELayer12Dump_PCM_OutENS_18SPE_DATA_DIRECTIONEPvi */
/* Demangled: android::SPELayer::Dump_PCM_Out(android::SPE_DATA_DIRECTION, void*, int) */
int _ZN7android8SPELayer12Dump_PCM_OutENS_18SPE_DATA_DIRECTIONEPvi(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase8readDataEPcj */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::readData(char*, unsigned int) */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase8readDataEPcj(void);

/* Symbol: _ZN7android14offload_streamE */
/* Demangled: android::offload_stream */
extern void* _ZN7android14offload_streamE;

/* Symbol: _ZN7android19SpeechDriverOpenDSPD2Ev */
/* Demangled: android::SpeechDriverOpenDSP::~SpeechDriverOpenDSP() */
int _ZN7android19SpeechDriverOpenDSPD2Ev(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase15deinitDcRemovalEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::deinitDcRemoval() */
int _ZN7android28AudioALSAPlaybackHandlerBase15deinitDcRemovalEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController22getSpeechFeatureStatusENS_17SpeechFeatureTypeE */
/* Demangled: android::AudioALSASpeechPhoneCallController::getSpeechFeatureStatus(android::SpeechFeatureType) */
int _ZN7android34AudioALSASpeechPhoneCallController22getSpeechFeatureStatusENS_17SpeechFeatureTypeE(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderVoiceC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoice::AudioALSACaptureDataProviderVoice() */
int _ZN7android33AudioALSACaptureDataProviderVoiceC2Ev(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager11getInstanceEv */
/* Demangled: android::AudioALSAHyBridNLEManager::getInstance() */
int _ZN7android25AudioALSAHyBridNLEManager11getInstanceEv(void);

/* Symbol: _ZN7android33AudioALSASpeechLoopbackControllerD1Ev */
/* Demangled: android::AudioALSASpeechLoopbackController::~AudioALSASpeechLoopbackController() */
int _ZN7android33AudioALSASpeechLoopbackControllerD1Ev(void);

/* Symbol: aurisys_process_ul_and_dl */
/* Demangled: aurisys_process_ul_and_dl */
int aurisys_process_ul_and_dl(void);

/* Symbol: _ZN7android18SpeechDriverNormal17TelephonyTxConfigEt */
/* Demangled: android::SpeechDriverNormal::TelephonyTxConfig(unsigned short) */
int _ZN7android18SpeechDriverNormal17TelephonyTxConfigEt(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP33RecoverModemSideStatusToInitStateEv */
/* Demangled: android::SpeechDriverOpenDSP::RecoverModemSideStatusToInitState() */
int _ZN7android19SpeechDriverOpenDSP33RecoverModemSideStatusToInitStateEv(void);

/* Symbol: _ZN7android25calculateTimeStampByBytesE8timespecj18stream_attribute_tPS0_ */
/* Demangled: android::calculateTimeStampByBytes(timespec, unsigned int, stream_attribute_t, timespec*) */
int _ZN7android25calculateTimeStampByBytesE8timespecj18stream_attribute_tPS0_(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFast4openEv */
/* Demangled: android::AudioALSAPlaybackHandlerFast::open() */
int _ZN7android28AudioALSAPlaybackHandlerFast4openEv(void);

/* Symbol: _ZN7android17SpeechDriverDummy10PCM2WayOffEv */
/* Demangled: android::SpeechDriverDummy::PCM2WayOff() */
int _ZN7android17SpeechDriverDummy10PCM2WayOffEv(void);

/* Symbol: _ZN7android16AudioEventThread11eventThreadEPv */
/* Demangled: android::AudioEventThread::eventThread(void*) */
int _ZN7android16AudioEventThread11eventThreadEPv(void);

/* Symbol: _ZTVN7android16AudioEventThreadE */
/* Demangled: vtable for android::AudioEventThread */
extern void* _ZTVN7android16AudioEventThreadE;

/* Symbol: _ZN7android22AudioSpeechEnhanceInfoC1Ev */
/* Demangled: android::AudioSpeechEnhanceInfo::AudioSpeechEnhanceInfo() */
int _ZN7android22AudioSpeechEnhanceInfoC1Ev(void);

/* Symbol: _ZN7android27SpeechDataProcessingHandler24getStreamAttributeSourceENS0_6CallerEP18stream_attribute_t */
/* Demangled: android::SpeechDataProcessingHandler::getStreamAttributeSource(android::SpeechDataProcessingHandler::Caller, stream_attribute_t*) */
int _ZN7android27SpeechDataProcessingHandler24getStreamAttributeSourceENS0_6CallerEP18stream_attribute_t(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController11setVtNeedOnEb */
/* Demangled: android::AudioALSASpeechPhoneCallController::setVtNeedOn(bool) */
int _ZN7android34AudioALSASpeechPhoneCallController11setVtNeedOnEb(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderNormalD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderNormal::~AudioALSACaptureDataProviderNormal() */
int _ZN7android34AudioALSACaptureDataProviderNormalD1Ev(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager18CloseHeadphonePathEv */
/* Demangled: android::AudioALSAHardwareResourceManager::CloseHeadphonePath() */
int _ZN7android32AudioALSAHardwareResourceManager18CloseHeadphonePathEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSACaptureHandlerBase*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEE12do_constructEPvj(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerHDMI4openEv */
/* Demangled: android::AudioALSAPlaybackHandlerHDMI::open() */
int _ZN7android28AudioALSAPlaybackHandlerHDMI4openEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android17AudioALSAHardware4dumpEiRKNS_6VectorINS_8String16EEE */
/* Demangled: android::AudioALSAHardware::dump(int, android::Vector<android::String16> const&) */
int _ZN7android17AudioALSAHardware4dumpEiRKNS_6VectorINS_8String16EEE(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManagerC1Ev */
/* Demangled: android::AudioALSAHyBridNLEManager::AudioALSAHyBridNLEManager() */
int _ZN7android25AudioALSAHyBridNLEManagerC1Ev(void);

/* Symbol: _ZN7android16SpeechVMRecorder8openFileEv */
/* Demangled: android::SpeechVMRecorder::openFile() */
int _ZN7android16SpeechVMRecorder8openFileEv(void);

/* Symbol: _ZN7android18AudioALSAStreamOut15getMmapPositionEP19audio_mmap_position */
/* Demangled: android::AudioALSAStreamOut::getMmapPosition(audio_mmap_position*) */
int _ZN7android18AudioALSAStreamOut15getMmapPositionEP19audio_mmap_position(void);

/* Symbol: _ZTVN7android17AudioDspCallFinalE */
/* Demangled: vtable for android::AudioDspCallFinal */
extern void* _ZTVN7android17AudioDspCallFinalE;

/* Symbol: _ZN7android22AudioMTKGainController17getHpImpedanceIdxEi */
/* Demangled: android::AudioMTKGainController::getHpImpedanceIdx(int) */
int _ZN7android22AudioMTKGainController17getHpImpedanceIdxEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android22AudioALSADriverUtilityD0Ev */
/* Demangled: android::AudioALSADriverUtility::~AudioALSADriverUtility() */
int _ZN7android22AudioALSADriverUtilityD0Ev(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController21getEchoCurrentDelayUsEv */
/* Demangled: android::AudioUSBPhoneCallController::getEchoCurrentDelayUs() */
int _ZN7android27AudioUSBPhoneCallController21getEchoCurrentDelayUsEv(void);

/* Symbol: _ZN7android8AudioFtm12EarphoneTestEc */
/* Demangled: android::AudioFtm::EarphoneTest(char) */
int _ZN7android8AudioFtm12EarphoneTestEc(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDspC1EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::AudioALSAPlaybackHandlerDsp(stream_attribute_t const*) */
int _ZN7android27AudioALSAPlaybackHandlerDspC1EPK18stream_attribute_t(void);

/* Symbol: _ZN7android18SpeechMessageQueue26getQueueElementUntilPushedEPPNS_9sph_msg_tEPj */
/* Demangled: android::SpeechMessageQueue::getQueueElementUntilPushed(android::sph_msg_t**, unsigned int*) */
int _ZN7android18SpeechMessageQueue26getQueueElementUntilPushedEPPNS_9sph_msg_tEPj(void);

/* Symbol: _ZN7android12AudioFtmBase15SetVibSpkEnableEbj */
/* Demangled: android::AudioFtmBase::SetVibSpkEnable(bool, unsigned int) */
int _ZN7android12AudioFtmBase15SetVibSpkEnableEbj(void);

/* Symbol: _ZN7android17AudioALSAStreamIn12ClosePCMDumpEv */
/* Demangled: android::AudioALSAStreamIn::ClosePCMDump() */
int _ZN7android17AudioALSAStreamIn12ClosePCMDumpEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager12setAudioModeE12audio_mode_t */
/* Demangled: android::AudioALSAHardwareResourceManager::setAudioMode(audio_mode_t) */
int _ZN7android32AudioALSAHardwareResourceManager12setAudioModeE12audio_mode_t(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManagerD0Ev */
/* Demangled: android::AudioALSAHardwareResourceManager::~AudioALSAHardwareResourceManager() */
int _ZN7android32AudioALSAHardwareResourceManagerD0Ev(void);

/* Symbol: _ZN7android15keypcmPlayback6E */
/* Demangled: android::keypcmPlayback6 */
extern void* _ZN7android15keypcmPlayback6E;

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer4openEv */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::open() */
int _ZN7android29AudioALSAPlaybackHandlerMixer4openEv(void);

/* Symbol: _ZN7android17AudioALSAHardware17setHiFiStateToXMLEb */
/* Demangled: android::AudioALSAHardware::setHiFiStateToXML(bool) */
int _ZN7android17AudioALSAHardware17setHiFiStateToXMLEb(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase15mDumpFileNumDspE */
/* Demangled: android::AudioALSACaptureDataProviderBase::mDumpFileNumDsp */
extern void* _ZN7android32AudioALSACaptureDataProviderBase15mDumpFileNumDspE;

/* Symbol: _ZN7android19AudioALSAHandlerKtv11getInstanceEv */
/* Demangled: android::AudioALSAHandlerKtv::getInstance() */
int _ZN7android19AudioALSAHandlerKtv11getInstanceEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerHDMI5closeEv */
/* Demangled: android::AudioALSAPlaybackHandlerHDMI::close() */
int _ZN7android28AudioALSAPlaybackHandlerHDMI5closeEv(void);

/* Symbol: _ZN7android24keypcmVOIPCallBTPlaybackE */
/* Demangled: android::keypcmVOIPCallBTPlayback */
extern void* _ZN7android24keypcmVOIPCallBTPlaybackE;

/* Symbol: _ZN7android30AudioALSACaptureHandlerFMRadioD2Ev */
/* Demangled: android::AudioALSACaptureHandlerFMRadio::~AudioALSACaptureHandlerFMRadio() */
int _ZN7android30AudioALSACaptureHandlerFMRadioD2Ev(void);

/* Symbol: _ZN7android34AudioALSACodecDeviceOutSpeakerPMIC35mAudioALSACodecDeviceOutSpeakerPMICE */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerPMIC::mAudioALSACodecDeviceOutSpeakerPMIC */
extern void* _ZN7android34AudioALSACodecDeviceOutSpeakerPMIC35mAudioALSACodecDeviceOutSpeakerPMICE;

/* Symbol: add_aurisys_dsp_dump */
/* Demangled: add_aurisys_dsp_dump */
int add_aurisys_dsp_dump(void);

/* Symbol: _ZN7android8Play2Way9mPlay2WayE */
/* Demangled: android::Play2Way::mPlay2Way */
extern void* _ZN7android8Play2Way9mPlay2WayE;

/* Symbol: _ZN7android21AudioALSAFMController7routingEjj */
/* Demangled: android::AudioALSAFMController::routing(unsigned int, unsigned int) */
int _ZN7android21AudioALSAFMController7routingEjj(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderModemDaiD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderModemDai::~AudioALSACaptureDataProviderModemDai() */
int _ZN7android36AudioALSACaptureDataProviderModemDaiD1Ev(void);

/* Symbol: _ZN7android21AudioDspStreamManager17startPlaybackTaskEv */
/* Demangled: android::AudioDspStreamManager::startPlaybackTask() */
int _ZN7android21AudioDspStreamManager17startPlaybackTaskEv(void);

/* Symbol: _ZN7android17SpeechDriverDummy14SpeechRouterOnEv */
/* Demangled: android::SpeechDriverDummy::SpeechRouterOn() */
int _ZN7android17SpeechDriverDummy14SpeechRouterOnEv(void);

/* Symbol: _ZN7android21AudioDspStreamManager22addCaptureDataProviderEPNS_32AudioALSACaptureDataProviderBaseE */
/* Demangled: android::AudioDspStreamManager::addCaptureDataProvider(android::AudioALSACaptureDataProviderBase*) */
int _ZN7android21AudioDspStreamManager22addCaptureDataProviderEPNS_32AudioALSACaptureDataProviderBaseE(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZN7android18SpeechDriverNormal18eCallCtrlSeqSwitchEb */
/* Demangled: android::SpeechDriverNormal::eCallCtrlSeqSwitch(bool) */
int _ZN7android18SpeechDriverNormal18eCallCtrlSeqSwitchEb(void);

/* Symbol: _ZN7android11getPowerHalEv */
/* Demangled: android::getPowerHal() */
int _ZN7android11getPowerHalEv(void);

/* Symbol: _ZN7android17SpeechDriverDummyD0Ev */
/* Demangled: android::SpeechDriverDummy::~SpeechDriverDummy() */
int _ZN7android17SpeechDriverDummyD0Ev(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController11getDeviceIdEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::getDeviceId(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController11getDeviceIdEPNS_9USBStreamE(void);

/* Symbol: _ZN7android16AudioBitTrueTestC1Ev */
/* Demangled: android::AudioBitTrueTest::AudioBitTrueTest() */
int _ZN7android16AudioBitTrueTestC1Ev(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP20mSpeechDriverOpenDSPE */
/* Demangled: android::SpeechDriverOpenDSP::mSpeechDriverOpenDSP */
extern void* _ZN7android19SpeechDriverOpenDSP20mSpeechDriverOpenDSPE;

/* Symbol: _ZN7android27AudioUSBPhoneCallController14isForceUSBCallEv */
/* Demangled: android::AudioUSBPhoneCallController::isForceUSBCall() */
int _ZN7android27AudioUSBPhoneCallController14isForceUSBCallEv(void);

/* Symbol: _ZN7android17AudioALSAHardware20onXmlChangedCallbackEP10_AppHandlePKc */
/* Demangled: android::AudioALSAHardware::onXmlChangedCallback(_AppHandle*, char const*) */
int _ZN7android17AudioALSAHardware20onXmlChangedCallbackEP10_AppHandlePKc(void);

/* Symbol: _ZTv0_n12_N7android18AudioBTCVSDControl20AudioExtMDCVSDThreadD0Ev */
/* Demangled: virtual thunk to android::AudioBTCVSDControl::AudioExtMDCVSDThread::~AudioExtMDCVSDThread() */
int _ZTv0_n12_N7android18AudioBTCVSDControl20AudioExtMDCVSDThreadD0Ev(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerAAudio7routingEj */
/* Demangled: android::AudioALSACaptureHandlerAAudio::routing(unsigned int) */
int _ZN7android29AudioALSACaptureHandlerAAudio7routingEj(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__push_lookaheadERKS3_bj */
/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_lookahead(std::__1::basic_regex<char, std::__1::regex_traits<char> > const&, bool, unsigned int) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__push_lookaheadERKS3_bj(void);

/* Symbol: _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadD2Ev */
/* Demangled: android::AudioALSALoopbackController::AudioMTKLoopbackThread::~AudioMTKLoopbackThread() */
int _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadD2Ev(void);

/* Symbol: _ZN7android14keypcmCapture3E */
/* Demangled: android::keypcmCapture3 */
extern void* _ZN7android14keypcmCapture3E;

/* Symbol: _ZN7android19SpeechDriverFactory27CreateSpeechDriverInstancesEv */
/* Demangled: android::SpeechDriverFactory::CreateSpeechDriverInstances() */
int _ZN7android19SpeechDriverFactory27CreateSpeechDriverInstancesEv(void);

/* Symbol: _ZN7android22AudioALSADataProcessorD2Ev */
/* Demangled: android::AudioALSADataProcessor::~AudioALSADataProcessor() */
int _ZN7android22AudioALSADataProcessorD2Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl33BT_SCO_ExtMDGetCVSDULWriteTmpBuf2Ev */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMDGetCVSDULWriteTmpBuf2() */
int _ZN7android18AudioBTCVSDControl33BT_SCO_ExtMDGetCVSDULWriteTmpBuf2Ev(void);

/* Symbol: _ZN7android18SpeechDriverNormal15SpeechRouterOffEv */
/* Demangled: android::SpeechDriverNormal::SpeechRouterOff() */
int _ZN7android18SpeechDriverNormal15SpeechRouterOffEv(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase21detachPlaybackHandlerEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::detachPlaybackHandler() */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase21detachPlaybackHandlerEv(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager19initPlayBackHandlerE18playback_handler_tP18stream_attribute_tPNS_28AudioALSAPlaybackHandlerBaseE */
/* Demangled: android::AudioALSAHyBridNLEManager::initPlayBackHandler(playback_handler_t, stream_attribute_t*, android::AudioALSAPlaybackHandlerBase*) */
int _ZN7android25AudioALSAHyBridNLEManager19initPlayBackHandlerE18playback_handler_tP18stream_attribute_tPNS_28AudioALSAPlaybackHandlerBaseE(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerAAudio5startEv */
/* Demangled: android::AudioALSAPlaybackHandlerAAudio::start() */
int _ZN7android30AudioALSAPlaybackHandlerAAudio5startEv(void);

/* Symbol: _ZN7android20GainTableParamParser21voiceBufferGainDb2IdxEi */
/* Demangled: android::GainTableParamParser::voiceBufferGainDb2Idx(int) */
int _ZN7android20GainTableParamParser21voiceBufferGainDb2IdxEi(void);

/* Symbol: _ZN7android15streaminIVCPMInE */
/* Demangled: android::streaminIVCPMIn */
extern void* _ZN7android15streaminIVCPMInE;

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController10setPhoneIdENS_10phone_id_tE */
/* Demangled: android::AudioALSASpeechPhoneCallController::setPhoneId(android::phone_id_t) */
int _ZN7android34AudioALSASpeechPhoneCallController10setPhoneIdENS_10phone_id_tE(void);

/* Symbol: _ZN7android17SpeechDriverDummy8recordOnENS_19SpcRecordTypeStructE */
/* Demangled: android::SpeechDriverDummy::recordOn(android::SpcRecordTypeStruct) */
int _ZN7android17SpeechDriverDummy8recordOnENS_19SpcRecordTypeStructE(void);

/* Symbol: _ZTVN7android34AudioALSACaptureDataProviderAAudioE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderAAudio */
extern void* _ZTVN7android34AudioALSACaptureDataProviderAAudioE;

/* Symbol: _ZN7android19SpeechShareMemGen95D2Ev */
/* Demangled: android::SpeechShareMemGen95::~SpeechShareMemGen95() */
int _ZN7android19SpeechShareMemGen95D2Ev(void);

/* Symbol: _ZN7android14a2dpdsp_proptyE */
/* Demangled: android::a2dpdsp_propty */
extern void* _ZN7android14a2dpdsp_proptyE;

/* Symbol: _ZN7android21AudioALSAFMControllerD1Ev */
/* Demangled: android::AudioALSAFMController::~AudioALSAFMController() */
int _ZN7android21AudioALSAFMControllerD1Ev(void);

/* Symbol: _ZTVNSt3__110__back_refIcEE */
/* Demangled: vtable for std::__1::__back_ref<char> */
extern void* _ZTVNSt3__110__back_refIcEE;

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase13openPcmDriverEj */
/* Demangled: android::AudioALSACaptureDataProviderBase::openPcmDriver(unsigned int) */
int _ZN7android32AudioALSACaptureDataProviderBase13openPcmDriverEj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl15BT_SCO_TX_StartEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_TX_Start() */
int _ZN7android18AudioBTCVSDControl15BT_SCO_TX_StartEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp15setDspRuntimeEnEb */
/* Demangled: android::AudioALSACaptureDataProviderDsp::setDspRuntimeEn(bool) */
int _ZN7android31AudioALSACaptureDataProviderDsp15setDspRuntimeEnEb(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController16setBargeInEnableEb */
/* Demangled: android::AudioALSAVoiceWakeUpController::setBargeInEnable(bool) */
int _ZN7android30AudioALSAVoiceWakeUpController16setBargeInEnableEb(void);

/* Symbol: _ZN7android18SpeechDriverNormal8VoipRxOnEv */
/* Demangled: android::SpeechDriverNormal::VoipRxOn() */
int _ZN7android18SpeechDriverNormal8VoipRxOnEv(void);

/* Symbol: _ZN7android22AudioMTKGainController28getHpImpedanceCompesateValueEv */
/* Demangled: android::AudioMTKGainController::getHpImpedanceCompesateValue() */
int _ZN7android22AudioMTKGainController28getHpImpedanceCompesateValueEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP21SetModemLoopbackPointEt */
/* Demangled: android::SpeechDriverOpenDSP::SetModemLoopbackPoint(unsigned short) */
int _ZN7android19SpeechDriverOpenDSP21SetModemLoopbackPointEt(void);

/* Symbol: _ZN7android15audio_dump_pathE */
/* Demangled: android::audio_dump_path */
extern void* _ZN7android15audio_dump_pathE;

/* Symbol: _ZNKSt3__115__word_boundaryIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__word_boundary<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__115__word_boundaryIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZTVNSt3__121__empty_non_own_stateIcEE */
/* Demangled: vtable for std::__1::__empty_non_own_state<char> */
extern void* _ZTVNSt3__121__empty_non_own_stateIcEE;

/* Symbol: _ZN7android22AudioALSAStreamManager13setUsedDeviceEj */
/* Demangled: android::AudioALSAStreamManager::setUsedDevice(unsigned int) */
int _ZN7android22AudioALSAStreamManager13setUsedDeviceEj(void);

/* Symbol: _ZN7android24SpeechPcmMixerBaseBufferD0Ev */
/* Demangled: android::SpeechPcmMixerBaseBuffer::~SpeechPcmMixerBaseBuffer() */
int _ZN7android24SpeechPcmMixerBaseBufferD0Ev(void);

/* Symbol: _ZTVN7android33AudioALSASpeechLoopbackControllerE */
/* Demangled: vtable for android::AudioALSASpeechLoopbackController */
extern void* _ZTVN7android33AudioALSASpeechLoopbackControllerE;

/* Symbol: get_enum_by_string_aurisys_scenario */
/* Demangled: get_enum_by_string_aurisys_scenario */
int get_enum_by_string_aurisys_scenario(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp4openEv */
/* Demangled: android::AudioALSACaptureDataProviderDsp::open() */
int _ZN7android31AudioALSACaptureDataProviderDsp4openEv(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer5writeEPKvj */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::write(void const*, unsigned int) */
int _ZN7android29AudioALSAPlaybackHandlerMixer5writeEPKvj(void);

/* Symbol: _ZN7android23SpeechPcmMixerBGSPlayer10pcmMixerOnEPNS_21SpeechDriverInterfaceE */
/* Demangled: android::SpeechPcmMixerBGSPlayer::pcmMixerOn(android::SpeechDriverInterface*) */
int _ZN7android23SpeechPcmMixerBGSPlayer10pcmMixerOnEPNS_21SpeechDriverInterfaceE(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase17initNLEProcessingEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::initNLEProcessing() */
int _ZN7android28AudioALSAPlaybackHandlerBase17initNLEProcessingEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderNormal11adjustSpikeEv */
/* Demangled: android::AudioALSACaptureDataProviderNormal::adjustSpike() */
int _ZN7android34AudioALSACaptureDataProviderNormal11adjustSpikeEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager18updatePhoneMicModeEv */
/* Demangled: android::AudioALSAHardwareResourceManager::updatePhoneMicMode() */
int _ZN7android32AudioALSAHardwareResourceManager18updatePhoneMicModeEv(void);

/* Symbol: deinit_aurisys_controller */
/* Demangled: deinit_aurisys_controller */
int deinit_aurisys_controller(void);

/* Symbol: get_filename */
/* Demangled: get_filename */
int get_filename(void);

/* Symbol: _ZN7android19SpeechShareMemGen9521resetShareMemoryIndexEv */
/* Demangled: android::SpeechShareMemGen95::resetShareMemoryIndex() */
int _ZN7android19SpeechShareMemGen9521resetShareMemoryIndexEv(void);

/* Symbol: _ZN7android12mBTAudioInfoE */
/* Demangled: android::mBTAudioInfo */
extern void* _ZN7android12mBTAudioInfoE;

/* Symbol: alock_trylock */
/* Demangled: alock_trylock */
int alock_trylock(void);

/* Symbol: _ZN7android22AudioMTKGainController11logToLinearEf */
/* Demangled: android::AudioMTKGainController::logToLinear(float) */
int _ZN7android22AudioMTKGainController11logToLinearEf(void);

/* Symbol: _ZN7android24CVSDLoopbackGetFreeSpaceEv */
/* Demangled: android::CVSDLoopbackGetFreeSpace() */
int _ZN7android24CVSDLoopbackGetFreeSpaceEv(void);

/* Symbol: _ZTVNSt3__126__end_marked_subexpressionIcEE */
/* Demangled: vtable for std::__1::__end_marked_subexpression<char> */
extern void* _ZTVNSt3__126__end_marked_subexpressionIcEE;

/* Symbol: _ZN7android34AudioALSACaptureDataProviderDspRaw11openApHwPcmEv */
/* Demangled: android::AudioALSACaptureDataProviderDspRaw::openApHwPcm() */
int _ZN7android34AudioALSACaptureDataProviderDspRaw11openApHwPcmEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderVOWC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderVOW::AudioALSACaptureDataProviderVOW() */
int _ZN7android31AudioALSACaptureDataProviderVOWC1Ev(void);

/* Symbol: _ZN7android10getMicInfoEP33audio_microphone_characteristic_tPj */
/* Demangled: android::getMicInfo(audio_microphone_characteristic_t*, unsigned int*) */
int _ZN7android10getMicInfoEP33audio_microphone_characteristic_tPj(void);

/* Symbol: _ZN7android10mSleepTimeE */
/* Demangled: android::mSleepTime */
extern void* _ZN7android10mSleepTimeE;

/* Symbol: _ZN7android10Record2WayD1Ev */
/* Demangled: android::Record2Way::~Record2Way() */
int _ZN7android10Record2WayD1Ev(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefExtC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefExt::AudioALSACaptureDataProviderEchoRefExt() */
int _ZN7android38AudioALSACaptureDataProviderEchoRefExtC1Ev(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderModemDai5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderModemDai::close() */
int _ZN7android36AudioALSACaptureDataProviderModemDai5closeEv(void);

/* Symbol: _ZN7android21SpeechMessengerNormal26ccciMessageToSpeechMessageEPNS_10ccci_msg_tEPNS_9sph_msg_tE */
/* Demangled: android::SpeechMessengerNormal::ccciMessageToSpeechMessage(android::ccci_msg_t*, android::sph_msg_t*) */
int _ZN7android21SpeechMessengerNormal26ccciMessageToSpeechMessageEPNS_10ccci_msg_tEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android22AudioMTKGainController26getSceneGainTableParameterEP17GainTableForScene */
/* Demangled: android::AudioMTKGainController::getSceneGainTableParameter(GainTableForScene*) */
int _ZN7android22AudioMTKGainController26getSceneGainTableParameterEP17GainTableForScene(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBaseD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderBase::~AudioALSACaptureDataProviderBase() */
int _ZN7android32AudioALSACaptureDataProviderBaseD2Ev(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController20SeamlessRecordEnableEv */
/* Demangled: android::AudioALSAVoiceWakeUpController::SeamlessRecordEnable() */
int _ZN7android30AudioALSAVoiceWakeUpController20SeamlessRecordEnableEv(void);

/* Symbol: _ZN7android16keypcmDeepBufferE */
/* Demangled: android::keypcmDeepBuffer */
extern void* _ZN7android16keypcmDeepBufferE;

/* Symbol: _ZN7android22AudioSpeechEnhanceInfoD2Ev */
/* Demangled: android::AudioSpeechEnhanceInfo::~AudioSpeechEnhanceInfo() */
int _ZN7android22AudioSpeechEnhanceInfoD2Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager18UpdateSpeechVolumeEv */
/* Demangled: android::AudioALSAStreamManager::UpdateSpeechVolume() */
int _ZN7android22AudioALSAStreamManager18UpdateSpeechVolumeEv(void);

/* Symbol: _ZNKSt3__111__match_anyIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__match_any<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__111__match_anyIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSD19getCurrentTimeStampEv */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::getCurrentTimeStamp() */
int _ZN7android34AudioALSACaptureDataProviderBTCVSD19getCurrentTimeStampEv(void);

/* Symbol: _ZNK7android28AudioALSAPlaybackHandlerBase30transferAudioFormatToPcmFormatE14audio_format_t */
/* Demangled: android::AudioALSAPlaybackHandlerBase::transferAudioFormatToPcmFormat(audio_format_t) const */
int _ZNK7android28AudioALSAPlaybackHandlerBase30transferAudioFormatToPcmFormatE14audio_format_t(void);

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void);

/* Symbol: _ZN7android17deleteMtkDcRemoveEPNS_20MtkAudioDcRemoveBaseE */
/* Demangled: android::deleteMtkDcRemove(android::MtkAudioDcRemoveBase*) */
int _ZN7android17deleteMtkDcRemoveEPNS_20MtkAudioDcRemoveBaseE(void);

/* Symbol: _ZN7android17WCNChipController29IsCustomizedPlatformSupportFMEv */
/* Demangled: android::WCNChipController::IsCustomizedPlatformSupportFM() */
int _ZN7android17WCNChipController29IsCustomizedPlatformSupportFMEv(void);

/* Symbol: _ZN7android19SpeechDriverFactoryD1Ev */
/* Demangled: android::SpeechDriverFactory::~SpeechDriverFactory() */
int _ZN7android19SpeechDriverFactoryD1Ev(void);

/* Symbol: _ZNKSt3__120__bracket_expressionIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__bracket_expression<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__120__bracket_expressionIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFast5closeEv */
/* Demangled: android::AudioALSAPlaybackHandlerFast::close() */
int _ZN7android28AudioALSAPlaybackHandlerFast5closeEv(void);

/* Symbol: _ZN7android27AudioALSALoopbackController4openEjjNS_10loopback_tE */
/* Demangled: android::AudioALSALoopbackController::open(unsigned int, unsigned int, android::loopback_t) */
int _ZN7android27AudioALSALoopbackController4openEjjNS_10loopback_tE(void);

/* Symbol: _ZN7android22AudioSmartPaController18isApSideSpkProtectEv */
/* Demangled: android::AudioSmartPaController::isApSideSpkProtect() */
int _ZN7android22AudioSmartPaController18isApSideSpkProtectEv(void);

/* Symbol: _ZN7android25CVSDLoopbackGetReadBufferEPPhPj */
/* Demangled: android::CVSDLoopbackGetReadBuffer(unsigned char**, unsigned int*) */
int _ZN7android25CVSDLoopbackGetReadBufferEPPhPj(void);

/* Symbol: _ZN7android17SpeechDriverDummy9SpeechOffEv */
/* Demangled: android::SpeechDriverDummy::SpeechOff() */
int _ZN7android17SpeechDriverDummy9SpeechOffEv(void);

/* Symbol: _ZTVN7android16SpeechVMRecorderE */
/* Demangled: vtable for android::SpeechVMRecorder */
extern void* _ZTVN7android16SpeechVMRecorderE;

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudio17updateInputDeviceEj */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::updateInputDevice(unsigned int) */
int _ZN7android34AudioALSACaptureDataProviderAAudio17updateInputDeviceEj(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP11GetInstanceENS_13modem_index_tE */
/* Demangled: android::SpeechDriverOpenDSP::GetInstance(android::modem_index_t) */
int _ZN7android19SpeechDriverOpenDSP11GetInstanceENS_13modem_index_tE(void);

/* Symbol: _ZN7android19streamin_log_proptyE */
/* Demangled: android::streamin_log_propty */
extern void* _ZN7android19streamin_log_proptyE;

/* Symbol: _ZN7android22PROPERTY_KEY_VIBSPK_ONE */
/* Demangled: android::PROPERTY_KEY_VIBSPK_ON */
extern void* _ZN7android22PROPERTY_KEY_VIBSPK_ONE;

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase25updateTotalCaptureBufSizeEj */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::updateTotalCaptureBufSize(unsigned int) */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase25updateTotalCaptureBufSizeEj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager19syncSharedOutDeviceEjPNS_18AudioALSAStreamOutE */
/* Demangled: android::AudioALSAStreamManager::syncSharedOutDevice(unsigned int, android::AudioALSAStreamOut*) */
int _ZN7android22AudioALSAStreamManager19syncSharedOutDeviceEjPNS_18AudioALSAStreamOutE(void);

/* Symbol: _ZN7android21AudioDspStreamManager16dataPasstoDspAfeEij */
/* Demangled: android::AudioDspStreamManager::dataPasstoDspAfe(int, unsigned int) */
int _ZN7android21AudioDspStreamManager16dataPasstoDspAfeEij(void);

/* Symbol: adsp_deregister_feature */
/* Demangled: adsp_deregister_feature */
int adsp_deregister_feature(void);

/* Symbol: _ZN7android26setupLinearBufWithSineWaveEPcj */
/* Demangled: android::setupLinearBufWithSineWave(char*, unsigned int) */
int _ZN7android26setupLinearBufWithSineWaveEPcj(void);

/* Symbol: _ZTVN7android6VectorIPNS_10BufferInfoEEE */
/* Demangled: vtable for android::Vector<android::BufferInfo*> */
extern void* _ZTVN7android6VectorIPNS_10BufferInfoEEE;

/* Symbol: _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSDD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTCVSD::~AudioALSACaptureDataProviderEchoRefBTCVSD() */
int _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSDD0Ev(void);

/* Symbol: _ZN7android18AudioALSAStreamOut32mSuspendStreamOutHDMIStereoCountE */
/* Demangled: android::AudioALSAStreamOut::mSuspendStreamOutHDMIStereoCount */
extern void* _ZN7android18AudioALSAStreamOut32mSuspendStreamOutHDMIStereoCountE;

/* Symbol: aurisys_parsing_param_file */
/* Demangled: aurisys_parsing_param_file */
int aurisys_parsing_param_file(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerANCC1EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerANC::AudioALSACaptureHandlerANC(stream_attribute_t*) */
int _ZN7android26AudioALSACaptureHandlerANCC1EP18stream_attribute_t(void);

/* Symbol: _ZNK7android17AudioALSAStreamIn10sampleRateEv */
/* Demangled: android::AudioALSAStreamIn::sampleRate() const */
int _ZNK7android17AudioALSAStreamIn10sampleRateEv(void);

/* Symbol: _ZN7android16SpeechExtMemUSIP16closeShareMemoryEv */
/* Demangled: android::SpeechExtMemUSIP::closeShareMemory() */
int _ZN7android16SpeechExtMemUSIP16closeShareMemoryEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerHDMID1Ev */
/* Demangled: android::AudioALSAPlaybackHandlerHDMI::~AudioALSAPlaybackHandlerHDMI() */
int _ZN7android28AudioALSAPlaybackHandlerHDMID1Ev(void);

/* Symbol: _ZN7android18keypcmFMI2SCaptureE */
/* Demangled: android::keypcmFMI2SCapture */
extern void* _ZN7android18keypcmFMI2SCaptureE;

/* Symbol: _ZN7android17AudioALSAHardware17closeOutputStreamEP26AudioMTKStreamOutInterface */
/* Demangled: android::AudioALSAHardware::closeOutputStream(AudioMTKStreamOutInterface*) */
int _ZN7android17AudioALSAHardware17closeOutputStreamEP26AudioMTKStreamOutInterface(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerDspD2Ev */
/* Demangled: android::AudioALSACaptureHandlerDsp::~AudioALSACaptureHandlerDsp() */
int _ZN7android26AudioALSACaptureHandlerDspD2Ev(void);

/* Symbol: _ZN7android18SpeechDriverNormal17updateSpeechParamENS_14SpeechScenarioE */
/* Demangled: android::SpeechDriverNormal::updateSpeechParam(android::SpeechScenario) */
int _ZN7android18SpeechDriverNormal17updateSpeechParamENS_14SpeechScenarioE(void);

/* Symbol: _ZN7android18SpeechPcmMixerBase16PutDataToSpeakerEPct */
/* Demangled: android::SpeechPcmMixerBase::PutDataToSpeaker(char*, unsigned short) */
int _ZN7android18SpeechPcmMixerBase16PutDataToSpeakerEPct(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_ERE_dupl_symbolINS_11__wrap_iterIPKcEEEET_S9_S9_PNS_16__owns_one_stateIcEEjj */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ERE_dupl_symbol<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>, std::__1::__owns_one_state<char>*, unsigned int, unsigned int) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_ERE_dupl_symbolINS_11__wrap_iterIPKcEEEET_S9_S9_PNS_16__owns_one_stateIcEEjj(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutReceiverPMIC5closeEv */
/* Demangled: android::AudioALSACodecDeviceOutReceiverPMIC::close() */
int _ZN7android35AudioALSACodecDeviceOutReceiverPMIC5closeEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager13setMicInverseEb */
/* Demangled: android::AudioALSAHardwareResourceManager::setMicInverse(bool) */
int _ZN7android32AudioALSAHardwareResourceManager13setMicInverseEb(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN7android17SpeechParserGen9515setKeyValuePairEPKNS_19SpeechStringBufTypeE */
/* Demangled: android::SpeechParserGen95::setKeyValuePair(android::SpeechStringBufType const*) */
int _ZN7android17SpeechParserGen9515setKeyValuePairEPKNS_19SpeechStringBufTypeE(void);

/* Symbol: _ZN7android15AudioPreProcessD1Ev */
/* Demangled: android::AudioPreProcess::~AudioPreProcess() */
int _ZN7android15AudioPreProcessD1Ev(void);

/* Symbol: _ZN7android30AudioALSACaptureHandlerFMRadio4readEPvi */
/* Demangled: android::AudioALSACaptureHandlerFMRadio::read(void*, int) */
int _ZN7android30AudioALSACaptureHandlerFMRadio4readEPvi(void);

/* Symbol: _ZN7android27AudioALSALoopbackController28OpenAudioLoopbackControlFlowEjj */
/* Demangled: android::AudioALSALoopbackController::OpenAudioLoopbackControlFlow(unsigned int, unsigned int) */
int _ZN7android27AudioALSALoopbackController28OpenAudioLoopbackControlFlowEjj(void);

/* Symbol: _ZN7android17AudioDspCallFinalD1Ev */
/* Demangled: android::AudioDspCallFinal::~AudioDspCallFinal() */
int _ZN7android17AudioDspCallFinalD1Ev(void);

/* Symbol: _ZN7android18SpeechDriverNormal11GetInstanceENS_13modem_index_tE */
/* Demangled: android::SpeechDriverNormal::GetInstance(android::modem_index_t) */
int _ZN7android18SpeechDriverNormal11GetInstanceENS_13modem_index_tE(void);

/* Symbol: _ZN7android22AudioALSAStreamManager14setVolumeIndexEiii */
/* Demangled: android::AudioALSAStreamManager::setVolumeIndex(int, int, int) */
int _ZN7android22AudioALSAStreamManager14setVolumeIndexEiii(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderHAP5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderHAP::close() */
int _ZN7android31AudioALSACaptureDataProviderHAP5closeEv(void);

/* Symbol: _ZN7android20GainTableParamParser23lineoutBufferGainDb2IdxEi */
/* Demangled: android::GainTableParamParser::lineoutBufferGainDb2Idx(int) */
int _ZN7android20GainTableParamParser23lineoutBufferGainDb2IdxEi(void);

/* Symbol: set_aurisys_on */
/* Demangled: set_aurisys_on */
int set_aurisys_on(void);

/* Symbol: _ZN7android21AudioDspStreamManager18addPlaybackHandlerEPNS_28AudioALSAPlaybackHandlerBaseE */
/* Demangled: android::AudioDspStreamManager::addPlaybackHandler(android::AudioALSAPlaybackHandlerBase*) */
int _ZN7android21AudioDspStreamManager18addPlaybackHandlerEPNS_28AudioALSAPlaybackHandlerBaseE(void);

/* Symbol: _ZN7android18SpeechDriverNormal19SetAcousticLoopbackEb */
/* Demangled: android::SpeechDriverNormal::SetAcousticLoopback(bool) */
int _ZN7android18SpeechDriverNormal19SetAcousticLoopbackEb(void);

/* Symbol: _ZN7android22AudioMTKGainController14ApplyVoiceGainEi12audio_mode_tj */
/* Demangled: android::AudioMTKGainController::ApplyVoiceGain(int, audio_mode_t, unsigned int) */
int _ZN7android22AudioMTKGainController14ApplyVoiceGainEi12audio_mode_tj(void);

/* Symbol: _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThread10readyToRunEv */
/* Demangled: android::AudioALSALoopbackController::AudioMTKLoopbackThread::readyToRun() */
int _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThread10readyToRunEv(void);

/* Symbol: _ZN7android16AudioBitTrueTestD2Ev */
/* Demangled: android::AudioBitTrueTest::~AudioBitTrueTest() */
int _ZN7android16AudioBitTrueTestD2Ev(void);

/* Symbol: _ZN7android8AudioFtm14ReadAuxadcDataEiPi */
/* Demangled: android::AudioFtm::ReadAuxadcData(int, int*) */
int _ZN7android8AudioFtm14ReadAuxadcDataEiPi(void);

/* Symbol: _ZN7android12SpeechConfig13initAppParserEv */
/* Demangled: android::SpeechConfig::initAppParser() */
int _ZN7android12SpeechConfig13initAppParserEv(void);

/* Symbol: _ZN7android18keypcmUlDlLoopbackE */
/* Demangled: android::keypcmUlDlLoopback */
extern void* _ZN7android18keypcmUlDlLoopbackE;

/* Symbol: _ZN7android17WCNChipController16BTUseCVSDRemovalEv */
/* Demangled: android::WCNChipController::BTUseCVSDRemoval() */
int _ZN7android17WCNChipController16BTUseCVSDRemovalEv(void);

/* Symbol: _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMIC5closeEv */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerEarphonePMIC::close() */
int _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMIC5closeEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl19BT_SCO_RX_SetHandleEPFvPvES1_jjj */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_SetHandle(void (*)(void*), void*, unsigned int, unsigned int, unsigned int) */
int _ZN7android18AudioBTCVSDControl19BT_SCO_RX_SetHandleEPFvPvES1_jjj(void);

/* Symbol: _ZN7android18AudioALSAStreamOut18updatePolicyDeviceEj */
/* Demangled: android::AudioALSAStreamOut::updatePolicyDevice(unsigned int) */
int _ZN7android18AudioALSAStreamOut18updatePolicyDeviceEj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager21EnableSphStrmByDeviceEj */
/* Demangled: android::AudioALSAStreamManager::EnableSphStrmByDevice(unsigned int) */
int _ZN7android22AudioALSAStreamManager21EnableSphStrmByDeviceEj(void);

/* Symbol: _ZN7android18AudioVIBSPKControl13VibSpkProcessEjPvj */
/* Demangled: android::AudioVIBSPKControl::VibSpkProcess(unsigned int, void*, unsigned int) */
int _ZN7android18AudioVIBSPKControl13VibSpkProcessEjPvj(void);

/* Symbol: _ZN7android14AudioUSBCenter15outGetParameterEPKc */
/* Demangled: android::AudioUSBCenter::outGetParameter(char const*) */
int _ZN7android14AudioUSBCenter15outGetParameterEPKc(void);

/* Symbol: _ZN7android25getPlaybackTimestampLogOnEv */
/* Demangled: android::getPlaybackTimestampLogOn() */
int _ZN7android25getPlaybackTimestampLogOnEv(void);

/* Symbol: _ZN7android8SPELayer7GetModeEv */
/* Demangled: android::SPELayer::GetMode() */
int _ZN7android8SPELayer7GetModeEv(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerAEC7routingEj */
/* Demangled: android::AudioALSACaptureHandlerAEC::routing(unsigned int) */
int _ZN7android26AudioALSACaptureHandlerAEC7routingEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEE16do_move_backwardES2_PKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<void*, android::IAudioALSACaptureDataClient*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEE16do_move_backwardES2_PKvj(void);

/* Symbol: _ZN7android15LoopbackManagerC2Ev */
/* Demangled: android::LoopbackManager::LoopbackManager() */
int _ZN7android15LoopbackManagerC2Ev(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClientC1EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureDataClient::AudioALSACaptureDataClient(android::AudioALSACaptureDataProviderBase*, stream_attribute_t*) */
int _ZN7android26AudioALSACaptureDataClientC1EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t(void);

/* Symbol: _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMICC2Ev */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerEarphonePMIC::AudioALSACodecDeviceOutSpeakerEarphonePMIC() */
int _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMICC2Ev(void);

/* Symbol: _ZN7android16AudioBitTrueTest13testDumpCloseEP7__sFILE */
/* Demangled: android::AudioBitTrueTest::testDumpClose(__sFILE*) */
int _ZN7android16AudioBitTrueTest13testDumpCloseEP7__sFILE(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp5startEv */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::start() */
int _ZN7android27AudioALSAPlaybackHandlerDsp5startEv(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBase15getMmapPositionEP19audio_mmap_position */
/* Demangled: android::AudioALSACaptureHandlerBase::getMmapPosition(audio_mmap_position*) */
int _ZN7android27AudioALSACaptureHandlerBase15getMmapPositionEP19audio_mmap_position(void);

/* Symbol: _ZN7android17AudioDspCallFinal25SetArsiAttributeCallFinalEv */
/* Demangled: android::AudioDspCallFinal::SetArsiAttributeCallFinal() */
int _ZN7android17AudioDspCallFinal25SetArsiAttributeCallFinalEv(void);

/* Symbol: _ZN7android22AudioSmartPaController23isSmartPaSphEchoRefNeedEbi */
/* Demangled: android::AudioSmartPaController::isSmartPaSphEchoRefNeed(bool, int) */
int _ZN7android22AudioSmartPaController23isSmartPaSphEchoRefNeedEbi(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP9VoipRxOffEv */
/* Demangled: android::SpeechDriverOpenDSP::VoipRxOff() */
int _ZN7android19SpeechDriverOpenDSP9VoipRxOffEv(void);

/* Symbol: _ZTVN7android19SpeechDriverOpenDSPE */
/* Demangled: vtable for android::SpeechDriverOpenDSP */
extern void* _ZTVN7android19SpeechDriverOpenDSPE;

/* Symbol: _ZN7android18AudioALSAStreamOut5closeEv */
/* Demangled: android::AudioALSAStreamOut::close() */
int _ZN7android18AudioALSAStreamOut5closeEv(void);

/* Symbol: _ZN7android22AudioMTKGainController21SetLineInPlaybackGainEi */
/* Demangled: android::AudioMTKGainController::SetLineInPlaybackGain(int) */
int _ZN7android22AudioMTKGainController21SetLineInPlaybackGainEi(void);

/* Symbol: _ZN7android41AUDIO_COMPENSATION_FILTER_LIB_VENDOR_PATHE */
/* Demangled: android::AUDIO_COMPENSATION_FILTER_LIB_VENDOR_PATH */
extern void* _ZN7android41AUDIO_COMPENSATION_FILTER_LIB_VENDOR_PATHE;

/* Symbol: _ZN7android15AudioPreProcess18add_echo_referenceEP19echo_reference_itfe */
/* Demangled: android::AudioPreProcess::add_echo_reference(echo_reference_itfe*) */
int _ZN7android15AudioPreProcess18add_echo_referenceEP19echo_reference_itfe(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallControllerC2Ev */
/* Demangled: android::AudioUSBPhoneCallController::AudioUSBPhoneCallController() */
int _ZN7android27AudioUSBPhoneCallControllerC2Ev(void);

/* Symbol: _ZN7android29AudioALSACaptureDataClientDsp13processThreadEPv */
/* Demangled: android::AudioALSACaptureDataClientDsp::processThread(void*) */
int _ZN7android29AudioALSACaptureDataClientDsp13processThreadEPv(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderEchoRefD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRef::~AudioALSACaptureDataProviderEchoRef() */
int _ZN7android35AudioALSACaptureDataProviderEchoRefD1Ev(void);

/* Symbol: _ZN7android18AudioALSAStreamOutD1Ev */
/* Demangled: android::AudioALSAStreamOut::~AudioALSAStreamOut() */
int _ZN7android18AudioALSAStreamOutD1Ev(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp15updateAudioModeE12audio_mode_t */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::updateAudioMode(audio_mode_t) */
int _ZN7android27AudioALSAPlaybackHandlerDsp15updateAudioModeE12audio_mode_t(void);

/* Symbol: _ZN7android21AudioDspStreamManager21setA2dpPlaybackPausedEb */
/* Demangled: android::AudioDspStreamManager::setA2dpPlaybackPaused(bool) */
int _ZN7android21AudioDspStreamManager21setA2dpPlaybackPausedEb(void);

/* Symbol: _ZN7android17AudioALSAHardware18SetAudioCommonDataEijPv */
/* Demangled: android::AudioALSAHardware::SetAudioCommonData(int, unsigned int, void*) */
int _ZN7android17AudioALSAHardware18SetAudioCommonDataEijPv(void);

/* Symbol: _ZN7android17AudioALSAStreamIn8isActiveEv */
/* Demangled: android::AudioALSAStreamIn::isActive() */
int _ZN7android17AudioALSAStreamIn8isActiveEv(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerANC4initEv */
/* Demangled: android::AudioALSACaptureHandlerANC::init() */
int _ZN7android26AudioALSACaptureHandlerANC4initEv(void);

/* Symbol: _ZN7android14keypcmCapture4E */
/* Demangled: android::keypcmCapture4 */
extern void* _ZN7android14keypcmCapture4E;

/* Symbol: _ZN7android18SpeechDriverNormal13SetUplinkMuteEb */
/* Demangled: android::SpeechDriverNormal::SetUplinkMute(bool) */
int _ZN7android18SpeechDriverNormal13SetUplinkMuteEb(void);

/* Symbol: _ZN7android22AudioMTKGainController14ApplyAudioGainEi12audio_mode_t11GAIN_DEVICE */
/* Demangled: android::AudioMTKGainController::ApplyAudioGain(int, audio_mode_t, GAIN_DEVICE) */
int _ZN7android22AudioMTKGainController14ApplyAudioGainEi12audio_mode_t11GAIN_DEVICE(void);

/* Symbol: _ZN7android17keypcmI2SplaybackE */
/* Demangled: android::keypcmI2Splayback */
extern void* _ZN7android17keypcmI2SplaybackE;

/* Symbol: _ZN7android26AudioALSACaptureHandlerVOW4initEv */
/* Demangled: android::AudioALSACaptureHandlerVOW::init() */
int _ZN7android26AudioALSACaptureHandlerVOW4initEv(void);

/* Symbol: _ZN7android19SpeechShareMemGen9526writeSphParamToShareMemoryEPKvjPj */
/* Demangled: android::SpeechShareMemGen95::writeSphParamToShareMemory(void const*, unsigned int, unsigned int*) */
int _ZN7android19SpeechShareMemGen9526writeSphParamToShareMemoryEPKvjPj(void);

/* Symbol: _ZN7android10Record2Way18GetBufferDataCountEv */
/* Demangled: android::Record2Way::GetBufferDataCount() */
int _ZN7android10Record2Way18GetBufferDataCountEv(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEC2INS_20regex_token_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISI_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISI_E9referenceEEE5valueESI_E4typeE */
/* Demangled: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEC2INS_20regex_token_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISI_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISI_E9referenceEEE5valueESI_E4typeE */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEC2INS_20regex_token_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISI_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISI_E9referenceEEE5valueESI_E4typeE(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderVOWD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderVOW::~AudioALSACaptureDataProviderVOW() */
int _ZN7android31AudioALSACaptureDataProviderVOWD2Ev(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase20updateStartTimeStampEP8timespec */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::updateStartTimeStamp(timespec*) */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase20updateStartTimeStampEP8timespec(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefExtD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefExt::~AudioALSACaptureDataProviderEchoRefExt() */
int _ZN7android38AudioALSACaptureDataProviderEchoRefExtD2Ev(void);

/* Symbol: _ZN7android22AudioMTKGainController12isDmicDeviceE11GAIN_DEVICE */
/* Demangled: android::AudioMTKGainController::isDmicDevice(GAIN_DEVICE) */
int _ZN7android22AudioMTKGainController12isDmicDeviceE11GAIN_DEVICE(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerAAudio4readEPvi */
/* Demangled: android::AudioALSACaptureHandlerAAudio::read(void*, int) */
int _ZN7android29AudioALSACaptureHandlerAAudio4readEPvi(void);

/* Symbol: _ZN7android18SpeechDriverNormal10BGSoundOffEv */
/* Demangled: android::SpeechDriverNormal::BGSoundOff() */
int _ZN7android18SpeechDriverNormal10BGSoundOffEv(void);

/* Symbol: _ZN7android18getBufferLatencyUsEPK18stream_attribute_ty */
/* Demangled: android::getBufferLatencyUs(stream_attribute_t const*, unsigned long long) */
int _ZN7android18getBufferLatencyUsEPK18stream_attribute_ty(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController12deinitBliSrcEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::deinitBliSrc(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController12deinitBliSrcEPNS_9USBStreamE(void);

/* Symbol: _ZN7android24PROPERTY_KEY_SET_BT_NRECE */
/* Demangled: android::PROPERTY_KEY_SET_BT_NREC */
extern void* _ZN7android24PROPERTY_KEY_SET_BT_NRECE;

/* Symbol: _ZN7android17AudioDspCallFinal26SetArsiTaskConfigCallFinalEP18arsi_task_config_t */
/* Demangled: android::AudioDspCallFinal::SetArsiTaskConfigCallFinal(arsi_task_config_t*) */
int _ZN7android17AudioDspCallFinal26SetArsiTaskConfigCallFinalEP18arsi_task_config_t(void);

/* Symbol: _ZN7android17SpeechDriverDummy8SpeechOnEv */
/* Demangled: android::SpeechDriverDummy::SpeechOn() */
int _ZN7android17SpeechDriverDummy8SpeechOnEv(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient19CheckChannelRemixOpEv */
/* Demangled: android::AudioALSACaptureDataClient::CheckChannelRemixOp() */
int _ZN7android26AudioALSACaptureDataClient19CheckChannelRemixOpEv(void);

/* Symbol: _ZTv0_n12_N7android27AudioALSALoopbackController22AudioMTKLoopbackThreadD0Ev */
/* Demangled: virtual thunk to android::AudioALSALoopbackController::AudioMTKLoopbackThread::~AudioMTKLoopbackThread() */
int _ZTv0_n12_N7android27AudioALSALoopbackController22AudioMTKLoopbackThreadD0Ev(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase10getLatencyEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::getLatency() */
int _ZN7android28AudioALSAPlaybackHandlerBase10getLatencyEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP13SetEncryptionEb */
/* Demangled: android::SpeechDriverOpenDSP::SetEncryption(bool) */
int _ZN7android19SpeechDriverOpenDSP13SetEncryptionEb(void);

/* Symbol: _ZN7android14AudioUSBCenter10prepareUsbEP17alsa_device_proxyP18stream_attribute_tijj */
/* Demangled: android::AudioUSBCenter::prepareUsb(alsa_device_proxy*, stream_attribute_t*, int, unsigned int, unsigned int) */
int _ZN7android14AudioUSBCenter10prepareUsbEP17alsa_device_proxyP18stream_attribute_tijj(void);

/* Symbol: _ZNSt3__16vectorIPcNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_ */
/* Demangled: void std::__1::vector<char*, std::__1::allocator<char*> >::__push_back_slow_path<char*>(char*&&) */
int _ZNSt3__16vectorIPcNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void);

/* Symbol: _ZN7android22AudioMTKGainController17isHeadsetCategoryE11GAIN_DEVICE */
/* Demangled: android::AudioMTKGainController::isHeadsetCategory(GAIN_DEVICE) */
int _ZN7android22AudioMTKGainController17isHeadsetCategoryE11GAIN_DEVICE(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP19updateSpeechFeatureENS_17SpeechFeatureTypeEb */
/* Demangled: android::SpeechDriverOpenDSP::updateSpeechFeature(android::SpeechFeatureType, bool) */
int _ZN7android19SpeechDriverOpenDSP19updateSpeechFeatureENS_17SpeechFeatureTypeEb(void);

/* Symbol: _ZN7android13isNeedDumpMsgEPKNS_9sph_msg_tE */
/* Demangled: android::isNeedDumpMsg(android::sph_msg_t const*) */
int _ZN7android13isNeedDumpMsgEPKNS_9sph_msg_tE(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase18getInputSampleRateEjj */
/* Demangled: android::AudioALSACaptureDataProviderBase::getInputSampleRate(unsigned int, unsigned int) */
int _ZN7android32AudioALSACaptureDataProviderBase18getInputSampleRateEjj(void);

/* Symbol: _ZN7android12initPowerHalEv */
/* Demangled: android::initPowerHal() */
int _ZN7android12initPowerHalEv(void);

/* Symbol: _ZN7android12AudioFtmBase23PhoneMic_SpkLR_LoopbackEc */
/* Demangled: android::AudioFtmBase::PhoneMic_SpkLR_Loopback(char) */
int _ZN7android12AudioFtmBase23PhoneMic_SpkLR_LoopbackEc(void);

/* Symbol: _ZN7android18AudioBTCVSDControl21BTCVSD_StandbyProcessEi */
/* Demangled: android::AudioBTCVSDControl::BTCVSD_StandbyProcess(int) */
int _ZN7android18AudioBTCVSDControl21BTCVSD_StandbyProcessEi(void);

/* Symbol: aurisys_arsi_set_dl_digital_gain */
/* Demangled: aurisys_arsi_set_dl_digital_gain */
int aurisys_arsi_set_dl_digital_gain(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtv14openPCMDumpKtvEv */
/* Demangled: android::AudioALSAHandlerKtv::openPCMDumpKtv() */
int _ZN7android19AudioALSAHandlerKtv14openPCMDumpKtvEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP15createDumpFilesEv */
/* Demangled: android::SpeechDriverOpenDSP::createDumpFiles() */
int _ZN7android19SpeechDriverOpenDSP15createDumpFilesEv(void);

/* Symbol: _ZN7android15adjustTimeStampEP8timespeci */
/* Demangled: android::adjustTimeStamp(timespec*, int) */
int _ZN7android15adjustTimeStampEP8timespeci(void);

/* Symbol: _ZN7android18AudioBTCVSDControl13BT_SCO_RX_EndEi */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_End(int) */
int _ZN7android18AudioBTCVSDControl13BT_SCO_RX_EndEi(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp14setDspHwRefPcmEv */
/* Demangled: android::AudioALSACaptureDataProviderDsp::setDspHwRefPcm() */
int _ZN7android31AudioALSACaptureDataProviderDsp14setDspHwRefPcmEv(void);

/* Symbol: _ZN7android19SpeechShareMemGen9515checkModemAliveEv */
/* Demangled: android::SpeechShareMemGen95::checkModemAlive() */
int _ZN7android19SpeechShareMemGen9515checkModemAliveEv(void);

/* Symbol: audio_fmt_conv_hal_deinit */
/* Demangled: audio_fmt_conv_hal_deinit */
int audio_fmt_conv_hal_deinit(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal18getCapturePositionEPxS1_ */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::getCapturePosition(long long*, long long*) */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal18getCapturePositionEPxS1_(void);

/* Symbol: _ZN7android30RingBuf_checkDataCrossBoundaryEPKNS_7RingBufEi */
/* Demangled: android::RingBuf_checkDataCrossBoundary(android::RingBuf const*, int) */
int _ZN7android30RingBuf_checkDataCrossBoundaryEPKNS_7RingBufEi(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBaseD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::~AudioALSACaptureDataProviderEchoRefBase() */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBaseD1Ev(void);

/* Symbol: _ZN7android33AudioALSASpeechLoopbackControllerC1Ev */
/* Demangled: android::AudioALSASpeechLoopbackController::AudioALSASpeechLoopbackController() */
int _ZN7android33AudioALSASpeechLoopbackControllerC1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioMTKFilterManager*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android18AudioVIBSPKControl12freeInstanceEv */
/* Demangled: android::AudioVIBSPKControl::freeInstance() */
int _ZN7android18AudioVIBSPKControl12freeInstanceEv(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerAAudio12setFilterMngEPNS_21AudioMTKFilterManagerE */
/* Demangled: android::AudioALSAPlaybackHandlerAAudio::setFilterMng(android::AudioMTKFilterManager*) */
int _ZN7android30AudioALSAPlaybackHandlerAAudio12setFilterMngEPNS_21AudioMTKFilterManagerE(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload5flushEv */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::flush() */
int _ZN7android31AudioALSAPlaybackHandlerOffload5flushEv(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient21CheckNeedBesRecordSRCEv */
/* Demangled: android::AudioALSACaptureDataClient::CheckNeedBesRecordSRC() */
int _ZN7android26AudioALSACaptureDataClient21CheckNeedBesRecordSRCEv(void);

/* Symbol: _ZN7android21AudioDspStreamManager18setDspRefRuntimeEnEhb */
/* Demangled: android::AudioDspStreamManager::setDspRefRuntimeEn(unsigned char, bool) */
int _ZN7android21AudioDspStreamManager18setDspRefRuntimeEnEhb(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal17CheckNativeEffectEv */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::CheckNativeEffect() */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal17CheckNativeEffectEv(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormal5closeEv */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::close() */
int _ZN7android30AudioALSAPlaybackHandlerNormal5closeEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControlD1Ev */
/* Demangled: android::AudioBTCVSDControl::~AudioBTCVSDControl() */
int _ZN7android18AudioBTCVSDControlD1Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager16setAllStreamHiFiEPNS_18AudioALSAStreamOutEj */
/* Demangled: android::AudioALSAStreamManager::setAllStreamHiFi(android::AudioALSAStreamOut*, unsigned int) */
int _ZN7android22AudioALSAStreamManager16setAllStreamHiFiEPNS_18AudioALSAStreamOutEj(void);

/* Symbol: new_aurisys_lib_manager */
/* Demangled: new_aurisys_lib_manager */
int new_aurisys_lib_manager(void);

/* Symbol: aurisys_arsi_set_dl_enhance */
/* Demangled: aurisys_arsi_set_dl_enhance */
int aurisys_arsi_set_dl_enhance(void);

/* Symbol: _ZTVN7android34AudioALSACaptureDataProviderDspRawE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderDspRaw */
extern void* _ZTVN7android34AudioALSACaptureDataProviderDspRawE;

/* Symbol: _ZN7android21AudioDspStreamManager19dumpPlaybackHandlerEv */
/* Demangled: android::AudioDspStreamManager::dumpPlaybackHandler() */
int _ZN7android21AudioDspStreamManager19dumpPlaybackHandlerEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP11setMuteInfoEj */
/* Demangled: android::SpeechDriverOpenDSP::setMuteInfo(unsigned int) */
int _ZN7android19SpeechDriverOpenDSP11setMuteInfoEj(void);

/* Symbol: _ZN7android8AudioFtm11getInstanceEv */
/* Demangled: android::AudioFtm::getInstance() */
int _ZN7android8AudioFtm11getInstanceEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderNormalC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderNormal::AudioALSACaptureDataProviderNormal() */
int _ZN7android34AudioALSACaptureDataProviderNormalC1Ev(void);

/* Symbol: audio_sample_rate_mask_to_num */
/* Demangled: audio_sample_rate_mask_to_num */
int audio_sample_rate_mask_to_num(void);

/* Symbol: _ZNK7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::SpeechPcmMixerBaseBuffer*>::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEE10do_compareEPKvS5_(void);

/* Symbol: _ZN7android19AudioALSAParamTuner21updataOutputFIRCoffesEP22AudioTasteTuningStruct */
/* Demangled: android::AudioALSAParamTuner::updataOutputFIRCoffes(AudioTasteTuningStruct*) */
int _ZN7android19AudioALSAParamTuner21updataOutputFIRCoffesEP22AudioTasteTuningStruct(void);

/* Symbol: _ZN7android19keypcmCaptureDspRawE */
/* Demangled: android::keypcmCaptureDspRaw */
extern void* _ZN7android19keypcmCaptureDspRawE;

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE30__parse_character_class_escapeIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_character_class_escape<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE30__parse_character_class_escapeIPKcEET_S7_S7_(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager15getGstepAndGnumEijPiS1_ */
/* Demangled: android::AudioALSAHyBridNLEManager::getGstepAndGnum(int, unsigned int, int*, int*) */
int _ZN7android25AudioALSAHyBridNLEManager15getGstepAndGnumEijPiS1_(void);

/* Symbol: _ZN7android17AudioALSAStreamIn18CheckBesRecordInfoEv */
/* Demangled: android::AudioALSAStreamIn::CheckBesRecordInfo() */
int _ZN7android17AudioALSAStreamIn18CheckBesRecordInfoEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager20setVoiceWakeUpEnableEb */
/* Demangled: android::AudioALSAStreamManager::setVoiceWakeUpEnable(bool) */
int _ZN7android22AudioALSAStreamManager20setVoiceWakeUpEnableEb(void);

/* Symbol: _ZN7android12AudioFtmBaseD0Ev */
/* Demangled: android::AudioFtmBase::~AudioFtmBase() */
int _ZN7android12AudioFtmBaseD0Ev(void);

/* Symbol: _ZN7android23AudioMTKHeadSetMessagerC1Ev */
/* Demangled: android::AudioMTKHeadSetMessager::AudioMTKHeadSetMessager() */
int _ZN7android23AudioMTKHeadSetMessagerC1Ev(void);

/* Symbol: _ZN7android23AudioEventThreadManager18unregisterCallbackENS_14AudioEventTypeE */
/* Demangled: android::AudioEventThreadManager::unregisterCallback(android::AudioEventType) */
int _ZN7android23AudioEventThreadManager18unregisterCallbackENS_14AudioEventTypeE(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase30compensatePresentationPositionEPyP8timespec */
/* Demangled: android::AudioALSAPlaybackHandlerBase::compensatePresentationPosition(unsigned long long*, timespec*) */
int _ZN7android28AudioALSAPlaybackHandlerBase30compensatePresentationPositionEPyP8timespec(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerAAudio16createMmapBufferEiP22audio_mmap_buffer_info */
/* Demangled: android::AudioALSAPlaybackHandlerAAudio::createMmapBuffer(int, audio_mmap_buffer_info*) */
int _ZN7android30AudioALSAPlaybackHandlerAAudio16createMmapBufferEiP22audio_mmap_buffer_info(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo21SetAPDMNRTuningEnableEb */
/* Demangled: android::AudioSpeechEnhanceInfo::SetAPDMNRTuningEnable(bool) */
int _ZN7android22AudioSpeechEnhanceInfo21SetAPDMNRTuningEnableEb(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBase17getStreamInReopenEv */
/* Demangled: android::AudioALSACaptureHandlerBase::getStreamInReopen() */
int _ZN7android27AudioALSACaptureHandlerBase17getStreamInReopenEv(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerAAudio5startEv */
/* Demangled: android::AudioALSACaptureHandlerAAudio::start() */
int _ZN7android29AudioALSACaptureHandlerAAudio5startEv(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE30__parse_character_class_escapeINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_character_class_escape<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE30__parse_character_class_escapeINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCO41mAudioALSACaptureDataProviderEchoRefBTSCOE */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTSCO::mAudioALSACaptureDataProviderEchoRefBTSCO */
extern void* _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCO41mAudioALSACaptureDataProviderEchoRefBTSCOE;

/* Symbol: _ZTv0_n12_N7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadD1Ev */
/* Demangled: virtual thunk to android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread::~AudioBTCVSDLoopbackRxThread() */
int _ZTv0_n12_N7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadD1Ev(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer23closeMixerSourceHandlerEv */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::closeMixerSourceHandler() */
int _ZN7android29AudioALSAPlaybackHandlerMixer23closeMixerSourceHandlerEv(void);

/* Symbol: _ZN7android27SpeechEnhancementController26SetDynamicMaskOnToAllModemENS_22sph_enh_dynamic_mask_tEb */
/* Demangled: android::SpeechEnhancementController::SetDynamicMaskOnToAllModem(android::sph_enh_dynamic_mask_t, bool) */
int _ZN7android27SpeechEnhancementController26SetDynamicMaskOnToAllModemENS_22sph_enh_dynamic_mask_tEb(void);

/* Symbol: _ZNKSt3__113__empty_stateIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__empty_state<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__113__empty_stateIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceDLD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoiceDL::~AudioALSACaptureDataProviderVoiceDL() */
int _ZN7android35AudioALSACaptureDataProviderVoiceDLD1Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager16IsSphStrmSupportEv */
/* Demangled: android::AudioALSAStreamManager::IsSphStrmSupport() */
int _ZN7android22AudioALSAStreamManager16IsSphStrmSupportEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudio4stopEv */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::stop() */
int _ZN7android34AudioALSACaptureDataProviderAAudio4stopEv(void);

/* Symbol: _ZN7android15keypcmPlayback8E */
/* Demangled: android::keypcmPlayback8 */
extern void* _ZN7android15keypcmPlayback8E;

/* Symbol: _ZN7android20GainTableParamParser16getGainTableSpecEPP13GainTableSpec */
/* Demangled: android::GainTableParamParser::getGainTableSpec(GainTableSpec**) */
int _ZN7android20GainTableParamParser16getGainTableSpecEPP13GainTableSpec(void);

/* Symbol: _ZTVN7android30AudioALSAPlaybackHandlerNormalE */
/* Demangled: vtable for android::AudioALSAPlaybackHandlerNormal */
extern void* _ZTVN7android30AudioALSAPlaybackHandlerNormalE;

/* Symbol: _ZTVN7android34AudioALSACaptureDataProviderNormalE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderNormal */
extern void* _ZTVN7android34AudioALSACaptureDataProviderNormalE;

/* Symbol: _ZN7android18AudioBTCVSDControl17mBTSCOCVSDContextE */
/* Demangled: android::AudioBTCVSDControl::mBTSCOCVSDContext */
extern void* _ZN7android18AudioBTCVSDControl17mBTSCOCVSDContextE;

/* Symbol: _ZN7android36AudioALSACaptureDataProviderModemDaiC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderModemDai::AudioALSACaptureDataProviderModemDai() */
int _ZN7android36AudioALSACaptureDataProviderModemDaiC1Ev(void);

/* Symbol: _ZN7android17AudioMessengerIPI18mAudioMessengerIPIE */
/* Demangled: android::AudioMessengerIPI::mAudioMessengerIPI */
extern void* _ZN7android17AudioMessengerIPI18mAudioMessengerIPIE;

/* Symbol: _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSD11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTCVSD::getInstance() */
int _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSD11getInstanceEv(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload15setDspRuntimeEnEb */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::setDspRuntimeEn(bool) */
int _ZN7android31AudioALSAPlaybackHandlerOffload15setDspRuntimeEnEb(void);

/* Symbol: _ZN7android13mPCMDumpMutexE */
/* Demangled: android::mPCMDumpMutex */
extern void* _ZN7android13mPCMDumpMutexE;

/* Symbol: _ZN7android16AudioALSANLECtrlD2Ev */
/* Demangled: android::AudioALSANLECtrl::~AudioALSANLECtrl() */
int _ZN7android16AudioALSANLECtrlD2Ev(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudio11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::getInstance() */
int _ZN7android34AudioALSACaptureDataProviderAAudio11getInstanceEv(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN7android22AudioSmartPaController8setI2sHDEbi */
/* Demangled: android::AudioSmartPaController::setI2sHD(bool, int) */
int _ZN7android22AudioSmartPaController8setI2sHDEbi(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerBTCVSDD0Ev */
/* Demangled: android::AudioALSAPlaybackHandlerBTCVSD::~AudioALSAPlaybackHandlerBTCVSD() */
int _ZN7android30AudioALSAPlaybackHandlerBTCVSDD0Ev(void);

/* Symbol: _ZN7android32AudioALSACaptureDataClientSyncIO23copyCaptureDataToClientENS_7RingBufE */
/* Demangled: android::AudioALSACaptureDataClientSyncIO::copyCaptureDataToClient(android::RingBuf) */
int _ZN7android32AudioALSACaptureDataClientSyncIO23copyCaptureDataToClientENS_7RingBufE(void);

/* Symbol: _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadC2Ev */
/* Demangled: android::AudioALSALoopbackController::AudioMTKLoopbackThread::AudioMTKLoopbackThread() */
int _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadC2Ev(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager15addHwPathStreamENS_20audio_stream_hw_pathE */
/* Demangled: android::AudioALSAHyBridNLEManager::addHwPathStream(android::audio_stream_hw_path) */
int _ZN7android25AudioALSAHyBridNLEManager15addHwPathStreamENS_20audio_stream_hw_pathE(void);

/* Symbol: _ZN7android22AudioALSADataProcessorC2Ev */
/* Demangled: android::AudioALSADataProcessor::AudioALSADataProcessor() */
int _ZN7android22AudioALSADataProcessorC2Ev(void);

/* Symbol: _ZN7android17AudioALSAStreamIn36updateOutputDeviceInfoForInputStreamEj */
/* Demangled: android::AudioALSAStreamIn::updateOutputDeviceInfoForInputStream(unsigned int) */
int _ZN7android17AudioALSAStreamIn36updateOutputDeviceInfoForInputStreamEj(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase4stopEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::stop() */
int _ZN7android28AudioALSAPlaybackHandlerBase4stopEv(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController17doBargeInRecoveryEv */
/* Demangled: android::AudioALSAVoiceWakeUpController::doBargeInRecovery() */
int _ZN7android30AudioALSAVoiceWakeUpController17doBargeInRecoveryEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal11setMuteInfoEj */
/* Demangled: android::SpeechDriverNormal::setMuteInfo(unsigned int) */
int _ZN7android18SpeechDriverNormal11setMuteInfoEj(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerVoice22ChooseTargetSampleRateEj */
/* Demangled: android::AudioALSAPlaybackHandlerVoice::ChooseTargetSampleRate(unsigned int) */
int _ZN7android29AudioALSAPlaybackHandlerVoice22ChooseTargetSampleRateEj(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutEarphonePMIC19DeviceDoDcCalibrateEv */
/* Demangled: android::AudioALSACodecDeviceOutEarphonePMIC::DeviceDoDcCalibrate() */
int _ZN7android35AudioALSACodecDeviceOutEarphonePMIC19DeviceDoDcCalibrateEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager22setVoiceWakeUpEnable_lEb */
/* Demangled: android::AudioALSAStreamManager::setVoiceWakeUpEnable_l(bool) */
int _ZN7android22AudioALSAStreamManager22setVoiceWakeUpEnable_lEb(void);

/* Symbol: _ZN7android29AudioALSACaptureDataClientDsp17IsNeedApplyVolumeEv */
/* Demangled: android::AudioALSACaptureDataClientDsp::IsNeedApplyVolume() */
int _ZN7android29AudioALSACaptureDataClientDsp17IsNeedApplyVolumeEv(void);

/* Symbol: _ZN7android12AudioFtmBase21Audio_Set_Earpiece_OnEv */
/* Demangled: android::AudioFtmBase::Audio_Set_Earpiece_On() */
int _ZN7android12AudioFtmBase21Audio_Set_Earpiece_OnEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager15getOutputDeviceEv */
/* Demangled: android::AudioALSAHardwareResourceManager::getOutputDevice() */
int _ZN7android32AudioALSAHardwareResourceManager15getOutputDeviceEv(void);

/* Symbol: _ZN7android8AudioFtm28HeadsetMic_Receiver_LoopbackEcc */
/* Demangled: android::AudioFtm::HeadsetMic_Receiver_Loopback(char, char) */
int _ZN7android8AudioFtm28HeadsetMic_Receiver_LoopbackEcc(void);

/* Symbol: _ZN7android22isAckMessageInPairByIDEtt */
/* Demangled: android::isAckMessageInPairByID(unsigned short, unsigned short) */
int _ZN7android22isAckMessageInPairByIDEtt(void);

/* Symbol: _ZN7android19SpeechShareMemGen95C2Ev */
/* Demangled: android::SpeechShareMemGen95::SpeechShareMemGen95() */
int _ZN7android19SpeechShareMemGen95C2Ev(void);

/* Symbol: _ZN7android13keypcmCS35L35E */
/* Demangled: android::keypcmCS35L35 */
extern void* _ZN7android13keypcmCS35L35E;

/* Symbol: _ZN7android21AudioALSAFMControllerC1Ev */
/* Demangled: android::AudioALSAFMController::AudioALSAFMController() */
int _ZN7android21AudioALSAFMControllerC1Ev(void);

/* Symbol: _ZN7android32AudioALSACaptureDataClientSyncIO18getCapturePositionEPxS1_ */
/* Demangled: android::AudioALSACaptureDataClientSyncIO::getCapturePosition(long long*, long long*) */
int _ZN7android32AudioALSACaptureDataClientSyncIO18getCapturePositionEPxS1_(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerAAudio16createMmapBufferEiP22audio_mmap_buffer_info */
/* Demangled: android::AudioALSACaptureHandlerAAudio::createMmapBuffer(int, audio_mmap_buffer_info*) */
int _ZN7android29AudioALSACaptureHandlerAAudio16createMmapBufferEiP22audio_mmap_buffer_info(void);

/* Symbol: _ZN7android21AudioDspStreamManager20getDspPlaybackEnableEv */
/* Demangled: android::AudioDspStreamManager::getDspPlaybackEnable() */
int _ZN7android21AudioDspStreamManager20getDspPlaybackEnableEv(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpControllerD1Ev */
/* Demangled: android::AudioALSAVoiceWakeUpController::~AudioALSAVoiceWakeUpController() */
int _ZN7android30AudioALSAVoiceWakeUpControllerD1Ev(void);

/* Symbol: _ZN7android22AudioMTKGainController15setAnalogVolumeEiii12audio_mode_t */
/* Demangled: android::AudioMTKGainController::setAnalogVolume(int, int, int, audio_mode_t) */
int _ZN7android22AudioMTKGainController15setAnalogVolumeEiii12audio_mode_t(void);

/* Symbol: _ZN7android7isApMsgEPKNS_9sph_msg_tE */
/* Demangled: android::isApMsg(android::sph_msg_t const*) */
int _ZN7android7isApMsgEPKNS_9sph_msg_tE(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase17signalDataWaitingEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::signalDataWaiting() */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase17signalDataWaitingEv(void);

/* Symbol: _ZN7android18AudioALSAStreamOut23setStreamOutOutputFlagsE20audio_output_flags_tb */
/* Demangled: android::AudioALSAStreamOut::setStreamOutOutputFlags(audio_output_flags_t, bool) */
int _ZN7android18AudioALSAStreamOut23setStreamOutOutputFlagsE20audio_output_flags_tb(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBaseC2EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerBase::AudioALSACaptureHandlerBase(stream_attribute_t*) */
int _ZN7android27AudioALSACaptureHandlerBaseC2EP18stream_attribute_t(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDspD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderDsp::~AudioALSACaptureDataProviderDsp() */
int _ZN7android31AudioALSACaptureDataProviderDspD0Ev(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer21getHardwareBufferInfoEP18time_info_struct_t */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::getHardwareBufferInfo(time_info_struct_t*) */
int _ZN7android29AudioALSAPlaybackHandlerMixer21getHardwareBufferInfoEP18time_info_struct_t(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP12switchBTModeEj */
/* Demangled: android::SpeechDriverOpenDSP::switchBTMode(unsigned int) */
int _ZN7android19SpeechDriverOpenDSP12switchBTModeEj(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo14SetForceAECRecEb */
/* Demangled: android::AudioSpeechEnhanceInfo::SetForceAECRec(bool) */
int _ZN7android22AudioSpeechEnhanceInfo14SetForceAECRecEb(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController18loadUSBDeviceParamEv */
/* Demangled: android::AudioUSBPhoneCallController::loadUSBDeviceParam() */
int _ZN7android27AudioUSBPhoneCallController18loadUSBDeviceParamEv(void);

/* Symbol: _ZN7android8AudioFtm15ATV_AudPlay_OffEv */
/* Demangled: android::AudioFtm::ATV_AudPlay_Off() */
int _ZN7android8AudioFtm15ATV_AudPlay_OffEv(void);

/* Symbol: _ZTISt11logic_error */
/* Demangled: typeinfo for std::logic_error */
extern void* _ZTISt11logic_error;

/* Symbol: _ZN7android24DefaultVoIPDMNR_cal_dataE */
/* Demangled: android::DefaultVoIPDMNR_cal_data */
extern void* _ZN7android24DefaultVoIPDMNR_cal_dataE;

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController26mSpeechPhoneCallControllerE */
/* Demangled: android::AudioALSASpeechPhoneCallController::mSpeechPhoneCallController */
extern void* _ZN7android34AudioALSASpeechPhoneCallController26mSpeechPhoneCallControllerE;

/* Symbol: _ZN7android8Play2WayD0Ev */
/* Demangled: android::Play2Way::~Play2Way() */
int _ZN7android8Play2WayD0Ev(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsb11initUsbInfoEP18stream_attribute_tP17alsa_device_proxy */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::initUsbInfo(stream_attribute_t*, alsa_device_proxy*) */
int _ZN7android27AudioALSAPlaybackHandlerUsb11initUsbInfoEP18stream_attribute_tP17alsa_device_proxy(void);

/* Symbol: _ZN7android18SpeechDriverNormal9recordOffENS_19SpcRecordTypeStructE */
/* Demangled: android::SpeechDriverNormal::recordOff(android::SpcRecordTypeStruct) */
int _ZN7android18SpeechDriverNormal9recordOffENS_19SpcRecordTypeStructE(void);

/* Symbol: _ZN7android29sph_sample_rate_enum_to_valueEh */
/* Demangled: android::sph_sample_rate_enum_to_value(unsigned char) */
int _ZN7android29sph_sample_rate_enum_to_valueEh(void);

/* Symbol: _ZN7android19SpeechDriverFactory28DestroySpeechDriverInstancesEv */
/* Demangled: android::SpeechDriverFactory::DestroySpeechDriverInstances() */
int _ZN7android19SpeechDriverFactory28DestroySpeechDriverInstancesEv(void);

/* Symbol: _ZN7android16AudioALSANLECtrl7processEPvj */
/* Demangled: android::AudioALSANLECtrl::process(void*, unsigned int) */
int _ZN7android16AudioALSANLECtrl7processEPvj(void);

/* Symbol: _ZN7android33AudioALSASpeechLoopbackControllerD2Ev */
/* Demangled: android::AudioALSASpeechLoopbackController::~AudioALSASpeechLoopbackController() */
int _ZN7android33AudioALSASpeechLoopbackControllerD2Ev(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerAAudioD0Ev */
/* Demangled: android::AudioALSACaptureHandlerAAudio::~AudioALSACaptureHandlerAAudio() */
int _ZN7android29AudioALSACaptureHandlerAAudioD0Ev(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP17TelephonyTxConfigEt */
/* Demangled: android::SpeechDriverOpenDSP::TelephonyTxConfig(unsigned short) */
int _ZN7android19SpeechDriverOpenDSP17TelephonyTxConfigEt(void);

/* Symbol: _ZN7android10Record2WayC1Ev */
/* Demangled: android::Record2Way::Record2Way() */
int _ZN7android10Record2WayC1Ev(void);

/* Symbol: _ZNK7android6VectorIPNS_33AudioParameterChangedHidlCallbackEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::AudioParameterChangedHidlCallback*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_33AudioParameterChangedHidlCallbackEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerVoice4openEv */
/* Demangled: android::AudioALSAPlaybackHandlerVoice::open() */
int _ZN7android29AudioALSAPlaybackHandlerVoice4openEv(void);

/* Symbol: _ZTVN7android35AudioALSACodecDeviceOutEarphonePMICE */
/* Demangled: vtable for android::AudioALSACodecDeviceOutEarphonePMIC */
extern void* _ZTVN7android35AudioALSACodecDeviceOutEarphonePMICE;

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBaseC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderBase::AudioALSACaptureDataProviderBase() */
int _ZN7android32AudioALSACaptureDataProviderBaseC2Ev(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP12ScpMaskMDIrqEv */
/* Demangled: android::SpeechDriverOpenDSP::ScpMaskMDIrq() */
int _ZN7android19SpeechDriverOpenDSP12ScpMaskMDIrqEv(void);

/* Symbol: _ZN7android20SpeechPcmMixerVoipRx10pcmMixerOnEPNS_21SpeechDriverInterfaceE */
/* Demangled: android::SpeechPcmMixerVoipRx::pcmMixerOn(android::SpeechDriverInterface*) */
int _ZN7android20SpeechPcmMixerVoipRx10pcmMixerOnEPNS_21SpeechDriverInterfaceE(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfoC2Ev */
/* Demangled: android::AudioSpeechEnhanceInfo::AudioSpeechEnhanceInfo() */
int _ZN7android22AudioSpeechEnhanceInfoC2Ev(void);

/* Symbol: _ZN7android17AudioALSAHardware23setupParametersCallbackEPFi34device_parameters_callback_event_tP39audio_hw_device_set_parameters_callbackPvES4_ */
/* Demangled: android::AudioALSAHardware::setupParametersCallback(int (*)(device_parameters_callback_event_t, audio_hw_device_set_parameters_callback*, void*), void*) */
int _ZN7android17AudioALSAHardware23setupParametersCallbackEPFi34device_parameters_callback_event_tP39audio_hw_device_set_parameters_callbackPvES4_(void);

/* Symbol: _ZNSt3__113__vector_baseINS_7__stateIcEENS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_7__stateIcEENS_9allocatorIS2_EEED2Ev(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormalC2EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::AudioALSAPlaybackHandlerNormal(stream_attribute_t const*) */
int _ZN7android30AudioALSAPlaybackHandlerNormalC2EPK18stream_attribute_t(void);

/* Symbol: _ZNK7android6VectorIPNS_19DeviceCtlDescriptorEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::DeviceCtlDescriptor*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_19DeviceCtlDescriptorEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl14BT_SCO_TX_StopEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_TX_Stop() */
int _ZN7android18AudioBTCVSDControl14BT_SCO_TX_StopEv(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload12openDspHwPcmEv */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::openDspHwPcm() */
int _ZN7android31AudioALSAPlaybackHandlerOffload12openDspHwPcmEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal9VoipRxOffEv */
/* Demangled: android::SpeechDriverNormal::VoipRxOff() */
int _ZN7android18SpeechDriverNormal9VoipRxOffEv(void);

/* Symbol: _ZN7android12AudioFtmBase25SetVibSpkCalibrationParamEPv */
/* Demangled: android::AudioFtmBase::SetVibSpkCalibrationParam(void*) */
int _ZN7android12AudioFtmBase25SetVibSpkCalibrationParamEPv(void);

/* Symbol: _ZN7android19SpeechDriverFactoryC1Ev */
/* Demangled: android::SpeechDriverFactory::SpeechDriverFactory() */
int _ZN7android19SpeechDriverFactoryC1Ev(void);

/* Symbol: _ZN7android17SpeechDriverDummy15SpeechRouterOffEv */
/* Demangled: android::SpeechDriverDummy::SpeechRouterOff() */
int _ZN7android17SpeechDriverDummy15SpeechRouterOffEv(void);

/* Symbol: _ZN7android8SPELayer11Dump_PCM_InENS_18SPE_DATA_DIRECTIONEPvi */
/* Demangled: android::SPELayer::Dump_PCM_In(android::SPE_DATA_DIRECTION, void*, int) */
int _ZN7android8SPELayer11Dump_PCM_InENS_18SPE_DATA_DIRECTIONEPvi(void);

/* Symbol: _ZN7android15LoopbackManager13SetLoopbackOnENS_10loopback_tENS_24loopback_output_device_tE */
/* Demangled: android::LoopbackManager::SetLoopbackOn(android::loopback_t, android::loopback_output_device_t) */
int _ZN7android15LoopbackManager13SetLoopbackOnENS_10loopback_tENS_24loopback_output_device_tE(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormal4openEv */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::open() */
int _ZN7android30AudioALSAPlaybackHandlerNormal4openEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderNormalD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderNormal::~AudioALSACaptureDataProviderNormal() */
int _ZN7android34AudioALSACaptureDataProviderNormalD2Ev(void);

/* Symbol: _ZN7android20GainTableParamParserD0Ev */
/* Demangled: android::GainTableParamParser::~GainTableParamParser() */
int _ZN7android20GainTableParamParserD0Ev(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManagerC2Ev */
/* Demangled: android::AudioALSAHyBridNLEManager::AudioALSAHyBridNLEManager() */
int _ZN7android25AudioALSAHyBridNLEManagerC2Ev(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase19GetCaptureTimeStampEP18time_info_struct_tj */
/* Demangled: android::AudioALSACaptureDataProviderBase::GetCaptureTimeStamp(time_info_struct_t*, unsigned int) */
int _ZN7android32AudioALSACaptureDataProviderBase19GetCaptureTimeStampEP18time_info_struct_tj(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase12ClosePCMDumpEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::ClosePCMDump() */
int _ZN7android28AudioALSAPlaybackHandlerBase12ClosePCMDumpEv(void);

/* Symbol: _ZN7android22RingBuf_copyFromLinearEPNS_7RingBufEPKci */
/* Demangled: android::RingBuf_copyFromLinear(android::RingBuf*, char const*, int) */
int _ZN7android22RingBuf_copyFromLinearEPNS_7RingBufEPKci(void);

/* Symbol: _ZN7android22AudioALSADriverUtilityD1Ev */
/* Demangled: android::AudioALSADriverUtility::~AudioALSADriverUtility() */
int _ZN7android22AudioALSADriverUtilityD1Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl13BT_SCO_TX_EndEi */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_TX_End(int) */
int _ZN7android18AudioBTCVSDControl13BT_SCO_TX_EndEi(void);

/* Symbol: _ZN7android14isUsbSpkDeviceEj */
/* Demangled: android::isUsbSpkDevice(unsigned int) */
int _ZN7android14isUsbSpkDeviceEj(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController26getInputDeviceForPhoneCallEj */
/* Demangled: android::AudioALSASpeechPhoneCallController::getInputDeviceForPhoneCall(unsigned int) */
int _ZN7android34AudioALSASpeechPhoneCallController26getInputDeviceForPhoneCallEj(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_character_classINS_11__wrap_iterIPKcEEEET_S9_S9_PNS_20__bracket_expressionIcS2_EE */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_character_class<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_character_classINS_11__wrap_iterIPKcEEEET_S9_S9_PNS_20__bracket_expressionIcS2_EE(void);

/* Symbol: _ZN7android20GainTableParamParser11getInstanceEv */
/* Demangled: android::GainTableParamParser::getInstance() */
int _ZN7android20GainTableParamParser11getInstanceEv(void);

/* Symbol: createMTKAudioHardware */
/* Demangled: createMTKAudioHardware */
int createMTKAudioHardware(void);

/* Symbol: _ZN7android19keypcmMRGTxPlaybackE */
/* Demangled: android::keypcmMRGTxPlayback */
extern void* _ZN7android19keypcmMRGTxPlaybackE;

/* Symbol: _ZN7android32AudioALSAHardwareResourceManagerD1Ev */
/* Demangled: android::AudioALSAHardwareResourceManager::~AudioALSAHardwareResourceManager() */
int _ZN7android32AudioALSAHardwareResourceManagerD1Ev(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase5startEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::start() */
int _ZN7android32AudioALSACaptureDataProviderBase5startEv(void);

/* Symbol: _ZN7android22AudioSmartPaControllerD1Ev */
/* Demangled: android::AudioSmartPaController::~AudioSmartPaController() */
int _ZN7android22AudioSmartPaControllerD1Ev(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP19SetAcousticLoopbackEb */
/* Demangled: android::SpeechDriverOpenDSP::SetAcousticLoopback(bool) */
int _ZN7android19SpeechDriverOpenDSP19SetAcousticLoopbackEb(void);

/* Symbol: _ZN7android15streamout_notchE */
/* Demangled: android::streamout_notch */
extern void* _ZN7android15streamout_notchE;

/* Symbol: _ZN7android12AudioFtmBase20HDMI_SineGenPlaybackEbi */
/* Demangled: android::AudioFtmBase::HDMI_SineGenPlayback(bool, int) */
int _ZN7android12AudioFtmBase20HDMI_SineGenPlaybackEbi(void);

/* Symbol: _ZN7android10DumpThreadEPv */
/* Demangled: android::DumpThread(void*) */
int _ZN7android10DumpThreadEPv(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsbC1EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::AudioALSAPlaybackHandlerUsb(stream_attribute_t const*) */
int _ZN7android27AudioALSAPlaybackHandlerUsbC1EPK18stream_attribute_t(void);

/* Symbol: _ZN7android34AudioALSACodecDeviceOutSpeakerPMIC5closeEv */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerPMIC::close() */
int _ZN7android34AudioALSACodecDeviceOutSpeakerPMIC5closeEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager21getDevCustPathSeqenceEj */
/* Demangled: android::AudioALSAHardwareResourceManager::getDevCustPathSeqence(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager21getDevCustPathSeqenceEj(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo20IsAPDMNRTuningEnableEv */
/* Demangled: android::AudioSpeechEnhanceInfo::IsAPDMNRTuningEnable() */
int _ZN7android22AudioSpeechEnhanceInfo20IsAPDMNRTuningEnableEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager18setBypassDLProcessEb */
/* Demangled: android::AudioALSAStreamManager::setBypassDLProcess(bool) */
int _ZN7android22AudioALSAStreamManager18setBypassDLProcessEb(void);

/* Symbol: _ZN7android17AudioALSAStreamIn11OpenPCMDumpEv */
/* Demangled: android::AudioALSAStreamIn::OpenPCMDump() */
int _ZN7android17AudioALSAStreamIn11OpenPCMDumpEv(void);

/* Symbol: _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE21__match_at_start_ecmaINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb */
/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__match_at_start_ecma<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type, bool) const */
int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE21__match_at_start_ecmaINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb(void);

/* Symbol: _ZTVN7android19AudioPcmDeviceparamE */
/* Demangled: vtable for android::AudioPcmDeviceparam */
extern void* _ZTVN7android19AudioPcmDeviceparamE;

/* Symbol: _ZN7android22AudioALSAStreamManager14isEchoRefUsingEv */
/* Demangled: android::AudioALSAStreamManager::isEchoRefUsing() */
int _ZN7android22AudioALSAStreamManager14isEchoRefUsingEv(void);

/* Symbol: _ZN7android22AudioMTKGainController17GetHeadphoneRGainEv */
/* Demangled: android::AudioMTKGainController::GetHeadphoneRGain() */
int _ZN7android22AudioMTKGainController17GetHeadphoneRGainEv(void);

/* Symbol: _ZNK7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::AudioALSAHardware::AudioHalPatch*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerVoice9setVolumeEj */
/* Demangled: android::AudioALSAPlaybackHandlerVoice::setVolume(unsigned int) */
int _ZN7android29AudioALSAPlaybackHandlerVoice9setVolumeEj(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderVoice32provideModemRecordDataToProviderENS_7RingBufE */
/* Demangled: android::AudioALSACaptureDataProviderVoice::provideModemRecordDataToProvider(android::RingBuf) */
int _ZN7android33AudioALSACaptureDataProviderVoice32provideModemRecordDataToProviderENS_7RingBufE(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController13throttleResetEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::throttleReset(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController13throttleResetEPNS_9USBStreamE(void);

/* Symbol: _ZN7android17AudioDspCallFinalC1Ev */
/* Demangled: android::AudioDspCallFinal::AudioDspCallFinal() */
int _ZN7android17AudioDspCallFinalC1Ev(void);

/* Symbol: _ZN7android20GainTableParamParser17updateRingbackVolEP14GainTableParam */
/* Demangled: android::GainTableParamParser::updateRingbackVol(GainTableParam*) */
int _ZN7android20GainTableParamParser17updateRingbackVolEP14GainTableParam(void);

/* Symbol: _ZN7android22AudioMTKGainController13ApplyMdUlGainEi */
/* Demangled: android::AudioMTKGainController::ApplyMdUlGain(int) */
int _ZN7android22AudioMTKGainController13ApplyMdUlGainEi(void);

/* Symbol: _ZN7android14keypcmDl3MeidaE */
/* Demangled: android::keypcmDl3Meida */
extern void* _ZN7android14keypcmDl3MeidaE;

/* Symbol: _ZNK7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::SpeechPcmMixerBaseBuffer*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android8SPELayer14TimeDifferenceE8timespecS1_ */
/* Demangled: android::SPELayer::TimeDifference(timespec, timespec) */
int _ZN7android8SPELayer14TimeDifferenceE8timespecS1_(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderModemDaiD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderModemDai::~AudioALSACaptureDataProviderModemDai() */
int _ZN7android36AudioALSACaptureDataProviderModemDaiD2Ev(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp15setDspRuntimeEnEb */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::setDspRuntimeEn(bool) */
int _ZN7android27AudioALSAPlaybackHandlerDsp15setDspRuntimeEnEb(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer14setScreenStateEbjjb */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::setScreenState(bool, unsigned int, unsigned int, bool) */
int _ZN7android29AudioALSAPlaybackHandlerMixer14setScreenStateEbjjb(void);

/* Symbol: _ZN7android18SpeechDriverNormal24sendSpeechMessageToModemEPNS_9sph_msg_tE */
/* Demangled: android::SpeechDriverNormal::sendSpeechMessageToModem(android::sph_msg_t*) */
int _ZN7android18SpeechDriverNormal24sendSpeechMessageToModemEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android24allow_low_latency_proptyE */
/* Demangled: android::allow_low_latency_propty */
extern void* _ZN7android24allow_low_latency_proptyE;

/* Symbol: _ZNSt3__120regex_token_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEC2ES4_S4_RKNS_11basic_regexIcS6_EEiNS_15regex_constants15match_flag_typeE */
/* Demangled: std::__1::regex_token_iterator<std::__1::__wrap_iter<char const*>, char, std::__1::regex_traits<char> >::regex_token_iterator(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>, std::__1::basic_regex<char, std::__1::regex_traits<char> > const&, int, std::__1::regex_constants::match_flag_type) */
int _ZNSt3__120regex_token_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEC2ES4_S4_RKNS_11basic_regexIcS6_EEiNS_15regex_constants15match_flag_typeE(void);

/* Symbol: _ZN7android18AudioBTCVSDControl12freeInstanceEv */
/* Demangled: android::AudioBTCVSDControl::freeInstance() */
int _ZN7android18AudioBTCVSDControl12freeInstanceEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP10BGSoundOffEv */
/* Demangled: android::SpeechDriverOpenDSP::BGSoundOff() */
int _ZN7android19SpeechDriverOpenDSP10BGSoundOffEv(void);

/* Symbol: _ZN7android13streaminDAIBTE */
/* Demangled: android::streaminDAIBT */
extern void* _ZN7android13streaminDAIBTE;

/* Symbol: _ZN7android17SpeechDriverDummyD1Ev */
/* Demangled: android::SpeechDriverDummy::~SpeechDriverDummy() */
int _ZN7android17SpeechDriverDummyD1Ev(void);

/* Symbol: _ZN7android19AudioALSAParamTuner15enableFIRRecordEb */
/* Demangled: android::AudioALSAParamTuner::enableFIRRecord(bool) */
int _ZN7android19AudioALSAParamTuner15enableFIRRecordEb(void);

/* Symbol: _ZN7android18AudioALSAStreamOut5writeEPKvj */
/* Demangled: android::AudioALSAStreamOut::write(void const*, unsigned int) */
int _ZN7android18AudioALSAStreamOut5writeEPKvj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager25setAllInputStreamsSuspendEbb17capture_handler_t */
/* Demangled: android::AudioALSAStreamManager::setAllInputStreamsSuspend(bool, bool, capture_handler_t) */
int _ZN7android22AudioALSAStreamManager25setAllInputStreamsSuspendEbb17capture_handler_t(void);

/* Symbol: _ZN7android16AudioBitTrueTestC2Ev */
/* Demangled: android::AudioBitTrueTest::AudioBitTrueTest() */
int _ZN7android16AudioBitTrueTestC2Ev(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerAAudio5closeEv */
/* Demangled: android::AudioALSACaptureHandlerAAudio::close() */
int _ZN7android29AudioALSACaptureHandlerAAudio5closeEv(void);

/* Symbol: _ZN7android29AudioALSACaptureDataClientDspD0Ev */
/* Demangled: android::AudioALSACaptureDataClientDsp::~AudioALSACaptureDataClientDsp() */
int _ZN7android29AudioALSACaptureDataClientDspD0Ev(void);

/* Symbol: _ZTv0_n12_N7android18AudioBTCVSDControl20AudioExtMDCVSDThreadD1Ev */
/* Demangled: virtual thunk to android::AudioBTCVSDControl::AudioExtMDCVSDThread::~AudioExtMDCVSDThread() */
int _ZTv0_n12_N7android18AudioBTCVSDControl20AudioExtMDCVSDThreadD1Ev(void);

/* Symbol: _ZN7android12SpeechConfig18initFeatureSupportEv */
/* Demangled: android::SpeechConfig::initFeatureSupport() */
int _ZN7android12SpeechConfig18initFeatureSupportEv(void);

/* Symbol: _ZN7android22AudioALSADriverUtility17mixerCtrlSetValueEP9mixer_ctlji */
/* Demangled: android::AudioALSADriverUtility::mixerCtrlSetValue(mixer_ctl*, unsigned int, int) */
int _ZN7android22AudioALSADriverUtility17mixerCtrlSetValueEP9mixer_ctlji(void);

/* Symbol: _ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::sub_match<std::__1::__wrap_iter<char const*> >, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > > >::__append(unsigned int) */
int _ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEE8__appendEj(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase20isAdspTaskDumpEnableEii */
/* Demangled: android::AudioALSAPlaybackHandlerBase::isAdspTaskDumpEnable(int, int) */
int _ZN7android28AudioALSAPlaybackHandlerBase20isAdspTaskDumpEnableEii(void);

/* Symbol: createMTKAudioUSBPlaybackHandler */
/* Demangled: createMTKAudioUSBPlaybackHandler */
int createMTKAudioUSBPlaybackHandler(void);

/* Symbol: _ZTVN7android21AudioALSADeviceParserE */
/* Demangled: vtable for android::AudioALSADeviceParser */
extern void* _ZTVN7android21AudioALSADeviceParserE;

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo23mAudioSpeechEnhanceInfoE */
/* Demangled: android::AudioSpeechEnhanceInfo::mAudioSpeechEnhanceInfo */
extern void* _ZN7android22AudioSpeechEnhanceInfo23mAudioSpeechEnhanceInfoE;

/* Symbol: _ZN7android22AudioALSAStreamManager21phoneCallRefreshModemEPKc */
/* Demangled: android::AudioALSAStreamManager::phoneCallRefreshModem(char const*) */
int _ZN7android22AudioALSAStreamManager21phoneCallRefreshModemEPKc(void);

/* Symbol: _ZN7android22AudioALSADataProcessor11getInstanceEv */
/* Demangled: android::AudioALSADataProcessor::getInstance() */
int _ZN7android22AudioALSADataProcessor11getInstanceEv(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBase17UpdateBesRecParamEv */
/* Demangled: android::AudioALSACaptureHandlerBase::UpdateBesRecParam() */
int _ZN7android27AudioALSACaptureHandlerBase17UpdateBesRecParamEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerHDMI5writeEPKvj */
/* Demangled: android::AudioALSAPlaybackHandlerHDMI::write(void const*, unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerHDMI5writeEPKvj(void);

/* Symbol: free_adsp_rlock */
/* Demangled: free_adsp_rlock */
int free_adsp_rlock(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController17resetBliSrcBufferEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::resetBliSrcBuffer(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController17resetBliSrcBufferEPNS_9USBStreamE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamIn*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEE10do_destroyEPvj(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer20mMixerTargetListLockE */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::mMixerTargetListLock */
extern void* _ZN7android29AudioALSAPlaybackHandlerMixer20mMixerTargetListLockE;

/* Symbol: _ZN7android22AudioMTKGainController20ApplyAudioGainTuningEijj */
/* Demangled: android::AudioMTKGainController::ApplyAudioGainTuning(int, unsigned int, unsigned int) */
int _ZN7android22AudioMTKGainController20ApplyAudioGainTuningEijj(void);

/* Symbol: _ZNK7android6VectorIPNS_21AudioDeviceDescriptorEE10do_destroyEPvj */
/* Demangled: android::Vector<android::AudioDeviceDescriptor*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_21AudioDeviceDescriptorEE10do_destroyEPvj(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager12setAudioModeE12audio_mode_t */
/* Demangled: android::AudioALSAHyBridNLEManager::setAudioMode(audio_mode_t) */
int _ZN7android25AudioALSAHyBridNLEManager12setAudioModeE12audio_mode_t(void);

/* Symbol: _ZN7android28PROPERTY_KEY_PCM_MIXER_INDEXE */
/* Demangled: android::PROPERTY_KEY_PCM_MIXER_INDEX */
extern void* _ZN7android28PROPERTY_KEY_PCM_MIXER_INDEXE;

/* Symbol: _ZN7android21AudioALSAFMControllerD2Ev */
/* Demangled: android::AudioALSAFMController::~AudioALSAFMController() */
int _ZN7android21AudioALSAFMControllerD2Ev(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutReceiverPMICD0Ev */
/* Demangled: android::AudioALSACodecDeviceOutReceiverPMIC::~AudioALSACodecDeviceOutReceiverPMIC() */
int _ZN7android35AudioALSACodecDeviceOutReceiverPMICD0Ev(void);

/* Symbol: _ZN7android21AudioALSADeviceParser19GetPcmIndexByStringENS_7String8E */
/* Demangled: android::AudioALSADeviceParser::GetPcmIndexByString(android::String8) */
int _ZN7android21AudioALSADeviceParser19GetPcmIndexByStringENS_7String8E(void);

/* Symbol: _ZN7android8SPELayer8Dump_EPLEPvi */
/* Demangled: android::SPELayer::Dump_EPL(void*, int) */
int _ZN7android8SPELayer8Dump_EPLEPvi(void);

/* Symbol: _ZN7android22AudioALSAStreamManager16forceTelephonyTXEb */
/* Demangled: android::AudioALSAStreamManager::forceTelephonyTX(bool) */
int _ZN7android22AudioALSAStreamManager16forceTelephonyTXEb(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerAEC4openEv */
/* Demangled: android::AudioALSACaptureHandlerAEC::open() */
int _ZN7android26AudioALSACaptureHandlerAEC4openEv(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient22AddEchoRefDataProviderEPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureDataClient::AddEchoRefDataProvider(android::AudioALSACaptureDataProviderBase*, stream_attribute_t*) */
int _ZN7android26AudioALSACaptureDataClient22AddEchoRefDataProviderEPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t(void);

/* Symbol: _ZTVN7android26AudioALSACaptureDataClientE */
/* Demangled: vtable for android::AudioALSACaptureDataClient */
extern void* _ZTVN7android26AudioALSACaptureDataClientE;

/* Symbol: _ZN7android35AudioALSACaptureDataProviderEchoRefC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRef::AudioALSACaptureDataProviderEchoRef() */
int _ZN7android35AudioALSACaptureDataProviderEchoRefC1Ev(void);

/* Symbol: _ZN7android18AudioALSAStreamOutC1Ev */
/* Demangled: android::AudioALSAStreamOut::AudioALSAStreamOut() */
int _ZN7android18AudioALSAStreamOutC1Ev(void);

/* Symbol: _ZN7android24SpeechPcmMixerBaseBufferD1Ev */
/* Demangled: android::SpeechPcmMixerBaseBuffer::~SpeechPcmMixerBaseBuffer() */
int _ZN7android24SpeechPcmMixerBaseBufferD1Ev(void);

/* Symbol: createMTKAudioUSBProvider */
/* Demangled: createMTKAudioUSBProvider */
int createMTKAudioUSBProvider(void);

/* Symbol: _ZN7android22AudioALSAStreamManager16UpdateSpeechModeEv */
/* Demangled: android::AudioALSAStreamManager::UpdateSpeechMode() */
int _ZN7android22AudioALSAStreamManager16UpdateSpeechModeEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController11getInstanceEv */
/* Demangled: android::AudioUSBPhoneCallController::getInstance() */
int _ZN7android27AudioUSBPhoneCallController11getInstanceEv(void);

/* Symbol: _ZTVN7android35AudioALSACaptureDataProviderVoiceDLE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderVoiceDL */
extern void* _ZTVN7android35AudioALSACaptureDataProviderVoiceDLE;

/* Symbol: _ZTVN7android6VectorINS_7String8EEE */
/* Demangled: vtable for android::Vector<android::String8> */
extern void* _ZTVN7android6VectorINS_7String8EEE;

/* Symbol: _ZN7android16SpeechExtMemCCCI25shm_region_read_to_linearEPvPNS_13region_info_tEj */
/* Demangled: android::SpeechExtMemCCCI::shm_region_read_to_linear(void*, android::region_info_t*, unsigned int) */
int _ZN7android16SpeechExtMemCCCI25shm_region_read_to_linearEPvPNS_13region_info_tEj(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerHDMI7routingEj */
/* Demangled: android::AudioALSAPlaybackHandlerHDMI::routing(unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerHDMI7routingEj(void);

/* Symbol: _ZN7android12AudioFtmBase14FMLoopbackTestEc */
/* Demangled: android::AudioFtmBase::FMLoopbackTest(char) */
int _ZN7android12AudioFtmBase14FMLoopbackTestEc(void);

/* Symbol: _ZN7android17AudioALSAHardware14setScreenStateEb */
/* Demangled: android::AudioALSAHardware::setScreenState(bool) */
int _ZN7android17AudioALSAHardware14setScreenStateEb(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioMTKFilterManager*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android20GainTableParamParser13spkGainDb2IdxEi */
/* Demangled: android::GainTableParamParser::spkGainDb2Idx(int) */
int _ZN7android20GainTableParamParser13spkGainDb2IdxEi(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderVOWC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderVOW::AudioALSACaptureDataProviderVOW() */
int _ZN7android31AudioALSACaptureDataProviderVOWC2Ev(void);

/* Symbol: _ZN7android17SpeechParserGen9521updatePhoneCallStatusEb */
/* Demangled: android::SpeechParserGen95::updatePhoneCallStatus(bool) */
int _ZN7android17SpeechParserGen9521updatePhoneCallStatusEb(void);

/* Symbol: _ZTVN7android17AudioMessengerIPIE */
/* Demangled: vtable for android::AudioMessengerIPI */
extern void* _ZTVN7android17AudioMessengerIPIE;

/* Symbol: _ZN7android10Record2WayD2Ev */
/* Demangled: android::Record2Way::~Record2Way() */
int _ZN7android10Record2WayD2Ev(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefExtC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefExt::AudioALSACaptureDataProviderEchoRefExt() */
int _ZN7android38AudioALSACaptureDataProviderEchoRefExtC2Ev(void);

/* Symbol: _ZN7android14keypcmCapture6E */
/* Demangled: android::keypcmCapture6 */
extern void* _ZN7android14keypcmCapture6E;

/* Symbol: _ZN7android13streamout_dcrE */
/* Demangled: android::streamout_dcr */
extern void* _ZN7android13streamout_dcrE;

/* Symbol: _ZN7android20RingBuf_getFreeSpaceEPKNS_7RingBufE */
/* Demangled: android::RingBuf_getFreeSpace(android::RingBuf const*) */
int _ZN7android20RingBuf_getFreeSpaceEPKNS_7RingBufE(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFast7routingEj */
/* Demangled: android::AudioALSAPlaybackHandlerFast::routing(unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerFast7routingEj(void);

/* Symbol: _ZN7android19SpeechDriverFactoryD2Ev */
/* Demangled: android::SpeechDriverFactory::~SpeechDriverFactory() */
int _ZN7android19SpeechDriverFactoryD2Ev(void);

/* Symbol: _ZN7android29AudioALSASampleRateControllerD0Ev */
/* Demangled: android::AudioALSASampleRateController::~AudioALSASampleRateController() */
int _ZN7android29AudioALSASampleRateControllerD0Ev(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFast23dataTransferBeforeWriteEPvj */
/* Demangled: android::AudioALSAPlaybackHandlerFast::dataTransferBeforeWrite(void*, unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerFast23dataTransferBeforeWriteEPvj(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerNormal5closeEv */
/* Demangled: android::AudioALSACaptureHandlerNormal::close() */
int _ZN7android29AudioALSACaptureHandlerNormal5closeEv(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient13SetDMNREnableENS_9DMNR_TYPEEb */
/* Demangled: android::AudioALSACaptureDataClient::SetDMNREnable(android::DMNR_TYPE, bool) */
int _ZN7android26AudioALSACaptureDataClient13SetDMNREnableENS_9DMNR_TYPEEb(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase16wrapSwMixerWriteEPvjS1_ */
/* Demangled: android::AudioALSAPlaybackHandlerBase::wrapSwMixerWrite(void*, unsigned int, void*) */
int _ZN7android28AudioALSAPlaybackHandlerBase16wrapSwMixerWriteEPvjS1_(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerTDM5closeEv */
/* Demangled: android::AudioALSACaptureHandlerTDM::close() */
int _ZN7android26AudioALSACaptureHandlerTDM5closeEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager13setParametersERKNS_7String8Ei */
/* Demangled: android::AudioALSAStreamManager::setParameters(android::String8 const&, int) */
int _ZN7android22AudioALSAStreamManager13setParametersERKNS_7String8Ei(void);

/* Symbol: _ZN7android16SpeechParserBase11getInstanceEv */
/* Demangled: android::SpeechParserBase::getInstance() */
int _ZN7android16SpeechParserBase11getInstanceEv(void);

/* Symbol: alock_wait_no_timeout */
/* Demangled: alock_wait_no_timeout */
int alock_wait_no_timeout(void);

/* Symbol: _ZN7android21SpeechMessengerNormal16closeShareMemoryEv */
/* Demangled: android::SpeechMessengerNormal::closeShareMemory() */
int _ZN7android21SpeechMessengerNormal16closeShareMemoryEv(void);

/* Symbol: _ZN25AudioMTKHardwareInterface6createEv */
/* Demangled: AudioMTKHardwareInterface::create() */
int _ZN25AudioMTKHardwareInterface6createEv(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase30GetCaptureTimeStampByStartTimeEP18time_info_struct_t */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::GetCaptureTimeStampByStartTime(time_info_struct_t*) */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase30GetCaptureTimeStampByStartTimeEP18time_info_struct_t(void);

/* Symbol: _ZNK7android6VectorIPNS_10BufferInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::BufferInfo*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_10BufferInfoEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android17AudioALSAStreamIn23updateStandByFrameCountEv */
/* Demangled: android::AudioALSAStreamIn::updateStandByFrameCount() */
int _ZN7android17AudioALSAStreamIn23updateStandByFrameCountEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal22SetDynamicDownlinkMuteEb */
/* Demangled: android::SpeechDriverNormal::SetDynamicDownlinkMute(bool) */
int _ZN7android18SpeechDriverNormal22SetDynamicDownlinkMuteEb(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient17UpdateBesRecParamEv */
/* Demangled: android::AudioALSACaptureDataClient::UpdateBesRecParam() */
int _ZN7android26AudioALSACaptureDataClient17UpdateBesRecParamEv(void);

/* Symbol: _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSDD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTCVSD::~AudioALSACaptureDataProviderEchoRefBTCVSD() */
int _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSDD1Ev(void);

/* Symbol: _ZN7android18SpeechDriverNormal13createThreadsEv */
/* Demangled: android::SpeechDriverNormal::createThreads() */
int _ZN7android18SpeechDriverNormal13createThreadsEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerHDMID2Ev */
/* Demangled: android::AudioALSAPlaybackHandlerHDMI::~AudioALSAPlaybackHandlerHDMI() */
int _ZN7android28AudioALSAPlaybackHandlerHDMID2Ev(void);

/* Symbol: _ZN7android17WCNChipController18BTChipSamplingRateEv */
/* Demangled: android::WCNChipController::BTChipSamplingRate() */
int _ZN7android17WCNChipController18BTChipSamplingRateEv(void);

/* Symbol: _ZN7android8SPELayer16AddtoInputBufferENS_18SPE_DATA_DIRECTIONEPNS_12InBufferInfoEb */
/* Demangled: android::SPELayer::AddtoInputBuffer(android::SPE_DATA_DIRECTION, android::InBufferInfo*, bool) */
int _ZN7android8SPELayer16AddtoInputBufferENS_18SPE_DATA_DIRECTIONEPNS_12InBufferInfoEb(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager19getDbFromDigitalIdxEjPa */
/* Demangled: android::AudioALSAHyBridNLEManager::getDbFromDigitalIdx(unsigned int, signed char*) */
int _ZN7android25AudioALSAHyBridNLEManager19getDbFromDigitalIdxEjPa(void);

/* Symbol: _ZN7android22AudioSmartPaController18initSmartPaRuntimeEv */
/* Demangled: android::AudioSmartPaController::initSmartPaRuntime() */
int _ZN7android22AudioSmartPaController18initSmartPaRuntimeEv(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer7routingEj */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::routing(unsigned int) */
int _ZN7android29AudioALSAPlaybackHandlerMixer7routingEj(void);

/* Symbol: _ZN7android18SpeechDriverNormal22processModemAckMessageEPNS_9sph_msg_tE */
/* Demangled: android::SpeechDriverNormal::processModemAckMessage(android::sph_msg_t*) */
int _ZN7android18SpeechDriverNormal22processModemAckMessageEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android16SpeechExtMemUSIP15openShareMemoryENS_13modem_index_tE */
/* Demangled: android::SpeechExtMemUSIP::openShareMemory(android::modem_index_t) */
int _ZN7android16SpeechExtMemUSIP15openShareMemoryENS_13modem_index_tE(void);

/* Symbol: _ZN7android8SPELayer15SetVMDumpEnableEb */
/* Demangled: android::SPELayer::SetVMDumpEnable(bool) */
int _ZN7android8SPELayer15SetVMDumpEnableEb(void);

/* Symbol: _ZN7android15AudioPreProcessC2EPK18stream_attribute_t */
/* Demangled: android::AudioPreProcess::AudioPreProcess(stream_attribute_t const*) */
int _ZN7android15AudioPreProcessC2EPK18stream_attribute_t(void);

/* Symbol: _ZN7android23SpeechPcmMixerBGSPlayer10mBGSPlayerE */
/* Demangled: android::SpeechPcmMixerBGSPlayer::mBGSPlayer */
extern void* _ZN7android23SpeechPcmMixerBGSPlayer10mBGSPlayerE;

/* Symbol: _ZN7android15AudioPreProcessD2Ev */
/* Demangled: android::AudioPreProcess::~AudioPreProcess() */
int _ZN7android15AudioPreProcessD2Ev(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerBTCVSD5closeEv */
/* Demangled: android::AudioALSAPlaybackHandlerBTCVSD::close() */
int _ZN7android30AudioALSAPlaybackHandlerBTCVSD5closeEv(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderVoiceMix11hasInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderVoiceMix::hasInstance() */
int _ZN7android36AudioALSACaptureDataProviderVoiceMix11hasInstanceEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudio11mUsageCountE */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::mUsageCount */
extern void* _ZN7android34AudioALSACaptureDataProviderAAudio11mUsageCountE;

/* Symbol: _ZN7android17AudioDspCallFinalD2Ev */
/* Demangled: android::AudioDspCallFinal::~AudioDspCallFinal() */
int _ZN7android17AudioDspCallFinalD2Ev(void);

/* Symbol: _ZN7android21AudioDspStreamManager14startMusicTaskEPNS_28AudioALSAPlaybackHandlerBaseE */
/* Demangled: android::AudioDspStreamManager::startMusicTask(android::AudioALSAPlaybackHandlerBase*) */
int _ZN7android21AudioDspStreamManager14startMusicTaskEPNS_28AudioALSAPlaybackHandlerBaseE(void);

/* Symbol: _ZN7android18SpeechMessageQueue17sendSpeechMessageEPNS_9sph_msg_tE */
/* Demangled: android::SpeechMessageQueue::sendSpeechMessage(android::sph_msg_t*) */
int _ZN7android18SpeechMessageQueue17sendSpeechMessageEPNS_9sph_msg_tE(void);

/* Symbol: _ZNK7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::AudioALSAHardware::AudioHalPatch*>::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEE10do_compareEPKvS6_(void);

/* Symbol: _ZTVN7android25AudioALSACaptureHandlerBTE */
/* Demangled: vtable for android::AudioALSACaptureHandlerBT */
extern void* _ZTVN7android25AudioALSACaptureHandlerBTE;

/* Symbol: _ZN7android18AudioBTCVSDControlC1Ev */
/* Demangled: android::AudioBTCVSDControl::AudioBTCVSDControl() */
int _ZN7android18AudioBTCVSDControlC1Ev(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController21getAlexaDspLibVersionEv */
/* Demangled: android::AudioALSAVoiceWakeUpController::getAlexaDspLibVersion() */
int _ZN7android30AudioALSAVoiceWakeUpController21getAlexaDspLibVersionEv(void);

/* Symbol: _ZN7android11readSys_intEPKc */
/* Demangled: android::readSys_int(char const*) */
int _ZN7android11readSys_intEPKc(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController9setBTModeEi */
/* Demangled: android::AudioALSASpeechPhoneCallController::setBTMode(int) */
int _ZN7android34AudioALSASpeechPhoneCallController9setBTModeEi(void);

/* Symbol: _ZN7android8Play2Way18GetFreeBufferCountEv */
/* Demangled: android::Play2Way::GetFreeBufferCount() */
int _ZN7android8Play2Way18GetFreeBufferCountEv(void);

/* Symbol: _ZN7android21AudioALSAFMController22doDeviceChangeCallbackEv */
/* Demangled: android::AudioALSAFMController::doDeviceChangeCallback() */
int _ZN7android21AudioALSAFMController22doDeviceChangeCallbackEv(void);

/* Symbol: _ZNK7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::AudioALSAHardware::AudioHalPatch*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManager22parseCustDevicePathSeqEP12TiXmlElement */
/* Demangled: android::AudioALSADeviceConfigManager::parseCustDevicePathSeq(TiXmlElement*) */
int _ZN7android28AudioALSADeviceConfigManager22parseCustDevicePathSeqEP12TiXmlElement(void);

/* Symbol: _ZN7android18AudioBTCVSDControl25btsco_AllocMemory_RX_CVSDEv */
/* Demangled: android::AudioBTCVSDControl::btsco_AllocMemory_RX_CVSD() */
int _ZN7android18AudioBTCVSDControl25btsco_AllocMemory_RX_CVSDEv(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerAAudio15getMmapPositionEP19audio_mmap_position */
/* Demangled: android::AudioALSAPlaybackHandlerAAudio::getMmapPosition(audio_mmap_position*) */
int _ZN7android30AudioALSAPlaybackHandlerAAudio15getMmapPositionEP19audio_mmap_position(void);

/* Symbol: aurisys_get_param_list */
/* Demangled: aurisys_get_param_list */
int aurisys_get_param_list(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_RE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_RE_dupl_symbol<char const*>(char const*, char const*, std::__1::__owns_one_state<char>*, unsigned int, unsigned int) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_RE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl18BT_SCO_CVSD_DeInitEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_CVSD_DeInit() */
int _ZN7android18AudioBTCVSDControl18BT_SCO_CVSD_DeInitEv(void);

/* Symbol: _ZN7android18SpeechPcmMixerBase7PutDataEPNS_24SpeechPcmMixerBaseBufferEPct */
/* Demangled: android::SpeechPcmMixerBase::PutData(android::SpeechPcmMixerBaseBuffer*, char*, unsigned short) */
int _ZN7android18SpeechPcmMixerBase7PutDataEPNS_24SpeechPcmMixerBaseBufferEPct(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP12VoipRxConfigEhh */
/* Demangled: android::SpeechDriverOpenDSP::VoipRxConfig(unsigned char, unsigned char) */
int _ZN7android19SpeechDriverOpenDSP12VoipRxConfigEhh(void);

/* Symbol: _ZN7android12SpeechMemCpyEPvS0_j */
/* Demangled: android::SpeechMemCpy(void*, void*, unsigned int) */
int _ZN7android12SpeechMemCpyEPvS0_j(void);

/* Symbol: _ZN7android14keypcmDl2MeidaE */
/* Demangled: android::keypcmDl2Meida */
extern void* _ZN7android14keypcmDl2MeidaE;

/* Symbol: _ZN7android34AudioALSACaptureDataProviderDspRaw11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderDspRaw::getInstance() */
int _ZN7android34AudioALSACaptureDataProviderDspRaw11getInstanceEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN7android11MixerTargetEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::MixerTarget*> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN7android11MixerTargetEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE8__rehashEj(void);

/* Symbol: _ZN7android18AudioALSAStreamOut10setSuspendEb */
/* Demangled: android::AudioALSAStreamOut::setSuspend(bool) */
int _ZN7android18AudioALSAStreamOut10setSuspendEb(void);

/* Symbol: _ZN7android17SpeechParserGen9511getInstanceEv */
/* Demangled: android::SpeechParserGen95::getInstance() */
int _ZN7android17SpeechParserGen9511getInstanceEv(void);

/* Symbol: _ZNK7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::SpeechPcmMixerBaseBuffer*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android17AudioALSAHardware18setMisoundScenarioEi */
/* Demangled: android::AudioALSAHardware::setMisoundScenario(int) */
int _ZN7android17AudioALSAHardware18setMisoundScenarioEi(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClientD0Ev */
/* Demangled: android::AudioALSACaptureDataClient::~AudioALSACaptureDataClient() */
int _ZN7android26AudioALSACaptureDataClientD0Ev(void);

/* Symbol: _ZN7android19AudioALSAParamTuner12setSphVolumeEjj */
/* Demangled: android::AudioALSAParamTuner::setSphVolume(unsigned int, unsigned int) */
int _ZN7android19AudioALSAParamTuner12setSphVolumeEjj(void);

/* Symbol: _ZN7android22AudioMTKGainController14SetCaptureGainE12audio_mode_t14audio_source_tjj */
/* Demangled: android::AudioMTKGainController::SetCaptureGain(audio_mode_t, audio_source_t, unsigned int, unsigned int) */
int _ZN7android22AudioMTKGainController14SetCaptureGainE12audio_mode_t14audio_source_tjj(void);

/* Symbol: _ZN7android18AudioALSAStreamOut29setSuspendStreamOutHDMIStereoEb */
/* Demangled: android::AudioALSAStreamOut::setSuspendStreamOutHDMIStereo(bool) */
int _ZN7android18AudioALSAStreamOut29setSuspendStreamOutHDMIStereoEb(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceDLC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoiceDL::AudioALSACaptureDataProviderVoiceDL() */
int _ZN7android35AudioALSACaptureDataProviderVoiceDLC1Ev(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderEchoRefD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRef::~AudioALSACaptureDataProviderEchoRef() */
int _ZN7android35AudioALSACaptureDataProviderEchoRefD2Ev(void);

/* Symbol: _ZN7android18AudioALSAStreamOutD2Ev */
/* Demangled: android::AudioALSAStreamOut::~AudioALSAStreamOut() */
int _ZN7android18AudioALSAStreamOutD2Ev(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN7android18SpeechDriverNormal16setMDVolumeIndexEiii */
/* Demangled: android::SpeechDriverNormal::setMDVolumeIndex(int, int, int) */
int _ZN7android18SpeechDriverNormal16setMDVolumeIndexEiii(void);

/* Symbol: _ZN7android8SPELayer16Dump_PCM_ProcessENS_18SPE_DATA_DIRECTIONEPvi */
/* Demangled: android::SPELayer::Dump_PCM_Process(android::SPE_DATA_DIRECTION, void*, int) */
int _ZN7android8SPELayer16Dump_PCM_ProcessENS_18SPE_DATA_DIRECTIONEPvi(void);

/* Symbol: _ZN7android18AudioALSAStreamOut12ClosePCMDumpEv */
/* Demangled: android::AudioALSAStreamOut::ClosePCMDump() */
int _ZN7android18AudioALSAStreamOut12ClosePCMDumpEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager16setNumSpkSupportEv */
/* Demangled: android::AudioALSAHardwareResourceManager::setNumSpkSupport() */
int _ZN7android32AudioALSAHardwareResourceManager16setNumSpkSupportEv(void);

/* Symbol: _ZTVN7android20AudioCustParamClientE */
/* Demangled: vtable for android::AudioCustParamClient */
extern void* _ZTVN7android20AudioCustParamClientE;

/* Symbol: _ZN7android20keypcmPlaybackDspKtvE */
/* Demangled: android::keypcmPlaybackDspKtv */
extern void* _ZN7android20keypcmPlaybackDspKtvE;

/* Symbol: _ZN7android14keypcmVoiceMD1E */
/* Demangled: android::keypcmVoiceMD1 */
extern void* _ZN7android14keypcmVoiceMD1E;

/* Symbol: _ZNSt3__114__split_bufferIPPN7android10BufferDumpERNS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<android::BufferDump**, std::__1::allocator<android::BufferDump**>&>::push_back(android::BufferDump**&&) */
int _ZNSt3__114__split_bufferIPPN7android10BufferDumpERNS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: aurisys_set_parameter */
/* Demangled: aurisys_set_parameter */
int aurisys_set_parameter(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP8TtyCtmOnEv */
/* Demangled: android::SpeechDriverOpenDSP::TtyCtmOn() */
int _ZN7android19SpeechDriverOpenDSP8TtyCtmOnEv(void);

/* Symbol: _ZN7android23newMtkAudioBitConverterEjj14BCV_PCM_FORMAT */
/* Demangled: android::newMtkAudioBitConverter(unsigned int, unsigned int, BCV_PCM_FORMAT) */
int _ZN7android23newMtkAudioBitConverterEjj14BCV_PCM_FORMAT(void);

/* Symbol: _ZN7android22AudioALSAStreamManager21updateAudioModePolicyE12audio_mode_t */
/* Demangled: android::AudioALSAStreamManager::updateAudioModePolicy(audio_mode_t) */
int _ZN7android22AudioALSAStreamManager21updateAudioModePolicyE12audio_mode_t(void);

/* Symbol: _ZTVN7android42AudioALSACodecDeviceOutSpeakerEarphonePMICE */
/* Demangled: vtable for android::AudioALSACodecDeviceOutSpeakerEarphonePMIC */
extern void* _ZTVN7android42AudioALSACodecDeviceOutSpeakerEarphonePMICE;

/* Symbol: _ZN7android22AudioALSAStreamManager20GetMagiConCallEnableEv */
/* Demangled: android::AudioALSAStreamManager::GetMagiConCallEnable() */
int _ZN7android22AudioALSAStreamManager20GetMagiConCallEnableEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase12calThresTimeEP3pcm */
/* Demangled: android::AudioALSAPlaybackHandlerBase::calThresTime(pcm*) */
int _ZN7android28AudioALSAPlaybackHandlerBase12calThresTimeEP3pcm(void);

/* Symbol: _ZN7android29sph_sample_rate_value_to_enumEt */
/* Demangled: android::sph_sample_rate_value_to_enum(unsigned short) */
int _ZN7android29sph_sample_rate_value_to_enumEt(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSPC1ENS_13modem_index_tE */
/* Demangled: android::SpeechDriverOpenDSP::SpeechDriverOpenDSP(android::modem_index_t) */
int _ZN7android19SpeechDriverOpenDSPC1ENS_13modem_index_tE(void);

/* Symbol: _ZN7android12AudioFtmBase26GetVibSpkCalibrationStatusEv */
/* Demangled: android::AudioFtmBase::GetVibSpkCalibrationStatus() */
int _ZN7android12AudioFtmBase26GetVibSpkCalibrationStatusEv(void);

/* Symbol: _ZTVN7android29AudioALSAPlaybackHandlerBTSCOE */
/* Demangled: vtable for android::AudioALSAPlaybackHandlerBTSCO */
extern void* _ZTVN7android29AudioALSAPlaybackHandlerBTSCOE;

/* Symbol: _ZN7android26AudioALSACaptureHandlerANC7routingEj */
/* Demangled: android::AudioALSACaptureHandlerANC::routing(unsigned int) */
int _ZN7android26AudioALSACaptureHandlerANC7routingEj(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient19GetEchoRefTimeStampEv */
/* Demangled: android::AudioALSACaptureDataClient::GetEchoRefTimeStamp() */
int _ZN7android26AudioALSACaptureDataClient19GetEchoRefTimeStampEv(void);

/* Symbol: aurisys_set_ul_enhance */
/* Demangled: aurisys_set_ul_enhance */
int aurisys_set_ul_enhance(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP9RttConfigEi */
/* Demangled: android::SpeechDriverOpenDSP::RttConfig(int) */
int _ZN7android19SpeechDriverOpenDSP9RttConfigEi(void);

/* Symbol: _ZNKSt3__110__l_anchorIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__l_anchor<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__110__l_anchorIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClientC2EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureDataClient::AudioALSACaptureDataClient(android::AudioALSACaptureDataProviderBase*, stream_attribute_t*) */
int _ZN7android26AudioALSACaptureDataClientC2EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t(void);

/* Symbol: _ZN7android12AudioFtmBase13FTM_AnaLpk_onEv */
/* Demangled: android::AudioFtmBase::FTM_AnaLpk_on() */
int _ZN7android12AudioFtmBase13FTM_AnaLpk_onEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEE12do_constructES2_j */
/* Demangled: android::SortedVector<android::key_value_pair_t<void*, android::IAudioALSACaptureDataClient*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEE12do_constructES2_j(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload22ChooseTargetSampleRateEj */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::ChooseTargetSampleRate(unsigned int) */
int _ZN7android31AudioALSAPlaybackHandlerOffload22ChooseTargetSampleRateEj(void);

/* Symbol: _ZN7android22AudioSmartPaController14getI2sSetStageEv */
/* Demangled: android::AudioSmartPaController::getI2sSetStage() */
int _ZN7android22AudioSmartPaController14getI2sSetStageEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController12isUsingUSBInEv */
/* Demangled: android::AudioUSBPhoneCallController::isUsingUSBIn() */
int _ZN7android27AudioUSBPhoneCallController12isUsingUSBInEv(void);

/* Symbol: _ZN7android18SpeechMessageQueue20processElementThreadEPv */
/* Demangled: android::SpeechMessageQueue::processElementThread(void*) */
int _ZN7android18SpeechMessageQueue20processElementThreadEPv(void);

/* Symbol: _ZTv0_n12_N7android27AudioALSALoopbackController22AudioMTKLoopbackThreadD1Ev */
/* Demangled: virtual thunk to android::AudioALSALoopbackController::AudioMTKLoopbackThread::~AudioMTKLoopbackThread() */
int _ZTv0_n12_N7android27AudioALSALoopbackController22AudioMTKLoopbackThreadD1Ev(void);

/* Symbol: _ZN7android17AudioDspCallFinal33DestroyAurisysLibManagerCallFinalEv */
/* Demangled: android::AudioDspCallFinal::DestroyAurisysLibManagerCallFinal() */
int _ZN7android17AudioDspCallFinal33DestroyAurisysLibManagerCallFinalEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase24updateHardwareBufferInfoEjj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::updateHardwareBufferInfo(unsigned int, unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerBase24updateHardwareBufferInfoEjj(void);

/* Symbol: _ZN7android19SpeechShareMemGen9524writeApDataToShareMemoryEPKvttPtPj */
/* Demangled: android::SpeechShareMemGen95::writeApDataToShareMemory(void const*, unsigned short, unsigned short, unsigned short*, unsigned int*) */
int _ZN7android19SpeechShareMemGen9524writeApDataToShareMemoryEPKvttPtPj(void);

/* Symbol: _ZN7android22AudioMTKGainController21setBtVolumeCapabilityEb */
/* Demangled: android::AudioMTKGainController::setBtVolumeCapability(bool) */
int _ZN7android22AudioMTKGainController21setBtVolumeCapabilityEb(void);

/* Symbol: _ZN7android22AudioALSAStreamManager19setHeadsetVolumeMaxEv */
/* Demangled: android::AudioALSAStreamManager::setHeadsetVolumeMax() */
int _ZN7android22AudioALSAStreamManager19setHeadsetVolumeMaxEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamIn*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android19SpeechDriverFactory19GetActiveModemIndexEv */
/* Demangled: android::SpeechDriverFactory::GetActiveModemIndex() const */
int _ZNK7android19SpeechDriverFactory19GetActiveModemIndexEv(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpControllerC1Ev */
/* Demangled: android::AudioALSAVoiceWakeUpController::AudioALSAVoiceWakeUpController() */
int _ZN7android30AudioALSAVoiceWakeUpControllerC1Ev(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_class_escapeIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_20__bracket_expressionIcS2_EE */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_class_escape<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_class_escapeIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_20__bracket_expressionIcS2_EE(void);

/* Symbol: _ZN7android21AudioDspStreamManager16openPlaybackTaskEPNS_28AudioALSAPlaybackHandlerBaseE */
/* Demangled: android::AudioDspStreamManager::openPlaybackTask(android::AudioALSAPlaybackHandlerBase*) */
int _ZN7android21AudioDspStreamManager16openPlaybackTaskEPNS_28AudioALSAPlaybackHandlerBaseE(void);

/* Symbol: _ZN7android14keypcmCapture7E */
/* Demangled: android::keypcmCapture7 */
extern void* _ZN7android14keypcmCapture7E;

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase13openPcmDriverEj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::openPcmDriver(unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerBase13openPcmDriverEj(void);

/* Symbol: _ZN7android18SpeechDriverNormal8SpeechOnEv */
/* Demangled: android::SpeechDriverNormal::SpeechOn() */
int _ZN7android18SpeechDriverNormal8SpeechOnEv(void);

/* Symbol: _ZN7android16SpeechExtMemCCCI12getMdVersionEv */
/* Demangled: android::SpeechExtMemCCCI::getMdVersion() */
int _ZN7android16SpeechExtMemCCCI12getMdVersionEv(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerTDM4readEPvi */
/* Demangled: android::AudioALSACaptureHandlerTDM::read(void*, int) */
int _ZN7android26AudioALSACaptureHandlerTDM4readEPvi(void);

/* Symbol: _ZN7android18AudioALSAStreamOut16UpdateSampleRateEi */
/* Demangled: android::AudioALSAStreamOut::UpdateSampleRate(int) */
int _ZN7android18AudioALSAStreamOut16UpdateSampleRateEi(void);

/* Symbol: _ZN7android21capture_data_providerE */
/* Demangled: android::capture_data_provider */
extern void* _ZN7android21capture_data_providerE;

/* Symbol: _ZN7android12AudioFtmBase21Audio_Set_Speaker_VolEi */
/* Demangled: android::AudioFtmBase::Audio_Set_Speaker_Vol(int) */
int _ZN7android12AudioFtmBase21Audio_Set_Speaker_VolEi(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient19IsLowLatencyCaptureEv */
/* Demangled: android::AudioALSACaptureDataClient::IsLowLatencyCapture() */
int _ZN7android26AudioALSACaptureDataClient19IsLowLatencyCaptureEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSD20updateStartTimeStampE8timespec */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::updateStartTimeStamp(timespec) */
int _ZN7android34AudioALSACaptureDataProviderBTCVSD20updateStartTimeStampE8timespec(void);

/* Symbol: _ZN7android18AudioBTCVSDControl32BT_SCO_ExtMDGetCVSDULWriteTmpBufEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMDGetCVSDULWriteTmpBuf() */
int _ZN7android18AudioBTCVSDControl32BT_SCO_ExtMDGetCVSDULWriteTmpBufEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager20audioDspStatusUpdateEb */
/* Demangled: android::AudioALSAStreamManager::audioDspStatusUpdate(bool) */
int _ZN7android22AudioALSAStreamManager20audioDspStatusUpdateEb(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBaseD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::~AudioALSACaptureDataProviderEchoRefBase() */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBaseD2Ev(void);

/* Symbol: _ZN7android33AudioALSASpeechLoopbackControllerC2Ev */
/* Demangled: android::AudioALSASpeechLoopbackController::AudioALSASpeechLoopbackController() */
int _ZN7android33AudioALSASpeechLoopbackControllerC2Ev(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload26GetLowJitterModeSampleRateEv */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::GetLowJitterModeSampleRate() */
int _ZN7android31AudioALSAPlaybackHandlerOffload26GetLowJitterModeSampleRateEv(void);

/* Symbol: _ZN7android16SpeechExtMemCCCI17formatShareMemoryEv */
/* Demangled: android::SpeechExtMemCCCI::formatShareMemory() */
int _ZN7android16SpeechExtMemCCCI17formatShareMemoryEv(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient21ConfigBesRecordParamsEv */
/* Demangled: android::AudioALSACaptureDataClient::ConfigBesRecordParams() */
int _ZN7android26AudioALSACaptureDataClient21ConfigBesRecordParamsEv(void);

/* Symbol: _ZN7android21SpeechMessengerNormal15closeCcciDriverEv */
/* Demangled: android::SpeechMessengerNormal::closeCcciDriver() */
int _ZN7android21SpeechMessengerNormal15closeCcciDriverEv(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormal7routingEj */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::routing(unsigned int) */
int _ZN7android30AudioALSAPlaybackHandlerNormal7routingEj(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerNormal4openEv */
/* Demangled: android::AudioALSACaptureHandlerNormal::open() */
int _ZN7android29AudioALSACaptureHandlerNormal4openEv(void);

/* Symbol: _ZNK7android18AudioALSAStreamOut8channelsEv */
/* Demangled: android::AudioALSAStreamOut::channels() const */
int _ZNK7android18AudioALSAStreamOut8channelsEv(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBase26isSupportConcurrencyInCallEv */
/* Demangled: android::AudioALSACaptureHandlerBase::isSupportConcurrencyInCall() */
int _ZN7android27AudioALSACaptureHandlerBase26isSupportConcurrencyInCallEv(void);

/* Symbol: _ZN7android20GainTableParamParser15updateSpeechVolEP14GainTableParam */
/* Demangled: android::GainTableParamParser::updateSpeechVol(GainTableParam*) */
int _ZN7android20GainTableParamParser15updateSpeechVolEP14GainTableParam(void);

/* Symbol: _ZN7android17WCNChipController16BTChipSyncLengthEv */
/* Demangled: android::WCNChipController::BTChipSyncLength() */
int _ZN7android17WCNChipController16BTChipSyncLengthEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControlD2Ev */
/* Demangled: android::AudioBTCVSDControl::~AudioBTCVSDControl() */
int _ZN7android18AudioBTCVSDControlD2Ev(void);

/* Symbol: _ZN7android21AudioALSAFMController11setFmEnableEbjbbb */
/* Demangled: android::AudioALSAFMController::setFmEnable(bool, unsigned int, bool, bool, bool) */
int _ZN7android21AudioALSAFMController11setFmEnableEbjbbb(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderNormalC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderNormal::AudioALSACaptureDataProviderNormal() */
int _ZN7android34AudioALSACaptureDataProviderNormalC2Ev(void);

/* Symbol: _ZN7android12AudioFtmBase22Audio_Set_HeadPhone_OnEi */
/* Demangled: android::AudioFtmBase::Audio_Set_HeadPhone_On(int) */
int _ZN7android12AudioFtmBase22Audio_Set_HeadPhone_OnEi(void);

/* Symbol: _ZN7android8SPELayer9MutexLockEv */
/* Demangled: android::SPELayer::MutexLock() */
int _ZN7android8SPELayer9MutexLockEv(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderBTSCO10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderBTSCO::readThread(void*) */
int _ZN7android33AudioALSACaptureDataProviderBTSCO10readThreadEPv(void);

/* Symbol: _ZN7android22AudioALSADriverUtilityC1Ev */
/* Demangled: android::AudioALSADriverUtility::AudioALSADriverUtility() */
int _ZN7android22AudioALSADriverUtilityC1Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager26setAllOutputStreamsSuspendEbb */
/* Demangled: android::AudioALSAStreamManager::setAllOutputStreamsSuspend(bool, bool) */
int _ZN7android22AudioALSAStreamManager26setAllOutputStreamsSuspendEbb(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager9getStatusEv */
/* Demangled: android::AudioALSAHyBridNLEManager::getStatus() */
int _ZN7android25AudioALSAHyBridNLEManager9getStatusEv(void);

/* Symbol: _ZN7android12AudioFtmBaseD1Ev */
/* Demangled: android::AudioFtmBase::~AudioFtmBase() */
int _ZN7android12AudioFtmBaseD1Ev(void);

/* Symbol: _ZN7android14saveAudioParamENS_7String8E */
/* Demangled: android::saveAudioParam(android::String8) */
int _ZN7android14saveAudioParamENS_7String8E(void);

/* Symbol: _ZN7android23AudioMTKHeadSetMessagerC2Ev */
/* Demangled: android::AudioMTKHeadSetMessager::AudioMTKHeadSetMessager() */
int _ZN7android23AudioMTKHeadSetMessagerC2Ev(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManagerC1Ev */
/* Demangled: android::AudioALSAHardwareResourceManager::AudioALSAHardwareResourceManager() */
int _ZN7android32AudioALSAHardwareResourceManagerC1Ev(void);

/* Symbol: _ZTVN7android8AudioFtmE */
/* Demangled: vtable for android::AudioFtm */
extern void* _ZTVN7android8AudioFtmE;

/* Symbol: _ZN7android22AudioSmartPaControllerC1Ev */
/* Demangled: android::AudioSmartPaController::AudioSmartPaController() */
int _ZN7android22AudioSmartPaControllerC1Ev(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP19UpdateAurisysConfigEb */
/* Demangled: android::SpeechDriverOpenDSP::UpdateAurisysConfig(bool) */
int _ZN7android19SpeechDriverOpenDSP19UpdateAurisysConfigEb(void);

/* Symbol: _ZNK7android6VectorIPNS_33AudioParameterChangedHidlCallbackEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::AudioParameterChangedHidlCallback*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_33AudioParameterChangedHidlCallbackEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android21SpeechMessengerNormal23formatShareMemoryThreadEPv */
/* Demangled: android::SpeechMessengerNormal::formatShareMemoryThread(void*) */
int _ZN7android21SpeechMessengerNormal23formatShareMemoryThreadEPv(void);

/* Symbol: _ZN7android17bDumpStreamOutFlgE */
/* Demangled: android::bDumpStreamOutFlg */
extern void* _ZN7android17bDumpStreamOutFlgE;

/* Symbol: _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitchD0Ev */
/* Demangled: android::AudioALSACodecDeviceOutReceiverSpeakerSwitch::~AudioALSACodecDeviceOutReceiverSpeakerSwitch() */
int _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitchD0Ev(void);

/* Symbol: _ZN7android31transferAudioFormatToDumpStringE14audio_format_t */
/* Demangled: android::transferAudioFormatToDumpString(audio_format_t) */
int _ZN7android31transferAudioFormatToDumpStringE14audio_format_t(void);

/* Symbol: _ZNK7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::AudioALSAHardware::AudioHalPatch*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceDLD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoiceDL::~AudioALSACaptureDataProviderVoiceDL() */
int _ZN7android35AudioALSACaptureDataProviderVoiceDLD2Ev(void);

/* Symbol: _ZN7android21AudioALSADeviceParser11getCardNameEv */
/* Demangled: android::AudioALSADeviceParser::getCardName() */
int _ZN7android21AudioALSADeviceParser11getCardNameEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl23BT_SCO_ExtMD_ULBuf_OpenEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMD_ULBuf_Open() */
int _ZN7android18AudioBTCVSDControl23BT_SCO_ExtMD_ULBuf_OpenEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager17OpenHeadphonePathEj */
/* Demangled: android::AudioALSAHardwareResourceManager::OpenHeadphonePath(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager17OpenHeadphonePathEj(void);

/* Symbol: _ZNSt3__16vectorIN7android13CallbackStrucENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<android::CallbackStruc, std::__1::allocator<android::CallbackStruc> >::__push_back_slow_path<android::CallbackStruc const&>(android::CallbackStruc const&) */
int _ZNSt3__16vectorIN7android13CallbackStrucENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudio5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::close() */
int _ZN7android34AudioALSACaptureDataProviderAAudio5closeEv(void);

/* Symbol: _ZN7android25SpeechPcmMixerTelephonyTx18setTelephonyTxTypeEt */
/* Demangled: android::SpeechPcmMixerTelephonyTx::setTelephonyTxType(unsigned short) */
int _ZN7android25SpeechPcmMixerTelephonyTx18setTelephonyTxTypeEt(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP26SetAcousticLoopbackBtCodecEb */
/* Demangled: android::SpeechDriverOpenDSP::SetAcousticLoopbackBtCodec(bool) */
int _ZN7android19SpeechDriverOpenDSP26SetAcousticLoopbackBtCodecEb(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerHDMIC2EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerHDMI::AudioALSAPlaybackHandlerHDMI(stream_attribute_t const*) */
int _ZN7android28AudioALSAPlaybackHandlerHDMIC2EPK18stream_attribute_t(void);

/* Symbol: _ZN7android14keypcmDl1MeidaE */
/* Demangled: android::keypcmDl1Meida */
extern void* _ZN7android14keypcmDl1MeidaE;

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController11setMuteInfoEv */
/* Demangled: android::AudioALSASpeechPhoneCallController::setMuteInfo() */
int _ZN7android34AudioALSASpeechPhoneCallController11setMuteInfoEv(void);

/* Symbol: _ZN7android18AudioALSAStreamOut5drainE18audio_drain_type_t */
/* Demangled: android::AudioALSAStreamOut::drain(audio_drain_type_t) */
int _ZN7android18AudioALSAStreamOut5drainE18audio_drain_type_t(void);

/* Symbol: _ZN7android24DefaultVoIPCompen_filterE */
/* Demangled: android::DefaultVoIPCompen_filter */
extern void* _ZN7android24DefaultVoIPCompen_filterE;

/* Symbol: _ZN7android26AudioALSACaptureHandlerANC5closeEv */
/* Demangled: android::AudioALSACaptureHandlerANC::close() */
int _ZN7android26AudioALSACaptureHandlerANC5closeEv(void);

/* Symbol: _ZN7android32mCaptureDataProviderVoiceMixLockE */
/* Demangled: android::mCaptureDataProviderVoiceMixLock */
extern void* _ZN7android32mCaptureDataProviderVoiceMixLockE;

/* Symbol: _ZN7android36AudioALSACaptureDataProviderModemDaiC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderModemDai::AudioALSACaptureDataProviderModemDai() */
int _ZN7android36AudioALSACaptureDataProviderModemDaiC2Ev(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager12getBypassNLEEv */
/* Demangled: android::AudioALSAHyBridNLEManager::getBypassNLE() */
int _ZN7android25AudioALSAHyBridNLEManager12getBypassNLEEv(void);

/* Symbol: _ZN7android17SpeechDriverDummy9recordOffEv */
/* Demangled: android::SpeechDriverDummy::recordOff() */
int _ZN7android17SpeechDriverDummy9recordOffEv(void);

/* Symbol: _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_ */
/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void);

/* Symbol: _ZN7android31speechDataProcessingHandlerLockE */
/* Demangled: android::speechDataProcessingHandlerLock */
extern void* _ZN7android31speechDataProcessingHandlerLockE;

/* Symbol: _ZN7android23callbackPhoneCallReopenEiPvS0_ */
/* Demangled: android::callbackPhoneCallReopen(int, void*, void*) */
int _ZN7android23callbackPhoneCallReopenEiPvS0_(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManager11getInstanceEv */
/* Demangled: android::AudioALSADeviceConfigManager::getInstance() */
int _ZN7android28AudioALSADeviceConfigManager11getInstanceEv(void);

/* Symbol: _ZN7android16SpeechExtMemUSIP17formatShareMemoryEv */
/* Demangled: android::SpeechExtMemUSIP::formatShareMemory() */
int _ZN7android16SpeechExtMemUSIP17formatShareMemoryEv(void);

/* Symbol: _ZNK7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::AudioALSAHardware::AudioHalPatch*>::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEE12do_constructEPvj(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerBTCVSDD1Ev */
/* Demangled: android::AudioALSAPlaybackHandlerBTCVSD::~AudioALSAPlaybackHandlerBTCVSD() */
int _ZN7android30AudioALSAPlaybackHandlerBTCVSDD1Ev(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderVoice4openEv */
/* Demangled: android::AudioALSACaptureDataProviderVoice::open() */
int _ZN7android33AudioALSACaptureDataProviderVoice4openEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController8doBliSrcEPNS_9USBStreamEPvjPS3_Pj */
/* Demangled: android::AudioUSBPhoneCallController::doBliSrc(android::USBStream*, void*, unsigned int, void**, unsigned int*) */
int _ZN7android27AudioUSBPhoneCallController8doBliSrcEPNS_9USBStreamEPvjPS3_Pj(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp17setAfeDspShareMemEjb */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::setAfeDspShareMem(unsigned int, bool) */
int _ZN7android27AudioALSAPlaybackHandlerDsp17setAfeDspShareMemEjb(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload13process_drainEv */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::process_drain() */
int _ZN7android31AudioALSAPlaybackHandlerOffload13process_drainEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeI20audio_output_flags_tjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<audio_output_flags_t, unsigned int>, std::__1::__unordered_map_hasher<audio_output_flags_t, std::__1::__hash_value_type<audio_output_flags_t, unsigned int>, std::__1::hash<audio_output_flags_t>, true>, std::__1::__unordered_map_equal<audio_output_flags_t, std::__1::__hash_value_type<audio_output_flags_t, unsigned int>, std::__1::equal_to<audio_output_flags_t>, true>, std::__1::allocator<std::__1::__hash_value_type<audio_output_flags_t, unsigned int> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeI20audio_output_flags_tjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE8__rehashEj(void);

/* Symbol: _ZN7android16SpeechVMRecorder11getInstanceEv */
/* Demangled: android::SpeechVMRecorder::getInstance() */
int _ZN7android16SpeechVMRecorder11getInstanceEv(void);

/* Symbol: aurisys_create_arsi_handlers */
/* Demangled: aurisys_create_arsi_handlers */
int aurisys_create_arsi_handlers(void);

/* Symbol: _ZTVN7android23SpeechPcmMixerBGSPlayerE */
/* Demangled: vtable for android::SpeechPcmMixerBGSPlayer */
extern void* _ZTVN7android23SpeechPcmMixerBGSPlayerE;

/* Symbol: _ZN26AudioMTKStreamOutInterfaceD0Ev */
/* Demangled: AudioMTKStreamOutInterface::~AudioMTKStreamOutInterface() */
int _ZN26AudioMTKStreamOutInterfaceD0Ev(void);

/* Symbol: _ZN7android17AudioALSAHardware12SetAudioDataEijPv */
/* Demangled: android::AudioALSAHardware::SetAudioData(int, unsigned int, void*) */
int _ZN7android17AudioALSAHardware12SetAudioDataEijPv(void);

/* Symbol: get_audio_dsp_recovery_mode */
/* Demangled: get_audio_dsp_recovery_mode */
int get_audio_dsp_recovery_mode(void);

/* Symbol: _ZN7android23AudioEventThreadManager29uniqueAudioEventThreadManagerE */
/* Demangled: android::AudioEventThreadManager::uniqueAudioEventThreadManager */
extern void* _ZN7android23AudioEventThreadManager29uniqueAudioEventThreadManagerE;

/* Symbol: _ZN7android18AudioVIBSPKControlD1Ev */
/* Demangled: android::AudioVIBSPKControl::~AudioVIBSPKControl() */
int _ZN7android18AudioVIBSPKControlD1Ev(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP9TtyCtmOffEv */
/* Demangled: android::SpeechDriverOpenDSP::TtyCtmOff() */
int _ZN7android19SpeechDriverOpenDSP9TtyCtmOffEv(void);

/* Symbol: _ZN7android13keypcmCS43130E */
/* Demangled: android::keypcmCS43130 */
extern void* _ZN7android13keypcmCS43130E;

/* Symbol: _ZN7android8SPELayer19SetEchoRefStartTimeE8timespec */
/* Demangled: android::SPELayer::SetEchoRefStartTime(timespec) */
int _ZN7android8SPELayer19SetEchoRefStartTimeE8timespec(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerSyncIO5closeEv */
/* Demangled: android::AudioALSACaptureHandlerSyncIO::close() */
int _ZN7android29AudioALSACaptureHandlerSyncIO5closeEv(void);

/* Symbol: _ZN7android10sph_memcpyEPvPKvj */
/* Demangled: android::sph_memcpy(void*, void const*, unsigned int) */
int _ZN7android10sph_memcpyEPvPKvj(void);

/* Symbol: _ZN7android20getNeedAEETimeoutFlgEv */
/* Demangled: android::getNeedAEETimeoutFlg() */
int _ZN7android20getNeedAEETimeoutFlgEv(void);

/* Symbol: _ZN7android14keypcmVoiceMD2E */
/* Demangled: android::keypcmVoiceMD2 */
extern void* _ZN7android14keypcmVoiceMD2E;

/* Symbol: _ZTVN7android31AudioALSACaptureDataProviderTDME */
/* Demangled: vtable for android::AudioALSACaptureDataProviderTDM */
extern void* _ZTVN7android31AudioALSACaptureDataProviderTDME;

/* Symbol: _ZNK7android18AudioALSAStreamOut10bufferSizeEv */
/* Demangled: android::AudioALSAStreamOut::bufferSize() const */
int _ZNK7android18AudioALSAStreamOut10bufferSizeEv(void);

/* Symbol: _ZN7android23audio_sched_setscheduleEiii */
/* Demangled: android::audio_sched_setschedule(int, int, int) */
int _ZN7android23audio_sched_setscheduleEiii(void);

/* Symbol: _ZN7android21AudioALSAFMControllerC2Ev */
/* Demangled: android::AudioALSAFMController::AudioALSAFMController() */
int _ZN7android21AudioALSAFMControllerC2Ev(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo20GetForceMagiASRStateEv */
/* Demangled: android::AudioSpeechEnhanceInfo::GetForceMagiASRState() */
int _ZN7android22AudioSpeechEnhanceInfo20GetForceMagiASRStateEv(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_loopEjjPNS_16__owns_one_stateIcEEjjb */
/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_loop(unsigned int, unsigned int, std::__1::__owns_one_state<char>*, unsigned int, unsigned int, bool) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_loopEjjPNS_16__owns_one_stateIcEEjjb(void);

/* Symbol: _ZN7android18AudioBTCVSDControl24BT_SCO_RX_GetCVSDWorkBufEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_GetCVSDWorkBuf() */
int _ZN7android18AudioBTCVSDControl24BT_SCO_RX_GetCVSDWorkBufEv(void);

/* Symbol: _ZTTN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadE */
/* Demangled: VTT for android::AudioALSALoopbackController::AudioMTKLoopbackThread */
extern void* _ZTTN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadE;

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpControllerD2Ev */
/* Demangled: android::AudioALSAVoiceWakeUpController::~AudioALSAVoiceWakeUpController() */
int _ZN7android30AudioALSAVoiceWakeUpControllerD2Ev(void);

/* Symbol: _ZN7android10Record2Way21GetDataFromMicrophoneENS_7RingBufE */
/* Demangled: android::Record2Way::GetDataFromMicrophone(android::RingBuf) */
int _ZN7android10Record2Way21GetDataFromMicrophoneENS_7RingBufE(void);

/* Symbol: _ZN7android25makeFakeMdAckMsgFromApMsgEPNS_9sph_msg_tE */
/* Demangled: android::makeFakeMdAckMsgFromApMsg(android::sph_msg_t*) */
int _ZN7android25makeFakeMdAckMsgFromApMsgEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android21AudioALSAFMController19setFmDeviceCallbackEPKNS_36_AUDIO_DEVICE_CHANGE_CALLBACK_STRUCTE */
/* Demangled: android::AudioALSAFMController::setFmDeviceCallback(android::_AUDIO_DEVICE_CHANGE_CALLBACK_STRUCT const*) */
int _ZN7android21AudioALSAFMController19setFmDeviceCallbackEPKNS_36_AUDIO_DEVICE_CHANGE_CALLBACK_STRUCTE(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDspD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderDsp::~AudioALSACaptureDataProviderDsp() */
int _ZN7android31AudioALSACaptureDataProviderDspD1Ev(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManager24ApplyDeviceSettingByNameEPKc */
/* Demangled: android::AudioALSADeviceConfigManager::ApplyDeviceSettingByName(char const*) */
int _ZN7android28AudioALSADeviceConfigManager24ApplyDeviceSettingByNameEPKc(void);

/* Symbol: _ZN7android21SpeechMessengerNormal18getShareMemoryTypeEv */
/* Demangled: android::SpeechMessengerNormal::getShareMemoryType() */
int _ZN7android21SpeechMessengerNormal18getShareMemoryTypeEv(void);

/* Symbol: _ZN7android15source_priorityE14audio_source_t */
/* Demangled: android::source_priority(audio_source_t) */
int _ZN7android15source_priorityE14audio_source_t(void);

/* Symbol: _ZN7android24SpeechPcmMixerBaseBufferC1Ev */
/* Demangled: android::SpeechPcmMixerBaseBuffer::SpeechPcmMixerBaseBuffer() */
int _ZN7android24SpeechPcmMixerBaseBufferC1Ev(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::readThread(void*) */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase10readThreadEPv(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtv21get_task_pcmdump_infoEttPPv */
/* Demangled: android::AudioALSAHandlerKtv::get_task_pcmdump_info(unsigned short, unsigned short, void**) */
int _ZN7android19AudioALSAHandlerKtv21get_task_pcmdump_infoEttPPv(void);

/* Symbol: _ZTVN7android26AudioALSACaptureHandlerVOWE */
/* Demangled: vtable for android::AudioALSACaptureHandlerVOW */
extern void* _ZTVN7android26AudioALSACaptureHandlerVOWE;

/* Symbol: _ZN7android18SpeechDriverNormal14enableDeReverbEb */
/* Demangled: android::SpeechDriverNormal::enableDeReverb(bool) */
int _ZN7android18SpeechDriverNormal14enableDeReverbEb(void);

/* Symbol: _ZN7android22AudioMTKGainController20UniqueVolumeInstanceE */
/* Demangled: android::AudioMTKGainController::UniqueVolumeInstance */
extern void* _ZN7android22AudioMTKGainController20UniqueVolumeInstanceE;

/* Symbol: _ZN7android27AudioALSACaptureHandlerBase17setStreamInReopenEb */
/* Demangled: android::AudioALSACaptureHandlerBase::setStreamInReopen(bool) */
int _ZN7android27AudioALSACaptureHandlerBase17setStreamInReopenEb(void);

/* Symbol: audio_format_to_dump_string */
/* Demangled: audio_format_to_dump_string */
int audio_format_to_dump_string(void);

/* Symbol: _ZN7android18SpeechDriverNormal20SetSpeechEnhancementEb */
/* Demangled: android::SpeechDriverNormal::SetSpeechEnhancement(bool) */
int _ZN7android18SpeechDriverNormal20SetSpeechEnhancementEb(void);

/* Symbol: _ZN7android8Play2WayD1Ev */
/* Demangled: android::Play2Way::~Play2Way() */
int _ZN7android8Play2WayD1Ev(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerTDMD0Ev */
/* Demangled: android::AudioALSACaptureHandlerTDM::~AudioALSACaptureHandlerTDM() */
int _ZN7android26AudioALSACaptureHandlerTDMD0Ev(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android14AudioUSBCenter10getProfileEi */
/* Demangled: android::AudioUSBCenter::getProfile(int) */
int _ZN7android14AudioUSBCenter10getProfileEi(void);

/* Symbol: _ZN7android17SpeechParserGen9516getMaxBufferSizeEv */
/* Demangled: android::SpeechParserGen95::getMaxBufferSize() */
int _ZN7android17SpeechParserGen9516getMaxBufferSizeEv(void);

/* Symbol: _ZN7android22AudioMTKGainController17setAnalogVolume_lEiii12audio_mode_t */
/* Demangled: android::AudioMTKGainController::setAnalogVolume_l(int, int, int, audio_mode_t) */
int _ZN7android22AudioMTKGainController17setAnalogVolume_lEiii12audio_mode_t(void);

/* Symbol: _ZN7android21AudioALSADeviceParserC1Ev */
/* Demangled: android::AudioALSADeviceParser::AudioALSADeviceParser() */
int _ZN7android21AudioALSADeviceParserC1Ev(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerAAudioD1Ev */
/* Demangled: android::AudioALSACaptureHandlerAAudio::~AudioALSACaptureHandlerAAudio() */
int _ZN7android29AudioALSACaptureHandlerAAudioD1Ev(void);

/* Symbol: _ZN7android10Record2WayC2Ev */
/* Demangled: android::Record2Way::Record2Way() */
int _ZN7android10Record2WayC2Ev(void);

/* Symbol: _ZN7android34AudioALSACodecDeviceOutSpeakerPMICD0Ev */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerPMIC::~AudioALSACodecDeviceOutSpeakerPMIC() */
int _ZN7android34AudioALSACodecDeviceOutSpeakerPMICD0Ev(void);

/* Symbol: _ZN7android18PCMDataNotifyMutexE */
/* Demangled: android::PCMDataNotifyMutex */
extern void* _ZN7android18PCMDataNotifyMutexE;

/* Symbol: _ZN7android8AudioFtm20HDMI_SineGenPlaybackEbi */
/* Demangled: android::AudioFtm::HDMI_SineGenPlayback(bool, int) */
int _ZN7android8AudioFtm20HDMI_SineGenPlaybackEbi(void);

/* Symbol: _ZN7android22AudioMTKGainController17ApplyMdDlEhn1GainEi */
/* Demangled: android::AudioMTKGainController::ApplyMdDlEhn1Gain(int) */
int _ZN7android22AudioMTKGainController17ApplyMdDlEhn1GainEi(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderFMRadioD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderFMRadio::~AudioALSACaptureDataProviderFMRadio() */
int _ZN7android35AudioALSACaptureDataProviderFMRadioD0Ev(void);

/* Symbol: adsp_cbk_deregister */
/* Demangled: adsp_cbk_deregister */
int adsp_cbk_deregister(void);

/* Symbol: _ZN7android13offload_writeE */
/* Demangled: android::offload_write */
extern void* _ZN7android13offload_writeE;

/* Symbol: _ZN7android19SpeechDriverFactoryC2Ev */
/* Demangled: android::SpeechDriverFactory::SpeechDriverFactory() */
int _ZN7android19SpeechDriverFactoryC2Ev(void);

/* Symbol: _ZN7android18AudioALSAStreamOut23getPresentationPositionEPyP8timespec */
/* Demangled: android::AudioALSAStreamOut::getPresentationPosition(unsigned long long*, timespec*) */
int _ZN7android18AudioALSAStreamOut23getPresentationPositionEPyP8timespec(void);

/* Symbol: delete_aurisys_dsp_dump */
/* Demangled: delete_aurisys_dsp_dump */
int delete_aurisys_dsp_dump(void);

/* Symbol: _ZN7android14keypcmCapture8E */
/* Demangled: android::keypcmCapture8 */
extern void* _ZN7android14keypcmCapture8E;

/* Symbol: _ZN7android22AudioMTKGainController16MappingToPGAGainEh */
/* Demangled: android::AudioMTKGainController::MappingToPGAGain(unsigned char) */
int _ZN7android22AudioMTKGainController16MappingToPGAGainEh(void);

/* Symbol: _ZN7android22AudioMTKGainController29getNonSceneGainTableParameterEP20GainTableForNonScene */
/* Demangled: android::AudioMTKGainController::getNonSceneGainTableParameter(GainTableForNonScene*) */
int _ZN7android22AudioMTKGainController29getNonSceneGainTableParameterEP20GainTableForNonScene(void);

/* Symbol: _ZN7android20GainTableParamParserD1Ev */
/* Demangled: android::GainTableParamParser::~GainTableParamParser() */
int _ZN7android20GainTableParamParserD1Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread30ExtMD_btsco_cvsd_UL_Write_mainEv */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDThread::ExtMD_btsco_cvsd_UL_Write_main() */
int _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread30ExtMD_btsco_cvsd_UL_Write_mainEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase17preWriteOperationEPKvj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::preWriteOperation(void const*, unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerBase17preWriteOperationEPKvj(void);

/* Symbol: _ZN7android16SpeechExtMemCCCI28shm_region_write_from_linearEPNS_13region_info_tEPKvj */
/* Demangled: android::SpeechExtMemCCCI::shm_region_write_from_linear(android::region_info_t*, void const*, unsigned int) */
int _ZN7android16SpeechExtMemCCCI28shm_region_write_from_linearEPNS_13region_info_tEPKvj(void);

/* Symbol: _ZN7android17AudioMessengerIPI10sendIpiMsgEP9ipi_msg_thhhhtjjPv */
/* Demangled: android::AudioMessengerIPI::sendIpiMsg(ipi_msg_t*, unsigned char, unsigned char, unsigned char, unsigned char, unsigned short, unsigned int, unsigned int, void*) */
int _ZN7android17AudioMessengerIPI10sendIpiMsgEP9ipi_msg_thhhhtjjPv(void);

/* Symbol: _ZN7android22AudioALSADriverUtility16setPropertyValueEPKci */
/* Demangled: android::AudioALSADriverUtility::setPropertyValue(char const*, int) */
int _ZN7android22AudioALSADriverUtility16setPropertyValueEPKci(void);

/* Symbol: _ZN7android22AudioALSADriverUtilityD2Ev */
/* Demangled: android::AudioALSADriverUtility::~AudioALSADriverUtility() */
int _ZN7android22AudioALSADriverUtilityD2Ev(void);

/* Symbol: _ZTVNSt3__118__match_char_icaseIcNS_12regex_traitsIcEEEE */
/* Demangled: vtable for std::__1::__match_char_icase<char, std::__1::regex_traits<char> > */
extern void* _ZTVNSt3__118__match_char_icaseIcNS_12regex_traitsIcEEEE;

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormal17DeviceSupportHifiEj */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::DeviceSupportHifi(unsigned int) */
int _ZN7android30AudioALSAPlaybackHandlerNormal17DeviceSupportHifiEj(void);

/* Symbol: get_support_channel_number_mask */
/* Demangled: get_support_channel_number_mask */
int get_support_channel_number_mask(void);

/* Symbol: _ZN7android22AudioALSADriverUtility11getInstanceEv */
/* Demangled: android::AudioALSADriverUtility::getInstance() */
int _ZN7android22AudioALSADriverUtility11getInstanceEv(void);

/* Symbol: _ZN7android18AudioVIBSPKControl13setVibSpkGainEiii */
/* Demangled: android::AudioVIBSPKControl::setVibSpkGain(int, int, int) */
int _ZN7android18AudioVIBSPKControl13setVibSpkGainEiii(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderUsbD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderUsb::~AudioALSACaptureDataProviderUsb() */
int _ZN7android31AudioALSACaptureDataProviderUsbD0Ev(void);

/* Symbol: aurisys_lib_handler_c_file_deinit */
/* Demangled: aurisys_lib_handler_c_file_deinit */
int aurisys_lib_handler_c_file_deinit(void);

/* Symbol: _ZN7android22AudioSmartPaController18setPhoneCallEnableEi */
/* Demangled: android::AudioSmartPaController::setPhoneCallEnable(int) */
int _ZN7android22AudioSmartPaController18setPhoneCallEnableEi(void);

/* Symbol: _ZN7android18SpeechDriverNormal13TtyCtmDebugOnEb */
/* Demangled: android::SpeechDriverNormal::TtyCtmDebugOn(bool) */
int _ZN7android18SpeechDriverNormal13TtyCtmDebugOnEb(void);

/* Symbol: _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSDC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTCVSD::AudioALSACaptureDataProviderEchoRefBTCVSD() */
int _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSDC1Ev(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManagerD2Ev */
/* Demangled: android::AudioALSAHardwareResourceManager::~AudioALSAHardwareResourceManager() */
int _ZN7android32AudioALSAHardwareResourceManagerD2Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager15isPhoneCallOpenEv */
/* Demangled: android::AudioALSAStreamManager::isPhoneCallOpen() */
int _ZN7android22AudioALSAStreamManager15isPhoneCallOpenEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderDspRaw15setDspRuntimeEnEb */
/* Demangled: android::AudioALSACaptureDataProviderDspRaw::setDspRuntimeEn(bool) */
int _ZN7android34AudioALSACaptureDataProviderDspRaw15setDspRuntimeEnEb(void);

/* Symbol: _ZN7android22AudioSmartPaControllerD2Ev */
/* Demangled: android::AudioSmartPaController::~AudioSmartPaController() */
int _ZN7android22AudioSmartPaControllerD2Ev(void);

/* Symbol: _ZN7android18SpeechDriverNormal23parseRawRecordPcmBufferEPvS1_Pt */
/* Demangled: android::SpeechDriverNormal::parseRawRecordPcmBuffer(void*, void*, unsigned short*) */
int _ZN7android18SpeechDriverNormal23parseRawRecordPcmBufferEPvS1_Pt(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderVoice34mAudioALSACaptureDataProviderVoiceE */
/* Demangled: android::AudioALSACaptureDataProviderVoice::mAudioALSACaptureDataProviderVoice */
extern void* _ZN7android33AudioALSACaptureDataProviderVoice34mAudioALSACaptureDataProviderVoiceE;

/* Symbol: _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMIC19DeviceDoDcCalibrateEv */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerEarphonePMIC::DeviceDoDcCalibrate() */
int _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMIC19DeviceDoDcCalibrateEv(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManager16CheckDeviceExistEPKc */
/* Demangled: android::AudioALSADeviceConfigManager::CheckDeviceExist(char const*) */
int _ZN7android28AudioALSADeviceConfigManager16CheckDeviceExistEPKc(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager11setNleEopDbEi */
/* Demangled: android::AudioALSAHyBridNLEManager::setNleEopDb(int) */
int _ZN7android25AudioALSAHyBridNLEManager11setNleEopDbEi(void);

/* Symbol: _ZTISt12length_error */
/* Demangled: typeinfo for std::length_error */
extern void* _ZTISt12length_error;

/* Symbol: _ZN7android22AudioMTKGainController21setAAudioPositiveGainEv */
/* Demangled: android::AudioMTKGainController::setAAudioPositiveGain() */
int _ZN7android22AudioMTKGainController21setAAudioPositiveGainEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP22SetDynamicDownlinkMuteEb */
/* Demangled: android::SpeechDriverOpenDSP::SetDynamicDownlinkMute(bool) */
int _ZN7android19SpeechDriverOpenDSP22SetDynamicDownlinkMuteEb(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerSyncIOD0Ev */
/* Demangled: android::AudioALSACaptureHandlerSyncIO::~AudioALSACaptureHandlerSyncIO() */
int _ZN7android29AudioALSACaptureHandlerSyncIOD0Ev(void);

/* Symbol: audio_ringbuf_copy_to_linear */
/* Demangled: audio_ringbuf_copy_to_linear */
int audio_ringbuf_copy_to_linear(void);

/* Symbol: _ZN7android18SpeechDriverNormal9RttConfigEi */
/* Demangled: android::SpeechDriverNormal::RttConfig(int) */
int _ZN7android18SpeechDriverNormal9RttConfigEi(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP16VideoTelephonyOnEv */
/* Demangled: android::SpeechDriverOpenDSP::VideoTelephonyOn() */
int _ZN7android19SpeechDriverOpenDSP16VideoTelephonyOnEv(void);

/* Symbol: _ZN7android16keypcmFMHostlessE */
/* Demangled: android::keypcmFMHostless */
extern void* _ZN7android16keypcmFMHostlessE;

/* Symbol: _ZN7android22AudioALSAStreamManager20createCaptureHandlerEP18stream_attribute_t */
/* Demangled: android::AudioALSAStreamManager::createCaptureHandler(stream_attribute_t*) */
int _ZN7android22AudioALSAStreamManager20createCaptureHandlerEP18stream_attribute_t(void);

/* Symbol: _ZN7android22AudioALSAStreamManager26getBesLoudnessStateFromXMLEv */
/* Demangled: android::AudioALSAStreamManager::getBesLoudnessStateFromXML() */
int _ZN7android22AudioALSAStreamManager26getBesLoudnessStateFromXMLEv(void);

/* Symbol: _ZN7android17AudioDspCallFinalC2Ev */
/* Demangled: android::AudioDspCallFinal::AudioDspCallFinal() */
int _ZN7android17AudioDspCallFinalC2Ev(void);

/* Symbol: _ZN7android22AudioSmartPaController20initSmartPaAttributeEv */
/* Demangled: android::AudioSmartPaController::initSmartPaAttribute() */
int _ZN7android22AudioSmartPaController20initSmartPaAttributeEv(void);

/* Symbol: _ZN7android12AudioFtmBase29SetStreamOutPostProcessBypassEb */
/* Demangled: android::AudioFtmBase::SetStreamOutPostProcessBypass(bool) */
int _ZN7android12AudioFtmBase29SetStreamOutPostProcessBypassEb(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSD10initBliSrcEv */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::initBliSrc() */
int _ZN7android34AudioALSACaptureDataProviderBTCVSD10initBliSrcEv(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager12getAnalogIdxEaPj */
/* Demangled: android::AudioALSAHyBridNLEManager::getAnalogIdx(signed char, unsigned int*) */
int _ZN7android25AudioALSAHyBridNLEManager12getAnalogIdxEaPj(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager18changeOutputDeviceEj */
/* Demangled: android::AudioALSAHardwareResourceManager::changeOutputDevice(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager18changeOutputDeviceEj(void);

/* Symbol: _ZN7android17SpeechDriverDummyD2Ev */
/* Demangled: android::SpeechDriverDummy::~SpeechDriverDummy() */
int _ZN7android17SpeechDriverDummyD2Ev(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerAEC4initEv */
/* Demangled: android::AudioALSACaptureHandlerAEC::init() */
int _ZN7android26AudioALSACaptureHandlerAEC4initEv(void);

/* Symbol: _ZN7android29AudioALSACaptureDataClientDspD1Ev */
/* Demangled: android::AudioALSACaptureDataClientDsp::~AudioALSACaptureDataClientDsp() */
int _ZN7android29AudioALSACaptureDataClientDspD1Ev(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase16closeComprDriverEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::closeComprDriver() */
int _ZN7android28AudioALSAPlaybackHandlerBase16closeComprDriverEv(void);

/* Symbol: _ZN7android18isAckMessageInPairEPKNS_9sph_msg_tES2_ */
/* Demangled: android::isAckMessageInPair(android::sph_msg_t const*, android::sph_msg_t const*) */
int _ZN7android18isAckMessageInPairEPKNS_9sph_msg_tES2_(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsb14setScreenStateEbjjb */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::setScreenState(bool, unsigned int, unsigned int, bool) */
int _ZN7android27AudioALSAPlaybackHandlerUsb14setScreenStateEbjjb(void);

/* Symbol: _ZN7android18AudioBTCVSDControl23BT_SCO_ExtMD_DLBuf_OpenEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMD_DLBuf_Open() */
int _ZN7android18AudioBTCVSDControl23BT_SCO_ExtMD_DLBuf_OpenEv(void);

/* Symbol: sw_mixer_get_queued_frames */
/* Demangled: sw_mixer_get_queued_frames */
int sw_mixer_get_queued_frames(void);

/* Symbol: _ZN7android18SpeechDriverNormal31errorHandleSpeechMessageWrapperEPvPNS_9sph_msg_tE */
/* Demangled: android::SpeechDriverNormal::errorHandleSpeechMessageWrapper(void*, android::sph_msg_t*) */
int _ZN7android18SpeechDriverNormal31errorHandleSpeechMessageWrapperEPvPNS_9sph_msg_tE(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<std::__1::__empty_state<char>*, std::__1::default_delete<std::__1::__empty_state<char> >, std::__1::allocator<std::__1::__empty_state<char> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController29getVoiceWakeUpStateFromKernelEv */
/* Demangled: android::AudioALSAVoiceWakeUpController::getVoiceWakeUpStateFromKernel() */
int _ZN7android30AudioALSAVoiceWakeUpController29getVoiceWakeUpStateFromKernelEv(void);

/* Symbol: strcpy_safe */
/* Demangled: strcpy_safe */
int strcpy_safe(void);

/* Symbol: _ZN7android17getMicInfoFromXmlEPKcP33audio_microphone_characteristic_tPj */
/* Demangled: android::getMicInfoFromXml(char const*, audio_microphone_characteristic_t*, unsigned int*) */
int _ZN7android17getMicInfoFromXmlEPKcP33audio_microphone_characteristic_tPj(void);

/* Symbol: _ZN7android8SPELayer13CalPreQNumberEv */
/* Demangled: android::SPELayer::CalPreQNumber() */
int _ZN7android8SPELayer13CalPreQNumberEv(void);

/* Symbol: _ZN7android27SpeechDataProcessingHandler8recordOnEv */
/* Demangled: android::SpeechDataProcessingHandler::recordOn() */
int _ZN7android27SpeechDataProcessingHandler8recordOnEv(void);

/* Symbol: _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMIC43mAudioALSACodecDeviceOutSpeakerEarphonePMICE */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerEarphonePMIC::mAudioALSACodecDeviceOutSpeakerEarphonePMIC */
extern void* _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMIC43mAudioALSACodecDeviceOutSpeakerEarphonePMICE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAPlaybackHandlerBase*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerAAudioC2EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerAAudio::AudioALSAPlaybackHandlerAAudio(stream_attribute_t const*) */
int _ZN7android30AudioALSAPlaybackHandlerAAudioC2EPK18stream_attribute_t(void);

/* Symbol: _ZN7android22AudioSmartPaController19setSmartPaPcmEnableEii */
/* Demangled: android::AudioSmartPaController::setSmartPaPcmEnable(int, int) */
int _ZN7android22AudioSmartPaController19setSmartPaPcmEnableEii(void);

/* Symbol: _ZTVN7android39AudioALSACaptureDataProviderEchoRefBaseE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderEchoRefBase */
extern void* _ZTVN7android39AudioALSACaptureDataProviderEchoRefBaseE;

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager17changeInputDeviceEj */
/* Demangled: android::AudioALSAHardwareResourceManager::changeInputDevice(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager17changeInputDeviceEj(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP8VoipRxOnEv */
/* Demangled: android::SpeechDriverOpenDSP::VoipRxOn() */
int _ZN7android19SpeechDriverOpenDSP8VoipRxOnEv(void);

/* Symbol: _ZN7android21keypcmI2S0Dl1PlaybackE */
/* Demangled: android::keypcmI2S0Dl1Playback */
extern void* _ZN7android21keypcmI2S0Dl1PlaybackE;

/* Symbol: _ZN7android17WCNChipController30SetBTCurrentSamplingRateNumberEj */
/* Demangled: android::WCNChipController::SetBTCurrentSamplingRateNumber(unsigned int) */
int _ZN7android17WCNChipController30SetBTCurrentSamplingRateNumberEj(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController11checkReopenENS_13modem_index_tE */
/* Demangled: android::AudioALSASpeechPhoneCallController::checkReopen(android::modem_index_t) */
int _ZN7android34AudioALSASpeechPhoneCallController11checkReopenENS_13modem_index_tE(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefUsb11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefUsb::getInstance() */
int _ZN7android38AudioALSACaptureDataProviderEchoRefUsb11getInstanceEv(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutReceiverPMICD1Ev */
/* Demangled: android::AudioALSACodecDeviceOutReceiverPMIC::~AudioALSACodecDeviceOutReceiverPMIC() */
int _ZN7android35AudioALSACodecDeviceOutReceiverPMICD1Ev(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZN7android30AudioALSACaptureHandlerFMRadio7routingEj */
/* Demangled: android::AudioALSACaptureHandlerFMRadio::routing(unsigned int) */
int _ZN7android30AudioALSACaptureHandlerFMRadio7routingEj(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderEchoRefC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRef::AudioALSACaptureDataProviderEchoRef() */
int _ZN7android35AudioALSACaptureDataProviderEchoRefC2Ev(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager11enableNleHwEv */
/* Demangled: android::AudioALSAHyBridNLEManager::enableNleHw() */
int _ZN7android25AudioALSAHyBridNLEManager11enableNleHwEv(void);

/* Symbol: _ZN7android18AudioALSAStreamOutC2Ev */
/* Demangled: android::AudioALSAStreamOut::AudioALSAStreamOut() */
int _ZN7android18AudioALSAStreamOutC2Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager24setParametersToStreamOutERKNS_7String8E */
/* Demangled: android::AudioALSAStreamManager::setParametersToStreamOut(android::String8 const&) */
int _ZN7android22AudioALSAStreamManager24setParametersToStreamOutERKNS_7String8E(void);

/* Symbol: _ZN7android24SpeechPcmMixerBaseBufferD2Ev */
/* Demangled: android::SpeechPcmMixerBaseBuffer::~SpeechPcmMixerBaseBuffer() */
int _ZN7android24SpeechPcmMixerBaseBufferD2Ev(void);

/* Symbol: _ZN7android2spINS_27AudioALSALoopbackController22AudioMTKLoopbackThreadEED2Ev */
/* Demangled: android::sp<android::AudioALSALoopbackController::AudioMTKLoopbackThread>::~sp() */
int _ZN7android2spINS_27AudioALSALoopbackController22AudioMTKLoopbackThreadEED2Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager17setSpkFilterParamEjji */
/* Demangled: android::AudioALSAStreamManager::setSpkFilterParam(unsigned int, unsigned int, int) */
int _ZN7android22AudioALSAStreamManager17setSpkFilterParamEjji(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZN7android18SpeechMessageQueueC2EPFiPvPNS_9sph_msg_tEES5_S1_ */
/* Demangled: android::SpeechMessageQueue::SpeechMessageQueue(int (*)(void*, android::sph_msg_t*), int (*)(void*, android::sph_msg_t*), void*) */
int _ZN7android18SpeechMessageQueueC2EPFiPvPNS_9sph_msg_tEES5_S1_(void);

/* Symbol: audio_ringbuf_drop_all */
/* Demangled: audio_ringbuf_drop_all */
int audio_ringbuf_drop_all(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase23getPresentationPositionEyPyP8timespec */
/* Demangled: android::AudioALSAPlaybackHandlerBase::getPresentationPosition(unsigned long long, unsigned long long*, timespec*) */
int _ZN7android28AudioALSAPlaybackHandlerBase23getPresentationPositionEyPyP8timespec(void);

/* Symbol: _ZN7android12SpeechConfig18uniqueSpeechConfigE */
/* Demangled: android::SpeechConfig::uniqueSpeechConfig */
extern void* _ZN7android12SpeechConfig18uniqueSpeechConfigE;

/* Symbol: _ZN7android16AudioALSANLECtrl17checkValidForInitE18playback_handler_t */
/* Demangled: android::AudioALSANLECtrl::checkValidForInit(playback_handler_t) */
int _ZN7android16AudioALSANLECtrl17checkValidForInitE18playback_handler_t(void);

/* Symbol: _ZN7android17AudioALSAStreamIn24getDeviceConnectionStateEj */
/* Demangled: android::AudioALSAStreamIn::getDeviceConnectionState(unsigned int) */
int _ZN7android17AudioALSAStreamIn24getDeviceConnectionStateEj(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerAAudioD0Ev */
/* Demangled: android::AudioALSAPlaybackHandlerAAudio::~AudioALSAPlaybackHandlerAAudio() */
int _ZN7android30AudioALSAPlaybackHandlerAAudioD0Ev(void);

/* Symbol: _ZN7android22AudioSmartPaController19getMinSupportedRateEv */
/* Demangled: android::AudioSmartPaController::getMinSupportedRate() */
int _ZN7android22AudioSmartPaController19getMinSupportedRateEv(void);

/* Symbol: _ZN7android22AudioSmartPaController21getSphEchoRefSequenceEbi */
/* Demangled: android::AudioSmartPaController::getSphEchoRefSequence(bool, int) */
int _ZN7android22AudioSmartPaController21getSphEchoRefSequenceEbi(void);

/* Symbol: _ZN7android15getFramesByAttrEPK18stream_attribute_t */
/* Demangled: android::getFramesByAttr(stream_attribute_t const*) */
int _ZN7android15getFramesByAttrEPK18stream_attribute_t(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController31mAudioALSAVoiceWakeUpControllerE */
/* Demangled: android::AudioALSAVoiceWakeUpController::mAudioALSAVoiceWakeUpController */
extern void* _ZN7android30AudioALSAVoiceWakeUpController31mAudioALSAVoiceWakeUpControllerE;

/* Symbol: _ZN7android12SpeechConfig14getBtDelayTimeEPKc */
/* Demangled: android::SpeechConfig::getBtDelayTime(char const*) */
int _ZN7android12SpeechConfig14getBtDelayTimeEPKc(void);

/* Symbol: _ZN7android22keypcmScpVoicePlaybackE */
/* Demangled: android::keypcmScpVoicePlayback */
extern void* _ZN7android22keypcmScpVoicePlaybackE;

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__parse_ecma_expINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ecma_exp<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__parse_ecma_expINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThread10threadLoopEv */
/* Demangled: android::AudioALSALoopbackController::AudioMTKLoopbackThread::threadLoop() */
int _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThread10threadLoopEv(void);

/* Symbol: _ZN7android21AudioDspStreamManager15doRecoveryStateEv */
/* Demangled: android::AudioDspStreamManager::doRecoveryState() */
int _ZN7android21AudioDspStreamManager15doRecoveryStateEv(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerVOW7routingEj */
/* Demangled: android::AudioALSACaptureHandlerVOW::routing(unsigned int) */
int _ZN7android26AudioALSACaptureHandlerVOW7routingEj(void);

/* Symbol: _ZN7android16SpeechExtMemUSIP16updateWriteIndexEPNS_13region_info_tEj */
/* Demangled: android::SpeechExtMemUSIP::updateWriteIndex(android::region_info_t*, unsigned int) */
int _ZN7android16SpeechExtMemUSIP16updateWriteIndexEPNS_13region_info_tEj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl11initMsbcLibEv */
/* Demangled: android::AudioBTCVSDControl::initMsbcLib() */
int _ZN7android18AudioBTCVSDControl11initMsbcLibEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal14getBtDelayTimeEPt */
/* Demangled: android::SpeechDriverNormal::getBtDelayTime(unsigned short*) */
int _ZN7android18SpeechDriverNormal14getBtDelayTimeEPt(void);

/* Symbol: _ZN7android29AudioALSASampleRateControllerD1Ev */
/* Demangled: android::AudioALSASampleRateController::~AudioALSASampleRateController() */
int _ZN7android29AudioALSASampleRateControllerD1Ev(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerUsb4openEv */
/* Demangled: android::AudioALSACaptureHandlerUsb::open() */
int _ZN7android26AudioALSACaptureHandlerUsb4openEv(void);

/* Symbol: _ZN7android21keypcmVoiceDaiCaptureE */
/* Demangled: android::keypcmVoiceDaiCapture */
extern void* _ZN7android21keypcmVoiceDaiCaptureE;

/* Symbol: _ZN7android27AudioUSBPhoneCallController20speechULPhoneMicPathEb */
/* Demangled: android::AudioUSBPhoneCallController::speechULPhoneMicPath(bool) */
int _ZN7android27AudioUSBPhoneCallController20speechULPhoneMicPathEb(void);

/* Symbol: _ZN7android22AudioALSAStreamManager10setLRcrossEi */
/* Demangled: android::AudioALSAStreamManager::setLRcross(int) */
int _ZN7android22AudioALSAStreamManager10setLRcrossEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSAPlaybackHandlerBase*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android19SpeechDriverOpenDSP22GetRecordChannelNumberEv */
/* Demangled: android::SpeechDriverOpenDSP::GetRecordChannelNumber() const */
int _ZNK7android19SpeechDriverOpenDSP22GetRecordChannelNumberEv(void);

/* Symbol: _ZNSt3__117__owns_two_statesIcED0Ev */
/* Demangled: std::__1::__owns_two_states<char>::~__owns_two_states() */
int _ZNSt3__117__owns_two_statesIcED0Ev(void);

/* Symbol: _ZNK7android6VectorIPNS_21AudioDeviceDescriptorEE12do_constructEPvj */
/* Demangled: android::Vector<android::AudioDeviceDescriptor*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_21AudioDeviceDescriptorEE12do_constructEPvj(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase14OpenPCMDumpDspEPKch */
/* Demangled: android::AudioALSACaptureDataProviderBase::OpenPCMDumpDsp(char const*, unsigned char) */
int _ZN7android32AudioALSACaptureDataProviderBase14OpenPCMDumpDspEPKch(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase19deinitNLEProcessingEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::deinitNLEProcessing() */
int _ZN7android28AudioALSAPlaybackHandlerBase19deinitNLEProcessingEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager16OpenReceiverPathEj */
/* Demangled: android::AudioALSAHardwareResourceManager::OpenReceiverPath(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager16OpenReceiverPathEj(void);

/* Symbol: audio_sample_rate_num_to_mask */
/* Demangled: audio_sample_rate_num_to_mask */
int audio_sample_rate_num_to_mask(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerAAudio7routingEj */
/* Demangled: android::AudioALSAPlaybackHandlerAAudio::routing(unsigned int) */
int _ZN7android30AudioALSAPlaybackHandlerAAudio7routingEj(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP15SpeechRouterOffEv */
/* Demangled: android::SpeechDriverOpenDSP::SpeechRouterOff() */
int _ZN7android19SpeechDriverOpenDSP15SpeechRouterOffEv(void);

/* Symbol: _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSDD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTCVSD::~AudioALSACaptureDataProviderEchoRefBTCVSD() */
int _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSDD2Ev(void);

/* Symbol: aurisys_arsi_run_adb_cmd */
/* Demangled: aurisys_arsi_run_adb_cmd */
int aurisys_arsi_run_adb_cmd(void);

/* Symbol: _ZNK7android17SpeechDriverDummy19GetRecordSampleRateEv */
/* Demangled: android::SpeechDriverDummy::GetRecordSampleRate() const */
int _ZNK7android17SpeechDriverDummy19GetRecordSampleRateEv(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManagerC1Ev */
/* Demangled: android::AudioALSADeviceConfigManager::AudioALSADeviceConfigManager() */
int _ZN7android28AudioALSADeviceConfigManagerC1Ev(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController8doAwsSrcEPNS_9USBStreamEPvjPS3_Pj */
/* Demangled: android::AudioUSBPhoneCallController::doAwsSrc(android::USBStream*, void*, unsigned int, void**, unsigned int*) */
int _ZN7android27AudioUSBPhoneCallController8doAwsSrcEPNS_9USBStreamEPvjPS3_Pj(void);

/* Symbol: _ZN7android31AudioALSASpeechStreamController14UniqueInstanceE */
/* Demangled: android::AudioALSASpeechStreamController::UniqueInstance */
extern void* _ZN7android31AudioALSASpeechStreamController14UniqueInstanceE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamOut*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEE10do_compareEPKvS7_(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp7routingEj */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::routing(unsigned int) */
int _ZN7android27AudioALSAPlaybackHandlerDsp7routingEj(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP10setTtyModeENS_11TtyModeTypeE */
/* Demangled: android::SpeechDriverOpenDSP::setTtyMode(android::TtyModeType) */
int _ZN7android19SpeechDriverOpenDSP10setTtyModeENS_11TtyModeTypeE(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderModemDai4openEv */
/* Demangled: android::AudioALSACaptureDataProviderModemDai::open() */
int _ZN7android36AudioALSACaptureDataProviderModemDai4openEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController17getEchoMaxDelayUsEv */
/* Demangled: android::AudioUSBPhoneCallController::getEchoMaxDelayUs() */
int _ZN7android27AudioUSBPhoneCallController17getEchoMaxDelayUsEv(void);

/* Symbol: _ZN7android22AudioMTKGainController11getInstanceEv */
/* Demangled: android::AudioMTKGainController::getInstance() */
int _ZN7android22AudioMTKGainController11getInstanceEv(void);

/* Symbol: _ZN7android21keypcmModomDaiCaptureE */
/* Demangled: android::keypcmModomDaiCapture */
extern void* _ZN7android21keypcmModomDaiCaptureE;

/* Symbol: _ZN7android8SPELayer8GetRouteEv */
/* Demangled: android::SPELayer::GetRoute() */
int _ZN7android8SPELayer8GetRouteEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderTDM11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderTDM::getInstance() */
int _ZN7android31AudioALSACaptureDataProviderTDM11getInstanceEv(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBaseC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::AudioALSACaptureDataProviderEchoRefBase() */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBaseC2Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager22destroyPlaybackHandlerEPNS_28AudioALSAPlaybackHandlerBaseE */
/* Demangled: android::AudioALSAStreamManager::destroyPlaybackHandler(android::AudioALSAPlaybackHandlerBase*) */
int _ZN7android22AudioALSAStreamManager22destroyPlaybackHandlerEPNS_28AudioALSAPlaybackHandlerBaseE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController14setBtSpkDeviceEb */
/* Demangled: android::AudioALSASpeechPhoneCallController::setBtSpkDevice(bool) */
int _ZN7android34AudioALSASpeechPhoneCallController14setBtSpkDeviceEb(void);

/* Symbol: _ZTVN7android33AudioParameterChangedHidlCallbackE */
/* Demangled: vtable for android::AudioParameterChangedHidlCallback */
extern void* _ZTVN7android33AudioParameterChangedHidlCallbackE;

/* Symbol: _ZN7android19AudioALSAHandlerKtv17setktvDspShareMemEb */
/* Demangled: android::AudioALSAHandlerKtv::setktvDspShareMem(bool) */
int _ZN7android19AudioALSAHandlerKtv17setktvDspShareMemEb(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSAPlaybackHandlerBase*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android28RingBuf_dynamicChangeBufSizeEPNS_7RingBufEj */
/* Demangled: android::RingBuf_dynamicChangeBufSize(android::RingBuf*, unsigned int) */
int _ZN7android28RingBuf_dynamicChangeBufSizeEPNS_7RingBufEj(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN7android10BufferDumpENS_9allocatorIS4_EEE10push_frontEOS4_ */
/* Demangled: std::__1::__split_buffer<android::BufferDump**, std::__1::allocator<android::BufferDump**> >::push_front(android::BufferDump**&&) */
int _ZNSt3__114__split_bufferIPPN7android10BufferDumpENS_9allocatorIS4_EEE10push_frontEOS4_(void);

/* Symbol: _ZN7android18AudioALSAStreamOut15updateAudioModeE12audio_mode_t */
/* Demangled: android::AudioALSAStreamOut::updateAudioMode(audio_mode_t) */
int _ZN7android18AudioALSAStreamOut15updateAudioModeE12audio_mode_t(void);

/* Symbol: _ZN7android21AudioDspStreamManagerD0Ev */
/* Demangled: android::AudioDspStreamManager::~AudioDspStreamManager() */
int _ZN7android21AudioDspStreamManagerD0Ev(void);

/* Symbol: _ZN7android18SpeechDriverNormal9TtyCtmOffEv */
/* Demangled: android::SpeechDriverNormal::TtyCtmOff() */
int _ZN7android18SpeechDriverNormal9TtyCtmOffEv(void);

/* Symbol: _ZNKSt3__117__repeat_one_loopIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__repeat_one_loop<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__117__repeat_one_loopIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android18AudioBTCVSDControlC2Ev */
/* Demangled: android::AudioBTCVSDControl::AudioBTCVSDControl() */
int _ZN7android18AudioBTCVSDControlC2Ev(void);

/* Symbol: _ZN7android17AudioALSAStreamIn4readEPvi */
/* Demangled: android::AudioALSAStreamIn::read(void*, int) */
int _ZN7android17AudioALSAStreamIn4readEPvi(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN7android22AudioALSAStreamManager11setFmEnableEbbbj */
/* Demangled: android::AudioALSAStreamManager::setFmEnable(bool, bool, bool, unsigned int) */
int _ZN7android22AudioALSAStreamManager11setFmEnableEbbbj(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_ERE_expressionINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ERE_expression<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_ERE_expressionINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZN7android22AudioALSAStreamManager18GetMusicPlusStatusEv */
/* Demangled: android::AudioALSAStreamManager::GetMusicPlusStatus() */
int _ZN7android22AudioALSAStreamManager18GetMusicPlusStatusEv(void);

/* Symbol: _ZN7android21AudioDspStreamManager22getDspOutHandlerEnableEjj */
/* Demangled: android::AudioDspStreamManager::getDspOutHandlerEnable(unsigned int, unsigned int) */
int _ZN7android21AudioDspStreamManager22getDspOutHandlerEnableEjj(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN7android22AudioMTKGainController13ApplyMdDlGainEi */
/* Demangled: android::AudioMTKGainController::ApplyMdDlGain(int) */
int _ZN7android22AudioMTKGainController13ApplyMdDlGainEi(void);

/* Symbol: _ZN7android17SpeechDriverDummy18SetBtHeadsetNrecOnEb */
/* Demangled: android::SpeechDriverDummy::SetBtHeadsetNrecOn(bool) */
int _ZN7android17SpeechDriverDummy18SetBtHeadsetNrecOnEb(void);

/* Symbol: _ZTVN7android6VectorIP7__sFILEEE */
/* Demangled: vtable for android::Vector<__sFILE*> */
extern void* _ZTVN7android6VectorIP7__sFILEEE;

/* Symbol: _ZN7android12AudioFtmBaseC1Ev */
/* Demangled: android::AudioFtmBase::AudioFtmBase() */
int _ZN7android12AudioFtmBaseC1Ev(void);

/* Symbol: _ZN7android28AudioALSACaptureHandlerVoice4openEv */
/* Demangled: android::AudioALSACaptureHandlerVoice::open() */
int _ZN7android28AudioALSACaptureHandlerVoice4openEv(void);

/* Symbol: _ZN7android22AudioSmartPaController10setI2sInHDEb */
/* Demangled: android::AudioSmartPaController::setI2sInHD(bool) */
int _ZN7android22AudioSmartPaController10setI2sInHDEb(void);

/* Symbol: _ZN7android20GainTableParamParser8getParamIiEEiP10_ParamUnitPT_PKc */
/* Demangled: int android::GainTableParamParser::getParam<int>(_ParamUnit*, int*, char const*) */
int _ZN7android20GainTableParamParser8getParamIiEEiP10_ParamUnitPT_PKc(void);

/* Symbol: _ZN7android18AudioBTCVSDControl24BT_SCO_ExtMD_DLBuf_CloseEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMD_DLBuf_Close() */
int _ZN7android18AudioBTCVSDControl24BT_SCO_ExtMD_DLBuf_CloseEv(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager16gainAllocatePlanEfjjPNS_11NleHwInfo_tE */
/* Demangled: android::AudioALSAHyBridNLEManager::gainAllocatePlan(float, unsigned int, unsigned int, android::NleHwInfo_t*) */
int _ZN7android25AudioALSAHyBridNLEManager16gainAllocatePlanEfjjPNS_11NleHwInfo_tE(void);

/* Symbol: _ZN7android18AudioVIBSPKControl13getVibSpkGainEv */
/* Demangled: android::AudioVIBSPKControl::getVibSpkGain() */
int _ZN7android18AudioVIBSPKControl13getVibSpkGainEv(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerDsp4readEPvi */
/* Demangled: android::AudioALSACaptureHandlerDsp::read(void*, int) */
int _ZN7android26AudioALSACaptureHandlerDsp4readEPvi(void);

/* Symbol: _ZN25AudioMTKStreamInInterfaceD0Ev */
/* Demangled: AudioMTKStreamInInterface::~AudioMTKStreamInInterface() */
int _ZN25AudioMTKStreamInInterfaceD0Ev(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClientD1Ev */
/* Demangled: android::AudioALSACaptureDataClient::~AudioALSACaptureDataClient() */
int _ZN7android26AudioALSACaptureDataClientD1Ev(void);

/* Symbol: _ZN7android21AudioALSADeviceParser4dumpEv */
/* Demangled: android::AudioALSADeviceParser::dump() */
int _ZN7android21AudioALSADeviceParser4dumpEv(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController16setBargeInBypassEb */
/* Demangled: android::AudioALSAVoiceWakeUpController::setBargeInBypass(bool) */
int _ZN7android30AudioALSAVoiceWakeUpController16setBargeInBypassEb(void);

/* Symbol: _ZN7android17AudioMessengerIPI19registerAdspFeatureEt */
/* Demangled: android::AudioMessengerIPI::registerAdspFeature(unsigned short) */
int _ZN7android17AudioMessengerIPI19registerAdspFeatureEt(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN7android10BufferDumpERNS_9allocatorIS4_EEE10push_frontERKS4_ */
/* Demangled: std::__1::__split_buffer<android::BufferDump**, std::__1::allocator<android::BufferDump**>&>::push_front(android::BufferDump** const&) */
int _ZNSt3__114__split_bufferIPPN7android10BufferDumpERNS_9allocatorIS4_EEE10push_frontERKS4_(void);

/* Symbol: _ZTSSt13runtime_error */
/* Demangled: typeinfo name for std::runtime_error */
extern void* _ZTSSt13runtime_error;

/* Symbol: _ZN7android23AudioEventThreadManager16registerCallbackENS_14AudioEventTypeEPFviPvS2_ES2_ */
/* Demangled: android::AudioEventThreadManager::registerCallback(android::AudioEventType, void (*)(int, void*, void*), void*) */
int _ZN7android23AudioEventThreadManager16registerCallbackENS_14AudioEventTypeEPFviPvS2_ES2_(void);

/* Symbol: _ZN7android18SpeechMessageQueueD0Ev */
/* Demangled: android::SpeechMessageQueue::~SpeechMessageQueue() */
int _ZN7android18SpeechMessageQueueD0Ev(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderVoice11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderVoice::getInstance() */
int _ZN7android33AudioALSACaptureDataProviderVoice11getInstanceEv(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceDLC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoiceDL::AudioALSACaptureDataProviderVoiceDL() */
int _ZN7android35AudioALSACaptureDataProviderVoiceDLC2Ev(void);

/* Symbol: _ZN7android18SpeechDriverNormal14getDriverParamEhPv */
/* Demangled: android::SpeechDriverNormal::getDriverParam(unsigned char, void*) */
int _ZN7android18SpeechDriverNormal14getDriverParamEhPv(void);

/* Symbol: _ZN7android17AudioALSAHardware23setParametersByCallbackERKNS_7String8E */
/* Demangled: android::AudioALSAHardware::setParametersByCallback(android::String8 const&) */
int _ZN7android17AudioALSAHardware23setParametersByCallbackERKNS_7String8E(void);

/* Symbol: _ZN7android26keypcmHostlessHwGainAAudioE */
/* Demangled: android::keypcmHostlessHwGainAAudio */
extern void* _ZN7android26keypcmHostlessHwGainAAudioE;

/* Symbol: _ZN7android21SpeechMessengerNormalD0Ev */
/* Demangled: android::SpeechMessengerNormal::~SpeechMessengerNormal() */
int _ZN7android21SpeechMessengerNormalD0Ev(void);

/* Symbol: _ZN7android21AudioALSAFMController14isFmDirectModeEv */
/* Demangled: android::AudioALSAFMController::isFmDirectMode() */
int _ZN7android21AudioALSAFMController14isFmDirectModeEv(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceUL4openEv */
/* Demangled: android::AudioALSACaptureDataProviderVoiceUL::open() */
int _ZN7android35AudioALSACaptureDataProviderVoiceUL4openEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl26Audio_IIRHPF_GetBufferSizeEv */
/* Demangled: android::AudioBTCVSDControl::Audio_IIRHPF_GetBufferSize() */
int _ZN7android18AudioBTCVSDControl26Audio_IIRHPF_GetBufferSizeEv(void);

/* Symbol: adsp_cbk_register */
/* Demangled: adsp_cbk_register */
int adsp_cbk_register(void);

/* Symbol: _ZN7android21AudioDspStreamManager23CreateAurisysLibManagerEPP21aurisys_lib_manager_tPP20aurisys_dsp_config_thjhjPK18stream_attribute_tS9_S9_PK21aurisys_gain_config_t */
/* Demangled: android::AudioDspStreamManager::CreateAurisysLibManager(aurisys_lib_manager_t**, aurisys_dsp_config_t**, unsigned char, unsigned int, unsigned char, unsigned int, stream_attribute_t const*, stream_attribute_t const*, stream_attribute_t const*, aurisys_gain_config_t const*) */
int _ZN7android21AudioDspStreamManager23CreateAurisysLibManagerEPP21aurisys_lib_manager_tPP20aurisys_dsp_config_thjhjPK18stream_attribute_tS9_S9_PK21aurisys_gain_config_t(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase18getCapturePositionEPxS1_ */
/* Demangled: android::AudioALSACaptureDataProviderBase::getCapturePosition(long long*, long long*) */
int _ZN7android32AudioALSACaptureDataProviderBase18getCapturePositionEPxS1_(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtvD0Ev */
/* Demangled: android::AudioALSAHandlerKtv::~AudioALSAHandlerKtv() */
int _ZN7android19AudioALSAHandlerKtvD0Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadD0Ev */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDThread::~AudioExtMDCVSDThread() */
int _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadD0Ev(void);

/* Symbol: _ZTV9AudioLock */
/* Demangled: vtable for AudioLock */
extern void* _ZTV9AudioLock;

/* Symbol: _ZTV9AutoAlock */
/* Demangled: vtable for AutoAlock */
extern void* _ZTV9AutoAlock;

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager15updateCurStatusEv */
/* Demangled: android::AudioALSAHyBridNLEManager::updateCurStatus() */
int _ZN7android25AudioALSAHyBridNLEManager15updateCurStatusEv(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload18compress_operationENS_19offload_compr_cmd_tE */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::compress_operation(android::offload_compr_cmd_t) */
int _ZN7android31AudioALSAPlaybackHandlerOffload18compress_operationENS_19offload_compr_cmd_tE(void);

/* Symbol: _ZN7android18SpeechPcmMixerBase4OpenEPNS_21SpeechDriverInterfaceE */
/* Demangled: android::SpeechPcmMixerBase::Open(android::SpeechDriverInterface*) */
int _ZN7android18SpeechPcmMixerBase4OpenEPNS_21SpeechDriverInterfaceE(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP13SetUplinkGainEs */
/* Demangled: android::SpeechDriverOpenDSP::SetUplinkGain(short) */
int _ZN7android19SpeechDriverOpenDSP13SetUplinkGainEs(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_pattern_characterIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_pattern_character<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_pattern_characterIPKcEET_S7_S7_(void);

/* Symbol: _ZN7android18AudioVIBSPKControlC1Ev */
/* Demangled: android::AudioVIBSPKControl::AudioVIBSPKControl() */
int _ZN7android18AudioVIBSPKControlC1Ev(void);

/* Symbol: _ZNK7android18SpeechDriverNormal23getModemSideModemStatusENS_19modem_status_mask_tE */
/* Demangled: android::SpeechDriverNormal::getModemSideModemStatus(android::modem_status_mask_t) const */
int _ZNK7android18SpeechDriverNormal23getModemSideModemStatusENS_19modem_status_mask_tE(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSD4openEv */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::open() */
int _ZN7android34AudioALSACaptureDataProviderBTCVSD4openEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSACaptureDataProviderBase*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase23CreateAurisysLibManagerEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::CreateAurisysLibManager() */
int _ZN7android28AudioALSAPlaybackHandlerBase23CreateAurisysLibManagerEv(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer22openMixerTargetHandlerEv */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::openMixerTargetHandler() */
int _ZN7android29AudioALSAPlaybackHandlerMixer22openMixerTargetHandlerEv(void);

/* Symbol: _ZN7android22AudioMTKGainController9initCheckEv */
/* Demangled: android::AudioMTKGainController::initCheck() */
int _ZN7android22AudioMTKGainController9initCheckEv(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerNormal4initEv */
/* Demangled: android::AudioALSACaptureHandlerNormal::init() */
int _ZN7android29AudioALSACaptureHandlerNormal4initEv(void);

/* Symbol: _ZN7android27SpeechDataProcessingHandler9recordOffEv */
/* Demangled: android::SpeechDataProcessingHandler::recordOff() */
int _ZN7android27SpeechDataProcessingHandler9recordOffEv(void);

/* Symbol: _ZN7android26platformIsolatedDeepBufferEv */
/* Demangled: android::platformIsolatedDeepBuffer() */
int _ZN7android26platformIsolatedDeepBufferEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderDspRaw4openEv */
/* Demangled: android::AudioALSACaptureDataProviderDspRaw::open() */
int _ZN7android34AudioALSACaptureDataProviderDspRaw4openEv(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpControllerC2Ev */
/* Demangled: android::AudioALSAVoiceWakeUpController::AudioALSAVoiceWakeUpController() */
int _ZN7android30AudioALSAVoiceWakeUpControllerC2Ev(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP22SetScpSideSpeechStatusENS_19modem_status_mask_tE */
/* Demangled: android::SpeechDriverOpenDSP::SetScpSideSpeechStatus(android::modem_status_mask_t) */
int _ZN7android19SpeechDriverOpenDSP22SetScpSideSpeechStatusENS_19modem_status_mask_tE(void);

/* Symbol: _ZN7android8SPELayer12SetFrameRateENS_8SPE_MODEEl */
/* Demangled: android::SPELayer::SetFrameRate(android::SPE_MODE, long) */
int _ZN7android8SPELayer12SetFrameRateENS_8SPE_MODEEl(void);

/* Symbol: _ZN7android18AudioALSAStreamOut17setMuteForRoutingEb */
/* Demangled: android::AudioALSAStreamOut::setMuteForRouting(bool) */
int _ZN7android18AudioALSAStreamOut17setMuteForRoutingEb(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase16preparePcmDriverEPP3pcm */
/* Demangled: android::AudioALSACaptureDataProviderBase::preparePcmDriver(pcm**) */
int _ZN7android32AudioALSACaptureDataProviderBase16preparePcmDriverEPP3pcm(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDspC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderDsp::AudioALSACaptureDataProviderDsp() */
int _ZN7android31AudioALSACaptureDataProviderDspC1Ev(void);

/* Symbol: _ZN7android22AudioMTKGainController12isInVoipCallE12audio_mode_t */
/* Demangled: android::AudioMTKGainController::isInVoipCall(audio_mode_t) */
int _ZN7android22AudioMTKGainController12isInVoipCallE12audio_mode_t(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP8recordOnEv */
/* Demangled: android::SpeechDriverOpenDSP::recordOn() */
int _ZN7android19SpeechDriverOpenDSP8recordOnEv(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController18muteDlUlForRoutingEi */
/* Demangled: android::AudioALSASpeechPhoneCallController::muteDlUlForRouting(int) */
int _ZN7android34AudioALSASpeechPhoneCallController18muteDlUlForRoutingEi(void);

/* Symbol: _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread16ClosePcmDumpFileEv */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDThread::ClosePcmDumpFile() */
int _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread16ClosePcmDumpFileEv(void);

/* Symbol: _ZN7android15AudioPreProcess21update_echo_referenceEj */
/* Demangled: android::AudioPreProcess::update_echo_reference(unsigned int) */
int _ZN7android15AudioPreProcess21update_echo_referenceEj(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager18setNleHwConfigByDbEii */
/* Demangled: android::AudioALSAHyBridNLEManager::setNleHwConfigByDb(int, int) */
int _ZN7android25AudioALSAHyBridNLEManager18setNleHwConfigByDbEii(void);

/* Symbol: _ZN7android16SpeechExtMemCCCID0Ev */
/* Demangled: android::SpeechExtMemCCCI::~SpeechExtMemCCCI() */
int _ZN7android16SpeechExtMemCCCID0Ev(void);

/* Symbol: _ZN7android14hPCMDumpThreadE */
/* Demangled: android::hPCMDumpThread */
extern void* _ZN7android14hPCMDumpThreadE;

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController17checkModemIsReadyEv */
/* Demangled: android::AudioALSASpeechPhoneCallController::checkModemIsReady() */
int _ZN7android34AudioALSASpeechPhoneCallController17checkModemIsReadyEv(void);

/* Symbol: _ZN7android8Play2WayC1Ev */
/* Demangled: android::Play2Way::Play2Way() */
int _ZN7android8Play2WayC1Ev(void);

/* Symbol: _ZN7android17AudioALSAHardware16closeInputStreamEP25AudioMTKStreamInInterface */
/* Demangled: android::AudioALSAHardware::closeInputStream(AudioMTKStreamInInterface*) */
int _ZN7android17AudioALSAHardware16closeInputStreamEP25AudioMTKStreamInInterface(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController10initAwsSrcEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::initAwsSrc(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController10initAwsSrcEPNS_9USBStreamE(void);

/* Symbol: _ZTVN7android32AudioALSAHardwareResourceManagerE */
/* Demangled: vtable for android::AudioALSAHardwareResourceManager */
extern void* _ZTVN7android32AudioALSAHardwareResourceManagerE;

/* Symbol: _ZN7android22AudioALSAStreamManager14GetOffloadGainEf */
/* Demangled: android::AudioALSAStreamManager::GetOffloadGain(float) */
int _ZN7android22AudioALSAStreamManager14GetOffloadGainEf(void);

/* Symbol: _ZNK7android6VectorIPNS_18AudioALSAStreamOutEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::AudioALSAStreamOut*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_18AudioALSAStreamOutEE15do_move_forwardEPvPKvj(void);

/* Symbol: dynamic_change_ring_buf_size */
/* Demangled: dynamic_change_ring_buf_size */
int dynamic_change_ring_buf_size(void);

/* Symbol: _ZN7android21AudioDspStreamManager21needStartPlaybackTaskEj */
/* Demangled: android::AudioDspStreamManager::needStartPlaybackTask(unsigned int) */
int _ZN7android21AudioDspStreamManager21needStartPlaybackTaskEj(void);

/* Symbol: _ZN7android17AudioDspCallFinal18mAudioDspCallFinalE */
/* Demangled: android::AudioDspCallFinal::mAudioDspCallFinal */
extern void* _ZN7android17AudioDspCallFinal18mAudioDspCallFinalE;

/* Symbol: _ZN7android22AudioMTKGainController11setFmVolumeEf */
/* Demangled: android::AudioMTKGainController::setFmVolume(float) */
int _ZN7android22AudioMTKGainController11setFmVolumeEf(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__parse_ecma_expIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ecma_exp<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE16__parse_ecma_expIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
/* Demangled: _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void);

/* Symbol: _ZN7android31AudioALSASpeechStreamController21GetStreamOutputDeviceEv */
/* Demangled: android::AudioALSASpeechStreamController::GetStreamOutputDevice() */
int _ZN7android31AudioALSASpeechStreamController21GetStreamOutputDeviceEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP16setPcmRecordTypeENS_19SpcRecordTypeStructE */
/* Demangled: android::SpeechDriverOpenDSP::setPcmRecordType(android::SpcRecordTypeStruct) */
int _ZN7android19SpeechDriverOpenDSP16setPcmRecordTypeENS_19SpcRecordTypeStructE(void);

/* Symbol: _ZN7android17WCNChipController24BTChipSamplingRateNumberEv */
/* Demangled: android::WCNChipController::BTChipSamplingRateNumber() */
int _ZN7android17WCNChipController24BTChipSamplingRateNumberEv(void);

/* Symbol: _ZN7android15AudioPreProcess19push_echo_referenceEj */
/* Demangled: android::AudioPreProcess::push_echo_reference(unsigned int) */
int _ZN7android15AudioPreProcess19push_echo_referenceEj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl17Audio_IIRHPF_InitEv */
/* Demangled: android::AudioBTCVSDControl::Audio_IIRHPF_Init() */
int _ZN7android18AudioBTCVSDControl17Audio_IIRHPF_InitEv(void);

/* Symbol: _ZTVN7android17SpeechParserGen95E */
/* Demangled: vtable for android::SpeechParserGen95 */
extern void* _ZTVN7android17SpeechParserGen95E;

/* Symbol: _ZN7android17SpeechDriverDummy16setMDVolumeIndexEiii */
/* Demangled: android::SpeechDriverDummy::setMDVolumeIndex(int, int, int) */
int _ZN7android17SpeechDriverDummy16setMDVolumeIndexEiii(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManager17SupportConfigFileEv */
/* Demangled: android::AudioALSADeviceConfigManager::SupportConfigFile() */
int _ZN7android28AudioALSADeviceConfigManager17SupportConfigFileEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController14updateXmlParamEPKc */
/* Demangled: android::AudioUSBPhoneCallController::updateXmlParam(char const*) */
int _ZN7android27AudioUSBPhoneCallController14updateXmlParamEPKc(void);

/* Symbol: aurisys_pool_buf_formatter_deinit */
/* Demangled: aurisys_pool_buf_formatter_deinit */
int aurisys_pool_buf_formatter_deinit(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSD8doBliSrcEPvjPS1_Pj */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::doBliSrc(void*, unsigned int, void**, unsigned int*) */
int _ZN7android34AudioALSACaptureDataProviderBTCVSD8doBliSrcEPvjPS1_Pj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager22GetBtHeadsetNrecStatusEv */
/* Demangled: android::AudioALSAStreamManager::GetBtHeadsetNrecStatus() */
int _ZN7android22AudioALSAStreamManager22GetBtHeadsetNrecStatusEv(void);

/* Symbol: audio_dsp_service_deinit */
/* Demangled: audio_dsp_service_deinit */
int audio_dsp_service_deinit(void);

/* Symbol: _ZN7android15LoopbackManager11GetInstanceEv */
/* Demangled: android::LoopbackManager::GetInstance() */
int _ZN7android15LoopbackManager11GetInstanceEv(void);

/* Symbol: _ZN7android20GainTableParamParserC1Ev */
/* Demangled: android::GainTableParamParser::GainTableParamParser() */
int _ZN7android20GainTableParamParserC1Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager11setVtNeedOnEb */
/* Demangled: android::AudioALSAStreamManager::setVtNeedOn(bool) */
int _ZN7android22AudioALSAStreamManager11setVtNeedOnEb(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSD18getKernelTimeStampEP8timespec */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::getKernelTimeStamp(timespec*) */
int _ZN7android34AudioALSACaptureDataProviderBTCVSD18getKernelTimeStampEP8timespec(void);

/* Symbol: _ZN7android22AudioALSAStreamManager22SetHCFPreviewParameterEPvi */
/* Demangled: android::AudioALSAStreamManager::SetHCFPreviewParameter(void*, int) */
int _ZN7android22AudioALSAStreamManager22SetHCFPreviewParameterEPvi(void);

/* Symbol: _ZN7android21AudioDspStreamManager19openCaptureDspHwPcmEPNS_32AudioALSACaptureDataProviderBaseE */
/* Demangled: android::AudioDspStreamManager::openCaptureDspHwPcm(android::AudioALSACaptureDataProviderBase*) */
int _ZN7android21AudioDspStreamManager19openCaptureDspHwPcmEPNS_32AudioALSACaptureDataProviderBaseE(void);

/* Symbol: _ZN7android18SpeechDriverNormal14eCallIvsSwitchEb */
/* Demangled: android::SpeechDriverNormal::eCallIvsSwitch(bool) */
int _ZN7android18SpeechDriverNormal14eCallIvsSwitchEb(void);

/* Symbol: _ZN7android22AudioALSADriverUtilityC2Ev */
/* Demangled: android::AudioALSADriverUtility::AudioALSADriverUtility() */
int _ZN7android22AudioALSADriverUtilityC2Ev(void);

/* Symbol: _ZN7android12AudioFtmBaseD2Ev */
/* Demangled: android::AudioFtmBase::~AudioFtmBase() */
int _ZN7android12AudioFtmBaseD2Ev(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager15OpenSpeakerPathEj */
/* Demangled: android::AudioALSAHardwareResourceManager::OpenSpeakerPath(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager15OpenSpeakerPathEj(void);

/* Symbol: _ZN7android26calculateTimeStampByFramesE8timespecj18stream_attribute_tPS0_ */
/* Demangled: android::calculateTimeStampByFrames(timespec, unsigned int, stream_attribute_t, timespec*) */
int _ZN7android26calculateTimeStampByFramesE8timespecj18stream_attribute_tPS0_(void);

/* Symbol: _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSD42mAudioALSACaptureDataProviderEchoRefBTCVSDE */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTCVSD::mAudioALSACaptureDataProviderEchoRefBTCVSD */
extern void* _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSD42mAudioALSACaptureDataProviderEchoRefBTCVSDE;

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager7processE18playback_handler_tPvj */
/* Demangled: android::AudioALSAHyBridNLEManager::process(playback_handler_t, void*, unsigned int) */
int _ZN7android25AudioALSAHyBridNLEManager7processE18playback_handler_tPvj(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManagerC2Ev */
/* Demangled: android::AudioALSAHardwareResourceManager::AudioALSAHardwareResourceManager() */
int _ZN7android32AudioALSAHardwareResourceManagerC2Ev(void);

/* Symbol: _ZN7android22AudioSmartPaControllerC2Ev */
/* Demangled: android::AudioSmartPaController::AudioSmartPaController() */
int _ZN7android22AudioSmartPaControllerC2Ev(void);

/* Symbol: _ZN7android18SpeechDriverNormal8eCallMsdEPvt */
/* Demangled: android::SpeechDriverNormal::eCallMsd(void*, unsigned short) */
int _ZN7android18SpeechDriverNormal8eCallMsdEPvt(void);

/* Symbol: _ZN7android20speech_ccci_smem_getEPPhPj */
/* Demangled: android::speech_ccci_smem_get(unsigned char**, unsigned int*) */
int _ZN7android20speech_ccci_smem_getEPPhPj(void);

/* Symbol: _ZN7android12AudioFtmBase25HeadsetMic_SpkLR_LoopbackEc */
/* Demangled: android::AudioFtmBase::HeadsetMic_SpkLR_Loopback(char) */
int _ZN7android12AudioFtmBase25HeadsetMic_SpkLR_LoopbackEc(void);

/* Symbol: _ZN7android21SpeechMessengerNormal23getMaxApPayloadDataSizeEv */
/* Demangled: android::SpeechMessengerNormal::getMaxApPayloadDataSize() */
int _ZN7android21SpeechMessengerNormal23getMaxApPayloadDataSizeEv(void);

/* Symbol: _ZN7android30AudioALSACaptureHandlerFMRadio4openEv */
/* Demangled: android::AudioALSACaptureHandlerFMRadio::open() */
int _ZN7android30AudioALSACaptureHandlerFMRadio4openEv(void);

/* Symbol: _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitchD1Ev */
/* Demangled: android::AudioALSACodecDeviceOutReceiverSpeakerSwitch::~AudioALSACodecDeviceOutReceiverSpeakerSwitch() */
int _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitchD1Ev(void);

/* Symbol: _ZN7android22AudioSmartPaController11getInstanceEv */
/* Demangled: android::AudioSmartPaController::getInstance() */
int _ZN7android22AudioSmartPaController11getInstanceEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal25resetModemSideModemStatusENS_19modem_status_mask_tE */
/* Demangled: android::SpeechDriverNormal::resetModemSideModemStatus(android::modem_status_mask_t) */
int _ZN7android18SpeechDriverNormal25resetModemSideModemStatusENS_19modem_status_mask_tE(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal19IsLowLatencyCaptureEv */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::IsLowLatencyCapture() */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal19IsLowLatencyCaptureEv(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_character_escapeINS_11__wrap_iterIPKcEEEET_S9_S9_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_character_escape<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_character_escapeINS_11__wrap_iterIPKcEEEET_S9_S9_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZNKSt3__110__back_refIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__back_ref<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__110__back_refIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerBTSCOD0Ev */
/* Demangled: android::AudioALSAPlaybackHandlerBTSCO::~AudioALSAPlaybackHandlerBTSCO() */
int _ZN7android29AudioALSAPlaybackHandlerBTSCOD0Ev(void);

/* Symbol: _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffloadC1EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::AudioALSAPlaybackHandlerOffload(stream_attribute_t const*) */
int _ZN7android31AudioALSAPlaybackHandlerOffloadC1EPK18stream_attribute_t(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerVOWC2EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerVOW::AudioALSACaptureHandlerVOW(stream_attribute_t*) */
int _ZN7android26AudioALSACaptureHandlerVOWC2EP18stream_attribute_t(void);

/* Symbol: _ZN7android22AudioMTKGainController19speechNetworkChangeEj */
/* Demangled: android::AudioMTKGainController::speechNetworkChange(unsigned int) */
int _ZN7android22AudioMTKGainController19speechNetworkChangeEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj(void);

/* Symbol: _ZN7android8SPELayer18GetVoIPLatencyTimeEv */
/* Demangled: android::SPELayer::GetVoIPLatencyTime() */
int _ZN7android8SPELayer18GetVoIPLatencyTimeEv(void);

/* Symbol: audio_ringbuf_count */
/* Demangled: audio_ringbuf_count */
int audio_ringbuf_count(void);

/* Symbol: _ZN7android22AudioMTKGainController13isInVoiceCallE12audio_mode_t */
/* Demangled: android::AudioMTKGainController::isInVoiceCall(audio_mode_t) */
int _ZN7android22AudioMTKGainController13isInVoiceCallE12audio_mode_t(void);

/* Symbol: _ZNK7android6VectorIPNS_19DeviceCtlDescriptorEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::DeviceCtlDescriptor*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_19DeviceCtlDescriptorEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android17AudioALSAStreamIn19isInputStreamActiveEv */
/* Demangled: android::AudioALSAStreamIn::isInputStreamActive() */
int _ZN7android17AudioALSAStreamIn19isInputStreamActiveEv(void);

/* Symbol: _ZN7android16bDumpStreamInFlgE */
/* Demangled: android::bDumpStreamInFlg */
extern void* _ZN7android16bDumpStreamInFlgE;

/* Symbol: _ZN7android17AudioALSAHardware15openInputStreamEjPiPjS2_S1_20audio_in_acoustics_t */
/* Demangled: android::AudioALSAHardware::openInputStream(unsigned int, int*, unsigned int*, unsigned int*, int*, audio_in_acoustics_t) */
int _ZN7android17AudioALSAHardware15openInputStreamEjPiPjS2_S1_20audio_in_acoustics_t(void);

/* Symbol: _ZN7android32AudioALSACaptureDataClientSyncIOD0Ev */
/* Demangled: android::AudioALSACaptureDataClientSyncIO::~AudioALSACaptureDataClientSyncIO() */
int _ZN7android32AudioALSACaptureDataClientSyncIOD0Ev(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager19CloseBuiltInMicPathEv */
/* Demangled: android::AudioALSAHardwareResourceManager::CloseBuiltInMicPath() */
int _ZN7android32AudioALSAHardwareResourceManager19CloseBuiltInMicPathEv(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp25getPlaybackTurnOnSequenceEjPKc */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::getPlaybackTurnOnSequence(unsigned int, char const*) */
int _ZN7android27AudioALSAPlaybackHandlerDsp25getPlaybackTurnOnSequenceEjPKc(void);

/* Symbol: _ZN7android21AudioDspStreamManager17closePlaybackTaskEPNS_28AudioALSAPlaybackHandlerBaseE */
/* Demangled: android::AudioDspStreamManager::closePlaybackTask(android::AudioALSAPlaybackHandlerBase*) */
int _ZN7android21AudioDspStreamManager17closePlaybackTaskEPNS_28AudioALSAPlaybackHandlerBaseE(void);

/* Symbol: _ZN7android25SpeechPcmMixerTelephonyTx11GetInstanceEv */
/* Demangled: android::SpeechPcmMixerTelephonyTx::GetInstance() */
int _ZN7android25SpeechPcmMixerTelephonyTx11GetInstanceEv(void);

/* Symbol: _ZN7android8SPELayer10GetChannelEv */
/* Demangled: android::SPELayer::GetChannel() */
int _ZN7android8SPELayer10GetChannelEv(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerBTCVSDD2Ev */
/* Demangled: android::AudioALSAPlaybackHandlerBTCVSD::~AudioALSAPlaybackHandlerBTCVSD() */
int _ZN7android30AudioALSAPlaybackHandlerBTCVSDD2Ev(void);

/* Symbol: _ZN7android31AudioALSASpeechStreamController21SetStreamOutputDeviceEj */
/* Demangled: android::AudioALSASpeechStreamController::SetStreamOutputDevice(unsigned int) */
int _ZN7android31AudioALSASpeechStreamController21SetStreamOutputDeviceEj(void);

/* Symbol: _ZN7android16AudioEventThread6signalEPv */
/* Demangled: android::AudioEventThread::signal(void*) */
int _ZN7android16AudioEventThread6signalEPv(void);

/* Symbol: _ZN7android17WCNChipController18mWCNChipControllerE */
/* Demangled: android::WCNChipController::mWCNChipController */
extern void* _ZN7android17WCNChipController18mWCNChipControllerE;

/* Symbol: _ZN7android8SPELayer13SetCompFilterENS_8SPE_MODEEPs */
/* Demangled: android::SPELayer::SetCompFilter(android::SPE_MODE, short*) */
int _ZN7android8SPELayer13SetCompFilterENS_8SPE_MODEEPs(void);

/* Symbol: _ZN26AudioMTKStreamOutInterfaceD1Ev */
/* Demangled: AudioMTKStreamOutInterface::~AudioMTKStreamOutInterface() */
int _ZN26AudioMTKStreamOutInterfaceD1Ev(void);

/* Symbol: _ZN7android17AudioALSAHardware13xWayRec_StartEi */
/* Demangled: android::AudioALSAHardware::xWayRec_Start(int) */
int _ZN7android17AudioALSAHardware13xWayRec_StartEi(void);

/* Symbol: _ZTVN7android15LoopbackManagerE */
/* Demangled: vtable for android::LoopbackManager */
extern void* _ZTVN7android15LoopbackManagerE;

/* Symbol: _ZTVN7android21AudioDeviceDescriptorE */
/* Demangled: vtable for android::AudioDeviceDescriptor */
extern void* _ZTVN7android21AudioDeviceDescriptorE;

/* Symbol: _ZN7android18AudioVIBSPKControlD2Ev */
/* Demangled: android::AudioVIBSPKControl::~AudioVIBSPKControl() */
int _ZN7android18AudioVIBSPKControlD2Ev(void);

/* Symbol: _ZNK7android6VectorIPNS_33AudioParameterChangedHidlCallbackEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::AudioParameterChangedHidlCallback*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_33AudioParameterChangedHidlCallbackEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android17AudioDspCallFinal27isOutputDevCallFinalSupportEi */
/* Demangled: android::AudioDspCallFinal::isOutputDevCallFinalSupport(int) */
int _ZN7android17AudioDspCallFinal27isOutputDevCallFinalSupportEi(void);

/* Symbol: _ZN7android12SpeechConfig14speechDataDumpEPcPKcPK6_Param */
/* Demangled: android::SpeechConfig::speechDataDump(char*, char const*, _Param const*) */
int _ZN7android12SpeechConfig14speechDataDumpEPcPKcPK6_Param(void);

/* Symbol: _ZN7android15AudioPreProcess22set_preprocessor_paramEPP18effect_interface_sP14effect_param_s */
/* Demangled: android::AudioPreProcess::set_preprocessor_param(effect_interface_s**, effect_param_s*) */
int _ZN7android15AudioPreProcess22set_preprocessor_paramEPP18effect_interface_sP14effect_param_s(void);

/* Symbol: _ZNK7android6VectorIPNS_21AudioDeviceDescriptorEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::AudioDeviceDescriptor*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_21AudioDeviceDescriptorEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android18AudioALSAStreamOut4stopEv */
/* Demangled: android::AudioALSAStreamOut::stop() */
int _ZN7android18AudioALSAStreamOut4stopEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp18setDspRefRuntimeEnEb */
/* Demangled: android::AudioALSACaptureDataProviderDsp::setDspRefRuntimeEn(bool) */
int _ZN7android31AudioALSACaptureDataProviderDsp18setDspRefRuntimeEnEb(void);

/* Symbol: _ZN7android18SpeechShareMemBaseC2Ev */
/* Demangled: android::SpeechShareMemBase::SpeechShareMemBase() */
int _ZN7android18SpeechShareMemBaseC2Ev(void);

/* Symbol: _ZN7android17SpeechDriverDummy16VideoTelephonyOnEv */
/* Demangled: android::SpeechDriverDummy::VideoTelephonyOn() */
int _ZN7android17SpeechDriverDummy16VideoTelephonyOnEv(void);

/* Symbol: _ZN7android8SPELayer14EPLDebugEnableE */
/* Demangled: android::SPELayer::EPLDebugEnable */
extern void* _ZN7android8SPELayer14EPLDebugEnableE;

/* Symbol: _ZN7android26AudioALSACaptureHandlerANCD0Ev */
/* Demangled: android::AudioALSACaptureHandlerANC::~AudioALSACaptureHandlerANC() */
int _ZN7android26AudioALSACaptureHandlerANCD0Ev(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase14closePcmDriverEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::closePcmDriver() */
int _ZN7android32AudioALSACaptureDataProviderBase14closePcmDriverEv(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase21compensateSilenceDataEjPNS_7RingBufE */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::compensateSilenceData(unsigned int, android::RingBuf*) */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase21compensateSilenceDataEjPNS_7RingBufE(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutReceiverPMICC1Ev */
/* Demangled: android::AudioALSACodecDeviceOutReceiverPMIC::AudioALSACodecDeviceOutReceiverPMIC() */
int _ZN7android35AudioALSACodecDeviceOutReceiverPMICC1Ev(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android30PROPERTY_KEY_VOW_BARGEIN_STATEE */
/* Demangled: android::PROPERTY_KEY_VOW_BARGEIN_STATE */
extern void* _ZN7android30PROPERTY_KEY_VOW_BARGEIN_STATEE;

/* Symbol: _ZN7android18SpeechDriverNormal11sendMailboxEPNS_9sph_msg_tEttj */
/* Demangled: android::SpeechDriverNormal::sendMailbox(android::sph_msg_t*, unsigned short, unsigned short, unsigned int) */
int _ZN7android18SpeechDriverNormal11sendMailboxEPNS_9sph_msg_tEttj(void);

/* Symbol: _ZN7android12SetRcvStatusENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: android::SetRcvStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN7android12SetRcvStatusENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN7android17WCNChipController30GetBTCurrentSamplingRateNumberEv */
/* Demangled: android::WCNChipController::GetBTCurrentSamplingRateNumber() */
int _ZN7android17WCNChipController30GetBTCurrentSamplingRateNumberEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase15doNLEProcessingEPvj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::doNLEProcessing(void*, unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerBase15doNLEProcessingEPvj(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDspD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderDsp::~AudioALSACaptureDataProviderDsp() */
int _ZN7android31AudioALSACaptureDataProviderDspD2Ev(void);

/* Symbol: _ZN7android14TimeDifferenceE8timespecS0_ */
/* Demangled: android::TimeDifference(timespec, timespec) */
int _ZN7android14TimeDifferenceE8timespecS0_(void);

/* Symbol: _ZN7android24SpeechPcmMixerBaseBufferC2Ev */
/* Demangled: android::SpeechPcmMixerBaseBuffer::SpeechPcmMixerBaseBuffer() */
int _ZN7android24SpeechPcmMixerBaseBufferC2Ev(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo15SetAPTuningModeENS_16TOOL_TUNING_MODEE */
/* Demangled: android::AudioSpeechEnhanceInfo::SetAPTuningMode(android::TOOL_TUNING_MODE) */
int _ZN7android22AudioSpeechEnhanceInfo15SetAPTuningModeENS_16TOOL_TUNING_MODEE(void);

/* Symbol: _ZN7android22AudioALSAStreamManager14setVoiceVolumeEf */
/* Demangled: android::AudioALSAStreamManager::setVoiceVolume(float) */
int _ZN7android22AudioALSAStreamManager14setVoiceVolumeEf(void);

/* Symbol: _ZTVNSt3__116__back_ref_icaseIcNS_12regex_traitsIcEEEE */
/* Demangled: vtable for std::__1::__back_ref_icase<char, std::__1::regex_traits<char> > */
extern void* _ZTVNSt3__116__back_ref_icaseIcNS_12regex_traitsIcEEEE;

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase11OpenPCMDumpEPKc */
/* Demangled: android::AudioALSAPlaybackHandlerBase::OpenPCMDump(char const*) */
int _ZN7android28AudioALSAPlaybackHandlerBase11OpenPCMDumpEPKc(void);

/* Symbol: _ZN7android18SpeechDriverNormal15eCallPsapSwitchEb */
/* Demangled: android::SpeechDriverNormal::eCallPsapSwitch(bool) */
int _ZN7android18SpeechDriverNormal15eCallPsapSwitchEb(void);

/* Symbol: _ZN7android18SpeechDriverNormal17CheckModemIsReadyEv */
/* Demangled: android::SpeechDriverNormal::CheckModemIsReady() */
int _ZN7android18SpeechDriverNormal17CheckModemIsReadyEv(void);

/* Symbol: _ZN7android8Play2WayD2Ev */
/* Demangled: android::Play2Way::~Play2Way() */
int _ZN7android8Play2WayD2Ev(void);

/* Symbol: _ZN7android17strAudioPatchTypeE */
/* Demangled: android::strAudioPatchType */
extern void* _ZN7android17strAudioPatchTypeE;

/* Symbol: _ZN7android26AudioALSACaptureHandlerTDMD1Ev */
/* Demangled: android::AudioALSACaptureHandlerTDM::~AudioALSACaptureHandlerTDM() */
int _ZN7android26AudioALSACaptureHandlerTDMD1Ev(void);

/* Symbol: _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmp5closeEv */
/* Demangled: android::AudioALSACodecDeviceOutExtSpeakerAmp::close() */
int _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmp5closeEv(void);

/* Symbol: process_aurisys_dsp_dump */
/* Demangled: process_aurisys_dsp_dump */
int process_aurisys_dsp_dump(void);

/* Symbol: _ZN7android21AudioALSADeviceParserC2Ev */
/* Demangled: android::AudioALSADeviceParser::AudioALSADeviceParser() */
int _ZN7android21AudioALSADeviceParserC2Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl15BT_SCO_RX_StartEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_Start() */
int _ZN7android18AudioBTCVSDControl15BT_SCO_RX_StartEv(void);

/* Symbol: _ZN7android18AudioALSAStreamOut12mDumpFileNumE */
/* Demangled: android::AudioALSAStreamOut::mDumpFileNum */
extern void* _ZN7android18AudioALSAStreamOut12mDumpFileNumE;

/* Symbol: _ZN7android29AudioALSACaptureHandlerAAudioD2Ev */
/* Demangled: android::AudioALSACaptureHandlerAAudio::~AudioALSACaptureHandlerAAudio() */
int _ZN7android29AudioALSACaptureHandlerAAudioD2Ev(void);

/* Symbol: _ZN7android18SpeechDriverNormal16VideoTelephonyOnEv */
/* Demangled: android::SpeechDriverNormal::VideoTelephonyOn() */
int _ZN7android18SpeechDriverNormal16VideoTelephonyOnEv(void);

/* Symbol: _ZN7android34AudioALSACodecDeviceOutSpeakerPMICD1Ev */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerPMIC::~AudioALSACodecDeviceOutSpeakerPMIC() */
int _ZN7android34AudioALSACodecDeviceOutSpeakerPMICD1Ev(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtv15mDumpFileNumDspE */
/* Demangled: android::AudioALSAHandlerKtv::mDumpFileNumDsp */
extern void* _ZN7android19AudioALSAHandlerKtv15mDumpFileNumDspE;

/* Symbol: _ZN7android18SpeechDriverNormal15SetDownlinkGainEs */
/* Demangled: android::SpeechDriverNormal::SetDownlinkGain(short) */
int _ZN7android18SpeechDriverNormal15SetDownlinkGainEs(void);

/* Symbol: _ZN7android8SPELayer7ProcessEPNS_12InBufferInfoE */
/* Demangled: android::SPELayer::Process(android::InBufferInfo*) */
int _ZN7android8SPELayer7ProcessEPNS_12InBufferInfoE(void);

/* Symbol: _ZTVNSt3__111__match_anyIcEE */
/* Demangled: vtable for std::__1::__match_any<char> */
extern void* _ZTVNSt3__111__match_anyIcEE;

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSD35mAudioALSACaptureDataProviderBTCVSDE */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::mAudioALSACaptureDataProviderBTCVSD */
extern void* _ZN7android34AudioALSACaptureDataProviderBTCVSD35mAudioALSACaptureDataProviderBTCVSDE;

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerAAudio5writeEPKvj */
/* Demangled: android::AudioALSAPlaybackHandlerAAudio::write(void const*, unsigned int) */
int _ZN7android30AudioALSAPlaybackHandlerAAudio5writeEPKvj(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderFMRadioD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderFMRadio::~AudioALSACaptureDataProviderFMRadio() */
int _ZN7android35AudioALSACaptureDataProviderFMRadioD1Ev(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudio4openEv */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::open() */
int _ZN7android34AudioALSACaptureDataProviderAAudio4openEv(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp14setScreenStateEbjjb */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::setScreenState(bool, unsigned int, unsigned int, bool) */
int _ZN7android27AudioALSAPlaybackHandlerDsp14setScreenStateEbjjb(void);

/* Symbol: _ZN7android16iter_div_u64_remEyjPy */
/* Demangled: android::iter_div_u64_rem(unsigned long long, unsigned int, unsigned long long*) */
int _ZN7android16iter_div_u64_remEyjPy(void);

/* Symbol: _ZN7android24CVSDLoopbackGetDataCountEv */
/* Demangled: android::CVSDLoopbackGetDataCount() */
int _ZN7android24CVSDLoopbackGetDataCountEv(void);

/* Symbol: _ZN7android8SPELayer14EPLTransVMDumpEv */
/* Demangled: android::SPELayer::EPLTransVMDump() */
int _ZN7android8SPELayer14EPLTransVMDumpEv(void);

/* Symbol: _ZN7android29AudioALSASampleRateControllerC1Ev */
/* Demangled: android::AudioALSASampleRateController::AudioALSASampleRateController() */
int _ZN7android29AudioALSASampleRateControllerC1Ev(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_collating_symbolIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_collating_symbol<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_collating_symbolIPKcEET_S7_S7_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceDL32provideModemRecordDataToProviderENS_7RingBufE */
/* Demangled: android::AudioALSACaptureDataProviderVoiceDL::provideModemRecordDataToProvider(android::RingBuf) */
int _ZN7android35AudioALSACaptureDataProviderVoiceDL32provideModemRecordDataToProviderENS_7RingBufE(void);

/* Symbol: _ZNK7android6VectorIPNS_19DeviceCtlDescriptorEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::DeviceCtlDescriptor*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_19DeviceCtlDescriptorEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase13get_timeStampEPmPj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::get_timeStamp(unsigned long*, unsigned int*) */
int _ZN7android28AudioALSAPlaybackHandlerBase13get_timeStampEPmPj(void);

/* Symbol: _ZN7android20GainTableParamParserD2Ev */
/* Demangled: android::GainTableParamParser::~GainTableParamParser() */
int _ZN7android20GainTableParamParserD2Ev(void);

/* Symbol: _ZN7android17WCNChipController15SetFmChipVolumeEj */
/* Demangled: android::WCNChipController::SetFmChipVolume(unsigned int) */
int _ZN7android17WCNChipController15SetFmChipVolumeEj(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsb10prepareUsbEv */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::prepareUsb() */
int _ZN7android27AudioALSAPlaybackHandlerUsb10prepareUsbEv(void);

/* Symbol: _ZN7android17AudioALSAStreamIn7standbyEb */
/* Demangled: android::AudioALSAStreamIn::standby(bool) */
int _ZN7android17AudioALSAStreamIn7standbyEb(void);

/* Symbol: audio_ringbuf_copy_from_ringbuf_impl */
/* Demangled: audio_ringbuf_copy_from_ringbuf_impl */
int audio_ringbuf_copy_from_ringbuf_impl(void);

/* Symbol: _ZN7android18AudioVIBSPKControl15getVibSpkEnableEv */
/* Demangled: android::AudioVIBSPKControl::getVibSpkEnable() */
int _ZN7android18AudioVIBSPKControl15getVibSpkEnableEv(void);

/* Symbol: _ZN7android17AudioALSAHardware19SetTDMrecordDisableEv */
/* Demangled: android::AudioALSAHardware::SetTDMrecordDisable() */
int _ZN7android17AudioALSAHardware19SetTDMrecordDisableEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderUsbD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderUsb::~AudioALSACaptureDataProviderUsb() */
int _ZN7android31AudioALSACaptureDataProviderUsbD1Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager13setStreamTypeEi */
/* Demangled: android::AudioALSAStreamManager::setStreamType(int) */
int _ZN7android22AudioALSAStreamManager13setStreamTypeEi(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp11adjustSpikeEv */
/* Demangled: android::AudioALSACaptureDataProviderDsp::adjustSpike() */
int _ZN7android31AudioALSACaptureDataProviderDsp11adjustSpikeEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal16configSpeechInfoEPNS_10sph_info_tE */
/* Demangled: android::SpeechDriverNormal::configSpeechInfo(android::sph_info_t*) */
int _ZN7android18SpeechDriverNormal16configSpeechInfoEPNS_10sph_info_tE(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN7android8SPELayer13TimeStampDiffEPNS_10BufferInfoES2_ */
/* Demangled: android::SPELayer::TimeStampDiff(android::BufferInfo*, android::BufferInfo*) */
int _ZN7android8SPELayer13TimeStampDiffEPNS_10BufferInfoES2_(void);

/* Symbol: _ZN7android22AudioALSAStreamManager16DeviceNoneUpdateEv */
/* Demangled: android::AudioALSAStreamManager::DeviceNoneUpdate() */
int _ZN7android22AudioALSAStreamManager16DeviceNoneUpdateEv(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormalC1EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::AudioALSAPlaybackHandlerNormal(stream_attribute_t const*) */
int _ZN7android30AudioALSAPlaybackHandlerNormalC1EPK18stream_attribute_t(void);

/* Symbol: _ZTVN7android32AudioALSACaptureDataProviderBaseE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderBase */
extern void* _ZTVN7android32AudioALSACaptureDataProviderBaseE;

/* Symbol: _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSDC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTCVSD::AudioALSACaptureDataProviderEchoRefBTCVSD() */
int _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSDC2Ev(void);

/* Symbol: alock_free */
/* Demangled: alock_free */
int alock_free(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFast17DeviceSupportHifiEj */
/* Demangled: android::AudioALSAPlaybackHandlerFast::DeviceSupportHifi(unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerFast17DeviceSupportHifiEj(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload5pauseEv */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::pause() */
int _ZN7android31AudioALSAPlaybackHandlerOffload5pauseEv(void);

/* Symbol: _ZTVN7android18SpeechDriverNormalE */
/* Demangled: vtable for android::SpeechDriverNormal */
extern void* _ZTVN7android18SpeechDriverNormalE;

/* Symbol: _ZN7android29AudioALSACaptureHandlerSyncIOD1Ev */
/* Demangled: android::AudioALSACaptureHandlerSyncIO::~AudioALSACaptureHandlerSyncIO() */
int _ZN7android29AudioALSACaptureHandlerSyncIOD1Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl19BT_SCO_TX_SetHandleEPFvPvES1_jjj */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_TX_SetHandle(void (*)(void*), void*, unsigned int, unsigned int, unsigned int) */
int _ZN7android18AudioBTCVSDControl19BT_SCO_TX_SetHandleEPFvPvES1_jjj(void);

/* Symbol: _ZN7android8AudioFtm9mAudioFtmE */
/* Demangled: android::AudioFtm::mAudioFtm */
extern void* _ZN7android8AudioFtm9mAudioFtmE;

/* Symbol: _ZN7android21AudioDspStreamManager20checkMusicTaskStatusEv */
/* Demangled: android::AudioDspStreamManager::checkMusicTaskStatus() */
int _ZN7android21AudioDspStreamManager20checkMusicTaskStatusEv(void);

/* Symbol: _ZN7android27SpeechEnhancementController24SetMagicConferenceCallOnEb */
/* Demangled: android::SpeechEnhancementController::SetMagicConferenceCallOn(bool) */
int _ZN7android27SpeechEnhancementController24SetMagicConferenceCallOnEb(void);

/* Symbol: _ZTCN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadE0_NS_6ThreadE */
/* Demangled: construction vtable for android::Thread-in-android::AudioALSALoopbackController::AudioMTKLoopbackThread */
extern void* _ZTCN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadE0_NS_6ThreadE;

/* Symbol: _ZN7android22AudioSmartPaController19dspOnBoardSpeakerOnEj */
/* Demangled: android::AudioSmartPaController::dspOnBoardSpeakerOn(unsigned int) */
int _ZN7android22AudioSmartPaController19dspOnBoardSpeakerOnEj(void);

/* Symbol: _ZN7android18SpeechDriverNormal9eCallInfoEv */
/* Demangled: android::SpeechDriverNormal::eCallInfo() */
int _ZN7android18SpeechDriverNormal9eCallInfoEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl25btsco_AllocMemory_RX_MSBCEv */
/* Demangled: android::AudioBTCVSDControl::btsco_AllocMemory_RX_MSBC() */
int _ZN7android18AudioBTCVSDControl25btsco_AllocMemory_RX_MSBCEv(void);

/* Symbol: get_format_from_mask */
/* Demangled: get_format_from_mask */
int get_format_from_mask(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP16SetArsiAttributeEv */
/* Demangled: android::SpeechDriverOpenDSP::SetArsiAttribute() */
int _ZN7android19SpeechDriverOpenDSP16SetArsiAttributeEv(void);

/* Symbol: _ZN7android18keypcmPlaybackHDMIE */
/* Demangled: android::keypcmPlaybackHDMI */
extern void* _ZN7android18keypcmPlaybackHDMIE;

/* Symbol: _ZN7android8streaminE */
/* Demangled: android::streamin */
extern void* _ZN7android8streaminE;

/* Symbol: _ZN7android21AudioALSADeviceParser16GetPcmBufferSizeEjj */
/* Demangled: android::AudioALSADeviceParser::GetPcmBufferSize(unsigned int, unsigned int) */
int _ZN7android21AudioALSADeviceParser16GetPcmBufferSizeEjj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl16BT_SCO_CVSD_InitEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_CVSD_Init() */
int _ZN7android18AudioBTCVSDControl16BT_SCO_CVSD_InitEv(void);

/* Symbol: aurisys_lib_handler_c_file_init */
/* Demangled: aurisys_lib_handler_c_file_init */
int aurisys_lib_handler_c_file_init(void);

/* Symbol: _ZN7android21AudioDspStreamManager23UpdateCaptureDspLatencyEv */
/* Demangled: android::AudioDspStreamManager::UpdateCaptureDspLatency() */
int _ZN7android21AudioDspStreamManager23UpdateCaptureDspLatencyEv(void);

/* Symbol: audio_load_task_scene */
/* Demangled: audio_load_task_scene */
int audio_load_task_scene(void);

/* Symbol: _ZTVN7android32AudioALSACaptureDataClientSyncIOE */
/* Demangled: vtable for android::AudioALSACaptureDataClientSyncIO */
extern void* _ZTVN7android32AudioALSACaptureDataClientSyncIOE;

/* Symbol: _ZN7android18SpeechDriverNormal28speechEnhancementMaskWrapperEj */
/* Demangled: android::SpeechDriverNormal::speechEnhancementMaskWrapper(unsigned int) */
int _ZN7android18SpeechDriverNormal28speechEnhancementMaskWrapperEj(void);

/* Symbol: _ZNK7android18SpeechMessageQueue18checkQueueToBeFullEv */
/* Demangled: android::SpeechMessageQueue::checkQueueToBeFull() const */
int _ZNK7android18SpeechMessageQueue18checkQueueToBeFullEv(void);

/* Symbol: _ZN7android12AudioFtmBase35PhoneMic_Receiver_Acoustic_LoopbackEiPii */
/* Demangled: android::AudioFtmBase::PhoneMic_Receiver_Acoustic_Loopback(int, int*, int) */
int _ZN7android12AudioFtmBase35PhoneMic_Receiver_Acoustic_LoopbackEiPii(void);

/* Symbol: _ZN7android8AudioFtm26PhoneMic_Receiver_LoopbackEc */
/* Demangled: android::AudioFtm::PhoneMic_Receiver_Loopback(char) */
int _ZN7android8AudioFtm26PhoneMic_Receiver_LoopbackEc(void);

/* Symbol: _ZN7android29AudioALSACaptureDataClientDspD2Ev */
/* Demangled: android::AudioALSACaptureDataClientDsp::~AudioALSACaptureDataClientDsp() */
int _ZN7android29AudioALSACaptureDataClientDspD2Ev(void);

/* Symbol: _ZN7android13InFactoryModeEv */
/* Demangled: android::InFactoryMode() */
int _ZN7android13InFactoryModeEv(void);

/* Symbol: _ZN7android24get_string_from_propertyEPKcPcj */
/* Demangled: android::get_string_from_property(char const*, char*, unsigned int) */
int _ZN7android24get_string_from_propertyEPKcPcj(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController13getCallStatusEv */
/* Demangled: android::AudioALSASpeechPhoneCallController::getCallStatus() */
int _ZN7android34AudioALSASpeechPhoneCallController13getCallStatusEv(void);

/* Symbol: _ZTVN7android34AudioALSASpeechPhoneCallControllerE */
/* Demangled: vtable for android::AudioALSASpeechPhoneCallController */
extern void* _ZTVN7android34AudioALSASpeechPhoneCallControllerE;

/* Symbol: _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE8__appendEjRKS4_ */
/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::__append(unsigned int, std::__1::sub_match<char const*> const&) */
int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE8__appendEjRKS4_(void);

/* Symbol: lock_all_adsp_rlock */
/* Demangled: lock_all_adsp_rlock */
int lock_all_adsp_rlock(void);

/* Symbol: _ZN7android23AudioEventThreadManagerD0Ev */
/* Demangled: android::AudioEventThreadManager::~AudioEventThreadManager() */
int _ZN7android23AudioEventThreadManagerD0Ev(void);

/* Symbol: _ZN7android15AudioPreProcess16NativePreprocessEPvjPK18time_info_struct_t */
/* Demangled: android::AudioPreProcess::NativePreprocess(void*, unsigned int, time_info_struct_t const*) */
int _ZN7android15AudioPreProcess16NativePreprocessEPvjPK18time_info_struct_t(void);

/* Symbol: _ZN7android15keypcmPcm2voiceE */
/* Demangled: android::keypcmPcm2voice */
extern void* _ZN7android15keypcmPcm2voiceE;

/* Symbol: _ZN7android26AudioALSACaptureHandlerANCC2EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerANC::AudioALSACaptureHandlerANC(stream_attribute_t*) */
int _ZN7android26AudioALSACaptureHandlerANCC2EP18stream_attribute_t(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<void*, android::IAudioALSACaptureDataClient*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEE10do_compareEPKvS8_(void);

/* Symbol: _ZN7android21usbXmlChangedCallbackEP10_AppHandlePKc */
/* Demangled: android::usbXmlChangedCallback(_AppHandle*, char const*) */
int _ZN7android21usbXmlChangedCallbackEP10_AppHandlePKc(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager33mAudioALSAHardwareResourceManagerE */
/* Demangled: android::AudioALSAHardwareResourceManager::mAudioALSAHardwareResourceManager */
extern void* _ZN7android32AudioALSAHardwareResourceManager33mAudioALSAHardwareResourceManagerE;

/* Symbol: _ZN7android17AudioDspCallFinal23setCallFinalDspShareMemEb */
/* Demangled: android::AudioDspCallFinal::setCallFinalDspShareMem(bool) */
int _ZN7android17AudioDspCallFinal23setCallFinalDspShareMemEb(void);

/* Symbol: get_output_ch_mask */
/* Demangled: get_output_ch_mask */
int get_output_ch_mask(void);

/* Symbol: _ZN7android22AudioALSAStreamManager20SetBesLoudnessStatusEb */
/* Demangled: android::AudioALSAStreamManager::SetBesLoudnessStatus(bool) */
int _ZN7android22AudioALSAStreamManager20SetBesLoudnessStatusEb(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient17ApplyChannelRemixEPsj */
/* Demangled: android::AudioALSACaptureDataClient::ApplyChannelRemix(short*, unsigned int) */
int _ZN7android26AudioALSACaptureDataClient17ApplyChannelRemixEPsj(void);

/* Symbol: _ZN7android27SpeechDataProcessingHandlerD1Ev */
/* Demangled: android::SpeechDataProcessingHandler::~SpeechDataProcessingHandler() */
int _ZN7android27SpeechDataProcessingHandlerD1Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager34updateOutputDeviceForAllStreamIn_lEj */
/* Demangled: android::AudioALSAStreamManager::updateOutputDeviceForAllStreamIn_l(unsigned int) */
int _ZN7android22AudioALSAStreamManager34updateOutputDeviceForAllStreamIn_lEj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamIn*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEEE;

/* Symbol: _ZN7android23SpeechPcmMixerBGSPlayer15mPcmMixerDlGainE */
/* Demangled: android::SpeechPcmMixerBGSPlayer::mPcmMixerDlGain */
extern void* _ZN7android23SpeechPcmMixerBGSPlayer15mPcmMixerDlGainE;

/* Symbol: _ZN7android22AudioALSAStreamManager19routingOutputDeviceEPNS_18AudioALSAStreamOutEjj */
/* Demangled: android::AudioALSAStreamManager::routingOutputDevice(android::AudioALSAStreamOut*, unsigned int, unsigned int) */
int _ZN7android22AudioALSAStreamManager19routingOutputDeviceEPNS_18AudioALSAStreamOutEjj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager12SetInputMuteEb */
/* Demangled: android::AudioALSAStreamManager::SetInputMute(bool) */
int _ZN7android22AudioALSAStreamManager12SetInputMuteEb(void);

/* Symbol: _ZN7android22AudioALSAStreamManager15EnableBesRecordEv */
/* Demangled: android::AudioALSAStreamManager::EnableBesRecord() */
int _ZN7android22AudioALSAStreamManager15EnableBesRecordEv(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController24muteDlUlForRoutingThreadEPv */
/* Demangled: android::AudioALSASpeechPhoneCallController::muteDlUlForRoutingThread(void*) */
int _ZN7android34AudioALSASpeechPhoneCallController24muteDlUlForRoutingThreadEPv(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutReceiverPMICD2Ev */
/* Demangled: android::AudioALSACodecDeviceOutReceiverPMIC::~AudioALSACodecDeviceOutReceiverPMIC() */
int _ZN7android35AudioALSACodecDeviceOutReceiverPMICD2Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl14BT_SCO_TX_OpenEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_TX_Open() */
int _ZN7android18AudioBTCVSDControl14BT_SCO_TX_OpenEv(void);

/* Symbol: _ZN7android22AudioMTKGainController19getGainDeviceForTtyEv */
/* Demangled: android::AudioMTKGainController::getGainDeviceForTty() */
int _ZN7android22AudioMTKGainController19getGainDeviceForTtyEv(void);

/* Symbol: _ZN7android10Record2Way11mRecord2WayE */
/* Demangled: android::Record2Way::mRecord2Way */
extern void* _ZN7android10Record2Way11mRecord2WayE;

/* Symbol: _ZN7android17AudioALSAHardware18setSpecialScenarioEi */
/* Demangled: android::AudioALSAHardware::setSpecialScenario(int) */
int _ZN7android17AudioALSAHardware18setSpecialScenarioEi(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_awk_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_awk_escape<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_awk_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE21__push_back_slow_pathIS8_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__push_back_slow_path<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&&) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE21__push_back_slow_pathIS8_EEvOT_(void);

/* Symbol: _ZTINSt3__111regex_errorE */
/* Demangled: typeinfo for std::__1::regex_error */
extern void* _ZTINSt3__111regex_errorE;

/* Symbol: _ZN7android18AudioALSAStreamOut14setScreenStateEb */
/* Demangled: android::AudioALSAStreamOut::setScreenState(bool) */
int _ZN7android18AudioALSAStreamOut14setScreenStateEb(void);

/* Symbol: sw_mixer_source_update_write_bytes */
/* Demangled: sw_mixer_source_update_write_bytes */
int sw_mixer_source_update_write_bytes(void);

/* Symbol: _ZN7android22AudioMTKGainController13setAAudioMuteEb */
/* Demangled: android::AudioMTKGainController::setAAudioMute(bool) */
int _ZN7android22AudioMTKGainController13setAAudioMuteEb(void);

/* Symbol: _ZN7android22AudioMTKGainController15GetReceiverGainEv */
/* Demangled: android::AudioMTKGainController::GetReceiverGain() */
int _ZN7android22AudioMTKGainController15GetReceiverGainEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataClientSyncIO30copyEchoRefCaptureDataToClientENS_7RingBufE */
/* Demangled: android::AudioALSACaptureDataClientSyncIO::copyEchoRefCaptureDataToClient(android::RingBuf) */
int _ZN7android32AudioALSACaptureDataClientSyncIO30copyEchoRefCaptureDataToClientENS_7RingBufE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZN7android27SpeechDataProcessingHandler32provideModemRecordDataToProviderENS_7RingBufE */
/* Demangled: android::SpeechDataProcessingHandler::provideModemRecordDataToProvider(android::RingBuf) */
int _ZN7android27SpeechDataProcessingHandler32provideModemRecordDataToProviderENS_7RingBufE(void);

/* Symbol: _ZN7android28AudioALSACaptureHandlerVoice7routingEj */
/* Demangled: android::AudioALSACaptureHandlerVoice::routing(unsigned int) */
int _ZN7android28AudioALSACaptureHandlerVoice7routingEj(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerTDM4openEv */
/* Demangled: android::AudioALSACaptureHandlerTDM::open() */
int _ZN7android26AudioALSACaptureHandlerTDM4openEv(void);

/* Symbol: _ZN7android20AudioCustParamClient16getNumMicSupportEv */
/* Demangled: android::AudioCustParamClient::getNumMicSupport() */
int _ZN7android20AudioCustParamClient16getNumMicSupportEv(void);

/* Symbol: _ZN7android21AudioDspStreamManager15getDspRuntimeEnEh */
/* Demangled: android::AudioDspStreamManager::getDspRuntimeEn(unsigned char) */
int _ZN7android21AudioDspStreamManager15getDspRuntimeEnEh(void);

/* Symbol: _ZNK7android6VectorIPNS_33AudioParameterChangedHidlCallbackEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::AudioParameterChangedHidlCallback*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_33AudioParameterChangedHidlCallbackEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android21AudioDspStreamManager10updateModeE12audio_mode_t */
/* Demangled: android::AudioDspStreamManager::updateMode(audio_mode_t) */
int _ZN7android21AudioDspStreamManager10updateModeE12audio_mode_t(void);

/* Symbol: _ZN7android8AudioFtm15Audio_FMTX_PlayEbj */
/* Demangled: android::AudioFtm::Audio_FMTX_Play(bool, unsigned int) */
int _ZN7android8AudioFtm15Audio_FMTX_PlayEbj(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerAAudioD1Ev */
/* Demangled: android::AudioALSAPlaybackHandlerAAudio::~AudioALSAPlaybackHandlerAAudio() */
int _ZN7android30AudioALSAPlaybackHandlerAAudioD1Ev(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsb19getUSBDeviceLatencyEj */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::getUSBDeviceLatency(unsigned int) */
int _ZN7android27AudioALSAPlaybackHandlerUsb19getUSBDeviceLatencyEj(void);

/* Symbol: aurisys_arsi_process_ul_and_dl */
/* Demangled: aurisys_arsi_process_ul_and_dl */
int aurisys_arsi_process_ul_and_dl(void);

/* Symbol: _ZNK7android6VectorINS_8String16EE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::String16>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_8String16EE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIPNS_33AudioParameterChangedHidlCallbackEE12do_constructEPvj */
/* Demangled: android::Vector<android::AudioParameterChangedHidlCallback*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_33AudioParameterChangedHidlCallbackEE12do_constructEPvj(void);

/* Symbol: _ZN7android18SpeechDriverNormal25createThreadsDuringSpeechEv */
/* Demangled: android::SpeechDriverNormal::createThreadsDuringSpeech() */
int _ZN7android18SpeechDriverNormal25createThreadsDuringSpeechEv(void);

/* Symbol: _ZN7android11streaminI2SE */
/* Demangled: android::streaminI2S */
extern void* _ZN7android11streaminI2SE;

/* Symbol: _ZN7android22AudioSmartPaController25setSmartPaAutoCalibrationEv */
/* Demangled: android::AudioSmartPaController::setSmartPaAutoCalibration() */
int _ZN7android22AudioSmartPaController25setSmartPaAutoCalibrationEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP18VoiceMemoRecordOffEv */
/* Demangled: android::SpeechDriverOpenDSP::VoiceMemoRecordOff() */
int _ZN7android19SpeechDriverOpenDSP18VoiceMemoRecordOffEv(void);

/* Symbol: _ZN7android28AudiocheckAndCreateDirectoryEPKc */
/* Demangled: android::AudiocheckAndCreateDirectory(char const*) */
int _ZN7android28AudiocheckAndCreateDirectoryEPKc(void);

/* Symbol: _ZN7android8SPELayer18PrepareProcessDataEv */
/* Demangled: android::SPELayer::PrepareProcessData() */
int _ZN7android8SPELayer18PrepareProcessDataEv(void);

/* Symbol: _ZN7android29AudioALSASampleRateControllerD2Ev */
/* Demangled: android::AudioALSASampleRateController::~AudioALSASampleRateController() */
int _ZN7android29AudioALSASampleRateControllerD2Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager17closeOutputStreamEP26AudioMTKStreamOutInterface */
/* Demangled: android::AudioALSAStreamManager::closeOutputStream(AudioMTKStreamOutInterface*) */
int _ZN7android22AudioALSAStreamManager17closeOutputStreamEP26AudioMTKStreamOutInterface(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceUL5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderVoiceUL::close() */
int _ZN7android35AudioALSACaptureDataProviderVoiceUL5closeEv(void);

/* Symbol: _ZN7android2spINS_18AudioBTCVSDControl20AudioExtMDCVSDThreadEED2Ev */
/* Demangled: android::sp<android::AudioBTCVSDControl::AudioExtMDCVSDThread>::~sp() */
int _ZN7android2spINS_18AudioBTCVSDControl20AudioExtMDCVSDThreadEED2Ev(void);

/* Symbol: _ZN7android18SpeechMessageQueue21waitUntilModemAckBackEPNS_9sph_msg_tEj */
/* Demangled: android::SpeechMessageQueue::waitUntilModemAckBack(android::sph_msg_t*, unsigned int) */
int _ZN7android18SpeechMessageQueue21waitUntilModemAckBackEPNS_9sph_msg_tEj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager25UpdateDynamicFunctionMaskEv */
/* Demangled: android::AudioALSAStreamManager::UpdateDynamicFunctionMask() */
int _ZN7android22AudioALSAStreamManager25UpdateDynamicFunctionMaskEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl21BT_SCO_ExtMDULBufLockEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMDULBufLock() */
int _ZN7android18AudioBTCVSDControl21BT_SCO_ExtMDULBufLockEv(void);

/* Symbol: _ZN7android12find_bit_posEj */
/* Demangled: android::find_bit_pos(unsigned int) */
int _ZN7android12find_bit_posEj(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_collating_symbolINS_11__wrap_iterIPKcEEEET_S9_S9_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_collating_symbol<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_collating_symbolINS_11__wrap_iterIPKcEEEET_S9_S9_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerANC4readEPvi */
/* Demangled: android::AudioALSACaptureHandlerANC::read(void*, int) */
int _ZN7android26AudioALSACaptureHandlerANC4readEPvi(void);

/* Symbol: _ZTVN7android36AudioALSACodecDeviceOutExtSpeakerAmpE */
/* Demangled: vtable for android::AudioALSACodecDeviceOutExtSpeakerAmp */
extern void* _ZTVN7android36AudioALSACodecDeviceOutExtSpeakerAmpE;

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager15OpenBackMicPathEv */
/* Demangled: android::AudioALSAHardwareResourceManager::OpenBackMicPath() */
int _ZN7android32AudioALSAHardwareResourceManager15OpenBackMicPathEv(void);

/* Symbol: delete_aurisys_lib_manager */
/* Demangled: delete_aurisys_lib_manager */
int delete_aurisys_lib_manager(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderDspRaw10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderDspRaw::readThread(void*) */
int _ZN7android34AudioALSACaptureDataProviderDspRaw10readThreadEPv(void);

/* Symbol: _ZN7android29AudioALSASampleRateController17setScenarioStatusENS_24playback_scenario_mask_tE */
/* Demangled: android::AudioALSASampleRateController::setScenarioStatus(android::playback_scenario_mask_t) */
int _ZN7android29AudioALSASampleRateController17setScenarioStatusENS_24playback_scenario_mask_tE(void);

/* Symbol: _ZN7android20GainTableParamParser17loadGainTableSpecEv */
/* Demangled: android::GainTableParamParser::loadGainTableSpec() */
int _ZN7android20GainTableParamParser17loadGainTableSpecEv(void);

/* Symbol: _ZN7android17SpeechDriverDummy19SetUplinkSourceMuteEb */
/* Demangled: android::SpeechDriverDummy::SetUplinkSourceMute(bool) */
int _ZN7android17SpeechDriverDummy19SetUplinkSourceMuteEb(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase16doPostProcessingEPvjPS1_Pj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::doPostProcessing(void*, unsigned int, void**, unsigned int*) */
int _ZN7android28AudioALSAPlaybackHandlerBase16doPostProcessingEPvjPS1_Pj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl26AudioExtMDCVSDDeleteThreadEv */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDDeleteThread() */
int _ZN7android18AudioBTCVSDControl26AudioExtMDCVSDDeleteThreadEv(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerVOWC1EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerVOW::AudioALSACaptureHandlerVOW(stream_attribute_t*) */
int _ZN7android26AudioALSACaptureHandlerVOWC1EP18stream_attribute_t(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderHAP32mAudioALSACaptureDataProviderHAPE */
/* Demangled: android::AudioALSACaptureDataProviderHAP::mAudioALSACaptureDataProviderHAP */
extern void* _ZN7android31AudioALSACaptureDataProviderHAP32mAudioALSACaptureDataProviderHAPE;

/* Symbol: _ZN7android18AudioALSAStreamOut13getParametersERKNS_7String8E */
/* Demangled: android::AudioALSAStreamOut::getParameters(android::String8 const&) */
int _ZN7android18AudioALSAStreamOut13getParametersERKNS_7String8E(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamOut*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android8AudioFtm15LouderSPKOCTestEcc */
/* Demangled: android::AudioFtm::LouderSPKOCTest(char, char) */
int _ZN7android8AudioFtm15LouderSPKOCTestEcc(void);

/* Symbol: _ZNK7android28AudioALSAPlaybackHandlerBase16bufferSizeTimeUsEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::bufferSizeTimeUs() const */
int _ZNK7android28AudioALSAPlaybackHandlerBase16bufferSizeTimeUsEv(void);

/* Symbol: _ZN7android17AudioALSAHardware13getParametersERKNS_7String8E */
/* Demangled: android::AudioALSAHardware::getParameters(android::String8 const&) */
int _ZN7android17AudioALSAHardware13getParametersERKNS_7String8E(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerNormalC2EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerNormal::AudioALSACaptureHandlerNormal(stream_attribute_t*) */
int _ZN7android29AudioALSACaptureHandlerNormalC2EP18stream_attribute_t(void);

/* Symbol: _ZN7android32AudioALSACaptureDataClientSyncIO4readEPvi */
/* Demangled: android::AudioALSACaptureDataClientSyncIO::read(void*, int) */
int _ZN7android32AudioALSACaptureDataClientSyncIO4readEPvi(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderVoiceMix32provideModemRecordDataToProviderENS_7RingBufE */
/* Demangled: android::AudioALSACaptureDataProviderVoiceMix::provideModemRecordDataToProvider(android::RingBuf) */
int _ZN7android36AudioALSACaptureDataProviderVoiceMix32provideModemRecordDataToProviderENS_7RingBufE(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManagerC2Ev */
/* Demangled: android::AudioALSADeviceConfigManager::AudioALSADeviceConfigManager() */
int _ZN7android28AudioALSADeviceConfigManagerC2Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread30ExtMD_btsco_cvsd_DL_Write_mainEv */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDThread::ExtMD_btsco_cvsd_DL_Write_main() */
int _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread30ExtMD_btsco_cvsd_DL_Write_mainEv(void);

/* Symbol: _ZN7android29AudioALSACaptureDataClientDsp18configDSPAttributeEv */
/* Demangled: android::AudioALSACaptureDataClientDsp::configDSPAttribute() */
int _ZN7android29AudioALSACaptureDataClientDsp18configDSPAttributeEv(void);

/* Symbol: _ZN7android22AudioMTKGainController17GetDigitalLogGainEij19audio_stream_type_t */
/* Demangled: android::AudioMTKGainController::GetDigitalLogGain(int, unsigned int, audio_stream_type_t) */
int _ZN7android22AudioMTKGainController17GetDigitalLogGainEij19audio_stream_type_t(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerNormalD0Ev */
/* Demangled: android::AudioALSACaptureHandlerNormal::~AudioALSACaptureHandlerNormal() */
int _ZN7android29AudioALSACaptureHandlerNormalD0Ev(void);

/* Symbol: _ZN7android28AudioALSACaptureHandlerVoice4initEv */
/* Demangled: android::AudioALSACaptureHandlerVoice::init() */
int _ZN7android28AudioALSACaptureHandlerVoice4initEv(void);

/* Symbol: _ZN7android8SPELayer20EnableNormalModeVoIPEb */
/* Demangled: android::SPELayer::EnableNormalModeVoIP(bool) */
int _ZN7android8SPELayer20EnableNormalModeVoIPEb(void);

/* Symbol: _ZN7android19AudioALSAParamTuner18enableDMNRAtApSideEbbtt */
/* Demangled: android::AudioALSAParamTuner::enableDMNRAtApSide(bool, bool, unsigned short, unsigned short) */
int _ZN7android19AudioALSAParamTuner18enableDMNRAtApSideEbbtt(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE32__parse_one_char_or_coll_elem_REINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_one_char_or_coll_elem_RE<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE32__parse_one_char_or_coll_elem_REINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: init_aurisys_xml_handler */
/* Demangled: init_aurisys_xml_handler */
int init_aurisys_xml_handler(void);

/* Symbol: destroy_audio_pool_buf */
/* Demangled: destroy_audio_pool_buf */
int destroy_audio_pool_buf(void);

/* Symbol: _ZN7android20AudioOpendumpPCMFileEPKcS1_ */
/* Demangled: android::AudioOpendumpPCMFile(char const*, char const*) */
int _ZN7android20AudioOpendumpPCMFileEPKcS1_(void);

/* Symbol: _ZN7android19SpeechShareMemGen9515openShareMemoryENS_13modem_index_tE */
/* Demangled: android::SpeechShareMemGen95::openShareMemory(android::modem_index_t) */
int _ZN7android19SpeechShareMemGen9515openShareMemoryENS_13modem_index_tE(void);

/* Symbol: _ZN7android16findEnumByStringEPKNS_17enum_to_str_tableEPKcPj */
/* Demangled: android::findEnumByString(android::enum_to_str_table const*, char const*, unsigned int*) */
int _ZN7android16findEnumByStringEPKNS_17enum_to_str_tableEPKcPj(void);

/* Symbol: get_sw_mixer_log_mask */
/* Demangled: get_sw_mixer_log_mask */
int get_sw_mixer_log_mask(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager17setSgenSampleRateE22sgen_mode_samplerate_t */
/* Demangled: android::AudioALSAHardwareResourceManager::setSgenSampleRate(sgen_mode_samplerate_t) */
int _ZN7android32AudioALSAHardwareResourceManager17setSgenSampleRateE22sgen_mode_samplerate_t(void);

/* Symbol: _ZN7android21AudioDspStreamManagerD1Ev */
/* Demangled: android::AudioDspStreamManager::~AudioDspStreamManager() */
int _ZN7android21AudioDspStreamManagerD1Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager29setAudioZoomLevelKeyValuePairERKNS_7String8E */
/* Demangled: android::AudioALSAStreamManager::setAudioZoomLevelKeyValuePair(android::String8 const&) */
int _ZN7android22AudioALSAStreamManager29setAudioZoomLevelKeyValuePairERKNS_7String8E(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager17HpImpeDanceDetectEv */
/* Demangled: android::AudioALSAHardwareResourceManager::HpImpeDanceDetect() */
int _ZN7android32AudioALSAHardwareResourceManager17HpImpeDanceDetectEv(void);

/* Symbol: _ZN7android27AudioALSALoopbackController23IsAPBTLoopbackWithCodecEv */
/* Demangled: android::AudioALSALoopbackController::IsAPBTLoopbackWithCodec() */
int _ZN7android27AudioALSALoopbackController23IsAPBTLoopbackWithCodecEv(void);

/* Symbol: _ZNK7android17AudioALSAStreamIn6formatEv */
/* Demangled: android::AudioALSAStreamIn::format() const */
int _ZNK7android17AudioALSAStreamIn6formatEv(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer10getLatencyEv */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::getLatency() */
int _ZN7android29AudioALSAPlaybackHandlerMixer10getLatencyEv(void);

/* Symbol: _ZN7android24CVSDLoopbackReadDataDoneEj */
/* Demangled: android::CVSDLoopbackReadDataDone(unsigned int) */
int _ZN7android24CVSDLoopbackReadDataDoneEj(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderBTSCOD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderBTSCO::~AudioALSACaptureDataProviderBTSCO() */
int _ZN7android33AudioALSACaptureDataProviderBTSCOD0Ev(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager16setAudioZoomFlagEb */
/* Demangled: android::AudioALSAHardwareResourceManager::setAudioZoomFlag(bool) */
int _ZN7android32AudioALSAHardwareResourceManager16setAudioZoomFlagEb(void);

/* Symbol: _ZN7android18SpeechDriverNormal13configMailBoxEPNS_9sph_msg_tEttj */
/* Demangled: android::SpeechDriverNormal::configMailBox(android::sph_msg_t*, unsigned short, unsigned short, unsigned int) */
int _ZN7android18SpeechDriverNormal13configMailBoxEPNS_9sph_msg_tEttj(void);

/* Symbol: _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCO5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTSCO::close() */
int _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCO5closeEv(void);

/* Symbol: get_dedicated_format_from_mask */
/* Demangled: get_dedicated_format_from_mask */
int get_dedicated_format_from_mask(void);

/* Symbol: audio_hal_con_thread_exit */
/* Demangled: audio_hal_con_thread_exit */
int audio_hal_con_thread_exit(void);

/* Symbol: _ZN7android22AudioALSAStreamManager10setMicMuteEb */
/* Demangled: android::AudioALSAStreamManager::setMicMute(bool) */
int _ZN7android22AudioALSAStreamManager10setMicMuteEb(void);

/* Symbol: _ZN7android16AudioBitTrueTest5closeEv */
/* Demangled: android::AudioBitTrueTest::close() */
int _ZN7android16AudioBitTrueTest5closeEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase30doStereoToMonoConversionIfNeedEPvj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::doStereoToMonoConversionIfNeed(void*, unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerBase30doStereoToMonoConversionIfNeedEPvj(void);

/* Symbol: _ZN7android12AudioFtmBaseC2Ev */
/* Demangled: android::AudioFtmBase::AudioFtmBase() */
int _ZN7android12AudioFtmBaseC2Ev(void);

/* Symbol: _ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPKcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SB_c */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__lookup_collatename<char const*>(char const*, char const*, char) const */
int _ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPKcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SB_c(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_QUOTED_CHAR_EREIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_QUOTED_CHAR_ERE<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_QUOTED_CHAR_EREIPKcEET_S7_S7_(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController18getUSBCallInDeviceEv */
/* Demangled: android::AudioUSBPhoneCallController::getUSBCallInDevice() */
int _ZN7android27AudioUSBPhoneCallController18getUSBCallInDeviceEv(void);

/* Symbol: _ZN7android20SpeechPcmMixerVoipRx11GetInstanceEv */
/* Demangled: android::SpeechPcmMixerVoipRx::GetInstance() */
int _ZN7android20SpeechPcmMixerVoipRx11GetInstanceEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP13processDmaMsgEP9ipi_msg_tPvjS3_ */
/* Demangled: android::SpeechDriverOpenDSP::processDmaMsg(ipi_msg_t*, void*, unsigned int, void*) */
int _ZN7android19SpeechDriverOpenDSP13processDmaMsgEP9ipi_msg_tPvjS3_(void);

/* Symbol: _ZN25AudioMTKStreamInInterfaceD1Ev */
/* Demangled: AudioMTKStreamInInterface::~AudioMTKStreamInInterface() */
int _ZN25AudioMTKStreamInInterfaceD1Ev(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerSyncIO4readEPvi */
/* Demangled: android::AudioALSACaptureHandlerSyncIO::read(void*, int) */
int _ZN7android29AudioALSACaptureHandlerSyncIO4readEPvi(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClientD2Ev */
/* Demangled: android::AudioALSACaptureDataClient::~AudioALSACaptureDataClient() */
int _ZN7android26AudioALSACaptureDataClientD2Ev(void);

/* Symbol: _ZTVN7android18SpeechMessageQueueE */
/* Demangled: vtable for android::SpeechMessageQueue */
extern void* _ZTVN7android18SpeechMessageQueueE;

/* Symbol: _ZTVNSt3__118__back_ref_collateIcNS_12regex_traitsIcEEEE */
/* Demangled: vtable for std::__1::__back_ref_collate<char, std::__1::regex_traits<char> > */
extern void* _ZTVNSt3__118__back_ref_collateIcNS_12regex_traitsIcEEEE;

/* Symbol: _ZN7android35AudioALSACodecDeviceOutEarphonePMIC5closeEv */
/* Demangled: android::AudioALSACodecDeviceOutEarphonePMIC::close() */
int _ZN7android35AudioALSACodecDeviceOutEarphonePMIC5closeEv(void);

/* Symbol: _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitchC1Ev */
/* Demangled: android::AudioALSACodecDeviceOutReceiverSpeakerSwitch::AudioALSACodecDeviceOutReceiverSpeakerSwitch() */
int _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitchC1Ev(void);

/* Symbol: _ZN7android21SpeechMessengerNormalC1ENS_13modem_index_tE */
/* Demangled: android::SpeechMessengerNormal::SpeechMessengerNormal(android::modem_index_t) */
int _ZN7android21SpeechMessengerNormalC1ENS_13modem_index_tE(void);

/* Symbol: _ZN7android18SpeechMessageQueueD1Ev */
/* Demangled: android::SpeechMessageQueue::~SpeechMessageQueue() */
int _ZN7android18SpeechMessageQueueD1Ev(void);

/* Symbol: _ZN7android17SpeechDriverDummy9BGSoundOnEv */
/* Demangled: android::SpeechDriverDummy::BGSoundOn() */
int _ZN7android17SpeechDriverDummy9BGSoundOnEv(void);

/* Symbol: _ZTSNSt3__111regex_errorE */
/* Demangled: typeinfo name for std::__1::regex_error */
extern void* _ZTSNSt3__111regex_errorE;

/* Symbol: get_aurisys_on */
/* Demangled: get_aurisys_on */
int get_aurisys_on(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController14updateVadParamEv */
/* Demangled: android::AudioALSAVoiceWakeUpController::updateVadParam() */
int _ZN7android30AudioALSAVoiceWakeUpController14updateVadParamEv(void);

/* Symbol: _ZN7android22AudioMTKGainController17SetHeadPhoneRGainEi */
/* Demangled: android::AudioMTKGainController::SetHeadPhoneRGain(int) */
int _ZN7android22AudioMTKGainController17SetHeadPhoneRGainEi(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManager19ParseDeviceSequenceEP12TiXmlElement */
/* Demangled: android::AudioALSADeviceConfigManager::ParseDeviceSequence(TiXmlElement*) */
int _ZN7android28AudioALSADeviceConfigManager19ParseDeviceSequenceEP12TiXmlElement(void);

/* Symbol: _ZN7android17AudioDspCallFinal22setCallFinalRefruntimeEb */
/* Demangled: android::AudioDspCallFinal::setCallFinalRefruntime(bool) */
int _ZN7android17AudioDspCallFinal22setCallFinalRefruntimeEb(void);

/* Symbol: _ZN7android21SpeechMessengerNormalD1Ev */
/* Demangled: android::SpeechMessengerNormal::~SpeechMessengerNormal() */
int _ZN7android21SpeechMessengerNormalD1Ev(void);

/* Symbol: _ZNK7android34AudioALSASpeechPhoneCallController25checkSideToneFilterNeedOnEj */
/* Demangled: android::AudioALSASpeechPhoneCallController::checkSideToneFilterNeedOn(unsigned int) const */
int _ZNK7android34AudioALSASpeechPhoneCallController25checkSideToneFilterNeedOnEj(void);

/* Symbol: _ZN7android11isAudioFOOnEPKc */
/* Demangled: android::isAudioFOOn(char const*) */
int _ZN7android11isAudioFOOnEPKc(void);

/* Symbol: _ZN7android18SpeechDriverNormal14GetVibSpkParamEPv */
/* Demangled: android::SpeechDriverNormal::GetVibSpkParam(void*) */
int _ZN7android18SpeechDriverNormal14GetVibSpkParamEPv(void);

/* Symbol: _ZN7android20GainTableParamParser25updatePlaybackDigitalGainEP14GainTableParamPNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE */
/* Demangled: android::GainTableParamParser::updatePlaybackDigitalGain(GainTableParam*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN7android20GainTableParamParser25updatePlaybackDigitalGainEP14GainTableParamPNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE(void);

/* Symbol: _ZNK7android6VectorIP7__sFILEE8do_splatEPvPKvj */
/* Demangled: android::Vector<__sFILE*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP7__sFILEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo14GetBesRecSceneEv */
/* Demangled: android::AudioSpeechEnhanceInfo::GetBesRecScene() */
int _ZN7android22AudioSpeechEnhanceInfo14GetBesRecSceneEv(void);

/* Symbol: _ZN7android16SpeechVMRecorder8configVmEh */
/* Demangled: android::SpeechVMRecorder::configVm(unsigned char) */
int _ZN7android16SpeechVMRecorder8configVmEh(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient23copyCaptureDataToClientENS_7RingBufE */
/* Demangled: android::AudioALSACaptureDataClient::copyCaptureDataToClient(android::RingBuf) */
int _ZN7android26AudioALSACaptureDataClient23copyCaptureDataToClientENS_7RingBufE(void);

/* Symbol: aurisys_lib_manager_c_file_deinit */
/* Demangled: aurisys_lib_manager_c_file_deinit */
int aurisys_lib_manager_c_file_deinit(void);

/* Symbol: _ZN7android22AudioSmartPaController20transformDeviceIndexEj */
/* Demangled: android::AudioSmartPaController::transformDeviceIndex(unsigned int) */
int _ZN7android22AudioSmartPaController20transformDeviceIndexEj(void);

/* Symbol: _ZN7android22AudioMTKGainController19setVoiceVolumeIndexEi */
/* Demangled: android::AudioMTKGainController::setVoiceVolumeIndex(int) */
int _ZN7android22AudioMTKGainController19setVoiceVolumeIndexEi(void);

/* Symbol: _ZN7android18AudioBTCVSDControl21btsco_process_RX_CVSDEPvPjS1_S2_S1_jh */
/* Demangled: android::AudioBTCVSDControl::btsco_process_RX_CVSD(void*, unsigned int*, void*, unsigned int*, void*, unsigned int, unsigned char) */
int _ZN7android18AudioBTCVSDControl21btsco_process_RX_CVSDEPvPjS1_S2_S1_jh(void);

/* Symbol: _ZN7android17AudioALSAStreamIn13setParametersERKNS_7String8E */
/* Demangled: android::AudioALSAStreamIn::setParameters(android::String8 const&) */
int _ZN7android17AudioALSAStreamIn13setParametersERKNS_7String8E(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtvD1Ev */
/* Demangled: android::AudioALSAHandlerKtv::~AudioALSAHandlerKtv() */
int _ZN7android19AudioALSAHandlerKtvD1Ev(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixerC2EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::AudioALSAPlaybackHandlerMixer(stream_attribute_t const*) */
int _ZN7android29AudioALSAPlaybackHandlerMixerC2EPK18stream_attribute_t(void);

/* Symbol: _ZN7android18SpeechDriverNormal22waitModemAckAfterApDieEv */
/* Demangled: android::SpeechDriverNormal::waitModemAckAfterApDie() */
int _ZN7android18SpeechDriverNormal22waitModemAckAfterApDieEv(void);

/* Symbol: aurisys_get_parameter */
/* Demangled: aurisys_get_parameter */
int aurisys_get_parameter(void);

/* Symbol: _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadD1Ev */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDThread::~AudioExtMDCVSDThread() */
int _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadD1Ev(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager18getDbFromAnalogIdxEjPa */
/* Demangled: android::AudioALSAHyBridNLEManager::getDbFromAnalogIdx(unsigned int, signed char*) */
int _ZN7android25AudioALSAHyBridNLEManager18getDbFromAnalogIdxEjPa(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerDspC2EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerDsp::AudioALSACaptureHandlerDsp(stream_attribute_t*) */
int _ZN7android26AudioALSACaptureHandlerDspC2EP18stream_attribute_t(void);

/* Symbol: _ZN7android20GainTableParamParser8getParamI13GAIN_ANA_TYPEEEiP10_ParamUnitPT_PKc */
/* Demangled: int android::GainTableParamParser::getParam<GAIN_ANA_TYPE>(_ParamUnit*, GAIN_ANA_TYPE*, char const*) */
int _ZN7android20GainTableParamParser8getParamI13GAIN_ANA_TYPEEEiP10_ParamUnitPT_PKc(void);

/* Symbol: _ZNKSt3__118__back_ref_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__back_ref_collate<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__118__back_ref_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android18AudioVIBSPKControlC2Ev */
/* Demangled: android::AudioVIBSPKControl::AudioVIBSPKControl() */
int _ZN7android18AudioVIBSPKControlC2Ev(void);

/* Symbol: _ZN7android17AudioDspCallFinal32CreateAurisysLibManagerCallFinalEv */
/* Demangled: android::AudioDspCallFinal::CreateAurisysLibManagerCallFinal() */
int _ZN7android17AudioDspCallFinal32CreateAurisysLibManagerCallFinalEv(void);

/* Symbol: _ZNKSt3__111__lookaheadIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__lookahead<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__111__lookaheadIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZTv0_n16_N7android18AudioBTCVSDControl20AudioExtMDCVSDThread10onFirstRefEv */
/* Demangled: virtual thunk to android::AudioBTCVSDControl::AudioExtMDCVSDThread::onFirstRef() */
int _ZTv0_n16_N7android18AudioBTCVSDControl20AudioExtMDCVSDThread10onFirstRefEv(void);

/* Symbol: _ZN7android24get_uint32_from_propertyEPKc */
/* Demangled: android::get_uint32_from_property(char const*) */
int _ZN7android24get_uint32_from_propertyEPKc(void);

/* Symbol: _ZN7android18SpeechDriverNormal13eCallPsapSendEv */
/* Demangled: android::SpeechDriverNormal::eCallPsapSend() */
int _ZN7android18SpeechDriverNormal13eCallPsapSendEv(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp4stopEv */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::stop() */
int _ZN7android27AudioALSAPlaybackHandlerDsp4stopEv(void);

/* Symbol: _ZN7android18SpeechDriverNormalD0Ev */
/* Demangled: android::SpeechDriverNormal::~SpeechDriverNormal() */
int _ZN7android18SpeechDriverNormalD0Ev(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient19GetCaptureTimeStampEv */
/* Demangled: android::AudioALSACaptureDataClient::GetCaptureTimeStamp() */
int _ZN7android26AudioALSACaptureDataClient19GetCaptureTimeStampEv(void);

/* Symbol: _ZN7android16mDumpBufferQueueE */
/* Demangled: android::mDumpBufferQueue */
extern void* _ZN7android16mDumpBufferQueueE;

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController10setRttModeEi */
/* Demangled: android::AudioALSASpeechPhoneCallController::setRttMode(int) */
int _ZN7android34AudioALSASpeechPhoneCallController10setRttModeEi(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDspC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderDsp::AudioALSACaptureDataProviderDsp() */
int _ZN7android31AudioALSACaptureDataProviderDspC2Ev(void);

/* Symbol: _ZN7android22AudioSmartPaController23mAudioSmartPaControllerE */
/* Demangled: android::AudioSmartPaController::mAudioSmartPaController */
extern void* _ZN7android22AudioSmartPaController23mAudioSmartPaControllerE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN7android11MixerTargetEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS4_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::MixerTarget*> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, android::MixerTarget*> >(unsigned int const&, std::__1::pair<unsigned int const, android::MixerTarget*>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN7android11MixerTargetEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS4_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP8SpeechOnEv */
/* Demangled: android::SpeechDriverOpenDSP::SpeechOn() */
int _ZN7android19SpeechDriverOpenDSP8SpeechOnEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager11setSgenMuteEib */
/* Demangled: android::AudioALSAHardwareResourceManager::setSgenMute(int, bool) */
int _ZN7android32AudioALSAHardwareResourceManager11setSgenMuteEib(void);

/* Symbol: get_string_by_enum_aurisys_scenario */
/* Demangled: get_string_by_enum_aurisys_scenario */
int get_string_by_enum_aurisys_scenario(void);

/* Symbol: _ZN7android37AudioALSAPlaybackHandlerFMTransmitter7routingEj */
/* Demangled: android::AudioALSAPlaybackHandlerFMTransmitter::routing(unsigned int) */
int _ZN7android37AudioALSAPlaybackHandlerFMTransmitter7routingEj(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager20enableTurnOnSequenceENS_7String8E */
/* Demangled: android::AudioALSAHardwareResourceManager::enableTurnOnSequence(android::String8) */
int _ZN7android32AudioALSAHardwareResourceManager20enableTurnOnSequenceENS_7String8E(void);

/* Symbol: _ZN7android16SpeechExtMemCCCID1Ev */
/* Demangled: android::SpeechExtMemCCCI::~SpeechExtMemCCCI() */
int _ZN7android16SpeechExtMemCCCID1Ev(void);

/* Symbol: _ZN7android8Play2WayC2Ev */
/* Demangled: android::Play2Way::Play2Way() */
int _ZN7android8Play2WayC2Ev(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE19__parse_QUOTED_CHARIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_QUOTED_CHAR<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE19__parse_QUOTED_CHARIPKcEET_S7_S7_(void);

/* Symbol: _ZN7android18SpeechDriverNormal8recordOnENS_19SpcRecordTypeStructE */
/* Demangled: android::SpeechDriverNormal::recordOn(android::SpcRecordTypeStruct) */
int _ZN7android18SpeechDriverNormal8recordOnENS_19SpcRecordTypeStructE(void);

/* Symbol: _ZN7android22AudioMTKGainController14updateXmlParamEPKc */
/* Demangled: android::AudioMTKGainController::updateXmlParam(char const*) */
int _ZN7android22AudioMTKGainController14updateXmlParamEPKc(void);

/* Symbol: _ZN7android27AudioALSALoopbackControllerD0Ev */
/* Demangled: android::AudioALSALoopbackController::~AudioALSALoopbackController() */
int _ZN7android27AudioALSALoopbackControllerD0Ev(void);

/* Symbol: _ZN7android20SpeechPcmMixerVoipRx11pcmMixerOffEPNS_21SpeechDriverInterfaceE */
/* Demangled: android::SpeechPcmMixerVoipRx::pcmMixerOff(android::SpeechDriverInterface*) */
int _ZN7android20SpeechPcmMixerVoipRx11pcmMixerOffEPNS_21SpeechDriverInterfaceE(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderNormal35mAudioALSACaptureDataProviderNormalE */
/* Demangled: android::AudioALSACaptureDataProviderNormal::mAudioALSACaptureDataProviderNormal */
extern void* _ZN7android34AudioALSACaptureDataProviderNormal35mAudioALSACaptureDataProviderNormalE;

/* Symbol: _ZN7android34AudioALSACodecDeviceOutSpeakerPMICC1Ev */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerPMIC::AudioALSACodecDeviceOutSpeakerPMIC() */
int _ZN7android34AudioALSACodecDeviceOutSpeakerPMICC1Ev(void);

/* Symbol: _ZN7android19DeviceCtlDescriptorC1Ev */
/* Demangled: android::DeviceCtlDescriptor::DeviceCtlDescriptor() */
int _ZN7android19DeviceCtlDescriptorC1Ev(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager13waitForBypassENS_25audio_hybridnlemng_statusES1_ */
/* Demangled: android::AudioALSAHyBridNLEManager::waitForBypass(android::audio_hybridnlemng_status, android::audio_hybridnlemng_status) */
int _ZN7android25AudioALSAHyBridNLEManager13waitForBypassENS_25audio_hybridnlemng_statusES1_(void);

/* Symbol: _ZN7android29keypcmPlaybackDspDataProviderE */
/* Demangled: android::keypcmPlaybackDspDataProvider */
extern void* _ZN7android29keypcmPlaybackDspDataProviderE;

/* Symbol: _ZN7android26AudioALSACaptureHandlerDsp4openEv */
/* Demangled: android::AudioALSACaptureHandlerDsp::open() */
int _ZN7android26AudioALSACaptureHandlerDsp4openEv(void);

/* Symbol: _ZN7android30AudioALSACaptureHandlerFMRadio4initEv */
/* Demangled: android::AudioALSACaptureHandlerFMRadio::init() */
int _ZN7android30AudioALSACaptureHandlerFMRadio4initEv(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderFMRadioC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderFMRadio::AudioALSACaptureDataProviderFMRadio() */
int _ZN7android35AudioALSACaptureDataProviderFMRadioC1Ev(void);

/* Symbol: _ZTVN7android28AudioALSADeviceConfigManagerE */
/* Demangled: vtable for android::AudioALSADeviceConfigManager */
extern void* _ZTVN7android28AudioALSADeviceConfigManagerE;

/* Symbol: get_mono_time_us */
/* Demangled: get_mono_time_us */
int get_mono_time_us(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload17setAfeDspSharememEb */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::setAfeDspSharemem(bool) */
int _ZN7android31AudioALSAPlaybackHandlerOffload17setAfeDspSharememEb(void);

/* Symbol: _ZTVN7android19AudioALSAHandlerKtvE */
/* Demangled: vtable for android::AudioALSAHandlerKtv */
extern void* _ZTVN7android19AudioALSAHandlerKtvE;

/* Symbol: _ZN7android18SpeechDriverNormal24SetModemSideSamplingRateEt */
/* Demangled: android::SpeechDriverNormal::SetModemSideSamplingRate(unsigned short) */
int _ZN7android18SpeechDriverNormal24SetModemSideSamplingRateEt(void);

/* Symbol: _ZN7android20GainTableParamParserC2Ev */
/* Demangled: android::GainTableParamParser::GainTableParamParser() */
int _ZN7android20GainTableParamParserC2Ev(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal12getPcmStatusEv */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::getPcmStatus() */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal12getPcmStatusEv(void);

/* Symbol: _ZN7android23RingBuf_copyFromRingBufEPNS_7RingBufES1_i */
/* Demangled: android::RingBuf_copyFromRingBuf(android::RingBuf*, android::RingBuf*, int) */
int _ZN7android23RingBuf_copyFromRingBufEPNS_7RingBufES1_i(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController22getAdjustedInputDeviceEv */
/* Demangled: android::AudioALSASpeechPhoneCallController::getAdjustedInputDevice() */
int _ZN7android34AudioALSASpeechPhoneCallController22getAdjustedInputDeviceEv(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerVoice5closeEv */
/* Demangled: android::AudioALSAPlaybackHandlerVoice::close() */
int _ZN7android29AudioALSAPlaybackHandlerVoice5closeEv(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerBTCVSD7routingEj */
/* Demangled: android::AudioALSAPlaybackHandlerBTCVSD::routing(unsigned int) */
int _ZN7android30AudioALSAPlaybackHandlerBTCVSD7routingEj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread29ExtMD_btsco_cvsd_DL_Read_mainEv */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDThread::ExtMD_btsco_cvsd_DL_Read_main() */
int _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread29ExtMD_btsco_cvsd_DL_Read_mainEv(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderModemDai11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderModemDai::getInstance() */
int _ZN7android36AudioALSACaptureDataProviderModemDai11getInstanceEv(void);

/* Symbol: _ZN7android19SpeechDriverFactory11GetInstanceEv */
/* Demangled: android::SpeechDriverFactory::GetInstance() */
int _ZN7android19SpeechDriverFactory11GetInstanceEv(void);

/* Symbol: _ZN7android21IsAudioSupportFeatureEi */
/* Demangled: android::IsAudioSupportFeature(int) */
int _ZN7android21IsAudioSupportFeatureEi(void);

/* Symbol: _ZN7android20GainTableParamParser15clearTableParamEP14GainTableParami */
/* Demangled: android::GainTableParamParser::clearTableParam(GainTableParam*, int) */
int _ZN7android20GainTableParamParser15clearTableParamEP14GainTableParami(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager18removeHwPathStreamENS_20audio_stream_hw_pathE */
/* Demangled: android::AudioALSAHyBridNLEManager::removeHwPathStream(android::audio_stream_hw_path) */
int _ZN7android25AudioALSAHyBridNLEManager18removeHwPathStreamENS_20audio_stream_hw_pathE(void);

/* Symbol: _ZN7android22AudioALSAStreamManager23getPhoncallOutputDeviceEv */
/* Demangled: android::AudioALSAStreamManager::getPhoncallOutputDevice() */
int _ZN7android22AudioALSAStreamManager23getPhoncallOutputDeviceEv(void);

/* Symbol: audio_ringbuf_write_zero */
/* Demangled: audio_ringbuf_write_zero */
int audio_ringbuf_write_zero(void);

/* Symbol: _ZN7android21AudioDspStreamManager20updateSourceMetadataEPK15source_metadata */
/* Demangled: android::AudioDspStreamManager::updateSourceMetadata(source_metadata const*) */
int _ZN7android21AudioDspStreamManager20updateSourceMetadataEPK15source_metadata(void);

/* Symbol: _ZN7android19SpeechShareMemGen9512getMdVersionEv */
/* Demangled: android::SpeechShareMemGen95::getMdVersion() */
int _ZN7android19SpeechShareMemGen9512getMdVersionEv(void);

/* Symbol: _ZN7android20GainTableParamParser24updatePlaybackAnalogGainEP14GainTableParamPNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE */
/* Demangled: android::GainTableParamParser::updatePlaybackAnalogGain(GainTableParam*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN7android20GainTableParamParser24updatePlaybackAnalogGainEP14GainTableParamPNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE(void);

/* Symbol: _ZN7android17WCNChipController11IsSupportFMEv */
/* Demangled: android::WCNChipController::IsSupportFM() */
int _ZN7android17WCNChipController11IsSupportFMEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*>&>::push_back(std::__1::__state<char>*&&) */
int _ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase21get_task_pcmdump_infoEjjPPv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::get_task_pcmdump_info(unsigned int, unsigned int, void**) */
int _ZN7android28AudioALSAPlaybackHandlerBase21get_task_pcmdump_infoEjjPPv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEE15do_move_forwardES2_PKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<void*, android::IAudioALSACaptureDataClient*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEE15do_move_forwardES2_PKvj(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderUsbC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderUsb::AudioALSACaptureDataProviderUsb() */
int _ZN7android31AudioALSACaptureDataProviderUsbC1Ev(void);

/* Symbol: audio_pool_buf_formatter_process */
/* Demangled: audio_pool_buf_formatter_process */
int audio_pool_buf_formatter_process(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerDsp7routingEj */
/* Demangled: android::AudioALSACaptureHandlerDsp::routing(unsigned int) */
int _ZN7android26AudioALSACaptureHandlerDsp7routingEj(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload21setOffloadRoutingFlagEb */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::setOffloadRoutingFlag(bool) */
int _ZN7android31AudioALSAPlaybackHandlerOffload21setOffloadRoutingFlagEb(void);

/* Symbol: _ZN7android8SPELayer11SetAPPTableENS_8SPE_MODEENS_13SPE_APP_TABLEE */
/* Demangled: android::SPELayer::SetAPPTable(android::SPE_MODE, android::SPE_APP_TABLE) */
int _ZN7android8SPELayer11SetAPPTableENS_8SPE_MODEENS_13SPE_APP_TABLEE(void);

/* Symbol: _ZTVN7android26AudioALSACaptureHandlerDspE */
/* Demangled: vtable for android::AudioALSACaptureHandlerDsp */
extern void* _ZTVN7android26AudioALSACaptureHandlerDspE;

/* Symbol: _ZN7android16SpeechExtMemCCCI21shm_region_free_spaceEPNS_13region_info_tE */
/* Demangled: android::SpeechExtMemCCCI::shm_region_free_space(android::region_info_t*) */
int _ZN7android16SpeechExtMemCCCI21shm_region_free_spaceEPNS_13region_info_tE(void);

/* Symbol: _ZNSt3__16vectorIsNS_9allocatorIsEEE6assignIPsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIsNS_9allocatorIsEEE6assignIPsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIsNS_9allocatorIsEEE6assignIPsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP13TtyCtmDebugOnEb */
/* Demangled: android::SpeechDriverOpenDSP::TtyCtmDebugOn(bool) */
int _ZN7android19SpeechDriverOpenDSP13TtyCtmDebugOnEb(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> > >::__append(unsigned int) */
int _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE8__appendEj(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager17isSharedOutDeviceEj */
/* Demangled: android::AudioALSAHardwareResourceManager::isSharedOutDevice(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager17isSharedOutDeviceEj(void);

/* Symbol: _ZN7android8AudioFtm18SpeakerCalibrationEi */
/* Demangled: android::AudioFtm::SpeakerCalibration(int) */
int _ZN7android8AudioFtm18SpeakerCalibrationEi(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderDspRaw10setApHwPcmEv */
/* Demangled: android::AudioALSACaptureDataProviderDspRaw::setApHwPcm() */
int _ZN7android34AudioALSACaptureDataProviderDspRaw10setApHwPcmEv(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtv12startKtvTaskEPK18stream_attribute_t */
/* Demangled: android::AudioALSAHandlerKtv::startKtvTask(stream_attribute_t const*) */
int _ZN7android19AudioALSAHandlerKtv12startKtvTaskEPK18stream_attribute_t(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal22AddEchoRefDataProviderEPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::AddEchoRefDataProvider(android::AudioALSACaptureDataProviderBase*, stream_attribute_t*) */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal22AddEchoRefDataProviderEPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t(void);

/* Symbol: _ZN7android11streaminOriE */
/* Demangled: android::streaminOri */
extern void* _ZN7android11streaminOriE;

/* Symbol: _ZN7android31AudioALSACaptureDataProviderANC11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderANC::getInstance() */
int _ZN7android31AudioALSACaptureDataProviderANC11getInstanceEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderUsb11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderUsb::getInstance() */
int _ZN7android31AudioALSACaptureDataProviderUsb11getInstanceEv(void);

/* Symbol: _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitchD2Ev */
/* Demangled: android::AudioALSACodecDeviceOutReceiverSpeakerSwitch::~AudioALSACodecDeviceOutReceiverSpeakerSwitch() */
int _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitchD2Ev(void);

/* Symbol: _ZN7android16AudioALSANLECtrl18writeToEachChannelEPvj */
/* Demangled: android::AudioALSANLECtrl::writeToEachChannel(void*, unsigned int) */
int _ZN7android16AudioALSANLECtrl18writeToEachChannelEPvj(void);

/* Symbol: _ZN7android21AudioDspStreamManager17getA2dpPcmLatencyEv */
/* Demangled: android::AudioDspStreamManager::getA2dpPcmLatency() */
int _ZN7android21AudioDspStreamManager17getA2dpPcmLatencyEv(void);

/* Symbol: _ZN7android17keypcmExtSpkMeidaE */
/* Demangled: android::keypcmExtSpkMeida */
extern void* _ZN7android17keypcmExtSpkMeidaE;

/* Symbol: _ZN7android18SpeechDriverNormal11sendPayloadEPNS_9sph_msg_tEttPvt */
/* Demangled: android::SpeechDriverNormal::sendPayload(android::sph_msg_t*, unsigned short, unsigned short, void*, unsigned short) */
int _ZN7android18SpeechDriverNormal11sendPayloadEPNS_9sph_msg_tEttPvt(void);

/* Symbol: _ZN7android8Play2Way16PutDataToSpeakerEPct */
/* Demangled: android::Play2Way::PutDataToSpeaker(char*, unsigned short) */
int _ZN7android8Play2Way16PutDataToSpeakerEPct(void);

/* Symbol: _ZN7android12SpeechConfig27getNameForEachSpeechNetworkEhPc */
/* Demangled: android::SpeechConfig::getNameForEachSpeechNetwork(unsigned char, char*) */
int _ZN7android12SpeechConfig27getNameForEachSpeechNetworkEhPc(void);

/* Symbol: _ZN7android20GainTableParamParser24loadGainTableHpImpedanceEv */
/* Demangled: android::GainTableParamParser::loadGainTableHpImpedance() */
int _ZN7android20GainTableParamParser24loadGainTableHpImpedanceEv(void);

/* Symbol: _ZNK7android21AudioALSAFMController23getFmUplinkSamplingRateEv */
/* Demangled: android::AudioALSAFMController::getFmUplinkSamplingRate() const */
int _ZNK7android21AudioALSAFMController23getFmUplinkSamplingRateEv(void);

/* Symbol: _ZN7android22MapVoiceVolumetoCustomEj */
/* Demangled: android::MapVoiceVolumetoCustom(unsigned int) */
int _ZN7android22MapVoiceVolumetoCustomEj(void);

/* Symbol: _ZN7android22AudioSmartPaController17getSpkProtectTypeEv */
/* Demangled: android::AudioSmartPaController::getSpkProtectType() */
int _ZN7android22AudioSmartPaController17getSpkProtectTypeEv(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer10setSuspendEb */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::setSuspend(bool) */
int _ZN7android29AudioALSAPlaybackHandlerMixer10setSuspendEb(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerBTSCOD1Ev */
/* Demangled: android::AudioALSAPlaybackHandlerBTSCO::~AudioALSAPlaybackHandlerBTSCO() */
int _ZN7android29AudioALSAPlaybackHandlerBTSCOD1Ev(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload18offload_initializeEv */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::offload_initialize() */
int _ZN7android31AudioALSAPlaybackHandlerOffload18offload_initializeEv(void);

/* Symbol: _ZN7android17SpeechDriverDummy15SetDownlinkGainEs */
/* Demangled: android::SpeechDriverDummy::SetDownlinkGain(short) */
int _ZN7android17SpeechDriverDummy15SetDownlinkGainEs(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager16setInterruptRateE20audio_output_flags_tj */
/* Demangled: android::AudioALSAHardwareResourceManager::setInterruptRate(audio_output_flags_t, unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager16setInterruptRateE20audio_output_flags_tj(void);

/* Symbol: _ZN7android18SpeechDriverNormal18processIpcLoopbackEv */
/* Demangled: android::SpeechDriverNormal::processIpcLoopback() */
int _ZN7android18SpeechDriverNormal18processIpcLoopbackEv(void);

/* Symbol: _ZN7android18SpeechMessageQueue10popElementEv */
/* Demangled: android::SpeechMessageQueue::popElement() */
int _ZN7android18SpeechMessageQueue10popElementEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl17BT_SCO_isWideBandEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_isWideBand() */
int _ZN7android18AudioBTCVSDControl17BT_SCO_isWideBandEv(void);

/* Symbol: _ZN7android21AudioALSADeviceParser24QueryPcmDriverCapabilityEv */
/* Demangled: android::AudioALSADeviceParser::QueryPcmDriverCapability() */
int _ZN7android21AudioALSADeviceParser24QueryPcmDriverCapabilityEv(void);

/* Symbol: _ZN7android16SpeechVMRecorder4openEv */
/* Demangled: android::SpeechVMRecorder::open() */
int _ZN7android16SpeechVMRecorder4openEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataClientSyncIOD1Ev */
/* Demangled: android::AudioALSACaptureDataClientSyncIO::~AudioALSACaptureDataClientSyncIO() */
int _ZN7android32AudioALSACaptureDataClientSyncIOD1Ev(void);

/* Symbol: parse_segment_in_string */
/* Demangled: parse_segment_in_string */
int parse_segment_in_string(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerHDMIC1EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerHDMI::AudioALSAPlaybackHandlerHDMI(stream_attribute_t const*) */
int _ZN7android28AudioALSAPlaybackHandlerHDMIC1EPK18stream_attribute_t(void);

/* Symbol: _ZN7android33AudioALSASpeechLoopbackController28OpenModemLoopbackControlFlowEjj */
/* Demangled: android::AudioALSASpeechLoopbackController::OpenModemLoopbackControlFlow(unsigned int, unsigned int) */
int _ZN7android33AudioALSASpeechLoopbackController28OpenModemLoopbackControlFlowEjj(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerAAudio5closeEv */
/* Demangled: android::AudioALSAPlaybackHandlerAAudio::close() */
int _ZN7android30AudioALSAPlaybackHandlerAAudio5closeEv(void);

/* Symbol: _ZN26AudioMTKStreamOutInterfaceD2Ev */
/* Demangled: AudioMTKStreamOutInterface::~AudioMTKStreamOutInterface() */
int _ZN26AudioMTKStreamOutInterfaceD2Ev(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerBTSCO5closeEv */
/* Demangled: android::AudioALSAPlaybackHandlerBTSCO::close() */
int _ZN7android29AudioALSAPlaybackHandlerBTSCO5closeEv(void);

/* Symbol: _ZN7android21AudioDspStreamManager16stopPlaybackTaskEv */
/* Demangled: android::AudioDspStreamManager::stopPlaybackTask() */
int _ZN7android21AudioDspStreamManager16stopPlaybackTaskEv(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer22openMixerSourceHandlerEv */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::openMixerSourceHandler() */
int _ZN7android29AudioALSAPlaybackHandlerMixer22openMixerSourceHandlerEv(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerNormalC1EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerNormal::AudioALSACaptureHandlerNormal(stream_attribute_t*) */
int _ZN7android29AudioALSACaptureHandlerNormalC1EP18stream_attribute_t(void);

/* Symbol: _ZN7android18AudioBTCVSDControl15BT_SCO_TX_CloseEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_TX_Close() */
int _ZN7android18AudioBTCVSDControl15BT_SCO_TX_CloseEv(void);

/* Symbol: _ZN7android27SpeechDataProcessingHandlerC1Ev */
/* Demangled: android::SpeechDataProcessingHandler::SpeechDataProcessingHandler() */
int _ZN7android27SpeechDataProcessingHandlerC1Ev(void);

/* Symbol: _ZTCN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadE0_NS_6ThreadE */
/* Demangled: construction vtable for android::Thread-in-android::AudioBTCVSDControl::AudioExtMDCVSDThread */
extern void* _ZTCN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadE0_NS_6ThreadE;

/* Symbol: _ZTVN7android31AudioALSASpeechStreamControllerE */
/* Demangled: vtable for android::AudioALSASpeechStreamController */
extern void* _ZTVN7android31AudioALSASpeechStreamControllerE;

/* Symbol: _ZN7android18SpeechDriverNormal19resetApWaitAckMsgIDEv */
/* Demangled: android::SpeechDriverNormal::resetApWaitAckMsgID() */
int _ZN7android18SpeechDriverNormal19resetApWaitAckMsgIDEv(void);

/* Symbol: _ZN7android16SpeechExtMemUSIP28shm_region_write_from_linearEPNS_13region_info_tEPKvj */
/* Demangled: android::SpeechExtMemUSIP::shm_region_write_from_linear(android::region_info_t*, void const*, unsigned int) */
int _ZN7android16SpeechExtMemUSIP28shm_region_write_from_linearEPNS_13region_info_tEPKvj(void);

/* Symbol: _ZN7android19streamoutdsp_proptyE */
/* Demangled: android::streamoutdsp_propty */
extern void* _ZN7android19streamoutdsp_proptyE;

/* Symbol: _ZN7android26AudioALSACaptureHandlerANCD1Ev */
/* Demangled: android::AudioALSACaptureHandlerANC::~AudioALSACaptureHandlerANC() */
int _ZN7android26AudioALSACaptureHandlerANCD1Ev(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutReceiverPMICC2Ev */
/* Demangled: android::AudioALSACodecDeviceOutReceiverPMIC::AudioALSACodecDeviceOutReceiverPMIC() */
int _ZN7android35AudioALSACodecDeviceOutReceiverPMICC2Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl23BT_SCO_ExtMDULBufUnLockEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMDULBufUnLock() */
int _ZN7android18AudioBTCVSDControl23BT_SCO_ExtMDULBufUnLockEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase21configStreamAttributeEPK18stream_attribute_t */
/* Demangled: android::AudioALSACaptureDataProviderBase::configStreamAttribute(stream_attribute_t const*) */
int _ZN7android32AudioALSACaptureDataProviderBase21configStreamAttributeEPK18stream_attribute_t(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerVOWD0Ev */
/* Demangled: android::AudioALSACaptureHandlerVOW::~AudioALSACaptureHandlerVOW() */
int _ZN7android26AudioALSACaptureHandlerVOWD0Ev(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager21deinitPlayBackHandlerE18playback_handler_t */
/* Demangled: android::AudioALSAHyBridNLEManager::deinitPlayBackHandler(playback_handler_t) */
int _ZN7android25AudioALSAHyBridNLEManager21deinitPlayBackHandlerE18playback_handler_t(void);

/* Symbol: _ZN7android16SpeechVMRecorder15triggerSpeechVmEv */
/* Demangled: android::SpeechVMRecorder::triggerSpeechVm() */
int _ZN7android16SpeechVMRecorder15triggerSpeechVmEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAPlaybackHandlerBase*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEE12do_constructEPvj(void);

/* Symbol: _ZN7android2spINS_8hardware20hidl_death_recipientEED2Ev */
/* Demangled: android::sp<android::hardware::hidl_death_recipient>::~sp() */
int _ZN7android2spINS_8hardware20hidl_death_recipientEED2Ev(void);

/* Symbol: _ZN7android17SpeechDriverDummy24SetModemSideSamplingRateEt */
/* Demangled: android::SpeechDriverDummy::SetModemSideSamplingRate(unsigned short) */
int _ZN7android17SpeechDriverDummy24SetModemSideSamplingRateEt(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase15initDataPendingEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::initDataPending() */
int _ZN7android28AudioALSAPlaybackHandlerBase15initDataPendingEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP17SetArsiTaskConfigEP18arsi_task_config_t */
/* Demangled: android::SpeechDriverOpenDSP::SetArsiTaskConfig(arsi_task_config_t*) */
int _ZN7android19SpeechDriverOpenDSP17SetArsiTaskConfigEP18arsi_task_config_t(void);

/* Symbol: _ZTVN7android31AudioALSACaptureDataProviderVOWE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderVOW */
extern void* _ZTVN7android31AudioALSACaptureDataProviderVOWE;

/* Symbol: _ZN7android19SpeechDriverFactory15GetSpeechDriverEv */
/* Demangled: android::SpeechDriverFactory::GetSpeechDriver() */
int _ZN7android19SpeechDriverFactory15GetSpeechDriverEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController6enableEj */
/* Demangled: android::AudioUSBPhoneCallController::enable(unsigned int) */
int _ZN7android27AudioUSBPhoneCallController6enableEj(void);

/* Symbol: _ZNK7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::AudioALSAHardware::AudioHalPatch*>::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEE10do_destroyEPvj(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerTDMD2Ev */
/* Demangled: android::AudioALSACaptureHandlerTDM::~AudioALSACaptureHandlerTDM() */
int _ZN7android26AudioALSACaptureHandlerTDMD2Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager24setBesLoudnessStateToXMLEb */
/* Demangled: android::AudioALSAStreamManager::setBesLoudnessStateToXML(bool) */
int _ZN7android22AudioALSAStreamManager24setBesLoudnessStateToXMLEb(void);

/* Symbol: _ZN7android18SpeechDriverNormalC1ENS_13modem_index_tE */
/* Demangled: android::SpeechDriverNormal::SpeechDriverNormal(android::modem_index_t) */
int _ZN7android18SpeechDriverNormalC1ENS_13modem_index_tE(void);

/* Symbol: _ZN7android24SpeechPcmMixerBaseBuffer14isBufferEnoughEv */
/* Demangled: android::SpeechPcmMixerBaseBuffer::isBufferEnough() */
int _ZN7android24SpeechPcmMixerBaseBuffer14isBufferEnoughEv(void);

/* Symbol: _ZN7android21SpeechMessengerNormal26writeSphParamToShareMemoryEPKvjPj */
/* Demangled: android::SpeechMessengerNormal::writeSphParamToShareMemory(void const*, unsigned int, unsigned int*) */
int _ZN7android21SpeechMessengerNormal26writeSphParamToShareMemoryEPKvjPj(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal30copyEchoRefCaptureDataToClientENS_7RingBufE */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::copyEchoRefCaptureDataToClient(android::RingBuf) */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal30copyEchoRefCaptureDataToClientENS_7RingBufE(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase13dodataPendingEPvjPS1_Pj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::dodataPending(void*, unsigned int, void**, unsigned int*) */
int _ZN7android28AudioALSAPlaybackHandlerBase13dodataPendingEPvjPS1_Pj(void);

/* Symbol: _ZN7android34AudioALSACodecDeviceOutSpeakerPMICD2Ev */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerPMIC::~AudioALSACodecDeviceOutSpeakerPMIC() */
int _ZN7android34AudioALSACodecDeviceOutSpeakerPMICD2Ev(void);

/* Symbol: _ZN7android20GainTableParamParser13updateVoIPVolEP14GainTableParamPNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE */
/* Demangled: android::GainTableParamParser::updateVoIPVol(GainTableParam*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN7android20GainTableParamParser13updateVoIPVolEP14GainTableParamPNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient20CheckBesRecordBypassEv */
/* Demangled: android::AudioALSACaptureDataClient::CheckBesRecordBypass() */
int _ZN7android26AudioALSACaptureDataClient20CheckBesRecordBypassEv(void);

/* Symbol: _ZN7android27SpeechEnhancementController34SetSpeechEnhancementMaskToAllModemERKNS_21sph_enh_mask_struct_tE */
/* Demangled: android::SpeechEnhancementController::SetSpeechEnhancementMaskToAllModem(android::sph_enh_mask_struct_t const&) */
int _ZN7android27SpeechEnhancementController34SetSpeechEnhancementMaskToAllModemERKNS_21sph_enh_mask_struct_tE(void);

/* Symbol: _ZN7android19AudioALSAParamTuner29enableModemPlaybackVIASPHPROCEbb */
/* Demangled: android::AudioALSAParamTuner::enableModemPlaybackVIASPHPROC(bool, bool) */
int _ZN7android19AudioALSAParamTuner29enableModemPlaybackVIASPHPROCEbb(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderFMRadioD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderFMRadio::~AudioALSACaptureDataProviderFMRadio() */
int _ZN7android35AudioALSACaptureDataProviderFMRadioD2Ev(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android27SpeechDataProcessingHandler28mSpeechDataProcessingHandlerE */
/* Demangled: android::SpeechDataProcessingHandler::mSpeechDataProcessingHandler */
extern void* _ZN7android27SpeechDataProcessingHandler28mSpeechDataProcessingHandlerE;

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer17mOutputBufferSizeE */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::mOutputBufferSize */
extern void* _ZN7android29AudioALSAPlaybackHandlerMixer17mOutputBufferSizeE;

/* Symbol: _ZN7android29AudioALSASampleRateControllerC2Ev */
/* Demangled: android::AudioALSASampleRateController::AudioALSASampleRateController() */
int _ZN7android29AudioALSASampleRateControllerC2Ev(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase12mDumpFileNumE */
/* Demangled: android::AudioALSAPlaybackHandlerBase::mDumpFileNum */
extern void* _ZN7android28AudioALSAPlaybackHandlerBase12mDumpFileNumE;

/* Symbol: _ZN7android22AudioALSAStreamManager23standbyAllOutputStreamsEb */
/* Demangled: android::AudioALSAStreamManager::standbyAllOutputStreams(bool) */
int _ZN7android22AudioALSAStreamManager23standbyAllOutputStreamsEb(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamOut*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEEE;

/* Symbol: sw_mixer_target_attach */
/* Demangled: sw_mixer_target_attach */
int sw_mixer_target_attach(void);

/* Symbol: _ZN7android17SpeechDriverDummy13BGSoundConfigEhh */
/* Demangled: android::SpeechDriverDummy::BGSoundConfig(unsigned char, unsigned char) */
int _ZN7android17SpeechDriverDummy13BGSoundConfigEhh(void);

/* Symbol: _ZN7android18AudioBTCVSDControl23BT_SCO_RX_GetCVSDOutBufEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_GetCVSDOutBuf() */
int _ZN7android18AudioBTCVSDControl23BT_SCO_RX_GetCVSDOutBufEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl26BT_SCO_RX_GetCVSDTempInBufEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_GetCVSDTempInBuf() */
int _ZN7android18AudioBTCVSDControl26BT_SCO_RX_GetCVSDTempInBufEv(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutReceiverPMIC36mAudioALSACodecDeviceOutReceiverPMICE */
/* Demangled: android::AudioALSACodecDeviceOutReceiverPMIC::mAudioALSACodecDeviceOutReceiverPMIC */
extern void* _ZN7android35AudioALSACodecDeviceOutReceiverPMIC36mAudioALSACodecDeviceOutReceiverPMICE;

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase15getMmapPositionEP19audio_mmap_position */
/* Demangled: android::AudioALSAPlaybackHandlerBase::getMmapPosition(audio_mmap_position*) */
int _ZN7android28AudioALSAPlaybackHandlerBase15getMmapPositionEP19audio_mmap_position(void);

/* Symbol: _ZN7android18SpeechDriverNormal19SetUplinkSourceMuteEb */
/* Demangled: android::SpeechDriverNormal::SetUplinkSourceMute(bool) */
int _ZN7android18SpeechDriverNormal19SetUplinkSourceMuteEb(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal11ApplyVolumeEPvj */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::ApplyVolume(void*, unsigned int) */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal11ApplyVolumeEPvj(void);

/* Symbol: _ZN7android8SPELayer4dumpEv */
/* Demangled: android::SPELayer::dump() */
int _ZN7android8SPELayer4dumpEv(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient38CheckDynamicSpeechEnhancementMaskOnOffE27voip_sph_enh_dynamic_mask_t */
/* Demangled: android::AudioALSACaptureDataClient::CheckDynamicSpeechEnhancementMaskOnOff(voip_sph_enh_dynamic_mask_t) */
int _ZN7android26AudioALSACaptureDataClient38CheckDynamicSpeechEnhancementMaskOnOffE27voip_sph_enh_dynamic_mask_t(void);

/* Symbol: _ZN7android17AudioALSAStreamIn22setMicrophoneDirectionE28audio_microphone_direction_t */
/* Demangled: android::AudioALSAStreamIn::setMicrophoneDirection(audio_microphone_direction_t) */
int _ZN7android17AudioALSAStreamIn22setMicrophoneDirectionE28audio_microphone_direction_t(void);

/* Symbol: _ZN7android17AudioVIBSPKVsgGenD1Ev */
/* Demangled: android::AudioVIBSPKVsgGen::~AudioVIBSPKVsgGen() */
int _ZN7android17AudioVIBSPKVsgGenD1Ev(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderANC4openEv */
/* Demangled: android::AudioALSACaptureDataProviderANC::open() */
int _ZN7android31AudioALSACaptureDataProviderANC4openEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderUsbD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderUsb::~AudioALSACaptureDataProviderUsb() */
int _ZN7android31AudioALSACaptureDataProviderUsbD2Ev(void);

/* Symbol: _ZN7android17AudioALSAStreamIn16isWavDumpEnabledEv */
/* Demangled: android::AudioALSAStreamIn::isWavDumpEnabled() */
int _ZN7android17AudioALSAStreamIn16isWavDumpEnabledEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager16setDeviceSeqenceEv */
/* Demangled: android::AudioALSAHardwareResourceManager::setDeviceSeqence() */
int _ZN7android32AudioALSAHardwareResourceManager16setDeviceSeqenceEv(void);

/* Symbol: _ZN7android22AudioSmartPaController17isSwDspSpkProtectEi */
/* Demangled: android::AudioSmartPaController::isSwDspSpkProtect(int) */
int _ZN7android22AudioSmartPaController17isSwDspSpkProtectEi(void);

/* Symbol: _ZN7android20GainTableParamParser8getParamIfEEiP10_ParamUnitPT_PKc */
/* Demangled: int android::GainTableParamParser::getParam<float>(_ParamUnit*, float*, char const*) */
int _ZN7android20GainTableParamParser8getParamIfEEiP10_ParamUnitPT_PKc(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase21openPcmDriverWithFlagEjj */
/* Demangled: android::AudioALSACaptureDataProviderBase::openPcmDriverWithFlag(unsigned int, unsigned int) */
int _ZN7android32AudioALSACaptureDataProviderBase21openPcmDriverWithFlagEjj(void);

/* Symbol: aurisys_arsi_set_ul_mute */
/* Demangled: aurisys_arsi_set_ul_mute */
int aurisys_arsi_set_ul_mute(void);

/* Symbol: aud_fmt_conv_hal_create */
/* Demangled: aud_fmt_conv_hal_create */
int aud_fmt_conv_hal_create(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderVOW4openEv */
/* Demangled: android::AudioALSACaptureDataProviderVOW::open() */
int _ZN7android31AudioALSACaptureDataProviderVOW4openEv(void);

/* Symbol: _ZN7android22AudioMTKGainController8isInCallE12audio_mode_t */
/* Demangled: android::AudioMTKGainController::isInCall(audio_mode_t) */
int _ZN7android22AudioMTKGainController8isInCallE12audio_mode_t(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient17CheckNativeEffectEv */
/* Demangled: android::AudioALSACaptureDataClient::CheckNativeEffect() */
int _ZN7android26AudioALSACaptureDataClient17CheckNativeEffectEv(void);

/* Symbol: _ZN7android8SPELayer5StartENS_8SPE_MODEE */
/* Demangled: android::SPELayer::Start(android::SPE_MODE) */
int _ZN7android8SPELayer5StartENS_8SPE_MODEE(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsb30writeEchoRefDataToDataProviderEPNS_38AudioALSACaptureDataProviderEchoRefUsbEPKcj */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::writeEchoRefDataToDataProvider(android::AudioALSACaptureDataProviderEchoRefUsb*, char const*, unsigned int) */
int _ZN7android27AudioALSAPlaybackHandlerUsb30writeEchoRefDataToDataProviderEPNS_38AudioALSACaptureDataProviderEchoRefUsbEPKcj(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerSyncIOD2Ev */
/* Demangled: android::AudioALSACaptureHandlerSyncIO::~AudioALSACaptureHandlerSyncIO() */
int _ZN7android29AudioALSACaptureHandlerSyncIOD2Ev(void);

/* Symbol: _ZN7android21AudioDspStreamManager25removeCaptureDataProviderEPNS_32AudioALSACaptureDataProviderBaseE */
/* Demangled: android::AudioDspStreamManager::removeCaptureDataProvider(android::AudioALSACaptureDataProviderBase*) */
int _ZN7android21AudioDspStreamManager25removeCaptureDataProviderEPNS_32AudioALSACaptureDataProviderBaseE(void);

/* Symbol: _ZN7android17SpeechDriverDummy21SetModemLoopbackPointEt */
/* Demangled: android::SpeechDriverDummy::SetModemLoopbackPoint(unsigned short) */
int _ZN7android17SpeechDriverDummy21SetModemLoopbackPointEt(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager11setMIC3ModeEb */
/* Demangled: android::AudioALSAHardwareResourceManager::setMIC3Mode(bool) */
int _ZN7android32AudioALSAHardwareResourceManager11setMIC3ModeEb(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerDspC1EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerDsp::AudioALSACaptureHandlerDsp(stream_attribute_t*) */
int _ZN7android26AudioALSACaptureHandlerDspC1EP18stream_attribute_t(void);

/* Symbol: _ZN7android18SpeechDriverNormal10PCM2WayOffEv */
/* Demangled: android::SpeechDriverNormal::PCM2WayOff() */
int _ZN7android18SpeechDriverNormal10PCM2WayOffEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioMTKFilterManager*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorIP7__sFILEE12do_constructEPvj */
/* Demangled: android::Vector<__sFILE*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIP7__sFILEE12do_constructEPvj(void);

/* Symbol: _ZN7android10Record2Way5StartEv */
/* Demangled: android::Record2Way::Start() */
int _ZN7android10Record2Way5StartEv(void);

/* Symbol: _ZN7android21AudioDspStreamManagerC1Ev */
/* Demangled: android::AudioDspStreamManager::AudioDspStreamManager() */
int _ZN7android21AudioDspStreamManagerC1Ev(void);

/* Symbol: _ZN7android18SpeechShareMemBase15destroyInstanceEPS0_ */
/* Demangled: android::SpeechShareMemBase::destroyInstance(android::SpeechShareMemBase*) */
int _ZN7android18SpeechShareMemBase15destroyInstanceEPS0_(void);

/* Symbol: _ZN7android22AudioMTKGainController20initVolumeControllerEv */
/* Demangled: android::AudioMTKGainController::initVolumeController() */
int _ZN7android22AudioMTKGainController20initVolumeControllerEv(void);

/* Symbol: _ZN7android17WCNChipController18BTChipSecurityHiLoEv */
/* Demangled: android::WCNChipController::BTChipSecurityHiLo() */
int _ZN7android17WCNChipController18BTChipSecurityHiLoEv(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsbD0Ev */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::~AudioALSAPlaybackHandlerUsb() */
int _ZN7android27AudioALSAPlaybackHandlerUsbD0Ev(void);

/* Symbol: _ZN7android15LoopbackManager24CheckLoopbackTypeIsValidENS_10loopback_tE */
/* Demangled: android::LoopbackManager::CheckLoopbackTypeIsValid(android::loopback_t) */
int _ZN7android15LoopbackManager24CheckLoopbackTypeIsValidENS_10loopback_tE(void);

/* Symbol: deinit_aurisys_xml_handler */
/* Demangled: deinit_aurisys_xml_handler */
int deinit_aurisys_xml_handler(void);

/* Symbol: sw_mixer_source_attach */
/* Demangled: sw_mixer_source_attach */
int sw_mixer_source_attach(void);

/* Symbol: _ZNKSt3__111__alternateIcE12__exec_splitEbRNS_7__stateIcEE */
/* Demangled: std::__1::__alternate<char>::__exec_split(bool, std::__1::__state<char>&) const */
int _ZNKSt3__111__alternateIcE12__exec_splitEbRNS_7__stateIcEE(void);

/* Symbol: _ZN7android15LoopbackManager16mLoopbackManagerE */
/* Demangled: android::LoopbackManager::mLoopbackManager */
extern void* _ZN7android15LoopbackManager16mLoopbackManagerE;

/* Symbol: aurisys_arsi_set_dl_mute */
/* Demangled: aurisys_arsi_set_dl_mute */
int aurisys_arsi_set_dl_mute(void);

/* Symbol: _ZN7android21SpeechMessengerNormalC2ENS_13modem_index_tE */
/* Demangled: android::SpeechMessengerNormal::SpeechMessengerNormal(android::modem_index_t) */
int _ZN7android21SpeechMessengerNormalC2ENS_13modem_index_tE(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormalD0Ev */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::~AudioALSACaptureDataClientAurisysNormal() */
int _ZN7android39AudioALSACaptureDataClientAurisysNormalD0Ev(void);

/* Symbol: _ZN7android8SPELayer18SetStreamAttributeEbNS_15StreamAttributeE */
/* Demangled: android::SPELayer::SetStreamAttribute(bool, android::StreamAttribute) */
int _ZN7android8SPELayer18SetStreamAttributeEbNS_15StreamAttributeE(void);

/* Symbol: _ZN7android8SPELayer7ReStartEv */
/* Demangled: android::SPELayer::ReStart() */
int _ZN7android8SPELayer7ReStartEv(void);

/* Symbol: deinit_audio_sw_mixer */
/* Demangled: deinit_audio_sw_mixer */
int deinit_audio_sw_mixer(void);

/* Symbol: _ZN7android23AudioEventThreadManagerD1Ev */
/* Demangled: android::AudioEventThreadManager::~AudioEventThreadManager() */
int _ZN7android23AudioEventThreadManagerD1Ev(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase12waitPcmStartEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::waitPcmStart() */
int _ZN7android32AudioALSACaptureDataProviderBase12waitPcmStartEv(void);

/* Symbol: _ZN7android18keypcmCaptureMono1E */
/* Demangled: android::keypcmCaptureMono1 */
extern void* _ZN7android18keypcmCaptureMono1E;

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo14SetBesRecSceneEi */
/* Demangled: android::AudioSpeechEnhanceInfo::SetBesRecScene(int) */
int _ZN7android22AudioSpeechEnhanceInfo14SetBesRecSceneEi(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_expression_termINS_11__wrap_iterIPKcEEEET_S9_S9_PNS_20__bracket_expressionIcS2_EE */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_expression_term<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_expression_termINS_11__wrap_iterIPKcEEEET_S9_S9_PNS_20__bracket_expressionIcS2_EE(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerTDM4initEv */
/* Demangled: android::AudioALSACaptureHandlerTDM::init() */
int _ZN7android26AudioALSACaptureHandlerTDM4initEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl27BT_SCO_RX_GetTimeBufferInfoEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_GetTimeBufferInfo() */
int _ZN7android18AudioBTCVSDControl27BT_SCO_RX_GetTimeBufferInfoEv(void);

/* Symbol: _ZNK7android17AudioALSAStreamIn18getInputFramesLostEv */
/* Demangled: android::AudioALSAStreamIn::getInputFramesLost() const */
int _ZNK7android17AudioALSAStreamIn18getInputFramesLostEv(void);

/* Symbol: parse_adb_cmd */
/* Demangled: parse_adb_cmd */
int parse_adb_cmd(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp5closeEv */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::close() */
int _ZN7android27AudioALSAPlaybackHandlerDsp5closeEv(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBase4stopEv */
/* Demangled: android::AudioALSACaptureHandlerBase::stop() */
int _ZN7android27AudioALSACaptureHandlerBase4stopEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal24errorHandleSpeechMessageEPNS_9sph_msg_tE */
/* Demangled: android::SpeechDriverNormal::errorHandleSpeechMessage(android::sph_msg_t*) */
int _ZN7android18SpeechDriverNormal24errorHandleSpeechMessageEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderEchoRef5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRef::close() */
int _ZN7android35AudioALSACaptureDataProviderEchoRef5closeEv(void);

/* Symbol: _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCOD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTSCO::~AudioALSACaptureDataProviderEchoRefBTSCO() */
int _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCOD0Ev(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase7pcmReadEP3pcmPvj */
/* Demangled: android::AudioALSACaptureDataProviderBase::pcmRead(pcm*, void*, unsigned int) */
int _ZN7android32AudioALSACaptureDataProviderBase7pcmReadEP3pcmPvj(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload5writeEPKvj */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::write(void const*, unsigned int) */
int _ZN7android31AudioALSAPlaybackHandlerOffload5writeEPKvj(void);

/* Symbol: _ZTVN7android18SpeechQueueElementE */
/* Demangled: vtable for android::SpeechQueueElement */
extern void* _ZTVN7android18SpeechQueueElementE;

/* Symbol: _ZNK7android34AudioALSASpeechPhoneCallController14checkTtyNeedOnEv */
/* Demangled: android::AudioALSASpeechPhoneCallController::checkTtyNeedOn() const */
int _ZNK7android34AudioALSASpeechPhoneCallController14checkTtyNeedOnEv(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderFMRadio36mAudioALSACaptureDataProviderFMRadioE */
/* Demangled: android::AudioALSACaptureDataProviderFMRadio::mAudioALSACaptureDataProviderFMRadio */
extern void* _ZN7android35AudioALSACaptureDataProviderFMRadio36mAudioALSACaptureDataProviderFMRadioE;

/* Symbol: _ZN7android27SpeechDataProcessingHandlerD2Ev */
/* Demangled: android::SpeechDataProcessingHandler::~SpeechDataProcessingHandler() */
int _ZN7android27SpeechDataProcessingHandlerD2Ev(void);

/* Symbol: _ZN7android20GainTableParamParser21audioBufferGainDb2IdxEi */
/* Demangled: android::GainTableParamParser::audioBufferGainDb2Idx(int) */
int _ZN7android20GainTableParamParser21audioBufferGainDb2IdxEi(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFastC2EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerFast::AudioALSAPlaybackHandlerFast(stream_attribute_t const*) */
int _ZN7android28AudioALSAPlaybackHandlerFastC2EPK18stream_attribute_t(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController15pmicResetThreadEPv */
/* Demangled: android::AudioALSASpeechPhoneCallController::pmicResetThread(void*) */
int _ZN7android34AudioALSASpeechPhoneCallController15pmicResetThreadEPv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderVOW5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderVOW::close() */
int _ZN7android31AudioALSACaptureDataProviderVOW5closeEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase20deinitPostProcessingEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::deinitPostProcessing() */
int _ZN7android28AudioALSAPlaybackHandlerBase20deinitPostProcessingEv(void);

/* Symbol: _ZN7android23AudioMTKHeadSetMessager21UniqueHeadsetInstanceE */
/* Demangled: android::AudioMTKHeadSetMessager::UniqueHeadsetInstance */
extern void* _ZN7android23AudioMTKHeadSetMessager21UniqueHeadsetInstanceE;

/* Symbol: _ZNK7android21AudioALSAFMController25getFmDownlinkSamplingRateEv */
/* Demangled: android::AudioALSAFMController::getFmDownlinkSamplingRate() const */
int _ZNK7android21AudioALSAFMController25getFmDownlinkSamplingRateEv(void);

/* Symbol: _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE29__match_at_start_posix_nosubsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb */
/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__match_at_start_posix_nosubs<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type, bool) const */
int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE29__match_at_start_posix_nosubsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb(void);

/* Symbol: _ZN7android16keypcmVoiceUltraE */
/* Demangled: android::keypcmVoiceUltra */
extern void* _ZN7android16keypcmVoiceUltraE;

/* Symbol: _ZN7android17AudioALSAHardware16createAudioPatchEjPK17audio_port_configjS3_Pi */
/* Demangled: android::AudioALSAHardware::createAudioPatch(unsigned int, audio_port_config const*, unsigned int, audio_port_config const*, int*) */
int _ZN7android17AudioALSAHardware16createAudioPatchEjPK17audio_port_configjS3_Pi(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSD11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::getInstance() */
int _ZN7android34AudioALSACaptureDataProviderBTCVSD11getInstanceEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl31BT_SCO_ExtMDReadDataFromRingBufEPhjNS_21EXTMD_BTSCO_DIRECTIONE */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMDReadDataFromRingBuf(unsigned char*, unsigned int, android::EXTMD_BTSCO_DIRECTION) */
int _ZN7android18AudioBTCVSDControl31BT_SCO_ExtMDReadDataFromRingBufEPhjNS_21EXTMD_BTSCO_DIRECTIONE(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager21setNleHwConfigByIndexEj */
/* Demangled: android::AudioALSAHyBridNLEManager::setNleHwConfigByIndex(unsigned int) */
int _ZN7android25AudioALSAHyBridNLEManager21setNleHwConfigByIndexEj(void);

/* Symbol: _ZN7android37PROPERTY_KEY_BESLOUDNESS_SWITCH_STATEE */
/* Demangled: android::PROPERTY_KEY_BESLOUDNESS_SWITCH_STATE */
extern void* _ZN7android37PROPERTY_KEY_BESLOUDNESS_SWITCH_STATEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAPlaybackHandlerBase*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android16AudioBitTrueTest17mAudioBitTrueTestE */
/* Demangled: android::AudioBitTrueTest::mAudioBitTrueTest */
extern void* _ZN7android16AudioBitTrueTest17mAudioBitTrueTestE;

/* Symbol: _ZN7android18keypcmCallfinalDspE */
/* Demangled: android::keypcmCallfinalDsp */
extern void* _ZN7android18keypcmCallfinalDspE;

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer17deviceSupportHifiEj */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::deviceSupportHifi(unsigned int) */
int _ZN7android29AudioALSAPlaybackHandlerMixer17deviceSupportHifiEj(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController9getRFInfoEv */
/* Demangled: android::AudioALSASpeechPhoneCallController::getRFInfo() */
int _ZN7android34AudioALSASpeechPhoneCallController9getRFInfoEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl23BT_SCO_RX_DestroyModuleEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_DestroyModule() */
int _ZN7android18AudioBTCVSDControl23BT_SCO_RX_DestroyModuleEv(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager11getNleEopDbEv */
/* Demangled: android::AudioALSAHyBridNLEManager::getNleEopDb() */
int _ZN7android25AudioALSAHyBridNLEManager11getNleEopDbEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController10initBliSrcEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::initBliSrc(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController10initBliSrcEPNS_9USBStreamE(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerAAudioC1EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerAAudio::AudioALSAPlaybackHandlerAAudio(stream_attribute_t const*) */
int _ZN7android30AudioALSAPlaybackHandlerAAudioC1EPK18stream_attribute_t(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderTDM10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderTDM::readThread(void*) */
int _ZN7android31AudioALSACaptureDataProviderTDM10readThreadEPv(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager26mAudioALSAHyBridNREManagerE */
/* Demangled: android::AudioALSAHyBridNLEManager::mAudioALSAHyBridNREManager */
extern void* _ZN7android25AudioALSAHyBridNLEManager26mAudioALSAHyBridNREManagerE;

/* Symbol: _ZTVN7android25AudioALSAHyBridNLEManagerE */
/* Demangled: vtable for android::AudioALSAHyBridNLEManager */
extern void* _ZTVN7android25AudioALSAHyBridNLEManagerE;

/* Symbol: _ZN7android22AudioSmartPaController15isInCalibrationEv */
/* Demangled: android::AudioSmartPaController::isInCalibration() */
int _ZN7android22AudioSmartPaController15isInCalibrationEv(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerAAudioD2Ev */
/* Demangled: android::AudioALSAPlaybackHandlerAAudio::~AudioALSAPlaybackHandlerAAudio() */
int _ZN7android30AudioALSAPlaybackHandlerAAudioD2Ev(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtvC1Ev */
/* Demangled: android::AudioALSAHandlerKtv::AudioALSAHandlerKtv() */
int _ZN7android19AudioALSAHandlerKtvC1Ev(void);

/* Symbol: _ZN7android16SpeechVMRecorder12stopCtmDebugEv */
/* Demangled: android::SpeechVMRecorder::stopCtmDebug() */
int _ZN7android16SpeechVMRecorder12stopCtmDebugEv(void);

/* Symbol: _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMIC11getInstanceEv */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerEarphonePMIC::getInstance() */
int _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMIC11getInstanceEv(void);

/* Symbol: _ZN7android8AudioFtm14ATV_AudPlay_OnEv */
/* Demangled: android::AudioFtm::ATV_AudPlay_On() */
int _ZN7android8AudioFtm14ATV_AudPlay_OnEv(void);

/* Symbol: _ZN7android22AudioSmartPaController17isHwDspSpkProtectEi */
/* Demangled: android::AudioSmartPaController::isHwDspSpkProtect(int) */
int _ZN7android22AudioSmartPaController17isHwDspSpkProtectEi(void);

/* Symbol: _ZTVN7android29AudioALSACaptureDataClientDspE */
/* Demangled: vtable for android::AudioALSACaptureDataClientDsp */
extern void* _ZTVN7android29AudioALSACaptureDataClientDspE;

/* Symbol: _ZN7android19RingBuf_discardDataEPNS_7RingBufEi */
/* Demangled: android::RingBuf_discardData(android::RingBuf*, int) */
int _ZN7android19RingBuf_discardDataEPNS_7RingBufEi(void);

/* Symbol: _ZN7android20streamout_ori_proptyE */
/* Demangled: android::streamout_ori_propty */
extern void* _ZN7android20streamout_ori_proptyE;

/* Symbol: _ZN7android21AudioALSAFMController9setFmModeEb */
/* Demangled: android::AudioALSAFMController::setFmMode(bool) */
int _ZN7android21AudioALSAFMController9setFmModeEb(void);

/* Symbol: _ZN7android22AudioALSAStreamManager19UpdateDualMicParamsEv */
/* Demangled: android::AudioALSAStreamManager::UpdateDualMicParams() */
int _ZN7android22AudioALSAStreamManager19UpdateDualMicParamsEv(void);

/* Symbol: _ZN7android37AudioALSAPlaybackHandlerFMTransmitterD0Ev */
/* Demangled: android::AudioALSAPlaybackHandlerFMTransmitter::~AudioALSAPlaybackHandlerFMTransmitter() */
int _ZN7android37AudioALSAPlaybackHandlerFMTransmitterD0Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl21btsco_process_TX_CVSDEPvPjS1_S2_S1_j */
/* Demangled: android::AudioBTCVSDControl::btsco_process_TX_CVSD(void*, unsigned int*, void*, unsigned int*, void*, unsigned int) */
int _ZN7android18AudioBTCVSDControl21btsco_process_TX_CVSDEPvPjS1_S2_S1_j(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP20SetSpeechEnhancementEb */
/* Demangled: android::SpeechDriverOpenDSP::SetSpeechEnhancement(bool) */
int _ZN7android19SpeechDriverOpenDSP20SetSpeechEnhancementEb(void);

/* Symbol: _ZN7android18AudioALSAStreamOut20isOutPutStreamActiveEv */
/* Demangled: android::AudioALSAStreamOut::isOutPutStreamActive() */
int _ZN7android18AudioALSAStreamOut20isOutPutStreamActiveEv(void);

/* Symbol: _ZN7android17AudioALSAStreamIn25UpdateDynamicFunctionMaskEv */
/* Demangled: android::AudioALSAStreamIn::UpdateDynamicFunctionMask() */
int _ZN7android17AudioALSAStreamIn25UpdateDynamicFunctionMaskEv(void);

/* Symbol: create_pool_buf */
/* Demangled: create_pool_buf */
int create_pool_buf(void);

/* Symbol: _ZN7android18SpeechDriverNormal16processModemEPOFEv */
/* Demangled: android::SpeechDriverNormal::processModemEPOF() */
int _ZN7android18SpeechDriverNormal16processModemEPOFEv(void);

/* Symbol: _ZN7android21SpeechMessengerNormal23getMaxMdPayloadDataSizeEv */
/* Demangled: android::SpeechMessengerNormal::getMaxMdPayloadDataSize() */
int _ZN7android21SpeechMessengerNormal23getMaxMdPayloadDataSizeEv(void);

/* Symbol: alock_new */
/* Demangled: alock_new */
int alock_new(void);

/* Symbol: _ZNSt3__117__owns_two_statesIcED2Ev */
/* Demangled: std::__1::__owns_two_states<char>::~__owns_two_states() */
int _ZNSt3__117__owns_two_statesIcED2Ev(void);

/* Symbol: createMTKAudioUSBProviderEchoRef */
/* Demangled: createMTKAudioUSBProviderEchoRef */
int createMTKAudioUSBProviderEchoRef(void);

/* Symbol: _ZNK7android6VectorIPNS_21AudioDeviceDescriptorEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::AudioDeviceDescriptor*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_21AudioDeviceDescriptorEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl29BT_SCO_ExtMDGetCVSDAccuOutBufEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMDGetCVSDAccuOutBuf() */
int _ZN7android18AudioBTCVSDControl29BT_SCO_ExtMDGetCVSDAccuOutBufEv(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerAAudio14setScreenStateEbjjb */
/* Demangled: android::AudioALSAPlaybackHandlerAAudio::setScreenState(bool, unsigned int, unsigned int, bool) */
int _ZN7android30AudioALSAPlaybackHandlerAAudio14setScreenStateEbjjb(void);

/* Symbol: _ZN7android22AudioSmartPaController15isRateSupportedEj */
/* Demangled: android::AudioSmartPaController::isRateSupported(unsigned int) */
int _ZN7android22AudioSmartPaController15isRateSupportedEj(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager12setDPDModuleEb */
/* Demangled: android::AudioALSAHardwareResourceManager::setDPDModule(bool) */
int _ZN7android32AudioALSAHardwareResourceManager12setDPDModuleEb(void);

/* Symbol: _ZN7android15isa2dpSpkDeviceEj */
/* Demangled: android::isa2dpSpkDevice(unsigned int) */
int _ZN7android15isa2dpSpkDeviceEj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl23BT_SCO_RX_GetMSBCOutBufEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_GetMSBCOutBuf() */
int _ZN7android18AudioBTCVSDControl23BT_SCO_RX_GetMSBCOutBufEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamIn*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient12IsVoIPEnableEv */
/* Demangled: android::AudioALSACaptureDataClient::IsVoIPEnable() */
int _ZN7android26AudioALSACaptureDataClient12IsVoIPEnableEv(void);

/* Symbol: _ZN7android31AudioALSASpeechStreamController18SpeechStreamThreadEPv */
/* Demangled: android::AudioALSASpeechStreamController::SpeechStreamThread(void*) */
int _ZN7android31AudioALSASpeechStreamController18SpeechStreamThreadEPv(void);

/* Symbol: _ZN7android23AudioEventThreadManager18unregisterCallbackENS_14AudioEventTypeEPFviPvS2_ES2_ */
/* Demangled: android::AudioEventThreadManager::unregisterCallback(android::AudioEventType, void (*)(int, void*, void*), void*) */
int _ZN7android23AudioEventThreadManager18unregisterCallbackENS_14AudioEventTypeEPFviPvS2_ES2_(void);

/* Symbol: _ZN7android16SpeechExtMemCCCIC1Ev */
/* Demangled: android::SpeechExtMemCCCI::SpeechExtMemCCCI() */
int _ZN7android16SpeechExtMemCCCIC1Ev(void);

/* Symbol: _ZN7android17SpeechDriverDummy9PCM2WayOnEb */
/* Demangled: android::SpeechDriverDummy::PCM2WayOn(bool) */
int _ZN7android17SpeechDriverDummy9PCM2WayOnEb(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_atomINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_atom<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_atomINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController13getPeriodByteEPK10pcm_config */
/* Demangled: android::AudioUSBPhoneCallController::getPeriodByte(pcm_config const*) */
int _ZN7android27AudioUSBPhoneCallController13getPeriodByteEPK10pcm_config(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamOut*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android22AudioMTKGainController10SetAdcPga1Ei */
/* Demangled: android::AudioMTKGainController::SetAdcPga1(int) */
int _ZN7android22AudioMTKGainController10SetAdcPga1Ei(void);

/* Symbol: _ZN7android17SpeechDriverDummy10BGSoundOffEv */
/* Demangled: android::SpeechDriverDummy::BGSoundOff() */
int _ZN7android17SpeechDriverDummy10BGSoundOffEv(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerNormalD1Ev */
/* Demangled: android::AudioALSACaptureHandlerNormal::~AudioALSACaptureHandlerNormal() */
int _ZN7android29AudioALSACaptureHandlerNormalD1Ev(void);

/* Symbol: _ZN7android24AudioALSACodecDeviceBaseD0Ev */
/* Demangled: android::AudioALSACodecDeviceBase::~AudioALSACodecDeviceBase() */
int _ZN7android24AudioALSACodecDeviceBaseD0Ev(void);

/* Symbol: _ZN7android18SpeechDriverNormal20SetDownlinkMuteCodecEb */
/* Demangled: android::SpeechDriverNormal::SetDownlinkMuteCodec(bool) */
int _ZN7android18SpeechDriverNormal20SetDownlinkMuteCodecEb(void);

/* Symbol: _ZN7android37AudioALSAPlaybackHandlerFMTransmitterC2EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerFMTransmitter::AudioALSAPlaybackHandlerFMTransmitter(stream_attribute_t const*) */
int _ZN7android37AudioALSAPlaybackHandlerFMTransmitterC2EPK18stream_attribute_t(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase25calculateCaptureTimeStampEP18time_info_struct_tj */
/* Demangled: android::AudioALSACaptureDataProviderBase::calculateCaptureTimeStamp(time_info_struct_t*, unsigned int) */
int _ZN7android32AudioALSACaptureDataProviderBase25calculateCaptureTimeStampEP18time_info_struct_tj(void);

/* Symbol: _ZN7android20GainTableParamParser14getParamVectorEP10_ParamUnitPNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEEPKc */
/* Demangled: android::GainTableParamParser::getParamVector(_ParamUnit*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*, char const*) */
int _ZN7android20GainTableParamParser14getParamVectorEP10_ParamUnitPNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEEPKc(void);

/* Symbol: _ZN7android16keypcmUl1CaptureE */
/* Demangled: android::keypcmUl1Capture */
extern void* _ZN7android16keypcmUl1CaptureE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamOut*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEE12do_constructEPvj(void);

/* Symbol: _ZN7android21AudioDspStreamManagerD2Ev */
/* Demangled: android::AudioDspStreamManager::~AudioDspStreamManager() */
int _ZN7android21AudioDspStreamManagerD2Ev(void);

/* Symbol: _ZN7android21SpeechMessengerNormal24writeApDataToShareMemoryEPKvttPtPj */
/* Demangled: android::SpeechMessengerNormal::writeApDataToShareMemory(void const*, unsigned short, unsigned short, unsigned short*, unsigned int*) */
int _ZN7android21SpeechMessengerNormal24writeApDataToShareMemoryEPKvttPtPj(void);

/* Symbol: _ZN7android31AUDIO_COMPONENT_ENGINE_LIB_PATHE */
/* Demangled: android::AUDIO_COMPONENT_ENGINE_LIB_PATH */
extern void* _ZN7android31AUDIO_COMPONENT_ENGINE_LIB_PATHE;

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsb4openEv */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::open() */
int _ZN7android27AudioALSAPlaybackHandlerUsb4openEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager20SetMagiConCallEnableEb */
/* Demangled: android::AudioALSAStreamManager::SetMagiConCallEnable(bool) */
int _ZN7android22AudioALSAStreamManager20SetMagiConCallEnableEb(void);

/* Symbol: _ZN7android22AudioMTKGainController14setVoiceVolumeEf12audio_mode_tj */
/* Demangled: android::AudioMTKGainController::setVoiceVolume(float, audio_mode_t, unsigned int) */
int _ZN7android22AudioMTKGainController14setVoiceVolumeEf12audio_mode_tj(void);

/* Symbol: _ZN7android17WCNChipController20IsFmChipUseSlaveModeEv */
/* Demangled: android::WCNChipController::IsFmChipUseSlaveMode() */
int _ZN7android17WCNChipController20IsFmChipUseSlaveModeEv(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderBTSCOD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderBTSCO::~AudioALSACaptureDataProviderBTSCO() */
int _ZN7android33AudioALSACaptureDataProviderBTSCOD1Ev(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase15updateAudioModeE12audio_mode_t */
/* Demangled: android::AudioALSAPlaybackHandlerBase::updateAudioMode(audio_mode_t) */
int _ZN7android28AudioALSAPlaybackHandlerBase15updateAudioModeE12audio_mode_t(void);

/* Symbol: _ZN7android16AudioDumpPCMDataEPvjP7__sFILE */
/* Demangled: android::AudioDumpPCMData(void*, unsigned int, __sFILE*) */
int _ZN7android16AudioDumpPCMDataEPvjP7__sFILE(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController27updateSpeakerPlaybackStatusEb */
/* Demangled: android::AudioALSAVoiceWakeUpController::updateSpeakerPlaybackStatus(bool) */
int _ZN7android30AudioALSAVoiceWakeUpController27updateSpeakerPlaybackStatusEb(void);

/* Symbol: _ZN7android22AudioMTKGainController22SetLineInRecordingGainEi */
/* Demangled: android::AudioMTKGainController::SetLineInRecordingGain(int) */
int _ZN7android22AudioMTKGainController22SetLineInRecordingGainEi(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _ZN7android8SPELayer13GetCompFilterENS_8SPE_MODEEPs */
/* Demangled: android::SPELayer::GetCompFilter(android::SPE_MODE, short*) */
int _ZN7android8SPELayer13GetCompFilterENS_8SPE_MODEEPs(void);

/* Symbol: _ZN7android18SpeechMessageQueue11pushElementEPNS_9sph_msg_tEPj */
/* Demangled: android::SpeechMessageQueue::pushElement(android::sph_msg_t*, unsigned int*) */
int _ZN7android18SpeechMessageQueue11pushElementEPNS_9sph_msg_tEPj(void);

/* Symbol: _ZN7android22AudioMTKGainController20MappingToDigitalGainEh */
/* Demangled: android::AudioMTKGainController::MappingToDigitalGain(unsigned char) */
int _ZN7android22AudioMTKGainController20MappingToDigitalGainEh(void);

/* Symbol: is_audio_dsp_ready */
/* Demangled: is_audio_dsp_ready */
int is_audio_dsp_ready(void);

/* Symbol: _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSD22configDefaultAttributeEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTCVSD::configDefaultAttribute() */
int _ZN7android41AudioALSACaptureDataProviderEchoRefBTCVSD22configDefaultAttributeEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController22getSpeech2HALPcmConfigEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::getSpeech2HALPcmConfig(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController22getSpeech2HALPcmConfigEPNS_9USBStreamE(void);

/* Symbol: alock_lock_ms */
/* Demangled: alock_lock_ms */
int alock_lock_ms(void);

/* Symbol: _ZN7android20RingBuf_getDataCountEPKNS_7RingBufE */
/* Demangled: android::RingBuf_getDataCount(android::RingBuf const*) */
int _ZN7android20RingBuf_getDataCountEPKNS_7RingBufE(void);

/* Symbol: _ZN25AudioMTKStreamInInterfaceD2Ev */
/* Demangled: AudioMTKStreamInInterface::~AudioMTKStreamInInterface() */
int _ZN25AudioMTKStreamInInterfaceD2Ev(void);

/* Symbol: _ZN7android36ulStreamAttributeTargetCustomizationEP18stream_attribute_t */
/* Demangled: android::ulStreamAttributeTargetCustomization(stream_attribute_t*) */
int _ZN7android36ulStreamAttributeTargetCustomizationEP18stream_attribute_t(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP26SetDynamicSpeechParametersEiPKv */
/* Demangled: android::SpeechDriverOpenDSP::SetDynamicSpeechParameters(int, void const*) */
int _ZN7android19SpeechDriverOpenDSP26SetDynamicSpeechParametersEiPKv(void);

/* Symbol: _ZN7android22AudioALSADriverUtility18getMixerCtrlByNameEP5mixerPKc */
/* Demangled: android::AudioALSADriverUtility::getMixerCtrlByName(mixer*, char const*) */
int _ZN7android22AudioALSADriverUtility18getMixerCtrlByNameEP5mixerPKc(void);

/* Symbol: _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitchC2Ev */
/* Demangled: android::AudioALSACodecDeviceOutReceiverSpeakerSwitch::AudioALSACodecDeviceOutReceiverSpeakerSwitch() */
int _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitchC2Ev(void);

/* Symbol: _Z15getDspFeatureIDt */
/* Demangled: getDspFeatureID(unsigned short) */
int _Z15getDspFeatureIDt(void);

/* Symbol: _ZN7android18SpeechMessageQueueD2Ev */
/* Demangled: android::SpeechMessageQueue::~SpeechMessageQueue() */
int _ZN7android18SpeechMessageQueueD2Ev(void);

/* Symbol: _ZN7android29AudioALSASampleRateController29setPrimaryStreamOutSampleRateEj */
/* Demangled: android::AudioALSASampleRateController::setPrimaryStreamOutSampleRate(unsigned int) */
int _ZN7android29AudioALSASampleRateController29setPrimaryStreamOutSampleRateEj(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderTDMD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderTDM::~AudioALSACaptureDataProviderTDM() */
int _ZN7android31AudioALSACaptureDataProviderTDMD0Ev(void);

/* Symbol: _ZN7android17AudioALSAStreamIn27setMicrophoneFieldDimensionEf */
/* Demangled: android::AudioALSAStreamIn::setMicrophoneFieldDimension(float) */
int _ZN7android17AudioALSAStreamIn27setMicrophoneFieldDimensionEf(void);

/* Symbol: _ZN7android8SPELayer10GetEnhParaENS_8SPE_MODEEPj */
/* Demangled: android::SPELayer::GetEnhPara(android::SPE_MODE, unsigned int*) */
int _ZN7android8SPELayer10GetEnhParaENS_8SPE_MODEEPj(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager16startInputDeviceEj */
/* Demangled: android::AudioALSAHardwareResourceManager::startInputDevice(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager16startInputDeviceEj(void);

/* Symbol: _ZN7android21SpeechMessengerNormalD2Ev */
/* Demangled: android::SpeechMessengerNormal::~SpeechMessengerNormal() */
int _ZN7android21SpeechMessengerNormalD2Ev(void);

/* Symbol: _ZN7android22AudioMTKGainController14isNbSpeechBandEv */
/* Demangled: android::AudioMTKGainController::isNbSpeechBand() */
int _ZN7android22AudioMTKGainController14isNbSpeechBandEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController24throttleResetCurrentRateEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::throttleResetCurrentRate(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController24throttleResetCurrentRateEPNS_9USBStreamE(void);

/* Symbol: audio_pool_buf_copy_from_linear */
/* Demangled: audio_pool_buf_copy_from_linear */
int audio_pool_buf_copy_from_linear(void);

/* Symbol: _ZN7android21AudioDspStreamManager17SetArsiTaskConfigEP28aurisys_lib_manager_config_thjjPK18stream_attribute_tS5_ */
/* Demangled: android::AudioDspStreamManager::SetArsiTaskConfig(aurisys_lib_manager_config_t*, unsigned char, unsigned int, unsigned int, stream_attribute_t const*, stream_attribute_t const*) */
int _ZN7android21AudioDspStreamManager17SetArsiTaskConfigEP28aurisys_lib_manager_config_thjjPK18stream_attribute_tS5_(void);

/* Symbol: _ZN7android27SpeechEnhancementController8SetHACOnEb */
/* Demangled: android::SpeechEnhancementController::SetHACOn(bool) */
int _ZN7android27SpeechEnhancementController8SetHACOnEb(void);

/* Symbol: _ZN7android21AudioALSAFMController9getFmMuteEv */
/* Demangled: android::AudioALSAFMController::getFmMute() */
int _ZN7android21AudioALSAFMController9getFmMuteEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager14setScreenStateEb */
/* Demangled: android::AudioALSAStreamManager::setScreenState(bool) */
int _ZN7android22AudioALSAStreamManager14setScreenStateEb(void);

/* Symbol: _ZN7android18AudioBTCVSDControl22BT_SCO_RX_GetCVSDInBufEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_GetCVSDInBuf() */
int _ZN7android18AudioBTCVSDControl22BT_SCO_RX_GetCVSDInBufEv(void);

/* Symbol: _ZN7android14AudioUSBCenter15outSetParameterEPKc */
/* Demangled: android::AudioUSBCenter::outSetParameter(char const*) */
int _ZN7android14AudioUSBCenter15outSetParameterEPKc(void);

/* Symbol: sw_mixer_is_write_sync */
/* Demangled: sw_mixer_is_write_sync */
int sw_mixer_is_write_sync(void);

/* Symbol: _ZN7android20GainTableParamParser17getGainTableParamEP14GainTableParamPNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE */
/* Demangled: android::GainTableParamParser::getGainTableParam(GainTableParam*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN7android20GainTableParamParser17getGainTableParamEP14GainTableParamPNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtvD2Ev */
/* Demangled: android::AudioALSAHandlerKtv::~AudioALSAHandlerKtv() */
int _ZN7android19AudioALSAHandlerKtvD2Ev(void);

/* Symbol: _ZN7android24PROPERTY_KEY_P2W_DUMP_ONE */
/* Demangled: android::PROPERTY_KEY_P2W_DUMP_ON */
extern void* _ZN7android24PROPERTY_KEY_P2W_DUMP_ONE;

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo35SetDynamicVoIPSpeechEnhancementMaskE27voip_sph_enh_dynamic_mask_tb */
/* Demangled: android::AudioSpeechEnhanceInfo::SetDynamicVoIPSpeechEnhancementMask(voip_sph_enh_dynamic_mask_t, bool) */
int _ZN7android22AudioSpeechEnhanceInfo35SetDynamicVoIPSpeechEnhancementMaskE27voip_sph_enh_dynamic_mask_tb(void);

/* Symbol: _ZNKSt3__116__back_ref_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__back_ref_icase<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__116__back_ref_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadD2Ev */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDThread::~AudioExtMDCVSDThread() */
int _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadD2Ev(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager12setEnableNLEEb */
/* Demangled: android::AudioALSAHyBridNLEManager::setEnableNLE(bool) */
int _ZN7android25AudioALSAHyBridNLEManager12setEnableNLEEb(void);

/* Symbol: _ZN7android8AudioFtm29SetStreamOutPostProcessBypassEb */
/* Demangled: android::AudioFtm::SetStreamOutPostProcessBypass(bool) */
int _ZN7android8AudioFtm29SetStreamOutPostProcessBypassEb(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp22chooseTargetSampleRateEjj */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::chooseTargetSampleRate(unsigned int, unsigned int) */
int _ZN7android27AudioALSAPlaybackHandlerDsp22chooseTargetSampleRateEjj(void);

/* Symbol: _ZN7android17AudioALSAHardware15SetAudioCommandEii */
/* Demangled: android::AudioALSAHardware::SetAudioCommand(int, int) */
int _ZN7android17AudioALSAHardware15SetAudioCommandEii(void);

/* Symbol: _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEEC2ERKS7_ */
/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::vector(std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > > const&) */
int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEEC2ERKS7_(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase16InitBufferConfigEP21aurisys_lib_manager_t */
/* Demangled: android::AudioALSAPlaybackHandlerBase::InitBufferConfig(aurisys_lib_manager_t*) */
int _ZN7android28AudioALSAPlaybackHandlerBase16InitBufferConfigEP21aurisys_lib_manager_t(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager4dumpEv */
/* Demangled: android::AudioALSAHyBridNLEManager::dump() */
int _ZN7android25AudioALSAHyBridNLEManager4dumpEv(void);

/* Symbol: _ZN7android18SpeechDriverNormalC2ENS_13modem_index_tE */
/* Demangled: android::SpeechDriverNormal::SpeechDriverNormal(android::modem_index_t) */
int _ZN7android18SpeechDriverNormalC2ENS_13modem_index_tE(void);

/* Symbol: _ZTVN7android18SpeechShareMemBaseE */
/* Demangled: vtable for android::SpeechShareMemBase */
extern void* _ZTVN7android18SpeechShareMemBaseE;

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_pattern_characterINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_pattern_character<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_pattern_characterINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZN7android22AudioALSAStreamManager12UpdateACFHCFEi */
/* Demangled: android::AudioALSAStreamManager::UpdateACFHCF(int) */
int _ZN7android22AudioALSAStreamManager12UpdateACFHCFEi(void);

/* Symbol: _ZN7android18SpeechDriverNormalD1Ev */
/* Demangled: android::SpeechDriverNormal::~SpeechDriverNormal() */
int _ZN7android18SpeechDriverNormalD1Ev(void);

/* Symbol: _ZNK7android6VectorIP7__sFILEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<__sFILE*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP7__sFILEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTVN7android4ListIPNS_7RingBufEEE */
/* Demangled: vtable for android::List<android::RingBuf*> */
extern void* _ZTVN7android4ListIPNS_7RingBufEEE;

/* Symbol: _ZN7android22AudioSmartPaController21setSmartPaCalibrationEi */
/* Demangled: android::AudioSmartPaController::setSmartPaCalibration(int) */
int _ZN7android22AudioSmartPaController21setSmartPaCalibrationEi(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerVoice21getHardwareBufferInfoEP18time_info_struct_t */
/* Demangled: android::AudioALSAPlaybackHandlerVoice::getHardwareBufferInfo(time_info_struct_t*) */
int _ZN7android29AudioALSAPlaybackHandlerVoice21getHardwareBufferInfoEP18time_info_struct_t(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerVoiceC1EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerVoice::AudioALSAPlaybackHandlerVoice(stream_attribute_t const*) */
int _ZN7android29AudioALSAPlaybackHandlerVoiceC1EPK18stream_attribute_t(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase17setThreadPriorityEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::setThreadPriority() */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase17setThreadPriorityEv(void);

/* Symbol: parse_aurisys_config */
/* Demangled: parse_aurisys_config */
int parse_aurisys_config(void);

/* Symbol: _ZTSSt8bad_cast */
/* Demangled: typeinfo name for std::bad_cast */
extern void* _ZTSSt8bad_cast;

/* Symbol: _ZN7android17AudioDspCallFinal11getInstanceEv */
/* Demangled: android::AudioDspCallFinal::getInstance() */
int _ZN7android17AudioDspCallFinal11getInstanceEv(void);

/* Symbol: _ZN7android20GainTableParamParser21mGainTableParamParserE */
/* Demangled: android::GainTableParamParser::mGainTableParamParser */
extern void* _ZN7android20GainTableParamParser21mGainTableParamParserE;

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_grepIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_grep<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_grepIPKcEET_S7_S7_(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload12setFilterMngEPNS_21AudioMTKFilterManagerE */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::setFilterMng(android::AudioMTKFilterManager*) */
int _ZN7android31AudioALSAPlaybackHandlerOffload12setFilterMngEPNS_21AudioMTKFilterManagerE(void);

/* Symbol: _ZN7android16SpeechExtMemCCCID2Ev */
/* Demangled: android::SpeechExtMemCCCI::~SpeechExtMemCCCI() */
int _ZN7android16SpeechExtMemCCCID2Ev(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderVOW32mAudioALSACaptureDataProviderVOWE */
/* Demangled: android::AudioALSACaptureDataProviderVOW::mAudioALSACaptureDataProviderVOW */
extern void* _ZN7android31AudioALSACaptureDataProviderVOW32mAudioALSACaptureDataProviderVOWE;

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal23copyCaptureDataToClientENS_7RingBufE */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::copyCaptureDataToClient(android::RingBuf) */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal23copyCaptureDataToClientENS_7RingBufE(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormalD0Ev */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::~AudioALSAPlaybackHandlerNormal() */
int _ZN7android30AudioALSAPlaybackHandlerNormalD0Ev(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerSyncIO7routingEj */
/* Demangled: android::AudioALSACaptureHandlerSyncIO::routing(unsigned int) */
int _ZN7android29AudioALSACaptureHandlerSyncIO7routingEj(void);

/* Symbol: _ZN7android27AudioALSALoopbackControllerD1Ev */
/* Demangled: android::AudioALSALoopbackController::~AudioALSALoopbackController() */
int _ZN7android27AudioALSALoopbackControllerD1Ev(void);

/* Symbol: _ZN7android17AudioALSAStreamIn4stopEv */
/* Demangled: android::AudioALSAStreamIn::stop() */
int _ZN7android17AudioALSAStreamIn4stopEv(void);

/* Symbol: _ZN7android19keypcmI2SAwbCaptureE */
/* Demangled: android::keypcmI2SAwbCapture */
extern void* _ZN7android19keypcmI2SAwbCaptureE;

/* Symbol: _ZN7android25CVSDLoopbackWriteDataDoneEj */
/* Demangled: android::CVSDLoopbackWriteDataDone(unsigned int) */
int _ZN7android25CVSDLoopbackWriteDataDoneEj(void);

/* Symbol: _ZN7android17SpeechDriverDummy20SetDownlinkMuteCodecEb */
/* Demangled: android::SpeechDriverDummy::SetDownlinkMuteCodec(bool) */
int _ZN7android17SpeechDriverDummy20SetDownlinkMuteCodecEb(void);

/* Symbol: _ZN7android34AudioALSACodecDeviceOutSpeakerPMICC2Ev */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerPMIC::AudioALSACodecDeviceOutSpeakerPMIC() */
int _ZN7android34AudioALSACodecDeviceOutSpeakerPMICC2Ev(void);

/* Symbol: _ZN7android19DeviceCtlDescriptorC2Ev */
/* Demangled: android::DeviceCtlDescriptor::DeviceCtlDescriptor() */
int _ZN7android19DeviceCtlDescriptorC2Ev(void);

/* Symbol: _ZN7android21AudioALSADeviceParser18GetAllPcmAttributeEv */
/* Demangled: android::AudioALSADeviceParser::GetAllPcmAttribute() */
int _ZN7android21AudioALSADeviceParser18GetAllPcmAttributeEv(void);

/* Symbol: _ZN7android8Play2Way5WriteEPvi */
/* Demangled: android::Play2Way::Write(void*, int) */
int _ZN7android8Play2Way5WriteEPvi(void);

/* Symbol: _ZN7android27AudioALSALoopbackController11getInstanceEv */
/* Demangled: android::AudioALSALoopbackController::getInstance() */
int _ZN7android27AudioALSALoopbackController11getInstanceEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase20processDmaMsgWrapperEP9ipi_msg_tPvjS3_ */
/* Demangled: android::AudioALSAPlaybackHandlerBase::processDmaMsgWrapper(ipi_msg_t*, void*, unsigned int, void*) */
int _ZN7android28AudioALSAPlaybackHandlerBase20processDmaMsgWrapperEP9ipi_msg_tPvjS3_(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderFMRadioC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderFMRadio::AudioALSACaptureDataProviderFMRadio() */
int _ZN7android35AudioALSACaptureDataProviderFMRadioC2Ev(void);

/* Symbol: _ZN7android31AudioALSASpeechStreamControllerD0Ev */
/* Demangled: android::AudioALSASpeechStreamController::~AudioALSASpeechStreamController() */
int _ZN7android31AudioALSASpeechStreamControllerD0Ev(void);

/* Symbol: _ZN7android25SpeechPcmMixerTelephonyTxC1Ev */
/* Demangled: android::SpeechPcmMixerTelephonyTx::SpeechPcmMixerTelephonyTx() */
int _ZN7android25SpeechPcmMixerTelephonyTxC1Ev(void);

/* Symbol: _ZNSt3__15dequeIPN7android10BufferDumpENS_9allocatorIS3_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::BufferDump*, std::__1::allocator<android::BufferDump*> >::__add_back_capacity() */
int _ZNSt3__15dequeIPN7android10BufferDumpENS_9allocatorIS3_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN7android22AudioSmartPaController6deinitEv */
/* Demangled: android::AudioSmartPaController::deinit() */
int _ZN7android22AudioSmartPaController6deinitEv(void);

/* Symbol: _ZN7android17AudioALSAHardware14xWayPlay_StartEi */
/* Demangled: android::AudioALSAHardware::xWayPlay_Start(int) */
int _ZN7android17AudioALSAHardware14xWayPlay_StartEi(void);

/* Symbol: delete_aurisys_config */
/* Demangled: delete_aurisys_config */
int delete_aurisys_config(void);

/* Symbol: _ZN7android12SpeechConfig15getEchoRefParamEPh */
/* Demangled: android::SpeechConfig::getEchoRefParam(unsigned char*) */
int _ZN7android12SpeechConfig15getEchoRefParamEPh(void);

/* Symbol: _ZN7android17AudioMessengerIPI14registerDmaCbkEhjjPFvP9ipi_msg_tPvjS3_ES3_ */
/* Demangled: android::AudioMessengerIPI::registerDmaCbk(unsigned char, unsigned int, unsigned int, void (*)(ipi_msg_t*, void*, unsigned int, void*), void*) */
int _ZN7android17AudioMessengerIPI14registerDmaCbkEhjjPFvP9ipi_msg_tPvjS3_ES3_(void);

/* Symbol: _ZN7android22AudioALSAStreamManager15setMasterVolumeEfj */
/* Demangled: android::AudioALSAStreamManager::setMasterVolume(float, unsigned int) */
int _ZN7android22AudioALSAStreamManager15setMasterVolumeEfj(void);

/* Symbol: _ZNKSt3__112regex_traitsIcE20__lookup_collatenameINS_11__wrap_iterIPKcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SD_c */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__lookup_collatename<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>, char) const */
int _ZNKSt3__112regex_traitsIcE20__lookup_collatenameINS_11__wrap_iterIPKcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SD_c(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_expression_termIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_expression_term<char const*>(char const*, char const*, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_expression_termIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE(void);

/* Symbol: _ZN7android22AudioALSAStreamManager16audioDspStopWrapEPv */
/* Demangled: android::AudioALSAStreamManager::audioDspStopWrap(void*) */
int _ZN7android22AudioALSAStreamManager16audioDspStopWrapEPv(void);

/* Symbol: _ZN7android17AudioVIBSPKVsgGenC1Ev */
/* Demangled: android::AudioVIBSPKVsgGen::AudioVIBSPKVsgGen() */
int _ZN7android17AudioVIBSPKVsgGenC1Ev(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp14closePcmDriverEv */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::closePcmDriver() */
int _ZN7android27AudioALSAPlaybackHandlerDsp14closePcmDriverEv(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtv13enableKtvTaskEb */
/* Demangled: android::AudioALSAHandlerKtv::enableKtvTask(bool) */
int _ZN7android19AudioALSAHandlerKtv13enableKtvTaskEb(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer22configPrimaryAttributeEP18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::configPrimaryAttribute(stream_attribute_t*) */
int _ZN7android29AudioALSAPlaybackHandlerMixer22configPrimaryAttributeEP18stream_attribute_t(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController29setVoiceWakeUpDebugDumpEnableEb */
/* Demangled: android::AudioALSAVoiceWakeUpController::setVoiceWakeUpDebugDumpEnable(bool) */
int _ZN7android30AudioALSAVoiceWakeUpController29setVoiceWakeUpDebugDumpEnableEb(void);

/* Symbol: _ZN7android17WCNChipController11GetInstanceEv */
/* Demangled: android::WCNChipController::GetInstance() */
int _ZN7android17WCNChipController11GetInstanceEv(void);

/* Symbol: _ZN7android23PROPERTY_KEY_2IN1SPK_ONE */
/* Demangled: android::PROPERTY_KEY_2IN1SPK_ON */
extern void* _ZN7android23PROPERTY_KEY_2IN1SPK_ONE;

/* Symbol: _ZN7android31AudioALSACaptureDataProviderUsbC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderUsb::AudioALSACaptureDataProviderUsb() */
int _ZN7android31AudioALSACaptureDataProviderUsbC2Ev(void);

/* Symbol: _ZN7android8AudioFtm14ATV_AudioWriteEPvj */
/* Demangled: android::AudioFtm::ATV_AudioWrite(void*, unsigned int) */
int _ZN7android8AudioFtm14ATV_AudioWriteEPvj(void);

/* Symbol: _ZN7android21SpeechMessengerNormal15checkModemReadyEv */
/* Demangled: android::SpeechMessengerNormal::checkModemReady() */
int _ZN7android21SpeechMessengerNormal15checkModemReadyEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager15setAnalogVolumeEiiib */
/* Demangled: android::AudioALSAStreamManager::setAnalogVolume(int, int, int, bool) */
int _ZN7android22AudioALSAStreamManager15setAnalogVolumeEiiib(void);

/* Symbol: _ZTVNSt3__110__r_anchorIcEE */
/* Demangled: vtable for std::__1::__r_anchor<char> */
extern void* _ZTVNSt3__110__r_anchorIcEE;

/* Symbol: _ZN7android35AudioALSACaptureDataProviderFMRadio5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderFMRadio::close() */
int _ZN7android35AudioALSACaptureDataProviderFMRadio5closeEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager17CloseReceiverPathEv */
/* Demangled: android::AudioALSAHardwareResourceManager::CloseReceiverPath() */
int _ZN7android32AudioALSAHardwareResourceManager17CloseReceiverPathEv(void);

/* Symbol: get_input_ch_mask */
/* Demangled: get_input_ch_mask */
int get_input_ch_mask(void);

/* Symbol: _ZN7android24AudioThrottleTimeControl16calculateSleepUsEy18stream_attribute_t */
/* Demangled: android::AudioThrottleTimeControl::calculateSleepUs(unsigned long long, stream_attribute_t) */
int _ZN7android24AudioThrottleTimeControl16calculateSleepUsEy18stream_attribute_t(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager23GetExtDacPropertyEnableEv */
/* Demangled: android::AudioALSAHardwareResourceManager::GetExtDacPropertyEnable() */
int _ZN7android32AudioALSAHardwareResourceManager23GetExtDacPropertyEnableEv(void);

/* Symbol: _ZN7android8AudioFtm14EarphoneTestLREc */
/* Demangled: android::AudioFtm::EarphoneTestLR(char) */
int _ZN7android8AudioFtm14EarphoneTestLREc(void);

/* Symbol: _ZN7android22AudioSmartPaController17getSmartPaDelayUsEi */
/* Demangled: android::AudioSmartPaController::getSmartPaDelayUs(int) */
int _ZN7android22AudioSmartPaController17getSmartPaDelayUsEi(void);

/* Symbol: _ZN7android22AudioALSAStreamManager20setVoiceWakeUpNeedOnEb */
/* Demangled: android::AudioALSAStreamManager::setVoiceWakeUpNeedOn(bool) */
int _ZN7android22AudioALSAStreamManager20setVoiceWakeUpNeedOnEb(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerBTSCOD2Ev */
/* Demangled: android::AudioALSAPlaybackHandlerBTSCO::~AudioALSAPlaybackHandlerBTSCO() */
int _ZN7android29AudioALSAPlaybackHandlerBTSCOD2Ev(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase12mDumpFileNumE */
/* Demangled: android::AudioALSACaptureDataProviderBase::mDumpFileNum */
extern void* _ZN7android32AudioALSACaptureDataProviderBase12mDumpFileNumE;

/* Symbol: _ZTVN7android36AudioALSACaptureDataProviderVoiceMixE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderVoiceMix */
extern void* _ZTVN7android36AudioALSACaptureDataProviderVoiceMixE;

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerVoice5writeEPKvj */
/* Demangled: android::AudioALSAPlaybackHandlerVoice::write(void const*, unsigned int) */
int _ZN7android29AudioALSAPlaybackHandlerVoice5writeEPKvj(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase11initLogFlagEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::initLogFlag() */
int _ZN7android28AudioALSAPlaybackHandlerBase11initLogFlagEv(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo13SetHifiRecordEb */
/* Demangled: android::AudioSpeechEnhanceInfo::SetHifiRecord(bool) */
int _ZN7android22AudioSpeechEnhanceInfo13SetHifiRecordEb(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_nondupl_REINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_nondupl_RE<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_nondupl_REINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZN7android32AudioALSACaptureDataClientSyncIOD2Ev */
/* Demangled: android::AudioALSACaptureDataClientSyncIO::~AudioALSACaptureDataClientSyncIO() */
int _ZN7android32AudioALSACaptureDataClientSyncIOD2Ev(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManager4dumpEv */
/* Demangled: android::AudioALSADeviceConfigManager::dump() */
int _ZN7android28AudioALSADeviceConfigManager4dumpEv(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController10setTtyModeENS_11TtyModeTypeEi */
/* Demangled: android::AudioALSASpeechPhoneCallController::setTtyMode(android::TtyModeType, int) */
int _ZN7android34AudioALSASpeechPhoneCallController10setTtyModeENS_11TtyModeTypeEi(void);

/* Symbol: _ZN7android19AudioALSAParamTunerD1Ev */
/* Demangled: android::AudioALSAParamTuner::~AudioALSAParamTuner() */
int _ZN7android19AudioALSAParamTunerD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamIn*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android22AudioALSADataProcessor23mAudioALSADataProcessorE */
/* Demangled: android::AudioALSADataProcessor::mAudioALSADataProcessor */
extern void* _ZN7android22AudioALSADataProcessor23mAudioALSADataProcessorE;

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager23getSupportRunNLEHandlerEv */
/* Demangled: android::AudioALSAHyBridNLEManager::getSupportRunNLEHandler() */
int _ZN7android25AudioALSAHyBridNLEManager23getSupportRunNLEHandlerEv(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormalC1EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_tS2_ */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::AudioALSACaptureDataClientAurisysNormal(android::AudioALSACaptureDataProviderBase*, stream_attribute_t*, android::AudioALSACaptureDataProviderBase*) */
int _ZN7android39AudioALSACaptureDataClientAurisysNormalC1EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_tS2_(void);

/* Symbol: _ZN7android16keypcmExtHpMediaE */
/* Demangled: android::keypcmExtHpMedia */
extern void* _ZN7android16keypcmExtHpMediaE;

/* Symbol: _ZN7android27SpeechDataProcessingHandlerC2Ev */
/* Demangled: android::SpeechDataProcessingHandler::SpeechDataProcessingHandler() */
int _ZN7android27SpeechDataProcessingHandlerC2Ev(void);

/* Symbol: _ZN7android16AudioALSANLECtrl24setMaxSPLintoSpecificPosEj */
/* Demangled: android::AudioALSANLECtrl::setMaxSPLintoSpecificPos(unsigned int) */
int _ZN7android16AudioALSANLECtrl24setMaxSPLintoSpecificPosEj(void);

/* Symbol: audio_sample_rate_get_max_rate */
/* Demangled: audio_sample_rate_get_max_rate */
int audio_sample_rate_get_max_rate(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase6detachEPNS_27IAudioALSACaptureDataClientE */
/* Demangled: android::AudioALSACaptureDataProviderBase::detach(android::IAudioALSACaptureDataClient*) */
int _ZN7android32AudioALSACaptureDataProviderBase6detachEPNS_27IAudioALSACaptureDataClientE(void);

/* Symbol: _ZN7android22AudioMTKGainController14setVoiceVolumeEii12audio_mode_t */
/* Demangled: android::AudioMTKGainController::setVoiceVolume(int, int, audio_mode_t) */
int _ZN7android22AudioMTKGainController14setVoiceVolumeEii12audio_mode_t(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase12deinitBliSrcEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::deinitBliSrc() */
int _ZN7android28AudioALSAPlaybackHandlerBase12deinitBliSrcEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager7setModeE12audio_mode_t */
/* Demangled: android::AudioALSAStreamManager::setMode(audio_mode_t) */
int _ZN7android22AudioALSAStreamManager7setModeE12audio_mode_t(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient14SetCaptureGainEv */
/* Demangled: android::AudioALSACaptureDataClient::SetCaptureGain() */
int _ZN7android26AudioALSACaptureDataClient14SetCaptureGainEv(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerANCD2Ev */
/* Demangled: android::AudioALSACaptureHandlerANC::~AudioALSACaptureHandlerANC() */
int _ZN7android26AudioALSACaptureHandlerANCD2Ev(void);

/* Symbol: _ZN7android17AudioALSAStreamIn20getActiveMicrophonesEP33audio_microphone_characteristic_tPj */
/* Demangled: android::AudioALSAStreamIn::getActiveMicrophones(audio_microphone_characteristic_t*, unsigned int*) */
int _ZN7android17AudioALSAStreamIn20getActiveMicrophonesEP33audio_microphone_characteristic_tPj(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerVOWD1Ev */
/* Demangled: android::AudioALSACaptureHandlerVOW::~AudioALSACaptureHandlerVOW() */
int _ZN7android26AudioALSACaptureHandlerVOWD1Ev(void);

/* Symbol: _ZN7android27getPcmMixerLogEnableByLevelEj */
/* Demangled: android::getPcmMixerLogEnableByLevel(unsigned int) */
int _ZN7android27getPcmMixerLogEnableByLevelEj(void);

/* Symbol: _ZN7android30PROPERTY_KEY_PCM_MIXER_DUMP_ONE */
/* Demangled: android::PROPERTY_KEY_PCM_MIXER_DUMP_ON */
extern void* _ZN7android30PROPERTY_KEY_PCM_MIXER_DUMP_ONE;

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_ERE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ERE_dupl_symbol<char const*>(char const*, char const*, std::__1::__owns_one_state<char>*, unsigned int, unsigned int) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_ERE_dupl_symbolIPKcEET_S7_S7_PNS_16__owns_one_stateIcEEjj(void);

/* Symbol: _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCO11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTSCO::getInstance() */
int _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCO11getInstanceEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager12setCustSceneENS_7String8E */
/* Demangled: android::AudioALSAStreamManager::setCustScene(android::String8) */
int _ZN7android22AudioALSAStreamManager12setCustSceneENS_7String8E(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderVoiceMix4openEv */
/* Demangled: android::AudioALSACaptureDataProviderVoiceMix::open() */
int _ZN7android36AudioALSACaptureDataProviderVoiceMix4openEv(void);

/* Symbol: _ZN7android33AudioALSASpeechLoopbackController11getInstanceEv */
/* Demangled: android::AudioALSASpeechLoopbackController::getInstance() */
int _ZN7android33AudioALSASpeechLoopbackController11getInstanceEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderUsb11initUsbInfoE18stream_attribute_tP17alsa_device_proxyjb */
/* Demangled: android::AudioALSACaptureDataProviderUsb::initUsbInfo(stream_attribute_t, alsa_device_proxy*, unsigned int, bool) */
int _ZN7android31AudioALSACaptureDataProviderUsb11initUsbInfoE18stream_attribute_tP17alsa_device_proxyjb(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController9setUlMuteEb */
/* Demangled: android::AudioALSASpeechPhoneCallController::setUlMute(bool) */
int _ZN7android34AudioALSASpeechPhoneCallController9setUlMuteEb(void);

/* Symbol: _ZN7android17AudioALSAStreamIn5startEv */
/* Demangled: android::AudioALSAStreamIn::start() */
int _ZN7android17AudioALSAStreamIn5startEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager24OpenHeadphoneSpeakerPathEj */
/* Demangled: android::AudioALSAHardwareResourceManager::OpenHeadphoneSpeakerPath(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager24OpenHeadphoneSpeakerPathEj(void);

/* Symbol: _ZN7android17AudioALSAHardware18mAudioALSAHardwareE */
/* Demangled: android::AudioALSAHardware::mAudioALSAHardware */
extern void* _ZN7android17AudioALSAHardware18mAudioALSAHardwareE;

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerBTCVSD10getLatencyEv */
/* Demangled: android::AudioALSAPlaybackHandlerBTCVSD::getLatency() */
int _ZN7android30AudioALSAPlaybackHandlerBTCVSD10getLatencyEv(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutEarphonePMIC4openEv */
/* Demangled: android::AudioALSACodecDeviceOutEarphonePMIC::open() */
int _ZN7android35AudioALSACodecDeviceOutEarphonePMIC4openEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderVOW11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderVOW::getInstance() */
int _ZN7android31AudioALSACaptureDataProviderVOW11getInstanceEv(void);

/* Symbol: get_time_diff_ms */
/* Demangled: get_time_diff_ms */
int get_time_diff_ms(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_ERE_branchINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ERE_branch<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_ERE_branchINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZTVN7android40AudioALSACaptureDataProviderEchoRefBTSCOE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderEchoRefBTSCO */
extern void* _ZTVN7android40AudioALSACaptureDataProviderEchoRefBTSCOE;

/* Symbol: _ZTVN7android27AudioALSAPlaybackHandlerDspE */
/* Demangled: vtable for android::AudioALSAPlaybackHandlerDsp */
extern void* _ZTVN7android27AudioALSAPlaybackHandlerDspE;

/* Symbol: _ZN7android12AudioFtmBase14ReadAuxadcDataEiPi */
/* Demangled: android::AudioFtmBase::ReadAuxadcData(int, int*) */
int _ZN7android12AudioFtmBase14ReadAuxadcDataEiPi(void);

/* Symbol: _ZN7android17AudioALSAHardware13setMasterMuteEb */
/* Demangled: android::AudioALSAHardware::setMasterMute(bool) */
int _ZN7android17AudioALSAHardware13setMasterMuteEb(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload17process_writewaitEv */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::process_writewait() */
int _ZN7android31AudioALSAPlaybackHandlerOffload17process_writewaitEv(void);

/* Symbol: _ZN7android24keypcmHostlessSphEchoRefE */
/* Demangled: android::keypcmHostlessSphEchoRef */
extern void* _ZN7android24keypcmHostlessSphEchoRefE;

/* Symbol: _ZN7android15AudioPreProcess16WriteEchoRefDataEPvjPK18time_info_struct_t */
/* Demangled: android::AudioPreProcess::WriteEchoRefData(void*, unsigned int, time_info_struct_t const*) */
int _ZN7android15AudioPreProcess16WriteEchoRefDataEPvjPK18time_info_struct_t(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<std::__1::__empty_state<char>*, std::__1::default_delete<std::__1::__empty_state<char> >, std::__1::allocator<std::__1::__empty_state<char> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN7android21speakerStatusChangeCbENS_12DeviceStatusEj */
/* Demangled: android::speakerStatusChangeCb(android::DeviceStatus, unsigned int) */
int _ZN7android21speakerStatusChangeCbENS_12DeviceStatusEj(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase4stopEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::stop() */
int _ZN7android32AudioALSACaptureDataProviderBase4stopEv(void);

/* Symbol: _ZN7android29AudioALSACaptureDataClientDsp19IsLowLatencyCaptureEv */
/* Demangled: android::AudioALSACaptureDataClientDsp::IsLowLatencyCapture() */
int _ZN7android29AudioALSACaptureDataClientDsp19IsLowLatencyCaptureEv(void);

/* Symbol: _ZN7android17AudioMessengerIPI16deregisterDmaCbkEh */
/* Demangled: android::AudioMessengerIPI::deregisterDmaCbk(unsigned char) */
int _ZN7android17AudioMessengerIPI16deregisterDmaCbkEh(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutReceiverPMIC11getInstanceEv */
/* Demangled: android::AudioALSACodecDeviceOutReceiverPMIC::getInstance() */
int _ZN7android35AudioALSACodecDeviceOutReceiverPMIC11getInstanceEv(void);

/* Symbol: _ZN7android25keypcmHpimpedancePlaybackE */
/* Demangled: android::keypcmHpimpedancePlayback */
extern void* _ZN7android25keypcmHpimpedancePlaybackE;

/* Symbol: _ZN7android15AudioPreProcess11MutexUnlockEv */
/* Demangled: android::AudioPreProcess::MutexUnlock() */
int _ZN7android15AudioPreProcess11MutexUnlockEv(void);

/* Symbol: _ZN7android18AudioALSAStreamOut5flushEv */
/* Demangled: android::AudioALSAStreamOut::flush() */
int _ZN7android18AudioALSAStreamOut5flushEv(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerAAudio4stopEv */
/* Demangled: android::AudioALSAPlaybackHandlerAAudio::stop() */
int _ZN7android30AudioALSAPlaybackHandlerAAudio4stopEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager17EnableAudBufClk_lEb */
/* Demangled: android::AudioALSAHardwareResourceManager::EnableAudBufClk_l(bool) */
int _ZN7android32AudioALSAHardwareResourceManager17EnableAudBufClk_lEb(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAPlaybackHandlerBase*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEE10do_destroyEPvj(void);

/* Symbol: _ZN7android17AudioVIBSPKVsgGenD2Ev */
/* Demangled: android::AudioVIBSPKVsgGen::~AudioVIBSPKVsgGen() */
int _ZN7android17AudioVIBSPKVsgGenD2Ev(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController17deinitDataPendingEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::deinitDataPending(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController17deinitDataPendingEPNS_9USBStreamE(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerUsb5closeEv */
/* Demangled: android::AudioALSACaptureHandlerUsb::close() */
int _ZN7android26AudioALSACaptureHandlerUsb5closeEv(void);

/* Symbol: _ZTTN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadE */
/* Demangled: VTT for android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread */
extern void* _ZTTN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadE;

/* Symbol: _ZTVN7android22AudioALSADriverUtilityE */
/* Demangled: vtable for android::AudioALSADriverUtility */
extern void* _ZTVN7android22AudioALSADriverUtilityE;

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController4initEv */
/* Demangled: android::AudioALSASpeechPhoneCallController::init() */
int _ZN7android34AudioALSASpeechPhoneCallController4initEv(void);

/* Symbol: _ZN7android17AudioALSAStreamIn21getCaptureHandlerTypeEv */
/* Demangled: android::AudioALSAStreamIn::getCaptureHandlerType() */
int _ZN7android17AudioALSAStreamIn21getCaptureHandlerTypeEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager19UpdateMagiConParamsEv */
/* Demangled: android::AudioALSAStreamManager::UpdateMagiConParams() */
int _ZN7android22AudioALSAStreamManager19UpdateMagiConParamsEv(void);

/* Symbol: _ZNK7android18SpeechDriverNormal22GetRecordChannelNumberEv */
/* Demangled: android::SpeechDriverNormal::GetRecordChannelNumber() const */
int _ZNK7android18SpeechDriverNormal22GetRecordChannelNumberEv(void);

/* Symbol: _ZN7android16SpeechExtMemCCCI26writeSphParamToShareMemoryEPKvjPj */
/* Demangled: android::SpeechExtMemCCCI::writeSphParamToShareMemory(void const*, unsigned int, unsigned int*) */
int _ZN7android16SpeechExtMemCCCI26writeSphParamToShareMemoryEPKvjPj(void);

/* Symbol: _ZN7android10keypcmHDMIE */
/* Demangled: android::keypcmHDMI */
extern void* _ZN7android10keypcmHDMIE;

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase16WritePcmDumpDataEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::WritePcmDumpData() */
int _ZN7android32AudioALSACaptureDataProviderBase16WritePcmDumpDataEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSD33updateCaptureTimeStampByStartTimeEj */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::updateCaptureTimeStampByStartTime(unsigned int) */
int _ZN7android34AudioALSACaptureDataProviderBTCVSD33updateCaptureTimeStampByStartTimeEj(void);

/* Symbol: _ZN7android18AudioALSAStreamOut4openEv */
/* Demangled: android::AudioALSAStreamOut::open() */
int _ZN7android18AudioALSAStreamOut4openEv(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp24openDspPcmDriverWithFlagEjj */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::openDspPcmDriverWithFlag(unsigned int, unsigned int) */
int _ZN7android27AudioALSAPlaybackHandlerDsp24openDspPcmDriverWithFlagEjj(void);

/* Symbol: _ZN7android13getAudioFieldENS_7String8E */
/* Demangled: android::getAudioField(android::String8) */
int _ZN7android13getAudioFieldENS_7String8E(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderHAP4openEv */
/* Demangled: android::AudioALSACaptureDataProviderHAP::open() */
int _ZN7android31AudioALSACaptureDataProviderHAP4openEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl20BT_SCO_InitialModuleENS0_13BT_SCO_MODULEEPh */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_InitialModule(android::AudioBTCVSDControl::BT_SCO_MODULE, unsigned char*) */
int _ZN7android18AudioBTCVSDControl20BT_SCO_InitialModuleENS0_13BT_SCO_MODULEEPh(void);

/* Symbol: _ZN7android21AudioDspStreamManagerC2Ev */
/* Demangled: android::AudioDspStreamManager::AudioDspStreamManager() */
int _ZN7android21AudioDspStreamManagerC2Ev(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE26__parse_bracket_expressionIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_bracket_expression<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE26__parse_bracket_expressionIPKcEET_S7_S7_(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsbD1Ev */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::~AudioALSAPlaybackHandlerUsb() */
int _ZN7android27AudioALSAPlaybackHandlerUsbD1Ev(void);

/* Symbol: _ZN7android22AudioSmartPaController14initSpkAmpTypeEv */
/* Demangled: android::AudioSmartPaController::initSpkAmpType() */
int _ZN7android22AudioSmartPaController14initSpkAmpTypeEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal13TelephonyTxOnEt */
/* Demangled: android::SpeechDriverNormal::TelephonyTxOn(unsigned short) */
int _ZN7android18SpeechDriverNormal13TelephonyTxOnEt(void);

/* Symbol: _ZTV19PowerDeathRecipient */
/* Demangled: vtable for PowerDeathRecipient */
extern void* _ZTV19PowerDeathRecipient;

/* Symbol: _ZN7android22AudioALSAStreamManager16SetBtHeadsetNrecEb */
/* Demangled: android::AudioALSAStreamManager::SetBtHeadsetNrec(bool) */
int _ZN7android22AudioALSAStreamManager16SetBtHeadsetNrecEb(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderBTSCOC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderBTSCO::AudioALSACaptureDataProviderBTSCO() */
int _ZN7android33AudioALSACaptureDataProviderBTSCOC1Ev(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase16writeWavDumpDataEPKvj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::writeWavDumpData(void const*, unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerBase16writeWavDumpDataEPKvj(void);

/* Symbol: _ZN7android18SpeechDriverNormal24modemStatusMonitorThreadEPv */
/* Demangled: android::SpeechDriverNormal::modemStatusMonitorThread(void*) */
int _ZN7android18SpeechDriverNormal24modemStatusMonitorThreadEPv(void);

/* Symbol: _ZN7android18SpeechDriverNormal9SpeechOffEv */
/* Demangled: android::SpeechDriverNormal::SpeechOff() */
int _ZN7android18SpeechDriverNormal9SpeechOffEv(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormalD1Ev */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::~AudioALSACaptureDataClientAurisysNormal() */
int _ZN7android39AudioALSACaptureDataClientAurisysNormalD1Ev(void);

/* Symbol: _ZN7android24AudioThrottleTimeControl18resetTimeStampInfoEv */
/* Demangled: android::AudioThrottleTimeControl::resetTimeStampInfo() */
int _ZN7android24AudioThrottleTimeControl18resetTimeStampInfoEv(void);

/* Symbol: _ZNK7android34AudioALSASpeechPhoneCallController11isTtyDeviceEj */
/* Demangled: android::AudioALSASpeechPhoneCallController::isTtyDevice(unsigned int) const */
int _ZNK7android34AudioALSASpeechPhoneCallController11isTtyDeviceEj(void);

/* Symbol: _ZN7android8SPELayer20WriteReferenceBufferEPNS_12InBufferInfoE */
/* Demangled: android::SPELayer::WriteReferenceBuffer(android::InBufferInfo*) */
int _ZN7android8SPELayer20WriteReferenceBufferEPNS_12InBufferInfoE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAPlaybackHandlerBase*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEEE;

/* Symbol: _ZN7android23AudioEventThreadManagerD2Ev */
/* Demangled: android::AudioEventThreadManager::~AudioEventThreadManager() */
int _ZN7android23AudioEventThreadManagerD2Ev(void);

/* Symbol: _ZTSSt12length_error */
/* Demangled: typeinfo name for std::length_error */
extern void* _ZTSSt12length_error;

/* Symbol: _ZN7android19SpeechDriverOpenDSP15SetDownlinkGainEs */
/* Demangled: android::SpeechDriverOpenDSP::SetDownlinkGain(short) */
int _ZN7android19SpeechDriverOpenDSP15SetDownlinkGainEs(void);

/* Symbol: _ZN7android13streamout_oriE */
/* Demangled: android::streamout_ori */
extern void* _ZN7android13streamout_oriE;

/* Symbol: _ZN7android17keypcmVoiceCallBTE */
/* Demangled: android::keypcmVoiceCallBT */
extern void* _ZN7android17keypcmVoiceCallBTE;

/* Symbol: _ZN7android27AudioUSBPhoneCallController11getLpbkTimeEjPvjjjj */
/* Demangled: android::AudioUSBPhoneCallController::getLpbkTime(unsigned int, void*, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN7android27AudioUSBPhoneCallController11getLpbkTimeEjPvjjjj(void);

/* Symbol: _ZN7android21AudioDspStreamManager15openPCMDumpA2DPEPNS_28AudioALSAPlaybackHandlerBaseE */
/* Demangled: android::AudioDspStreamManager::openPCMDumpA2DP(android::AudioALSAPlaybackHandlerBase*) */
int _ZN7android21AudioDspStreamManager15openPCMDumpA2DPEPNS_28AudioALSAPlaybackHandlerBaseE(void);

/* Symbol: aurisys_set_ul_digital_gain */
/* Demangled: aurisys_set_ul_digital_gain */
int aurisys_set_ul_digital_gain(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontEOS3_ */
/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*> >::push_front(std::__1::__state<char>*&&) */
int _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontEOS3_(void);

/* Symbol: _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCOD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTSCO::~AudioALSACaptureDataProviderEchoRefBTSCO() */
int _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCOD1Ev(void);

/* Symbol: _ZN7android28PROPERTY_KEY_FIRSTBOOT_STATEE */
/* Demangled: android::PROPERTY_KEY_FIRSTBOOT_STATE */
extern void* _ZN7android28PROPERTY_KEY_FIRSTBOOT_STATEE;

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase12setFilterMngEPNS_21AudioMTKFilterManagerE */
/* Demangled: android::AudioALSAPlaybackHandlerBase::setFilterMng(android::AudioMTKFilterManager*) */
int _ZN7android28AudioALSAPlaybackHandlerBase12setFilterMngEPNS_21AudioMTKFilterManagerE(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFast5writeEPKvj */
/* Demangled: android::AudioALSAPlaybackHandlerFast::write(void const*, unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerFast5writeEPKvj(void);

/* Symbol: _ZN7android17AudioALSAStreamIn17removeAudioEffectEPP18effect_interface_s */
/* Demangled: android::AudioALSAStreamIn::removeAudioEffect(effect_interface_s**) */
int _ZN7android17AudioALSAStreamIn17removeAudioEffectEPP18effect_interface_s(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtv20processDmaMsgWrapperEP9ipi_msg_tPvjS3_ */
/* Demangled: android::AudioALSAHandlerKtv::processDmaMsgWrapper(ipi_msg_t*, void*, unsigned int, void*) */
int _ZN7android19AudioALSAHandlerKtv20processDmaMsgWrapperEP9ipi_msg_tPvjS3_(void);

/* Symbol: _ZN7android22AudioSmartPaController15getI2sOutSelectEv */
/* Demangled: android::AudioSmartPaController::getI2sOutSelect() */
int _ZN7android22AudioSmartPaController15getI2sOutSelectEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl21BT_SCO_ExtMDDLBufLockEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMDDLBufLock() */
int _ZN7android18AudioBTCVSDControl21BT_SCO_ExtMDDLBufLockEv(void);

/* Symbol: _ZN7android18SpeechMessageQueue12frontElementEPPNS_9sph_msg_tEPj */
/* Demangled: android::SpeechMessageQueue::frontElement(android::sph_msg_t**, unsigned int*) */
int _ZN7android18SpeechMessageQueue12frontElementEPPNS_9sph_msg_tEPj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager31isModeInPhoneCallSupportEchoRefE12audio_mode_t */
/* Demangled: android::AudioALSAStreamManager::isModeInPhoneCallSupportEchoRef(audio_mode_t) */
int _ZN7android22AudioALSAStreamManager31isModeInPhoneCallSupportEchoRefE12audio_mode_t(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase21getHardwareBufferInfoEP18time_info_struct_t */
/* Demangled: android::AudioALSAPlaybackHandlerBase::getHardwareBufferInfo(time_info_struct_t*) */
int _ZN7android28AudioALSAPlaybackHandlerBase21getHardwareBufferInfoEP18time_info_struct_t(void);

/* Symbol: _ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__lookup_collatename<char*>(char*, char*, char) const */
int _ZNKSt3__112regex_traitsIcE20__lookup_collatenameIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c(void);

/* Symbol: _ZN7android18AudioBTCVSDControl15BT_SCO_TX_BeginEijj */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_TX_Begin(int, unsigned int, unsigned int) */
int _ZN7android18AudioBTCVSDControl15BT_SCO_TX_BeginEijj(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsb11getDeviceIdEPNS_9USBStreamE */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::getDeviceId(android::USBStream*) */
int _ZN7android27AudioALSAPlaybackHandlerUsb11getDeviceIdEPNS_9USBStreamE(void);

/* Symbol: _ZN7android17AudioALSAStreamIn24calculateCapturePositionEPxS1_ */
/* Demangled: android::AudioALSAStreamIn::calculateCapturePosition(long long*, long long*) */
int _ZN7android17AudioALSAStreamIn24calculateCapturePositionEPxS1_(void);

/* Symbol: _ZN7android22AudioALSAStreamManager17setLoopbackEnableEb */
/* Demangled: android::AudioALSAStreamManager::setLoopbackEnable(bool) */
int _ZN7android22AudioALSAStreamManager17setLoopbackEnableEb(void);

/* Symbol: _ZN7android20speech_ccci_smem_putEiPhj */
/* Demangled: android::speech_ccci_smem_put(int, unsigned char*, unsigned int) */
int _ZN7android20speech_ccci_smem_putEiPhj(void);

/* Symbol: _ZN7android22AudioMTKGainController17allocateGainTableEv */
/* Demangled: android::AudioMTKGainController::allocateGainTable() */
int _ZN7android22AudioMTKGainController17allocateGainTableEv(void);

/* Symbol: _ZNK7android19SpeechDriverOpenDSP19GetRecordSampleRateEv */
/* Demangled: android::SpeechDriverOpenDSP::GetRecordSampleRate() const */
int _ZNK7android19SpeechDriverOpenDSP19GetRecordSampleRateEv(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE18__construct_at_endINS_20regex_token_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESJ_SJ_j */
/* Demangled: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE18__construct_at_endINS_20regex_token_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESJ_SJ_j */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE18__construct_at_endINS_20regex_token_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESJ_SJ_j(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceDL11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderVoiceDL::getInstance() */
int _ZN7android35AudioALSACaptureDataProviderVoiceDL11getInstanceEv(void);

/* Symbol: _ZN7android10Record2Way11GetInstanceEv */
/* Demangled: android::Record2Way::GetInstance() */
int _ZN7android10Record2Way11GetInstanceEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal19SetEnh1DownlinkGainEs */
/* Demangled: android::SpeechDriverNormal::SetEnh1DownlinkGain(short) */
int _ZN7android18SpeechDriverNormal19SetEnh1DownlinkGainEs(void);

/* Symbol: _ZN7android13streamout_hcfE */
/* Demangled: android::streamout_hcf */
extern void* _ZN7android13streamout_hcfE;

/* Symbol: _ZN7android12AudioFtmBase30HeadsetMic_EarphoneLR_LoopbackEcc */
/* Demangled: android::AudioFtmBase::HeadsetMic_EarphoneLR_Loopback(char, char) */
int _ZN7android12AudioFtmBase30HeadsetMic_EarphoneLR_LoopbackEcc(void);

/* Symbol: _ZN7android16AudioALSANLECtrl4initEPNS_28AudioALSAPlaybackHandlerBaseE */
/* Demangled: android::AudioALSANLECtrl::init(android::AudioALSAPlaybackHandlerBase*) */
int _ZN7android16AudioALSANLECtrl4initEPNS_28AudioALSAPlaybackHandlerBaseE(void);

/* Symbol: _ZN7android18AudioALSAStreamOut16isWavDumpEnabledEv */
/* Demangled: android::AudioALSAStreamOut::isWavDumpEnabled() */
int _ZN7android18AudioALSAStreamOut16isWavDumpEnabledEv(void);

/* Symbol: _ZN7android17AudioALSAStreamInD0Ev */
/* Demangled: android::AudioALSAStreamIn::~AudioALSAStreamIn() */
int _ZN7android17AudioALSAStreamInD0Ev(void);

/* Symbol: _ZN7android24SpeechPcmMixerBaseBuffer18InitPcmMixerBufferEPNS_18SpeechPcmMixerBaseEjjij */
/* Demangled: android::SpeechPcmMixerBaseBuffer::InitPcmMixerBuffer(android::SpeechPcmMixerBase*, unsigned int, unsigned int, int, unsigned int) */
int _ZN7android24SpeechPcmMixerBaseBuffer18InitPcmMixerBufferEPNS_18SpeechPcmMixerBaseEjjij(void);

/* Symbol: _ZN7android15LoopbackManager14SetLoopbackOffEv */
/* Demangled: android::LoopbackManager::SetLoopbackOff() */
int _ZN7android15LoopbackManager14SetLoopbackOffEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase19getQueuedFramesInfoEPyS1_P8timespecb */
/* Demangled: android::AudioALSAPlaybackHandlerBase::getQueuedFramesInfo(unsigned long long*, unsigned long long*, timespec*, bool) */
int _ZN7android28AudioALSAPlaybackHandlerBase19getQueuedFramesInfoEPyS1_P8timespecb(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase11openWavDumpEPKc */
/* Demangled: android::AudioALSACaptureDataProviderBase::openWavDump(char const*) */
int _ZN7android32AudioALSACaptureDataProviderBase11openWavDumpEPKc(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtv11mHandlerKtvE */
/* Demangled: android::AudioALSAHandlerKtv::mHandlerKtv */
extern void* _ZN7android19AudioALSAHandlerKtv11mHandlerKtvE;

/* Symbol: _ZN7android16getAudioCategoryENS_7String8E */
/* Demangled: android::getAudioCategory(android::String8) */
int _ZN7android16getAudioCategoryENS_7String8E(void);

/* Symbol: _ZN7android8AudioFtm28PhoneMic_EarphoneLR_LoopbackEc */
/* Demangled: android::AudioFtm::PhoneMic_EarphoneLR_Loopback(char) */
int _ZN7android8AudioFtm28PhoneMic_EarphoneLR_LoopbackEc(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtvC2Ev */
/* Demangled: android::AudioALSAHandlerKtv::AudioALSAHandlerKtv() */
int _ZN7android19AudioALSAHandlerKtvC2Ev(void);

/* Symbol: _ZN7android8SPELayer18SetDynamicFuncCtrlENS_21SPE_MMI_CONTROL_TABLEEb */
/* Demangled: android::SPELayer::SetDynamicFuncCtrl(android::SPE_MMI_CONTROL_TABLE, bool) */
int _ZN7android8SPELayer18SetDynamicFuncCtrlENS_21SPE_MMI_CONTROL_TABLEEb(void);

/* Symbol: _ZN7android18AudioBTCVSDControl14BT_SCO_SetModeEj */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_SetMode(unsigned int) */
int _ZN7android18AudioBTCVSDControl14BT_SCO_SetModeEj(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerBTCVSDC1EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerBTCVSD::AudioALSAPlaybackHandlerBTCVSD(stream_attribute_t const*) */
int _ZN7android30AudioALSAPlaybackHandlerBTCVSDC1EPK18stream_attribute_t(void);

/* Symbol: audio_ipi_dma_cbk_deregister */
/* Demangled: audio_ipi_dma_cbk_deregister */
int audio_ipi_dma_cbk_deregister(void);

/* Symbol: _ZN7android37AudioALSAPlaybackHandlerFMTransmitterD1Ev */
/* Demangled: android::AudioALSAPlaybackHandlerFMTransmitter::~AudioALSAPlaybackHandlerFMTransmitter() */
int _ZN7android37AudioALSAPlaybackHandlerFMTransmitterD1Ev(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient19LoadBesRecordParamsEv */
/* Demangled: android::AudioALSACaptureDataClient::LoadBesRecordParams() */
int _ZN7android26AudioALSACaptureDataClient19LoadBesRecordParamsEv(void);

/* Symbol: _ZN7android20AudioCustParamClientD0Ev */
/* Demangled: android::AudioCustParamClient::~AudioCustParamClient() */
int _ZN7android20AudioCustParamClientD0Ev(void);

/* Symbol: _ZN7android21AudioDspStreamManager15dataPassToCodecEij */
/* Demangled: android::AudioDspStreamManager::dataPassToCodec(int, unsigned int) */
int _ZN7android21AudioDspStreamManager15dataPassToCodecEij(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo34UpdateDynamicSpeechEnhancementMaskERK26voip_sph_enh_mask_struct_t */
/* Demangled: android::AudioSpeechEnhanceInfo::UpdateDynamicSpeechEnhancementMask(voip_sph_enh_mask_struct_t const&) */
int _ZN7android22AudioSpeechEnhanceInfo34UpdateDynamicSpeechEnhancementMaskERK26voip_sph_enh_mask_struct_t(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_decimal_escapeIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_decimal_escape<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_decimal_escapeIPKcEET_S7_S7_(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderBTSCO5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderBTSCO::close() */
int _ZN7android33AudioALSACaptureDataProviderBTSCO5closeEv(void);

/* Symbol: aurisys_arsi_set_ul_enhance */
/* Demangled: aurisys_arsi_set_ul_enhance */
int aurisys_arsi_set_ul_enhance(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP13EnableEPLDUmpEv */
/* Demangled: android::SpeechDriverOpenDSP::EnableEPLDUmp() */
int _ZN7android19SpeechDriverOpenDSP13EnableEPLDUmpEv(void);

/* Symbol: _ZTVN7android28AudioALSAPlaybackHandlerBaseE */
/* Demangled: vtable for android::AudioALSAPlaybackHandlerBase */
extern void* _ZTVN7android28AudioALSAPlaybackHandlerBaseE;

/* Symbol: _ZN7android28AudioALSACaptureHandlerVoiceD0Ev */
/* Demangled: android::AudioALSACaptureHandlerVoice::~AudioALSACaptureHandlerVoice() */
int _ZN7android28AudioALSACaptureHandlerVoiceD0Ev(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController17getStreamReadRateEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::getStreamReadRate(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController17getStreamReadRateEPNS_9USBStreamE(void);

/* Symbol: _ZN7android17AudioALSAStreamIn23checkOpenStreamChannelsEjPj */
/* Demangled: android::AudioALSAStreamIn::checkOpenStreamChannels(unsigned int, unsigned int*) */
int _ZN7android17AudioALSAStreamIn23checkOpenStreamChannelsEjPj(void);

/* Symbol: _ZN7android18SpeechDriverNormal23processNetworkCodecInfoEPNS_9sph_msg_tE */
/* Demangled: android::SpeechDriverNormal::processNetworkCodecInfo(android::sph_msg_t*) */
int _ZN7android18SpeechDriverNormal23processNetworkCodecInfoEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android17WCNChipController27IsBTMergeInterfaceSupportedEv */
/* Demangled: android::WCNChipController::IsBTMergeInterfaceSupported() */
int _ZN7android17WCNChipController27IsBTMergeInterfaceSupportedEv(void);

/* Symbol: _ZN7android8SPELayer13GetSampleRateENS_8SPE_MODEE */
/* Demangled: android::SPELayer::GetSampleRate(android::SPE_MODE) */
int _ZN7android8SPELayer13GetSampleRateENS_8SPE_MODEE(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController13doDataPendingEPNS_9USBStreamEPvjPS3_Pj */
/* Demangled: android::AudioUSBPhoneCallController::doDataPending(android::USBStream*, void*, unsigned int, void**, unsigned int*) */
int _ZN7android27AudioUSBPhoneCallController13doDataPendingEPNS_9USBStreamEPvjPS3_Pj(void);

/* Symbol: _ZN7android19PROPERTY_KEY_VM_CFGE */
/* Demangled: android::PROPERTY_KEY_VM_CFG */
extern void* _ZN7android19PROPERTY_KEY_VM_CFGE;

/* Symbol: _ZN7android19AudioALSAHandlerKtv16getTaskKtvStatusEv */
/* Demangled: android::AudioALSAHandlerKtv::getTaskKtvStatus() */
int _ZN7android19AudioALSAHandlerKtv16getTaskKtvStatusEv(void);

/* Symbol: get_time_diff_ns */
/* Demangled: get_time_diff_ns */
int get_time_diff_ns(void);

/* Symbol: _ZN7android23SpeechPcmMixerBGSPlayer17setPcmMixerUlMuteEb */
/* Demangled: android::SpeechPcmMixerBGSPlayer::setPcmMixerUlMute(bool) */
int _ZN7android23SpeechPcmMixerBGSPlayer17setPcmMixerUlMuteEb(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase4openEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::open() */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase4openEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal19updateSpeechFeatureENS_17SpeechFeatureTypeEb */
/* Demangled: android::SpeechDriverNormal::updateSpeechFeature(android::SpeechFeatureType, bool) */
int _ZN7android18SpeechDriverNormal19updateSpeechFeatureENS_17SpeechFeatureTypeEb(void);

/* Symbol: _ZN7android16SpeechExtMemCCCIC2Ev */
/* Demangled: android::SpeechExtMemCCCI::SpeechExtMemCCCI() */
int _ZN7android16SpeechExtMemCCCIC2Ev(void);

/* Symbol: _ZN7android27AudioALSALoopbackController5closeEv */
/* Demangled: android::AudioALSALoopbackController::close() */
int _ZN7android27AudioALSALoopbackController5closeEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal21SpeechOnByApplicationEh */
/* Demangled: android::SpeechDriverNormal::SpeechOnByApplication(unsigned char) */
int _ZN7android18SpeechDriverNormal21SpeechOnByApplicationEh(void);

/* Symbol: _ZN7android18SpeechDriverNormal23joinThreadsDuringSpeechEv */
/* Demangled: android::SpeechDriverNormal::joinThreadsDuringSpeech() */
int _ZN7android18SpeechDriverNormal23joinThreadsDuringSpeechEv(void);

/* Symbol: _ZN7android22AudioMTKGainController10SetAdcPga2Ei */
/* Demangled: android::AudioMTKGainController::SetAdcPga2(int) */
int _ZN7android22AudioMTKGainController10SetAdcPga2Ei(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerNormalD2Ev */
/* Demangled: android::AudioALSACaptureHandlerNormal::~AudioALSACaptureHandlerNormal() */
int _ZN7android29AudioALSACaptureHandlerNormalD2Ev(void);

/* Symbol: _ZN7android24AudioALSACodecDeviceBaseD1Ev */
/* Demangled: android::AudioALSACodecDeviceBase::~AudioALSACodecDeviceBase() */
int _ZN7android24AudioALSACodecDeviceBaseD1Ev(void);

/* Symbol: _ZN7android27AudioALSALoopbackControllerC1Ev */
/* Demangled: android::AudioALSALoopbackController::AudioALSALoopbackController() */
int _ZN7android27AudioALSALoopbackControllerC1Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioMTKFilterManager*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEEE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSACaptureDataProviderBase*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEEE;

/* Symbol: _ZN7android22AudioMTKGainController14getVoiceVolumeEv */
/* Demangled: android::AudioMTKGainController::getVoiceVolume() */
int _ZN7android22AudioMTKGainController14getVoiceVolumeEv(void);

/* Symbol: _ZN7android17keypcmVUL2CaptureE */
/* Demangled: android::keypcmVUL2Capture */
extern void* _ZN7android17keypcmVUL2CaptureE;

/* Symbol: _ZN7android26AudioALSACaptureHandlerAECC2EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerAEC::AudioALSACaptureHandlerAEC(stream_attribute_t*) */
int _ZN7android26AudioALSACaptureHandlerAECC2EP18stream_attribute_t(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController19setEchoRefDebugPathEb */
/* Demangled: android::AudioUSBPhoneCallController::setEchoRefDebugPath(bool) */
int _ZN7android27AudioUSBPhoneCallController19setEchoRefDebugPathEb(void);

/* Symbol: _ZN7android12AudioFtmBase17Audio_FM_I2S_PlayEc */
/* Demangled: android::AudioFtmBase::Audio_FM_I2S_Play(char) */
int _ZN7android12AudioFtmBase17Audio_FM_I2S_PlayEc(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE32__parse_one_char_or_coll_elem_REIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_one_char_or_coll_elem_RE<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE32__parse_one_char_or_coll_elem_REIPKcEET_S7_S7_(void);

/* Symbol: _ZTVN7android35AudioALSACaptureDataProviderFMRadioE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderFMRadio */
extern void* _ZTVN7android35AudioALSACaptureDataProviderFMRadioE;

/* Symbol: audio_sample_rate_get_match_rate */
/* Demangled: audio_sample_rate_get_match_rate */
int audio_sample_rate_get_match_rate(void);

/* Symbol: audio_ringbuf_copy_from_linear */
/* Demangled: audio_ringbuf_copy_from_linear */
int audio_ringbuf_copy_from_linear(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal17IsNeedApplyVolumeEv */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::IsNeedApplyVolume() */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal17IsNeedApplyVolumeEv(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController35muteDlForEnforcedAudibleSoundThreadEPv */
/* Demangled: android::AudioALSASpeechPhoneCallController::muteDlForEnforcedAudibleSoundThread(void*) */
int _ZN7android34AudioALSASpeechPhoneCallController35muteDlForEnforcedAudibleSoundThreadEPv(void);

/* Symbol: _ZN7android15AudioPreProcess21remove_echo_referenceEP19echo_reference_itfe */
/* Demangled: android::AudioPreProcess::remove_echo_reference(echo_reference_itfe*) */
int _ZN7android15AudioPreProcess21remove_echo_referenceEP19echo_reference_itfe(void);

/* Symbol: _ZN7android17AudioALSAHardware12GetAudioDataEijPv */
/* Demangled: android::AudioALSAHardware::GetAudioData(int, unsigned int, void*) */
int _ZN7android17AudioALSAHardware12GetAudioDataEijPv(void);

/* Symbol: _ZNSt3__116__owns_one_stateIcED0Ev */
/* Demangled: std::__1::__owns_one_state<char>::~__owns_one_state() */
int _ZNSt3__116__owns_one_stateIcED0Ev(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderBTSCOD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderBTSCO::~AudioALSACaptureDataProviderBTSCO() */
int _ZN7android33AudioALSACaptureDataProviderBTSCOD2Ev(void);

/* Symbol: _ZN7android16AudioEventThread11addCallbackEPFviPvS1_ES1_ */
/* Demangled: android::AudioEventThread::addCallback(void (*)(int, void*, void*), void*) */
int _ZN7android16AudioEventThread11addCallbackEPFviPvS1_ES1_(void);

/* Symbol: _ZN7android18getBufferLatencyMsEPK18stream_attribute_ty */
/* Demangled: android::getBufferLatencyMs(stream_attribute_t const*, unsigned long long) */
int _ZN7android18getBufferLatencyMsEPK18stream_attribute_ty(void);

/* Symbol: _ZN7android8SPELayer17GetVoIPJitterTimeEv */
/* Demangled: android::SPELayer::GetVoIPJitterTime() */
int _ZN7android8SPELayer17GetVoIPJitterTimeEv(void);

/* Symbol: _ZN7android8SPELayer17SetUPLinkDropTimeEj */
/* Demangled: android::SPELayer::SetUPLinkDropTime(unsigned int) */
int _ZN7android8SPELayer17SetUPLinkDropTimeEj(void);

/* Symbol: _ZTVN7android29AudioALSASampleRateControllerE */
/* Demangled: vtable for android::AudioALSASampleRateController */
extern void* _ZTVN7android29AudioALSASampleRateControllerE;

/* Symbol: _ZN7android13getAudioParamENS_7String8E */
/* Demangled: android::getAudioParam(android::String8) */
int _ZN7android13getAudioParamENS_7String8E(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager31stopOutputDeviceWithoutNotify_lEv */
/* Demangled: android::AudioALSAHardwareResourceManager::stopOutputDeviceWithoutNotify_l() */
int _ZN7android32AudioALSAHardwareResourceManager31stopOutputDeviceWithoutNotify_lEv(void);

/* Symbol: audio_ringbuf_copy_from_ringbuf_all */
/* Demangled: audio_ringbuf_copy_from_ringbuf_all */
int audio_ringbuf_copy_from_ringbuf_all(void);

/* Symbol: _ZN7android21AudioDspStreamManager13stopMusicTaskEPNS_28AudioALSAPlaybackHandlerBaseE */
/* Demangled: android::AudioDspStreamManager::stopMusicTask(android::AudioALSAPlaybackHandlerBase*) */
int _ZN7android21AudioDspStreamManager13stopMusicTaskEPNS_28AudioALSAPlaybackHandlerBaseE(void);

/* Symbol: _ZN7android38AUDIO_COMPONENT_ENGINE_LIB_VENDOR_PATHE */
/* Demangled: android::AUDIO_COMPONENT_ENGINE_LIB_VENDOR_PATH */
extern void* _ZN7android38AUDIO_COMPONENT_ENGINE_LIB_VENDOR_PATHE;

/* Symbol: _ZN7android31AudioALSACaptureDataProviderANCD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderANC::~AudioALSACaptureDataProviderANC() */
int _ZN7android31AudioALSACaptureDataProviderANCD0Ev(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderDspRaw5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderDspRaw::close() */
int _ZN7android34AudioALSACaptureDataProviderDspRaw5closeEv(void);

/* Symbol: _ZN7android21AudioDspStreamManager20needStopPlaybackTaskEjb */
/* Demangled: android::AudioDspStreamManager::needStopPlaybackTask(unsigned int, bool) */
int _ZN7android21AudioDspStreamManager20needStopPlaybackTaskEjb(void);

/* Symbol: _ZN7android15keypcmMODADCI2SE */
/* Demangled: android::keypcmMODADCI2S */
extern void* _ZN7android15keypcmMODADCI2SE;

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo13GetHifiRecordEv */
/* Demangled: android::AudioSpeechEnhanceInfo::GetHifiRecord() */
int _ZN7android22AudioSpeechEnhanceInfo13GetHifiRecordEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl14BT_SCO_RX_StopEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_Stop() */
int _ZN7android18AudioBTCVSDControl14BT_SCO_RX_StopEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager22standbyAllInputStreamsEb17capture_handler_t */
/* Demangled: android::AudioALSAStreamManager::standbyAllInputStreams(bool, capture_handler_t) */
int _ZN7android22AudioALSAStreamManager22standbyAllInputStreamsEb17capture_handler_t(void);

/* Symbol: _ZN7android21AudioDspStreamManager11stopTasks_lEb */
/* Demangled: android::AudioDspStreamManager::stopTasks_l(bool) */
int _ZN7android21AudioDspStreamManager11stopTasks_lEb(void);

/* Symbol: _ZN7android10sph_memsetEPvhj */
/* Demangled: android::sph_memset(void*, unsigned char, unsigned int) */
int _ZN7android10sph_memsetEPvhj(void);

/* Symbol: _ZN7android19SpeechDriverFactory22GetSpeechDriverByIndexENS_13modem_index_tE */
/* Demangled: android::SpeechDriverFactory::GetSpeechDriverByIndex(android::modem_index_t) */
int _ZN7android19SpeechDriverFactory22GetSpeechDriverByIndexENS_13modem_index_tE(void);

/* Symbol: _ZTVN7android6VectorIPNS_18AudioALSAStreamOutEEE */
/* Demangled: vtable for android::Vector<android::AudioALSAStreamOut*> */
extern void* _ZTVN7android6VectorIPNS_18AudioALSAStreamOutEEE;

/* Symbol: _ZN7android12AudioFtmBase23Audio_Set_HeadPhone_OffEi */
/* Demangled: android::AudioFtmBase::Audio_Set_HeadPhone_Off(int) */
int _ZN7android12AudioFtmBase23Audio_Set_HeadPhone_OffEi(void);

/* Symbol: _ZN7android17SpeechDriverDummy9TtyCtmOffEv */
/* Demangled: android::SpeechDriverDummy::TtyCtmOff() */
int _ZN7android17SpeechDriverDummy9TtyCtmOffEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEE8do_splatES2_PKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<void*, android::IAudioALSACaptureDataClient*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEE8do_splatES2_PKvj(void);

/* Symbol: _ZN7android18keypcmPcmRxCaptureE */
/* Demangled: android::keypcmPcmRxCapture */
extern void* _ZN7android18keypcmPcmRxCaptureE;

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceUL11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderVoiceUL::getInstance() */
int _ZN7android35AudioALSACaptureDataProviderVoiceUL11getInstanceEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderTDMD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderTDM::~AudioALSACaptureDataProviderTDM() */
int _ZN7android31AudioALSACaptureDataProviderTDMD1Ev(void);

/* Symbol: _ZN7android25AudioALSACaptureHandlerBTC2EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerBT::AudioALSACaptureHandlerBT(stream_attribute_t*) */
int _ZN7android25AudioALSACaptureHandlerBTC2EP18stream_attribute_t(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager19checkIfGainTargetedEv */
/* Demangled: android::AudioALSAHyBridNLEManager::checkIfGainTargeted() */
int _ZN7android25AudioALSAHyBridNLEManager19checkIfGainTargetedEv(void);

/* Symbol: __floatundidf */
/* Demangled: __floatundidf */
int __floatundidf(void);

/* Symbol: _ZN7android22AudioSmartPaController17getI2sNumSequenceEb */
/* Demangled: android::AudioSmartPaController::getI2sNumSequence(bool) */
int _ZN7android22AudioSmartPaController17getI2sNumSequenceEb(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo15GetAPTuningModeEv */
/* Demangled: android::AudioSpeechEnhanceInfo::GetAPTuningMode() */
int _ZN7android22AudioSpeechEnhanceInfo15GetAPTuningModeEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController16loadUSBCallParamEv */
/* Demangled: android::AudioUSBPhoneCallController::loadUSBCallParam() */
int _ZN7android27AudioUSBPhoneCallController16loadUSBCallParamEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamOut*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager21disableTurnOnSequenceERNS_7String8E */
/* Demangled: android::AudioALSAHardwareResourceManager::disableTurnOnSequence(android::String8&) */
int _ZN7android32AudioALSAHardwareResourceManager21disableTurnOnSequenceERNS_7String8E(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZN7android22AudioMTKGainController14SetLinoutLGainEi */
/* Demangled: android::AudioMTKGainController::SetLinoutLGain(int) */
int _ZN7android22AudioMTKGainController14SetLinoutLGainEi(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager21getDevCustCtrlSeqenceEj */
/* Demangled: android::AudioALSAHardwareResourceManager::getDevCustCtrlSeqence(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager21getDevCustCtrlSeqenceEj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager18CheckHeadsetChangeEjj */
/* Demangled: android::AudioALSAStreamManager::CheckHeadsetChange(unsigned int, unsigned int) */
int _ZN7android22AudioALSAStreamManager18CheckHeadsetChangeEjj(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudio12freeInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::freeInstance() */
int _ZN7android34AudioALSACaptureDataProviderAAudio12freeInstanceEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager9getSpkNumEv */
/* Demangled: android::AudioALSAHardwareResourceManager::getSpkNum() */
int _ZN7android32AudioALSAHardwareResourceManager9getSpkNumEv(void);

/* Symbol: _ZN7android19AudioALSAParamTunerC1Ev */
/* Demangled: android::AudioALSAParamTuner::AudioALSAParamTuner() */
int _ZN7android19AudioALSAParamTunerC1Ev(void);

/* Symbol: _ZN7android21AudioDspStreamManager16closePCMDumpA2DPEPNS_28AudioALSAPlaybackHandlerBaseE */
/* Demangled: android::AudioDspStreamManager::closePCMDumpA2DP(android::AudioALSAPlaybackHandlerBase*) */
int _ZN7android21AudioDspStreamManager16closePCMDumpA2DPEPNS_28AudioALSAPlaybackHandlerBaseE(void);

/* Symbol: _ZN7android22AudioSmartPaController9speakerOnEjj */
/* Demangled: android::AudioSmartPaController::speakerOn(unsigned int, unsigned int) */
int _ZN7android22AudioSmartPaController9speakerOnEjj(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP13SetUplinkMuteEb */
/* Demangled: android::SpeechDriverOpenDSP::SetUplinkMute(bool) */
int _ZN7android19SpeechDriverOpenDSP13SetUplinkMuteEb(void);

/* Symbol: _ZTVN7android21AudioALSAFMControllerE */
/* Demangled: vtable for android::AudioALSAFMController */
extern void* _ZTVN7android21AudioALSAFMControllerE;

/* Symbol: _ZN7android26AudioALSACaptureHandlerUsbC2EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerUsb::AudioALSACaptureHandlerUsb(stream_attribute_t*) */
int _ZN7android26AudioALSACaptureHandlerUsbC2EP18stream_attribute_t(void);

/* Symbol: _ZN7android22AudioALSADriverUtility17mixerCtrlGetValueEP9mixer_ctlj */
/* Demangled: android::AudioALSADriverUtility::mixerCtrlGetValue(mixer_ctl*, unsigned int) */
int _ZN7android22AudioALSADriverUtility17mixerCtrlGetValueEP9mixer_ctlj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager14SetCaptureGainEv */
/* Demangled: android::AudioALSAStreamManager::SetCaptureGain() */
int _ZN7android22AudioALSAStreamManager14SetCaptureGainEv(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderModemDai10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderModemDai::readThread(void*) */
int _ZN7android36AudioALSACaptureDataProviderModemDai10readThreadEPv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager25CloseHeadphoneSpeakerPathEv */
/* Demangled: android::AudioALSAHardwareResourceManager::CloseHeadphoneSpeakerPath() */
int _ZN7android32AudioALSAHardwareResourceManager25CloseHeadphoneSpeakerPathEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase16createMmapBufferEiP22audio_mmap_buffer_info */
/* Demangled: android::AudioALSACaptureDataProviderBase::createMmapBuffer(int, audio_mmap_buffer_info*) */
int _ZN7android32AudioALSACaptureDataProviderBase16createMmapBufferEiP22audio_mmap_buffer_info(void);

/* Symbol: _ZN7android22AudioMTKGainController10GetSPKGainEv */
/* Demangled: android::AudioMTKGainController::GetSPKGain() */
int _ZN7android22AudioMTKGainController10GetSPKGainEv(void);

/* Symbol: _ZN7android21PROPERTY_KEY_VM_INDEXE */
/* Demangled: android::PROPERTY_KEY_VM_INDEX */
extern void* _ZN7android21PROPERTY_KEY_VM_INDEXE;

/* Symbol: _ZN7android18SpeechDriverNormalD2Ev */
/* Demangled: android::SpeechDriverNormal::~SpeechDriverNormal() */
int _ZN7android18SpeechDriverNormalD2Ev(void);

/* Symbol: _ZN7android17WCNChipController21IsFmChipPadSelConnSysEv */
/* Demangled: android::WCNChipController::IsFmChipPadSelConnSys() */
int _ZN7android17WCNChipController21IsFmChipPadSelConnSysEv(void);

/* Symbol: _ZTVN7android17WCNChipControllerE */
/* Demangled: vtable for android::WCNChipController */
extern void* _ZTVN7android17WCNChipControllerE;

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerBTCVSD21getHardwareBufferInfoEP18time_info_struct_t */
/* Demangled: android::AudioALSAPlaybackHandlerBTCVSD::getHardwareBufferInfo(time_info_struct_t*) */
int _ZN7android30AudioALSAPlaybackHandlerBTCVSD21getHardwareBufferInfoEP18time_info_struct_t(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioMTKFilterManager*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEE10do_compareEPKvS7_(void);

/* Symbol: _ZTVN7android16SpeechExtMemCCCIE */
/* Demangled: vtable for android::SpeechExtMemCCCI */
extern void* _ZTVN7android16SpeechExtMemCCCIE;

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBase17setLowLatencyModeEbjjb */
/* Demangled: android::AudioALSACaptureHandlerBase::setLowLatencyMode(bool, unsigned int, unsigned int, bool) */
int _ZN7android27AudioALSACaptureHandlerBase17setLowLatencyModeEbjjb(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp32mAudioALSACaptureDataProviderDspE */
/* Demangled: android::AudioALSACaptureDataProviderDsp::mAudioALSACaptureDataProviderDsp */
extern void* _ZN7android31AudioALSACaptureDataProviderDsp32mAudioALSACaptureDataProviderDspE;

/* Symbol: _ZN7android18SpeechMessageQueue27sendSpeechMessageAckToQueueEPNS_9sph_msg_tE */
/* Demangled: android::SpeechMessageQueue::sendSpeechMessageAckToQueue(android::sph_msg_t*) */
int _ZN7android18SpeechMessageQueue27sendSpeechMessageAckToQueueEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase16isWavDumpEnabledEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::isWavDumpEnabled() */
int _ZN7android28AudioALSAPlaybackHandlerBase16isWavDumpEnabledEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderANC10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderANC::readThread(void*) */
int _ZN7android31AudioALSACaptureDataProviderANC10readThreadEPv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderUsb10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderUsb::readThread(void*) */
int _ZN7android31AudioALSACaptureDataProviderUsb10readThreadEPv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase15ClosePCMDumpDSPEh */
/* Demangled: android::AudioALSAPlaybackHandlerBase::ClosePCMDumpDSP(unsigned char) */
int _ZN7android28AudioALSAPlaybackHandlerBase15ClosePCMDumpDSPEh(void);

/* Symbol: _ZN7android19getCurrentTimestampEPcj */
/* Demangled: android::getCurrentTimestamp(char*, unsigned int) */
int _ZN7android19getCurrentTimestampEPcj(void);

/* Symbol: _ZNK7android6VectorIP7__sFILEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<__sFILE*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP7__sFILEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient30CheckBesRecordStereoModeEnableEv */
/* Demangled: android::AudioALSACaptureDataClient::CheckBesRecordStereoModeEnable() */
int _ZN7android26AudioALSACaptureDataClient30CheckBesRecordStereoModeEnableEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataClientSyncIO17IsNeedApplyVolumeEv */
/* Demangled: android::AudioALSACaptureDataClientSyncIO::IsNeedApplyVolume() */
int _ZN7android32AudioALSACaptureDataClientSyncIO17IsNeedApplyVolumeEv(void);

/* Symbol: _ZTVN7android19DeviceCtlDescriptorE */
/* Demangled: vtable for android::DeviceCtlDescriptor */
extern void* _ZTVN7android19DeviceCtlDescriptorE;

/* Symbol: _ZN7android25SpeechPcmMixerTelephonyTx11pcmMixerOffEPNS_21SpeechDriverInterfaceE */
/* Demangled: android::SpeechPcmMixerTelephonyTx::pcmMixerOff(android::SpeechDriverInterface*) */
int _ZN7android25SpeechPcmMixerTelephonyTx11pcmMixerOffEPNS_21SpeechDriverInterfaceE(void);

/* Symbol: _ZN7android2spI19PowerDeathRecipientED2Ev */
/* Demangled: android::sp<PowerDeathRecipient>::~sp() */
int _ZN7android2spI19PowerDeathRecipientED2Ev(void);

/* Symbol: _ZN7android17AudioALSAHardware19getHiFiStateFromXMLEv */
/* Demangled: android::AudioALSAHardware::getHiFiStateFromXML() */
int _ZN7android17AudioALSAHardware19getHiFiStateFromXMLEv(void);

/* Symbol: _ZNKSt3__112regex_traitsIcE19__transform_primaryIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__transform_primary<char*>(char*, char*, char) const */
int _ZNKSt3__112regex_traitsIcE19__transform_primaryIPcEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SA_c(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormalD1Ev */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::~AudioALSAPlaybackHandlerNormal() */
int _ZN7android30AudioALSAPlaybackHandlerNormalD1Ev(void);

/* Symbol: _ZN7android27AudioALSALoopbackControllerD2Ev */
/* Demangled: android::AudioALSALoopbackController::~AudioALSALoopbackController() */
int _ZN7android27AudioALSALoopbackControllerD2Ev(void);

/* Symbol: _ZN7android22AudioMTKGainController12GetSWMICGainEv */
/* Demangled: android::AudioMTKGainController::GetSWMICGain() */
int _ZN7android22AudioMTKGainController12GetSWMICGainEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl26AudioExtMDCVSDCreateThreadEv */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDCreateThread() */
int _ZN7android18AudioBTCVSDControl26AudioExtMDCVSDCreateThreadEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP14GetVibSpkParamEPv */
/* Demangled: android::SpeechDriverOpenDSP::GetVibSpkParam(void*) */
int _ZN7android19SpeechDriverOpenDSP14GetVibSpkParamEPv(void);

/* Symbol: _ZN7android27SpeechEnhancementController28SetBtHeadsetNrecOnToAllModemEb */
/* Demangled: android::SpeechEnhancementController::SetBtHeadsetNrecOnToAllModem(bool) */
int _ZN7android27SpeechEnhancementController28SetBtHeadsetNrecOnToAllModemEb(void);

/* Symbol: _ZN7android17AudioALSAHardware12xWayRec_StopEv */
/* Demangled: android::AudioALSAHardware::xWayRec_Stop() */
int _ZN7android17AudioALSAHardware12xWayRec_StopEv(void);

/* Symbol: _ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEEC2ERKS9_ */
/* Demangled: std::__1::vector<std::__1::sub_match<std::__1::__wrap_iter<char const*> >, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > > >::vector(std::__1::vector<std::__1::sub_match<std::__1::__wrap_iter<char const*> >, std::__1::allocator<std::__1::sub_match<std::__1::__wrap_iter<char const*> > > > const&) */
int _ZNSt3__16vectorINS_9sub_matchINS_11__wrap_iterIPKcEEEENS_9allocatorIS6_EEEC2ERKS9_(void);

/* Symbol: _ZN7android31mCaptureDataProviderVoiceULLockE */
/* Demangled: android::mCaptureDataProviderVoiceULLock */
extern void* _ZN7android31mCaptureDataProviderVoiceULLockE;

/* Symbol: _ZN7android31AudioALSASpeechStreamControllerD1Ev */
/* Demangled: android::AudioALSASpeechStreamController::~AudioALSASpeechStreamController() */
int _ZN7android31AudioALSASpeechStreamControllerD1Ev(void);

/* Symbol: audio_pool_buf_formatter_deinit */
/* Demangled: audio_pool_buf_formatter_deinit */
int audio_pool_buf_formatter_deinit(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerAAudio4stopEv */
/* Demangled: android::AudioALSACaptureHandlerAAudio::stop() */
int _ZN7android29AudioALSACaptureHandlerAAudio4stopEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN7android11MixerTargetEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::MixerTarget*> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN7android11MixerTargetEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN7android25SpeechPcmMixerTelephonyTxC2Ev */
/* Demangled: android::SpeechPcmMixerTelephonyTx::SpeechPcmMixerTelephonyTx() */
int _ZN7android25SpeechPcmMixerTelephonyTxC2Ev(void);

/* Symbol: _ZN7android20streamout_dcr_proptyE */
/* Demangled: android::streamout_dcr_propty */
extern void* _ZN7android20streamout_dcr_proptyE;

/* Symbol: _ZN7android23DefaultRecCompen_filterE */
/* Demangled: android::DefaultRecCompen_filter */
extern void* _ZN7android23DefaultRecCompen_filterE;

/* Symbol: _ZN7android15AudioPreProcess14addAudioEffectEPP18effect_interface_s */
/* Demangled: android::AudioPreProcess::addAudioEffect(effect_interface_s**) */
int _ZN7android15AudioPreProcess14addAudioEffectEPP18effect_interface_s(void);

/* Symbol: _ZN7android17AudioALSAHardwareD0Ev */
/* Demangled: android::AudioALSAHardware::~AudioALSAHardware() */
int _ZN7android17AudioALSAHardwareD0Ev(void);

/* Symbol: audio_ringbuf_copy_from_ringbuf */
/* Demangled: audio_ringbuf_copy_from_ringbuf */
int audio_ringbuf_copy_from_ringbuf(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceUL36mAudioALSACaptureDataProviderVoiceULE */
/* Demangled: android::AudioALSACaptureDataProviderVoiceUL::mAudioALSACaptureDataProviderVoiceUL */
extern void* _ZN7android35AudioALSACaptureDataProviderVoiceUL36mAudioALSACaptureDataProviderVoiceULE;

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager14getInputDeviceEv */
/* Demangled: android::AudioALSAHardwareResourceManager::getInputDevice() */
int _ZN7android32AudioALSAHardwareResourceManager14getInputDeviceEv(void);

/* Symbol: trans_aurisys_config_hal_to_dsp */
/* Demangled: trans_aurisys_config_hal_to_dsp */
int trans_aurisys_config_hal_to_dsp(void);

/* Symbol: aurisys_arsi_parsing_param_file */
/* Demangled: aurisys_arsi_parsing_param_file */
int aurisys_arsi_parsing_param_file(void);

/* Symbol: _ZTVN7android29AudioALSACaptureHandlerAAudioE */
/* Demangled: vtable for android::AudioALSACaptureHandlerAAudio */
extern void* _ZTVN7android29AudioALSACaptureHandlerAAudioE;

/* Symbol: _ZN7android18SpeechMessageQueueC1EPFiPvPNS_9sph_msg_tEES5_S1_ */
/* Demangled: android::SpeechMessageQueue::SpeechMessageQueue(int (*)(void*, android::sph_msg_t*), int (*)(void*, android::sph_msg_t*), void*) */
int _ZN7android18SpeechMessageQueueC1EPFiPvPNS_9sph_msg_tEES5_S1_(void);

/* Symbol: _ZN7android27SpeechDataProcessingHandler11setRecDlPosENS_20RecordPositionDlTypeE */
/* Demangled: android::SpeechDataProcessingHandler::setRecDlPos(android::RecordPositionDlType) */
int _ZN7android27SpeechDataProcessingHandler11setRecDlPosENS_20RecordPositionDlTypeE(void);

/* Symbol: _ZN7android18AudioBTCVSDControl31BT_SCO_GetMemorySize_4ByteAlignENS0_13BT_SCO_MODULEE */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_GetMemorySize_4ByteAlign(android::AudioBTCVSDControl::BT_SCO_MODULE) */
int _ZN7android18AudioBTCVSDControl31BT_SCO_GetMemorySize_4ByteAlignENS0_13BT_SCO_MODULEE(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager16stopOutputDeviceEv */
/* Demangled: android::AudioALSAHardwareResourceManager::stopOutputDevice() */
int _ZN7android32AudioALSAHardwareResourceManager16stopOutputDeviceEv(void);

/* Symbol: _ZN7android17AudioVIBSPKVsgGenC2Ev */
/* Demangled: android::AudioVIBSPKVsgGen::AudioVIBSPKVsgGen() */
int _ZN7android17AudioVIBSPKVsgGenC2Ev(void);

/* Symbol: _ZN7android16AudioALSANLECtrl19getMaxSPLandZeroCntEPNS_11NleHwInfo_tEPNS_7RingBufEjPfPjj */
/* Demangled: android::AudioALSANLECtrl::getMaxSPLandZeroCnt(android::NleHwInfo_t*, android::RingBuf*, unsigned int, float*, unsigned int*, unsigned int) */
int _ZN7android16AudioALSANLECtrl19getMaxSPLandZeroCntEPNS_11NleHwInfo_tEPNS_7RingBufEjPfPjj(void);

/* Symbol: _ZN7android17AudioALSAStreamIn15getMmapPositionEP19audio_mmap_position */
/* Demangled: android::AudioALSAStreamIn::getMmapPosition(audio_mmap_position*) */
int _ZN7android17AudioALSAStreamIn15getMmapPositionEP19audio_mmap_position(void);

/* Symbol: get_enum_by_string_data_buf_type */
/* Demangled: get_enum_by_string_data_buf_type */
int get_enum_by_string_data_buf_type(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp22updateKernelBufferSizeEj */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::updateKernelBufferSize(unsigned int) */
int _ZN7android27AudioALSAPlaybackHandlerDsp22updateKernelBufferSizeEj(void);

/* Symbol: _ZN7android22AudioMTKGainController15setNormalVolumeEiii12audio_mode_t */
/* Demangled: android::AudioMTKGainController::setNormalVolume(int, int, int, audio_mode_t) */
int _ZN7android22AudioMTKGainController15setNormalVolumeEiii12audio_mode_t(void);

/* Symbol: _ZNK7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::SpeechPcmMixerBaseBuffer*>::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEE12do_constructEPvj(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE12do_constructEPvj */
/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE12do_constructEPvj(void);

/* Symbol: _ZN7android18AudioALSAStreamOut4dumpEiRKNS_6VectorINS_8String16EEE */
/* Demangled: android::AudioALSAStreamOut::dump(int, android::Vector<android::String16> const&) */
int _ZN7android18AudioALSAStreamOut4dumpEiRKNS_6VectorINS_8String16EEE(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBase33dynamicSetCaptureHandlerAudioDumpEv */
/* Demangled: android::AudioALSACaptureHandlerBase::dynamicSetCaptureHandlerAudioDump() */
int _ZN7android27AudioALSACaptureHandlerBase33dynamicSetCaptureHandlerAudioDumpEv(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager13getDigitalIdxEaPj */
/* Demangled: android::AudioALSAHyBridNLEManager::getDigitalIdx(signed char, unsigned int*) */
int _ZN7android25AudioALSAHyBridNLEManager13getDigitalIdxEaPj(void);

/* Symbol: _ZTVN7android31AudioALSACaptureDataProviderDspE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderDsp */
extern void* _ZTVN7android31AudioALSACaptureDataProviderDspE;

/* Symbol: _ZN7android31mCaptureDataProviderVoiceDLLockE */
/* Demangled: android::mCaptureDataProviderVoiceDLLock */
extern void* _ZN7android31mCaptureDataProviderVoiceDLLockE;

/* Symbol: _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmp11getInstanceEv */
/* Demangled: android::AudioALSACodecDeviceOutExtSpeakerAmp::getInstance() */
int _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmp11getInstanceEv(void);

/* Symbol: _ZN7android21AudioDspStreamManager18setA2dpDspShareMemEb */
/* Demangled: android::AudioDspStreamManager::setA2dpDspShareMem(bool) */
int _ZN7android21AudioDspStreamManager18setA2dpDspShareMemEb(void);

/* Symbol: _ZN7android17AudioDspCallFinal22processDmaMsgCallFinalEP9ipi_msg_tPvjS3_ */
/* Demangled: android::AudioDspCallFinal::processDmaMsgCallFinal(ipi_msg_t*, void*, unsigned int, void*) */
int _ZN7android17AudioDspCallFinal22processDmaMsgCallFinalEP9ipi_msg_tPvjS3_(void);

/* Symbol: alock_cleanup_handler */
/* Demangled: alock_cleanup_handler */
int alock_cleanup_handler(void);

/* Symbol: _ZN7android17SpeechDriverDummyC2ENS_13modem_index_tE */
/* Demangled: android::SpeechDriverDummy::SpeechDriverDummy(android::modem_index_t) */
int _ZN7android17SpeechDriverDummyC2ENS_13modem_index_tE(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController24setUSBOutConnectionStateEjbii */
/* Demangled: android::AudioUSBPhoneCallController::setUSBOutConnectionState(unsigned int, bool, int, int) */
int _ZN7android27AudioUSBPhoneCallController24setUSBOutConnectionStateEjbii(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIRKcEEvOT_ */
/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char const&>(char const&) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIRKcEEvOT_(void);

/* Symbol: _ZTVN7android18AudioALSAStreamOutE */
/* Demangled: vtable for android::AudioALSAStreamOut */
extern void* _ZTVN7android18AudioALSAStreamOutE;

/* Symbol: _ZN7android17AudioVIBSPKVsgGen12freeInstanceEv */
/* Demangled: android::AudioVIBSPKVsgGen::freeInstance() */
int _ZN7android17AudioVIBSPKVsgGen12freeInstanceEv(void);

/* Symbol: _ZN7android21deviceInTypeStrToEnumEPKc */
/* Demangled: android::deviceInTypeStrToEnum(char const*) */
int _ZN7android21deviceInTypeStrToEnumEPKc(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo19GetBesRecVMFileNameEPcj */
/* Demangled: android::AudioSpeechEnhanceInfo::GetBesRecVMFileName(char*, unsigned int) */
int _ZN7android22AudioSpeechEnhanceInfo19GetBesRecVMFileNameEPcj(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_character_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_character_escape<char const*>(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_character_escapeIPKcEET_S7_S7_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZN7android18AudioBTCVSDControl20Audio_IIRHPF_ProcessEv */
/* Demangled: android::AudioBTCVSDControl::Audio_IIRHPF_Process() */
int _ZN7android18AudioBTCVSDControl20Audio_IIRHPF_ProcessEv(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp4openEv */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::open() */
int _ZN7android27AudioALSAPlaybackHandlerDsp4openEv(void);

/* Symbol: _ZN7android17AudioALSAHardware14SetEMParameterEPvi */
/* Demangled: android::AudioALSAHardware::SetEMParameter(void*, int) */
int _ZN7android17AudioALSAHardware14SetEMParameterEPvi(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController12setDebugInfoEbi */
/* Demangled: android::AudioUSBPhoneCallController::setDebugInfo(bool, int) */
int _ZN7android27AudioUSBPhoneCallController12setDebugInfoEbi(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager13setAudioDebugEb */
/* Demangled: android::AudioALSAHardwareResourceManager::setAudioDebug(bool) */
int _ZN7android32AudioALSAHardwareResourceManager13setAudioDebugEb(void);

/* Symbol: _ZN7android22AudioALSAStreamManager19isOutputNeedRoutingEPNS_18AudioALSAStreamOutES2_j */
/* Demangled: android::AudioALSAStreamManager::isOutputNeedRouting(android::AudioALSAStreamOut*, android::AudioALSAStreamOut*, unsigned int) */
int _ZN7android22AudioALSAStreamManager19isOutputNeedRoutingEPNS_18AudioALSAStreamOutES2_j(void);

/* Symbol: _ZN7android22AudioMTKGainController14getGainMicModeE14audio_source_t12audio_mode_t */
/* Demangled: android::AudioMTKGainController::getGainMicMode(audio_source_t, audio_mode_t) */
int _ZN7android22AudioMTKGainController14getGainMicModeE14audio_source_t12audio_mode_t(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerBTCVSD30writeEchoRefDataToDataProviderEPNS_41AudioALSACaptureDataProviderEchoRefBTCVSDEPKcj */
/* Demangled: android::AudioALSAPlaybackHandlerBTCVSD::writeEchoRefDataToDataProvider(android::AudioALSACaptureDataProviderEchoRefBTCVSD*, char const*, unsigned int) */
int _ZN7android30AudioALSAPlaybackHandlerBTCVSD30writeEchoRefDataToDataProviderEPNS_41AudioALSACaptureDataProviderEchoRefBTCVSDEPKcj(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload9setVolumeEj */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::setVolume(unsigned int) */
int _ZN7android31AudioALSAPlaybackHandlerOffload9setVolumeEj(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase22getPlaybackHandlerTypeEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::getPlaybackHandlerType() */
int _ZN7android28AudioALSAPlaybackHandlerBase22getPlaybackHandlerTypeEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal11eCallRxCtrlEv */
/* Demangled: android::SpeechDriverNormal::eCallRxCtrl() */
int _ZN7android18SpeechDriverNormal11eCallRxCtrlEv(void);

/* Symbol: _ZN7android19SpeechShareMemGen9525readMdDataFromShareMemoryEPvPtS2_tj */
/* Demangled: android::SpeechShareMemGen95::readMdDataFromShareMemory(void*, unsigned short*, unsigned short*, unsigned short, unsigned int) */
int _ZN7android19SpeechShareMemGen9525readMdDataFromShareMemoryEPvPtS2_tj(void);

/* Symbol: _ZTVN7android28AudioALSAPlaybackHandlerHDMIE */
/* Demangled: vtable for android::AudioALSAPlaybackHandlerHDMI */
extern void* _ZTVN7android28AudioALSAPlaybackHandlerHDMIE;

/* Symbol: _ZN7android17AudioALSAHardware11GetInstanceEv */
/* Demangled: android::AudioALSAHardware::GetInstance() */
int _ZN7android17AudioALSAHardware11GetInstanceEv(void);

/* Symbol: _ZN7android18deleteMtkAudioLoudEPNS_16MtkAudioLoudBaseE */
/* Demangled: android::deleteMtkAudioLoud(android::MtkAudioLoudBase*) */
int _ZN7android18deleteMtkAudioLoudEPNS_16MtkAudioLoudBaseE(void);

/* Symbol: _ZNSt3__112__deque_baseINS_7__stateIcEENS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__deque_base<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::~__deque_base() */
int _ZNSt3__112__deque_baseINS_7__stateIcEENS_9allocatorIS2_EEED2Ev(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderNormal10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderNormal::readThread(void*) */
int _ZN7android34AudioALSACaptureDataProviderNormal10readThreadEPv(void);

/* Symbol: _ZN7android16AudioBitTrueTest4openEi */
/* Demangled: android::AudioBitTrueTest::open(int) */
int _ZN7android16AudioBitTrueTest4openEi(void);

/* Symbol: _ZN7android21SpeechMessengerNormal17formatShareMemoryEv */
/* Demangled: android::SpeechMessengerNormal::formatShareMemory() */
int _ZN7android21SpeechMessengerNormal17formatShareMemoryEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController8isEnableEv */
/* Demangled: android::AudioUSBPhoneCallController::isEnable() */
int _ZN7android27AudioUSBPhoneCallController8isEnableEv(void);

/* Symbol: _ZN7android20AudioCustParamClient11GetInstanceEv */
/* Demangled: android::AudioCustParamClient::GetInstance() */
int _ZN7android20AudioCustParamClient11GetInstanceEv(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
/* Demangled: _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
int _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void);

/* Symbol: _ZN7android19AudioALSAParamTunerD2Ev */
/* Demangled: android::AudioALSAParamTuner::~AudioALSAParamTuner() */
int _ZN7android19AudioALSAParamTunerD2Ev(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager16resetDefaultGainEPNS_11NleHwInfo_tE */
/* Demangled: android::AudioALSAHyBridNLEManager::resetDefaultGain(android::NleHwInfo_t*) */
int _ZN7android25AudioALSAHyBridNLEManager16resetDefaultGainEPNS_11NleHwInfo_tE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAPlaybackHandlerBase*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android21AudioALSAFMController13setFmVolume_lEf */
/* Demangled: android::AudioALSAFMController::setFmVolume_l(float) */
int _ZN7android21AudioALSAFMController13setFmVolume_lEf(void);

/* Symbol: _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCOC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTSCO::AudioALSACaptureDataProviderEchoRefBTSCO() */
int _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCOC1Ev(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManager17ParseInitSequenceEP12TiXmlElement */
/* Demangled: android::AudioALSADeviceConfigManager::ParseInitSequence(TiXmlElement*) */
int _ZN7android28AudioALSADeviceConfigManager17ParseInitSequenceEP12TiXmlElement(void);

/* Symbol: _ZN7android33AudioALSASpeechLoopbackController5closeEv */
/* Demangled: android::AudioALSASpeechLoopbackController::close() */
int _ZN7android33AudioALSASpeechLoopbackController5closeEv(void);

/* Symbol: InitPcmDump_t */
/* Demangled: InitPcmDump_t */
int InitPcmDump_t(void);

/* Symbol: audio_messenger_ipi_init */
/* Demangled: audio_messenger_ipi_init */
int audio_messenger_ipi_init(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP11setLpbkFlagEb */
/* Demangled: android::SpeechDriverOpenDSP::setLpbkFlag(bool) */
int _ZN7android19SpeechDriverOpenDSP11setLpbkFlagEb(void);

/* Symbol: _ZTVN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadE */
/* Demangled: vtable for android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread */
extern void* _ZTVN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadE;

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDspC2EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::AudioALSAPlaybackHandlerDsp(stream_attribute_t const*) */
int _ZN7android27AudioALSAPlaybackHandlerDspC2EPK18stream_attribute_t(void);

/* Symbol: _ZN7android21AudioDspStreamManager12startTasks_lEv */
/* Demangled: android::AudioDspStreamManager::startTasks_l() */
int _ZN7android21AudioDspStreamManager12startTasks_lEv(void);

/* Symbol: _ZN7android20SpeechPcmMixerVoipRx15configMixTypeDlEh */
/* Demangled: android::SpeechPcmMixerVoipRx::configMixTypeDl(unsigned char) */
int _ZN7android20SpeechPcmMixerVoipRx15configMixTypeDlEh(void);

/* Symbol: _ZN7android26deleteMtkAudioBitConverterEPNS_24MtkAudioBitConverterBaseE */
/* Demangled: android::deleteMtkAudioBitConverter(android::MtkAudioBitConverterBase*) */
int _ZN7android26deleteMtkAudioBitConverterEPNS_24MtkAudioBitConverterBaseE(void);

/* Symbol: _ZN7android19AudioALSAParamTuner9isPlayingEv */
/* Demangled: android::AudioALSAParamTuner::isPlaying() */
int _ZN7android19AudioALSAParamTuner9isPlayingEv(void);

/* Symbol: _ZNK7android6VectorINS_8String16EE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::String16>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_8String16EE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android27SpeechEnhancementController28mSpeechEnhancementControllerE */
/* Demangled: android::SpeechEnhancementController::mSpeechEnhancementController */
extern void* _ZN7android27SpeechEnhancementController28mSpeechEnhancementControllerE;

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase18InitArsiTaskConfigEP28aurisys_lib_manager_config_t */
/* Demangled: android::AudioALSAPlaybackHandlerBase::InitArsiTaskConfig(aurisys_lib_manager_config_t*) */
int _ZN7android28AudioALSAPlaybackHandlerBase18InitArsiTaskConfigEP28aurisys_lib_manager_config_t(void);

/* Symbol: _ZNK7android18AudioALSAStreamOut16bufferSizeTimeUsEv */
/* Demangled: android::AudioALSAStreamOut::bufferSizeTimeUs() const */
int _ZNK7android18AudioALSAStreamOut16bufferSizeTimeUsEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp13closeDspHwPcmEv */
/* Demangled: android::AudioALSACaptureDataProviderDsp::closeDspHwPcm() */
int _ZN7android31AudioALSACaptureDataProviderDsp13closeDspHwPcmEv(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerVOWD2Ev */
/* Demangled: android::AudioALSACaptureHandlerVOW::~AudioALSACaptureHandlerVOW() */
int _ZN7android26AudioALSACaptureHandlerVOWD2Ev(void);

/* Symbol: _ZN7android12SpeechConfig21getSpeechParamSupportENS_17SpeechFeatureTypeE */
/* Demangled: android::SpeechConfig::getSpeechParamSupport(android::SpeechFeatureType) */
int _ZN7android12SpeechConfig21getSpeechParamSupportENS_17SpeechFeatureTypeE(void);

/* Symbol: _ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIccEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<char, char>, std::__1::allocator<std::__1::pair<char, char> > >::__push_back_slow_path<std::__1::pair<char, char> >(std::__1::pair<char, char>&&) */
int _ZNSt3__16vectorINS_4pairIccEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerAECC1EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerAEC::AudioALSACaptureHandlerAEC(stream_attribute_t*) */
int _ZN7android26AudioALSACaptureHandlerAECC1EP18stream_attribute_t(void);

/* Symbol: _ZN7android18AudioBTCVSDControl21btsco_process_RX_MSBCEPvPjS1_S2_S1_h */
/* Demangled: android::AudioBTCVSDControl::btsco_process_RX_MSBC(void*, unsigned int*, void*, unsigned int*, void*, unsigned char) */
int _ZN7android18AudioBTCVSDControl21btsco_process_RX_MSBCEPvPjS1_S2_S1_h(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAPlaybackHandlerBase*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEE10do_compareEPKvS7_(void);

/* Symbol: _ZN7android14keypcmVoiceUSBE */
/* Demangled: android::keypcmVoiceUSB */
extern void* _ZN7android14keypcmVoiceUSBE;

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerEED2Ev */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower>::~sp() */
int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerEED2Ev(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE13__parse_egrepINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_egrep<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE13__parse_egrepINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZTVN7android17AudioALSAHardware13AudioHalPatchE */
/* Demangled: vtable for android::AudioALSAHardware::AudioHalPatch */
extern void* _ZTVN7android17AudioALSAHardware13AudioHalPatchE;

/* Symbol: init_aurisys_lib_api */
/* Demangled: init_aurisys_lib_api */
int init_aurisys_lib_api(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp15opeDspPcmDriverEj */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::opeDspPcmDriver(unsigned int) */
int _ZN7android27AudioALSAPlaybackHandlerDsp15opeDspPcmDriverEj(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController20setVoiceWakeUpEnableEb */
/* Demangled: android::AudioALSAVoiceWakeUpController::setVoiceWakeUpEnable(bool) */
int _ZN7android30AudioALSAVoiceWakeUpController20setVoiceWakeUpEnableEb(void);

/* Symbol: _ZN7android17SpeechParserGen95D0Ev */
/* Demangled: android::SpeechParserGen95::~SpeechParserGen95() */
int _ZN7android17SpeechParserGen95D0Ev(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo19GetForceAECRecStateEv */
/* Demangled: android::AudioSpeechEnhanceInfo::GetForceAECRecState() */
int _ZN7android22AudioSpeechEnhanceInfo19GetForceAECRecStateEv(void);

/* Symbol: _ZN7android17AudioALSAHardware14GetEMParameterEPvi */
/* Demangled: android::AudioALSAHardware::GetEMParameter(void*, int) */
int _ZN7android17AudioALSAHardware14GetEMParameterEPvi(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderTDM32mAudioALSACaptureDataProviderTDME */
/* Demangled: android::AudioALSACaptureDataProviderTDM::mAudioALSACaptureDataProviderTDM */
extern void* _ZN7android31AudioALSACaptureDataProviderTDM32mAudioALSACaptureDataProviderTDME;

/* Symbol: get_audio_controller_task_by_id */
/* Demangled: get_audio_controller_task_by_id */
int get_audio_controller_task_by_id(void);

/* Symbol: _ZN7android22AudioMTKGainController14setSpeakerGainEi */
/* Demangled: android::AudioMTKGainController::setSpeakerGain(int) */
int _ZN7android22AudioMTKGainController14setSpeakerGainEi(void);

/* Symbol: _ZTVN7android20SpeechPcmMixerVoipRxE */
/* Demangled: vtable for android::SpeechPcmMixerVoipRx */
extern void* _ZTVN7android20SpeechPcmMixerVoipRxE;

/* Symbol: _ZN7android20keypcmDl1SpkPlaybackE */
/* Demangled: android::keypcmDl1SpkPlayback */
extern void* _ZN7android20keypcmDl1SpkPlaybackE;

/* Symbol: _ZN7android8SPELayer13DumpMutexLockEv */
/* Demangled: android::SPELayer::DumpMutexLock() */
int _ZN7android8SPELayer13DumpMutexLockEv(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefExt11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefExt::getInstance() */
int _ZN7android38AudioALSACaptureDataProviderEchoRefExt11getInstanceEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController11getPcmAvailEP3pcm */
/* Demangled: android::AudioUSBPhoneCallController::getPcmAvail(pcm*) */
int _ZN7android27AudioUSBPhoneCallController11getPcmAvailEP3pcm(void);

/* Symbol: _ZN7android26PROPERTY_KEY_VM_RECYCLE_ONE */
/* Demangled: android::PROPERTY_KEY_VM_RECYCLE_ON */
extern void* _ZN7android26PROPERTY_KEY_VM_RECYCLE_ONE;

/* Symbol: get_dedicated_frame_ms_from_mask */
/* Demangled: get_dedicated_frame_ms_from_mask */
int get_dedicated_frame_ms_from_mask(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager17is32BitI2sSupportEv */
/* Demangled: android::AudioALSAHardwareResourceManager::is32BitI2sSupport() */
int _ZN7android32AudioALSAHardwareResourceManager17is32BitI2sSupportEv(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager15checkAndSetGainEjPNS_16AudioALSANLECtrlEPNS_11NleHwInfo_tEPNS_7RingBufE */
/* Demangled: android::AudioALSAHyBridNLEManager::checkAndSetGain(unsigned int, android::AudioALSANLECtrl*, android::NleHwInfo_t*, android::RingBuf*) */
int _ZN7android25AudioALSAHyBridNLEManager15checkAndSetGainEjPNS_16AudioALSANLECtrlEPNS_11NleHwInfo_tEPNS_7RingBufE(void);

/* Symbol: _ZN7android22AudioALSAStreamManager12SetHACEnableEb */
/* Demangled: android::AudioALSAStreamManager::SetHACEnable(bool) */
int _ZN7android22AudioALSAStreamManager12SetHACEnableEb(void);

/* Symbol: _ZN7android18SpeechDriverNormal15SetDownlinkMuteEb */
/* Demangled: android::SpeechDriverNormal::SetDownlinkMute(bool) */
int _ZN7android18SpeechDriverNormal15SetDownlinkMuteEb(void);

/* Symbol: _ZN7android15timespec_add_nsEP8timespecy */
/* Demangled: android::timespec_add_ns(timespec*, unsigned long long) */
int _ZN7android15timespec_add_nsEP8timespecy(void);

/* Symbol: _ZN7android12AudioFtmBase14ATV_AudioWriteEPvj */
/* Demangled: android::AudioFtmBase::ATV_AudioWrite(void*, unsigned int) */
int _ZN7android12AudioFtmBase14ATV_AudioWriteEPvj(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceUL32provideModemRecordDataToProviderENS_7RingBufE */
/* Demangled: android::AudioALSACaptureDataProviderVoiceUL::provideModemRecordDataToProvider(android::RingBuf) */
int _ZN7android35AudioALSACaptureDataProviderVoiceUL32provideModemRecordDataToProviderENS_7RingBufE(void);

/* Symbol: _ZN7android18AudioALSAStreamOut16writeWavDumpDataEPKvj */
/* Demangled: android::AudioALSAStreamOut::writeWavDumpData(void const*, unsigned int) */
int _ZN7android18AudioALSAStreamOut16writeWavDumpDataEPKvj(void);

/* Symbol: _ZN7android15streaminmanagerE */
/* Demangled: android::streaminmanager */
extern void* _ZN7android15streaminmanagerE;

/* Symbol: _ZN7android18AudioALSAStreamOut22setStreamOutSampleRateEj */
/* Demangled: android::AudioALSAStreamOut::setStreamOutSampleRate(unsigned int) */
int _ZN7android18AudioALSAStreamOut22setStreamOutSampleRateEj(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderUsb33updateCaptureTimeStampByStartTimeEj */
/* Demangled: android::AudioALSACaptureDataProviderUsb::updateCaptureTimeStampByStartTime(unsigned int) */
int _ZN7android31AudioALSACaptureDataProviderUsb33updateCaptureTimeStampByStartTimeEj(void);

/* Symbol: _ZN7android18SpeechDriverNormal13configPayloadEPNS_9sph_msg_tEttPvt */
/* Demangled: android::SpeechDriverNormal::configPayload(android::sph_msg_t*, unsigned short, unsigned short, void*, unsigned short) */
int _ZN7android18SpeechDriverNormal13configPayloadEPNS_9sph_msg_tEttPvt(void);

/* Symbol: _ZN7android18SpeechDriverNormal23setModemSideModemStatusENS_19modem_status_mask_tE */
/* Demangled: android::SpeechDriverNormal::setModemSideModemStatus(android::modem_status_mask_t) */
int _ZN7android18SpeechDriverNormal23setModemSideModemStatusENS_19modem_status_mask_tE(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP8recordOnENS_19SpcRecordTypeStructE */
/* Demangled: android::SpeechDriverOpenDSP::recordOn(android::SpcRecordTypeStruct) */
int _ZN7android19SpeechDriverOpenDSP8recordOnENS_19SpcRecordTypeStructE(void);

/* Symbol: _ZTVNSt3__123__match_any_but_newlineIcEE */
/* Demangled: vtable for std::__1::__match_any_but_newline<char> */
extern void* _ZTVNSt3__123__match_any_but_newlineIcEE;

/* Symbol: _ZN7android18AudioALSAStreamOut11openWavDumpEPKc */
/* Demangled: android::AudioALSAStreamOut::openWavDump(char const*) */
int _ZN7android18AudioALSAStreamOut11openWavDumpEPKc(void);

/* Symbol: _ZN7android18SpeechDriverNormal15SetSmartpaParamEPv */
/* Demangled: android::SpeechDriverNormal::SetSmartpaParam(void*) */
int _ZN7android18SpeechDriverNormal15SetSmartpaParamEPv(void);

/* Symbol: _ZN7android22AudioMTKGainController15GetSideToneGainEj */
/* Demangled: android::AudioMTKGainController::GetSideToneGain(unsigned int) */
int _ZN7android22AudioMTKGainController15GetSideToneGainEj(void);

/* Symbol: _ZTVN7android36AudioALSACaptureDataProviderModemDaiE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderModemDai */
extern void* _ZTVN7android36AudioALSACaptureDataProviderModemDaiE;

/* Symbol: alock_lock_no_timeout */
/* Demangled: alock_lock_no_timeout */
int alock_lock_no_timeout(void);

/* Symbol: _ZN7android22AudioMTKGainController12ApplyMicGainEji */
/* Demangled: android::AudioMTKGainController::ApplyMicGain(unsigned int, int) */
int _ZN7android22AudioMTKGainController12ApplyMicGainEji(void);

/* Symbol: _ZN7android25AudioALSACaptureHandlerBTC1EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerBT::AudioALSACaptureHandlerBT(stream_attribute_t*) */
int _ZN7android25AudioALSACaptureHandlerBTC1EP18stream_attribute_t(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP30SetAcousticLoopbackDelayFramesEi */
/* Demangled: android::SpeechDriverOpenDSP::SetAcousticLoopbackDelayFrames(int) */
int _ZN7android19SpeechDriverOpenDSP30SetAcousticLoopbackDelayFramesEi(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_ERE_expressionIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ERE_expression<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_ERE_expressionIPKcEET_S7_S7_(void);

/* Symbol: _ZN7android16SpeechExtMemCCCI21shm_region_data_countEPNS_13region_info_tE */
/* Demangled: android::SpeechExtMemCCCI::shm_region_data_count(android::region_info_t*) */
int _ZN7android16SpeechExtMemCCCI21shm_region_data_countEPNS_13region_info_tE(void);

/* Symbol: _ZN7android19generateVmDumpByEplEPKcS1_ */
/* Demangled: android::generateVmDumpByEpl(char const*, char const*) */
int _ZN7android19generateVmDumpByEplEPKcS1_(void);

/* Symbol: _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignEjRKS4_ */
/* Demangled: std::__1::vector<std::__1::sub_match<char const*>, std::__1::allocator<std::__1::sub_match<char const*> > >::assign(unsigned int, std::__1::sub_match<char const*> const&) */
int _ZNSt3__16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignEjRKS4_(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderUsb20updateStartTimeStampE8timespec */
/* Demangled: android::AudioALSACaptureDataProviderUsb::updateStartTimeStamp(timespec) */
int _ZN7android31AudioALSACaptureDataProviderUsb20updateStartTimeStampE8timespec(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderHAPD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderHAP::~AudioALSACaptureDataProviderHAP() */
int _ZN7android31AudioALSACaptureDataProviderHAPD0Ev(void);

/* Symbol: _ZN7android7clamp16Ei */
/* Demangled: android::clamp16(int) */
int _ZN7android7clamp16Ei(void);

/* Symbol: _ZN7android17AudioALSAHardware17updateMisoundModeEbj */
/* Demangled: android::AudioALSAHardware::updateMisoundMode(bool, unsigned int) */
int _ZN7android17AudioALSAHardware17updateMisoundModeEbj(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSD10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::readThread(void*) */
int _ZN7android34AudioALSACaptureDataProviderBTCVSD10readThreadEPv(void);

/* Symbol: _ZN7android17AudioALSAStreamIn11openWavDumpEPKc */
/* Demangled: android::AudioALSAStreamIn::openWavDump(char const*) */
int _ZN7android17AudioALSAStreamIn11openWavDumpEPKc(void);

/* Symbol: _ZNK7android6VectorIPNS_33AudioParameterChangedHidlCallbackEE10do_destroyEPvj */
/* Demangled: android::Vector<android::AudioParameterChangedHidlCallback*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_33AudioParameterChangedHidlCallbackEE10do_destroyEPvj(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController13getVOWMicTypeEv */
/* Demangled: android::AudioALSAVoiceWakeUpController::getVOWMicType() */
int _ZN7android30AudioALSAVoiceWakeUpController13getVOWMicTypeEv(void);

/* Symbol: _ZN7android20GainTableParamParser18loadGainTableParamEv */
/* Demangled: android::GainTableParamParser::loadGainTableParam() */
int _ZN7android20GainTableParamParser18loadGainTableParamEv(void);

/* Symbol: create_audio_pool_buf */
/* Demangled: create_audio_pool_buf */
int create_audio_pool_buf(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerUsbC1EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerUsb::AudioALSACaptureHandlerUsb(stream_attribute_t*) */
int _ZN7android26AudioALSACaptureHandlerUsbC1EP18stream_attribute_t(void);

/* Symbol: _ZNK7android6VectorIPNS_18AudioALSAStreamOutEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::AudioALSAStreamOut*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_18AudioALSAStreamOutEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp17deviceSupportHifiEj */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::deviceSupportHifi(unsigned int) */
int _ZN7android27AudioALSAPlaybackHandlerDsp17deviceSupportHifiEj(void);

/* Symbol: _ZN7android21set_uint32_to_mixctrlEPKcj */
/* Demangled: android::set_uint32_to_mixctrl(char const*, unsigned int) */
int _ZN7android21set_uint32_to_mixctrlEPKcj(void);

/* Symbol: _ZN7android19SpeechShareMemGen9517formatShareMemoryEv */
/* Demangled: android::SpeechShareMemGen95::formatShareMemory() */
int _ZN7android19SpeechShareMemGen9517formatShareMemoryEv(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsbD2Ev */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::~AudioALSAPlaybackHandlerUsb() */
int _ZN7android27AudioALSAPlaybackHandlerUsbD2Ev(void);

/* Symbol: _ZN7android18AudioALSAStreamOut18dataProcessForMuteEPKvj */
/* Demangled: android::AudioALSAStreamOut::dataProcessForMute(void const*, unsigned int) */
int _ZN7android18AudioALSAStreamOut18dataProcessForMuteEPKvj(void);

/* Symbol: aurisys_arsi_apply_param */
/* Demangled: aurisys_arsi_apply_param */
int aurisys_arsi_apply_param(void);

/* Symbol: _ZN7android21keypcmPlaybackDspVoipE */
/* Demangled: android::keypcmPlaybackDspVoip */
extern void* _ZN7android21keypcmPlaybackDspVoipE;

/* Symbol: _ZN7android19keypcmCaptureDspUl1E */
/* Demangled: android::keypcmCaptureDspUl1 */
extern void* _ZN7android19keypcmCaptureDspUl1E;

/* Symbol: _ZN7android29AudioALSASampleRateController19resetScenarioStatusENS_24playback_scenario_mask_tE */
/* Demangled: android::AudioALSASampleRateController::resetScenarioStatus(android::playback_scenario_mask_t) */
int _ZN7android29AudioALSASampleRateController19resetScenarioStatusENS_24playback_scenario_mask_tE(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE19__parse_QUOTED_CHARINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_QUOTED_CHAR<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE19__parse_QUOTED_CHARINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase34dynamicSetPlaybackHandlerAudioDumpEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::dynamicSetPlaybackHandlerAudioDump() */
int _ZN7android28AudioALSAPlaybackHandlerBase34dynamicSetPlaybackHandlerAudioDumpEv(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderBTSCOC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderBTSCO::AudioALSACaptureDataProviderBTSCO() */
int _ZN7android33AudioALSACaptureDataProviderBTSCOC2Ev(void);

/* Symbol: _ZNK7android18AudioALSAStreamOut10sampleRateEv */
/* Demangled: android::AudioALSAStreamOut::sampleRate() const */
int _ZNK7android18AudioALSAStreamOut10sampleRateEv(void);

/* Symbol: _ZN7android17AudioALSAStreamIn25getStreamInCaptureHandlerEv */
/* Demangled: android::AudioALSAStreamIn::getStreamInCaptureHandler() */
int _ZN7android17AudioALSAStreamIn25getStreamInCaptureHandlerEv(void);

/* Symbol: _ZTVN7android22AudioALSAStreamManagerE */
/* Demangled: vtable for android::AudioALSAStreamManager */
extern void* _ZTVN7android22AudioALSAStreamManagerE;

/* Symbol: _ZN7android16SpeechExtMemCCCI21resetShareMemoryIndexEv */
/* Demangled: android::SpeechExtMemCCCI::resetShareMemoryIndex() */
int _ZN7android16SpeechExtMemCCCI21resetShareMemoryIndexEv(void);

/* Symbol: _ZN7android20GainTableParamParser8getParamEP10_ParamUnitPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::GainTableParamParser::getParam(_ParamUnit*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, char const*) */
int _ZN7android20GainTableParamParser8getParamEP10_ParamUnitPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormalD2Ev */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::~AudioALSACaptureDataClientAurisysNormal() */
int _ZN7android39AudioALSACaptureDataClientAurisysNormalD2Ev(void);

/* Symbol: _ZN7android13keypcmADC2AWBE */
/* Demangled: android::keypcmADC2AWB */
extern void* _ZN7android13keypcmADC2AWBE;

/* Symbol: _ZN7android16AudioBitTrueTest11setTestTypeEi */
/* Demangled: android::AudioBitTrueTest::setTestType(int) */
int _ZN7android16AudioBitTrueTest11setTestTypeEi(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE10push_frontERKS3_ */
/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*>&>::push_front(std::__1::__state<char>* const&) */
int _ZNSt3__114__split_bufferIPNS_7__stateIcEERNS_9allocatorIS3_EEE10push_frontERKS3_(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager17setInterruptRate2Ej */
/* Demangled: android::AudioALSAHardwareResourceManager::setInterruptRate2(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager17setInterruptRate2Ej(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSACaptureDataProviderBase*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android18SpeechDriverNormal15GetSmartpaParamEPv */
/* Demangled: android::SpeechDriverNormal::GetSmartpaParam(void*) */
int _ZN7android18SpeechDriverNormal15GetSmartpaParamEPv(void);

/* Symbol: _ZN7android17getScenarioByNameEPc */
/* Demangled: android::getScenarioByName(char*) */
int _ZN7android17getScenarioByNameEPc(void);

/* Symbol: _ZTVN7android17AudioALSAHardwareE */
/* Demangled: vtable for android::AudioALSAHardware */
extern void* _ZTVN7android17AudioALSAHardwareE;

/* Symbol: _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCOD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTSCO::~AudioALSACaptureDataProviderEchoRefBTSCO() */
int _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCOD2Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadC1EjPcj */
/* Demangled: android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread::AudioBTCVSDLoopbackRxThread(unsigned int, char*, unsigned int) */
int _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadC1EjPcj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSACaptureDataProviderBase*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient16NativePreprocessEPvj */
/* Demangled: android::AudioALSACaptureDataClient::NativePreprocess(void*, unsigned int) */
int _ZN7android26AudioALSACaptureDataClient16NativePreprocessEPvj(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager11ResetDeviceEv */
/* Demangled: android::AudioALSAHardwareResourceManager::ResetDevice() */
int _ZN7android32AudioALSAHardwareResourceManager11ResetDeviceEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager18setCodecSampleRateEj */
/* Demangled: android::AudioALSAHardwareResourceManager::setCodecSampleRate(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager18setCodecSampleRateEj(void);

/* Symbol: _ZN7android14AudioUSBCenterD1Ev */
/* Demangled: android::AudioUSBCenter::~AudioUSBCenter() */
int _ZN7android14AudioUSBCenterD1Ev(void);

/* Symbol: _ZN7android21SpeechMessengerNormal21resetShareMemoryIndexEv */
/* Demangled: android::SpeechMessengerNormal::resetShareMemoryIndex() */
int _ZN7android21SpeechMessengerNormal21resetShareMemoryIndexEv(void);

/* Symbol: _ZN7android16AudioBitTrueTest10playThreadEPv */
/* Demangled: android::AudioBitTrueTest::playThread(void*) */
int _ZN7android16AudioBitTrueTest10playThreadEPv(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload5drainE18audio_drain_type_t */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::drain(audio_drain_type_t) */
int _ZN7android31AudioALSAPlaybackHandlerOffload5drainE18audio_drain_type_t(void);

/* Symbol: _ZN7android22AudioMTKGainController16SetMicGainTuningE13GAIN_MIC_MODE11GAIN_DEVICEj */
/* Demangled: android::AudioMTKGainController::SetMicGainTuning(GAIN_MIC_MODE, GAIN_DEVICE, unsigned int) */
int _ZN7android22AudioMTKGainController16SetMicGainTuningE13GAIN_MIC_MODE11GAIN_DEVICEj(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal23CreateAurisysLibManagerEv */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::CreateAurisysLibManager() */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal23CreateAurisysLibManagerEv(void);

/* Symbol: _ZN7android17AudioALSAHardware23MappingFMVolofOutputDevEij */
/* Demangled: android::AudioALSAHardware::MappingFMVolofOutputDev(int, unsigned int) */
int _ZN7android17AudioALSAHardware23MappingFMVolofOutputDevEij(void);

/* Symbol: _ZN7android18SpeechDriverNormal14SpeechRouterOnEv */
/* Demangled: android::SpeechDriverNormal::SpeechRouterOn() */
int _ZN7android18SpeechDriverNormal14SpeechRouterOnEv(void);

/* Symbol: _ZN7android22AudioMTKGainControllerD0Ev */
/* Demangled: android::AudioMTKGainController::~AudioMTKGainController() */
int _ZN7android22AudioMTKGainControllerD0Ev(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient4readEPvi */
/* Demangled: android::AudioALSACaptureDataClient::read(void*, int) */
int _ZN7android26AudioALSACaptureDataClient4readEPvi(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderTDMC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderTDM::AudioALSACaptureDataProviderTDM() */
int _ZN7android31AudioALSACaptureDataProviderTDMC1Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl24UniqueAudioBTCVSDControlE */
/* Demangled: android::AudioBTCVSDControl::UniqueAudioBTCVSDControl */
extern void* _ZN7android18AudioBTCVSDControl24UniqueAudioBTCVSDControlE;

/* Symbol: _ZNSt3__114regex_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEppEv */
/* Demangled: std::__1::regex_iterator<std::__1::__wrap_iter<char const*>, char, std::__1::regex_traits<char> >::operator++() */
int _ZNSt3__114regex_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEppEv(void);

/* Symbol: _ZN7android17AudioALSAStreamInD1Ev */
/* Demangled: android::AudioALSAStreamIn::~AudioALSAStreamIn() */
int _ZN7android17AudioALSAStreamInD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamIn*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEE8do_splatEPvPKvj(void);

/* Symbol: aurisys_set_ul_mute */
/* Demangled: aurisys_set_ul_mute */
int aurisys_set_ul_mute(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixerD0Ev */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::~AudioALSAPlaybackHandlerMixer() */
int _ZN7android29AudioALSAPlaybackHandlerMixerD0Ev(void);

/* Symbol: _ZN7android17SpeechParserGen9515getKeyValuePairEPNS_19SpeechStringBufTypeE */
/* Demangled: android::SpeechParserGen95::getKeyValuePair(android::SpeechStringBufType*) */
int _ZN7android17SpeechParserGen9515getKeyValuePairEPNS_19SpeechStringBufTypeE(void);

/* Symbol: _ZN7android17AudioALSAHardware9initCheckEv */
/* Demangled: android::AudioALSAHardware::initCheck() */
int _ZN7android17AudioALSAHardware9initCheckEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*> >::push_back(std::__1::__state<char>*&&) */
int _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFastC1EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerFast::AudioALSAPlaybackHandlerFast(stream_attribute_t const*) */
int _ZN7android28AudioALSAPlaybackHandlerFastC1EPK18stream_attribute_t(void);

/* Symbol: _ZN7android8SPELayer16DropDownlinkDataEj */
/* Demangled: android::SPELayer::DropDownlinkData(unsigned int) */
int _ZN7android8SPELayer16DropDownlinkDataEj(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload6resumeEv */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::resume() */
int _ZN7android31AudioALSAPlaybackHandlerOffload6resumeEv(void);

/* Symbol: _ZN7android17AudioDspCallFinal17stopCallFinalTaskEv */
/* Demangled: android::AudioDspCallFinal::stopCallFinalTask() */
int _ZN7android17AudioDspCallFinal17stopCallFinalTaskEv(void);

/* Symbol: _ZN7android14trimMacAddressENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: android::trimMacAddress(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN7android14trimMacAddressENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN7android17AudioALSAHardware10setMicMuteEb */
/* Demangled: android::AudioALSAHardware::setMicMute(bool) */
int _ZN7android17AudioALSAHardware10setMicMuteEb(void);

/* Symbol: _ZN7android17WCNChipController19SetFmChipSampleRateEj */
/* Demangled: android::WCNChipController::SetFmChipSampleRate(unsigned int) */
int _ZN7android17WCNChipController19SetFmChipSampleRateEj(void);

/* Symbol: _ZTVNSt3__117__owns_two_statesIcEE */
/* Demangled: vtable for std::__1::__owns_two_states<char> */
extern void* _ZTVNSt3__117__owns_two_statesIcEE;

/* Symbol: _ZN7android27AudioUSBPhoneCallController13getSpeechRateEv */
/* Demangled: android::AudioUSBPhoneCallController::getSpeechRate() */
int _ZN7android27AudioUSBPhoneCallController13getSpeechRateEv(void);

/* Symbol: _ZN7android18AudioALSAStreamOut6resumeEv */
/* Demangled: android::AudioALSAStreamOut::resume() */
int _ZN7android18AudioALSAStreamOut6resumeEv(void);

/* Symbol: dynamic_change_pool_buf_size */
/* Demangled: dynamic_change_pool_buf_size */
int dynamic_change_pool_buf_size(void);

/* Symbol: _ZN7android21AudioDspStreamManager17setAfeDspShareMemEb */
/* Demangled: android::AudioDspStreamManager::setAfeDspShareMem(bool) */
int _ZN7android21AudioDspStreamManager17setAfeDspShareMemEb(void);

/* Symbol: _ZN7android37AudioALSAPlaybackHandlerFMTransmitterD2Ev */
/* Demangled: android::AudioALSAPlaybackHandlerFMTransmitter::~AudioALSAPlaybackHandlerFMTransmitter() */
int _ZN7android37AudioALSAPlaybackHandlerFMTransmitterD2Ev(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController21throttleSetSrcOutRateEPNS_9USBStreamEj */
/* Demangled: android::AudioUSBPhoneCallController::throttleSetSrcOutRate(android::USBStream*, unsigned int) */
int _ZN7android27AudioUSBPhoneCallController21throttleSetSrcOutRateEPNS_9USBStreamEj(void);

/* Symbol: _ZN7android20AudioCustParamClientD1Ev */
/* Demangled: android::AudioCustParamClient::~AudioCustParamClient() */
int _ZN7android20AudioCustParamClientD1Ev(void);

/* Symbol: _ZN7android15AudioPreProcess20in_configure_reverseEjj */
/* Demangled: android::AudioPreProcess::in_configure_reverse(unsigned int, unsigned int) */
int _ZN7android15AudioPreProcess20in_configure_reverseEjj(void);

/* Symbol: _ZN7android17AudioALSAHardware13xWayPlay_StopEv */
/* Demangled: android::AudioALSAHardware::xWayPlay_Stop() */
int _ZN7android17AudioALSAHardware13xWayPlay_StopEv(void);

/* Symbol: _ZN7android12SetMicStatusENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: android::SetMicStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN7android12SetMicStatusENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController7disableEv */
/* Demangled: android::AudioUSBPhoneCallController::disable() */
int _ZN7android27AudioUSBPhoneCallController7disableEv(void);

/* Symbol: _ZN7android28AudioALSACaptureHandlerVoiceD1Ev */
/* Demangled: android::AudioALSACaptureHandlerVoice::~AudioALSACaptureHandlerVoice() */
int _ZN7android28AudioALSACaptureHandlerVoiceD1Ev(void);

/* Symbol: _ZNK7android17AudioALSAStreamIn13getInputFlagsEv */
/* Demangled: android::AudioALSAStreamIn::getInputFlags() const */
int _ZNK7android17AudioALSAStreamIn13getInputFlagsEv(void);

/* Symbol: aurisys_set_dl_mute */
/* Demangled: aurisys_set_dl_mute */
int aurisys_set_dl_mute(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE21__parse_basic_reg_expIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_basic_reg_exp<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE21__parse_basic_reg_expIPKcEET_S7_S7_(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerBTSCO5writeEPKvj */
/* Demangled: android::AudioALSAPlaybackHandlerBTSCO::write(void const*, unsigned int) */
int _ZN7android29AudioALSAPlaybackHandlerBTSCO5writeEPKvj(void);

/* Symbol: _ZTVN7android35AudioALSACodecDeviceOutReceiverPMICE */
/* Demangled: vtable for android::AudioALSACodecDeviceOutReceiverPMIC */
extern void* _ZTVN7android35AudioALSACodecDeviceOutReceiverPMICE;

/* Symbol: _ZN7android17AudioVIBSPKVsgGen7vsgInitEiiii */
/* Demangled: android::AudioVIBSPKVsgGen::vsgInit(int, int, int, int) */
int _ZN7android17AudioVIBSPKVsgGen7vsgInitEiiii(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDspD0Ev */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::~AudioALSAPlaybackHandlerDsp() */
int _ZN7android27AudioALSAPlaybackHandlerDspD0Ev(void);

/* Symbol: _ZN7android22AudioMTKGainController14updateSidetoneEiih */
/* Demangled: android::AudioMTKGainController::updateSidetone(int, int, unsigned char) */
int _ZN7android22AudioMTKGainController14updateSidetoneEiih(void);

/* Symbol: _ZTVN7android17SpeechDriverDummyE */
/* Demangled: vtable for android::SpeechDriverDummy */
extern void* _ZTVN7android17SpeechDriverDummyE;

/* Symbol: _ZNK7android6VectorIPNS_10BufferInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::BufferInfo*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_10BufferInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTVN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadE */
/* Demangled: vtable for android::AudioBTCVSDControl::AudioExtMDCVSDThread */
extern void* _ZTVN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadE;

/* Symbol: _ZTVN7android29AudioALSACaptureHandlerNormalE */
/* Demangled: vtable for android::AudioALSACaptureHandlerNormal */
extern void* _ZTVN7android29AudioALSACaptureHandlerNormalE;

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager18getOutputTurnOnSeqEjbPKc */
/* Demangled: android::AudioALSAHardwareResourceManager::getOutputTurnOnSeq(unsigned int, bool, char const*) */
int _ZN7android32AudioALSAHardwareResourceManager18getOutputTurnOnSeqEjbPKc(void);

/* Symbol: _ZN7android15mDumpFileVectorE */
/* Demangled: android::mDumpFileVector */
extern void* _ZN7android15mDumpFileVectorE;

/* Symbol: _ZN7android27AudioUSBPhoneCallController14setEchoRefPathEbi */
/* Demangled: android::AudioUSBPhoneCallController::setEchoRefPath(bool, int) */
int _ZN7android27AudioUSBPhoneCallController14setEchoRefPathEbi(void);

/* Symbol: _ZN7android17AudioALSAHardware22SetACFPreviewParameterEPvi */
/* Demangled: android::AudioALSAHardware::SetACFPreviewParameter(void*, int) */
int _ZN7android17AudioALSAHardware22SetACFPreviewParameterEPvi(void);

/* Symbol: _ZTVN7android41AudioALSACaptureDataProviderEchoRefBTCVSDE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderEchoRefBTCVSD */
extern void* _ZTVN7android41AudioALSACaptureDataProviderEchoRefBTCVSDE;

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager23OpenWiredHeadsetMicPathEv */
/* Demangled: android::AudioALSAHardwareResourceManager::OpenWiredHeadsetMicPath() */
int _ZN7android32AudioALSAHardwareResourceManager23OpenWiredHeadsetMicPathEv(void);

/* Symbol: _ZN7android22AudioMTKGainController10SetAdcPga3Ei */
/* Demangled: android::AudioMTKGainController::SetAdcPga3(int) */
int _ZN7android22AudioMTKGainController10SetAdcPga3Ei(void);

/* Symbol: _ZN7android18PCMDataNotifyEventE */
/* Demangled: android::PCMDataNotifyEvent */
extern void* _ZN7android18PCMDataNotifyEventE;

/* Symbol: _ZN7android23keypcmVOWBargeInCaptureE */
/* Demangled: android::keypcmVOWBargeInCapture */
extern void* _ZN7android23keypcmVOWBargeInCaptureE;

/* Symbol: _ZN7android22AudioALSAStreamManager15getMasterVolumeEv */
/* Demangled: android::AudioALSAStreamManager::getMasterVolume() */
int _ZN7android22AudioALSAStreamManager15getMasterVolumeEv(void);

/* Symbol: _ZN7android24AudioALSACodecDeviceBaseD2Ev */
/* Demangled: android::AudioALSACodecDeviceBase::~AudioALSACodecDeviceBase() */
int _ZN7android24AudioALSACodecDeviceBaseD2Ev(void);

/* Symbol: _ZN7android27AudioALSALoopbackControllerC2Ev */
/* Demangled: android::AudioALSALoopbackController::AudioALSALoopbackController() */
int _ZN7android27AudioALSALoopbackControllerC2Ev(void);

/* Symbol: _ZN7android29AudioALSACaptureDataClientDsp18getCapturePositionEPxS1_ */
/* Demangled: android::AudioALSACaptureDataClientDsp::getCapturePosition(long long*, long long*) */
int _ZN7android29AudioALSACaptureDataClientDsp18getCapturePositionEPxS1_(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController17updateDspAecParamEv */
/* Demangled: android::AudioALSAVoiceWakeUpController::updateDspAecParam() */
int _ZN7android30AudioALSAVoiceWakeUpController17updateDspAecParamEv(void);

/* Symbol: _ZN7android8SPELayer22SetOutputStreamRunningEbb */
/* Demangled: android::SPELayer::SetOutputStreamRunning(bool, bool) */
int _ZN7android8SPELayer22SetOutputStreamRunningEbb(void);

/* Symbol: _ZN7android16AudioALSANLECtrl6deinitEv */
/* Demangled: android::AudioALSANLECtrl::deinit() */
int _ZN7android16AudioALSANLECtrl6deinitEv(void);

/* Symbol: _ZN7android20GainTableParamParser20getGainSpeechNetworkEPKc */
/* Demangled: android::GainTableParamParser::getGainSpeechNetwork(char const*) */
int _ZN7android20GainTableParamParser20getGainSpeechNetworkEPKc(void);

/* Symbol: _ZN7android17SpeechDriverDummy8TtyCtmOnEv */
/* Demangled: android::SpeechDriverDummy::TtyCtmOn() */
int _ZN7android17SpeechDriverDummy8TtyCtmOnEv(void);

/* Symbol: get_string_by_enum */
/* Demangled: get_string_by_enum */
int get_string_by_enum(void);

/* Symbol: audio_timespec_to_ms */
/* Demangled: audio_timespec_to_ms */
int audio_timespec_to_ms(void);

/* Symbol: _ZN7android29AudioALSACaptureDataClientDsp4readEPvi */
/* Demangled: android::AudioALSACaptureDataClientDsp::read(void*, int) */
int _ZN7android29AudioALSACaptureDataClientDsp4readEPvi(void);

/* Symbol: _ZN7android21AudioDspStreamManager19setAfeInDspShareMemEbb */
/* Demangled: android::AudioDspStreamManager::setAfeInDspShareMem(bool, bool) */
int _ZN7android21AudioDspStreamManager19setAfeInDspShareMemEbb(void);

/* Symbol: _ZN7android18isApMsgBypassQueueEPKNS_9sph_msg_tE */
/* Demangled: android::isApMsgBypassQueue(android::sph_msg_t const*) */
int _ZN7android18isApMsgBypassQueueEPKNS_9sph_msg_tE(void);

/* Symbol: _ZN7android34AudioALSACodecDeviceOutSpeakerPMIC11getInstanceEv */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerPMIC::getInstance() */
int _ZN7android34AudioALSACodecDeviceOutSpeakerPMIC11getInstanceEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThread16ClosePcmDumpFileEv */
/* Demangled: android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread::ClosePcmDumpFile() */
int _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThread16ClosePcmDumpFileEv(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager12disableNleHwEv */
/* Demangled: android::AudioALSAHyBridNLEManager::disableNleHw() */
int _ZN7android25AudioALSAHyBridNLEManager12disableNleHwEv(void);

/* Symbol: _ZN7android31AudioALSASpeechStreamControllerC1Ev */
/* Demangled: android::AudioALSASpeechStreamController::AudioALSASpeechStreamController() */
int _ZN7android31AudioALSASpeechStreamControllerC1Ev(void);

/* Symbol: _ZN7android29AudioALSACaptureDataClientDspC1EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureDataClientDsp::AudioALSACaptureDataClientDsp(android::AudioALSACaptureDataProviderBase*, stream_attribute_t*) */
int _ZN7android29AudioALSACaptureDataClientDspC1EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t(void);

/* Symbol: _ZTVN7android21SpeechDriverInterfaceE */
/* Demangled: vtable for android::SpeechDriverInterface */
extern void* _ZTVN7android21SpeechDriverInterfaceE;

/* Symbol: _ZN7android12AudioFtmBase21Audio_READ_SPK_OC_STAEv */
/* Demangled: android::AudioFtmBase::Audio_READ_SPK_OC_STA() */
int _ZN7android12AudioFtmBase21Audio_READ_SPK_OC_STAEv(void);

/* Symbol: _ZN7android15AudioPreProcess17get_echoref_delayEjP21echo_reference_buffer */
/* Demangled: android::AudioPreProcess::get_echoref_delay(unsigned int, echo_reference_buffer*) */
int _ZN7android15AudioPreProcess17get_echoref_delayEjP21echo_reference_buffer(void);

/* Symbol: _ZTVN7android6VectorIPNS_21AudioDeviceDescriptorEEE */
/* Demangled: vtable for android::Vector<android::AudioDeviceDescriptor*> */
extern void* _ZTVN7android6VectorIPNS_21AudioDeviceDescriptorEEE;

/* Symbol: aud_fmt_conv_hal_process */
/* Demangled: aud_fmt_conv_hal_process */
int aud_fmt_conv_hal_process(void);

/* Symbol: _ZN7android12AudioFtmBase26PhoneMic_Receiver_LoopbackEc */
/* Demangled: android::AudioFtmBase::PhoneMic_Receiver_Loopback(char) */
int _ZN7android12AudioFtmBase26PhoneMic_Receiver_LoopbackEc(void);

/* Symbol: _ZN7android17AudioALSAHardware16openOutputStreamEjPiPjS2_S1_ */
/* Demangled: android::AudioALSAHardware::openOutputStream(unsigned int, int*, unsigned int*, unsigned int*, int*) */
int _ZN7android17AudioALSAHardware16openOutputStreamEjPiPjS2_S1_(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSDD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::~AudioALSACaptureDataProviderBTCVSD() */
int _ZN7android34AudioALSACaptureDataProviderBTCVSDD0Ev(void);

/* Symbol: _ZN7android11isMdAckBackEPKNS_9sph_msg_tE */
/* Demangled: android::isMdAckBack(android::sph_msg_t const*) */
int _ZN7android11isMdAckBackEPKNS_9sph_msg_tE(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal18InitArsiTaskConfigEP28aurisys_lib_manager_config_t */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::InitArsiTaskConfig(aurisys_lib_manager_config_t*) */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal18InitArsiTaskConfigEP28aurisys_lib_manager_config_t(void);

/* Symbol: _ZN7android8SPELayer22GetUPlinkIntrStartTimeEv */
/* Demangled: android::SPELayer::GetUPlinkIntrStartTime() */
int _ZN7android8SPELayer22GetUPlinkIntrStartTimeEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase13processDmaMsgEP9ipi_msg_tPvj */
/* Demangled: android::AudioALSACaptureDataProviderBase::processDmaMsg(ipi_msg_t*, void*, unsigned int) */
int _ZN7android32AudioALSACaptureDataProviderBase13processDmaMsgEP9ipi_msg_tPvj(void);

/* Symbol: dynamic_change_buf_size */
/* Demangled: dynamic_change_buf_size */
int dynamic_change_buf_size(void);

/* Symbol: _ZN7android29AudioALSACaptureDataClientDsp30copyEchoRefCaptureDataToClientENS_7RingBufE */
/* Demangled: android::AudioALSACaptureDataClientDsp::copyEchoRefCaptureDataToClient(android::RingBuf) */
int _ZN7android29AudioALSACaptureDataClientDsp30copyEchoRefCaptureDataToClientENS_7RingBufE(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal15syncEchoRefDataEhP15audio_ringbuf_t */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::syncEchoRefData(unsigned char, audio_ringbuf_t*) */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal15syncEchoRefDataEhP15audio_ringbuf_t(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderANCD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderANC::~AudioALSACaptureDataProviderANC() */
int _ZN7android31AudioALSACaptureDataProviderANCD1Ev(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp12setFilterMngEPNS_21AudioMTKFilterManagerE */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::setFilterMng(android::AudioMTKFilterManager*) */
int _ZN7android27AudioALSAPlaybackHandlerDsp12setFilterMngEPNS_21AudioMTKFilterManagerE(void);

/* Symbol: _ZN7android19AudioALSAParamTuner17setRecordFileNameEPKc */
/* Demangled: android::AudioALSAParamTuner::setRecordFileName(char const*) */
int _ZN7android19AudioALSAParamTuner17setRecordFileNameEPKc(void);

/* Symbol: _ZN7android16SpeechVMRecorder17mSpeechVMRecorderE */
/* Demangled: android::SpeechVMRecorder::mSpeechVMRecorder */
extern void* _ZN7android16SpeechVMRecorder17mSpeechVMRecorderE;

/* Symbol: _ZTVN7android23AudioEventThreadManagerE */
/* Demangled: vtable for android::AudioEventThreadManager */
extern void* _ZTVN7android23AudioEventThreadManagerE;

/* Symbol: _ZN7android11isApNeedAckEPKNS_9sph_msg_tE */
/* Demangled: android::isApNeedAck(android::sph_msg_t const*) */
int _ZN7android11isApNeedAckEPKNS_9sph_msg_tE(void);

/* Symbol: _ZNK7android18SpeechMessageQueue12getQueueSizeEv */
/* Demangled: android::SpeechMessageQueue::getQueueSize() const */
int _ZNK7android18SpeechMessageQueue12getQueueSizeEv(void);

/* Symbol: aurisys_pool_buf_formatter_init */
/* Demangled: aurisys_pool_buf_formatter_init */
int aurisys_pool_buf_formatter_init(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload7routingEj */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::routing(unsigned int) */
int _ZN7android31AudioALSAPlaybackHandlerOffload7routingEj(void);

/* Symbol: _ZN7android16streamout_proptyE */
/* Demangled: android::streamout_propty */
extern void* _ZN7android16streamout_proptyE;

/* Symbol: _ZN7android25SpeechPcmMixerTelephonyTx10pcmMixerOnEPNS_21SpeechDriverInterfaceE */
/* Demangled: android::SpeechPcmMixerTelephonyTx::pcmMixerOn(android::SpeechDriverInterface*) */
int _ZN7android25SpeechPcmMixerTelephonyTx10pcmMixerOnEPNS_21SpeechDriverInterfaceE(void);

/* Symbol: _ZN7android16SpeechExtMemUSIP21resetShareMemoryIndexEv */
/* Demangled: android::SpeechExtMemUSIP::resetShareMemoryIndex() */
int _ZN7android16SpeechExtMemUSIP21resetShareMemoryIndexEv(void);

/* Symbol: _ZN7android22AudioMTKGainController21GetHeadPhoneImpedanceEv */
/* Demangled: android::AudioMTKGainController::GetHeadPhoneImpedance() */
int _ZN7android22AudioMTKGainController21GetHeadPhoneImpedanceEv(void);

/* Symbol: _ZN7android20GainTableParamParser14getParamVectorIsEEiP10_ParamUnitPNSt3__16vectorIT_NS4_9allocatorIS6_EEEEPKc */
/* Demangled: int android::GainTableParamParser::getParamVector<short>(_ParamUnit*, std::__1::vector<short, std::__1::allocator<short> >*, char const*) */
int _ZN7android20GainTableParamParser14getParamVectorIsEEiP10_ParamUnitPNSt3__16vectorIT_NS4_9allocatorIS6_EEEEPKc(void);

/* Symbol: _ZN7android17AudioALSAHardware16mHwParametersCbkE */
/* Demangled: android::AudioALSAHardware::mHwParametersCbk */
extern void* _ZN7android17AudioALSAHardware16mHwParametersCbkE;

/* Symbol: t1_older_then_t2 */
/* Demangled: t1_older_then_t2 */
int t1_older_then_t2(void);

/* Symbol: _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE10push_frontEOS2_ */
/* Demangled: std::__1::deque<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::push_front(std::__1::__state<char>&&) */
int _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE10push_frontEOS2_(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderTDMD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderTDM::~AudioALSACaptureDataProviderTDM() */
int _ZN7android31AudioALSACaptureDataProviderTDMD2Ev(void);

/* Symbol: _ZN7android18AudioALSAStreamOut7routingEj */
/* Demangled: android::AudioALSAStreamOut::routing(unsigned int) */
int _ZN7android18AudioALSAStreamOut7routingEj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager18getTVOutCapabilityEPKc */
/* Demangled: android::AudioALSAStreamManager::getTVOutCapability(char const*) */
int _ZN7android22AudioALSAStreamManager18getTVOutCapabilityEPKc(void);

/* Symbol: aurisys_set_dl_digital_gain */
/* Demangled: aurisys_set_dl_digital_gain */
int aurisys_set_dl_digital_gain(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceDL36mAudioALSACaptureDataProviderVoiceDLE */
/* Demangled: android::AudioALSACaptureDataProviderVoiceDL::mAudioALSACaptureDataProviderVoiceDL */
extern void* _ZN7android35AudioALSACaptureDataProviderVoiceDL36mAudioALSACaptureDataProviderVoiceDLE;

/* Symbol: _ZN7android28AudioALSADeviceConfigManager15LoadAudioConfigEPKc */
/* Demangled: android::AudioALSADeviceConfigManager::LoadAudioConfig(char const*) */
int _ZN7android28AudioALSADeviceConfigManager15LoadAudioConfigEPKc(void);

/* Symbol: _ZN7android16SpeechExtMemCCCI24writeApDataToShareMemoryEPKvttPtPj */
/* Demangled: android::SpeechExtMemCCCI::writeApDataToShareMemory(void const*, unsigned short, unsigned short, unsigned short*, unsigned int*) */
int _ZN7android16SpeechExtMemCCCI24writeApDataToShareMemoryEPKvttPtPj(void);

/* Symbol: _ZN7android16SpeechExtMemUSIP26writeSphParamToShareMemoryEPKvjPj */
/* Demangled: android::SpeechExtMemUSIP::writeSphParamToShareMemory(void const*, unsigned int, unsigned int*) */
int _ZN7android16SpeechExtMemUSIP26writeSphParamToShareMemoryEPKvjPj(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_class_escapeINS_11__wrap_iterIPKcEEEET_S9_S9_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_20__bracket_expressionIcS2_EE */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_class_escape<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_class_escapeINS_11__wrap_iterIPKcEEEET_S9_S9_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPNS_20__bracket_expressionIcS2_EE(void);

/* Symbol: _ZNK7android18SpeechMessageQueue15checkQueueEmptyEv */
/* Demangled: android::SpeechMessageQueue::checkQueueEmpty() const */
int _ZNK7android18SpeechMessageQueue15checkQueueEmptyEv(void);

/* Symbol: _ZNKSt3__111__alternateIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__alternate<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__111__alternateIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager17startOutputDeviceEjj */
/* Demangled: android::AudioALSAHardwareResourceManager::startOutputDevice(unsigned int, unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager17startOutputDeviceEjj(void);

/* Symbol: _ZN7android21AudioDspStreamManager12getUlLatencyEv */
/* Demangled: android::AudioDspStreamManager::getUlLatency() */
int _ZN7android21AudioDspStreamManager12getUlLatencyEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP9recordOffENS_19SpcRecordTypeStructE */
/* Demangled: android::SpeechDriverOpenDSP::recordOff(android::SpcRecordTypeStruct) */
int _ZN7android19SpeechDriverOpenDSP9recordOffENS_19SpcRecordTypeStructE(void);

/* Symbol: _ZN7android8SPELayer11DumpFileNumE */
/* Demangled: android::SPELayer::DumpFileNum */
extern void* _ZN7android8SPELayer11DumpFileNumE;

/* Symbol: _ZTVNSt3__128__begin_marked_subexpressionIcEE */
/* Demangled: vtable for std::__1::__begin_marked_subexpression<char> */
extern void* _ZTVNSt3__128__begin_marked_subexpressionIcEE;

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase13processDmaMsgEP9ipi_msg_tPvj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::processDmaMsg(ipi_msg_t*, void*, unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerBase13processDmaMsgEP9ipi_msg_tPvj(void);

/* Symbol: _ZN7android19AudioALSAParamTuner17setPlaybackVolumeEjjj */
/* Demangled: android::AudioALSAParamTuner::setPlaybackVolume(unsigned int, unsigned int, unsigned int) */
int _ZN7android19AudioALSAParamTuner17setPlaybackVolumeEjjj(void);

/* Symbol: _ZN7android18AudioALSAStreamOut7latencyEv */
/* Demangled: android::AudioALSAStreamOut::latency() */
int _ZN7android18AudioALSAStreamOut7latencyEv(void);

/* Symbol: _ZN7android21AudioDspStreamManager14isAdspPlaybackEij */
/* Demangled: android::AudioDspStreamManager::isAdspPlayback(int, unsigned int) */
int _ZN7android21AudioDspStreamManager14isAdspPlaybackEij(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload16offload_callbackE23stream_callback_event_t */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::offload_callback(stream_callback_event_t) */
int _ZN7android31AudioALSAPlaybackHandlerOffload16offload_callbackE23stream_callback_event_t(void);

/* Symbol: _ZN7android22AudioMTKGainController20GetDigitalLinearGainEjj19audio_stream_type_t */
/* Demangled: android::AudioMTKGainController::GetDigitalLinearGain(unsigned int, unsigned int, audio_stream_type_t) */
int _ZN7android22AudioMTKGainController20GetDigitalLinearGainEjj19audio_stream_type_t(void);

/* Symbol: _ZN7android17AudioMessengerIPI21deregisterAdspFeatureEt */
/* Demangled: android::AudioMessengerIPI::deregisterAdspFeature(unsigned short) */
int _ZN7android17AudioMessengerIPI21deregisterAdspFeatureEt(void);

/* Symbol: get_aurisys_set_raram_result */
/* Demangled: get_aurisys_set_raram_result */
int get_aurisys_set_raram_result(void);

/* Symbol: _ZN7android28AudioALSACaptureHandlerVoice5closeEv */
/* Demangled: android::AudioALSACaptureHandlerVoice::close() */
int _ZN7android28AudioALSACaptureHandlerVoice5closeEv(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderEchoRef36mAudioALSACaptureDataProviderEchoRefE */
/* Demangled: android::AudioALSACaptureDataProviderEchoRef::mAudioALSACaptureDataProviderEchoRef */
extern void* _ZN7android35AudioALSACaptureDataProviderEchoRef36mAudioALSACaptureDataProviderEchoRefE;

/* Symbol: _ZN7android22AudioALSAStreamManager13EnableSphStrmE12audio_mode_t */
/* Demangled: android::AudioALSAStreamManager::EnableSphStrm(audio_mode_t) */
int _ZN7android22AudioALSAStreamManager13EnableSphStrmE12audio_mode_t(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal17handleLockTimeoutEv */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::handleLockTimeout() */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal17handleLockTimeoutEv(void);

/* Symbol: _ZN7android20keypcmI2S2ADCCaptureE */
/* Demangled: android::keypcmI2S2ADCCapture */
extern void* _ZN7android20keypcmI2S2ADCCaptureE;

/* Symbol: _ZNKSt3__110__r_anchorIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__r_anchor<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__110__r_anchorIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android19AudioALSAParamTunerC2Ev */
/* Demangled: android::AudioALSAParamTuner::AudioALSAParamTuner() */
int _ZN7android19AudioALSAParamTunerC2Ev(void);

/* Symbol: _ZN7android22AudioMTKGainController13isValidVolIdxEi12audio_mode_t */
/* Demangled: android::AudioMTKGainController::isValidVolIdx(int, audio_mode_t) */
int _ZN7android22AudioMTKGainController13isValidVolIdxEi12audio_mode_t(void);

/* Symbol: _ZN7android22AudioMTKGainController15getStreamVolumeEi */
/* Demangled: android::AudioMTKGainController::getStreamVolume(int) */
int _ZN7android22AudioMTKGainController15getStreamVolumeEi(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController12throttleInitEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::throttleInit(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController12throttleInitEPNS_9USBStreamE(void);

/* Symbol: aurisys_lib_manager_c_file_init */
/* Demangled: aurisys_lib_manager_c_file_init */
int aurisys_lib_manager_c_file_init(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP12ScpSpeechOffEv */
/* Demangled: android::SpeechDriverOpenDSP::ScpSpeechOff() */
int _ZN7android19SpeechDriverOpenDSP12ScpSpeechOffEv(void);

/* Symbol: _ZN7android22AudioMTKGainController11SetSideToneEjj */
/* Demangled: android::AudioMTKGainController::SetSideTone(unsigned int, unsigned int) */
int _ZN7android22AudioMTKGainController11SetSideToneEjj(void);

/* Symbol: _ZN7android19keypcmMRGrxPlaybackE */
/* Demangled: android::keypcmMRGrxPlayback */
extern void* _ZN7android19keypcmMRGrxPlaybackE;

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFastD0Ev */
/* Demangled: android::AudioALSAPlaybackHandlerFast::~AudioALSAPlaybackHandlerFast() */
int _ZN7android28AudioALSAPlaybackHandlerFastD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSACaptureHandlerBase*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android23AudioMTKHeadSetMessager17isEarphonePluggedEv */
/* Demangled: android::AudioMTKHeadSetMessager::isEarphonePlugged() */
int _ZN7android23AudioMTKHeadSetMessager17isEarphonePluggedEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase16isWavDumpEnabledEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::isWavDumpEnabled() */
int _ZN7android32AudioALSACaptureDataProviderBase16isWavDumpEnabledEv(void);

/* Symbol: _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitch45mAudioALSACodecDeviceOutReceiverSpeakerSwitchE */
/* Demangled: android::AudioALSACodecDeviceOutReceiverSpeakerSwitch::mAudioALSACodecDeviceOutReceiverSpeakerSwitch */
extern void* _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitch45mAudioALSACodecDeviceOutReceiverSpeakerSwitchE;

/* Symbol: _ZN7android18AudioBTCVSDControl19BT_SCO_ExtMDInitBufENS_21EXTMD_BTSCO_DIRECTIONE */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMDInitBuf(android::EXTMD_BTSCO_DIRECTION) */
int _ZN7android18AudioBTCVSDControl19BT_SCO_ExtMDInitBufENS_21EXTMD_BTSCO_DIRECTIONE(void);

/* Symbol: _ZN7android14AudioUSBCenter14inGetParameterEPKc */
/* Demangled: android::AudioUSBCenter::inGetParameter(char const*) */
int _ZN7android14AudioUSBCenter14inGetParameterEPKc(void);

/* Symbol: _ZN7android14AudioUSBCenter18getHighestAudioFmtEPK19alsa_device_profile */
/* Demangled: android::AudioUSBCenter::getHighestAudioFmt(alsa_device_profile const*) */
int _ZN7android14AudioUSBCenter18getHighestAudioFmtEPK19alsa_device_profile(void);

/* Symbol: _ZN7android22AudioSmartPaController11isAlsaCodecEv */
/* Demangled: android::AudioSmartPaController::isAlsaCodec() */
int _ZN7android22AudioSmartPaController11isAlsaCodecEv(void);

/* Symbol: _ZN7android9streamoutE */
/* Demangled: android::streamout */
extern void* _ZN7android9streamoutE;

/* Symbol: _ZN7android17AudioALSAHardware22setCachedParam2soundfxEj */
/* Demangled: android::AudioALSAHardware::setCachedParam2soundfx(unsigned int) */
int _ZN7android17AudioALSAHardware22setCachedParam2soundfxEj(void);

/* Symbol: _ZN7android12SpeechConfig11getInstanceEv */
/* Demangled: android::SpeechConfig::getInstance() */
int _ZN7android12SpeechConfig11getInstanceEv(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_ORD_CHAR_EREINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ORD_CHAR_ERE<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_ORD_CHAR_EREINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZN7android18AudioBTCVSDControl15BT_SCO_RX_CloseEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_Close() */
int _ZN7android18AudioBTCVSDControl15BT_SCO_RX_CloseEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase10initBliSrcEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::initBliSrc() */
int _ZN7android28AudioALSAPlaybackHandlerBase10initBliSrcEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager14openAddaOutputEjj */
/* Demangled: android::AudioALSAHardwareResourceManager::openAddaOutput(unsigned int, unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager14openAddaOutputEjj(void);

/* Symbol: _ZN7android21AudioALSADeviceParser11getInstanceEv */
/* Demangled: android::AudioALSADeviceParser::getInstance() */
int _ZN7android21AudioALSADeviceParser11getInstanceEv(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormalD2Ev */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::~AudioALSAPlaybackHandlerNormal() */
int _ZN7android30AudioALSAPlaybackHandlerNormalD2Ev(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderBTSCO34mAudioALSACaptureDataProviderBTSCOE */
/* Demangled: android::AudioALSACaptureDataProviderBTSCO::mAudioALSACaptureDataProviderBTSCO */
extern void* _ZN7android33AudioALSACaptureDataProviderBTSCO34mAudioALSACaptureDataProviderBTSCOE;

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffloadD0Ev */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::~AudioALSAPlaybackHandlerOffload() */
int _ZN7android31AudioALSAPlaybackHandlerOffloadD0Ev(void);

/* Symbol: _ZN7android22keypcmDL1DATA2PLaybackE */
/* Demangled: android::keypcmDL1DATA2PLayback */
extern void* _ZN7android22keypcmDL1DATA2PLaybackE;

/* Symbol: _ZN7android24AudioThrottleTimeControlD1Ev */
/* Demangled: android::AudioThrottleTimeControl::~AudioThrottleTimeControl() */
int _ZN7android24AudioThrottleTimeControlD1Ev(void);

/* Symbol: _ZN7android8SPELayer18InsertDownlinkDataEv */
/* Demangled: android::SPELayer::InsertDownlinkData() */
int _ZN7android8SPELayer18InsertDownlinkDataEv(void);

/* Symbol: _ZTVNSt3__110__l_anchorIcEE */
/* Demangled: vtable for std::__1::__l_anchor<char> */
extern void* _ZTVNSt3__110__l_anchorIcEE;

/* Symbol: _ZN7android17SpeechParserGen9518uniqueSpeechParserE */
/* Demangled: android::SpeechParserGen95::uniqueSpeechParser */
extern void* _ZN7android17SpeechParserGen9518uniqueSpeechParserE;

/* Symbol: _ZN7android22AudioMTKGainController22tuneGainForHpImpedanceEi11GAIN_DEVICE */
/* Demangled: android::AudioMTKGainController::tuneGainForHpImpedance(int, GAIN_DEVICE) */
int _ZN7android22AudioMTKGainController22tuneGainForHpImpedanceEi11GAIN_DEVICE(void);

/* Symbol: _ZN7android17AudioALSAHardware7setModeEi */
/* Demangled: android::AudioALSAHardware::setMode(int) */
int _ZN7android17AudioALSAHardware7setModeEi(void);

/* Symbol: _ZN7android17AudioALSAStreamIn12SetInputMuteEb */
/* Demangled: android::AudioALSAStreamIn::SetInputMute(bool) */
int _ZN7android17AudioALSAStreamIn12SetInputMuteEb(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase11openWavDumpEPKc */
/* Demangled: android::AudioALSAPlaybackHandlerBase::openWavDump(char const*) */
int _ZN7android28AudioALSAPlaybackHandlerBase11openWavDumpEPKc(void);

/* Symbol: _ZN7android17AudioALSAHardware18SetTDMrecordEnableEj */
/* Demangled: android::AudioALSAHardware::SetTDMrecordEnable(unsigned int) */
int _ZN7android17AudioALSAHardware18SetTDMrecordEnableEj(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerTDM7routingEj */
/* Demangled: android::AudioALSACaptureHandlerTDM::routing(unsigned int) */
int _ZN7android26AudioALSACaptureHandlerTDM7routingEj(void);

/* Symbol: _ZN7android33AudioALSASpeechLoopbackController25mSpeechLoopbackControllerE */
/* Demangled: android::AudioALSASpeechLoopbackController::mSpeechLoopbackController */
extern void* _ZN7android33AudioALSASpeechLoopbackController25mSpeechLoopbackControllerE;

/* Symbol: _ZN7android31AudioALSASpeechStreamControllerD2Ev */
/* Demangled: android::AudioALSASpeechStreamController::~AudioALSASpeechStreamController() */
int _ZN7android31AudioALSASpeechStreamControllerD2Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager21destroyCaptureHandlerEPNS_27AudioALSACaptureHandlerBaseE */
/* Demangled: android::AudioALSAStreamManager::destroyCaptureHandler(android::AudioALSACaptureHandlerBase*) */
int _ZN7android22AudioALSAStreamManager21destroyCaptureHandlerEPNS_27AudioALSACaptureHandlerBaseE(void);

/* Symbol: _ZN7android18SpeechDriverNormal17VoiceMemoRecordOnEv */
/* Demangled: android::SpeechDriverNormal::VoiceMemoRecordOn() */
int _ZN7android18SpeechDriverNormal17VoiceMemoRecordOnEv(void);

/* Symbol: _ZN7android22AudioMTKGainController14SetULTotalGainEjh */
/* Demangled: android::AudioMTKGainController::SetULTotalGain(unsigned int, unsigned char) */
int _ZN7android22AudioMTKGainController14SetULTotalGainEjh(void);

/* Symbol: _ZN7android17AudioALSAHardwareD1Ev */
/* Demangled: android::AudioALSAHardware::~AudioALSAHardware() */
int _ZN7android17AudioALSAHardwareD1Ev(void);

/* Symbol: _ZTVN7android30AudioALSACaptureHandlerFMRadioE */
/* Demangled: vtable for android::AudioALSACaptureHandlerFMRadio */
extern void* _ZTVN7android30AudioALSACaptureHandlerFMRadioE;

/* Symbol: _ZN7android17AudioALSAStreamIn12mDumpFileNumE */
/* Demangled: android::AudioALSAStreamIn::mDumpFileNum */
extern void* _ZN7android17AudioALSAStreamIn12mDumpFileNumE;

/* Symbol: _ZN7android21AudioDspStreamManager23dumpCaptureDataProviderEv */
/* Demangled: android::AudioDspStreamManager::dumpCaptureDataProvider() */
int _ZN7android21AudioDspStreamManager23dumpCaptureDataProviderEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSAPlaybackHandlerBase*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo21SetBesRecTuningEnableEb */
/* Demangled: android::AudioSpeechEnhanceInfo::SetBesRecTuningEnable(bool) */
int _ZN7android22AudioSpeechEnhanceInfo21SetBesRecTuningEnableEb(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerSyncIOC2EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerSyncIO::AudioALSACaptureHandlerSyncIO(stream_attribute_t*) */
int _ZN7android29AudioALSACaptureHandlerSyncIOC2EP18stream_attribute_t(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController16initBitConverterEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::initBitConverter(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController16initBitConverterEPNS_9USBStreamE(void);

/* Symbol: _ZN7android18AudioALSAStreamOut28dynamicSetStreamOutAudioDumpEv */
/* Demangled: android::AudioALSAStreamOut::dynamicSetStreamOutAudioDump() */
int _ZN7android18AudioALSAStreamOut28dynamicSetStreamOutAudioDumpEv(void);

/* Symbol: _ZN7android8AudioFtm15SetVibSpkEnableEbj */
/* Demangled: android::AudioFtm::SetVibSpkEnable(bool, unsigned int) */
int _ZN7android8AudioFtm15SetVibSpkEnableEbj(void);

/* Symbol: _ZN7android21SpeechDriverInterface12mNetworkRateE */
/* Demangled: android::SpeechDriverInterface::mNetworkRate */
extern void* _ZN7android21SpeechDriverInterface12mNetworkRateE;

/* Symbol: _ZN7android17SpeechDriverDummy9recordOffENS_19SpcRecordTypeStructE */
/* Demangled: android::SpeechDriverDummy::recordOff(android::SpcRecordTypeStruct) */
int _ZN7android17SpeechDriverDummy9recordOffENS_19SpcRecordTypeStructE(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderUsb4openEv */
/* Demangled: android::AudioALSACaptureDataProviderUsb::open() */
int _ZN7android31AudioALSACaptureDataProviderUsb4openEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase12closeWavDumpEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::closeWavDump() */
int _ZN7android32AudioALSACaptureDataProviderBase12closeWavDumpEv(void);

/* Symbol: _ZN7android17AudioDspCallFinal28getDspCallFinalRuntimeEnableEv */
/* Demangled: android::AudioDspCallFinal::getDspCallFinalRuntimeEnable() */
int _ZN7android17AudioDspCallFinal28getDspCallFinalRuntimeEnableEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP18SetBtHeadsetNrecOnEb */
/* Demangled: android::SpeechDriverOpenDSP::SetBtHeadsetNrecOn(bool) */
int _ZN7android19SpeechDriverOpenDSP18SetBtHeadsetNrecOnEb(void);

/* Symbol: _ZN7android24AudioThrottleTimeControl15adaptiveSleepUsEi18stream_attribute_t */
/* Demangled: android::AudioThrottleTimeControl::adaptiveSleepUs(int, stream_attribute_t) */
int _ZN7android24AudioThrottleTimeControl15adaptiveSleepUsEi18stream_attribute_t(void);

/* Symbol: _ZN7android17AudioALSAHardware20isMiSoundMusicModeOnEv */
/* Demangled: android::AudioALSAHardware::isMiSoundMusicModeOn() */
int _ZN7android17AudioALSAHardware20isMiSoundMusicModeOnEv(void);

/* Symbol: _ZN7android18streamindsp_proptyE */
/* Demangled: android::streamindsp_propty */
extern void* _ZN7android18streamindsp_proptyE;

/* Symbol: _ZN7android15AudioPreProcessC1EPK18stream_attribute_t */
/* Demangled: android::AudioPreProcess::AudioPreProcess(stream_attribute_t const*) */
int _ZN7android15AudioPreProcessC1EPK18stream_attribute_t(void);

/* Symbol: audio_timespec_to_ns */
/* Demangled: audio_timespec_to_ns */
int audio_timespec_to_ns(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient13StopBesRecordEv */
/* Demangled: android::AudioALSACaptureDataClient::StopBesRecord() */
int _ZN7android26AudioALSACaptureDataClient13StopBesRecordEv(void);

/* Symbol: _ZTCN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadE0_NS_6ThreadE */
/* Demangled: construction vtable for android::Thread-in-android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread */
extern void* _ZTCN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadE0_NS_6ThreadE;

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase25getPlaybackTurnOnSequenceEjPKc */
/* Demangled: android::AudioALSAPlaybackHandlerBase::getPlaybackTurnOnSequence(unsigned int, char const*) */
int _ZN7android28AudioALSAPlaybackHandlerBase25getPlaybackTurnOnSequenceEjPKc(void);

/* Symbol: _ZN7android29AudioALSACaptureDataClientDsp11ApplyVolumeEPvj */
/* Demangled: android::AudioALSACaptureDataClientDsp::ApplyVolume(void*, unsigned int) */
int _ZN7android29AudioALSACaptureDataClientDsp11ApplyVolumeEPvj(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_nondupl_REIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_nondupl_RE<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_nondupl_REIPKcEET_S7_S7_(void);

/* Symbol: _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCO10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTSCO::readThread(void*) */
int _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCO10readThreadEPv(void);

/* Symbol: _ZN7android17SpeechDriverDummy30SetAcousticLoopbackDelayFramesEi */
/* Demangled: android::SpeechDriverDummy::SetAcousticLoopbackDelayFrames(int) */
int _ZN7android17SpeechDriverDummy30SetAcousticLoopbackDelayFramesEi(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase14checkThresTimeEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::checkThresTime() */
int _ZN7android28AudioALSAPlaybackHandlerBase14checkThresTimeEv(void);

/* Symbol: _ZN7android8AudioFtmD0Ev */
/* Demangled: android::AudioFtm::~AudioFtm() */
int _ZN7android8AudioFtmD0Ev(void);

/* Symbol: _ZN18AudioVolumeFactory27CreateAudioVolumeControllerEv */
/* Demangled: AudioVolumeFactory::CreateAudioVolumeController() */
int _ZN18AudioVolumeFactory27CreateAudioVolumeControllerEv(void);

/* Symbol: _ZN7android8SPELayer10SetEnhParaENS_8SPE_MODEEPj */
/* Demangled: android::SPELayer::SetEnhPara(android::SPE_MODE, unsigned int*) */
int _ZN7android8SPELayer10SetEnhParaENS_8SPE_MODEEPj(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormal16SetLowJitterModeEbj */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::SetLowJitterMode(bool, unsigned int) */
int _ZN7android30AudioALSAPlaybackHandlerNormal16SetLowJitterModeEbj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager32updateOutputDeviceForAllStreamInEj */
/* Demangled: android::AudioALSAStreamManager::updateOutputDeviceForAllStreamIn(unsigned int) */
int _ZN7android22AudioALSAStreamManager32updateOutputDeviceForAllStreamInEj(void);

/* Symbol: _ZN7android17AudioALSAStreamIn18updateSinkMetadataEPK13sink_metadata */
/* Demangled: android::AudioALSAStreamIn::updateSinkMetadata(sink_metadata const*) */
int _ZN7android17AudioALSAStreamIn18updateSinkMetadataEPK13sink_metadata(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager16CloseSpeakerPathEv */
/* Demangled: android::AudioALSAHardwareResourceManager::CloseSpeakerPath() */
int _ZN7android32AudioALSAHardwareResourceManager16CloseSpeakerPathEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager25setCustOutputDevTurnOnSeqEjRNS_7String8ES2_ */
/* Demangled: android::AudioALSAHardwareResourceManager::setCustOutputDevTurnOnSeq(unsigned int, android::String8&, android::String8&) */
int _ZN7android32AudioALSAHardwareResourceManager25setCustOutputDevTurnOnSeqEjRNS_7String8ES2_(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase24GetTransferredBufferSizeEjPK18stream_attribute_tS3_ */
/* Demangled: android::AudioALSAPlaybackHandlerBase::GetTransferredBufferSize(unsigned int, stream_attribute_t const*, stream_attribute_t const*) */
int _ZN7android28AudioALSAPlaybackHandlerBase24GetTransferredBufferSizeEjPK18stream_attribute_tS3_(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtv15closePCMDumpKtvEv */
/* Demangled: android::AudioALSAHandlerKtv::closePCMDumpKtv() */
int _ZN7android19AudioALSAHandlerKtv15closePCMDumpKtvEv(void);

/* Symbol: _ZN7android12AudioFtmBase20SetVibSpkRampControlEh */
/* Demangled: android::AudioFtmBase::SetVibSpkRampControl(unsigned char) */
int _ZN7android12AudioFtmBase20SetVibSpkRampControlEh(void);

/* Symbol: _ZN7android17SpeechDriverDummy15SetDownlinkMuteEb */
/* Demangled: android::SpeechDriverDummy::SetDownlinkMute(bool) */
int _ZN7android17SpeechDriverDummy15SetDownlinkMuteEb(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerBTCVSD4openEv */
/* Demangled: android::AudioALSAPlaybackHandlerBTCVSD::open() */
int _ZN7android30AudioALSAPlaybackHandlerBTCVSD4openEv(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal16InitBufferConfigEP21aurisys_lib_manager_t */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::InitBufferConfig(aurisys_lib_manager_t*) */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal16InitBufferConfigEP21aurisys_lib_manager_t(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerBTCVSD20updateStartTimeStampEv */
/* Demangled: android::AudioALSAPlaybackHandlerBTCVSD::updateStartTimeStamp() */
int _ZN7android30AudioALSAPlaybackHandlerBTCVSD20updateStartTimeStampEv(void);

/* Symbol: _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmpD0Ev */
/* Demangled: android::AudioALSACodecDeviceOutExtSpeakerAmp::~AudioALSACodecDeviceOutExtSpeakerAmp() */
int _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmpD0Ev(void);

/* Symbol: _ZN7android11streamInputE */
/* Demangled: android::streamInput */
extern void* _ZN7android11streamInputE;

/* Symbol: _ZN7android31AudioALSACaptureDataProviderVOW10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderVOW::readThread(void*) */
int _ZN7android31AudioALSACaptureDataProviderVOW10readThreadEPv(void);

/* Symbol: _ZN7android8SPELayer7StandbyEv */
/* Demangled: android::SPELayer::Standby() */
int _ZN7android8SPELayer7StandbyEv(void);

/* Symbol: _ZN7android8SPELayer21SetPlatfromTimeOffsetEi */
/* Demangled: android::SPELayer::SetPlatfromTimeOffset(int) */
int _ZN7android8SPELayer21SetPlatfromTimeOffsetEi(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderModemDai37mAudioALSACaptureDataProviderModemDaiE */
/* Demangled: android::AudioALSACaptureDataProviderModemDai::mAudioALSACaptureDataProviderModemDai */
extern void* _ZN7android36AudioALSACaptureDataProviderModemDai37mAudioALSACaptureDataProviderModemDaiE;

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase12getPcmStatusEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::getPcmStatus() */
int _ZN7android32AudioALSACaptureDataProviderBase12getPcmStatusEv(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerBTSCOC2EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerBTSCO::AudioALSAPlaybackHandlerBTSCO(stream_attribute_t const*) */
int _ZN7android29AudioALSAPlaybackHandlerBTSCOC2EPK18stream_attribute_t(void);

/* Symbol: _ZN7android22AudioSmartPaController29isSmartPADynamicDetectSupportEv */
/* Demangled: android::AudioSmartPaController::isSmartPADynamicDetectSupport() */
int _ZN7android22AudioSmartPaController29isSmartPADynamicDetectSupportEv(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController22updateVadParamToKernelEv */
/* Demangled: android::AudioALSAVoiceWakeUpController::updateVadParamToKernel() */
int _ZN7android30AudioALSAVoiceWakeUpController22updateVadParamToKernelEv(void);

/* Symbol: _ZN7android17AudioALSAHardware31onAudioParameterChangedCallbackEPKc */
/* Demangled: android::AudioALSAHardware::onAudioParameterChangedCallback(char const*) */
int _ZN7android17AudioALSAHardware31onAudioParameterChangedCallbackEPKc(void);

/* Symbol: _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCOC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTSCO::AudioALSACaptureDataProviderEchoRefBTSCO() */
int _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCOC2Ev(void);

/* Symbol: _ZN7android15LoopbackManager16getIpcLpbkStatusEv */
/* Demangled: android::LoopbackManager::getIpcLpbkStatus() */
int _ZN7android15LoopbackManager16getIpcLpbkStatusEv(void);

/* Symbol: _ZN7android17AudioALSAStreamIn4openEv */
/* Demangled: android::AudioALSAStreamIn::open() */
int _ZN7android17AudioALSAStreamIn4openEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager16setSpkOutputGainEij */
/* Demangled: android::AudioALSAStreamManager::setSpkOutputGain(int, unsigned int) */
int _ZN7android22AudioALSAStreamManager16setSpkOutputGainEij(void);

/* Symbol: _ZTVN7android30AudioALSAPlaybackHandlerBTCVSDE */
/* Demangled: vtable for android::AudioALSAPlaybackHandlerBTCVSD */
extern void* _ZTVN7android30AudioALSAPlaybackHandlerBTCVSDE;

/* Symbol: _ZTVN7android34AudioALSACaptureDataProviderBTCVSDE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderBTCVSD */
extern void* _ZTVN7android34AudioALSACaptureDataProviderBTCVSDE;

/* Symbol: _ZN7android14AudioUSBCenterC1Ev */
/* Demangled: android::AudioUSBCenter::AudioUSBCenter() */
int _ZN7android14AudioUSBCenterC1Ev(void);

/* Symbol: _ZN7android18xmlChangedCallbackEP10_AppHandlePKc */
/* Demangled: android::xmlChangedCallback(_AppHandle*, char const*) */
int _ZN7android18xmlChangedCallbackEP10_AppHandlePKc(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController23getAdjustedOutputDeviceEv */
/* Demangled: android::AudioALSASpeechPhoneCallController::getAdjustedOutputDevice() */
int _ZN7android34AudioALSASpeechPhoneCallController23getAdjustedOutputDeviceEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread16WritePcmDumpDataEPhj */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDThread::WritePcmDumpData(unsigned char*, unsigned int) */
int _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread16WritePcmDumpDataEPhj(void);

/* Symbol: _ZN7android21AudioDspStreamManager15setDspRuntimeEnEhb */
/* Demangled: android::AudioDspStreamManager::setDspRuntimeEn(unsigned char, bool) */
int _ZN7android21AudioDspStreamManager15setDspRuntimeEnEhb(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_ */
/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char>(char&&) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_(void);

/* Symbol: _ZN7android22AudioALSAStreamManager15UpdateHACParamsEv */
/* Demangled: android::AudioALSAStreamManager::UpdateHACParams() */
int _ZN7android22AudioALSAStreamManager15UpdateHACParamsEv(void);

/* Symbol: _ZN7android17AudioALSAHardware24openInputStreamWithFlagsEjPiPjS2_S1_20audio_in_acoustics_t19audio_input_flags_t */
/* Demangled: android::AudioALSAHardware::openInputStreamWithFlags(unsigned int, int*, unsigned int*, unsigned int*, int*, audio_in_acoustics_t, audio_input_flags_t) */
int _ZN7android17AudioALSAHardware24openInputStreamWithFlagsEjPiPjS2_S1_20audio_in_acoustics_t19audio_input_flags_t(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsbC2EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::AudioALSAPlaybackHandlerUsb(stream_attribute_t const*) */
int _ZN7android27AudioALSAPlaybackHandlerUsbC2EPK18stream_attribute_t(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBase21getRawStartFrameCountEv */
/* Demangled: android::AudioALSACaptureHandlerBase::getRawStartFrameCount() */
int _ZN7android27AudioALSACaptureHandlerBase21getRawStartFrameCountEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase18isNeedSyncPcmStartEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::isNeedSyncPcmStart() */
int _ZN7android32AudioALSACaptureDataProviderBase18isNeedSyncPcmStartEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController26getBitConvertDstBufferSizeE14audio_format_tS1_j */
/* Demangled: android::AudioUSBPhoneCallController::getBitConvertDstBufferSize(audio_format_t, audio_format_t, unsigned int) */
int _ZN7android27AudioUSBPhoneCallController26getBitConvertDstBufferSizeE14audio_format_tS1_j(void);

/* Symbol: _ZN7android22AudioALSAStreamManager24getDeviceConnectionStateEj */
/* Demangled: android::AudioALSAStreamManager::getDeviceConnectionState(unsigned int) */
int _ZN7android22AudioALSAStreamManager24getDeviceConnectionStateEj(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager10setMicTypeEv */
/* Demangled: android::AudioALSAHardwareResourceManager::setMicType() */
int _ZN7android32AudioALSAHardwareResourceManager10setMicTypeEv(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtv13processDmaMsgEP9ipi_msg_tPvj */
/* Demangled: android::AudioALSAHandlerKtv::processDmaMsg(ipi_msg_t*, void*, unsigned int) */
int _ZN7android19AudioALSAHandlerKtv13processDmaMsgEP9ipi_msg_tPvj(void);

/* Symbol: _ZN7android17SpeechParserGen95D1Ev */
/* Demangled: android::SpeechParserGen95::~SpeechParserGen95() */
int _ZN7android17SpeechParserGen95D1Ev(void);

/* Symbol: _ZN7android17WCNChipController17BTChipHWInterfaceEv */
/* Demangled: android::WCNChipController::BTChipHWInterface() */
int _ZN7android17WCNChipController17BTChipHWInterfaceEv(void);

/* Symbol: _ZN7android17AudioALSAStreamInC1Ev */
/* Demangled: android::AudioALSAStreamIn::AudioALSAStreamIn() */
int _ZN7android17AudioALSAStreamInC1Ev(void);

/* Symbol: _ZNKSt3__121__empty_non_own_stateIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__empty_non_own_state<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__121__empty_non_own_stateIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController11getInstanceEv */
/* Demangled: android::AudioALSAVoiceWakeUpController::getInstance() */
int _ZN7android30AudioALSAVoiceWakeUpController11getInstanceEv(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManager11setMixerCtlENS_7String8ES1_ */
/* Demangled: android::AudioALSADeviceConfigManager::setMixerCtl(android::String8, android::String8) */
int _ZN7android28AudioALSADeviceConfigManager11setMixerCtlENS_7String8ES1_(void);

/* Symbol: _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThread16WritePcmDumpDataEPvj */
/* Demangled: android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread::WritePcmDumpData(void*, unsigned int) */
int _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThread16WritePcmDumpDataEPvj(void);

/* Symbol: _ZN7android31AudioALSASpeechStreamController24EnableSpeechStreamThreadEb */
/* Demangled: android::AudioALSASpeechStreamController::EnableSpeechStreamThread(bool) */
int _ZN7android31AudioALSASpeechStreamController24EnableSpeechStreamThreadEb(void);

/* Symbol: _ZN7android22AudioALSAStreamManager14needEnableVoipEPK18stream_attribute_t */
/* Demangled: android::AudioALSAStreamManager::needEnableVoip(stream_attribute_t const*) */
int _ZN7android22AudioALSAStreamManager14needEnableVoipEPK18stream_attribute_t(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerHDMI19SetMHLChipParameterEiii */
/* Demangled: android::AudioALSAPlaybackHandlerHDMI::SetMHLChipParameter(int, int, int) */
int _ZN7android28AudioALSAPlaybackHandlerHDMI19SetMHLChipParameterEiii(void);

/* Symbol: _ZN7android8SPELayer12IsSPERunningEv */
/* Demangled: android::SPELayer::IsSPERunning() */
int _ZN7android8SPELayer12IsSPERunningEv(void);

/* Symbol: _ZNK7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::SpeechPcmMixerBaseBuffer*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android8SPELayer16CreateDumpThreadEv */
/* Demangled: android::SPELayer::CreateDumpThread() */
int _ZN7android8SPELayer16CreateDumpThreadEv(void);

/* Symbol: _ZN7android8SPELayer17Dump_Enalbe_CheckEv */
/* Demangled: android::SPELayer::Dump_Enalbe_Check() */
int _ZN7android8SPELayer17Dump_Enalbe_CheckEv(void);

/* Symbol: _ZN7android27SpeechDataProcessingHandler19processSpeechPacketEPcj */
/* Demangled: android::SpeechDataProcessingHandler::processSpeechPacket(char*, unsigned int) */
int _ZN7android27SpeechDataProcessingHandler19processSpeechPacketEPcj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZN7android28AudioALSACaptureHandlerVoiceC2EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerVoice::AudioALSACaptureHandlerVoice(stream_attribute_t*) */
int _ZN7android28AudioALSACaptureHandlerVoiceC2EP18stream_attribute_t(void);

/* Symbol: _ZTVN7android35AudioALSACaptureDataProviderVoiceULE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderVoiceUL */
extern void* _ZTVN7android35AudioALSACaptureDataProviderVoiceULE;

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager24setHeadphoneLowPowerModeEb */
/* Demangled: android::AudioALSAHardwareResourceManager::setHeadphoneLowPowerMode(bool) */
int _ZN7android32AudioALSAHardwareResourceManager24setHeadphoneLowPowerModeEb(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAPlaybackHandlerBase*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_28AudioALSAPlaybackHandlerBaseEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android20AudioCustParamClientC1Ev */
/* Demangled: android::AudioCustParamClient::AudioCustParamClient() */
int _ZN7android20AudioCustParamClientC1Ev(void);

/* Symbol: _ZN7android14newMtkDcRemoveEv */
/* Demangled: android::newMtkDcRemove() */
int _ZN7android14newMtkDcRemoveEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager18SetMusicPlusStatusEb */
/* Demangled: android::AudioALSAStreamManager::SetMusicPlusStatus(bool) */
int _ZN7android22AudioALSAStreamManager18SetMusicPlusStatusEb(void);

/* Symbol: _ZTVN7android39AudioALSACaptureDataClientAurisysNormalE */
/* Demangled: vtable for android::AudioALSACaptureDataClientAurisysNormal */
extern void* _ZTVN7android39AudioALSACaptureDataClientAurisysNormalE;

/* Symbol: _ZN7android17AudioALSAHardware22mHwParametersCbkCookieE */
/* Demangled: android::AudioALSAHardware::mHwParametersCbkCookie */
extern void* _ZN7android17AudioALSAHardware22mHwParametersCbkCookieE;

/* Symbol: _ZN7android8AudioFtm19Audio_MATV_I2S_PlayEi */
/* Demangled: android::AudioFtm::Audio_MATV_I2S_Play(int) */
int _ZN7android8AudioFtm19Audio_MATV_I2S_PlayEi(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase15doBitConversionEPvjPS1_Pj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::doBitConversion(void*, unsigned int, void**, unsigned int*) */
int _ZN7android28AudioALSAPlaybackHandlerBase15doBitConversionEPvjPS1_Pj(void);

/* Symbol: _ZN7android20pcmDumpThreadCreatedE */
/* Demangled: android::pcmDumpThreadCreated */
extern void* _ZN7android20pcmDumpThreadCreatedE;

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo20IsBesRecTuningEnableEv */
/* Demangled: android::AudioSpeechEnhanceInfo::IsBesRecTuningEnable() */
int _ZN7android22AudioSpeechEnhanceInfo20IsBesRecTuningEnableEv(void);

/* Symbol: _ZN7android8SPELayer12GetFrameRateENS_8SPE_MODEE */
/* Demangled: android::SPELayer::GetFrameRate(android::SPE_MODE) */
int _ZN7android8SPELayer12GetFrameRateENS_8SPE_MODEE(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase18GetAurisysScenarioEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::GetAurisysScenario() */
int _ZN7android28AudioALSAPlaybackHandlerBase18GetAurisysScenarioEv(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManager10GetVersionEP12TiXmlElement */
/* Demangled: android::AudioALSADeviceConfigManager::GetVersion(TiXmlElement*) */
int _ZN7android28AudioALSADeviceConfigManager10GetVersionEP12TiXmlElement(void);

/* Symbol: _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitch11getInstanceEv */
/* Demangled: android::AudioALSACodecDeviceOutReceiverSpeakerSwitch::getInstance() */
int _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitch11getInstanceEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp20setAfeDspRefShareMemEb */
/* Demangled: android::AudioALSACaptureDataProviderDsp::setAfeDspRefShareMem(bool) */
int _ZN7android31AudioALSACaptureDataProviderDsp20setAfeDspRefShareMemEb(void);

/* Symbol: alock_wait_ms */
/* Demangled: alock_wait_ms */
int alock_wait_ms(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP12getParameterEPKc */
/* Demangled: android::SpeechDriverOpenDSP::getParameter(char const*) */
int _ZN7android19SpeechDriverOpenDSP12getParameterEPKc(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEEC2ERKS7_ */
/* Demangled: std::__1::vector<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> > >::vector(std::__1::vector<std::__1::pair<unsigned int, char const*>, std::__1::allocator<std::__1::pair<unsigned int, char const*> > > const&) */
int _ZNSt3__16vectorINS_4pairIjPKcEENS_9allocatorIS4_EEEC2ERKS7_(void);

/* Symbol: _ZN7android17AudioMessengerIPI11getInstanceEv */
/* Demangled: android::AudioMessengerIPI::getInstance() */
int _ZN7android17AudioMessengerIPI11getInstanceEv(void);

/* Symbol: _ZN7android19keypcmDl1AwbCaptureE */
/* Demangled: android::keypcmDl1AwbCapture */
extern void* _ZN7android19keypcmDl1AwbCaptureE;

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE26__parse_bracket_expressionINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_bracket_expression<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE26__parse_bracket_expressionINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerVoice7routingEj */
/* Demangled: android::AudioALSAPlaybackHandlerVoice::routing(unsigned int) */
int _ZN7android29AudioALSAPlaybackHandlerVoice7routingEj(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase16writeWavDumpDataEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::writeWavDumpData() */
int _ZN7android32AudioALSACaptureDataProviderBase16writeWavDumpDataEv(void);

/* Symbol: _ZN7android23AudioEventThreadManager19getAudioEventThreadENS_14AudioEventTypeE */
/* Demangled: android::AudioEventThreadManager::getAudioEventThread(android::AudioEventType) */
int _ZN7android23AudioEventThreadManager19getAudioEventThreadENS_14AudioEventTypeE(void);

/* Symbol: _ZN7android21keypcmHostlessSpkInitE */
/* Demangled: android::keypcmHostlessSpkInit */
extern void* _ZN7android21keypcmHostlessSpkInitE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE;

/* Symbol: _ZN7android19AudioALSAParamTuner18playbackFileFormatEv */
/* Demangled: android::AudioALSAParamTuner::playbackFileFormat() */
int _ZN7android19AudioALSAParamTuner18playbackFileFormatEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager26getVoiceSpeakerCustSeqenceEv */
/* Demangled: android::AudioALSAHardwareResourceManager::getVoiceSpeakerCustSeqence() */
int _ZN7android32AudioALSAHardwareResourceManager26getVoiceSpeakerCustSeqenceEv(void);

/* Symbol: deinit_aurisys_dsp_dump */
/* Demangled: deinit_aurisys_dsp_dump */
int deinit_aurisys_dsp_dump(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderHAPD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderHAP::~AudioALSACaptureDataProviderHAP() */
int _ZN7android31AudioALSACaptureDataProviderHAPD1Ev(void);

/* Symbol: _ZN7android31AudioALSASpeechStreamController11getInstanceEv */
/* Demangled: android::AudioALSASpeechStreamController::getInstance() */
int _ZN7android31AudioALSASpeechStreamController11getInstanceEv(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer28configBtUsbRingtoneAttributeEP18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::configBtUsbRingtoneAttribute(stream_attribute_t*) */
int _ZN7android29AudioALSAPlaybackHandlerMixer28configBtUsbRingtoneAttributeEP18stream_attribute_t(void);

/* Symbol: _ZN7android8SPELayer4StopEv */
/* Demangled: android::SPELayer::Stop() */
int _ZN7android8SPELayer4StopEv(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefExt5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefExt::close() */
int _ZN7android38AudioALSACaptureDataProviderEchoRefExt5closeEv(void);

/* Symbol: _ZN7android24AudioALSACodecDeviceBaseC2Ev */
/* Demangled: android::AudioALSACodecDeviceBase::AudioALSACodecDeviceBase() */
int _ZN7android24AudioALSACodecDeviceBaseC2Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl11initCvsdLibEv */
/* Demangled: android::AudioBTCVSDControl::initCvsdLib() */
int _ZN7android18AudioBTCVSDControl11initCvsdLibEv(void);

/* Symbol: audio_ringbuf_free_space */
/* Demangled: audio_ringbuf_free_space */
int audio_ringbuf_free_space(void);

/* Symbol: _ZN7android13isBtSpkDeviceEj */
/* Demangled: android::isBtSpkDevice(unsigned int) */
int _ZN7android13isBtSpkDeviceEj(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderTDM5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderTDM::close() */
int _ZN7android31AudioALSACaptureDataProviderTDM5closeEv(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutEarphonePMICD0Ev */
/* Demangled: android::AudioALSACodecDeviceOutEarphonePMIC::~AudioALSACodecDeviceOutEarphonePMIC() */
int _ZN7android35AudioALSACodecDeviceOutEarphonePMICD0Ev(void);

/* Symbol: _ZN7android22AudioMTKGainController15setMasterVolumeEf12audio_mode_tj */
/* Demangled: android::AudioMTKGainController::setMasterVolume(float, audio_mode_t, unsigned int) */
int _ZN7android22AudioMTKGainController15setMasterVolumeEf12audio_mode_tj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager14mStreamManagerE */
/* Demangled: android::AudioALSAStreamManager::mStreamManager */
extern void* _ZN7android22AudioALSAStreamManager14mStreamManagerE;

/* Symbol: _ZN7android19SpeechDriverOpenDSP14SpeechRouterOnEv */
/* Demangled: android::SpeechDriverOpenDSP::SpeechRouterOn() */
int _ZN7android19SpeechDriverOpenDSP14SpeechRouterOnEv(void);

/* Symbol: _ZN7android16keypcmHostlessFmE */
/* Demangled: android::keypcmHostlessFm */
extern void* _ZN7android16keypcmHostlessFmE;

/* Symbol: _ZN7android18keypcmHostlessLpbkE */
/* Demangled: android::keypcmHostlessLpbk */
extern void* _ZN7android18keypcmHostlessLpbkE;

/* Symbol: _ZNK7android6VectorIPNS_10BufferInfoEE12do_constructEPvj */
/* Demangled: android::Vector<android::BufferInfo*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_10BufferInfoEE12do_constructEPvj(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerNormal4readEPvi */
/* Demangled: android::AudioALSACaptureHandlerNormal::read(void*, int) */
int _ZN7android29AudioALSACaptureHandlerNormal4readEPvi(void);

/* Symbol: _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN7android22AudioSmartPaController13isSmartPAUsedEv */
/* Demangled: android::AudioSmartPaController::isSmartPAUsed() */
int _ZN7android22AudioSmartPaController13isSmartPAUsedEv(void);

/* Symbol: _ZN7android8SPELayer19WaitforDownlinkDataEv */
/* Demangled: android::SPELayer::WaitforDownlinkData() */
int _ZN7android8SPELayer19WaitforDownlinkDataEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase16setComprCallbackEPFi23stream_callback_event_tPvS2_ES2_ */
/* Demangled: android::AudioALSAPlaybackHandlerBase::setComprCallback(int (*)(stream_callback_event_t, void*, void*), void*) */
int _ZN7android28AudioALSAPlaybackHandlerBase16setComprCallbackEPFi23stream_callback_event_tPvS2_ES2_(void);

/* Symbol: _ZN7android21SpeechMessengerNormal15checkModemAliveEv */
/* Demangled: android::SpeechMessengerNormal::checkModemAlive() */
int _ZN7android21SpeechMessengerNormal15checkModemAliveEv(void);

/* Symbol: _ZN7android23SpeechPcmMixerBGSPlayer11pcmMixerOffEPNS_21SpeechDriverInterfaceE */
/* Demangled: android::SpeechPcmMixerBGSPlayer::pcmMixerOff(android::SpeechDriverInterface*) */
int _ZN7android23SpeechPcmMixerBGSPlayer11pcmMixerOffEPNS_21SpeechDriverInterfaceE(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormal12setFilterMngEPNS_21AudioMTKFilterManagerE */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::setFilterMng(android::AudioMTKFilterManager*) */
int _ZN7android30AudioALSAPlaybackHandlerNormal12setFilterMngEPNS_21AudioMTKFilterManagerE(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudio16createMmapBufferEiP22audio_mmap_buffer_info */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::createMmapBuffer(int, audio_mmap_buffer_info*) */
int _ZN7android34AudioALSACaptureDataProviderAAudio16createMmapBufferEiP22audio_mmap_buffer_info(void);

/* Symbol: alock_signal */
/* Demangled: alock_signal */
int alock_signal(void);

/* Symbol: _ZNSt3__120regex_token_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEC2ERKS7_ */
/* Demangled: std::__1::regex_token_iterator<std::__1::__wrap_iter<char const*>, char, std::__1::regex_traits<char> >::regex_token_iterator(std::__1::regex_token_iterator<std::__1::__wrap_iter<char const*>, char, std::__1::regex_traits<char> > const&) */
int _ZNSt3__120regex_token_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEC2ERKS7_(void);

/* Symbol: _ZNK7android6VectorINS_8String16EE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::String16>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_8String16EE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android8SPELayer22SetUPLinkIntrStartTimeE8timespec */
/* Demangled: android::SPELayer::SetUPLinkIntrStartTime(timespec) */
int _ZN7android8SPELayer22SetUPLinkIntrStartTimeE8timespec(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderANCC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderANC::AudioALSACaptureDataProviderANC() */
int _ZN7android31AudioALSACaptureDataProviderANCC1Ev(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManager16setMixerCtlValueENS_7String8ES1_ */
/* Demangled: android::AudioALSADeviceConfigManager::setMixerCtlValue(android::String8, android::String8) */
int _ZN7android28AudioALSADeviceConfigManager16setMixerCtlValueENS_7String8ES1_(void);

/* Symbol: _ZN7android18AudioVIBSPKControl15setVibSpkEnableEb */
/* Demangled: android::AudioVIBSPKControl::setVibSpkEnable(bool) */
int _ZN7android18AudioVIBSPKControl15setVibSpkEnableEb(void);

/* Symbol: _ZN7android17AudioDspCallFinal18startCallFinalTaskEv */
/* Demangled: android::AudioDspCallFinal::startCallFinalTask() */
int _ZN7android17AudioDspCallFinal18startCallFinalTaskEv(void);

/* Symbol: _ZNK7android18SpeechMessageQueue20checkQueueIndexValidEj */
/* Demangled: android::SpeechMessageQueue::checkQueueIndexValid(unsigned int) const */
int _ZNK7android18SpeechMessageQueue20checkQueueIndexValidEj(void);

/* Symbol: _ZN7android24SpeechPcmMixerBaseBuffer5WriteEPcj */
/* Demangled: android::SpeechPcmMixerBaseBuffer::Write(char*, unsigned int) */
int _ZN7android24SpeechPcmMixerBaseBuffer5WriteEPcj(void);

/* Symbol: _ZN7android17AudioALSAHardware17releaseAudioPatchEi */
/* Demangled: android::AudioALSAHardware::releaseAudioPatch(int) */
int _ZN7android17AudioALSAHardware17releaseAudioPatchEi(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManager21CheckCustDevPathExistEPKc */
/* Demangled: android::AudioALSADeviceConfigManager::CheckCustDevPathExist(char const*) */
int _ZN7android28AudioALSADeviceConfigManager21CheckCustDevPathExistEPKc(void);

/* Symbol: _ZN7android18AudioALSAStreamOut17SampleRateSupportEj */
/* Demangled: android::AudioALSAStreamOut::SampleRateSupport(unsigned int) */
int _ZN7android18AudioALSAStreamOut17SampleRateSupportEj(void);

/* Symbol: _ZN7android14AudioUSBCenterD2Ev */
/* Demangled: android::AudioUSBCenter::~AudioUSBCenter() */
int _ZN7android14AudioUSBCenterD2Ev(void);

/* Symbol: _ZNK7android18SpeechDriverNormal19GetRecordSampleRateEv */
/* Demangled: android::SpeechDriverNormal::GetRecordSampleRate() const */
int _ZNK7android18SpeechDriverNormal19GetRecordSampleRateEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl23BT_SCO_TX_GetCVSDOutBufEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_TX_GetCVSDOutBuf() */
int _ZN7android18AudioBTCVSDControl23BT_SCO_TX_GetCVSDOutBufEv(void);

/* Symbol: _ZN7android8AudioFtm12setMicEnableENS_16audio_mic_mask_tEb */
/* Demangled: android::AudioFtm::setMicEnable(android::audio_mic_mask_t, bool) */
int _ZN7android8AudioFtm12setMicEnableENS_16audio_mic_mask_tEb(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer26setOutputBufferSizeByFlagsE20audio_output_flags_tj */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::setOutputBufferSizeByFlags(audio_output_flags_t, unsigned int) */
int _ZN7android29AudioALSAPlaybackHandlerMixer26setOutputBufferSizeByFlagsE20audio_output_flags_tj(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderDsp::close() */
int _ZN7android31AudioALSACaptureDataProviderDsp5closeEv(void);

/* Symbol: _ZN7android22AudioMTKGainControllerD1Ev */
/* Demangled: android::AudioMTKGainController::~AudioMTKGainController() */
int _ZN7android22AudioMTKGainControllerD1Ev(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderTDMC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderTDM::AudioALSACaptureDataProviderTDM() */
int _ZN7android31AudioALSACaptureDataProviderTDMC2Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManagerD0Ev */
/* Demangled: android::AudioALSAStreamManager::~AudioALSAStreamManager() */
int _ZN7android22AudioALSAStreamManagerD0Ev(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController11getInstanceEv */
/* Demangled: android::AudioALSASpeechPhoneCallController::getInstance() */
int _ZN7android34AudioALSASpeechPhoneCallController11getInstanceEv(void);

/* Symbol: _ZN7android13streamout_s2mE */
/* Demangled: android::streamout_s2m */
extern void* _ZN7android13streamout_s2mE;

/* Symbol: _ZN7android16AudioALSANLECtrl12freeResourceEv */
/* Demangled: android::AudioALSANLECtrl::freeResource() */
int _ZN7android16AudioALSANLECtrl12freeResourceEv(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerAAudio4openEv */
/* Demangled: android::AudioALSAPlaybackHandlerAAudio::open() */
int _ZN7android30AudioALSAPlaybackHandlerAAudio4openEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: init_aurisys_controller */
/* Demangled: init_aurisys_controller */
int init_aurisys_controller(void);

/* Symbol: _ZN7android17AudioALSAStreamInD2Ev */
/* Demangled: android::AudioALSAStreamIn::~AudioALSAStreamIn() */
int _ZN7android17AudioALSAStreamInD2Ev(void);

/* Symbol: audio_ipi_dma_cbk_register */
/* Demangled: audio_ipi_dma_cbk_register */
int audio_ipi_dma_cbk_register(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixerD1Ev */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::~AudioALSAPlaybackHandlerMixer() */
int _ZN7android29AudioALSAPlaybackHandlerMixerD1Ev(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE15__push_back_refEi */
/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_back_ref(int) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE15__push_back_refEi(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderFMRadio11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderFMRadio::getInstance() */
int _ZN7android35AudioALSACaptureDataProviderFMRadio11getInstanceEv(void);

/* Symbol: _ZN7android17AudioALSAStreamIn25checkOpenStreamSampleRateEjPj */
/* Demangled: android::AudioALSAStreamIn::checkOpenStreamSampleRate(unsigned int, unsigned int*) */
int _ZN7android17AudioALSAStreamIn25checkOpenStreamSampleRateEjPj(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager16CloseBackMicPathEv */
/* Demangled: android::AudioALSAHardwareResourceManager::CloseBackMicPath() */
int _ZN7android32AudioALSAHardwareResourceManager16CloseBackMicPathEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSAPlaybackHandlerBase*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEE10do_compareEPKvS7_(void);

/* Symbol: _ZN7android22AudioSmartPaController20dspOnBoardSpeakerOffEv */
/* Demangled: android::AudioSmartPaController::dspOnBoardSpeakerOff() */
int _ZN7android22AudioSmartPaController20dspOnBoardSpeakerOffEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP18setDspDumpWakelockEb */
/* Demangled: android::SpeechDriverOpenDSP::setDspDumpWakelock(bool) */
int _ZN7android19SpeechDriverOpenDSP18setDspDumpWakelockEb(void);

/* Symbol: _ZN7android16RingBuf_fillZeroEPNS_7RingBufEi */
/* Demangled: android::RingBuf_fillZero(android::RingBuf*, int) */
int _ZN7android16RingBuf_fillZeroEPNS_7RingBufEi(void);

/* Symbol: _ZN7android8SPELayer11SetDMNRParaENS_8SPE_MODEEPs */
/* Demangled: android::SPELayer::SetDMNRPara(android::SPE_MODE, short*) */
int _ZN7android8SPELayer11SetDMNRParaENS_8SPE_MODEEPs(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerSyncIOC1EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerSyncIO::AudioALSACaptureHandlerSyncIO(stream_attribute_t*) */
int _ZN7android29AudioALSACaptureHandlerSyncIOC1EP18stream_attribute_t(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController15initDataPendingEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::initDataPending(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController15initDataPendingEPNS_9USBStreamE(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController16getUSBIdSpeechULEv */
/* Demangled: android::AudioUSBPhoneCallController::getUSBIdSpeechUL() */
int _ZN7android27AudioUSBPhoneCallController16getUSBIdSpeechULEv(void);

/* Symbol: _ZN7android20transAudFmtCfgByAttrEP13aud_fmt_cfg_tPK18stream_attribute_t */
/* Demangled: android::transAudFmtCfgByAttr(aud_fmt_cfg_t*, stream_attribute_t const*) */
int _ZN7android20transAudFmtCfgByAttrEP13aud_fmt_cfg_tPK18stream_attribute_t(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal24DestroyAurisysLibManagerEv */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::DestroyAurisysLibManager() */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal24DestroyAurisysLibManagerEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderDspRawD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderDspRaw::~AudioALSACaptureDataProviderDspRaw() */
int _ZN7android34AudioALSACaptureDataProviderDspRawD0Ev(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP17CheckModemIsReadyEv */
/* Demangled: android::SpeechDriverOpenDSP::CheckModemIsReady() */
int _ZN7android19SpeechDriverOpenDSP17CheckModemIsReadyEv(void);

/* Symbol: _ZNK7android17SpeechDriverDummy22GetRecordChannelNumberEv */
/* Demangled: android::SpeechDriverDummy::GetRecordChannelNumber() const */
int _ZNK7android17SpeechDriverDummy22GetRecordChannelNumberEv(void);

/* Symbol: _ZN7android37AudioALSAPlaybackHandlerFMTransmitter4openEv */
/* Demangled: android::AudioALSAPlaybackHandlerFMTransmitter::open() */
int _ZN7android37AudioALSAPlaybackHandlerFMTransmitter4openEv(void);

/* Symbol: _ZN7android17AudioALSAStreamIn13getParametersERKNS_7String8E */
/* Demangled: android::AudioALSAStreamIn::getParameters(android::String8 const&) */
int _ZN7android17AudioALSAStreamIn13getParametersERKNS_7String8E(void);

/* Symbol: _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormal5writeEPKvj */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::write(void const*, unsigned int) */
int _ZN7android30AudioALSAPlaybackHandlerNormal5writeEPKvj(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBase4initEv */
/* Demangled: android::AudioALSACaptureHandlerBase::init() */
int _ZN7android27AudioALSACaptureHandlerBase4initEv(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefUsbD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefUsb::~AudioALSACaptureDataProviderEchoRefUsb() */
int _ZN7android38AudioALSACaptureDataProviderEchoRefUsbD0Ev(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager16setI2sSequenceHDEbPKc */
/* Demangled: android::AudioALSAHardwareResourceManager::setI2sSequenceHD(bool, char const*) */
int _ZN7android32AudioALSAHardwareResourceManager16setI2sSequenceHDEbPKc(void);

/* Symbol: _ZN7android20AudioCustParamClientD2Ev */
/* Demangled: android::AudioCustParamClient::~AudioCustParamClient() */
int _ZN7android20AudioCustParamClientD2Ev(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerAAudio17updateInputDeviceEj */
/* Demangled: android::AudioALSACaptureHandlerAAudio::updateInputDevice(unsigned int) */
int _ZN7android29AudioALSACaptureHandlerAAudio17updateInputDeviceEj(void);

/* Symbol: _ZN7android18SpeechDriverNormal21SetModemLoopbackPointEt */
/* Demangled: android::SpeechDriverNormal::SetModemLoopbackPoint(unsigned short) */
int _ZN7android18SpeechDriverNormal21SetModemLoopbackPointEt(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP23CreateAurisysLibManagerEv */
/* Demangled: android::SpeechDriverOpenDSP::CreateAurisysLibManager() */
int _ZN7android19SpeechDriverOpenDSP23CreateAurisysLibManagerEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP9setBTModeEi */
/* Demangled: android::SpeechDriverOpenDSP::setBTMode(int) */
int _ZN7android19SpeechDriverOpenDSP9setBTModeEi(void);

/* Symbol: _ZN7android18AudioBTCVSDControl27BT_SCO_ExtMDGetBTSCORunningEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMDGetBTSCORunning() */
int _ZN7android18AudioBTCVSDControl27BT_SCO_ExtMDGetBTSCORunningEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager17setNonSmartPATypeEv */
/* Demangled: android::AudioALSAHardwareResourceManager::setNonSmartPAType() */
int _ZN7android32AudioALSAHardwareResourceManager17setNonSmartPATypeEv(void);

/* Symbol: _ZN7android8Play2Way4StopEv */
/* Demangled: android::Play2Way::Stop() */
int _ZN7android8Play2Way4StopEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderNormal11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderNormal::getInstance() */
int _ZN7android34AudioALSACaptureDataProviderNormal11getInstanceEv(void);

/* Symbol: _ZN7android28AudioALSACaptureHandlerVoiceD2Ev */
/* Demangled: android::AudioALSACaptureHandlerVoice::~AudioALSACaptureHandlerVoice() */
int _ZN7android28AudioALSACaptureHandlerVoiceD2Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThread10onFirstRefEv */
/* Demangled: android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread::onFirstRef() */
int _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThread10onFirstRefEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController11pcmDumpOpenEPKcS2_j14audio_format_tj */
/* Demangled: android::AudioUSBPhoneCallController::pcmDumpOpen(char const*, char const*, unsigned int, audio_format_t, unsigned int) */
int _ZN7android27AudioUSBPhoneCallController11pcmDumpOpenEPKcS2_j14audio_format_tj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSAPlaybackHandlerBase*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEE12do_constructEPvj(void);

/* Symbol: _ZTVN7android29AudioALSAPlaybackHandlerMixerE */
/* Demangled: vtable for android::AudioALSAPlaybackHandlerMixer */
extern void* _ZTVN7android29AudioALSAPlaybackHandlerMixerE;

/* Symbol: _ZTVN7android28AudioALSAPlaybackHandlerFastE */
/* Demangled: vtable for android::AudioALSAPlaybackHandlerFast */
extern void* _ZTVN7android28AudioALSAPlaybackHandlerFastE;

/* Symbol: _ZTVN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadE */
/* Demangled: vtable for android::AudioALSALoopbackController::AudioMTKLoopbackThread */
extern void* _ZTVN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadE;

/* Symbol: _ZN7android16SpeechVMRecorderD0Ev */
/* Demangled: android::SpeechVMRecorder::~SpeechVMRecorder() */
int _ZN7android16SpeechVMRecorderD0Ev(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDspD1Ev */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::~AudioALSAPlaybackHandlerDsp() */
int _ZN7android27AudioALSAPlaybackHandlerDspD1Ev(void);

/* Symbol: _ZN7android12SpeechConfigD0Ev */
/* Demangled: android::SpeechConfig::~SpeechConfig() */
int _ZN7android12SpeechConfigD0Ev(void);

/* Symbol: _ZTVNSt3__120__match_char_collateIcNS_12regex_traitsIcEEEE */
/* Demangled: vtable for std::__1::__match_char_collate<char, std::__1::regex_traits<char> > */
extern void* _ZTVNSt3__120__match_char_collateIcNS_12regex_traitsIcEEEE;

/* Symbol: _ZN7android25AudioALSACaptureHandlerBT7routingEj */
/* Demangled: android::AudioALSACaptureHandlerBT::routing(unsigned int) */
int _ZN7android25AudioALSACaptureHandlerBT7routingEj(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceDL11hasInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderVoiceDL::hasInstance() */
int _ZN7android35AudioALSACaptureDataProviderVoiceDL11hasInstanceEv(void);

/* Symbol: wrap_config_to_dsp */
/* Demangled: wrap_config_to_dsp */
int wrap_config_to_dsp(void);

/* Symbol: get_support_format_mask */
/* Demangled: get_support_format_mask */
int get_support_format_mask(void);

/* Symbol: _ZN7android22AudioSmartPaController11setI2sOutHDEb */
/* Demangled: android::AudioSmartPaController::setI2sOutHD(bool) */
int _ZN7android22AudioSmartPaController11setI2sOutHDEb(void);

/* Symbol: _ZN7android8AudioFtm21Audio_READ_SPK_OC_STAEv */
/* Demangled: android::AudioFtm::Audio_READ_SPK_OC_STA() */
int _ZN7android8AudioFtm21Audio_READ_SPK_OC_STAEv(void);

/* Symbol: _ZN7android35PROPERTY_KEY_PCM_MIXER_BLISRC_INDEXE */
/* Demangled: android::PROPERTY_KEY_PCM_MIXER_BLISRC_INDEX */
extern void* _ZN7android35PROPERTY_KEY_PCM_MIXER_BLISRC_INDEXE;

/* Symbol: _ZNK7android6VectorIPNS_10BufferInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::BufferInfo*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_10BufferInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android13dumpLinearBufEPKcS1_ii */
/* Demangled: android::dumpLinearBuf(char const*, char const*, int, int) */
int _ZN7android13dumpLinearBufEPKcS1_ii(void);

/* Symbol: _ZNK7android17AudioALSAStreamIn10bufferSizeEv */
/* Demangled: android::AudioALSAStreamIn::bufferSize() const */
int _ZNK7android17AudioALSAStreamIn10bufferSizeEv(void);

/* Symbol: _ZN7android16AudioEventThreadD0Ev */
/* Demangled: android::AudioEventThread::~AudioEventThread() */
int _ZN7android16AudioEventThreadD0Ev(void);

/* Symbol: _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE27__match_at_start_posix_subsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb */
/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__match_at_start_posix_subs<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type, bool) const */
int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE27__match_at_start_posix_subsINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeEb(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN7android14offload_threadE */
/* Demangled: android::offload_thread */
extern void* _ZN7android14offload_threadE;

/* Symbol: _ZN7android17SpeechDriverDummy15SetSidetoneGainEs */
/* Demangled: android::SpeechDriverDummy::SetSidetoneGain(short) */
int _ZN7android17SpeechDriverDummy15SetSidetoneGainEs(void);

/* Symbol: _ZN7android21AudioALSAFMController11getFmEnableEv */
/* Demangled: android::AudioALSAFMController::getFmEnable() */
int _ZN7android21AudioALSAFMController11getFmEnableEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase21set_task_pcmdump_infoEjjPv */
/* Demangled: android::AudioALSACaptureDataProviderBase::set_task_pcmdump_info(unsigned int, unsigned int, void*) */
int _ZN7android32AudioALSACaptureDataProviderBase21set_task_pcmdump_infoEjjPv(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload5closeEv */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::close() */
int _ZN7android31AudioALSAPlaybackHandlerOffload5closeEv(void);

/* Symbol: _ZN7android20allow_offload_proptyE */
/* Demangled: android::allow_offload_propty */
extern void* _ZN7android20allow_offload_proptyE;

/* Symbol: _ZN7android36AudioALSACaptureDataProviderVoiceMix37mAudioALSACaptureDataProviderVoiceMixE */
/* Demangled: android::AudioALSACaptureDataProviderVoiceMix::mAudioALSACaptureDataProviderVoiceMix */
extern void* _ZN7android36AudioALSACaptureDataProviderVoiceMix37mAudioALSACaptureDataProviderVoiceMixE;

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager19SetExtDacGpioEnableEb */
/* Demangled: android::AudioALSAHardwareResourceManager::SetExtDacGpioEnable(bool) */
int _ZN7android32AudioALSAHardwareResourceManager19SetExtDacGpioEnableEb(void);

/* Symbol: _ZN7android14AudioUSBCenter14inSetParameterEPKc */
/* Demangled: android::AudioUSBCenter::inSetParameter(char const*) */
int _ZN7android14AudioUSBCenter14inSetParameterEPKc(void);

/* Symbol: _ZN7android13setAudioFieldENS_7String8E */
/* Demangled: android::setAudioField(android::String8) */
int _ZN7android13setAudioFieldENS_7String8E(void);

/* Symbol: _ZN7android17AudioALSAHardware18setAudioPortConfigEPK17audio_port_config */
/* Demangled: android::AudioALSAHardware::setAudioPortConfig(audio_port_config const*) */
int _ZN7android17AudioALSAHardware18setAudioPortConfigEPK17audio_port_config(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerUsbD0Ev */
/* Demangled: android::AudioALSACaptureHandlerUsb::~AudioALSACaptureHandlerUsb() */
int _ZN7android26AudioALSACaptureHandlerUsbD0Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl23BT_SCO_TX_DestroyModuleEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_TX_DestroyModule() */
int _ZN7android18AudioBTCVSDControl23BT_SCO_TX_DestroyModuleEv(void);

/* Symbol: _ZN7android16AudioALSANLECtrlC2E18playback_handler_tPK18stream_attribute_t */
/* Demangled: android::AudioALSANLECtrl::AudioALSANLECtrl(playback_handler_t, stream_attribute_t const*) */
int _ZN7android16AudioALSANLECtrlC2E18playback_handler_tPK18stream_attribute_t(void);

/* Symbol: _ZN7android18AudioALSAStreamOut5pauseEv */
/* Demangled: android::AudioALSAStreamOut::pause() */
int _ZN7android18AudioALSAStreamOut5pauseEv(void);

/* Symbol: _ZN7android17AudioALSAStreamIn16writeWavDumpDataEPKvj */
/* Demangled: android::AudioALSAStreamIn::writeWavDumpData(void const*, unsigned int) */
int _ZN7android17AudioALSAStreamIn16writeWavDumpDataEPKvj(void);

/* Symbol: _ZN7android17WCNChipControllerD0Ev */
/* Demangled: android::WCNChipController::~WCNChipController() */
int _ZN7android17WCNChipControllerD0Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager21Set_LSPK_DlMNR_EnableENS_22sph_enh_dynamic_mask_tEb */
/* Demangled: android::AudioALSAStreamManager::Set_LSPK_DlMNR_Enable(android::sph_enh_dynamic_mask_t, bool) */
int _ZN7android22AudioALSAStreamManager21Set_LSPK_DlMNR_EnableENS_22sph_enh_dynamic_mask_tEb(void);

/* Symbol: _ZN7android18AudioBTCVSDControl24BT_SCO_TX_GetCVSDWorkBufEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_TX_GetCVSDWorkBuf() */
int _ZN7android18AudioBTCVSDControl24BT_SCO_TX_GetCVSDWorkBufEv(void);

/* Symbol: _ZN7android31AudioALSASpeechStreamControllerC2Ev */
/* Demangled: android::AudioALSASpeechStreamController::AudioALSASpeechStreamController() */
int _ZN7android31AudioALSASpeechStreamControllerC2Ev(void);

/* Symbol: get_audio_controller_task */
/* Demangled: get_audio_controller_task */
int get_audio_controller_task(void);

/* Symbol: _ZN7android17AudioALSAHardwareC1Ev */
/* Demangled: android::AudioALSAHardware::AudioALSAHardware() */
int _ZN7android17AudioALSAHardwareC1Ev(void);

/* Symbol: _ZNSt3__116__owns_one_stateIcED2Ev */
/* Demangled: std::__1::__owns_one_state<char>::~__owns_one_state() */
int _ZNSt3__116__owns_one_stateIcED2Ev(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderVoiceMixD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoiceMix::~AudioALSACaptureDataProviderVoiceMix() */
int _ZN7android36AudioALSACaptureDataProviderVoiceMixD0Ev(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController14speechULThreadEPv */
/* Demangled: android::AudioUSBPhoneCallController::speechULThread(void*) */
int _ZN7android27AudioUSBPhoneCallController14speechULThreadEPv(void);

/* Symbol: _ZN7android22AudioMTKGainController15SetReceiverGainEi */
/* Demangled: android::AudioMTKGainController::SetReceiverGain(int) */
int _ZN7android22AudioMTKGainController15SetReceiverGainEi(void);

/* Symbol: _ZN7android22AudioALSADriverUtility23mAudioALSADriverUtilityE */
/* Demangled: android::AudioALSADriverUtility::mAudioALSADriverUtility */
extern void* _ZN7android22AudioALSADriverUtility23mAudioALSADriverUtilityE;

/* Symbol: _ZTVN7android37AudioALSAPlaybackHandlerFMTransmitterE */
/* Demangled: vtable for android::AudioALSAPlaybackHandlerFMTransmitter */
extern void* _ZTVN7android37AudioALSAPlaybackHandlerFMTransmitterE;

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSDD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::~AudioALSACaptureDataProviderBTCVSD() */
int _ZN7android34AudioALSACaptureDataProviderBTCVSDD1Ev(void);

/* Symbol: _ZN7android12AudioFtmBase22Audio_Set_Earpiece_OffEv */
/* Demangled: android::AudioFtmBase::Audio_Set_Earpiece_Off() */
int _ZN7android12AudioFtmBase22Audio_Set_Earpiece_OffEv(void);

/* Symbol: _ZN7android21AudioALSAFMController23setFmDirectConnection_lEbbj */
/* Demangled: android::AudioALSAFMController::setFmDirectConnection_l(bool, bool, unsigned int) */
int _ZN7android21AudioALSAFMController23setFmDirectConnection_lEbbj(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceULD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoiceUL::~AudioALSACaptureDataProviderVoiceUL() */
int _ZN7android35AudioALSACaptureDataProviderVoiceULD0Ev(void);

/* Symbol: aud_fmt_conv_hal_destroy */
/* Demangled: aud_fmt_conv_hal_destroy */
int aud_fmt_conv_hal_destroy(void);

/* Symbol: _ZN7android22AudioMTKGainController18setAudioBufferGainEi */
/* Demangled: android::AudioMTKGainController::setAudioBufferGain(int) */
int _ZN7android22AudioMTKGainController18setAudioBufferGainEi(void);

/* Symbol: _ZN7android22AudioMTKGainController20getCurrentSceneIndexEv */
/* Demangled: android::AudioMTKGainController::getCurrentSceneIndex() */
int _ZN7android22AudioMTKGainController20getCurrentSceneIndexEv(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBase21getCaptureHandlerTypeEv */
/* Demangled: android::AudioALSACaptureHandlerBase::getCaptureHandlerType() */
int _ZN7android27AudioALSACaptureHandlerBase21getCaptureHandlerTypeEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderANCD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderANC::~AudioALSACaptureDataProviderANC() */
int _ZN7android31AudioALSACaptureDataProviderANCD2Ev(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController12pcmDumpCloseEP7__sFILE */
/* Demangled: android::AudioUSBPhoneCallController::pcmDumpClose(__sFILE*) */
int _ZN7android27AudioUSBPhoneCallController12pcmDumpCloseEP7__sFILE(void);

/* Symbol: _ZN7android18SpeechDriverNormal24setNetworkChangeCallbackEPvPFvS1_E */
/* Demangled: android::SpeechDriverNormal::setNetworkChangeCallback(void*, void (*)(void*)) */
int _ZN7android18SpeechDriverNormal24setNetworkChangeCallbackEPvPFvS1_E(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase9writeDataEPKcjP8timespec */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::writeData(char const*, unsigned int, timespec*) */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase9writeDataEPKcjP8timespec(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase13initDcRemovalEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::initDcRemoval() */
int _ZN7android28AudioALSAPlaybackHandlerBase13initDcRemovalEv(void);

/* Symbol: _ZN7android20keypcmHostlessSpeechE */
/* Demangled: android::keypcmHostlessSpeech */
extern void* _ZN7android20keypcmHostlessSpeechE;

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer26getOutputBufferSizeByFlagsE20audio_output_flags_t */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::getOutputBufferSizeByFlags(audio_output_flags_t) */
int _ZN7android29AudioALSAPlaybackHandlerMixer26getOutputBufferSizeByFlagsE20audio_output_flags_t(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN7android11MixerTargetEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::MixerTarget*> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN7android11MixerTargetEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE6rehashEj(void);

/* Symbol: _ZN7android22AudioMTKGainController16SetMicGainTuningEjj */
/* Demangled: android::AudioMTKGainController::SetMicGainTuning(unsigned int, unsigned int) */
int _ZN7android22AudioMTKGainController16SetMicGainTuningEjj(void);

/* Symbol: _ZNK7android6VectorINS_8String16EE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::String16>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_8String16EE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android17keypcmTDMLoopbackE */
/* Demangled: android::keypcmTDMLoopback */
extern void* _ZN7android17keypcmTDMLoopbackE;

/* Symbol: _ZN7android19SpeechDriverFactory20mSpeechDriverFactoryE */
/* Demangled: android::SpeechDriverFactory::mSpeechDriverFactory */
extern void* _ZN7android19SpeechDriverFactory20mSpeechDriverFactoryE;

/* Symbol: _ZN7android17SpeechDriverDummy13SetSpeechModeEjj */
/* Demangled: android::SpeechDriverDummy::SetSpeechMode(unsigned int, unsigned int) */
int _ZN7android17SpeechDriverDummy13SetSpeechModeEjj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager10getMicMuteEv */
/* Demangled: android::AudioALSAStreamManager::getMicMute() */
int _ZN7android22AudioALSAStreamManager10getMicMuteEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager20changeOutputDevice_lEjj */
/* Demangled: android::AudioALSAHardwareResourceManager::changeOutputDevice_l(unsigned int, unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager20changeOutputDevice_lEjj(void);

/* Symbol: _ZN7android20AudioCustParamClient4initEv */
/* Demangled: android::AudioCustParamClient::init() */
int _ZN7android20AudioCustParamClient4initEv(void);

/* Symbol: _ZN7android16SpeechExtMemUSIPD0Ev */
/* Demangled: android::SpeechExtMemUSIP::~SpeechExtMemUSIP() */
int _ZN7android16SpeechExtMemUSIPD0Ev(void);

/* Symbol: _ZNK7android6VectorIPNS_21AudioDeviceDescriptorEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::AudioDeviceDescriptor*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_21AudioDeviceDescriptorEE16do_move_backwardEPvPKvj(void);

/* Symbol: audio_ringbuf_copy_from_linear_impl */
/* Demangled: audio_ringbuf_copy_from_linear_impl */
int audio_ringbuf_copy_from_linear_impl(void);

/* Symbol: _ZN7android29AudioALSACaptureDataClientDspC2EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureDataClientDsp::AudioALSACaptureDataClientDsp(android::AudioALSACaptureDataProviderBase*, stream_attribute_t*) */
int _ZN7android29AudioALSACaptureDataClientDspC2EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t(void);

/* Symbol: _ZN7android25keypcmOffloadGdmaPlaybackE */
/* Demangled: android::keypcmOffloadGdmaPlayback */
extern void* _ZN7android25keypcmOffloadGdmaPlaybackE;

/* Symbol: _ZNK7android6VectorIPNS_10BufferInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<android::BufferInfo*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_10BufferInfoEE10do_destroyEPvj(void);

/* Symbol: _ZTVN7android22AudioALSADataProcessorE */
/* Demangled: vtable for android::AudioALSADataProcessor */
extern void* _ZTVN7android22AudioALSADataProcessorE;

/* Symbol: _ZN7android19streamout_vibsignalE */
/* Demangled: android::streamout_vibsignal */
extern void* _ZN7android19streamout_vibsignalE;

/* Symbol: _ZN7android28AudioALSACaptureHandlerVoiceC1EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerVoice::AudioALSACaptureHandlerVoice(stream_attribute_t*) */
int _ZN7android28AudioALSACaptureHandlerVoiceC1EP18stream_attribute_t(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSACaptureHandlerBase*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android16SpeechExtMemUSIP21shm_region_free_spaceEPNS_13region_info_tE */
/* Demangled: android::SpeechExtMemUSIP::shm_region_free_space(android::region_info_t*) */
int _ZN7android16SpeechExtMemUSIP21shm_region_free_spaceEPNS_13region_info_tE(void);

/* Symbol: _ZN7android29AudioALSASampleRateController30mAudioALSASampleRateControllerE */
/* Demangled: android::AudioALSASampleRateController::mAudioALSASampleRateController */
extern void* _ZN7android29AudioALSASampleRateController30mAudioALSASampleRateControllerE;

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager20UpdateExtSpeakerPathEv */
/* Demangled: android::AudioALSAHardwareResourceManager::UpdateExtSpeakerPath() */
int _ZN7android32AudioALSAHardwareResourceManager20UpdateExtSpeakerPathEv(void);

/* Symbol: dump_lib_config */
/* Demangled: dump_lib_config */
int dump_lib_config(void);

/* Symbol: _ZN7android22AudioMTKGainController20ApplyMicGainByDeviceEj12audio_mode_t */
/* Demangled: android::AudioMTKGainController::ApplyMicGainByDevice(unsigned int, audio_mode_t) */
int _ZN7android22AudioMTKGainController20ApplyMicGainByDeviceEj12audio_mode_t(void);

/* Symbol: _ZN7android17AudioALSAHardware14setVoiceVolumeEf */
/* Demangled: android::AudioALSAHardware::setVoiceVolume(float) */
int _ZN7android17AudioALSAHardware14setVoiceVolumeEf(void);

/* Symbol: _ZN7android15getSizePerFrameE14audio_format_tj */
/* Demangled: android::getSizePerFrame(audio_format_t, unsigned int) */
int _ZN7android15getSizePerFrameE14audio_format_tj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl23BT_SCO_ExtMDGetBufSpaceENS_21EXTMD_BTSCO_DIRECTIONE */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMDGetBufSpace(android::EXTMD_BTSCO_DIRECTION) */
int _ZN7android18AudioBTCVSDControl23BT_SCO_ExtMDGetBufSpaceENS_21EXTMD_BTSCO_DIRECTIONE(void);

/* Symbol: _ZN7android17AudioALSAStreamIn10setSuspendEb */
/* Demangled: android::AudioALSAStreamIn::setSuspend(bool) */
int _ZN7android17AudioALSAStreamIn10setSuspendEb(void);

/* Symbol: _ZN7android8AudioFtm14FMLoopbackTestEc */
/* Demangled: android::AudioFtm::FMLoopbackTest(char) */
int _ZN7android8AudioFtm14FMLoopbackTestEc(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp15openDspHwRefPcmEv */
/* Demangled: android::AudioALSACaptureDataProviderDsp::openDspHwRefPcm() */
int _ZN7android31AudioALSACaptureDataProviderDsp15openDspHwRefPcmEv(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer23lunchMixerTargetHandlerEPPNS_28AudioALSAPlaybackHandlerBaseEPPvP18stream_attribute_tjj */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::lunchMixerTargetHandler(android::AudioALSAPlaybackHandlerBase**, void**, stream_attribute_t*, unsigned int, unsigned int) */
int _ZN7android29AudioALSAPlaybackHandlerMixer23lunchMixerTargetHandlerEPPNS_28AudioALSAPlaybackHandlerBaseEPPvP18stream_attribute_tjj(void);

/* Symbol: _ZN7android16AudioALSANLECtrlC1E18playback_handler_tPK18stream_attribute_t */
/* Demangled: android::AudioALSANLECtrl::AudioALSANLECtrl(playback_handler_t, stream_attribute_t const*) */
int _ZN7android16AudioALSANLECtrlC1E18playback_handler_tPK18stream_attribute_t(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManager31ApplyDeviceTurnonSequenceByNameEPKc */
/* Demangled: android::AudioALSADeviceConfigManager::ApplyDeviceTurnonSequenceByName(char const*) */
int _ZN7android28AudioALSADeviceConfigManager31ApplyDeviceTurnonSequenceByNameEPKc(void);

/* Symbol: _ZN7android12AudioFtmBase14FTM_AnaLpk_offEv */
/* Demangled: android::AudioFtmBase::FTM_AnaLpk_off() */
int _ZN7android12AudioFtmBase14FTM_AnaLpk_offEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase20updateStartTimeStampEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::updateStartTimeStamp() */
int _ZN7android32AudioALSACaptureDataProviderBase20updateStartTimeStampEv(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase17deinitDataRingBufEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::deinitDataRingBuf() */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase17deinitDataRingBufEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController14getDeviceParamEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::getDeviceParam(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController14getDeviceParamEPNS_9USBStreamE(void);

/* Symbol: _ZN7android16getPeriodBufSizeEPK18stream_attribute_tj */
/* Demangled: android::getPeriodBufSize(stream_attribute_t const*, unsigned int) */
int _ZN7android16getPeriodBufSizeEPK18stream_attribute_tj(void);

/* Symbol: _ZN7android18SpeechDriverNormal16eCallTxCtrlParamEPvt */
/* Demangled: android::SpeechDriverNormal::eCallTxCtrlParam(void*, unsigned short) */
int _ZN7android18SpeechDriverNormal16eCallTxCtrlParamEPvt(void);

/* Symbol: _ZN7android23keypcmVOIPCallBTCaptureE */
/* Demangled: android::keypcmVOIPCallBTCapture */
extern void* _ZN7android23keypcmVOIPCallBTCaptureE;

/* Symbol: _ZTVN7android6VectorIPNS_19DeviceCtlDescriptorEEE */
/* Demangled: vtable for android::Vector<android::DeviceCtlDescriptor*> */
extern void* _ZTVN7android6VectorIPNS_19DeviceCtlDescriptorEEE;

/* Symbol: _ZN7android18AudioBTCVSDControl26BT_SCO_RX_SetCVSDTempInBufEPh */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_SetCVSDTempInBuf(unsigned char*) */
int _ZN7android18AudioBTCVSDControl26BT_SCO_RX_SetCVSDTempInBufEPh(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager18setULInterruptRateEj */
/* Demangled: android::AudioALSAHardwareResourceManager::setULInterruptRate(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager18setULInterruptRateEj(void);

/* Symbol: aurisys_process_ul_only */
/* Demangled: aurisys_process_ul_only */
int aurisys_process_ul_only(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFastD1Ev */
/* Demangled: android::AudioALSAPlaybackHandlerFast::~AudioALSAPlaybackHandlerFast() */
int _ZN7android28AudioALSAPlaybackHandlerFastD1Ev(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBaseD0Ev */
/* Demangled: android::AudioALSACaptureHandlerBase::~AudioALSACaptureHandlerBase() */
int _ZN7android27AudioALSACaptureHandlerBaseD0Ev(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderANC5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderANC::close() */
int _ZN7android31AudioALSACaptureDataProviderANC5closeEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSD14getLatencyTimeEv */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::getLatencyTime() */
int _ZN7android34AudioALSACaptureDataProviderBTCVSD14getLatencyTimeEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase14initOutMonitorEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::initOutMonitor() */
int _ZN7android28AudioALSAPlaybackHandlerBase14initOutMonitorEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal22SpeechOffByApplicationEh */
/* Demangled: android::SpeechDriverNormal::SpeechOffByApplication(unsigned char) */
int _ZN7android18SpeechDriverNormal22SpeechOffByApplicationEh(void);

/* Symbol: _ZN7android26collectPlatformOutputFlagsE20audio_output_flags_t */
/* Demangled: android::collectPlatformOutputFlags(audio_output_flags_t) */
int _ZN7android26collectPlatformOutputFlagsE20audio_output_flags_t(void);

/* Symbol: _ZN7android12AudioFtmBase18SpeakerCalibrationEi */
/* Demangled: android::AudioFtmBase::SpeakerCalibration(int) */
int _ZN7android12AudioFtmBase18SpeakerCalibrationEi(void);

/* Symbol: _ZN7android8SPELayer17GetMICDigitalGainENS_8SPE_MODEE */
/* Demangled: android::SPELayer::GetMICDigitalGain(android::SPE_MODE) */
int _ZN7android8SPELayer17GetMICDigitalGainENS_8SPE_MODEE(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerAEC17UpdateBesRecParamEv */
/* Demangled: android::AudioALSACaptureHandlerAEC::UpdateBesRecParam() */
int _ZN7android26AudioALSACaptureHandlerAEC17UpdateBesRecParamEv(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceUL11hasInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderVoiceUL::hasInstance() */
int _ZN7android35AudioALSACaptureDataProviderVoiceUL11hasInstanceEv(void);

/* Symbol: _ZN7android16SpeechVMRecorder18getVmDataFromModemENS_7RingBufE */
/* Demangled: android::SpeechVMRecorder::getVmDataFromModem(android::RingBuf) */
int _ZN7android16SpeechVMRecorder18getVmDataFromModemENS_7RingBufE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEE10do_destroyES2_j */
/* Demangled: android::SortedVector<android::key_value_pair_t<void*, android::IAudioALSACaptureDataClient*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEE10do_destroyES2_j(void);

/* Symbol: audio_ringbuf_compensate_value_impl */
/* Demangled: audio_ringbuf_compensate_value_impl */
int audio_ringbuf_compensate_value_impl(void);

/* Symbol: _ZN7android21AudioDspStreamManager20closeCaptureDspHwPcmEPNS_32AudioALSACaptureDataProviderBaseE */
/* Demangled: android::AudioDspStreamManager::closeCaptureDspHwPcm(android::AudioALSACaptureDataProviderBase*) */
int _ZN7android21AudioDspStreamManager20closeCaptureDspHwPcmEPNS_32AudioALSACaptureDataProviderBaseE(void);

/* Symbol: _ZN7android18SpeechPcmMixerBase5WriteEPNS_24SpeechPcmMixerBaseBufferEPvj */
/* Demangled: android::SpeechPcmMixerBase::Write(android::SpeechPcmMixerBaseBuffer*, void*, unsigned int) */
int _ZN7android18SpeechPcmMixerBase5WriteEPNS_24SpeechPcmMixerBaseBufferEPvj(void);

/* Symbol: _ZN7android18get_bcv_pcm_formatE14audio_format_tS0_ */
/* Demangled: android::get_bcv_pcm_format(audio_format_t, audio_format_t) */
int _ZN7android18get_bcv_pcm_formatE14audio_format_tS0_(void);

/* Symbol: _ZN7android18SpeechDriverNormal12VoipRxConfigEhh */
/* Demangled: android::SpeechDriverNormal::VoipRxConfig(unsigned char, unsigned char) */
int _ZN7android18SpeechDriverNormal12VoipRxConfigEhh(void);

/* Symbol: _ZN7android17SpeechParserGen95C1Ev */
/* Demangled: android::SpeechParserGen95::SpeechParserGen95() */
int _ZN7android17SpeechParserGen95C1Ev(void);

/* Symbol: audio_ringbuf_drop_data */
/* Demangled: audio_ringbuf_drop_data */
int audio_ringbuf_drop_data(void);

/* Symbol: _ZN7android25setPlaybackTimestampLogOnEb */
/* Demangled: android::setPlaybackTimestampLogOn(bool) */
int _ZN7android25setPlaybackTimestampLogOnEb(void);

/* Symbol: _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadC1ENS_23EXTMD_BTSCO_THREAD_TYPEEPcj */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDThread::AudioExtMDCVSDThread(android::EXTMD_BTSCO_THREAD_TYPE, char*, unsigned int) */
int _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadC1ENS_23EXTMD_BTSCO_THREAD_TYPEEPcj(void);

/* Symbol: _ZN7android27SpeechEnhancementController11GetInstanceEv */
/* Demangled: android::SpeechEnhancementController::GetInstance() */
int _ZN7android27SpeechEnhancementController11GetInstanceEv(void);

/* Symbol: _ZN7android21SpeechMessengerNormal14openCcciDriverEv */
/* Demangled: android::SpeechMessengerNormal::openCcciDriver() */
int _ZN7android21SpeechMessengerNormal14openCcciDriverEv(void);

/* Symbol: _ZTVN7android19SpeechDriverFactoryE */
/* Demangled: vtable for android::SpeechDriverFactory */
extern void* _ZTVN7android19SpeechDriverFactoryE;

/* Symbol: _ZN7android8SPELayer15DumpBufferClearEv */
/* Demangled: android::SPELayer::DumpBufferClear() */
int _ZN7android8SPELayer15DumpBufferClearEv(void);

/* Symbol: _ZTVN7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEEE */
/* Demangled: vtable for android::SortedVector<android::AudioALSAHardware::AudioHalPatch*> */
extern void* _ZTVN7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEEE;

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefUsb39mAudioALSACaptureDataProviderEchoRefUsbE */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefUsb::mAudioALSACaptureDataProviderEchoRefUsb */
extern void* _ZN7android38AudioALSACaptureDataProviderEchoRefUsb39mAudioALSACaptureDataProviderEchoRefUsbE;

/* Symbol: _ZN7android27AudioALSALoopbackController29CloseAudioLoopbackControlFlowEv */
/* Demangled: android::AudioALSALoopbackController::CloseAudioLoopbackControlFlow() */
int _ZN7android27AudioALSALoopbackController29CloseAudioLoopbackControlFlowEv(void);

/* Symbol: _ZTTN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadE */
/* Demangled: VTT for android::AudioBTCVSDControl::AudioExtMDCVSDThread */
extern void* _ZTTN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadE;

/* Symbol: _ZN7android24AudioThrottleTimeControlC2Ebjj */
/* Demangled: android::AudioThrottleTimeControl::AudioThrottleTimeControl(bool, unsigned int, unsigned int) */
int _ZN7android24AudioThrottleTimeControlC2Ebjj(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderTDM4openEv */
/* Demangled: android::AudioALSACaptureDataProviderTDM::open() */
int _ZN7android31AudioALSACaptureDataProviderTDM4openEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl14BT_SCO_RX_OpenEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_Open() */
int _ZN7android18AudioBTCVSDControl14BT_SCO_RX_OpenEv(void);

/* Symbol: _ZN7android14AudioUSBCenter12setParameterEP19alsa_device_profilePKc */
/* Demangled: android::AudioUSBCenter::setParameter(alsa_device_profile*, char const*) */
int _ZN7android14AudioUSBCenter12setParameterEP19alsa_device_profilePKc(void);

/* Symbol: aurisys_process_dl_only */
/* Demangled: aurisys_process_dl_only */
int aurisys_process_dl_only(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffloadD1Ev */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::~AudioALSAPlaybackHandlerOffload() */
int _ZN7android31AudioALSAPlaybackHandlerOffloadD1Ev(void);

/* Symbol: _ZN7android16SpeechExtMemCCCI15openShareMemoryENS_13modem_index_tE */
/* Demangled: android::SpeechExtMemCCCI::openShareMemory(android::modem_index_t) */
int _ZN7android16SpeechExtMemCCCI15openShareMemoryENS_13modem_index_tE(void);

/* Symbol: _ZN7android20GainTableParamParser12getSceneListEPNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE */
/* Demangled: android::GainTableParamParser::getSceneList(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN7android20GainTableParamParser12getSceneListEPNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE(void);

/* Symbol: _ZN7android24AudioThrottleTimeControlD2Ev */
/* Demangled: android::AudioThrottleTimeControl::~AudioThrottleTimeControl() */
int _ZN7android24AudioThrottleTimeControlD2Ev(void);

/* Symbol: _ZN7android8Play2Way5StartEv */
/* Demangled: android::Play2Way::Start() */
int _ZN7android8Play2Way5StartEv(void);

/* Symbol: _ZN7android19AudioALSAParamTuner11setDMNRGainEtt */
/* Demangled: android::AudioALSAParamTuner::setDMNRGain(unsigned short, unsigned short) */
int _ZN7android19AudioALSAParamTuner11setDMNRGainEtt(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE13__parse_egrepIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_egrep<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE13__parse_egrepIPKcEET_S7_S7_(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient14getLatencyTimeEv */
/* Demangled: android::AudioALSACaptureDataClient::getLatencyTime() */
int _ZN7android26AudioALSACaptureDataClient14getLatencyTimeEv(void);

/* Symbol: init_aurisys_dsp_dump */
/* Demangled: init_aurisys_dsp_dump */
int init_aurisys_dsp_dump(void);

/* Symbol: _ZN7android21AudioDspStreamManager21removePlaybackHandlerEPNS_28AudioALSAPlaybackHandlerBaseE */
/* Demangled: android::AudioDspStreamManager::removePlaybackHandler(android::AudioALSAPlaybackHandlerBase*) */
int _ZN7android21AudioDspStreamManager21removePlaybackHandlerEPNS_28AudioALSAPlaybackHandlerBaseE(void);

/* Symbol: _ZN7android8SPELayer13HasBufferDumpEv */
/* Demangled: android::SPELayer::HasBufferDump() */
int _ZN7android8SPELayer13HasBufferDumpEv(void);

/* Symbol: _ZNKSt3__111__end_stateIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__end_state<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__111__end_stateIcE6__execERNS_7__stateIcEE(void);

/* Symbol: get_frame_ms_from_mask */
/* Demangled: get_frame_ms_from_mask */
int get_frame_ms_from_mask(void);

/* Symbol: _ZN7android18SpeechDriverNormal31writeAllSpeechParametersToModemEPjS1_ */
/* Demangled: android::SpeechDriverNormal::writeAllSpeechParametersToModem(unsigned int*, unsigned int*) */
int _ZN7android18SpeechDriverNormal31writeAllSpeechParametersToModemEPjS1_(void);

/* Symbol: _ZN7android25aud_dumpftrace_dbg_proptyE */
/* Demangled: android::aud_dumpftrace_dbg_propty */
extern void* _ZN7android25aud_dumpftrace_dbg_proptyE;

/* Symbol: _ZN7android32AudioALSACaptureDataClientSyncIO19IsLowLatencyCaptureEv */
/* Demangled: android::AudioALSACaptureDataClientSyncIO::IsLowLatencyCapture() */
int _ZN7android32AudioALSACaptureDataClientSyncIO19IsLowLatencyCaptureEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl18BT_SCO_SET_RXStateENS_12BT_SCO_STATEE */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_SET_RXState(android::BT_SCO_STATE) */
int _ZN7android18AudioBTCVSDControl18BT_SCO_SET_RXStateENS_12BT_SCO_STATEE(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP17VoiceMemoRecordOnEv */
/* Demangled: android::SpeechDriverOpenDSP::VoiceMemoRecordOn() */
int _ZN7android19SpeechDriverOpenDSP17VoiceMemoRecordOnEv(void);

/* Symbol: _ZN7android23AudioMTKHeadSetMessager11getInstanceEv */
/* Demangled: android::AudioMTKHeadSetMessager::getInstance() */
int _ZN7android23AudioMTKHeadSetMessager11getInstanceEv(void);

/* Symbol: _ZN7android17SpeechDriverDummy13SetUplinkGainEs */
/* Demangled: android::SpeechDriverDummy::SetUplinkGain(short) */
int _ZN7android17SpeechDriverDummy13SetUplinkGainEs(void);

/* Symbol: _ZTVN7android10Record2WayE */
/* Demangled: vtable for android::Record2Way */
extern void* _ZTVN7android10Record2WayE;

/* Symbol: _ZN7android17AudioALSAHardwareD2Ev */
/* Demangled: android::AudioALSAHardware::~AudioALSAHardware() */
int _ZN7android17AudioALSAHardwareD2Ev(void);

/* Symbol: _ZN7android37AudioALSAPlaybackHandlerFMTransmitter5writeEPKvj */
/* Demangled: android::AudioALSAPlaybackHandlerFMTransmitter::write(void const*, unsigned int) */
int _ZN7android37AudioALSAPlaybackHandlerFMTransmitter5writeEPKvj(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudio15getMmapPositionEP19audio_mmap_position */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::getMmapPosition(audio_mmap_position*) */
int _ZN7android34AudioALSACaptureDataProviderAAudio15getMmapPositionEP19audio_mmap_position(void);

/* Symbol: _ZTVN7android19SpeechShareMemGen95E */
/* Demangled: vtable for android::SpeechShareMemGen95 */
extern void* _ZTVN7android19SpeechShareMemGen95E;

/* Symbol: _ZN7android13setAudioParamENS_7String8E */
/* Demangled: android::setAudioParam(android::String8) */
int _ZN7android13setAudioParamENS_7String8E(void);

/* Symbol: _ZN7android22AudioALSAStreamManager19dynamicSetAudioDumpE15AUDIO_DUMP_TYPE */
/* Demangled: android::AudioALSAStreamManager::dynamicSetAudioDump(AUDIO_DUMP_TYPE) */
int _ZN7android22AudioALSAStreamManager19dynamicSetAudioDumpE15AUDIO_DUMP_TYPE(void);

/* Symbol: _ZN7android24keypcmPlaybackDspDeepbufE */
/* Demangled: android::keypcmPlaybackDspDeepbuf */
extern void* _ZN7android24keypcmPlaybackDspDeepbufE;

/* Symbol: _ZN7android17SpeechDriverDummy24SetSpeechEnhancementMaskERKNS_21sph_enh_mask_struct_tE */
/* Demangled: android::SpeechDriverDummy::SetSpeechEnhancementMask(android::sph_enh_mask_struct_t const&) */
int _ZN7android17SpeechDriverDummy24SetSpeechEnhancementMaskERKNS_21sph_enh_mask_struct_tE(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderVOW15WriteVOWPcmDataEv */
/* Demangled: android::AudioALSACaptureDataProviderVOW::WriteVOWPcmData() */
int _ZN7android31AudioALSACaptureDataProviderVOW15WriteVOWPcmDataEv(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal16NativePreprocessEPvj */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::NativePreprocess(void*, unsigned int) */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal16NativePreprocessEPvj(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager11setMIC2ModeEb */
/* Demangled: android::AudioALSAHardwareResourceManager::setMIC2Mode(bool) */
int _ZN7android32AudioALSAHardwareResourceManager11setMIC2ModeEb(void);

/* Symbol: _ZN7android18SpeechDriverNormal15updateCustSceneEPKc */
/* Demangled: android::SpeechDriverNormal::updateCustScene(char const*) */
int _ZN7android18SpeechDriverNormal15updateCustSceneEPKc(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_decimal_escapeINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_decimal_escape<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_decimal_escapeINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZN7android24SpeechPcmMixerBaseBuffer26IsPcmMixerBlisrcDumpEnableEv */
/* Demangled: android::SpeechPcmMixerBaseBuffer::IsPcmMixerBlisrcDumpEnable() */
int _ZN7android24SpeechPcmMixerBaseBuffer26IsPcmMixerBlisrcDumpEnableEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderHAPC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderHAP::AudioALSACaptureDataProviderHAP() */
int _ZN7android31AudioALSACaptureDataProviderHAPC1Ev(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutReceiverPMIC4openEv */
/* Demangled: android::AudioALSACodecDeviceOutReceiverPMIC::open() */
int _ZN7android35AudioALSACodecDeviceOutReceiverPMIC4openEv(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager28mSupportRunNLEHandlerBitwiseE */
/* Demangled: android::AudioALSAHyBridNLEManager::mSupportRunNLEHandlerBitwise */
extern void* _ZN7android25AudioALSAHyBridNLEManager28mSupportRunNLEHandlerBitwiseE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN7android18SpeechMessageQueue24sendSpeechMessageToQueueEPNS_9sph_msg_tEj */
/* Demangled: android::SpeechMessageQueue::sendSpeechMessageToQueue(android::sph_msg_t*, unsigned int) */
int _ZN7android18SpeechMessageQueue24sendSpeechMessageToQueueEPNS_9sph_msg_tEj(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN7android10BufferDumpENS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<android::BufferDump**, std::__1::allocator<android::BufferDump**> >::push_back(android::BufferDump**&&) */
int _ZNSt3__114__split_bufferIPPN7android10BufferDumpENS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZN7android8AudioFtmD1Ev */
/* Demangled: android::AudioFtm::~AudioFtm() */
int _ZN7android8AudioFtmD1Ev(void);

/* Symbol: _ZN7android8SPELayer6ReSyncEv */
/* Demangled: android::SPELayer::ReSync() */
int _ZN7android8SPELayer6ReSyncEv(void);

/* Symbol: _ZN7android17AudioALSAHardware14getMicrophonesEP33audio_microphone_characteristic_tPj */
/* Demangled: android::AudioALSAHardware::getMicrophones(audio_microphone_characteristic_t*, unsigned int*) */
int _ZN7android17AudioALSAHardware14getMicrophonesEP33audio_microphone_characteristic_tPj(void);

/* Symbol: _ZN7android17strAudioPatchRoleE */
/* Demangled: android::strAudioPatchRole */
extern void* _ZN7android17strAudioPatchRoleE;

/* Symbol: _ZNKSt3__126__end_marked_subexpressionIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__end_marked_subexpression<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__126__end_marked_subexpressionIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android22AudioSmartPaController14getI2sSequenceEPKcb */
/* Demangled: android::AudioSmartPaController::getI2sSequence(char const*, bool) */
int _ZN7android22AudioSmartPaController14getI2sSequenceEPKcb(void);

/* Symbol: _ZN7android18SpeechDriverNormal26SetAcousticLoopbackBtCodecEb */
/* Demangled: android::SpeechDriverNormal::SetAcousticLoopbackBtCodec(bool) */
int _ZN7android18SpeechDriverNormal26SetAcousticLoopbackBtCodecEb(void);

/* Symbol: _ZN7android22AudioMTKGainController13getSceneCountEv */
/* Demangled: android::AudioMTKGainController::getSceneCount() */
int _ZN7android22AudioMTKGainController13getSceneCountEv(void);

/* Symbol: _ZN7android12AudioFtmBase15Audio_FMTX_PlayEbj */
/* Demangled: android::AudioFtmBase::Audio_FMTX_Play(bool, unsigned int) */
int _ZN7android12AudioFtmBase15Audio_FMTX_PlayEbj(void);

/* Symbol: _ZN7android17AudioALSAHardware14xWayPlay_WriteEPvi */
/* Demangled: android::AudioALSAHardware::xWayPlay_Write(void*, int) */
int _ZN7android17AudioALSAHardware14xWayPlay_WriteEPvi(void);

/* Symbol: _ZTVNSt3__111__lookaheadIcNS_12regex_traitsIcEEEE */
/* Demangled: vtable for std::__1::__lookahead<char, std::__1::regex_traits<char> > */
extern void* _ZTVNSt3__111__lookaheadIcNS_12regex_traitsIcEEEE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeI20audio_output_flags_tjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<audio_output_flags_t, unsigned int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<audio_output_flags_t, unsigned int>, std::__1::__unordered_map_hasher<audio_output_flags_t, std::__1::__hash_value_type<audio_output_flags_t, unsigned int>, std::__1::hash<audio_output_flags_t>, true>, std::__1::__unordered_map_equal<audio_output_flags_t, std::__1::__hash_value_type<audio_output_flags_t, unsigned int>, std::__1::equal_to<audio_output_flags_t>, true>, std::__1::allocator<std::__1::__hash_value_type<audio_output_flags_t, unsigned int> > >::__emplace_unique_key_args<audio_output_flags_t, std::__1::piecewise_construct_t const&, std::__1::tuple<audio_output_flags_t const&>, std::__1::tuple<> >(audio_output_flags_t const&, std::__1::piecewise_construct_t const&, std::__1::tuple<audio_output_flags_t const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeI20audio_output_flags_tjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN7android18SpeechDriverNormal9setBTModeEi */
/* Demangled: android::SpeechDriverNormal::setBTMode(int) */
int _ZN7android18SpeechDriverNormal9setBTModeEi(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefExt10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefExt::readThread(void*) */
int _ZN7android38AudioALSACaptureDataProviderEchoRefExt10readThreadEPv(void);

/* Symbol: _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmpD1Ev */
/* Demangled: android::AudioALSACodecDeviceOutExtSpeakerAmp::~AudioALSACodecDeviceOutExtSpeakerAmp() */
int _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmpD1Ev(void);

/* Symbol: _ZN7android8AudioFtm20SetVibSpkRampControlEh */
/* Demangled: android::AudioFtm::SetVibSpkRampControl(unsigned char) */
int _ZN7android8AudioFtm20SetVibSpkRampControlEh(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudioD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::~AudioALSACaptureDataProviderAAudio() */
int _ZN7android34AudioALSACaptureDataProviderAAudioD0Ev(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase17setThreadPriorityEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::setThreadPriority() */
int _ZN7android32AudioALSACaptureDataProviderBase17setThreadPriorityEv(void);

/* Symbol: _ZN7android15LoopbackManager16setIpcLpbkStatusENS_20loopback_ipc_state_tE */
/* Demangled: android::LoopbackManager::setIpcLpbkStatus(android::loopback_ipc_state_t) */
int _ZN7android15LoopbackManager16setIpcLpbkStatusENS_20loopback_ipc_state_tE(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_grepINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_grep<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_grepINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFast16SetLowJitterModeEbj */
/* Demangled: android::AudioALSAPlaybackHandlerFast::SetLowJitterMode(bool, unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerFast16SetLowJitterModeEbj(void);

/* Symbol: _ZN7android21keypcmPlaybackDspA2DPE */
/* Demangled: android::keypcmPlaybackDspA2DP */
extern void* _ZN7android21keypcmPlaybackDspA2DPE;

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController15getOutputDeviceEv */
/* Demangled: android::AudioALSASpeechPhoneCallController::getOutputDevice() */
int _ZN7android34AudioALSASpeechPhoneCallController15getOutputDeviceEv(void);

/* Symbol: _ZN7android8SPELayer15CalPrepareCountEv */
/* Demangled: android::SPELayer::CalPrepareCount() */
int _ZN7android8SPELayer15CalPrepareCountEv(void);

/* Symbol: _ZN7android17AudioALSAStreamIn27dynamicSetStreamInAudioDumpEv */
/* Demangled: android::AudioALSAStreamIn::dynamicSetStreamInAudioDump() */
int _ZN7android17AudioALSAStreamIn27dynamicSetStreamInAudioDumpEv(void);

/* Symbol: _ZNSt3__16vectorIPN7android16AudioEventThreadENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<android::AudioEventThread*, std::__1::allocator<android::AudioEventThread*> >::__push_back_slow_path<android::AudioEventThread* const&>(android::AudioEventThread* const&) */
int _ZNSt3__16vectorIPN7android16AudioEventThreadENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: aurisys_arsi_process_ul_only */
/* Demangled: aurisys_arsi_process_ul_only */
int aurisys_arsi_process_ul_only(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudio21openPcmDriverWithFlagEjjPP3pcmP10pcm_config */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::openPcmDriverWithFlag(unsigned int, unsigned int, pcm**, pcm_config*) */
int _ZN7android34AudioALSACaptureDataProviderAAudio21openPcmDriverWithFlagEjjPP3pcmP10pcm_config(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBase5startEv */
/* Demangled: android::AudioALSACaptureHandlerBase::start() */
int _ZN7android27AudioALSACaptureHandlerBase5startEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal23readSpeechMessageThreadEPv */
/* Demangled: android::SpeechDriverNormal::readSpeechMessageThread(void*) */
int _ZN7android18SpeechDriverNormal23readSpeechMessageThreadEPv(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController19updateSpeechFeatureENS_17SpeechFeatureTypeEb */
/* Demangled: android::AudioALSASpeechPhoneCallController::updateSpeechFeature(android::SpeechFeatureType, bool) */
int _ZN7android34AudioALSASpeechPhoneCallController19updateSpeechFeatureENS_17SpeechFeatureTypeEb(void);

/* Symbol: _ZN7android17SpeechDriverDummy19SetEnh1DownlinkGainEs */
/* Demangled: android::SpeechDriverDummy::SetEnh1DownlinkGain(short) */
int _ZN7android17SpeechDriverDummy19SetEnh1DownlinkGainEs(void);

/* Symbol: _ZN7android22AudioMTKGainController17getMicGainDecimalE13GAIN_MIC_MODE11GAIN_DEVICE */
/* Demangled: android::AudioMTKGainController::getMicGainDecimal(GAIN_MIC_MODE, GAIN_DEVICE) */
int _ZN7android22AudioMTKGainController17getMicGainDecimalE13GAIN_MIC_MODE11GAIN_DEVICE(void);

/* Symbol: _ZN7android17AudioALSAHardware27xWayPlay_GetFreeBufferCountEv */
/* Demangled: android::AudioALSAHardware::xWayPlay_GetFreeBufferCount() */
int _ZN7android17AudioALSAHardware27xWayPlay_GetFreeBufferCountEv(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerVoiceD0Ev */
/* Demangled: android::AudioALSAPlaybackHandlerVoice::~AudioALSAPlaybackHandlerVoice() */
int _ZN7android29AudioALSAPlaybackHandlerVoiceD0Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl30BT_SCO_ExtMDWriteDataToRingBufEPhjNS_21EXTMD_BTSCO_DIRECTIONE */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMDWriteDataToRingBuf(unsigned char*, unsigned int, android::EXTMD_BTSCO_DIRECTION) */
int _ZN7android18AudioBTCVSDControl30BT_SCO_ExtMDWriteDataToRingBufEPhjNS_21EXTMD_BTSCO_DIRECTIONE(void);

/* Symbol: _ZN7android8SPELayer22SetDownLinkLatencyTimeEj */
/* Demangled: android::SPELayer::SetDownLinkLatencyTime(unsigned int) */
int _ZN7android8SPELayer22SetDownLinkLatencyTimeEj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager16SetBtHeadsetNameEPKc */
/* Demangled: android::AudioALSAStreamManager::SetBtHeadsetName(char const*) */
int _ZN7android22AudioALSAStreamManager16SetBtHeadsetNameEPKc(void);

/* Symbol: _ZN7android14AudioUSBCenterC2Ev */
/* Demangled: android::AudioUSBCenter::AudioUSBCenter() */
int _ZN7android14AudioUSBCenterC2Ev(void);

/* Symbol: _ZN7android18SpeechDriverNormal14SetVibSpkParamEPv */
/* Demangled: android::SpeechDriverNormal::SetVibSpkParam(void*) */
int _ZN7android18SpeechDriverNormal14SetVibSpkParamEPv(void);

/* Symbol: _ZTVNSt3__117__repeat_one_loopIcEE */
/* Demangled: vtable for std::__1::__repeat_one_loop<char> */
extern void* _ZTVNSt3__117__repeat_one_loopIcEE;

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsb18loadUSBDeviceParamEv */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::loadUSBDeviceParam() */
int _ZN7android27AudioALSAPlaybackHandlerUsb18loadUSBDeviceParamEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager22resetA2dpDeviceLatencyEv */
/* Demangled: android::AudioALSAHardwareResourceManager::resetA2dpDeviceLatency() */
int _ZN7android32AudioALSAHardwareResourceManager22resetA2dpDeviceLatencyEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager11getInstanceEv */
/* Demangled: android::AudioALSAHardwareResourceManager::getInstance() */
int _ZN7android32AudioALSAHardwareResourceManager11getInstanceEv(void);

/* Symbol: _ZN7android21keypcmOffloadPlaybackE */
/* Demangled: android::keypcmOffloadPlayback */
extern void* _ZN7android21keypcmOffloadPlaybackE;

/* Symbol: _ZN7android12AudioFtmBase15LouderSPKOCTestEcc */
/* Demangled: android::AudioFtmBase::LouderSPKOCTest(char, char) */
int _ZN7android12AudioFtmBase15LouderSPKOCTestEcc(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormal14setScreenStateEbjjb */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::setScreenState(bool, unsigned int, unsigned int, bool) */
int _ZN7android30AudioALSAPlaybackHandlerNormal14setScreenStateEbjjb(void);

/* Symbol: _ZTv0_n16_N7android27AudioALSALoopbackController22AudioMTKLoopbackThread10onFirstRefEv */
/* Demangled: virtual thunk to android::AudioALSALoopbackController::AudioMTKLoopbackThread::onFirstRef() */
int _ZTv0_n16_N7android27AudioALSALoopbackController22AudioMTKLoopbackThread10onFirstRefEv(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerAAudio4openEv */
/* Demangled: android::AudioALSACaptureHandlerAAudio::open() */
int _ZN7android29AudioALSACaptureHandlerAAudio4openEv(void);

/* Symbol: _ZN7android22AudioMTKGainControllerC1Ev */
/* Demangled: android::AudioMTKGainController::AudioMTKGainController() */
int _ZN7android22AudioMTKGainControllerC1Ev(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController10setMicMuteEb */
/* Demangled: android::AudioALSASpeechPhoneCallController::setMicMute(bool) */
int _ZN7android34AudioALSASpeechPhoneCallController10setMicMuteEb(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController20adjustTtyInOutDeviceEv */
/* Demangled: android::AudioALSASpeechPhoneCallController::adjustTtyInOutDevice() */
int _ZN7android34AudioALSASpeechPhoneCallController20adjustTtyInOutDeviceEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBaseD0Ev */
/* Demangled: android::AudioALSAPlaybackHandlerBase::~AudioALSAPlaybackHandlerBase() */
int _ZN7android28AudioALSAPlaybackHandlerBaseD0Ev(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager18OpenBuiltInMicPathEv */
/* Demangled: android::AudioALSAHardwareResourceManager::OpenBuiltInMicPath() */
int _ZN7android32AudioALSAHardwareResourceManager18OpenBuiltInMicPathEv(void);

/* Symbol: _ZN7android8AudioFtm25HeadsetMic_SpkLR_LoopbackEc */
/* Demangled: android::AudioFtm::HeadsetMic_SpkLR_Loopback(char) */
int _ZN7android8AudioFtm25HeadsetMic_SpkLR_LoopbackEc(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase21openPcmDriverWithFlagEjj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::openPcmDriverWithFlag(unsigned int, unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerBase21openPcmDriverWithFlagEjj(void);

/* Symbol: _ZN7android13wordSizeAlignEj */
/* Demangled: android::wordSizeAlign(unsigned int) */
int _ZN7android13wordSizeAlignEj(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_awk_escapeINS_11__wrap_iterIPKcEEEET_S9_S9_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_awk_escape<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE18__parse_awk_escapeINS_11__wrap_iterIPKcEEEET_S9_S9_PNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager17isPmicInputDeviceEj */
/* Demangled: android::AudioALSAHardwareResourceManager::isPmicInputDevice(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager17isPmicInputDeviceEj(void);

/* Symbol: aurisys_arsi_process_dl_only */
/* Demangled: aurisys_arsi_process_dl_only */
int aurisys_arsi_process_dl_only(void);

/* Symbol: _ZTISt9exception */
/* Demangled: typeinfo for std::exception */
extern void* _ZTISt9exception;

/* Symbol: _ZN7android17SpeechParserGen95D2Ev */
/* Demangled: android::SpeechParserGen95::~SpeechParserGen95() */
int _ZN7android17SpeechParserGen95D2Ev(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP9SpeechOffEv */
/* Demangled: android::SpeechDriverOpenDSP::SpeechOff() */
int _ZN7android19SpeechDriverOpenDSP9SpeechOffEv(void);

/* Symbol: _ZN7android20SpeechPcmMixerVoipRxC1Ev */
/* Demangled: android::SpeechPcmMixerVoipRx::SpeechPcmMixerVoipRx() */
int _ZN7android20SpeechPcmMixerVoipRxC1Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread10onFirstRefEv */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDThread::onFirstRef() */
int _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread10onFirstRefEv(void);

/* Symbol: _ZN7android17AudioALSAStreamInC2Ev */
/* Demangled: android::AudioALSAStreamIn::AudioALSAStreamIn() */
int _ZN7android17AudioALSAStreamInC2Ev(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerDsp4initEv */
/* Demangled: android::AudioALSACaptureHandlerDsp::init() */
int _ZN7android26AudioALSACaptureHandlerDsp4initEv(void);

/* Symbol: _ZTVN7android25SpeechPcmMixerTelephonyTxE */
/* Demangled: vtable for android::SpeechPcmMixerTelephonyTx */
extern void* _ZTVN7android25SpeechPcmMixerTelephonyTxE;

/* Symbol: _ZN7android23callbackAudioXmlChangedEP10_AppHandlePKc */
/* Demangled: android::callbackAudioXmlChanged(_AppHandle*, char const*) */
int _ZN7android23callbackAudioXmlChangedEP10_AppHandlePKc(void);

/* Symbol: _ZTVN7android23AudioMTKHeadSetMessagerE */
/* Demangled: vtable for android::AudioMTKHeadSetMessager */
extern void* _ZTVN7android23AudioMTKHeadSetMessagerE;

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase21attachPlaybackHandlerEPK18stream_attribute_t */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::attachPlaybackHandler(stream_attribute_t const*) */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase21attachPlaybackHandlerEPK18stream_attribute_t(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderFMRadio4openEv */
/* Demangled: android::AudioALSACaptureDataProviderFMRadio::open() */
int _ZN7android35AudioALSACaptureDataProviderFMRadio4openEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal33RecoverModemSideStatusToInitStateEv */
/* Demangled: android::SpeechDriverNormal::RecoverModemSideStatusToInitState() */
int _ZN7android18SpeechDriverNormal33RecoverModemSideStatusToInitStateEv(void);

/* Symbol: audio_pool_buf_copy_from_ringbuf */
/* Demangled: audio_pool_buf_copy_from_ringbuf */
int audio_pool_buf_copy_from_ringbuf(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP10PCM2WayOffEv */
/* Demangled: android::SpeechDriverOpenDSP::PCM2WayOff() */
int _ZN7android19SpeechDriverOpenDSP10PCM2WayOffEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager20Enable_DualMicSettngENS_22sph_enh_dynamic_mask_tEb */
/* Demangled: android::AudioALSAStreamManager::Enable_DualMicSettng(android::sph_enh_dynamic_mask_t, bool) */
int _ZN7android22AudioALSAStreamManager20Enable_DualMicSettngENS_22sph_enh_dynamic_mask_tEb(void);

/* Symbol: _ZN7android25AudioALSACaptureHandlerBTD0Ev */
/* Demangled: android::AudioALSACaptureHandlerBT::~AudioALSACaptureHandlerBT() */
int _ZN7android25AudioALSACaptureHandlerBTD0Ev(void);

/* Symbol: _ZNK7android6VectorIPNS_18AudioALSAStreamOutEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::AudioALSAStreamOut*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_18AudioALSAStreamOutEE7do_copyEPvPKvj(void);

/* Symbol: _ZTVN7android21AudioDspStreamManagerE */
/* Demangled: vtable for android::AudioDspStreamManager */
extern void* _ZTVN7android21AudioDspStreamManagerE;

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase13ListPcmDriverEjj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::ListPcmDriver(unsigned int, unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerBase13ListPcmDriverEjj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager17standbyAllStreamsEb */
/* Demangled: android::AudioALSAStreamManager::standbyAllStreams(bool) */
int _ZN7android22AudioALSAStreamManager17standbyAllStreamsEb(void);

/* Symbol: _ZN7android25mStreamOutHDMIStereoCountE */
/* Demangled: android::mStreamOutHDMIStereoCount */
extern void* _ZN7android25mStreamOutHDMIStereoCountE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSACaptureDataProviderBase*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP19SetUplinkSourceMuteEb */
/* Demangled: android::SpeechDriverOpenDSP::SetUplinkSourceMute(bool) */
int _ZN7android19SpeechDriverOpenDSP19SetUplinkSourceMuteEb(void);

/* Symbol: _ZN7android22AudioALSADriverUtility16GetPropertyValueEPKc */
/* Demangled: android::AudioALSADriverUtility::GetPropertyValue(char const*) */
int _ZN7android22AudioALSADriverUtility16GetPropertyValueEPKc(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefUsb22configDefaultAttributeEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefUsb::configDefaultAttribute() */
int _ZN7android38AudioALSACaptureDataProviderEchoRefUsb22configDefaultAttributeEv(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager23setSupportRunNLEHandlerE18playback_handler_t */
/* Demangled: android::AudioALSAHyBridNLEManager::setSupportRunNLEHandler(playback_handler_t) */
int _ZN7android25AudioALSAHyBridNLEManager23setSupportRunNLEHandlerE18playback_handler_t(void);

/* Symbol: _ZN7android20AudioCustParamClientC2Ev */
/* Demangled: android::AudioCustParamClient::AudioCustParamClient() */
int _ZN7android20AudioCustParamClientC2Ev(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase14OpenPCMDumpDSPEPKch */
/* Demangled: android::AudioALSAPlaybackHandlerBase::OpenPCMDumpDSP(char const*, unsigned char) */
int _ZN7android28AudioALSAPlaybackHandlerBase14OpenPCMDumpDSPEPKch(void);

/* Symbol: _ZN7android29AudioALSASampleRateController29getPrimaryStreamOutSampleRateEv */
/* Demangled: android::AudioALSASampleRateController::getPrimaryStreamOutSampleRate() */
int _ZN7android29AudioALSASampleRateController29getPrimaryStreamOutSampleRateEv(void);

/* Symbol: _ZN7android17AudioMessengerIPID0Ev */
/* Demangled: android::AudioMessengerIPI::~AudioMessengerIPI() */
int _ZN7android17AudioMessengerIPID0Ev(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBaseC2EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerBase::AudioALSAPlaybackHandlerBase(stream_attribute_t const*) */
int _ZN7android28AudioALSAPlaybackHandlerBaseC2EPK18stream_attribute_t(void);

/* Symbol: _ZN7android21keypcmPlaybackDspFastE */
/* Demangled: android::keypcmPlaybackDspFast */
extern void* _ZN7android21keypcmPlaybackDspFastE;

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager30notifyOutputDeviceStatusChangeEjNS_12DeviceStatusEj */
/* Demangled: android::AudioALSAHardwareResourceManager::notifyOutputDeviceStatusChange(unsigned int, android::DeviceStatus, unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager30notifyOutputDeviceStatusChangeEjNS_12DeviceStatusEj(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderNormal4openEv */
/* Demangled: android::AudioALSACaptureDataProviderNormal::open() */
int _ZN7android34AudioALSACaptureDataProviderNormal4openEv(void);

/* Symbol: _ZN7android15AudioPreProcess9MutexLockEv */
/* Demangled: android::AudioPreProcess::MutexLock() */
int _ZN7android15AudioPreProcess9MutexLockEv(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerSyncIO4openEv */
/* Demangled: android::AudioALSACaptureHandlerSyncIO::open() */
int _ZN7android29AudioALSACaptureHandlerSyncIO4openEv(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutEarphonePMIC11getInstanceEv */
/* Demangled: android::AudioALSACodecDeviceOutEarphonePMIC::getInstance() */
int _ZN7android35AudioALSACodecDeviceOutEarphonePMIC11getInstanceEv(void);

/* Symbol: _ZN7android18AudioALSAStreamOut5startEv */
/* Demangled: android::AudioALSAStreamOut::start() */
int _ZN7android18AudioALSAStreamOut5startEv(void);

/* Symbol: unlock_all_adsp_rlock */
/* Demangled: unlock_all_adsp_rlock */
int unlock_all_adsp_rlock(void);

/* Symbol: _ZN7android22AudioSmartPaController19getMaxSupportedRateEv */
/* Demangled: android::AudioSmartPaController::getMaxSupportedRate() */
int _ZN7android22AudioSmartPaController19getMaxSupportedRateEv(void);

/* Symbol: _ZN7android18AudioALSAStreamOut16standbyStreamOutEb */
/* Demangled: android::AudioALSAStreamOut::standbyStreamOut(bool) */
int _ZN7android18AudioALSAStreamOut16standbyStreamOutEb(void);

/* Symbol: get_channel_number_from_mask */
/* Demangled: get_channel_number_from_mask */
int get_channel_number_from_mask(void);

/* Symbol: _ZN7android21AudioDspStreamManager24DestroyAurisysLibManagerEPP21aurisys_lib_manager_tPP20aurisys_dsp_config_th */
/* Demangled: android::AudioDspStreamManager::DestroyAurisysLibManager(aurisys_lib_manager_t**, aurisys_dsp_config_t**, unsigned char) */
int _ZN7android21AudioDspStreamManager24DestroyAurisysLibManagerEPP21aurisys_lib_manager_tPP20aurisys_dsp_config_th(void);

/* Symbol: _ZN7android18SpeechDriverNormal13mSpeechDriverE */
/* Demangled: android::SpeechDriverNormal::mSpeechDriver */
extern void* _ZN7android18SpeechDriverNormal13mSpeechDriverE;

/* Symbol: _ZN7android22AudioMTKGainController14SetLinoutRGainEi */
/* Demangled: android::AudioMTKGainController::SetLinoutRGain(int) */
int _ZN7android22AudioMTKGainController14SetLinoutRGainEi(void);

/* Symbol: _ZN7android19keypcmFMI2SPlaybackE */
/* Demangled: android::keypcmFMI2SPlayback */
extern void* _ZN7android19keypcmFMI2SPlaybackE;

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormal22UpdateKernelBufferSizeEj */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::UpdateKernelBufferSize(unsigned int) */
int _ZN7android30AudioALSAPlaybackHandlerNormal22UpdateKernelBufferSizeEj(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient30copyEchoRefCaptureDataToClientENS_7RingBufE */
/* Demangled: android::AudioALSACaptureDataClient::copyEchoRefCaptureDataToClient(android::RingBuf) */
int _ZN7android26AudioALSACaptureDataClient30copyEchoRefCaptureDataToClientENS_7RingBufE(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController16getUSBIdSpeechDLEv */
/* Demangled: android::AudioUSBPhoneCallController::getUSBIdSpeechDL() */
int _ZN7android27AudioUSBPhoneCallController16getUSBIdSpeechDLEv(void);

/* Symbol: audio_pool_buf_copy_to_ringbuf */
/* Demangled: audio_pool_buf_copy_to_ringbuf */
int audio_pool_buf_copy_to_ringbuf(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer16mMixerTargetListE */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::mMixerTargetList */
extern void* _ZN7android29AudioALSAPlaybackHandlerMixer16mMixerTargetListE;

/* Symbol: _ZN7android21AudioALSAFMController18getFmChipPowerInfoEv */
/* Demangled: android::AudioALSAFMController::getFmChipPowerInfo() */
int _ZN7android21AudioALSAFMController18getFmChipPowerInfoEv(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsb7routingEj */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::routing(unsigned int) */
int _ZN7android27AudioALSAPlaybackHandlerUsb7routingEj(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController16pcmDumpWriteDataEP7__sFILEPKvj */
/* Demangled: android::AudioUSBPhoneCallController::pcmDumpWriteData(__sFILE*, void const*, unsigned int) */
int _ZN7android27AudioUSBPhoneCallController16pcmDumpWriteDataEP7__sFILEPKvj(void);

/* Symbol: _ZN7android31AudioALSASpeechStreamController26IsSpeechStreamThreadEnableEv */
/* Demangled: android::AudioALSASpeechStreamController::IsSpeechStreamThreadEnable() */
int _ZN7android31AudioALSASpeechStreamController26IsSpeechStreamThreadEnableEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSACaptureHandlerBase*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEEE;

/* Symbol: _ZN7android22AudioMTKGainController8setSceneEPKc */
/* Demangled: android::AudioMTKGainController::setScene(char const*) */
int _ZN7android22AudioMTKGainController8setSceneEPKc(void);

/* Symbol: _ZN7android27SpeechEnhancementControllerD0Ev */
/* Demangled: android::SpeechEnhancementController::~SpeechEnhancementController() */
int _ZN7android27SpeechEnhancementControllerD0Ev(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE21__parse_basic_reg_expINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_basic_reg_exp<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE21__parse_basic_reg_expINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderHAPD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderHAP::~AudioALSACaptureDataProviderHAP() */
int _ZN7android31AudioALSACaptureDataProviderHAPD2Ev(void);

/* Symbol: _ZN7android20isIsolatedDeepBufferE20audio_output_flags_t */
/* Demangled: android::isIsolatedDeepBuffer(audio_output_flags_t) */
int _ZN7android20isIsolatedDeepBufferE20audio_output_flags_t(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallControllerD0Ev */
/* Demangled: android::AudioALSASpeechPhoneCallController::~AudioALSASpeechPhoneCallController() */
int _ZN7android34AudioALSASpeechPhoneCallControllerD0Ev(void);

/* Symbol: _ZN7android20setNeedAEETimeoutFlgEb */
/* Demangled: android::setNeedAEETimeoutFlg(bool) */
int _ZN7android20setNeedAEETimeoutFlgEb(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager16getMicRecordPathEj */
/* Demangled: android::AudioALSAHardwareResourceManager::getMicRecordPath(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager16getMicRecordPathEj(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutEarphonePMICD1Ev */
/* Demangled: android::AudioALSACodecDeviceOutEarphonePMIC::~AudioALSACodecDeviceOutEarphonePMIC() */
int _ZN7android35AudioALSACodecDeviceOutEarphonePMICD1Ev(void);

/* Symbol: _ZTVN7android30AudioALSAPlaybackHandlerAAudioE */
/* Demangled: vtable for android::AudioALSAPlaybackHandlerAAudio */
extern void* _ZTVN7android30AudioALSAPlaybackHandlerAAudioE;

/* Symbol: sw_mixer_target_detach */
/* Demangled: sw_mixer_target_detach */
int sw_mixer_target_detach(void);

/* Symbol: _ZN7android13PCMDumpThreadEPv */
/* Demangled: android::PCMDumpThread(void*) */
int _ZN7android13PCMDumpThreadEPv(void);

/* Symbol: _ZN7android17AudioALSAHardware18GetAudioCommonDataEijPv */
/* Demangled: android::AudioALSAHardware::GetAudioCommonData(int, unsigned int, void*) */
int _ZN7android17AudioALSAHardware18GetAudioCommonDataEijPv(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerAECD0Ev */
/* Demangled: android::AudioALSACaptureHandlerAEC::~AudioALSACaptureHandlerAEC() */
int _ZN7android26AudioALSACaptureHandlerAECD0Ev(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::close() */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase5closeEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager11setMIC1ModeEb */
/* Demangled: android::AudioALSAHardwareResourceManager::setMIC1Mode(bool) */
int _ZN7android32AudioALSAHardwareResourceManager11setMIC1ModeEb(void);

/* Symbol: _ZN7android22AudioALSAStreamManager23setSoftwareBridgeEnableEb */
/* Demangled: android::AudioALSAStreamManager::setSoftwareBridgeEnable(bool) */
int _ZN7android22AudioALSAStreamManager23setSoftwareBridgeEnableEb(void);

/* Symbol: audio_ringbuf_write_value */
/* Demangled: audio_ringbuf_write_value */
int audio_ringbuf_write_value(void);

/* Symbol: _ZN7android17AudioALSAStreamIn21checkOpenStreamFormatEjPi */
/* Demangled: android::AudioALSAStreamIn::checkOpenStreamFormat(unsigned int, int*) */
int _ZN7android17AudioALSAStreamIn21checkOpenStreamFormatEjPi(void);

/* Symbol: _ZN7android22AudioMTKGainController17isValidStreamTypeE19audio_stream_type_t */
/* Demangled: android::AudioMTKGainController::isValidStreamType(audio_stream_type_t) */
int _ZN7android22AudioMTKGainController17isValidStreamTypeE19audio_stream_type_t(void);

/* Symbol: _ZN7android22AudioALSAStreamManager15openInputStreamEjPiPjS2_S1_20audio_in_acoustics_tj */
/* Demangled: android::AudioALSAStreamManager::openInputStream(unsigned int, int*, unsigned int*, unsigned int*, int*, audio_in_acoustics_t, unsigned int) */
int _ZN7android22AudioALSAStreamManager15openInputStreamEjPiPjS2_S1_20audio_in_acoustics_tj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl11BTCVSD_InitEijj */
/* Demangled: android::AudioBTCVSDControl::BTCVSD_Init(int, unsigned int, unsigned int) */
int _ZN7android18AudioBTCVSDControl11BTCVSD_InitEijj(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient18CheckBesRecordModeEv */
/* Demangled: android::AudioALSACaptureDataClient::CheckBesRecordMode() */
int _ZN7android26AudioALSACaptureDataClient18CheckBesRecordModeEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSDC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::AudioALSACaptureDataProviderBTCVSD() */
int _ZN7android34AudioALSACaptureDataProviderBTCVSDC1Ev(void);

/* Symbol: _ZN7android17AudioALSAStreamIn14addAudioEffectEPP18effect_interface_s */
/* Demangled: android::AudioALSAStreamIn::addAudioEffect(effect_interface_s**) */
int _ZN7android17AudioALSAStreamIn14addAudioEffectEPP18effect_interface_s(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP15SetDownlinkMuteEb */
/* Demangled: android::SpeechDriverOpenDSP::SetDownlinkMute(bool) */
int _ZN7android19SpeechDriverOpenDSP15SetDownlinkMuteEb(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP22GetScpSideSpeechStatusENS_19modem_status_mask_tE */
/* Demangled: android::SpeechDriverOpenDSP::GetScpSideSpeechStatus(android::modem_status_mask_t) */
int _ZN7android19SpeechDriverOpenDSP22GetScpSideSpeechStatusENS_19modem_status_mask_tE(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase8doBliSrcEPvjPS1_Pj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::doBliSrc(void*, unsigned int, void**, unsigned int*) */
int _ZN7android28AudioALSAPlaybackHandlerBase8doBliSrcEPvjPS1_Pj(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerHDMI16SetMHLChipEnableEi */
/* Demangled: android::AudioALSAPlaybackHandlerHDMI::SetMHLChipEnable(int) */
int _ZN7android28AudioALSAPlaybackHandlerHDMI16SetMHLChipEnableEi(void);

/* Symbol: _ZN7android12streaminIVInE */
/* Demangled: android::streaminIVIn */
extern void* _ZN7android12streaminIVInE;

/* Symbol: _ZN7android23DefaultRecDMNR_cal_dataE */
/* Demangled: android::DefaultRecDMNR_cal_data */
extern void* _ZN7android23DefaultRecDMNR_cal_dataE;

/* Symbol: _ZN7android17AudioALSAHardware12setTDMRecordEi */
/* Demangled: android::AudioALSAHardware::setTDMRecord(int) */
int _ZN7android17AudioALSAHardware12setTDMRecordEi(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderANCC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderANC::AudioALSACaptureDataProviderANC() */
int _ZN7android31AudioALSACaptureDataProviderANCC2Ev(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController23mUSBPhoneCallControllerE */
/* Demangled: android::AudioUSBPhoneCallController::mUSBPhoneCallController */
extern void* _ZN7android27AudioUSBPhoneCallController23mUSBPhoneCallControllerE;

/* Symbol: _ZN7android17AudioALSAStreamIn4dumpEiRKNS_6VectorINS_8String16EEE */
/* Demangled: android::AudioALSAStreamIn::dump(int, android::Vector<android::String16> const&) */
int _ZN7android17AudioALSAStreamIn4dumpEiRKNS_6VectorINS_8String16EEE(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBase17updateInputDeviceEj */
/* Demangled: android::AudioALSACaptureHandlerBase::updateInputDevice(unsigned int) */
int _ZN7android27AudioALSACaptureHandlerBase17updateInputDeviceEj(void);

/* Symbol: _ZN7android15AudioPreProcess17CheckNativeEffectEv */
/* Demangled: android::AudioPreProcess::CheckNativeEffect() */
int _ZN7android15AudioPreProcess17CheckNativeEffectEv(void);

/* Symbol: _ZN7android11keyCardNameE */
/* Demangled: android::keyCardName */
extern void* _ZN7android11keyCardNameE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSAPlaybackHandlerBase*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_assertionINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_assertion<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_assertionINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZTVN7android28AudioALSACaptureHandlerVoiceE */
/* Demangled: vtable for android::AudioALSACaptureHandlerVoice */
extern void* _ZTVN7android28AudioALSACaptureHandlerVoiceE;

/* Symbol: _ZN7android18AudioBTCVSDControl25btsco_AllocMemory_TX_CVSDEv */
/* Demangled: android::AudioBTCVSDControl::btsco_AllocMemory_TX_CVSD() */
int _ZN7android18AudioBTCVSDControl25btsco_AllocMemory_TX_CVSDEv(void);

/* Symbol: _ZN7android17AudioALSAStreamIn16WritePcmDumpDataEPvi */
/* Demangled: android::AudioALSAStreamIn::WritePcmDumpData(void*, int) */
int _ZN7android17AudioALSAStreamIn16WritePcmDumpDataEPvi(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager15stopInputDeviceEj */
/* Demangled: android::AudioALSAHardwareResourceManager::stopInputDevice(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager15stopInputDeviceEj(void);

/* Symbol: aurisys_set_dl_enhance */
/* Demangled: aurisys_set_dl_enhance */
int aurisys_set_dl_enhance(void);

/* Symbol: _ZN7android12streamOutputE */
/* Demangled: android::streamOutput */
extern void* _ZN7android12streamOutputE;

/* Symbol: _ZN7android22AudioMTKGainControllerD2Ev */
/* Demangled: android::AudioMTKGainController::~AudioMTKGainController() */
int _ZN7android22AudioMTKGainControllerD2Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager20GetBesLoudnessStatusEv */
/* Demangled: android::AudioALSAStreamManager::GetBesLoudnessStatus() */
int _ZN7android22AudioALSAStreamManager20GetBesLoudnessStatusEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManagerD1Ev */
/* Demangled: android::AudioALSAStreamManager::~AudioALSAStreamManager() */
int _ZN7android22AudioALSAStreamManagerD1Ev(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp10setApHwPcmEv */
/* Demangled: android::AudioALSACaptureDataProviderDsp::setApHwPcm() */
int _ZN7android31AudioALSACaptureDataProviderDsp10setApHwPcmEv(void);

/* Symbol: sw_mixer_source_detach */
/* Demangled: sw_mixer_source_detach */
int sw_mixer_source_detach(void);

/* Symbol: _ZN7android18SpeechPcmMixerBase21DestroyPcmMixerBufferEPNS_24SpeechPcmMixerBaseBufferE */
/* Demangled: android::SpeechPcmMixerBase::DestroyPcmMixerBuffer(android::SpeechPcmMixerBaseBuffer*) */
int _ZN7android18SpeechPcmMixerBase21DestroyPcmMixerBufferEPNS_24SpeechPcmMixerBaseBufferE(void);

/* Symbol: _ZN7android22set_uint32_to_propertyEPKcj */
/* Demangled: android::set_uint32_to_property(char const*, unsigned int) */
int _ZN7android22set_uint32_to_propertyEPKcj(void);

/* Symbol: _ZTVN7android35AudioALSACaptureDataProviderEchoRefE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderEchoRef */
extern void* _ZTVN7android35AudioALSACaptureDataProviderEchoRefE;

/* Symbol: _ZN7android22AudioALSAStreamManager20setAllStreamsSuspendEbb */
/* Demangled: android::AudioALSAStreamManager::setAllStreamsSuspend(bool, bool) */
int _ZN7android22AudioALSAStreamManager20setAllStreamsSuspendEbb(void);

/* Symbol: _ZN7android8SPELayer14Process_RecordEPsi */
/* Demangled: android::SPELayer::Process_Record(short*, int) */
int _ZN7android8SPELayer14Process_RecordEPsi(void);

/* Symbol: aurisys_destroy_lib_handler_list */
/* Demangled: aurisys_destroy_lib_handler_list */
int aurisys_destroy_lib_handler_list(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixerD2Ev */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::~AudioALSAPlaybackHandlerMixer() */
int _ZN7android29AudioALSAPlaybackHandlerMixerD2Ev(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase11doDcRemovalEPvjPS1_Pj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::doDcRemoval(void*, unsigned int, void**, unsigned int*) */
int _ZN7android28AudioALSAPlaybackHandlerBase11doDcRemovalEPvjPS1_Pj(void);

/* Symbol: _ZN7android12AudioFtmBase21Audio_Set_Speaker_OffEi */
/* Demangled: android::AudioFtmBase::Audio_Set_Speaker_Off(int) */
int _ZN7android12AudioFtmBase21Audio_Set_Speaker_OffEi(void);

/* Symbol: _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThread10readyToRunEv */
/* Demangled: android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread::readyToRun() */
int _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThread10readyToRunEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager14DisableSphStrmE12audio_mode_t */
/* Demangled: android::AudioALSAStreamManager::DisableSphStrm(audio_mode_t) */
int _ZN7android22AudioALSAStreamManager14DisableSphStrmE12audio_mode_t(void);

/* Symbol: _ZN7android18SpeechDriverNormal24sendSpeechMessageToQueueEPNS_9sph_msg_tE */
/* Demangled: android::SpeechDriverNormal::sendSpeechMessageToQueue(android::sph_msg_t*) */
int _ZN7android18SpeechDriverNormal24sendSpeechMessageToQueueEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android22AudioMTKGainController10SetMicGainEjj */
/* Demangled: android::AudioMTKGainController::SetMicGain(unsigned int, unsigned int) */
int _ZN7android22AudioMTKGainController10SetMicGainEjj(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase38dynamicSetCaptureDataProviderAudioDumpEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::dynamicSetCaptureDataProviderAudioDump() */
int _ZN7android32AudioALSACaptureDataProviderBase38dynamicSetCaptureDataProviderAudioDumpEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderDspRawD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderDspRaw::~AudioALSACaptureDataProviderDspRaw() */
int _ZN7android34AudioALSACaptureDataProviderDspRawD1Ev(void);

/* Symbol: _ZN7android18SpeechDriverNormal16parseSpeechParamENS_14SpeechScenarioE */
/* Demangled: android::SpeechDriverNormal::parseSpeechParam(android::SpeechScenario) */
int _ZN7android18SpeechDriverNormal16parseSpeechParamENS_14SpeechScenarioE(void);

/* Symbol: _ZN7android27SpeechDataProcessingHandler10threadLoopEPv */
/* Demangled: android::SpeechDataProcessingHandler::threadLoop(void*) */
int _ZN7android27SpeechDataProcessingHandler10threadLoopEPv(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerVOW4readEPvi */
/* Demangled: android::AudioALSACaptureHandlerVOW::read(void*, int) */
int _ZN7android26AudioALSACaptureHandlerVOW4readEPvi(void);

/* Symbol: _ZN7android22AudioMTKGainController13freeGainTableEv */
/* Demangled: android::AudioMTKGainController::freeGainTable() */
int _ZN7android22AudioMTKGainController13freeGainTableEv(void);

/* Symbol: _ZN7android8SPELayer12Process_VoIPEPsi */
/* Demangled: android::SPELayer::Process_VoIP(short*, int) */
int _ZN7android8SPELayer12Process_VoIPEPsi(void);

/* Symbol: _ZN7android15AudioPreProcess20start_echo_referenceE14audio_format_tjj */
/* Demangled: android::AudioPreProcess::start_echo_reference(audio_format_t, unsigned int, unsigned int) */
int _ZN7android15AudioPreProcess20start_echo_referenceE14audio_format_tjj(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefUsbD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefUsb::~AudioALSACaptureDataProviderEchoRefUsb() */
int _ZN7android38AudioALSACaptureDataProviderEchoRefUsbD1Ev(void);

/* Symbol: _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmp4openEv */
/* Demangled: android::AudioALSACodecDeviceOutExtSpeakerAmp::open() */
int _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmp4openEv(void);

/* Symbol: get_dedicated_channel_number_from_mask */
/* Demangled: get_dedicated_channel_number_from_mask */
int get_dedicated_channel_number_from_mask(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload18isformatnotsupportEv */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::isformatnotsupport() */
int _ZN7android31AudioALSAPlaybackHandlerOffload18isformatnotsupportEv(void);

/* Symbol: _ZNKSt3__112regex_traitsIcE19__transform_primaryINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_c */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::__transform_primary<std::__1::__wrap_iter<char*> >(std::__1::__wrap_iter<char*>, std::__1::__wrap_iter<char*>, char) const */
int _ZNKSt3__112regex_traitsIcE19__transform_primaryINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_c(void);

/* Symbol: _ZN7android18AudioBTCVSDControl23BT_SCO_ExtMDDLBufUnLockEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMDDLBufUnLock() */
int _ZN7android18AudioBTCVSDControl23BT_SCO_ExtMDDLBufUnLockEv(void);

/* Symbol: _ZNK7android6VectorIPNS_18AudioALSAStreamOutEE12do_constructEPvj */
/* Demangled: android::Vector<android::AudioALSAStreamOut*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_18AudioALSAStreamOutEE12do_constructEPvj(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController4openE12audio_mode_tjj */
/* Demangled: android::AudioALSASpeechPhoneCallController::open(audio_mode_t, unsigned int, unsigned int) */
int _ZN7android34AudioALSASpeechPhoneCallController4openE12audio_mode_tjj(void);

/* Symbol: _ZN7android10Record2Way4ReadEPvi */
/* Demangled: android::Record2Way::Read(void*, int) */
int _ZN7android10Record2Way4ReadEPvi(void);

/* Symbol: _ZTVNSt3__16__loopIcEE */
/* Demangled: vtable for std::__1::__loop<char> */
extern void* _ZTVNSt3__16__loopIcEE;

/* Symbol: _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadD0Ev */
/* Demangled: android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread::~AudioBTCVSDLoopbackRxThread() */
int _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadD0Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager17updateInputSourceEi */
/* Demangled: android::AudioALSAStreamManager::updateInputSource(int) */
int _ZN7android22AudioALSAStreamManager17updateInputSourceEi(void);

/* Symbol: _ZN7android16SpeechVMRecorderD1Ev */
/* Demangled: android::SpeechVMRecorder::~SpeechVMRecorder() */
int _ZN7android16SpeechVMRecorderD1Ev(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDspD2Ev */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::~AudioALSAPlaybackHandlerDsp() */
int _ZN7android27AudioALSAPlaybackHandlerDspD2Ev(void);

/* Symbol: _ZN7android29AudioALSACaptureDataClientDsp22AddEchoRefDataProviderEPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureDataClientDsp::AddEchoRefDataProvider(android::AudioALSACaptureDataProviderBase*, stream_attribute_t*) */
int _ZN7android29AudioALSACaptureDataClientDsp22AddEchoRefDataProviderEPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t(void);

/* Symbol: _ZN7android21AudioDspStreamManager21getA2dpPlaybackPausedEv */
/* Demangled: android::AudioDspStreamManager::getA2dpPlaybackPaused() */
int _ZN7android21AudioDspStreamManager21getA2dpPlaybackPausedEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal9BGSoundOnEv */
/* Demangled: android::SpeechDriverNormal::BGSoundOn() */
int _ZN7android18SpeechDriverNormal9BGSoundOnEv(void);

/* Symbol: _ZN7android12SpeechConfigD1Ev */
/* Demangled: android::SpeechConfig::~SpeechConfig() */
int _ZN7android12SpeechConfigD1Ev(void);

/* Symbol: _ZN7android20AudioCustParamClient21mAudioCustParamClientE */
/* Demangled: android::AudioCustParamClient::mAudioCustParamClient */
extern void* _ZN7android20AudioCustParamClient21mAudioCustParamClientE;

/* Symbol: _ZN7android18SpeechDriverNormal23processModemDataMessageEPNS_9sph_msg_tE */
/* Demangled: android::SpeechDriverNormal::processModemDataMessage(android::sph_msg_t*) */
int _ZN7android18SpeechDriverNormal23processModemDataMessageEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android17AudioALSAHardware15setAudioAppInfoENS_7String8E */
/* Demangled: android::AudioALSAHardware::setAudioAppInfo(android::String8) */
int _ZN7android17AudioALSAHardware15setAudioAppInfoENS_7String8E(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutEarphonePMIC36mAudioALSACodecDeviceOutEarphonePMICE */
/* Demangled: android::AudioALSACodecDeviceOutEarphonePMIC::mAudioALSACodecDeviceOutEarphonePMIC */
extern void* _ZN7android35AudioALSACodecDeviceOutEarphonePMIC36mAudioALSACodecDeviceOutEarphonePMICE;

/* Symbol: _ZN7android16AudioEventThreadD1Ev */
/* Demangled: android::AudioEventThread::~AudioEventThread() */
int _ZN7android16AudioEventThreadD1Ev(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: _ZN7android18SpeechPcmMixerBase20IsPcmMixerDumpEnableEv */
/* Demangled: android::SpeechPcmMixerBase::IsPcmMixerDumpEnable() */
int _ZN7android18SpeechPcmMixerBase20IsPcmMixerDumpEnableEv(void);

/* Symbol: _ZN7android21AudioALSAFMController22mAudioALSAFMControllerE */
/* Demangled: android::AudioALSAFMController::mAudioALSAFMController */
extern void* _ZN7android21AudioALSAFMController22mAudioALSAFMControllerE;

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo19SetBesRecVMFileNameEPKc */
/* Demangled: android::AudioSpeechEnhanceInfo::SetBesRecVMFileName(char const*) */
int _ZN7android22AudioSpeechEnhanceInfo19SetBesRecVMFileNameEPKc(void);

/* Symbol: _ZN7android21AudioCloseDumpPCMFileEP7__sFILE */
/* Demangled: android::AudioCloseDumpPCMFile(__sFILE*) */
int _ZN7android21AudioCloseDumpPCMFileEP7__sFILE(void);

/* Symbol: _ZN7android17AudioALSAHardware25openOutputStreamWithFlagsEj20audio_output_flags_tPiPjS3_S2_ */
/* Demangled: android::AudioALSAHardware::openOutputStreamWithFlags(unsigned int, audio_output_flags_t, int*, unsigned int*, unsigned int*, int*) */
int _ZN7android17AudioALSAHardware25openOutputStreamWithFlagsEj20audio_output_flags_tPiPjS3_S2_(void);

/* Symbol: _ZNKSt3__112regex_traitsIcE18__lookup_classnameINS_11__wrap_iterIPKcEEEEtT_S7_bc */
/* Demangled: unsigned short std::__1::regex_traits<char>::__lookup_classname<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>, bool, char) const */
int _ZNKSt3__112regex_traitsIcE18__lookup_classnameINS_11__wrap_iterIPKcEEEEtT_S7_bc(void);

/* Symbol: _ZTVNSt3__116__owns_one_stateIcEE */
/* Demangled: vtable for std::__1::__owns_one_state<char> */
extern void* _ZTVNSt3__116__owns_one_stateIcEE;

/* Symbol: _ZTVN7android26AudioALSACaptureHandlerANCE */
/* Demangled: vtable for android::AudioALSACaptureHandlerANC */
extern void* _ZTVN7android26AudioALSACaptureHandlerANCE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamOut*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_18AudioALSAStreamOutEEEE10do_destroyEPvj(void);

/* Symbol: _ZN7android18SpeechPcmMixerBase5CloseEv */
/* Demangled: android::SpeechPcmMixerBase::Close() */
int _ZN7android18SpeechPcmMixerBase5CloseEv(void);

/* Symbol: _ZTVN7android24SpeechPcmMixerBaseBufferE */
/* Demangled: vtable for android::SpeechPcmMixerBaseBuffer */
extern void* _ZTVN7android24SpeechPcmMixerBaseBufferE;

/* Symbol: _ZN7android21AudioALSAFMController11getInstanceEv */
/* Demangled: android::AudioALSAFMController::getInstance() */
int _ZN7android21AudioALSAFMController11getInstanceEv(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerUsbD1Ev */
/* Demangled: android::AudioALSACaptureHandlerUsb::~AudioALSACaptureHandlerUsb() */
int _ZN7android26AudioALSACaptureHandlerUsbD1Ev(void);

/* Symbol: _ZN7android17WCNChipControllerD1Ev */
/* Demangled: android::WCNChipController::~WCNChipController() */
int _ZN7android17WCNChipControllerD1Ev(void);

/* Symbol: _ZN7android18SpeechPcmMixerBaseD0Ev */
/* Demangled: android::SpeechPcmMixerBase::~SpeechPcmMixerBase() */
int _ZN7android18SpeechPcmMixerBaseD0Ev(void);

/* Symbol: _ZN7android21AudioDspStreamManager12getDlLatencyEv */
/* Demangled: android::AudioDspStreamManager::getDlLatency() */
int _ZN7android21AudioDspStreamManager12getDlLatencyEv(void);

/* Symbol: _ZN7android17AudioALSAHardwareC2Ev */
/* Demangled: android::AudioALSAHardware::AudioALSAHardware() */
int _ZN7android17AudioALSAHardwareC2Ev(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderVoiceMixD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoiceMix::~AudioALSACaptureDataProviderVoiceMix() */
int _ZN7android36AudioALSACaptureDataProviderVoiceMixD1Ev(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSDD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::~AudioALSACaptureDataProviderBTCVSD() */
int _ZN7android34AudioALSACaptureDataProviderBTCVSDD2Ev(void);

/* Symbol: _ZNK7android6VectorIPNS_19DeviceCtlDescriptorEE12do_constructEPvj */
/* Demangled: android::Vector<android::DeviceCtlDescriptor*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_19DeviceCtlDescriptorEE12do_constructEPvj(void);

/* Symbol: _ZN7android22AudioSmartPaController13isDualSmartPAEv */
/* Demangled: android::AudioSmartPaController::isDualSmartPA() */
int _ZN7android22AudioSmartPaController13isDualSmartPAEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal17VideoTelephonyOffEv */
/* Demangled: android::SpeechDriverNormal::VideoTelephonyOff() */
int _ZN7android18SpeechDriverNormal17VideoTelephonyOffEv(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceULD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoiceUL::~AudioALSACaptureDataProviderVoiceUL() */
int _ZN7android35AudioALSACaptureDataProviderVoiceULD1Ev(void);

/* Symbol: _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmp37mAudioALSACodecDeviceOutExtSpeakerAmpE */
/* Demangled: android::AudioALSACodecDeviceOutExtSpeakerAmp::mAudioALSACodecDeviceOutExtSpeakerAmp */
extern void* _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmp37mAudioALSACodecDeviceOutExtSpeakerAmpE;

/* Symbol: _ZTVN7android22AudioMTKGainControllerE */
/* Demangled: vtable for android::AudioMTKGainController */
extern void* _ZTVN7android22AudioMTKGainControllerE;

/* Symbol: _ZN7android13audio_strncatEPcPKcj */
/* Demangled: android::audio_strncat(char*, char const*, unsigned int) */
int _ZN7android13audio_strncatEPcPKcj(void);

/* Symbol: _ZN7android19AudioALSAParamTuner20UniqueTuningInstanceE */
/* Demangled: android::AudioALSAParamTuner::UniqueTuningInstance */
extern void* _ZN7android19AudioALSAParamTuner20UniqueTuningInstanceE;

/* Symbol: _ZN7android21AudioALSADeviceParser23GetAllCompressAttributeEv */
/* Demangled: android::AudioALSADeviceParser::GetAllCompressAttribute() */
int _ZN7android21AudioALSADeviceParser23GetAllCompressAttributeEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController6mMixerE */
/* Demangled: android::AudioUSBPhoneCallController::mMixer */
extern void* _ZN7android27AudioUSBPhoneCallController6mMixerE;

/* Symbol: _ZN7android28AudioALSADeviceConfigManager32ApplyDeviceTurnoffSequenceByNameEPKc */
/* Demangled: android::AudioALSADeviceConfigManager::ApplyDeviceTurnoffSequenceByName(char const*) */
int _ZN7android28AudioALSADeviceConfigManager32ApplyDeviceTurnoffSequenceByNameEPKc(void);

/* Symbol: _ZN7android16AudioEventThreadC2ENS_14AudioEventTypeE */
/* Demangled: android::AudioEventThread::AudioEventThread(android::AudioEventType) */
int _ZN7android16AudioEventThreadC2ENS_14AudioEventTypeE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN7android11MixerTargetEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE14__erase_uniqueIjEEjRKT_ */
/* Demangled: unsigned int std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::MixerTarget*> > >::__erase_unique<unsigned int>(unsigned int const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN7android11MixerTargetEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE14__erase_uniqueIjEEjRKT_(void);

/* Symbol: _ZN7android17SpeechDriverDummyC1ENS_13modem_index_tE */
/* Demangled: android::SpeechDriverDummy::SpeechDriverDummy(android::modem_index_t) */
int _ZN7android17SpeechDriverDummyC1ENS_13modem_index_tE(void);

/* Symbol: _ZN7android15AudioPreProcess20clear_echo_referenceEP19echo_reference_itfe */
/* Demangled: android::AudioPreProcess::clear_echo_reference(echo_reference_itfe*) */
int _ZN7android15AudioPreProcess20clear_echo_referenceEP19echo_reference_itfe(void);

/* Symbol: _ZN7android19AudioALSAParamTuner11getInstanceEv */
/* Demangled: android::AudioALSAParamTuner::getInstance() */
int _ZN7android19AudioALSAParamTuner11getInstanceEv(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderVoice5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderVoice::close() */
int _ZN7android33AudioALSACaptureDataProviderVoice5closeEv(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderVoiceD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoice::~AudioALSACaptureDataProviderVoice() */
int _ZN7android33AudioALSACaptureDataProviderVoiceD0Ev(void);

/* Symbol: _ZN7android18AudioALSAStreamOut16syncPolicyDeviceEv */
/* Demangled: android::AudioALSAStreamOut::syncPolicyDevice() */
int _ZN7android18AudioALSAStreamOut16syncPolicyDeviceEv(void);

/* Symbol: _ZN7android16SpeechExtMemUSIPD1Ev */
/* Demangled: android::SpeechExtMemUSIP::~SpeechExtMemUSIP() */
int _ZN7android16SpeechExtMemUSIPD1Ev(void);

/* Symbol: _ZN7android17AudioALSAHardware18getInputBufferSizeEjii */
/* Demangled: android::AudioALSAHardware::getInputBufferSize(unsigned int, int, int) */
int _ZN7android17AudioALSAHardware18getInputBufferSizeEjii(void);

/* Symbol: _ZTVN7android29AudioALSAPlaybackHandlerVoiceE */
/* Demangled: vtable for android::AudioALSAPlaybackHandlerVoice */
extern void* _ZTVN7android29AudioALSAPlaybackHandlerVoiceE;

/* Symbol: _ZTVN7android31AudioALSACaptureDataProviderHAPE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderHAP */
extern void* _ZTVN7android31AudioALSACaptureDataProviderHAPE;

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager20applySettingSequenceENS_7String8E */
/* Demangled: android::AudioALSAHardwareResourceManager::applySettingSequence(android::String8) */
int _ZN7android32AudioALSAHardwareResourceManager20applySettingSequenceENS_7String8E(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager22setTVOutFileDescriptorEi */
/* Demangled: android::AudioALSAHardwareResourceManager::setTVOutFileDescriptor(int) */
int _ZN7android32AudioALSAHardwareResourceManager22setTVOutFileDescriptorEi(void);

/* Symbol: _ZN7android8AudioFtmC1Ev */
/* Demangled: android::AudioFtm::AudioFtm() */
int _ZN7android8AudioFtmC1Ev(void);

/* Symbol: _ZTSSt11logic_error */
/* Demangled: typeinfo name for std::logic_error */
extern void* _ZTSSt11logic_error;

/* Symbol: _ZN7android20GainTableParamParser18loadGainTableMapUlEv */
/* Demangled: android::GainTableParamParser::loadGainTableMapUl() */
int _ZN7android20GainTableParamParser18loadGainTableMapUlEv(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal4readEPvi */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::read(void*, int) */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal4readEPvi(void);

/* Symbol: _ZN7android12AudioFtmBase22SpecificBuildInMicTestEc */
/* Demangled: android::AudioFtmBase::SpecificBuildInMicTest(char) */
int _ZN7android12AudioFtmBase22SpecificBuildInMicTestEc(void);

/* Symbol: _ZTVN7android24AudioALSACodecDeviceBaseE */
/* Demangled: vtable for android::AudioALSACodecDeviceBase */
extern void* _ZTVN7android24AudioALSACodecDeviceBaseE;

/* Symbol: _ZN7android21SpeechMessengerNormal12getMdVersionEv */
/* Demangled: android::SpeechMessengerNormal::getMdVersion() */
int _ZN7android21SpeechMessengerNormal12getMdVersionEv(void);

/* Symbol: _ZN7android22AudioMTKGainController13getSceneIndexEPKc */
/* Demangled: android::AudioMTKGainController::getSceneIndex(char const*) */
int _ZN7android22AudioMTKGainController13getSceneIndexEPKc(void);

/* Symbol: _ZN7android14FormatTransferEiiPvj */
/* Demangled: android::FormatTransfer(int, int, void*, unsigned int) */
int _ZN7android14FormatTransferEiiPvj(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtv17recoveryKtvStatusEv */
/* Demangled: android::AudioALSAHandlerKtv::recoveryKtvStatus() */
int _ZN7android19AudioALSAHandlerKtv17recoveryKtvStatusEv(void);

/* Symbol: _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmpC1Ev */
/* Demangled: android::AudioALSACodecDeviceOutExtSpeakerAmp::AudioALSACodecDeviceOutExtSpeakerAmp() */
int _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmpC1Ev(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager15closeAddaOutputEv */
/* Demangled: android::AudioALSAHardwareResourceManager::closeAddaOutput() */
int _ZN7android32AudioALSAHardwareResourceManager15closeAddaOutputEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZN7android18SpeechDriverNormal27sendSpeechMessageAckToQueueEPNS_9sph_msg_tE */
/* Demangled: android::SpeechDriverNormal::sendSpeechMessageAckToQueue(android::sph_msg_t*) */
int _ZN7android18SpeechDriverNormal27sendSpeechMessageAckToQueueEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android18SpeechDriverNormal28cleanAllModemSideModemStatusEv */
/* Demangled: android::SpeechDriverNormal::cleanAllModemSideModemStatus() */
int _ZN7android18SpeechDriverNormal28cleanAllModemSideModemStatusEv(void);

/* Symbol: _ZN7android12AudioFtmBase15ATV_AudPlay_OffEv */
/* Demangled: android::AudioFtmBase::ATV_AudPlay_Off() */
int _ZN7android12AudioFtmBase15ATV_AudPlay_OffEv(void);

/* Symbol: _ZN7android17SpeechDriverDummy17CheckModemIsReadyEv */
/* Demangled: android::SpeechDriverDummy::CheckModemIsReady() */
int _ZN7android17SpeechDriverDummy17CheckModemIsReadyEv(void);

/* Symbol: _ZN7android8SPELayer14GetFeaCfgTableENS_8SPE_MODEE */
/* Demangled: android::SPELayer::GetFeaCfgTable(android::SPE_MODE) */
int _ZN7android8SPELayer14GetFeaCfgTableENS_8SPE_MODEE(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager11setSgenModeE11sgen_mode_t */
/* Demangled: android::AudioALSAHardwareResourceManager::setSgenMode(sgen_mode_t) */
int _ZN7android32AudioALSAHardwareResourceManager11setSgenModeE11sgen_mode_t(void);

/* Symbol: _ZN7android8AudioFtm11SineGenTestEc */
/* Demangled: android::AudioFtm::SineGenTest(char) */
int _ZN7android8AudioFtm11SineGenTestEc(void);

/* Symbol: _ZN7android8AudioFtm35PhoneMic_Receiver_Acoustic_LoopbackEiPii */
/* Demangled: android::AudioFtm::PhoneMic_Receiver_Acoustic_Loopback(int, int*, int) */
int _ZN7android8AudioFtm35PhoneMic_Receiver_Acoustic_LoopbackEiPii(void);

/* Symbol: _ZN7android18SpeechMessageQueue27waitUntilElementProcessDoneEjj */
/* Demangled: android::SpeechMessageQueue::waitUntilElementProcessDone(unsigned int, unsigned int) */
int _ZN7android18SpeechMessageQueue27waitUntilElementProcessDoneEjj(void);

/* Symbol: _ZNK7android18SpeechMessageQueue19getQueueNumElementsEv */
/* Demangled: android::SpeechMessageQueue::getQueueNumElements() const */
int _ZNK7android18SpeechMessageQueue19getQueueNumElementsEv(void);

/* Symbol: _ZN7android22AudioMTKGainController11linearToLogEi */
/* Demangled: android::AudioMTKGainController::linearToLog(int) */
int _ZN7android22AudioMTKGainController11linearToLogEi(void);

/* Symbol: _ZN7android24AudioThrottleTimeControlC1Ebjj */
/* Demangled: android::AudioThrottleTimeControl::AudioThrottleTimeControl(bool, unsigned int, unsigned int) */
int _ZN7android24AudioThrottleTimeControlC1Ebjj(void);

/* Symbol: _ZN7android23AudioEventThreadManager11getInstanceEv */
/* Demangled: android::AudioEventThreadManager::getInstance() */
int _ZN7android23AudioEventThreadManager11getInstanceEv(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController8setParamERKNS_7String8E */
/* Demangled: android::AudioALSASpeechPhoneCallController::setParam(android::String8 const&) */
int _ZN7android34AudioALSASpeechPhoneCallController8setParamERKNS_7String8E(void);

/* Symbol: _ZN7android18AudioALSAStreamOut9setVolumeEff */
/* Demangled: android::AudioALSAStreamOut::setVolume(float, float) */
int _ZN7android18AudioALSAStreamOut9setVolumeEff(void);

/* Symbol: _ZN7android18SpeechDriverNormal10sendIpcCmdEi */
/* Demangled: android::SpeechDriverNormal::sendIpcCmd(int) */
int _ZN7android18SpeechDriverNormal10sendIpcCmdEi(void);

/* Symbol: _ZN7android22AudioMTKGainController17isSpeakerCategoryE11GAIN_DEVICE */
/* Demangled: android::AudioMTKGainController::isSpeakerCategory(GAIN_DEVICE) */
int _ZN7android22AudioMTKGainController17isSpeakerCategoryE11GAIN_DEVICE(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderVoiceMix5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderVoiceMix::close() */
int _ZN7android36AudioALSACaptureDataProviderVoiceMix5closeEv(void);

/* Symbol: _ZN7android15LoopbackManager28GetInputDeviceByLoopbackTypeENS_10loopback_tE */
/* Demangled: android::LoopbackManager::GetInputDeviceByLoopbackType(android::loopback_t) */
int _ZN7android15LoopbackManager28GetInputDeviceByLoopbackTypeENS_10loopback_tE(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerAAudio15getMmapPositionEP19audio_mmap_position */
/* Demangled: android::AudioALSACaptureHandlerAAudio::getMmapPosition(audio_mmap_position*) */
int _ZN7android29AudioALSACaptureHandlerAAudio15getMmapPositionEP19audio_mmap_position(void);

/* Symbol: _ZN7android22AudioSmartPaController17updateSmartPaModeEi */
/* Demangled: android::AudioSmartPaController::updateSmartPaMode(int) */
int _ZN7android22AudioSmartPaController17updateSmartPaModeEi(void);

/* Symbol: _ZN7android27SpeechDataProcessingHandler11getInstanceEv */
/* Demangled: android::SpeechDataProcessingHandler::getInstance() */
int _ZN7android27SpeechDataProcessingHandler11getInstanceEv(void);

/* Symbol: _ZN7android15AudioPreProcess17removeAudioEffectEPP18effect_interface_s */
/* Demangled: android::AudioPreProcess::removeAudioEffect(effect_interface_s**) */
int _ZN7android15AudioPreProcess17removeAudioEffectEPP18effect_interface_s(void);

/* Symbol: _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread29ExtMD_btsco_cvsd_UL_Read_mainEv */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDThread::ExtMD_btsco_cvsd_UL_Read_main() */
int _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread29ExtMD_btsco_cvsd_UL_Read_mainEv(void);

/* Symbol: _ZN7android8SPELayer8SetRouteENS_9SPE_ROUTEE */
/* Demangled: android::SPELayer::SetRoute(android::SPE_ROUTE) */
int _ZN7android8SPELayer8SetRouteENS_9SPE_ROUTEE(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFastD2Ev */
/* Demangled: android::AudioALSAPlaybackHandlerFast::~AudioALSAPlaybackHandlerFast() */
int _ZN7android28AudioALSAPlaybackHandlerFastD2Ev(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBaseD1Ev */
/* Demangled: android::AudioALSACaptureHandlerBase::~AudioALSACaptureHandlerBase() */
int _ZN7android27AudioALSACaptureHandlerBaseD1Ev(void);

/* Symbol: _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitch5closeEv */
/* Demangled: android::AudioALSACodecDeviceOutReceiverSpeakerSwitch::close() */
int _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitch5closeEv(void);

/* Symbol: _ZN7android12AudioFtmBase19Audio_MATV_I2S_PlayEi */
/* Demangled: android::AudioFtmBase::Audio_MATV_I2S_Play(int) */
int _ZN7android12AudioFtmBase19Audio_MATV_I2S_PlayEi(void);

/* Symbol: _ZN7android16SpeechVMRecorder11configVmEplEb */
/* Demangled: android::SpeechVMRecorder::configVmEpl(bool) */
int _ZN7android16SpeechVMRecorder11configVmEplEb(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_equivalence_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_equivalence_class<char const*>(char const*, char const*, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_equivalence_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP24DestroyAurisysLibManagerEv */
/* Demangled: android::SpeechDriverOpenDSP::DestroyAurisysLibManager() */
int _ZN7android19SpeechDriverOpenDSP24DestroyAurisysLibManagerEv(void);

/* Symbol: _ZN7android34AUDIO_COMPENSATION_FILTER_LIB_PATHE */
/* Demangled: android::AUDIO_COMPENSATION_FILTER_LIB_PATH */
extern void* _ZN7android34AUDIO_COMPENSATION_FILTER_LIB_PATHE;

/* Symbol: _ZN7android26AudioALSACaptureHandlerAEC5closeEv */
/* Demangled: android::AudioALSACaptureHandlerAEC::close() */
int _ZN7android26AudioALSACaptureHandlerAEC5closeEv(void);

/* Symbol: _ZN7android17AudioALSAStreamIn5closeEv */
/* Demangled: android::AudioALSAStreamIn::close() */
int _ZN7android17AudioALSAStreamIn5closeEv(void);

/* Symbol: _ZN7android22AudioSmartPaController4initEv */
/* Demangled: android::AudioSmartPaController::init() */
int _ZN7android22AudioSmartPaController4initEv(void);

/* Symbol: _ZN7android21SpeechMessengerNormal17readSpeechMessageEPNS_9sph_msg_tE */
/* Demangled: android::SpeechMessengerNormal::readSpeechMessage(android::sph_msg_t*) */
int _ZN7android21SpeechMessengerNormal17readSpeechMessageEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android17SpeechParserGen95C2Ev */
/* Demangled: android::SpeechParserGen95::SpeechParserGen95() */
int _ZN7android17SpeechParserGen95C2Ev(void);

/* Symbol: _ZN7android17SpeechDriverDummy26SetAcousticLoopbackBtCodecEb */
/* Demangled: android::SpeechDriverDummy::SetAcousticLoopbackBtCodec(bool) */
int _ZN7android17SpeechDriverDummy26SetAcousticLoopbackBtCodecEb(void);

/* Symbol: _ZN7android19AudioALSAParamTuner19setPlaybackFileNameEPKc */
/* Demangled: android::AudioALSAParamTuner::setPlaybackFileName(char const*) */
int _ZN7android19AudioALSAParamTuner19setPlaybackFileNameEPKc(void);

/* Symbol: _ZN7android18AudioBTCVSDControl22BT_SCO_RX_SetCVSDInBufEPh */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_SetCVSDInBuf(unsigned char*) */
int _ZN7android18AudioBTCVSDControl22BT_SCO_RX_SetCVSDInBufEPh(void);

/* Symbol: audio_pool_buf_copy_to_linear */
/* Demangled: audio_pool_buf_copy_to_linear */
int audio_pool_buf_copy_to_linear(void);

/* Symbol: _ZN7android17AudioALSAHardware12xWayRec_ReadEPvi */
/* Demangled: android::AudioALSAHardware::xWayRec_Read(void*, int) */
int _ZN7android17AudioALSAHardware12xWayRec_ReadEPvi(void);

/* Symbol: _ZN7android22AudioALSAStreamManager14SetEMParameterEP26_AUDIO_CUSTOM_PARAM_STRUCT */
/* Demangled: android::AudioALSAStreamManager::SetEMParameter(_AUDIO_CUSTOM_PARAM_STRUCT*) */
int _ZN7android22AudioALSAStreamManager14SetEMParameterEP26_AUDIO_CUSTOM_PARAM_STRUCT(void);

/* Symbol: _ZN7android21AudioALSADeviceParser12AddPcmStringEPc */
/* Demangled: android::AudioALSADeviceParser::AddPcmString(char*) */
int _ZN7android21AudioALSADeviceParser12AddPcmStringEPc(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudio35mAudioALSACaptureDataProviderAAudioE */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::mAudioALSACaptureDataProviderAAudio */
extern void* _ZN7android34AudioALSACaptureDataProviderAAudio35mAudioALSACaptureDataProviderAAudioE;

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderDsp::readThread(void*) */
int _ZN7android31AudioALSACaptureDataProviderDsp10readThreadEPv(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffloadC2EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::AudioALSAPlaybackHandlerOffload(stream_attribute_t const*) */
int _ZN7android31AudioALSAPlaybackHandlerOffloadC2EPK18stream_attribute_t(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP9PCM2WayOnEb */
/* Demangled: android::SpeechDriverOpenDSP::PCM2WayOn(bool) */
int _ZN7android19SpeechDriverOpenDSP9PCM2WayOnEb(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffloadD2Ev */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::~AudioALSAPlaybackHandlerOffload() */
int _ZN7android31AudioALSAPlaybackHandlerOffloadD2Ev(void);

/* Symbol: _ZN7android19SpeechShareMemGen9516closeShareMemoryEv */
/* Demangled: android::SpeechShareMemGen95::closeShareMemory() */
int _ZN7android19SpeechShareMemGen9516closeShareMemoryEv(void);

/* Symbol: _ZN7android14streamoutfinalE */
/* Demangled: android::streamoutfinal */
extern void* _ZN7android14streamoutfinalE;

/* Symbol: _ZN7android20streamout_hcf_proptyE */
/* Demangled: android::streamout_hcf_propty */
extern void* _ZN7android20streamout_hcf_proptyE;

/* Symbol: _ZN7android10getAudioFOENS_7String8E */
/* Demangled: android::getAudioFO(android::String8) */
int _ZN7android10getAudioFOENS_7String8E(void);

/* Symbol: audio_ringbuf_rollback */
/* Demangled: audio_ringbuf_rollback */
int audio_ringbuf_rollback(void);

/* Symbol: _ZN7android21AudioALSAFMController11setFmVolumeEf */
/* Demangled: android::AudioALSAFMController::setFmVolume(float) */
int _ZN7android21AudioALSAFMController11setFmVolumeEf(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient28ApplyChannelRemixWithRingBufEPNS_7RingBufES2_ */
/* Demangled: android::AudioALSACaptureDataClient::ApplyChannelRemixWithRingBuf(android::RingBuf*, android::RingBuf*) */
int _ZN7android26AudioALSACaptureDataClient28ApplyChannelRemixWithRingBufEPNS_7RingBufES2_(void);

/* Symbol: _ZN7android32PROPERTY_KEY_PCM_MIXER_LOG_LEVELE */
/* Demangled: android::PROPERTY_KEY_PCM_MIXER_LOG_LEVEL */
extern void* _ZN7android32PROPERTY_KEY_PCM_MIXER_LOG_LEVELE;

/* Symbol: _ZTVN7android27AudioALSALoopbackControllerE */
/* Demangled: vtable for android::AudioALSALoopbackController */
extern void* _ZTVN7android27AudioALSALoopbackControllerE;

/* Symbol: _ZN7android18AudioALSAStreamOut3setEjPiPjS2_S1_j */
/* Demangled: android::AudioALSAStreamOut::set(unsigned int, int*, unsigned int*, unsigned int*, int*, unsigned int) */
int _ZN7android18AudioALSAStreamOut3setEjPiPjS2_S1_j(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP15SetSidetoneGainEs */
/* Demangled: android::SpeechDriverOpenDSP::SetSidetoneGain(short) */
int _ZN7android19SpeechDriverOpenDSP15SetSidetoneGainEs(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtv21set_task_pcmdump_infoEttPv */
/* Demangled: android::AudioALSAHandlerKtv::set_task_pcmdump_info(unsigned short, unsigned short, void*) */
int _ZN7android19AudioALSAHandlerKtv21set_task_pcmdump_infoEttPv(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController30updateDeviceInfoForVoiceWakeUpEv */
/* Demangled: android::AudioALSAVoiceWakeUpController::updateDeviceInfoForVoiceWakeUp() */
int _ZN7android30AudioALSAVoiceWakeUpController30updateDeviceInfoForVoiceWakeUpEv(void);

/* Symbol: _ZN7android14power_hal_hintENS_12PowerHalHintEb */
/* Demangled: android::power_hal_hint(android::PowerHalHint, bool) */
int _ZN7android14power_hal_hintENS_12PowerHalHintEb(void);

/* Symbol: _ZTVNSt3__112__match_charIcEE */
/* Demangled: vtable for std::__1::__match_char<char> */
extern void* _ZTVNSt3__112__match_charIcEE;

/* Symbol: _ZTVN7android38AudioALSACaptureDataProviderEchoRefUsbE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderEchoRefUsb */
extern void* _ZTVN7android38AudioALSACaptureDataProviderEchoRefUsbE;

/* Symbol: _ZN7android28AudioALSADeviceConfigManager36UniqueAlsaDeviceConfigParserInstanceE */
/* Demangled: android::AudioALSADeviceConfigManager::UniqueAlsaDeviceConfigParserInstance */
extern void* _ZN7android28AudioALSADeviceConfigManager36UniqueAlsaDeviceConfigParserInstanceE;

/* Symbol: _ZN7android18AudioALSAStreamOut17getRenderPositionEPj */
/* Demangled: android::AudioALSAStreamOut::getRenderPosition(unsigned int*) */
int _ZN7android18AudioALSAStreamOut17getRenderPositionEPj(void);

/* Symbol: _ZN7android20AudioCustParamClient9initParamEv */
/* Demangled: android::AudioCustParamClient::initParam() */
int _ZN7android20AudioCustParamClient9initParamEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<std::__1::__empty_state<char>*, std::__1::default_delete<std::__1::__empty_state<char> >, std::__1::allocator<std::__1::__empty_state<char> > > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPNS_13__empty_stateIcEENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: _ZN7android19SpeechDriverFactory30SetActiveModemIndexByAudioModeE12audio_mode_t */
/* Demangled: android::SpeechDriverFactory::SetActiveModemIndexByAudioMode(audio_mode_t) */
int _ZN7android19SpeechDriverFactory30SetActiveModemIndexByAudioModeE12audio_mode_t(void);

/* Symbol: _ZNK7android6VectorINS_8String16EE10do_destroyEPvj */
/* Demangled: android::Vector<android::String16>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_8String16EE10do_destroyEPvj(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderANC32mAudioALSACaptureDataProviderANCE */
/* Demangled: android::AudioALSACaptureDataProviderANC::mAudioALSACaptureDataProviderANC */
extern void* _ZN7android31AudioALSACaptureDataProviderANC32mAudioALSACaptureDataProviderANCE;

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager18stopOutputDevice_lEv */
/* Demangled: android::AudioALSAHardwareResourceManager::stopOutputDevice_l() */
int _ZN7android32AudioALSAHardwareResourceManager18stopOutputDevice_lEv(void);

/* Symbol: aurisys_create_lib_handler_list_xlink */
/* Demangled: aurisys_create_lib_handler_list_xlink */
int aurisys_create_lib_handler_list_xlink(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp5writeEPKvj */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::write(void const*, unsigned int) */
int _ZN7android27AudioALSAPlaybackHandlerDsp5writeEPKvj(void);

/* Symbol: _ZN7android18SpeechDriverNormal13SetUplinkGainEs */
/* Demangled: android::SpeechDriverNormal::SetUplinkGain(short) */
int _ZN7android18SpeechDriverNormal13SetUplinkGainEs(void);

/* Symbol: audio_get_timespec_monotonic */
/* Demangled: audio_get_timespec_monotonic */
int audio_get_timespec_monotonic(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP15updateCustSceneEPKc */
/* Demangled: android::SpeechDriverOpenDSP::updateCustScene(char const*) */
int _ZN7android19SpeechDriverOpenDSP15updateCustSceneEPKc(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE7__parseIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE7__parseIPKcEET_S7_S7_(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager12applyGain2HwEPNS_11NleHwInfo_tE */
/* Demangled: android::AudioALSAHyBridNLEManager::applyGain2Hw(android::NleHwInfo_t*) */
int _ZN7android25AudioALSAHyBridNLEManager12applyGain2HwEPNS_11NleHwInfo_tE(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController27throttleSetCompensateInRateEPNS_9USBStreamEji */
/* Demangled: android::AudioUSBPhoneCallController::throttleSetCompensateInRate(android::USBStream*, unsigned int, int) */
int _ZN7android27AudioUSBPhoneCallController27throttleSetCompensateInRateEPNS_9USBStreamEji(void);

/* Symbol: _ZN7android17AudioALSAStreamIn17setLowLatencyModeEb */
/* Demangled: android::AudioALSAStreamIn::setLowLatencyMode(bool) */
int _ZN7android17AudioALSAStreamIn17setLowLatencyModeEb(void);

/* Symbol: _ZNK7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::SpeechPcmMixerBaseBuffer*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient17IsNeedApplyVolumeEv */
/* Demangled: android::AudioALSACaptureDataClient::IsNeedApplyVolume() */
int _ZN7android26AudioALSACaptureDataClient17IsNeedApplyVolumeEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderHAPC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderHAP::AudioALSACaptureDataProviderHAP() */
int _ZN7android31AudioALSACaptureDataProviderHAPC2Ev(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient18getCapturePositionEPxS1_ */
/* Demangled: android::AudioALSACaptureDataClient::getCapturePosition(long long*, long long*) */
int _ZN7android26AudioALSACaptureDataClient18getCapturePositionEPxS1_(void);

/* Symbol: _ZN7android8AudioFtmD2Ev */
/* Demangled: android::AudioFtm::~AudioFtm() */
int _ZN7android8AudioFtmD2Ev(void);

/* Symbol: config_data_buf_by_ringbuf */
/* Demangled: config_data_buf_by_ringbuf */
int config_data_buf_by_ringbuf(void);

/* Symbol: _ZN7android21AudioDspStreamManager17mDspStreamManagerE */
/* Demangled: android::AudioDspStreamManager::mDspStreamManager */
extern void* _ZN7android21AudioDspStreamManager17mDspStreamManagerE;

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController17setTtyInOutDeviceEv */
/* Demangled: android::AudioALSASpeechPhoneCallController::setTtyInOutDevice() */
int _ZN7android34AudioALSASpeechPhoneCallController17setTtyInOutDeviceEv(void);

/* Symbol: _ZN7android19AudioALSAParamTuner7setModeEj */
/* Demangled: android::AudioALSAParamTuner::setMode(unsigned int) */
int _ZN7android19AudioALSAParamTuner7setModeEj(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFast12setFilterMngEPNS_21AudioMTKFilterManagerE */
/* Demangled: android::AudioALSAPlaybackHandlerFast::setFilterMng(android::AudioMTKFilterManager*) */
int _ZN7android28AudioALSAPlaybackHandlerFast12setFilterMngEPNS_21AudioMTKFilterManagerE(void);

/* Symbol: _ZN7android25AudioALSACaptureHandlerBT4openEv */
/* Demangled: android::AudioALSACaptureHandlerBT::open() */
int _ZN7android25AudioALSACaptureHandlerBT4openEv(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutEarphonePMICC1Ev */
/* Demangled: android::AudioALSACodecDeviceOutEarphonePMIC::AudioALSACodecDeviceOutEarphonePMIC() */
int _ZN7android35AudioALSACodecDeviceOutEarphonePMICC1Ev(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManager25GetDeviceDescriptorbynameEPKc */
/* Demangled: android::AudioALSADeviceConfigManager::GetDeviceDescriptorbyname(char const*) */
int _ZN7android28AudioALSADeviceConfigManager25GetDeviceDescriptorbynameEPKc(void);

/* Symbol: _ZN7android14AudioUSBCenter11getInstanceEv */
/* Demangled: android::AudioUSBCenter::getInstance() */
int _ZN7android14AudioUSBCenter11getInstanceEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl5getFdEv */
/* Demangled: android::AudioBTCVSDControl::getFd() */
int _ZN7android18AudioBTCVSDControl5getFdEv(void);

/* Symbol: _ZN7android21AudioDspStreamManager24getDspRawInHandlerEnableEj */
/* Demangled: android::AudioDspStreamManager::getDspRawInHandlerEnable(unsigned int) */
int _ZN7android21AudioDspStreamManager24getDspRawInHandlerEnableEj(void);

/* Symbol: _ZN7android8SPELayerD1Ev */
/* Demangled: android::SPELayer::~SPELayer() */
int _ZN7android8SPELayerD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::AudioALSAHardware::AudioHalPatch*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIPNS_17AudioALSAHardware13AudioHalPatchEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmpD2Ev */
/* Demangled: android::AudioALSACodecDeviceOutExtSpeakerAmp::~AudioALSACodecDeviceOutExtSpeakerAmp() */
int _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmpD2Ev(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudioD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::~AudioALSACaptureDataProviderAAudio() */
int _ZN7android34AudioALSACaptureDataProviderAAudioD1Ev(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerAAudio4initEv */
/* Demangled: android::AudioALSACaptureHandlerAAudio::init() */
int _ZN7android29AudioALSACaptureHandlerAAudio4initEv(void);

/* Symbol: _ZN7android18AudioALSAStreamOut20updateSourceMetadataEPK15source_metadata */
/* Demangled: android::AudioALSAStreamOut::updateSourceMetadata(source_metadata const*) */
int _ZN7android18AudioALSAStreamOut20updateSourceMetadataEPK15source_metadata(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN7android11MixerTargetEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, android::MixerTarget*> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, android::MixerTarget*>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjPN7android11MixerTargetEEENS_22__unordered_map_hasherIjS5_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS5_NS_8equal_toIjEELb1EEENS_9allocatorIS5_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_PvEEEE(void);

/* Symbol: _ZN7android23AudioMTKHeadSetMessager11SetHeadInitEv */
/* Demangled: android::AudioMTKHeadSetMessager::SetHeadInit() */
int _ZN7android23AudioMTKHeadSetMessager11SetHeadInitEv(void);

/* Symbol: _ZN7android15AudioPreProcess17get_capture_delayEjP21echo_reference_buffer */
/* Demangled: android::AudioPreProcess::get_capture_delay(unsigned int, echo_reference_buffer*) */
int _ZN7android15AudioPreProcess17get_capture_delayEjP21echo_reference_buffer(void);

/* Symbol: _ZNK7android6VectorIPNS_10BufferInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::BufferInfo*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_10BufferInfoEE7do_copyEPvPKvj(void);

/* Symbol: _ZTVN7android27AudioALSACaptureHandlerBaseE */
/* Demangled: vtable for android::AudioALSACaptureHandlerBase */
extern void* _ZTVN7android27AudioALSACaptureHandlerBaseE;

/* Symbol: _ZN7android12keypcmIO2DAIE */
/* Demangled: android::keypcmIO2DAI */
extern void* _ZN7android12keypcmIO2DAIE;

/* Symbol: _ZNKSt3__16__loopIcE12__exec_splitEbRNS_7__stateIcEE */
/* Demangled: std::__1::__loop<char>::__exec_split(bool, std::__1::__state<char>&) const */
int _ZNKSt3__16__loopIcE12__exec_splitEbRNS_7__stateIcEE(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerVoiceD1Ev */
/* Demangled: android::AudioALSAPlaybackHandlerVoice::~AudioALSAPlaybackHandlerVoice() */
int _ZN7android29AudioALSAPlaybackHandlerVoiceD1Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread10readyToRunEv */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDThread::readyToRun() */
int _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread10readyToRunEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl23BT_SCO_ExtMDGetBufCountENS_21EXTMD_BTSCO_DIRECTIONE */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMDGetBufCount(android::EXTMD_BTSCO_DIRECTION) */
int _ZN7android18AudioBTCVSDControl23BT_SCO_ExtMDGetBufCountENS_21EXTMD_BTSCO_DIRECTIONE(void);

/* Symbol: _ZN7android11dumpRingBufEPKcPNS_7RingBufE */
/* Demangled: android::dumpRingBuf(char const*, android::RingBuf*) */
int _ZN7android11dumpRingBufEPKcPNS_7RingBufE(void);

/* Symbol: _ZN7android29AudioALSASampleRateController11getInstanceEv */
/* Demangled: android::AudioALSASampleRateController::getInstance() */
int _ZN7android29AudioALSASampleRateController11getInstanceEv(void);

/* Symbol: _ZN7android22AudioMTKGainController23tuneGainForMasterVolumeEi12audio_mode_t11GAIN_DEVICE */
/* Demangled: android::AudioMTKGainController::tuneGainForMasterVolume(int, audio_mode_t, GAIN_DEVICE) */
int _ZN7android22AudioMTKGainController23tuneGainForMasterVolumeEi12audio_mode_t11GAIN_DEVICE(void);

/* Symbol: _ZN7android17WCNChipController27IsFMMergeInterfaceSupportedEv */
/* Demangled: android::WCNChipController::IsFMMergeInterfaceSupported() */
int _ZN7android17WCNChipController27IsFMMergeInterfaceSupportedEv(void);

/* Symbol: _ZN7android21AudioALSADeviceParser22GetPcmDriverparametersEPNS_19AudioPcmDeviceparamEP10pcm_params */
/* Demangled: android::AudioALSADeviceParser::GetPcmDriverparameters(android::AudioPcmDeviceparam*, pcm_params*) */
int _ZN7android21AudioALSADeviceParser22GetPcmDriverparametersEPNS_19AudioPcmDeviceparamEP10pcm_params(void);

/* Symbol: _ZN7android18keypcmMRGrxCaptureE */
/* Demangled: android::keypcmMRGrxCapture */
extern void* _ZN7android18keypcmMRGrxCaptureE;

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSD31isBufferTimeStampMatchEstimatedE8timespec */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::isBufferTimeStampMatchEstimated(timespec) */
int _ZN7android34AudioALSACaptureDataProviderBTCVSD31isBufferTimeStampMatchEstimatedE8timespec(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderHAP11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderHAP::getInstance() */
int _ZN7android31AudioALSACaptureDataProviderHAP11getInstanceEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager24CheckInputDevicePriorityEj */
/* Demangled: android::AudioALSAStreamManager::CheckInputDevicePriority(unsigned int) */
int _ZN7android22AudioALSAStreamManager24CheckInputDevicePriorityEj(void);

/* Symbol: _ZN7android16AudioBitTrueTest17testDumpWriteDataEP7__sFILEPKvj */
/* Demangled: android::AudioBitTrueTest::testDumpWriteData(__sFILE*, void const*, unsigned int) */
int _ZN7android16AudioBitTrueTest17testDumpWriteDataEP7__sFILEPKvj(void);

/* Symbol: create_aurisys_lib_manager */
/* Demangled: create_aurisys_lib_manager */
int create_aurisys_lib_manager(void);

/* Symbol: _ZN7android21SpeechMessengerNormal15openShareMemoryEv */
/* Demangled: android::SpeechMessengerNormal::openShareMemory() */
int _ZN7android21SpeechMessengerNormal15openShareMemoryEv(void);

/* Symbol: _ZN7android22AudioMTKGainControllerC2Ev */
/* Demangled: android::AudioMTKGainController::AudioMTKGainController() */
int _ZN7android22AudioMTKGainControllerC2Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager11getFmEnableEv */
/* Demangled: android::AudioALSAStreamManager::getFmEnable() */
int _ZN7android22AudioALSAStreamManager11getFmEnableEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBaseD1Ev */
/* Demangled: android::AudioALSAPlaybackHandlerBase::~AudioALSAPlaybackHandlerBase() */
int _ZN7android28AudioALSAPlaybackHandlerBaseD1Ev(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerBTSCOC1EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerBTSCO::AudioALSAPlaybackHandlerBTSCO(stream_attribute_t const*) */
int _ZN7android29AudioALSAPlaybackHandlerBTSCOC1EPK18stream_attribute_t(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager13getMicInverseEv */
/* Demangled: android::AudioALSAHardwareResourceManager::getMicInverse() */
int _ZN7android32AudioALSAHardwareResourceManager13getMicInverseEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManagerC1Ev */
/* Demangled: android::AudioALSAStreamManager::AudioALSAStreamManager() */
int _ZN7android22AudioALSAStreamManagerC1Ev(void);

/* Symbol: _ZN7android17AudioVIBSPKVsgGen7SineGenEss */
/* Demangled: android::AudioVIBSPKVsgGen::SineGen(short, short) */
int _ZN7android17AudioVIBSPKVsgGen7SineGenEss(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp11openApHwPcmEv */
/* Demangled: android::AudioALSACaptureDataProviderDsp::openApHwPcm() */
int _ZN7android31AudioALSACaptureDataProviderDsp11openApHwPcmEv(void);

/* Symbol: _ZN7android22AudioMTKGainController17SetHeadPhoneLGainEi */
/* Demangled: android::AudioMTKGainController::SetHeadPhoneLGain(int) */
int _ZN7android22AudioMTKGainController17SetHeadPhoneLGainEi(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP24ResetScpSideSpeechStatusENS_19modem_status_mask_tE */
/* Demangled: android::SpeechDriverOpenDSP::ResetScpSideSpeechStatus(android::modem_status_mask_t) */
int _ZN7android19SpeechDriverOpenDSP24ResetScpSideSpeechStatusENS_19modem_status_mask_tE(void);

/* Symbol: _ZN7android17AudioALSAHardware15getMasterVolumeEPf */
/* Demangled: android::AudioALSAHardware::getMasterVolume(float*) */
int _ZN7android17AudioALSAHardware15getMasterVolumeEPf(void);

/* Symbol: _ZN7android22AudioALSAStreamManager28routingOutputDevicePhoneCallEj */
/* Demangled: android::AudioALSAStreamManager::routingOutputDevicePhoneCall(unsigned int) */
int _ZN7android22AudioALSAStreamManager28routingOutputDevicePhoneCallEj(void);

/* Symbol: _ZTVNSt3__115__word_boundaryIcNS_12regex_traitsIcEEEE */
/* Demangled: vtable for std::__1::__word_boundary<char, std::__1::regex_traits<char> > */
extern void* _ZTVNSt3__115__word_boundaryIcNS_12regex_traitsIcEEEE;

/* Symbol: _ZTISt8bad_cast */
/* Demangled: typeinfo for std::bad_cast */
extern void* _ZTISt8bad_cast;

/* Symbol: _ZN7android16keypcmPlayback12E */
/* Demangled: android::keypcmPlayback12 */
extern void* _ZN7android16keypcmPlayback12E;

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixerC1EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::AudioALSAPlaybackHandlerMixer(stream_attribute_t const*) */
int _ZN7android29AudioALSAPlaybackHandlerMixerC1EPK18stream_attribute_t(void);

/* Symbol: _ZN7android20SpeechPcmMixerVoipRxC2Ev */
/* Demangled: android::SpeechPcmMixerVoipRx::SpeechPcmMixerVoipRx() */
int _ZN7android20SpeechPcmMixerVoipRxC2Ev(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_equivalence_classINS_11__wrap_iterIPKcEEEET_S9_S9_PNS_20__bracket_expressionIcS2_EE */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_equivalence_class<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE25__parse_equivalence_classINS_11__wrap_iterIPKcEEEET_S9_S9_PNS_20__bracket_expressionIcS2_EE(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFast14setScreenStateEbjjb */
/* Demangled: android::AudioALSAPlaybackHandlerFast::setScreenState(bool, unsigned int, unsigned int, bool) */
int _ZN7android28AudioALSAPlaybackHandlerFast14setScreenStateEbjjb(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase15initDataRingBufEj */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::initDataRingBuf(unsigned int) */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase15initDataRingBufEj(void);

/* Symbol: _ZN7android8AudioFtm25SetVibSpkCalibrationParamEPv */
/* Demangled: android::AudioFtm::SetVibSpkCalibrationParam(void*) */
int _ZN7android8AudioFtm25SetVibSpkCalibrationParamEPv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderDspRaw11adjustSpikeEv */
/* Demangled: android::AudioALSACaptureDataProviderDspRaw::adjustSpike() */
int _ZN7android34AudioALSACaptureDataProviderDspRaw11adjustSpikeEv(void);

/* Symbol: _ZN7android13audio_strncpyEPcPKcj */
/* Demangled: android::audio_strncpy(char*, char const*, unsigned int) */
int _ZN7android13audio_strncpyEPcPKcj(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController22updatePhysicalModemIdxE12audio_mode_t */
/* Demangled: android::AudioALSASpeechPhoneCallController::updatePhysicalModemIdx(audio_mode_t) */
int _ZN7android34AudioALSASpeechPhoneCallController22updatePhysicalModemIdxE12audio_mode_t(void);

/* Symbol: _ZTVN7android18SpeechPcmMixerBaseE */
/* Demangled: vtable for android::SpeechPcmMixerBase */
extern void* _ZTVN7android18SpeechPcmMixerBaseE;

/* Symbol: _ZTVN7android8Play2WayE */
/* Demangled: vtable for android::Play2Way */
extern void* _ZTVN7android8Play2WayE;

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo15SetForceMagiASREb */
/* Demangled: android::AudioSpeechEnhanceInfo::SetForceMagiASR(bool) */
int _ZN7android22AudioSpeechEnhanceInfo15SetForceMagiASREb(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerSyncIO4initEv */
/* Demangled: android::AudioALSACaptureHandlerSyncIO::init() */
int _ZN7android29AudioALSACaptureHandlerSyncIO4initEv(void);

/* Symbol: _ZN7android24AudioALSACodecDeviceBase24createCodecOutputDevicesEv */
/* Demangled: android::AudioALSACodecDeviceBase::createCodecOutputDevices() */
int _ZN7android24AudioALSACodecDeviceBase24createCodecOutputDevicesEv(void);

/* Symbol: _ZNK7android6VectorIPNS_18AudioALSAStreamOutEE10do_destroyEPvj */
/* Demangled: android::Vector<android::AudioALSAStreamOut*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_18AudioALSAStreamOutEE10do_destroyEPvj(void);

/* Symbol: _ZN7android17AudioALSAHardware21GetAudioEncodedBufferEij */
/* Demangled: android::AudioALSAHardware::GetAudioEncodedBuffer(int, unsigned int) */
int _ZN7android17AudioALSAHardware21GetAudioEncodedBufferEij(void);

/* Symbol: _ZN7android25AudioALSACaptureHandlerBTD1Ev */
/* Demangled: android::AudioALSACaptureHandlerBT::~AudioALSACaptureHandlerBT() */
int _ZN7android25AudioALSACaptureHandlerBTD1Ev(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderDspRaw35mAudioALSACaptureDataProviderDspRawE */
/* Demangled: android::AudioALSACaptureDataProviderDspRaw::mAudioALSACaptureDataProviderDspRaw */
extern void* _ZN7android34AudioALSACaptureDataProviderDspRaw35mAudioALSACaptureDataProviderDspRawE;

/* Symbol: _ZN7android34AudioALSACaptureDataProviderDspRawC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderDspRaw::AudioALSACaptureDataProviderDspRaw() */
int _ZN7android34AudioALSACaptureDataProviderDspRawC1Ev(void);

/* Symbol: _ZN7android15In64bitsProcessEv */
/* Demangled: android::In64bitsProcess() */
int _ZN7android15In64bitsProcessEv(void);

/* Symbol: _ZN7android17SpeechDriverDummy17VoiceMemoRecordOnEv */
/* Demangled: android::SpeechDriverDummy::VoiceMemoRecordOn() */
int _ZN7android17SpeechDriverDummy17VoiceMemoRecordOnEv(void);

/* Symbol: _ZN7android17AudioALSAHardware9dumpStateEiRKNS_6VectorINS_8String16EEE */
/* Demangled: android::AudioALSAHardware::dumpState(int, android::Vector<android::String16> const&) */
int _ZN7android17AudioALSAHardware9dumpStateEiRKNS_6VectorINS_8String16EEE(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFast22ChooseTargetSampleRateEjj */
/* Demangled: android::AudioALSAPlaybackHandlerFast::ChooseTargetSampleRate(unsigned int, unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerFast22ChooseTargetSampleRateEjj(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient21GetBesRecordRoutePathEv */
/* Demangled: android::AudioALSACaptureDataClient::GetBesRecordRoutePath() */
int _ZN7android26AudioALSACaptureDataClient21GetBesRecordRoutePathEv(void);

/* Symbol: _ZN7android15LoopbackManagerD0Ev */
/* Demangled: android::LoopbackManager::~LoopbackManager() */
int _ZN7android15LoopbackManagerD0Ev(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefUsbC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefUsb::AudioALSACaptureDataProviderEchoRefUsb() */
int _ZN7android38AudioALSACaptureDataProviderEchoRefUsbC1Ev(void);

/* Symbol: _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMICD0Ev */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerEarphonePMIC::~AudioALSACodecDeviceOutSpeakerEarphonePMIC() */
int _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMICD0Ev(void);

/* Symbol: _ZN7android17AudioMessengerIPID1Ev */
/* Demangled: android::AudioMessengerIPI::~AudioMessengerIPI() */
int _ZN7android17AudioMessengerIPID1Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager16GetBtHeadsetNameEv */
/* Demangled: android::AudioALSAStreamManager::GetBtHeadsetName() */
int _ZN7android22AudioALSAStreamManager16GetBtHeadsetNameEv(void);

/* Symbol: _ZNK7android6VectorIPNS_19DeviceCtlDescriptorEE10do_destroyEPvj */
/* Demangled: android::Vector<android::DeviceCtlDescriptor*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_19DeviceCtlDescriptorEE10do_destroyEPvj(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo11getInstanceEv */
/* Demangled: android::AudioSpeechEnhanceInfo::getInstance() */
int _ZN7android22AudioSpeechEnhanceInfo11getInstanceEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase12ClosePCMDumpEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::ClosePCMDump() */
int _ZN7android32AudioALSACaptureDataProviderBase12ClosePCMDumpEv(void);

/* Symbol: _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::__add_back_capacity() */
int _ZNSt3__15dequeINS_7__stateIcEENS_9allocatorIS2_EEE19__add_back_capacityEv(void);

/* Symbol: set_sw_mixer_log_mask */
/* Demangled: set_sw_mixer_log_mask */
int set_sw_mixer_log_mask(void);

/* Symbol: _ZTVN7android26AudioALSACaptureHandlerUsbE */
/* Demangled: vtable for android::AudioALSACaptureHandlerUsb */
extern void* _ZTVN7android26AudioALSACaptureHandlerUsbE;

/* Symbol: _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMIC4openEv */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerEarphonePMIC::open() */
int _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMIC4openEv(void);

/* Symbol: _ZN7android17AudioALSAStreamIn12closeWavDumpEv */
/* Demangled: android::AudioALSAStreamIn::closeWavDump() */
int _ZN7android17AudioALSAStreamIn12closeWavDumpEv(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo14GetDebugStatusEv */
/* Demangled: android::AudioSpeechEnhanceInfo::GetDebugStatus() */
int _ZN7android22AudioSpeechEnhanceInfo14GetDebugStatusEv(void);

/* Symbol: _ZN7android22AudioMTKGainController14GetOffloadGainEf */
/* Demangled: android::AudioMTKGainController::GetOffloadGain(float) */
int _ZN7android22AudioMTKGainController14GetOffloadGainEf(void);

/* Symbol: _ZN7android23keypcmPlaybackDspMixer1E */
/* Demangled: android::keypcmPlaybackDspMixer1 */
extern void* _ZN7android23keypcmPlaybackDspMixer1E;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager21getNleHwConfigByIndexEPj */
/* Demangled: android::AudioALSAHyBridNLEManager::getNleHwConfigByIndex(unsigned int*) */
int _ZN7android25AudioALSAHyBridNLEManager21getNleHwConfigByIndexEPj(void);

/* Symbol: _ZN7android16SpeechVMRecorderC1Ev */
/* Demangled: android::SpeechVMRecorder::SpeechVMRecorder() */
int _ZN7android16SpeechVMRecorderC1Ev(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerAAudioC2EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerAAudio::AudioALSACaptureHandlerAAudio(stream_attribute_t*) */
int _ZN7android29AudioALSACaptureHandlerAAudioC2EP18stream_attribute_t(void);

/* Symbol: _ZN7android18SpeechDriverNormal18VoiceMemoRecordOffEv */
/* Demangled: android::SpeechDriverNormal::VoiceMemoRecordOff() */
int _ZN7android18SpeechDriverNormal18VoiceMemoRecordOffEv(void);

/* Symbol: _ZN7android12SpeechConfigC1Ev */
/* Demangled: android::SpeechConfig::SpeechConfig() */
int _ZN7android12SpeechConfigC1Ev(void);

/* Symbol: adsp_register_feature */
/* Demangled: adsp_register_feature */
int adsp_register_feature(void);

/* Symbol: _ZN7android17AudioALSAStreamIn18getCapturePositionEPxS1_ */
/* Demangled: android::AudioALSAStreamIn::getCapturePosition(long long*, long long*) */
int _ZN7android17AudioALSAStreamIn18getCapturePositionEPxS1_(void);

/* Symbol: _ZN7android17AudioALSAStreamIn26isSupportConcurrencyInCallEv */
/* Demangled: android::AudioALSAStreamIn::isSupportConcurrencyInCall() */
int _ZN7android17AudioALSAStreamIn26isSupportConcurrencyInCallEv(void);

/* Symbol: _ZNK7android17AudioALSAStreamIn8channelsEv */
/* Demangled: android::AudioALSAStreamIn::channels() const */
int _ZNK7android17AudioALSAStreamIn8channelsEv(void);

/* Symbol: is_adsp_ready */
/* Demangled: is_adsp_ready */
int is_adsp_ready(void);

/* Symbol: _ZN7android15LoopbackManager29GetOutputDeviceByLoopbackTypeENS_10loopback_tENS_24loopback_output_device_tE */
/* Demangled: android::LoopbackManager::GetOutputDeviceByLoopbackType(android::loopback_t, android::loopback_output_device_t) */
int _ZN7android15LoopbackManager29GetOutputDeviceByLoopbackTypeENS_10loopback_tENS_24loopback_output_device_tE(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController20throttleSetSrcInRateEPNS_9USBStreamEj */
/* Demangled: android::AudioUSBPhoneCallController::throttleSetSrcInRate(android::USBStream*, unsigned int) */
int _ZN7android27AudioUSBPhoneCallController20throttleSetSrcInRateEPNS_9USBStreamEj(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerAEC4readEPvi */
/* Demangled: android::AudioALSACaptureHandlerAEC::read(void*, int) */
int _ZN7android26AudioALSACaptureHandlerAEC4readEPvi(void);

/* Symbol: _ZN7android15LoopbackManager15GetLoopbackTypeEv */
/* Demangled: android::LoopbackManager::GetLoopbackType() */
int _ZN7android15LoopbackManager15GetLoopbackTypeEv(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: audio_send_ipi_msg */
/* Demangled: audio_send_ipi_msg */
int audio_send_ipi_msg(void);

/* Symbol: _ZN7android18SpeechDriverNormal24SetSpeechEnhancementMaskERKNS_21sph_enh_mask_struct_tE */
/* Demangled: android::SpeechDriverNormal::SetSpeechEnhancementMask(android::sph_enh_mask_struct_t const&) */
int _ZN7android18SpeechDriverNormal24SetSpeechEnhancementMaskERKNS_21sph_enh_mask_struct_tE(void);

/* Symbol: _ZN7android21SpeechMessengerNormal17sendSpeechMessageEPNS_9sph_msg_tE */
/* Demangled: android::SpeechMessengerNormal::sendSpeechMessage(android::sph_msg_t*) */
int _ZN7android21SpeechMessengerNormal17sendSpeechMessageEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android15newMtkAudioLoudEjb */
/* Demangled: android::newMtkAudioLoud(unsigned int, bool) */
int _ZN7android15newMtkAudioLoudEjb(void);

/* Symbol: _ZN7android27SpeechEnhancementControllerD1Ev */
/* Demangled: android::SpeechEnhancementController::~SpeechEnhancementController() */
int _ZN7android27SpeechEnhancementControllerD1Ev(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsb5writeEPKvj */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::write(void const*, unsigned int) */
int _ZN7android27AudioALSAPlaybackHandlerUsb5writeEPKvj(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBase18getCapturePositionEPxS1_ */
/* Demangled: android::AudioALSACaptureHandlerBase::getCapturePosition(long long*, long long*) */
int _ZN7android27AudioALSACaptureHandlerBase18getCapturePositionEPxS1_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZN7android17WCNChipController18GetFmChipPowerInfoEv */
/* Demangled: android::WCNChipController::GetFmChipPowerInfo() */
int _ZN7android17WCNChipController18GetFmChipPowerInfoEv(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallControllerD1Ev */
/* Demangled: android::AudioALSASpeechPhoneCallController::~AudioALSASpeechPhoneCallController() */
int _ZN7android34AudioALSASpeechPhoneCallControllerD1Ev(void);

/* Symbol: _ZN7android21AudioALSADeviceParser16SetPcmCapabilityEPNS_21AudioDeviceDescriptorEPKc */
/* Demangled: android::AudioALSADeviceParser::SetPcmCapability(android::AudioDeviceDescriptor*, char const*) */
int _ZN7android21AudioALSADeviceParser16SetPcmCapabilityEPNS_21AudioDeviceDescriptorEPKc(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutEarphonePMICD2Ev */
/* Demangled: android::AudioALSACodecDeviceOutEarphonePMIC::~AudioALSACodecDeviceOutEarphonePMIC() */
int _ZN7android35AudioALSACodecDeviceOutEarphonePMICD2Ev(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController15doBitConversionEPNS_9USBStreamEPvjPS3_Pj */
/* Demangled: android::AudioUSBPhoneCallController::doBitConversion(android::USBStream*, void*, unsigned int, void**, unsigned int*) */
int _ZN7android27AudioUSBPhoneCallController15doBitConversionEPNS_9USBStreamEPvjPS3_Pj(void);

/* Symbol: _ZN7android17WCNChipController15InitAudioFMInfoEv */
/* Demangled: android::WCNChipController::InitAudioFMInfo() */
int _ZN7android17WCNChipController15InitAudioFMInfoEv(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController16setDynamicDlMuteEb */
/* Demangled: android::AudioALSASpeechPhoneCallController::setDynamicDlMute(bool) */
int _ZN7android34AudioALSASpeechPhoneCallController16setDynamicDlMuteEb(void);

/* Symbol: _ZN7android17AudioALSAHardware32setAudioParameterChangedCallbackEPFiPKcPvES3_ */
/* Demangled: android::AudioALSAHardware::setAudioParameterChangedCallback(int (*)(char const*, void*), void*) */
int _ZN7android17AudioALSAHardware32setAudioParameterChangedCallbackEPFiPKcPvES3_(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerAECD1Ev */
/* Demangled: android::AudioALSACaptureHandlerAEC::~AudioALSACaptureHandlerAEC() */
int _ZN7android26AudioALSACaptureHandlerAECD1Ev(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderFMRadio10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderFMRadio::readThread(void*) */
int _ZN7android35AudioALSACaptureDataProviderFMRadio10readThreadEPv(void);

/* Symbol: _ZN7android39AudioALSACaptureDataProviderEchoRefBase18resetTimeStampInfoEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBase::resetTimeStampInfo() */
int _ZN7android39AudioALSACaptureDataProviderEchoRefBase18resetTimeStampInfoEv(void);

/* Symbol: _ZN7android21AudioDspStreamManager20setAfeOutDspShareMemEjb */
/* Demangled: android::AudioDspStreamManager::setAfeOutDspShareMem(unsigned int, bool) */
int _ZN7android21AudioDspStreamManager20setAfeOutDspShareMemEjb(void);

/* Symbol: _ZN7android17WCNChipControllerC1Ev */
/* Demangled: android::WCNChipController::WCNChipController() */
int _ZN7android17WCNChipControllerC1Ev(void);

/* Symbol: _ZN7android8SPELayer11TimeCompareE8timespecS1_ */
/* Demangled: android::SPELayer::TimeCompare(timespec, timespec) */
int _ZN7android8SPELayer11TimeCompareE8timespecS1_(void);

/* Symbol: _ZN7android22AudioALSAStreamManager16openOutputStreamEjPiPjS2_S1_j */
/* Demangled: android::AudioALSAStreamManager::openOutputStream(unsigned int, int*, unsigned int*, unsigned int*, int*, unsigned int) */
int _ZN7android22AudioALSAStreamManager16openOutputStreamEjPiPjS2_S1_j(void);

/* Symbol: _ZTISt13runtime_error */
/* Demangled: typeinfo for std::runtime_error */
extern void* _ZTISt13runtime_error;

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase14signalPcmStartEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::signalPcmStart() */
int _ZN7android32AudioALSACaptureDataProviderBase14signalPcmStartEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP10sendIpcCmdEi */
/* Demangled: android::SpeechDriverOpenDSP::sendIpcCmd(int) */
int _ZN7android19SpeechDriverOpenDSP10sendIpcCmdEi(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderVoiceMixC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoiceMix::AudioALSACaptureDataProviderVoiceMix() */
int _ZN7android36AudioALSACaptureDataProviderVoiceMixC1Ev(void);

/* Symbol: _ZTVN7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEEE */
/* Demangled: vtable for android::SortedVector<android::SpeechPcmMixerBaseBuffer*> */
extern void* _ZTVN7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEEE;

/* Symbol: _ZN7android8SPELayer14SetFeaCfgTableENS_8SPE_MODEEi */
/* Demangled: android::SPELayer::SetFeaCfgTable(android::SPE_MODE, int) */
int _ZN7android8SPELayer14SetFeaCfgTableENS_8SPE_MODEEi(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSDC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::AudioALSACaptureDataProviderBTCVSD() */
int _ZN7android34AudioALSACaptureDataProviderBTCVSDC2Ev(void);

/* Symbol: _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE8__searchINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeE */
/* Demangled: bool std::__1::basic_regex<char, std::__1::regex_traits<char> >::__search<std::__1::allocator<std::__1::sub_match<char const*> > >(char const*, char const*, std::__1::match_results<char const*, std::__1::allocator<std::__1::sub_match<char const*> > >&, std::__1::regex_constants::match_flag_type) const */
int _ZNKSt3__111basic_regexIcNS_12regex_traitsIcEEE8__searchINS_9allocatorINS_9sub_matchIPKcEEEEEEbS8_S8_RNS_13match_resultsIS8_T_EENS_15regex_constants15match_flag_typeE(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerFast26GetLowJitterModeSampleRateEv */
/* Demangled: android::AudioALSAPlaybackHandlerFast::GetLowJitterModeSampleRate() */
int _ZN7android28AudioALSAPlaybackHandlerFast26GetLowJitterModeSampleRateEv(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceULC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoiceUL::AudioALSACaptureDataProviderVoiceUL() */
int _ZN7android35AudioALSACaptureDataProviderVoiceULC1Ev(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBase16createMmapBufferEiP22audio_mmap_buffer_info */
/* Demangled: android::AudioALSACaptureHandlerBase::createMmapBuffer(int, audio_mmap_buffer_info*) */
int _ZN7android27AudioALSACaptureHandlerBase16createMmapBufferEiP22audio_mmap_buffer_info(void);

/* Symbol: _ZN7android15streamin_proptyE */
/* Demangled: android::streamin_propty */
extern void* _ZN7android15streamin_proptyE;

/* Symbol: _ZN7android18SpeechDriverNormal18SetBtHeadsetNrecOnEb */
/* Demangled: android::SpeechDriverNormal::SetBtHeadsetNrecOn(bool) */
int _ZN7android18SpeechDriverNormal18SetBtHeadsetNrecOnEb(void);

/* Symbol: _ZN7android16streamhfp_proptyE */
/* Demangled: android::streamhfp_propty */
extern void* _ZN7android16streamhfp_proptyE;

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerVoice20updateStartTimeStampEv */
/* Demangled: android::AudioALSAPlaybackHandlerVoice::updateStartTimeStamp() */
int _ZN7android29AudioALSAPlaybackHandlerVoice20updateStartTimeStampEv(void);

/* Symbol: _ZN7android16AudioBitTrueTest12verifyThreadEPv */
/* Demangled: android::AudioBitTrueTest::verifyThread(void*) */
int _ZN7android16AudioBitTrueTest12verifyThreadEPv(void);

/* Symbol: _ZN7android18SpeechDriverNormal31sendSpeechMessageToModemWrapperEPvPNS_9sph_msg_tE */
/* Demangled: android::SpeechDriverNormal::sendSpeechMessageToModemWrapper(void*, android::sph_msg_t*) */
int _ZN7android18SpeechDriverNormal31sendSpeechMessageToModemWrapperEPvPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android12AudioFtmBase14ATV_AudPlay_OnEv */
/* Demangled: android::AudioFtmBase::ATV_AudPlay_On() */
int _ZN7android12AudioFtmBase14ATV_AudPlay_OnEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager22UpdateSpeechLpbkParamsEv */
/* Demangled: android::AudioALSAStreamManager::UpdateSpeechLpbkParams() */
int _ZN7android22AudioALSAStreamManager22UpdateSpeechLpbkParamsEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSACaptureDataProviderBase*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEE12do_constructEPvj(void);

/* Symbol: _ZN7android18SpeechDriverNormal9PCM2WayOnEb */
/* Demangled: android::SpeechDriverNormal::PCM2WayOn(bool) */
int _ZN7android18SpeechDriverNormal9PCM2WayOnEb(void);

/* Symbol: _ZN7android22AudioMTKGainController14SetSpeakerGainEi */
/* Demangled: android::AudioMTKGainController::SetSpeakerGain(int) */
int _ZN7android22AudioMTKGainController14SetSpeakerGainEi(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP19SetEnh1DownlinkGainEs */
/* Demangled: android::SpeechDriverOpenDSP::SetEnh1DownlinkGain(short) */
int _ZN7android19SpeechDriverOpenDSP19SetEnh1DownlinkGainEs(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSPD0Ev */
/* Demangled: android::SpeechDriverOpenDSP::~SpeechDriverOpenDSP() */
int _ZN7android19SpeechDriverOpenDSPD0Ev(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase16WritePcmDumpDataEPKvi */
/* Demangled: android::AudioALSAPlaybackHandlerBase::WritePcmDumpData(void const*, int) */
int _ZN7android28AudioALSAPlaybackHandlerBase16WritePcmDumpDataEPKvi(void);

/* Symbol: _ZN7android8SPELayer24GetDownlinkIntrStartTimeEv */
/* Demangled: android::SPELayer::GetDownlinkIntrStartTime() */
int _ZN7android8SPELayer24GetDownlinkIntrStartTimeEv(void);

/* Symbol: _ZN7android16SpeechExtMemUSIPC1Ev */
/* Demangled: android::SpeechExtMemUSIP::SpeechExtMemUSIP() */
int _ZN7android16SpeechExtMemUSIPC1Ev(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_RE_dupl_symbolINS_11__wrap_iterIPKcEEEET_S9_S9_PNS_16__owns_one_stateIcEEjj */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_RE_dupl_symbol<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>, std::__1::__owns_one_state<char>*, unsigned int, unsigned int) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE22__parse_RE_dupl_symbolINS_11__wrap_iterIPKcEEEET_S9_S9_PNS_16__owns_one_stateIcEEjj(void);

/* Symbol: _ZN7android22AudioALSAStreamManagerD2Ev */
/* Demangled: android::AudioALSAStreamManager::~AudioALSAStreamManager() */
int _ZN7android22AudioALSAStreamManagerD2Ev(void);

/* Symbol: _ZN7android18SpeechMessageQueue27notifyQueueToStopWaitingAckEv */
/* Demangled: android::SpeechMessageQueue::notifyQueueToStopWaitingAck() */
int _ZN7android18SpeechMessageQueue27notifyQueueToStopWaitingAckEv(void);

/* Symbol: _ZN7android8SPELayer12FlushBufferQEv */
/* Demangled: android::SPELayer::FlushBufferQ() */
int _ZN7android8SPELayer12FlushBufferQEv(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_assertionIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_assertion<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE17__parse_assertionIPKcEET_S7_S7_(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderEchoRef10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRef::readThread(void*) */
int _ZN7android35AudioALSACaptureDataProviderEchoRef10readThreadEPv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager17getNonSmartPATypeEv */
/* Demangled: android::AudioALSAHardwareResourceManager::getNonSmartPAType() */
int _ZN7android32AudioALSAHardwareResourceManager17getNonSmartPATypeEv(void);

/* Symbol: _ZN7android20AudioCustParamClient6deinitEv */
/* Demangled: android::AudioCustParamClient::deinit() */
int _ZN7android20AudioCustParamClient6deinitEv(void);

/* Symbol: audio_get_timespec_timeout */
/* Demangled: audio_get_timespec_timeout */
int audio_get_timespec_timeout(void);

/* Symbol: _ZN7android18SpeechDriverNormal16setPcmRecordTypeENS_19SpcRecordTypeStructE */
/* Demangled: android::SpeechDriverNormal::setPcmRecordType(android::SpcRecordTypeStruct) */
int _ZN7android18SpeechDriverNormal16setPcmRecordTypeENS_19SpcRecordTypeStructE(void);

/* Symbol: _ZTVN7android27SpeechEnhancementControllerE */
/* Demangled: vtable for android::SpeechEnhancementController */
extern void* _ZTVN7android27SpeechEnhancementControllerE;

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager20ramp2DigitalGainZeroEv */
/* Demangled: android::AudioALSAHyBridNLEManager::ramp2DigitalGainZero() */
int _ZN7android25AudioALSAHyBridNLEManager20ramp2DigitalGainZeroEv(void);

/* Symbol: _ZTVN7android38AudioALSACaptureDataProviderEchoRefExtE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderEchoRefExt */
extern void* _ZTVN7android38AudioALSACaptureDataProviderEchoRefExtE;

/* Symbol: _ZN7android18AudioALSAStreamOut11setCallBackEPFi23stream_callback_event_tPvS2_ES2_ */
/* Demangled: android::AudioALSAStreamOut::setCallBack(int (*)(stream_callback_event_t, void*, void*), void*) */
int _ZN7android18AudioALSAStreamOut11setCallBackEPFi23stream_callback_event_tPvS2_ES2_(void);

/* Symbol: _ZN7android17keypcmPlaybackDspE */
/* Demangled: android::keypcmPlaybackDsp */
extern void* _ZN7android17keypcmPlaybackDspE;

/* Symbol: _ZN7android22AudioMTKGainController14setVoiceVolumeEij */
/* Demangled: android::AudioMTKGainController::setVoiceVolume(int, unsigned int) */
int _ZN7android22AudioMTKGainController14setVoiceVolumeEij(void);

/* Symbol: _ZN7android17getAudioCheckListENS_7String8E */
/* Demangled: android::getAudioCheckList(android::String8) */
int _ZN7android17getAudioCheckListENS_7String8E(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_character_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_character_class<char const*>(char const*, char const*, std::__1::__bracket_expression<char, std::__1::regex_traits<char> >*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_character_classIPKcEET_S7_S7_PNS_20__bracket_expressionIcS2_EE(void);

/* Symbol: _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitch4openEv */
/* Demangled: android::AudioALSACodecDeviceOutReceiverSpeakerSwitch::open() */
int _ZN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitch4openEv(void);

/* Symbol: _ZN7android18AudioALSAStreamOut20mStreamOutHDMIStereoE */
/* Demangled: android::AudioALSAStreamOut::mStreamOutHDMIStereo */
extern void* _ZN7android18AudioALSAStreamOut20mStreamOutHDMIStereoE;

/* Symbol: _ZN7android34AudioALSACaptureDataProviderDspRawD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderDspRaw::~AudioALSACaptureDataProviderDspRaw() */
int _ZN7android34AudioALSACaptureDataProviderDspRawD2Ev(void);

/* Symbol: _ZN7android18SpeechDriverNormal14TelephonyTxOffEv */
/* Demangled: android::SpeechDriverNormal::TelephonyTxOff() */
int _ZN7android18SpeechDriverNormal14TelephonyTxOffEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase18deinitBitConverterEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::deinitBitConverter() */
int _ZN7android28AudioALSAPlaybackHandlerBase18deinitBitConverterEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController23setUSBInConnectionStateEjbii */
/* Demangled: android::AudioUSBPhoneCallController::setUSBInConnectionState(unsigned int, bool, int, int) */
int _ZN7android27AudioUSBPhoneCallController23setUSBInConnectionStateEjbii(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient19BesRecordPreprocessEPvj */
/* Demangled: android::AudioALSACaptureDataClient::BesRecordPreprocess(void*, unsigned int) */
int _ZN7android26AudioALSACaptureDataClient19BesRecordPreprocessEPvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<void*, android::IAudioALSACaptureDataClient*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEEE;

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefUsbD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefUsb::~AudioALSACaptureDataProviderEchoRefUsb() */
int _ZN7android38AudioALSACaptureDataProviderEchoRefUsbD2Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager15phoneCallReopenEv */
/* Demangled: android::AudioALSAStreamManager::phoneCallReopen() */
int _ZN7android22AudioALSAStreamManager15phoneCallReopenEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSACaptureHandlerBase*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: set_audio_dsp_recovery_mode */
/* Demangled: set_audio_dsp_recovery_mode */
int set_audio_dsp_recovery_mode(void);

/* Symbol: _ZN7android21AudioDspStreamManager10triggerDspEji */
/* Demangled: android::AudioDspStreamManager::triggerDsp(unsigned int, int) */
int _ZN7android21AudioDspStreamManager10triggerDspEji(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer23getPresentationPositionEyPyP8timespec */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::getPresentationPosition(unsigned long long, unsigned long long*, timespec*) */
int _ZN7android29AudioALSAPlaybackHandlerMixer23getPresentationPositionEyPyP8timespec(void);

/* Symbol: _ZN7android22AudioMTKGainController15setStreamVolumeEif */
/* Demangled: android::AudioMTKGainController::setStreamVolume(int, float) */
int _ZN7android22AudioMTKGainController15setStreamVolumeEif(void);

/* Symbol: _ZTVN7android33AudioALSACaptureDataProviderVoiceE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderVoice */
extern void* _ZTVN7android33AudioALSACaptureDataProviderVoiceE;

/* Symbol: _ZN7android27AudioUSBPhoneCallController14speechDLThreadEPv */
/* Demangled: android::AudioUSBPhoneCallController::speechDLThread(void*) */
int _ZN7android27AudioUSBPhoneCallController14speechDLThreadEPv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager12GetHACEnableEv */
/* Demangled: android::AudioALSAStreamManager::GetHACEnable() */
int _ZN7android22AudioALSAStreamManager12GetHACEnableEv(void);

/* Symbol: _ZN7android29AudioALSACaptureDataClientDsp23copyCaptureDataToClientENS_7RingBufE */
/* Demangled: android::AudioALSACaptureDataClientDsp::copyCaptureDataToClient(android::RingBuf) */
int _ZN7android29AudioALSACaptureDataClientDsp23copyCaptureDataToClientENS_7RingBufE(void);

/* Symbol: _ZN7android20GainTableParamParser18loadGainTableMapDlEv */
/* Demangled: android::GainTableParamParser::loadGainTableMapDl() */
int _ZN7android20GainTableParamParser18loadGainTableMapDlEv(void);

/* Symbol: aurisys_destroy_arsi_handlers */
/* Demangled: aurisys_destroy_arsi_handlers */
int aurisys_destroy_arsi_handlers(void);

/* Symbol: _ZN7android20SpeechPcmMixerVoipRx7mVoipRxE */
/* Demangled: android::SpeechPcmMixerVoipRx::mVoipRx */
extern void* _ZN7android20SpeechPcmMixerVoipRx7mVoipRxE;

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase18initPostProcessingEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::initPostProcessing() */
int _ZN7android28AudioALSAPlaybackHandlerBase18initPostProcessingEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl24BT_SCO_ExtMD_ULBuf_CloseEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_ExtMD_ULBuf_Close() */
int _ZN7android18AudioBTCVSDControl24BT_SCO_ExtMD_ULBuf_CloseEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadD1Ev */
/* Demangled: android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread::~AudioBTCVSDLoopbackRxThread() */
int _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadD1Ev(void);

/* Symbol: _ZN7android21AudioDspStreamManager24getDspTaskPlaybackStatusEv */
/* Demangled: android::AudioDspStreamManager::getDspTaskPlaybackStatus() */
int _ZN7android21AudioDspStreamManager24getDspTaskPlaybackStatusEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal15getUsbDelayTimeEPh */
/* Demangled: android::SpeechDriverNormal::getUsbDelayTime(unsigned char*) */
int _ZN7android18SpeechDriverNormal15getUsbDelayTimeEPh(void);

/* Symbol: _ZN7android17AudioALSAHardware22SetHCFPreviewParameterEPvi */
/* Demangled: android::AudioALSAHardware::SetHCFPreviewParameter(void*, int) */
int _ZN7android17AudioALSAHardware22SetHCFPreviewParameterEPvi(void);

/* Symbol: _ZN7android30AudioALSACaptureHandlerFMRadioD0Ev */
/* Demangled: android::AudioALSACaptureHandlerFMRadio::~AudioALSACaptureHandlerFMRadio() */
int _ZN7android30AudioALSACaptureHandlerFMRadioD0Ev(void);

/* Symbol: _ZN7android27AudioALSALoopbackController28mAudioALSALoopbackControllerE */
/* Demangled: android::AudioALSALoopbackController::mAudioALSALoopbackController */
extern void* _ZN7android27AudioALSALoopbackController28mAudioALSALoopbackControllerE;

/* Symbol: _ZN7android16SpeechVMRecorderD2Ev */
/* Demangled: android::SpeechVMRecorder::~SpeechVMRecorder() */
int _ZN7android16SpeechVMRecorderD2Ev(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerDsp5closeEv */
/* Demangled: android::AudioALSACaptureHandlerDsp::close() */
int _ZN7android26AudioALSACaptureHandlerDsp5closeEv(void);

/* Symbol: _ZN7android11getSyncTypeEt */
/* Demangled: android::getSyncType(unsigned short) */
int _ZN7android11getSyncTypeEt(void);

/* Symbol: _ZN7android12SpeechConfigD2Ev */
/* Demangled: android::SpeechConfig::~SpeechConfig() */
int _ZN7android12SpeechConfigD2Ev(void);

/* Symbol: _ZN7android22set_string_to_propertyEPKcS1_ */
/* Demangled: android::set_string_to_property(char const*, char const*) */
int _ZN7android22set_string_to_propertyEPKcS1_(void);

/* Symbol: _ZN7android8AudioFtm22SpecificBuildInMicTestEc */
/* Demangled: android::AudioFtm::SpecificBuildInMicTest(char) */
int _ZN7android8AudioFtm22SpecificBuildInMicTestEc(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudio5startEv */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::start() */
int _ZN7android34AudioALSACaptureDataProviderAAudio5startEv(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient21UpdateDynamicFunctionEv */
/* Demangled: android::AudioALSACaptureDataClient::UpdateDynamicFunction() */
int _ZN7android26AudioALSACaptureDataClient21UpdateDynamicFunctionEv(void);

/* Symbol: _ZN7android16AudioEventThreadC1ENS_14AudioEventTypeE */
/* Demangled: android::AudioEventThread::AudioEventThread(android::AudioEventType) */
int _ZN7android16AudioEventThreadC1ENS_14AudioEventTypeE(void);

/* Symbol: _ZN7android16AudioEventThreadD2Ev */
/* Demangled: android::AudioEventThread::~AudioEventThread() */
int _ZN7android16AudioEventThreadD2Ev(void);

/* Symbol: _ZN7android22AudioMTKGainController18ApplyMicGainForTtyE12audio_mode_t */
/* Demangled: android::AudioMTKGainController::ApplyMicGainForTty(audio_mode_t) */
int _ZN7android22AudioMTKGainController18ApplyMicGainForTtyE12audio_mode_t(void);

/* Symbol: _ZN7android28AudioALSADeviceConfigManager15setMixerByteCtlEP9mixer_ctlPPcj */
/* Demangled: android::AudioALSADeviceConfigManager::setMixerByteCtl(mixer_ctl*, char**, unsigned int) */
int _ZN7android28AudioALSADeviceConfigManager15setMixerByteCtlEP9mixer_ctlPPcj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager13setHdmiEnableEb */
/* Demangled: android::AudioALSAStreamManager::setHdmiEnable(bool) */
int _ZN7android22AudioALSAStreamManager13setHdmiEnableEb(void);

/* Symbol: _ZTVN7android16SpeechExtMemUSIPE */
/* Demangled: vtable for android::SpeechExtMemUSIP */
extern void* _ZTVN7android16SpeechExtMemUSIPE;

/* Symbol: _ZN7android22AudioMTKGainController13getGainDeviceEj */
/* Demangled: android::AudioMTKGainController::getGainDevice(unsigned int) */
int _ZN7android22AudioMTKGainController13getGainDeviceEj(void);

/* Symbol: _ZN7android30AudioALSACaptureHandlerFMRadioC2EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerFMRadio::AudioALSACaptureHandlerFMRadio(stream_attribute_t*) */
int _ZN7android30AudioALSACaptureHandlerFMRadioC2EP18stream_attribute_t(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderUsb10prepareUsbEv */
/* Demangled: android::AudioALSACaptureDataProviderUsb::prepareUsb() */
int _ZN7android31AudioALSACaptureDataProviderUsb10prepareUsbEv(void);

/* Symbol: _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadD0Ev */
/* Demangled: android::AudioALSALoopbackController::AudioMTKLoopbackThread::~AudioMTKLoopbackThread() */
int _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadD0Ev(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _ZN7android23keypcmPlaybackDspMixer2E */
/* Demangled: android::keypcmPlaybackDspMixer2 */
extern void* _ZN7android23keypcmPlaybackDspMixer2E;

/* Symbol: _ZN7android22AudioALSADataProcessorD0Ev */
/* Demangled: android::AudioALSADataProcessor::~AudioALSADataProcessor() */
int _ZN7android22AudioALSADataProcessorD0Ev(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerUsbD2Ev */
/* Demangled: android::AudioALSACaptureHandlerUsb::~AudioALSACaptureHandlerUsb() */
int _ZN7android26AudioALSACaptureHandlerUsbD2Ev(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase11OpenPCMDumpEPKc */
/* Demangled: android::AudioALSACaptureDataProviderBase::OpenPCMDump(char const*) */
int _ZN7android32AudioALSACaptureDataProviderBase11OpenPCMDumpEPKc(void);

/* Symbol: _ZN7android17WCNChipControllerD2Ev */
/* Demangled: android::WCNChipController::~WCNChipController() */
int _ZN7android17WCNChipControllerD2Ev(void);

/* Symbol: _ZN7android18SpeechPcmMixerBaseD1Ev */
/* Demangled: android::SpeechPcmMixerBase::~SpeechPcmMixerBase() */
int _ZN7android18SpeechPcmMixerBaseD1Ev(void);

/* Symbol: _ZTVNSt3__111__alternateIcEE */
/* Demangled: vtable for std::__1::__alternate<char> */
extern void* _ZTVNSt3__111__alternateIcEE;

/* Symbol: _ZN7android8AudioFtm13LouderSPKTestEcc */
/* Demangled: android::AudioFtm::LouderSPKTest(char, char) */
int _ZN7android8AudioFtm13LouderSPKTestEcc(void);

/* Symbol: _ZN7android23AudioEventThreadManager14notifyCallbackENS_14AudioEventTypeEPv */
/* Demangled: android::AudioEventThreadManager::notifyCallback(android::AudioEventType, void*) */
int _ZN7android23AudioEventThreadManager14notifyCallbackENS_14AudioEventTypeEPv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase15mDumpFileNumDSPE */
/* Demangled: android::AudioALSAPlaybackHandlerBase::mDumpFileNumDSP */
extern void* _ZN7android28AudioALSAPlaybackHandlerBase15mDumpFileNumDSPE;

/* Symbol: _ZN7android36AudioALSACaptureDataProviderVoiceMixD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoiceMix::~AudioALSACaptureDataProviderVoiceMix() */
int _ZN7android36AudioALSACaptureDataProviderVoiceMixD2Ev(void);

/* Symbol: _ZN7android16AudioBitTrueTest12testDumpOpenEPKcS2_ */
/* Demangled: android::AudioBitTrueTest::testDumpOpen(char const*, char const*) */
int _ZN7android16AudioBitTrueTest12testDumpOpenEPKcS2_(void);

/* Symbol: _ZN7android8Play2Way11GetInstanceEv */
/* Demangled: android::Play2Way::GetInstance() */
int _ZN7android8Play2Way11GetInstanceEv(void);

/* Symbol: _ZN7android19SpeechShareMemGen95D0Ev */
/* Demangled: android::SpeechShareMemGen95::~SpeechShareMemGen95() */
int _ZN7android19SpeechShareMemGen95D0Ev(void);

/* Symbol: _ZN7android15keypcmPlayback1E */
/* Demangled: android::keypcmPlayback1 */
extern void* _ZN7android15keypcmPlayback1E;

/* Symbol: _ZN7android18SpeechDriverNormal26readSpeechMessageFromModemEPNS_9sph_msg_tE */
/* Demangled: android::SpeechDriverNormal::readSpeechMessageFromModem(android::sph_msg_t*) */
int _ZN7android18SpeechDriverNormal26readSpeechMessageFromModemEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP17VideoTelephonyOffEv */
/* Demangled: android::SpeechDriverOpenDSP::VideoTelephonyOff() */
int _ZN7android19SpeechDriverOpenDSP17VideoTelephonyOffEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void);

/* Symbol: _ZN7android16keypcmUl2CaptureE */
/* Demangled: android::keypcmUl2Capture */
extern void* _ZN7android16keypcmUl2CaptureE;

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceULD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoiceUL::~AudioALSACaptureDataProviderVoiceUL() */
int _ZN7android35AudioALSACaptureDataProviderVoiceULD2Ev(void);

/* Symbol: _ZN7android18SpeechDriverNormal12getParameterEPKc */
/* Demangled: android::SpeechDriverNormal::getParameter(char const*) */
int _ZN7android18SpeechDriverNormal12getParameterEPKc(void);

/* Symbol: _ZN7android18SpeechDriverNormal19processModemMessageEPNS_9sph_msg_tE */
/* Demangled: android::SpeechDriverNormal::processModemMessage(android::sph_msg_t*) */
int _ZN7android18SpeechDriverNormal19processModemMessageEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android20GainTableParamParser13isInSceneListEPNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEES8_ */
/* Demangled: android::GainTableParamParser::isInSceneList(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN7android20GainTableParamParser13isInSceneListEPNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEES8_(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP9recordOffEv */
/* Demangled: android::SpeechDriverOpenDSP::recordOff() */
int _ZN7android19SpeechDriverOpenDSP9recordOffEv(void);

/* Symbol: _ZN7android15AudioPreProcess19stop_echo_referenceEP19echo_reference_itfe */
/* Demangled: android::AudioPreProcess::stop_echo_reference(echo_reference_itfe*) */
int _ZN7android15AudioPreProcess19stop_echo_referenceEP19echo_reference_itfe(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerUsb7routingEj */
/* Demangled: android::AudioALSACaptureHandlerUsb::routing(unsigned int) */
int _ZN7android26AudioALSACaptureHandlerUsb7routingEj(void);

/* Symbol: _ZNK7android18AudioALSAStreamOut6formatEv */
/* Demangled: android::AudioALSAStreamOut::format() const */
int _ZNK7android18AudioALSAStreamOut6formatEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioMTKFilterManager*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEE12do_constructEPvj(void);

/* Symbol: _ZN7android21SpeechMessengerNormal26checkCcciStatusAndRecoveryEv */
/* Demangled: android::SpeechMessengerNormal::checkCcciStatusAndRecovery() */
int _ZN7android21SpeechMessengerNormal26checkCcciStatusAndRecoveryEv(void);

/* Symbol: _ZTVN7android12AudioFtmBaseE */
/* Demangled: vtable for android::AudioFtmBase */
extern void* _ZTVN7android12AudioFtmBaseE;

/* Symbol: _ZN7android21callbackVowXmlChangedEP10_AppHandlePKc */
/* Demangled: android::callbackVowXmlChanged(_AppHandle*, char const*) */
int _ZN7android21callbackVowXmlChangedEP10_AppHandlePKc(void);

/* Symbol: _ZN7android18SpeechDriverNormal17processModemAliveEPNS_9sph_msg_tE */
/* Demangled: android::SpeechDriverNormal::processModemAlive(android::sph_msg_t*) */
int _ZN7android18SpeechDriverNormal17processModemAliveEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android18SpeechShareMemBase14createInstanceEv */
/* Demangled: android::SpeechShareMemBase::createInstance() */
int _ZN7android18SpeechShareMemBase14createInstanceEv(void);

/* Symbol: _ZN7android12AudioFtmBase12RecieverTestEc */
/* Demangled: android::AudioFtmBase::RecieverTest(char) */
int _ZN7android12AudioFtmBase12RecieverTestEc(void);

/* Symbol: _ZN7android8AudioFtm26GetVibSpkCalibrationStatusEv */
/* Demangled: android::AudioFtm::GetVibSpkCalibrationStatus() */
int _ZN7android8AudioFtm26GetVibSpkCalibrationStatusEv(void);

/* Symbol: aurisys_arsi_create_handler */
/* Demangled: aurisys_arsi_create_handler */
int aurisys_arsi_create_handler(void);

/* Symbol: _ZN7android27SpeechEnhancementController9SetSMNROnEv */
/* Demangled: android::SpeechEnhancementController::SetSMNROn() */
int _ZN7android27SpeechEnhancementController9SetSMNROnEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataClientSyncIO13processThreadEPv */
/* Demangled: android::AudioALSACaptureDataClientSyncIO::processThread(void*) */
int _ZN7android32AudioALSACaptureDataClientSyncIO13processThreadEPv(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderVoiceD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoice::~AudioALSACaptureDataProviderVoice() */
int _ZN7android33AudioALSACaptureDataProviderVoiceD1Ev(void);

/* Symbol: _ZN7android24keypcmHostlessSRCBargeinE */
/* Demangled: android::keypcmHostlessSRCBargein */
extern void* _ZN7android24keypcmHostlessSRCBargeinE;

/* Symbol: _ZN7android16SpeechExtMemUSIPD2Ev */
/* Demangled: android::SpeechExtMemUSIP::~SpeechExtMemUSIP() */
int _ZN7android16SpeechExtMemUSIPD2Ev(void);

/* Symbol: audio_ringbuf_compensate_value */
/* Demangled: audio_ringbuf_compensate_value */
int audio_ringbuf_compensate_value(void);

/* Symbol: _ZN7android22AudioALSAStreamManager29SetBesLoudnessControlCallbackEPK36_BESLOUDNESS_CONTROL_CALLBACK_STRUCT */
/* Demangled: android::AudioALSAStreamManager::SetBesLoudnessControlCallback(_BESLOUDNESS_CONTROL_CALLBACK_STRUCT const*) */
int _ZN7android22AudioALSAStreamManager29SetBesLoudnessControlCallbackEPK36_BESLOUDNESS_CONTROL_CALLBACK_STRUCT(void);

/* Symbol: _ZN7android22AudioALSAStreamManager17audioDspReadyWrapEPv */
/* Demangled: android::AudioALSAStreamManager::audioDspReadyWrap(void*) */
int _ZN7android22AudioALSAStreamManager17audioDspReadyWrapEPv(void);

/* Symbol: _ZN7android8AudioFtmC2Ev */
/* Demangled: android::AudioFtm::AudioFtm() */
int _ZN7android8AudioFtmC2Ev(void);

/* Symbol: _ZN7android21AudioDspStreamManager11startDeviceEj */
/* Demangled: android::AudioDspStreamManager::startDevice(unsigned int) */
int _ZN7android21AudioDspStreamManager11startDeviceEj(void);

/* Symbol: _ZN7android11dumpMicInfoEP33audio_microphone_characteristic_tj */
/* Demangled: android::dumpMicInfo(audio_microphone_characteristic_t*, unsigned int) */
int _ZN7android11dumpMicInfoEP33audio_microphone_characteristic_tj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEE7do_copyES2_PKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<void*, android::IAudioALSACaptureDataClient*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvPNS_27IAudioALSACaptureDataClientEEEE7do_copyES2_PKvj(void);

/* Symbol: _ZN7android18SpeechMessageQueue24errorHandleSpeechMessageEPNS_9sph_msg_tE */
/* Demangled: android::SpeechMessageQueue::errorHandleSpeechMessage(android::sph_msg_t*) */
int _ZN7android18SpeechMessageQueue24errorHandleSpeechMessageEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormal13processThreadEPv */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::processThread(void*) */
int _ZN7android39AudioALSACaptureDataClientAurisysNormal13processThreadEPv(void);

/* Symbol: _ZNK7android21AudioALSAFMController21isPreferredSampleRateEj */
/* Demangled: android::AudioALSAFMController::isPreferredSampleRate(unsigned int) const */
int _ZNK7android21AudioALSAFMController21isPreferredSampleRateEj(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBaseD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderBase::~AudioALSACaptureDataProviderBase() */
int _ZN7android32AudioALSACaptureDataProviderBaseD0Ev(void);

/* Symbol: _ZN7android17AudioALSAStreamIn7setGainEf */
/* Demangled: android::AudioALSAStreamIn::setGain(float) */
int _ZN7android17AudioALSAStreamIn7setGainEf(void);

/* Symbol: _ZN7android16keypcmVoiceMD2BTE */
/* Demangled: android::keypcmVoiceMD2BT */
extern void* _ZN7android16keypcmVoiceMD2BTE;

/* Symbol: _ZN7android17WCNChipController21GetFmChipSamplingRateEv */
/* Demangled: android::WCNChipController::GetFmChipSamplingRate() */
int _ZN7android17WCNChipController21GetFmChipSamplingRateEv(void);

/* Symbol: _ZN7android8SPELayerC1Ev */
/* Demangled: android::SPELayer::SPELayer() */
int _ZN7android8SPELayerC1Ev(void);

/* Symbol: _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmpC2Ev */
/* Demangled: android::AudioALSACodecDeviceOutExtSpeakerAmp::AudioALSACodecDeviceOutExtSpeakerAmp() */
int _ZN7android36AudioALSACodecDeviceOutExtSpeakerAmpC2Ev(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudioC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::AudioALSACaptureDataProviderAAudio() */
int _ZN7android34AudioALSACaptureDataProviderAAudioC1Ev(void);

/* Symbol: _ZN7android17AudioALSAHardware17setMiSoundLimiterEv */
/* Demangled: android::AudioALSAHardware::setMiSoundLimiter() */
int _ZN7android17AudioALSAHardware17setMiSoundLimiterEv(void);

/* Symbol: _ZN7android31PROPERTY_KEY_PCM_MIXER_NO_SLEEPE */
/* Demangled: android::PROPERTY_KEY_PCM_MIXER_NO_SLEEP */
extern void* _ZN7android31PROPERTY_KEY_PCM_MIXER_NO_SLEEPE;

/* Symbol: _ZN7android29AudioALSACaptureHandlerAAudioC1EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerAAudio::AudioALSACaptureHandlerAAudio(stream_attribute_t*) */
int _ZN7android29AudioALSACaptureHandlerAAudioC1EP18stream_attribute_t(void);

/* Symbol: _ZN7android32AudioALSACaptureDataClientSyncIOC1EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureDataClientSyncIO::AudioALSACaptureDataClientSyncIO(android::AudioALSACaptureDataProviderBase*, stream_attribute_t*) */
int _ZN7android32AudioALSACaptureDataClientSyncIOC1EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t(void);

/* Symbol: _ZNK7android6VectorIPNS_21AudioDeviceDescriptorEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::AudioDeviceDescriptor*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_21AudioDeviceDescriptorEE8do_splatEPvPKvj(void);

/* Symbol: g_read_adsp_thread_enable */
/* Demangled: g_read_adsp_thread_enable */
extern void* g_read_adsp_thread_enable;

/* Symbol: _ZN7android27SpeechEnhancementController18GetBtHeadsetNrecOnEv */
/* Demangled: android::SpeechEnhancementController::GetBtHeadsetNrecOn() */
int _ZN7android27SpeechEnhancementController18GetBtHeadsetNrecOnEv(void);

/* Symbol: _ZN7android12AudioFtmBase22createAudioFtmInstanceEv */
/* Demangled: android::AudioFtmBase::createAudioFtmInstance() */
int _ZN7android12AudioFtmBase22createAudioFtmInstanceEv(void);

/* Symbol: _ZTVNSt3__111__end_stateIcEE */
/* Demangled: vtable for std::__1::__end_state<char> */
extern void* _ZTVNSt3__111__end_stateIcEE;

/* Symbol: _ZN7android21AudioDspStreamManager14parseParameterEPcPiS2_ */
/* Demangled: android::AudioDspStreamManager::parseParameter(char*, int*, int*) */
int _ZN7android21AudioDspStreamManager14parseParameterEPcPiS2_(void);

/* Symbol: _ZN7android27AudioALSACaptureHandlerBaseD2Ev */
/* Demangled: android::AudioALSACaptureHandlerBase::~AudioALSACaptureHandlerBase() */
int _ZN7android27AudioALSACaptureHandlerBaseD2Ev(void);

/* Symbol: _ZN7android12SpeechConfig17initSpeechNetworkEv */
/* Demangled: android::SpeechConfig::initSpeechNetwork() */
int _ZN7android12SpeechConfig17initSpeechNetworkEv(void);

/* Symbol: _ZN7android22RingBuf_writeDataValueEPNS_7RingBufEii */
/* Demangled: android::RingBuf_writeDataValue(android::RingBuf*, int, int) */
int _ZN7android22RingBuf_writeDataValueEPNS_7RingBufEii(void);

/* Symbol: _ZN7android18AudioALSAStreamOut16createMmapBufferEiP22audio_mmap_buffer_info */
/* Demangled: android::AudioALSAStreamOut::createMmapBuffer(int, audio_mmap_buffer_info*) */
int _ZN7android18AudioALSAStreamOut16createMmapBufferEiP22audio_mmap_buffer_info(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerDspD0Ev */
/* Demangled: android::AudioALSACaptureHandlerDsp::~AudioALSACaptureHandlerDsp() */
int _ZN7android26AudioALSACaptureHandlerDspD0Ev(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController9setDlMuteEb */
/* Demangled: android::AudioALSASpeechPhoneCallController::setDlMute(bool) */
int _ZN7android34AudioALSASpeechPhoneCallController9setDlMuteEb(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase8pcmWriteEP3pcmPKvj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::pcmWrite(pcm*, void const*, unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerBase8pcmWriteEP3pcmPKvj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl18BT_SCO_SET_TXStateENS_12BT_SCO_STATEE */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_SET_TXState(android::BT_SCO_STATE) */
int _ZN7android18AudioBTCVSDControl18BT_SCO_SET_TXStateENS_12BT_SCO_STATEE(void);

/* Symbol: _ZN7android21SpeechMessengerNormal26speechMessageToCcciMessageEPNS_9sph_msg_tEPNS_10ccci_msg_tE */
/* Demangled: android::SpeechMessengerNormal::speechMessageToCcciMessage(android::sph_msg_t*, android::ccci_msg_t*) */
int _ZN7android21SpeechMessengerNormal26speechMessageToCcciMessageEPNS_9sph_msg_tEPNS_10ccci_msg_tE(void);

/* Symbol: _ZN7android23AudioMTKHeadSetMessager16isHeadsetPluggedEv */
/* Demangled: android::AudioMTKHeadSetMessager::isHeadsetPlugged() */
int _ZN7android23AudioMTKHeadSetMessager16isHeadsetPluggedEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager27updateDeviceConnectionStateEjb */
/* Demangled: android::AudioALSAStreamManager::updateDeviceConnectionState(unsigned int, bool) */
int _ZN7android22AudioALSAStreamManager27updateDeviceConnectionStateEjb(void);

/* Symbol: audio_dsp_cbk_register */
/* Demangled: audio_dsp_cbk_register */
int audio_dsp_cbk_register(void);

/* Symbol: audio_get_dsp_id */
/* Demangled: audio_get_dsp_id */
int audio_get_dsp_id(void);

/* Symbol: _ZN7android21AudioDspStreamManager20getDspTaskA2DPStatusEv */
/* Demangled: android::AudioDspStreamManager::getDspTaskA2DPStatus() */
int _ZN7android21AudioDspStreamManager20getDspTaskA2DPStatusEv(void);

/* Symbol: _ZN7android23SpeechPcmMixerBGSPlayer11GetInstanceEv */
/* Demangled: android::SpeechPcmMixerBGSPlayer::GetInstance() */
int _ZN7android23SpeechPcmMixerBGSPlayer11GetInstanceEv(void);

/* Symbol: _ZN7android7isMdMsgEPKNS_9sph_msg_tE */
/* Demangled: android::isMdMsg(android::sph_msg_t const*) */
int _ZN7android7isMdMsgEPKNS_9sph_msg_tE(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager15setOutputDeviceEjj */
/* Demangled: android::AudioALSAHardwareResourceManager::setOutputDevice(unsigned int, unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager15setOutputDeviceEjj(void);

/* Symbol: _ZN7android8SPELayer16CompensateBufferEj8timespec */
/* Demangled: android::SPELayer::CompensateBuffer(unsigned int, timespec) */
int _ZN7android8SPELayer16CompensateBufferEj8timespec(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager15EnableAudBufClkEb */
/* Demangled: android::AudioALSAHardwareResourceManager::EnableAudBufClk(bool) */
int _ZN7android32AudioALSAHardwareResourceManager15EnableAudBufClkEb(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerVOW5closeEv */
/* Demangled: android::AudioALSACaptureHandlerVOW::close() */
int _ZN7android26AudioALSACaptureHandlerVOW5closeEv(void);

/* Symbol: _ZN7android24getBlockThreadTimeMsByIDEPNS_9sph_msg_tE */
/* Demangled: android::getBlockThreadTimeMsByID(android::sph_msg_t*) */
int _ZN7android24getBlockThreadTimeMsByIDEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android22AudioMTKGainController18setVoiceBufferGainEi */
/* Demangled: android::AudioMTKGainController::setVoiceBufferGain(int) */
int _ZN7android22AudioMTKGainController18setVoiceBufferGainEi(void);

/* Symbol: _ZN7android20GainTableParamParser15getCategoryListEP10_AudioTypePNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE */
/* Demangled: android::GainTableParamParser::getCategoryList(_AudioType*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN7android20GainTableParamParser15getCategoryListEP10_AudioTypePNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE(void);

/* Symbol: _ZN7android19streamin_epl_proptyE */
/* Demangled: android::streamin_epl_propty */
extern void* _ZN7android19streamin_epl_proptyE;

/* Symbol: _ZN7android33AudioALSASpeechLoopbackController15SetModemBTCodecEb */
/* Demangled: android::AudioALSASpeechLoopbackController::SetModemBTCodec(bool) */
int _ZN7android33AudioALSASpeechLoopbackController15SetModemBTCodecEb(void);

/* Symbol: audio_dsp_controller_init */
/* Demangled: audio_dsp_controller_init */
int audio_dsp_controller_init(void);

/* Symbol: _ZN7android22AudioALSAStreamManager22updateSpeechNVRAMParamEi */
/* Demangled: android::AudioALSAStreamManager::updateSpeechNVRAMParam(int) */
int _ZN7android22AudioALSAStreamManager22updateSpeechNVRAMParamEi(void);

/* Symbol: _ZN7android12AudioFtmBase28HeadsetMic_Receiver_LoopbackEcc */
/* Demangled: android::AudioFtmBase::HeadsetMic_Receiver_Loopback(char, char) */
int _ZN7android12AudioFtmBase28HeadsetMic_Receiver_LoopbackEcc(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager14setInputDeviceEj */
/* Demangled: android::AudioALSAHardwareResourceManager::setInputDevice(unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager14setInputDeviceEj(void);

/* Symbol: _ZN7android22AudioALSAStreamManager14SetSuperVolumeEv */
/* Demangled: android::AudioALSAStreamManager::SetSuperVolume() */
int _ZN7android22AudioALSAStreamManager14SetSuperVolumeEv(void);

/* Symbol: _ZN7android8AudioFtm12RecieverTestEc */
/* Demangled: android::AudioFtm::RecieverTest(char) */
int _ZN7android8AudioFtm12RecieverTestEc(void);

/* Symbol: get_support_frame_ms_mask */
/* Demangled: get_support_frame_ms_mask */
int get_support_frame_ms_mask(void);

/* Symbol: _ZN7android17AudioDspCallFinal19deinitCallFinalTaskEv */
/* Demangled: android::AudioDspCallFinal::deinitCallFinalTask() */
int _ZN7android17AudioDspCallFinal19deinitCallFinalTaskEv(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController5closeEv */
/* Demangled: android::AudioALSASpeechPhoneCallController::close() */
int _ZN7android34AudioALSASpeechPhoneCallController5closeEv(void);

/* Symbol: _ZN7android33AudioALSASpeechLoopbackController29CloseModemLoopbackControlFlowEv */
/* Demangled: android::AudioALSASpeechLoopbackController::CloseModemLoopbackControlFlow() */
int _ZN7android33AudioALSASpeechLoopbackController29CloseModemLoopbackControlFlowEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase6attachEPNS_27IAudioALSACaptureDataClientE */
/* Demangled: android::AudioALSACaptureDataProviderBase::attach(android::IAudioALSACaptureDataClient*) */
int _ZN7android32AudioALSACaptureDataProviderBase6attachEPNS_27IAudioALSACaptureDataClientE(void);

/* Symbol: _ZN7android21AudioALSADeviceParser24UniqueAlsaDeviceInstanceE */
/* Demangled: android::AudioALSADeviceParser::UniqueAlsaDeviceInstance */
extern void* _ZN7android21AudioALSADeviceParser24UniqueAlsaDeviceInstanceE;

/* Symbol: _ZNK7android6VectorIPNS_18AudioALSAStreamOutEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::AudioALSAStreamOut*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_18AudioALSAStreamOutEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android17AudioMessengerIPIC1Ev */
/* Demangled: android::AudioMessengerIPI::AudioMessengerIPI() */
int _ZN7android17AudioMessengerIPIC1Ev(void);

/* Symbol: _ZNK7android6VectorIP7__sFILEE10do_destroyEPvj */
/* Demangled: android::Vector<__sFILE*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIP7__sFILEE10do_destroyEPvj(void);

/* Symbol: _ZN7android12AudioFtmBase14EarphoneTestLREc */
/* Demangled: android::AudioFtmBase::EarphoneTestLR(char) */
int _ZN7android12AudioFtmBase14EarphoneTestLREc(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_atomIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_atom<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE12__parse_atomIPKcEET_S7_S7_(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_extended_reg_expINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_extended_reg_exp<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_extended_reg_expINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZN7android22AudioALSAStreamManager29getAudioZoomLevelKeyValuePairEv */
/* Demangled: android::AudioALSAStreamManager::getAudioZoomLevelKeyValuePair() */
int _ZN7android22AudioALSAStreamManager29getAudioZoomLevelKeyValuePairEv(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerUsb20updateStartTimeStampEv */
/* Demangled: android::AudioALSAPlaybackHandlerUsb::updateStartTimeStamp() */
int _ZN7android27AudioALSAPlaybackHandlerUsb20updateStartTimeStampEv(void);

/* Symbol: _ZN7android25AudioALSACaptureHandlerBT4initEv */
/* Demangled: android::AudioALSACaptureHandlerBT::init() */
int _ZN7android25AudioALSACaptureHandlerBT4initEv(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefExt4openEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefExt::open() */
int _ZN7android38AudioALSACaptureDataProviderEchoRefExt4openEv(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager12setBypassNLEEb */
/* Demangled: android::AudioALSAHyBridNLEManager::setBypassNLE(bool) */
int _ZN7android25AudioALSAHyBridNLEManager12setBypassNLEEb(void);

/* Symbol: aurisys_arsi_destroy_handler */
/* Demangled: aurisys_arsi_destroy_handler */
int aurisys_arsi_destroy_handler(void);

/* Symbol: alock_unlock */
/* Demangled: alock_unlock */
int alock_unlock(void);

/* Symbol: _ZN7android8SPELayer17SetMICDigitalGainENS_8SPE_MODEEi */
/* Demangled: android::SPELayer::SetMICDigitalGain(android::SPE_MODE, int) */
int _ZN7android8SPELayer17SetMICDigitalGainENS_8SPE_MODEEi(void);

/* Symbol: _ZN7android22AudioALSAStreamManager8callMemoEi */
/* Demangled: android::AudioALSAStreamManager::callMemo(int) */
int _ZN7android22AudioALSAStreamManager8callMemoEi(void);

/* Symbol: _ZN7android25AudioALSACaptureHandlerBT4readEPvi */
/* Demangled: android::AudioALSACaptureHandlerBT::read(void*, int) */
int _ZN7android25AudioALSACaptureHandlerBT4readEPvi(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager19startOutputDevice_lEjj */
/* Demangled: android::AudioALSAHardwareResourceManager::startOutputDevice_l(unsigned int, unsigned int) */
int _ZN7android32AudioALSAHardwareResourceManager19startOutputDevice_lEjj(void);

/* Symbol: _ZN7android8AudioFtm23PhoneMic_SpkLR_LoopbackEc */
/* Demangled: android::AudioFtm::PhoneMic_SpkLR_Loopback(char) */
int _ZN7android8AudioFtm23PhoneMic_SpkLR_LoopbackEc(void);

/* Symbol: _ZN7android17AudioVIBSPKVsgGen23UniqueAudioVIBSPKVsgGenE */
/* Demangled: android::AudioVIBSPKVsgGen::UniqueAudioVIBSPKVsgGen */
extern void* _ZN7android17AudioVIBSPKVsgGen23UniqueAudioVIBSPKVsgGenE;

/* Symbol: _ZN7android22AudioSmartPaController14getI2sInSelectEv */
/* Demangled: android::AudioSmartPaController::getI2sInSelect() */
int _ZN7android22AudioSmartPaController14getI2sInSelectEv(void);

/* Symbol: _ZN7android39AudioALSACaptureDataClientAurisysNormalC2EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_tS2_ */
/* Demangled: android::AudioALSACaptureDataClientAurisysNormal::AudioALSACaptureDataClientAurisysNormal(android::AudioALSACaptureDataProviderBase*, stream_attribute_t*, android::AudioALSACaptureDataProviderBase*) */
int _ZN7android39AudioALSACaptureDataClientAurisysNormalC2EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_tS2_(void);

/* Symbol: _ZN7android30AudioALSACaptureHandlerFMRadio5closeEv */
/* Demangled: android::AudioALSACaptureHandlerFMRadio::close() */
int _ZN7android30AudioALSACaptureHandlerFMRadio5closeEv(void);

/* Symbol: _ZN7android18AudioALSAStreamOut13setBufferSizeEv */
/* Demangled: android::AudioALSAStreamOut::setBufferSize() */
int _ZN7android18AudioALSAStreamOut13setBufferSizeEv(void);

/* Symbol: destroy_pool_buf */
/* Demangled: destroy_pool_buf */
int destroy_pool_buf(void);

/* Symbol: _ZN7android20streamout_acf_proptyE */
/* Demangled: android::streamout_acf_propty */
extern void* _ZN7android20streamout_acf_proptyE;

/* Symbol: _ZN7android37AudioALSAPlaybackHandlerFMTransmitterC1EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerFMTransmitter::AudioALSAPlaybackHandlerFMTransmitter(stream_attribute_t const*) */
int _ZN7android37AudioALSAPlaybackHandlerFMTransmitterC1EPK18stream_attribute_t(void);

/* Symbol: _ZN7android18SpeechDriverNormal14setBtSpkDeviceEb */
/* Demangled: android::SpeechDriverNormal::setBtSpkDevice(bool) */
int _ZN7android18SpeechDriverNormal14setBtSpkDeviceEb(void);

/* Symbol: _ZN7android22AudioMTKGainController15getMasterVolumeEv */
/* Demangled: android::AudioMTKGainController::getMasterVolume() */
int _ZN7android22AudioMTKGainController15getMasterVolumeEv(void);

/* Symbol: _ZN7android27SpeechEnhancementControllerC1Ev */
/* Demangled: android::SpeechEnhancementController::SpeechEnhancementController() */
int _ZN7android27SpeechEnhancementControllerC1Ev(void);

/* Symbol: _ZN7android17AudioALSAHardware15setMasterVolumeEf */
/* Demangled: android::AudioALSAHardware::setMasterVolume(float) */
int _ZN7android17AudioALSAHardware15setMasterVolumeEf(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioMTKFilterManager*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderVOWD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderVOW::~AudioALSACaptureDataProviderVOW() */
int _ZN7android31AudioALSACaptureDataProviderVOWD0Ev(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallControllerC1Ev */
/* Demangled: android::AudioALSASpeechPhoneCallController::AudioALSASpeechPhoneCallController() */
int _ZN7android34AudioALSASpeechPhoneCallControllerC1Ev(void);

/* Symbol: _ZN7android8SPELayer15DumpMutexUnlockEv */
/* Demangled: android::SPELayer::DumpMutexUnlock() */
int _ZN7android8SPELayer15DumpMutexUnlockEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSD12deinitBliSrcEv */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::deinitBliSrc() */
int _ZN7android34AudioALSACaptureDataProviderBTCVSD12deinitBliSrcEv(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefExtD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefExt::~AudioALSACaptureDataProviderEchoRefExt() */
int _ZN7android38AudioALSACaptureDataProviderEchoRefExtD0Ev(void);

/* Symbol: _ZN7android21AudioDspStreamManager19dataPasstoMusicTaskEPNS_28AudioALSAPlaybackHandlerBaseE */
/* Demangled: android::AudioDspStreamManager::dataPasstoMusicTask(android::AudioALSAPlaybackHandlerBase*) */
int _ZN7android21AudioDspStreamManager19dataPasstoMusicTaskEPNS_28AudioALSAPlaybackHandlerBaseE(void);

/* Symbol: _ZN7android8SPELayer5ClearEv */
/* Demangled: android::SPELayer::Clear() */
int _ZN7android8SPELayer5ClearEv(void);

/* Symbol: _ZN7android35AudioALSACodecDeviceOutEarphonePMICC2Ev */
/* Demangled: android::AudioALSACodecDeviceOutEarphonePMIC::AudioALSACodecDeviceOutEarphonePMIC() */
int _ZN7android35AudioALSACodecDeviceOutEarphonePMICC2Ev(void);

/* Symbol: _ZN7android15keypcmPlayback2E */
/* Demangled: android::keypcmPlayback2 */
extern void* _ZN7android15keypcmPlayback2E;

/* Symbol: _ZN7android18SpeechDriverNormal12switchBTModeEj */
/* Demangled: android::SpeechDriverNormal::switchBTMode(unsigned int) */
int _ZN7android18SpeechDriverNormal12switchBTModeEj(void);

/* Symbol: audio_get_timespec_realtime */
/* Demangled: audio_get_timespec_realtime */
int audio_get_timespec_realtime(void);

/* Symbol: _ZN7android21AudioDspStreamManager13setDspVersionEi */
/* Demangled: android::AudioDspStreamManager::setDspVersion(int) */
int _ZN7android21AudioDspStreamManager13setDspVersionEi(void);

/* Symbol: _ZTVN7android20GainTableParamParserE */
/* Demangled: vtable for android::GainTableParamParser */
extern void* _ZTVN7android20GainTableParamParserE;

/* Symbol: _ZN7android8SPELayerD2Ev */
/* Demangled: android::SPELayer::~SPELayer() */
int _ZN7android8SPELayerD2Ev(void);

/* Symbol: _ZN7android17AudioALSAHardware15GetAudioCommandEi */
/* Demangled: android::AudioALSAHardware::GetAudioCommand(int) */
int _ZN7android17AudioALSAHardware15GetAudioCommandEi(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudioD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::~AudioALSACaptureDataProviderAAudio() */
int _ZN7android34AudioALSACaptureDataProviderAAudioD2Ev(void);

/* Symbol: _ZN7android21AudioDspStreamManager13setParametersENS_7String8E */
/* Demangled: android::AudioDspStreamManager::setParameters(android::String8) */
int _ZN7android21AudioDspStreamManager13setParametersENS_7String8E(void);

/* Symbol: _ZN7android16SpeechExtMemUSIP21shm_region_data_countEPNS_13region_info_tE */
/* Demangled: android::SpeechExtMemUSIP::shm_region_data_count(android::region_info_t*) */
int _ZN7android16SpeechExtMemUSIP21shm_region_data_countEPNS_13region_info_tE(void);

/* Symbol: _ZN7android22AudioMTKGainController17GetHeadphoneLGainEv */
/* Demangled: android::AudioMTKGainController::GetHeadphoneLGain() */
int _ZN7android22AudioMTKGainController17GetHeadphoneLGainEv(void);

/* Symbol: _ZNK7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::SpeechPcmMixerBaseBuffer*>::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorIPNS_24SpeechPcmMixerBaseBufferEE10do_destroyEPvj(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerTDMC2EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerTDM::AudioALSACaptureHandlerTDM(stream_attribute_t*) */
int _ZN7android26AudioALSACaptureHandlerTDMC2EP18stream_attribute_t(void);

/* Symbol: _ZN7android22AudioALSAStreamManager20getVoiceWakeUpNeedOnEv */
/* Demangled: android::AudioALSAStreamManager::getVoiceWakeUpNeedOn() */
int _ZN7android22AudioALSAStreamManager20getVoiceWakeUpNeedOnEv(void);

/* Symbol: audio_messenger_ipi_deinit */
/* Demangled: audio_messenger_ipi_deinit */
int audio_messenger_ipi_deinit(void);

/* Symbol: strcat_safe */
/* Demangled: strcat_safe */
int strcat_safe(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerBTCVSD5writeEPKvj */
/* Demangled: android::AudioALSAPlaybackHandlerBTCVSD::write(void const*, unsigned int) */
int _ZN7android30AudioALSAPlaybackHandlerBTCVSD5writeEPKvj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl25btsco_AllocMemory_TX_MSBCEv */
/* Demangled: android::AudioBTCVSDControl::btsco_AllocMemory_TX_MSBC() */
int _ZN7android18AudioBTCVSDControl25btsco_AllocMemory_TX_MSBCEv(void);

/* Symbol: _ZN7android16SpeechVMRecorder22dumpVMRecordDataThreadEPv */
/* Demangled: android::SpeechVMRecorder::dumpVMRecordDataThread(void*) */
int _ZN7android16SpeechVMRecorder22dumpVMRecordDataThreadEPv(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerVoiceD2Ev */
/* Demangled: android::AudioALSAPlaybackHandlerVoice::~AudioALSAPlaybackHandlerVoice() */
int _ZN7android29AudioALSAPlaybackHandlerVoiceD2Ev(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderNormal5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderNormal::close() */
int _ZN7android34AudioALSACaptureDataProviderNormal5closeEv(void);

/* Symbol: _Z28DestroyAudioVolumeControllerv */
/* Demangled: DestroyAudioVolumeController() */
int _Z28DestroyAudioVolumeControllerv(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer22chooseTargetSampleRateEjj */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::chooseTargetSampleRate(unsigned int, unsigned int) */
int _ZN7android29AudioALSAPlaybackHandlerMixer22chooseTargetSampleRateEjj(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderUsb17isNeedEchoRefDataEv */
/* Demangled: android::AudioALSACaptureDataProviderUsb::isNeedEchoRefData() */
int _ZN7android31AudioALSACaptureDataProviderUsb17isNeedEchoRefDataEv(void);

/* Symbol: _ZN7android36dlStreamAttributeSourceCustomizationEP18stream_attribute_t */
/* Demangled: android::dlStreamAttributeSourceCustomization(stream_attribute_t*) */
int _ZN7android36dlStreamAttributeSourceCustomizationEP18stream_attribute_t(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase14setScreenStateEbjjb */
/* Demangled: android::AudioALSAPlaybackHandlerBase::setScreenState(bool, unsigned int, unsigned int, bool) */
int _ZN7android28AudioALSAPlaybackHandlerBase14setScreenStateEbjjb(void);

/* Symbol: _ZN7android17SpeechDriverDummy16setPcmRecordTypeENS_19SpcRecordTypeStructE */
/* Demangled: android::SpeechDriverDummy::setPcmRecordType(android::SpcRecordTypeStruct) */
int _ZN7android17SpeechDriverDummy16setPcmRecordTypeENS_19SpcRecordTypeStructE(void);

/* Symbol: _ZN7android21keypcmVoiceUSBEchoRefE */
/* Demangled: android::keypcmVoiceUSBEchoRef */
extern void* _ZN7android21keypcmVoiceUSBEchoRefE;

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBaseD2Ev */
/* Demangled: android::AudioALSAPlaybackHandlerBase::~AudioALSAPlaybackHandlerBase() */
int _ZN7android28AudioALSAPlaybackHandlerBaseD2Ev(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormal26GetLowJitterModeSampleRateEv */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::GetLowJitterModeSampleRate() */
int _ZN7android30AudioALSAPlaybackHandlerNormal26GetLowJitterModeSampleRateEv(void);

/* Symbol: _ZN7android30AudioALSACaptureHandlerFMRadioC1EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerFMRadio::AudioALSACaptureHandlerFMRadio(stream_attribute_t*) */
int _ZN7android30AudioALSACaptureHandlerFMRadioC1EP18stream_attribute_t(void);

/* Symbol: _ZN7android22AudioALSAStreamManagerC2Ev */
/* Demangled: android::AudioALSAStreamManager::AudioALSAStreamManager() */
int _ZN7android22AudioALSAStreamManagerC2Ev(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP11ScpSpeechOnEv */
/* Demangled: android::SpeechDriverOpenDSP::ScpSpeechOn() */
int _ZN7android19SpeechDriverOpenDSP11ScpSpeechOnEv(void);

/* Symbol: _ZNKSt3__16__loopIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__loop<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__16__loopIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase18setDspDumpWakelockEb */
/* Demangled: android::AudioALSAPlaybackHandlerBase::setDspDumpWakelock(bool) */
int _ZN7android28AudioALSAPlaybackHandlerBase18setDspDumpWakelockEb(void);

/* Symbol: _ZN7android16AudioBitTrueTest12getTestStateEv */
/* Demangled: android::AudioBitTrueTest::getTestState() */
int _ZN7android16AudioBitTrueTest12getTestStateEv(void);

/* Symbol: _ZN7android14isHwSrcSupportEv */
/* Demangled: android::isHwSrcSupport() */
int _ZN7android14isHwSrcSupportEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager11getInstanceEv */
/* Demangled: android::AudioALSAStreamManager::getInstance() */
int _ZN7android22AudioALSAStreamManager11getInstanceEv(void);

/* Symbol: _ZTVN7android12SpeechConfigE */
/* Demangled: vtable for android::SpeechConfig */
extern void* _ZTVN7android12SpeechConfigE;

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceDL5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderVoiceDL::close() */
int _ZN7android35AudioALSACaptureDataProviderVoiceDL5closeEv(void);

/* Symbol: _ZN7android21AudioALSADeviceParser14ParseCardIndexEv */
/* Demangled: android::AudioALSADeviceParser::ParseCardIndex() */
int _ZN7android21AudioALSADeviceParser14ParseCardIndexEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal12eCallIvsSendEv */
/* Demangled: android::SpeechDriverNormal::eCallIvsSend() */
int _ZN7android18SpeechDriverNormal12eCallIvsSendEv(void);

/* Symbol: _ZN7android24AudioThrottleTimeControl15updateTimeStampEi */
/* Demangled: android::AudioThrottleTimeControl::updateTimeStamp(int) */
int _ZN7android24AudioThrottleTimeControl15updateTimeStampEi(void);

/* Symbol: _ZN7android21AudioALSAFMController9getFmModeEv */
/* Demangled: android::AudioALSAFMController::getFmMode() */
int _ZN7android21AudioALSAFMController9getFmModeEv(void);

/* Symbol: destroy_aurisys_lib_manager */
/* Demangled: destroy_aurisys_lib_manager */
int destroy_aurisys_lib_manager(void);

/* Symbol: _ZTVNSt3__113__empty_stateIcEE */
/* Demangled: vtable for std::__1::__empty_state<char> */
extern void* _ZTVNSt3__113__empty_stateIcEE;

/* Symbol: _ZN7android17AudioALSAStreamIn3setEjPiPjS2_S1_20audio_in_acoustics_tj */
/* Demangled: android::AudioALSAStreamIn::set(unsigned int, int*, unsigned int*, unsigned int*, int*, audio_in_acoustics_t, unsigned int) */
int _ZN7android17AudioALSAStreamIn3setEjPiPjS2_S1_20audio_in_acoustics_tj(void);

/* Symbol: _ZN7android23keypcmHostlessSrcAAudioE */
/* Demangled: android::keypcmHostlessSrcAAudio */
extern void* _ZN7android23keypcmHostlessSrcAAudioE;

/* Symbol: _ZN7android17AudioVIBSPKVsgGen7ProcessEjPvthi */
/* Demangled: android::AudioVIBSPKVsgGen::Process(unsigned int, void*, unsigned short, unsigned char, int) */
int _ZN7android17AudioVIBSPKVsgGen7ProcessEjPvthi(void);

/* Symbol: _ZN7android22AudioSmartPaController20setNumSmartPaSupportEi */
/* Demangled: android::AudioSmartPaController::setNumSmartPaSupport(int) */
int _ZN7android22AudioSmartPaController20setNumSmartPaSupportEi(void);

/* Symbol: _ZN7android13platform_archE */
/* Demangled: android::platform_arch */
extern void* _ZN7android13platform_archE;

/* Symbol: _ZN7android25AudioALSACaptureHandlerBTD2Ev */
/* Demangled: android::AudioALSACaptureHandlerBT::~AudioALSACaptureHandlerBT() */
int _ZN7android25AudioALSACaptureHandlerBTD2Ev(void);

/* Symbol: _ZN7android19AudioALSAParamTuner7getModeEv */
/* Demangled: android::AudioALSAParamTuner::getMode() */
int _ZN7android19AudioALSAParamTuner7getModeEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager29stopOutputDeviceWithoutNotifyEv */
/* Demangled: android::AudioALSAHardwareResourceManager::stopOutputDeviceWithoutNotify() */
int _ZN7android32AudioALSAHardwareResourceManager29stopOutputDeviceWithoutNotifyEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderDspRawC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderDspRaw::AudioALSACaptureDataProviderDspRaw() */
int _ZN7android34AudioALSACaptureDataProviderDspRawC2Ev(void);

/* Symbol: _ZN7android21SpeechMessengerNormal25readMdDataFromShareMemoryEPvPtS2_tj */
/* Demangled: android::SpeechMessengerNormal::readMdDataFromShareMemory(void*, unsigned short*, unsigned short*, unsigned short, unsigned int) */
int _ZN7android21SpeechMessengerNormal25readMdDataFromShareMemoryEPvPtS2_tj(void);

/* Symbol: _ZTVN7android21SpeechMessengerNormalE */
/* Demangled: vtable for android::SpeechMessengerNormal */
extern void* _ZTVN7android21SpeechMessengerNormalE;

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase11calHoldTimeEj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::calHoldTime(unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerBase11calHoldTimeEj(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase17DeinitDataPendingEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::DeinitDataPending() */
int _ZN7android28AudioALSAPlaybackHandlerBase17DeinitDataPendingEv(void);

/* Symbol: _ZN7android15LoopbackManagerD1Ev */
/* Demangled: android::LoopbackManager::~LoopbackManager() */
int _ZN7android15LoopbackManagerD1Ev(void);

/* Symbol: audio_dsp_service_init */
/* Demangled: audio_dsp_service_init */
int audio_dsp_service_init(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudio15requestInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::requestInstance() */
int _ZN7android34AudioALSACaptureDataProviderAAudio15requestInstanceEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase12closeWavDumpEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::closeWavDump() */
int _ZN7android28AudioALSAPlaybackHandlerBase12closeWavDumpEv(void);

/* Symbol: _ZN7android16SpeechExtMemCCCI16closeShareMemoryEv */
/* Demangled: android::SpeechExtMemCCCI::closeShareMemory() */
int _ZN7android16SpeechExtMemCCCI16closeShareMemoryEv(void);

/* Symbol: _ZN7android17AudioALSAHardware15UpdateOutputFIREjj */
/* Demangled: android::AudioALSAHardware::UpdateOutputFIR(unsigned int, unsigned int) */
int _ZN7android17AudioALSAHardware15UpdateOutputFIREjj(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefUsbC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefUsb::AudioALSACaptureDataProviderEchoRefUsb() */
int _ZN7android38AudioALSACaptureDataProviderEchoRefUsbC2Ev(void);

/* Symbol: _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMICD1Ev */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerEarphonePMIC::~AudioALSACodecDeviceOutSpeakerEarphonePMIC() */
int _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMICD1Ev(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase21enablePmicInputDeviceEb */
/* Demangled: android::AudioALSACaptureDataProviderBase::enablePmicInputDevice(bool) */
int _ZN7android32AudioALSACaptureDataProviderBase21enablePmicInputDeviceEb(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudio5mLockE */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::mLock */
extern void* _ZN7android34AudioALSACaptureDataProviderAAudio5mLockE;

/* Symbol: _ZN7android17AudioMessengerIPID2Ev */
/* Demangled: android::AudioMessengerIPI::~AudioMessengerIPI() */
int _ZN7android17AudioMessengerIPID2Ev(void);

/* Symbol: _ZN7android37PROPERTY_KEY_PCM_MIXER_BLISRC_DUMP_ONE */
/* Demangled: android::PROPERTY_KEY_PCM_MIXER_BLISRC_DUMP_ON */
extern void* _ZN7android37PROPERTY_KEY_PCM_MIXER_BLISRC_DUMP_ONE;

/* Symbol: _ZN7android23SpeechPcmMixerBGSPlayer17setPcmMixerDlMuteEb */
/* Demangled: android::SpeechPcmMixerBGSPlayer::setPcmMixerDlMute(bool) */
int _ZN7android23SpeechPcmMixerBGSPlayer17setPcmMixerDlMuteEb(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient14StartBesRecordEv */
/* Demangled: android::AudioALSACaptureDataClient::StartBesRecord() */
int _ZN7android26AudioALSACaptureDataClient14StartBesRecordEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataClientSyncIO11ApplyVolumeEPvj */
/* Demangled: android::AudioALSACaptureDataClientSyncIO::ApplyVolume(void*, unsigned int) */
int _ZN7android32AudioALSACaptureDataClientSyncIO11ApplyVolumeEPvj(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallControllerD1Ev */
/* Demangled: android::AudioUSBPhoneCallController::~AudioUSBPhoneCallController() */
int _ZN7android27AudioUSBPhoneCallControllerD1Ev(void);

/* Symbol: _ZN7android21AudioDspStreamManager20needOpenPlaybackTaskEv */
/* Demangled: android::AudioDspStreamManager::needOpenPlaybackTask() */
int _ZN7android21AudioDspStreamManager20needOpenPlaybackTaskEv(void);

/* Symbol: _ZN7android10Record2Way4StopEv */
/* Demangled: android::Record2Way::Stop() */
int _ZN7android10Record2Way4StopEv(void);

/* Symbol: _ZN7android16SpeechVMRecorderC2Ev */
/* Demangled: android::SpeechVMRecorder::SpeechVMRecorder() */
int _ZN7android16SpeechVMRecorderC2Ev(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase15openComprDriverEj */
/* Demangled: android::AudioALSAPlaybackHandlerBase::openComprDriver(unsigned int) */
int _ZN7android28AudioALSAPlaybackHandlerBase15openComprDriverEj(void);

/* Symbol: _ZN7android12SpeechConfigC2Ev */
/* Demangled: android::SpeechConfig::SpeechConfig() */
int _ZN7android12SpeechConfigC2Ev(void);

/* Symbol: _ZN7android18AudioALSAStreamOut16WritePcmDumpDataEPKvi */
/* Demangled: android::AudioALSAStreamOut::WritePcmDumpData(void const*, int) */
int _ZN7android18AudioALSAStreamOut16WritePcmDumpDataEPKvi(void);

/* Symbol: map_aurisys_scenario_to_task_scene */
/* Demangled: map_aurisys_scenario_to_task_scene */
int map_aurisys_scenario_to_task_scene(void);

/* Symbol: _ZN7android22AudioALSAStreamManager21createPlaybackHandlerEP18stream_attribute_t */
/* Demangled: android::AudioALSAStreamManager::createPlaybackHandler(stream_attribute_t*) */
int _ZN7android22AudioALSAStreamManager21createPlaybackHandlerEP18stream_attribute_t(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeI20audio_output_flags_tjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<audio_output_flags_t, unsigned int>, std::__1::__unordered_map_hasher<audio_output_flags_t, std::__1::__hash_value_type<audio_output_flags_t, unsigned int>, std::__1::hash<audio_output_flags_t>, true>, std::__1::__unordered_map_equal<audio_output_flags_t, std::__1::__hash_value_type<audio_output_flags_t, unsigned int>, std::__1::equal_to<audio_output_flags_t>, true>, std::__1::allocator<std::__1::__hash_value_type<audio_output_flags_t, unsigned int> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeI20audio_output_flags_tjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE6rehashEj(void);

/* Symbol: _ZN7android12AudioFtmBase11SineGenTestEc */
/* Demangled: android::AudioFtmBase::SineGenTest(char) */
int _ZN7android12AudioFtmBase11SineGenTestEc(void);

/* Symbol: _ZN7android17SpeechDriverDummy33RecoverModemSideStatusToInitStateEv */
/* Demangled: android::SpeechDriverDummy::RecoverModemSideStatusToInitState() */
int _ZN7android17SpeechDriverDummy33RecoverModemSideStatusToInitStateEv(void);

/* Symbol: _ZN7android22DefaultVoIPEnhanceParaE */
/* Demangled: android::DefaultVoIPEnhancePara */
extern void* _ZN7android22DefaultVoIPEnhanceParaE;

/* Symbol: _ZNKSt3__128__begin_marked_subexpressionIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__begin_marked_subexpression<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__128__begin_marked_subexpressionIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager19doAdjustGainProcessEPNS_16AudioALSANLECtrlEjNS_24audio_hybrid_adjust_modeE */
/* Demangled: android::AudioALSAHyBridNLEManager::doAdjustGainProcess(android::AudioALSANLECtrl*, unsigned int, android::audio_hybrid_adjust_mode) */
int _ZN7android25AudioALSAHyBridNLEManager19doAdjustGainProcessEPNS_16AudioALSANLECtrlEjNS_24audio_hybrid_adjust_modeE(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController20setSpeakerSampleRateEj */
/* Demangled: android::AudioALSAVoiceWakeUpController::setSpeakerSampleRate(unsigned int) */
int _ZN7android30AudioALSAVoiceWakeUpController20setSpeakerSampleRateEj(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP14SetVibSpkParamEPv */
/* Demangled: android::SpeechDriverOpenDSP::SetVibSpkParam(void*) */
int _ZN7android19SpeechDriverOpenDSP14SetVibSpkParamEPv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP20SetDownlinkMuteCodecEb */
/* Demangled: android::SpeechDriverOpenDSP::SetDownlinkMuteCodec(bool) */
int _ZN7android19SpeechDriverOpenDSP20SetDownlinkMuteCodecEb(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefExt39mAudioALSACaptureDataProviderEchoRefExtE */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefExt::mAudioALSACaptureDataProviderEchoRefExt */
extern void* _ZN7android38AudioALSACaptureDataProviderEchoRefExt39mAudioALSACaptureDataProviderEchoRefExtE;

/* Symbol: _ZN7android33AudioALSASpeechLoopbackController4openEjjNS_10loopback_tE */
/* Demangled: android::AudioALSASpeechLoopbackController::open(unsigned int, unsigned int, android::loopback_t) */
int _ZN7android33AudioALSASpeechLoopbackController4openEjjNS_10loopback_tE(void);

/* Symbol: _ZN7android18AudioALSAStreamOut7standbyEb */
/* Demangled: android::AudioALSAStreamOut::standby(bool) */
int _ZN7android18AudioALSAStreamOut7standbyEb(void);

/* Symbol: _ZN7android27SpeechEnhancementControllerD2Ev */
/* Demangled: android::SpeechEnhancementController::~SpeechEnhancementController() */
int _ZN7android27SpeechEnhancementControllerD2Ev(void);

/* Symbol: _ZN7android17AudioALSAHardware34clearAudioParameterChangedCallbackEPv */
/* Demangled: android::AudioALSAHardware::clearAudioParameterChangedCallback(void*) */
int _ZN7android17AudioALSAHardware34clearAudioParameterChangedCallbackEPv(void);

/* Symbol: _ZTVN7android29AudioALSACaptureHandlerSyncIOE */
/* Demangled: vtable for android::AudioALSACaptureHandlerSyncIO */
extern void* _ZTVN7android29AudioALSACaptureHandlerSyncIOE;

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZN7android20keypcmBTCVSDPlaybackE */
/* Demangled: android::keypcmBTCVSDPlayback */
extern void* _ZN7android20keypcmBTCVSDPlaybackE;

/* Symbol: _ZN7android12AudioFtmBase28PhoneMic_EarphoneLR_LoopbackEc */
/* Demangled: android::AudioFtmBase::PhoneMic_EarphoneLR_Loopback(char) */
int _ZN7android12AudioFtmBase28PhoneMic_EarphoneLR_LoopbackEc(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallControllerD2Ev */
/* Demangled: android::AudioALSASpeechPhoneCallController::~AudioALSASpeechPhoneCallController() */
int _ZN7android34AudioALSASpeechPhoneCallControllerD2Ev(void);

/* Symbol: _ZN7android19SpeechShareMemGen9518getShareMemoryTypeEv */
/* Demangled: android::SpeechShareMemGen95::getShareMemoryType() */
int _ZN7android19SpeechShareMemGen9518getShareMemoryTypeEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSPC2ENS_13modem_index_tE */
/* Demangled: android::SpeechDriverOpenDSP::SpeechDriverOpenDSP(android::modem_index_t) */
int _ZN7android19SpeechDriverOpenDSPC2ENS_13modem_index_tE(void);

/* Symbol: _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThread10threadLoopEv */
/* Demangled: android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread::threadLoop() */
int _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThread10threadLoopEv(void);

/* Symbol: _ZN7android18SpeechDriverNormal13BGSoundConfigEhh */
/* Demangled: android::SpeechDriverNormal::BGSoundConfig(unsigned char, unsigned char) */
int _ZN7android18SpeechDriverNormal13BGSoundConfigEhh(void);

/* Symbol: _ZN7android21AudioALSAFMController9setFmMuteEb */
/* Demangled: android::AudioALSAFMController::setFmMute(bool) */
int _ZN7android21AudioALSAFMController9setFmMuteEb(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerBTSCO4openEv */
/* Demangled: android::AudioALSAPlaybackHandlerBTSCO::open() */
int _ZN7android29AudioALSAPlaybackHandlerBTSCO4openEv(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerAECD2Ev */
/* Demangled: android::AudioALSACaptureHandlerAEC::~AudioALSACaptureHandlerAEC() */
int _ZN7android26AudioALSACaptureHandlerAECD2Ev(void);

/* Symbol: _ZN7android30AudioALSAVoiceWakeUpController14dumyReadThreadEPv */
/* Demangled: android::AudioALSAVoiceWakeUpController::dumyReadThread(void*) */
int _ZN7android30AudioALSAVoiceWakeUpController14dumyReadThreadEPv(void);

/* Symbol: _ZN7android16SpeechExtMemCCCI25readMdDataFromShareMemoryEPvPtS2_tj */
/* Demangled: android::SpeechExtMemCCCI::readMdDataFromShareMemory(void*, unsigned short*, unsigned short*, unsigned short, unsigned int) */
int _ZN7android16SpeechExtMemCCCI25readMdDataFromShareMemoryEPvPtS2_tj(void);

/* Symbol: _ZN7android17WCNChipControllerC2Ev */
/* Demangled: android::WCNChipController::WCNChipController() */
int _ZN7android17WCNChipControllerC2Ev(void);

/* Symbol: _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCO4openEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefBTSCO::open() */
int _ZN7android40AudioALSACaptureDataProviderEchoRefBTSCO4openEv(void);

/* Symbol: _ZN7android17AudioALSAStreamIn16createMmapBufferEiP22audio_mmap_buffer_info */
/* Demangled: android::AudioALSAStreamIn::createMmapBuffer(int, audio_mmap_buffer_info*) */
int _ZN7android17AudioALSAStreamIn16createMmapBufferEiP22audio_mmap_buffer_info(void);

/* Symbol: _ZN7android22AudioALSAStreamManager16isCaptureOffloadEP18stream_attribute_t */
/* Demangled: android::AudioALSAStreamManager::isCaptureOffload(stream_attribute_t*) */
int _ZN7android22AudioALSAStreamManager16isCaptureOffloadEP18stream_attribute_t(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioMTKFilterManager*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_21AudioMTKFilterManagerEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderDsp::getInstance() */
int _ZN7android31AudioALSACaptureDataProviderDsp11getInstanceEv(void);

/* Symbol: _ZN7android23get_uint32_from_mixctrlEPKc */
/* Demangled: android::get_uint32_from_mixctrl(char const*) */
int _ZN7android23get_uint32_from_mixctrlEPKc(void);

/* Symbol: _ZTVN7android6VectorINS_8String16EEE */
/* Demangled: vtable for android::Vector<android::String16> */
extern void* _ZTVN7android6VectorINS_8String16EEE;

/* Symbol: pfuncGetAudioFtmByDL */
/* Demangled: pfuncGetAudioFtmByDL */
int pfuncGetAudioFtmByDL(void);

/* Symbol: _ZN7android8SPELayer10SetChannelEi */
/* Demangled: android::SPELayer::SetChannel(int) */
int _ZN7android8SPELayer10SetChannelEi(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderVoiceMixC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoiceMix::AudioALSACaptureDataProviderVoiceMix() */
int _ZN7android36AudioALSACaptureDataProviderVoiceMixC2Ev(void);

/* Symbol: _ZN7android17AudioDspCallFinal17initCallFinalTaskEjjti */
/* Demangled: android::AudioDspCallFinal::initCallFinalTask(unsigned int, unsigned int, unsigned short, int) */
int _ZN7android17AudioDspCallFinal17initCallFinalTaskEjjti(void);

/* Symbol: _ZTVN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitchE */
/* Demangled: vtable for android::AudioALSACodecDeviceOutReceiverSpeakerSwitch */
extern void* _ZTVN7android44AudioALSACodecDeviceOutReceiverSpeakerSwitchE;

/* Symbol: _ZN7android17SpeechDriverDummy20SetSpeechEnhancementEb */
/* Demangled: android::SpeechDriverDummy::SetSpeechEnhancement(bool) */
int _ZN7android17SpeechDriverDummy20SetSpeechEnhancementEb(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceULC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoiceUL::AudioALSACaptureDataProviderVoiceUL() */
int _ZN7android35AudioALSACaptureDataProviderVoiceULC2Ev(void);

/* Symbol: _ZN7android23AudioEventThreadManager19hasAudioEventThreadENS_14AudioEventTypeE */
/* Demangled: android::AudioEventThreadManager::hasAudioEventThread(android::AudioEventType) */
int _ZN7android23AudioEventThreadManager19hasAudioEventThreadENS_14AudioEventTypeE(void);

/* Symbol: _ZTVN7android6VectorIPNS_33AudioParameterChangedHidlCallbackEEE */
/* Demangled: vtable for android::Vector<android::AudioParameterChangedHidlCallback*> */
extern void* _ZTVN7android6VectorIPNS_33AudioParameterChangedHidlCallbackEEE;

/* Symbol: _ZN7android19SpeechDriverOpenDSP13TelephonyTxOnEt */
/* Demangled: android::SpeechDriverOpenDSP::TelephonyTxOn(unsigned short) */
int _ZN7android19SpeechDriverOpenDSP13TelephonyTxOnEt(void);

/* Symbol: _ZN7android17AudioALSAHardware10getMicMuteEPb */
/* Demangled: android::AudioALSAHardware::getMicMute(bool*) */
int _ZN7android17AudioALSAHardware10getMicMuteEPb(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase19updateWavDumpHeaderEb */
/* Demangled: android::AudioALSACaptureDataProviderBase::updateWavDumpHeader(bool) */
int _ZN7android32AudioALSACaptureDataProviderBase19updateWavDumpHeaderEb(void);

/* Symbol: _ZN7android27AudioALSALoopbackController17setLoopbackUseLChEb */
/* Demangled: android::AudioALSALoopbackController::setLoopbackUseLCh(bool) */
int _ZN7android27AudioALSALoopbackController17setLoopbackUseLChEb(void);

/* Symbol: _ZN7android18AudioALSAStreamOut11OpenPCMDumpEPKc */
/* Demangled: android::AudioALSAStreamOut::OpenPCMDump(char const*) */
int _ZN7android18AudioALSAStreamOut11OpenPCMDumpEPKc(void);

/* Symbol: _ZN7android15keypcmPlayback3E */
/* Demangled: android::keypcmPlayback3 */
extern void* _ZN7android15keypcmPlayback3E;

/* Symbol: _ZN7android16SpeechVMRecorder11getVmConfigEv */
/* Demangled: android::SpeechVMRecorder::getVmConfig() */
int _ZN7android16SpeechVMRecorder11getVmConfigEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP14TelephonyTxOffEv */
/* Demangled: android::SpeechDriverOpenDSP::TelephonyTxOff() */
int _ZN7android19SpeechDriverOpenDSP14TelephonyTxOffEv(void);

/* Symbol: _ZN7android13streamout_acfE */
/* Demangled: android::streamout_acf */
extern void* _ZN7android13streamout_acfE;

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase27getPresentationQueuedOffsetEPyS1_P8timespecb */
/* Demangled: android::AudioALSAPlaybackHandlerBase::getPresentationQueuedOffset(unsigned long long*, unsigned long long*, timespec*, bool) */
int _ZN7android28AudioALSAPlaybackHandlerBase27getPresentationQueuedOffsetEPyS1_P8timespecb(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSPD1Ev */
/* Demangled: android::SpeechDriverOpenDSP::~SpeechDriverOpenDSP() */
int _ZN7android19SpeechDriverOpenDSPD1Ev(void);

/* Symbol: _ZN7android29AudioALSASampleRateController17hasActiveScenarioEv */
/* Demangled: android::AudioALSASampleRateController::hasActiveScenario() */
int _ZN7android29AudioALSASampleRateController17hasActiveScenarioEv(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderVoiceC1Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoice::AudioALSACaptureDataProviderVoice() */
int _ZN7android33AudioALSACaptureDataProviderVoiceC1Ev(void);

/* Symbol: _ZN7android33AudioALSASpeechLoopbackControllerD0Ev */
/* Demangled: android::AudioALSASpeechLoopbackController::~AudioALSASpeechLoopbackController() */
int _ZN7android33AudioALSASpeechLoopbackControllerD0Ev(void);

/* Symbol: _ZN7android14AudioUSBCenter23setUSBInConnectionStateEjbii */
/* Demangled: android::AudioUSBCenter::setUSBInConnectionState(unsigned int, bool, int, int) */
int _ZN7android14AudioUSBCenter23setUSBInConnectionStateEjbii(void);

/* Symbol: _ZN7android16SpeechExtMemUSIPC2Ev */
/* Demangled: android::SpeechExtMemUSIP::SpeechExtMemUSIP() */
int _ZN7android16SpeechExtMemUSIPC2Ev(void);

/* Symbol: _ZN7android21getSizePerFrameByAttrEPK18stream_attribute_t */
/* Demangled: android::getSizePerFrameByAttr(stream_attribute_t const*) */
int _ZN7android21getSizePerFrameByAttrEPK18stream_attribute_t(void);

/* Symbol: _ZN7android18SpeechDriverNormal12setParameterEPKc */
/* Demangled: android::SpeechDriverNormal::setParameter(char const*) */
int _ZN7android18SpeechDriverNormal12setParameterEPKc(void);

/* Symbol: _ZN7android20GainTableParamParser15updateRecordVolEP14GainTableParamPNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE */
/* Demangled: android::GainTableParamParser::updateRecordVol(GainTableParam*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN7android20GainTableParamParser15updateRecordVolEP14GainTableParamPNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE(void);

/* Symbol: _ZN7android21AudioALSAFMController34checkFmNeedUseDirectConnectionModeEv */
/* Demangled: android::AudioALSAFMController::checkFmNeedUseDirectConnectionMode() */
int _ZN7android21AudioALSAFMController34checkFmNeedUseDirectConnectionModeEv(void);

/* Symbol: _ZN7android8SPELayer11MutexUnlockEv */
/* Demangled: android::SPELayer::MutexUnlock() */
int _ZN7android8SPELayer11MutexUnlockEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataClientSyncIO22AddEchoRefDataProviderEPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureDataClientSyncIO::AddEchoRefDataProvider(android::AudioALSACaptureDataProviderBase*, stream_attribute_t*) */
int _ZN7android32AudioALSACaptureDataClientSyncIO22AddEchoRefDataProviderEPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp26getLowJitterModeSampleRateEv */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::getLowJitterModeSampleRate() */
int _ZN7android27AudioALSAPlaybackHandlerDsp26getLowJitterModeSampleRateEv(void);

/* Symbol: _ZN7android21AudioDspStreamManager19UpdateAurisysConfigEP21aurisys_lib_manager_tP20aurisys_dsp_config_tjPK18stream_attribute_tS7_ */
/* Demangled: android::AudioDspStreamManager::UpdateAurisysConfig(aurisys_lib_manager_t*, aurisys_dsp_config_t*, unsigned int, stream_attribute_t const*, stream_attribute_t const*) */
int _ZN7android21AudioDspStreamManager19UpdateAurisysConfigEP21aurisys_lib_manager_tP20aurisys_dsp_config_tjPK18stream_attribute_tS7_(void);

/* Symbol: _ZN7android17SpeechDriverDummy18VoiceMemoRecordOffEv */
/* Demangled: android::SpeechDriverDummy::VoiceMemoRecordOff() */
int _ZN7android17SpeechDriverDummy18VoiceMemoRecordOffEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager11setFmVolumeEf */
/* Demangled: android::AudioALSAStreamManager::setFmVolume(float) */
int _ZN7android22AudioALSAStreamManager11setFmVolumeEf(void);

/* Symbol: _ZTVN7android27AudioALSAPlaybackHandlerUsbE */
/* Demangled: vtable for android::AudioALSAPlaybackHandlerUsb */
extern void* _ZTVN7android27AudioALSAPlaybackHandlerUsbE;

/* Symbol: _ZN7android25AudioALSAHyBridNLEManager18getNleHwConfigByDbEPi */
/* Demangled: android::AudioALSAHyBridNLEManager::getNleHwConfigByDb(int*) */
int _ZN7android25AudioALSAHyBridNLEManager18getNleHwConfigByDbEPi(void);

/* Symbol: _ZN7android16keypcmVoiceMD1BTE */
/* Demangled: android::keypcmVoiceMD1BT */
extern void* _ZN7android16keypcmVoiceMD1BTE;

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController12setCustSceneEPKc */
/* Demangled: android::AudioALSASpeechPhoneCallController::setCustScene(char const*) */
int _ZN7android34AudioALSASpeechPhoneCallController12setCustSceneEPKc(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerUsb4readEPvi */
/* Demangled: android::AudioALSACaptureHandlerUsb::read(void*, int) */
int _ZN7android26AudioALSACaptureHandlerUsb4readEPvi(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderNormalD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderNormal::~AudioALSACaptureDataProviderNormal() */
int _ZN7android34AudioALSACaptureDataProviderNormalD0Ev(void);

/* Symbol: _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThread18btsco_cvsd_RX_mainEv */
/* Demangled: android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread::btsco_cvsd_RX_main() */
int _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThread18btsco_cvsd_RX_mainEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController12deinitAwsSrcEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::deinitAwsSrc(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController12deinitAwsSrcEPNS_9USBStreamE(void);

/* Symbol: _ZN7android18SpeechDriverNormal13SetSpeechModeEjj */
/* Demangled: android::SpeechDriverNormal::SetSpeechMode(unsigned int, unsigned int) */
int _ZN7android18SpeechDriverNormal13SetSpeechModeEjj(void);

/* Symbol: g_audio_hal_con */
/* Demangled: g_audio_hal_con */
extern void* g_audio_hal_con;

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE7__parseINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE7__parseINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZTVN7android33AudioALSACaptureDataProviderBTSCOE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderBTSCO */
extern void* _ZTVN7android33AudioALSACaptureDataProviderBTSCOE;

/* Symbol: _ZN7android27AudioUSBPhoneCallController16prepareUSBStreamEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::prepareUSBStream(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController16prepareUSBStreamEPNS_9USBStreamE(void);

/* Symbol: _ZNSt3__16vectorINS_7__stateIcEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::__state<char>, std::__1::allocator<std::__1::__state<char> > >::__push_back_slow_path<std::__1::__state<char> >(std::__1::__state<char>&&) */
int _ZNSt3__16vectorINS_7__stateIcEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN7android17AudioDspCallFinal19setCallFinalruntimeEb */
/* Demangled: android::AudioDspCallFinal::setCallFinalruntime(bool) */
int _ZN7android17AudioDspCallFinal19setCallFinalruntimeEb(void);

/* Symbol: _ZN7android12SpeechConfig14getDriverParamEhPv */
/* Demangled: android::SpeechConfig::getDriverParam(unsigned char, void*) */
int _ZN7android12SpeechConfig14getDriverParamEhPv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase37provideEchoRefCaptureDataToAllClientsEj */
/* Demangled: android::AudioALSACaptureDataProviderBase::provideEchoRefCaptureDataToAllClients(unsigned int) */
int _ZN7android32AudioALSACaptureDataProviderBase37provideEchoRefCaptureDataToAllClientsEj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl27BT_SCO_TX_GetTimeBufferInfoEv */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_TX_GetTimeBufferInfo() */
int _ZN7android18AudioBTCVSDControl27BT_SCO_TX_GetTimeBufferInfoEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager14setSgenFreqDivEii */
/* Demangled: android::AudioALSAHardwareResourceManager::setSgenFreqDiv(int, int) */
int _ZN7android32AudioALSAHardwareResourceManager14setSgenFreqDivEii(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void);

/* Symbol: _ZNKSt3__120__match_char_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__match_char_collate<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__120__match_char_collateIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android25SpeechPcmMixerTelephonyTx12mTelephonyTxE */
/* Demangled: android::SpeechPcmMixerTelephonyTx::mTelephonyTx */
extern void* _ZN7android25SpeechPcmMixerTelephonyTx12mTelephonyTxE;

/* Symbol: _ZN7android17SpeechParserGen9514getParamBufferENS_21SpeechParserAttributeEPNS_17SpeechDataBufTypeE */
/* Demangled: android::SpeechParserGen95::getParamBuffer(android::SpeechParserAttribute, android::SpeechDataBufType*) */
int _ZN7android17SpeechParserGen9514getParamBufferENS_21SpeechParserAttributeEPNS_17SpeechDataBufTypeE(void);

/* Symbol: _ZN7android20streamout_log_proptyE */
/* Demangled: android::streamout_log_propty */
extern void* _ZN7android20streamout_log_proptyE;

/* Symbol: _ZNSt3__16vectorIN7android14USBDeviceParamENS_9allocatorIS2_EEE8__appendEj */
/* Demangled: std::__1::vector<android::USBDeviceParam, std::__1::allocator<android::USBDeviceParam> >::__append(unsigned int) */
int _ZNSt3__16vectorIN7android14USBDeviceParamENS_9allocatorIS2_EEE8__appendEj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadD2Ev */
/* Demangled: android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread::~AudioBTCVSDLoopbackRxThread() */
int _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSACaptureHandlerBase*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android14AudioUSBCenter24setUSBOutConnectionStateEjbii */
/* Demangled: android::AudioUSBCenter::setUSBOutConnectionState(unsigned int, bool, int, int) */
int _ZN7android14AudioUSBCenter24setUSBOutConnectionStateEjbii(void);

/* Symbol: _ZN7android17WCNChipController16BTChipSyncFormatEv */
/* Demangled: android::WCNChipController::BTChipSyncFormat() */
int _ZN7android17WCNChipController16BTChipSyncFormatEv(void);

/* Symbol: _ZN7android30AudioALSACaptureHandlerFMRadioD1Ev */
/* Demangled: android::AudioALSACaptureHandlerFMRadio::~AudioALSACaptureHandlerFMRadio() */
int _ZN7android30AudioALSACaptureHandlerFMRadioD1Ev(void);

/* Symbol: _ZN7android16SpeechExtMemCCCI15checkModemAliveEv */
/* Demangled: android::SpeechExtMemCCCI::checkModemAlive() */
int _ZN7android16SpeechExtMemCCCI15checkModemAliveEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP16setMDVolumeIndexEiii */
/* Demangled: android::SpeechDriverOpenDSP::setMDVolumeIndex(int, int, int) */
int _ZN7android19SpeechDriverOpenDSP16setMDVolumeIndexEiii(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfo16ResetBesRecSceneEv */
/* Demangled: android::AudioSpeechEnhanceInfo::ResetBesRecScene() */
int _ZN7android22AudioSpeechEnhanceInfo16ResetBesRecSceneEv(void);

/* Symbol: _ZNSt3__120regex_token_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEppEv */
/* Demangled: std::__1::regex_token_iterator<std::__1::__wrap_iter<char const*>, char, std::__1::regex_traits<char> >::operator++() */
int _ZNSt3__120regex_token_iteratorINS_11__wrap_iterIPKcEEcNS_12regex_traitsIcEEEppEv(void);

/* Symbol: init_audio_sw_mixer */
/* Demangled: init_audio_sw_mixer */
int init_audio_sw_mixer(void);

/* Symbol: _ZTVN7android34AudioALSACodecDeviceOutSpeakerPMICE */
/* Demangled: vtable for android::AudioALSACodecDeviceOutSpeakerPMIC */
extern void* _ZTVN7android34AudioALSACodecDeviceOutSpeakerPMICE;

/* Symbol: _ZN7android36AudioALSACaptureDataProviderModemDaiD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderModemDai::~AudioALSACaptureDataProviderModemDai() */
int _ZN7android36AudioALSACaptureDataProviderModemDaiD0Ev(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase21set_task_pcmdump_infoEjjPv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::set_task_pcmdump_info(unsigned int, unsigned int, void*) */
int _ZN7android28AudioALSAPlaybackHandlerBase21set_task_pcmdump_infoEjjPv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl15BT_SCO_RX_BeginEi */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_RX_Begin(int) */
int _ZN7android18AudioBTCVSDControl15BT_SCO_RX_BeginEi(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallController18deinitBitConverterEPNS_9USBStreamE */
/* Demangled: android::AudioUSBPhoneCallController::deinitBitConverter(android::USBStream*) */
int _ZN7android27AudioUSBPhoneCallController18deinitBitConverterEPNS_9USBStreamE(void);

/* Symbol: audio_sample_rate_string_to_masks */
/* Demangled: audio_sample_rate_string_to_masks */
int audio_sample_rate_string_to_masks(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp12openDspHwPcmEv */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::openDspHwPcm() */
int _ZN7android27AudioALSAPlaybackHandlerDsp12openDspHwPcmEv(void);

/* Symbol: _ZTVN7android31AudioALSAPlaybackHandlerOffloadE */
/* Demangled: vtable for android::AudioALSAPlaybackHandlerOffload */
extern void* _ZTVN7android31AudioALSAPlaybackHandlerOffloadE;

/* Symbol: dump_task_config */
/* Demangled: dump_task_config */
int dump_task_config(void);

/* Symbol: _ZN7android18SpeechDriverNormal30SetAcousticLoopbackDelayFramesEi */
/* Demangled: android::SpeechDriverNormal::SetAcousticLoopbackDelayFrames(int) */
int _ZN7android18SpeechDriverNormal30SetAcousticLoopbackDelayFramesEi(void);

/* Symbol: _ZN7android8SPELayer17SetVMDumpFileNameEPKc */
/* Demangled: android::SPELayer::SetVMDumpFileName(char const*) */
int _ZN7android8SPELayer17SetVMDumpFileNameEPKc(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerTDMC1EP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureHandlerTDM::AudioALSACaptureHandlerTDM(stream_attribute_t*) */
int _ZN7android26AudioALSACaptureHandlerTDMC1EP18stream_attribute_t(void);

/* Symbol: _ZN7android21AudioDspStreamManager13getDspVersionEv */
/* Demangled: android::AudioDspStreamManager::getDspVersion() */
int _ZN7android21AudioDspStreamManager13getDspVersionEv(void);

/* Symbol: _ZN7android30AudioALSAPlaybackHandlerNormal22ChooseTargetSampleRateEjj */
/* Demangled: android::AudioALSAPlaybackHandlerNormal::ChooseTargetSampleRate(unsigned int, unsigned int) */
int _ZN7android30AudioALSAPlaybackHandlerNormal22ChooseTargetSampleRateEjj(void);

/* Symbol: _ZN7android24AudioALSACodecDeviceBase6mMixerE */
/* Demangled: android::AudioALSACodecDeviceBase::mMixer */
extern void* _ZN7android24AudioALSACodecDeviceBase6mMixerE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSACaptureHandlerBase*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEE10do_destroyEPvj(void);

/* Symbol: _ZN7android21AudioDspStreamManager21getDspInHandlerEnableEj */
/* Demangled: android::AudioDspStreamManager::getDspInHandlerEnable(unsigned int) */
int _ZN7android21AudioDspStreamManager21getDspInHandlerEnableEj(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_extended_reg_expIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_extended_reg_exp<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE24__parse_extended_reg_expIPKcEET_S7_S7_(void);

/* Symbol: _ZN7android37AudioALSAPlaybackHandlerFMTransmitter5closeEv */
/* Demangled: android::AudioALSAPlaybackHandlerFMTransmitter::close() */
int _ZN7android37AudioALSAPlaybackHandlerFMTransmitter5closeEv(void);

/* Symbol: _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadD1Ev */
/* Demangled: android::AudioALSALoopbackController::AudioMTKLoopbackThread::~AudioMTKLoopbackThread() */
int _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThreadD1Ev(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase15getMmapPositionEP19audio_mmap_position */
/* Demangled: android::AudioALSACaptureDataProviderBase::getMmapPosition(audio_mmap_position*) */
int _ZN7android32AudioALSACaptureDataProviderBase15getMmapPositionEP19audio_mmap_position(void);

/* Symbol: _ZN7android16SpeechParserBase18uniqueSpeechParserE */
/* Demangled: android::SpeechParserBase::uniqueSpeechParser */
extern void* _ZN7android16SpeechParserBase18uniqueSpeechParserE;

/* Symbol: _ZN7android20streamout_s2m_proptyE */
/* Demangled: android::streamout_s2m_propty */
extern void* _ZN7android20streamout_s2m_proptyE;

/* Symbol: _ZN7android22AudioALSADataProcessorD1Ev */
/* Demangled: android::AudioALSADataProcessor::~AudioALSADataProcessor() */
int _ZN7android22AudioALSADataProcessorD1Ev(void);

/* Symbol: _ZTVN7android31AudioALSACaptureDataProviderANCE */
/* Demangled: vtable for android::AudioALSACaptureDataProviderANC */
extern void* _ZTVN7android31AudioALSACaptureDataProviderANCE;

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager22getTVOutFileDescriptorEv */
/* Demangled: android::AudioALSAHardwareResourceManager::getTVOutFileDescriptor() */
int _ZN7android32AudioALSAHardwareResourceManager22getTVOutFileDescriptorEv(void);

/* Symbol: _ZN7android18SpeechPcmMixerBaseD2Ev */
/* Demangled: android::SpeechPcmMixerBase::~SpeechPcmMixerBase() */
int _ZN7android18SpeechPcmMixerBaseD2Ev(void);

/* Symbol: _ZN7android22AudioMTKGainController18isEarpieceCategoryE11GAIN_DEVICE */
/* Demangled: android::AudioMTKGainController::isEarpieceCategory(GAIN_DEVICE) */
int _ZN7android22AudioMTKGainController18isEarpieceCategoryE11GAIN_DEVICE(void);

/* Symbol: _ZTv0_n16_N7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThread10onFirstRefEv */
/* Demangled: virtual thunk to android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread::onFirstRef() */
int _ZTv0_n16_N7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThread10onFirstRefEv(void);

/* Symbol: _ZTVN7android30AudioALSAVoiceWakeUpControllerE */
/* Demangled: vtable for android::AudioALSAVoiceWakeUpController */
extern void* _ZTVN7android30AudioALSAVoiceWakeUpControllerE;

/* Symbol: _ZN7android19SpeechShareMemGen95D1Ev */
/* Demangled: android::SpeechShareMemGen95::~SpeechShareMemGen95() */
int _ZN7android19SpeechShareMemGen95D1Ev(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP24SetSpeechEnhancementMaskERKNS_21sph_enh_mask_struct_tE */
/* Demangled: android::SpeechDriverOpenDSP::SetSpeechEnhancementMask(android::sph_enh_mask_struct_t const&) */
int _ZN7android19SpeechDriverOpenDSP24SetSpeechEnhancementMaskERKNS_21sph_enh_mask_struct_tE(void);

/* Symbol: _ZNK7android6VectorINS_8String16EE12do_constructEPvj */
/* Demangled: android::Vector<android::String16>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_8String16EE12do_constructEPvj(void);

/* Symbol: _ZN7android21AudioALSAFMControllerD0Ev */
/* Demangled: android::AudioALSAFMController::~AudioALSAFMController() */
int _ZN7android21AudioALSAFMControllerD0Ev(void);

/* Symbol: _ZN7android16keypcmVOWCaptureE */
/* Demangled: android::keypcmVOWCapture */
extern void* _ZN7android16keypcmVOWCaptureE;

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController29muteDlForEnforcedAudibleSoundEb */
/* Demangled: android::AudioALSASpeechPhoneCallController::muteDlForEnforcedAudibleSound(bool) */
int _ZN7android34AudioALSASpeechPhoneCallController29muteDlForEnforcedAudibleSoundEb(void);

/* Symbol: _ZN7android8SPELayer13SetSampleRateENS_8SPE_MODEEl */
/* Demangled: android::SPELayer::SetSampleRate(android::SPE_MODE, long) */
int _ZN7android8SPELayer13SetSampleRateENS_8SPE_MODEEl(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontERKS3_ */
/* Demangled: std::__1::__split_buffer<std::__1::__state<char>*, std::__1::allocator<std::__1::__state<char>*> >::push_front(std::__1::__state<char>* const&) */
int _ZNSt3__114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontERKS3_(void);

/* Symbol: _ZN7android14newMtkAudioSrcEjjjj14SRC_PCM_FORMAT */
/* Demangled: android::newMtkAudioSrc(unsigned int, unsigned int, unsigned int, unsigned int, SRC_PCM_FORMAT) */
int _ZN7android14newMtkAudioSrcEjjjj14SRC_PCM_FORMAT(void);

/* Symbol: _ZN7android16SpeechVMRecorder5closeEv */
/* Demangled: android::SpeechVMRecorder::close() */
int _ZN7android16SpeechVMRecorder5closeEv(void);

/* Symbol: _ZN7android26CVSDLoopbackGetWriteBufferEPPhPj */
/* Demangled: android::CVSDLoopbackGetWriteBuffer(unsigned char**, unsigned int*) */
int _ZN7android26CVSDLoopbackGetWriteBufferEPPhPj(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager24CloseWiredHeadsetMicPathEv */
/* Demangled: android::AudioALSAHardwareResourceManager::CloseWiredHeadsetMicPath() */
int _ZN7android32AudioALSAHardwareResourceManager24CloseWiredHeadsetMicPathEv(void);

/* Symbol: _ZN7android8AudioFtm17Audio_FM_I2S_PlayEc */
/* Demangled: android::AudioFtm::Audio_FM_I2S_Play(char) */
int _ZN7android8AudioFtm17Audio_FM_I2S_PlayEc(void);

/* Symbol: _ZNKSt3__118__match_char_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__match_char_icase<char, std::__1::regex_traits<char> >::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__118__match_char_icaseIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android18AudioALSAStreamOut12closeWavDumpEv */
/* Demangled: android::AudioALSAStreamOut::closeWavDump() */
int _ZN7android18AudioALSAStreamOut12closeWavDumpEv(void);

/* Symbol: _ZN7android21AudioDspStreamManager10stopDeviceEj */
/* Demangled: android::AudioDspStreamManager::stopDevice(unsigned int) */
int _ZN7android21AudioDspStreamManager10stopDeviceEj(void);

/* Symbol: sw_mixer_source_write */
/* Demangled: sw_mixer_source_write */
int sw_mixer_source_write(void);

/* Symbol: _ZN7android17WCNChipController15InitAudioBTInfoEv */
/* Demangled: android::WCNChipController::InitAudioBTInfo() */
int _ZN7android17WCNChipController15InitAudioBTInfoEv(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerVoiceC2EPK18stream_attribute_t */
/* Demangled: android::AudioALSAPlaybackHandlerVoice::AudioALSAPlaybackHandlerVoice(stream_attribute_t const*) */
int _ZN7android29AudioALSAPlaybackHandlerVoiceC2EPK18stream_attribute_t(void);

/* Symbol: _ZN7android33AudioALSACaptureDataProviderVoiceD2Ev */
/* Demangled: android::AudioALSACaptureDataProviderVoice::~AudioALSACaptureDataProviderVoice() */
int _ZN7android33AudioALSACaptureDataProviderVoiceD2Ev(void);

/* Symbol: _ZN7android22AudioALSAStreamManager29CheckStreaminPhonecallRoutingEjb */
/* Demangled: android::AudioALSAStreamManager::CheckStreaminPhonecallRouting(unsigned int, bool) */
int _ZN7android22AudioALSAStreamManager29CheckStreaminPhonecallRoutingEjb(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase24DestroyAurisysLibManagerEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::DestroyAurisysLibManager() */
int _ZN7android28AudioALSAPlaybackHandlerBase24DestroyAurisysLibManagerEv(void);

/* Symbol: _ZN7android10Record2WayD0Ev */
/* Demangled: android::Record2Way::~Record2Way() */
int _ZN7android10Record2WayD0Ev(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallController10setTtyModeENS_11TtyModeTypeE */
/* Demangled: android::AudioALSASpeechPhoneCallController::setTtyMode(android::TtyModeType) */
int _ZN7android34AudioALSASpeechPhoneCallController10setTtyModeENS_11TtyModeTypeE(void);

/* Symbol: _ZN7android36AudioALSACaptureDataProviderVoiceMix11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderVoiceMix::getInstance() */
int _ZN7android36AudioALSACaptureDataProviderVoiceMix11getInstanceEv(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient14TransferFormatEPc14audio_format_tS2_j */
/* Demangled: android::AudioALSACaptureDataClient::TransferFormat(char*, audio_format_t, audio_format_t, unsigned int) */
int _ZN7android26AudioALSACaptureDataClient14TransferFormatEPc14audio_format_tS2_j(void);

/* Symbol: _ZN7android17AudioVIBSPKVsgGen9vsgDeInitEv */
/* Demangled: android::AudioVIBSPKVsgGen::vsgDeInit() */
int _ZN7android17AudioVIBSPKVsgGen9vsgDeInitEv(void);

/* Symbol: _ZN7android12SpeechConfig4initEv */
/* Demangled: android::SpeechConfig::init() */
int _ZN7android12SpeechConfig4initEv(void);

/* Symbol: _ZN7android22AudioSpeechEnhanceInfoD1Ev */
/* Demangled: android::AudioSpeechEnhanceInfo::~AudioSpeechEnhanceInfo() */
int _ZN7android22AudioSpeechEnhanceInfoD1Ev(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBaseD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderBase::~AudioALSACaptureDataProviderBase() */
int _ZN7android32AudioALSACaptureDataProviderBaseD1Ev(void);

/* Symbol: _ZN7android18SpeechMessageQueue24signalElementProcessDoneEj */
/* Demangled: android::SpeechMessageQueue::signalElementProcessDone(unsigned int) */
int _ZN7android18SpeechMessageQueue24signalElementProcessDoneEj(void);

/* Symbol: _ZN7android19SpeechDriverFactoryD0Ev */
/* Demangled: android::SpeechDriverFactory::~SpeechDriverFactory() */
int _ZN7android19SpeechDriverFactoryD0Ev(void);

/* Symbol: _ZN7android8SPELayerC2Ev */
/* Demangled: android::SPELayer::SPELayer() */
int _ZN7android8SPELayerC2Ev(void);

/* Symbol: _ZN7android17AudioALSAHardware13setRttEnabledEb */
/* Demangled: android::AudioALSAHardware::setRttEnabled(bool) */
int _ZN7android17AudioALSAHardware13setRttEnabledEb(void);

/* Symbol: _ZN7android26AudioALSACaptureDataClient11ApplyVolumeEPvj */
/* Demangled: android::AudioALSACaptureDataClient::ApplyVolume(void*, unsigned int) */
int _ZN7android26AudioALSACaptureDataClient11ApplyVolumeEPvj(void);

/* Symbol: aurisys_arsi_set_ul_digital_gain */
/* Demangled: aurisys_arsi_set_ul_digital_gain */
int aurisys_arsi_set_ul_digital_gain(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderAAudioC2Ev */
/* Demangled: android::AudioALSACaptureDataProviderAAudio::AudioALSACaptureDataProviderAAudio() */
int _ZN7android34AudioALSACaptureDataProviderAAudioC2Ev(void);

/* Symbol: _ZN7android8SPELayer11GetAPPTableENS_8SPE_MODEE */
/* Demangled: android::SPELayer::GetAPPTable(android::SPE_MODE) */
int _ZN7android8SPELayer11GetAPPTableENS_8SPE_MODEE(void);

/* Symbol: _ZN7android8SPELayer18SetUpLinkTotalGainENS_8SPE_MODEEh */
/* Demangled: android::SPELayer::SetUpLinkTotalGain(android::SPE_MODE, unsigned char) */
int _ZN7android8SPELayer18SetUpLinkTotalGainENS_8SPE_MODEEh(void);

/* Symbol: _ZN7android18AudioALSAStreamOut21getNextWriteTimestampEPx */
/* Demangled: android::AudioALSAStreamOut::getNextWriteTimestamp(long long*) */
int _ZN7android18AudioALSAStreamOut21getNextWriteTimestampEPx(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSACaptureHandlerBase*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_27AudioALSACaptureHandlerBaseEEEE10do_compareEPKvS7_(void);

/* Symbol: get_enum_by_string_audio_format */
/* Demangled: get_enum_by_string_audio_format */
int get_enum_by_string_audio_format(void);

/* Symbol: _ZN7android15keypcmPlayback4E */
/* Demangled: android::keypcmPlayback4 */
extern void* _ZN7android15keypcmPlayback4E;

/* Symbol: _ZN7android16SpeechVMRecorder24getCtmDebugDataFromModemENS_7RingBufEP7__sFILE */
/* Demangled: android::SpeechVMRecorder::getCtmDebugDataFromModem(android::RingBuf, __sFILE*) */
int _ZN7android16SpeechVMRecorder24getCtmDebugDataFromModemENS_7RingBufEP7__sFILE(void);

/* Symbol: __aeabi_ul2d */
/* Demangled: __aeabi_ul2d */
int __aeabi_ul2d(void);

/* Symbol: _ZN7android17AudioMessengerIPI13loadTaskSceneEh */
/* Demangled: android::AudioMessengerIPI::loadTaskScene(unsigned char) */
int _ZN7android17AudioMessengerIPI13loadTaskSceneEh(void);

/* Symbol: _ZN7android23AudioMTKHeadSetMessager15SetHeadSetStateEi */
/* Demangled: android::AudioMTKHeadSetMessager::SetHeadSetState(int) */
int _ZN7android23AudioMTKHeadSetMessager15SetHeadSetStateEi(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_charEc */
/* Demangled: std::__1::basic_regex<char, std::__1::regex_traits<char> >::__push_char(char) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE11__push_charEc(void);

/* Symbol: _ZN7android27SpeechDataProcessingHandler21destoryInstanceSafelyEv */
/* Demangled: android::SpeechDataProcessingHandler::destoryInstanceSafely() */
int _ZN7android27SpeechDataProcessingHandler21destoryInstanceSafelyEv(void);

/* Symbol: _ZN7android34AudioALSACaptureDataProviderBTCVSD5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderBTCVSD::close() */
int _ZN7android34AudioALSACaptureDataProviderBTCVSD5closeEv(void);

/* Symbol: _ZN7android21AudioALSADeviceParser20GetCardIndexByStringENS_7String8E */
/* Demangled: android::AudioALSADeviceParser::GetCardIndexByString(android::String8) */
int _ZN7android21AudioALSADeviceParser20GetCardIndexByStringENS_7String8E(void);

/* Symbol: _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadC2EjPcj */
/* Demangled: android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread::AudioBTCVSDLoopbackRxThread(unsigned int, char*, unsigned int) */
int _ZN7android18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadC2EjPcj(void);

/* Symbol: __aeabi_ul2f */
/* Demangled: __aeabi_ul2f */
int __aeabi_ul2f(void);

/* Symbol: _ZN7android18SpeechDriverNormal17setApWaitAckMsgIDEPNS_9sph_msg_tE */
/* Demangled: android::SpeechDriverNormal::setApWaitAckMsgID(android::sph_msg_t*) */
int _ZN7android18SpeechDriverNormal17setApWaitAckMsgIDEPNS_9sph_msg_tE(void);

/* Symbol: _ZN7android12AudioFtmBase20Audio_Set_Speaker_OnEi */
/* Demangled: android::AudioFtmBase::Audio_Set_Speaker_On(int) */
int _ZN7android12AudioFtmBase20Audio_Set_Speaker_OnEi(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerHDMID0Ev */
/* Demangled: android::AudioALSAPlaybackHandlerHDMI::~AudioALSAPlaybackHandlerHDMI() */
int _ZN7android28AudioALSAPlaybackHandlerHDMID0Ev(void);

/* Symbol: _ZN7android19AudioALSAParamTuner11getDMNRGainEtPt */
/* Demangled: android::AudioALSAParamTuner::getDMNRGain(unsigned short, unsigned short*) */
int _ZN7android19AudioALSAParamTuner11getDMNRGainEtPt(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerDspD1Ev */
/* Demangled: android::AudioALSACaptureHandlerDsp::~AudioALSACaptureHandlerDsp() */
int _ZN7android26AudioALSACaptureHandlerDspD1Ev(void);

/* Symbol: _ZN7android22AudioSmartPaController10speakerOffEv */
/* Demangled: android::AudioSmartPaController::speakerOff() */
int _ZN7android22AudioSmartPaController10speakerOffEv(void);

/* Symbol: _ZN7android19SpeechDriverFactory19SetActiveModemIndexENS_13modem_index_tE */
/* Demangled: android::SpeechDriverFactory::SetActiveModemIndex(android::modem_index_t) */
int _ZN7android19SpeechDriverFactory19SetActiveModemIndexENS_13modem_index_tE(void);

/* Symbol: _ZN7android18AudioBTCVSDControl11getInstanceEv */
/* Demangled: android::AudioBTCVSDControl::getInstance() */
int _ZN7android18AudioBTCVSDControl11getInstanceEv(void);

/* Symbol: _ZNKSt3__112__match_charIcE6__execERNS_7__stateIcEE */
/* Demangled: std::__1::__match_char<char>::__exec(std::__1::__state<char>&) const */
int _ZNKSt3__112__match_charIcE6__execERNS_7__stateIcEE(void);

/* Symbol: _ZN7android18AudioVIBSPKControl11getInstanceEv */
/* Demangled: android::AudioVIBSPKControl::getInstance() */
int _ZN7android18AudioVIBSPKControl11getInstanceEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager7getModeEv */
/* Demangled: android::AudioALSAStreamManager::getMode() */
int _ZN7android22AudioALSAStreamManager7getModeEv(void);

/* Symbol: _ZTVN7android26AudioALSACaptureHandlerAECE */
/* Demangled: vtable for android::AudioALSACaptureHandlerAEC */
extern void* _ZTVN7android26AudioALSACaptureHandlerAECE;

/* Symbol: _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadC2ENS_23EXTMD_BTSCO_THREAD_TYPEEPcj */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDThread::AudioExtMDCVSDThread(android::EXTMD_BTSCO_THREAD_TYPE, char*, unsigned int) */
int _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThreadC2ENS_23EXTMD_BTSCO_THREAD_TYPEEPcj(void);

/* Symbol: _ZTVN7android17AudioALSAStreamInE */
/* Demangled: vtable for android::AudioALSAStreamIn */
extern void* _ZTVN7android17AudioALSAStreamInE;

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager24setSpeakerStatusChangeCbEPFbNS_12DeviceStatusEjE */
/* Demangled: android::AudioALSAHardwareResourceManager::setSpeakerStatusChangeCb(bool (*)(android::DeviceStatus, unsigned int)) */
int _ZN7android32AudioALSAHardwareResourceManager24setSpeakerStatusChangeCbEPFbNS_12DeviceStatusEjE(void);

/* Symbol: _ZN7android17AudioDspCallFinalD0Ev */
/* Demangled: android::AudioDspCallFinal::~AudioDspCallFinal() */
int _ZN7android17AudioDspCallFinalD0Ev(void);

/* Symbol: _ZN7android19AudioALSAParamTuner8setDLPGAEj */
/* Demangled: android::AudioALSAParamTuner::setDLPGA(unsigned int) */
int _ZN7android19AudioALSAParamTuner8setDLPGAEj(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_ORD_CHAR_EREIPKcEET_S7_S7_ */
/* Demangled: char const* std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_ORD_CHAR_ERE<char const*>(char const*, char const*) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE20__parse_ORD_CHAR_EREIPKcEET_S7_S7_(void);

/* Symbol: _ZN7android8AudioFtm30HeadsetMic_EarphoneLR_LoopbackEcc */
/* Demangled: android::AudioFtm::HeadsetMic_EarphoneLR_Loopback(char, char) */
int _ZN7android8AudioFtm30HeadsetMic_EarphoneLR_LoopbackEcc(void);

/* Symbol: _ZN7android14AudioUSBCenter10mUSBCenterE */
/* Demangled: android::AudioUSBCenter::mUSBCenter */
extern void* _ZN7android14AudioUSBCenter10mUSBCenterE;

/* Symbol: _ZN7android14keypcmCapture1E */
/* Demangled: android::keypcmCapture1 */
extern void* _ZN7android14keypcmCapture1E;

/* Symbol: _ZN7android16SpeechVMRecorder13startCtmDebugEv */
/* Demangled: android::SpeechVMRecorder::startCtmDebug() */
int _ZN7android16SpeechVMRecorder13startCtmDebugEv(void);

/* Symbol: _ZN7android32AudioALSACaptureDataClientSyncIOC2EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t */
/* Demangled: android::AudioALSACaptureDataClientSyncIO::AudioALSACaptureDataClientSyncIO(android::AudioALSACaptureDataProviderBase*, stream_attribute_t*) */
int _ZN7android32AudioALSACaptureDataClientSyncIOC2EPNS_32AudioALSACaptureDataProviderBaseEP18stream_attribute_t(void);

/* Symbol: _ZN7android16AudioBitTrueTestD1Ev */
/* Demangled: android::AudioBitTrueTest::~AudioBitTrueTest() */
int _ZN7android16AudioBitTrueTestD1Ev(void);

/* Symbol: _ZN7android22AudioSmartPaController17setSmartPaRuntimeEj */
/* Demangled: android::AudioSmartPaController::setSmartPaRuntime(unsigned int) */
int _ZN7android22AudioSmartPaController17setSmartPaRuntimeEj(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderEchoRef4openEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRef::open() */
int _ZN7android35AudioALSACaptureDataProviderEchoRef4openEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamIn*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEE12do_constructEPvj(void);

/* Symbol: _ZN7android16AudioBitTrueTest11getInstanceEv */
/* Demangled: android::AudioBitTrueTest::getInstance() */
int _ZN7android16AudioBitTrueTest11getInstanceEv(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderEchoRef11getInstanceEv */
/* Demangled: android::AudioALSACaptureDataProviderEchoRef::getInstance() */
int _ZN7android35AudioALSACaptureDataProviderEchoRef11getInstanceEv(void);

/* Symbol: _ZN7android28AudioALSAPlaybackHandlerBase5startEv */
/* Demangled: android::AudioALSAPlaybackHandlerBase::start() */
int _ZN7android28AudioALSAPlaybackHandlerBase5startEv(void);

/* Symbol: _ZN7android26keypcmHostlessADDADLI2SOutE */
/* Demangled: android::keypcmHostlessADDADLI2SOut */
extern void* _ZN7android26keypcmHostlessADDADLI2SOutE;

/* Symbol: _ZN7android19SpeechDriverOpenDSP14setBtSpkDeviceEb */
/* Demangled: android::SpeechDriverOpenDSP::setBtSpkDevice(bool) */
int _ZN7android19SpeechDriverOpenDSP14setBtSpkDeviceEb(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj(void);

/* Symbol: _ZN7android15LoopbackManagerC1Ev */
/* Demangled: android::LoopbackManager::LoopbackManager() */
int _ZN7android15LoopbackManagerC1Ev(void);

/* Symbol: _ZN7android31AudioALSAPlaybackHandlerOffload16SetLowJitterModeEbj */
/* Demangled: android::AudioALSAPlaybackHandlerOffload::SetLowJitterMode(bool, unsigned int) */
int _ZN7android31AudioALSAPlaybackHandlerOffload16SetLowJitterModeEbj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSAPlaybackHandlerBase*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSAPlaybackHandlerBase*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIyPNS_28AudioALSAPlaybackHandlerBaseEEEEE;

/* Symbol: _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMICC1Ev */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerEarphonePMIC::AudioALSACodecDeviceOutSpeakerEarphonePMIC() */
int _ZN7android42AudioALSACodecDeviceOutSpeakerEarphonePMICC1Ev(void);

/* Symbol: _ZN7android17AudioALSAStreamIn7routingEj */
/* Demangled: android::AudioALSAStreamIn::routing(unsigned int) */
int _ZN7android17AudioALSAStreamIn7routingEj(void);

/* Symbol: _ZN7android21AudioDspStreamManager11getInstanceEv */
/* Demangled: android::AudioDspStreamManager::getInstance() */
int _ZN7android21AudioDspStreamManager11getInstanceEv(void);

/* Symbol: _ZN7android17AudioMessengerIPIC2Ev */
/* Demangled: android::AudioMessengerIPI::AudioMessengerIPI() */
int _ZN7android17AudioMessengerIPIC2Ev(void);

/* Symbol: _ZN7android17SpeechDriverDummy13SetUplinkMuteEb */
/* Demangled: android::SpeechDriverDummy::SetUplinkMute(bool) */
int _ZN7android17SpeechDriverDummy13SetUplinkMuteEb(void);

/* Symbol: _ZN7android17SpeechDriverDummy17VideoTelephonyOffEv */
/* Demangled: android::SpeechDriverDummy::VideoTelephonyOff() */
int _ZN7android17SpeechDriverDummy17VideoTelephonyOffEv(void);

/* Symbol: _ZN7android22AudioALSAStreamManager16closeInputStreamEP25AudioMTKStreamInInterface */
/* Demangled: android::AudioALSAStreamManager::closeInputStream(AudioMTKStreamInInterface*) */
int _ZN7android22AudioALSAStreamManager16closeInputStreamEP25AudioMTKStreamInInterface(void);

/* Symbol: _ZN7android34AudioALSACodecDeviceOutSpeakerPMIC4openEv */
/* Demangled: android::AudioALSACodecDeviceOutSpeakerPMIC::open() */
int _ZN7android34AudioALSACodecDeviceOutSpeakerPMIC4openEv(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager21setHWGain2DigitalGainEji */
/* Demangled: android::AudioALSAHardwareResourceManager::setHWGain2DigitalGain(unsigned int, int) */
int _ZN7android32AudioALSAHardwareResourceManager21setHWGain2DigitalGainEji(void);

/* Symbol: _ZN7android22AudioMTKGainController12ApplyMicGainE13GAIN_MIC_MODE11GAIN_DEVICE12audio_mode_t */
/* Demangled: android::AudioMTKGainController::ApplyMicGain(GAIN_MIC_MODE, GAIN_DEVICE, audio_mode_t) */
int _ZN7android22AudioMTKGainController12ApplyMicGainE13GAIN_MIC_MODE11GAIN_DEVICE12audio_mode_t(void);

/* Symbol: _ZN7android8SPELayer16TimeStampCompareEPNS_10BufferInfoES2_b */
/* Demangled: android::SPELayer::TimeStampCompare(android::BufferInfo*, android::BufferInfo*, bool) */
int _ZN7android8SPELayer16TimeStampCompareEPNS_10BufferInfoES2_b(void);

/* Symbol: _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThread10onFirstRefEv */
/* Demangled: android::AudioALSALoopbackController::AudioMTKLoopbackThread::onFirstRef() */
int _ZN7android27AudioALSALoopbackController22AudioMTKLoopbackThread10onFirstRefEv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread10threadLoopEv */
/* Demangled: android::AudioBTCVSDControl::AudioExtMDCVSDThread::threadLoop() */
int _ZN7android18AudioBTCVSDControl20AudioExtMDCVSDThread10threadLoopEv(void);

/* Symbol: _ZN7android27AudioUSBPhoneCallControllerC1Ev */
/* Demangled: android::AudioUSBPhoneCallController::AudioUSBPhoneCallController() */
int _ZN7android27AudioUSBPhoneCallControllerC1Ev(void);

/* Symbol: _ZN7android16convertMsToBytesEjPK18stream_attribute_t */
/* Demangled: android::convertMsToBytes(unsigned int, stream_attribute_t const*) */
int _ZN7android16convertMsToBytesEjPK18stream_attribute_t(void);

/* Symbol: _ZN7android29AudioALSACaptureHandlerNormal7routingEj */
/* Demangled: android::AudioALSACaptureHandlerNormal::routing(unsigned int) */
int _ZN7android29AudioALSACaptureHandlerNormal7routingEj(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderEchoRefD0Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRef::~AudioALSACaptureDataProviderEchoRef() */
int _ZN7android35AudioALSACaptureDataProviderEchoRefD0Ev(void);

/* Symbol: _ZN7android18AudioALSAStreamOutD0Ev */
/* Demangled: android::AudioALSAStreamOut::~AudioALSAStreamOut() */
int _ZN7android18AudioALSAStreamOutD0Ev(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerMixer23closeMixerTargetHandlerEv */
/* Demangled: android::AudioALSAPlaybackHandlerMixer::closeMixerTargetHandler() */
int _ZN7android29AudioALSAPlaybackHandlerMixer23closeMixerTargetHandlerEv(void);

/* Symbol: _ZN7android27AudioALSAPlaybackHandlerDsp20needAPAurisysProcessEv */
/* Demangled: android::AudioALSAPlaybackHandlerDsp::needAPAurisysProcess() */
int _ZN7android27AudioALSAPlaybackHandlerDsp20needAPAurisysProcessEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderHAP10readThreadEPv */
/* Demangled: android::AudioALSACaptureDataProviderHAP::readThread(void*) */
int _ZN7android31AudioALSACaptureDataProviderHAP10readThreadEPv(void);

/* Symbol: _ZN7android18AudioBTCVSDControl23BT_SCO_TX_SetCVSDOutBufEPh */
/* Demangled: android::AudioBTCVSDControl::BT_SCO_TX_SetCVSDOutBuf(unsigned char*) */
int _ZN7android18AudioBTCVSDControl23BT_SCO_TX_SetCVSDOutBufEPh(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderDsp16closeDspHwRefPcmEv */
/* Demangled: android::AudioALSACaptureDataProviderDsp::closeDspHwRefPcm() */
int _ZN7android31AudioALSACaptureDataProviderDsp16closeDspHwRefPcmEv(void);

/* Symbol: _ZN7android19SpeechDriverOpenDSP21networkChangeCallbackEPv */
/* Demangled: android::SpeechDriverOpenDSP::networkChangeCallback(void*) */
int _ZN7android19SpeechDriverOpenDSP21networkChangeCallbackEPv(void);

/* Symbol: _ZN7android18SpeechDriverNormal8TtyCtmOnEv */
/* Demangled: android::SpeechDriverNormal::TtyCtmOn() */
int _ZN7android18SpeechDriverNormal8TtyCtmOnEv(void);

/* Symbol: _ZN7android27SpeechEnhancementControllerC2Ev */
/* Demangled: android::SpeechEnhancementController::SpeechEnhancementController() */
int _ZN7android27SpeechEnhancementControllerC2Ev(void);

/* Symbol: _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_QUOTED_CHAR_EREINS_11__wrap_iterIPKcEEEET_S9_S9_ */
/* Demangled: std::__1::__wrap_iter<char const*> std::__1::basic_regex<char, std::__1::regex_traits<char> >::__parse_QUOTED_CHAR_ERE<std::__1::__wrap_iter<char const*> >(std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
int _ZNSt3__111basic_regexIcNS_12regex_traitsIcEEE23__parse_QUOTED_CHAR_EREINS_11__wrap_iterIPKcEEEET_S9_S9_(void);

/* Symbol: _ZN7android35AudioALSACaptureDataProviderVoiceDL4openEv */
/* Demangled: android::AudioALSACaptureDataProviderVoiceDL::open() */
int _ZN7android35AudioALSACaptureDataProviderVoiceDL4openEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::AudioALSAStreamIn*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPNS_17AudioALSAStreamInEEEE10do_compareEPKvS7_(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderVOWD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderVOW::~AudioALSACaptureDataProviderVOW() */
int _ZN7android31AudioALSACaptureDataProviderVOWD1Ev(void);

/* Symbol: _ZNK7android6VectorIP7__sFILEE7do_copyEPvPKvj */
/* Demangled: android::Vector<__sFILE*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP7__sFILEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android34AudioALSASpeechPhoneCallControllerC2Ev */
/* Demangled: android::AudioALSASpeechPhoneCallController::AudioALSASpeechPhoneCallController() */
int _ZN7android34AudioALSASpeechPhoneCallControllerC2Ev(void);

/* Symbol: _ZN7android29AudioALSAPlaybackHandlerBTSCO7routingEj */
/* Demangled: android::AudioALSAPlaybackHandlerBTSCO::routing(unsigned int) */
int _ZN7android29AudioALSAPlaybackHandlerBTSCO7routingEj(void);

/* Symbol: _ZN7android18AudioBTCVSDControl21btsco_process_TX_MSBCEPvPjS1_S2_S1_ */
/* Demangled: android::AudioBTCVSDControl::btsco_process_TX_MSBC(void*, unsigned int*, void*, unsigned int*, void*) */
int _ZN7android18AudioBTCVSDControl21btsco_process_TX_MSBCEPvPjS1_S2_S1_(void);

/* Symbol: _ZN7android38AudioALSACaptureDataProviderEchoRefExtD1Ev */
/* Demangled: android::AudioALSACaptureDataProviderEchoRefExt::~AudioALSACaptureDataProviderEchoRefExt() */
int _ZN7android38AudioALSACaptureDataProviderEchoRefExtD1Ev(void);

/* Symbol: _ZN7android17AudioVIBSPKVsgGen11getInstanceEv */
/* Demangled: android::AudioVIBSPKVsgGen::getInstance() */
int _ZN7android17AudioVIBSPKVsgGen11getInstanceEv(void);

/* Symbol: _ZN7android21DefaultRecEnhanceParaE */
/* Demangled: android::DefaultRecEnhancePara */
extern void* _ZN7android21DefaultRecEnhanceParaE;

/* Symbol: _ZN7android18SpeechDriverNormal11joinThreadsEv */
/* Demangled: android::SpeechDriverNormal::joinThreads() */
int _ZN7android18SpeechDriverNormal11joinThreadsEv(void);

/* Symbol: _ZN7android17SpeechDriverDummy8recordOnEv */
/* Demangled: android::SpeechDriverDummy::recordOn() */
int _ZN7android17SpeechDriverDummy8recordOnEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderUsb32mAudioALSACaptureDataProviderUsbE */
/* Demangled: android::AudioALSACaptureDataProviderUsb::mAudioALSACaptureDataProviderUsb */
extern void* _ZN7android31AudioALSACaptureDataProviderUsb32mAudioALSACaptureDataProviderUsbE;

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager24getSingleMicLoopbackPathEjbNS_10loopback_tE */
/* Demangled: android::AudioALSAHardwareResourceManager::getSingleMicLoopbackPath(unsigned int, bool, android::loopback_t) */
int _ZN7android32AudioALSAHardwareResourceManager24getSingleMicLoopbackPathEjbNS_10loopback_tE(void);

/* Symbol: _ZN7android22AudioALSAStreamManager18getInputBufferSizeEj14audio_format_tj */
/* Demangled: android::AudioALSAStreamManager::getInputBufferSize(unsigned int, audio_format_t, unsigned int) */
int _ZN7android22AudioALSAStreamManager18getInputBufferSizeEj14audio_format_tj(void);

/* Symbol: _ZN7android18AudioVIBSPKControl17VibSpkRampControlEh */
/* Demangled: android::AudioVIBSPKControl::VibSpkRampControl(unsigned char) */
int _ZN7android18AudioVIBSPKControl17VibSpkRampControlEh(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSACaptureDataProviderBase*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEE10do_compareEPKvS7_(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerANC4openEv */
/* Demangled: android::AudioALSACaptureHandlerANC::open() */
int _ZN7android26AudioALSACaptureHandlerANC4openEv(void);

/* Symbol: _ZN7android25AudioALSACaptureHandlerBT5closeEv */
/* Demangled: android::AudioALSACaptureHandlerBT::close() */
int _ZN7android25AudioALSACaptureHandlerBT5closeEv(void);

/* Symbol: _ZN7android31AudioALSACaptureDataProviderUsb5closeEv */
/* Demangled: android::AudioALSACaptureDataProviderUsb::close() */
int _ZN7android31AudioALSACaptureDataProviderUsb5closeEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, android::AudioALSACaptureDataProviderBase*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPNS_32AudioALSACaptureDataProviderBaseEEEE10do_destroyEPvj(void);

/* Symbol: _ZN7android22AudioMTKGainController13ApplySideToneEj */
/* Demangled: android::AudioMTKGainController::ApplySideTone(unsigned int) */
int _ZN7android22AudioMTKGainController13ApplySideToneEj(void);

/* Symbol: _ZNKSt3__112regex_traitsIcE9transformINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::regex_traits<char>::transform<std::__1::__wrap_iter<char*> >(std::__1::__wrap_iter<char*>, std::__1::__wrap_iter<char*>) const */
int _ZNKSt3__112regex_traitsIcE9transformINS_11__wrap_iterIPcEEEENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEET_SC_(void);

/* Symbol: _ZN7android28AudioALSACaptureHandlerVoice4readEPvi */
/* Demangled: android::AudioALSACaptureHandlerVoice::read(void*, int) */
int _ZN7android28AudioALSACaptureHandlerVoice4readEPvi(void);

/* Symbol: _ZN7android2spINS_18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadEED2Ev */
/* Demangled: android::sp<android::AudioBTCVSDControl::AudioBTCVSDLoopbackRxThread>::~sp() */
int _ZN7android2spINS_18AudioBTCVSDControl27AudioBTCVSDLoopbackRxThreadEED2Ev(void);

/* Symbol: _ZN7android18AudioALSAStreamOut13setParametersERKNS_7String8E */
/* Demangled: android::AudioALSAStreamOut::setParameters(android::String8 const&) */
int _ZN7android18AudioALSAStreamOut13setParametersERKNS_7String8E(void);

/* Symbol: _ZN7android22AudioALSAStreamManager22DisableSphStrmByDeviceEj */
/* Demangled: android::AudioALSAStreamManager::DisableSphStrmByDevice(unsigned int) */
int _ZN7android22AudioALSAStreamManager22DisableSphStrmByDeviceEj(void);

/* Symbol: _ZN7android26AudioALSACaptureHandlerVOW4openEv */
/* Demangled: android::AudioALSACaptureHandlerVOW::open() */
int _ZN7android26AudioALSACaptureHandlerVOW4openEv(void);

/* Symbol: _ZN7android17AudioALSAHardware13setParametersERKNS_7String8E */
/* Demangled: android::AudioALSAHardware::setParameters(android::String8 const&) */
int _ZN7android17AudioALSAHardware13setParametersERKNS_7String8E(void);

/* Symbol: _ZN7android32AudioALSAHardwareResourceManager20EnableSideToneFilterEb */
/* Demangled: android::AudioALSAHardwareResourceManager::EnableSideToneFilter(bool) */
int _ZN7android32AudioALSAHardwareResourceManager20EnableSideToneFilterEb(void);

/* Symbol: _ZN7android32AudioALSACaptureDataProviderBase20HasLowLatencyCaptureEv */
/* Demangled: android::AudioALSACaptureDataProviderBase::HasLowLatencyCapture() */
int _ZN7android32AudioALSACaptureDataProviderBase20HasLowLatencyCaptureEv(void);

/* Symbol: _ZN7android19AudioALSAHandlerKtv11stopKtvTaskEv */
/* Demangled: android::AudioALSAHandlerKtv::stopKtvTask() */
int _ZN7android19AudioALSAHandlerKtv11stopKtvTaskEv(void);

__END_DECLS

#endif /* BEGONIA_RE_AUDIO_PRIMARY_MT6785_H */
